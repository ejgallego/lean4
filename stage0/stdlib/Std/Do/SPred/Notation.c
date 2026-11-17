// Lean compiler output
// Module: Std.Do.SPred.Notation
// Imports: public meta import Std.Do.SPred.Notation.Basic public import Std.Do.SPred.Notation.Basic
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_expandExplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__0 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__1 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "term⌜_⌝"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__2 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__2_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value_aux_1),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(190, 155, 137, 127, 35, 248, 173, 10)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__3 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__4 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__4_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__5 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⌜"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__6 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__6_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__6_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__7 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__7_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__8 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__8_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__9 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__9_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__10 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__10_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__7_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__10_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__11 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__11_value;
static const lean_string_object l_Std_Do_term_u231c___u231d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⌝"};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__12 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__12_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__12_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__13 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__13_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__11_value),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__13_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__14 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__14_value;
static const lean_ctor_object l_Std_Do_term_u231c___u231d___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__3_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__14_value)}};
static const lean_object* l_Std_Do_term_u231c___u231d___closed__15 = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__15_value;
LEAN_EXPORT const lean_object* l_Std_Do_term_u231c___u231d = (const lean_object*)&l_Std_Do_term_u231c___u231d___closed__15_value;
static const lean_string_object l_Std_Do_term___u22a2_u209b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "term_⊢ₛ_"};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__0 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 64, 157, 81, 47, 23, 235, 108)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__1 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u22a2_u209b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 4, .m_data = " ⊢ₛ "};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__2 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__3 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__9_value),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__4 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__5 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__5_value;
static const lean_ctor_object l_Std_Do_term___u22a2_u209b___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__5_value)}};
static const lean_object* l_Std_Do_term___u22a2_u209b___00__closed__6 = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u22a2_u209b__ = (const lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__6_value;
static const lean_string_object l_Std_Do_term_u22a2_u209b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "term⊢ₛ_"};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__0 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 33, 26, 243, 26, 184, 240, 184)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__1 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value;
static const lean_string_object l_Std_Do_term_u22a2_u209b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 3, .m_data = "⊢ₛ "};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__2 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__2_value)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__3 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__4 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term_u22a2_u209b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term_u22a2_u209b___00__closed__5 = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term_u22a2_u209b__ = (const lean_object*)&l_Std_Do_term_u22a2_u209b___00__closed__5_value;
static const lean_string_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 9, .m_data = "term_⊣⊢ₛ_"};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value_aux_1),((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 122, 29, 216, 46, 173, 32, 216)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value;
static const lean_string_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 5, .m_data = " ⊣⊢ₛ "};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__2_value)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Do_term_u231c___u231d___closed__5_value),((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__3_value),((lean_object*)&l_Std_Do_term___u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4_value;
static const lean_ctor_object l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1_value),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__4_value)}};
static const lean_object* l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5 = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5_value;
LEAN_EXPORT const lean_object* l_Std_Do_term___u22a3_u22a2_u209b__ = (const lean_object*)&l_Std_Do_term___u22a3_u22a2_u209b___00__closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "SPred.pure"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(16, 115, 190, 26, 167, 150, 203, 221)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__10_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__11_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__13_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SPred.entails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(157, 27, 24, 221, 87, 233, 202, 140)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__4_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__5_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__7_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "termSpred(_)"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(76, 240, 91, 148, 237, 191, 255, 193)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spred("};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_∧_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 224, 85, 99, 168, 124, 84, 223)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_∨_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(44, 23, 28, 64, 30, 253, 248, 167)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 6, .m_data = "term¬_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(222, 122, 71, 36, 131, 84, 176, 236)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arrow"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(182, 146, 143, 73, 122, 115, 5, 207)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_↔_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(220, 124, 41, 198, 228, 162, 237, 244)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 8, .m_data = "term∃_,_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(224, 105, 219, 112, 166, 139, 167, 161)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "SPred.forall"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(189, 183, 85, 87, 105, 38, 9, 95)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(118, 145, 1, 190, 19, 10, 144, 159)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__28_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__31_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__33_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Macro"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(168, 205, 218, 0, 241, 122, 66, 251)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__36_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__38_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__40_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__41_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__42_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__29_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__43_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__47_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(195, 142, 115, 15, 55, 103, 31, 115)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∀"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__57_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__59_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__61_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "explicitBinders"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__64_value),LEAN_SCALAR_PTR_LITERAL(167, 149, 127, 13, 202, 239, 226, 94)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "exists"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__66_value),LEAN_SCALAR_PTR_LITERAL(119, 199, 194, 26, 176, 147, 16, 83)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.iff"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "iff"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70_value),LEAN_SCALAR_PTR_LITERAL(216, 213, 73, 68, 36, 234, 63, 232)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__70_value),LEAN_SCALAR_PTR_LITERAL(27, 79, 214, 161, 232, 72, 176, 24)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__72_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__73_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.imp"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "imp"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(229, 78, 255, 122, 125, 47, 236, 91)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(254, 180, 127, 119, 35, 232, 80, 131)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__79_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__80_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.not"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "not"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84_value),LEAN_SCALAR_PTR_LITERAL(75, 43, 215, 201, 164, 208, 115, 204)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__84_value),LEAN_SCALAR_PTR_LITERAL(104, 148, 110, 90, 206, 151, 192, 189)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__86_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__88_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__87_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__89_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SPred.or"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93_value),LEAN_SCALAR_PTR_LITERAL(1, 253, 51, 240, 68, 70, 110, 158)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__93_value),LEAN_SCALAR_PTR_LITERAL(114, 97, 84, 180, 109, 220, 63, 60)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__95_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__96_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97_value;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SPred.and"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100_value),LEAN_SCALAR_PTR_LITERAL(27, 27, 184, 174, 232, 138, 92, 103)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__100_value),LEAN_SCALAR_PTR_LITERAL(216, 97, 27, 109, 96, 85, 230, 202)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__102_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__103_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__3_value),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__5_value)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "SPred.bientails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0_value;
static lean_once_cell_t l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1;
static const lean_string_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bientails"};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(53, 193, 89, 51, 91, 176, 2, 152)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(218, 255, 192, 203, 199, 147, 226, 14)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value_aux_2),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(201, 51, 221, 5, 242, 131, 169, 118)}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5_value;
static const lean_ctor_object l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6 = (const lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_0),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_fakeMod"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(168, 44, 241, 255, 153, 255, 67, 53)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5_value;
static lean_once_cell_t l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Notation"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_0),((lean_object*)&l_Std_Do_term_u231c___u231d___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_1),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value_aux_2),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(66, 246, 126, 200, 193, 235, 124, 8)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__8_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__37_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__10_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__34_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__11_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__32_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__12_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__9_value),((lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__13_value)}};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16_value;
static const lean_string_object l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17 = (const lean_object*)&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandEntails___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "⊢ₛ"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandEntails___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandEntails___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandBientails___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 3, .m_data = "⊣⊢ₛ"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandBientails___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandBientails___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∧"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandAnd___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandAnd___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandOr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∨"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandOr___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandOr___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandNot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "¬"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandNot___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandNot___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandImp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandImp___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandImp___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∃"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandExists___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__0_value;
static const lean_string_object l_Std_Do_SPred_Notation_unexpandExists___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unbracketedExplicitBinders"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandExists___closed__1 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__1_value;
static const lean_ctor_object l_Std_Do_SPred_Notation_unexpandExists___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Do_SPred_Notation_unexpandExists___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__2_value_aux_0),((lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__1_value),LEAN_SCALAR_PTR_LITERAL(187, 220, 119, 82, 242, 112, 119, 200)}};
static const lean_object* l_Std_Do_SPred_Notation_unexpandExists___closed__2 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandExists___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Do_SPred_Notation_unexpandIff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "↔"};
static const lean_object* l_Std_Do_SPred_Notation_unexpandIff___closed__0 = (const lean_object*)&l_Std_Do_SPred_Notation_unexpandIff___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__5));
v___x_102_ = l_String_toRawSubstring_x27(v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1(lean_object* v_x_127_, lean_object* v_a_128_, lean_object* v_a_129_){
_start:
{
lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_130_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
lean_inc(v_x_127_);
v___x_131_ = l_Lean_Syntax_isOfKind(v_x_127_, v___x_130_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_133_; 
lean_dec(v_x_127_);
v___x_132_ = lean_box(1);
v___x_133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v_a_129_);
return v___x_133_;
}
else
{
lean_object* v_quotContext_134_; lean_object* v_currMacroScope_135_; lean_object* v_ref_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_quotContext_134_ = lean_ctor_get(v_a_128_, 1);
v_currMacroScope_135_ = lean_ctor_get(v_a_128_, 2);
v_ref_136_ = lean_ctor_get(v_a_128_, 5);
v___x_137_ = lean_unsigned_to_nat(1u);
v___x_138_ = l_Lean_Syntax_getArg(v_x_127_, v___x_137_);
lean_dec(v_x_127_);
v___x_139_ = 0;
v___x_140_ = l_Lean_SourceInfo_fromRef(v_ref_136_, v___x_139_);
v___x_141_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_142_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__6);
v___x_143_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__9));
lean_inc(v_currMacroScope_135_);
lean_inc(v_quotContext_134_);
v___x_144_ = l_Lean_addMacroScope(v_quotContext_134_, v___x_143_, v_currMacroScope_135_);
v___x_145_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__14));
lean_inc_n(v___x_140_, 2);
v___x_146_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_146_, 0, v___x_140_);
lean_ctor_set(v___x_146_, 1, v___x_142_);
lean_ctor_set(v___x_146_, 2, v___x_144_);
lean_ctor_set(v___x_146_, 3, v___x_145_);
v___x_147_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_148_ = l_Lean_Syntax_node1(v___x_140_, v___x_147_, v___x_138_);
v___x_149_ = l_Lean_Syntax_node2(v___x_140_, v___x_141_, v___x_146_, v___x_148_);
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v_a_129_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___boxed(lean_object* v_x_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1(v_x_151_, v_a_152_, v_a_153_);
lean_dec_ref(v_a_152_);
return v_res_154_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__0));
v___x_157_ = l_String_toRawSubstring_x27(v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1(lean_object* v_x_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = ((lean_object*)(l_Std_Do_term___u22a2_u209b___00__closed__1));
lean_inc(v_x_185_);
v___x_189_ = l_Lean_Syntax_isOfKind(v_x_185_, v___x_188_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; lean_object* v___x_191_; 
lean_dec(v_x_185_);
v___x_190_ = lean_box(1);
v___x_191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v_a_187_);
return v___x_191_;
}
else
{
lean_object* v_quotContext_192_; lean_object* v_currMacroScope_193_; lean_object* v_ref_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_quotContext_192_ = lean_ctor_get(v_a_186_, 1);
v_currMacroScope_193_ = lean_ctor_get(v_a_186_, 2);
v_ref_194_ = lean_ctor_get(v_a_186_, 5);
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = l_Lean_Syntax_getArg(v_x_185_, v___x_195_);
v___x_197_ = lean_unsigned_to_nat(2u);
v___x_198_ = l_Lean_Syntax_getArg(v_x_185_, v___x_197_);
lean_dec(v_x_185_);
v___x_199_ = 0;
v___x_200_ = l_Lean_SourceInfo_fromRef(v_ref_194_, v___x_199_);
v___x_201_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_202_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1);
v___x_203_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3));
lean_inc(v_currMacroScope_193_);
lean_inc(v_quotContext_192_);
v___x_204_ = l_Lean_addMacroScope(v_quotContext_192_, v___x_203_, v_currMacroScope_193_);
v___x_205_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8));
lean_inc_n(v___x_200_, 6);
v___x_206_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_206_, 0, v___x_200_);
lean_ctor_set(v___x_206_, 1, v___x_202_);
lean_ctor_set(v___x_206_, 2, v___x_204_);
lean_ctor_set(v___x_206_, 3, v___x_205_);
v___x_207_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_208_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_209_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_210_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_200_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_200_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
lean_inc_ref(v___x_212_);
lean_inc_ref(v___x_210_);
v___x_213_ = l_Lean_Syntax_node3(v___x_200_, v___x_208_, v___x_210_, v___x_196_, v___x_212_);
v___x_214_ = l_Lean_Syntax_node3(v___x_200_, v___x_208_, v___x_210_, v___x_198_, v___x_212_);
v___x_215_ = l_Lean_Syntax_node2(v___x_200_, v___x_207_, v___x_213_, v___x_214_);
v___x_216_ = l_Lean_Syntax_node2(v___x_200_, v___x_201_, v___x_206_, v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
lean_ctor_set(v___x_217_, 1, v_a_187_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___boxed(lean_object* v_x_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1(v_x_218_, v_a_219_, v_a_220_);
lean_dec_ref(v_a_219_);
return v_res_221_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__12));
v___x_245_ = l_String_toRawSubstring_x27(v___x_244_);
return v___x_245_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__26));
v___x_279_ = l_String_toRawSubstring_x27(v___x_278_);
return v___x_279_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49(void){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Array_mkArray0___redArg();
return v___x_333_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__68));
v___x_377_ = l_String_toRawSubstring_x27(v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__75));
v___x_395_ = l_String_toRawSubstring_x27(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__82));
v___x_413_ = l_String_toRawSubstring_x27(v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__91));
v___x_436_ = l_String_toRawSubstring_x27(v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__98));
v___x_454_ = l_String_toRawSubstring_x27(v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1(lean_object* v_x_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
lean_object* v___y_474_; lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
lean_inc(v_x_470_);
v___x_478_ = l_Lean_Syntax_isOfKind(v_x_470_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec(v_x_470_);
v___x_479_ = lean_box(1);
v___x_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v_a_472_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = l_Lean_Syntax_getArg(v_x_470_, v___x_482_);
lean_dec(v_x_470_);
v___x_484_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1));
lean_inc(v___x_483_);
v___x_485_ = l_Lean_Syntax_isOfKind(v___x_483_, v___x_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_486_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3));
lean_inc(v___x_483_);
v___x_487_ = l_Lean_Syntax_isOfKind(v___x_483_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_488_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5));
lean_inc(v___x_483_);
v___x_489_ = l_Lean_Syntax_isOfKind(v___x_483_, v___x_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7));
lean_inc(v___x_483_);
v___x_491_ = l_Lean_Syntax_isOfKind(v___x_483_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9));
lean_inc(v___x_483_);
v___x_493_ = l_Lean_Syntax_isOfKind(v___x_483_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v_x_497_; lean_object* v_xs_498_; lean_object* v_P_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v_x_554_; lean_object* v_ty_555_; lean_object* v_xs_556_; lean_object* v_P_557_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v_x_617_; lean_object* v_xs_618_; lean_object* v_ty_619_; lean_object* v_ys_620_; lean_object* v_P_621_; lean_object* v___y_622_; lean_object* v___y_623_; 
v___x_494_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11));
lean_inc(v___x_483_);
v___x_495_ = l_Lean_Syntax_isOfKind(v___x_483_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51));
lean_inc(v___x_483_);
v___x_687_ = l_Lean_Syntax_isOfKind(v___x_483_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec(v___x_483_);
v___x_688_ = lean_box(1);
v___x_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v_a_472_);
return v___x_689_;
}
else
{
lean_object* v___x_690_; lean_object* v_____discr_692_; lean_object* v_____discr_693_; lean_object* v___y_694_; lean_object* v___y_695_; uint8_t v___x_750_; 
v___x_690_ = l_Lean_Syntax_getArg(v___x_483_, v___x_482_);
lean_inc(v___x_690_);
v___x_750_ = l_Lean_Syntax_matchesNull(v___x_690_, v___x_482_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = l_Lean_Syntax_getNumArgs(v___x_690_);
v___x_752_ = lean_nat_dec_le(v___x_482_, v___x_751_);
if (v___x_752_ == 0)
{
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v_x_753_; lean_object* v___x_754_; uint8_t v___x_755_; 
v_x_753_ = l_Lean_Syntax_getArg(v___x_690_, v___x_481_);
v___x_754_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v_x_753_);
v___x_755_ = l_Lean_Syntax_isOfKind(v_x_753_, v___x_754_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_756_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58));
lean_inc(v_x_753_);
v___x_757_ = l_Lean_Syntax_isOfKind(v_x_753_, v___x_756_);
if (v___x_757_ == 0)
{
lean_dec(v_x_753_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_758_ = l_Lean_Syntax_getArg(v_x_753_, v___x_482_);
lean_inc(v___x_758_);
v___x_759_ = l_Lean_Syntax_matchesNull(v___x_758_, v___x_482_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = l_Lean_Syntax_getNumArgs(v___x_758_);
v___x_761_ = lean_nat_dec_le(v___x_482_, v___x_760_);
if (v___x_761_ == 0)
{
lean_dec(v___x_760_);
lean_dec(v___x_758_);
lean_dec(v_x_753_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v_x_762_; uint8_t v___x_763_; 
v_x_762_ = l_Lean_Syntax_getArg(v___x_758_, v___x_481_);
lean_inc(v_x_762_);
v___x_763_ = l_Lean_Syntax_isOfKind(v_x_762_, v___x_754_);
if (v___x_763_ == 0)
{
lean_dec(v_x_762_);
lean_dec(v___x_760_);
lean_dec(v___x_758_);
lean_dec(v_x_753_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_764_; lean_object* v___x_765_; uint8_t v___x_766_; 
v___x_764_ = lean_unsigned_to_nat(2u);
v___x_765_ = l_Lean_Syntax_getArg(v_x_753_, v___x_764_);
lean_inc(v___x_765_);
v___x_766_ = l_Lean_Syntax_matchesNull(v___x_765_, v___x_764_);
if (v___x_766_ == 0)
{
lean_dec(v___x_765_);
lean_dec(v_x_762_);
lean_dec(v___x_760_);
lean_dec(v___x_758_);
lean_dec(v_x_753_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_767_ = lean_unsigned_to_nat(3u);
v___x_768_ = l_Lean_Syntax_getArg(v_x_753_, v___x_767_);
lean_dec(v_x_753_);
v___x_769_ = l_Lean_Syntax_matchesNull(v___x_768_, v___x_481_);
if (v___x_769_ == 0)
{
lean_dec(v___x_765_);
lean_dec(v_x_762_);
lean_dec(v___x_760_);
lean_dec(v___x_758_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = l_Lean_Syntax_getArg(v___x_483_, v___x_764_);
v___x_771_ = l_Lean_Syntax_matchesNull(v___x_770_, v___x_481_);
if (v___x_771_ == 0)
{
lean_dec(v___x_765_);
lean_dec(v_x_762_);
lean_dec(v___x_760_);
lean_dec(v___x_758_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v_ty_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_P_782_; lean_object* v_ys_783_; lean_object* v_xs_784_; 
v___x_772_ = l_Lean_Syntax_getArgs(v___x_758_);
lean_dec(v___x_758_);
v___x_773_ = l_Array_extract___redArg(v___x_772_, v___x_482_, v___x_760_);
lean_dec_ref(v___x_772_);
v_ty_774_ = l_Lean_Syntax_getArg(v___x_765_, v___x_482_);
lean_dec(v___x_765_);
v___x_775_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_776_ = lean_box(2);
v___x_777_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v___x_775_);
lean_ctor_set(v___x_777_, 2, v___x_773_);
v___x_778_ = lean_unsigned_to_nat(4u);
v___x_779_ = l_Lean_Syntax_getArgs(v___x_690_);
lean_dec(v___x_690_);
v___x_780_ = l_Array_extract___redArg(v___x_779_, v___x_482_, v___x_751_);
lean_dec_ref(v___x_779_);
v___x_781_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_781_, 0, v___x_776_);
lean_ctor_set(v___x_781_, 1, v___x_775_);
lean_ctor_set(v___x_781_, 2, v___x_780_);
v_P_782_ = l_Lean_Syntax_getArg(v___x_483_, v___x_778_);
lean_dec(v___x_483_);
v_ys_783_ = l_Lean_Syntax_getArgs(v___x_781_);
lean_dec_ref_known(v___x_781_, 3);
v_xs_784_ = l_Lean_Syntax_getArgs(v___x_777_);
lean_dec_ref_known(v___x_777_, 3);
v_x_617_ = v_x_762_;
v_xs_618_ = v_xs_784_;
v_ty_619_ = v_ty_774_;
v_ys_620_ = v_ys_783_;
v_P_621_ = v_P_782_;
v___y_622_ = v_a_471_;
v___y_623_ = v_a_472_;
goto v___jp_616_;
}
}
}
}
}
}
else
{
lean_object* v_x_785_; uint8_t v___x_786_; 
v_x_785_ = l_Lean_Syntax_getArg(v___x_758_, v___x_481_);
lean_dec(v___x_758_);
lean_inc(v_x_785_);
v___x_786_ = l_Lean_Syntax_isOfKind(v_x_785_, v___x_754_);
if (v___x_786_ == 0)
{
lean_dec(v_x_785_);
lean_dec(v_x_753_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_787_ = lean_unsigned_to_nat(2u);
v___x_788_ = l_Lean_Syntax_getArg(v_x_753_, v___x_787_);
lean_inc(v___x_788_);
v___x_789_ = l_Lean_Syntax_matchesNull(v___x_788_, v___x_787_);
if (v___x_789_ == 0)
{
lean_dec(v___x_788_);
lean_dec(v_x_785_);
lean_dec(v_x_753_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_790_ = lean_unsigned_to_nat(3u);
v___x_791_ = l_Lean_Syntax_getArg(v_x_753_, v___x_790_);
lean_dec(v_x_753_);
v___x_792_ = l_Lean_Syntax_matchesNull(v___x_791_, v___x_481_);
if (v___x_792_ == 0)
{
lean_dec(v___x_788_);
lean_dec(v_x_785_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = l_Lean_Syntax_getArg(v___x_483_, v___x_787_);
v___x_794_ = l_Lean_Syntax_matchesNull(v___x_793_, v___x_481_);
if (v___x_794_ == 0)
{
lean_dec(v___x_788_);
lean_dec(v_x_785_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v_ty_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v_P_802_; lean_object* v_xs_803_; 
v_ty_795_ = l_Lean_Syntax_getArg(v___x_788_, v___x_482_);
lean_dec(v___x_788_);
v___x_796_ = lean_unsigned_to_nat(4u);
v___x_797_ = l_Lean_Syntax_getArgs(v___x_690_);
lean_dec(v___x_690_);
v___x_798_ = l_Array_extract___redArg(v___x_797_, v___x_482_, v___x_751_);
lean_dec_ref(v___x_797_);
v___x_799_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_800_ = lean_box(2);
v___x_801_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v___x_799_);
lean_ctor_set(v___x_801_, 2, v___x_798_);
v_P_802_ = l_Lean_Syntax_getArg(v___x_483_, v___x_796_);
lean_dec(v___x_483_);
v_xs_803_ = l_Lean_Syntax_getArgs(v___x_801_);
lean_dec_ref_known(v___x_801_, 3);
v_x_554_ = v_x_785_;
v_ty_555_ = v_ty_795_;
v_xs_556_ = v_xs_803_;
v_P_557_ = v_P_802_;
v___y_558_ = v_a_471_;
v___y_559_ = v_a_472_;
goto v___jp_553_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_804_ = lean_unsigned_to_nat(2u);
v___x_805_ = l_Lean_Syntax_getArg(v___x_483_, v___x_804_);
v___x_806_ = l_Lean_Syntax_matchesNull(v___x_805_, v___x_481_);
if (v___x_806_ == 0)
{
lean_dec(v_x_753_);
lean_dec(v___x_751_);
lean_dec(v___x_690_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v_P_813_; lean_object* v_xs_814_; 
v___x_807_ = l_Lean_Syntax_getArgs(v___x_690_);
lean_dec(v___x_690_);
v___x_808_ = l_Array_extract___redArg(v___x_807_, v___x_482_, v___x_751_);
lean_dec_ref(v___x_807_);
v___x_809_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_810_ = lean_box(2);
v___x_811_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
lean_ctor_set(v___x_811_, 1, v___x_809_);
lean_ctor_set(v___x_811_, 2, v___x_808_);
v___x_812_ = lean_unsigned_to_nat(4u);
v_P_813_ = l_Lean_Syntax_getArg(v___x_483_, v___x_812_);
lean_dec(v___x_483_);
v_xs_814_ = l_Lean_Syntax_getArgs(v___x_811_);
lean_dec_ref_known(v___x_811_, 3);
v_x_497_ = v_x_753_;
v_xs_498_ = v_xs_814_;
v_P_499_ = v_P_813_;
v___y_500_ = v_a_471_;
v___y_501_ = v_a_472_;
goto v___jp_496_;
}
}
}
}
else
{
lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v_x_819_; lean_object* v_ty_820_; lean_object* v_P_821_; lean_object* v___y_822_; lean_object* v___y_823_; 
v___x_815_ = l_Lean_Syntax_getArg(v___x_690_, v___x_481_);
v___x_816_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__62));
lean_inc(v___x_815_);
v___x_817_ = l_Lean_Syntax_isOfKind(v___x_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_870_; uint8_t v___x_871_; 
v___x_870_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58));
lean_inc(v___x_815_);
v___x_871_ = l_Lean_Syntax_isOfKind(v___x_815_, v___x_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; uint8_t v___x_873_; 
lean_dec(v___x_690_);
v___x_872_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v___x_815_);
v___x_873_ = l_Lean_Syntax_isOfKind(v___x_815_, v___x_872_);
if (v___x_873_ == 0)
{
lean_dec(v___x_815_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v___x_874_ = lean_unsigned_to_nat(2u);
v___x_875_ = l_Lean_Syntax_getArg(v___x_483_, v___x_874_);
v___x_876_ = l_Lean_Syntax_matchesNull(v___x_875_, v___x_481_);
if (v___x_876_ == 0)
{
lean_dec(v___x_815_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v_quotContext_877_; lean_object* v_currMacroScope_878_; lean_object* v_ref_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_quotContext_877_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_878_ = lean_ctor_get(v_a_471_, 2);
v_ref_879_ = lean_ctor_get(v_a_471_, 5);
v___x_880_ = lean_unsigned_to_nat(4u);
v___x_881_ = l_Lean_Syntax_getArg(v___x_483_, v___x_880_);
lean_dec(v___x_483_);
v___x_882_ = l_Lean_SourceInfo_fromRef(v_ref_879_, v___x_871_);
v___x_883_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_884_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_885_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_878_, 2);
lean_inc_n(v_quotContext_877_, 2);
v___x_886_ = l_Lean_addMacroScope(v_quotContext_877_, v___x_885_, v_currMacroScope_878_);
v___x_887_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_882_, 16);
v___x_888_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_888_, 0, v___x_882_);
lean_ctor_set(v___x_888_, 1, v___x_884_);
lean_ctor_set(v___x_888_, 2, v___x_886_);
lean_ctor_set(v___x_888_, 3, v___x_887_);
v___x_889_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_890_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_891_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_892_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_893_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_893_, 0, v___x_882_);
lean_ctor_set(v___x_893_, 1, v___x_892_);
v___x_894_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_895_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_896_ = lean_box(0);
v___x_897_ = l_Lean_addMacroScope(v_quotContext_877_, v___x_896_, v_currMacroScope_878_);
v___x_898_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_899_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_899_, 0, v___x_882_);
lean_ctor_set(v___x_899_, 1, v___x_895_);
lean_ctor_set(v___x_899_, 2, v___x_897_);
lean_ctor_set(v___x_899_, 3, v___x_898_);
v___x_900_ = l_Lean_Syntax_node1(v___x_882_, v___x_894_, v___x_899_);
v___x_901_ = l_Lean_Syntax_node2(v___x_882_, v___x_891_, v___x_893_, v___x_900_);
v___x_902_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_903_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_904_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_882_);
lean_ctor_set(v___x_904_, 1, v___x_902_);
v___x_905_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_906_ = l_Lean_Syntax_node1(v___x_882_, v___x_889_, v___x_815_);
v___x_907_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_908_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_908_, 0, v___x_882_);
lean_ctor_set(v___x_908_, 1, v___x_889_);
lean_ctor_set(v___x_908_, 2, v___x_907_);
v___x_909_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_882_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_912_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_882_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_882_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
lean_inc_ref(v___x_914_);
v___x_915_ = l_Lean_Syntax_node3(v___x_882_, v___x_477_, v___x_912_, v___x_881_, v___x_914_);
v___x_916_ = l_Lean_Syntax_node4(v___x_882_, v___x_905_, v___x_906_, v___x_908_, v___x_910_, v___x_915_);
v___x_917_ = l_Lean_Syntax_node2(v___x_882_, v___x_903_, v___x_904_, v___x_916_);
v___x_918_ = l_Lean_Syntax_node3(v___x_882_, v___x_890_, v___x_901_, v___x_917_, v___x_914_);
v___x_919_ = l_Lean_Syntax_node1(v___x_882_, v___x_889_, v___x_918_);
v___x_920_ = l_Lean_Syntax_node2(v___x_882_, v___x_883_, v___x_888_, v___x_919_);
v___x_921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
lean_ctor_set(v___x_921_, 1, v_a_472_);
return v___x_921_;
}
}
}
else
{
lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_922_ = l_Lean_Syntax_getArg(v___x_815_, v___x_482_);
v___x_923_ = l_Lean_Syntax_getNumArgs(v___x_922_);
v___x_924_ = lean_nat_dec_le(v___x_482_, v___x_923_);
if (v___x_924_ == 0)
{
uint8_t v___x_925_; 
lean_dec(v___x_923_);
lean_inc(v___x_922_);
v___x_925_ = l_Lean_Syntax_matchesNull(v___x_922_, v___x_482_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec(v___x_922_);
lean_dec(v___x_815_);
v___x_926_ = lean_unsigned_to_nat(2u);
v___x_927_ = lean_unsigned_to_nat(4u);
v___x_928_ = l_Lean_Syntax_getArg(v___x_483_, v___x_926_);
v___x_929_ = l_Lean_Syntax_getArg(v___x_483_, v___x_927_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_928_;
v_____discr_693_ = v___x_929_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v_x_930_; lean_object* v___x_931_; uint8_t v___x_932_; 
v_x_930_ = l_Lean_Syntax_getArg(v___x_922_, v___x_481_);
lean_dec(v___x_922_);
v___x_931_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v_x_930_);
v___x_932_ = l_Lean_Syntax_isOfKind(v_x_930_, v___x_931_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
lean_dec(v_x_930_);
lean_dec(v___x_815_);
v___x_933_ = lean_unsigned_to_nat(2u);
v___x_934_ = lean_unsigned_to_nat(4u);
v___x_935_ = l_Lean_Syntax_getArg(v___x_483_, v___x_933_);
v___x_936_ = l_Lean_Syntax_getArg(v___x_483_, v___x_934_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_935_;
v_____discr_693_ = v___x_936_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_937_ = lean_unsigned_to_nat(2u);
v___x_938_ = l_Lean_Syntax_getArg(v___x_815_, v___x_937_);
lean_inc(v___x_938_);
v___x_939_ = l_Lean_Syntax_matchesNull(v___x_938_, v___x_937_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec(v___x_938_);
lean_dec(v_x_930_);
lean_dec(v___x_815_);
v___x_940_ = lean_unsigned_to_nat(4u);
v___x_941_ = l_Lean_Syntax_getArg(v___x_483_, v___x_937_);
v___x_942_ = l_Lean_Syntax_getArg(v___x_483_, v___x_940_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_941_;
v_____discr_693_ = v___x_942_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v___x_943_; lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_943_ = lean_unsigned_to_nat(3u);
v___x_944_ = l_Lean_Syntax_getArg(v___x_815_, v___x_943_);
lean_dec(v___x_815_);
v___x_945_ = l_Lean_Syntax_matchesNull(v___x_944_, v___x_481_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
lean_dec(v___x_938_);
lean_dec(v_x_930_);
v___x_946_ = lean_unsigned_to_nat(4u);
v___x_947_ = l_Lean_Syntax_getArg(v___x_483_, v___x_937_);
v___x_948_ = l_Lean_Syntax_getArg(v___x_483_, v___x_946_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_947_;
v_____discr_693_ = v___x_948_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_949_ = lean_unsigned_to_nat(4u);
v___x_950_ = l_Lean_Syntax_getArg(v___x_483_, v___x_937_);
lean_inc(v___x_950_);
v___x_951_ = l_Lean_Syntax_matchesNull(v___x_950_, v___x_481_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; 
lean_dec(v___x_938_);
lean_dec(v_x_930_);
v___x_952_ = l_Lean_Syntax_getArg(v___x_483_, v___x_949_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_950_;
v_____discr_693_ = v___x_952_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v_ty_953_; lean_object* v_P_954_; 
lean_dec(v___x_950_);
lean_dec(v___x_690_);
v_ty_953_ = l_Lean_Syntax_getArg(v___x_938_, v___x_482_);
lean_dec(v___x_938_);
v_P_954_ = l_Lean_Syntax_getArg(v___x_483_, v___x_949_);
lean_dec(v___x_483_);
v_x_819_ = v_x_930_;
v_ty_820_ = v_ty_953_;
v_P_821_ = v_P_954_;
v___y_822_ = v_a_471_;
v___y_823_ = v_a_472_;
goto v___jp_818_;
}
}
}
}
}
}
else
{
lean_object* v_x_955_; uint8_t v___x_956_; 
v_x_955_ = l_Lean_Syntax_getArg(v___x_922_, v___x_481_);
lean_inc(v_x_955_);
v___x_956_ = l_Lean_Syntax_isOfKind(v_x_955_, v___x_816_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v_P_963_; uint8_t v___x_964_; 
v___x_957_ = lean_unsigned_to_nat(2u);
v___x_958_ = l_Lean_Syntax_getArg(v___x_815_, v___x_957_);
v___x_959_ = lean_unsigned_to_nat(3u);
v___x_960_ = l_Lean_Syntax_getArg(v___x_815_, v___x_959_);
lean_dec(v___x_815_);
v___x_961_ = lean_unsigned_to_nat(4u);
v___x_962_ = l_Lean_Syntax_getArg(v___x_483_, v___x_957_);
v_P_963_ = l_Lean_Syntax_getArg(v___x_483_, v___x_961_);
lean_dec(v___x_483_);
lean_inc(v___x_922_);
v___x_964_ = l_Lean_Syntax_matchesNull(v___x_922_, v___x_482_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v_x_955_);
v___x_966_ = l_Lean_Syntax_isOfKind(v_x_955_, v___x_965_);
if (v___x_966_ == 0)
{
lean_dec(v___x_960_);
lean_dec(v___x_958_);
lean_dec(v_x_955_);
lean_dec(v___x_923_);
lean_dec(v___x_922_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
uint8_t v___x_967_; 
lean_inc(v___x_958_);
v___x_967_ = l_Lean_Syntax_matchesNull(v___x_958_, v___x_957_);
if (v___x_967_ == 0)
{
lean_dec(v___x_960_);
lean_dec(v___x_958_);
lean_dec(v_x_955_);
lean_dec(v___x_923_);
lean_dec(v___x_922_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
uint8_t v___x_968_; 
v___x_968_ = l_Lean_Syntax_matchesNull(v___x_960_, v___x_481_);
if (v___x_968_ == 0)
{
lean_dec(v___x_958_);
lean_dec(v_x_955_);
lean_dec(v___x_923_);
lean_dec(v___x_922_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
uint8_t v___x_969_; 
lean_inc(v___x_962_);
v___x_969_ = l_Lean_Syntax_matchesNull(v___x_962_, v___x_481_);
if (v___x_969_ == 0)
{
lean_dec(v___x_958_);
lean_dec(v_x_955_);
lean_dec(v___x_923_);
lean_dec(v___x_922_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v_quotContext_970_; lean_object* v_currMacroScope_971_; lean_object* v_ref_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v_ty_978_; lean_object* v_xs_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_dec(v___x_962_);
lean_dec(v___x_690_);
v_quotContext_970_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_971_ = lean_ctor_get(v_a_471_, 2);
v_ref_972_ = lean_ctor_get(v_a_471_, 5);
v___x_973_ = l_Lean_Syntax_getArgs(v___x_922_);
lean_dec(v___x_922_);
v___x_974_ = l_Array_extract___redArg(v___x_973_, v___x_482_, v___x_923_);
lean_dec_ref(v___x_973_);
v___x_975_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_976_ = lean_box(2);
v___x_977_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v___x_975_);
lean_ctor_set(v___x_977_, 2, v___x_974_);
v_ty_978_ = l_Lean_Syntax_getArg(v___x_958_, v___x_482_);
lean_dec(v___x_958_);
v_xs_979_ = l_Lean_Syntax_getArgs(v___x_977_);
lean_dec_ref_known(v___x_977_, 3);
v___x_980_ = l_Lean_SourceInfo_fromRef(v_ref_972_, v___x_817_);
v___x_981_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_982_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_983_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_971_, 2);
lean_inc_n(v_quotContext_970_, 2);
v___x_984_ = l_Lean_addMacroScope(v_quotContext_970_, v___x_983_, v_currMacroScope_971_);
v___x_985_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_980_, 26);
v___x_986_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_986_, 0, v___x_980_);
lean_ctor_set(v___x_986_, 1, v___x_982_);
lean_ctor_set(v___x_986_, 2, v___x_984_);
lean_ctor_set(v___x_986_, 3, v___x_985_);
v___x_987_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_988_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_989_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_990_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_980_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_992_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_993_ = lean_box(0);
v___x_994_ = l_Lean_addMacroScope(v_quotContext_970_, v___x_993_, v_currMacroScope_971_);
v___x_995_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_996_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_996_, 0, v___x_980_);
lean_ctor_set(v___x_996_, 1, v___x_992_);
lean_ctor_set(v___x_996_, 2, v___x_994_);
lean_ctor_set(v___x_996_, 3, v___x_995_);
v___x_997_ = l_Lean_Syntax_node1(v___x_980_, v___x_991_, v___x_996_);
lean_inc_ref(v___x_990_);
v___x_998_ = l_Lean_Syntax_node2(v___x_980_, v___x_988_, v___x_990_, v___x_997_);
v___x_999_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_1000_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1001_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_980_);
lean_ctor_set(v___x_1001_, 1, v___x_999_);
v___x_1002_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1003_ = l_Lean_Syntax_node1(v___x_980_, v___x_975_, v_x_955_);
v___x_1004_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55));
v___x_1005_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_1006_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_980_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
lean_inc(v_ty_978_);
lean_inc_ref(v___x_1006_);
v___x_1007_ = l_Lean_Syntax_node2(v___x_980_, v___x_1004_, v___x_1006_, v_ty_978_);
v___x_1008_ = l_Lean_Syntax_node1(v___x_980_, v___x_975_, v___x_1007_);
v___x_1009_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1010_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_980_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1012_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_980_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_1014_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_980_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_1016_ = l_Array_append___redArg(v___x_1015_, v_xs_979_);
lean_dec_ref(v_xs_979_);
v___x_1017_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1017_, 0, v___x_980_);
lean_ctor_set(v___x_1017_, 1, v___x_975_);
lean_ctor_set(v___x_1017_, 2, v___x_1016_);
v___x_1018_ = l_Lean_Syntax_node2(v___x_980_, v___x_975_, v___x_1006_, v_ty_978_);
v___x_1019_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1019_, 0, v___x_980_);
lean_ctor_set(v___x_1019_, 1, v___x_975_);
lean_ctor_set(v___x_1019_, 2, v___x_1015_);
v___x_1020_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1021_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_980_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
lean_inc_ref_n(v___x_1021_, 2);
lean_inc_ref(v___x_1019_);
v___x_1022_ = l_Lean_Syntax_node5(v___x_980_, v___x_870_, v___x_990_, v___x_1017_, v___x_1018_, v___x_1019_, v___x_1021_);
v___x_1023_ = l_Lean_Syntax_node1(v___x_980_, v___x_975_, v___x_1022_);
v___x_1024_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_1025_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_980_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = l_Lean_Syntax_node5(v___x_980_, v___x_686_, v___x_1014_, v___x_1023_, v___x_1019_, v___x_1025_, v_P_963_);
v___x_1027_ = l_Lean_Syntax_node3(v___x_980_, v___x_477_, v___x_1012_, v___x_1026_, v___x_1021_);
v___x_1028_ = l_Lean_Syntax_node4(v___x_980_, v___x_1002_, v___x_1003_, v___x_1008_, v___x_1010_, v___x_1027_);
v___x_1029_ = l_Lean_Syntax_node2(v___x_980_, v___x_1000_, v___x_1001_, v___x_1028_);
v___x_1030_ = l_Lean_Syntax_node3(v___x_980_, v___x_987_, v___x_998_, v___x_1029_, v___x_1021_);
v___x_1031_ = l_Lean_Syntax_node1(v___x_980_, v___x_975_, v___x_1030_);
v___x_1032_ = l_Lean_Syntax_node2(v___x_980_, v___x_981_, v___x_986_, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
lean_ctor_set(v___x_1033_, 1, v_a_472_);
return v___x_1033_;
}
}
}
}
}
else
{
lean_object* v___x_1034_; uint8_t v___x_1035_; 
lean_dec(v___x_923_);
lean_dec(v___x_922_);
v___x_1034_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v_x_955_);
v___x_1035_ = l_Lean_Syntax_isOfKind(v_x_955_, v___x_1034_);
if (v___x_1035_ == 0)
{
lean_dec(v___x_960_);
lean_dec(v___x_958_);
lean_dec(v_x_955_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
uint8_t v___x_1036_; 
lean_inc(v___x_958_);
v___x_1036_ = l_Lean_Syntax_matchesNull(v___x_958_, v___x_957_);
if (v___x_1036_ == 0)
{
lean_dec(v___x_960_);
lean_dec(v___x_958_);
lean_dec(v_x_955_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
uint8_t v___x_1037_; 
v___x_1037_ = l_Lean_Syntax_matchesNull(v___x_960_, v___x_481_);
if (v___x_1037_ == 0)
{
lean_dec(v___x_958_);
lean_dec(v_x_955_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
uint8_t v___x_1038_; 
lean_inc(v___x_962_);
v___x_1038_ = l_Lean_Syntax_matchesNull(v___x_962_, v___x_481_);
if (v___x_1038_ == 0)
{
lean_dec(v___x_958_);
lean_dec(v_x_955_);
v_____discr_692_ = v___x_962_;
v_____discr_693_ = v_P_963_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v_ty_1039_; 
lean_dec(v___x_962_);
lean_dec(v___x_690_);
v_ty_1039_ = l_Lean_Syntax_getArg(v___x_958_, v___x_482_);
lean_dec(v___x_958_);
v_x_819_ = v_x_955_;
v_ty_820_ = v_ty_1039_;
v_P_821_ = v_P_963_;
v___y_822_ = v_a_471_;
v___y_823_ = v_a_472_;
goto v___jp_818_;
}
}
}
}
}
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; 
v___x_1040_ = lean_unsigned_to_nat(2u);
v___x_1041_ = l_Lean_Syntax_getArg(v___x_815_, v___x_1040_);
lean_inc(v___x_1041_);
v___x_1042_ = l_Lean_Syntax_matchesNull(v___x_1041_, v___x_1040_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_dec(v___x_1041_);
lean_dec(v_x_955_);
lean_dec(v___x_923_);
lean_dec(v___x_922_);
lean_dec(v___x_815_);
v___x_1043_ = lean_unsigned_to_nat(4u);
v___x_1044_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1040_);
v___x_1045_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1043_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_1044_;
v_____discr_693_ = v___x_1045_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; 
v___x_1046_ = lean_unsigned_to_nat(3u);
v___x_1047_ = l_Lean_Syntax_getArg(v___x_815_, v___x_1046_);
lean_dec(v___x_815_);
v___x_1048_ = l_Lean_Syntax_matchesNull(v___x_1047_, v___x_481_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_dec(v___x_1041_);
lean_dec(v_x_955_);
lean_dec(v___x_923_);
lean_dec(v___x_922_);
v___x_1049_ = lean_unsigned_to_nat(4u);
v___x_1050_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1040_);
v___x_1051_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1049_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_1050_;
v_____discr_693_ = v___x_1051_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1052_ = lean_unsigned_to_nat(4u);
v___x_1053_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1040_);
lean_inc(v___x_1053_);
v___x_1054_ = l_Lean_Syntax_matchesNull(v___x_1053_, v___x_481_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; 
lean_dec(v___x_1041_);
lean_dec(v_x_955_);
lean_dec(v___x_923_);
lean_dec(v___x_922_);
v___x_1055_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1052_);
lean_dec(v___x_483_);
v_____discr_692_ = v___x_1053_;
v_____discr_693_ = v___x_1055_;
v___y_694_ = v_a_471_;
v___y_695_ = v_a_472_;
goto v___jp_691_;
}
else
{
lean_object* v_quotContext_1056_; lean_object* v_currMacroScope_1057_; lean_object* v_ref_1058_; lean_object* v_tk_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v_xs_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_dec(v___x_1053_);
lean_dec(v___x_690_);
v_quotContext_1056_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1057_ = lean_ctor_get(v_a_471_, 2);
v_ref_1058_ = lean_ctor_get(v_a_471_, 5);
v_tk_1059_ = l_Lean_Syntax_getArg(v_x_955_, v___x_481_);
lean_dec(v_x_955_);
v___x_1060_ = l_Lean_Syntax_getArgs(v___x_922_);
lean_dec(v___x_922_);
v___x_1061_ = l_Array_extract___redArg(v___x_1060_, v___x_482_, v___x_923_);
lean_dec_ref(v___x_1060_);
v___x_1062_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1063_ = lean_box(2);
v___x_1064_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
lean_ctor_set(v___x_1064_, 1, v___x_1062_);
lean_ctor_set(v___x_1064_, 2, v___x_1061_);
v___x_1065_ = l_Lean_Syntax_getArg(v___x_1041_, v___x_482_);
lean_dec(v___x_1041_);
v___x_1066_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1052_);
lean_dec(v___x_483_);
v_xs_1067_ = l_Lean_Syntax_getArgs(v___x_1064_);
lean_dec_ref_known(v___x_1064_, 3);
v___x_1068_ = l_Lean_SourceInfo_fromRef(v_ref_1058_, v___x_817_);
v___x_1069_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1070_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_1071_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_1057_, 2);
lean_inc_n(v_quotContext_1056_, 2);
v___x_1072_ = l_Lean_addMacroScope(v_quotContext_1056_, v___x_1071_, v_currMacroScope_1057_);
v___x_1073_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_1068_, 27);
v___x_1074_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1068_);
lean_ctor_set(v___x_1074_, 1, v___x_1070_);
lean_ctor_set(v___x_1074_, 2, v___x_1072_);
lean_ctor_set(v___x_1074_, 3, v___x_1073_);
v___x_1075_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_1076_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_1077_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_1078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1068_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_1080_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_1081_ = lean_box(0);
v___x_1082_ = l_Lean_addMacroScope(v_quotContext_1056_, v___x_1081_, v_currMacroScope_1057_);
v___x_1083_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_1084_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1068_);
lean_ctor_set(v___x_1084_, 1, v___x_1080_);
lean_ctor_set(v___x_1084_, 2, v___x_1082_);
lean_ctor_set(v___x_1084_, 3, v___x_1083_);
v___x_1085_ = l_Lean_Syntax_node1(v___x_1068_, v___x_1079_, v___x_1084_);
lean_inc_ref(v___x_1078_);
v___x_1086_ = l_Lean_Syntax_node2(v___x_1068_, v___x_1076_, v___x_1078_, v___x_1085_);
v___x_1087_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_1088_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1089_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1068_);
lean_ctor_set(v___x_1089_, 1, v___x_1087_);
v___x_1090_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1091_ = l_Lean_SourceInfo_fromRef(v_tk_1059_, v___x_1054_);
lean_dec(v_tk_1059_);
v___x_1092_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63));
v___x_1093_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Lean_Syntax_node1(v___x_1068_, v___x_816_, v___x_1093_);
v___x_1095_ = l_Lean_Syntax_node1(v___x_1068_, v___x_1062_, v___x_1094_);
v___x_1096_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55));
v___x_1097_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_1098_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1068_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
lean_inc(v___x_1065_);
lean_inc_ref(v___x_1098_);
v___x_1099_ = l_Lean_Syntax_node2(v___x_1068_, v___x_1096_, v___x_1098_, v___x_1065_);
v___x_1100_ = l_Lean_Syntax_node1(v___x_1068_, v___x_1062_, v___x_1099_);
v___x_1101_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1068_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1104_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1068_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_1106_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1068_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_1108_ = l_Array_append___redArg(v___x_1107_, v_xs_1067_);
lean_dec_ref(v_xs_1067_);
v___x_1109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1068_);
lean_ctor_set(v___x_1109_, 1, v___x_1062_);
lean_ctor_set(v___x_1109_, 2, v___x_1108_);
v___x_1110_ = l_Lean_Syntax_node2(v___x_1068_, v___x_1062_, v___x_1098_, v___x_1065_);
v___x_1111_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1068_);
lean_ctor_set(v___x_1111_, 1, v___x_1062_);
lean_ctor_set(v___x_1111_, 2, v___x_1107_);
v___x_1112_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1113_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1068_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
lean_inc_ref_n(v___x_1113_, 2);
lean_inc_ref(v___x_1111_);
v___x_1114_ = l_Lean_Syntax_node5(v___x_1068_, v___x_870_, v___x_1078_, v___x_1109_, v___x_1110_, v___x_1111_, v___x_1113_);
v___x_1115_ = l_Lean_Syntax_node1(v___x_1068_, v___x_1062_, v___x_1114_);
v___x_1116_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_1117_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1068_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
v___x_1118_ = l_Lean_Syntax_node5(v___x_1068_, v___x_686_, v___x_1106_, v___x_1115_, v___x_1111_, v___x_1117_, v___x_1066_);
v___x_1119_ = l_Lean_Syntax_node3(v___x_1068_, v___x_477_, v___x_1104_, v___x_1118_, v___x_1113_);
v___x_1120_ = l_Lean_Syntax_node4(v___x_1068_, v___x_1090_, v___x_1095_, v___x_1100_, v___x_1102_, v___x_1119_);
v___x_1121_ = l_Lean_Syntax_node2(v___x_1068_, v___x_1088_, v___x_1089_, v___x_1120_);
v___x_1122_ = l_Lean_Syntax_node3(v___x_1068_, v___x_1075_, v___x_1086_, v___x_1121_, v___x_1113_);
v___x_1123_ = l_Lean_Syntax_node1(v___x_1068_, v___x_1062_, v___x_1122_);
v___x_1124_ = l_Lean_Syntax_node2(v___x_1068_, v___x_1069_, v___x_1074_, v___x_1123_);
v___x_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
lean_ctor_set(v___x_1125_, 1, v_a_472_);
return v___x_1125_;
}
}
}
}
}
}
}
else
{
lean_object* v_tk_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
lean_dec(v___x_690_);
v_tk_1126_ = l_Lean_Syntax_getArg(v___x_815_, v___x_481_);
lean_dec(v___x_815_);
v___x_1127_ = lean_unsigned_to_nat(2u);
v___x_1128_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1127_);
lean_inc(v___x_1128_);
v___x_1129_ = l_Lean_Syntax_matchesNull(v___x_1128_, v___x_481_);
if (v___x_1129_ == 0)
{
uint8_t v___x_1130_; 
lean_inc(v___x_1128_);
v___x_1130_ = l_Lean_Syntax_matchesNull(v___x_1128_, v___x_482_);
if (v___x_1130_ == 0)
{
lean_dec(v___x_1128_);
lean_dec(v_tk_1126_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v___x_1131_; lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1131_ = l_Lean_Syntax_getArg(v___x_1128_, v___x_481_);
lean_dec(v___x_1128_);
v___x_1132_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55));
lean_inc(v___x_1131_);
v___x_1133_ = l_Lean_Syntax_isOfKind(v___x_1131_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_dec(v___x_1131_);
lean_dec(v_tk_1126_);
lean_dec(v___x_483_);
v___y_474_ = v_a_472_;
goto v___jp_473_;
}
else
{
lean_object* v_quotContext_1134_; lean_object* v_currMacroScope_1135_; lean_object* v_ref_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v_quotContext_1134_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1135_ = lean_ctor_get(v_a_471_, 2);
v_ref_1136_ = lean_ctor_get(v_a_471_, 5);
v___x_1137_ = l_Lean_Syntax_getArg(v___x_1131_, v___x_482_);
lean_dec(v___x_1131_);
v___x_1138_ = lean_unsigned_to_nat(4u);
v___x_1139_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1138_);
lean_dec(v___x_483_);
v___x_1140_ = l_Lean_SourceInfo_fromRef(v_ref_1136_, v___x_1129_);
v___x_1141_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1142_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_1143_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_1135_, 2);
lean_inc_n(v_quotContext_1134_, 2);
v___x_1144_ = l_Lean_addMacroScope(v_quotContext_1134_, v___x_1143_, v_currMacroScope_1135_);
v___x_1145_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_1140_, 19);
v___x_1146_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1140_);
lean_ctor_set(v___x_1146_, 1, v___x_1142_);
lean_ctor_set(v___x_1146_, 2, v___x_1144_);
lean_ctor_set(v___x_1146_, 3, v___x_1145_);
v___x_1147_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1148_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_1149_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_1150_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_1151_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1140_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_1153_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_1154_ = lean_box(0);
v___x_1155_ = l_Lean_addMacroScope(v_quotContext_1134_, v___x_1154_, v_currMacroScope_1135_);
v___x_1156_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_1157_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1140_);
lean_ctor_set(v___x_1157_, 1, v___x_1153_);
lean_ctor_set(v___x_1157_, 2, v___x_1155_);
lean_ctor_set(v___x_1157_, 3, v___x_1156_);
v___x_1158_ = l_Lean_Syntax_node1(v___x_1140_, v___x_1152_, v___x_1157_);
v___x_1159_ = l_Lean_Syntax_node2(v___x_1140_, v___x_1149_, v___x_1151_, v___x_1158_);
v___x_1160_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_1161_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1162_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1140_);
lean_ctor_set(v___x_1162_, 1, v___x_1160_);
v___x_1163_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1164_ = l_Lean_SourceInfo_fromRef(v_tk_1126_, v___x_1133_);
lean_dec(v_tk_1126_);
v___x_1165_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63));
v___x_1166_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1164_);
lean_ctor_set(v___x_1166_, 1, v___x_1165_);
v___x_1167_ = l_Lean_Syntax_node1(v___x_1140_, v___x_816_, v___x_1166_);
v___x_1168_ = l_Lean_Syntax_node1(v___x_1140_, v___x_1147_, v___x_1167_);
v___x_1169_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_1170_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1140_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
v___x_1171_ = l_Lean_Syntax_node2(v___x_1140_, v___x_1132_, v___x_1170_, v___x_1137_);
v___x_1172_ = l_Lean_Syntax_node1(v___x_1140_, v___x_1147_, v___x_1171_);
v___x_1173_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1174_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1140_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1176_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1140_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
v___x_1177_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1178_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1140_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
lean_inc_ref(v___x_1178_);
v___x_1179_ = l_Lean_Syntax_node3(v___x_1140_, v___x_477_, v___x_1176_, v___x_1139_, v___x_1178_);
v___x_1180_ = l_Lean_Syntax_node4(v___x_1140_, v___x_1163_, v___x_1168_, v___x_1172_, v___x_1174_, v___x_1179_);
v___x_1181_ = l_Lean_Syntax_node2(v___x_1140_, v___x_1161_, v___x_1162_, v___x_1180_);
v___x_1182_ = l_Lean_Syntax_node3(v___x_1140_, v___x_1148_, v___x_1159_, v___x_1181_, v___x_1178_);
v___x_1183_ = l_Lean_Syntax_node1(v___x_1140_, v___x_1147_, v___x_1182_);
v___x_1184_ = l_Lean_Syntax_node2(v___x_1140_, v___x_1141_, v___x_1146_, v___x_1183_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
lean_ctor_set(v___x_1185_, 1, v_a_472_);
return v___x_1185_;
}
}
}
else
{
lean_object* v_quotContext_1186_; lean_object* v_currMacroScope_1187_; lean_object* v_ref_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_dec(v___x_1128_);
v_quotContext_1186_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1187_ = lean_ctor_get(v_a_471_, 2);
v_ref_1188_ = lean_ctor_get(v_a_471_, 5);
v___x_1189_ = lean_unsigned_to_nat(4u);
v___x_1190_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1189_);
lean_dec(v___x_483_);
v___x_1191_ = l_Lean_SourceInfo_fromRef(v_ref_1188_, v___x_495_);
v___x_1192_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1193_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_1194_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_1187_, 2);
lean_inc_n(v_quotContext_1186_, 2);
v___x_1195_ = l_Lean_addMacroScope(v_quotContext_1186_, v___x_1194_, v_currMacroScope_1187_);
v___x_1196_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_1191_, 17);
v___x_1197_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1191_);
lean_ctor_set(v___x_1197_, 1, v___x_1193_);
lean_ctor_set(v___x_1197_, 2, v___x_1195_);
lean_ctor_set(v___x_1197_, 3, v___x_1196_);
v___x_1198_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1199_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_1200_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_1201_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_1202_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1191_);
lean_ctor_set(v___x_1202_, 1, v___x_1201_);
v___x_1203_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_1204_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_1205_ = lean_box(0);
v___x_1206_ = l_Lean_addMacroScope(v_quotContext_1186_, v___x_1205_, v_currMacroScope_1187_);
v___x_1207_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_1208_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1191_);
lean_ctor_set(v___x_1208_, 1, v___x_1204_);
lean_ctor_set(v___x_1208_, 2, v___x_1206_);
lean_ctor_set(v___x_1208_, 3, v___x_1207_);
v___x_1209_ = l_Lean_Syntax_node1(v___x_1191_, v___x_1203_, v___x_1208_);
v___x_1210_ = l_Lean_Syntax_node2(v___x_1191_, v___x_1200_, v___x_1202_, v___x_1209_);
v___x_1211_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_1212_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_1213_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1191_);
lean_ctor_set(v___x_1213_, 1, v___x_1211_);
v___x_1214_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_1215_ = l_Lean_SourceInfo_fromRef(v_tk_1126_, v___x_1129_);
lean_dec(v_tk_1126_);
v___x_1216_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__63));
v___x_1217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1215_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = l_Lean_Syntax_node1(v___x_1191_, v___x_816_, v___x_1217_);
v___x_1219_ = l_Lean_Syntax_node1(v___x_1191_, v___x_1198_, v___x_1218_);
v___x_1220_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_1221_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1191_);
lean_ctor_set(v___x_1221_, 1, v___x_1198_);
lean_ctor_set(v___x_1221_, 2, v___x_1220_);
v___x_1222_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1191_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1225_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1191_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1227_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1191_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
lean_inc_ref(v___x_1227_);
v___x_1228_ = l_Lean_Syntax_node3(v___x_1191_, v___x_477_, v___x_1225_, v___x_1190_, v___x_1227_);
v___x_1229_ = l_Lean_Syntax_node4(v___x_1191_, v___x_1214_, v___x_1219_, v___x_1221_, v___x_1223_, v___x_1228_);
v___x_1230_ = l_Lean_Syntax_node2(v___x_1191_, v___x_1212_, v___x_1213_, v___x_1229_);
v___x_1231_ = l_Lean_Syntax_node3(v___x_1191_, v___x_1199_, v___x_1210_, v___x_1230_, v___x_1227_);
v___x_1232_ = l_Lean_Syntax_node1(v___x_1191_, v___x_1198_, v___x_1231_);
v___x_1233_ = l_Lean_Syntax_node2(v___x_1191_, v___x_1192_, v___x_1197_, v___x_1232_);
v___x_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
lean_ctor_set(v___x_1234_, 1, v_a_472_);
return v___x_1234_;
}
}
v___jp_818_:
{
lean_object* v_quotContext_824_; lean_object* v_currMacroScope_825_; lean_object* v_ref_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_quotContext_824_ = lean_ctor_get(v___y_822_, 1);
v_currMacroScope_825_ = lean_ctor_get(v___y_822_, 2);
v_ref_826_ = lean_ctor_get(v___y_822_, 5);
v___x_827_ = l_Lean_SourceInfo_fromRef(v_ref_826_, v___x_817_);
v___x_828_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_829_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_830_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_825_, 2);
lean_inc_n(v_quotContext_824_, 2);
v___x_831_ = l_Lean_addMacroScope(v_quotContext_824_, v___x_830_, v_currMacroScope_825_);
v___x_832_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_827_, 18);
v___x_833_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_833_, 0, v___x_827_);
lean_ctor_set(v___x_833_, 1, v___x_829_);
lean_ctor_set(v___x_833_, 2, v___x_831_);
lean_ctor_set(v___x_833_, 3, v___x_832_);
v___x_834_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_835_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_836_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_837_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_838_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_827_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_840_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_841_ = lean_box(0);
v___x_842_ = l_Lean_addMacroScope(v_quotContext_824_, v___x_841_, v_currMacroScope_825_);
v___x_843_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_844_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_844_, 0, v___x_827_);
lean_ctor_set(v___x_844_, 1, v___x_840_);
lean_ctor_set(v___x_844_, 2, v___x_842_);
lean_ctor_set(v___x_844_, 3, v___x_843_);
v___x_845_ = l_Lean_Syntax_node1(v___x_827_, v___x_839_, v___x_844_);
v___x_846_ = l_Lean_Syntax_node2(v___x_827_, v___x_836_, v___x_838_, v___x_845_);
v___x_847_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_848_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_849_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_827_);
lean_ctor_set(v___x_849_, 1, v___x_847_);
v___x_850_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_851_ = l_Lean_Syntax_node1(v___x_827_, v___x_834_, v_x_819_);
v___x_852_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55));
v___x_853_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_854_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_827_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
v___x_855_ = l_Lean_Syntax_node2(v___x_827_, v___x_852_, v___x_854_, v_ty_820_);
v___x_856_ = l_Lean_Syntax_node1(v___x_827_, v___x_834_, v___x_855_);
v___x_857_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_858_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_827_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_860_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_827_);
lean_ctor_set(v___x_860_, 1, v___x_859_);
v___x_861_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_862_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_827_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
lean_inc_ref(v___x_862_);
v___x_863_ = l_Lean_Syntax_node3(v___x_827_, v___x_477_, v___x_860_, v_P_821_, v___x_862_);
v___x_864_ = l_Lean_Syntax_node4(v___x_827_, v___x_850_, v___x_851_, v___x_856_, v___x_858_, v___x_863_);
v___x_865_ = l_Lean_Syntax_node2(v___x_827_, v___x_848_, v___x_849_, v___x_864_);
v___x_866_ = l_Lean_Syntax_node3(v___x_827_, v___x_835_, v___x_846_, v___x_865_, v___x_862_);
v___x_867_ = l_Lean_Syntax_node1(v___x_827_, v___x_834_, v___x_866_);
v___x_868_ = l_Lean_Syntax_node2(v___x_827_, v___x_828_, v___x_833_, v___x_867_);
v___x_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
lean_ctor_set(v___x_869_, 1, v___y_823_);
return v___x_869_;
}
}
v___jp_691_:
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = l_Lean_Syntax_getNumArgs(v___x_690_);
v___x_697_ = lean_nat_dec_le(v___x_482_, v___x_696_);
if (v___x_697_ == 0)
{
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v_x_698_; lean_object* v___x_699_; uint8_t v___x_700_; 
v_x_698_ = l_Lean_Syntax_getArg(v___x_690_, v___x_481_);
v___x_699_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v_x_698_);
v___x_700_ = l_Lean_Syntax_isOfKind(v_x_698_, v___x_699_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_701_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58));
lean_inc(v_x_698_);
v___x_702_ = l_Lean_Syntax_isOfKind(v_x_698_, v___x_701_);
if (v___x_702_ == 0)
{
lean_dec(v_x_698_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v___x_703_; uint8_t v___x_704_; 
v___x_703_ = l_Lean_Syntax_getArg(v_x_698_, v___x_482_);
lean_inc(v___x_703_);
v___x_704_ = l_Lean_Syntax_matchesNull(v___x_703_, v___x_482_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_705_ = l_Lean_Syntax_getNumArgs(v___x_703_);
v___x_706_ = lean_nat_dec_le(v___x_482_, v___x_705_);
if (v___x_706_ == 0)
{
lean_dec(v___x_705_);
lean_dec(v___x_703_);
lean_dec(v_x_698_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v_x_707_; uint8_t v___x_708_; 
v_x_707_ = l_Lean_Syntax_getArg(v___x_703_, v___x_481_);
lean_inc(v_x_707_);
v___x_708_ = l_Lean_Syntax_isOfKind(v_x_707_, v___x_699_);
if (v___x_708_ == 0)
{
lean_dec(v_x_707_);
lean_dec(v___x_705_);
lean_dec(v___x_703_);
lean_dec(v_x_698_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_709_ = lean_unsigned_to_nat(2u);
v___x_710_ = l_Lean_Syntax_getArg(v_x_698_, v___x_709_);
lean_inc(v___x_710_);
v___x_711_ = l_Lean_Syntax_matchesNull(v___x_710_, v___x_709_);
if (v___x_711_ == 0)
{
lean_dec(v___x_710_);
lean_dec(v_x_707_);
lean_dec(v___x_705_);
lean_dec(v___x_703_);
lean_dec(v_x_698_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_712_ = lean_unsigned_to_nat(3u);
v___x_713_ = l_Lean_Syntax_getArg(v_x_698_, v___x_712_);
lean_dec(v_x_698_);
v___x_714_ = l_Lean_Syntax_matchesNull(v___x_713_, v___x_481_);
if (v___x_714_ == 0)
{
lean_dec(v___x_710_);
lean_dec(v_x_707_);
lean_dec(v___x_705_);
lean_dec(v___x_703_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
uint8_t v___x_715_; 
v___x_715_ = l_Lean_Syntax_matchesNull(v_____discr_692_, v___x_481_);
if (v___x_715_ == 0)
{
lean_dec(v___x_710_);
lean_dec(v_x_707_);
lean_dec(v___x_705_);
lean_dec(v___x_703_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v_ty_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v_ys_725_; lean_object* v_xs_726_; 
v___x_716_ = l_Lean_Syntax_getArgs(v___x_703_);
lean_dec(v___x_703_);
v___x_717_ = l_Array_extract___redArg(v___x_716_, v___x_482_, v___x_705_);
lean_dec_ref(v___x_716_);
v_ty_718_ = l_Lean_Syntax_getArg(v___x_710_, v___x_482_);
lean_dec(v___x_710_);
v___x_719_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_720_ = lean_box(2);
v___x_721_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v___x_719_);
lean_ctor_set(v___x_721_, 2, v___x_717_);
v___x_722_ = l_Lean_Syntax_getArgs(v___x_690_);
lean_dec(v___x_690_);
v___x_723_ = l_Array_extract___redArg(v___x_722_, v___x_482_, v___x_696_);
lean_dec_ref(v___x_722_);
v___x_724_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_724_, 0, v___x_720_);
lean_ctor_set(v___x_724_, 1, v___x_719_);
lean_ctor_set(v___x_724_, 2, v___x_723_);
v_ys_725_ = l_Lean_Syntax_getArgs(v___x_724_);
lean_dec_ref_known(v___x_724_, 3);
v_xs_726_ = l_Lean_Syntax_getArgs(v___x_721_);
lean_dec_ref_known(v___x_721_, 3);
v_x_617_ = v_x_707_;
v_xs_618_ = v_xs_726_;
v_ty_619_ = v_ty_718_;
v_ys_620_ = v_ys_725_;
v_P_621_ = v_____discr_693_;
v___y_622_ = v___y_694_;
v___y_623_ = v___y_695_;
goto v___jp_616_;
}
}
}
}
}
}
else
{
lean_object* v_x_727_; uint8_t v___x_728_; 
v_x_727_ = l_Lean_Syntax_getArg(v___x_703_, v___x_481_);
lean_dec(v___x_703_);
lean_inc(v_x_727_);
v___x_728_ = l_Lean_Syntax_isOfKind(v_x_727_, v___x_699_);
if (v___x_728_ == 0)
{
lean_dec(v_x_727_);
lean_dec(v_x_698_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_729_ = lean_unsigned_to_nat(2u);
v___x_730_ = l_Lean_Syntax_getArg(v_x_698_, v___x_729_);
lean_inc(v___x_730_);
v___x_731_ = l_Lean_Syntax_matchesNull(v___x_730_, v___x_729_);
if (v___x_731_ == 0)
{
lean_dec(v___x_730_);
lean_dec(v_x_727_);
lean_dec(v_x_698_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_732_ = lean_unsigned_to_nat(3u);
v___x_733_ = l_Lean_Syntax_getArg(v_x_698_, v___x_732_);
lean_dec(v_x_698_);
v___x_734_ = l_Lean_Syntax_matchesNull(v___x_733_, v___x_481_);
if (v___x_734_ == 0)
{
lean_dec(v___x_730_);
lean_dec(v_x_727_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v_____discr_692_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
uint8_t v___x_735_; 
v___x_735_ = l_Lean_Syntax_matchesNull(v_____discr_692_, v___x_481_);
if (v___x_735_ == 0)
{
lean_dec(v___x_730_);
lean_dec(v_x_727_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v_ty_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v_xs_742_; 
v_ty_736_ = l_Lean_Syntax_getArg(v___x_730_, v___x_482_);
lean_dec(v___x_730_);
v___x_737_ = l_Lean_Syntax_getArgs(v___x_690_);
lean_dec(v___x_690_);
v___x_738_ = l_Array_extract___redArg(v___x_737_, v___x_482_, v___x_696_);
lean_dec_ref(v___x_737_);
v___x_739_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_740_ = lean_box(2);
v___x_741_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
lean_ctor_set(v___x_741_, 1, v___x_739_);
lean_ctor_set(v___x_741_, 2, v___x_738_);
v_xs_742_ = l_Lean_Syntax_getArgs(v___x_741_);
lean_dec_ref_known(v___x_741_, 3);
v_x_554_ = v_x_727_;
v_ty_555_ = v_ty_736_;
v_xs_556_ = v_xs_742_;
v_P_557_ = v_____discr_693_;
v___y_558_ = v___y_694_;
v___y_559_ = v___y_695_;
goto v___jp_553_;
}
}
}
}
}
}
}
else
{
uint8_t v___x_743_; 
v___x_743_ = l_Lean_Syntax_matchesNull(v_____discr_692_, v___x_481_);
if (v___x_743_ == 0)
{
lean_dec(v_x_698_);
lean_dec(v___x_696_);
lean_dec(v_____discr_693_);
lean_dec(v___x_690_);
v___y_474_ = v___y_695_;
goto v___jp_473_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_xs_749_; 
v___x_744_ = l_Lean_Syntax_getArgs(v___x_690_);
lean_dec(v___x_690_);
v___x_745_ = l_Array_extract___redArg(v___x_744_, v___x_482_, v___x_696_);
lean_dec_ref(v___x_744_);
v___x_746_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_747_ = lean_box(2);
v___x_748_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
lean_ctor_set(v___x_748_, 1, v___x_746_);
lean_ctor_set(v___x_748_, 2, v___x_745_);
v_xs_749_ = l_Lean_Syntax_getArgs(v___x_748_);
lean_dec_ref_known(v___x_748_, 3);
v_x_497_ = v_x_698_;
v_xs_498_ = v_xs_749_;
v_P_499_ = v_____discr_693_;
v___y_500_ = v___y_694_;
v___y_501_ = v___y_695_;
goto v___jp_496_;
}
}
}
}
}
}
else
{
lean_object* v___x_1235_; lean_object* v___x_1236_; uint8_t v___x_1237_; 
v___x_1235_ = l_Lean_Syntax_getArg(v___x_483_, v___x_482_);
v___x_1236_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65));
lean_inc(v___x_1235_);
v___x_1237_ = l_Lean_Syntax_isOfKind(v___x_1235_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
lean_dec(v___x_1235_);
lean_dec(v___x_483_);
v___x_1238_ = lean_box(1);
v___x_1239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
lean_ctor_set(v___x_1239_, 1, v_a_472_);
return v___x_1239_;
}
else
{
lean_object* v_ref_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v_ref_1240_ = lean_ctor_get(v_a_471_, 5);
v___x_1241_ = lean_unsigned_to_nat(3u);
v___x_1242_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1241_);
lean_dec(v___x_483_);
v___x_1243_ = l_Lean_SourceInfo_fromRef(v_ref_1240_, v___x_493_);
v___x_1244_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_1243_, 2);
v___x_1245_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v___x_1246_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1247_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1243_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = l_Lean_Syntax_node3(v___x_1243_, v___x_477_, v___x_1245_, v___x_1242_, v___x_1247_);
v___x_1249_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__67));
v___x_1250_ = l_Lean_expandExplicitBinders(v___x_1249_, v___x_1235_, v___x_1248_, v_a_471_, v_a_472_);
lean_dec(v___x_1235_);
return v___x_1250_;
}
}
v___jp_496_:
{
lean_object* v_quotContext_502_; lean_object* v_currMacroScope_503_; lean_object* v_ref_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v_quotContext_502_ = lean_ctor_get(v___y_500_, 1);
v_currMacroScope_503_ = lean_ctor_get(v___y_500_, 2);
v_ref_504_ = lean_ctor_get(v___y_500_, 5);
v___x_505_ = l_Lean_SourceInfo_fromRef(v_ref_504_, v___x_495_);
v___x_506_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_507_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_508_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_503_, 2);
lean_inc_n(v_quotContext_502_, 2);
v___x_509_ = l_Lean_addMacroScope(v_quotContext_502_, v___x_508_, v_currMacroScope_503_);
v___x_510_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_505_, 20);
v___x_511_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_511_, 0, v___x_505_);
lean_ctor_set(v___x_511_, 1, v___x_507_);
lean_ctor_set(v___x_511_, 2, v___x_509_);
lean_ctor_set(v___x_511_, 3, v___x_510_);
v___x_512_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_513_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_514_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_515_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_516_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_505_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_518_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_519_ = lean_box(0);
v___x_520_ = l_Lean_addMacroScope(v_quotContext_502_, v___x_519_, v_currMacroScope_503_);
v___x_521_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_522_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_522_, 0, v___x_505_);
lean_ctor_set(v___x_522_, 1, v___x_518_);
lean_ctor_set(v___x_522_, 2, v___x_520_);
lean_ctor_set(v___x_522_, 3, v___x_521_);
v___x_523_ = l_Lean_Syntax_node1(v___x_505_, v___x_517_, v___x_522_);
v___x_524_ = l_Lean_Syntax_node2(v___x_505_, v___x_514_, v___x_516_, v___x_523_);
v___x_525_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_526_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_527_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_505_);
lean_ctor_set(v___x_527_, 1, v___x_525_);
v___x_528_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_529_ = l_Lean_Syntax_node1(v___x_505_, v___x_512_, v_x_497_);
v___x_530_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_531_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_531_, 0, v___x_505_);
lean_ctor_set(v___x_531_, 1, v___x_512_);
lean_ctor_set(v___x_531_, 2, v___x_530_);
v___x_532_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_505_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_535_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_505_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51));
v___x_537_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_538_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_505_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = l_Array_append___redArg(v___x_530_, v_xs_498_);
lean_dec_ref(v_xs_498_);
v___x_540_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_540_, 0, v___x_505_);
lean_ctor_set(v___x_540_, 1, v___x_512_);
lean_ctor_set(v___x_540_, 2, v___x_539_);
v___x_541_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_542_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_505_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
lean_inc_ref(v___x_531_);
v___x_543_ = l_Lean_Syntax_node5(v___x_505_, v___x_536_, v___x_538_, v___x_540_, v___x_531_, v___x_542_, v_P_499_);
v___x_544_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_545_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_505_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
lean_inc_ref(v___x_545_);
v___x_546_ = l_Lean_Syntax_node3(v___x_505_, v___x_477_, v___x_535_, v___x_543_, v___x_545_);
v___x_547_ = l_Lean_Syntax_node4(v___x_505_, v___x_528_, v___x_529_, v___x_531_, v___x_533_, v___x_546_);
v___x_548_ = l_Lean_Syntax_node2(v___x_505_, v___x_526_, v___x_527_, v___x_547_);
v___x_549_ = l_Lean_Syntax_node3(v___x_505_, v___x_513_, v___x_524_, v___x_548_, v___x_545_);
v___x_550_ = l_Lean_Syntax_node1(v___x_505_, v___x_512_, v___x_549_);
v___x_551_ = l_Lean_Syntax_node2(v___x_505_, v___x_506_, v___x_511_, v___x_550_);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
lean_ctor_set(v___x_552_, 1, v___y_501_);
return v___x_552_;
}
v___jp_553_:
{
lean_object* v_quotContext_560_; lean_object* v_currMacroScope_561_; lean_object* v_ref_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v_quotContext_560_ = lean_ctor_get(v___y_558_, 1);
v_currMacroScope_561_ = lean_ctor_get(v___y_558_, 2);
v_ref_562_ = lean_ctor_get(v___y_558_, 5);
v___x_563_ = l_Lean_SourceInfo_fromRef(v_ref_562_, v___x_495_);
v___x_564_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_565_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_566_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_561_, 2);
lean_inc_n(v_quotContext_560_, 2);
v___x_567_ = l_Lean_addMacroScope(v_quotContext_560_, v___x_566_, v_currMacroScope_561_);
v___x_568_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_563_, 23);
v___x_569_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_569_, 0, v___x_563_);
lean_ctor_set(v___x_569_, 1, v___x_565_);
lean_ctor_set(v___x_569_, 2, v___x_567_);
lean_ctor_set(v___x_569_, 3, v___x_568_);
v___x_570_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_571_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_572_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_573_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_574_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_563_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_576_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_577_ = lean_box(0);
v___x_578_ = l_Lean_addMacroScope(v_quotContext_560_, v___x_577_, v_currMacroScope_561_);
v___x_579_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_580_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_580_, 0, v___x_563_);
lean_ctor_set(v___x_580_, 1, v___x_576_);
lean_ctor_set(v___x_580_, 2, v___x_578_);
lean_ctor_set(v___x_580_, 3, v___x_579_);
v___x_581_ = l_Lean_Syntax_node1(v___x_563_, v___x_575_, v___x_580_);
v___x_582_ = l_Lean_Syntax_node2(v___x_563_, v___x_572_, v___x_574_, v___x_581_);
v___x_583_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_584_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_585_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_563_);
lean_ctor_set(v___x_585_, 1, v___x_583_);
v___x_586_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_587_ = l_Lean_Syntax_node1(v___x_563_, v___x_570_, v_x_554_);
v___x_588_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55));
v___x_589_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_590_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_563_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = l_Lean_Syntax_node2(v___x_563_, v___x_588_, v___x_590_, v_ty_555_);
v___x_592_ = l_Lean_Syntax_node1(v___x_563_, v___x_570_, v___x_591_);
v___x_593_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_594_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_563_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_563_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51));
v___x_598_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_599_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_563_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_601_ = l_Array_append___redArg(v___x_600_, v_xs_556_);
lean_dec_ref(v_xs_556_);
v___x_602_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_602_, 0, v___x_563_);
lean_ctor_set(v___x_602_, 1, v___x_570_);
lean_ctor_set(v___x_602_, 2, v___x_601_);
v___x_603_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_603_, 0, v___x_563_);
lean_ctor_set(v___x_603_, 1, v___x_570_);
lean_ctor_set(v___x_603_, 2, v___x_600_);
v___x_604_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_605_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_563_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = l_Lean_Syntax_node5(v___x_563_, v___x_597_, v___x_599_, v___x_602_, v___x_603_, v___x_605_, v_P_557_);
v___x_607_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_608_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_563_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
lean_inc_ref(v___x_608_);
v___x_609_ = l_Lean_Syntax_node3(v___x_563_, v___x_477_, v___x_596_, v___x_606_, v___x_608_);
v___x_610_ = l_Lean_Syntax_node4(v___x_563_, v___x_586_, v___x_587_, v___x_592_, v___x_594_, v___x_609_);
v___x_611_ = l_Lean_Syntax_node2(v___x_563_, v___x_584_, v___x_585_, v___x_610_);
v___x_612_ = l_Lean_Syntax_node3(v___x_563_, v___x_571_, v___x_582_, v___x_611_, v___x_608_);
v___x_613_ = l_Lean_Syntax_node1(v___x_563_, v___x_570_, v___x_612_);
v___x_614_ = l_Lean_Syntax_node2(v___x_563_, v___x_564_, v___x_569_, v___x_613_);
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___y_559_);
return v___x_615_;
}
v___jp_616_:
{
lean_object* v_quotContext_624_; lean_object* v_currMacroScope_625_; lean_object* v_ref_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_quotContext_624_ = lean_ctor_get(v___y_622_, 1);
v_currMacroScope_625_ = lean_ctor_get(v___y_622_, 2);
v_ref_626_ = lean_ctor_get(v___y_622_, 5);
v___x_627_ = l_Lean_SourceInfo_fromRef(v_ref_626_, v___x_495_);
v___x_628_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_629_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__13);
v___x_630_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__15));
lean_inc_n(v_currMacroScope_625_, 2);
lean_inc_n(v_quotContext_624_, 2);
v___x_631_ = l_Lean_addMacroScope(v_quotContext_624_, v___x_630_, v_currMacroScope_625_);
v___x_632_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__18));
lean_inc_n(v___x_627_, 26);
v___x_633_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_633_, 0, v___x_627_);
lean_ctor_set(v___x_633_, 1, v___x_629_);
lean_ctor_set(v___x_633_, 2, v___x_631_);
lean_ctor_set(v___x_633_, 3, v___x_632_);
v___x_634_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_635_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
v___x_636_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
v___x_637_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
v___x_638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_627_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
v___x_640_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_641_ = lean_box(0);
v___x_642_ = l_Lean_addMacroScope(v_quotContext_624_, v___x_641_, v_currMacroScope_625_);
v___x_643_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__44));
v___x_644_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_644_, 0, v___x_627_);
lean_ctor_set(v___x_644_, 1, v___x_640_);
lean_ctor_set(v___x_644_, 2, v___x_642_);
lean_ctor_set(v___x_644_, 3, v___x_643_);
v___x_645_ = l_Lean_Syntax_node1(v___x_627_, v___x_639_, v___x_644_);
lean_inc_ref(v___x_638_);
v___x_646_ = l_Lean_Syntax_node2(v___x_627_, v___x_636_, v___x_638_, v___x_645_);
v___x_647_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_648_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
v___x_649_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_627_);
lean_ctor_set(v___x_649_, 1, v___x_647_);
v___x_650_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
v___x_651_ = l_Lean_Syntax_node1(v___x_627_, v___x_634_, v_x_617_);
v___x_652_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__55));
v___x_653_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_654_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_627_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
lean_inc(v_ty_619_);
lean_inc_ref(v___x_654_);
v___x_655_ = l_Lean_Syntax_node2(v___x_627_, v___x_652_, v___x_654_, v_ty_619_);
v___x_656_ = l_Lean_Syntax_node1(v___x_627_, v___x_634_, v___x_655_);
v___x_657_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_627_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_660_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_627_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51));
v___x_662_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_627_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__58));
v___x_665_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_666_ = l_Array_append___redArg(v___x_665_, v_xs_618_);
lean_dec_ref(v_xs_618_);
v___x_667_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_667_, 0, v___x_627_);
lean_ctor_set(v___x_667_, 1, v___x_634_);
lean_ctor_set(v___x_667_, 2, v___x_666_);
v___x_668_ = l_Lean_Syntax_node2(v___x_627_, v___x_634_, v___x_654_, v_ty_619_);
v___x_669_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_669_, 0, v___x_627_);
lean_ctor_set(v___x_669_, 1, v___x_634_);
lean_ctor_set(v___x_669_, 2, v___x_665_);
v___x_670_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_671_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_627_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
lean_inc_ref_n(v___x_671_, 2);
lean_inc_ref(v___x_669_);
v___x_672_ = l_Lean_Syntax_node5(v___x_627_, v___x_664_, v___x_638_, v___x_667_, v___x_668_, v___x_669_, v___x_671_);
v___x_673_ = l_Array_mkArray1___redArg(v___x_672_);
v___x_674_ = l_Array_append___redArg(v___x_673_, v_ys_620_);
lean_dec_ref(v_ys_620_);
v___x_675_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_675_, 0, v___x_627_);
lean_ctor_set(v___x_675_, 1, v___x_634_);
lean_ctor_set(v___x_675_, 2, v___x_674_);
v___x_676_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_677_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_677_, 0, v___x_627_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = l_Lean_Syntax_node5(v___x_627_, v___x_661_, v___x_663_, v___x_675_, v___x_669_, v___x_677_, v_P_621_);
v___x_679_ = l_Lean_Syntax_node3(v___x_627_, v___x_477_, v___x_660_, v___x_678_, v___x_671_);
v___x_680_ = l_Lean_Syntax_node4(v___x_627_, v___x_650_, v___x_651_, v___x_656_, v___x_658_, v___x_679_);
v___x_681_ = l_Lean_Syntax_node2(v___x_627_, v___x_648_, v___x_649_, v___x_680_);
v___x_682_ = l_Lean_Syntax_node3(v___x_627_, v___x_635_, v___x_646_, v___x_681_, v___x_671_);
v___x_683_ = l_Lean_Syntax_node1(v___x_627_, v___x_634_, v___x_682_);
v___x_684_ = l_Lean_Syntax_node2(v___x_627_, v___x_628_, v___x_633_, v___x_683_);
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set(v___x_685_, 1, v___y_623_);
return v___x_685_;
}
}
else
{
lean_object* v_quotContext_1251_; lean_object* v_currMacroScope_1252_; lean_object* v_ref_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_quotContext_1251_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1252_ = lean_ctor_get(v_a_471_, 2);
v_ref_1253_ = lean_ctor_get(v_a_471_, 5);
v___x_1254_ = l_Lean_Syntax_getArg(v___x_483_, v___x_481_);
v___x_1255_ = lean_unsigned_to_nat(2u);
v___x_1256_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1255_);
lean_dec(v___x_483_);
v___x_1257_ = l_Lean_SourceInfo_fromRef(v_ref_1253_, v___x_491_);
v___x_1258_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1259_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__69);
v___x_1260_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__71));
lean_inc(v_currMacroScope_1252_);
lean_inc(v_quotContext_1251_);
v___x_1261_ = l_Lean_addMacroScope(v_quotContext_1251_, v___x_1260_, v_currMacroScope_1252_);
v___x_1262_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__74));
lean_inc_n(v___x_1257_, 6);
v___x_1263_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1257_);
lean_ctor_set(v___x_1263_, 1, v___x_1259_);
lean_ctor_set(v___x_1263_, 2, v___x_1261_);
lean_ctor_set(v___x_1263_, 3, v___x_1262_);
v___x_1264_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1265_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1266_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1257_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
v___x_1267_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1257_);
lean_ctor_set(v___x_1268_, 1, v___x_1267_);
lean_inc_ref(v___x_1268_);
lean_inc_ref(v___x_1266_);
v___x_1269_ = l_Lean_Syntax_node3(v___x_1257_, v___x_477_, v___x_1266_, v___x_1254_, v___x_1268_);
v___x_1270_ = l_Lean_Syntax_node3(v___x_1257_, v___x_477_, v___x_1266_, v___x_1256_, v___x_1268_);
v___x_1271_ = l_Lean_Syntax_node2(v___x_1257_, v___x_1264_, v___x_1269_, v___x_1270_);
v___x_1272_ = l_Lean_Syntax_node2(v___x_1257_, v___x_1258_, v___x_1263_, v___x_1271_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v_a_472_);
return v___x_1273_;
}
}
else
{
lean_object* v_quotContext_1274_; lean_object* v_currMacroScope_1275_; lean_object* v_ref_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v_quotContext_1274_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1275_ = lean_ctor_get(v_a_471_, 2);
v_ref_1276_ = lean_ctor_get(v_a_471_, 5);
v___x_1277_ = l_Lean_Syntax_getArg(v___x_483_, v___x_481_);
v___x_1278_ = lean_unsigned_to_nat(2u);
v___x_1279_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1278_);
lean_dec(v___x_483_);
v___x_1280_ = l_Lean_SourceInfo_fromRef(v_ref_1276_, v___x_489_);
v___x_1281_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1282_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__76);
v___x_1283_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__78));
lean_inc(v_currMacroScope_1275_);
lean_inc(v_quotContext_1274_);
v___x_1284_ = l_Lean_addMacroScope(v_quotContext_1274_, v___x_1283_, v_currMacroScope_1275_);
v___x_1285_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__81));
lean_inc_n(v___x_1280_, 6);
v___x_1286_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1280_);
lean_ctor_set(v___x_1286_, 1, v___x_1282_);
lean_ctor_set(v___x_1286_, 2, v___x_1284_);
lean_ctor_set(v___x_1286_, 3, v___x_1285_);
v___x_1287_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1288_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1289_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1280_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1280_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
lean_inc_ref(v___x_1291_);
lean_inc_ref(v___x_1289_);
v___x_1292_ = l_Lean_Syntax_node3(v___x_1280_, v___x_477_, v___x_1289_, v___x_1277_, v___x_1291_);
v___x_1293_ = l_Lean_Syntax_node3(v___x_1280_, v___x_477_, v___x_1289_, v___x_1279_, v___x_1291_);
v___x_1294_ = l_Lean_Syntax_node2(v___x_1280_, v___x_1287_, v___x_1292_, v___x_1293_);
v___x_1295_ = l_Lean_Syntax_node2(v___x_1280_, v___x_1281_, v___x_1286_, v___x_1294_);
v___x_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v_a_472_);
return v___x_1296_;
}
}
else
{
lean_object* v_quotContext_1297_; lean_object* v_currMacroScope_1298_; lean_object* v_ref_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v_quotContext_1297_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1298_ = lean_ctor_get(v_a_471_, 2);
v_ref_1299_ = lean_ctor_get(v_a_471_, 5);
v___x_1300_ = l_Lean_Syntax_getArg(v___x_483_, v___x_482_);
lean_dec(v___x_483_);
v___x_1301_ = l_Lean_SourceInfo_fromRef(v_ref_1299_, v___x_487_);
v___x_1302_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1303_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__83);
v___x_1304_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__85));
lean_inc(v_currMacroScope_1298_);
lean_inc(v_quotContext_1297_);
v___x_1305_ = l_Lean_addMacroScope(v_quotContext_1297_, v___x_1304_, v_currMacroScope_1298_);
v___x_1306_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__90));
lean_inc_n(v___x_1301_, 5);
v___x_1307_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1301_);
lean_ctor_set(v___x_1307_, 1, v___x_1303_);
lean_ctor_set(v___x_1307_, 2, v___x_1305_);
lean_ctor_set(v___x_1307_, 3, v___x_1306_);
v___x_1308_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1309_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1310_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1301_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1312_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1301_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___x_1313_ = l_Lean_Syntax_node3(v___x_1301_, v___x_477_, v___x_1310_, v___x_1300_, v___x_1312_);
v___x_1314_ = l_Lean_Syntax_node1(v___x_1301_, v___x_1308_, v___x_1313_);
v___x_1315_ = l_Lean_Syntax_node2(v___x_1301_, v___x_1302_, v___x_1307_, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v_a_472_);
return v___x_1316_;
}
}
else
{
lean_object* v_quotContext_1317_; lean_object* v_currMacroScope_1318_; lean_object* v_ref_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v_quotContext_1317_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1318_ = lean_ctor_get(v_a_471_, 2);
v_ref_1319_ = lean_ctor_get(v_a_471_, 5);
v___x_1320_ = l_Lean_Syntax_getArg(v___x_483_, v___x_481_);
v___x_1321_ = lean_unsigned_to_nat(2u);
v___x_1322_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1321_);
lean_dec(v___x_483_);
v___x_1323_ = l_Lean_SourceInfo_fromRef(v_ref_1319_, v___x_485_);
v___x_1324_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1325_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__92);
v___x_1326_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__94));
lean_inc(v_currMacroScope_1318_);
lean_inc(v_quotContext_1317_);
v___x_1327_ = l_Lean_addMacroScope(v_quotContext_1317_, v___x_1326_, v_currMacroScope_1318_);
v___x_1328_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__97));
lean_inc_n(v___x_1323_, 6);
v___x_1329_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1323_);
lean_ctor_set(v___x_1329_, 1, v___x_1325_);
lean_ctor_set(v___x_1329_, 2, v___x_1327_);
lean_ctor_set(v___x_1329_, 3, v___x_1328_);
v___x_1330_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1331_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1323_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1323_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
lean_inc_ref(v___x_1334_);
lean_inc_ref(v___x_1332_);
v___x_1335_ = l_Lean_Syntax_node3(v___x_1323_, v___x_477_, v___x_1332_, v___x_1320_, v___x_1334_);
v___x_1336_ = l_Lean_Syntax_node3(v___x_1323_, v___x_477_, v___x_1332_, v___x_1322_, v___x_1334_);
v___x_1337_ = l_Lean_Syntax_node2(v___x_1323_, v___x_1330_, v___x_1335_, v___x_1336_);
v___x_1338_ = l_Lean_Syntax_node2(v___x_1323_, v___x_1324_, v___x_1329_, v___x_1337_);
v___x_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
lean_ctor_set(v___x_1339_, 1, v_a_472_);
return v___x_1339_;
}
}
else
{
lean_object* v_quotContext_1340_; lean_object* v_currMacroScope_1341_; lean_object* v_ref_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_quotContext_1340_ = lean_ctor_get(v_a_471_, 1);
v_currMacroScope_1341_ = lean_ctor_get(v_a_471_, 2);
v_ref_1342_ = lean_ctor_get(v_a_471_, 5);
v___x_1343_ = l_Lean_Syntax_getArg(v___x_483_, v___x_481_);
v___x_1344_ = lean_unsigned_to_nat(2u);
v___x_1345_ = l_Lean_Syntax_getArg(v___x_483_, v___x_1344_);
lean_dec(v___x_483_);
v___x_1346_ = 0;
v___x_1347_ = l_Lean_SourceInfo_fromRef(v_ref_1342_, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1349_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__99);
v___x_1350_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__101));
lean_inc(v_currMacroScope_1341_);
lean_inc(v_quotContext_1340_);
v___x_1351_ = l_Lean_addMacroScope(v_quotContext_1340_, v___x_1350_, v_currMacroScope_1341_);
v___x_1352_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__104));
lean_inc_n(v___x_1347_, 6);
v___x_1353_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1347_);
lean_ctor_set(v___x_1353_, 1, v___x_1349_);
lean_ctor_set(v___x_1353_, 2, v___x_1351_);
lean_ctor_set(v___x_1353_, 3, v___x_1352_);
v___x_1354_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1355_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1356_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1347_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1347_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
lean_inc_ref(v___x_1358_);
lean_inc_ref(v___x_1356_);
v___x_1359_ = l_Lean_Syntax_node3(v___x_1347_, v___x_477_, v___x_1356_, v___x_1343_, v___x_1358_);
v___x_1360_ = l_Lean_Syntax_node3(v___x_1347_, v___x_477_, v___x_1356_, v___x_1345_, v___x_1358_);
v___x_1361_ = l_Lean_Syntax_node2(v___x_1347_, v___x_1354_, v___x_1359_, v___x_1360_);
v___x_1362_ = l_Lean_Syntax_node2(v___x_1347_, v___x_1348_, v___x_1353_, v___x_1361_);
v___x_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
lean_ctor_set(v___x_1363_, 1, v_a_472_);
return v___x_1363_;
}
}
v___jp_473_:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_box(1);
v___x_476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___y_474_);
return v___x_476_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___boxed(lean_object* v_x_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1(v_x_1364_, v_a_1365_, v_a_1366_);
lean_dec_ref(v_a_1365_);
return v_res_1367_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__0));
v___x_1370_ = l_String_toRawSubstring_x27(v___x_1369_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1(lean_object* v_x_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1387_ = ((lean_object*)(l_Std_Do_term_u22a2_u209b___00__closed__1));
lean_inc(v_x_1384_);
v___x_1388_ = l_Lean_Syntax_isOfKind(v_x_1384_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
lean_dec(v_x_1384_);
v___x_1389_ = lean_box(1);
v___x_1390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set(v___x_1390_, 1, v_a_1386_);
return v___x_1390_;
}
else
{
lean_object* v_quotContext_1391_; lean_object* v_currMacroScope_1392_; lean_object* v_ref_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v_quotContext_1391_ = lean_ctor_get(v_a_1385_, 1);
v_currMacroScope_1392_ = lean_ctor_get(v_a_1385_, 2);
v_ref_1393_ = lean_ctor_get(v_a_1385_, 5);
v___x_1394_ = lean_unsigned_to_nat(1u);
v___x_1395_ = l_Lean_Syntax_getArg(v_x_1384_, v___x_1394_);
lean_dec(v_x_1384_);
v___x_1396_ = 0;
v___x_1397_ = l_Lean_SourceInfo_fromRef(v_ref_1393_, v___x_1396_);
v___x_1398_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1399_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__1);
v___x_1400_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__3));
lean_inc_n(v_currMacroScope_1392_, 2);
lean_inc_n(v_quotContext_1391_, 2);
v___x_1401_ = l_Lean_addMacroScope(v_quotContext_1391_, v___x_1400_, v_currMacroScope_1392_);
v___x_1402_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__8));
lean_inc_n(v___x_1397_, 9);
v___x_1403_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1397_);
lean_ctor_set(v___x_1403_, 1, v___x_1399_);
lean_ctor_set(v___x_1403_, 2, v___x_1401_);
lean_ctor_set(v___x_1403_, 3, v___x_1402_);
v___x_1404_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1405_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
v___x_1406_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__6));
v___x_1407_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1397_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__1);
v___x_1409_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2));
v___x_1410_ = l_Lean_addMacroScope(v_quotContext_1391_, v___x_1409_, v_currMacroScope_1392_);
v___x_1411_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__6));
v___x_1412_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1397_);
lean_ctor_set(v___x_1412_, 1, v___x_1408_);
lean_ctor_set(v___x_1412_, 2, v___x_1410_);
lean_ctor_set(v___x_1412_, 3, v___x_1411_);
v___x_1413_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__12));
v___x_1414_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1397_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = l_Lean_Syntax_node3(v___x_1397_, v___x_1405_, v___x_1407_, v___x_1412_, v___x_1414_);
v___x_1416_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_1417_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1418_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1397_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
v___x_1419_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1420_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1397_);
lean_ctor_set(v___x_1420_, 1, v___x_1419_);
v___x_1421_ = l_Lean_Syntax_node3(v___x_1397_, v___x_1416_, v___x_1418_, v___x_1395_, v___x_1420_);
v___x_1422_ = l_Lean_Syntax_node2(v___x_1397_, v___x_1404_, v___x_1415_, v___x_1421_);
v___x_1423_ = l_Lean_Syntax_node2(v___x_1397_, v___x_1398_, v___x_1403_, v___x_1422_);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
lean_ctor_set(v___x_1424_, 1, v_a_1386_);
return v___x_1424_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___boxed(lean_object* v_x_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1(v_x_1425_, v_a_1426_, v_a_1427_);
lean_dec_ref(v_a_1426_);
return v_res_1428_;
}
}
static lean_object* _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1(void){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1430_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__0));
v___x_1431_ = l_String_toRawSubstring_x27(v___x_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1(lean_object* v_x_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v___x_1450_; uint8_t v___x_1451_; 
v___x_1450_ = ((lean_object*)(l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1));
lean_inc(v_x_1447_);
v___x_1451_ = l_Lean_Syntax_isOfKind(v_x_1447_, v___x_1450_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
lean_dec(v_x_1447_);
v___x_1452_ = lean_box(1);
v___x_1453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1452_);
lean_ctor_set(v___x_1453_, 1, v_a_1449_);
return v___x_1453_;
}
else
{
lean_object* v_quotContext_1454_; lean_object* v_currMacroScope_1455_; lean_object* v_ref_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; uint8_t v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v_quotContext_1454_ = lean_ctor_get(v_a_1448_, 1);
v_currMacroScope_1455_ = lean_ctor_get(v_a_1448_, 2);
v_ref_1456_ = lean_ctor_get(v_a_1448_, 5);
v___x_1457_ = lean_unsigned_to_nat(0u);
v___x_1458_ = l_Lean_Syntax_getArg(v_x_1447_, v___x_1457_);
v___x_1459_ = lean_unsigned_to_nat(2u);
v___x_1460_ = l_Lean_Syntax_getArg(v_x_1447_, v___x_1459_);
lean_dec(v_x_1447_);
v___x_1461_ = 0;
v___x_1462_ = l_Lean_SourceInfo_fromRef(v_ref_1456_, v___x_1461_);
v___x_1463_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
v___x_1464_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__1);
v___x_1465_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__3));
lean_inc(v_currMacroScope_1455_);
lean_inc(v_quotContext_1454_);
v___x_1466_ = l_Lean_addMacroScope(v_quotContext_1454_, v___x_1465_, v_currMacroScope_1455_);
v___x_1467_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___closed__6));
lean_inc_n(v___x_1462_, 6);
v___x_1468_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1462_);
lean_ctor_set(v___x_1468_, 1, v___x_1464_);
lean_ctor_set(v___x_1468_, 2, v___x_1466_);
lean_ctor_set(v___x_1468_, 3, v___x_1467_);
v___x_1469_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1470_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_1471_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
v___x_1472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1462_);
lean_ctor_set(v___x_1472_, 1, v___x_1471_);
v___x_1473_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1462_);
lean_ctor_set(v___x_1474_, 1, v___x_1473_);
lean_inc_ref(v___x_1474_);
lean_inc_ref(v___x_1472_);
v___x_1475_ = l_Lean_Syntax_node3(v___x_1462_, v___x_1470_, v___x_1472_, v___x_1458_, v___x_1474_);
v___x_1476_ = l_Lean_Syntax_node3(v___x_1462_, v___x_1470_, v___x_1472_, v___x_1460_, v___x_1474_);
v___x_1477_ = l_Lean_Syntax_node2(v___x_1462_, v___x_1469_, v___x_1475_, v___x_1476_);
v___x_1478_ = l_Lean_Syntax_node2(v___x_1462_, v___x_1463_, v___x_1468_, v___x_1477_);
v___x_1479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
lean_ctor_set(v___x_1479_, 1, v_a_1449_);
return v___x_1479_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1___boxed(lean_object* v_x_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a3_u22a2_u209b____1(v_x_1480_, v_a_1481_, v_a_1482_);
lean_dec_ref(v_a_1481_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure(lean_object* v_x_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v___x_1487_; uint8_t v___x_1488_; 
v___x_1487_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_1484_);
v___x_1488_ = l_Lean_Syntax_isOfKind(v_x_1484_, v___x_1487_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_dec(v_x_1484_);
v___x_1489_ = lean_box(0);
v___x_1490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
lean_ctor_set(v___x_1490_, 1, v_a_1486_);
return v___x_1490_;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; uint8_t v___x_1494_; 
v___x_1491_ = lean_unsigned_to_nat(1u);
v___x_1492_ = l_Lean_Syntax_getArg(v_x_1484_, v___x_1491_);
lean_dec(v_x_1484_);
v___x_1493_ = l_Lean_Syntax_getNumArgs(v___x_1492_);
v___x_1494_ = lean_nat_dec_le(v___x_1491_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_dec(v___x_1493_);
lean_dec(v___x_1492_);
v___x_1495_ = lean_box(0);
v___x_1496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
lean_ctor_set(v___x_1496_, 1, v_a_1486_);
return v___x_1496_;
}
else
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v_ts_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1497_ = lean_unsigned_to_nat(0u);
v___x_1498_ = l_Lean_Syntax_getArg(v___x_1492_, v___x_1497_);
v___x_1499_ = l_Lean_Syntax_getArgs(v___x_1492_);
lean_dec(v___x_1492_);
v___x_1500_ = l_Array_extract___redArg(v___x_1499_, v___x_1491_, v___x_1493_);
lean_dec_ref(v___x_1499_);
v___x_1501_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1502_ = lean_box(2);
v___x_1503_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
lean_ctor_set(v___x_1503_, 1, v___x_1501_);
lean_ctor_set(v___x_1503_, 2, v___x_1500_);
v_ts_1504_ = l_Lean_Syntax_getArgs(v___x_1503_);
lean_dec_ref_known(v___x_1503_, 3);
v___x_1505_ = lean_array_get_size(v_ts_1504_);
v___x_1506_ = lean_nat_dec_eq(v___x_1505_, v___x_1497_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1507_ = l_Lean_SourceInfo_fromRef(v_a_1485_, v___x_1506_);
v___x_1508_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
v___x_1509_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__6));
lean_inc_n(v___x_1507_, 4);
v___x_1510_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1507_);
lean_ctor_set(v___x_1510_, 1, v___x_1509_);
v___x_1511_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__12));
v___x_1512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1507_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = l_Lean_Syntax_node3(v___x_1507_, v___x_1508_, v___x_1510_, v___x_1498_, v___x_1512_);
v___x_1514_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_1515_ = l_Array_append___redArg(v___x_1514_, v_ts_1504_);
lean_dec_ref(v_ts_1504_);
v___x_1516_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1507_);
lean_ctor_set(v___x_1516_, 1, v___x_1501_);
lean_ctor_set(v___x_1516_, 2, v___x_1515_);
v___x_1517_ = l_Lean_Syntax_node2(v___x_1507_, v___x_1487_, v___x_1513_, v___x_1516_);
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1517_);
lean_ctor_set(v___x_1518_, 1, v_a_1486_);
return v___x_1518_;
}
else
{
uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
lean_dec_ref(v_ts_1504_);
v___x_1519_ = 0;
v___x_1520_ = l_Lean_SourceInfo_fromRef(v_a_1485_, v___x_1519_);
v___x_1521_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
v___x_1522_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__6));
lean_inc_n(v___x_1520_, 2);
v___x_1523_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1520_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__12));
v___x_1525_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1520_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
v___x_1526_ = l_Lean_Syntax_node3(v___x_1520_, v___x_1521_, v___x_1523_, v___x_1498_, v___x_1525_);
v___x_1527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
lean_ctor_set(v___x_1527_, 1, v_a_1486_);
return v___x_1527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandPure___boxed(lean_object* v_x_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Std_Do_SPred_Notation_unexpandPure(v_x_1528_, v_a_1529_, v_a_1530_);
lean_dec(v_a_1529_);
return v_res_1531_;
}
}
static lean_object* _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1544_ = lean_unsigned_to_nat(0u);
v___x_1545_ = lean_box(0);
v___x_1546_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__5));
v___x_1547_ = l_Lean_addMacroScope(v___x_1546_, v___x_1545_, v___x_1544_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(lean_object* v_x_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v___x_1577_; uint8_t v___x_1578_; 
v___x_1577_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
lean_inc(v_x_1574_);
v___x_1578_ = l_Lean_Syntax_isOfKind(v_x_1574_, v___x_1577_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; uint8_t v___x_1580_; 
v___x_1579_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__20));
lean_inc(v_x_1574_);
v___x_1580_ = l_Lean_Syntax_isOfKind(v_x_1574_, v___x_1579_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; uint8_t v___x_1582_; 
v___x_1581_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__1));
lean_inc(v_x_1574_);
v___x_1582_ = l_Lean_Syntax_isOfKind(v_x_1574_, v___x_1581_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; lean_object* v___x_1584_; uint8_t v___x_1585_; 
v___x_1583_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__45));
v___x_1584_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
lean_inc(v_x_1574_);
v___x_1585_ = l_Lean_Syntax_isOfKind(v_x_1574_, v___x_1584_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1586_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__3));
lean_inc(v_x_1574_);
v___x_1587_ = l_Lean_Syntax_isOfKind(v_x_1574_, v___x_1586_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1588_, 0, v_x_1574_);
lean_ctor_set(v___x_1588_, 1, v___y_1576_);
return v___x_1588_;
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; uint8_t v___x_1592_; 
v___x_1589_ = lean_unsigned_to_nat(0u);
v___x_1590_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1589_);
v___x_1591_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
lean_inc(v___x_1590_);
v___x_1592_ = l_Lean_Syntax_isOfKind(v___x_1590_, v___x_1591_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; 
lean_dec(v___x_1590_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v_x_1574_);
lean_ctor_set(v___x_1593_, 1, v___y_1576_);
return v___x_1593_;
}
else
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_1594_ = lean_unsigned_to_nat(1u);
v___x_1595_ = l_Lean_Syntax_getArg(v___x_1590_, v___x_1594_);
lean_dec(v___x_1590_);
v___x_1596_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
lean_inc(v___x_1595_);
v___x_1597_ = l_Lean_Syntax_isOfKind(v___x_1595_, v___x_1596_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
lean_dec(v___x_1595_);
v___x_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1598_, 0, v_x_1574_);
lean_ctor_set(v___x_1598_, 1, v___y_1576_);
return v___x_1598_;
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; uint8_t v___x_1601_; 
v___x_1599_ = l_Lean_Syntax_getArg(v___x_1595_, v___x_1589_);
lean_dec(v___x_1595_);
v___x_1600_ = lean_box(0);
v___x_1601_ = l_Lean_Syntax_matchesIdent(v___x_1599_, v___x_1600_);
lean_dec(v___x_1599_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; 
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v_x_1574_);
lean_ctor_set(v___x_1602_, 1, v___y_1576_);
return v___x_1602_;
}
else
{
lean_object* v___x_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
v___x_1603_ = lean_unsigned_to_nat(3u);
v___x_1604_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1603_);
lean_inc(v___x_1604_);
v___x_1605_ = l_Lean_Syntax_matchesNull(v___x_1604_, v___x_1594_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; 
lean_dec(v___x_1604_);
v___x_1606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1606_, 0, v_x_1574_);
lean_ctor_set(v___x_1606_, 1, v___y_1576_);
return v___x_1606_;
}
else
{
lean_object* v_P_1607_; lean_object* v___x_1608_; 
v_P_1607_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1594_);
lean_dec(v_x_1574_);
v___x_1608_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_1607_, v___y_1575_, v___y_1576_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1634_; 
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
v_a_1610_ = lean_ctor_get(v___x_1608_, 1);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1612_ = v___x_1608_;
v_isShared_1613_ = v_isSharedCheck_1634_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_inc(v_a_1609_);
lean_dec(v___x_1608_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1634_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1632_; 
v___x_1614_ = l_Lean_Syntax_getArg(v___x_1604_, v___x_1589_);
lean_dec(v___x_1604_);
v___x_1615_ = l_Lean_SourceInfo_fromRef(v___y_1575_, v___x_1585_);
v___x_1616_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
lean_inc_n(v___x_1615_, 7);
v___x_1617_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_1619_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6);
v___x_1620_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14));
v___x_1621_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1615_);
lean_ctor_set(v___x_1621_, 1, v___x_1618_);
lean_ctor_set(v___x_1621_, 2, v___x_1619_);
lean_ctor_set(v___x_1621_, 3, v___x_1620_);
v___x_1622_ = l_Lean_Syntax_node1(v___x_1615_, v___x_1596_, v___x_1621_);
v___x_1623_ = l_Lean_Syntax_node2(v___x_1615_, v___x_1591_, v___x_1617_, v___x_1622_);
v___x_1624_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__56));
v___x_1625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1615_);
lean_ctor_set(v___x_1625_, 1, v___x_1624_);
v___x_1626_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1627_ = l_Lean_Syntax_node1(v___x_1615_, v___x_1626_, v___x_1614_);
v___x_1628_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1615_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = l_Lean_Syntax_node5(v___x_1615_, v___x_1586_, v___x_1623_, v_a_1609_, v___x_1625_, v___x_1627_, v___x_1629_);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 0, v___x_1630_);
v___x_1632_ = v___x_1612_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_a_1610_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
else
{
lean_dec(v___x_1604_);
return v___x_1608_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v___x_1635_ = lean_unsigned_to_nat(1u);
v___x_1636_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1635_);
v___x_1637_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
lean_inc(v___x_1636_);
v___x_1638_ = l_Lean_Syntax_isOfKind(v___x_1636_, v___x_1637_);
if (v___x_1638_ == 0)
{
lean_object* v___x_1639_; 
lean_dec(v___x_1636_);
v___x_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1639_, 0, v_x_1574_);
lean_ctor_set(v___x_1639_, 1, v___y_1576_);
return v___x_1639_;
}
else
{
lean_object* v___x_1640_; lean_object* v___x_1641_; uint8_t v___x_1642_; 
v___x_1640_ = lean_unsigned_to_nat(0u);
v___x_1641_ = l_Lean_Syntax_getArg(v___x_1636_, v___x_1635_);
v___x_1642_ = l_Lean_Syntax_matchesNull(v___x_1641_, v___x_1640_);
if (v___x_1642_ == 0)
{
lean_object* v___x_1643_; 
lean_dec(v___x_1636_);
v___x_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1643_, 0, v_x_1574_);
lean_ctor_set(v___x_1643_, 1, v___y_1576_);
return v___x_1643_;
}
else
{
lean_object* v___x_1644_; lean_object* v_b_1645_; lean_object* v___x_1646_; 
lean_dec(v_x_1574_);
v___x_1644_ = lean_unsigned_to_nat(3u);
v_b_1645_ = l_Lean_Syntax_getArg(v___x_1636_, v___x_1644_);
v___x_1646_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_b_1645_, v___y_1575_, v___y_1576_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1668_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
v_a_1648_ = lean_ctor_get(v___x_1646_, 1);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1650_ = v___x_1646_;
v_isShared_1651_ = v_isSharedCheck_1668_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_inc(v_a_1647_);
lean_dec(v___x_1646_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1668_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1652_; lean_object* v_xs_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1666_; 
v___x_1652_ = l_Lean_Syntax_getArg(v___x_1636_, v___x_1640_);
lean_dec(v___x_1636_);
v_xs_1653_ = l_Lean_Syntax_getArgs(v___x_1652_);
lean_dec(v___x_1652_);
v___x_1654_ = l_Lean_SourceInfo_fromRef(v___y_1575_, v___x_1582_);
lean_inc_n(v___x_1654_, 5);
v___x_1655_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
lean_ctor_set(v___x_1655_, 1, v___x_1583_);
v___x_1656_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_1657_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_1658_ = l_Array_append___redArg(v___x_1657_, v_xs_1653_);
lean_dec_ref(v_xs_1653_);
v___x_1659_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1654_);
lean_ctor_set(v___x_1659_, 1, v___x_1656_);
lean_ctor_set(v___x_1659_, 2, v___x_1658_);
v___x_1660_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1654_);
lean_ctor_set(v___x_1660_, 1, v___x_1656_);
lean_ctor_set(v___x_1660_, 2, v___x_1657_);
v___x_1661_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__50));
v___x_1662_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1654_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = l_Lean_Syntax_node4(v___x_1654_, v___x_1637_, v___x_1659_, v___x_1660_, v___x_1662_, v_a_1647_);
v___x_1664_ = l_Lean_Syntax_node2(v___x_1654_, v___x_1584_, v___x_1655_, v___x_1663_);
if (v_isShared_1651_ == 0)
{
lean_ctor_set(v___x_1650_, 0, v___x_1664_);
v___x_1666_ = v___x_1650_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1664_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v_a_1648_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
else
{
lean_dec(v___x_1636_);
return v___x_1646_;
}
}
}
}
}
else
{
lean_object* v___x_1669_; lean_object* v_t_1670_; lean_object* v___x_1671_; 
v___x_1669_ = lean_unsigned_to_nat(3u);
v_t_1670_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1669_);
v___x_1671_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_t_1670_, v___y_1575_, v___y_1576_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1701_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
v_a_1673_ = lean_ctor_get(v___x_1671_, 1);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1675_ = v___x_1671_;
v_isShared_1676_ = v_isSharedCheck_1701_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_inc(v_a_1672_);
lean_dec(v___x_1671_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1701_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v_e_1678_; lean_object* v___x_1679_; 
v___x_1677_ = lean_unsigned_to_nat(5u);
v_e_1678_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1677_);
v___x_1679_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_e_1678_, v___y_1575_, v_a_1673_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1700_; 
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
v_a_1681_ = lean_ctor_get(v___x_1679_, 1);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1683_ = v___x_1679_;
v_isShared_1684_ = v_isSharedCheck_1700_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_inc(v_a_1680_);
lean_dec(v___x_1679_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1700_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1685_ = lean_unsigned_to_nat(1u);
v___x_1686_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1685_);
lean_dec(v_x_1574_);
v___x_1687_ = l_Lean_SourceInfo_fromRef(v___y_1575_, v___x_1580_);
v___x_1688_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__15));
lean_inc(v___x_1687_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set_tag(v___x_1675_, 2);
lean_ctor_set(v___x_1675_, 1, v___x_1688_);
lean_ctor_set(v___x_1675_, 0, v___x_1687_);
v___x_1690_ = v___x_1675_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1687_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v___x_1691_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__16));
lean_inc_n(v___x_1687_, 2);
v___x_1692_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1687_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
v___x_1693_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__17));
v___x_1694_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1687_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = l_Lean_Syntax_node6(v___x_1687_, v___x_1581_, v___x_1690_, v___x_1686_, v___x_1692_, v_a_1672_, v___x_1694_, v_a_1680_);
if (v_isShared_1684_ == 0)
{
lean_ctor_set(v___x_1683_, 0, v___x_1695_);
v___x_1697_ = v___x_1683_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
lean_ctor_set(v_reuseFailAlloc_1698_, 1, v_a_1681_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_del_object(v___x_1675_);
lean_dec(v_a_1672_);
lean_dec(v_x_1574_);
return v___x_1679_;
}
}
}
else
{
lean_dec(v_x_1574_);
return v___x_1671_;
}
}
}
else
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1702_ = lean_unsigned_to_nat(0u);
v___x_1703_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1702_);
v___x_1704_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__22));
lean_inc(v___x_1703_);
v___x_1705_ = l_Lean_Syntax_isOfKind(v___x_1703_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; 
lean_dec(v___x_1703_);
v___x_1706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1706_, 0, v_x_1574_);
lean_ctor_set(v___x_1706_, 1, v___y_1576_);
return v___x_1706_;
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; uint8_t v___x_1710_; 
v___x_1707_ = lean_unsigned_to_nat(1u);
v___x_1708_ = l_Lean_Syntax_getArg(v___x_1703_, v___x_1707_);
lean_dec(v___x_1703_);
v___x_1709_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__25));
lean_inc(v___x_1708_);
v___x_1710_ = l_Lean_Syntax_isOfKind(v___x_1708_, v___x_1709_);
if (v___x_1710_ == 0)
{
lean_object* v___x_1711_; 
lean_dec(v___x_1708_);
v___x_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1711_, 0, v_x_1574_);
lean_ctor_set(v___x_1711_, 1, v___y_1576_);
return v___x_1711_;
}
else
{
lean_object* v___x_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; 
v___x_1712_ = l_Lean_Syntax_getArg(v___x_1708_, v___x_1702_);
lean_dec(v___x_1708_);
v___x_1713_ = lean_box(0);
v___x_1714_ = l_Lean_Syntax_matchesIdent(v___x_1712_, v___x_1713_);
lean_dec(v___x_1712_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; 
v___x_1715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1715_, 0, v_x_1574_);
lean_ctor_set(v___x_1715_, 1, v___y_1576_);
return v___x_1715_;
}
else
{
lean_object* v_P_1716_; lean_object* v___x_1717_; 
v_P_1716_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1707_);
lean_dec(v_x_1574_);
v___x_1717_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_1716_, v___y_1575_, v___y_1576_);
if (lean_obj_tag(v___x_1717_) == 0)
{
lean_object* v_a_1718_; lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1738_; 
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
v_a_1719_ = lean_ctor_get(v___x_1717_, 1);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1721_ = v___x_1717_;
v_isShared_1722_ = v_isSharedCheck_1738_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_inc(v_a_1718_);
lean_dec(v___x_1717_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1738_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1723_ = l_Lean_SourceInfo_fromRef(v___y_1575_, v___x_1578_);
v___x_1724_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__23));
lean_inc_n(v___x_1723_, 5);
v___x_1725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1723_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
v___x_1726_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__27);
v___x_1727_ = lean_obj_once(&l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6, &l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6_once, _init_l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__6);
v___x_1728_ = ((lean_object*)(l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___closed__14));
v___x_1729_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1723_);
lean_ctor_set(v___x_1729_, 1, v___x_1726_);
lean_ctor_set(v___x_1729_, 2, v___x_1727_);
lean_ctor_set(v___x_1729_, 3, v___x_1728_);
v___x_1730_ = l_Lean_Syntax_node1(v___x_1723_, v___x_1709_, v___x_1729_);
v___x_1731_ = l_Lean_Syntax_node2(v___x_1723_, v___x_1704_, v___x_1725_, v___x_1730_);
v___x_1732_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1733_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1723_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = l_Lean_Syntax_node3(v___x_1723_, v___x_1579_, v___x_1731_, v_a_1718_, v___x_1733_);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v___x_1734_);
v___x_1736_ = v___x_1721_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1734_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_a_1719_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
else
{
return v___x_1717_;
}
}
}
}
}
}
else
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1739_ = lean_unsigned_to_nat(1u);
v___x_1740_ = l_Lean_Syntax_getArg(v_x_1574_, v___x_1739_);
lean_dec(v_x_1574_);
v___x_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
lean_ctor_set(v___x_1741_, 1, v___y_1576_);
return v___x_1741_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0___boxed(lean_object* v_x_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_x_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1743_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails(lean_object* v_x_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v___x_1750_; uint8_t v___x_1751_; 
v___x_1750_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_1747_);
v___x_1751_ = l_Lean_Syntax_isOfKind(v_x_1747_, v___x_1750_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
lean_dec(v_x_1747_);
v___x_1752_ = lean_box(0);
v___x_1753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
lean_ctor_set(v___x_1753_, 1, v_a_1749_);
return v___x_1753_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; 
v___x_1754_ = lean_unsigned_to_nat(1u);
v___x_1755_ = l_Lean_Syntax_getArg(v_x_1747_, v___x_1754_);
lean_dec(v_x_1747_);
v___x_1756_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1755_);
v___x_1757_ = l_Lean_Syntax_matchesNull(v___x_1755_, v___x_1756_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v___x_1759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1758_);
lean_ctor_set(v___x_1759_, 1, v_a_1749_);
return v___x_1759_;
}
else
{
lean_object* v___x_1760_; lean_object* v_P_1761_; lean_object* v___x_1762_; 
v___x_1760_ = lean_unsigned_to_nat(0u);
v_P_1761_ = l_Lean_Syntax_getArg(v___x_1755_, v___x_1760_);
v___x_1762_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_1761_, v_a_1748_, v_a_1749_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_a_1763_; lean_object* v_a_1764_; lean_object* v_Q_1765_; lean_object* v___x_1766_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1763_);
v_a_1764_ = lean_ctor_get(v___x_1762_, 1);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1762_, 2);
v_Q_1765_ = l_Lean_Syntax_getArg(v___x_1755_, v___x_1754_);
lean_dec(v___x_1755_);
v___x_1766_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_1765_, v_a_1748_, v_a_1764_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1802_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
v_a_1768_ = lean_ctor_get(v___x_1766_, 1);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1770_ = v___x_1766_;
v_isShared_1771_ = v_isSharedCheck_1802_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_inc(v_a_1767_);
lean_dec(v___x_1766_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1802_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; uint8_t v___x_1773_; 
v___x_1772_ = ((lean_object*)(l_Std_Do_term_u231c___u231d___closed__3));
lean_inc(v_a_1763_);
v___x_1773_ = l_Lean_Syntax_isOfKind(v_a_1763_, v___x_1772_);
if (v___x_1773_ == 0)
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1780_; 
v___x_1774_ = l_Lean_SourceInfo_fromRef(v_a_1748_, v___x_1773_);
v___x_1775_ = ((lean_object*)(l_Std_Do_term___u22a2_u209b___00__closed__1));
v___x_1776_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandEntails___closed__0));
lean_inc(v___x_1774_);
v___x_1777_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1774_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
v___x_1778_ = l_Lean_Syntax_node3(v___x_1774_, v___x_1775_, v_a_1763_, v___x_1777_, v_a_1767_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1778_);
v___x_1780_ = v___x_1770_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1778_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_a_1768_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1782_ = l_Lean_Syntax_getArg(v_a_1763_, v___x_1754_);
v___x_1783_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u22a2_u209b____1___closed__2));
v___x_1784_ = l_Lean_Syntax_matchesIdent(v___x_1782_, v___x_1783_);
lean_dec(v___x_1782_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1791_; 
v___x_1785_ = l_Lean_SourceInfo_fromRef(v_a_1748_, v___x_1784_);
v___x_1786_ = ((lean_object*)(l_Std_Do_term___u22a2_u209b___00__closed__1));
v___x_1787_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandEntails___closed__0));
lean_inc(v___x_1785_);
v___x_1788_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1785_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = l_Lean_Syntax_node3(v___x_1785_, v___x_1786_, v_a_1763_, v___x_1788_, v_a_1767_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1789_);
v___x_1791_ = v___x_1770_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
lean_ctor_set(v_reuseFailAlloc_1792_, 1, v_a_1768_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
else
{
uint8_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1800_; 
lean_dec(v_a_1763_);
v___x_1793_ = 0;
v___x_1794_ = l_Lean_SourceInfo_fromRef(v_a_1748_, v___x_1793_);
v___x_1795_ = ((lean_object*)(l_Std_Do_term_u22a2_u209b___00__closed__1));
v___x_1796_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandEntails___closed__0));
lean_inc(v___x_1794_);
v___x_1797_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1794_);
lean_ctor_set(v___x_1797_, 1, v___x_1796_);
v___x_1798_ = l_Lean_Syntax_node2(v___x_1794_, v___x_1795_, v___x_1797_, v_a_1767_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1798_);
v___x_1800_ = v___x_1770_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1798_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v_a_1768_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
}
else
{
lean_object* v_a_1803_; lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v_a_1763_);
v_a_1803_ = lean_ctor_get(v___x_1766_, 0);
v_a_1804_ = lean_ctor_get(v___x_1766_, 1);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1766_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_inc(v_a_1803_);
lean_dec(v___x_1766_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1803_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
else
{
lean_object* v_a_1812_; lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec(v___x_1755_);
v_a_1812_ = lean_ctor_get(v___x_1762_, 0);
v_a_1813_ = lean_ctor_get(v___x_1762_, 1);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1762_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_inc(v_a_1812_);
lean_dec(v___x_1762_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1812_);
lean_ctor_set(v_reuseFailAlloc_1819_, 1, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandEntails___boxed(lean_object* v_x_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Std_Do_SPred_Notation_unexpandEntails(v_x_1821_, v_a_1822_, v_a_1823_);
lean_dec(v_a_1822_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails(lean_object* v_x_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v___x_1829_; uint8_t v___x_1830_; 
v___x_1829_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_1826_);
v___x_1830_ = l_Lean_Syntax_isOfKind(v_x_1826_, v___x_1829_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
lean_dec(v_x_1826_);
v___x_1831_ = lean_box(0);
v___x_1832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
lean_ctor_set(v___x_1832_, 1, v_a_1828_);
return v___x_1832_;
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1833_ = lean_unsigned_to_nat(1u);
v___x_1834_ = l_Lean_Syntax_getArg(v_x_1826_, v___x_1833_);
lean_dec(v_x_1826_);
v___x_1835_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1834_);
v___x_1836_ = l_Lean_Syntax_matchesNull(v___x_1834_, v___x_1835_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
lean_dec(v___x_1834_);
v___x_1837_ = lean_box(0);
v___x_1838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
lean_ctor_set(v___x_1838_, 1, v_a_1828_);
return v___x_1838_;
}
else
{
lean_object* v___x_1839_; lean_object* v_P_1840_; lean_object* v___x_1841_; 
v___x_1839_ = lean_unsigned_to_nat(0u);
v_P_1840_ = l_Lean_Syntax_getArg(v___x_1834_, v___x_1839_);
v___x_1841_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_1840_, v_a_1827_, v_a_1828_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; lean_object* v_a_1843_; lean_object* v_Q_1844_; lean_object* v___x_1845_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
v_a_1843_ = lean_ctor_get(v___x_1841_, 1);
lean_inc(v_a_1843_);
lean_dec_ref_known(v___x_1841_, 2);
v_Q_1844_ = l_Lean_Syntax_getArg(v___x_1834_, v___x_1833_);
lean_dec(v___x_1834_);
v___x_1845_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_1844_, v_a_1827_, v_a_1843_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1860_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_a_1847_ = lean_ctor_get(v___x_1845_, 1);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1849_ = v___x_1845_;
v_isShared_1850_ = v_isSharedCheck_1860_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1860_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
uint8_t v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1851_ = 0;
v___x_1852_ = l_Lean_SourceInfo_fromRef(v_a_1827_, v___x_1851_);
v___x_1853_ = ((lean_object*)(l_Std_Do_term___u22a3_u22a2_u209b___00__closed__1));
v___x_1854_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandBientails___closed__0));
lean_inc(v___x_1852_);
v___x_1855_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1852_);
lean_ctor_set(v___x_1855_, 1, v___x_1854_);
v___x_1856_ = l_Lean_Syntax_node3(v___x_1852_, v___x_1853_, v_a_1842_, v___x_1855_, v_a_1846_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1856_);
v___x_1858_ = v___x_1849_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1859_, 1, v_a_1847_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
else
{
lean_object* v_a_1861_; lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
lean_dec(v_a_1842_);
v_a_1861_ = lean_ctor_get(v___x_1845_, 0);
v_a_1862_ = lean_ctor_get(v___x_1845_, 1);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1845_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_inc(v_a_1861_);
lean_dec(v___x_1845_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1861_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec(v___x_1834_);
v_a_1870_ = lean_ctor_get(v___x_1841_, 0);
v_a_1871_ = lean_ctor_get(v___x_1841_, 1);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1841_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_inc(v_a_1870_);
lean_dec(v___x_1841_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1870_);
lean_ctor_set(v_reuseFailAlloc_1877_, 1, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandBientails___boxed(lean_object* v_x_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Std_Do_SPred_Notation_unexpandBientails(v_x_1879_, v_a_1880_, v_a_1881_);
lean_dec(v_a_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd(lean_object* v_x_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v___x_1887_; uint8_t v___x_1888_; 
v___x_1887_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_1884_);
v___x_1888_ = l_Lean_Syntax_isOfKind(v_x_1884_, v___x_1887_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec(v_x_1884_);
v___x_1889_ = lean_box(0);
v___x_1890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1889_);
lean_ctor_set(v___x_1890_, 1, v_a_1886_);
return v___x_1890_;
}
else
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; 
v___x_1891_ = lean_unsigned_to_nat(1u);
v___x_1892_ = l_Lean_Syntax_getArg(v_x_1884_, v___x_1891_);
lean_dec(v_x_1884_);
v___x_1893_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1892_);
v___x_1894_ = l_Lean_Syntax_matchesNull(v___x_1892_, v___x_1893_);
if (v___x_1894_ == 0)
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v___x_1896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
lean_ctor_set(v___x_1896_, 1, v_a_1886_);
return v___x_1896_;
}
else
{
lean_object* v___x_1897_; lean_object* v_P_1898_; lean_object* v___x_1899_; 
v___x_1897_ = lean_unsigned_to_nat(0u);
v_P_1898_ = l_Lean_Syntax_getArg(v___x_1892_, v___x_1897_);
v___x_1899_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_1898_, v_a_1885_, v_a_1886_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; lean_object* v_a_1901_; lean_object* v_Q_1902_; lean_object* v___x_1903_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_a_1900_);
v_a_1901_ = lean_ctor_get(v___x_1899_, 1);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1899_, 2);
v_Q_1902_ = l_Lean_Syntax_getArg(v___x_1892_, v___x_1891_);
lean_dec(v___x_1892_);
v___x_1903_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_1902_, v_a_1885_, v_a_1901_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1924_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
v_a_1905_ = lean_ctor_get(v___x_1903_, 1);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1907_ = v___x_1903_;
v_isShared_1908_ = v_isSharedCheck_1924_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_inc(v_a_1904_);
lean_dec(v___x_1903_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1924_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
uint8_t v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1922_; 
v___x_1909_ = 0;
v___x_1910_ = l_Lean_SourceInfo_fromRef(v_a_1885_, v___x_1909_);
v___x_1911_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_1912_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_1910_, 4);
v___x_1913_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1910_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__1));
v___x_1915_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandAnd___closed__0));
v___x_1916_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1910_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
v___x_1917_ = l_Lean_Syntax_node3(v___x_1910_, v___x_1914_, v_a_1900_, v___x_1916_, v_a_1904_);
v___x_1918_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1919_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1910_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
v___x_1920_ = l_Lean_Syntax_node3(v___x_1910_, v___x_1911_, v___x_1913_, v___x_1917_, v___x_1919_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v___x_1920_);
v___x_1922_ = v___x_1907_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v___x_1920_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_a_1905_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
else
{
lean_object* v_a_1925_; lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec(v_a_1900_);
v_a_1925_ = lean_ctor_get(v___x_1903_, 0);
v_a_1926_ = lean_ctor_get(v___x_1903_, 1);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1903_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_inc(v_a_1925_);
lean_dec(v___x_1903_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1925_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
lean_dec(v___x_1892_);
v_a_1934_ = lean_ctor_get(v___x_1899_, 0);
v_a_1935_ = lean_ctor_get(v___x_1899_, 1);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1899_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_inc(v_a_1934_);
lean_dec(v___x_1899_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1934_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandAnd___boxed(lean_object* v_x_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Std_Do_SPred_Notation_unexpandAnd(v_x_1943_, v_a_1944_, v_a_1945_);
lean_dec(v_a_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr(lean_object* v_x_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_){
_start:
{
lean_object* v___x_1951_; uint8_t v___x_1952_; 
v___x_1951_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_1948_);
v___x_1952_ = l_Lean_Syntax_isOfKind(v_x_1948_, v___x_1951_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; lean_object* v___x_1954_; 
lean_dec(v_x_1948_);
v___x_1953_ = lean_box(0);
v___x_1954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
lean_ctor_set(v___x_1954_, 1, v_a_1950_);
return v___x_1954_;
}
else
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v___x_1955_ = lean_unsigned_to_nat(1u);
v___x_1956_ = l_Lean_Syntax_getArg(v_x_1948_, v___x_1955_);
lean_dec(v_x_1948_);
v___x_1957_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1956_);
v___x_1958_ = l_Lean_Syntax_matchesNull(v___x_1956_, v___x_1957_);
if (v___x_1958_ == 0)
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v___x_1960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1960_, 0, v___x_1959_);
lean_ctor_set(v___x_1960_, 1, v_a_1950_);
return v___x_1960_;
}
else
{
lean_object* v___x_1961_; lean_object* v_P_1962_; lean_object* v___x_1963_; 
v___x_1961_ = lean_unsigned_to_nat(0u);
v_P_1962_ = l_Lean_Syntax_getArg(v___x_1956_, v___x_1961_);
v___x_1963_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_1962_, v_a_1949_, v_a_1950_);
if (lean_obj_tag(v___x_1963_) == 0)
{
lean_object* v_a_1964_; lean_object* v_a_1965_; lean_object* v_Q_1966_; lean_object* v___x_1967_; 
v_a_1964_ = lean_ctor_get(v___x_1963_, 0);
lean_inc(v_a_1964_);
v_a_1965_ = lean_ctor_get(v___x_1963_, 1);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1963_, 2);
v_Q_1966_ = l_Lean_Syntax_getArg(v___x_1956_, v___x_1955_);
lean_dec(v___x_1956_);
v___x_1967_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_1966_, v_a_1949_, v_a_1965_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1988_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
v_a_1969_ = lean_ctor_get(v___x_1967_, 1);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1971_ = v___x_1967_;
v_isShared_1972_ = v_isSharedCheck_1988_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_inc(v_a_1968_);
lean_dec(v___x_1967_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1988_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
uint8_t v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1986_; 
v___x_1973_ = 0;
v___x_1974_ = l_Lean_SourceInfo_fromRef(v_a_1949_, v___x_1973_);
v___x_1975_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_1976_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_1974_, 4);
v___x_1977_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1974_);
lean_ctor_set(v___x_1977_, 1, v___x_1976_);
v___x_1978_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__3));
v___x_1979_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandOr___closed__0));
v___x_1980_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1974_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = l_Lean_Syntax_node3(v___x_1974_, v___x_1978_, v_a_1964_, v___x_1980_, v_a_1968_);
v___x_1982_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_1983_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1974_);
lean_ctor_set(v___x_1983_, 1, v___x_1982_);
v___x_1984_ = l_Lean_Syntax_node3(v___x_1974_, v___x_1975_, v___x_1977_, v___x_1981_, v___x_1983_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v___x_1984_);
v___x_1986_ = v___x_1971_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v___x_1984_);
lean_ctor_set(v_reuseFailAlloc_1987_, 1, v_a_1969_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
else
{
lean_object* v_a_1989_; lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_dec(v_a_1964_);
v_a_1989_ = lean_ctor_get(v___x_1967_, 0);
v_a_1990_ = lean_ctor_get(v___x_1967_, 1);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1967_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_inc(v_a_1989_);
lean_dec(v___x_1967_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1989_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
lean_dec(v___x_1956_);
v_a_1998_ = lean_ctor_get(v___x_1963_, 0);
v_a_1999_ = lean_ctor_get(v___x_1963_, 1);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1963_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_inc(v_a_1998_);
lean_dec(v___x_1963_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1998_);
lean_ctor_set(v_reuseFailAlloc_2005_, 1, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandOr___boxed(lean_object* v_x_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_Std_Do_SPred_Notation_unexpandOr(v_x_2007_, v_a_2008_, v_a_2009_);
lean_dec(v_a_2008_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot(lean_object* v_x_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v___x_2015_; uint8_t v___x_2016_; 
v___x_2015_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_2012_);
v___x_2016_ = l_Lean_Syntax_isOfKind(v_x_2012_, v___x_2015_);
if (v___x_2016_ == 0)
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
lean_dec(v_x_2012_);
v___x_2017_ = lean_box(0);
v___x_2018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
lean_ctor_set(v___x_2018_, 1, v_a_2014_);
return v___x_2018_;
}
else
{
lean_object* v___x_2019_; lean_object* v___x_2020_; uint8_t v___x_2021_; 
v___x_2019_ = lean_unsigned_to_nat(1u);
v___x_2020_ = l_Lean_Syntax_getArg(v_x_2012_, v___x_2019_);
lean_dec(v_x_2012_);
lean_inc(v___x_2020_);
v___x_2021_ = l_Lean_Syntax_matchesNull(v___x_2020_, v___x_2019_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
lean_dec(v___x_2020_);
v___x_2022_ = lean_box(0);
v___x_2023_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
lean_ctor_set(v___x_2023_, 1, v_a_2014_);
return v___x_2023_;
}
else
{
lean_object* v___x_2024_; lean_object* v_P_2025_; lean_object* v___x_2026_; 
v___x_2024_ = lean_unsigned_to_nat(0u);
v_P_2025_ = l_Lean_Syntax_getArg(v___x_2020_, v___x_2024_);
lean_dec(v___x_2020_);
v___x_2026_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_2025_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v_a_2027_; lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2047_; 
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
v_a_2028_ = lean_ctor_get(v___x_2026_, 1);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2030_ = v___x_2026_;
v_isShared_2031_ = v_isSharedCheck_2047_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_inc(v_a_2027_);
lean_dec(v___x_2026_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2047_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
uint8_t v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2032_ = 0;
v___x_2033_ = l_Lean_SourceInfo_fromRef(v_a_2013_, v___x_2032_);
v___x_2034_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2035_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2033_, 4);
v___x_2036_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2033_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__5));
v___x_2038_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandNot___closed__0));
v___x_2039_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2033_);
lean_ctor_set(v___x_2039_, 1, v___x_2038_);
v___x_2040_ = l_Lean_Syntax_node2(v___x_2033_, v___x_2037_, v___x_2039_, v_a_2027_);
v___x_2041_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2033_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
v___x_2043_ = l_Lean_Syntax_node3(v___x_2033_, v___x_2034_, v___x_2036_, v___x_2040_, v___x_2042_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v___x_2043_);
v___x_2045_ = v___x_2030_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v_a_2028_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
else
{
lean_object* v_a_2048_; lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
v_a_2048_ = lean_ctor_get(v___x_2026_, 0);
v_a_2049_ = lean_ctor_get(v___x_2026_, 1);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2026_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_inc(v_a_2048_);
lean_dec(v___x_2026_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2048_);
lean_ctor_set(v_reuseFailAlloc_2055_, 1, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandNot___boxed(lean_object* v_x_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = l_Std_Do_SPred_Notation_unexpandNot(v_x_2057_, v_a_2058_, v_a_2059_);
lean_dec(v_a_2058_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp(lean_object* v_x_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_){
_start:
{
lean_object* v___x_2065_; uint8_t v___x_2066_; 
v___x_2065_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_2062_);
v___x_2066_ = l_Lean_Syntax_isOfKind(v_x_2062_, v___x_2065_);
if (v___x_2066_ == 0)
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
lean_dec(v_x_2062_);
v___x_2067_ = lean_box(0);
v___x_2068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
lean_ctor_set(v___x_2068_, 1, v_a_2064_);
return v___x_2068_;
}
else
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; uint8_t v___x_2072_; 
v___x_2069_ = lean_unsigned_to_nat(1u);
v___x_2070_ = l_Lean_Syntax_getArg(v_x_2062_, v___x_2069_);
lean_dec(v_x_2062_);
v___x_2071_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2070_);
v___x_2072_ = l_Lean_Syntax_matchesNull(v___x_2070_, v___x_2071_);
if (v___x_2072_ == 0)
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
lean_dec(v___x_2070_);
v___x_2073_ = lean_box(0);
v___x_2074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2073_);
lean_ctor_set(v___x_2074_, 1, v_a_2064_);
return v___x_2074_;
}
else
{
lean_object* v___x_2075_; lean_object* v_P_2076_; lean_object* v___x_2077_; 
v___x_2075_ = lean_unsigned_to_nat(0u);
v_P_2076_ = l_Lean_Syntax_getArg(v___x_2070_, v___x_2075_);
v___x_2077_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_2076_, v_a_2063_, v_a_2064_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; lean_object* v_a_2079_; lean_object* v_Q_2080_; lean_object* v___x_2081_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc(v_a_2078_);
v_a_2079_ = lean_ctor_get(v___x_2077_, 1);
lean_inc(v_a_2079_);
lean_dec_ref_known(v___x_2077_, 2);
v_Q_2080_ = l_Lean_Syntax_getArg(v___x_2070_, v___x_2069_);
lean_dec(v___x_2070_);
v___x_2081_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_2080_, v_a_2063_, v_a_2079_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2102_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
v_a_2083_ = lean_ctor_get(v___x_2081_, 1);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2085_ = v___x_2081_;
v_isShared_2086_ = v_isSharedCheck_2102_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_inc(v_a_2082_);
lean_dec(v___x_2081_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2102_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
uint8_t v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2087_ = 0;
v___x_2088_ = l_Lean_SourceInfo_fromRef(v_a_2063_, v___x_2087_);
v___x_2089_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2090_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2088_, 4);
v___x_2091_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2088_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__7));
v___x_2093_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandImp___closed__0));
v___x_2094_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2088_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
v___x_2095_ = l_Lean_Syntax_node3(v___x_2088_, v___x_2092_, v_a_2078_, v___x_2094_, v_a_2082_);
v___x_2096_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2097_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2088_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
v___x_2098_ = l_Lean_Syntax_node3(v___x_2088_, v___x_2089_, v___x_2091_, v___x_2095_, v___x_2097_);
if (v_isShared_2086_ == 0)
{
lean_ctor_set(v___x_2085_, 0, v___x_2098_);
v___x_2100_ = v___x_2085_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_a_2083_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2111_; 
lean_dec(v_a_2078_);
v_a_2103_ = lean_ctor_get(v___x_2081_, 0);
v_a_2104_ = lean_ctor_get(v___x_2081_, 1);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2106_ = v___x_2081_;
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_inc(v_a_2103_);
lean_dec(v___x_2081_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_a_2103_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v_a_2104_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
else
{
lean_object* v_a_2112_; lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
lean_dec(v___x_2070_);
v_a_2112_ = lean_ctor_get(v___x_2077_, 0);
v_a_2113_ = lean_ctor_get(v___x_2077_, 1);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2077_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_inc(v_a_2112_);
lean_dec(v___x_2077_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2112_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandImp___boxed(lean_object* v_x_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Std_Do_SPred_Notation_unexpandImp(v_x_2121_, v_a_2122_, v_a_2123_);
lean_dec(v_a_2122_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(size_t v_sz_2125_, size_t v_i_2126_, lean_object* v_bs_2127_){
_start:
{
uint8_t v___x_2128_; 
v___x_2128_ = lean_usize_dec_lt(v_i_2126_, v_sz_2125_);
if (v___x_2128_ == 0)
{
return v_bs_2127_;
}
else
{
lean_object* v_v_2129_; lean_object* v___x_2130_; lean_object* v_bs_x27_2131_; size_t v___x_2132_; size_t v___x_2133_; lean_object* v___x_2134_; 
v_v_2129_ = lean_array_uget(v_bs_2127_, v_i_2126_);
v___x_2130_ = lean_unsigned_to_nat(0u);
v_bs_x27_2131_ = lean_array_uset(v_bs_2127_, v_i_2126_, v___x_2130_);
v___x_2132_ = ((size_t)1ULL);
v___x_2133_ = lean_usize_add(v_i_2126_, v___x_2132_);
v___x_2134_ = lean_array_uset(v_bs_x27_2131_, v_i_2126_, v_v_2129_);
v_i_2126_ = v___x_2133_;
v_bs_2127_ = v___x_2134_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1___boxed(lean_object* v_sz_2136_, lean_object* v_i_2137_, lean_object* v_bs_2138_){
_start:
{
size_t v_sz_boxed_2139_; size_t v_i_boxed_2140_; lean_object* v_res_2141_; 
v_sz_boxed_2139_ = lean_unbox_usize(v_sz_2136_);
lean_dec(v_sz_2136_);
v_i_boxed_2140_ = lean_unbox_usize(v_i_2137_);
lean_dec(v_i_2137_);
v_res_2141_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(v_sz_boxed_2139_, v_i_boxed_2140_, v_bs_2138_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(size_t v_sz_2142_, size_t v_i_2143_, lean_object* v_bs_2144_){
_start:
{
uint8_t v___x_2145_; 
v___x_2145_ = lean_usize_dec_lt(v_i_2143_, v_sz_2142_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; 
v___x_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2146_, 0, v_bs_2144_);
return v___x_2146_;
}
else
{
lean_object* v_v_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
v_v_2147_ = lean_array_uget(v_bs_2144_, v_i_2143_);
v___x_2148_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v_v_2147_);
v___x_2149_ = l_Lean_Syntax_isOfKind(v_v_2147_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; 
lean_dec(v_v_2147_);
lean_dec_ref(v_bs_2144_);
v___x_2150_ = lean_box(0);
return v___x_2150_;
}
else
{
lean_object* v___x_2151_; lean_object* v_bs_x27_2152_; size_t v___x_2153_; size_t v___x_2154_; lean_object* v___x_2155_; 
v___x_2151_ = lean_unsigned_to_nat(0u);
v_bs_x27_2152_ = lean_array_uset(v_bs_2144_, v_i_2143_, v___x_2151_);
v___x_2153_ = ((size_t)1ULL);
v___x_2154_ = lean_usize_add(v_i_2143_, v___x_2153_);
v___x_2155_ = lean_array_uset(v_bs_x27_2152_, v_i_2143_, v_v_2147_);
v_i_2143_ = v___x_2154_;
v_bs_2144_ = v___x_2155_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0___boxed(lean_object* v_sz_2157_, lean_object* v_i_2158_, lean_object* v_bs_2159_){
_start:
{
size_t v_sz_boxed_2160_; size_t v_i_boxed_2161_; lean_object* v_res_2162_; 
v_sz_boxed_2160_ = lean_unbox_usize(v_sz_2157_);
lean_dec(v_sz_2157_);
v_i_boxed_2161_ = lean_unbox_usize(v_i_2158_);
lean_dec(v_i_2158_);
v_res_2162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(v_sz_boxed_2160_, v_i_boxed_2161_, v_bs_2159_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall(lean_object* v_x_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v___x_2166_; uint8_t v___x_2167_; 
v___x_2166_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_2163_);
v___x_2167_ = l_Lean_Syntax_isOfKind(v_x_2163_, v___x_2166_);
if (v___x_2167_ == 0)
{
lean_object* v___x_2168_; lean_object* v___x_2169_; 
lean_dec(v_x_2163_);
v___x_2168_ = lean_box(0);
v___x_2169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2168_);
lean_ctor_set(v___x_2169_, 1, v_a_2165_);
return v___x_2169_;
}
else
{
lean_object* v___x_2170_; lean_object* v___x_2171_; uint8_t v___x_2172_; 
v___x_2170_ = lean_unsigned_to_nat(1u);
v___x_2171_ = l_Lean_Syntax_getArg(v_x_2163_, v___x_2170_);
lean_dec(v_x_2163_);
lean_inc(v___x_2171_);
v___x_2172_ = l_Lean_Syntax_matchesNull(v___x_2171_, v___x_2170_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_dec(v___x_2171_);
v___x_2173_ = lean_box(0);
v___x_2174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
lean_ctor_set(v___x_2174_, 1, v_a_2165_);
return v___x_2174_;
}
else
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; uint8_t v___x_2178_; 
v___x_2175_ = lean_unsigned_to_nat(0u);
v___x_2176_ = l_Lean_Syntax_getArg(v___x_2171_, v___x_2175_);
lean_dec(v___x_2171_);
v___x_2177_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
lean_inc(v___x_2176_);
v___x_2178_ = l_Lean_Syntax_isOfKind(v___x_2176_, v___x_2177_);
if (v___x_2178_ == 0)
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
lean_dec(v___x_2176_);
v___x_2179_ = lean_box(0);
v___x_2180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
lean_ctor_set(v___x_2180_, 1, v_a_2165_);
return v___x_2180_;
}
else
{
lean_object* v___x_2181_; lean_object* v___x_2182_; uint8_t v___x_2183_; 
v___x_2181_ = l_Lean_Syntax_getArg(v___x_2176_, v___x_2170_);
lean_dec(v___x_2176_);
v___x_2182_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
lean_inc(v___x_2181_);
v___x_2183_ = l_Lean_Syntax_isOfKind(v___x_2181_, v___x_2182_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
lean_dec(v___x_2181_);
v___x_2184_ = lean_box(0);
v___x_2185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v_a_2165_);
return v___x_2185_;
}
else
{
lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2186_ = l_Lean_Syntax_getArg(v___x_2181_, v___x_2175_);
lean_inc(v___x_2186_);
v___x_2187_ = l_Lean_Syntax_matchesNull(v___x_2186_, v___x_2170_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
lean_dec(v___x_2186_);
lean_dec(v___x_2181_);
v___x_2188_ = lean_box(0);
v___x_2189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2188_);
lean_ctor_set(v___x_2189_, 1, v_a_2165_);
return v___x_2189_;
}
else
{
lean_object* v___x_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; 
v___x_2190_ = l_Lean_Syntax_getArg(v___x_2186_, v___x_2175_);
lean_dec(v___x_2186_);
v___x_2191_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v___x_2190_);
v___x_2192_ = l_Lean_Syntax_isOfKind(v___x_2190_, v___x_2191_);
if (v___x_2192_ == 0)
{
lean_object* v___x_2193_; lean_object* v___x_2194_; 
lean_dec(v___x_2190_);
lean_dec(v___x_2181_);
v___x_2193_ = lean_box(0);
v___x_2194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
lean_ctor_set(v___x_2194_, 1, v_a_2165_);
return v___x_2194_;
}
else
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = l_Lean_Syntax_getArg(v___x_2181_, v___x_2170_);
v___x_2196_ = l_Lean_Syntax_matchesNull(v___x_2195_, v___x_2175_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
lean_dec(v___x_2190_);
lean_dec(v___x_2181_);
v___x_2197_ = lean_box(0);
v___x_2198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2197_);
lean_ctor_set(v___x_2198_, 1, v_a_2165_);
return v___x_2198_;
}
else
{
lean_object* v___x_2199_; lean_object* v_00_u03a8_2200_; lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2199_ = lean_unsigned_to_nat(3u);
v_00_u03a8_2200_ = l_Lean_Syntax_getArg(v___x_2181_, v___x_2199_);
lean_dec(v___x_2181_);
v___x_2201_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__51));
lean_inc(v_00_u03a8_2200_);
v___x_2202_ = l_Lean_Syntax_isOfKind(v_00_u03a8_2200_, v___x_2201_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2203_; 
v___x_2203_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2200_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2228_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
v_a_2205_ = lean_ctor_get(v___x_2203_, 1);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2207_ = v___x_2203_;
v_isShared_2208_ = v_isSharedCheck_2228_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_inc(v_a_2204_);
lean_dec(v___x_2203_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2228_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2209_ = l_Lean_SourceInfo_fromRef(v_a_2164_, v___x_2202_);
v___x_2210_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2211_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2209_, 7);
v___x_2212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2209_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2209_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2216_ = l_Lean_Syntax_node1(v___x_2209_, v___x_2215_, v___x_2190_);
v___x_2217_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2209_);
lean_ctor_set(v___x_2218_, 1, v___x_2215_);
lean_ctor_set(v___x_2218_, 2, v___x_2217_);
v___x_2219_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2220_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2209_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = l_Lean_Syntax_node5(v___x_2209_, v___x_2201_, v___x_2214_, v___x_2216_, v___x_2218_, v___x_2220_, v_a_2204_);
v___x_2222_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2209_);
lean_ctor_set(v___x_2223_, 1, v___x_2222_);
v___x_2224_ = l_Lean_Syntax_node3(v___x_2209_, v___x_2210_, v___x_2212_, v___x_2221_, v___x_2223_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 0, v___x_2224_);
v___x_2226_ = v___x_2207_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_a_2205_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
else
{
lean_object* v_a_2229_; lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec(v___x_2190_);
v_a_2229_ = lean_ctor_get(v___x_2203_, 0);
v_a_2230_ = lean_ctor_get(v___x_2203_, 1);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2203_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_inc(v_a_2229_);
lean_dec(v___x_2203_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2229_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
else
{
lean_object* v___x_2238_; lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2238_ = l_Lean_Syntax_getArg(v_00_u03a8_2200_, v___x_2170_);
v___x_2239_ = l_Lean_Syntax_getNumArgs(v___x_2238_);
v___x_2240_ = lean_nat_dec_le(v___x_2170_, v___x_2239_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
lean_dec(v___x_2239_);
lean_dec(v___x_2238_);
v___x_2241_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2200_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2266_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
v_a_2243_ = lean_ctor_get(v___x_2241_, 1);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2245_ = v___x_2241_;
v_isShared_2246_ = v_isSharedCheck_2266_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_inc(v_a_2242_);
lean_dec(v___x_2241_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2266_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2264_; 
v___x_2247_ = l_Lean_SourceInfo_fromRef(v_a_2164_, v___x_2240_);
v___x_2248_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2249_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2247_, 7);
v___x_2250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2247_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2247_);
lean_ctor_set(v___x_2252_, 1, v___x_2251_);
v___x_2253_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2254_ = l_Lean_Syntax_node1(v___x_2247_, v___x_2253_, v___x_2190_);
v___x_2255_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2256_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2247_);
lean_ctor_set(v___x_2256_, 1, v___x_2253_);
lean_ctor_set(v___x_2256_, 2, v___x_2255_);
v___x_2257_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2258_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2247_);
lean_ctor_set(v___x_2258_, 1, v___x_2257_);
v___x_2259_ = l_Lean_Syntax_node5(v___x_2247_, v___x_2201_, v___x_2252_, v___x_2254_, v___x_2256_, v___x_2258_, v_a_2242_);
v___x_2260_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2261_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2247_);
lean_ctor_set(v___x_2261_, 1, v___x_2260_);
v___x_2262_ = l_Lean_Syntax_node3(v___x_2247_, v___x_2248_, v___x_2250_, v___x_2259_, v___x_2261_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v___x_2262_);
v___x_2264_ = v___x_2245_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v___x_2262_);
lean_ctor_set(v_reuseFailAlloc_2265_, 1, v_a_2243_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
else
{
lean_object* v_a_2267_; lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec(v___x_2190_);
v_a_2267_ = lean_ctor_get(v___x_2241_, 0);
v_a_2268_ = lean_ctor_get(v___x_2241_, 1);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2241_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_inc(v_a_2267_);
lean_dec(v___x_2241_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2267_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
else
{
lean_object* v___x_2276_; uint8_t v___x_2277_; 
v___x_2276_ = l_Lean_Syntax_getArg(v___x_2238_, v___x_2175_);
lean_inc(v___x_2276_);
v___x_2277_ = l_Lean_Syntax_isOfKind(v___x_2276_, v___x_2191_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; 
lean_dec(v___x_2276_);
lean_dec(v___x_2239_);
lean_dec(v___x_2238_);
v___x_2278_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2200_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2303_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
v_a_2280_ = lean_ctor_get(v___x_2278_, 1);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2282_ = v___x_2278_;
v_isShared_2283_ = v_isSharedCheck_2303_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_inc(v_a_2279_);
lean_dec(v___x_2278_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2303_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2301_; 
v___x_2284_ = l_Lean_SourceInfo_fromRef(v_a_2164_, v___x_2277_);
v___x_2285_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2286_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2284_, 7);
v___x_2287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2284_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2289_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2284_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
v___x_2290_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2291_ = l_Lean_Syntax_node1(v___x_2284_, v___x_2290_, v___x_2190_);
v___x_2292_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2293_, 0, v___x_2284_);
lean_ctor_set(v___x_2293_, 1, v___x_2290_);
lean_ctor_set(v___x_2293_, 2, v___x_2292_);
v___x_2294_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2284_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = l_Lean_Syntax_node5(v___x_2284_, v___x_2201_, v___x_2289_, v___x_2291_, v___x_2293_, v___x_2295_, v_a_2279_);
v___x_2297_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2298_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2284_);
lean_ctor_set(v___x_2298_, 1, v___x_2297_);
v___x_2299_ = l_Lean_Syntax_node3(v___x_2284_, v___x_2285_, v___x_2287_, v___x_2296_, v___x_2298_);
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v___x_2299_);
v___x_2301_ = v___x_2282_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2299_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v_a_2280_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
else
{
lean_object* v_a_2304_; lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec(v___x_2190_);
v_a_2304_ = lean_ctor_get(v___x_2278_, 0);
v_a_2305_ = lean_ctor_get(v___x_2278_, 1);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2278_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_inc(v_a_2304_);
lean_dec(v___x_2278_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2304_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; size_t v_sz_2319_; size_t v___x_2320_; lean_object* v___x_2321_; 
v___x_2313_ = l_Lean_Syntax_getArgs(v___x_2238_);
lean_dec(v___x_2238_);
v___x_2314_ = l_Array_extract___redArg(v___x_2313_, v___x_2170_, v___x_2239_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2316_ = lean_box(2);
v___x_2317_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2316_);
lean_ctor_set(v___x_2317_, 1, v___x_2315_);
lean_ctor_set(v___x_2317_, 2, v___x_2314_);
v___x_2318_ = l_Lean_Syntax_getArgs(v___x_2317_);
lean_dec_ref_known(v___x_2317_, 3);
v_sz_2319_ = lean_array_size(v___x_2318_);
v___x_2320_ = ((size_t)0ULL);
v___x_2321_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__0(v_sz_2319_, v___x_2320_, v___x_2318_);
if (lean_obj_tag(v___x_2321_) == 0)
{
lean_object* v___x_2322_; 
lean_dec(v___x_2276_);
v___x_2322_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2200_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2347_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
v_a_2324_ = lean_ctor_get(v___x_2322_, 1);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2326_ = v___x_2322_;
v_isShared_2327_ = v_isSharedCheck_2347_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_inc(v_a_2323_);
lean_dec(v___x_2322_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2347_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
uint8_t v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2345_; 
v___x_2328_ = 0;
v___x_2329_ = l_Lean_SourceInfo_fromRef(v_a_2164_, v___x_2328_);
v___x_2330_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2331_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2329_, 7);
v___x_2332_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2329_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2329_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = l_Lean_Syntax_node1(v___x_2329_, v___x_2315_, v___x_2190_);
v___x_2336_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2337_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2329_);
lean_ctor_set(v___x_2337_, 1, v___x_2315_);
lean_ctor_set(v___x_2337_, 2, v___x_2336_);
v___x_2338_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2339_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2329_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = l_Lean_Syntax_node5(v___x_2329_, v___x_2201_, v___x_2334_, v___x_2335_, v___x_2337_, v___x_2339_, v_a_2323_);
v___x_2341_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2342_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2329_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
v___x_2343_ = l_Lean_Syntax_node3(v___x_2329_, v___x_2330_, v___x_2332_, v___x_2340_, v___x_2342_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 0, v___x_2343_);
v___x_2345_ = v___x_2326_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v___x_2343_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_a_2324_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
else
{
lean_object* v_a_2348_; lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec(v___x_2190_);
v_a_2348_ = lean_ctor_get(v___x_2322_, 0);
v_a_2349_ = lean_ctor_get(v___x_2322_, 1);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2322_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_inc(v_a_2348_);
lean_dec(v___x_2322_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2348_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
else
{
lean_object* v_val_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; uint8_t v___x_2360_; 
v_val_2357_ = lean_ctor_get(v___x_2321_, 0);
lean_inc(v_val_2357_);
lean_dec_ref_known(v___x_2321_, 1);
v___x_2358_ = lean_unsigned_to_nat(2u);
v___x_2359_ = l_Lean_Syntax_getArg(v_00_u03a8_2200_, v___x_2358_);
v___x_2360_ = l_Lean_Syntax_matchesNull(v___x_2359_, v___x_2175_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; 
lean_dec(v_val_2357_);
lean_dec(v___x_2276_);
v___x_2361_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2200_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2385_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
v_a_2363_ = lean_ctor_get(v___x_2361_, 1);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2365_ = v___x_2361_;
v_isShared_2366_ = v_isSharedCheck_2385_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_inc(v_a_2362_);
lean_dec(v___x_2361_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2385_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2383_; 
v___x_2367_ = l_Lean_SourceInfo_fromRef(v_a_2164_, v___x_2360_);
v___x_2368_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2369_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2367_, 7);
v___x_2370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2367_);
lean_ctor_set(v___x_2370_, 1, v___x_2369_);
v___x_2371_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2372_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2367_);
lean_ctor_set(v___x_2372_, 1, v___x_2371_);
v___x_2373_ = l_Lean_Syntax_node1(v___x_2367_, v___x_2315_, v___x_2190_);
v___x_2374_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2375_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2367_);
lean_ctor_set(v___x_2375_, 1, v___x_2315_);
lean_ctor_set(v___x_2375_, 2, v___x_2374_);
v___x_2376_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2377_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2367_);
lean_ctor_set(v___x_2377_, 1, v___x_2376_);
v___x_2378_ = l_Lean_Syntax_node5(v___x_2367_, v___x_2201_, v___x_2372_, v___x_2373_, v___x_2375_, v___x_2377_, v_a_2362_);
v___x_2379_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2380_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2367_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = l_Lean_Syntax_node3(v___x_2367_, v___x_2368_, v___x_2370_, v___x_2378_, v___x_2380_);
if (v_isShared_2366_ == 0)
{
lean_ctor_set(v___x_2365_, 0, v___x_2381_);
v___x_2383_ = v___x_2365_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
lean_ctor_set(v_reuseFailAlloc_2384_, 1, v_a_2363_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
else
{
lean_object* v_a_2386_; lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
lean_dec(v___x_2190_);
v_a_2386_ = lean_ctor_get(v___x_2361_, 0);
v_a_2387_ = lean_ctor_get(v___x_2361_, 1);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2361_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_inc(v_a_2386_);
lean_dec(v___x_2361_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2392_; 
if (v_isShared_2390_ == 0)
{
v___x_2392_ = v___x_2389_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_a_2386_);
lean_ctor_set(v_reuseFailAlloc_2393_, 1, v_a_2387_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
}
else
{
lean_object* v___x_2395_; lean_object* v_00_u03a8_2396_; lean_object* v___x_2397_; 
v___x_2395_ = lean_unsigned_to_nat(4u);
v_00_u03a8_2396_ = l_Lean_Syntax_getArg(v_00_u03a8_2200_, v___x_2395_);
lean_dec(v_00_u03a8_2200_);
v___x_2397_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2396_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2426_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_a_2399_ = lean_ctor_get(v___x_2397_, 1);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2401_ = v___x_2397_;
v_isShared_2402_ = v_isSharedCheck_2426_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2426_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
uint8_t v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; size_t v_sz_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2424_; 
v___x_2403_ = 0;
v___x_2404_ = l_Lean_SourceInfo_fromRef(v_a_2164_, v___x_2403_);
v___x_2405_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2406_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2404_, 7);
v___x_2407_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2404_);
lean_ctor_set(v___x_2407_, 1, v___x_2406_);
v___x_2408_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__52));
v___x_2409_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2404_);
lean_ctor_set(v___x_2409_, 1, v___x_2408_);
v___x_2410_ = l_Array_mkArray2___redArg(v___x_2190_, v___x_2276_);
v_sz_2411_ = lean_array_size(v_val_2357_);
v___x_2412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandForall_spec__1(v_sz_2411_, v___x_2320_, v_val_2357_);
v___x_2413_ = l_Array_append___redArg(v___x_2410_, v___x_2412_);
lean_dec_ref(v___x_2412_);
v___x_2414_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2404_);
lean_ctor_set(v___x_2414_, 1, v___x_2315_);
lean_ctor_set(v___x_2414_, 2, v___x_2413_);
v___x_2415_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2416_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2404_);
lean_ctor_set(v___x_2416_, 1, v___x_2315_);
lean_ctor_set(v___x_2416_, 2, v___x_2415_);
v___x_2417_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2418_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2404_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
v___x_2419_ = l_Lean_Syntax_node5(v___x_2404_, v___x_2201_, v___x_2409_, v___x_2414_, v___x_2416_, v___x_2418_, v_a_2398_);
v___x_2420_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2421_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2404_);
lean_ctor_set(v___x_2421_, 1, v___x_2420_);
v___x_2422_ = l_Lean_Syntax_node3(v___x_2404_, v___x_2405_, v___x_2407_, v___x_2419_, v___x_2421_);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v___x_2422_);
v___x_2424_ = v___x_2401_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v___x_2422_);
lean_ctor_set(v_reuseFailAlloc_2425_, 1, v_a_2399_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2435_; 
lean_dec(v_val_2357_);
lean_dec(v___x_2276_);
lean_dec(v___x_2190_);
v_a_2427_ = lean_ctor_get(v___x_2397_, 0);
v_a_2428_ = lean_ctor_get(v___x_2397_, 1);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2430_ = v___x_2397_;
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_inc(v_a_2427_);
lean_dec(v___x_2397_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2427_);
lean_ctor_set(v_reuseFailAlloc_2434_, 1, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandForall___boxed(lean_object* v_x_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Std_Do_SPred_Notation_unexpandForall(v_x_2436_, v_a_2437_, v_a_2438_);
lean_dec(v_a_2437_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(lean_object* v___x_2444_, size_t v_sz_2445_, size_t v_i_2446_, lean_object* v_bs_2447_){
_start:
{
uint8_t v___x_2448_; 
v___x_2448_ = lean_usize_dec_lt(v_i_2446_, v_sz_2445_);
if (v___x_2448_ == 0)
{
lean_dec(v___x_2444_);
return v_bs_2447_;
}
else
{
lean_object* v___x_2449_; lean_object* v_v_2450_; lean_object* v___x_2451_; lean_object* v_bs_x27_2452_; lean_object* v___x_2453_; size_t v___x_2454_; size_t v___x_2455_; lean_object* v___x_2456_; 
v___x_2449_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v_v_2450_ = lean_array_uget(v_bs_2447_, v_i_2446_);
v___x_2451_ = lean_unsigned_to_nat(0u);
v_bs_x27_2452_ = lean_array_uset(v_bs_2447_, v_i_2446_, v___x_2451_);
lean_inc(v___x_2444_);
v___x_2453_ = l_Lean_Syntax_node1(v___x_2444_, v___x_2449_, v_v_2450_);
v___x_2454_ = ((size_t)1ULL);
v___x_2455_ = lean_usize_add(v_i_2446_, v___x_2454_);
v___x_2456_ = lean_array_uset(v_bs_x27_2452_, v_i_2446_, v___x_2453_);
v_i_2446_ = v___x_2455_;
v_bs_2447_ = v___x_2456_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___boxed(lean_object* v___x_2458_, lean_object* v_sz_2459_, lean_object* v_i_2460_, lean_object* v_bs_2461_){
_start:
{
size_t v_sz_boxed_2462_; size_t v_i_boxed_2463_; lean_object* v_res_2464_; 
v_sz_boxed_2462_ = lean_unbox_usize(v_sz_2459_);
lean_dec(v_sz_2459_);
v_i_boxed_2463_ = lean_unbox_usize(v_i_2460_);
lean_dec(v_i_2460_);
v_res_2464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(v___x_2458_, v_sz_boxed_2462_, v_i_boxed_2463_, v_bs_2461_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(size_t v_sz_2465_, size_t v_i_2466_, lean_object* v_bs_2467_){
_start:
{
uint8_t v___x_2468_; 
v___x_2468_ = lean_usize_dec_lt(v_i_2466_, v_sz_2465_);
if (v___x_2468_ == 0)
{
lean_object* v___x_2469_; 
v___x_2469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_bs_2467_);
return v___x_2469_;
}
else
{
lean_object* v_v_2470_; lean_object* v___x_2471_; uint8_t v___x_2472_; 
v_v_2470_ = lean_array_uget_borrowed(v_bs_2467_, v_i_2466_);
v___x_2471_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
lean_inc(v_v_2470_);
v___x_2472_ = l_Lean_Syntax_isOfKind(v_v_2470_, v___x_2471_);
if (v___x_2472_ == 0)
{
lean_object* v___x_2473_; 
lean_dec_ref(v_bs_2467_);
v___x_2473_ = lean_box(0);
return v___x_2473_;
}
else
{
lean_object* v___x_2474_; lean_object* v_z_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___x_2474_ = lean_unsigned_to_nat(0u);
v_z_2475_ = l_Lean_Syntax_getArg(v_v_2470_, v___x_2474_);
v___x_2476_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v_z_2475_);
v___x_2477_ = l_Lean_Syntax_isOfKind(v_z_2475_, v___x_2476_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2478_; 
lean_dec(v_z_2475_);
lean_dec_ref(v_bs_2467_);
v___x_2478_ = lean_box(0);
return v___x_2478_;
}
else
{
lean_object* v_bs_x27_2479_; size_t v___x_2480_; size_t v___x_2481_; lean_object* v___x_2482_; 
v_bs_x27_2479_ = lean_array_uset(v_bs_2467_, v_i_2466_, v___x_2474_);
v___x_2480_ = ((size_t)1ULL);
v___x_2481_ = lean_usize_add(v_i_2466_, v___x_2480_);
v___x_2482_ = lean_array_uset(v_bs_x27_2479_, v_i_2466_, v_z_2475_);
v_i_2466_ = v___x_2481_;
v_bs_2467_ = v___x_2482_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0___boxed(lean_object* v_sz_2484_, lean_object* v_i_2485_, lean_object* v_bs_2486_){
_start:
{
size_t v_sz_boxed_2487_; size_t v_i_boxed_2488_; lean_object* v_res_2489_; 
v_sz_boxed_2487_ = lean_unbox_usize(v_sz_2484_);
lean_dec(v_sz_2484_);
v_i_boxed_2488_ = lean_unbox_usize(v_i_2485_);
lean_dec(v_i_2485_);
v_res_2489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(v_sz_boxed_2487_, v_i_boxed_2488_, v_bs_2486_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists(lean_object* v_x_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v___x_2498_; uint8_t v___x_2499_; 
v___x_2498_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_2495_);
v___x_2499_ = l_Lean_Syntax_isOfKind(v_x_2495_, v___x_2498_);
if (v___x_2499_ == 0)
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
lean_dec(v_x_2495_);
v___x_2500_ = lean_box(0);
v___x_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2500_);
lean_ctor_set(v___x_2501_, 1, v_a_2497_);
return v___x_2501_;
}
else
{
lean_object* v___x_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; 
v___x_2502_ = lean_unsigned_to_nat(1u);
v___x_2503_ = l_Lean_Syntax_getArg(v_x_2495_, v___x_2502_);
lean_dec(v_x_2495_);
lean_inc(v___x_2503_);
v___x_2504_ = l_Lean_Syntax_matchesNull(v___x_2503_, v___x_2502_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
lean_dec(v___x_2503_);
v___x_2505_ = lean_box(0);
v___x_2506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2505_);
lean_ctor_set(v___x_2506_, 1, v_a_2497_);
return v___x_2506_;
}
else
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v___x_2507_ = lean_unsigned_to_nat(0u);
v___x_2508_ = l_Lean_Syntax_getArg(v___x_2503_, v___x_2507_);
lean_dec(v___x_2503_);
v___x_2509_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__46));
lean_inc(v___x_2508_);
v___x_2510_ = l_Lean_Syntax_isOfKind(v___x_2508_, v___x_2509_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
lean_dec(v___x_2508_);
v___x_2511_ = lean_box(0);
v___x_2512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2511_);
lean_ctor_set(v___x_2512_, 1, v_a_2497_);
return v___x_2512_;
}
else
{
lean_object* v___x_2513_; lean_object* v___x_2514_; uint8_t v___x_2515_; 
v___x_2513_ = l_Lean_Syntax_getArg(v___x_2508_, v___x_2502_);
lean_dec(v___x_2508_);
v___x_2514_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__48));
lean_inc(v___x_2513_);
v___x_2515_ = l_Lean_Syntax_isOfKind(v___x_2513_, v___x_2514_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
lean_dec(v___x_2513_);
v___x_2516_ = lean_box(0);
v___x_2517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
lean_ctor_set(v___x_2517_, 1, v_a_2497_);
return v___x_2517_;
}
else
{
lean_object* v___x_2518_; uint8_t v___x_2519_; 
v___x_2518_ = l_Lean_Syntax_getArg(v___x_2513_, v___x_2507_);
lean_inc(v___x_2518_);
v___x_2519_ = l_Lean_Syntax_matchesNull(v___x_2518_, v___x_2502_);
if (v___x_2519_ == 0)
{
lean_object* v___x_2520_; lean_object* v___x_2521_; 
lean_dec(v___x_2518_);
lean_dec(v___x_2513_);
v___x_2520_ = lean_box(0);
v___x_2521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2520_);
lean_ctor_set(v___x_2521_, 1, v_a_2497_);
return v___x_2521_;
}
else
{
lean_object* v___x_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; 
v___x_2522_ = l_Lean_Syntax_getArg(v___x_2518_, v___x_2507_);
lean_dec(v___x_2518_);
v___x_2523_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__60));
lean_inc(v___x_2522_);
v___x_2524_ = l_Lean_Syntax_isOfKind(v___x_2522_, v___x_2523_);
if (v___x_2524_ == 0)
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
lean_dec(v___x_2522_);
lean_dec(v___x_2513_);
v___x_2525_ = lean_box(0);
v___x_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
lean_ctor_set(v___x_2526_, 1, v_a_2497_);
return v___x_2526_;
}
else
{
lean_object* v___x_2527_; uint8_t v___x_2528_; 
v___x_2527_ = l_Lean_Syntax_getArg(v___x_2513_, v___x_2502_);
v___x_2528_ = l_Lean_Syntax_matchesNull(v___x_2527_, v___x_2507_);
if (v___x_2528_ == 0)
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
lean_dec(v___x_2522_);
lean_dec(v___x_2513_);
v___x_2529_ = lean_box(0);
v___x_2530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
lean_ctor_set(v___x_2530_, 1, v_a_2497_);
return v___x_2530_;
}
else
{
lean_object* v___x_2531_; lean_object* v_00_u03a8_2532_; lean_object* v___x_2533_; uint8_t v___x_2534_; 
v___x_2531_ = lean_unsigned_to_nat(3u);
v_00_u03a8_2532_ = l_Lean_Syntax_getArg(v___x_2513_, v___x_2531_);
lean_dec(v___x_2513_);
v___x_2533_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__11));
lean_inc(v_00_u03a8_2532_);
v___x_2534_ = l_Lean_Syntax_isOfKind(v_00_u03a8_2532_, v___x_2533_);
if (v___x_2534_ == 0)
{
lean_object* v___x_2535_; 
v___x_2535_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2566_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
v_a_2537_ = lean_ctor_get(v___x_2535_, 1);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2539_ = v___x_2535_;
v_isShared_2540_ = v_isSharedCheck_2566_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_inc(v_a_2536_);
lean_dec(v___x_2535_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2566_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2564_; 
v___x_2541_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2534_);
v___x_2542_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2543_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2541_, 10);
v___x_2544_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2541_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
v___x_2545_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2546_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2541_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
v___x_2547_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65));
v___x_2548_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__2));
v___x_2549_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2550_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_2551_ = l_Lean_Syntax_node1(v___x_2541_, v___x_2550_, v___x_2522_);
v___x_2552_ = l_Lean_Syntax_node1(v___x_2541_, v___x_2549_, v___x_2551_);
v___x_2553_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2554_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2541_);
lean_ctor_set(v___x_2554_, 1, v___x_2549_);
lean_ctor_set(v___x_2554_, 2, v___x_2553_);
v___x_2555_ = l_Lean_Syntax_node2(v___x_2541_, v___x_2548_, v___x_2552_, v___x_2554_);
v___x_2556_ = l_Lean_Syntax_node1(v___x_2541_, v___x_2547_, v___x_2555_);
v___x_2557_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2558_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2541_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
v___x_2559_ = l_Lean_Syntax_node4(v___x_2541_, v___x_2533_, v___x_2546_, v___x_2556_, v___x_2558_, v_a_2536_);
v___x_2560_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2561_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2541_);
lean_ctor_set(v___x_2561_, 1, v___x_2560_);
v___x_2562_ = l_Lean_Syntax_node3(v___x_2541_, v___x_2542_, v___x_2544_, v___x_2559_, v___x_2561_);
if (v_isShared_2540_ == 0)
{
lean_ctor_set(v___x_2539_, 0, v___x_2562_);
v___x_2564_ = v___x_2539_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v___x_2562_);
lean_ctor_set(v_reuseFailAlloc_2565_, 1, v_a_2537_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2575_; 
lean_dec(v___x_2522_);
v_a_2567_ = lean_ctor_get(v___x_2535_, 0);
v_a_2568_ = lean_ctor_get(v___x_2535_, 1);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2570_ = v___x_2535_;
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_inc(v_a_2567_);
lean_dec(v___x_2535_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2567_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_a_2568_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
else
{
lean_object* v___x_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___x_2576_ = l_Lean_Syntax_getArg(v_00_u03a8_2532_, v___x_2502_);
v___x_2577_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__65));
lean_inc(v___x_2576_);
v___x_2578_ = l_Lean_Syntax_isOfKind(v___x_2576_, v___x_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; 
lean_dec(v___x_2576_);
v___x_2579_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2609_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
v_a_2581_ = lean_ctor_get(v___x_2579_, 1);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2583_ = v___x_2579_;
v_isShared_2584_ = v_isSharedCheck_2609_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_inc(v_a_2580_);
lean_dec(v___x_2579_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2609_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2607_; 
v___x_2585_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2578_);
v___x_2586_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2587_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2585_, 10);
v___x_2588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2585_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2590_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2585_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__2));
v___x_2592_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2593_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_2594_ = l_Lean_Syntax_node1(v___x_2585_, v___x_2593_, v___x_2522_);
v___x_2595_ = l_Lean_Syntax_node1(v___x_2585_, v___x_2592_, v___x_2594_);
v___x_2596_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2597_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2585_);
lean_ctor_set(v___x_2597_, 1, v___x_2592_);
lean_ctor_set(v___x_2597_, 2, v___x_2596_);
v___x_2598_ = l_Lean_Syntax_node2(v___x_2585_, v___x_2591_, v___x_2595_, v___x_2597_);
v___x_2599_ = l_Lean_Syntax_node1(v___x_2585_, v___x_2577_, v___x_2598_);
v___x_2600_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2601_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2585_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = l_Lean_Syntax_node4(v___x_2585_, v___x_2533_, v___x_2590_, v___x_2599_, v___x_2601_, v_a_2580_);
v___x_2603_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2585_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = l_Lean_Syntax_node3(v___x_2585_, v___x_2586_, v___x_2588_, v___x_2602_, v___x_2604_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 0, v___x_2605_);
v___x_2607_ = v___x_2583_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v___x_2605_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v_a_2581_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
else
{
lean_object* v_a_2610_; lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v___x_2522_);
v_a_2610_ = lean_ctor_get(v___x_2579_, 0);
v_a_2611_ = lean_ctor_get(v___x_2579_, 1);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2579_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_inc(v_a_2610_);
lean_dec(v___x_2579_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2610_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v___x_2619_; lean_object* v___x_2620_; uint8_t v___x_2621_; 
v___x_2619_ = l_Lean_Syntax_getArg(v___x_2576_, v___x_2507_);
lean_dec(v___x_2576_);
v___x_2620_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__2));
lean_inc(v___x_2619_);
v___x_2621_ = l_Lean_Syntax_isOfKind(v___x_2619_, v___x_2620_);
if (v___x_2621_ == 0)
{
lean_object* v___x_2622_; 
lean_dec(v___x_2619_);
v___x_2622_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2651_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
v_a_2624_ = lean_ctor_get(v___x_2622_, 1);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2626_ = v___x_2622_;
v_isShared_2627_ = v_isSharedCheck_2651_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_inc(v_a_2623_);
lean_dec(v___x_2622_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2651_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2649_; 
v___x_2628_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2621_);
v___x_2629_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2630_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2628_, 10);
v___x_2631_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2628_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
v___x_2632_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2633_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2628_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
v___x_2634_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2635_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_2636_ = l_Lean_Syntax_node1(v___x_2628_, v___x_2635_, v___x_2522_);
v___x_2637_ = l_Lean_Syntax_node1(v___x_2628_, v___x_2634_, v___x_2636_);
v___x_2638_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2639_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2628_);
lean_ctor_set(v___x_2639_, 1, v___x_2634_);
lean_ctor_set(v___x_2639_, 2, v___x_2638_);
v___x_2640_ = l_Lean_Syntax_node2(v___x_2628_, v___x_2620_, v___x_2637_, v___x_2639_);
v___x_2641_ = l_Lean_Syntax_node1(v___x_2628_, v___x_2577_, v___x_2640_);
v___x_2642_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2643_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2628_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = l_Lean_Syntax_node4(v___x_2628_, v___x_2533_, v___x_2633_, v___x_2641_, v___x_2643_, v_a_2623_);
v___x_2645_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2628_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = l_Lean_Syntax_node3(v___x_2628_, v___x_2629_, v___x_2631_, v___x_2644_, v___x_2646_);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 0, v___x_2647_);
v___x_2649_ = v___x_2626_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2647_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_a_2624_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
else
{
lean_object* v_a_2652_; lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
lean_dec(v___x_2522_);
v_a_2652_ = lean_ctor_get(v___x_2622_, 0);
v_a_2653_ = lean_ctor_get(v___x_2622_, 1);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2622_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_inc(v_a_2652_);
lean_dec(v___x_2622_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2652_);
lean_ctor_set(v_reuseFailAlloc_2659_, 1, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
else
{
lean_object* v___x_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v___x_2661_ = l_Lean_Syntax_getArg(v___x_2619_, v___x_2507_);
v___x_2662_ = l_Lean_Syntax_getNumArgs(v___x_2661_);
v___x_2663_ = lean_nat_dec_le(v___x_2502_, v___x_2662_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; 
lean_dec(v___x_2662_);
lean_dec(v___x_2661_);
lean_dec(v___x_2619_);
v___x_2664_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2693_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
v_a_2666_ = lean_ctor_get(v___x_2664_, 1);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2668_ = v___x_2664_;
v_isShared_2669_ = v_isSharedCheck_2693_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_inc(v_a_2665_);
lean_dec(v___x_2664_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2693_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2691_; 
v___x_2670_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2663_);
v___x_2671_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2672_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2670_, 10);
v___x_2673_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2670_);
lean_ctor_set(v___x_2673_, 1, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2675_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2670_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2677_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
v___x_2678_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2677_, v___x_2522_);
v___x_2679_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2676_, v___x_2678_);
v___x_2680_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2681_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2670_);
lean_ctor_set(v___x_2681_, 1, v___x_2676_);
lean_ctor_set(v___x_2681_, 2, v___x_2680_);
v___x_2682_ = l_Lean_Syntax_node2(v___x_2670_, v___x_2620_, v___x_2679_, v___x_2681_);
v___x_2683_ = l_Lean_Syntax_node1(v___x_2670_, v___x_2577_, v___x_2682_);
v___x_2684_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2670_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = l_Lean_Syntax_node4(v___x_2670_, v___x_2533_, v___x_2675_, v___x_2683_, v___x_2685_, v_a_2665_);
v___x_2687_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2688_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2670_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = l_Lean_Syntax_node3(v___x_2670_, v___x_2671_, v___x_2673_, v___x_2686_, v___x_2688_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 0, v___x_2689_);
v___x_2691_ = v___x_2668_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2689_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v_a_2666_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v___x_2522_);
v_a_2694_ = lean_ctor_get(v___x_2664_, 0);
v_a_2695_ = lean_ctor_get(v___x_2664_, 1);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2664_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_inc(v_a_2694_);
lean_dec(v___x_2664_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2694_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
else
{
lean_object* v___x_2703_; lean_object* v___x_2704_; uint8_t v___x_2705_; 
v___x_2703_ = l_Lean_Syntax_getArg(v___x_2661_, v___x_2507_);
v___x_2704_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1___closed__1));
lean_inc(v___x_2703_);
v___x_2705_ = l_Lean_Syntax_isOfKind(v___x_2703_, v___x_2704_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; 
lean_dec(v___x_2703_);
lean_dec(v___x_2662_);
lean_dec(v___x_2661_);
lean_dec(v___x_2619_);
v___x_2706_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2734_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
v_a_2708_ = lean_ctor_get(v___x_2706_, 1);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2710_ = v___x_2706_;
v_isShared_2711_ = v_isSharedCheck_2734_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_inc(v_a_2707_);
lean_dec(v___x_2706_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2734_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2732_; 
v___x_2712_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2705_);
v___x_2713_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2714_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2712_, 10);
v___x_2715_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2712_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2717_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2712_);
lean_ctor_set(v___x_2717_, 1, v___x_2716_);
v___x_2718_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2719_ = l_Lean_Syntax_node1(v___x_2712_, v___x_2704_, v___x_2522_);
v___x_2720_ = l_Lean_Syntax_node1(v___x_2712_, v___x_2718_, v___x_2719_);
v___x_2721_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2722_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2712_);
lean_ctor_set(v___x_2722_, 1, v___x_2718_);
lean_ctor_set(v___x_2722_, 2, v___x_2721_);
v___x_2723_ = l_Lean_Syntax_node2(v___x_2712_, v___x_2620_, v___x_2720_, v___x_2722_);
v___x_2724_ = l_Lean_Syntax_node1(v___x_2712_, v___x_2577_, v___x_2723_);
v___x_2725_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2726_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2712_);
lean_ctor_set(v___x_2726_, 1, v___x_2725_);
v___x_2727_ = l_Lean_Syntax_node4(v___x_2712_, v___x_2533_, v___x_2717_, v___x_2724_, v___x_2726_, v_a_2707_);
v___x_2728_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2729_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2712_);
lean_ctor_set(v___x_2729_, 1, v___x_2728_);
v___x_2730_ = l_Lean_Syntax_node3(v___x_2712_, v___x_2713_, v___x_2715_, v___x_2727_, v___x_2729_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2730_);
v___x_2732_ = v___x_2710_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2730_);
lean_ctor_set(v_reuseFailAlloc_2733_, 1, v_a_2708_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
else
{
lean_object* v_a_2735_; lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec(v___x_2522_);
v_a_2735_ = lean_ctor_get(v___x_2706_, 0);
v_a_2736_ = lean_ctor_get(v___x_2706_, 1);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2706_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_inc(v_a_2735_);
lean_dec(v___x_2706_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2735_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
lean_object* v___x_2744_; uint8_t v___x_2745_; 
v___x_2744_ = l_Lean_Syntax_getArg(v___x_2703_, v___x_2507_);
lean_dec(v___x_2703_);
lean_inc(v___x_2744_);
v___x_2745_ = l_Lean_Syntax_isOfKind(v___x_2744_, v___x_2523_);
if (v___x_2745_ == 0)
{
lean_object* v___x_2746_; 
lean_dec(v___x_2744_);
lean_dec(v___x_2662_);
lean_dec(v___x_2661_);
lean_dec(v___x_2619_);
v___x_2746_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2774_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
v_a_2748_ = lean_ctor_get(v___x_2746_, 1);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2750_ = v___x_2746_;
v_isShared_2751_ = v_isSharedCheck_2774_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_inc(v_a_2747_);
lean_dec(v___x_2746_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2774_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2772_; 
v___x_2752_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2745_);
v___x_2753_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2754_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2752_, 10);
v___x_2755_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2752_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2757_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2752_);
lean_ctor_set(v___x_2757_, 1, v___x_2756_);
v___x_2758_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2759_ = l_Lean_Syntax_node1(v___x_2752_, v___x_2704_, v___x_2522_);
v___x_2760_ = l_Lean_Syntax_node1(v___x_2752_, v___x_2758_, v___x_2759_);
v___x_2761_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2762_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2752_);
lean_ctor_set(v___x_2762_, 1, v___x_2758_);
lean_ctor_set(v___x_2762_, 2, v___x_2761_);
v___x_2763_ = l_Lean_Syntax_node2(v___x_2752_, v___x_2620_, v___x_2760_, v___x_2762_);
v___x_2764_ = l_Lean_Syntax_node1(v___x_2752_, v___x_2577_, v___x_2763_);
v___x_2765_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2766_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2752_);
lean_ctor_set(v___x_2766_, 1, v___x_2765_);
v___x_2767_ = l_Lean_Syntax_node4(v___x_2752_, v___x_2533_, v___x_2757_, v___x_2764_, v___x_2766_, v_a_2747_);
v___x_2768_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2752_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = l_Lean_Syntax_node3(v___x_2752_, v___x_2753_, v___x_2755_, v___x_2767_, v___x_2769_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v___x_2770_);
v___x_2772_ = v___x_2750_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2773_, 1, v_a_2748_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
else
{
lean_object* v_a_2775_; lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_dec(v___x_2522_);
v_a_2775_ = lean_ctor_get(v___x_2746_, 0);
v_a_2776_ = lean_ctor_get(v___x_2746_, 1);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2746_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_inc(v_a_2775_);
lean_dec(v___x_2746_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2775_);
lean_ctor_set(v_reuseFailAlloc_2782_, 1, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; size_t v_sz_2790_; size_t v___x_2791_; lean_object* v___x_2792_; 
v___x_2784_ = l_Lean_Syntax_getArgs(v___x_2661_);
lean_dec(v___x_2661_);
v___x_2785_ = l_Array_extract___redArg(v___x_2784_, v___x_2502_, v___x_2662_);
lean_dec_ref(v___x_2784_);
v___x_2786_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__16));
v___x_2787_ = lean_box(2);
v___x_2788_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
lean_ctor_set(v___x_2788_, 1, v___x_2786_);
lean_ctor_set(v___x_2788_, 2, v___x_2785_);
v___x_2789_ = l_Lean_Syntax_getArgs(v___x_2788_);
lean_dec_ref_known(v___x_2788_, 3);
v_sz_2790_ = lean_array_size(v___x_2789_);
v___x_2791_ = ((size_t)0ULL);
v___x_2792_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__0(v_sz_2790_, v___x_2791_, v___x_2789_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v___x_2793_; 
lean_dec(v___x_2744_);
lean_dec(v___x_2619_);
v___x_2793_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2821_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
v_a_2795_ = lean_ctor_get(v___x_2793_, 1);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2797_ = v___x_2793_;
v_isShared_2798_ = v_isSharedCheck_2821_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_inc(v_a_2794_);
lean_dec(v___x_2793_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2821_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
uint8_t v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2819_; 
v___x_2799_ = 0;
v___x_2800_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2799_);
v___x_2801_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2802_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2800_, 10);
v___x_2803_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2800_);
lean_ctor_set(v___x_2803_, 1, v___x_2802_);
v___x_2804_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2800_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
v___x_2806_ = l_Lean_Syntax_node1(v___x_2800_, v___x_2704_, v___x_2522_);
v___x_2807_ = l_Lean_Syntax_node1(v___x_2800_, v___x_2786_, v___x_2806_);
v___x_2808_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2809_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2809_, 0, v___x_2800_);
lean_ctor_set(v___x_2809_, 1, v___x_2786_);
lean_ctor_set(v___x_2809_, 2, v___x_2808_);
v___x_2810_ = l_Lean_Syntax_node2(v___x_2800_, v___x_2620_, v___x_2807_, v___x_2809_);
v___x_2811_ = l_Lean_Syntax_node1(v___x_2800_, v___x_2577_, v___x_2810_);
v___x_2812_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2813_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2813_, 0, v___x_2800_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
v___x_2814_ = l_Lean_Syntax_node4(v___x_2800_, v___x_2533_, v___x_2805_, v___x_2811_, v___x_2813_, v_a_2794_);
v___x_2815_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2816_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2800_);
lean_ctor_set(v___x_2816_, 1, v___x_2815_);
v___x_2817_ = l_Lean_Syntax_node3(v___x_2800_, v___x_2801_, v___x_2803_, v___x_2814_, v___x_2816_);
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2817_);
v___x_2819_ = v___x_2797_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v___x_2817_);
lean_ctor_set(v_reuseFailAlloc_2820_, 1, v_a_2795_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
else
{
lean_object* v_a_2822_; lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
lean_dec(v___x_2522_);
v_a_2822_ = lean_ctor_get(v___x_2793_, 0);
v_a_2823_ = lean_ctor_get(v___x_2793_, 1);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2793_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_inc(v_a_2822_);
lean_dec(v___x_2793_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2822_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_a_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
else
{
lean_object* v_val_2831_; lean_object* v___x_2832_; uint8_t v___x_2833_; 
v_val_2831_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_val_2831_);
lean_dec_ref_known(v___x_2792_, 1);
v___x_2832_ = l_Lean_Syntax_getArg(v___x_2619_, v___x_2502_);
lean_dec(v___x_2619_);
v___x_2833_ = l_Lean_Syntax_matchesNull(v___x_2832_, v___x_2507_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; 
lean_dec(v_val_2831_);
lean_dec(v___x_2744_);
v___x_2834_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2532_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2861_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
v_a_2836_ = lean_ctor_get(v___x_2834_, 1);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2838_ = v___x_2834_;
v_isShared_2839_ = v_isSharedCheck_2861_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_inc(v_a_2835_);
lean_dec(v___x_2834_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2861_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2859_; 
v___x_2840_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2833_);
v___x_2841_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2842_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2840_, 10);
v___x_2843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2840_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2845_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2840_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = l_Lean_Syntax_node1(v___x_2840_, v___x_2704_, v___x_2522_);
v___x_2847_ = l_Lean_Syntax_node1(v___x_2840_, v___x_2786_, v___x_2846_);
v___x_2848_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2849_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2840_);
lean_ctor_set(v___x_2849_, 1, v___x_2786_);
lean_ctor_set(v___x_2849_, 2, v___x_2848_);
v___x_2850_ = l_Lean_Syntax_node2(v___x_2840_, v___x_2620_, v___x_2847_, v___x_2849_);
v___x_2851_ = l_Lean_Syntax_node1(v___x_2840_, v___x_2577_, v___x_2850_);
v___x_2852_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2853_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2840_);
lean_ctor_set(v___x_2853_, 1, v___x_2852_);
v___x_2854_ = l_Lean_Syntax_node4(v___x_2840_, v___x_2533_, v___x_2845_, v___x_2851_, v___x_2853_, v_a_2835_);
v___x_2855_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2840_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = l_Lean_Syntax_node3(v___x_2840_, v___x_2841_, v___x_2843_, v___x_2854_, v___x_2856_);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2857_);
v___x_2859_ = v___x_2838_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v___x_2857_);
lean_ctor_set(v_reuseFailAlloc_2860_, 1, v_a_2836_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
else
{
lean_object* v_a_2862_; lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2870_; 
lean_dec(v___x_2522_);
v_a_2862_ = lean_ctor_get(v___x_2834_, 0);
v_a_2863_ = lean_ctor_get(v___x_2834_, 1);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2865_ = v___x_2834_;
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_inc(v_a_2862_);
lean_dec(v___x_2834_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_a_2862_);
lean_ctor_set(v_reuseFailAlloc_2869_, 1, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
else
{
lean_object* v_00_u03a8_2871_; lean_object* v___x_2872_; 
v_00_u03a8_2871_ = l_Lean_Syntax_getArg(v_00_u03a8_2532_, v___x_2531_);
lean_dec(v_00_u03a8_2532_);
v___x_2872_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_00_u03a8_2871_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2872_) == 0)
{
lean_object* v_a_2873_; lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2905_; 
v_a_2873_ = lean_ctor_get(v___x_2872_, 0);
v_a_2874_ = lean_ctor_get(v___x_2872_, 1);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2872_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2876_ = v___x_2872_;
v_isShared_2877_ = v_isSharedCheck_2905_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_inc(v_a_2873_);
lean_dec(v___x_2872_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2905_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
uint8_t v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; size_t v_sz_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2903_; 
v___x_2878_ = 0;
v___x_2879_ = l_Lean_SourceInfo_fromRef(v_a_2496_, v___x_2878_);
v___x_2880_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2881_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2879_, 12);
v___x_2882_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2879_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___x_2883_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandExists___closed__0));
v___x_2884_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2879_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
v___x_2885_ = l_Lean_Syntax_node1(v___x_2879_, v___x_2704_, v___x_2522_);
v___x_2886_ = l_Lean_Syntax_node1(v___x_2879_, v___x_2704_, v___x_2744_);
v___x_2887_ = l_Array_mkArray2___redArg(v___x_2885_, v___x_2886_);
v_sz_2888_ = lean_array_size(v_val_2831_);
v___x_2889_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Do_SPred_Notation_unexpandExists_spec__1(v___x_2879_, v_sz_2888_, v___x_2791_, v_val_2831_);
v___x_2890_ = l_Array_append___redArg(v___x_2887_, v___x_2889_);
lean_dec_ref(v___x_2889_);
v___x_2891_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2879_);
lean_ctor_set(v___x_2891_, 1, v___x_2786_);
lean_ctor_set(v___x_2891_, 2, v___x_2890_);
v___x_2892_ = lean_obj_once(&l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49, &l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49_once, _init_l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__49);
v___x_2893_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2879_);
lean_ctor_set(v___x_2893_, 1, v___x_2786_);
lean_ctor_set(v___x_2893_, 2, v___x_2892_);
v___x_2894_ = l_Lean_Syntax_node2(v___x_2879_, v___x_2620_, v___x_2891_, v___x_2893_);
v___x_2895_ = l_Lean_Syntax_node1(v___x_2879_, v___x_2577_, v___x_2894_);
v___x_2896_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__53));
v___x_2897_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2879_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = l_Lean_Syntax_node4(v___x_2879_, v___x_2533_, v___x_2884_, v___x_2895_, v___x_2897_, v_a_2873_);
v___x_2899_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2900_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2879_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
v___x_2901_ = l_Lean_Syntax_node3(v___x_2879_, v___x_2880_, v___x_2882_, v___x_2898_, v___x_2900_);
if (v_isShared_2877_ == 0)
{
lean_ctor_set(v___x_2876_, 0, v___x_2901_);
v___x_2903_ = v___x_2876_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v___x_2901_);
lean_ctor_set(v_reuseFailAlloc_2904_, 1, v_a_2874_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
else
{
lean_object* v_a_2906_; lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2914_; 
lean_dec(v_val_2831_);
lean_dec(v___x_2744_);
lean_dec(v___x_2522_);
v_a_2906_ = lean_ctor_get(v___x_2872_, 0);
v_a_2907_ = lean_ctor_get(v___x_2872_, 1);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2872_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2909_ = v___x_2872_;
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_inc(v_a_2906_);
lean_dec(v___x_2872_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2906_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
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
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandExists___boxed(lean_object* v_x_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_){
_start:
{
lean_object* v_res_2918_; 
v_res_2918_ = l_Std_Do_SPred_Notation_unexpandExists(v_x_2915_, v_a_2916_, v_a_2917_);
lean_dec(v_a_2916_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff(lean_object* v_x_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_){
_start:
{
lean_object* v___x_2923_; uint8_t v___x_2924_; 
v___x_2923_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term_u231c___u231d__1___closed__4));
lean_inc(v_x_2920_);
v___x_2924_ = l_Lean_Syntax_isOfKind(v_x_2920_, v___x_2923_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
lean_dec(v_x_2920_);
v___x_2925_ = lean_box(0);
v___x_2926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
lean_ctor_set(v___x_2926_, 1, v_a_2922_);
return v___x_2926_;
}
else
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; uint8_t v___x_2930_; 
v___x_2927_ = lean_unsigned_to_nat(1u);
v___x_2928_ = l_Lean_Syntax_getArg(v_x_2920_, v___x_2927_);
lean_dec(v_x_2920_);
v___x_2929_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_2928_);
v___x_2930_ = l_Lean_Syntax_matchesNull(v___x_2928_, v___x_2929_);
if (v___x_2930_ == 0)
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
lean_dec(v___x_2928_);
v___x_2931_ = lean_box(0);
v___x_2932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
lean_ctor_set(v___x_2932_, 1, v_a_2922_);
return v___x_2932_;
}
else
{
lean_object* v___x_2933_; lean_object* v_P_2934_; lean_object* v___x_2935_; 
v___x_2933_ = lean_unsigned_to_nat(0u);
v_P_2934_ = l_Lean_Syntax_getArg(v___x_2928_, v___x_2933_);
v___x_2935_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_P_2934_, v_a_2921_, v_a_2922_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v_a_2936_; lean_object* v_a_2937_; lean_object* v_Q_2938_; lean_object* v___x_2939_; 
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_a_2936_);
v_a_2937_ = lean_ctor_get(v___x_2935_, 1);
lean_inc(v_a_2937_);
lean_dec_ref_known(v___x_2935_, 2);
v_Q_2938_ = l_Lean_Syntax_getArg(v___x_2928_, v___x_2927_);
lean_dec(v___x_2928_);
v___x_2939_ = l_Std_Do_SPred_Notation_unpack___at___00Std_Do_SPred_Notation_unexpandEntails_spec__0(v_Q_2938_, v_a_2921_, v_a_2937_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2960_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
v_a_2941_ = lean_ctor_get(v___x_2939_, 1);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2943_ = v___x_2939_;
v_isShared_2944_ = v_isSharedCheck_2960_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_inc(v_a_2940_);
lean_dec(v___x_2939_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2960_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
uint8_t v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2945_ = 0;
v___x_2946_ = l_Lean_SourceInfo_fromRef(v_a_2921_, v___x_2945_);
v___x_2947_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__10));
v___x_2948_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__11));
lean_inc_n(v___x_2946_, 4);
v___x_2949_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2946_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
v___x_2950_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__termSpred_x28___x29__1___closed__9));
v___x_2951_ = ((lean_object*)(l_Std_Do_SPred_Notation_unexpandIff___closed__0));
v___x_2952_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2946_);
lean_ctor_set(v___x_2952_, 1, v___x_2951_);
v___x_2953_ = l_Lean_Syntax_node3(v___x_2946_, v___x_2950_, v_a_2936_, v___x_2952_, v_a_2940_);
v___x_2954_ = ((lean_object*)(l_Std_Do___aux__Std__Do__SPred__Notation______macroRules__Std__Do__term___u22a2_u209b____1___closed__12));
v___x_2955_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2946_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
v___x_2956_ = l_Lean_Syntax_node3(v___x_2946_, v___x_2947_, v___x_2949_, v___x_2953_, v___x_2955_);
if (v_isShared_2944_ == 0)
{
lean_ctor_set(v___x_2943_, 0, v___x_2956_);
v___x_2958_ = v___x_2943_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2956_);
lean_ctor_set(v_reuseFailAlloc_2959_, 1, v_a_2941_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
else
{
lean_object* v_a_2961_; lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec(v_a_2936_);
v_a_2961_ = lean_ctor_get(v___x_2939_, 0);
v_a_2962_ = lean_ctor_get(v___x_2939_, 1);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2939_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_inc(v_a_2961_);
lean_dec(v___x_2939_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2961_);
lean_ctor_set(v_reuseFailAlloc_2968_, 1, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
else
{
lean_object* v_a_2970_; lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2978_; 
lean_dec(v___x_2928_);
v_a_2970_ = lean_ctor_get(v___x_2935_, 0);
v_a_2971_ = lean_ctor_get(v___x_2935_, 1);
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2973_ = v___x_2935_;
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_inc(v_a_2970_);
lean_dec(v___x_2935_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2976_; 
if (v_isShared_2974_ == 0)
{
v___x_2976_ = v___x_2973_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2970_);
lean_ctor_set(v_reuseFailAlloc_2977_, 1, v_a_2971_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Do_SPred_Notation_unexpandIff___boxed(lean_object* v_x_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l_Std_Do_SPred_Notation_unexpandIff(v_x_2979_, v_a_2980_, v_a_2981_);
lean_dec(v_a_2980_);
return v_res_2982_;
}
}
lean_object* runtime_initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Do_SPred_Notation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Do_SPred_Notation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
lean_object* initialize_Std_Do_SPred_Notation_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Do_SPred_Notation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Do_SPred_Notation_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Do_SPred_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Do_SPred_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Do_SPred_Notation(builtin);
}
#ifdef __cplusplus
}
#endif
