// Lean compiler output
// Module: Init.Simproc
// Imports: public meta import Init.Data.ToString.Name public import Init.Tactics import Init.Meta.Defs
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_simpPost;
extern lean_object* l_Lean_Parser_Tactic_simpPre;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkOptionalNode(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAtom(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "command__Simproc__[_]_(_):=_"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value_aux_1),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 10, 201, 188, 148, 134, 66, 9)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_value),LEAN_SCALAR_PTR_LITERAL(144, 113, 220, 36, 163, 13, 57, 223)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__14 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__14_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__14_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__15 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__15_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simproc "};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__16 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__16_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__16_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__17 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__17_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__15_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__17_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__18 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__18_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__19 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__19_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__19_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__20 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__20_value;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__21;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__23;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__25 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__25_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__26 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__26_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__26_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__29 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__29_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__30 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__30_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__30_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__31 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__31_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__29_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__31_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__32 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__32_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__25_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__32_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__33 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__33_value;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__35 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__35_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__33_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__35_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__36 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__36_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__36_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__37 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__37_value;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__38;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__39;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__40 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__40_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__40_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41_value;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__42;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__43 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__43_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__43_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__44 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__44_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__44_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__46;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48_value;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__49;
static const lean_string_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__50 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__50_value;
static const lean_ctor_object l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__50_value)}};
static const lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51 = (const lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51_value;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__52;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__53;
static lean_once_cell_t l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__54;
LEAN_EXPORT lean_object* l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d__;
static const lean_string_object l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "command__Dsimproc__[_]_(_):=_"};
static const lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 16, 232, 139, 82, 11, 60, 99)}};
static const lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dsimproc "};
static const lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__15_value),((lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12;
static lean_once_cell_t l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d__;
static const lean_string_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "command_Simproc_decl_(_):=_"};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 139, 147, 138, 247, 237, 61, 250)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "simproc_decl "};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_value),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__4_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__5 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__5_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__6 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__6_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__7 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__7_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__7_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__8 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__8_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__8_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__9 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__9_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__9_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__10 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__10_value;
static const lean_ctor_object l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__10_value)}};
static const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__11 = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d__ = (const lean_object*)&l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
static const lean_string_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "command_Dsimproc_decl_(_):=_"};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 5, 118, 89, 162, 130, 40, 80)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "dsimproc_decl "};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_value),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__4_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__5 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__5_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__6 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__6_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__7 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__7_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__7_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__8 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__8_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__8_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__9 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__9_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__9_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__10 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__10_value;
static const lean_ctor_object l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__10_value)}};
static const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__11 = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d__ = (const lean_object*)&l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
static const lean_string_object l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "command__Builtin_simproc__[_]_(_):=_"};
static const lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 226, 216, 188, 254, 131, 81, 168)}};
static const lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "builtin_simproc "};
static const lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__15_value),((lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12;
static lean_once_cell_t l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d__;
static const lean_string_object l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "command__Builtin_dsimproc__[_]_(_):=_"};
static const lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 5, 95, 80, 27, 210, 221, 36)}};
static const lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "builtin_dsimproc "};
static const lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__15_value),((lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4_value;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12;
static lean_once_cell_t l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13;
LEAN_EXPORT lean_object* l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d__;
static const lean_string_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "command_Builtin_simproc_decl_(_):=_"};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 244, 85, 86, 69, 85, 20, 202)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "builtin_simproc_decl "};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_value),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__4_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__5 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__5_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__6 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__6_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__7 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__7_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__7_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__8 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__8_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__8_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__9 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__9_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__9_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__10 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__10_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__10_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__11 = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d__ = (const lean_object*)&l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
static const lean_string_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "command_Builtin_dsimproc_decl_(_):=_"};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 226, 173, 154, 110, 51, 239, 123)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "builtin_dsimproc_decl "};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_value),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__4_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__5 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__5_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__6 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__6_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__7 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__7_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__7_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__8 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__8_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__8_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__9 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__9_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__9_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__10 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__10_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__10_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__11 = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d__ = (const lean_object*)&l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__11_value;
static const lean_string_object l_Lean_Parser_simprocPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "simprocPattern"};
static const lean_object* l_Lean_Parser_simprocPattern___closed__0 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__0_value;
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPattern___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPattern___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_simprocPattern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 202, 22, 200, 44, 153, 152, 252)}};
static const lean_object* l_Lean_Parser_simprocPattern___closed__1 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__1_value;
static const lean_string_object l_Lean_Parser_simprocPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "simproc_pattern% "};
static const lean_object* l_Lean_Parser_simprocPattern___closed__2 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__2_value;
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPattern___closed__2_value)}};
static const lean_object* l_Lean_Parser_simprocPattern___closed__3 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__3_value;
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_simprocPattern___closed__3_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_simprocPattern___closed__4 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__4_value;
static const lean_string_object l_Lean_Parser_simprocPattern___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l_Lean_Parser_simprocPattern___closed__5 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__5_value;
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPattern___closed__5_value)}};
static const lean_object* l_Lean_Parser_simprocPattern___closed__6 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__6_value;
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_simprocPattern___closed__4_value),((lean_object*)&l_Lean_Parser_simprocPattern___closed__6_value)}};
static const lean_object* l_Lean_Parser_simprocPattern___closed__7 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__7_value;
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_simprocPattern___closed__7_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value)}};
static const lean_object* l_Lean_Parser_simprocPattern___closed__8 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__8_value;
static const lean_ctor_object l_Lean_Parser_simprocPattern___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPattern___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_simprocPattern___closed__8_value)}};
static const lean_object* l_Lean_Parser_simprocPattern___closed__9 = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__9_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_simprocPattern = (const lean_object*)&l_Lean_Parser_simprocPattern___closed__9_value;
static const lean_string_object l_Lean_Parser_simprocPatternBuiltin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "simprocPatternBuiltin"};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__0 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__0_value;
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 222, 179, 10, 105, 49, 55, 147)}};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__1 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__1_value;
static const lean_string_object l_Lean_Parser_simprocPatternBuiltin___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "builtin_simproc_pattern% "};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__2 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__2_value;
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__2_value)}};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__3 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__3_value;
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__3_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45_value)}};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__4 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__4_value;
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__4_value),((lean_object*)&l_Lean_Parser_simprocPattern___closed__6_value)}};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__5 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__5_value;
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__5_value),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28_value)}};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__6 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__6_value;
static const lean_ctor_object l_Lean_Parser_simprocPatternBuiltin___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__6_value)}};
static const lean_object* l_Lean_Parser_simprocPatternBuiltin___closed__7 = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_simprocPatternBuiltin = (const lean_object*)&l_Lean_Parser_simprocPatternBuiltin___closed__7_value;
static const lean_string_object l_Lean_Parser_Attr_simprocAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Parser_Attr_simprocAttr___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__0_value;
static const lean_string_object l_Lean_Parser_Attr_simprocAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "simprocAttr"};
static const lean_object* l_Lean_Parser_Attr_simprocAttr___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__1_value;
static const lean_ctor_object l_Lean_Parser_Attr_simprocAttr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_simprocAttr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__2_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_simprocAttr___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_simprocAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 18, 96, 241, 98, 31, 116, 164)}};
static const lean_object* l_Lean_Parser_Attr_simprocAttr___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__2_value;
static const lean_string_object l_Lean_Parser_Attr_simprocAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simproc"};
static const lean_object* l_Lean_Parser_Attr_simprocAttr___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Attr_simprocAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Attr_simprocAttr___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__4_value;
static lean_once_cell_t l_Lean_Parser_Attr_simprocAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simprocAttr___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_simprocAttr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simprocAttr___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simprocAttr;
static const lean_string_object l_Lean_Parser_Attr_sevalprocAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "sevalprocAttr"};
static const lean_object* l_Lean_Parser_Attr_sevalprocAttr___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocAttr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocAttr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocAttr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 11, 137, 55, 180, 134, 243, 204)}};
static const lean_object* l_Lean_Parser_Attr_sevalprocAttr___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__1_value;
static const lean_string_object l_Lean_Parser_Attr_sevalprocAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "sevalproc"};
static const lean_object* l_Lean_Parser_Attr_sevalprocAttr___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Attr_sevalprocAttr___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_sevalprocAttr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_sevalprocAttr___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_sevalprocAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_sevalprocAttr___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_sevalprocAttr;
static const lean_string_object l_Lean_Parser_Attr_simprocBuiltinAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "simprocBuiltinAttr"};
static const lean_object* l_Lean_Parser_Attr_simprocBuiltinAttr___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 10, 79, 178, 22, 57, 41, 253)}};
static const lean_object* l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1_value;
static const lean_string_object l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "builtin_simproc"};
static const lean_object* l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Attr_simprocBuiltinAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Attr_simprocBuiltinAttr___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_simprocBuiltinAttr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simprocBuiltinAttr___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_simprocBuiltinAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simprocBuiltinAttr___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simprocBuiltinAttr;
static const lean_string_object l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "sevalprocBuiltinAttr"};
static const lean_object* l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 215, 225, 250, 188, 171, 99, 207)}};
static const lean_object* l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1_value;
static const lean_string_object l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "builtin_sevalproc"};
static const lean_object* l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2_value;
static const lean_ctor_object l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_sevalprocBuiltinAttr;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__0_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__1 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__1_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__2 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__2_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__3 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__3_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__4 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__4_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__6 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__6_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__7 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__7_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__8 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__8_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__10 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__10_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__11 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__11_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "simproc_pattern%"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__12 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__12_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__13 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__13_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__14 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__14_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__15 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__15_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Simproc"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__16 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__16_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value_aux_0),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value_aux_2),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(18, 160, 179, 254, 130, 82, 156, 255)}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__18 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__18_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__21 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__21_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value_aux_2),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__23 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__23_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value_aux_2),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24_value;
static lean_once_cell_t l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25;
static const lean_array_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value_aux_2),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DSimproc"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__0_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 227, 62, 233, 71, 149, 243, 160)}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "builtin_simproc_pattern%"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__dsimproc__decl___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__dsimproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 30, 18, 84, 71, 173, 185, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(195, 61, 75, 186, 44, 210, 52, 194)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "seval"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(203, 151, 253, 192, 151, 99, 156, 151)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_proc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 201, 23, 171, 41, 77, 220, 95)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 9, 185, 250, 127, 107, 245, 225)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_sevalprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 205, 179, 175, 177, 80, 141, 171)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_simprocAttr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(31, 224, 78, 200, 71, 50, 151, 250)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds___closed__0 = (const lean_object*)&l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "simproc_decl"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value;
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value_aux_0),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dsimproc_decl"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "builtin_simproc_decl"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "builtin_dsimproc_decl"};
static const lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__21(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_41_ = l_Lean_Parser_Tactic_simpPost;
v___x_42_ = l_Lean_Parser_Tactic_simpPre;
v___x_43_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__20));
v___x_44_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
lean_ctor_set(v___x_44_, 2, v___x_41_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_45_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__21, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__21_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__21);
v___x_46_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7));
v___x_47_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
lean_ctor_set(v___x_47_, 1, v___x_45_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__23(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_48_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_49_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__18));
v___x_50_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_51_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
lean_ctor_set(v___x_51_, 2, v___x_48_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__38(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__37));
v___x_84_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__23, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__23_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__23);
v___x_85_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_86_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set(v___x_86_, 2, v___x_83_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__39(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28));
v___x_88_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__38, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__38_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__38);
v___x_89_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_90_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
lean_ctor_set(v___x_90_, 2, v___x_87_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__42(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_94_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41));
v___x_95_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__39, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__39_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__39);
v___x_96_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_97_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
lean_ctor_set(v___x_97_, 2, v___x_94_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__46(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_104_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_105_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__42, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__42_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__42);
v___x_106_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_107_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
lean_ctor_set(v___x_107_, 2, v___x_104_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__49(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_111_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48));
v___x_112_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__46, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__46_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__46);
v___x_113_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_114_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
lean_ctor_set(v___x_114_, 2, v___x_111_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__52(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_118_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51));
v___x_119_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__49, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__49_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__49);
v___x_120_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_121_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set(v___x_121_, 2, v___x_118_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__53(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_122_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_123_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__52, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__52_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__52);
v___x_124_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_125_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
lean_ctor_set(v___x_125_, 2, v___x_122_);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__54(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_126_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__53, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__53_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__53);
v___x_127_ = lean_unsigned_to_nat(1022u);
v___x_128_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3));
v___x_129_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_127_);
lean_ctor_set(v___x_129_, 2, v___x_126_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d__(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__54, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__54_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__54);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_143_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_144_ = ((lean_object*)(l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4));
v___x_145_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_146_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___x_144_);
lean_ctor_set(v___x_146_, 2, v___x_143_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_147_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__37));
v___x_148_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5);
v___x_149_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_150_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
lean_ctor_set(v___x_150_, 2, v___x_147_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_151_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28));
v___x_152_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6);
v___x_153_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_154_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v___x_152_);
lean_ctor_set(v___x_154_, 2, v___x_151_);
return v___x_154_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_155_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41));
v___x_156_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7);
v___x_157_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_158_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
lean_ctor_set(v___x_158_, 1, v___x_156_);
lean_ctor_set(v___x_158_, 2, v___x_155_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_159_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_160_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8);
v___x_161_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_162_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
lean_ctor_set(v___x_162_, 2, v___x_159_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48));
v___x_164_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9);
v___x_165_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_166_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_164_);
lean_ctor_set(v___x_166_, 2, v___x_163_);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_167_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51));
v___x_168_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10);
v___x_169_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_170_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v___x_168_);
lean_ctor_set(v___x_170_, 2, v___x_167_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_171_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_172_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11);
v___x_173_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_174_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
lean_ctor_set(v___x_174_, 2, v___x_171_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_175_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12);
v___x_176_ = lean_unsigned_to_nat(1022u);
v___x_177_ = ((lean_object*)(l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_178_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
lean_ctor_set(v___x_178_, 2, v___x_175_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d__(void){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_obj_once(&l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13, &l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_once, _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13);
return v___x_179_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_274_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_275_ = ((lean_object*)(l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4));
v___x_276_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_277_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_275_);
lean_ctor_set(v___x_277_, 2, v___x_274_);
return v___x_277_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_278_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__37));
v___x_279_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5);
v___x_280_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_281_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set(v___x_281_, 1, v___x_279_);
lean_ctor_set(v___x_281_, 2, v___x_278_);
return v___x_281_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7(void){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_282_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28));
v___x_283_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6);
v___x_284_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_285_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___x_283_);
lean_ctor_set(v___x_285_, 2, v___x_282_);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_286_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41));
v___x_287_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7);
v___x_288_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_289_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v___x_287_);
lean_ctor_set(v___x_289_, 2, v___x_286_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_290_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_291_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8);
v___x_292_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_293_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_291_);
lean_ctor_set(v___x_293_, 2, v___x_290_);
return v___x_293_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_294_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48));
v___x_295_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9);
v___x_296_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_297_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
lean_ctor_set(v___x_297_, 2, v___x_294_);
return v___x_297_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_298_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51));
v___x_299_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10);
v___x_300_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_301_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
lean_ctor_set(v___x_301_, 1, v___x_299_);
lean_ctor_set(v___x_301_, 2, v___x_298_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_302_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_303_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11);
v___x_304_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_305_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_303_);
lean_ctor_set(v___x_305_, 2, v___x_302_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_306_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12);
v___x_307_ = lean_unsigned_to_nat(1022u);
v___x_308_ = ((lean_object*)(l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_309_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_307_);
lean_ctor_set(v___x_309_, 2, v___x_306_);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d__(void){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_obj_once(&l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13, &l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_once, _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_323_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_324_ = ((lean_object*)(l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__4));
v___x_325_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_326_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v___x_324_);
lean_ctor_set(v___x_326_, 2, v___x_323_);
return v___x_326_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_327_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__37));
v___x_328_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5);
v___x_329_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_330_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v___x_328_);
lean_ctor_set(v___x_330_, 2, v___x_327_);
return v___x_330_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_331_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__28));
v___x_332_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__6);
v___x_333_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_334_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_332_);
lean_ctor_set(v___x_334_, 2, v___x_331_);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_335_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__41));
v___x_336_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__7);
v___x_337_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_338_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_336_);
lean_ctor_set(v___x_338_, 2, v___x_335_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_339_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_340_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__8);
v___x_341_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_342_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v___x_340_);
lean_ctor_set(v___x_342_, 2, v___x_339_);
return v___x_342_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_343_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__48));
v___x_344_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__9);
v___x_345_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_346_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
lean_ctor_set(v___x_346_, 1, v___x_344_);
lean_ctor_set(v___x_346_, 2, v___x_343_);
return v___x_346_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_347_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__51));
v___x_348_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__10);
v___x_349_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_350_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v___x_348_);
lean_ctor_set(v___x_350_, 2, v___x_347_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_351_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__45));
v___x_352_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__11);
v___x_353_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_354_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
lean_ctor_set(v___x_354_, 2, v___x_351_);
return v___x_354_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_355_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__12);
v___x_356_ = lean_unsigned_to_nat(1022u);
v___x_357_ = ((lean_object*)(l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_358_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
lean_ctor_set(v___x_358_, 1, v___x_356_);
lean_ctor_set(v___x_358_, 2, v___x_355_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d__(void){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_obj_once(&l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13, &l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13_once, _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__13);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simprocAttr___closed__5(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_506_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_507_ = ((lean_object*)(l_Lean_Parser_Attr_simprocAttr___closed__4));
v___x_508_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_509_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
lean_ctor_set(v___x_509_, 1, v___x_507_);
lean_ctor_set(v___x_509_, 2, v___x_506_);
return v___x_509_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simprocAttr___closed__6(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_510_ = lean_obj_once(&l_Lean_Parser_Attr_simprocAttr___closed__5, &l_Lean_Parser_Attr_simprocAttr___closed__5_once, _init_l_Lean_Parser_Attr_simprocAttr___closed__5);
v___x_511_ = lean_unsigned_to_nat(1022u);
v___x_512_ = ((lean_object*)(l_Lean_Parser_Attr_simprocAttr___closed__2));
v___x_513_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
lean_ctor_set(v___x_513_, 1, v___x_511_);
lean_ctor_set(v___x_513_, 2, v___x_510_);
return v___x_513_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simprocAttr(void){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = lean_obj_once(&l_Lean_Parser_Attr_simprocAttr___closed__6, &l_Lean_Parser_Attr_simprocAttr___closed__6_once, _init_l_Lean_Parser_Attr_simprocAttr___closed__6);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_sevalprocAttr___closed__4(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_525_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_526_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocAttr___closed__3));
v___x_527_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_528_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v___x_526_);
lean_ctor_set(v___x_528_, 2, v___x_525_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_sevalprocAttr___closed__5(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_529_ = lean_obj_once(&l_Lean_Parser_Attr_sevalprocAttr___closed__4, &l_Lean_Parser_Attr_sevalprocAttr___closed__4_once, _init_l_Lean_Parser_Attr_sevalprocAttr___closed__4);
v___x_530_ = lean_unsigned_to_nat(1022u);
v___x_531_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocAttr___closed__1));
v___x_532_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set(v___x_532_, 1, v___x_530_);
lean_ctor_set(v___x_532_, 2, v___x_529_);
return v___x_532_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_sevalprocAttr(void){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lean_obj_once(&l_Lean_Parser_Attr_sevalprocAttr___closed__5, &l_Lean_Parser_Attr_sevalprocAttr___closed__5_once, _init_l_Lean_Parser_Attr_sevalprocAttr___closed__5);
return v___x_533_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simprocBuiltinAttr___closed__4(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_544_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_545_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__3));
v___x_546_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_547_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v___x_545_);
lean_ctor_set(v___x_547_, 2, v___x_544_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simprocBuiltinAttr___closed__5(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_obj_once(&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__4, &l_Lean_Parser_Attr_simprocBuiltinAttr___closed__4_once, _init_l_Lean_Parser_Attr_simprocBuiltinAttr___closed__4);
v___x_549_ = lean_unsigned_to_nat(1022u);
v___x_550_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1));
v___x_551_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v___x_549_);
lean_ctor_set(v___x_551_, 2, v___x_548_);
return v___x_551_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simprocBuiltinAttr(void){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l_Lean_Parser_Attr_simprocBuiltinAttr___closed__5, &l_Lean_Parser_Attr_simprocBuiltinAttr___closed__5_once, _init_l_Lean_Parser_Attr_simprocBuiltinAttr___closed__5);
return v___x_552_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__4(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_563_ = lean_obj_once(&l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__22);
v___x_564_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__3));
v___x_565_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__5));
v___x_566_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_564_);
lean_ctor_set(v___x_566_, 2, v___x_563_);
return v___x_566_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__5(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_567_ = lean_obj_once(&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__4, &l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__4_once, _init_l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__4);
v___x_568_ = lean_unsigned_to_nat(1022u);
v___x_569_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1));
v___x_570_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set(v___x_570_, 1, v___x_568_);
lean_ctor_set(v___x_570_, 2, v___x_567_);
return v___x_570_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_sevalprocBuiltinAttr(void){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__5, &l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__5_once, _init_l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__5);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25(void){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Array_mkArray0___redArg();
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1(lean_object* v_x_618_, lean_object* v_a_619_, lean_object* v_a_620_){
_start:
{
lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v_doc_x3f_684_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_711_ = ((lean_object*)(l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1));
lean_inc(v_x_618_);
v___x_712_ = l_Lean_Syntax_isOfKind(v_x_618_, v___x_711_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_dec(v_x_618_);
v___x_713_ = lean_box(1);
v___x_714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
lean_ctor_set(v___x_714_, 1, v_a_620_);
return v___x_714_;
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = l_Lean_Syntax_getArg(v_x_618_, v___x_715_);
v___x_717_ = l_Lean_Syntax_isNone(v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_716_);
v___x_719_ = l_Lean_Syntax_matchesNull(v___x_716_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec(v___x_716_);
lean_dec(v_x_618_);
v___x_720_ = lean_box(1);
v___x_721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_720_);
lean_ctor_set(v___x_721_, 1, v_a_620_);
return v___x_721_;
}
else
{
lean_object* v_doc_x3f_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v_doc_x3f_722_ = l_Lean_Syntax_getArg(v___x_716_, v___x_715_);
lean_dec(v___x_716_);
v___x_723_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_722_);
v___x_724_ = l_Lean_Syntax_isOfKind(v_doc_x3f_722_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec(v_doc_x3f_722_);
lean_dec(v_x_618_);
v___x_725_ = lean_box(1);
v___x_726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
lean_ctor_set(v___x_726_, 1, v_a_620_);
return v___x_726_;
}
else
{
lean_object* v___x_727_; 
v___x_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_727_, 0, v_doc_x3f_722_);
v_doc_x3f_684_ = v___x_727_;
v___y_685_ = v_a_619_;
v___y_686_ = v_a_620_;
goto v___jp_683_;
}
}
}
else
{
lean_object* v___x_728_; 
lean_dec(v___x_716_);
v___x_728_ = lean_box(0);
v_doc_x3f_684_ = v___x_728_;
v___y_685_ = v_a_619_;
v___y_686_ = v_a_620_;
goto v___jp_683_;
}
}
v___jp_621_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
lean_inc_ref_n(v___y_633_, 2);
v___x_636_ = l_Array_append___redArg(v___y_633_, v___y_635_);
lean_dec_ref(v___y_635_);
lean_inc_n(v___y_634_, 5);
lean_inc_n(v___y_629_, 20);
v___x_637_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_637_, 0, v___y_629_);
lean_ctor_set(v___x_637_, 1, v___y_634_);
lean_ctor_set(v___x_637_, 2, v___x_636_);
v___x_638_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_638_, 0, v___y_629_);
lean_ctor_set(v___x_638_, 1, v___y_634_);
lean_ctor_set(v___x_638_, 2, v___y_633_);
v___x_639_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__0));
lean_inc_ref_n(v___y_627_, 5);
lean_inc_ref_n(v___y_628_, 8);
lean_inc_ref_n(v___y_631_, 8);
v___x_640_ = l_Lean_Name_mkStr4(v___y_631_, v___y_628_, v___y_627_, v___x_639_);
v___x_641_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_641_, 0, v___y_629_);
lean_ctor_set(v___x_641_, 1, v___x_639_);
v___x_642_ = l_Lean_Syntax_node1(v___y_629_, v___x_640_, v___x_641_);
v___x_643_ = l_Lean_Syntax_node1(v___y_629_, v___y_634_, v___x_642_);
lean_inc_ref_n(v___x_638_, 10);
lean_inc(v___y_625_);
v___x_644_ = l_Lean_Syntax_node7(v___y_629_, v___y_625_, v___x_637_, v___x_638_, v___x_638_, v___x_638_, v___x_643_, v___x_638_, v___x_638_);
v___x_645_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__1));
v___x_646_ = l_Lean_Name_mkStr4(v___y_631_, v___y_628_, v___y_627_, v___x_645_);
v___x_647_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__2));
v___x_648_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_648_, 0, v___y_629_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__3));
v___x_650_ = l_Lean_Name_mkStr4(v___y_631_, v___y_628_, v___y_627_, v___x_649_);
lean_inc(v___y_626_);
v___x_651_ = l_Lean_Syntax_node2(v___y_629_, v___x_650_, v___y_626_, v___x_638_);
v___x_652_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__4));
v___x_653_ = l_Lean_Name_mkStr4(v___y_631_, v___y_628_, v___y_627_, v___x_652_);
v___x_654_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5));
v___x_655_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__6));
v___x_656_ = l_Lean_Name_mkStr4(v___y_631_, v___y_628_, v___x_654_, v___x_655_);
v___x_657_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__7));
v___x_658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_658_, 0, v___y_629_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
lean_inc(v___y_632_);
v___x_659_ = l_Lean_mkIdent(v___y_632_);
v___x_660_ = l_Lean_Syntax_node2(v___y_629_, v___x_656_, v___x_658_, v___x_659_);
v___x_661_ = l_Lean_Syntax_node1(v___y_629_, v___y_634_, v___x_660_);
v___x_662_ = l_Lean_Syntax_node2(v___y_629_, v___x_653_, v___x_638_, v___x_661_);
v___x_663_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__8));
v___x_664_ = l_Lean_Name_mkStr4(v___y_631_, v___y_628_, v___y_627_, v___x_663_);
v___x_665_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_666_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_666_, 0, v___y_629_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__10));
v___x_668_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__11));
v___x_669_ = l_Lean_Name_mkStr4(v___y_631_, v___y_628_, v___x_667_, v___x_668_);
v___x_670_ = l_Lean_Syntax_node2(v___y_629_, v___x_669_, v___x_638_, v___x_638_);
v___x_671_ = l_Lean_Syntax_node4(v___y_629_, v___x_664_, v___x_666_, v___y_622_, v___x_670_, v___x_638_);
v___x_672_ = l_Lean_Syntax_node5(v___y_629_, v___x_646_, v___x_648_, v___x_651_, v___x_662_, v___x_671_, v___x_638_);
lean_inc(v___y_624_);
v___x_673_ = l_Lean_Syntax_node2(v___y_629_, v___y_624_, v___x_644_, v___x_672_);
v___x_674_ = ((lean_object*)(l_Lean_Parser_simprocPattern___closed__0));
v___x_675_ = l_Lean_Name_mkStr3(v___y_631_, v___y_628_, v___x_674_);
v___x_676_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__12));
v___x_677_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_677_, 0, v___y_629_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__13));
v___x_679_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_679_, 0, v___y_629_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v___x_680_ = l_Lean_Syntax_node4(v___y_629_, v___x_675_, v___x_677_, v___y_623_, v___x_679_, v___y_626_);
v___x_681_ = l_Lean_Syntax_node2(v___y_629_, v___y_634_, v___x_673_, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
lean_ctor_set(v___x_682_, 1, v___y_630_);
return v___x_682_;
}
v___jp_683_:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_687_ = lean_unsigned_to_nat(2u);
v___x_688_ = l_Lean_Syntax_getArg(v_x_618_, v___x_687_);
v___x_689_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_688_);
v___x_690_ = l_Lean_Syntax_isOfKind(v___x_688_, v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec(v___x_688_);
lean_dec(v_doc_x3f_684_);
lean_dec(v_x_618_);
v___x_691_ = lean_box(1);
v___x_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
lean_ctor_set(v___x_692_, 1, v___y_686_);
return v___x_692_;
}
else
{
lean_object* v_ref_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v_simprocType_699_; uint8_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_ref_693_ = lean_ctor_get(v___y_685_, 5);
v___x_694_ = lean_unsigned_to_nat(4u);
v___x_695_ = l_Lean_Syntax_getArg(v_x_618_, v___x_694_);
v___x_696_ = lean_unsigned_to_nat(7u);
v___x_697_ = l_Lean_Syntax_getArg(v_x_618_, v___x_696_);
lean_dec(v_x_618_);
v___x_698_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0));
v_simprocType_699_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17));
v___x_700_ = 0;
v___x_701_ = l_Lean_SourceInfo_fromRef(v_ref_693_, v___x_700_);
v___x_702_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_703_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_704_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20));
v___x_705_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22));
v___x_706_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24));
v___x_707_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v_doc_x3f_684_) == 1)
{
lean_object* v_val_708_; lean_object* v___x_709_; 
v_val_708_ = lean_ctor_get(v_doc_x3f_684_, 0);
lean_inc(v_val_708_);
lean_dec_ref_known(v_doc_x3f_684_, 1);
v___x_709_ = l_Array_mkArray1___redArg(v_val_708_);
v___y_622_ = v___x_697_;
v___y_623_ = v___x_695_;
v___y_624_ = v___x_705_;
v___y_625_ = v___x_706_;
v___y_626_ = v___x_688_;
v___y_627_ = v___x_704_;
v___y_628_ = v___x_703_;
v___y_629_ = v___x_701_;
v___y_630_ = v___y_686_;
v___y_631_ = v___x_698_;
v___y_632_ = v_simprocType_699_;
v___y_633_ = v___x_707_;
v___y_634_ = v___x_702_;
v___y_635_ = v___x_709_;
goto v___jp_621_;
}
else
{
lean_object* v___x_710_; 
lean_dec(v_doc_x3f_684_);
v___x_710_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_622_ = v___x_697_;
v___y_623_ = v___x_695_;
v___y_624_ = v___x_705_;
v___y_625_ = v___x_706_;
v___y_626_ = v___x_688_;
v___y_627_ = v___x_704_;
v___y_628_ = v___x_703_;
v___y_629_ = v___x_701_;
v___y_630_ = v___y_686_;
v___y_631_ = v___x_698_;
v___y_632_ = v_simprocType_699_;
v___y_633_ = v___x_707_;
v___y_634_ = v___x_702_;
v___y_635_ = v___x_710_;
goto v___jp_621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1(v_x_729_, v_a_730_, v_a_731_);
lean_dec_ref(v_a_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1(lean_object* v_x_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v_doc_x3f_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = ((lean_object*)(l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1));
lean_inc(v_x_739_);
v___x_833_ = l_Lean_Syntax_isOfKind(v_x_739_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; 
lean_dec(v_x_739_);
v___x_834_ = lean_box(1);
v___x_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v_a_741_);
return v___x_835_;
}
else
{
lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_836_ = lean_unsigned_to_nat(0u);
v___x_837_ = l_Lean_Syntax_getArg(v_x_739_, v___x_836_);
v___x_838_ = l_Lean_Syntax_isNone(v___x_837_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_837_);
v___x_840_ = l_Lean_Syntax_matchesNull(v___x_837_, v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; lean_object* v___x_842_; 
lean_dec(v___x_837_);
lean_dec(v_x_739_);
v___x_841_ = lean_box(1);
v___x_842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
lean_ctor_set(v___x_842_, 1, v_a_741_);
return v___x_842_;
}
else
{
lean_object* v_doc_x3f_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v_doc_x3f_843_ = l_Lean_Syntax_getArg(v___x_837_, v___x_836_);
lean_dec(v___x_837_);
v___x_844_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_843_);
v___x_845_ = l_Lean_Syntax_isOfKind(v_doc_x3f_843_, v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v___x_847_; 
lean_dec(v_doc_x3f_843_);
lean_dec(v_x_739_);
v___x_846_ = lean_box(1);
v___x_847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v_a_741_);
return v___x_847_;
}
else
{
lean_object* v___x_848_; 
v___x_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_848_, 0, v_doc_x3f_843_);
v_doc_x3f_805_ = v___x_848_;
v___y_806_ = v_a_740_;
v___y_807_ = v_a_741_;
goto v___jp_804_;
}
}
}
else
{
lean_object* v___x_849_; 
lean_dec(v___x_837_);
v___x_849_ = lean_box(0);
v_doc_x3f_805_ = v___x_849_;
v___y_806_ = v_a_740_;
v___y_807_ = v_a_741_;
goto v___jp_804_;
}
}
v___jp_742_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
lean_inc_ref_n(v___y_747_, 2);
v___x_757_ = l_Array_append___redArg(v___y_747_, v___y_756_);
lean_dec_ref(v___y_756_);
lean_inc_n(v___y_753_, 5);
lean_inc_n(v___y_749_, 20);
v___x_758_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_758_, 0, v___y_749_);
lean_ctor_set(v___x_758_, 1, v___y_753_);
lean_ctor_set(v___x_758_, 2, v___x_757_);
v___x_759_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_759_, 0, v___y_749_);
lean_ctor_set(v___x_759_, 1, v___y_753_);
lean_ctor_set(v___x_759_, 2, v___y_747_);
v___x_760_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__0));
lean_inc_ref_n(v___y_755_, 5);
lean_inc_ref_n(v___y_750_, 8);
lean_inc_ref_n(v___y_745_, 8);
v___x_761_ = l_Lean_Name_mkStr4(v___y_745_, v___y_750_, v___y_755_, v___x_760_);
v___x_762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_762_, 0, v___y_749_);
lean_ctor_set(v___x_762_, 1, v___x_760_);
v___x_763_ = l_Lean_Syntax_node1(v___y_749_, v___x_761_, v___x_762_);
v___x_764_ = l_Lean_Syntax_node1(v___y_749_, v___y_753_, v___x_763_);
lean_inc_ref_n(v___x_759_, 10);
lean_inc(v___y_743_);
v___x_765_ = l_Lean_Syntax_node7(v___y_749_, v___y_743_, v___x_758_, v___x_759_, v___x_759_, v___x_759_, v___x_764_, v___x_759_, v___x_759_);
v___x_766_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__1));
v___x_767_ = l_Lean_Name_mkStr4(v___y_745_, v___y_750_, v___y_755_, v___x_766_);
v___x_768_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__2));
v___x_769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_769_, 0, v___y_749_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__3));
v___x_771_ = l_Lean_Name_mkStr4(v___y_745_, v___y_750_, v___y_755_, v___x_770_);
lean_inc(v___y_746_);
v___x_772_ = l_Lean_Syntax_node2(v___y_749_, v___x_771_, v___y_746_, v___x_759_);
v___x_773_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__4));
v___x_774_ = l_Lean_Name_mkStr4(v___y_745_, v___y_750_, v___y_755_, v___x_773_);
v___x_775_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5));
v___x_776_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__6));
v___x_777_ = l_Lean_Name_mkStr4(v___y_745_, v___y_750_, v___x_775_, v___x_776_);
v___x_778_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__7));
v___x_779_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_779_, 0, v___y_749_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
lean_inc(v___y_751_);
v___x_780_ = l_Lean_mkIdent(v___y_751_);
v___x_781_ = l_Lean_Syntax_node2(v___y_749_, v___x_777_, v___x_779_, v___x_780_);
v___x_782_ = l_Lean_Syntax_node1(v___y_749_, v___y_753_, v___x_781_);
v___x_783_ = l_Lean_Syntax_node2(v___y_749_, v___x_774_, v___x_759_, v___x_782_);
v___x_784_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__8));
v___x_785_ = l_Lean_Name_mkStr4(v___y_745_, v___y_750_, v___y_755_, v___x_784_);
v___x_786_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_787_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_787_, 0, v___y_749_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__10));
v___x_789_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__11));
v___x_790_ = l_Lean_Name_mkStr4(v___y_745_, v___y_750_, v___x_788_, v___x_789_);
v___x_791_ = l_Lean_Syntax_node2(v___y_749_, v___x_790_, v___x_759_, v___x_759_);
v___x_792_ = l_Lean_Syntax_node4(v___y_749_, v___x_785_, v___x_787_, v___y_754_, v___x_791_, v___x_759_);
v___x_793_ = l_Lean_Syntax_node5(v___y_749_, v___x_767_, v___x_769_, v___x_772_, v___x_783_, v___x_792_, v___x_759_);
lean_inc(v___y_748_);
v___x_794_ = l_Lean_Syntax_node2(v___y_749_, v___y_748_, v___x_765_, v___x_793_);
v___x_795_ = ((lean_object*)(l_Lean_Parser_simprocPattern___closed__0));
v___x_796_ = l_Lean_Name_mkStr3(v___y_745_, v___y_750_, v___x_795_);
v___x_797_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__12));
v___x_798_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_798_, 0, v___y_749_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__13));
v___x_800_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_800_, 0, v___y_749_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = l_Lean_Syntax_node4(v___y_749_, v___x_796_, v___x_798_, v___y_744_, v___x_800_, v___y_746_);
v___x_802_ = l_Lean_Syntax_node2(v___y_749_, v___y_753_, v___x_794_, v___x_801_);
v___x_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
lean_ctor_set(v___x_803_, 1, v___y_752_);
return v___x_803_;
}
v___jp_804_:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_808_ = lean_unsigned_to_nat(2u);
v___x_809_ = l_Lean_Syntax_getArg(v_x_739_, v___x_808_);
v___x_810_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_809_);
v___x_811_ = l_Lean_Syntax_isOfKind(v___x_809_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec(v___x_809_);
lean_dec(v_doc_x3f_805_);
lean_dec(v_x_739_);
v___x_812_ = lean_box(1);
v___x_813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v___y_807_);
return v___x_813_;
}
else
{
lean_object* v_ref_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v_simprocType_820_; uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_ref_814_ = lean_ctor_get(v___y_806_, 5);
v___x_815_ = lean_unsigned_to_nat(4u);
v___x_816_ = l_Lean_Syntax_getArg(v_x_739_, v___x_815_);
v___x_817_ = lean_unsigned_to_nat(7u);
v___x_818_ = l_Lean_Syntax_getArg(v_x_739_, v___x_817_);
lean_dec(v_x_739_);
v___x_819_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0));
v_simprocType_820_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1));
v___x_821_ = 0;
v___x_822_ = l_Lean_SourceInfo_fromRef(v_ref_814_, v___x_821_);
v___x_823_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_824_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_825_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20));
v___x_826_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22));
v___x_827_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24));
v___x_828_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v_doc_x3f_805_) == 1)
{
lean_object* v_val_829_; lean_object* v___x_830_; 
v_val_829_ = lean_ctor_get(v_doc_x3f_805_, 0);
lean_inc(v_val_829_);
lean_dec_ref_known(v_doc_x3f_805_, 1);
v___x_830_ = l_Array_mkArray1___redArg(v_val_829_);
v___y_743_ = v___x_827_;
v___y_744_ = v___x_816_;
v___y_745_ = v___x_819_;
v___y_746_ = v___x_809_;
v___y_747_ = v___x_828_;
v___y_748_ = v___x_826_;
v___y_749_ = v___x_822_;
v___y_750_ = v___x_824_;
v___y_751_ = v_simprocType_820_;
v___y_752_ = v___y_807_;
v___y_753_ = v___x_823_;
v___y_754_ = v___x_818_;
v___y_755_ = v___x_825_;
v___y_756_ = v___x_830_;
goto v___jp_742_;
}
else
{
lean_object* v___x_831_; 
lean_dec(v_doc_x3f_805_);
v___x_831_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_743_ = v___x_827_;
v___y_744_ = v___x_816_;
v___y_745_ = v___x_819_;
v___y_746_ = v___x_809_;
v___y_747_ = v___x_828_;
v___y_748_ = v___x_826_;
v___y_749_ = v___x_822_;
v___y_750_ = v___x_824_;
v___y_751_ = v_simprocType_820_;
v___y_752_ = v___y_807_;
v___y_753_ = v___x_823_;
v___y_754_ = v___x_818_;
v___y_755_ = v___x_825_;
v___y_756_ = v___x_831_;
goto v___jp_742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_850_, lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1(v_x_850_, v_a_851_, v_a_852_);
lean_dec_ref(v_a_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1(lean_object* v_x_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_862_; lean_object* v___y_863_; lean_object* v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v_doc_x3f_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = ((lean_object*)(l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1));
lean_inc(v_x_855_);
v___x_944_ = l_Lean_Syntax_isOfKind(v_x_855_, v___x_943_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_dec(v_x_855_);
v___x_945_ = lean_box(1);
v___x_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v_a_857_);
return v___x_946_;
}
else
{
lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = l_Lean_Syntax_getArg(v_x_855_, v___x_947_);
v___x_949_ = l_Lean_Syntax_isNone(v___x_948_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_950_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_948_);
v___x_951_ = l_Lean_Syntax_matchesNull(v___x_948_, v___x_950_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; lean_object* v___x_953_; 
lean_dec(v___x_948_);
lean_dec(v_x_855_);
v___x_952_ = lean_box(1);
v___x_953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set(v___x_953_, 1, v_a_857_);
return v___x_953_;
}
else
{
lean_object* v_doc_x3f_954_; lean_object* v___x_955_; uint8_t v___x_956_; 
v_doc_x3f_954_ = l_Lean_Syntax_getArg(v___x_948_, v___x_947_);
lean_dec(v___x_948_);
v___x_955_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_954_);
v___x_956_ = l_Lean_Syntax_isOfKind(v_doc_x3f_954_, v___x_955_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; lean_object* v___x_958_; 
lean_dec(v_doc_x3f_954_);
lean_dec(v_x_855_);
v___x_957_ = lean_box(1);
v___x_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
lean_ctor_set(v___x_958_, 1, v_a_857_);
return v___x_958_;
}
else
{
lean_object* v___x_959_; 
v___x_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_959_, 0, v_doc_x3f_954_);
v_doc_x3f_916_ = v___x_959_;
v___y_917_ = v_a_856_;
v___y_918_ = v_a_857_;
goto v___jp_915_;
}
}
}
else
{
lean_object* v___x_960_; 
lean_dec(v___x_948_);
v___x_960_ = lean_box(0);
v_doc_x3f_916_ = v___x_960_;
v___y_917_ = v_a_856_;
v___y_918_ = v_a_857_;
goto v___jp_915_;
}
}
v___jp_858_:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
lean_inc_ref_n(v___y_866_, 2);
v___x_873_ = l_Array_append___redArg(v___y_866_, v___y_872_);
lean_dec_ref(v___y_872_);
lean_inc_n(v___y_860_, 4);
lean_inc_n(v___y_869_, 17);
v___x_874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_874_, 0, v___y_869_);
lean_ctor_set(v___x_874_, 1, v___y_860_);
lean_ctor_set(v___x_874_, 2, v___x_873_);
v___x_875_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_875_, 0, v___y_869_);
lean_ctor_set(v___x_875_, 1, v___y_860_);
lean_ctor_set(v___x_875_, 2, v___y_866_);
lean_inc_ref_n(v___x_875_, 11);
lean_inc(v___y_862_);
v___x_876_ = l_Lean_Syntax_node7(v___y_869_, v___y_862_, v___x_874_, v___x_875_, v___x_875_, v___x_875_, v___x_875_, v___x_875_, v___x_875_);
v___x_877_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__1));
lean_inc_ref_n(v___y_865_, 4);
lean_inc_ref_n(v___y_861_, 7);
lean_inc_ref_n(v___y_859_, 7);
v___x_878_ = l_Lean_Name_mkStr4(v___y_859_, v___y_861_, v___y_865_, v___x_877_);
v___x_879_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__2));
v___x_880_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_880_, 0, v___y_869_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__3));
v___x_882_ = l_Lean_Name_mkStr4(v___y_859_, v___y_861_, v___y_865_, v___x_881_);
lean_inc(v___y_863_);
v___x_883_ = l_Lean_Syntax_node2(v___y_869_, v___x_882_, v___y_863_, v___x_875_);
v___x_884_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__4));
v___x_885_ = l_Lean_Name_mkStr4(v___y_859_, v___y_861_, v___y_865_, v___x_884_);
v___x_886_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5));
v___x_887_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__6));
v___x_888_ = l_Lean_Name_mkStr4(v___y_859_, v___y_861_, v___x_886_, v___x_887_);
v___x_889_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__7));
v___x_890_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_890_, 0, v___y_869_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
lean_inc(v___y_867_);
v___x_891_ = l_Lean_mkIdent(v___y_867_);
v___x_892_ = l_Lean_Syntax_node2(v___y_869_, v___x_888_, v___x_890_, v___x_891_);
v___x_893_ = l_Lean_Syntax_node1(v___y_869_, v___y_860_, v___x_892_);
v___x_894_ = l_Lean_Syntax_node2(v___y_869_, v___x_885_, v___x_875_, v___x_893_);
v___x_895_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__8));
v___x_896_ = l_Lean_Name_mkStr4(v___y_859_, v___y_861_, v___y_865_, v___x_895_);
v___x_897_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_898_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_898_, 0, v___y_869_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__10));
v___x_900_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__11));
v___x_901_ = l_Lean_Name_mkStr4(v___y_859_, v___y_861_, v___x_899_, v___x_900_);
v___x_902_ = l_Lean_Syntax_node2(v___y_869_, v___x_901_, v___x_875_, v___x_875_);
v___x_903_ = l_Lean_Syntax_node4(v___y_869_, v___x_896_, v___x_898_, v___y_864_, v___x_902_, v___x_875_);
v___x_904_ = l_Lean_Syntax_node5(v___y_869_, v___x_878_, v___x_880_, v___x_883_, v___x_894_, v___x_903_, v___x_875_);
lean_inc(v___y_868_);
v___x_905_ = l_Lean_Syntax_node2(v___y_869_, v___y_868_, v___x_876_, v___x_904_);
v___x_906_ = ((lean_object*)(l_Lean_Parser_simprocPatternBuiltin___closed__0));
v___x_907_ = l_Lean_Name_mkStr3(v___y_859_, v___y_861_, v___x_906_);
v___x_908_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1___closed__0));
v___x_909_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_909_, 0, v___y_869_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__13));
v___x_911_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_911_, 0, v___y_869_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = l_Lean_Syntax_node4(v___y_869_, v___x_907_, v___x_909_, v___y_871_, v___x_911_, v___y_863_);
v___x_913_ = l_Lean_Syntax_node2(v___y_869_, v___y_860_, v___x_905_, v___x_912_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v___y_870_);
return v___x_914_;
}
v___jp_915_:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_919_ = lean_unsigned_to_nat(2u);
v___x_920_ = l_Lean_Syntax_getArg(v_x_855_, v___x_919_);
v___x_921_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_920_);
v___x_922_ = l_Lean_Syntax_isOfKind(v___x_920_, v___x_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec(v___x_920_);
lean_dec(v_doc_x3f_916_);
lean_dec(v_x_855_);
v___x_923_ = lean_box(1);
v___x_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
lean_ctor_set(v___x_924_, 1, v___y_918_);
return v___x_924_;
}
else
{
lean_object* v_ref_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v_simprocType_931_; uint8_t v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_ref_925_ = lean_ctor_get(v___y_917_, 5);
v___x_926_ = lean_unsigned_to_nat(4u);
v___x_927_ = l_Lean_Syntax_getArg(v_x_855_, v___x_926_);
v___x_928_ = lean_unsigned_to_nat(7u);
v___x_929_ = l_Lean_Syntax_getArg(v_x_855_, v___x_928_);
lean_dec(v_x_855_);
v___x_930_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0));
v_simprocType_931_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__17));
v___x_932_ = 0;
v___x_933_ = l_Lean_SourceInfo_fromRef(v_ref_925_, v___x_932_);
v___x_934_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_935_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_936_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20));
v___x_937_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22));
v___x_938_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24));
v___x_939_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v_doc_x3f_916_) == 1)
{
lean_object* v_val_940_; lean_object* v___x_941_; 
v_val_940_ = lean_ctor_get(v_doc_x3f_916_, 0);
lean_inc(v_val_940_);
lean_dec_ref_known(v_doc_x3f_916_, 1);
v___x_941_ = l_Array_mkArray1___redArg(v_val_940_);
v___y_859_ = v___x_930_;
v___y_860_ = v___x_934_;
v___y_861_ = v___x_935_;
v___y_862_ = v___x_938_;
v___y_863_ = v___x_920_;
v___y_864_ = v___x_929_;
v___y_865_ = v___x_936_;
v___y_866_ = v___x_939_;
v___y_867_ = v_simprocType_931_;
v___y_868_ = v___x_937_;
v___y_869_ = v___x_933_;
v___y_870_ = v___y_918_;
v___y_871_ = v___x_927_;
v___y_872_ = v___x_941_;
goto v___jp_858_;
}
else
{
lean_object* v___x_942_; 
lean_dec(v_doc_x3f_916_);
v___x_942_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_859_ = v___x_930_;
v___y_860_ = v___x_934_;
v___y_861_ = v___x_935_;
v___y_862_ = v___x_938_;
v___y_863_ = v___x_920_;
v___y_864_ = v___x_929_;
v___y_865_ = v___x_936_;
v___y_866_ = v___x_939_;
v___y_867_ = v_simprocType_931_;
v___y_868_ = v___x_937_;
v___y_869_ = v___x_933_;
v___y_870_ = v___y_918_;
v___y_871_ = v___x_927_;
v___y_872_ = v___x_942_;
goto v___jp_858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_961_, lean_object* v_a_962_, lean_object* v_a_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1(v_x_961_, v_a_962_, v_a_963_);
lean_dec_ref(v_a_962_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__dsimproc__decl___x28___x29_x3a_x3d____1(lean_object* v_x_965_, lean_object* v_a_966_, lean_object* v_a_967_){
_start:
{
lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; lean_object* v_doc_x3f_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1053_ = ((lean_object*)(l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1));
lean_inc(v_x_965_);
v___x_1054_ = l_Lean_Syntax_isOfKind(v_x_965_, v___x_1053_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
lean_dec(v_x_965_);
v___x_1055_ = lean_box(1);
v___x_1056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
lean_ctor_set(v___x_1056_, 1, v_a_967_);
return v___x_1056_;
}
else
{
lean_object* v___x_1057_; lean_object* v___x_1058_; uint8_t v___x_1059_; 
v___x_1057_ = lean_unsigned_to_nat(0u);
v___x_1058_ = l_Lean_Syntax_getArg(v_x_965_, v___x_1057_);
v___x_1059_ = l_Lean_Syntax_isNone(v___x_1058_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; uint8_t v___x_1061_; 
v___x_1060_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1058_);
v___x_1061_ = l_Lean_Syntax_matchesNull(v___x_1058_, v___x_1060_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
lean_dec(v___x_1058_);
lean_dec(v_x_965_);
v___x_1062_ = lean_box(1);
v___x_1063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v_a_967_);
return v___x_1063_;
}
else
{
lean_object* v_doc_x3f_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v_doc_x3f_1064_ = l_Lean_Syntax_getArg(v___x_1058_, v___x_1057_);
lean_dec(v___x_1058_);
v___x_1065_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_1064_);
v___x_1066_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1064_, v___x_1065_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_dec(v_doc_x3f_1064_);
lean_dec(v_x_965_);
v___x_1067_ = lean_box(1);
v___x_1068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
lean_ctor_set(v___x_1068_, 1, v_a_967_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; 
v___x_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1069_, 0, v_doc_x3f_1064_);
v_doc_x3f_1026_ = v___x_1069_;
v___y_1027_ = v_a_966_;
v___y_1028_ = v_a_967_;
goto v___jp_1025_;
}
}
}
else
{
lean_object* v___x_1070_; 
lean_dec(v___x_1058_);
v___x_1070_ = lean_box(0);
v_doc_x3f_1026_ = v___x_1070_;
v___y_1027_ = v_a_966_;
v___y_1028_ = v_a_967_;
goto v___jp_1025_;
}
}
v___jp_968_:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
lean_inc_ref_n(v___y_970_, 2);
v___x_983_ = l_Array_append___redArg(v___y_970_, v___y_982_);
lean_dec_ref(v___y_982_);
lean_inc_n(v___y_981_, 4);
lean_inc_n(v___y_973_, 17);
v___x_984_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_984_, 0, v___y_973_);
lean_ctor_set(v___x_984_, 1, v___y_981_);
lean_ctor_set(v___x_984_, 2, v___x_983_);
v___x_985_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_985_, 0, v___y_973_);
lean_ctor_set(v___x_985_, 1, v___y_981_);
lean_ctor_set(v___x_985_, 2, v___y_970_);
lean_inc_ref_n(v___x_985_, 11);
lean_inc(v___y_976_);
v___x_986_ = l_Lean_Syntax_node7(v___y_973_, v___y_976_, v___x_984_, v___x_985_, v___x_985_, v___x_985_, v___x_985_, v___x_985_, v___x_985_);
v___x_987_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__1));
lean_inc_ref_n(v___y_971_, 4);
lean_inc_ref_n(v___y_975_, 7);
lean_inc_ref_n(v___y_979_, 7);
v___x_988_ = l_Lean_Name_mkStr4(v___y_979_, v___y_975_, v___y_971_, v___x_987_);
v___x_989_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__2));
v___x_990_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_990_, 0, v___y_973_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__3));
v___x_992_ = l_Lean_Name_mkStr4(v___y_979_, v___y_975_, v___y_971_, v___x_991_);
lean_inc(v___y_972_);
v___x_993_ = l_Lean_Syntax_node2(v___y_973_, v___x_992_, v___y_972_, v___x_985_);
v___x_994_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__4));
v___x_995_ = l_Lean_Name_mkStr4(v___y_979_, v___y_975_, v___y_971_, v___x_994_);
v___x_996_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5));
v___x_997_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__6));
v___x_998_ = l_Lean_Name_mkStr4(v___y_979_, v___y_975_, v___x_996_, v___x_997_);
v___x_999_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__7));
v___x_1000_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___y_973_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
lean_inc(v___y_977_);
v___x_1001_ = l_Lean_mkIdent(v___y_977_);
v___x_1002_ = l_Lean_Syntax_node2(v___y_973_, v___x_998_, v___x_1000_, v___x_1001_);
v___x_1003_ = l_Lean_Syntax_node1(v___y_973_, v___y_981_, v___x_1002_);
v___x_1004_ = l_Lean_Syntax_node2(v___y_973_, v___x_995_, v___x_985_, v___x_1003_);
v___x_1005_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__8));
v___x_1006_ = l_Lean_Name_mkStr4(v___y_979_, v___y_975_, v___y_971_, v___x_1005_);
v___x_1007_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_1008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___y_973_);
lean_ctor_set(v___x_1008_, 1, v___x_1007_);
v___x_1009_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__10));
v___x_1010_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__11));
v___x_1011_ = l_Lean_Name_mkStr4(v___y_979_, v___y_975_, v___x_1009_, v___x_1010_);
v___x_1012_ = l_Lean_Syntax_node2(v___y_973_, v___x_1011_, v___x_985_, v___x_985_);
v___x_1013_ = l_Lean_Syntax_node4(v___y_973_, v___x_1006_, v___x_1008_, v___y_978_, v___x_1012_, v___x_985_);
v___x_1014_ = l_Lean_Syntax_node5(v___y_973_, v___x_988_, v___x_990_, v___x_993_, v___x_1004_, v___x_1013_, v___x_985_);
lean_inc(v___y_969_);
v___x_1015_ = l_Lean_Syntax_node2(v___y_973_, v___y_969_, v___x_986_, v___x_1014_);
v___x_1016_ = ((lean_object*)(l_Lean_Parser_simprocPatternBuiltin___closed__0));
v___x_1017_ = l_Lean_Name_mkStr3(v___y_979_, v___y_975_, v___x_1016_);
v___x_1018_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__simproc__decl___x28___x29_x3a_x3d____1___closed__0));
v___x_1019_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___y_973_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__13));
v___x_1021_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___y_973_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = l_Lean_Syntax_node4(v___y_973_, v___x_1017_, v___x_1019_, v___y_974_, v___x_1021_, v___y_972_);
v___x_1023_ = l_Lean_Syntax_node2(v___y_973_, v___y_981_, v___x_1015_, v___x_1022_);
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
lean_ctor_set(v___x_1024_, 1, v___y_980_);
return v___x_1024_;
}
v___jp_1025_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v___x_1029_ = lean_unsigned_to_nat(2u);
v___x_1030_ = l_Lean_Syntax_getArg(v_x_965_, v___x_1029_);
v___x_1031_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_1030_);
v___x_1032_ = l_Lean_Syntax_isOfKind(v___x_1030_, v___x_1031_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
lean_dec(v___x_1030_);
lean_dec(v_doc_x3f_1026_);
lean_dec(v_x_965_);
v___x_1033_ = lean_box(1);
v___x_1034_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
lean_ctor_set(v___x_1034_, 1, v___y_1028_);
return v___x_1034_;
}
else
{
lean_object* v_ref_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v_simprocType_1041_; uint8_t v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v_ref_1035_ = lean_ctor_get(v___y_1027_, 5);
v___x_1036_ = lean_unsigned_to_nat(4u);
v___x_1037_ = l_Lean_Syntax_getArg(v_x_965_, v___x_1036_);
v___x_1038_ = lean_unsigned_to_nat(7u);
v___x_1039_ = l_Lean_Syntax_getArg(v_x_965_, v___x_1038_);
lean_dec(v_x_965_);
v___x_1040_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0));
v_simprocType_1041_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Dsimproc__decl___x28___x29_x3a_x3d____1___closed__1));
v___x_1042_ = 0;
v___x_1043_ = l_Lean_SourceInfo_fromRef(v_ref_1035_, v___x_1042_);
v___x_1044_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1045_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_1046_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__20));
v___x_1047_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__22));
v___x_1048_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__24));
v___x_1049_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v_doc_x3f_1026_) == 1)
{
lean_object* v_val_1050_; lean_object* v___x_1051_; 
v_val_1050_ = lean_ctor_get(v_doc_x3f_1026_, 0);
lean_inc(v_val_1050_);
lean_dec_ref_known(v_doc_x3f_1026_, 1);
v___x_1051_ = l_Array_mkArray1___redArg(v_val_1050_);
v___y_969_ = v___x_1047_;
v___y_970_ = v___x_1049_;
v___y_971_ = v___x_1046_;
v___y_972_ = v___x_1030_;
v___y_973_ = v___x_1043_;
v___y_974_ = v___x_1037_;
v___y_975_ = v___x_1045_;
v___y_976_ = v___x_1048_;
v___y_977_ = v_simprocType_1041_;
v___y_978_ = v___x_1039_;
v___y_979_ = v___x_1040_;
v___y_980_ = v___y_1028_;
v___y_981_ = v___x_1044_;
v___y_982_ = v___x_1051_;
goto v___jp_968_;
}
else
{
lean_object* v___x_1052_; 
lean_dec(v_doc_x3f_1026_);
v___x_1052_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_969_ = v___x_1047_;
v___y_970_ = v___x_1049_;
v___y_971_ = v___x_1046_;
v___y_972_ = v___x_1030_;
v___y_973_ = v___x_1043_;
v___y_974_ = v___x_1037_;
v___y_975_ = v___x_1045_;
v___y_976_ = v___x_1048_;
v___y_977_ = v_simprocType_1041_;
v___y_978_ = v___x_1039_;
v___y_979_ = v___x_1040_;
v___y_980_ = v___y_1028_;
v___y_981_ = v___x_1044_;
v___y_982_ = v___x_1052_;
goto v___jp_968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__dsimproc__decl___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Builtin__dsimproc__decl___x28___x29_x3a_x3d____1(v_x_1071_, v_a_1072_, v_a_1073_);
lean_dec_ref(v_a_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0(lean_object* v_kind_1101_, lean_object* v_n_1102_, lean_object* v_pre_x3f_1103_, lean_object* v_as_1104_, size_t v_sz_1105_, size_t v_i_1106_, lean_object* v_b_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v_fst_1142_; lean_object* v_snd_1143_; uint8_t v___x_1148_; 
v___x_1148_ = lean_usize_dec_lt(v_i_1106_, v_sz_1105_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; 
lean_dec(v_n_1102_);
lean_dec(v_kind_1101_);
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v_b_1107_);
lean_ctor_set(v___x_1149_, 1, v___y_1109_);
return v___x_1149_;
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; uint8_t v___x_1153_; 
v_a_1150_ = lean_array_uget_borrowed(v_as_1104_, v_i_1106_);
v___x_1151_ = l_Lean_TSyntax_getId(v_a_1150_);
v___x_1152_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__5));
v___x_1153_ = lean_name_eq(v___x_1151_, v___x_1152_);
if (v___x_1153_ == 0)
{
lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1154_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7));
v___x_1155_ = lean_name_eq(v___x_1151_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1156_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__8));
v___x_1157_ = lean_name_append_after(v___x_1151_, v___x_1156_);
v___x_1158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__9));
lean_inc(v___x_1157_);
v___x_1159_ = l_Lean_Name_append(v___x_1158_, v___x_1157_);
v___x_1160_ = l_Lean_Name_toString(v___x_1157_, v___x_1148_);
v_fst_1142_ = v___x_1159_;
v_snd_1143_ = v___x_1160_;
goto v___jp_1141_;
}
else
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_dec(v___x_1151_);
v___x_1161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__10));
v___x_1162_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocAttr___closed__2));
v_fst_1142_ = v___x_1161_;
v_snd_1143_ = v___x_1162_;
goto v___jp_1141_;
}
}
else
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
lean_dec(v___x_1151_);
v___x_1163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__11));
v___x_1164_ = ((lean_object*)(l_Lean_Parser_Attr_simprocAttr___closed__3));
v_fst_1142_ = v___x_1163_;
v_snd_1143_ = v___x_1164_;
goto v___jp_1141_;
}
}
v___jp_1110_:
{
lean_object* v_ref_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; size_t v___x_1138_; size_t v___x_1139_; 
v_ref_1114_ = lean_ctor_get(v___y_1108_, 5);
v___x_1115_ = l_Lean_mkOptionalNode(v___y_1113_);
v___x_1116_ = lean_unsigned_to_nat(2u);
v___x_1117_ = lean_mk_empty_array_with_capacity(v___x_1116_);
v___x_1118_ = lean_array_push(v___x_1117_, v___y_1112_);
v___x_1119_ = lean_array_push(v___x_1118_, v___x_1115_);
v___x_1120_ = lean_box(2);
v___x_1121_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
lean_ctor_set(v___x_1121_, 1, v___y_1111_);
lean_ctor_set(v___x_1121_, 2, v___x_1119_);
v___x_1122_ = 0;
v___x_1123_ = l_Lean_SourceInfo_fromRef(v_ref_1114_, v___x_1122_);
v___x_1124_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_1125_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
lean_inc_n(v___x_1123_, 6);
v___x_1126_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1123_);
lean_ctor_set(v___x_1126_, 1, v___x_1124_);
v___x_1127_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_1128_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1123_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3));
lean_inc(v_kind_1101_);
v___x_1131_ = l_Lean_Syntax_node2(v___x_1123_, v___x_1130_, v_kind_1101_, v___x_1121_);
v___x_1132_ = l_Lean_Syntax_node1(v___x_1123_, v___x_1129_, v___x_1131_);
v___x_1133_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1134_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1123_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
lean_inc(v_n_1102_);
v___x_1135_ = l_Lean_Syntax_node1(v___x_1123_, v___x_1129_, v_n_1102_);
v___x_1136_ = l_Lean_Syntax_node5(v___x_1123_, v___x_1125_, v___x_1126_, v___x_1128_, v___x_1132_, v___x_1134_, v___x_1135_);
v___x_1137_ = lean_array_push(v_b_1107_, v___x_1136_);
v___x_1138_ = ((size_t)1ULL);
v___x_1139_ = lean_usize_add(v_i_1106_, v___x_1138_);
v_i_1106_ = v___x_1139_;
v_b_1107_ = v___x_1137_;
goto _start;
}
v___jp_1141_:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lean_mkAtom(v_snd_1143_);
if (lean_obj_tag(v_pre_x3f_1103_) == 0)
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_box(0);
v___y_1111_ = v_fst_1142_;
v___y_1112_ = v___x_1144_;
v___y_1113_ = v___x_1145_;
goto v___jp_1110_;
}
else
{
lean_object* v_val_1146_; lean_object* v___x_1147_; 
v_val_1146_ = lean_ctor_get(v_pre_x3f_1103_, 0);
lean_inc(v_val_1146_);
v___x_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1147_, 0, v_val_1146_);
v___y_1111_ = v_fst_1142_;
v___y_1112_ = v___x_1144_;
v___y_1113_ = v___x_1147_;
goto v___jp_1110_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___boxed(lean_object* v_kind_1165_, lean_object* v_n_1166_, lean_object* v_pre_x3f_1167_, lean_object* v_as_1168_, lean_object* v_sz_1169_, lean_object* v_i_1170_, lean_object* v_b_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
size_t v_sz_boxed_1174_; size_t v_i_boxed_1175_; lean_object* v_res_1176_; 
v_sz_boxed_1174_ = lean_unbox_usize(v_sz_1169_);
lean_dec(v_sz_1169_);
v_i_boxed_1175_ = lean_unbox_usize(v_i_1170_);
lean_dec(v_i_1170_);
v_res_1176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0(v_kind_1165_, v_n_1166_, v_pre_x3f_1167_, v_as_1168_, v_sz_boxed_1174_, v_i_boxed_1175_, v_b_1171_, v___y_1172_, v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec_ref(v_as_1168_);
lean_dec(v_pre_x3f_1167_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds(lean_object* v_kind_1179_, lean_object* v_pre_x3f_1180_, lean_object* v_ids_x3f_1181_, lean_object* v_n_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_){
_start:
{
lean_object* v_cmds_1185_; 
v_cmds_1185_ = ((lean_object*)(l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds___closed__0));
if (lean_obj_tag(v_ids_x3f_1181_) == 1)
{
lean_object* v_val_1186_; lean_object* v___x_1187_; size_t v_sz_1188_; size_t v___x_1189_; lean_object* v___x_1190_; 
v_val_1186_ = lean_ctor_get(v_ids_x3f_1181_, 0);
v___x_1187_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_val_1186_);
v_sz_1188_ = lean_array_size(v___x_1187_);
v___x_1189_ = ((size_t)0ULL);
v___x_1190_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0(v_kind_1179_, v_n_1182_, v_pre_x3f_1180_, v___x_1187_, v_sz_1188_, v___x_1189_, v_cmds_1185_, v_a_1183_, v_a_1184_);
lean_dec_ref(v___x_1187_);
lean_dec(v_pre_x3f_1180_);
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
v_a_1192_ = lean_ctor_get(v___x_1190_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1190_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_inc(v_a_1191_);
lean_dec(v___x_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1191_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
v_a_1200_ = lean_ctor_get(v___x_1190_, 0);
v_a_1201_ = lean_ctor_get(v___x_1190_, 1);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1190_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_inc(v_a_1200_);
lean_dec(v___x_1190_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1200_);
lean_ctor_set(v_reuseFailAlloc_1207_, 1, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
else
{
lean_object* v_ref_1209_; uint8_t v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___y_1224_; 
v_ref_1209_ = lean_ctor_get(v_a_1183_, 5);
v___x_1210_ = 0;
v___x_1211_ = l_Lean_SourceInfo_fromRef(v_ref_1209_, v___x_1210_);
v___x_1212_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_1213_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
lean_inc_n(v___x_1211_, 3);
v___x_1214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1211_);
lean_ctor_set(v___x_1214_, 1, v___x_1212_);
v___x_1215_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_1216_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1211_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1218_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__3));
v___x_1219_ = ((lean_object*)(l_Lean_Parser_Attr_simprocAttr___closed__2));
v___x_1220_ = ((lean_object*)(l_Lean_Parser_Attr_simprocAttr___closed__3));
v___x_1221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1211_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v_pre_x3f_1180_) == 1)
{
lean_object* v_val_1236_; lean_object* v___x_1237_; 
v_val_1236_ = lean_ctor_get(v_pre_x3f_1180_, 0);
lean_inc(v_val_1236_);
lean_dec_ref_known(v_pre_x3f_1180_, 1);
v___x_1237_ = l_Array_mkArray1___redArg(v_val_1236_);
v___y_1224_ = v___x_1237_;
goto v___jp_1223_;
}
else
{
lean_object* v___x_1238_; 
lean_dec(v_pre_x3f_1180_);
v___x_1238_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1224_ = v___x_1238_;
goto v___jp_1223_;
}
v___jp_1223_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1225_ = l_Array_append___redArg(v___x_1222_, v___y_1224_);
lean_dec_ref(v___y_1224_);
lean_inc_n(v___x_1211_, 6);
v___x_1226_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1211_);
lean_ctor_set(v___x_1226_, 1, v___x_1217_);
lean_ctor_set(v___x_1226_, 2, v___x_1225_);
v___x_1227_ = l_Lean_Syntax_node2(v___x_1211_, v___x_1219_, v___x_1221_, v___x_1226_);
v___x_1228_ = l_Lean_Syntax_node2(v___x_1211_, v___x_1218_, v_kind_1179_, v___x_1227_);
v___x_1229_ = l_Lean_Syntax_node1(v___x_1211_, v___x_1217_, v___x_1228_);
v___x_1230_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1231_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1211_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = l_Lean_Syntax_node1(v___x_1211_, v___x_1217_, v_n_1182_);
v___x_1233_ = l_Lean_Syntax_node5(v___x_1211_, v___x_1213_, v___x_1214_, v___x_1216_, v___x_1229_, v___x_1231_, v___x_1232_);
v___x_1234_ = lean_array_push(v_cmds_1185_, v___x_1233_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
lean_ctor_set(v___x_1235_, 1, v_a_1184_);
return v___x_1235_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds___boxed(lean_object* v_kind_1239_, lean_object* v_pre_x3f_1240_, lean_object* v_ids_x3f_1241_, lean_object* v_n_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds(v_kind_1239_, v_pre_x3f_1240_, v_ids_x3f_1241_, v_n_1242_, v_a_1243_, v_a_1244_);
lean_dec_ref(v_a_1243_);
lean_dec(v_ids_x3f_1241_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object* v_x_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1261_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1306_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__3));
lean_inc(v_x_1253_);
v___x_1307_ = l_Lean_Syntax_isOfKind(v_x_1253_, v___x_1306_);
if (v___x_1307_ == 0)
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
lean_dec(v_x_1253_);
v___x_1308_ = lean_box(1);
v___x_1309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
lean_ctor_set(v___x_1309_, 1, v_a_1255_);
return v___x_1309_;
}
else
{
lean_object* v___x_1310_; lean_object* v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; lean_object* v_ids_x3f_1316_; lean_object* v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v_pre_x3f_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v_doc_x3f_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___x_1375_; uint8_t v___x_1376_; 
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1375_ = l_Lean_Syntax_getArg(v_x_1253_, v___x_1310_);
v___x_1376_ = l_Lean_Syntax_isNone(v___x_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1375_);
v___x_1378_ = l_Lean_Syntax_matchesNull(v___x_1375_, v___x_1377_);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_dec(v___x_1375_);
lean_dec(v_x_1253_);
v___x_1379_ = lean_box(1);
v___x_1380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v_a_1255_);
return v___x_1380_;
}
else
{
lean_object* v_doc_x3f_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; 
v_doc_x3f_1381_ = l_Lean_Syntax_getArg(v___x_1375_, v___x_1310_);
lean_dec(v___x_1375_);
v___x_1382_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_1381_);
v___x_1383_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1381_, v___x_1382_);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_dec(v_doc_x3f_1381_);
lean_dec(v_x_1253_);
v___x_1384_ = lean_box(1);
v___x_1385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1384_);
lean_ctor_set(v___x_1385_, 1, v_a_1255_);
return v___x_1385_;
}
else
{
lean_object* v___x_1386_; 
v___x_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1386_, 0, v_doc_x3f_1381_);
v_doc_x3f_1357_ = v___x_1386_;
v___y_1358_ = v_a_1254_;
v___y_1359_ = v_a_1255_;
goto v___jp_1356_;
}
}
}
else
{
lean_object* v___x_1387_; 
lean_dec(v___x_1375_);
v___x_1387_ = lean_box(0);
v_doc_x3f_1357_ = v___x_1387_;
v___y_1358_ = v_a_1254_;
v___y_1359_ = v_a_1255_;
goto v___jp_1356_;
}
v___jp_1311_:
{
lean_object* v___x_1319_; lean_object* v_n_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; 
v___x_1319_ = lean_unsigned_to_nat(5u);
v_n_1320_ = l_Lean_Syntax_getArg(v_x_1253_, v___x_1319_);
v___x_1321_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v_n_1320_);
v___x_1322_ = l_Lean_Syntax_isOfKind(v_n_1320_, v___x_1321_);
if (v___x_1322_ == 0)
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
lean_dec(v_n_1320_);
lean_dec(v_ids_x3f_1316_);
lean_dec(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec(v___y_1312_);
lean_dec(v_x_1253_);
v___x_1323_ = lean_box(1);
v___x_1324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v___y_1318_);
return v___x_1324_;
}
else
{
lean_object* v_ref_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v_ref_1325_ = lean_ctor_get(v___y_1317_, 5);
v___x_1326_ = lean_unsigned_to_nat(7u);
v___x_1327_ = l_Lean_Syntax_getArg(v_x_1253_, v___x_1326_);
v___x_1328_ = lean_unsigned_to_nat(10u);
v___x_1329_ = l_Lean_Syntax_getArg(v_x_1253_, v___x_1328_);
lean_dec(v_x_1253_);
v___x_1330_ = 0;
v___x_1331_ = l_Lean_SourceInfo_fromRef(v_ref_1325_, v___x_1330_);
v___x_1332_ = ((lean_object*)(l_Lean_Parser_command__Simproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_1333_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1334_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_1312_) == 1)
{
lean_object* v_val_1335_; lean_object* v___x_1336_; 
v_val_1335_ = lean_ctor_get(v___y_1312_, 0);
lean_inc(v_val_1335_);
lean_dec_ref_known(v___y_1312_, 1);
v___x_1336_ = l_Array_mkArray1___redArg(v_val_1335_);
v___y_1257_ = v___x_1329_;
v___y_1258_ = v___x_1327_;
v___y_1259_ = v___x_1333_;
v___y_1260_ = v___x_1334_;
v___y_1261_ = v___x_1332_;
v___y_1262_ = v_ids_x3f_1316_;
v___y_1263_ = v_n_1320_;
v___y_1264_ = v___y_1318_;
v___y_1265_ = v___y_1317_;
v___y_1266_ = v___y_1313_;
v___y_1267_ = v___y_1314_;
v___y_1268_ = v___x_1331_;
v___y_1269_ = v___y_1315_;
v___y_1270_ = v___x_1336_;
goto v___jp_1256_;
}
else
{
lean_object* v___x_1337_; 
lean_dec(v___y_1312_);
v___x_1337_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1257_ = v___x_1329_;
v___y_1258_ = v___x_1327_;
v___y_1259_ = v___x_1333_;
v___y_1260_ = v___x_1334_;
v___y_1261_ = v___x_1332_;
v___y_1262_ = v_ids_x3f_1316_;
v___y_1263_ = v_n_1320_;
v___y_1264_ = v___y_1318_;
v___y_1265_ = v___y_1317_;
v___y_1266_ = v___y_1313_;
v___y_1267_ = v___y_1314_;
v___y_1268_ = v___x_1331_;
v___y_1269_ = v___y_1315_;
v___y_1270_ = v___x_1337_;
goto v___jp_1256_;
}
}
}
v___jp_1338_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1346_ = lean_unsigned_to_nat(4u);
v___x_1347_ = l_Lean_Syntax_getArg(v_x_1253_, v___x_1346_);
v___x_1348_ = l_Lean_Syntax_isNone(v___x_1347_);
if (v___x_1348_ == 0)
{
uint8_t v___x_1349_; 
lean_inc(v___x_1347_);
v___x_1349_ = l_Lean_Syntax_matchesNull(v___x_1347_, v___y_1342_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_dec(v___x_1347_);
lean_dec(v_pre_x3f_1343_);
lean_dec(v___y_1341_);
lean_dec(v___y_1339_);
lean_dec(v_x_1253_);
v___x_1350_ = lean_box(1);
v___x_1351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1350_);
lean_ctor_set(v___x_1351_, 1, v___y_1345_);
return v___x_1351_;
}
else
{
lean_object* v___x_1352_; lean_object* v_ids_x3f_1353_; lean_object* v___x_1354_; 
v___x_1352_ = l_Lean_Syntax_getArg(v___x_1347_, v___y_1340_);
lean_dec(v___x_1347_);
v_ids_x3f_1353_ = l_Lean_Syntax_getArgs(v___x_1352_);
lean_dec(v___x_1352_);
v___x_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1354_, 0, v_ids_x3f_1353_);
v___y_1312_ = v___y_1339_;
v___y_1313_ = v___y_1340_;
v___y_1314_ = v___y_1341_;
v___y_1315_ = v_pre_x3f_1343_;
v_ids_x3f_1316_ = v___x_1354_;
v___y_1317_ = v___y_1344_;
v___y_1318_ = v___y_1345_;
goto v___jp_1311_;
}
}
else
{
lean_object* v___x_1355_; 
lean_dec(v___x_1347_);
v___x_1355_ = lean_box(0);
v___y_1312_ = v___y_1339_;
v___y_1313_ = v___y_1340_;
v___y_1314_ = v___y_1341_;
v___y_1315_ = v_pre_x3f_1343_;
v_ids_x3f_1316_ = v___x_1355_;
v___y_1317_ = v___y_1344_;
v___y_1318_ = v___y_1345_;
goto v___jp_1311_;
}
}
v___jp_1356_:
{
lean_object* v___x_1360_; lean_object* v_kind_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1360_ = lean_unsigned_to_nat(1u);
v_kind_1361_ = l_Lean_Syntax_getArg(v_x_1253_, v___x_1360_);
v___x_1362_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2));
lean_inc(v_kind_1361_);
v___x_1363_ = l_Lean_Syntax_isOfKind(v_kind_1361_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
lean_dec(v_kind_1361_);
lean_dec(v_doc_x3f_1357_);
lean_dec(v_x_1253_);
v___x_1364_ = lean_box(1);
v___x_1365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
lean_ctor_set(v___x_1365_, 1, v___y_1359_);
return v___x_1365_;
}
else
{
lean_object* v___x_1366_; lean_object* v___x_1367_; uint8_t v___x_1368_; 
v___x_1366_ = lean_unsigned_to_nat(3u);
v___x_1367_ = l_Lean_Syntax_getArg(v_x_1253_, v___x_1366_);
v___x_1368_ = l_Lean_Syntax_isNone(v___x_1367_);
if (v___x_1368_ == 0)
{
uint8_t v___x_1369_; 
lean_inc(v___x_1367_);
v___x_1369_ = l_Lean_Syntax_matchesNull(v___x_1367_, v___x_1360_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
lean_dec(v___x_1367_);
lean_dec(v_kind_1361_);
lean_dec(v_doc_x3f_1357_);
lean_dec(v_x_1253_);
v___x_1370_ = lean_box(1);
v___x_1371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
lean_ctor_set(v___x_1371_, 1, v___y_1359_);
return v___x_1371_;
}
else
{
lean_object* v_pre_x3f_1372_; lean_object* v___x_1373_; 
v_pre_x3f_1372_ = l_Lean_Syntax_getArg(v___x_1367_, v___x_1310_);
lean_dec(v___x_1367_);
v___x_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1373_, 0, v_pre_x3f_1372_);
v___y_1339_ = v_doc_x3f_1357_;
v___y_1340_ = v___x_1360_;
v___y_1341_ = v_kind_1361_;
v___y_1342_ = v___x_1366_;
v_pre_x3f_1343_ = v___x_1373_;
v___y_1344_ = v___y_1358_;
v___y_1345_ = v___y_1359_;
goto v___jp_1338_;
}
}
else
{
lean_object* v___x_1374_; 
lean_dec(v___x_1367_);
v___x_1374_ = lean_box(0);
v___y_1339_ = v_doc_x3f_1357_;
v___y_1340_ = v___x_1360_;
v___y_1341_ = v_kind_1361_;
v___y_1342_ = v___x_1366_;
v_pre_x3f_1343_ = v___x_1374_;
v___y_1344_ = v___y_1358_;
v___y_1345_ = v___y_1359_;
goto v___jp_1338_;
}
}
}
}
v___jp_1256_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_inc_ref(v___y_1260_);
v___x_1271_ = l_Array_append___redArg(v___y_1260_, v___y_1270_);
lean_dec_ref(v___y_1270_);
lean_inc(v___y_1259_);
lean_inc_n(v___y_1268_, 2);
v___x_1272_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1272_, 0, v___y_1268_);
lean_ctor_set(v___x_1272_, 1, v___y_1259_);
lean_ctor_set(v___x_1272_, 2, v___x_1271_);
v___x_1273_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_1274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___y_1268_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
lean_inc(v___y_1263_);
v___x_1275_ = l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds(v___y_1267_, v___y_1269_, v___y_1262_, v___y_1263_, v___y_1265_, v___y_1264_);
lean_dec(v___y_1262_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v_a_1276_; lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1296_; 
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
v_a_1277_ = lean_ctor_get(v___x_1275_, 1);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1279_ = v___x_1275_;
v_isShared_1280_ = v_isSharedCheck_1296_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_inc(v_a_1276_);
lean_dec(v___x_1275_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1296_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v___x_1281_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
lean_inc_n(v___y_1268_, 3);
v___x_1282_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___y_1268_);
lean_ctor_set(v___x_1282_, 1, v___x_1281_);
v___x_1283_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_1284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___y_1268_);
lean_ctor_set(v___x_1284_, 1, v___x_1283_);
v___x_1285_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_1286_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___y_1268_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
lean_inc(v___y_1261_);
v___x_1287_ = l_Lean_Syntax_node8(v___y_1268_, v___y_1261_, v___x_1272_, v___x_1274_, v___y_1263_, v___x_1282_, v___y_1258_, v___x_1284_, v___x_1286_, v___y_1257_);
v___x_1288_ = lean_mk_empty_array_with_capacity(v___y_1266_);
v___x_1289_ = lean_array_push(v___x_1288_, v___x_1287_);
v___x_1290_ = l_Array_append___redArg(v___x_1289_, v_a_1276_);
lean_dec(v_a_1276_);
v___x_1291_ = lean_box(2);
lean_inc(v___y_1259_);
v___x_1292_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
lean_ctor_set(v___x_1292_, 1, v___y_1259_);
lean_ctor_set(v___x_1292_, 2, v___x_1290_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 0, v___x_1292_);
v___x_1294_ = v___x_1279_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1292_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v_a_1277_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
else
{
lean_object* v_a_1297_; lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
lean_dec_ref_known(v___x_1274_, 2);
lean_dec_ref_known(v___x_1272_, 3);
lean_dec(v___y_1268_);
lean_dec(v___y_1263_);
lean_dec(v___y_1258_);
lean_dec(v___y_1257_);
v_a_1297_ = lean_ctor_get(v___x_1275_, 0);
v_a_1298_ = lean_ctor_get(v___x_1275_, 1);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1300_ = v___x_1275_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_inc(v_a_1297_);
lean_dec(v___x_1275_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1303_; 
if (v_isShared_1301_ == 0)
{
v___x_1303_ = v___x_1300_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_a_1297_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_a_1298_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1(v_x_1388_, v_a_1389_, v_a_1390_);
lean_dec_ref(v_a_1389_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object* v_x_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1446_ = ((lean_object*)(l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
lean_inc(v_x_1393_);
v___x_1447_ = l_Lean_Syntax_isOfKind(v_x_1393_, v___x_1446_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
lean_dec(v_x_1393_);
v___x_1448_ = lean_box(1);
v___x_1449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1448_);
lean_ctor_set(v___x_1449_, 1, v_a_1395_);
return v___x_1449_;
}
else
{
lean_object* v___x_1450_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v_ids_x3f_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v_pre_x3f_1483_; lean_object* v___y_1484_; lean_object* v___y_1485_; lean_object* v_doc_x3f_1497_; lean_object* v___y_1498_; lean_object* v___y_1499_; lean_object* v___x_1515_; uint8_t v___x_1516_; 
v___x_1450_ = lean_unsigned_to_nat(0u);
v___x_1515_ = l_Lean_Syntax_getArg(v_x_1393_, v___x_1450_);
v___x_1516_ = l_Lean_Syntax_isNone(v___x_1515_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1515_);
v___x_1518_ = l_Lean_Syntax_matchesNull(v___x_1515_, v___x_1517_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_dec(v___x_1515_);
lean_dec(v_x_1393_);
v___x_1519_ = lean_box(1);
v___x_1520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1519_);
lean_ctor_set(v___x_1520_, 1, v_a_1395_);
return v___x_1520_;
}
else
{
lean_object* v_doc_x3f_1521_; lean_object* v___x_1522_; uint8_t v___x_1523_; 
v_doc_x3f_1521_ = l_Lean_Syntax_getArg(v___x_1515_, v___x_1450_);
lean_dec(v___x_1515_);
v___x_1522_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_1521_);
v___x_1523_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1521_, v___x_1522_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
lean_dec(v_doc_x3f_1521_);
lean_dec(v_x_1393_);
v___x_1524_ = lean_box(1);
v___x_1525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
lean_ctor_set(v___x_1525_, 1, v_a_1395_);
return v___x_1525_;
}
else
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1526_, 0, v_doc_x3f_1521_);
v_doc_x3f_1497_ = v___x_1526_;
v___y_1498_ = v_a_1394_;
v___y_1499_ = v_a_1395_;
goto v___jp_1496_;
}
}
}
else
{
lean_object* v___x_1527_; 
lean_dec(v___x_1515_);
v___x_1527_ = lean_box(0);
v_doc_x3f_1497_ = v___x_1527_;
v___y_1498_ = v_a_1394_;
v___y_1499_ = v_a_1395_;
goto v___jp_1496_;
}
v___jp_1451_:
{
lean_object* v___x_1459_; lean_object* v_n_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; 
v___x_1459_ = lean_unsigned_to_nat(5u);
v_n_1460_ = l_Lean_Syntax_getArg(v_x_1393_, v___x_1459_);
v___x_1461_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v_n_1460_);
v___x_1462_ = l_Lean_Syntax_isOfKind(v_n_1460_, v___x_1461_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
lean_dec(v_n_1460_);
lean_dec(v_ids_x3f_1456_);
lean_dec(v___y_1455_);
lean_dec(v___y_1453_);
lean_dec(v___y_1452_);
lean_dec(v_x_1393_);
v___x_1463_ = lean_box(1);
v___x_1464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
lean_ctor_set(v___x_1464_, 1, v___y_1458_);
return v___x_1464_;
}
else
{
lean_object* v_ref_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; uint8_t v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v_ref_1465_ = lean_ctor_get(v___y_1457_, 5);
v___x_1466_ = lean_unsigned_to_nat(7u);
v___x_1467_ = l_Lean_Syntax_getArg(v_x_1393_, v___x_1466_);
v___x_1468_ = lean_unsigned_to_nat(10u);
v___x_1469_ = l_Lean_Syntax_getArg(v_x_1393_, v___x_1468_);
lean_dec(v_x_1393_);
v___x_1470_ = 0;
v___x_1471_ = l_Lean_SourceInfo_fromRef(v_ref_1465_, v___x_1470_);
v___x_1472_ = ((lean_object*)(l_Lean_Parser_command__Dsimproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_1473_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1474_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_1452_) == 1)
{
lean_object* v_val_1475_; lean_object* v___x_1476_; 
v_val_1475_ = lean_ctor_get(v___y_1452_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v___y_1452_, 1);
v___x_1476_ = l_Array_mkArray1___redArg(v_val_1475_);
v___y_1397_ = v___x_1472_;
v___y_1398_ = v___x_1467_;
v___y_1399_ = v___y_1453_;
v___y_1400_ = v_n_1460_;
v___y_1401_ = v___y_1454_;
v___y_1402_ = v___y_1455_;
v___y_1403_ = v___y_1457_;
v___y_1404_ = v_ids_x3f_1456_;
v___y_1405_ = v___y_1458_;
v___y_1406_ = v___x_1469_;
v___y_1407_ = v___x_1471_;
v___y_1408_ = v___x_1473_;
v___y_1409_ = v___x_1474_;
v___y_1410_ = v___x_1476_;
goto v___jp_1396_;
}
else
{
lean_object* v___x_1477_; 
lean_dec(v___y_1452_);
v___x_1477_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1397_ = v___x_1472_;
v___y_1398_ = v___x_1467_;
v___y_1399_ = v___y_1453_;
v___y_1400_ = v_n_1460_;
v___y_1401_ = v___y_1454_;
v___y_1402_ = v___y_1455_;
v___y_1403_ = v___y_1457_;
v___y_1404_ = v_ids_x3f_1456_;
v___y_1405_ = v___y_1458_;
v___y_1406_ = v___x_1469_;
v___y_1407_ = v___x_1471_;
v___y_1408_ = v___x_1473_;
v___y_1409_ = v___x_1474_;
v___y_1410_ = v___x_1477_;
goto v___jp_1396_;
}
}
}
v___jp_1478_:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; uint8_t v___x_1488_; 
v___x_1486_ = lean_unsigned_to_nat(4u);
v___x_1487_ = l_Lean_Syntax_getArg(v_x_1393_, v___x_1486_);
v___x_1488_ = l_Lean_Syntax_isNone(v___x_1487_);
if (v___x_1488_ == 0)
{
uint8_t v___x_1489_; 
lean_inc(v___x_1487_);
v___x_1489_ = l_Lean_Syntax_matchesNull(v___x_1487_, v___y_1482_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_dec(v___x_1487_);
lean_dec(v_pre_x3f_1483_);
lean_dec(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec(v_x_1393_);
v___x_1490_ = lean_box(1);
v___x_1491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1490_);
lean_ctor_set(v___x_1491_, 1, v___y_1485_);
return v___x_1491_;
}
else
{
lean_object* v___x_1492_; lean_object* v_ids_x3f_1493_; lean_object* v___x_1494_; 
v___x_1492_ = l_Lean_Syntax_getArg(v___x_1487_, v___y_1481_);
lean_dec(v___x_1487_);
v_ids_x3f_1493_ = l_Lean_Syntax_getArgs(v___x_1492_);
lean_dec(v___x_1492_);
v___x_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1494_, 0, v_ids_x3f_1493_);
v___y_1452_ = v___y_1479_;
v___y_1453_ = v___y_1480_;
v___y_1454_ = v___y_1481_;
v___y_1455_ = v_pre_x3f_1483_;
v_ids_x3f_1456_ = v___x_1494_;
v___y_1457_ = v___y_1484_;
v___y_1458_ = v___y_1485_;
goto v___jp_1451_;
}
}
else
{
lean_object* v___x_1495_; 
lean_dec(v___x_1487_);
v___x_1495_ = lean_box(0);
v___y_1452_ = v___y_1479_;
v___y_1453_ = v___y_1480_;
v___y_1454_ = v___y_1481_;
v___y_1455_ = v_pre_x3f_1483_;
v_ids_x3f_1456_ = v___x_1495_;
v___y_1457_ = v___y_1484_;
v___y_1458_ = v___y_1485_;
goto v___jp_1451_;
}
}
v___jp_1496_:
{
lean_object* v___x_1500_; lean_object* v_kind_1501_; lean_object* v___x_1502_; uint8_t v___x_1503_; 
v___x_1500_ = lean_unsigned_to_nat(1u);
v_kind_1501_ = l_Lean_Syntax_getArg(v_x_1393_, v___x_1500_);
v___x_1502_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2));
lean_inc(v_kind_1501_);
v___x_1503_ = l_Lean_Syntax_isOfKind(v_kind_1501_, v___x_1502_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_dec(v_kind_1501_);
lean_dec(v_doc_x3f_1497_);
lean_dec(v_x_1393_);
v___x_1504_ = lean_box(1);
v___x_1505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
lean_ctor_set(v___x_1505_, 1, v___y_1499_);
return v___x_1505_;
}
else
{
lean_object* v___x_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
v___x_1506_ = lean_unsigned_to_nat(3u);
v___x_1507_ = l_Lean_Syntax_getArg(v_x_1393_, v___x_1506_);
v___x_1508_ = l_Lean_Syntax_isNone(v___x_1507_);
if (v___x_1508_ == 0)
{
uint8_t v___x_1509_; 
lean_inc(v___x_1507_);
v___x_1509_ = l_Lean_Syntax_matchesNull(v___x_1507_, v___x_1500_);
if (v___x_1509_ == 0)
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
lean_dec(v___x_1507_);
lean_dec(v_kind_1501_);
lean_dec(v_doc_x3f_1497_);
lean_dec(v_x_1393_);
v___x_1510_ = lean_box(1);
v___x_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1510_);
lean_ctor_set(v___x_1511_, 1, v___y_1499_);
return v___x_1511_;
}
else
{
lean_object* v_pre_x3f_1512_; lean_object* v___x_1513_; 
v_pre_x3f_1512_ = l_Lean_Syntax_getArg(v___x_1507_, v___x_1450_);
lean_dec(v___x_1507_);
v___x_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1513_, 0, v_pre_x3f_1512_);
v___y_1479_ = v_doc_x3f_1497_;
v___y_1480_ = v_kind_1501_;
v___y_1481_ = v___x_1500_;
v___y_1482_ = v___x_1506_;
v_pre_x3f_1483_ = v___x_1513_;
v___y_1484_ = v___y_1498_;
v___y_1485_ = v___y_1499_;
goto v___jp_1478_;
}
}
else
{
lean_object* v___x_1514_; 
lean_dec(v___x_1507_);
v___x_1514_ = lean_box(0);
v___y_1479_ = v_doc_x3f_1497_;
v___y_1480_ = v_kind_1501_;
v___y_1481_ = v___x_1500_;
v___y_1482_ = v___x_1506_;
v_pre_x3f_1483_ = v___x_1514_;
v___y_1484_ = v___y_1498_;
v___y_1485_ = v___y_1499_;
goto v___jp_1478_;
}
}
}
}
v___jp_1396_:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
lean_inc_ref(v___y_1409_);
v___x_1411_ = l_Array_append___redArg(v___y_1409_, v___y_1410_);
lean_dec_ref(v___y_1410_);
lean_inc(v___y_1408_);
lean_inc_n(v___y_1407_, 2);
v___x_1412_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1412_, 0, v___y_1407_);
lean_ctor_set(v___x_1412_, 1, v___y_1408_);
lean_ctor_set(v___x_1412_, 2, v___x_1411_);
v___x_1413_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_1414_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___y_1407_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
lean_inc(v___y_1400_);
v___x_1415_ = l___private_Init_Simproc_0__Lean_Parser_mkAttributeCmds(v___y_1399_, v___y_1402_, v___y_1404_, v___y_1400_, v___y_1403_, v___y_1405_);
lean_dec(v___y_1404_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1436_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
v_a_1417_ = lean_ctor_get(v___x_1415_, 1);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1419_ = v___x_1415_;
v_isShared_1420_ = v_isSharedCheck_1436_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_inc(v_a_1416_);
lean_dec(v___x_1415_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1436_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
v___x_1421_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
lean_inc_n(v___y_1407_, 3);
v___x_1422_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___y_1407_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_1424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___y_1407_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_1426_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___y_1407_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
lean_inc(v___y_1397_);
v___x_1427_ = l_Lean_Syntax_node8(v___y_1407_, v___y_1397_, v___x_1412_, v___x_1414_, v___y_1400_, v___x_1422_, v___y_1398_, v___x_1424_, v___x_1426_, v___y_1406_);
v___x_1428_ = lean_mk_empty_array_with_capacity(v___y_1401_);
v___x_1429_ = lean_array_push(v___x_1428_, v___x_1427_);
v___x_1430_ = l_Array_append___redArg(v___x_1429_, v_a_1416_);
lean_dec(v_a_1416_);
v___x_1431_ = lean_box(2);
lean_inc(v___y_1408_);
v___x_1432_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
lean_ctor_set(v___x_1432_, 1, v___y_1408_);
lean_ctor_set(v___x_1432_, 2, v___x_1430_);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1432_);
v___x_1434_ = v___x_1419_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v_a_1417_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
else
{
lean_object* v_a_1437_; lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref_known(v___x_1414_, 2);
lean_dec_ref_known(v___x_1412_, 3);
lean_dec(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec(v___y_1400_);
lean_dec(v___y_1398_);
v_a_1437_ = lean_ctor_get(v___x_1415_, 0);
v_a_1438_ = lean_ctor_get(v___x_1415_, 1);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1415_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_inc(v_a_1437_);
lean_dec(v___x_1415_);
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
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1437_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_a_1438_);
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
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1(v_x_1528_, v_a_1529_, v_a_1530_);
lean_dec_ref(v_a_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object* v_x_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v___y_1537_; lean_object* v___y_1538_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; lean_object* v___y_1549_; lean_object* v___y_1550_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1567_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1594_; lean_object* v___y_1595_; lean_object* v___y_1596_; lean_object* v___y_1597_; lean_object* v___y_1598_; lean_object* v___y_1599_; lean_object* v___y_1600_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1588_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0));
v___x_1589_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_1625_ = ((lean_object*)(l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
lean_inc(v_x_1533_);
v___x_1626_ = l_Lean_Syntax_isOfKind(v_x_1533_, v___x_1625_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
lean_dec(v_x_1533_);
v___x_1627_ = lean_box(1);
v___x_1628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v_a_1535_);
return v___x_1628_;
}
else
{
lean_object* v___x_1629_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___y_1671_; lean_object* v___y_1672_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v_pre_x3f_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v_doc_x3f_1834_; lean_object* v___y_1835_; lean_object* v___y_1836_; lean_object* v___x_1854_; uint8_t v___x_1855_; 
v___x_1629_ = lean_unsigned_to_nat(0u);
v___x_1854_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1629_);
v___x_1855_ = l_Lean_Syntax_isNone(v___x_1854_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1856_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1854_);
v___x_1857_ = l_Lean_Syntax_matchesNull(v___x_1854_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
lean_dec(v___x_1854_);
lean_dec(v_x_1533_);
v___x_1858_ = lean_box(1);
v___x_1859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
lean_ctor_set(v___x_1859_, 1, v_a_1535_);
return v___x_1859_;
}
else
{
lean_object* v_doc_x3f_1860_; lean_object* v___x_1861_; uint8_t v___x_1862_; 
v_doc_x3f_1860_ = l_Lean_Syntax_getArg(v___x_1854_, v___x_1629_);
lean_dec(v___x_1854_);
v___x_1861_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_1860_);
v___x_1862_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1860_, v___x_1861_);
if (v___x_1862_ == 0)
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
lean_dec(v_doc_x3f_1860_);
lean_dec(v_x_1533_);
v___x_1863_ = lean_box(1);
v___x_1864_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
lean_ctor_set(v___x_1864_, 1, v_a_1535_);
return v___x_1864_;
}
else
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1865_, 0, v_doc_x3f_1860_);
v_doc_x3f_1834_ = v___x_1865_;
v___y_1835_ = v_a_1534_;
v___y_1836_ = v_a_1535_;
goto v___jp_1833_;
}
}
}
else
{
lean_object* v___x_1866_; 
lean_dec(v___x_1854_);
v___x_1866_ = lean_box(0);
v_doc_x3f_1834_ = v___x_1866_;
v___y_1835_ = v_a_1534_;
v___y_1836_ = v_a_1535_;
goto v___jp_1833_;
}
v___jp_1630_:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_inc_ref(v___y_1637_);
v___x_1643_ = l_Array_append___redArg(v___y_1637_, v___y_1642_);
lean_dec_ref(v___y_1642_);
lean_inc(v___y_1634_);
lean_inc_n(v___y_1636_, 9);
v___x_1644_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1644_, 0, v___y_1636_);
lean_ctor_set(v___x_1644_, 1, v___y_1634_);
lean_ctor_set(v___x_1644_, 2, v___x_1643_);
v___x_1645_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_1646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___y_1636_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
v___x_1648_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1648_, 0, v___y_1636_);
lean_ctor_set(v___x_1648_, 1, v___x_1647_);
v___x_1649_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_1650_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___y_1636_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
v___x_1651_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_1652_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___y_1636_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
lean_inc(v___y_1633_);
lean_inc(v___y_1631_);
v___x_1653_ = l_Lean_Syntax_node8(v___y_1636_, v___y_1631_, v___x_1644_, v___x_1646_, v___y_1633_, v___x_1648_, v___y_1635_, v___x_1650_, v___x_1652_, v___y_1641_);
v___x_1654_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_1655_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
v___x_1656_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___y_1636_);
lean_ctor_set(v___x_1656_, 1, v___x_1654_);
v___x_1657_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_1658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___y_1636_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2));
lean_inc_ref(v___y_1640_);
v___x_1660_ = l_Lean_Name_mkStr4(v___x_1588_, v___x_1589_, v___y_1640_, v___x_1659_);
v___x_1661_ = ((lean_object*)(l_Lean_Parser_Attr_simprocAttr___closed__0));
v___x_1662_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1));
v___x_1663_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2));
v___x_1664_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___y_1636_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
if (lean_obj_tag(v___y_1638_) == 1)
{
lean_object* v_val_1665_; lean_object* v___x_1666_; 
v_val_1665_ = lean_ctor_get(v___y_1638_, 0);
lean_inc(v_val_1665_);
lean_dec_ref_known(v___y_1638_, 1);
v___x_1666_ = l_Array_mkArray1___redArg(v_val_1665_);
v___y_1591_ = v___x_1660_;
v___y_1592_ = v___y_1632_;
v___y_1593_ = v___y_1633_;
v___y_1594_ = v___x_1661_;
v___y_1595_ = v___x_1653_;
v___y_1596_ = v___y_1637_;
v___y_1597_ = v___y_1636_;
v___y_1598_ = v___x_1656_;
v___y_1599_ = v___y_1639_;
v___y_1600_ = v___x_1658_;
v___y_1601_ = v___y_1634_;
v___y_1602_ = v___x_1662_;
v___y_1603_ = v___x_1655_;
v___y_1604_ = v___x_1664_;
v___y_1605_ = v___x_1666_;
goto v___jp_1590_;
}
else
{
lean_object* v___x_1667_; 
lean_dec(v___y_1638_);
v___x_1667_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1591_ = v___x_1660_;
v___y_1592_ = v___y_1632_;
v___y_1593_ = v___y_1633_;
v___y_1594_ = v___x_1661_;
v___y_1595_ = v___x_1653_;
v___y_1596_ = v___y_1637_;
v___y_1597_ = v___y_1636_;
v___y_1598_ = v___x_1656_;
v___y_1599_ = v___y_1639_;
v___y_1600_ = v___x_1658_;
v___y_1601_ = v___y_1634_;
v___y_1602_ = v___x_1662_;
v___y_1603_ = v___x_1655_;
v___y_1604_ = v___x_1664_;
v___y_1605_ = v___x_1667_;
goto v___jp_1590_;
}
}
v___jp_1668_:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
lean_inc_ref(v___y_1671_);
v___x_1681_ = l_Array_append___redArg(v___y_1671_, v___y_1680_);
lean_dec_ref(v___y_1680_);
lean_inc(v___y_1679_);
lean_inc_n(v___y_1672_, 9);
v___x_1682_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1682_, 0, v___y_1672_);
lean_ctor_set(v___x_1682_, 1, v___y_1679_);
lean_ctor_set(v___x_1682_, 2, v___x_1681_);
v___x_1683_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_1684_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___y_1672_);
lean_ctor_set(v___x_1684_, 1, v___x_1683_);
v___x_1685_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
v___x_1686_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___y_1672_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_1688_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___y_1672_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_1690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___y_1672_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
lean_inc(v___y_1670_);
lean_inc(v___y_1678_);
v___x_1691_ = l_Lean_Syntax_node8(v___y_1672_, v___y_1678_, v___x_1682_, v___x_1684_, v___y_1670_, v___x_1686_, v___y_1673_, v___x_1688_, v___x_1690_, v___y_1675_);
v___x_1692_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_1693_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
v___x_1694_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___y_1672_);
lean_ctor_set(v___x_1694_, 1, v___x_1692_);
v___x_1695_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_1696_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___y_1672_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2));
lean_inc_ref(v___y_1677_);
v___x_1698_ = l_Lean_Name_mkStr4(v___x_1588_, v___x_1589_, v___y_1677_, v___x_1697_);
v___x_1699_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1));
v___x_1700_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2));
v___x_1701_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___y_1672_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
if (lean_obj_tag(v___y_1674_) == 1)
{
lean_object* v_val_1702_; lean_object* v___x_1703_; 
v_val_1702_ = lean_ctor_get(v___y_1674_, 0);
lean_inc(v_val_1702_);
lean_dec_ref_known(v___y_1674_, 1);
v___x_1703_ = l_Array_mkArray1___redArg(v_val_1702_);
v___y_1537_ = v___y_1669_;
v___y_1538_ = v___y_1670_;
v___y_1539_ = v___x_1693_;
v___y_1540_ = v___y_1671_;
v___y_1541_ = v___y_1672_;
v___y_1542_ = v___x_1691_;
v___y_1543_ = v___y_1676_;
v___y_1544_ = v___y_1679_;
v___y_1545_ = v___x_1698_;
v___y_1546_ = v___x_1696_;
v___y_1547_ = v___x_1701_;
v___y_1548_ = v___x_1699_;
v___y_1549_ = v___x_1694_;
v___y_1550_ = v___x_1703_;
goto v___jp_1536_;
}
else
{
lean_object* v___x_1704_; 
lean_dec(v___y_1674_);
v___x_1704_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1537_ = v___y_1669_;
v___y_1538_ = v___y_1670_;
v___y_1539_ = v___x_1693_;
v___y_1540_ = v___y_1671_;
v___y_1541_ = v___y_1672_;
v___y_1542_ = v___x_1691_;
v___y_1543_ = v___y_1676_;
v___y_1544_ = v___y_1679_;
v___y_1545_ = v___x_1698_;
v___y_1546_ = v___x_1696_;
v___y_1547_ = v___x_1701_;
v___y_1548_ = v___x_1699_;
v___y_1549_ = v___x_1694_;
v___y_1550_ = v___x_1704_;
goto v___jp_1536_;
}
}
v___jp_1705_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
lean_inc_ref(v___y_1709_);
v___x_1718_ = l_Array_append___redArg(v___y_1709_, v___y_1717_);
lean_dec_ref(v___y_1717_);
lean_inc(v___y_1715_);
lean_inc_n(v___y_1711_, 9);
v___x_1719_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1719_, 0, v___y_1711_);
lean_ctor_set(v___x_1719_, 1, v___y_1715_);
lean_ctor_set(v___x_1719_, 2, v___x_1718_);
v___x_1720_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_1721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___y_1711_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
v___x_1723_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___y_1711_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_1725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___y_1711_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
v___x_1726_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_1727_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1727_, 0, v___y_1711_);
lean_ctor_set(v___x_1727_, 1, v___x_1726_);
lean_inc(v___y_1710_);
lean_inc(v___y_1716_);
v___x_1728_ = l_Lean_Syntax_node8(v___y_1711_, v___y_1716_, v___x_1719_, v___x_1721_, v___y_1710_, v___x_1723_, v___y_1708_, v___x_1725_, v___x_1727_, v___y_1707_);
v___x_1729_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_1730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
v___x_1731_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___y_1711_);
lean_ctor_set(v___x_1731_, 1, v___x_1729_);
v___x_1732_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_1733_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___y_1711_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2));
lean_inc_ref(v___y_1714_);
v___x_1735_ = l_Lean_Name_mkStr4(v___x_1588_, v___x_1589_, v___y_1714_, v___x_1734_);
v___x_1736_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1));
v___x_1737_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2));
v___x_1738_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___y_1711_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
if (lean_obj_tag(v___y_1712_) == 1)
{
lean_object* v_val_1739_; lean_object* v___x_1740_; 
v_val_1739_ = lean_ctor_get(v___y_1712_, 0);
lean_inc(v_val_1739_);
lean_dec_ref_known(v___y_1712_, 1);
v___x_1740_ = l_Array_mkArray1___redArg(v_val_1739_);
v___y_1563_ = v___x_1735_;
v___y_1564_ = v___y_1706_;
v___y_1565_ = v___y_1710_;
v___y_1566_ = v___x_1738_;
v___y_1567_ = v___x_1736_;
v___y_1568_ = v___x_1730_;
v___y_1569_ = v___y_1713_;
v___y_1570_ = v___y_1709_;
v___y_1571_ = v___x_1731_;
v___y_1572_ = v___x_1733_;
v___y_1573_ = v___y_1711_;
v___y_1574_ = v___y_1715_;
v___y_1575_ = v___x_1728_;
v___y_1576_ = v___x_1740_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1741_; 
lean_dec(v___y_1712_);
v___x_1741_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1563_ = v___x_1735_;
v___y_1564_ = v___y_1706_;
v___y_1565_ = v___y_1710_;
v___y_1566_ = v___x_1738_;
v___y_1567_ = v___x_1736_;
v___y_1568_ = v___x_1730_;
v___y_1569_ = v___y_1713_;
v___y_1570_ = v___y_1709_;
v___y_1571_ = v___x_1731_;
v___y_1572_ = v___x_1733_;
v___y_1573_ = v___y_1711_;
v___y_1574_ = v___y_1715_;
v___y_1575_ = v___x_1728_;
v___y_1576_ = v___x_1741_;
goto v___jp_1562_;
}
}
v___jp_1742_:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; uint8_t v___x_1754_; 
v___x_1752_ = lean_unsigned_to_nat(4u);
v___x_1753_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1752_);
lean_inc(v___x_1753_);
v___x_1754_ = l_Lean_Syntax_matchesNull(v___x_1753_, v___x_1629_);
if (v___x_1754_ == 0)
{
uint8_t v___x_1755_; 
lean_inc(v___x_1753_);
v___x_1755_ = l_Lean_Syntax_matchesNull(v___x_1753_, v___y_1744_);
if (v___x_1755_ == 0)
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec(v___x_1753_);
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1756_ = lean_box(1);
v___x_1757_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1756_);
lean_ctor_set(v___x_1757_, 1, v___y_1751_);
return v___x_1757_;
}
else
{
lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1758_ = l_Lean_Syntax_getArg(v___x_1753_, v___y_1745_);
lean_dec(v___x_1753_);
lean_inc(v___x_1758_);
v___x_1759_ = l_Lean_Syntax_matchesNull(v___x_1758_, v___y_1745_);
if (v___x_1759_ == 0)
{
uint8_t v___x_1760_; 
lean_inc(v___x_1758_);
v___x_1760_ = l_Lean_Syntax_matchesNull(v___x_1758_, v___y_1744_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
lean_dec(v___x_1758_);
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1761_ = lean_box(1);
v___x_1762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1761_);
lean_ctor_set(v___x_1762_, 1, v___y_1751_);
return v___x_1762_;
}
else
{
lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1763_ = l_Lean_Syntax_getArg(v___x_1758_, v___x_1629_);
v___x_1764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__5));
v___x_1765_ = l_Lean_Syntax_matchesIdent(v___x_1763_, v___x_1764_);
lean_dec(v___x_1763_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
lean_dec(v___x_1758_);
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1766_ = lean_box(1);
v___x_1767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
lean_ctor_set(v___x_1767_, 1, v___y_1751_);
return v___x_1767_;
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1768_ = l_Lean_Syntax_getArg(v___x_1758_, v___y_1747_);
lean_dec(v___x_1758_);
v___x_1769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7));
v___x_1770_ = l_Lean_Syntax_matchesIdent(v___x_1768_, v___x_1769_);
lean_dec(v___x_1768_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1771_ = lean_box(1);
v___x_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
lean_ctor_set(v___x_1772_, 1, v___y_1751_);
return v___x_1772_;
}
else
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1773_ = lean_unsigned_to_nat(5u);
v___x_1774_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1773_);
v___x_1775_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_1774_);
v___x_1776_ = l_Lean_Syntax_isOfKind(v___x_1774_, v___x_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_dec(v___x_1774_);
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1777_ = lean_box(1);
v___x_1778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
lean_ctor_set(v___x_1778_, 1, v___y_1751_);
return v___x_1778_;
}
else
{
lean_object* v_ref_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v_ref_1779_ = lean_ctor_get(v___y_1750_, 5);
v___x_1780_ = lean_unsigned_to_nat(7u);
v___x_1781_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1780_);
v___x_1782_ = lean_unsigned_to_nat(10u);
v___x_1783_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1782_);
lean_dec(v_x_1533_);
v___x_1784_ = l_Lean_SourceInfo_fromRef(v_ref_1779_, v___x_1759_);
v___x_1785_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1786_ = ((lean_object*)(l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_1787_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_1748_) == 1)
{
lean_object* v_val_1788_; lean_object* v___x_1789_; 
v_val_1788_ = lean_ctor_get(v___y_1748_, 0);
lean_inc(v_val_1788_);
lean_dec_ref_known(v___y_1748_, 1);
v___x_1789_ = l_Array_mkArray1___redArg(v_val_1788_);
v___y_1631_ = v___x_1786_;
v___y_1632_ = v___y_1743_;
v___y_1633_ = v___x_1774_;
v___y_1634_ = v___x_1785_;
v___y_1635_ = v___x_1781_;
v___y_1636_ = v___x_1784_;
v___y_1637_ = v___x_1787_;
v___y_1638_ = v_pre_x3f_1749_;
v___y_1639_ = v___y_1751_;
v___y_1640_ = v___y_1746_;
v___y_1641_ = v___x_1783_;
v___y_1642_ = v___x_1789_;
goto v___jp_1630_;
}
else
{
lean_object* v___x_1790_; 
lean_dec(v___y_1748_);
v___x_1790_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1631_ = v___x_1786_;
v___y_1632_ = v___y_1743_;
v___y_1633_ = v___x_1774_;
v___y_1634_ = v___x_1785_;
v___y_1635_ = v___x_1781_;
v___y_1636_ = v___x_1784_;
v___y_1637_ = v___x_1787_;
v___y_1638_ = v_pre_x3f_1749_;
v___y_1639_ = v___y_1751_;
v___y_1640_ = v___y_1746_;
v___y_1641_ = v___x_1783_;
v___y_1642_ = v___x_1790_;
goto v___jp_1630_;
}
}
}
}
}
}
else
{
lean_object* v___x_1791_; lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1791_ = l_Lean_Syntax_getArg(v___x_1758_, v___x_1629_);
lean_dec(v___x_1758_);
v___x_1792_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7));
v___x_1793_ = l_Lean_Syntax_matchesIdent(v___x_1791_, v___x_1792_);
lean_dec(v___x_1791_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1794_ = lean_box(1);
v___x_1795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
lean_ctor_set(v___x_1795_, 1, v___y_1751_);
return v___x_1795_;
}
else
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; 
v___x_1796_ = lean_unsigned_to_nat(5u);
v___x_1797_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1796_);
v___x_1798_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_1797_);
v___x_1799_ = l_Lean_Syntax_isOfKind(v___x_1797_, v___x_1798_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
lean_dec(v___x_1797_);
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1800_ = lean_box(1);
v___x_1801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
lean_ctor_set(v___x_1801_, 1, v___y_1751_);
return v___x_1801_;
}
else
{
lean_object* v_ref_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v_ref_1802_ = lean_ctor_get(v___y_1750_, 5);
v___x_1803_ = lean_unsigned_to_nat(7u);
v___x_1804_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1803_);
v___x_1805_ = lean_unsigned_to_nat(10u);
v___x_1806_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1805_);
lean_dec(v_x_1533_);
v___x_1807_ = l_Lean_SourceInfo_fromRef(v_ref_1802_, v___x_1754_);
v___x_1808_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1809_ = ((lean_object*)(l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_1810_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_1748_) == 1)
{
lean_object* v_val_1811_; lean_object* v___x_1812_; 
v_val_1811_ = lean_ctor_get(v___y_1748_, 0);
lean_inc(v_val_1811_);
lean_dec_ref_known(v___y_1748_, 1);
v___x_1812_ = l_Array_mkArray1___redArg(v_val_1811_);
v___y_1669_ = v___y_1743_;
v___y_1670_ = v___x_1797_;
v___y_1671_ = v___x_1810_;
v___y_1672_ = v___x_1807_;
v___y_1673_ = v___x_1804_;
v___y_1674_ = v_pre_x3f_1749_;
v___y_1675_ = v___x_1806_;
v___y_1676_ = v___y_1751_;
v___y_1677_ = v___y_1746_;
v___y_1678_ = v___x_1809_;
v___y_1679_ = v___x_1808_;
v___y_1680_ = v___x_1812_;
goto v___jp_1668_;
}
else
{
lean_object* v___x_1813_; 
lean_dec(v___y_1748_);
v___x_1813_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1669_ = v___y_1743_;
v___y_1670_ = v___x_1797_;
v___y_1671_ = v___x_1810_;
v___y_1672_ = v___x_1807_;
v___y_1673_ = v___x_1804_;
v___y_1674_ = v_pre_x3f_1749_;
v___y_1675_ = v___x_1806_;
v___y_1676_ = v___y_1751_;
v___y_1677_ = v___y_1746_;
v___y_1678_ = v___x_1809_;
v___y_1679_ = v___x_1808_;
v___y_1680_ = v___x_1813_;
goto v___jp_1668_;
}
}
}
}
}
}
else
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; 
lean_dec(v___x_1753_);
v___x_1814_ = lean_unsigned_to_nat(5u);
v___x_1815_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1814_);
v___x_1816_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_1815_);
v___x_1817_ = l_Lean_Syntax_isOfKind(v___x_1815_, v___x_1816_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
lean_dec(v___x_1815_);
lean_dec(v_pre_x3f_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1743_);
lean_dec(v_x_1533_);
v___x_1818_ = lean_box(1);
v___x_1819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
lean_ctor_set(v___x_1819_, 1, v___y_1751_);
return v___x_1819_;
}
else
{
lean_object* v_ref_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; uint8_t v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v_ref_1820_ = lean_ctor_get(v___y_1750_, 5);
v___x_1821_ = lean_unsigned_to_nat(7u);
v___x_1822_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1821_);
v___x_1823_ = lean_unsigned_to_nat(10u);
v___x_1824_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1823_);
lean_dec(v_x_1533_);
v___x_1825_ = 0;
v___x_1826_ = l_Lean_SourceInfo_fromRef(v_ref_1820_, v___x_1825_);
v___x_1827_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_1828_ = ((lean_object*)(l_Lean_Parser_command__Builtin__simproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_1829_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_1748_) == 1)
{
lean_object* v_val_1830_; lean_object* v___x_1831_; 
v_val_1830_ = lean_ctor_get(v___y_1748_, 0);
lean_inc(v_val_1830_);
lean_dec_ref_known(v___y_1748_, 1);
v___x_1831_ = l_Array_mkArray1___redArg(v_val_1830_);
v___y_1706_ = v___y_1743_;
v___y_1707_ = v___x_1824_;
v___y_1708_ = v___x_1822_;
v___y_1709_ = v___x_1829_;
v___y_1710_ = v___x_1815_;
v___y_1711_ = v___x_1826_;
v___y_1712_ = v_pre_x3f_1749_;
v___y_1713_ = v___y_1751_;
v___y_1714_ = v___y_1746_;
v___y_1715_ = v___x_1827_;
v___y_1716_ = v___x_1828_;
v___y_1717_ = v___x_1831_;
goto v___jp_1705_;
}
else
{
lean_object* v___x_1832_; 
lean_dec(v___y_1748_);
v___x_1832_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1706_ = v___y_1743_;
v___y_1707_ = v___x_1824_;
v___y_1708_ = v___x_1822_;
v___y_1709_ = v___x_1829_;
v___y_1710_ = v___x_1815_;
v___y_1711_ = v___x_1826_;
v___y_1712_ = v_pre_x3f_1749_;
v___y_1713_ = v___y_1751_;
v___y_1714_ = v___y_1746_;
v___y_1715_ = v___x_1827_;
v___y_1716_ = v___x_1828_;
v___y_1717_ = v___x_1832_;
goto v___jp_1705_;
}
}
}
}
v___jp_1833_:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; 
v___x_1837_ = lean_unsigned_to_nat(1u);
v___x_1838_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1837_);
v___x_1839_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5));
v___x_1840_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2));
lean_inc(v___x_1838_);
v___x_1841_ = l_Lean_Syntax_isOfKind(v___x_1838_, v___x_1840_);
if (v___x_1841_ == 0)
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
lean_dec(v___x_1838_);
lean_dec(v_doc_x3f_1834_);
lean_dec(v_x_1533_);
v___x_1842_ = lean_box(1);
v___x_1843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
lean_ctor_set(v___x_1843_, 1, v___y_1836_);
return v___x_1843_;
}
else
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; uint8_t v___x_1847_; 
v___x_1844_ = lean_unsigned_to_nat(2u);
v___x_1845_ = lean_unsigned_to_nat(3u);
v___x_1846_ = l_Lean_Syntax_getArg(v_x_1533_, v___x_1845_);
v___x_1847_ = l_Lean_Syntax_isNone(v___x_1846_);
if (v___x_1847_ == 0)
{
uint8_t v___x_1848_; 
lean_inc(v___x_1846_);
v___x_1848_ = l_Lean_Syntax_matchesNull(v___x_1846_, v___x_1837_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_dec(v___x_1846_);
lean_dec(v___x_1838_);
lean_dec(v_doc_x3f_1834_);
lean_dec(v_x_1533_);
v___x_1849_ = lean_box(1);
v___x_1850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
lean_ctor_set(v___x_1850_, 1, v___y_1836_);
return v___x_1850_;
}
else
{
lean_object* v_pre_x3f_1851_; lean_object* v___x_1852_; 
v_pre_x3f_1851_ = l_Lean_Syntax_getArg(v___x_1846_, v___x_1629_);
lean_dec(v___x_1846_);
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v_pre_x3f_1851_);
v___y_1743_ = v___x_1838_;
v___y_1744_ = v___x_1845_;
v___y_1745_ = v___x_1837_;
v___y_1746_ = v___x_1839_;
v___y_1747_ = v___x_1844_;
v___y_1748_ = v_doc_x3f_1834_;
v_pre_x3f_1749_ = v___x_1852_;
v___y_1750_ = v___y_1835_;
v___y_1751_ = v___y_1836_;
goto v___jp_1742_;
}
}
else
{
lean_object* v___x_1853_; 
lean_dec(v___x_1846_);
v___x_1853_ = lean_box(0);
v___y_1743_ = v___x_1838_;
v___y_1744_ = v___x_1845_;
v___y_1745_ = v___x_1837_;
v___y_1746_ = v___x_1839_;
v___y_1747_ = v___x_1844_;
v___y_1748_ = v_doc_x3f_1834_;
v_pre_x3f_1749_ = v___x_1853_;
v___y_1750_ = v___y_1835_;
v___y_1751_ = v___y_1836_;
goto v___jp_1742_;
}
}
}
}
v___jp_1536_:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
lean_inc_ref(v___y_1540_);
v___x_1551_ = l_Array_append___redArg(v___y_1540_, v___y_1550_);
lean_dec_ref(v___y_1550_);
lean_inc_n(v___y_1544_, 4);
lean_inc_n(v___y_1541_, 7);
v___x_1552_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1552_, 0, v___y_1541_);
lean_ctor_set(v___x_1552_, 1, v___y_1544_);
lean_ctor_set(v___x_1552_, 2, v___x_1551_);
lean_inc(v___y_1548_);
v___x_1553_ = l_Lean_Syntax_node2(v___y_1541_, v___y_1548_, v___y_1547_, v___x_1552_);
v___x_1554_ = l_Lean_Syntax_node2(v___y_1541_, v___y_1545_, v___y_1537_, v___x_1553_);
v___x_1555_ = l_Lean_Syntax_node1(v___y_1541_, v___y_1544_, v___x_1554_);
v___x_1556_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___y_1541_);
lean_ctor_set(v___x_1557_, 1, v___x_1556_);
v___x_1558_ = l_Lean_Syntax_node1(v___y_1541_, v___y_1544_, v___y_1538_);
lean_inc(v___y_1539_);
v___x_1559_ = l_Lean_Syntax_node5(v___y_1541_, v___y_1539_, v___y_1549_, v___y_1546_, v___x_1555_, v___x_1557_, v___x_1558_);
v___x_1560_ = l_Lean_Syntax_node2(v___y_1541_, v___y_1544_, v___y_1542_, v___x_1559_);
v___x_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
lean_ctor_set(v___x_1561_, 1, v___y_1543_);
return v___x_1561_;
}
v___jp_1562_:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
lean_inc_ref(v___y_1570_);
v___x_1577_ = l_Array_append___redArg(v___y_1570_, v___y_1576_);
lean_dec_ref(v___y_1576_);
lean_inc_n(v___y_1574_, 4);
lean_inc_n(v___y_1573_, 7);
v___x_1578_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1578_, 0, v___y_1573_);
lean_ctor_set(v___x_1578_, 1, v___y_1574_);
lean_ctor_set(v___x_1578_, 2, v___x_1577_);
lean_inc(v___y_1567_);
v___x_1579_ = l_Lean_Syntax_node2(v___y_1573_, v___y_1567_, v___y_1566_, v___x_1578_);
v___x_1580_ = l_Lean_Syntax_node2(v___y_1573_, v___y_1563_, v___y_1564_, v___x_1579_);
v___x_1581_ = l_Lean_Syntax_node1(v___y_1573_, v___y_1574_, v___x_1580_);
v___x_1582_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___y_1573_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = l_Lean_Syntax_node1(v___y_1573_, v___y_1574_, v___y_1565_);
lean_inc(v___y_1568_);
v___x_1585_ = l_Lean_Syntax_node5(v___y_1573_, v___y_1568_, v___y_1571_, v___y_1572_, v___x_1581_, v___x_1583_, v___x_1584_);
v___x_1586_ = l_Lean_Syntax_node2(v___y_1573_, v___y_1574_, v___y_1575_, v___x_1585_);
v___x_1587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1586_);
lean_ctor_set(v___x_1587_, 1, v___y_1569_);
return v___x_1587_;
}
v___jp_1590_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
lean_inc_ref(v___y_1596_);
v___x_1606_ = l_Array_append___redArg(v___y_1596_, v___y_1605_);
lean_dec_ref(v___y_1605_);
lean_inc_n(v___y_1601_, 5);
lean_inc_n(v___y_1597_, 12);
v___x_1607_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1607_, 0, v___y_1597_);
lean_ctor_set(v___x_1607_, 1, v___y_1601_);
lean_ctor_set(v___x_1607_, 2, v___x_1606_);
lean_inc_ref(v___x_1607_);
lean_inc(v___y_1602_);
v___x_1608_ = l_Lean_Syntax_node2(v___y_1597_, v___y_1602_, v___y_1604_, v___x_1607_);
lean_inc(v___y_1592_);
lean_inc(v___y_1591_);
v___x_1609_ = l_Lean_Syntax_node2(v___y_1597_, v___y_1591_, v___y_1592_, v___x_1608_);
v___x_1610_ = l_Lean_Syntax_node1(v___y_1597_, v___y_1601_, v___x_1609_);
v___x_1611_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1612_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___y_1597_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = l_Lean_Syntax_node1(v___y_1597_, v___y_1601_, v___y_1593_);
lean_inc(v___x_1613_);
lean_inc_ref(v___x_1612_);
lean_inc(v___y_1600_);
lean_inc(v___y_1598_);
lean_inc_n(v___y_1603_, 2);
v___x_1614_ = l_Lean_Syntax_node5(v___y_1597_, v___y_1603_, v___y_1598_, v___y_1600_, v___x_1610_, v___x_1612_, v___x_1613_);
v___x_1615_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__0));
lean_inc_ref(v___y_1594_);
v___x_1616_ = l_Lean_Name_mkStr4(v___x_1588_, v___x_1589_, v___y_1594_, v___x_1615_);
v___x_1617_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2));
v___x_1618_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___y_1597_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = l_Lean_Syntax_node2(v___y_1597_, v___x_1616_, v___x_1618_, v___x_1607_);
v___x_1620_ = l_Lean_Syntax_node2(v___y_1597_, v___y_1591_, v___y_1592_, v___x_1619_);
v___x_1621_ = l_Lean_Syntax_node1(v___y_1597_, v___y_1601_, v___x_1620_);
v___x_1622_ = l_Lean_Syntax_node5(v___y_1597_, v___y_1603_, v___y_1598_, v___y_1600_, v___x_1621_, v___x_1612_, v___x_1613_);
v___x_1623_ = l_Lean_Syntax_node3(v___y_1597_, v___y_1601_, v___y_1595_, v___x_1614_, v___x_1622_);
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
lean_ctor_set(v___x_1624_, 1, v___y_1599_);
return v___x_1624_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_){
_start:
{
lean_object* v_res_1870_; 
v_res_1870_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d____1(v_x_1867_, v_a_1868_, v_a_1869_);
lean_dec_ref(v_a_1868_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1(lean_object* v_x_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_){
_start:
{
lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1937_; lean_object* v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v___y_1944_; lean_object* v___x_1964_; uint8_t v___x_1965_; 
v___x_1927_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__0));
v___x_1928_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
v___x_1964_ = ((lean_object*)(l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__1));
lean_inc(v_x_1872_);
v___x_1965_ = l_Lean_Syntax_isOfKind(v_x_1872_, v___x_1964_);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; lean_object* v___x_1967_; 
lean_dec(v_x_1872_);
v___x_1966_ = lean_box(1);
v___x_1967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1966_);
lean_ctor_set(v___x_1967_, 1, v_a_1874_);
return v___x_1967_;
}
else
{
lean_object* v___x_1968_; lean_object* v___y_1970_; lean_object* v___y_1971_; lean_object* v___y_1972_; lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_1981_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2052_; lean_object* v___y_2053_; lean_object* v___y_2054_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; lean_object* v___y_2085_; lean_object* v___y_2086_; lean_object* v___y_2087_; lean_object* v_pre_x3f_2088_; lean_object* v___y_2089_; lean_object* v___y_2090_; lean_object* v_doc_x3f_2173_; lean_object* v___y_2174_; lean_object* v___y_2175_; lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_1968_ = lean_unsigned_to_nat(0u);
v___x_2193_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_1968_);
v___x_2194_ = l_Lean_Syntax_isNone(v___x_2193_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2193_);
v___x_2196_ = l_Lean_Syntax_matchesNull(v___x_2193_, v___x_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2198_; 
lean_dec(v___x_2193_);
lean_dec(v_x_1872_);
v___x_2197_ = lean_box(1);
v___x_2198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2197_);
lean_ctor_set(v___x_2198_, 1, v_a_1874_);
return v___x_2198_;
}
else
{
lean_object* v_doc_x3f_2199_; lean_object* v___x_2200_; uint8_t v___x_2201_; 
v_doc_x3f_2199_ = l_Lean_Syntax_getArg(v___x_2193_, v___x_1968_);
lean_dec(v___x_2193_);
v___x_2200_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__27));
lean_inc(v_doc_x3f_2199_);
v___x_2201_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2199_, v___x_2200_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
lean_dec(v_doc_x3f_2199_);
lean_dec(v_x_1872_);
v___x_2202_ = lean_box(1);
v___x_2203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
lean_ctor_set(v___x_2203_, 1, v_a_1874_);
return v___x_2203_;
}
else
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2204_, 0, v_doc_x3f_2199_);
v_doc_x3f_2173_ = v___x_2204_;
v___y_2174_ = v_a_1873_;
v___y_2175_ = v_a_1874_;
goto v___jp_2172_;
}
}
}
else
{
lean_object* v___x_2205_; 
lean_dec(v___x_2193_);
v___x_2205_ = lean_box(0);
v_doc_x3f_2173_ = v___x_2205_;
v___y_2174_ = v_a_1873_;
v___y_2175_ = v_a_1874_;
goto v___jp_2172_;
}
v___jp_1969_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
lean_inc_ref(v___y_1972_);
v___x_1982_ = l_Array_append___redArg(v___y_1972_, v___y_1981_);
lean_dec_ref(v___y_1981_);
lean_inc(v___y_1978_);
lean_inc_n(v___y_1980_, 9);
v___x_1983_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1983_, 0, v___y_1980_);
lean_ctor_set(v___x_1983_, 1, v___y_1978_);
lean_ctor_set(v___x_1983_, 2, v___x_1982_);
v___x_1984_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_1985_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1985_, 0, v___y_1980_);
lean_ctor_set(v___x_1985_, 1, v___x_1984_);
v___x_1986_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
v___x_1987_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___y_1980_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_1989_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1989_, 0, v___y_1980_);
lean_ctor_set(v___x_1989_, 1, v___x_1988_);
v___x_1990_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_1991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___y_1980_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
lean_inc(v___y_1973_);
lean_inc(v___y_1971_);
v___x_1992_ = l_Lean_Syntax_node8(v___y_1980_, v___y_1971_, v___x_1983_, v___x_1985_, v___y_1973_, v___x_1987_, v___y_1976_, v___x_1989_, v___x_1991_, v___y_1974_);
v___x_1993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_1994_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
v___x_1995_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1995_, 0, v___y_1980_);
lean_ctor_set(v___x_1995_, 1, v___x_1993_);
v___x_1996_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_1997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1997_, 0, v___y_1980_);
lean_ctor_set(v___x_1997_, 1, v___x_1996_);
v___x_1998_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2));
lean_inc_ref(v___y_1977_);
v___x_1999_ = l_Lean_Name_mkStr4(v___x_1927_, v___x_1928_, v___y_1977_, v___x_1998_);
v___x_2000_ = ((lean_object*)(l_Lean_Parser_Attr_simprocAttr___closed__0));
v___x_2001_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1));
v___x_2002_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2));
v___x_2003_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___y_1980_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
if (lean_obj_tag(v___y_1975_) == 1)
{
lean_object* v_val_2004_; lean_object* v___x_2005_; 
v_val_2004_ = lean_ctor_get(v___y_1975_, 0);
lean_inc(v_val_2004_);
lean_dec_ref_known(v___y_1975_, 1);
v___x_2005_ = l_Array_mkArray1___redArg(v_val_2004_);
v___y_1930_ = v___y_1970_;
v___y_1931_ = v___x_2001_;
v___y_1932_ = v___x_2003_;
v___y_1933_ = v___y_1972_;
v___y_1934_ = v___y_1973_;
v___y_1935_ = v___x_1994_;
v___y_1936_ = v___x_1997_;
v___y_1937_ = v___y_1978_;
v___y_1938_ = v___y_1980_;
v___y_1939_ = v___x_1999_;
v___y_1940_ = v___x_2000_;
v___y_1941_ = v___x_1995_;
v___y_1942_ = v___y_1979_;
v___y_1943_ = v___x_1992_;
v___y_1944_ = v___x_2005_;
goto v___jp_1929_;
}
else
{
lean_object* v___x_2006_; 
lean_dec(v___y_1975_);
v___x_2006_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1930_ = v___y_1970_;
v___y_1931_ = v___x_2001_;
v___y_1932_ = v___x_2003_;
v___y_1933_ = v___y_1972_;
v___y_1934_ = v___y_1973_;
v___y_1935_ = v___x_1994_;
v___y_1936_ = v___x_1997_;
v___y_1937_ = v___y_1978_;
v___y_1938_ = v___y_1980_;
v___y_1939_ = v___x_1999_;
v___y_1940_ = v___x_2000_;
v___y_1941_ = v___x_1995_;
v___y_1942_ = v___y_1979_;
v___y_1943_ = v___x_1992_;
v___y_1944_ = v___x_2006_;
goto v___jp_1929_;
}
}
v___jp_2007_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
lean_inc_ref(v___y_2017_);
v___x_2020_ = l_Array_append___redArg(v___y_2017_, v___y_2019_);
lean_dec_ref(v___y_2019_);
lean_inc(v___y_2010_);
lean_inc_n(v___y_2008_, 9);
v___x_2021_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2021_, 0, v___y_2008_);
lean_ctor_set(v___x_2021_, 1, v___y_2010_);
lean_ctor_set(v___x_2021_, 2, v___x_2020_);
v___x_2022_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_2023_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___y_2008_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
v___x_2025_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___y_2008_);
lean_ctor_set(v___x_2025_, 1, v___x_2024_);
v___x_2026_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_2027_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___y_2008_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_2029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2029_, 0, v___y_2008_);
lean_ctor_set(v___x_2029_, 1, v___x_2028_);
lean_inc(v___y_2016_);
lean_inc(v___y_2011_);
v___x_2030_ = l_Lean_Syntax_node8(v___y_2008_, v___y_2011_, v___x_2021_, v___x_2023_, v___y_2016_, v___x_2025_, v___y_2015_, v___x_2027_, v___x_2029_, v___y_2018_);
v___x_2031_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_2032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
v___x_2033_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___y_2008_);
lean_ctor_set(v___x_2033_, 1, v___x_2031_);
v___x_2034_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_2035_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___y_2008_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2));
lean_inc_ref(v___y_2013_);
v___x_2037_ = l_Lean_Name_mkStr4(v___x_1927_, v___x_1928_, v___y_2013_, v___x_2036_);
v___x_2038_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__1));
v___x_2039_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2));
v___x_2040_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___y_2008_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
if (lean_obj_tag(v___y_2012_) == 1)
{
lean_object* v_val_2041_; lean_object* v___x_2042_; 
v_val_2041_ = lean_ctor_get(v___y_2012_, 0);
lean_inc(v_val_2041_);
lean_dec_ref_known(v___y_2012_, 1);
v___x_2042_ = l_Array_mkArray1___redArg(v_val_2041_);
v___y_1876_ = v___x_2037_;
v___y_1877_ = v___y_2009_;
v___y_1878_ = v___x_2040_;
v___y_1879_ = v___y_2017_;
v___y_1880_ = v___x_2038_;
v___y_1881_ = v___y_2008_;
v___y_1882_ = v___y_2010_;
v___y_1883_ = v___x_2035_;
v___y_1884_ = v___x_2033_;
v___y_1885_ = v___x_2032_;
v___y_1886_ = v___y_2014_;
v___y_1887_ = v___y_2016_;
v___y_1888_ = v___x_2030_;
v___y_1889_ = v___x_2042_;
goto v___jp_1875_;
}
else
{
lean_object* v___x_2043_; 
lean_dec(v___y_2012_);
v___x_2043_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1876_ = v___x_2037_;
v___y_1877_ = v___y_2009_;
v___y_1878_ = v___x_2040_;
v___y_1879_ = v___y_2017_;
v___y_1880_ = v___x_2038_;
v___y_1881_ = v___y_2008_;
v___y_1882_ = v___y_2010_;
v___y_1883_ = v___x_2035_;
v___y_1884_ = v___x_2033_;
v___y_1885_ = v___x_2032_;
v___y_1886_ = v___y_2014_;
v___y_1887_ = v___y_2016_;
v___y_1888_ = v___x_2030_;
v___y_1889_ = v___x_2043_;
goto v___jp_1875_;
}
}
v___jp_2044_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
lean_inc_ref(v___y_2054_);
v___x_2057_ = l_Array_append___redArg(v___y_2054_, v___y_2056_);
lean_dec_ref(v___y_2056_);
lean_inc(v___y_2055_);
lean_inc_n(v___y_2046_, 9);
v___x_2058_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2058_, 0, v___y_2046_);
lean_ctor_set(v___x_2058_, 1, v___y_2055_);
lean_ctor_set(v___x_2058_, 2, v___x_2057_);
v___x_2059_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__0));
v___x_2060_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___y_2046_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__1));
v___x_2062_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___y_2046_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__47));
v___x_2064_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___y_2046_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__9));
v___x_2066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___y_2046_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
lean_inc(v___y_2049_);
lean_inc(v___y_2048_);
v___x_2067_ = l_Lean_Syntax_node8(v___y_2046_, v___y_2048_, v___x_2058_, v___x_2060_, v___y_2049_, v___x_2062_, v___y_2047_, v___x_2064_, v___x_2066_, v___y_2050_);
v___x_2068_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__0));
v___x_2069_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__1));
v___x_2070_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___y_2046_);
lean_ctor_set(v___x_2070_, 1, v___x_2068_);
v___x_2071_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__24));
v___x_2072_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___y_2046_);
lean_ctor_set(v___x_2072_, 1, v___x_2071_);
v___x_2073_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__2));
lean_inc_ref(v___y_2052_);
v___x_2074_ = l_Lean_Name_mkStr4(v___x_1927_, v___x_1928_, v___y_2052_, v___x_2073_);
v___x_2075_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__1));
v___x_2076_ = ((lean_object*)(l_Lean_Parser_Attr_simprocBuiltinAttr___closed__2));
v___x_2077_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___y_2046_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
if (lean_obj_tag(v___y_2051_) == 1)
{
lean_object* v_val_2078_; lean_object* v___x_2079_; 
v_val_2078_ = lean_ctor_get(v___y_2051_, 0);
lean_inc(v_val_2078_);
lean_dec_ref_known(v___y_2051_, 1);
v___x_2079_ = l_Array_mkArray1___redArg(v_val_2078_);
v___y_1902_ = v___y_2045_;
v___y_1903_ = v___y_2046_;
v___y_1904_ = v___x_2072_;
v___y_1905_ = v___y_2049_;
v___y_1906_ = v___x_2074_;
v___y_1907_ = v___x_2075_;
v___y_1908_ = v___x_2069_;
v___y_1909_ = v___x_2077_;
v___y_1910_ = v___y_2054_;
v___y_1911_ = v___y_2053_;
v___y_1912_ = v___y_2055_;
v___y_1913_ = v___x_2070_;
v___y_1914_ = v___x_2067_;
v___y_1915_ = v___x_2079_;
goto v___jp_1901_;
}
else
{
lean_object* v___x_2080_; 
lean_dec(v___y_2051_);
v___x_2080_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1902_ = v___y_2045_;
v___y_1903_ = v___y_2046_;
v___y_1904_ = v___x_2072_;
v___y_1905_ = v___y_2049_;
v___y_1906_ = v___x_2074_;
v___y_1907_ = v___x_2075_;
v___y_1908_ = v___x_2069_;
v___y_1909_ = v___x_2077_;
v___y_1910_ = v___y_2054_;
v___y_1911_ = v___y_2053_;
v___y_1912_ = v___y_2055_;
v___y_1913_ = v___x_2070_;
v___y_1914_ = v___x_2067_;
v___y_1915_ = v___x_2080_;
goto v___jp_1901_;
}
}
v___jp_2081_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; 
v___x_2091_ = lean_unsigned_to_nat(4u);
v___x_2092_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2091_);
lean_inc(v___x_2092_);
v___x_2093_ = l_Lean_Syntax_matchesNull(v___x_2092_, v___x_1968_);
if (v___x_2093_ == 0)
{
uint8_t v___x_2094_; 
lean_inc(v___x_2092_);
v___x_2094_ = l_Lean_Syntax_matchesNull(v___x_2092_, v___y_2087_);
if (v___x_2094_ == 0)
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
lean_dec(v___x_2092_);
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2095_ = lean_box(1);
v___x_2096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
lean_ctor_set(v___x_2096_, 1, v___y_2090_);
return v___x_2096_;
}
else
{
lean_object* v___x_2097_; uint8_t v___x_2098_; 
v___x_2097_ = l_Lean_Syntax_getArg(v___x_2092_, v___y_2085_);
lean_dec(v___x_2092_);
lean_inc(v___x_2097_);
v___x_2098_ = l_Lean_Syntax_matchesNull(v___x_2097_, v___y_2085_);
if (v___x_2098_ == 0)
{
uint8_t v___x_2099_; 
lean_inc(v___x_2097_);
v___x_2099_ = l_Lean_Syntax_matchesNull(v___x_2097_, v___y_2087_);
if (v___x_2099_ == 0)
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
lean_dec(v___x_2097_);
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2100_ = lean_box(1);
v___x_2101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
lean_ctor_set(v___x_2101_, 1, v___y_2090_);
return v___x_2101_;
}
else
{
lean_object* v___x_2102_; lean_object* v___x_2103_; uint8_t v___x_2104_; 
v___x_2102_ = l_Lean_Syntax_getArg(v___x_2097_, v___x_1968_);
v___x_2103_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__5));
v___x_2104_ = l_Lean_Syntax_matchesIdent(v___x_2102_, v___x_2103_);
lean_dec(v___x_2102_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; lean_object* v___x_2106_; 
lean_dec(v___x_2097_);
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2105_ = lean_box(1);
v___x_2106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2105_);
lean_ctor_set(v___x_2106_, 1, v___y_2090_);
return v___x_2106_;
}
else
{
lean_object* v___x_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; 
v___x_2107_ = l_Lean_Syntax_getArg(v___x_2097_, v___y_2082_);
lean_dec(v___x_2097_);
v___x_2108_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7));
v___x_2109_ = l_Lean_Syntax_matchesIdent(v___x_2107_, v___x_2108_);
lean_dec(v___x_2107_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2110_ = lean_box(1);
v___x_2111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
lean_ctor_set(v___x_2111_, 1, v___y_2090_);
return v___x_2111_;
}
else
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; 
v___x_2112_ = lean_unsigned_to_nat(5u);
v___x_2113_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2112_);
v___x_2114_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_2113_);
v___x_2115_ = l_Lean_Syntax_isOfKind(v___x_2113_, v___x_2114_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
lean_dec(v___x_2113_);
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2116_ = lean_box(1);
v___x_2117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2116_);
lean_ctor_set(v___x_2117_, 1, v___y_2090_);
return v___x_2117_;
}
else
{
lean_object* v_ref_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v_ref_2118_ = lean_ctor_get(v___y_2089_, 5);
v___x_2119_ = lean_unsigned_to_nat(7u);
v___x_2120_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2119_);
v___x_2121_ = lean_unsigned_to_nat(10u);
v___x_2122_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2121_);
lean_dec(v_x_1872_);
v___x_2123_ = l_Lean_SourceInfo_fromRef(v_ref_2118_, v___x_2098_);
v___x_2124_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_2125_ = ((lean_object*)(l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_2126_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_2083_) == 1)
{
lean_object* v_val_2127_; lean_object* v___x_2128_; 
v_val_2127_ = lean_ctor_get(v___y_2083_, 0);
lean_inc(v_val_2127_);
lean_dec_ref_known(v___y_2083_, 1);
v___x_2128_ = l_Array_mkArray1___redArg(v_val_2127_);
v___y_1970_ = v___y_2090_;
v___y_1971_ = v___x_2125_;
v___y_1972_ = v___x_2126_;
v___y_1973_ = v___x_2113_;
v___y_1974_ = v___x_2122_;
v___y_1975_ = v_pre_x3f_2088_;
v___y_1976_ = v___x_2120_;
v___y_1977_ = v___y_2084_;
v___y_1978_ = v___x_2124_;
v___y_1979_ = v___y_2086_;
v___y_1980_ = v___x_2123_;
v___y_1981_ = v___x_2128_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2129_; 
lean_dec(v___y_2083_);
v___x_2129_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_1970_ = v___y_2090_;
v___y_1971_ = v___x_2125_;
v___y_1972_ = v___x_2126_;
v___y_1973_ = v___x_2113_;
v___y_1974_ = v___x_2122_;
v___y_1975_ = v_pre_x3f_2088_;
v___y_1976_ = v___x_2120_;
v___y_1977_ = v___y_2084_;
v___y_1978_ = v___x_2124_;
v___y_1979_ = v___y_2086_;
v___y_1980_ = v___x_2123_;
v___y_1981_ = v___x_2129_;
goto v___jp_1969_;
}
}
}
}
}
}
else
{
lean_object* v___x_2130_; lean_object* v___x_2131_; uint8_t v___x_2132_; 
v___x_2130_ = l_Lean_Syntax_getArg(v___x_2097_, v___x_1968_);
lean_dec(v___x_2097_);
v___x_2131_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Simproc_0__Lean_Parser_mkAttributeCmds_spec__0___closed__7));
v___x_2132_ = l_Lean_Syntax_matchesIdent(v___x_2130_, v___x_2131_);
lean_dec(v___x_2130_);
if (v___x_2132_ == 0)
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2133_ = lean_box(1);
v___x_2134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2133_);
lean_ctor_set(v___x_2134_, 1, v___y_2090_);
return v___x_2134_;
}
else
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; 
v___x_2135_ = lean_unsigned_to_nat(5u);
v___x_2136_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2135_);
v___x_2137_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_2136_);
v___x_2138_ = l_Lean_Syntax_isOfKind(v___x_2136_, v___x_2137_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_dec(v___x_2136_);
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2139_ = lean_box(1);
v___x_2140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
lean_ctor_set(v___x_2140_, 1, v___y_2090_);
return v___x_2140_;
}
else
{
lean_object* v_ref_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v_ref_2141_ = lean_ctor_get(v___y_2089_, 5);
v___x_2142_ = lean_unsigned_to_nat(7u);
v___x_2143_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2142_);
v___x_2144_ = lean_unsigned_to_nat(10u);
v___x_2145_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2144_);
lean_dec(v_x_1872_);
v___x_2146_ = l_Lean_SourceInfo_fromRef(v_ref_2141_, v___x_2093_);
v___x_2147_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_2148_ = ((lean_object*)(l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_2149_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_2083_) == 1)
{
lean_object* v_val_2150_; lean_object* v___x_2151_; 
v_val_2150_ = lean_ctor_get(v___y_2083_, 0);
lean_inc(v_val_2150_);
lean_dec_ref_known(v___y_2083_, 1);
v___x_2151_ = l_Array_mkArray1___redArg(v_val_2150_);
v___y_2008_ = v___x_2146_;
v___y_2009_ = v___y_2090_;
v___y_2010_ = v___x_2147_;
v___y_2011_ = v___x_2148_;
v___y_2012_ = v_pre_x3f_2088_;
v___y_2013_ = v___y_2084_;
v___y_2014_ = v___y_2086_;
v___y_2015_ = v___x_2143_;
v___y_2016_ = v___x_2136_;
v___y_2017_ = v___x_2149_;
v___y_2018_ = v___x_2145_;
v___y_2019_ = v___x_2151_;
goto v___jp_2007_;
}
else
{
lean_object* v___x_2152_; 
lean_dec(v___y_2083_);
v___x_2152_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_2008_ = v___x_2146_;
v___y_2009_ = v___y_2090_;
v___y_2010_ = v___x_2147_;
v___y_2011_ = v___x_2148_;
v___y_2012_ = v_pre_x3f_2088_;
v___y_2013_ = v___y_2084_;
v___y_2014_ = v___y_2086_;
v___y_2015_ = v___x_2143_;
v___y_2016_ = v___x_2136_;
v___y_2017_ = v___x_2149_;
v___y_2018_ = v___x_2145_;
v___y_2019_ = v___x_2152_;
goto v___jp_2007_;
}
}
}
}
}
}
else
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; 
lean_dec(v___x_2092_);
v___x_2153_ = lean_unsigned_to_nat(5u);
v___x_2154_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2153_);
v___x_2155_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__27));
lean_inc(v___x_2154_);
v___x_2156_ = l_Lean_Syntax_isOfKind(v___x_2154_, v___x_2155_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
lean_dec(v___x_2154_);
lean_dec(v_pre_x3f_2088_);
lean_dec(v___y_2086_);
lean_dec(v___y_2083_);
lean_dec(v_x_1872_);
v___x_2157_ = lean_box(1);
v___x_2158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2157_);
lean_ctor_set(v___x_2158_, 1, v___y_2090_);
return v___x_2158_;
}
else
{
lean_object* v_ref_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; uint8_t v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v_ref_2159_ = lean_ctor_get(v___y_2089_, 5);
v___x_2160_ = lean_unsigned_to_nat(7u);
v___x_2161_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2160_);
v___x_2162_ = lean_unsigned_to_nat(10u);
v___x_2163_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2162_);
lean_dec(v_x_1872_);
v___x_2164_ = 0;
v___x_2165_ = l_Lean_SourceInfo_fromRef(v_ref_2159_, v___x_2164_);
v___x_2166_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__19));
v___x_2167_ = ((lean_object*)(l_Lean_Parser_command__Builtin__dsimproc__decl___x28___x29_x3a_x3d___00__closed__1));
v___x_2168_ = lean_obj_once(&l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25, &l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25_once, _init_l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__25);
if (lean_obj_tag(v___y_2083_) == 1)
{
lean_object* v_val_2169_; lean_object* v___x_2170_; 
v_val_2169_ = lean_ctor_get(v___y_2083_, 0);
lean_inc(v_val_2169_);
lean_dec_ref_known(v___y_2083_, 1);
v___x_2170_ = l_Array_mkArray1___redArg(v_val_2169_);
v___y_2045_ = v___y_2090_;
v___y_2046_ = v___x_2165_;
v___y_2047_ = v___x_2161_;
v___y_2048_ = v___x_2167_;
v___y_2049_ = v___x_2154_;
v___y_2050_ = v___x_2163_;
v___y_2051_ = v_pre_x3f_2088_;
v___y_2052_ = v___y_2084_;
v___y_2053_ = v___y_2086_;
v___y_2054_ = v___x_2168_;
v___y_2055_ = v___x_2166_;
v___y_2056_ = v___x_2170_;
goto v___jp_2044_;
}
else
{
lean_object* v___x_2171_; 
lean_dec(v___y_2083_);
v___x_2171_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__26));
v___y_2045_ = v___y_2090_;
v___y_2046_ = v___x_2165_;
v___y_2047_ = v___x_2161_;
v___y_2048_ = v___x_2167_;
v___y_2049_ = v___x_2154_;
v___y_2050_ = v___x_2163_;
v___y_2051_ = v_pre_x3f_2088_;
v___y_2052_ = v___y_2084_;
v___y_2053_ = v___y_2086_;
v___y_2054_ = v___x_2168_;
v___y_2055_ = v___x_2166_;
v___y_2056_ = v___x_2171_;
goto v___jp_2044_;
}
}
}
}
v___jp_2172_:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; 
v___x_2176_ = lean_unsigned_to_nat(1u);
v___x_2177_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2176_);
v___x_2178_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command__Simproc__decl___x28___x29_x3a_x3d____1___closed__5));
v___x_2179_ = ((lean_object*)(l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Simproc_____x5b___x5d___x28___x29_x3a_x3d____1___closed__2));
lean_inc(v___x_2177_);
v___x_2180_ = l_Lean_Syntax_isOfKind(v___x_2177_, v___x_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
lean_dec(v___x_2177_);
lean_dec(v_doc_x3f_2173_);
lean_dec(v_x_1872_);
v___x_2181_ = lean_box(1);
v___x_2182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set(v___x_2182_, 1, v___y_2175_);
return v___x_2182_;
}
else
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; uint8_t v___x_2186_; 
v___x_2183_ = lean_unsigned_to_nat(2u);
v___x_2184_ = lean_unsigned_to_nat(3u);
v___x_2185_ = l_Lean_Syntax_getArg(v_x_1872_, v___x_2184_);
v___x_2186_ = l_Lean_Syntax_isNone(v___x_2185_);
if (v___x_2186_ == 0)
{
uint8_t v___x_2187_; 
lean_inc(v___x_2185_);
v___x_2187_ = l_Lean_Syntax_matchesNull(v___x_2185_, v___x_2176_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
lean_dec(v___x_2185_);
lean_dec(v___x_2177_);
lean_dec(v_doc_x3f_2173_);
lean_dec(v_x_1872_);
v___x_2188_ = lean_box(1);
v___x_2189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2188_);
lean_ctor_set(v___x_2189_, 1, v___y_2175_);
return v___x_2189_;
}
else
{
lean_object* v_pre_x3f_2190_; lean_object* v___x_2191_; 
v_pre_x3f_2190_ = l_Lean_Syntax_getArg(v___x_2185_, v___x_1968_);
lean_dec(v___x_2185_);
v___x_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2191_, 0, v_pre_x3f_2190_);
v___y_2082_ = v___x_2183_;
v___y_2083_ = v_doc_x3f_2173_;
v___y_2084_ = v___x_2178_;
v___y_2085_ = v___x_2176_;
v___y_2086_ = v___x_2177_;
v___y_2087_ = v___x_2184_;
v_pre_x3f_2088_ = v___x_2191_;
v___y_2089_ = v___y_2174_;
v___y_2090_ = v___y_2175_;
goto v___jp_2081_;
}
}
else
{
lean_object* v___x_2192_; 
lean_dec(v___x_2185_);
v___x_2192_ = lean_box(0);
v___y_2082_ = v___x_2183_;
v___y_2083_ = v_doc_x3f_2173_;
v___y_2084_ = v___x_2178_;
v___y_2085_ = v___x_2176_;
v___y_2086_ = v___x_2177_;
v___y_2087_ = v___x_2184_;
v_pre_x3f_2088_ = v___x_2192_;
v___y_2089_ = v___y_2174_;
v___y_2090_ = v___y_2175_;
goto v___jp_2081_;
}
}
}
}
v___jp_1875_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
lean_inc_ref(v___y_1879_);
v___x_1890_ = l_Array_append___redArg(v___y_1879_, v___y_1889_);
lean_dec_ref(v___y_1889_);
lean_inc_n(v___y_1882_, 4);
lean_inc_n(v___y_1881_, 7);
v___x_1891_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1891_, 0, v___y_1881_);
lean_ctor_set(v___x_1891_, 1, v___y_1882_);
lean_ctor_set(v___x_1891_, 2, v___x_1890_);
lean_inc(v___y_1880_);
v___x_1892_ = l_Lean_Syntax_node2(v___y_1881_, v___y_1880_, v___y_1878_, v___x_1891_);
v___x_1893_ = l_Lean_Syntax_node2(v___y_1881_, v___y_1876_, v___y_1886_, v___x_1892_);
v___x_1894_ = l_Lean_Syntax_node1(v___y_1881_, v___y_1882_, v___x_1893_);
v___x_1895_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1896_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___y_1881_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___x_1897_ = l_Lean_Syntax_node1(v___y_1881_, v___y_1882_, v___y_1887_);
lean_inc(v___y_1885_);
v___x_1898_ = l_Lean_Syntax_node5(v___y_1881_, v___y_1885_, v___y_1884_, v___y_1883_, v___x_1894_, v___x_1896_, v___x_1897_);
v___x_1899_ = l_Lean_Syntax_node2(v___y_1881_, v___y_1882_, v___y_1888_, v___x_1898_);
v___x_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
lean_ctor_set(v___x_1900_, 1, v___y_1877_);
return v___x_1900_;
}
v___jp_1901_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
lean_inc_ref(v___y_1910_);
v___x_1916_ = l_Array_append___redArg(v___y_1910_, v___y_1915_);
lean_dec_ref(v___y_1915_);
lean_inc_n(v___y_1912_, 4);
lean_inc_n(v___y_1903_, 7);
v___x_1917_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1917_, 0, v___y_1903_);
lean_ctor_set(v___x_1917_, 1, v___y_1912_);
lean_ctor_set(v___x_1917_, 2, v___x_1916_);
lean_inc(v___y_1907_);
v___x_1918_ = l_Lean_Syntax_node2(v___y_1903_, v___y_1907_, v___y_1909_, v___x_1917_);
v___x_1919_ = l_Lean_Syntax_node2(v___y_1903_, v___y_1906_, v___y_1911_, v___x_1918_);
v___x_1920_ = l_Lean_Syntax_node1(v___y_1903_, v___y_1912_, v___x_1919_);
v___x_1921_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1922_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___y_1903_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = l_Lean_Syntax_node1(v___y_1903_, v___y_1912_, v___y_1905_);
lean_inc(v___y_1908_);
v___x_1924_ = l_Lean_Syntax_node5(v___y_1903_, v___y_1908_, v___y_1913_, v___y_1904_, v___x_1920_, v___x_1922_, v___x_1923_);
v___x_1925_ = l_Lean_Syntax_node2(v___y_1903_, v___y_1912_, v___y_1914_, v___x_1924_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1925_);
lean_ctor_set(v___x_1926_, 1, v___y_1902_);
return v___x_1926_;
}
v___jp_1929_:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
lean_inc_ref(v___y_1933_);
v___x_1945_ = l_Array_append___redArg(v___y_1933_, v___y_1944_);
lean_dec_ref(v___y_1944_);
lean_inc_n(v___y_1937_, 5);
lean_inc_n(v___y_1938_, 12);
v___x_1946_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1946_, 0, v___y_1938_);
lean_ctor_set(v___x_1946_, 1, v___y_1937_);
lean_ctor_set(v___x_1946_, 2, v___x_1945_);
lean_inc_ref(v___x_1946_);
lean_inc(v___y_1931_);
v___x_1947_ = l_Lean_Syntax_node2(v___y_1938_, v___y_1931_, v___y_1932_, v___x_1946_);
lean_inc(v___y_1942_);
lean_inc(v___y_1939_);
v___x_1948_ = l_Lean_Syntax_node2(v___y_1938_, v___y_1939_, v___y_1942_, v___x_1947_);
v___x_1949_ = l_Lean_Syntax_node1(v___y_1938_, v___y_1937_, v___x_1948_);
v___x_1950_ = ((lean_object*)(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d___00__closed__34));
v___x_1951_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___y_1938_);
lean_ctor_set(v___x_1951_, 1, v___x_1950_);
v___x_1952_ = l_Lean_Syntax_node1(v___y_1938_, v___y_1937_, v___y_1934_);
lean_inc(v___x_1952_);
lean_inc_ref(v___x_1951_);
lean_inc(v___y_1936_);
lean_inc(v___y_1941_);
lean_inc_n(v___y_1935_, 2);
v___x_1953_ = l_Lean_Syntax_node5(v___y_1938_, v___y_1935_, v___y_1941_, v___y_1936_, v___x_1949_, v___x_1951_, v___x_1952_);
v___x_1954_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__0));
lean_inc_ref(v___y_1940_);
v___x_1955_ = l_Lean_Name_mkStr4(v___x_1927_, v___x_1928_, v___y_1940_, v___x_1954_);
v___x_1956_ = ((lean_object*)(l_Lean_Parser_Attr_sevalprocBuiltinAttr___closed__2));
v___x_1957_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___y_1938_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v___x_1958_ = l_Lean_Syntax_node2(v___y_1938_, v___x_1955_, v___x_1957_, v___x_1946_);
v___x_1959_ = l_Lean_Syntax_node2(v___y_1938_, v___y_1939_, v___y_1942_, v___x_1958_);
v___x_1960_ = l_Lean_Syntax_node1(v___y_1938_, v___y_1937_, v___x_1959_);
v___x_1961_ = l_Lean_Syntax_node5(v___y_1938_, v___y_1935_, v___y_1941_, v___y_1936_, v___x_1960_, v___x_1951_, v___x_1952_);
v___x_1962_ = l_Lean_Syntax_node3(v___y_1938_, v___y_1937_, v___y_1943_, v___x_1953_, v___x_1961_);
v___x_1963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
lean_ctor_set(v___x_1963_, 1, v___y_1930_);
return v___x_1963_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1___boxed(lean_object* v_x_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lean_Parser___aux__Init__Simproc______macroRules__Lean__Parser__command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d____1(v_x_2206_, v_a_2207_, v_a_2208_);
lean_dec_ref(v_a_2207_);
return v_res_2209_;
}
}
lean_object* runtime_initialize_Init_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_Meta_Defs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d__ = _init_l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d__();
lean_mark_persistent(l_Lean_Parser_command____Simproc_____x5b___x5d___x28___x29_x3a_x3d__);
l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d__ = _init_l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d__();
lean_mark_persistent(l_Lean_Parser_command____Dsimproc_____x5b___x5d___x28___x29_x3a_x3d__);
l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d__ = _init_l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d__();
lean_mark_persistent(l_Lean_Parser_command____Builtin__simproc_____x5b___x5d___x28___x29_x3a_x3d__);
l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d__ = _init_l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d__();
lean_mark_persistent(l_Lean_Parser_command____Builtin__dsimproc_____x5b___x5d___x28___x29_x3a_x3d__);
l_Lean_Parser_Attr_simprocAttr = _init_l_Lean_Parser_Attr_simprocAttr();
lean_mark_persistent(l_Lean_Parser_Attr_simprocAttr);
l_Lean_Parser_Attr_sevalprocAttr = _init_l_Lean_Parser_Attr_sevalprocAttr();
lean_mark_persistent(l_Lean_Parser_Attr_sevalprocAttr);
l_Lean_Parser_Attr_simprocBuiltinAttr = _init_l_Lean_Parser_Attr_simprocBuiltinAttr();
lean_mark_persistent(l_Lean_Parser_Attr_simprocBuiltinAttr);
l_Lean_Parser_Attr_sevalprocBuiltinAttr = _init_l_Lean_Parser_Attr_sevalprocBuiltinAttr();
lean_mark_persistent(l_Lean_Parser_Attr_sevalprocBuiltinAttr);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* initialize_Init_Tactics(uint8_t builtin);
lean_object* initialize_Init_Meta_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Simproc(builtin);
}
#ifdef __cplusplus
}
#endif
