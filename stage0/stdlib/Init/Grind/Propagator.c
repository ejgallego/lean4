// Lean compiler output
// Module: Init.Grind.Propagator
// Imports: public meta import Init.Meta public import Init.Tactics import Init.Meta.Defs
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
extern lean_object* l_Lean_Parser_Tactic_simpPost;
extern lean_object* l_Lean_Parser_Tactic_simpPre;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "command_Grind_propagator___(_):=_"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3_value_aux_0),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3_value_aux_1),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(235, 223, 252, 70, 89, 119, 69, 113)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3_value;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5_value;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__6 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__6_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__7 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__7_value;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__8 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__8_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__9 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__9_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__9_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__10 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__10_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__7_value),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__10_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__11 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__11_value;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "grind_propagator "};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__12 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__12_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__12_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__13 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__13_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__11_value),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__13_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__14 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__14_value;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__15 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__15_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__15_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__16 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__16_value;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__18;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__19 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__19_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__19_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__20 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__20_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__20_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21_value;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__22;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__23 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__23_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__23_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__24 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__24_value;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__25;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__26;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__27 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__27_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__27_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__28 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__28_value;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__29;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__30 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__30_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__30_value)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__31 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__31_value;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__32;
static const lean_string_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__33 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__33_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__33_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__34 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__34_value;
static const lean_ctor_object l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__35 = (const lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__35_value;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__36;
static lean_once_cell_t l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__37;
LEAN_EXPORT lean_object* l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d__;
static const lean_string_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "command_Builtin_grind_propagator____:=_"};
static const lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__0 = (const lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__0_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 208, 41, 172, 144, 30, 112, 198)}};
static const lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1 = (const lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1_value;
static const lean_string_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "builtin_grind_propagator "};
static const lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__2 = (const lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__2_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__2_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__3 = (const lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__3_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__11_value),((lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__3_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__4 = (const lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__4_value;
static const lean_ctor_object l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5_value),((lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__4_value),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21_value)}};
static const lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__5 = (const lean_object*)&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__5_value;
static lean_once_cell_t l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__6;
static lean_once_cell_t l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__7;
static lean_once_cell_t l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__8;
static lean_once_cell_t l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__9;
static lean_once_cell_t l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d__;
static const lean_string_object l_Lean_Parser_grindPropagatorBuiltinAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "grindPropagatorBuiltinAttr"};
static const lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr___closed__0 = (const lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1_value_aux_1),((lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 229, 199, 232, 226, 194, 54, 34)}};
static const lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1 = (const lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1_value;
static const lean_string_object l_Lean_Parser_grindPropagatorBuiltinAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "builtin_grind_propagator"};
static const lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr___closed__2 = (const lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__2_value;
static const lean_ctor_object l_Lean_Parser_grindPropagatorBuiltinAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr___closed__3 = (const lean_object*)&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__3_value;
static lean_once_cell_t l_Lean_Parser_grindPropagatorBuiltinAttr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr___closed__4;
static lean_once_cell_t l_Lean_Parser_grindPropagatorBuiltinAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr___closed__5;
static lean_once_cell_t l_Lean_Parser_grindPropagatorBuiltinAttr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_grindPropagatorBuiltinAttr;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__0 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__0_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__1 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__1_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__2 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__2_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__3 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__3_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__4 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__4_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__5 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__5_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__6 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__6_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__7 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__7_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__8 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__8_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__9 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__9_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__10 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__10_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__11 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__11_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__12 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__12_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__13 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__13_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__14 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__14_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__15 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__15_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__16 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__16_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__17 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__17_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Propagator"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__18 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__18_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value_aux_0),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value_aux_2),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(100, 219, 250, 160, 74, 43, 37, 55)}};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__20 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__20_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__21 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__21_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__22 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__22_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__23 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__23_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value_aux_0),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value_aux_2),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24_value;
static const lean_string_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__25 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__25_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value_aux_0),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value_aux_2),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26_value;
static lean_once_cell_t l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__27;
static const lean_array_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__28 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__28_value;
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value_aux_0),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value_aux_1),((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value_aux_2),((lean_object*)&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29 = (const lean_object*)&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29_value;
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_32_ = l_Lean_Parser_Tactic_simpPost;
v___x_33_ = l_Lean_Parser_Tactic_simpPre;
v___x_34_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__16));
v___x_35_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set(v___x_35_, 2, v___x_32_);
return v___x_35_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__18(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_36_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17);
v___x_37_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__14));
v___x_38_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_39_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
lean_ctor_set(v___x_39_, 2, v___x_36_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__22(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_45_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21));
v___x_46_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__18, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__18_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__18);
v___x_47_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_48_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_46_);
lean_ctor_set(v___x_48_, 2, v___x_45_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__25(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_52_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__24));
v___x_53_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__22, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__22_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__22);
v___x_54_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_55_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
lean_ctor_set(v___x_55_, 2, v___x_52_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__26(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21));
v___x_57_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__25, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__25_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__25);
v___x_58_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_59_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_56_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__29(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_63_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__28));
v___x_64_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__26, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__26_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__26);
v___x_65_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_66_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_64_);
lean_ctor_set(v___x_66_, 2, v___x_63_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__32(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__31));
v___x_71_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__29, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__29_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__29);
v___x_72_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_73_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_70_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__36(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_80_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__35));
v___x_81_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__32, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__32_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__32);
v___x_82_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_83_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
lean_ctor_set(v___x_83_, 2, v___x_80_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__37(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__36, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__36_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__36);
v___x_85_ = lean_unsigned_to_nat(1022u);
v___x_86_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__3));
v___x_87_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_85_);
lean_ctor_set(v___x_87_, 2, v___x_84_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d__(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__37, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__37_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__37);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__6(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_105_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17);
v___x_106_ = ((lean_object*)(l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__5));
v___x_107_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_108_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
lean_ctor_set(v___x_108_, 2, v___x_105_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__7(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_109_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21));
v___x_110_ = lean_obj_once(&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__6, &l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__6_once, _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__6);
v___x_111_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_112_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_110_);
lean_ctor_set(v___x_112_, 2, v___x_109_);
return v___x_112_;
}
}
static lean_object* _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__8(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_113_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__31));
v___x_114_ = lean_obj_once(&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__7, &l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__7_once, _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__7);
v___x_115_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_116_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
lean_ctor_set(v___x_116_, 2, v___x_113_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__9(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_117_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__35));
v___x_118_ = lean_obj_once(&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__8, &l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__8_once, _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__8);
v___x_119_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_120_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_118_);
lean_ctor_set(v___x_120_, 2, v___x_117_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__10(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = lean_obj_once(&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__9, &l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__9_once, _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__9);
v___x_122_ = lean_unsigned_to_nat(1022u);
v___x_123_ = ((lean_object*)(l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1));
v___x_124_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d__(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__10, &l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__10_once, _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__10);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Parser_grindPropagatorBuiltinAttr___closed__4(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_135_ = lean_obj_once(&l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17, &l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17_once, _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__17);
v___x_136_ = ((lean_object*)(l_Lean_Parser_grindPropagatorBuiltinAttr___closed__3));
v___x_137_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_138_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
lean_ctor_set(v___x_138_, 2, v___x_135_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Parser_grindPropagatorBuiltinAttr___closed__5(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_139_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__21));
v___x_140_ = lean_obj_once(&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__4, &l_Lean_Parser_grindPropagatorBuiltinAttr___closed__4_once, _init_l_Lean_Parser_grindPropagatorBuiltinAttr___closed__4);
v___x_141_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__5));
v___x_142_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_140_);
lean_ctor_set(v___x_142_, 2, v___x_139_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Parser_grindPropagatorBuiltinAttr___closed__6(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_143_ = lean_obj_once(&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__5, &l_Lean_Parser_grindPropagatorBuiltinAttr___closed__5_once, _init_l_Lean_Parser_grindPropagatorBuiltinAttr___closed__5);
v___x_144_ = lean_unsigned_to_nat(1022u);
v___x_145_ = ((lean_object*)(l_Lean_Parser_grindPropagatorBuiltinAttr___closed__1));
v___x_146_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___x_144_);
lean_ctor_set(v___x_146_, 2, v___x_143_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Parser_grindPropagatorBuiltinAttr(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_obj_once(&l_Lean_Parser_grindPropagatorBuiltinAttr___closed__6, &l_Lean_Parser_grindPropagatorBuiltinAttr___closed__6_once, _init_l_Lean_Parser_grindPropagatorBuiltinAttr___closed__6);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__27(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Array_mkArray0___redArg();
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1(lean_object* v_x_196_, lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_204_; lean_object* v___y_205_; lean_object* v___y_206_; lean_object* v___y_207_; lean_object* v___y_208_; lean_object* v___y_209_; lean_object* v___y_210_; lean_object* v___y_211_; lean_object* v___y_212_; lean_object* v___y_213_; lean_object* v___y_214_; lean_object* v_doc_x3f_272_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_304_ = ((lean_object*)(l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d___00__closed__1));
lean_inc(v_x_196_);
v___x_305_ = l_Lean_Syntax_isOfKind(v_x_196_, v___x_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; 
lean_dec(v_x_196_);
v___x_306_ = lean_box(1);
v___x_307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v_a_198_);
return v___x_307_;
}
else
{
lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_308_ = lean_unsigned_to_nat(0u);
v___x_309_ = l_Lean_Syntax_getArg(v_x_196_, v___x_308_);
v___x_310_ = l_Lean_Syntax_isNone(v___x_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_309_);
v___x_312_ = l_Lean_Syntax_matchesNull(v___x_309_, v___x_311_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; 
lean_dec(v___x_309_);
lean_dec(v_x_196_);
v___x_313_ = lean_box(1);
v___x_314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
lean_ctor_set(v___x_314_, 1, v_a_198_);
return v___x_314_;
}
else
{
lean_object* v_doc_x3f_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v_doc_x3f_315_ = l_Lean_Syntax_getArg(v___x_309_, v___x_308_);
lean_dec(v___x_309_);
v___x_316_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__29));
lean_inc(v_doc_x3f_315_);
v___x_317_ = l_Lean_Syntax_isOfKind(v_doc_x3f_315_, v___x_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec(v_doc_x3f_315_);
lean_dec(v_x_196_);
v___x_318_ = lean_box(1);
v___x_319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v_a_198_);
return v___x_319_;
}
else
{
lean_object* v___x_320_; 
v___x_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_320_, 0, v_doc_x3f_315_);
v_doc_x3f_272_ = v___x_320_;
v___y_273_ = v_a_197_;
v___y_274_ = v_a_198_;
goto v___jp_271_;
}
}
}
else
{
lean_object* v___x_321_; 
lean_dec(v___x_309_);
v___x_321_ = lean_box(0);
v_doc_x3f_272_ = v___x_321_;
v___y_273_ = v_a_197_;
v___y_274_ = v_a_198_;
goto v___jp_271_;
}
}
v___jp_199_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
lean_inc_ref_n(v___y_205_, 2);
v___x_215_ = l_Array_append___redArg(v___y_205_, v___y_214_);
lean_dec_ref(v___y_214_);
lean_inc_n(v___y_210_, 6);
lean_inc_n(v___y_206_, 24);
v___x_216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_216_, 0, v___y_206_);
lean_ctor_set(v___x_216_, 1, v___y_210_);
lean_ctor_set(v___x_216_, 2, v___x_215_);
v___x_217_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_217_, 0, v___y_206_);
lean_ctor_set(v___x_217_, 1, v___y_210_);
lean_ctor_set(v___x_217_, 2, v___y_205_);
lean_inc_ref_n(v___x_217_, 12);
lean_inc(v___y_200_);
v___x_218_ = l_Lean_Syntax_node7(v___y_206_, v___y_200_, v___x_216_, v___x_217_, v___x_217_, v___x_217_, v___x_217_, v___x_217_, v___x_217_);
v___x_219_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__0));
lean_inc_ref_n(v___y_209_, 5);
lean_inc_ref_n(v___y_201_, 10);
lean_inc_ref_n(v___y_212_, 10);
v___x_220_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___y_209_, v___x_219_);
v___x_221_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__1));
v___x_222_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_222_, 0, v___y_206_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__2));
v___x_224_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___y_209_, v___x_223_);
lean_inc(v___y_213_);
v___x_225_ = l_Lean_Syntax_node2(v___y_206_, v___x_224_, v___y_213_, v___x_217_);
v___x_226_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__3));
v___x_227_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___y_209_, v___x_226_);
v___x_228_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__4));
v___x_229_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__5));
v___x_230_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___x_228_, v___x_229_);
v___x_231_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__6));
v___x_232_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_232_, 0, v___y_206_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
lean_inc(v___y_211_);
v___x_233_ = l_Lean_mkIdent(v___y_211_);
v___x_234_ = l_Lean_Syntax_node2(v___y_206_, v___x_230_, v___x_232_, v___x_233_);
v___x_235_ = l_Lean_Syntax_node1(v___y_206_, v___y_210_, v___x_234_);
v___x_236_ = l_Lean_Syntax_node2(v___y_206_, v___x_227_, v___x_217_, v___x_235_);
v___x_237_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__7));
v___x_238_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___y_209_, v___x_237_);
v___x_239_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__8));
v___x_240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_240_, 0, v___y_206_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__9));
v___x_242_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__10));
v___x_243_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___x_241_, v___x_242_);
v___x_244_ = l_Lean_Syntax_node2(v___y_206_, v___x_243_, v___x_217_, v___x_217_);
v___x_245_ = l_Lean_Syntax_node4(v___y_206_, v___x_238_, v___x_240_, v___y_203_, v___x_244_, v___x_217_);
v___x_246_ = l_Lean_Syntax_node5(v___y_206_, v___x_220_, v___x_222_, v___x_225_, v___x_236_, v___x_245_, v___x_217_);
lean_inc(v___y_204_);
v___x_247_ = l_Lean_Syntax_node2(v___y_206_, v___y_204_, v___x_218_, v___x_246_);
v___x_248_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__11));
v___x_249_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___y_209_, v___x_248_);
v___x_250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_250_, 0, v___y_206_);
lean_ctor_set(v___x_250_, 1, v___x_248_);
v___x_251_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__12));
v___x_252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_252_, 0, v___y_206_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__13));
v___x_254_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___x_228_, v___x_253_);
v___x_255_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__14));
v___x_256_ = l_Lean_Name_mkStr4(v___y_212_, v___y_201_, v___x_228_, v___x_255_);
v___x_257_ = l_Lean_Syntax_node1(v___y_206_, v___x_256_, v___x_217_);
v___x_258_ = ((lean_object*)(l_Lean_Parser_grindPropagatorBuiltinAttr___closed__0));
v___x_259_ = l_Lean_Name_mkStr3(v___y_212_, v___y_201_, v___x_258_);
v___x_260_ = ((lean_object*)(l_Lean_Parser_grindPropagatorBuiltinAttr___closed__2));
v___x_261_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_261_, 0, v___y_206_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = l_Lean_Syntax_node3(v___y_206_, v___x_259_, v___x_261_, v___y_208_, v___y_202_);
v___x_263_ = l_Lean_Syntax_node2(v___y_206_, v___x_254_, v___x_257_, v___x_262_);
v___x_264_ = l_Lean_Syntax_node1(v___y_206_, v___y_210_, v___x_263_);
v___x_265_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__15));
v___x_266_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_266_, 0, v___y_206_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = l_Lean_Syntax_node1(v___y_206_, v___y_210_, v___y_213_);
v___x_268_ = l_Lean_Syntax_node5(v___y_206_, v___x_249_, v___x_250_, v___x_252_, v___x_264_, v___x_266_, v___x_267_);
v___x_269_ = l_Lean_Syntax_node2(v___y_206_, v___y_210_, v___x_247_, v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___y_207_);
return v___x_270_;
}
v___jp_271_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_275_ = lean_unsigned_to_nat(2u);
v___x_276_ = l_Lean_Syntax_getArg(v_x_196_, v___x_275_);
v___x_277_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__20));
lean_inc(v___x_276_);
v___x_278_ = l_Lean_Syntax_isOfKind(v___x_276_, v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; 
lean_dec(v___x_276_);
lean_dec(v_doc_x3f_272_);
lean_dec(v_x_196_);
v___x_279_ = lean_box(1);
v___x_280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___y_274_);
return v___x_280_;
}
else
{
lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_281_ = lean_unsigned_to_nat(4u);
v___x_282_ = l_Lean_Syntax_getArg(v_x_196_, v___x_281_);
lean_inc(v___x_282_);
v___x_283_ = l_Lean_Syntax_isOfKind(v___x_282_, v___x_277_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_dec(v___x_282_);
lean_dec(v___x_276_);
lean_dec(v_doc_x3f_272_);
lean_dec(v_x_196_);
v___x_284_ = lean_box(1);
v___x_285_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set(v___x_285_, 1, v___y_274_);
return v___x_285_;
}
else
{
lean_object* v_ref_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v_propagatorType_293_; uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_ref_286_ = lean_ctor_get(v___y_273_, 5);
v___x_287_ = lean_unsigned_to_nat(3u);
v___x_288_ = l_Lean_Syntax_getArg(v_x_196_, v___x_287_);
v___x_289_ = lean_unsigned_to_nat(6u);
v___x_290_ = l_Lean_Syntax_getArg(v_x_196_, v___x_289_);
lean_dec(v_x_196_);
v___x_291_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__0));
v___x_292_ = ((lean_object*)(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d___00__closed__1));
v_propagatorType_293_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__19));
v___x_294_ = 0;
v___x_295_ = l_Lean_SourceInfo_fromRef(v_ref_286_, v___x_294_);
v___x_296_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__21));
v___x_297_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__22));
v___x_298_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__24));
v___x_299_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__26));
v___x_300_ = lean_obj_once(&l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__27, &l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__27_once, _init_l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__27);
if (lean_obj_tag(v_doc_x3f_272_) == 1)
{
lean_object* v_val_301_; lean_object* v___x_302_; 
v_val_301_ = lean_ctor_get(v_doc_x3f_272_, 0);
lean_inc(v_val_301_);
lean_dec_ref_known(v_doc_x3f_272_, 1);
v___x_302_ = l_Array_mkArray1___redArg(v_val_301_);
v___y_200_ = v___x_299_;
v___y_201_ = v___x_292_;
v___y_202_ = v___x_282_;
v___y_203_ = v___x_290_;
v___y_204_ = v___x_298_;
v___y_205_ = v___x_300_;
v___y_206_ = v___x_295_;
v___y_207_ = v___y_274_;
v___y_208_ = v___x_288_;
v___y_209_ = v___x_297_;
v___y_210_ = v___x_296_;
v___y_211_ = v_propagatorType_293_;
v___y_212_ = v___x_291_;
v___y_213_ = v___x_276_;
v___y_214_ = v___x_302_;
goto v___jp_199_;
}
else
{
lean_object* v___x_303_; 
lean_dec(v_doc_x3f_272_);
v___x_303_ = ((lean_object*)(l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___closed__28));
v___y_200_ = v___x_299_;
v___y_201_ = v___x_292_;
v___y_202_ = v___x_282_;
v___y_203_ = v___x_290_;
v___y_204_ = v___x_298_;
v___y_205_ = v___x_300_;
v___y_206_ = v___x_295_;
v___y_207_ = v___y_274_;
v___y_208_ = v___x_288_;
v___y_209_ = v___x_297_;
v___y_210_ = v___x_296_;
v___y_211_ = v_propagatorType_293_;
v___y_212_ = v___x_291_;
v___y_213_ = v___x_276_;
v___y_214_ = v___x_303_;
goto v___jp_199_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1___boxed(lean_object* v_x_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_Parser___aux__Init__Grind__Propagator______macroRules__Lean__Parser__command__Builtin__grind__propagator_________x3a_x3d____1(v_x_322_, v_a_323_, v_a_324_);
lean_dec_ref(v_a_323_);
return v_res_325_;
}
}
lean_object* runtime_initialize_Init_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_Meta_Defs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Grind_Propagator(uint8_t builtin) {
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
lean_object* runtime_initialize_Init_Meta(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Grind_Propagator(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d__ = _init_l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d__();
lean_mark_persistent(l_Lean_Parser_command__Grind__propagator_______x28___x29_x3a_x3d__);
l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d__ = _init_l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d__();
lean_mark_persistent(l_Lean_Parser_command__Builtin__grind__propagator_________x3a_x3d__);
l_Lean_Parser_grindPropagatorBuiltinAttr = _init_l_Lean_Parser_grindPropagatorBuiltinAttr();
lean_mark_persistent(l_Lean_Parser_grindPropagatorBuiltinAttr);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Meta(uint8_t builtin);
lean_object* initialize_Init_Tactics(uint8_t builtin);
lean_object* initialize_Init_Meta_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_Propagator(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Grind_Propagator(builtin);
}
#ifdef __cplusplus
}
#endif
