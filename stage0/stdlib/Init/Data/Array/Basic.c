// Lean compiler output
// Module: Init.Data.Array.Basic
// Imports: public import Init.Control.Do public import Init.GetElem public import Init.Data.List.ToArrayImpl import all Init.Data.List.ToArrayImpl public import Init.Data.Array.Set import all Init.Data.Array.Set public import Init.WF meta import Init.MetaTypes import Init.WFTactics
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Array_appendCore___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_repr(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__0 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__0_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__1 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__1_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__2 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__2_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__3 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__4 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__5 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__5_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__6 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__6_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__6_value),LEAN_SCALAR_PTR_LITERAL(69, 6, 27, 142, 141, 165, 41, 16)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__7 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__7_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__8 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__8_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__9 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__9_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__10 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__10_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__11 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__12 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__12_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__12_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__13 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__13_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 10}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__10_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__13_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__14 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__14_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__7_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__14_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__15 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__15_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__5_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__15_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__16 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__16_value;
static const lean_string_object l_term_x23_x5b___x2c_x5d___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__17 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__18 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__18_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__3_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__16_value),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__18_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__19 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__19_value;
static const lean_ctor_object l_term_x23_x5b___x2c_x5d___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__19_value)}};
static const lean_object* l_term_x23_x5b___x2c_x5d___closed__20 = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__20_value;
LEAN_EXPORT const lean_object* l_term_x23_x5b___x2c_x5d = (const lean_object*)&l_term_x23_x5b___x2c_x5d___closed__20_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_1),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value_aux_2),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "List.toArray"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5_value;
static lean_once_cell_t l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value;
static const lean_ctor_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15_value;
static const lean_string_object l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16 = (const lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16_value;
static lean_once_cell_t l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17;
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instMembership___redArg();
LEAN_EXPORT lean_object* l_Array_instMembership___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instMembership(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Array_usize___boxed(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_uget___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Array_ugetBorrowed___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_uset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
LEAN_EXPORT lean_object* l_Array_pop___boxed(lean_object*, lean_object*);
lean_object* lean_array_mark_linear(lean_object*);
LEAN_EXPORT lean_object* l_Array_markLinear___boxed(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_propagateMark___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replicate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_swap___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Array_swap___auto__1___closed__0 = (const lean_object*)&l_Array_swap___auto__1___closed__0_value;
static const lean_string_object l_Array_swap___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Array_swap___auto__1___closed__1 = (const lean_object*)&l_Array_swap___auto__1___closed__1_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_1),((lean_object*)&l_Array_swap___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__2_value_aux_2),((lean_object*)&l_Array_swap___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Array_swap___auto__1___closed__2 = (const lean_object*)&l_Array_swap___auto__1___closed__2_value;
static const lean_array_object l_Array_swap___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_swap___auto__1___closed__3 = (const lean_object*)&l_Array_swap___auto__1___closed__3_value;
static const lean_string_object l_Array_swap___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Array_swap___auto__1___closed__4 = (const lean_object*)&l_Array_swap___auto__1___closed__4_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_0),((lean_object*)&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_1),((lean_object*)&l_Array_swap___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Array_swap___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Array_swap___auto__1___closed__5_value_aux_2),((lean_object*)&l_Array_swap___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Array_swap___auto__1___closed__5 = (const lean_object*)&l_Array_swap___auto__1___closed__5_value;
static const lean_string_object l_Array_swap___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticGet_elem_tactic"};
static const lean_object* l_Array_swap___auto__1___closed__6 = (const lean_object*)&l_Array_swap___auto__1___closed__6_value;
static const lean_ctor_object l_Array_swap___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_swap___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(141, 31, 109, 153, 11, 229, 201, 51)}};
static const lean_object* l_Array_swap___auto__1___closed__7 = (const lean_object*)&l_Array_swap___auto__1___closed__7_value;
static const lean_string_object l_Array_swap___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "get_elem_tactic"};
static const lean_object* l_Array_swap___auto__1___closed__8 = (const lean_object*)&l_Array_swap___auto__1___closed__8_value;
static lean_once_cell_t l_Array_swap___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__9;
static lean_once_cell_t l_Array_swap___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__10;
static lean_once_cell_t l_Array_swap___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__11;
static lean_once_cell_t l_Array_swap___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__12;
static lean_once_cell_t l_Array_swap___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__13;
static lean_once_cell_t l_Array_swap___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__14;
static lean_once_cell_t l_Array_swap___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__15;
static lean_once_cell_t l_Array_swap___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__16;
static lean_once_cell_t l_Array_swap___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_swap___auto__1___closed__17;
LEAN_EXPORT lean_object* l_Array_swap___auto__1;
LEAN_EXPORT lean_object* l_Array_swap___auto__3;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0 = (const lean_object*)&l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg();
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize(lean_object*);
static const lean_array_object l_Array_instEmptyCollection___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_instEmptyCollection___redArg___closed__0 = (const lean_object*)&l_Array_instEmptyCollection___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg___boxed(lean_object*);
static lean_once_cell_t l_Array_instEmptyCollection___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_instEmptyCollection___closed__0;
LEAN_EXPORT lean_object* l_Array_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Array_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Array_instInhabited(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqv___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqv___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqv(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_instBEq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instBEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_range___lam__0___boxed(lean_object*);
static const lean_closure_object l_Array_range___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_range___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_range___closed__0 = (const lean_object*)&l_Array_range___closed__0_value;
LEAN_EXPORT lean_object* l_Array_range(lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_range_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_singleton___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_singleton(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back___auto__1;
LEAN_EXPORT lean_object* l_Array_back___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_back___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_back(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_back_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___auto__1;
LEAN_EXPORT lean_object* l_Array_swapAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_swapAt_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Init.Data.Array.Basic"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__0 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__0_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Array.swapAt!"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__1 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__1_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Array_swapAt_x21___redArg___closed__2 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__2_value;
static const lean_string_object l_Array_swapAt_x21___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " out of bounds"};
static const lean_object* l_Array_swapAt_x21___redArg___closed__3 = (const lean_object*)&l_Array_swapAt_x21___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Array_swapAt_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_swapAt_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_shrink___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_take___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_drop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_modifyOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(lean_object*, size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlM_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldrM_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdxM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_firstM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_firstM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l_Array_findSomeM_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_findSomeM_x3f___redArg___closed__0 = (const lean_object*)&l_Array_findSomeM_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l_Array_findIdxM_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Array_findIdxM_x3f___redArg___closed__0 = (const lean_object*)&l_Array_findIdxM_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Array_anyM_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instForMOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forRevM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__0 = (const lean_object*)&l_Array_foldl___redArg___closed__0_value;
static const lean_closure_object l_Array_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__1 = (const lean_object*)&l_Array_foldl___redArg___closed__1_value;
static const lean_closure_object l_Array_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__2 = (const lean_object*)&l_Array_foldl___redArg___closed__2_value;
static const lean_closure_object l_Array_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__3 = (const lean_object*)&l_Array_foldl___redArg___closed__3_value;
static const lean_closure_object l_Array_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__4 = (const lean_object*)&l_Array_foldl___redArg___closed__4_value;
static const lean_closure_object l_Array_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__5 = (const lean_object*)&l_Array_foldl___redArg___closed__5_value;
static const lean_closure_object l_Array_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_foldl___redArg___closed__6 = (const lean_object*)&l_Array_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__0_value),((lean_object*)&l_Array_foldl___redArg___closed__1_value)}};
static const lean_object* l_Array_foldl___redArg___closed__7 = (const lean_object*)&l_Array_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__7_value),((lean_object*)&l_Array_foldl___redArg___closed__2_value),((lean_object*)&l_Array_foldl___redArg___closed__3_value),((lean_object*)&l_Array_foldl___redArg___closed__4_value),((lean_object*)&l_Array_foldl___redArg___closed__5_value)}};
static const lean_object* l_Array_foldl___redArg___closed__8 = (const lean_object*)&l_Array_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Array_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_foldl___redArg___closed__8_value),((lean_object*)&l_Array_foldl___redArg___closed__6_value)}};
static const lean_object* l_Array_foldl___redArg___closed__9 = (const lean_object*)&l_Array_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Array_foldl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_prod___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_prod(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_countP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_count(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instFunctor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instFunctor___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instFunctor___closed__0 = (const lean_object*)&l_Array_instFunctor___closed__0_value;
static const lean_closure_object l_Array_instFunctor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_map, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_instFunctor___closed__1 = (const lean_object*)&l_Array_instFunctor___closed__1_value;
static const lean_ctor_object l_Array_instFunctor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_instFunctor___closed__1_value),((lean_object*)&l_Array_instFunctor___closed__0_value)}};
static const lean_object* l_Array_instFunctor___closed__2 = (const lean_object*)&l_Array_instFunctor___closed__2_value;
LEAN_EXPORT const lean_object* l_Array_instFunctor = (const lean_object*)&l_Array_instFunctor___closed__2_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_findSome_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Array.findSome!"};
static const lean_object* l_Array_findSome_x21___redArg___closed__0 = (const lean_object*)&l_Array_findSome_x21___redArg___closed__0_value;
static const lean_string_object l_Array_findSome_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "failed to find element"};
static const lean_object* l_Array_findSome_x21___redArg___closed__1 = (const lean_object*)&l_Array_findSome_x21___redArg___closed__1_value;
static lean_once_cell_t l_Array_findSome_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_findSome_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSome_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findRev_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_idxOf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_all(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_all___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_elem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_elem___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_elem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_elem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_array_to_list_impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Array_toListAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_toListAppend___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_toListAppend___redArg___closed__0 = (const lean_object*)&l_Array_toListAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toListAppend(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_append___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_instAppend___redArg___closed__0 = (const lean_object*)&l_Array_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instAppend___redArg();
LEAN_EXPORT lean_object* l_Array_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_appendList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_appendList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_instHAppendList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_appendList, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_instHAppendList___redArg___closed__0 = (const lean_object*)&l_Array_instHAppendList___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg();
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instHAppendList(lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_flatMap(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_flatten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_flatten___redArg___closed__0 = (const lean_object*)&l_Array_flatten___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_flatten___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_flatten(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_reverse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filter___redArg___closed__0 = (const lean_object*)&l_Array_filter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Array_filterRevM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_reverse, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Array_filterRevM___redArg___closed__0 = (const lean_object*)&l_Array_filterRevM___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterRevM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getMax_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_partition___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Array_partition___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_filter___redArg___closed__0_value),((lean_object*)&l_Array_filter___redArg___closed__0_value)}};
static const lean_object* l_Array_partition___redArg___closed__0 = (const lean_object*)&l_Array_partition___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_partition___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_partition(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_popWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_popWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_takeWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx___auto__1;
LEAN_EXPORT lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_eraseIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Array.eraseIdx!"};
static const lean_object* l_Array_eraseIdx_x21___redArg___closed__0 = (const lean_object*)&l_Array_eraseIdx_x21___redArg___closed__0_value;
static const lean_string_object l_Array_eraseIdx_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid index"};
static const lean_object* l_Array_eraseIdx_x21___redArg___closed__1 = (const lean_object*)&l_Array_eraseIdx_x21___redArg___closed__1_value;
static lean_once_cell_t l_Array_eraseIdx_x21___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_eraseIdx_x21___redArg___closed__2;
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_erase___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_erase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseP___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___auto__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_insertIdx_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Array.insertIdx!"};
static const lean_object* l_Array_insertIdx_x21___redArg___closed__0 = (const lean_object*)&l_Array_insertIdx_x21___redArg___closed__0_value;
static lean_once_cell_t l_Array_insertIdx_x21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_insertIdx_x21___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOf___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOf___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isPrefixOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isPrefixOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWith___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_zip___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_zip___redArg___closed__0 = (const lean_object*)&l_Array_zip___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zip___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_unzip___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instLT___redArg();
LEAN_EXPORT lean_object* l_Array_instLT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instLT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instLE___redArg();
LEAN_EXPORT lean_object* l_Array_instLE___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_instLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_leftpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_rightpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Array_reduceOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_reduceOption___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_reduceOption___redArg___closed__0 = (const lean_object*)&l_Array_reduceOption___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_reduceOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_eraseReps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_getEvenElems(lean_object*, lean_object*);
static const lean_ctor_object l_Array_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__11_value)}};
static const lean_object* l_Array_repr___redArg___closed__0 = (const lean_object*)&l_Array_repr___redArg___closed__0_value;
static const lean_ctor_object l_Array_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___redArg___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___redArg___closed__1 = (const lean_object*)&l_Array_repr___redArg___closed__1_value;
static lean_once_cell_t l_Array_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___redArg___closed__2;
static lean_once_cell_t l_Array_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___redArg___closed__3;
static const lean_ctor_object l_Array_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__4_value)}};
static const lean_object* l_Array_repr___redArg___closed__4 = (const lean_object*)&l_Array_repr___redArg___closed__4_value;
static const lean_ctor_object l_Array_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_term_x23_x5b___x2c_x5d___closed__17_value)}};
static const lean_object* l_Array_repr___redArg___closed__5 = (const lean_object*)&l_Array_repr___redArg___closed__5_value;
static const lean_string_object l_Array_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___redArg___closed__6 = (const lean_object*)&l_Array_repr___redArg___closed__6_value;
static const lean_ctor_object l_Array_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___redArg___closed__6_value)}};
static const lean_object* l_Array_repr___redArg___closed__7 = (const lean_object*)&l_Array_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_instRepr(lean_object*, lean_object*);
static lean_object* _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__5));
v___x_58_ = l_String_toRawSubstring_x27(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Array_mkArray0___redArg();
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(lean_object* v_x_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_81_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__1));
lean_inc(v_x_78_);
v___x_82_ = l_Lean_Syntax_isOfKind(v_x_78_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec(v_x_78_);
v___x_83_ = lean_box(1);
v___x_84_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v_a_80_);
return v___x_84_;
}
else
{
lean_object* v_quotContext_85_; lean_object* v_currMacroScope_86_; lean_object* v_ref_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_quotContext_85_ = lean_ctor_get(v_a_79_, 1);
v_currMacroScope_86_ = lean_ctor_get(v_a_79_, 2);
v_ref_87_ = lean_ctor_get(v_a_79_, 5);
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = l_Lean_Syntax_getArg(v_x_78_, v___x_88_);
lean_dec(v_x_78_);
v___x_90_ = l_Lean_Syntax_getArgs(v___x_89_);
lean_dec(v___x_89_);
v___x_91_ = 0;
v___x_92_ = l_Lean_SourceInfo_fromRef(v_ref_87_, v___x_91_);
v___x_93_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__4));
v___x_94_ = lean_obj_once(&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6, &l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6_once, _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__6);
v___x_95_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__9));
lean_inc(v_currMacroScope_86_);
lean_inc(v_quotContext_85_);
v___x_96_ = l_Lean_addMacroScope(v_quotContext_85_, v___x_95_, v_currMacroScope_86_);
v___x_97_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__11));
lean_inc_n(v___x_92_, 6);
v___x_98_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_98_, 0, v___x_92_);
lean_ctor_set(v___x_98_, 1, v___x_94_);
lean_ctor_set(v___x_98_, 2, v___x_96_);
lean_ctor_set(v___x_98_, 3, v___x_97_);
v___x_99_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13));
v___x_100_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__15));
v___x_101_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__16));
v___x_102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_92_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_obj_once(&l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17, &l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17_once, _init_l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__17);
v___x_104_ = l_Array_appendCore___redArg(v___x_103_, v___x_90_);
lean_dec_ref(v___x_90_);
v___x_105_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_105_, 0, v___x_92_);
lean_ctor_set(v___x_105_, 1, v___x_99_);
lean_ctor_set(v___x_105_, 2, v___x_104_);
v___x_106_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__17));
v___x_107_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_92_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = l_Lean_Syntax_node3(v___x_92_, v___x_100_, v___x_102_, v___x_105_, v___x_107_);
v___x_109_ = l_Lean_Syntax_node1(v___x_92_, v___x_99_, v___x_108_);
v___x_110_ = l_Lean_Syntax_node2(v___x_92_, v___x_93_, v___x_98_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_80_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___boxed(lean_object* v_x_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1(v_x_112_, v_a_113_, v_a_114_);
lean_dec_ref(v_a_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter___redArg(lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_h__1_118_, lean_object* v_h__2_119_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
lean_object* v___x_120_; 
lean_dec(v_h__2_119_);
v___x_120_ = lean_apply_1(v_h__1_118_, v_x_117_);
return v___x_120_;
}
else
{
lean_object* v_head_121_; lean_object* v_tail_122_; lean_object* v___x_123_; 
lean_dec(v_h__1_118_);
v_head_121_ = lean_ctor_get(v_x_116_, 0);
lean_inc(v_head_121_);
v_tail_122_ = lean_ctor_get(v_x_116_, 1);
lean_inc(v_tail_122_);
lean_dec_ref_known(v_x_116_, 2);
v___x_123_ = lean_apply_3(v_h__2_119_, v_head_121_, v_tail_122_, v_x_117_);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__List_toArrayAux_match__1_splitter(lean_object* v_00_u03b1_124_, lean_object* v_motive_125_, lean_object* v_x_126_, lean_object* v_x_127_, lean_object* v_h__1_128_, lean_object* v_h__2_129_){
_start:
{
if (lean_obj_tag(v_x_126_) == 0)
{
lean_object* v___x_130_; 
lean_dec(v_h__2_129_);
v___x_130_ = lean_apply_1(v_h__1_128_, v_x_127_);
return v___x_130_;
}
else
{
lean_object* v_head_131_; lean_object* v_tail_132_; lean_object* v___x_133_; 
lean_dec(v_h__1_128_);
v_head_131_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_head_131_);
v_tail_132_ = lean_ctor_get(v_x_126_, 1);
lean_inc(v_tail_132_);
lean_dec_ref_known(v_x_126_, 2);
v___x_133_ = lean_apply_3(v_h__2_129_, v_head_131_, v_tail_132_, v_x_127_);
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instMembership___redArg(){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lean_box(0);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Array_instMembership___redArg___boxed(lean_object* v___dummy_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Array_instMembership___redArg();
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Array_instMembership(lean_object* v_00_u03b1_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = lean_box(0);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter___redArg(lean_object* v_x_140_, lean_object* v_h__1_141_, lean_object* v_h__2_142_){
_start:
{
if (lean_obj_tag(v_x_140_) == 0)
{
lean_object* v___x_143_; lean_object* v___x_144_; 
lean_dec(v_h__1_141_);
v___x_143_ = lean_box(0);
v___x_144_ = lean_apply_1(v_h__2_142_, v___x_143_);
return v___x_144_;
}
else
{
lean_object* v_val_145_; lean_object* v___x_146_; 
lean_dec(v_h__2_142_);
v_val_145_ = lean_ctor_get(v_x_140_, 0);
lean_inc(v_val_145_);
lean_dec_ref_known(v_x_140_, 1);
v___x_146_ = lean_apply_1(v_h__1_141_, v_val_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__GetElem_x3f_match__1_splitter(lean_object* v_elem_147_, lean_object* v_motive_148_, lean_object* v_x_149_, lean_object* v_h__1_150_, lean_object* v_h__2_151_){
_start:
{
if (lean_obj_tag(v_x_149_) == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; 
lean_dec(v_h__1_150_);
v___x_152_ = lean_box(0);
v___x_153_ = lean_apply_1(v_h__2_151_, v___x_152_);
return v___x_153_;
}
else
{
lean_object* v_val_154_; lean_object* v___x_155_; 
lean_dec(v_h__2_151_);
v_val_154_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_val_154_);
lean_dec_ref_known(v_x_149_, 1);
v___x_155_ = lean_apply_1(v_h__1_150_, v_val_154_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l_Array_usize___boxed(lean_object* v_00_u03b1_158_, lean_object* v_xs_159_){
_start:
{
size_t v_res_160_; lean_object* v_r_161_; 
v_res_160_ = lean_array_size(v_xs_159_);
lean_dec_ref(v_xs_159_);
v_r_161_ = lean_box_usize(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT lean_object* l_Array_uget___boxed(lean_object* v_00_u03b1_166_, lean_object* v_xs_167_, lean_object* v_i_168_, lean_object* v_h_169_){
_start:
{
size_t v_i_boxed_170_; lean_object* v_res_171_; 
v_i_boxed_170_ = lean_unbox_usize(v_i_168_);
lean_dec(v_i_168_);
v_res_171_ = lean_array_uget(v_xs_167_, v_i_boxed_170_);
lean_dec_ref(v_xs_167_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Array_ugetBorrowed___boxed(lean_object* v_00_u03b1_176_, lean_object* v_xs_177_, lean_object* v_i_178_, lean_object* v_h_179_){
_start:
{
size_t v_i_boxed_180_; lean_object* v_res_181_; 
v_i_boxed_180_ = lean_unbox_usize(v_i_178_);
lean_dec(v_i_178_);
v_res_181_ = lean_array_uget_borrowed(v_xs_177_, v_i_boxed_180_);
lean_dec_ref(v_xs_177_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Array_uset___boxed(lean_object* v_00_u03b1_187_, lean_object* v_xs_188_, lean_object* v_i_189_, lean_object* v_v_190_, lean_object* v_h_191_){
_start:
{
size_t v_i_boxed_192_; lean_object* v_res_193_; 
v_i_boxed_192_ = lean_unbox_usize(v_i_189_);
lean_dec(v_i_189_);
v_res_193_ = lean_array_uset(v_xs_188_, v_i_boxed_192_, v_v_190_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Array_pop___boxed(lean_object* v_00_u03b1_196_, lean_object* v_xs_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = lean_array_pop(v_xs_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Array_markLinear___boxed(lean_object* v_00_u03b1_201_, lean_object* v_xs_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = lean_array_mark_linear(v_xs_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Array_propagateMark___boxed(lean_object* v_00_u03b1_208_, lean_object* v_00_u03b2_209_, lean_object* v_xs_210_, lean_object* v_ys_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = lean_array_propagate_mark(v_xs_210_, v_ys_211_);
lean_dec_ref(v_xs_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Array_replicate___boxed(lean_object* v_00_u03b1_216_, lean_object* v_n_217_, lean_object* v_v_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = lean_mk_array(v_n_217_, v_v_218_);
return v_res_219_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__9(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(l_Array_swap___auto__1___closed__8));
v___x_240_ = l_Lean_mkAtom(v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__10(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_obj_once(&l_Array_swap___auto__1___closed__9, &l_Array_swap___auto__1___closed__9_once, _init_l_Array_swap___auto__1___closed__9);
v___x_242_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_243_ = lean_array_push(v___x_242_, v___x_241_);
return v___x_243_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__11(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_244_ = lean_obj_once(&l_Array_swap___auto__1___closed__10, &l_Array_swap___auto__1___closed__10_once, _init_l_Array_swap___auto__1___closed__10);
v___x_245_ = ((lean_object*)(l_Array_swap___auto__1___closed__7));
v___x_246_ = lean_box(2);
v___x_247_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___x_245_);
lean_ctor_set(v___x_247_, 2, v___x_244_);
return v___x_247_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__12(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = lean_obj_once(&l_Array_swap___auto__1___closed__11, &l_Array_swap___auto__1___closed__11_once, _init_l_Array_swap___auto__1___closed__11);
v___x_249_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_250_ = lean_array_push(v___x_249_, v___x_248_);
return v___x_250_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__13(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_251_ = lean_obj_once(&l_Array_swap___auto__1___closed__12, &l_Array_swap___auto__1___closed__12_once, _init_l_Array_swap___auto__1___closed__12);
v___x_252_ = ((lean_object*)(l___aux__Init__Data__Array__Basic______macroRules__term_x23_x5b___x2c_x5d__1___closed__13));
v___x_253_ = lean_box(2);
v___x_254_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___x_252_);
lean_ctor_set(v___x_254_, 2, v___x_251_);
return v___x_254_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__14(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_obj_once(&l_Array_swap___auto__1___closed__13, &l_Array_swap___auto__1___closed__13_once, _init_l_Array_swap___auto__1___closed__13);
v___x_256_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_257_ = lean_array_push(v___x_256_, v___x_255_);
return v___x_257_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__15(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_258_ = lean_obj_once(&l_Array_swap___auto__1___closed__14, &l_Array_swap___auto__1___closed__14_once, _init_l_Array_swap___auto__1___closed__14);
v___x_259_ = ((lean_object*)(l_Array_swap___auto__1___closed__5));
v___x_260_ = lean_box(2);
v___x_261_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___x_259_);
lean_ctor_set(v___x_261_, 2, v___x_258_);
return v___x_261_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__16(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_262_ = lean_obj_once(&l_Array_swap___auto__1___closed__15, &l_Array_swap___auto__1___closed__15_once, _init_l_Array_swap___auto__1___closed__15);
v___x_263_ = ((lean_object*)(l_Array_swap___auto__1___closed__3));
v___x_264_ = lean_array_push(v___x_263_, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_l_Array_swap___auto__1___closed__17(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_265_ = lean_obj_once(&l_Array_swap___auto__1___closed__16, &l_Array_swap___auto__1___closed__16_once, _init_l_Array_swap___auto__1___closed__16);
v___x_266_ = ((lean_object*)(l_Array_swap___auto__1___closed__2));
v___x_267_ = lean_box(2);
v___x_268_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v___x_266_);
lean_ctor_set(v___x_268_, 2, v___x_265_);
return v___x_268_;
}
}
static lean_object* _init_l_Array_swap___auto__1(void){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_269_;
}
}
static lean_object* _init_l_Array_swap___auto__3(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Array_swap___boxed(lean_object* v_00_u03b1_277_, lean_object* v_xs_278_, lean_object* v_i_279_, lean_object* v_j_280_, lean_object* v_hi_281_, lean_object* v_hj_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = lean_array_fswap(v_xs_278_, v_i_279_, v_j_280_);
lean_dec(v_j_280_);
lean_dec(v_i_279_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Array_swapIfInBounds___boxed(lean_object* v_00_u03b1_288_, lean_object* v_xs_289_, lean_object* v_i_290_, lean_object* v_j_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = lean_array_swap(v_xs_289_, v_i_290_, v_j_291_);
lean_dec(v_j_291_);
lean_dec(v_i_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(lean_object* v_xs_293_, size_t v_i_294_, lean_object* v_h_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_array_uget_borrowed(v_xs_293_, v_i_294_);
lean_inc(v___x_296_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0___boxed(lean_object* v_xs_297_, lean_object* v_i_298_, lean_object* v_h_299_){
_start:
{
size_t v_i_boxed_300_; lean_object* v_res_301_; 
v_i_boxed_300_ = lean_unbox_usize(v_i_298_);
lean_dec(v_i_298_);
v_res_301_ = l_Array_instGetElemUSizeLtNatToNatSize___redArg___lam__0(v_xs_297_, v_i_boxed_300_, v_h_299_);
lean_dec_ref(v_xs_297_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg(){
_start:
{
lean_object* v___f_304_; 
v___f_304_ = ((lean_object*)(l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0));
return v___f_304_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize___redArg___boxed(lean_object* v___dummy_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Array_instGetElemUSizeLtNatToNatSize___redArg();
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Array_instGetElemUSizeLtNatToNatSize(lean_object* v_00_u03b1_307_){
_start:
{
lean_object* v___f_308_; 
v___f_308_ = ((lean_object*)(l_Array_instGetElemUSizeLtNatToNatSize___redArg___closed__0));
return v___f_308_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection___redArg___boxed(lean_object* v___dummy_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Array_instEmptyCollection___redArg();
return v_res_314_;
}
}
static lean_object* _init_l_Array_instEmptyCollection___closed__0(void){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Array_instEmptyCollection___redArg();
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Array_instEmptyCollection(lean_object* v_00_u03b1_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Array_instEmptyCollection___closed__0, &l_Array_instEmptyCollection___closed__0_once, _init_l_Array_instEmptyCollection___closed__0);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg(){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited___redArg___boxed(lean_object* v___dummy_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Array_instInhabited___redArg();
return v_res_321_;
}
}
static lean_object* _init_l_Array_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Array_instInhabited___redArg();
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Array_instInhabited(lean_object* v_00_u03b1_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l_Array_instInhabited___closed__0, &l_Array_instInhabited___closed__0_once, _init_l_Array_instInhabited___closed__0);
return v___x_324_;
}
}
LEAN_EXPORT uint8_t l_Array_isEmpty___redArg(lean_object* v_xs_325_){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_326_ = lean_array_get_size(v_xs_325_);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_nat_dec_eq(v___x_326_, v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Array_isEmpty___redArg___boxed(lean_object* v_xs_329_){
_start:
{
uint8_t v_res_330_; lean_object* v_r_331_; 
v_res_330_ = l_Array_isEmpty___redArg(v_xs_329_);
lean_dec_ref(v_xs_329_);
v_r_331_ = lean_box(v_res_330_);
return v_r_331_;
}
}
LEAN_EXPORT uint8_t l_Array_isEmpty(lean_object* v_00_u03b1_332_, lean_object* v_xs_333_){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_334_ = lean_array_get_size(v_xs_333_);
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = lean_nat_dec_eq(v___x_334_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Array_isEmpty___boxed(lean_object* v_00_u03b1_337_, lean_object* v_xs_338_){
_start:
{
uint8_t v_res_339_; lean_object* v_r_340_; 
v_res_339_ = l_Array_isEmpty(v_00_u03b1_337_, v_xs_338_);
lean_dec_ref(v_xs_338_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___redArg(lean_object* v_xs_341_, lean_object* v_ys_342_, lean_object* v_p_343_, lean_object* v_x_344_){
_start:
{
lean_object* v_zero_345_; uint8_t v_isZero_346_; 
v_zero_345_ = lean_unsigned_to_nat(0u);
v_isZero_346_ = lean_nat_dec_eq(v_x_344_, v_zero_345_);
if (v_isZero_346_ == 1)
{
lean_dec(v_x_344_);
lean_dec_ref(v_p_343_);
return v_isZero_346_;
}
else
{
lean_object* v_one_347_; lean_object* v_n_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v_one_347_ = lean_unsigned_to_nat(1u);
v_n_348_ = lean_nat_sub(v_x_344_, v_one_347_);
lean_dec(v_x_344_);
v___x_349_ = lean_array_fget_borrowed(v_xs_341_, v_n_348_);
v___x_350_ = lean_array_fget_borrowed(v_ys_342_, v_n_348_);
lean_inc_ref(v_p_343_);
lean_inc(v___x_350_);
lean_inc(v___x_349_);
v___x_351_ = lean_apply_2(v_p_343_, v___x_349_, v___x_350_);
v___x_352_ = lean_unbox(v___x_351_);
if (v___x_352_ == 0)
{
uint8_t v___x_353_; 
lean_dec(v_n_348_);
lean_dec_ref(v_p_343_);
v___x_353_ = lean_unbox(v___x_351_);
return v___x_353_;
}
else
{
v_x_344_ = v_n_348_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___redArg___boxed(lean_object* v_xs_355_, lean_object* v_ys_356_, lean_object* v_p_357_, lean_object* v_x_358_){
_start:
{
uint8_t v_res_359_; lean_object* v_r_360_; 
v_res_359_ = l_Array_isEqvAux___redArg(v_xs_355_, v_ys_356_, v_p_357_, v_x_358_);
lean_dec_ref(v_ys_356_);
lean_dec_ref(v_xs_355_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux(lean_object* v_00_u03b1_361_, lean_object* v_xs_362_, lean_object* v_ys_363_, lean_object* v_hsz_364_, lean_object* v_p_365_, lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
uint8_t v___x_368_; 
v___x_368_ = l_Array_isEqvAux___redArg(v_xs_362_, v_ys_363_, v_p_365_, v_x_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___boxed(lean_object* v_00_u03b1_369_, lean_object* v_xs_370_, lean_object* v_ys_371_, lean_object* v_hsz_372_, lean_object* v_p_373_, lean_object* v_x_374_, lean_object* v_x_375_){
_start:
{
uint8_t v_res_376_; lean_object* v_r_377_; 
v_res_376_ = l_Array_isEqvAux(v_00_u03b1_369_, v_xs_370_, v_ys_371_, v_hsz_372_, v_p_373_, v_x_374_, v_x_375_);
lean_dec_ref(v_ys_371_);
lean_dec_ref(v_xs_370_);
v_r_377_ = lean_box(v_res_376_);
return v_r_377_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqv___redArg(lean_object* v_xs_378_, lean_object* v_ys_379_, lean_object* v_p_380_){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_381_ = lean_array_get_size(v_xs_378_);
v___x_382_ = lean_array_get_size(v_ys_379_);
v___x_383_ = lean_nat_dec_eq(v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec_ref(v_p_380_);
return v___x_383_;
}
else
{
uint8_t v___x_384_; 
v___x_384_ = l_Array_isEqvAux___redArg(v_xs_378_, v_ys_379_, v_p_380_, v___x_381_);
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqv___redArg___boxed(lean_object* v_xs_385_, lean_object* v_ys_386_, lean_object* v_p_387_){
_start:
{
uint8_t v_res_388_; lean_object* v_r_389_; 
v_res_388_ = l_Array_isEqv___redArg(v_xs_385_, v_ys_386_, v_p_387_);
lean_dec_ref(v_ys_386_);
lean_dec_ref(v_xs_385_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqv(lean_object* v_00_u03b1_390_, lean_object* v_xs_391_, lean_object* v_ys_392_, lean_object* v_p_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_394_ = lean_array_get_size(v_xs_391_);
v___x_395_ = lean_array_get_size(v_ys_392_);
v___x_396_ = lean_nat_dec_eq(v___x_394_, v___x_395_);
if (v___x_396_ == 0)
{
lean_dec_ref(v_p_393_);
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = l_Array_isEqvAux___redArg(v_xs_391_, v_ys_392_, v_p_393_, v___x_394_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqv___boxed(lean_object* v_00_u03b1_398_, lean_object* v_xs_399_, lean_object* v_ys_400_, lean_object* v_p_401_){
_start:
{
uint8_t v_res_402_; lean_object* v_r_403_; 
v_res_402_ = l_Array_isEqv(v_00_u03b1_398_, v_xs_399_, v_ys_400_, v_p_401_);
lean_dec_ref(v_ys_400_);
lean_dec_ref(v_xs_399_);
v_r_403_ = lean_box(v_res_402_);
return v_r_403_;
}
}
LEAN_EXPORT uint8_t l_Array_instBEq___redArg___lam__0(lean_object* v_inst_404_, lean_object* v_xs_405_, lean_object* v_ys_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_407_ = lean_array_get_size(v_xs_405_);
v___x_408_ = lean_array_get_size(v_ys_406_);
v___x_409_ = lean_nat_dec_eq(v___x_407_, v___x_408_);
if (v___x_409_ == 0)
{
lean_dec_ref(v_inst_404_);
return v___x_409_;
}
else
{
uint8_t v___x_410_; 
v___x_410_ = l_Array_isEqvAux___redArg(v_xs_405_, v_ys_406_, v_inst_404_, v___x_407_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instBEq___redArg___lam__0___boxed(lean_object* v_inst_411_, lean_object* v_xs_412_, lean_object* v_ys_413_){
_start:
{
uint8_t v_res_414_; lean_object* v_r_415_; 
v_res_414_ = l_Array_instBEq___redArg___lam__0(v_inst_411_, v_xs_412_, v_ys_413_);
lean_dec_ref(v_ys_413_);
lean_dec_ref(v_xs_412_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT lean_object* l_Array_instBEq___redArg(lean_object* v_inst_416_){
_start:
{
lean_object* v___f_417_; 
v___f_417_ = lean_alloc_closure((void*)(l_Array_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_417_, 0, v_inst_416_);
return v___f_417_;
}
}
LEAN_EXPORT lean_object* l_Array_instBEq(lean_object* v_00_u03b1_418_, lean_object* v_inst_419_){
_start:
{
lean_object* v___f_420_; 
v___f_420_ = lean_alloc_closure((void*)(l_Array_instBEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_420_, 0, v_inst_419_);
return v___f_420_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg(lean_object* v_n_421_, lean_object* v_f_422_, lean_object* v_acc_423_, lean_object* v_i_424_){
_start:
{
lean_object* v_zero_425_; uint8_t v_isZero_426_; 
v_zero_425_ = lean_unsigned_to_nat(0u);
v_isZero_426_ = lean_nat_dec_eq(v_i_424_, v_zero_425_);
if (v_isZero_426_ == 1)
{
lean_dec(v_i_424_);
lean_dec(v_f_422_);
return v_acc_423_;
}
else
{
lean_object* v_one_427_; lean_object* v_n_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v_one_427_ = lean_unsigned_to_nat(1u);
v_n_428_ = lean_nat_sub(v_i_424_, v_one_427_);
lean_dec(v_i_424_);
v___x_429_ = lean_nat_sub(v_n_421_, v_n_428_);
v___x_430_ = lean_nat_sub(v___x_429_, v_one_427_);
lean_dec(v___x_429_);
lean_inc(v_f_422_);
v___x_431_ = lean_apply_1(v_f_422_, v___x_430_);
v___x_432_ = lean_array_push(v_acc_423_, v___x_431_);
v_acc_423_ = v___x_432_;
v_i_424_ = v_n_428_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___redArg___boxed(lean_object* v_n_434_, lean_object* v_f_435_, lean_object* v_acc_436_, lean_object* v_i_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Array_ofFn_go___redArg(v_n_434_, v_f_435_, v_acc_436_, v_i_437_);
lean_dec(v_n_434_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go(lean_object* v_00_u03b1_439_, lean_object* v_n_440_, lean_object* v_f_441_, lean_object* v_acc_442_, lean_object* v_i_443_, lean_object* v_a_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Array_ofFn_go___redArg(v_n_440_, v_f_441_, v_acc_442_, v_i_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn_go___boxed(lean_object* v_00_u03b1_446_, lean_object* v_n_447_, lean_object* v_f_448_, lean_object* v_acc_449_, lean_object* v_i_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Array_ofFn_go(v_00_u03b1_446_, v_n_447_, v_f_448_, v_acc_449_, v_i_450_, v_a_451_);
lean_dec(v_n_447_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn___redArg(lean_object* v_n_453_, lean_object* v_f_454_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_mk_empty_array_with_capacity(v_n_453_);
lean_inc(v_n_453_);
v___x_456_ = l_Array_ofFn_go___redArg(v_n_453_, v_f_454_, v___x_455_, v_n_453_);
lean_dec(v_n_453_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Array_ofFn(lean_object* v_00_u03b1_457_, lean_object* v_n_458_, lean_object* v_f_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Array_ofFn___redArg(v_n_458_, v_f_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Array_range___lam__0(lean_object* v_i_461_){
_start:
{
lean_inc(v_i_461_);
return v_i_461_;
}
}
LEAN_EXPORT lean_object* l_Array_range___lam__0___boxed(lean_object* v_i_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Array_range___lam__0(v_i_462_);
lean_dec(v_i_462_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Array_range(lean_object* v_n_465_){
_start:
{
lean_object* v___f_466_; lean_object* v___x_467_; 
v___f_466_ = ((lean_object*)(l_Array_range___closed__0));
v___x_467_ = l_Array_ofFn___redArg(v_n_465_, v___f_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0(lean_object* v_step_468_, lean_object* v_start_469_, lean_object* v_i_470_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_nat_mul(v_step_468_, v_i_470_);
v___x_472_ = lean_nat_add(v_start_469_, v___x_471_);
lean_dec(v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27___lam__0___boxed(lean_object* v_step_473_, lean_object* v_start_474_, lean_object* v_i_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Array_range_x27___lam__0(v_step_473_, v_start_474_, v_i_475_);
lean_dec(v_i_475_);
lean_dec(v_start_474_);
lean_dec(v_step_473_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Array_range_x27(lean_object* v_start_477_, lean_object* v_size_478_, lean_object* v_step_479_){
_start:
{
lean_object* v___f_480_; lean_object* v___x_481_; 
v___f_480_ = lean_alloc_closure((void*)(l_Array_range_x27___lam__0___boxed), 3, 2);
lean_closure_set(v___f_480_, 0, v_step_479_);
lean_closure_set(v___f_480_, 1, v_start_477_);
v___x_481_ = l_Array_ofFn___redArg(v_size_478_, v___f_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Array_singleton___redArg(lean_object* v_v_482_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = lean_unsigned_to_nat(1u);
v___x_484_ = lean_mk_empty_array_with_capacity(v___x_483_);
v___x_485_ = lean_array_push(v___x_484_, v_v_482_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Array_singleton(lean_object* v_00_u03b1_486_, lean_object* v_v_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = lean_mk_empty_array_with_capacity(v___x_488_);
v___x_490_ = lean_array_push(v___x_489_, v_v_487_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___redArg(lean_object* v_inst_491_, lean_object* v_xs_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_493_ = lean_array_get_size(v_xs_492_);
v___x_494_ = lean_unsigned_to_nat(1u);
v___x_495_ = lean_nat_sub(v___x_493_, v___x_494_);
v___x_496_ = lean_array_get_borrowed(v_inst_491_, v_xs_492_, v___x_495_);
lean_dec(v___x_495_);
lean_inc(v___x_496_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___redArg___boxed(lean_object* v_inst_497_, lean_object* v_xs_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Array_back_x21___redArg(v_inst_497_, v_xs_498_);
lean_dec_ref(v_xs_498_);
lean_dec(v_inst_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21(lean_object* v_00_u03b1_500_, lean_object* v_inst_501_, lean_object* v_xs_502_){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_503_ = lean_array_get_size(v_xs_502_);
v___x_504_ = lean_unsigned_to_nat(1u);
v___x_505_ = lean_nat_sub(v___x_503_, v___x_504_);
v___x_506_ = lean_array_get_borrowed(v_inst_501_, v_xs_502_, v___x_505_);
lean_dec(v___x_505_);
lean_inc(v___x_506_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x21___boxed(lean_object* v_00_u03b1_507_, lean_object* v_inst_508_, lean_object* v_xs_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Array_back_x21(v_00_u03b1_507_, v_inst_508_, v_xs_509_);
lean_dec_ref(v_xs_509_);
lean_dec(v_inst_508_);
return v_res_510_;
}
}
static lean_object* _init_l_Array_back___auto__1(void){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Array_back___redArg(lean_object* v_xs_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_513_ = lean_array_get_size(v_xs_512_);
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_sub(v___x_513_, v___x_514_);
v___x_516_ = lean_array_fget_borrowed(v_xs_512_, v___x_515_);
lean_dec(v___x_515_);
lean_inc(v___x_516_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Array_back___redArg___boxed(lean_object* v_xs_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Array_back___redArg(v_xs_517_);
lean_dec_ref(v_xs_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Array_back(lean_object* v_00_u03b1_519_, lean_object* v_xs_520_, lean_object* v_h_521_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_522_ = lean_array_get_size(v_xs_520_);
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_nat_sub(v___x_522_, v___x_523_);
v___x_525_ = lean_array_fget_borrowed(v_xs_520_, v___x_524_);
lean_dec(v___x_524_);
lean_inc(v___x_525_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Array_back___boxed(lean_object* v_00_u03b1_526_, lean_object* v_xs_527_, lean_object* v_h_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Array_back(v_00_u03b1_526_, v_xs_527_, v_h_528_);
lean_dec_ref(v_xs_527_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg(lean_object* v_xs_530_){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_531_ = lean_array_get_size(v_xs_530_);
v___x_532_ = lean_unsigned_to_nat(1u);
v___x_533_ = lean_nat_sub(v___x_531_, v___x_532_);
v___x_534_ = lean_nat_dec_lt(v___x_533_, v___x_531_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
lean_dec(v___x_533_);
v___x_535_ = lean_box(0);
return v___x_535_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_array_fget_borrowed(v_xs_530_, v___x_533_);
lean_dec(v___x_533_);
lean_inc(v___x_536_);
v___x_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___redArg___boxed(lean_object* v_xs_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Array_back_x3f___redArg(v_xs_538_);
lean_dec_ref(v_xs_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f(lean_object* v_00_u03b1_540_, lean_object* v_xs_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_542_ = lean_array_get_size(v_xs_541_);
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_sub(v___x_542_, v___x_543_);
v___x_545_ = lean_nat_dec_lt(v___x_544_, v___x_542_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
lean_dec(v___x_544_);
v___x_546_ = lean_box(0);
return v___x_546_;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_array_fget_borrowed(v_xs_541_, v___x_544_);
lean_dec(v___x_544_);
lean_inc(v___x_547_);
v___x_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Array_back_x3f___boxed(lean_object* v_00_u03b1_549_, lean_object* v_xs_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Array_back_x3f(v_00_u03b1_549_, v_xs_550_);
lean_dec_ref(v_xs_550_);
return v_res_551_;
}
}
static lean_object* _init_l_Array_swapAt___auto__1(void){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___redArg(lean_object* v_xs_553_, lean_object* v_i_554_, lean_object* v_v_555_){
_start:
{
lean_object* v_e_556_; lean_object* v_xs_x27_557_; lean_object* v___x_558_; 
v_e_556_ = lean_array_fget(v_xs_553_, v_i_554_);
v_xs_x27_557_ = lean_array_fset(v_xs_553_, v_i_554_, v_v_555_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v_e_556_);
lean_ctor_set(v___x_558_, 1, v_xs_x27_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___redArg___boxed(lean_object* v_xs_559_, lean_object* v_i_560_, lean_object* v_v_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Array_swapAt___redArg(v_xs_559_, v_i_560_, v_v_561_);
lean_dec(v_i_560_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt(lean_object* v_00_u03b1_563_, lean_object* v_xs_564_, lean_object* v_i_565_, lean_object* v_v_566_, lean_object* v_hi_567_){
_start:
{
lean_object* v_e_568_; lean_object* v_xs_x27_569_; lean_object* v___x_570_; 
v_e_568_ = lean_array_fget(v_xs_564_, v_i_565_);
v_xs_x27_569_ = lean_array_fset(v_xs_564_, v_i_565_, v_v_566_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_e_568_);
lean_ctor_set(v___x_570_, 1, v_xs_x27_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt___boxed(lean_object* v_00_u03b1_571_, lean_object* v_xs_572_, lean_object* v_i_573_, lean_object* v_v_574_, lean_object* v_hi_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Array_swapAt(v_00_u03b1_571_, v_xs_572_, v_i_573_, v_v_574_, v_hi_575_);
lean_dec(v_i_573_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Array_swapAt_x21___redArg(lean_object* v_xs_581_, lean_object* v_i_582_, lean_object* v_v_583_){
_start:
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_array_get_size(v_xs_581_);
v___x_585_ = lean_nat_dec_lt(v_i_582_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v_this_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_this_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_586_, 0, v_v_583_);
lean_ctor_set(v_this_586_, 1, v_xs_581_);
v___x_587_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_588_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__1));
v___x_589_ = lean_unsigned_to_nat(463u);
v___x_590_ = lean_unsigned_to_nat(4u);
v___x_591_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__2));
v___x_592_ = l_Nat_reprFast(v_i_582_);
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
lean_dec_ref(v___x_592_);
v___x_594_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__3));
v___x_595_ = lean_string_append(v___x_593_, v___x_594_);
v___x_596_ = l_mkPanicMessageWithDecl(v___x_587_, v___x_588_, v___x_589_, v___x_590_, v___x_595_);
lean_dec_ref(v___x_595_);
v___x_597_ = l_panic___redArg(v_this_586_, v___x_596_);
lean_dec_ref_known(v_this_586_, 2);
return v___x_597_;
}
else
{
lean_object* v_e_598_; lean_object* v_xs_x27_599_; lean_object* v___x_600_; 
v_e_598_ = lean_array_fget(v_xs_581_, v_i_582_);
v_xs_x27_599_ = lean_array_fset(v_xs_581_, v_i_582_, v_v_583_);
lean_dec(v_i_582_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v_e_598_);
lean_ctor_set(v___x_600_, 1, v_xs_x27_599_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Array_swapAt_x21(lean_object* v_00_u03b1_601_, lean_object* v_xs_602_, lean_object* v_i_603_, lean_object* v_v_604_){
_start:
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = lean_array_get_size(v_xs_602_);
v___x_606_ = lean_nat_dec_lt(v_i_603_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v_this_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_this_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_this_607_, 0, v_v_604_);
lean_ctor_set(v_this_607_, 1, v_xs_602_);
v___x_608_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_609_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__1));
v___x_610_ = lean_unsigned_to_nat(463u);
v___x_611_ = lean_unsigned_to_nat(4u);
v___x_612_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__2));
v___x_613_ = l_Nat_reprFast(v_i_603_);
v___x_614_ = lean_string_append(v___x_612_, v___x_613_);
lean_dec_ref(v___x_613_);
v___x_615_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__3));
v___x_616_ = lean_string_append(v___x_614_, v___x_615_);
v___x_617_ = l_mkPanicMessageWithDecl(v___x_608_, v___x_609_, v___x_610_, v___x_611_, v___x_616_);
lean_dec_ref(v___x_616_);
v___x_618_ = l_panic___redArg(v_this_607_, v___x_617_);
lean_dec_ref_known(v_this_607_, 2);
return v___x_618_;
}
else
{
lean_object* v_e_619_; lean_object* v_xs_x27_620_; lean_object* v___x_621_; 
v_e_619_ = lean_array_fget(v_xs_602_, v_i_603_);
v_xs_x27_620_ = lean_array_fset(v_xs_602_, v_i_603_, v_v_604_);
lean_dec(v_i_603_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v_e_619_);
lean_ctor_set(v___x_621_, 1, v_xs_x27_620_);
return v___x_621_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(lean_object* v_x_622_, lean_object* v_x_623_){
_start:
{
lean_object* v_zero_624_; uint8_t v_isZero_625_; 
v_zero_624_ = lean_unsigned_to_nat(0u);
v_isZero_625_ = lean_nat_dec_eq(v_x_622_, v_zero_624_);
if (v_isZero_625_ == 1)
{
lean_dec(v_x_622_);
return v_x_623_;
}
else
{
lean_object* v_one_626_; lean_object* v_n_627_; lean_object* v___x_628_; 
v_one_626_ = lean_unsigned_to_nat(1u);
v_n_627_ = lean_nat_sub(v_x_622_, v_one_626_);
lean_dec(v_x_622_);
v___x_628_ = lean_array_pop(v_x_623_);
v_x_622_ = v_n_627_;
v_x_623_ = v___x_628_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_shrink_loop(lean_object* v_00_u03b1_630_, lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(v_x_631_, v_x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___redArg(lean_object* v_xs_634_, lean_object* v_n_635_){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = lean_array_get_size(v_xs_634_);
v___x_637_ = lean_nat_sub(v___x_636_, v_n_635_);
v___x_638_ = l___private_Init_Data_Array_Basic_0__Array_shrink_loop___redArg(v___x_637_, v_xs_634_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___redArg___boxed(lean_object* v_xs_639_, lean_object* v_n_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Array_shrink___redArg(v_xs_639_, v_n_640_);
lean_dec(v_n_640_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink(lean_object* v_00_u03b1_642_, lean_object* v_xs_643_, lean_object* v_n_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Array_shrink___redArg(v_xs_643_, v_n_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Array_shrink___boxed(lean_object* v_00_u03b1_646_, lean_object* v_xs_647_, lean_object* v_n_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Array_shrink(v_00_u03b1_646_, v_xs_647_, v_n_648_);
lean_dec(v_n_648_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Array_take___redArg(lean_object* v_xs_650_, lean_object* v_i_651_){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_unsigned_to_nat(0u);
v___x_653_ = l_Array_extract___redArg(v_xs_650_, v___x_652_, v_i_651_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Array_take___redArg___boxed(lean_object* v_xs_654_, lean_object* v_i_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Array_take___redArg(v_xs_654_, v_i_655_);
lean_dec_ref(v_xs_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Array_take(lean_object* v_00_u03b1_657_, lean_object* v_xs_658_, lean_object* v_i_659_){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_unsigned_to_nat(0u);
v___x_661_ = l_Array_extract___redArg(v_xs_658_, v___x_660_, v_i_659_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Array_take___boxed(lean_object* v_00_u03b1_662_, lean_object* v_xs_663_, lean_object* v_i_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Array_take(v_00_u03b1_662_, v_xs_663_, v_i_664_);
lean_dec_ref(v_xs_663_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___redArg(lean_object* v_xs_666_, lean_object* v_i_667_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_array_get_size(v_xs_666_);
v___x_669_ = l_Array_extract___redArg(v_xs_666_, v_i_667_, v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___redArg___boxed(lean_object* v_xs_670_, lean_object* v_i_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Array_drop___redArg(v_xs_670_, v_i_671_);
lean_dec_ref(v_xs_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Array_drop(lean_object* v_00_u03b1_673_, lean_object* v_xs_674_, lean_object* v_i_675_){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = lean_array_get_size(v_xs_674_);
v___x_677_ = l_Array_extract___redArg(v_xs_674_, v_i_675_, v___x_676_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Array_drop___boxed(lean_object* v_00_u03b1_678_, lean_object* v_xs_679_, lean_object* v_i_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Array_drop(v_00_u03b1_678_, v_xs_679_, v_i_680_);
lean_dec_ref(v_xs_679_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0(lean_object* v_xs_x27_682_, lean_object* v_i_683_, lean_object* v_toPure_684_, lean_object* v_v_685_){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_array_fset(v_xs_x27_682_, v_i_683_, v_v_685_);
v___x_687_ = lean_apply_2(v_toPure_684_, lean_box(0), v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg___lam__0___boxed(lean_object* v_xs_x27_688_, lean_object* v_i_689_, lean_object* v_toPure_690_, lean_object* v_v_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Array_modifyMUnsafe___redArg___lam__0(v_xs_x27_688_, v_i_689_, v_toPure_690_, v_v_691_);
lean_dec(v_i_689_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe___redArg(lean_object* v_inst_693_, lean_object* v_xs_694_, lean_object* v_i_695_, lean_object* v_f_696_){
_start:
{
lean_object* v_toApplicative_697_; lean_object* v_toBind_698_; lean_object* v_toPure_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v_toApplicative_697_ = lean_ctor_get(v_inst_693_, 0);
lean_inc_ref(v_toApplicative_697_);
v_toBind_698_ = lean_ctor_get(v_inst_693_, 1);
lean_inc(v_toBind_698_);
lean_dec_ref(v_inst_693_);
v_toPure_699_ = lean_ctor_get(v_toApplicative_697_, 1);
lean_inc(v_toPure_699_);
lean_dec_ref(v_toApplicative_697_);
v___x_700_ = lean_array_get_size(v_xs_694_);
v___x_701_ = lean_nat_dec_lt(v_i_695_, v___x_700_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
lean_dec(v_toBind_698_);
lean_dec(v_f_696_);
lean_dec(v_i_695_);
v___x_702_ = lean_apply_2(v_toPure_699_, lean_box(0), v_xs_694_);
return v___x_702_;
}
else
{
lean_object* v_v_703_; lean_object* v___x_704_; lean_object* v_xs_x27_705_; lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_v_703_ = lean_array_fget(v_xs_694_, v_i_695_);
v___x_704_ = lean_box(0);
v_xs_x27_705_ = lean_array_fset(v_xs_694_, v_i_695_, v___x_704_);
v___f_706_ = lean_alloc_closure((void*)(l_Array_modifyMUnsafe___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_706_, 0, v_xs_x27_705_);
lean_closure_set(v___f_706_, 1, v_i_695_);
lean_closure_set(v___f_706_, 2, v_toPure_699_);
v___x_707_ = lean_apply_1(v_f_696_, v_v_703_);
v___x_708_ = lean_apply_4(v_toBind_698_, lean_box(0), lean_box(0), v___x_707_, v___f_706_);
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyMUnsafe(lean_object* v_00_u03b1_709_, lean_object* v_m_710_, lean_object* v_inst_711_, lean_object* v_xs_712_, lean_object* v_i_713_, lean_object* v_f_714_){
_start:
{
lean_object* v_toApplicative_715_; lean_object* v_toBind_716_; lean_object* v_toPure_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v_toApplicative_715_ = lean_ctor_get(v_inst_711_, 0);
lean_inc_ref(v_toApplicative_715_);
v_toBind_716_ = lean_ctor_get(v_inst_711_, 1);
lean_inc(v_toBind_716_);
lean_dec_ref(v_inst_711_);
v_toPure_717_ = lean_ctor_get(v_toApplicative_715_, 1);
lean_inc(v_toPure_717_);
lean_dec_ref(v_toApplicative_715_);
v___x_718_ = lean_array_get_size(v_xs_712_);
v___x_719_ = lean_nat_dec_lt(v_i_713_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; 
lean_dec(v_toBind_716_);
lean_dec(v_f_714_);
lean_dec(v_i_713_);
v___x_720_ = lean_apply_2(v_toPure_717_, lean_box(0), v_xs_712_);
return v___x_720_;
}
else
{
lean_object* v_v_721_; lean_object* v___x_722_; lean_object* v_xs_x27_723_; lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_v_721_ = lean_array_fget(v_xs_712_, v_i_713_);
v___x_722_ = lean_box(0);
v_xs_x27_723_ = lean_array_fset(v_xs_712_, v_i_713_, v___x_722_);
v___f_724_ = lean_alloc_closure((void*)(l_Array_modifyMUnsafe___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_724_, 0, v_xs_x27_723_);
lean_closure_set(v___f_724_, 1, v_i_713_);
lean_closure_set(v___f_724_, 2, v_toPure_717_);
v___x_725_ = lean_apply_1(v_f_714_, v_v_721_);
v___x_726_ = lean_apply_4(v_toBind_716_, lean_box(0), lean_box(0), v___x_725_, v___f_724_);
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___redArg(lean_object* v_xs_727_, lean_object* v_i_728_, lean_object* v_f_729_){
_start:
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = lean_array_get_size(v_xs_727_);
v___x_731_ = lean_nat_dec_lt(v_i_728_, v___x_730_);
if (v___x_731_ == 0)
{
lean_dec(v_f_729_);
return v_xs_727_;
}
else
{
lean_object* v_v_732_; lean_object* v___x_733_; lean_object* v_xs_x27_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v_v_732_ = lean_array_fget(v_xs_727_, v_i_728_);
v___x_733_ = lean_box(0);
v_xs_x27_734_ = lean_array_fset(v_xs_727_, v_i_728_, v___x_733_);
v___x_735_ = lean_apply_1(v_f_729_, v_v_732_);
v___x_736_ = lean_array_fset(v_xs_x27_734_, v_i_728_, v___x_735_);
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___redArg___boxed(lean_object* v_xs_737_, lean_object* v_i_738_, lean_object* v_f_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Array_modify___redArg(v_xs_737_, v_i_738_, v_f_739_);
lean_dec(v_i_738_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Array_modify(lean_object* v_00_u03b1_741_, lean_object* v_xs_742_, lean_object* v_i_743_, lean_object* v_f_744_){
_start:
{
lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_745_ = lean_array_get_size(v_xs_742_);
v___x_746_ = lean_nat_dec_lt(v_i_743_, v___x_745_);
if (v___x_746_ == 0)
{
lean_dec(v_f_744_);
return v_xs_742_;
}
else
{
lean_object* v_v_747_; lean_object* v___x_748_; lean_object* v_xs_x27_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_v_747_ = lean_array_fget(v_xs_742_, v_i_743_);
v___x_748_ = lean_box(0);
v_xs_x27_749_ = lean_array_fset(v_xs_742_, v_i_743_, v___x_748_);
v___x_750_ = lean_apply_1(v_f_744_, v_v_747_);
v___x_751_ = lean_array_fset(v_xs_x27_749_, v_i_743_, v___x_750_);
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modify___boxed(lean_object* v_00_u03b1_752_, lean_object* v_xs_753_, lean_object* v_i_754_, lean_object* v_f_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Array_modify(v_00_u03b1_752_, v_xs_753_, v_i_754_, v_f_755_);
lean_dec(v_i_754_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg(lean_object* v_xs_757_, lean_object* v_idx_758_, lean_object* v_f_759_){
_start:
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = lean_array_get_size(v_xs_757_);
v___x_761_ = lean_nat_dec_lt(v_idx_758_, v___x_760_);
if (v___x_761_ == 0)
{
lean_dec(v_f_759_);
return v_xs_757_;
}
else
{
lean_object* v_v_762_; lean_object* v___x_763_; lean_object* v_xs_x27_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v_v_762_ = lean_array_fget(v_xs_757_, v_idx_758_);
v___x_763_ = lean_box(0);
v_xs_x27_764_ = lean_array_fset(v_xs_757_, v_idx_758_, v___x_763_);
v___x_765_ = lean_apply_1(v_f_759_, v_v_762_);
v___x_766_ = lean_array_fset(v_xs_x27_764_, v_idx_758_, v___x_765_);
return v___x_766_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___redArg___boxed(lean_object* v_xs_767_, lean_object* v_idx_768_, lean_object* v_f_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Array_modifyOp___redArg(v_xs_767_, v_idx_768_, v_f_769_);
lean_dec(v_idx_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp(lean_object* v_00_u03b1_771_, lean_object* v_xs_772_, lean_object* v_idx_773_, lean_object* v_f_774_){
_start:
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = lean_array_get_size(v_xs_772_);
v___x_776_ = lean_nat_dec_lt(v_idx_773_, v___x_775_);
if (v___x_776_ == 0)
{
lean_dec(v_f_774_);
return v_xs_772_;
}
else
{
lean_object* v_v_777_; lean_object* v___x_778_; lean_object* v_xs_x27_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v_v_777_ = lean_array_fget(v_xs_772_, v_idx_773_);
v___x_778_ = lean_box(0);
v_xs_x27_779_ = lean_array_fset(v_xs_772_, v_idx_773_, v___x_778_);
v___x_780_ = lean_apply_1(v_f_774_, v_v_777_);
v___x_781_ = lean_array_fset(v_xs_x27_779_, v_idx_773_, v___x_780_);
return v___x_781_;
}
}
}
LEAN_EXPORT lean_object* l_Array_modifyOp___boxed(lean_object* v_00_u03b1_782_, lean_object* v_xs_783_, lean_object* v_idx_784_, lean_object* v_f_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Array_modifyOp(v_00_u03b1_782_, v_xs_783_, v_idx_784_, v_f_785_);
lean_dec(v_idx_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed(lean_object* v_toPure_787_, lean_object* v_i_788_, lean_object* v_inst_789_, lean_object* v_as_790_, lean_object* v_f_791_, lean_object* v_sz_792_, lean_object* v_____do__lift_793_){
_start:
{
size_t v_i_boxed_794_; size_t v_sz_boxed_795_; lean_object* v_res_796_; 
v_i_boxed_794_ = lean_unbox_usize(v_i_788_);
lean_dec(v_i_788_);
v_sz_boxed_795_ = lean_unbox_usize(v_sz_792_);
lean_dec(v_sz_792_);
v_res_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(v_toPure_787_, v_i_boxed_794_, v_inst_789_, v_as_790_, v_f_791_, v_sz_boxed_795_, v_____do__lift_793_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(lean_object* v_inst_797_, lean_object* v_as_798_, lean_object* v_f_799_, size_t v_sz_800_, size_t v_i_801_, lean_object* v_b_802_){
_start:
{
lean_object* v_toApplicative_803_; lean_object* v_toBind_804_; lean_object* v_toPure_805_; uint8_t v___x_806_; 
v_toApplicative_803_ = lean_ctor_get(v_inst_797_, 0);
v_toBind_804_ = lean_ctor_get(v_inst_797_, 1);
lean_inc(v_toBind_804_);
v_toPure_805_ = lean_ctor_get(v_toApplicative_803_, 1);
lean_inc(v_toPure_805_);
v___x_806_ = lean_usize_dec_lt(v_i_801_, v_sz_800_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; 
lean_dec(v_toBind_804_);
lean_dec(v_f_799_);
lean_dec_ref(v_as_798_);
lean_dec_ref(v_inst_797_);
v___x_807_ = lean_apply_2(v_toPure_805_, lean_box(0), v_b_802_);
return v___x_807_;
}
else
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___f_810_; lean_object* v_a_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_808_ = lean_box_usize(v_i_801_);
v___x_809_ = lean_box_usize(v_sz_800_);
lean_inc(v_f_799_);
lean_inc_ref(v_as_798_);
v___f_810_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_810_, 0, v_toPure_805_);
lean_closure_set(v___f_810_, 1, v___x_808_);
lean_closure_set(v___f_810_, 2, v_inst_797_);
lean_closure_set(v___f_810_, 3, v_as_798_);
lean_closure_set(v___f_810_, 4, v_f_799_);
lean_closure_set(v___f_810_, 5, v___x_809_);
v_a_811_ = lean_array_uget(v_as_798_, v_i_801_);
lean_dec_ref(v_as_798_);
v___x_812_ = lean_apply_3(v_f_799_, v_a_811_, lean_box(0), v_b_802_);
v___x_813_ = lean_apply_4(v_toBind_804_, lean_box(0), lean_box(0), v___x_812_, v___f_810_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___lam__0(lean_object* v_toPure_814_, size_t v_i_815_, lean_object* v_inst_816_, lean_object* v_as_817_, lean_object* v_f_818_, size_t v_sz_819_, lean_object* v_____do__lift_820_){
_start:
{
if (lean_obj_tag(v_____do__lift_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_822_; 
lean_dec(v_f_818_);
lean_dec_ref(v_as_817_);
lean_dec_ref(v_inst_816_);
v_a_821_ = lean_ctor_get(v_____do__lift_820_, 0);
lean_inc(v_a_821_);
lean_dec_ref_known(v_____do__lift_820_, 1);
v___x_822_ = lean_apply_2(v_toPure_814_, lean_box(0), v_a_821_);
return v___x_822_;
}
else
{
lean_object* v_a_823_; size_t v___x_824_; size_t v___x_825_; lean_object* v___x_826_; 
lean_dec(v_toPure_814_);
v_a_823_ = lean_ctor_get(v_____do__lift_820_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v_____do__lift_820_, 1);
v___x_824_ = ((size_t)1ULL);
v___x_825_ = lean_usize_add(v_i_815_, v___x_824_);
v___x_826_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_816_, v_as_817_, v_f_818_, v_sz_819_, v___x_825_, v_a_823_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg___boxed(lean_object* v_inst_827_, lean_object* v_as_828_, lean_object* v_f_829_, lean_object* v_sz_830_, lean_object* v_i_831_, lean_object* v_b_832_){
_start:
{
size_t v_sz_boxed_833_; size_t v_i_boxed_834_; lean_object* v_res_835_; 
v_sz_boxed_833_ = lean_unbox_usize(v_sz_830_);
lean_dec(v_sz_830_);
v_i_boxed_834_ = lean_unbox_usize(v_i_831_);
lean_dec(v_i_831_);
v_res_835_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_827_, v_as_828_, v_f_829_, v_sz_boxed_833_, v_i_boxed_834_, v_b_832_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object* v_00_u03b1_836_, lean_object* v_00_u03b2_837_, lean_object* v_m_838_, lean_object* v_inst_839_, lean_object* v_as_840_, lean_object* v_f_841_, size_t v_sz_842_, size_t v_i_843_, lean_object* v_b_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_839_, v_as_840_, v_f_841_, v_sz_842_, v_i_843_, v_b_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___boxed(lean_object* v_00_u03b1_846_, lean_object* v_00_u03b2_847_, lean_object* v_m_848_, lean_object* v_inst_849_, lean_object* v_as_850_, lean_object* v_f_851_, lean_object* v_sz_852_, lean_object* v_i_853_, lean_object* v_b_854_){
_start:
{
size_t v_sz_boxed_855_; size_t v_i_boxed_856_; lean_object* v_res_857_; 
v_sz_boxed_855_ = lean_unbox_usize(v_sz_852_);
lean_dec(v_sz_852_);
v_i_boxed_856_ = lean_unbox_usize(v_i_853_);
lean_dec(v_i_853_);
v_res_857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(v_00_u03b1_846_, v_00_u03b2_847_, v_m_848_, v_inst_849_, v_as_850_, v_f_851_, v_sz_boxed_855_, v_i_boxed_856_, v_b_854_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe___redArg(lean_object* v_inst_858_, lean_object* v_as_859_, lean_object* v_b_860_, lean_object* v_f_861_){
_start:
{
size_t v_sz_862_; size_t v___x_863_; lean_object* v___x_864_; 
v_sz_862_ = lean_array_size(v_as_859_);
v___x_863_ = ((size_t)0ULL);
v___x_864_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_858_, v_as_859_, v_f_861_, v_sz_862_, v___x_863_, v_b_860_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe(lean_object* v_00_u03b1_865_, lean_object* v_00_u03b2_866_, lean_object* v_m_867_, lean_object* v_inst_868_, lean_object* v_as_869_, lean_object* v_b_870_, lean_object* v_f_871_){
_start:
{
size_t v_sz_872_; size_t v___x_873_; lean_object* v___x_874_; 
v_sz_872_ = lean_array_size(v_as_869_);
v___x_873_ = ((size_t)0ULL);
v___x_874_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_868_, v_as_869_, v_f_871_, v_sz_872_, v___x_873_, v_b_870_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0___boxed(lean_object* v_toPure_875_, lean_object* v_inst_876_, lean_object* v_as_877_, lean_object* v_f_878_, lean_object* v_n_879_, lean_object* v_____do__lift_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Array_forIn_x27_loop___redArg___lam__0(v_toPure_875_, v_inst_876_, v_as_877_, v_f_878_, v_n_879_, v_____do__lift_880_);
lean_dec(v_n_879_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg(lean_object* v_inst_882_, lean_object* v_as_883_, lean_object* v_f_884_, lean_object* v_i_885_, lean_object* v_b_886_){
_start:
{
lean_object* v_toApplicative_887_; lean_object* v_toBind_888_; lean_object* v_toPure_889_; lean_object* v_zero_890_; uint8_t v_isZero_891_; 
v_toApplicative_887_ = lean_ctor_get(v_inst_882_, 0);
v_toBind_888_ = lean_ctor_get(v_inst_882_, 1);
lean_inc(v_toBind_888_);
v_toPure_889_ = lean_ctor_get(v_toApplicative_887_, 1);
lean_inc(v_toPure_889_);
v_zero_890_ = lean_unsigned_to_nat(0u);
v_isZero_891_ = lean_nat_dec_eq(v_i_885_, v_zero_890_);
if (v_isZero_891_ == 1)
{
lean_object* v___x_892_; 
lean_dec(v_toBind_888_);
lean_dec(v_f_884_);
lean_dec_ref(v_as_883_);
lean_dec_ref(v_inst_882_);
v___x_892_ = lean_apply_2(v_toPure_889_, lean_box(0), v_b_886_);
return v___x_892_;
}
else
{
lean_object* v_one_893_; lean_object* v_n_894_; lean_object* v___f_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v_one_893_ = lean_unsigned_to_nat(1u);
v_n_894_ = lean_nat_sub(v_i_885_, v_one_893_);
lean_inc(v_n_894_);
lean_inc(v_f_884_);
lean_inc_ref(v_as_883_);
v___f_895_ = lean_alloc_closure((void*)(l_Array_forIn_x27_loop___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_895_, 0, v_toPure_889_);
lean_closure_set(v___f_895_, 1, v_inst_882_);
lean_closure_set(v___f_895_, 2, v_as_883_);
lean_closure_set(v___f_895_, 3, v_f_884_);
lean_closure_set(v___f_895_, 4, v_n_894_);
v___x_896_ = lean_array_get_size(v_as_883_);
v___x_897_ = lean_nat_sub(v___x_896_, v_one_893_);
v___x_898_ = lean_nat_sub(v___x_897_, v_n_894_);
lean_dec(v_n_894_);
lean_dec(v___x_897_);
v___x_899_ = lean_array_fget(v_as_883_, v___x_898_);
lean_dec(v___x_898_);
lean_dec_ref(v_as_883_);
v___x_900_ = lean_apply_3(v_f_884_, v___x_899_, lean_box(0), v_b_886_);
v___x_901_ = lean_apply_4(v_toBind_888_, lean_box(0), lean_box(0), v___x_900_, v___f_895_);
return v___x_901_;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___lam__0(lean_object* v_toPure_902_, lean_object* v_inst_903_, lean_object* v_as_904_, lean_object* v_f_905_, lean_object* v_n_906_, lean_object* v_____do__lift_907_){
_start:
{
if (lean_obj_tag(v_____do__lift_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_909_; 
lean_dec(v_f_905_);
lean_dec_ref(v_as_904_);
lean_dec_ref(v_inst_903_);
v_a_908_ = lean_ctor_get(v_____do__lift_907_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v_____do__lift_907_, 1);
v___x_909_ = lean_apply_2(v_toPure_902_, lean_box(0), v_a_908_);
return v___x_909_;
}
else
{
lean_object* v_a_910_; lean_object* v___x_911_; 
lean_dec(v_toPure_902_);
v_a_910_ = lean_ctor_get(v_____do__lift_907_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v_____do__lift_907_, 1);
v___x_911_ = l_Array_forIn_x27_loop___redArg(v_inst_903_, v_as_904_, v_f_905_, v_n_906_, v_a_910_);
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___redArg___boxed(lean_object* v_inst_912_, lean_object* v_as_913_, lean_object* v_f_914_, lean_object* v_i_915_, lean_object* v_b_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Array_forIn_x27_loop___redArg(v_inst_912_, v_as_913_, v_f_914_, v_i_915_, v_b_916_);
lean_dec(v_i_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop(lean_object* v_00_u03b1_918_, lean_object* v_00_u03b2_919_, lean_object* v_m_920_, lean_object* v_inst_921_, lean_object* v_as_922_, lean_object* v_f_923_, lean_object* v_i_924_, lean_object* v_h_925_, lean_object* v_b_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Array_forIn_x27_loop___redArg(v_inst_921_, v_as_922_, v_f_923_, v_i_924_, v_b_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27_loop___boxed(lean_object* v_00_u03b1_928_, lean_object* v_00_u03b2_929_, lean_object* v_m_930_, lean_object* v_inst_931_, lean_object* v_as_932_, lean_object* v_f_933_, lean_object* v_i_934_, lean_object* v_h_935_, lean_object* v_b_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Array_forIn_x27_loop(v_00_u03b1_928_, v_00_u03b2_929_, v_m_930_, v_inst_931_, v_as_932_, v_f_933_, v_i_934_, v_h_935_, v_b_936_);
lean_dec(v_i_934_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object* v_inst_938_, lean_object* v_00_u03b2_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
size_t v_sz_943_; size_t v___x_944_; lean_object* v___x_945_; 
v_sz_943_ = lean_array_size(v___y_940_);
v___x_944_ = ((size_t)0ULL);
v___x_945_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_938_, v___y_940_, v___y_942_, v_sz_943_, v___x_944_, v___y_941_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg(lean_object* v_inst_946_){
_start:
{
lean_object* v___f_947_; 
v___f_947_ = lean_alloc_closure((void*)(l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_947_, 0, v_inst_946_);
return v___f_947_;
}
}
LEAN_EXPORT lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad(lean_object* v_00_u03b1_948_, lean_object* v_m_949_, lean_object* v_inst_950_){
_start:
{
lean_object* v___f_951_; 
v___f_951_ = lean_alloc_closure((void*)(l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_951_, 0, v_inst_950_);
return v___f_951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed(lean_object* v_i_952_, lean_object* v_inst_953_, lean_object* v_f_954_, lean_object* v_as_955_, lean_object* v_stop_956_, lean_object* v_____do__lift_957_){
_start:
{
size_t v_i_boxed_958_; size_t v_stop_boxed_959_; lean_object* v_res_960_; 
v_i_boxed_958_ = lean_unbox_usize(v_i_952_);
lean_dec(v_i_952_);
v_stop_boxed_959_ = lean_unbox_usize(v_stop_956_);
lean_dec(v_stop_956_);
v_res_960_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(v_i_boxed_958_, v_inst_953_, v_f_954_, v_as_955_, v_stop_boxed_959_, v_____do__lift_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(lean_object* v_inst_961_, lean_object* v_f_962_, lean_object* v_as_963_, size_t v_i_964_, size_t v_stop_965_, lean_object* v_b_966_){
_start:
{
lean_object* v_toApplicative_967_; lean_object* v_toBind_968_; lean_object* v_toPure_969_; uint8_t v___x_970_; 
v_toApplicative_967_ = lean_ctor_get(v_inst_961_, 0);
v_toBind_968_ = lean_ctor_get(v_inst_961_, 1);
lean_inc(v_toBind_968_);
v_toPure_969_ = lean_ctor_get(v_toApplicative_967_, 1);
v___x_970_ = lean_usize_dec_eq(v_i_964_, v_stop_965_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___f_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_971_ = lean_box_usize(v_i_964_);
v___x_972_ = lean_box_usize(v_stop_965_);
lean_inc_ref(v_as_963_);
lean_inc(v_f_962_);
v___f_973_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_973_, 0, v___x_971_);
lean_closure_set(v___f_973_, 1, v_inst_961_);
lean_closure_set(v___f_973_, 2, v_f_962_);
lean_closure_set(v___f_973_, 3, v_as_963_);
lean_closure_set(v___f_973_, 4, v___x_972_);
v___x_974_ = lean_array_uget(v_as_963_, v_i_964_);
lean_dec_ref(v_as_963_);
v___x_975_ = lean_apply_2(v_f_962_, v_b_966_, v___x_974_);
v___x_976_ = lean_apply_4(v_toBind_968_, lean_box(0), lean_box(0), v___x_975_, v___f_973_);
return v___x_976_;
}
else
{
lean_object* v___x_977_; 
lean_inc(v_toPure_969_);
lean_dec(v_toBind_968_);
lean_dec_ref(v_as_963_);
lean_dec(v_f_962_);
lean_dec_ref(v_inst_961_);
v___x_977_ = lean_apply_2(v_toPure_969_, lean_box(0), v_b_966_);
return v___x_977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___lam__0(size_t v_i_978_, lean_object* v_inst_979_, lean_object* v_f_980_, lean_object* v_as_981_, size_t v_stop_982_, lean_object* v_____do__lift_983_){
_start:
{
size_t v___x_984_; size_t v___x_985_; lean_object* v___x_986_; 
v___x_984_ = ((size_t)1ULL);
v___x_985_ = lean_usize_add(v_i_978_, v___x_984_);
v___x_986_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_979_, v_f_980_, v_as_981_, v___x_985_, v_stop_982_, v_____do__lift_983_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg___boxed(lean_object* v_inst_987_, lean_object* v_f_988_, lean_object* v_as_989_, lean_object* v_i_990_, lean_object* v_stop_991_, lean_object* v_b_992_){
_start:
{
size_t v_i_boxed_993_; size_t v_stop_boxed_994_; lean_object* v_res_995_; 
v_i_boxed_993_ = lean_unbox_usize(v_i_990_);
lean_dec(v_i_990_);
v_stop_boxed_994_ = lean_unbox_usize(v_stop_991_);
lean_dec(v_stop_991_);
v_res_995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_987_, v_f_988_, v_as_989_, v_i_boxed_993_, v_stop_boxed_994_, v_b_992_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object* v_00_u03b1_996_, lean_object* v_00_u03b2_997_, lean_object* v_m_998_, lean_object* v_inst_999_, lean_object* v_f_1000_, lean_object* v_as_1001_, size_t v_i_1002_, size_t v_stop_1003_, lean_object* v_b_1004_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_999_, v_f_1000_, v_as_1001_, v_i_1002_, v_stop_1003_, v_b_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___boxed(lean_object* v_00_u03b1_1006_, lean_object* v_00_u03b2_1007_, lean_object* v_m_1008_, lean_object* v_inst_1009_, lean_object* v_f_1010_, lean_object* v_as_1011_, lean_object* v_i_1012_, lean_object* v_stop_1013_, lean_object* v_b_1014_){
_start:
{
size_t v_i_boxed_1015_; size_t v_stop_boxed_1016_; lean_object* v_res_1017_; 
v_i_boxed_1015_ = lean_unbox_usize(v_i_1012_);
lean_dec(v_i_1012_);
v_stop_boxed_1016_ = lean_unbox_usize(v_stop_1013_);
lean_dec(v_stop_1013_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(v_00_u03b1_1006_, v_00_u03b2_1007_, v_m_1008_, v_inst_1009_, v_f_1010_, v_as_1011_, v_i_boxed_1015_, v_stop_boxed_1016_, v_b_1014_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg(lean_object* v_inst_1018_, lean_object* v_f_1019_, lean_object* v_init_1020_, lean_object* v_as_1021_, lean_object* v_start_1022_, lean_object* v_stop_1023_){
_start:
{
lean_object* v_toApplicative_1024_; lean_object* v_toPure_1025_; uint8_t v___x_1026_; 
v_toApplicative_1024_ = lean_ctor_get(v_inst_1018_, 0);
v_toPure_1025_ = lean_ctor_get(v_toApplicative_1024_, 1);
v___x_1026_ = lean_nat_dec_lt(v_start_1022_, v_stop_1023_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; 
lean_inc(v_toPure_1025_);
lean_dec_ref(v_as_1021_);
lean_dec(v_f_1019_);
lean_dec_ref(v_inst_1018_);
v___x_1027_ = lean_apply_2(v_toPure_1025_, lean_box(0), v_init_1020_);
return v___x_1027_;
}
else
{
lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___x_1028_ = lean_array_get_size(v_as_1021_);
v___x_1029_ = lean_nat_dec_le(v_stop_1023_, v___x_1028_);
if (v___x_1029_ == 0)
{
uint8_t v___x_1030_; 
v___x_1030_ = lean_nat_dec_lt(v_start_1022_, v___x_1028_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; 
lean_inc(v_toPure_1025_);
lean_dec_ref(v_as_1021_);
lean_dec(v_f_1019_);
lean_dec_ref(v_inst_1018_);
v___x_1031_ = lean_apply_2(v_toPure_1025_, lean_box(0), v_init_1020_);
return v___x_1031_;
}
else
{
size_t v___x_1032_; size_t v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_usize_of_nat(v_start_1022_);
v___x_1033_ = lean_usize_of_nat(v___x_1028_);
v___x_1034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1018_, v_f_1019_, v_as_1021_, v___x_1032_, v___x_1033_, v_init_1020_);
return v___x_1034_;
}
}
else
{
size_t v___x_1035_; size_t v___x_1036_; lean_object* v___x_1037_; 
v___x_1035_ = lean_usize_of_nat(v_start_1022_);
v___x_1036_ = lean_usize_of_nat(v_stop_1023_);
v___x_1037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1018_, v_f_1019_, v_as_1021_, v___x_1035_, v___x_1036_, v_init_1020_);
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___redArg___boxed(lean_object* v_inst_1038_, lean_object* v_f_1039_, lean_object* v_init_1040_, lean_object* v_as_1041_, lean_object* v_start_1042_, lean_object* v_stop_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Array_foldlMUnsafe___redArg(v_inst_1038_, v_f_1039_, v_init_1040_, v_as_1041_, v_start_1042_, v_stop_1043_);
lean_dec(v_stop_1043_);
lean_dec(v_start_1042_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe(lean_object* v_00_u03b1_1045_, lean_object* v_00_u03b2_1046_, lean_object* v_m_1047_, lean_object* v_inst_1048_, lean_object* v_f_1049_, lean_object* v_init_1050_, lean_object* v_as_1051_, lean_object* v_start_1052_, lean_object* v_stop_1053_){
_start:
{
lean_object* v_toApplicative_1054_; lean_object* v_toPure_1055_; uint8_t v___x_1056_; 
v_toApplicative_1054_ = lean_ctor_get(v_inst_1048_, 0);
v_toPure_1055_ = lean_ctor_get(v_toApplicative_1054_, 1);
v___x_1056_ = lean_nat_dec_lt(v_start_1052_, v_stop_1053_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; 
lean_inc(v_toPure_1055_);
lean_dec_ref(v_as_1051_);
lean_dec(v_f_1049_);
lean_dec_ref(v_inst_1048_);
v___x_1057_ = lean_apply_2(v_toPure_1055_, lean_box(0), v_init_1050_);
return v___x_1057_;
}
else
{
lean_object* v___x_1058_; uint8_t v___x_1059_; 
v___x_1058_ = lean_array_get_size(v_as_1051_);
v___x_1059_ = lean_nat_dec_le(v_stop_1053_, v___x_1058_);
if (v___x_1059_ == 0)
{
uint8_t v___x_1060_; 
v___x_1060_ = lean_nat_dec_lt(v_start_1052_, v___x_1058_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
lean_inc(v_toPure_1055_);
lean_dec_ref(v_as_1051_);
lean_dec(v_f_1049_);
lean_dec_ref(v_inst_1048_);
v___x_1061_ = lean_apply_2(v_toPure_1055_, lean_box(0), v_init_1050_);
return v___x_1061_;
}
else
{
size_t v___x_1062_; size_t v___x_1063_; lean_object* v___x_1064_; 
v___x_1062_ = lean_usize_of_nat(v_start_1052_);
v___x_1063_ = lean_usize_of_nat(v___x_1058_);
v___x_1064_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1048_, v_f_1049_, v_as_1051_, v___x_1062_, v___x_1063_, v_init_1050_);
return v___x_1064_;
}
}
else
{
size_t v___x_1065_; size_t v___x_1066_; lean_object* v___x_1067_; 
v___x_1065_ = lean_usize_of_nat(v_start_1052_);
v___x_1066_ = lean_usize_of_nat(v_stop_1053_);
v___x_1067_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_1048_, v_f_1049_, v_as_1051_, v___x_1065_, v___x_1066_, v_init_1050_);
return v___x_1067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe___boxed(lean_object* v_00_u03b1_1068_, lean_object* v_00_u03b2_1069_, lean_object* v_m_1070_, lean_object* v_inst_1071_, lean_object* v_f_1072_, lean_object* v_init_1073_, lean_object* v_as_1074_, lean_object* v_start_1075_, lean_object* v_stop_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Array_foldlMUnsafe(v_00_u03b1_1068_, v_00_u03b2_1069_, v_m_1070_, v_inst_1071_, v_f_1072_, v_init_1073_, v_as_1074_, v_start_1075_, v_stop_1076_);
lean_dec(v_stop_1076_);
lean_dec(v_start_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0___boxed(lean_object* v_j_1078_, lean_object* v_inst_1079_, lean_object* v_f_1080_, lean_object* v_as_1081_, lean_object* v_stop_1082_, lean_object* v_n_1083_, lean_object* v_____do__lift_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Array_foldlM_loop___redArg___lam__0(v_j_1078_, v_inst_1079_, v_f_1080_, v_as_1081_, v_stop_1082_, v_n_1083_, v_____do__lift_1084_);
lean_dec(v_n_1083_);
lean_dec(v_j_1078_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg(lean_object* v_inst_1086_, lean_object* v_f_1087_, lean_object* v_as_1088_, lean_object* v_stop_1089_, lean_object* v_i_1090_, lean_object* v_j_1091_, lean_object* v_b_1092_){
_start:
{
lean_object* v_toApplicative_1093_; lean_object* v_toBind_1094_; lean_object* v_toPure_1095_; uint8_t v___x_1096_; 
v_toApplicative_1093_ = lean_ctor_get(v_inst_1086_, 0);
v_toBind_1094_ = lean_ctor_get(v_inst_1086_, 1);
lean_inc(v_toBind_1094_);
v_toPure_1095_ = lean_ctor_get(v_toApplicative_1093_, 1);
v___x_1096_ = lean_nat_dec_lt(v_j_1091_, v_stop_1089_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; 
lean_inc(v_toPure_1095_);
lean_dec(v_toBind_1094_);
lean_dec(v_j_1091_);
lean_dec(v_stop_1089_);
lean_dec_ref(v_as_1088_);
lean_dec(v_f_1087_);
lean_dec_ref(v_inst_1086_);
v___x_1097_ = lean_apply_2(v_toPure_1095_, lean_box(0), v_b_1092_);
return v___x_1097_;
}
else
{
lean_object* v_zero_1098_; uint8_t v_isZero_1099_; 
v_zero_1098_ = lean_unsigned_to_nat(0u);
v_isZero_1099_ = lean_nat_dec_eq(v_i_1090_, v_zero_1098_);
if (v_isZero_1099_ == 1)
{
lean_object* v___x_1100_; 
lean_inc(v_toPure_1095_);
lean_dec(v_toBind_1094_);
lean_dec(v_j_1091_);
lean_dec(v_stop_1089_);
lean_dec_ref(v_as_1088_);
lean_dec(v_f_1087_);
lean_dec_ref(v_inst_1086_);
v___x_1100_ = lean_apply_2(v_toPure_1095_, lean_box(0), v_b_1092_);
return v___x_1100_;
}
else
{
lean_object* v_one_1101_; lean_object* v_n_1102_; lean_object* v___f_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v_one_1101_ = lean_unsigned_to_nat(1u);
v_n_1102_ = lean_nat_sub(v_i_1090_, v_one_1101_);
lean_inc_ref(v_as_1088_);
lean_inc(v_f_1087_);
lean_inc(v_j_1091_);
v___f_1103_ = lean_alloc_closure((void*)(l_Array_foldlM_loop___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1103_, 0, v_j_1091_);
lean_closure_set(v___f_1103_, 1, v_inst_1086_);
lean_closure_set(v___f_1103_, 2, v_f_1087_);
lean_closure_set(v___f_1103_, 3, v_as_1088_);
lean_closure_set(v___f_1103_, 4, v_stop_1089_);
lean_closure_set(v___f_1103_, 5, v_n_1102_);
v___x_1104_ = lean_array_fget(v_as_1088_, v_j_1091_);
lean_dec(v_j_1091_);
lean_dec_ref(v_as_1088_);
v___x_1105_ = lean_apply_2(v_f_1087_, v_b_1092_, v___x_1104_);
v___x_1106_ = lean_apply_4(v_toBind_1094_, lean_box(0), lean_box(0), v___x_1105_, v___f_1103_);
return v___x_1106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___lam__0(lean_object* v_j_1107_, lean_object* v_inst_1108_, lean_object* v_f_1109_, lean_object* v_as_1110_, lean_object* v_stop_1111_, lean_object* v_n_1112_, lean_object* v_____do__lift_1113_){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1114_ = lean_unsigned_to_nat(1u);
v___x_1115_ = lean_nat_add(v_j_1107_, v___x_1114_);
v___x_1116_ = l_Array_foldlM_loop___redArg(v_inst_1108_, v_f_1109_, v_as_1110_, v_stop_1111_, v_n_1112_, v___x_1115_, v_____do__lift_1113_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___redArg___boxed(lean_object* v_inst_1117_, lean_object* v_f_1118_, lean_object* v_as_1119_, lean_object* v_stop_1120_, lean_object* v_i_1121_, lean_object* v_j_1122_, lean_object* v_b_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Array_foldlM_loop___redArg(v_inst_1117_, v_f_1118_, v_as_1119_, v_stop_1120_, v_i_1121_, v_j_1122_, v_b_1123_);
lean_dec(v_i_1121_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop(lean_object* v_00_u03b1_1125_, lean_object* v_00_u03b2_1126_, lean_object* v_m_1127_, lean_object* v_inst_1128_, lean_object* v_f_1129_, lean_object* v_as_1130_, lean_object* v_stop_1131_, lean_object* v_h_1132_, lean_object* v_i_1133_, lean_object* v_j_1134_, lean_object* v_b_1135_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Array_foldlM_loop___redArg(v_inst_1128_, v_f_1129_, v_as_1130_, v_stop_1131_, v_i_1133_, v_j_1134_, v_b_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Array_foldlM_loop___boxed(lean_object* v_00_u03b1_1137_, lean_object* v_00_u03b2_1138_, lean_object* v_m_1139_, lean_object* v_inst_1140_, lean_object* v_f_1141_, lean_object* v_as_1142_, lean_object* v_stop_1143_, lean_object* v_h_1144_, lean_object* v_i_1145_, lean_object* v_j_1146_, lean_object* v_b_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Array_foldlM_loop(v_00_u03b1_1137_, v_00_u03b2_1138_, v_m_1139_, v_inst_1140_, v_f_1141_, v_as_1142_, v_stop_1143_, v_h_1144_, v_i_1145_, v_j_1146_, v_b_1147_);
lean_dec(v_i_1145_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed(lean_object* v_inst_1149_, lean_object* v_f_1150_, lean_object* v_as_1151_, lean_object* v___x_1152_, lean_object* v_stop_1153_, lean_object* v_____do__lift_1154_){
_start:
{
size_t v___x_78__boxed_1155_; size_t v_stop_boxed_1156_; lean_object* v_res_1157_; 
v___x_78__boxed_1155_ = lean_unbox_usize(v___x_1152_);
lean_dec(v___x_1152_);
v_stop_boxed_1156_ = lean_unbox_usize(v_stop_1153_);
lean_dec(v_stop_1153_);
v_res_1157_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(v_inst_1149_, v_f_1150_, v_as_1151_, v___x_78__boxed_1155_, v_stop_boxed_1156_, v_____do__lift_1154_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(lean_object* v_inst_1158_, lean_object* v_f_1159_, lean_object* v_as_1160_, size_t v_i_1161_, size_t v_stop_1162_, lean_object* v_b_1163_){
_start:
{
lean_object* v_toApplicative_1164_; lean_object* v_toBind_1165_; lean_object* v_toPure_1166_; uint8_t v___x_1167_; 
v_toApplicative_1164_ = lean_ctor_get(v_inst_1158_, 0);
v_toBind_1165_ = lean_ctor_get(v_inst_1158_, 1);
lean_inc(v_toBind_1165_);
v_toPure_1166_ = lean_ctor_get(v_toApplicative_1164_, 1);
v___x_1167_ = lean_usize_dec_eq(v_i_1161_, v_stop_1162_);
if (v___x_1167_ == 0)
{
size_t v___x_1168_; size_t v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___f_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1168_ = ((size_t)1ULL);
v___x_1169_ = lean_usize_sub(v_i_1161_, v___x_1168_);
v___x_1170_ = lean_box_usize(v___x_1169_);
v___x_1171_ = lean_box_usize(v_stop_1162_);
lean_inc_ref(v_as_1160_);
lean_inc(v_f_1159_);
v___f_1172_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1172_, 0, v_inst_1158_);
lean_closure_set(v___f_1172_, 1, v_f_1159_);
lean_closure_set(v___f_1172_, 2, v_as_1160_);
lean_closure_set(v___f_1172_, 3, v___x_1170_);
lean_closure_set(v___f_1172_, 4, v___x_1171_);
v___x_1173_ = lean_array_uget(v_as_1160_, v___x_1169_);
lean_dec_ref(v_as_1160_);
v___x_1174_ = lean_apply_2(v_f_1159_, v___x_1173_, v_b_1163_);
v___x_1175_ = lean_apply_4(v_toBind_1165_, lean_box(0), lean_box(0), v___x_1174_, v___f_1172_);
return v___x_1175_;
}
else
{
lean_object* v___x_1176_; 
lean_inc(v_toPure_1166_);
lean_dec(v_toBind_1165_);
lean_dec_ref(v_as_1160_);
lean_dec(v_f_1159_);
lean_dec_ref(v_inst_1158_);
v___x_1176_ = lean_apply_2(v_toPure_1166_, lean_box(0), v_b_1163_);
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___lam__0(lean_object* v_inst_1177_, lean_object* v_f_1178_, lean_object* v_as_1179_, size_t v___x_1180_, size_t v_stop_1181_, lean_object* v_____do__lift_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1177_, v_f_1178_, v_as_1179_, v___x_1180_, v_stop_1181_, v_____do__lift_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg___boxed(lean_object* v_inst_1184_, lean_object* v_f_1185_, lean_object* v_as_1186_, lean_object* v_i_1187_, lean_object* v_stop_1188_, lean_object* v_b_1189_){
_start:
{
size_t v_i_boxed_1190_; size_t v_stop_boxed_1191_; lean_object* v_res_1192_; 
v_i_boxed_1190_ = lean_unbox_usize(v_i_1187_);
lean_dec(v_i_1187_);
v_stop_boxed_1191_ = lean_unbox_usize(v_stop_1188_);
lean_dec(v_stop_1188_);
v_res_1192_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1184_, v_f_1185_, v_as_1186_, v_i_boxed_1190_, v_stop_boxed_1191_, v_b_1189_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object* v_00_u03b1_1193_, lean_object* v_00_u03b2_1194_, lean_object* v_m_1195_, lean_object* v_inst_1196_, lean_object* v_f_1197_, lean_object* v_as_1198_, size_t v_i_1199_, size_t v_stop_1200_, lean_object* v_b_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1196_, v_f_1197_, v_as_1198_, v_i_1199_, v_stop_1200_, v_b_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___boxed(lean_object* v_00_u03b1_1203_, lean_object* v_00_u03b2_1204_, lean_object* v_m_1205_, lean_object* v_inst_1206_, lean_object* v_f_1207_, lean_object* v_as_1208_, lean_object* v_i_1209_, lean_object* v_stop_1210_, lean_object* v_b_1211_){
_start:
{
size_t v_i_boxed_1212_; size_t v_stop_boxed_1213_; lean_object* v_res_1214_; 
v_i_boxed_1212_ = lean_unbox_usize(v_i_1209_);
lean_dec(v_i_1209_);
v_stop_boxed_1213_ = lean_unbox_usize(v_stop_1210_);
lean_dec(v_stop_1210_);
v_res_1214_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(v_00_u03b1_1203_, v_00_u03b2_1204_, v_m_1205_, v_inst_1206_, v_f_1207_, v_as_1208_, v_i_boxed_1212_, v_stop_boxed_1213_, v_b_1211_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg(lean_object* v_inst_1215_, lean_object* v_f_1216_, lean_object* v_init_1217_, lean_object* v_as_1218_, lean_object* v_start_1219_, lean_object* v_stop_1220_){
_start:
{
lean_object* v_toApplicative_1221_; lean_object* v_toPure_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
v_toApplicative_1221_ = lean_ctor_get(v_inst_1215_, 0);
v_toPure_1222_ = lean_ctor_get(v_toApplicative_1221_, 1);
v___x_1223_ = lean_array_get_size(v_as_1218_);
v___x_1224_ = lean_nat_dec_le(v_start_1219_, v___x_1223_);
if (v___x_1224_ == 0)
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_nat_dec_lt(v_stop_1220_, v___x_1223_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; 
lean_inc(v_toPure_1222_);
lean_dec_ref(v_as_1218_);
lean_dec(v_f_1216_);
lean_dec_ref(v_inst_1215_);
v___x_1226_ = lean_apply_2(v_toPure_1222_, lean_box(0), v_init_1217_);
return v___x_1226_;
}
else
{
size_t v___x_1227_; size_t v___x_1228_; lean_object* v___x_1229_; 
v___x_1227_ = lean_usize_of_nat(v___x_1223_);
v___x_1228_ = lean_usize_of_nat(v_stop_1220_);
v___x_1229_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1215_, v_f_1216_, v_as_1218_, v___x_1227_, v___x_1228_, v_init_1217_);
return v___x_1229_;
}
}
else
{
uint8_t v___x_1230_; 
v___x_1230_ = lean_nat_dec_lt(v_stop_1220_, v_start_1219_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; 
lean_inc(v_toPure_1222_);
lean_dec_ref(v_as_1218_);
lean_dec(v_f_1216_);
lean_dec_ref(v_inst_1215_);
v___x_1231_ = lean_apply_2(v_toPure_1222_, lean_box(0), v_init_1217_);
return v___x_1231_;
}
else
{
size_t v___x_1232_; size_t v___x_1233_; lean_object* v___x_1234_; 
v___x_1232_ = lean_usize_of_nat(v_start_1219_);
v___x_1233_ = lean_usize_of_nat(v_stop_1220_);
v___x_1234_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1215_, v_f_1216_, v_as_1218_, v___x_1232_, v___x_1233_, v_init_1217_);
return v___x_1234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___redArg___boxed(lean_object* v_inst_1235_, lean_object* v_f_1236_, lean_object* v_init_1237_, lean_object* v_as_1238_, lean_object* v_start_1239_, lean_object* v_stop_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Array_foldrMUnsafe___redArg(v_inst_1235_, v_f_1236_, v_init_1237_, v_as_1238_, v_start_1239_, v_stop_1240_);
lean_dec(v_stop_1240_);
lean_dec(v_start_1239_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe(lean_object* v_00_u03b1_1242_, lean_object* v_00_u03b2_1243_, lean_object* v_m_1244_, lean_object* v_inst_1245_, lean_object* v_f_1246_, lean_object* v_init_1247_, lean_object* v_as_1248_, lean_object* v_start_1249_, lean_object* v_stop_1250_){
_start:
{
lean_object* v_toApplicative_1251_; lean_object* v_toPure_1252_; lean_object* v___x_1253_; uint8_t v___x_1254_; 
v_toApplicative_1251_ = lean_ctor_get(v_inst_1245_, 0);
v_toPure_1252_ = lean_ctor_get(v_toApplicative_1251_, 1);
v___x_1253_ = lean_array_get_size(v_as_1248_);
v___x_1254_ = lean_nat_dec_le(v_start_1249_, v___x_1253_);
if (v___x_1254_ == 0)
{
uint8_t v___x_1255_; 
v___x_1255_ = lean_nat_dec_lt(v_stop_1250_, v___x_1253_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; 
lean_inc(v_toPure_1252_);
lean_dec_ref(v_as_1248_);
lean_dec(v_f_1246_);
lean_dec_ref(v_inst_1245_);
v___x_1256_ = lean_apply_2(v_toPure_1252_, lean_box(0), v_init_1247_);
return v___x_1256_;
}
else
{
size_t v___x_1257_; size_t v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = lean_usize_of_nat(v___x_1253_);
v___x_1258_ = lean_usize_of_nat(v_stop_1250_);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1245_, v_f_1246_, v_as_1248_, v___x_1257_, v___x_1258_, v_init_1247_);
return v___x_1259_;
}
}
else
{
uint8_t v___x_1260_; 
v___x_1260_ = lean_nat_dec_lt(v_stop_1250_, v_start_1249_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; 
lean_inc(v_toPure_1252_);
lean_dec_ref(v_as_1248_);
lean_dec(v_f_1246_);
lean_dec_ref(v_inst_1245_);
v___x_1261_ = lean_apply_2(v_toPure_1252_, lean_box(0), v_init_1247_);
return v___x_1261_;
}
else
{
size_t v___x_1262_; size_t v___x_1263_; lean_object* v___x_1264_; 
v___x_1262_ = lean_usize_of_nat(v_start_1249_);
v___x_1263_ = lean_usize_of_nat(v_stop_1250_);
v___x_1264_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_1245_, v_f_1246_, v_as_1248_, v___x_1262_, v___x_1263_, v_init_1247_);
return v___x_1264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrMUnsafe___boxed(lean_object* v_00_u03b1_1265_, lean_object* v_00_u03b2_1266_, lean_object* v_m_1267_, lean_object* v_inst_1268_, lean_object* v_f_1269_, lean_object* v_init_1270_, lean_object* v_as_1271_, lean_object* v_start_1272_, lean_object* v_stop_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Array_foldrMUnsafe(v_00_u03b1_1265_, v_00_u03b2_1266_, v_m_1267_, v_inst_1268_, v_f_1269_, v_init_1270_, v_as_1271_, v_start_1272_, v_stop_1273_);
lean_dec(v_stop_1273_);
lean_dec(v_start_1272_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0___boxed(lean_object* v_inst_1275_, lean_object* v_f_1276_, lean_object* v_as_1277_, lean_object* v_stop_1278_, lean_object* v_n_1279_, lean_object* v_____do__lift_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Array_foldrM_fold___redArg___lam__0(v_inst_1275_, v_f_1276_, v_as_1277_, v_stop_1278_, v_n_1279_, v_____do__lift_1280_);
lean_dec(v_n_1279_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg(lean_object* v_inst_1282_, lean_object* v_f_1283_, lean_object* v_as_1284_, lean_object* v_stop_1285_, lean_object* v_i_1286_, lean_object* v_b_1287_){
_start:
{
lean_object* v_toApplicative_1288_; lean_object* v_toBind_1289_; lean_object* v_toPure_1290_; uint8_t v___x_1291_; 
v_toApplicative_1288_ = lean_ctor_get(v_inst_1282_, 0);
v_toBind_1289_ = lean_ctor_get(v_inst_1282_, 1);
lean_inc(v_toBind_1289_);
v_toPure_1290_ = lean_ctor_get(v_toApplicative_1288_, 1);
v___x_1291_ = lean_nat_dec_eq(v_i_1286_, v_stop_1285_);
if (v___x_1291_ == 0)
{
lean_object* v_zero_1292_; uint8_t v_isZero_1293_; 
v_zero_1292_ = lean_unsigned_to_nat(0u);
v_isZero_1293_ = lean_nat_dec_eq(v_i_1286_, v_zero_1292_);
if (v_isZero_1293_ == 1)
{
lean_object* v___x_1294_; 
lean_inc(v_toPure_1290_);
lean_dec(v_toBind_1289_);
lean_dec(v_stop_1285_);
lean_dec_ref(v_as_1284_);
lean_dec(v_f_1283_);
lean_dec_ref(v_inst_1282_);
v___x_1294_ = lean_apply_2(v_toPure_1290_, lean_box(0), v_b_1287_);
return v___x_1294_;
}
else
{
lean_object* v_one_1295_; lean_object* v_n_1296_; lean_object* v___f_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v_one_1295_ = lean_unsigned_to_nat(1u);
v_n_1296_ = lean_nat_sub(v_i_1286_, v_one_1295_);
lean_inc(v_n_1296_);
lean_inc_ref(v_as_1284_);
lean_inc(v_f_1283_);
v___f_1297_ = lean_alloc_closure((void*)(l_Array_foldrM_fold___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1297_, 0, v_inst_1282_);
lean_closure_set(v___f_1297_, 1, v_f_1283_);
lean_closure_set(v___f_1297_, 2, v_as_1284_);
lean_closure_set(v___f_1297_, 3, v_stop_1285_);
lean_closure_set(v___f_1297_, 4, v_n_1296_);
v___x_1298_ = lean_array_fget(v_as_1284_, v_n_1296_);
lean_dec(v_n_1296_);
lean_dec_ref(v_as_1284_);
v___x_1299_ = lean_apply_2(v_f_1283_, v___x_1298_, v_b_1287_);
v___x_1300_ = lean_apply_4(v_toBind_1289_, lean_box(0), lean_box(0), v___x_1299_, v___f_1297_);
return v___x_1300_;
}
}
else
{
lean_object* v___x_1301_; 
lean_inc(v_toPure_1290_);
lean_dec(v_toBind_1289_);
lean_dec(v_stop_1285_);
lean_dec_ref(v_as_1284_);
lean_dec(v_f_1283_);
lean_dec_ref(v_inst_1282_);
v___x_1301_ = lean_apply_2(v_toPure_1290_, lean_box(0), v_b_1287_);
return v___x_1301_;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___lam__0(lean_object* v_inst_1302_, lean_object* v_f_1303_, lean_object* v_as_1304_, lean_object* v_stop_1305_, lean_object* v_n_1306_, lean_object* v_____do__lift_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Array_foldrM_fold___redArg(v_inst_1302_, v_f_1303_, v_as_1304_, v_stop_1305_, v_n_1306_, v_____do__lift_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___redArg___boxed(lean_object* v_inst_1309_, lean_object* v_f_1310_, lean_object* v_as_1311_, lean_object* v_stop_1312_, lean_object* v_i_1313_, lean_object* v_b_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Array_foldrM_fold___redArg(v_inst_1309_, v_f_1310_, v_as_1311_, v_stop_1312_, v_i_1313_, v_b_1314_);
lean_dec(v_i_1313_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold(lean_object* v_00_u03b1_1316_, lean_object* v_00_u03b2_1317_, lean_object* v_m_1318_, lean_object* v_inst_1319_, lean_object* v_f_1320_, lean_object* v_as_1321_, lean_object* v_stop_1322_, lean_object* v_i_1323_, lean_object* v_h_1324_, lean_object* v_b_1325_){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Array_foldrM_fold___redArg(v_inst_1319_, v_f_1320_, v_as_1321_, v_stop_1322_, v_i_1323_, v_b_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Array_foldrM_fold___boxed(lean_object* v_00_u03b1_1327_, lean_object* v_00_u03b2_1328_, lean_object* v_m_1329_, lean_object* v_inst_1330_, lean_object* v_f_1331_, lean_object* v_as_1332_, lean_object* v_stop_1333_, lean_object* v_i_1334_, lean_object* v_h_1335_, lean_object* v_b_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Array_foldrM_fold(v_00_u03b1_1327_, v_00_u03b2_1328_, v_m_1329_, v_inst_1330_, v_f_1331_, v_as_1332_, v_stop_1333_, v_i_1334_, v_h_1335_, v_b_1336_);
lean_dec(v_i_1334_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed(lean_object* v_i_1338_, lean_object* v_bs_x27_1339_, lean_object* v_inst_1340_, lean_object* v_f_1341_, lean_object* v_sz_1342_, lean_object* v_vNew_1343_){
_start:
{
size_t v_i_boxed_1344_; size_t v_sz_boxed_1345_; lean_object* v_res_1346_; 
v_i_boxed_1344_ = lean_unbox_usize(v_i_1338_);
lean_dec(v_i_1338_);
v_sz_boxed_1345_ = lean_unbox_usize(v_sz_1342_);
lean_dec(v_sz_1342_);
v_res_1346_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(v_i_boxed_1344_, v_bs_x27_1339_, v_inst_1340_, v_f_1341_, v_sz_boxed_1345_, v_vNew_1343_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object* v_inst_1347_, lean_object* v_f_1348_, size_t v_sz_1349_, size_t v_i_1350_, lean_object* v_bs_1351_){
_start:
{
lean_object* v_toApplicative_1352_; lean_object* v_toBind_1353_; lean_object* v_toPure_1354_; uint8_t v___x_1355_; 
v_toApplicative_1352_ = lean_ctor_get(v_inst_1347_, 0);
v_toBind_1353_ = lean_ctor_get(v_inst_1347_, 1);
lean_inc(v_toBind_1353_);
v_toPure_1354_ = lean_ctor_get(v_toApplicative_1352_, 1);
v___x_1355_ = lean_usize_dec_lt(v_i_1350_, v_sz_1349_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_inc(v_toPure_1354_);
lean_dec(v_toBind_1353_);
lean_dec(v_f_1348_);
lean_dec_ref(v_inst_1347_);
v___x_1356_ = lean_apply_2(v_toPure_1354_, lean_box(0), v_bs_1351_);
return v___x_1356_;
}
else
{
lean_object* v_v_1357_; lean_object* v___x_1358_; lean_object* v_bs_x27_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___f_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v_v_1357_ = lean_array_uget(v_bs_1351_, v_i_1350_);
v___x_1358_ = lean_unsigned_to_nat(0u);
v_bs_x27_1359_ = lean_array_uset(v_bs_1351_, v_i_1350_, v___x_1358_);
v___x_1360_ = lean_box_usize(v_i_1350_);
v___x_1361_ = lean_box_usize(v_sz_1349_);
lean_inc(v_f_1348_);
v___f_1362_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1362_, 0, v___x_1360_);
lean_closure_set(v___f_1362_, 1, v_bs_x27_1359_);
lean_closure_set(v___f_1362_, 2, v_inst_1347_);
lean_closure_set(v___f_1362_, 3, v_f_1348_);
lean_closure_set(v___f_1362_, 4, v___x_1361_);
v___x_1363_ = lean_apply_1(v_f_1348_, v_v_1357_);
v___x_1364_ = lean_apply_4(v_toBind_1353_, lean_box(0), lean_box(0), v___x_1363_, v___f_1362_);
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___lam__0(size_t v_i_1365_, lean_object* v_bs_x27_1366_, lean_object* v_inst_1367_, lean_object* v_f_1368_, size_t v_sz_1369_, lean_object* v_vNew_1370_){
_start:
{
size_t v___x_1371_; size_t v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1371_ = ((size_t)1ULL);
v___x_1372_ = lean_usize_add(v_i_1365_, v___x_1371_);
v___x_1373_ = lean_array_uset(v_bs_x27_1366_, v_i_1365_, v_vNew_1370_);
v___x_1374_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1367_, v_f_1368_, v_sz_1369_, v___x_1372_, v___x_1373_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg___boxed(lean_object* v_inst_1375_, lean_object* v_f_1376_, lean_object* v_sz_1377_, lean_object* v_i_1378_, lean_object* v_bs_1379_){
_start:
{
size_t v_sz_boxed_1380_; size_t v_i_boxed_1381_; lean_object* v_res_1382_; 
v_sz_boxed_1380_ = lean_unbox_usize(v_sz_1377_);
lean_dec(v_sz_1377_);
v_i_boxed_1381_ = lean_unbox_usize(v_i_1378_);
lean_dec(v_i_1378_);
v_res_1382_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1375_, v_f_1376_, v_sz_boxed_1380_, v_i_boxed_1381_, v_bs_1379_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object* v_00_u03b1_1383_, lean_object* v_00_u03b2_1384_, lean_object* v_m_1385_, lean_object* v_inst_1386_, lean_object* v_f_1387_, size_t v_sz_1388_, size_t v_i_1389_, lean_object* v_bs_1390_){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1386_, v_f_1387_, v_sz_1388_, v_i_1389_, v_bs_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___boxed(lean_object* v_00_u03b1_1392_, lean_object* v_00_u03b2_1393_, lean_object* v_m_1394_, lean_object* v_inst_1395_, lean_object* v_f_1396_, lean_object* v_sz_1397_, lean_object* v_i_1398_, lean_object* v_bs_1399_){
_start:
{
size_t v_sz_boxed_1400_; size_t v_i_boxed_1401_; lean_object* v_res_1402_; 
v_sz_boxed_1400_ = lean_unbox_usize(v_sz_1397_);
lean_dec(v_sz_1397_);
v_i_boxed_1401_ = lean_unbox_usize(v_i_1398_);
lean_dec(v_i_1398_);
v_res_1402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(v_00_u03b1_1392_, v_00_u03b2_1393_, v_m_1394_, v_inst_1395_, v_f_1396_, v_sz_boxed_1400_, v_i_boxed_1401_, v_bs_1399_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe___redArg(lean_object* v_inst_1403_, lean_object* v_f_1404_, lean_object* v_as_1405_){
_start:
{
size_t v_sz_1406_; size_t v___x_1407_; lean_object* v___x_1408_; 
v_sz_1406_ = lean_array_size(v_as_1405_);
v___x_1407_ = ((size_t)0ULL);
v___x_1408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1403_, v_f_1404_, v_sz_1406_, v___x_1407_, v_as_1405_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe(lean_object* v_00_u03b1_1409_, lean_object* v_00_u03b2_1410_, lean_object* v_m_1411_, lean_object* v_inst_1412_, lean_object* v_f_1413_, lean_object* v_as_1414_){
_start:
{
size_t v_sz_1415_; size_t v___x_1416_; lean_object* v___x_1417_; 
v_sz_1415_ = lean_array_size(v_as_1414_);
v___x_1416_ = ((size_t)0ULL);
v___x_1417_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v_inst_1412_, v_f_1413_, v_sz_1415_, v___x_1416_, v_as_1414_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0___boxed(lean_object* v_i_1418_, lean_object* v_bs_1419_, lean_object* v_inst_1420_, lean_object* v_f_1421_, lean_object* v_as_1422_, lean_object* v_____do__lift_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Array_mapM_map___redArg___lam__0(v_i_1418_, v_bs_1419_, v_inst_1420_, v_f_1421_, v_as_1422_, v_____do__lift_1423_);
lean_dec(v_i_1418_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg(lean_object* v_inst_1425_, lean_object* v_f_1426_, lean_object* v_as_1427_, lean_object* v_i_1428_, lean_object* v_bs_1429_){
_start:
{
lean_object* v_toApplicative_1430_; lean_object* v_toBind_1431_; lean_object* v_toPure_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; 
v_toApplicative_1430_ = lean_ctor_get(v_inst_1425_, 0);
v_toBind_1431_ = lean_ctor_get(v_inst_1425_, 1);
lean_inc(v_toBind_1431_);
v_toPure_1432_ = lean_ctor_get(v_toApplicative_1430_, 1);
v___x_1433_ = lean_array_get_size(v_as_1427_);
v___x_1434_ = lean_nat_dec_lt(v_i_1428_, v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
lean_inc(v_toPure_1432_);
lean_dec(v_toBind_1431_);
lean_dec(v_i_1428_);
lean_dec_ref(v_as_1427_);
lean_dec(v_f_1426_);
lean_dec_ref(v_inst_1425_);
v___x_1435_ = lean_apply_2(v_toPure_1432_, lean_box(0), v_bs_1429_);
return v___x_1435_;
}
else
{
lean_object* v___f_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
lean_inc_ref(v_as_1427_);
lean_inc(v_f_1426_);
lean_inc(v_i_1428_);
v___f_1436_ = lean_alloc_closure((void*)(l_Array_mapM_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1436_, 0, v_i_1428_);
lean_closure_set(v___f_1436_, 1, v_bs_1429_);
lean_closure_set(v___f_1436_, 2, v_inst_1425_);
lean_closure_set(v___f_1436_, 3, v_f_1426_);
lean_closure_set(v___f_1436_, 4, v_as_1427_);
v___x_1437_ = lean_array_fget(v_as_1427_, v_i_1428_);
lean_dec(v_i_1428_);
lean_dec_ref(v_as_1427_);
v___x_1438_ = lean_apply_1(v_f_1426_, v___x_1437_);
v___x_1439_ = lean_apply_4(v_toBind_1431_, lean_box(0), lean_box(0), v___x_1438_, v___f_1436_);
return v___x_1439_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map___redArg___lam__0(lean_object* v_i_1440_, lean_object* v_bs_1441_, lean_object* v_inst_1442_, lean_object* v_f_1443_, lean_object* v_as_1444_, lean_object* v_____do__lift_1445_){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1446_ = lean_unsigned_to_nat(1u);
v___x_1447_ = lean_nat_add(v_i_1440_, v___x_1446_);
v___x_1448_ = lean_array_push(v_bs_1441_, v_____do__lift_1445_);
v___x_1449_ = l_Array_mapM_map___redArg(v_inst_1442_, v_f_1443_, v_as_1444_, v___x_1447_, v___x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_map(lean_object* v_00_u03b1_1450_, lean_object* v_00_u03b2_1451_, lean_object* v_m_1452_, lean_object* v_inst_1453_, lean_object* v_f_1454_, lean_object* v_as_1455_, lean_object* v_i_1456_, lean_object* v_bs_1457_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Array_mapM_map___redArg(v_inst_1453_, v_f_1454_, v_as_1455_, v_i_1456_, v_bs_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed(lean_object* v_i_1459_, lean_object* v_bs_x27_1460_, lean_object* v_inst_1461_, lean_object* v_f_1462_, lean_object* v_sz_1463_, lean_object* v_vNew_1464_){
_start:
{
size_t v_i_boxed_1465_; size_t v_sz_boxed_1466_; lean_object* v_res_1467_; 
v_i_boxed_1465_ = lean_unbox_usize(v_i_1459_);
lean_dec(v_i_1459_);
v_sz_boxed_1466_ = lean_unbox_usize(v_sz_1463_);
lean_dec(v_sz_1463_);
v_res_1467_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(v_i_boxed_1465_, v_bs_x27_1460_, v_inst_1461_, v_f_1462_, v_sz_boxed_1466_, v_vNew_1464_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(lean_object* v_inst_1468_, lean_object* v_f_1469_, size_t v_sz_1470_, size_t v_i_1471_, lean_object* v_bs_1472_){
_start:
{
lean_object* v_toApplicative_1473_; lean_object* v_toBind_1474_; lean_object* v_toPure_1475_; uint8_t v___x_1476_; 
v_toApplicative_1473_ = lean_ctor_get(v_inst_1468_, 0);
v_toBind_1474_ = lean_ctor_get(v_inst_1468_, 1);
lean_inc(v_toBind_1474_);
v_toPure_1475_ = lean_ctor_get(v_toApplicative_1473_, 1);
v___x_1476_ = lean_usize_dec_lt(v_i_1471_, v_sz_1470_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; 
lean_inc(v_toPure_1475_);
lean_dec(v_toBind_1474_);
lean_dec(v_f_1469_);
lean_dec_ref(v_inst_1468_);
v___x_1477_ = lean_apply_2(v_toPure_1475_, lean_box(0), v_bs_1472_);
return v___x_1477_;
}
else
{
lean_object* v_v_1478_; lean_object* v___x_1479_; lean_object* v_bs_x27_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___f_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v_v_1478_ = lean_array_uget(v_bs_1472_, v_i_1471_);
v___x_1479_ = lean_unsigned_to_nat(0u);
v_bs_x27_1480_ = lean_array_uset(v_bs_1472_, v_i_1471_, v___x_1479_);
v___x_1481_ = lean_box_usize(v_i_1471_);
v___x_1482_ = lean_box_usize(v_sz_1470_);
lean_inc(v_f_1469_);
v___f_1483_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1483_, 0, v___x_1481_);
lean_closure_set(v___f_1483_, 1, v_bs_x27_1480_);
lean_closure_set(v___f_1483_, 2, v_inst_1468_);
lean_closure_set(v___f_1483_, 3, v_f_1469_);
lean_closure_set(v___f_1483_, 4, v___x_1482_);
v___x_1484_ = lean_usize_to_nat(v_i_1471_);
v___x_1485_ = lean_apply_3(v_f_1469_, v___x_1484_, v_v_1478_, lean_box(0));
v___x_1486_ = lean_apply_4(v_toBind_1474_, lean_box(0), lean_box(0), v___x_1485_, v___f_1483_);
return v___x_1486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___lam__0(size_t v_i_1487_, lean_object* v_bs_x27_1488_, lean_object* v_inst_1489_, lean_object* v_f_1490_, size_t v_sz_1491_, lean_object* v_vNew_1492_){
_start:
{
size_t v___x_1493_; size_t v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1493_ = ((size_t)1ULL);
v___x_1494_ = lean_usize_add(v_i_1487_, v___x_1493_);
v___x_1495_ = lean_array_uset(v_bs_x27_1488_, v_i_1487_, v_vNew_1492_);
v___x_1496_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1489_, v_f_1490_, v_sz_1491_, v___x_1494_, v___x_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg___boxed(lean_object* v_inst_1497_, lean_object* v_f_1498_, lean_object* v_sz_1499_, lean_object* v_i_1500_, lean_object* v_bs_1501_){
_start:
{
size_t v_sz_boxed_1502_; size_t v_i_boxed_1503_; lean_object* v_res_1504_; 
v_sz_boxed_1502_ = lean_unbox_usize(v_sz_1499_);
lean_dec(v_sz_1499_);
v_i_boxed_1503_ = lean_unbox_usize(v_i_1500_);
lean_dec(v_i_1500_);
v_res_1504_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1497_, v_f_1498_, v_sz_boxed_1502_, v_i_boxed_1503_, v_bs_1501_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object* v_00_u03b1_1505_, lean_object* v_00_u03b2_1506_, lean_object* v_m_1507_, lean_object* v_inst_1508_, lean_object* v_as_1509_, lean_object* v_f_1510_, size_t v_sz_1511_, size_t v_i_1512_, lean_object* v_bs_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1508_, v_f_1510_, v_sz_1511_, v_i_1512_, v_bs_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___boxed(lean_object* v_00_u03b1_1515_, lean_object* v_00_u03b2_1516_, lean_object* v_m_1517_, lean_object* v_inst_1518_, lean_object* v_as_1519_, lean_object* v_f_1520_, lean_object* v_sz_1521_, lean_object* v_i_1522_, lean_object* v_bs_1523_){
_start:
{
size_t v_sz_boxed_1524_; size_t v_i_boxed_1525_; lean_object* v_res_1526_; 
v_sz_boxed_1524_ = lean_unbox_usize(v_sz_1521_);
lean_dec(v_sz_1521_);
v_i_boxed_1525_ = lean_unbox_usize(v_i_1522_);
lean_dec(v_i_1522_);
v_res_1526_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(v_00_u03b1_1515_, v_00_u03b2_1516_, v_m_1517_, v_inst_1518_, v_as_1519_, v_f_1520_, v_sz_boxed_1524_, v_i_boxed_1525_, v_bs_1523_);
lean_dec_ref(v_as_1519_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe___redArg(lean_object* v_inst_1527_, lean_object* v_as_1528_, lean_object* v_f_1529_){
_start:
{
size_t v_sz_1530_; size_t v___x_1531_; lean_object* v___x_1532_; 
v_sz_1530_ = lean_array_size(v_as_1528_);
v___x_1531_ = ((size_t)0ULL);
v___x_1532_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1527_, v_f_1529_, v_sz_1530_, v___x_1531_, v_as_1528_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxMUnsafe(lean_object* v_00_u03b1_1533_, lean_object* v_00_u03b2_1534_, lean_object* v_m_1535_, lean_object* v_inst_1536_, lean_object* v_as_1537_, lean_object* v_f_1538_){
_start:
{
size_t v_sz_1539_; size_t v___x_1540_; lean_object* v___x_1541_; 
v_sz_1539_ = lean_array_size(v_as_1537_);
v___x_1540_ = ((size_t)0ULL);
v___x_1541_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1536_, v_f_1538_, v_sz_1539_, v___x_1540_, v_as_1537_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0___boxed(lean_object* v_j_1542_, lean_object* v_bs_1543_, lean_object* v_inst_1544_, lean_object* v_as_1545_, lean_object* v_f_1546_, lean_object* v_n_1547_, lean_object* v_____do__lift_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Array_mapFinIdxM_map___redArg___lam__0(v_j_1542_, v_bs_1543_, v_inst_1544_, v_as_1545_, v_f_1546_, v_n_1547_, v_____do__lift_1548_);
lean_dec(v_n_1547_);
lean_dec(v_j_1542_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg(lean_object* v_inst_1550_, lean_object* v_as_1551_, lean_object* v_f_1552_, lean_object* v_i_1553_, lean_object* v_j_1554_, lean_object* v_bs_1555_){
_start:
{
lean_object* v_toApplicative_1556_; lean_object* v_toBind_1557_; lean_object* v_toPure_1558_; lean_object* v_zero_1559_; uint8_t v_isZero_1560_; 
v_toApplicative_1556_ = lean_ctor_get(v_inst_1550_, 0);
v_toBind_1557_ = lean_ctor_get(v_inst_1550_, 1);
lean_inc(v_toBind_1557_);
v_toPure_1558_ = lean_ctor_get(v_toApplicative_1556_, 1);
v_zero_1559_ = lean_unsigned_to_nat(0u);
v_isZero_1560_ = lean_nat_dec_eq(v_i_1553_, v_zero_1559_);
if (v_isZero_1560_ == 1)
{
lean_object* v___x_1561_; 
lean_inc(v_toPure_1558_);
lean_dec(v_toBind_1557_);
lean_dec(v_j_1554_);
lean_dec(v_f_1552_);
lean_dec_ref(v_as_1551_);
lean_dec_ref(v_inst_1550_);
v___x_1561_ = lean_apply_2(v_toPure_1558_, lean_box(0), v_bs_1555_);
return v___x_1561_;
}
else
{
lean_object* v_one_1562_; lean_object* v_n_1563_; lean_object* v___f_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v_one_1562_ = lean_unsigned_to_nat(1u);
v_n_1563_ = lean_nat_sub(v_i_1553_, v_one_1562_);
lean_inc(v_f_1552_);
lean_inc_ref(v_as_1551_);
lean_inc(v_j_1554_);
v___f_1564_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1564_, 0, v_j_1554_);
lean_closure_set(v___f_1564_, 1, v_bs_1555_);
lean_closure_set(v___f_1564_, 2, v_inst_1550_);
lean_closure_set(v___f_1564_, 3, v_as_1551_);
lean_closure_set(v___f_1564_, 4, v_f_1552_);
lean_closure_set(v___f_1564_, 5, v_n_1563_);
v___x_1565_ = lean_array_fget(v_as_1551_, v_j_1554_);
lean_dec_ref(v_as_1551_);
v___x_1566_ = lean_apply_3(v_f_1552_, v_j_1554_, v___x_1565_, lean_box(0));
v___x_1567_ = lean_apply_4(v_toBind_1557_, lean_box(0), lean_box(0), v___x_1566_, v___f_1564_);
return v___x_1567_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___lam__0(lean_object* v_j_1568_, lean_object* v_bs_1569_, lean_object* v_inst_1570_, lean_object* v_as_1571_, lean_object* v_f_1572_, lean_object* v_n_1573_, lean_object* v_____do__lift_1574_){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1575_ = lean_unsigned_to_nat(1u);
v___x_1576_ = lean_nat_add(v_j_1568_, v___x_1575_);
v___x_1577_ = lean_array_push(v_bs_1569_, v_____do__lift_1574_);
v___x_1578_ = l_Array_mapFinIdxM_map___redArg(v_inst_1570_, v_as_1571_, v_f_1572_, v_n_1573_, v___x_1576_, v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___redArg___boxed(lean_object* v_inst_1579_, lean_object* v_as_1580_, lean_object* v_f_1581_, lean_object* v_i_1582_, lean_object* v_j_1583_, lean_object* v_bs_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Array_mapFinIdxM_map___redArg(v_inst_1579_, v_as_1580_, v_f_1581_, v_i_1582_, v_j_1583_, v_bs_1584_);
lean_dec(v_i_1582_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map(lean_object* v_00_u03b1_1586_, lean_object* v_00_u03b2_1587_, lean_object* v_m_1588_, lean_object* v_inst_1589_, lean_object* v_as_1590_, lean_object* v_f_1591_, lean_object* v_i_1592_, lean_object* v_j_1593_, lean_object* v_inv_1594_, lean_object* v_bs_1595_){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = l_Array_mapFinIdxM_map___redArg(v_inst_1589_, v_as_1590_, v_f_1591_, v_i_1592_, v_j_1593_, v_bs_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___boxed(lean_object* v_00_u03b1_1597_, lean_object* v_00_u03b2_1598_, lean_object* v_m_1599_, lean_object* v_inst_1600_, lean_object* v_as_1601_, lean_object* v_f_1602_, lean_object* v_i_1603_, lean_object* v_j_1604_, lean_object* v_inv_1605_, lean_object* v_bs_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Array_mapFinIdxM_map(v_00_u03b1_1597_, v_00_u03b2_1598_, v_m_1599_, v_inst_1600_, v_as_1601_, v_f_1602_, v_i_1603_, v_j_1604_, v_inv_1605_, v_bs_1606_);
lean_dec(v_i_1603_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg___lam__0(lean_object* v_f_1608_, lean_object* v_i_1609_, lean_object* v_a_1610_, lean_object* v_x_1611_){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_apply_2(v_f_1608_, v_i_1609_, v_a_1610_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM___redArg(lean_object* v_inst_1613_, lean_object* v_f_1614_, lean_object* v_as_1615_){
_start:
{
lean_object* v___f_1616_; size_t v_sz_1617_; size_t v___x_1618_; lean_object* v___x_1619_; 
v___f_1616_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1616_, 0, v_f_1614_);
v_sz_1617_ = lean_array_size(v_as_1615_);
v___x_1618_ = ((size_t)0ULL);
v___x_1619_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1613_, v___f_1616_, v_sz_1617_, v___x_1618_, v_as_1615_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdxM(lean_object* v_00_u03b1_1620_, lean_object* v_00_u03b2_1621_, lean_object* v_m_1622_, lean_object* v_inst_1623_, lean_object* v_f_1624_, lean_object* v_as_1625_){
_start:
{
lean_object* v___f_1626_; size_t v_sz_1627_; size_t v___x_1628_; lean_object* v___x_1629_; 
v___f_1626_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1626_, 0, v_f_1624_);
v_sz_1627_ = lean_array_size(v_as_1625_);
v___x_1628_ = ((size_t)0ULL);
v___x_1629_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v_inst_1623_, v___f_1626_, v_sz_1627_, v___x_1628_, v_as_1625_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed(lean_object* v_i_1630_, lean_object* v_inst_1631_, lean_object* v_f_1632_, lean_object* v_as_1633_, lean_object* v_x_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(v_i_1630_, v_inst_1631_, v_f_1632_, v_as_1633_, v_x_1634_);
lean_dec(v_i_1630_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(lean_object* v_inst_1636_, lean_object* v_f_1637_, lean_object* v_as_1638_, lean_object* v_i_1639_){
_start:
{
lean_object* v___x_1640_; uint8_t v___x_1641_; 
v___x_1640_ = lean_array_get_size(v_as_1638_);
v___x_1641_ = lean_nat_dec_lt(v_i_1639_, v___x_1640_);
if (v___x_1641_ == 0)
{
lean_object* v_failure_1642_; lean_object* v___x_1643_; 
lean_dec(v_i_1639_);
lean_dec_ref(v_as_1638_);
lean_dec(v_f_1637_);
v_failure_1642_ = lean_ctor_get(v_inst_1636_, 1);
lean_inc(v_failure_1642_);
lean_dec_ref(v_inst_1636_);
v___x_1643_ = lean_apply_1(v_failure_1642_, lean_box(0));
return v___x_1643_;
}
else
{
lean_object* v_orElse_1644_; lean_object* v___f_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v_orElse_1644_ = lean_ctor_get(v_inst_1636_, 2);
lean_inc(v_orElse_1644_);
lean_inc_ref(v_as_1638_);
lean_inc(v_f_1637_);
lean_inc(v_i_1639_);
v___f_1645_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1645_, 0, v_i_1639_);
lean_closure_set(v___f_1645_, 1, v_inst_1636_);
lean_closure_set(v___f_1645_, 2, v_f_1637_);
lean_closure_set(v___f_1645_, 3, v_as_1638_);
v___x_1646_ = lean_array_fget(v_as_1638_, v_i_1639_);
lean_dec(v_i_1639_);
lean_dec_ref(v_as_1638_);
v___x_1647_ = lean_apply_1(v_f_1637_, v___x_1646_);
v___x_1648_ = lean_apply_3(v_orElse_1644_, lean_box(0), v___x_1647_, v___f_1645_);
return v___x_1648_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg___lam__0(lean_object* v_i_1649_, lean_object* v_inst_1650_, lean_object* v_f_1651_, lean_object* v_as_1652_, lean_object* v_x_1653_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1654_ = lean_unsigned_to_nat(1u);
v___x_1655_ = lean_nat_add(v_i_1649_, v___x_1654_);
v___x_1656_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1650_, v_f_1651_, v_as_1652_, v___x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go(lean_object* v_00_u03b2_1657_, lean_object* v_00_u03b1_1658_, lean_object* v_m_1659_, lean_object* v_inst_1660_, lean_object* v_f_1661_, lean_object* v_as_1662_, lean_object* v_i_1663_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1660_, v_f_1661_, v_as_1662_, v_i_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Array_firstM___redArg(lean_object* v_inst_1665_, lean_object* v_f_1666_, lean_object* v_as_1667_){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = lean_unsigned_to_nat(0u);
v___x_1669_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1665_, v_f_1666_, v_as_1667_, v___x_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Array_firstM(lean_object* v_00_u03b2_1670_, lean_object* v_00_u03b1_1671_, lean_object* v_m_1672_, lean_object* v_inst_1673_, lean_object* v_f_1674_, lean_object* v_as_1675_){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = lean_unsigned_to_nat(0u);
v___x_1677_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___redArg(v_inst_1673_, v_f_1674_, v_as_1675_, v___x_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__0(lean_object* v___x_1678_, lean_object* v_toPure_1679_, lean_object* v___x_1680_, lean_object* v_____do__lift_1681_){
_start:
{
if (lean_obj_tag(v_____do__lift_1681_) == 1)
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
lean_dec_ref(v___x_1680_);
v___x_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1682_, 0, v_____do__lift_1681_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
lean_ctor_set(v___x_1683_, 1, v___x_1678_);
v___x_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
v___x_1685_ = lean_apply_2(v_toPure_1679_, lean_box(0), v___x_1684_);
return v___x_1685_;
}
else
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
lean_dec(v_____do__lift_1681_);
v___x_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1680_);
v___x_1687_ = lean_apply_2(v_toPure_1679_, lean_box(0), v___x_1686_);
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1(lean_object* v_f_1688_, lean_object* v_toBind_1689_, lean_object* v___f_1690_, lean_object* v_a_1691_, lean_object* v_x_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = lean_apply_1(v_f_1688_, v_a_1691_);
v___x_1695_ = lean_apply_4(v_toBind_1689_, lean_box(0), lean_box(0), v___x_1694_, v___f_1690_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__1___boxed(lean_object* v_f_1696_, lean_object* v_toBind_1697_, lean_object* v___f_1698_, lean_object* v_a_1699_, lean_object* v_x_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Array_findSomeM_x3f___redArg___lam__1(v_f_1696_, v_toBind_1697_, v___f_1698_, v_a_1699_, v_x_1700_, v___y_1701_);
lean_dec_ref(v___y_1701_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg___lam__2(lean_object* v_toPure_1703_, lean_object* v_____s_1704_){
_start:
{
lean_object* v_fst_1705_; 
v_fst_1705_ = lean_ctor_get(v_____s_1704_, 0);
lean_inc(v_fst_1705_);
lean_dec_ref(v_____s_1704_);
if (lean_obj_tag(v_fst_1705_) == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_box(0);
v___x_1707_ = lean_apply_2(v_toPure_1703_, lean_box(0), v___x_1706_);
return v___x_1707_;
}
else
{
lean_object* v_val_1708_; lean_object* v___x_1709_; 
v_val_1708_ = lean_ctor_get(v_fst_1705_, 0);
lean_inc(v_val_1708_);
lean_dec_ref_known(v_fst_1705_, 1);
v___x_1709_ = lean_apply_2(v_toPure_1703_, lean_box(0), v_val_1708_);
return v___x_1709_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f___redArg(lean_object* v_inst_1713_, lean_object* v_f_1714_, lean_object* v_as_1715_){
_start:
{
lean_object* v_toApplicative_1716_; lean_object* v_toBind_1717_; lean_object* v_toPure_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___f_1721_; lean_object* v___f_1722_; lean_object* v___f_1723_; size_t v_sz_1724_; size_t v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_toApplicative_1716_ = lean_ctor_get(v_inst_1713_, 0);
v_toBind_1717_ = lean_ctor_get(v_inst_1713_, 1);
lean_inc_n(v_toBind_1717_, 2);
v_toPure_1718_ = lean_ctor_get(v_toApplicative_1716_, 1);
v___x_1719_ = lean_box(0);
v___x_1720_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1718_, 2);
v___f_1721_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1721_, 0, v___x_1719_);
lean_closure_set(v___f_1721_, 1, v_toPure_1718_);
lean_closure_set(v___f_1721_, 2, v___x_1720_);
v___f_1722_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1722_, 0, v_f_1714_);
lean_closure_set(v___f_1722_, 1, v_toBind_1717_);
lean_closure_set(v___f_1722_, 2, v___f_1721_);
v___f_1723_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1723_, 0, v_toPure_1718_);
v_sz_1724_ = lean_array_size(v_as_1715_);
v___x_1725_ = ((size_t)0ULL);
v___x_1726_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1713_, v_as_1715_, v___f_1722_, v_sz_1724_, v___x_1725_, v___x_1720_);
v___x_1727_ = lean_apply_4(v_toBind_1717_, lean_box(0), lean_box(0), v___x_1726_, v___f_1723_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeM_x3f(lean_object* v_00_u03b1_1728_, lean_object* v_00_u03b2_1729_, lean_object* v_m_1730_, lean_object* v_inst_1731_, lean_object* v_f_1732_, lean_object* v_as_1733_){
_start:
{
lean_object* v_toApplicative_1734_; lean_object* v_toBind_1735_; lean_object* v_toPure_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___f_1739_; lean_object* v___f_1740_; lean_object* v___f_1741_; size_t v_sz_1742_; size_t v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_toApplicative_1734_ = lean_ctor_get(v_inst_1731_, 0);
v_toBind_1735_ = lean_ctor_get(v_inst_1731_, 1);
lean_inc_n(v_toBind_1735_, 2);
v_toPure_1736_ = lean_ctor_get(v_toApplicative_1734_, 1);
v___x_1737_ = lean_box(0);
v___x_1738_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1736_, 2);
v___f_1739_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1739_, 0, v___x_1737_);
lean_closure_set(v___f_1739_, 1, v_toPure_1736_);
lean_closure_set(v___f_1739_, 2, v___x_1738_);
v___f_1740_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1740_, 0, v_f_1732_);
lean_closure_set(v___f_1740_, 1, v_toBind_1735_);
lean_closure_set(v___f_1740_, 2, v___f_1739_);
v___f_1741_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1741_, 0, v_toPure_1736_);
v_sz_1742_ = lean_array_size(v_as_1733_);
v___x_1743_ = ((size_t)0ULL);
v___x_1744_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1731_, v_as_1733_, v___f_1740_, v_sz_1742_, v___x_1743_, v___x_1738_);
v___x_1745_ = lean_apply_4(v_toBind_1735_, lean_box(0), lean_box(0), v___x_1744_, v___f_1741_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0(lean_object* v___x_1746_, lean_object* v_toPure_1747_, lean_object* v_a_1748_, lean_object* v___x_1749_, uint8_t v_____do__lift_1750_){
_start:
{
if (v_____do__lift_1750_ == 0)
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec(v_a_1748_);
v___x_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1746_);
v___x_1752_ = lean_apply_2(v_toPure_1747_, lean_box(0), v___x_1751_);
return v___x_1752_;
}
else
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_dec_ref(v___x_1746_);
v___x_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_a_1748_);
v___x_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
v___x_1755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
lean_ctor_set(v___x_1755_, 1, v___x_1749_);
v___x_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
v___x_1757_ = lean_apply_2(v_toPure_1747_, lean_box(0), v___x_1756_);
return v___x_1757_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__0___boxed(lean_object* v___x_1758_, lean_object* v_toPure_1759_, lean_object* v_a_1760_, lean_object* v___x_1761_, lean_object* v_____do__lift_1762_){
_start:
{
uint8_t v_____do__lift_196__boxed_1763_; lean_object* v_res_1764_; 
v_____do__lift_196__boxed_1763_ = lean_unbox(v_____do__lift_1762_);
v_res_1764_ = l_Array_findM_x3f___redArg___lam__0(v___x_1758_, v_toPure_1759_, v_a_1760_, v___x_1761_, v_____do__lift_196__boxed_1763_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1(lean_object* v___x_1765_, lean_object* v_toPure_1766_, lean_object* v___x_1767_, lean_object* v_p_1768_, lean_object* v_toBind_1769_, lean_object* v_a_1770_, lean_object* v_x_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v___f_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
lean_inc(v_a_1770_);
v___f_1773_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1773_, 0, v___x_1765_);
lean_closure_set(v___f_1773_, 1, v_toPure_1766_);
lean_closure_set(v___f_1773_, 2, v_a_1770_);
lean_closure_set(v___f_1773_, 3, v___x_1767_);
v___x_1774_ = lean_apply_1(v_p_1768_, v_a_1770_);
v___x_1775_ = lean_apply_4(v_toBind_1769_, lean_box(0), lean_box(0), v___x_1774_, v___f_1773_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg___lam__1___boxed(lean_object* v___x_1776_, lean_object* v_toPure_1777_, lean_object* v___x_1778_, lean_object* v_p_1779_, lean_object* v_toBind_1780_, lean_object* v_a_1781_, lean_object* v_x_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Array_findM_x3f___redArg___lam__1(v___x_1776_, v_toPure_1777_, v___x_1778_, v_p_1779_, v_toBind_1780_, v_a_1781_, v_x_1782_, v___y_1783_);
lean_dec_ref(v___y_1783_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f___redArg(lean_object* v_inst_1785_, lean_object* v_p_1786_, lean_object* v_as_1787_){
_start:
{
lean_object* v_toApplicative_1788_; lean_object* v_toBind_1789_; lean_object* v_toPure_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___f_1793_; lean_object* v___f_1794_; size_t v_sz_1795_; size_t v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v_toApplicative_1788_ = lean_ctor_get(v_inst_1785_, 0);
v_toBind_1789_ = lean_ctor_get(v_inst_1785_, 1);
lean_inc_n(v_toBind_1789_, 2);
v_toPure_1790_ = lean_ctor_get(v_toApplicative_1788_, 1);
v___x_1791_ = lean_box(0);
v___x_1792_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1790_, 2);
v___f_1793_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1793_, 0, v___x_1792_);
lean_closure_set(v___f_1793_, 1, v_toPure_1790_);
lean_closure_set(v___f_1793_, 2, v___x_1791_);
lean_closure_set(v___f_1793_, 3, v_p_1786_);
lean_closure_set(v___f_1793_, 4, v_toBind_1789_);
v___f_1794_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1794_, 0, v_toPure_1790_);
v_sz_1795_ = lean_array_size(v_as_1787_);
v___x_1796_ = ((size_t)0ULL);
v___x_1797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1785_, v_as_1787_, v___f_1793_, v_sz_1795_, v___x_1796_, v___x_1792_);
v___x_1798_ = lean_apply_4(v_toBind_1789_, lean_box(0), lean_box(0), v___x_1797_, v___f_1794_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_Array_findM_x3f(lean_object* v_m_1799_, lean_object* v_00_u03b1_1800_, lean_object* v_inst_1801_, lean_object* v_p_1802_, lean_object* v_as_1803_){
_start:
{
lean_object* v_toApplicative_1804_; lean_object* v_toBind_1805_; lean_object* v_toPure_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___f_1809_; lean_object* v___f_1810_; size_t v_sz_1811_; size_t v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v_toApplicative_1804_ = lean_ctor_get(v_inst_1801_, 0);
v_toBind_1805_ = lean_ctor_get(v_inst_1801_, 1);
lean_inc_n(v_toBind_1805_, 2);
v_toPure_1806_ = lean_ctor_get(v_toApplicative_1804_, 1);
v___x_1807_ = lean_box(0);
v___x_1808_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1806_, 2);
v___f_1809_ = lean_alloc_closure((void*)(l_Array_findM_x3f___redArg___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1809_, 0, v___x_1808_);
lean_closure_set(v___f_1809_, 1, v_toPure_1806_);
lean_closure_set(v___f_1809_, 2, v___x_1807_);
lean_closure_set(v___f_1809_, 3, v_p_1802_);
lean_closure_set(v___f_1809_, 4, v_toBind_1805_);
v___f_1810_ = lean_alloc_closure((void*)(l_Array_findSomeM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1810_, 0, v_toPure_1806_);
v_sz_1811_ = lean_array_size(v_as_1803_);
v___x_1812_ = ((size_t)0ULL);
v___x_1813_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1801_, v_as_1803_, v___f_1809_, v_sz_1811_, v___x_1812_, v___x_1808_);
v___x_1814_ = lean_apply_4(v_toBind_1805_, lean_box(0), lean_box(0), v___x_1813_, v___f_1810_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0(lean_object* v_snd_1815_, lean_object* v___x_1816_, lean_object* v_toPure_1817_, uint8_t v_____do__lift_1818_){
_start:
{
if (v_____do__lift_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1819_ = lean_unsigned_to_nat(1u);
v___x_1820_ = lean_nat_add(v_snd_1815_, v___x_1819_);
lean_dec(v_snd_1815_);
v___x_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1816_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
v___x_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
v___x_1823_ = lean_apply_2(v_toPure_1817_, lean_box(0), v___x_1822_);
return v___x_1823_;
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_dec(v___x_1816_);
lean_inc(v_snd_1815_);
v___x_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1824_, 0, v_snd_1815_);
v___x_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
v___x_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
lean_ctor_set(v___x_1826_, 1, v_snd_1815_);
v___x_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
v___x_1828_ = lean_apply_2(v_toPure_1817_, lean_box(0), v___x_1827_);
return v___x_1828_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__0___boxed(lean_object* v_snd_1829_, lean_object* v___x_1830_, lean_object* v_toPure_1831_, lean_object* v_____do__lift_1832_){
_start:
{
uint8_t v_____do__lift_234__boxed_1833_; lean_object* v_res_1834_; 
v_____do__lift_234__boxed_1833_ = lean_unbox(v_____do__lift_1832_);
v_res_1834_ = l_Array_findIdxM_x3f___redArg___lam__0(v_snd_1829_, v___x_1830_, v_toPure_1831_, v_____do__lift_234__boxed_1833_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__1(lean_object* v___x_1835_, lean_object* v_toPure_1836_, lean_object* v_p_1837_, lean_object* v_toBind_1838_, lean_object* v_a_1839_, lean_object* v_x_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_snd_1842_; lean_object* v___f_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v_snd_1842_ = lean_ctor_get(v___y_1841_, 1);
lean_inc(v_snd_1842_);
lean_dec_ref(v___y_1841_);
v___f_1843_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1843_, 0, v_snd_1842_);
lean_closure_set(v___f_1843_, 1, v___x_1835_);
lean_closure_set(v___f_1843_, 2, v_toPure_1836_);
v___x_1844_ = lean_apply_1(v_p_1837_, v_a_1839_);
v___x_1845_ = lean_apply_4(v_toBind_1838_, lean_box(0), lean_box(0), v___x_1844_, v___f_1843_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg___lam__2(lean_object* v_toPure_1846_, lean_object* v_____s_1847_){
_start:
{
lean_object* v_fst_1848_; 
v_fst_1848_ = lean_ctor_get(v_____s_1847_, 0);
lean_inc(v_fst_1848_);
lean_dec_ref(v_____s_1847_);
if (lean_obj_tag(v_fst_1848_) == 0)
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = lean_box(0);
v___x_1850_ = lean_apply_2(v_toPure_1846_, lean_box(0), v___x_1849_);
return v___x_1850_;
}
else
{
lean_object* v_val_1851_; lean_object* v___x_1852_; 
v_val_1851_ = lean_ctor_get(v_fst_1848_, 0);
lean_inc(v_val_1851_);
lean_dec_ref_known(v_fst_1848_, 1);
v___x_1852_ = lean_apply_2(v_toPure_1846_, lean_box(0), v_val_1851_);
return v___x_1852_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f___redArg(lean_object* v_inst_1856_, lean_object* v_p_1857_, lean_object* v_as_1858_){
_start:
{
lean_object* v_toApplicative_1859_; lean_object* v_toBind_1860_; lean_object* v_toPure_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___f_1864_; lean_object* v___f_1865_; size_t v_sz_1866_; size_t v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v_toApplicative_1859_ = lean_ctor_get(v_inst_1856_, 0);
v_toBind_1860_ = lean_ctor_get(v_inst_1856_, 1);
lean_inc_n(v_toBind_1860_, 2);
v_toPure_1861_ = lean_ctor_get(v_toApplicative_1859_, 1);
v___x_1862_ = lean_box(0);
v___x_1863_ = ((lean_object*)(l_Array_findIdxM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1861_, 2);
v___f_1864_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__1), 7, 4);
lean_closure_set(v___f_1864_, 0, v___x_1862_);
lean_closure_set(v___f_1864_, 1, v_toPure_1861_);
lean_closure_set(v___f_1864_, 2, v_p_1857_);
lean_closure_set(v___f_1864_, 3, v_toBind_1860_);
v___f_1865_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1865_, 0, v_toPure_1861_);
v_sz_1866_ = lean_array_size(v_as_1858_);
v___x_1867_ = ((size_t)0ULL);
v___x_1868_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1856_, v_as_1858_, v___f_1864_, v_sz_1866_, v___x_1867_, v___x_1863_);
v___x_1869_ = lean_apply_4(v_toBind_1860_, lean_box(0), lean_box(0), v___x_1868_, v___f_1865_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdxM_x3f(lean_object* v_00_u03b1_1870_, lean_object* v_m_1871_, lean_object* v_inst_1872_, lean_object* v_p_1873_, lean_object* v_as_1874_){
_start:
{
lean_object* v_toApplicative_1875_; lean_object* v_toBind_1876_; lean_object* v_toPure_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___f_1880_; lean_object* v___f_1881_; size_t v_sz_1882_; size_t v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v_toApplicative_1875_ = lean_ctor_get(v_inst_1872_, 0);
v_toBind_1876_ = lean_ctor_get(v_inst_1872_, 1);
lean_inc_n(v_toBind_1876_, 2);
v_toPure_1877_ = lean_ctor_get(v_toApplicative_1875_, 1);
v___x_1878_ = lean_box(0);
v___x_1879_ = ((lean_object*)(l_Array_findIdxM_x3f___redArg___closed__0));
lean_inc_n(v_toPure_1877_, 2);
v___f_1880_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__1), 7, 4);
lean_closure_set(v___f_1880_, 0, v___x_1878_);
lean_closure_set(v___f_1880_, 1, v_toPure_1877_);
lean_closure_set(v___f_1880_, 2, v_p_1873_);
lean_closure_set(v___f_1880_, 3, v_toBind_1876_);
v___f_1881_ = lean_alloc_closure((void*)(l_Array_findIdxM_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1881_, 0, v_toPure_1877_);
v_sz_1882_ = lean_array_size(v_as_1874_);
v___x_1883_ = ((size_t)0ULL);
v___x_1884_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v_inst_1872_, v_as_1874_, v___f_1880_, v_sz_1882_, v___x_1883_, v___x_1879_);
v___x_1885_ = lean_apply_4(v_toBind_1876_, lean_box(0), lean_box(0), v___x_1884_, v___f_1881_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed(lean_object* v_i_1886_, lean_object* v_inst_1887_, lean_object* v_p_1888_, lean_object* v_as_1889_, lean_object* v_stop_1890_, lean_object* v_toPure_1891_, lean_object* v_____do__lift_1892_){
_start:
{
size_t v_i_boxed_1893_; size_t v_stop_boxed_1894_; uint8_t v_____do__lift_114__boxed_1895_; lean_object* v_res_1896_; 
v_i_boxed_1893_ = lean_unbox_usize(v_i_1886_);
lean_dec(v_i_1886_);
v_stop_boxed_1894_ = lean_unbox_usize(v_stop_1890_);
lean_dec(v_stop_1890_);
v_____do__lift_114__boxed_1895_ = lean_unbox(v_____do__lift_1892_);
v_res_1896_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(v_i_boxed_1893_, v_inst_1887_, v_p_1888_, v_as_1889_, v_stop_boxed_1894_, v_toPure_1891_, v_____do__lift_114__boxed_1895_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(lean_object* v_inst_1897_, lean_object* v_p_1898_, lean_object* v_as_1899_, size_t v_i_1900_, size_t v_stop_1901_){
_start:
{
lean_object* v_toApplicative_1902_; lean_object* v_toBind_1903_; lean_object* v_toPure_1904_; uint8_t v___x_1905_; 
v_toApplicative_1902_ = lean_ctor_get(v_inst_1897_, 0);
v_toBind_1903_ = lean_ctor_get(v_inst_1897_, 1);
lean_inc(v_toBind_1903_);
v_toPure_1904_ = lean_ctor_get(v_toApplicative_1902_, 1);
lean_inc(v_toPure_1904_);
v___x_1905_ = lean_usize_dec_eq(v_i_1900_, v_stop_1901_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___f_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1906_ = lean_box_usize(v_i_1900_);
v___x_1907_ = lean_box_usize(v_stop_1901_);
lean_inc_ref(v_as_1899_);
lean_inc(v_p_1898_);
v___f_1908_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1908_, 0, v___x_1906_);
lean_closure_set(v___f_1908_, 1, v_inst_1897_);
lean_closure_set(v___f_1908_, 2, v_p_1898_);
lean_closure_set(v___f_1908_, 3, v_as_1899_);
lean_closure_set(v___f_1908_, 4, v___x_1907_);
lean_closure_set(v___f_1908_, 5, v_toPure_1904_);
v___x_1909_ = lean_array_uget(v_as_1899_, v_i_1900_);
lean_dec_ref(v_as_1899_);
v___x_1910_ = lean_apply_1(v_p_1898_, v___x_1909_);
v___x_1911_ = lean_apply_4(v_toBind_1903_, lean_box(0), lean_box(0), v___x_1910_, v___f_1908_);
return v___x_1911_;
}
else
{
uint8_t v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
lean_dec(v_toBind_1903_);
lean_dec_ref(v_as_1899_);
lean_dec(v_p_1898_);
lean_dec_ref(v_inst_1897_);
v___x_1912_ = 0;
v___x_1913_ = lean_box(v___x_1912_);
v___x_1914_ = lean_apply_2(v_toPure_1904_, lean_box(0), v___x_1913_);
return v___x_1914_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___lam__0(size_t v_i_1915_, lean_object* v_inst_1916_, lean_object* v_p_1917_, lean_object* v_as_1918_, size_t v_stop_1919_, lean_object* v_toPure_1920_, uint8_t v_____do__lift_1921_){
_start:
{
if (v_____do__lift_1921_ == 0)
{
size_t v___x_1922_; size_t v___x_1923_; lean_object* v___x_1924_; 
lean_dec(v_toPure_1920_);
v___x_1922_ = ((size_t)1ULL);
v___x_1923_ = lean_usize_add(v_i_1915_, v___x_1922_);
v___x_1924_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1916_, v_p_1917_, v_as_1918_, v___x_1923_, v_stop_1919_);
return v___x_1924_;
}
else
{
lean_object* v___x_1925_; lean_object* v___x_1926_; 
lean_dec_ref(v_as_1918_);
lean_dec(v_p_1917_);
lean_dec_ref(v_inst_1916_);
v___x_1925_ = lean_box(v_____do__lift_1921_);
v___x_1926_ = lean_apply_2(v_toPure_1920_, lean_box(0), v___x_1925_);
return v___x_1926_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg___boxed(lean_object* v_inst_1927_, lean_object* v_p_1928_, lean_object* v_as_1929_, lean_object* v_i_1930_, lean_object* v_stop_1931_){
_start:
{
size_t v_i_boxed_1932_; size_t v_stop_boxed_1933_; lean_object* v_res_1934_; 
v_i_boxed_1932_ = lean_unbox_usize(v_i_1930_);
lean_dec(v_i_1930_);
v_stop_boxed_1933_ = lean_unbox_usize(v_stop_1931_);
lean_dec(v_stop_1931_);
v_res_1934_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1927_, v_p_1928_, v_as_1929_, v_i_boxed_1932_, v_stop_boxed_1933_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object* v_00_u03b1_1935_, lean_object* v_m_1936_, lean_object* v_inst_1937_, lean_object* v_p_1938_, lean_object* v_as_1939_, size_t v_i_1940_, size_t v_stop_1941_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1937_, v_p_1938_, v_as_1939_, v_i_1940_, v_stop_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___boxed(lean_object* v_00_u03b1_1943_, lean_object* v_m_1944_, lean_object* v_inst_1945_, lean_object* v_p_1946_, lean_object* v_as_1947_, lean_object* v_i_1948_, lean_object* v_stop_1949_){
_start:
{
size_t v_i_boxed_1950_; size_t v_stop_boxed_1951_; lean_object* v_res_1952_; 
v_i_boxed_1950_ = lean_unbox_usize(v_i_1948_);
lean_dec(v_i_1948_);
v_stop_boxed_1951_ = lean_unbox_usize(v_stop_1949_);
lean_dec(v_stop_1949_);
v_res_1952_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(v_00_u03b1_1943_, v_m_1944_, v_inst_1945_, v_p_1946_, v_as_1947_, v_i_boxed_1950_, v_stop_boxed_1951_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg(lean_object* v_inst_1953_, lean_object* v_p_1954_, lean_object* v_as_1955_, lean_object* v_start_1956_, lean_object* v_stop_1957_){
_start:
{
lean_object* v_toApplicative_1958_; lean_object* v_toPure_1959_; lean_object* v___y_1961_; uint8_t v___x_1968_; 
v_toApplicative_1958_ = lean_ctor_get(v_inst_1953_, 0);
v_toPure_1959_ = lean_ctor_get(v_toApplicative_1958_, 1);
v___x_1968_ = lean_nat_dec_lt(v_start_1956_, v_stop_1957_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
lean_inc(v_toPure_1959_);
lean_dec(v_stop_1957_);
lean_dec_ref(v_as_1955_);
lean_dec(v_p_1954_);
lean_dec_ref(v_inst_1953_);
v___x_1969_ = lean_box(v___x_1968_);
v___x_1970_ = lean_apply_2(v_toPure_1959_, lean_box(0), v___x_1969_);
return v___x_1970_;
}
else
{
lean_object* v___x_1971_; uint8_t v___x_1972_; 
v___x_1971_ = lean_array_get_size(v_as_1955_);
v___x_1972_ = lean_nat_dec_le(v_stop_1957_, v___x_1971_);
if (v___x_1972_ == 0)
{
lean_dec(v_stop_1957_);
v___y_1961_ = v___x_1971_;
goto v___jp_1960_;
}
else
{
v___y_1961_ = v_stop_1957_;
goto v___jp_1960_;
}
}
v___jp_1960_:
{
uint8_t v___x_1962_; 
v___x_1962_ = lean_nat_dec_lt(v_start_1956_, v___y_1961_);
if (v___x_1962_ == 0)
{
lean_object* v___x_1963_; lean_object* v___x_1964_; 
lean_inc(v_toPure_1959_);
lean_dec(v___y_1961_);
lean_dec_ref(v_as_1955_);
lean_dec(v_p_1954_);
lean_dec_ref(v_inst_1953_);
v___x_1963_ = lean_box(v___x_1962_);
v___x_1964_ = lean_apply_2(v_toPure_1959_, lean_box(0), v___x_1963_);
return v___x_1964_;
}
else
{
size_t v___x_1965_; size_t v___x_1966_; lean_object* v___x_1967_; 
v___x_1965_ = lean_usize_of_nat(v_start_1956_);
v___x_1966_ = lean_usize_of_nat(v___y_1961_);
lean_dec(v___y_1961_);
v___x_1967_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1953_, v_p_1954_, v_as_1955_, v___x_1965_, v___x_1966_);
return v___x_1967_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___redArg___boxed(lean_object* v_inst_1973_, lean_object* v_p_1974_, lean_object* v_as_1975_, lean_object* v_start_1976_, lean_object* v_stop_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Array_anyMUnsafe___redArg(v_inst_1973_, v_p_1974_, v_as_1975_, v_start_1976_, v_stop_1977_);
lean_dec(v_start_1976_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe(lean_object* v_00_u03b1_1979_, lean_object* v_m_1980_, lean_object* v_inst_1981_, lean_object* v_p_1982_, lean_object* v_as_1983_, lean_object* v_start_1984_, lean_object* v_stop_1985_){
_start:
{
lean_object* v_toApplicative_1986_; lean_object* v_toPure_1987_; lean_object* v___y_1989_; uint8_t v___x_1996_; 
v_toApplicative_1986_ = lean_ctor_get(v_inst_1981_, 0);
v_toPure_1987_ = lean_ctor_get(v_toApplicative_1986_, 1);
v___x_1996_ = lean_nat_dec_lt(v_start_1984_, v_stop_1985_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
lean_inc(v_toPure_1987_);
lean_dec(v_stop_1985_);
lean_dec_ref(v_as_1983_);
lean_dec(v_p_1982_);
lean_dec_ref(v_inst_1981_);
v___x_1997_ = lean_box(v___x_1996_);
v___x_1998_ = lean_apply_2(v_toPure_1987_, lean_box(0), v___x_1997_);
return v___x_1998_;
}
else
{
lean_object* v___x_1999_; uint8_t v___x_2000_; 
v___x_1999_ = lean_array_get_size(v_as_1983_);
v___x_2000_ = lean_nat_dec_le(v_stop_1985_, v___x_1999_);
if (v___x_2000_ == 0)
{
lean_dec(v_stop_1985_);
v___y_1989_ = v___x_1999_;
goto v___jp_1988_;
}
else
{
v___y_1989_ = v_stop_1985_;
goto v___jp_1988_;
}
}
v___jp_1988_:
{
uint8_t v___x_1990_; 
v___x_1990_ = lean_nat_dec_lt(v_start_1984_, v___y_1989_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
lean_inc(v_toPure_1987_);
lean_dec(v___y_1989_);
lean_dec_ref(v_as_1983_);
lean_dec(v_p_1982_);
lean_dec_ref(v_inst_1981_);
v___x_1991_ = lean_box(v___x_1990_);
v___x_1992_ = lean_apply_2(v_toPure_1987_, lean_box(0), v___x_1991_);
return v___x_1992_;
}
else
{
size_t v___x_1993_; size_t v___x_1994_; lean_object* v___x_1995_; 
v___x_1993_ = lean_usize_of_nat(v_start_1984_);
v___x_1994_ = lean_usize_of_nat(v___y_1989_);
lean_dec(v___y_1989_);
v___x_1995_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_1981_, v_p_1982_, v_as_1983_, v___x_1993_, v___x_1994_);
return v___x_1995_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe___boxed(lean_object* v_00_u03b1_2001_, lean_object* v_m_2002_, lean_object* v_inst_2003_, lean_object* v_p_2004_, lean_object* v_as_2005_, lean_object* v_start_2006_, lean_object* v_stop_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Array_anyMUnsafe(v_00_u03b1_2001_, v_m_2002_, v_inst_2003_, v_p_2004_, v_as_2005_, v_start_2006_, v_stop_2007_);
lean_dec(v_start_2006_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0___boxed(lean_object* v_j_2009_, lean_object* v_inst_2010_, lean_object* v_p_2011_, lean_object* v_as_2012_, lean_object* v_stop_2013_, lean_object* v_toPure_2014_, lean_object* v___x_2015_, lean_object* v_____do__lift_2016_){
_start:
{
uint8_t v___x_72__boxed_2017_; uint8_t v_____do__lift_73__boxed_2018_; lean_object* v_res_2019_; 
v___x_72__boxed_2017_ = lean_unbox(v___x_2015_);
v_____do__lift_73__boxed_2018_ = lean_unbox(v_____do__lift_2016_);
v_res_2019_ = l_Array_anyM_loop___redArg___lam__0(v_j_2009_, v_inst_2010_, v_p_2011_, v_as_2012_, v_stop_2013_, v_toPure_2014_, v___x_72__boxed_2017_, v_____do__lift_73__boxed_2018_);
lean_dec(v_j_2009_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg(lean_object* v_inst_2020_, lean_object* v_p_2021_, lean_object* v_as_2022_, lean_object* v_stop_2023_, lean_object* v_j_2024_){
_start:
{
lean_object* v_toApplicative_2025_; lean_object* v_toBind_2026_; lean_object* v_toPure_2027_; uint8_t v___x_2028_; 
v_toApplicative_2025_ = lean_ctor_get(v_inst_2020_, 0);
v_toBind_2026_ = lean_ctor_get(v_inst_2020_, 1);
lean_inc(v_toBind_2026_);
v_toPure_2027_ = lean_ctor_get(v_toApplicative_2025_, 1);
lean_inc(v_toPure_2027_);
v___x_2028_ = lean_nat_dec_lt(v_j_2024_, v_stop_2023_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; lean_object* v___x_2030_; 
lean_dec(v_toBind_2026_);
lean_dec(v_j_2024_);
lean_dec(v_stop_2023_);
lean_dec_ref(v_as_2022_);
lean_dec(v_p_2021_);
lean_dec_ref(v_inst_2020_);
v___x_2029_ = lean_box(v___x_2028_);
v___x_2030_ = lean_apply_2(v_toPure_2027_, lean_box(0), v___x_2029_);
return v___x_2030_;
}
else
{
lean_object* v___x_2031_; lean_object* v___f_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2031_ = lean_box(v___x_2028_);
lean_inc_ref(v_as_2022_);
lean_inc(v_p_2021_);
lean_inc(v_j_2024_);
v___f_2032_ = lean_alloc_closure((void*)(l_Array_anyM_loop___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_2032_, 0, v_j_2024_);
lean_closure_set(v___f_2032_, 1, v_inst_2020_);
lean_closure_set(v___f_2032_, 2, v_p_2021_);
lean_closure_set(v___f_2032_, 3, v_as_2022_);
lean_closure_set(v___f_2032_, 4, v_stop_2023_);
lean_closure_set(v___f_2032_, 5, v_toPure_2027_);
lean_closure_set(v___f_2032_, 6, v___x_2031_);
v___x_2033_ = lean_array_fget(v_as_2022_, v_j_2024_);
lean_dec(v_j_2024_);
lean_dec_ref(v_as_2022_);
v___x_2034_ = lean_apply_1(v_p_2021_, v___x_2033_);
v___x_2035_ = lean_apply_4(v_toBind_2026_, lean_box(0), lean_box(0), v___x_2034_, v___f_2032_);
return v___x_2035_;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop___redArg___lam__0(lean_object* v_j_2036_, lean_object* v_inst_2037_, lean_object* v_p_2038_, lean_object* v_as_2039_, lean_object* v_stop_2040_, lean_object* v_toPure_2041_, uint8_t v___x_2042_, uint8_t v_____do__lift_2043_){
_start:
{
if (v_____do__lift_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
lean_dec(v_toPure_2041_);
v___x_2044_ = lean_unsigned_to_nat(1u);
v___x_2045_ = lean_nat_add(v_j_2036_, v___x_2044_);
v___x_2046_ = l_Array_anyM_loop___redArg(v_inst_2037_, v_p_2038_, v_as_2039_, v_stop_2040_, v___x_2045_);
return v___x_2046_;
}
else
{
lean_object* v___x_2047_; lean_object* v___x_2048_; 
lean_dec(v_stop_2040_);
lean_dec_ref(v_as_2039_);
lean_dec(v_p_2038_);
lean_dec_ref(v_inst_2037_);
v___x_2047_ = lean_box(v___x_2042_);
v___x_2048_ = lean_apply_2(v_toPure_2041_, lean_box(0), v___x_2047_);
return v___x_2048_;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyM_loop(lean_object* v_00_u03b1_2049_, lean_object* v_m_2050_, lean_object* v_inst_2051_, lean_object* v_p_2052_, lean_object* v_as_2053_, lean_object* v_stop_2054_, lean_object* v_h_2055_, lean_object* v_j_2056_){
_start:
{
lean_object* v___x_2057_; 
v___x_2057_ = l_Array_anyM_loop___redArg(v_inst_2051_, v_p_2052_, v_as_2053_, v_stop_2054_, v_j_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0(lean_object* v_toPure_2058_, uint8_t v_____do__lift_2059_){
_start:
{
if (v_____do__lift_2059_ == 0)
{
uint8_t v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2060_ = 1;
v___x_2061_ = lean_box(v___x_2060_);
v___x_2062_ = lean_apply_2(v_toPure_2058_, lean_box(0), v___x_2061_);
return v___x_2062_;
}
else
{
uint8_t v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2063_ = 0;
v___x_2064_ = lean_box(v___x_2063_);
v___x_2065_ = lean_apply_2(v_toPure_2058_, lean_box(0), v___x_2064_);
return v___x_2065_;
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__0___boxed(lean_object* v_toPure_2066_, lean_object* v_____do__lift_2067_){
_start:
{
uint8_t v_____do__lift_117__boxed_2068_; lean_object* v_res_2069_; 
v_____do__lift_117__boxed_2068_ = lean_unbox(v_____do__lift_2067_);
v_res_2069_ = l_Array_allM___redArg___lam__0(v_toPure_2066_, v_____do__lift_117__boxed_2068_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1(lean_object* v_toPure_2070_, uint8_t v___x_2071_, uint8_t v_____do__lift_2072_){
_start:
{
if (v_____do__lift_2072_ == 0)
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = lean_box(v___x_2071_);
v___x_2074_ = lean_apply_2(v_toPure_2070_, lean_box(0), v___x_2073_);
return v___x_2074_;
}
else
{
uint8_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2075_ = 0;
v___x_2076_ = lean_box(v___x_2075_);
v___x_2077_ = lean_apply_2(v_toPure_2070_, lean_box(0), v___x_2076_);
return v___x_2077_;
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__1___boxed(lean_object* v_toPure_2078_, lean_object* v___x_2079_, lean_object* v_____do__lift_2080_){
_start:
{
uint8_t v___x_132__boxed_2081_; uint8_t v_____do__lift_133__boxed_2082_; lean_object* v_res_2083_; 
v___x_132__boxed_2081_ = lean_unbox(v___x_2079_);
v_____do__lift_133__boxed_2082_ = lean_unbox(v_____do__lift_2080_);
v_res_2083_ = l_Array_allM___redArg___lam__1(v_toPure_2078_, v___x_132__boxed_2081_, v_____do__lift_133__boxed_2082_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___lam__2(lean_object* v_p_2084_, lean_object* v_toBind_2085_, lean_object* v___f_2086_, lean_object* v_v_2087_){
_start:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = lean_apply_1(v_p_2084_, v_v_2087_);
v___x_2089_ = lean_apply_4(v_toBind_2085_, lean_box(0), lean_box(0), v___x_2088_, v___f_2086_);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg(lean_object* v_inst_2090_, lean_object* v_p_2091_, lean_object* v_as_2092_, lean_object* v_start_2093_, lean_object* v_stop_2094_){
_start:
{
lean_object* v_toApplicative_2095_; lean_object* v_toBind_2096_; lean_object* v_toPure_2097_; lean_object* v___f_2098_; uint8_t v___x_2099_; 
v_toApplicative_2095_ = lean_ctor_get(v_inst_2090_, 0);
v_toBind_2096_ = lean_ctor_get(v_inst_2090_, 1);
lean_inc(v_toBind_2096_);
v_toPure_2097_ = lean_ctor_get(v_toApplicative_2095_, 1);
lean_inc(v_toPure_2097_);
v___f_2098_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2098_, 0, v_toPure_2097_);
v___x_2099_ = lean_nat_dec_lt(v_start_2093_, v_stop_2094_);
if (v___x_2099_ == 0)
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
lean_inc(v_toPure_2097_);
lean_dec(v_stop_2094_);
lean_dec_ref(v_as_2092_);
lean_dec(v_p_2091_);
lean_dec_ref(v_inst_2090_);
v___x_2100_ = lean_box(v___x_2099_);
v___x_2101_ = lean_apply_2(v_toPure_2097_, lean_box(0), v___x_2100_);
v___x_2102_ = lean_apply_4(v_toBind_2096_, lean_box(0), lean_box(0), v___x_2101_, v___f_2098_);
return v___x_2102_;
}
else
{
lean_object* v___x_2103_; lean_object* v___f_2104_; lean_object* v___f_2105_; lean_object* v___y_2107_; lean_object* v___x_2116_; uint8_t v___x_2117_; 
v___x_2103_ = lean_box(v___x_2099_);
lean_inc(v_toPure_2097_);
v___f_2104_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2104_, 0, v_toPure_2097_);
lean_closure_set(v___f_2104_, 1, v___x_2103_);
lean_inc(v_toBind_2096_);
v___f_2105_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2105_, 0, v_p_2091_);
lean_closure_set(v___f_2105_, 1, v_toBind_2096_);
lean_closure_set(v___f_2105_, 2, v___f_2104_);
v___x_2116_ = lean_array_get_size(v_as_2092_);
v___x_2117_ = lean_nat_dec_le(v_stop_2094_, v___x_2116_);
if (v___x_2117_ == 0)
{
lean_dec(v_stop_2094_);
v___y_2107_ = v___x_2116_;
goto v___jp_2106_;
}
else
{
v___y_2107_ = v_stop_2094_;
goto v___jp_2106_;
}
v___jp_2106_:
{
uint8_t v___x_2108_; 
v___x_2108_ = lean_nat_dec_lt(v_start_2093_, v___y_2107_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_inc(v_toPure_2097_);
lean_dec(v___y_2107_);
lean_dec_ref(v___f_2105_);
lean_dec_ref(v_as_2092_);
lean_dec_ref(v_inst_2090_);
v___x_2109_ = lean_box(v___x_2108_);
v___x_2110_ = lean_apply_2(v_toPure_2097_, lean_box(0), v___x_2109_);
v___x_2111_ = lean_apply_4(v_toBind_2096_, lean_box(0), lean_box(0), v___x_2110_, v___f_2098_);
return v___x_2111_;
}
else
{
size_t v___x_2112_; size_t v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2112_ = lean_usize_of_nat(v_start_2093_);
v___x_2113_ = lean_usize_of_nat(v___y_2107_);
lean_dec(v___y_2107_);
v___x_2114_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2090_, v___f_2105_, v_as_2092_, v___x_2112_, v___x_2113_);
v___x_2115_ = lean_apply_4(v_toBind_2096_, lean_box(0), lean_box(0), v___x_2114_, v___f_2098_);
return v___x_2115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___redArg___boxed(lean_object* v_inst_2118_, lean_object* v_p_2119_, lean_object* v_as_2120_, lean_object* v_start_2121_, lean_object* v_stop_2122_){
_start:
{
lean_object* v_res_2123_; 
v_res_2123_ = l_Array_allM___redArg(v_inst_2118_, v_p_2119_, v_as_2120_, v_start_2121_, v_stop_2122_);
lean_dec(v_start_2121_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l_Array_allM(lean_object* v_00_u03b1_2124_, lean_object* v_m_2125_, lean_object* v_inst_2126_, lean_object* v_p_2127_, lean_object* v_as_2128_, lean_object* v_start_2129_, lean_object* v_stop_2130_){
_start:
{
lean_object* v_toApplicative_2131_; lean_object* v_toBind_2132_; lean_object* v_toPure_2133_; lean_object* v___f_2134_; uint8_t v___x_2135_; 
v_toApplicative_2131_ = lean_ctor_get(v_inst_2126_, 0);
v_toBind_2132_ = lean_ctor_get(v_inst_2126_, 1);
lean_inc(v_toBind_2132_);
v_toPure_2133_ = lean_ctor_get(v_toApplicative_2131_, 1);
lean_inc(v_toPure_2133_);
v___f_2134_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2134_, 0, v_toPure_2133_);
v___x_2135_ = lean_nat_dec_lt(v_start_2129_, v_stop_2130_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_inc(v_toPure_2133_);
lean_dec(v_stop_2130_);
lean_dec_ref(v_as_2128_);
lean_dec(v_p_2127_);
lean_dec_ref(v_inst_2126_);
v___x_2136_ = lean_box(v___x_2135_);
v___x_2137_ = lean_apply_2(v_toPure_2133_, lean_box(0), v___x_2136_);
v___x_2138_ = lean_apply_4(v_toBind_2132_, lean_box(0), lean_box(0), v___x_2137_, v___f_2134_);
return v___x_2138_;
}
else
{
lean_object* v___x_2139_; lean_object* v___f_2140_; lean_object* v___f_2141_; lean_object* v___y_2143_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2139_ = lean_box(v___x_2135_);
lean_inc(v_toPure_2133_);
v___f_2140_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2140_, 0, v_toPure_2133_);
lean_closure_set(v___f_2140_, 1, v___x_2139_);
lean_inc(v_toBind_2132_);
v___f_2141_ = lean_alloc_closure((void*)(l_Array_allM___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2141_, 0, v_p_2127_);
lean_closure_set(v___f_2141_, 1, v_toBind_2132_);
lean_closure_set(v___f_2141_, 2, v___f_2140_);
v___x_2152_ = lean_array_get_size(v_as_2128_);
v___x_2153_ = lean_nat_dec_le(v_stop_2130_, v___x_2152_);
if (v___x_2153_ == 0)
{
lean_dec(v_stop_2130_);
v___y_2143_ = v___x_2152_;
goto v___jp_2142_;
}
else
{
v___y_2143_ = v_stop_2130_;
goto v___jp_2142_;
}
v___jp_2142_:
{
uint8_t v___x_2144_; 
v___x_2144_ = lean_nat_dec_lt(v_start_2129_, v___y_2143_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
lean_inc(v_toPure_2133_);
lean_dec(v___y_2143_);
lean_dec_ref(v___f_2141_);
lean_dec_ref(v_as_2128_);
lean_dec_ref(v_inst_2126_);
v___x_2145_ = lean_box(v___x_2144_);
v___x_2146_ = lean_apply_2(v_toPure_2133_, lean_box(0), v___x_2145_);
v___x_2147_ = lean_apply_4(v_toBind_2132_, lean_box(0), lean_box(0), v___x_2146_, v___f_2134_);
return v___x_2147_;
}
else
{
size_t v___x_2148_; size_t v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2148_ = lean_usize_of_nat(v_start_2129_);
v___x_2149_ = lean_usize_of_nat(v___y_2143_);
lean_dec(v___y_2143_);
v___x_2150_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v_inst_2126_, v___f_2141_, v_as_2128_, v___x_2148_, v___x_2149_);
v___x_2151_ = lean_apply_4(v_toBind_2132_, lean_box(0), lean_box(0), v___x_2150_, v___f_2134_);
return v___x_2151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_allM___boxed(lean_object* v_00_u03b1_2154_, lean_object* v_m_2155_, lean_object* v_inst_2156_, lean_object* v_p_2157_, lean_object* v_as_2158_, lean_object* v_start_2159_, lean_object* v_stop_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Array_allM(v_00_u03b1_2154_, v_m_2155_, v_inst_2156_, v_p_2157_, v_as_2158_, v_start_2159_, v_stop_2160_);
lean_dec(v_start_2159_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed(lean_object* v_inst_2162_, lean_object* v_f_2163_, lean_object* v_as_2164_, lean_object* v_n_2165_, lean_object* v_toPure_2166_, lean_object* v_r_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(v_inst_2162_, v_f_2163_, v_as_2164_, v_n_2165_, v_toPure_2166_, v_r_2167_);
lean_dec(v_n_2165_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(lean_object* v_inst_2169_, lean_object* v_f_2170_, lean_object* v_as_2171_, lean_object* v_i_2172_){
_start:
{
lean_object* v_toApplicative_2173_; lean_object* v_toBind_2174_; lean_object* v_toPure_2175_; lean_object* v_zero_2176_; uint8_t v_isZero_2177_; 
v_toApplicative_2173_ = lean_ctor_get(v_inst_2169_, 0);
v_toBind_2174_ = lean_ctor_get(v_inst_2169_, 1);
lean_inc(v_toBind_2174_);
v_toPure_2175_ = lean_ctor_get(v_toApplicative_2173_, 1);
lean_inc(v_toPure_2175_);
v_zero_2176_ = lean_unsigned_to_nat(0u);
v_isZero_2177_ = lean_nat_dec_eq(v_i_2172_, v_zero_2176_);
if (v_isZero_2177_ == 1)
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
lean_dec(v_toBind_2174_);
lean_dec_ref(v_as_2171_);
lean_dec(v_f_2170_);
lean_dec_ref(v_inst_2169_);
v___x_2178_ = lean_box(0);
v___x_2179_ = lean_apply_2(v_toPure_2175_, lean_box(0), v___x_2178_);
return v___x_2179_;
}
else
{
lean_object* v_one_2180_; lean_object* v_n_2181_; lean_object* v___f_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v_one_2180_ = lean_unsigned_to_nat(1u);
v_n_2181_ = lean_nat_sub(v_i_2172_, v_one_2180_);
lean_inc(v_n_2181_);
lean_inc_ref(v_as_2171_);
lean_inc(v_f_2170_);
v___f_2182_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2182_, 0, v_inst_2169_);
lean_closure_set(v___f_2182_, 1, v_f_2170_);
lean_closure_set(v___f_2182_, 2, v_as_2171_);
lean_closure_set(v___f_2182_, 3, v_n_2181_);
lean_closure_set(v___f_2182_, 4, v_toPure_2175_);
v___x_2183_ = lean_array_fget(v_as_2171_, v_n_2181_);
lean_dec(v_n_2181_);
lean_dec_ref(v_as_2171_);
v___x_2184_ = lean_apply_1(v_f_2170_, v___x_2183_);
v___x_2185_ = lean_apply_4(v_toBind_2174_, lean_box(0), lean_box(0), v___x_2184_, v___f_2182_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___lam__0(lean_object* v_inst_2186_, lean_object* v_f_2187_, lean_object* v_as_2188_, lean_object* v_n_2189_, lean_object* v_toPure_2190_, lean_object* v_r_2191_){
_start:
{
if (lean_obj_tag(v_r_2191_) == 0)
{
lean_object* v___x_2192_; 
lean_dec(v_toPure_2190_);
v___x_2192_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2186_, v_f_2187_, v_as_2188_, v_n_2189_);
return v___x_2192_;
}
else
{
lean_object* v___x_2193_; 
lean_dec_ref(v_as_2188_);
lean_dec(v_f_2187_);
lean_dec_ref(v_inst_2186_);
v___x_2193_ = lean_apply_2(v_toPure_2190_, lean_box(0), v_r_2191_);
return v___x_2193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg___boxed(lean_object* v_inst_2194_, lean_object* v_f_2195_, lean_object* v_as_2196_, lean_object* v_i_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2194_, v_f_2195_, v_as_2196_, v_i_2197_);
lean_dec(v_i_2197_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object* v_00_u03b1_2199_, lean_object* v_00_u03b2_2200_, lean_object* v_m_2201_, lean_object* v_inst_2202_, lean_object* v_f_2203_, lean_object* v_as_2204_, lean_object* v_i_2205_, lean_object* v_a_2206_){
_start:
{
lean_object* v___x_2207_; 
v___x_2207_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2202_, v_f_2203_, v_as_2204_, v_i_2205_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___boxed(lean_object* v_00_u03b1_2208_, lean_object* v_00_u03b2_2209_, lean_object* v_m_2210_, lean_object* v_inst_2211_, lean_object* v_f_2212_, lean_object* v_as_2213_, lean_object* v_i_2214_, lean_object* v_a_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(v_00_u03b1_2208_, v_00_u03b2_2209_, v_m_2210_, v_inst_2211_, v_f_2212_, v_as_2213_, v_i_2214_, v_a_2215_);
lean_dec(v_i_2214_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f___redArg(lean_object* v_inst_2217_, lean_object* v_f_2218_, lean_object* v_as_2219_){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2220_ = lean_array_get_size(v_as_2219_);
v___x_2221_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2217_, v_f_2218_, v_as_2219_, v___x_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRevM_x3f(lean_object* v_00_u03b1_2222_, lean_object* v_00_u03b2_2223_, lean_object* v_m_2224_, lean_object* v_inst_2225_, lean_object* v_f_2226_, lean_object* v_as_2227_){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = lean_array_get_size(v_as_2227_);
v___x_2229_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2225_, v_f_2226_, v_as_2227_, v___x_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0(lean_object* v_toPure_2230_, lean_object* v_a_2231_, uint8_t v_____do__lift_2232_){
_start:
{
if (v_____do__lift_2232_ == 0)
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_dec(v_a_2231_);
v___x_2233_ = lean_box(0);
v___x_2234_ = lean_apply_2(v_toPure_2230_, lean_box(0), v___x_2233_);
return v___x_2234_;
}
else
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_a_2231_);
v___x_2236_ = lean_apply_2(v_toPure_2230_, lean_box(0), v___x_2235_);
return v___x_2236_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__0___boxed(lean_object* v_toPure_2237_, lean_object* v_a_2238_, lean_object* v_____do__lift_2239_){
_start:
{
uint8_t v_____do__lift_73__boxed_2240_; lean_object* v_res_2241_; 
v_____do__lift_73__boxed_2240_ = lean_unbox(v_____do__lift_2239_);
v_res_2241_ = l_Array_findRevM_x3f___redArg___lam__0(v_toPure_2237_, v_a_2238_, v_____do__lift_73__boxed_2240_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg___lam__1(lean_object* v_toPure_2242_, lean_object* v_p_2243_, lean_object* v_toBind_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v___f_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
lean_inc(v_a_2245_);
v___f_2246_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2246_, 0, v_toPure_2242_);
lean_closure_set(v___f_2246_, 1, v_a_2245_);
v___x_2247_ = lean_apply_1(v_p_2243_, v_a_2245_);
v___x_2248_ = lean_apply_4(v_toBind_2244_, lean_box(0), lean_box(0), v___x_2247_, v___f_2246_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f___redArg(lean_object* v_inst_2249_, lean_object* v_p_2250_, lean_object* v_as_2251_){
_start:
{
lean_object* v_toApplicative_2252_; lean_object* v_toBind_2253_; lean_object* v_toPure_2254_; lean_object* v___f_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v_toApplicative_2252_ = lean_ctor_get(v_inst_2249_, 0);
v_toBind_2253_ = lean_ctor_get(v_inst_2249_, 1);
v_toPure_2254_ = lean_ctor_get(v_toApplicative_2252_, 1);
lean_inc(v_toBind_2253_);
lean_inc(v_toPure_2254_);
v___f_2255_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2255_, 0, v_toPure_2254_);
lean_closure_set(v___f_2255_, 1, v_p_2250_);
lean_closure_set(v___f_2255_, 2, v_toBind_2253_);
v___x_2256_ = lean_array_get_size(v_as_2251_);
v___x_2257_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2249_, v___f_2255_, v_as_2251_, v___x_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Array_findRevM_x3f(lean_object* v_00_u03b1_2258_, lean_object* v_m_2259_, lean_object* v_inst_2260_, lean_object* v_p_2261_, lean_object* v_as_2262_){
_start:
{
lean_object* v_toApplicative_2263_; lean_object* v_toBind_2264_; lean_object* v_toPure_2265_; lean_object* v___f_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v_toApplicative_2263_ = lean_ctor_get(v_inst_2260_, 0);
v_toBind_2264_ = lean_ctor_get(v_inst_2260_, 1);
v_toPure_2265_ = lean_ctor_get(v_toApplicative_2263_, 1);
lean_inc(v_toBind_2264_);
lean_inc(v_toPure_2265_);
v___f_2266_ = lean_alloc_closure((void*)(l_Array_findRevM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2266_, 0, v_toPure_2265_);
lean_closure_set(v___f_2266_, 1, v_p_2261_);
lean_closure_set(v___f_2266_, 2, v_toBind_2264_);
v___x_2267_ = lean_array_get_size(v_as_2262_);
v___x_2268_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v_inst_2260_, v___f_2266_, v_as_2262_, v___x_2267_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg___lam__0(lean_object* v_f_2269_, lean_object* v_x_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_apply_1(v_f_2269_, v___y_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg(lean_object* v_inst_2273_, lean_object* v_f_2274_, lean_object* v_as_2275_, lean_object* v_start_2276_, lean_object* v_stop_2277_){
_start:
{
lean_object* v_toApplicative_2278_; lean_object* v_toPure_2279_; lean_object* v___x_2280_; uint8_t v___x_2281_; 
v_toApplicative_2278_ = lean_ctor_get(v_inst_2273_, 0);
v_toPure_2279_ = lean_ctor_get(v_toApplicative_2278_, 1);
v___x_2280_ = lean_box(0);
v___x_2281_ = lean_nat_dec_lt(v_start_2276_, v_stop_2277_);
if (v___x_2281_ == 0)
{
lean_object* v___x_2282_; 
lean_inc(v_toPure_2279_);
lean_dec_ref(v_as_2275_);
lean_dec(v_f_2274_);
lean_dec_ref(v_inst_2273_);
v___x_2282_ = lean_apply_2(v_toPure_2279_, lean_box(0), v___x_2280_);
return v___x_2282_;
}
else
{
lean_object* v___f_2283_; lean_object* v___x_2284_; uint8_t v___x_2285_; 
v___f_2283_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2283_, 0, v_f_2274_);
v___x_2284_ = lean_array_get_size(v_as_2275_);
v___x_2285_ = lean_nat_dec_le(v_stop_2277_, v___x_2284_);
if (v___x_2285_ == 0)
{
uint8_t v___x_2286_; 
v___x_2286_ = lean_nat_dec_lt(v_start_2276_, v___x_2284_);
if (v___x_2286_ == 0)
{
lean_object* v___x_2287_; 
lean_inc(v_toPure_2279_);
lean_dec_ref(v___f_2283_);
lean_dec_ref(v_as_2275_);
lean_dec_ref(v_inst_2273_);
v___x_2287_ = lean_apply_2(v_toPure_2279_, lean_box(0), v___x_2280_);
return v___x_2287_;
}
else
{
size_t v___x_2288_; size_t v___x_2289_; lean_object* v___x_2290_; 
v___x_2288_ = lean_usize_of_nat(v_start_2276_);
v___x_2289_ = lean_usize_of_nat(v___x_2284_);
v___x_2290_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2273_, v___f_2283_, v_as_2275_, v___x_2288_, v___x_2289_, v___x_2280_);
return v___x_2290_;
}
}
else
{
size_t v___x_2291_; size_t v___x_2292_; lean_object* v___x_2293_; 
v___x_2291_ = lean_usize_of_nat(v_start_2276_);
v___x_2292_ = lean_usize_of_nat(v_stop_2277_);
v___x_2293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2273_, v___f_2283_, v_as_2275_, v___x_2291_, v___x_2292_, v___x_2280_);
return v___x_2293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forM___redArg___boxed(lean_object* v_inst_2294_, lean_object* v_f_2295_, lean_object* v_as_2296_, lean_object* v_start_2297_, lean_object* v_stop_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l_Array_forM___redArg(v_inst_2294_, v_f_2295_, v_as_2296_, v_start_2297_, v_stop_2298_);
lean_dec(v_stop_2298_);
lean_dec(v_start_2297_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l_Array_forM(lean_object* v_00_u03b1_2300_, lean_object* v_m_2301_, lean_object* v_inst_2302_, lean_object* v_f_2303_, lean_object* v_as_2304_, lean_object* v_start_2305_, lean_object* v_stop_2306_){
_start:
{
lean_object* v_toApplicative_2307_; lean_object* v_toPure_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; 
v_toApplicative_2307_ = lean_ctor_get(v_inst_2302_, 0);
v_toPure_2308_ = lean_ctor_get(v_toApplicative_2307_, 1);
v___x_2309_ = lean_box(0);
v___x_2310_ = lean_nat_dec_lt(v_start_2305_, v_stop_2306_);
if (v___x_2310_ == 0)
{
lean_object* v___x_2311_; 
lean_inc(v_toPure_2308_);
lean_dec_ref(v_as_2304_);
lean_dec(v_f_2303_);
lean_dec_ref(v_inst_2302_);
v___x_2311_ = lean_apply_2(v_toPure_2308_, lean_box(0), v___x_2309_);
return v___x_2311_;
}
else
{
lean_object* v___f_2312_; lean_object* v___x_2313_; uint8_t v___x_2314_; 
v___f_2312_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2312_, 0, v_f_2303_);
v___x_2313_ = lean_array_get_size(v_as_2304_);
v___x_2314_ = lean_nat_dec_le(v_stop_2306_, v___x_2313_);
if (v___x_2314_ == 0)
{
uint8_t v___x_2315_; 
v___x_2315_ = lean_nat_dec_lt(v_start_2305_, v___x_2313_);
if (v___x_2315_ == 0)
{
lean_object* v___x_2316_; 
lean_inc(v_toPure_2308_);
lean_dec_ref(v___f_2312_);
lean_dec_ref(v_as_2304_);
lean_dec_ref(v_inst_2302_);
v___x_2316_ = lean_apply_2(v_toPure_2308_, lean_box(0), v___x_2309_);
return v___x_2316_;
}
else
{
size_t v___x_2317_; size_t v___x_2318_; lean_object* v___x_2319_; 
v___x_2317_ = lean_usize_of_nat(v_start_2305_);
v___x_2318_ = lean_usize_of_nat(v___x_2313_);
v___x_2319_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2302_, v___f_2312_, v_as_2304_, v___x_2317_, v___x_2318_, v___x_2309_);
return v___x_2319_;
}
}
else
{
size_t v___x_2320_; size_t v___x_2321_; lean_object* v___x_2322_; 
v___x_2320_ = lean_usize_of_nat(v_start_2305_);
v___x_2321_ = lean_usize_of_nat(v_stop_2306_);
v___x_2322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2302_, v___f_2312_, v_as_2304_, v___x_2320_, v___x_2321_, v___x_2309_);
return v___x_2322_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forM___boxed(lean_object* v_00_u03b1_2323_, lean_object* v_m_2324_, lean_object* v_inst_2325_, lean_object* v_f_2326_, lean_object* v_as_2327_, lean_object* v_start_2328_, lean_object* v_stop_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Array_forM(v_00_u03b1_2323_, v_m_2324_, v_inst_2325_, v_f_2326_, v_as_2327_, v_start_2328_, v_stop_2329_);
lean_dec(v_stop_2329_);
lean_dec(v_start_2328_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg___lam__1(lean_object* v_inst_2331_, lean_object* v_xs_2332_, lean_object* v_f_2333_){
_start:
{
lean_object* v_toApplicative_2334_; lean_object* v_toPure_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; uint8_t v___x_2339_; 
v_toApplicative_2334_ = lean_ctor_get(v_inst_2331_, 0);
v_toPure_2335_ = lean_ctor_get(v_toApplicative_2334_, 1);
v___x_2336_ = lean_unsigned_to_nat(0u);
v___x_2337_ = lean_array_get_size(v_xs_2332_);
v___x_2338_ = lean_box(0);
v___x_2339_ = lean_nat_dec_lt(v___x_2336_, v___x_2337_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; 
lean_inc(v_toPure_2335_);
lean_dec(v_f_2333_);
lean_dec_ref(v_xs_2332_);
lean_dec_ref(v_inst_2331_);
v___x_2340_ = lean_apply_2(v_toPure_2335_, lean_box(0), v___x_2338_);
return v___x_2340_;
}
else
{
lean_object* v___f_2341_; size_t v___x_2342_; size_t v___x_2343_; lean_object* v___x_2344_; 
v___f_2341_ = lean_alloc_closure((void*)(l_Array_forM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2341_, 0, v_f_2333_);
v___x_2342_ = ((size_t)0ULL);
v___x_2343_ = lean_usize_of_nat(v___x_2337_);
v___x_2344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_2331_, v___f_2341_, v_xs_2332_, v___x_2342_, v___x_2343_, v___x_2338_);
return v___x_2344_;
}
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad___redArg(lean_object* v_inst_2345_){
_start:
{
lean_object* v___f_2346_; 
v___f_2346_ = lean_alloc_closure((void*)(l_Array_instForMOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_2346_, 0, v_inst_2345_);
return v___f_2346_;
}
}
LEAN_EXPORT lean_object* l_Array_instForMOfMonad(lean_object* v_00_u03b1_2347_, lean_object* v_m_2348_, lean_object* v_inst_2349_){
_start:
{
lean_object* v___f_2350_; 
v___f_2350_ = lean_alloc_closure((void*)(l_Array_instForMOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_2350_, 0, v_inst_2349_);
return v___f_2350_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___lam__0(lean_object* v_f_2351_, lean_object* v_a_2352_, lean_object* v_x_2353_){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = lean_apply_1(v_f_2351_, v_a_2352_);
return v___x_2354_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg(lean_object* v_inst_2355_, lean_object* v_f_2356_, lean_object* v_as_2357_, lean_object* v_start_2358_, lean_object* v_stop_2359_){
_start:
{
lean_object* v_toApplicative_2360_; lean_object* v_toPure_2361_; lean_object* v___f_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; uint8_t v___x_2365_; 
v_toApplicative_2360_ = lean_ctor_get(v_inst_2355_, 0);
v_toPure_2361_ = lean_ctor_get(v_toApplicative_2360_, 1);
v___f_2362_ = lean_alloc_closure((void*)(l_Array_forRevM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2362_, 0, v_f_2356_);
v___x_2363_ = lean_box(0);
v___x_2364_ = lean_array_get_size(v_as_2357_);
v___x_2365_ = lean_nat_dec_le(v_start_2358_, v___x_2364_);
if (v___x_2365_ == 0)
{
uint8_t v___x_2366_; 
v___x_2366_ = lean_nat_dec_lt(v_stop_2359_, v___x_2364_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; 
lean_inc(v_toPure_2361_);
lean_dec_ref(v___f_2362_);
lean_dec_ref(v_as_2357_);
lean_dec_ref(v_inst_2355_);
v___x_2367_ = lean_apply_2(v_toPure_2361_, lean_box(0), v___x_2363_);
return v___x_2367_;
}
else
{
size_t v___x_2368_; size_t v___x_2369_; lean_object* v___x_2370_; 
v___x_2368_ = lean_usize_of_nat(v___x_2364_);
v___x_2369_ = lean_usize_of_nat(v_stop_2359_);
v___x_2370_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2355_, v___f_2362_, v_as_2357_, v___x_2368_, v___x_2369_, v___x_2363_);
return v___x_2370_;
}
}
else
{
uint8_t v___x_2371_; 
v___x_2371_ = lean_nat_dec_lt(v_stop_2359_, v_start_2358_);
if (v___x_2371_ == 0)
{
lean_object* v___x_2372_; 
lean_inc(v_toPure_2361_);
lean_dec_ref(v___f_2362_);
lean_dec_ref(v_as_2357_);
lean_dec_ref(v_inst_2355_);
v___x_2372_ = lean_apply_2(v_toPure_2361_, lean_box(0), v___x_2363_);
return v___x_2372_;
}
else
{
size_t v___x_2373_; size_t v___x_2374_; lean_object* v___x_2375_; 
v___x_2373_ = lean_usize_of_nat(v_start_2358_);
v___x_2374_ = lean_usize_of_nat(v_stop_2359_);
v___x_2375_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2355_, v___f_2362_, v_as_2357_, v___x_2373_, v___x_2374_, v___x_2363_);
return v___x_2375_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___redArg___boxed(lean_object* v_inst_2376_, lean_object* v_f_2377_, lean_object* v_as_2378_, lean_object* v_start_2379_, lean_object* v_stop_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Array_forRevM___redArg(v_inst_2376_, v_f_2377_, v_as_2378_, v_start_2379_, v_stop_2380_);
lean_dec(v_stop_2380_);
lean_dec(v_start_2379_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Array_forRevM(lean_object* v_00_u03b1_2382_, lean_object* v_m_2383_, lean_object* v_inst_2384_, lean_object* v_f_2385_, lean_object* v_as_2386_, lean_object* v_start_2387_, lean_object* v_stop_2388_){
_start:
{
lean_object* v_toApplicative_2389_; lean_object* v_toPure_2390_; lean_object* v___f_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; 
v_toApplicative_2389_ = lean_ctor_get(v_inst_2384_, 0);
v_toPure_2390_ = lean_ctor_get(v_toApplicative_2389_, 1);
v___f_2391_ = lean_alloc_closure((void*)(l_Array_forRevM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2391_, 0, v_f_2385_);
v___x_2392_ = lean_box(0);
v___x_2393_ = lean_array_get_size(v_as_2386_);
v___x_2394_ = lean_nat_dec_le(v_start_2387_, v___x_2393_);
if (v___x_2394_ == 0)
{
uint8_t v___x_2395_; 
v___x_2395_ = lean_nat_dec_lt(v_stop_2388_, v___x_2393_);
if (v___x_2395_ == 0)
{
lean_object* v___x_2396_; 
lean_inc(v_toPure_2390_);
lean_dec_ref(v___f_2391_);
lean_dec_ref(v_as_2386_);
lean_dec_ref(v_inst_2384_);
v___x_2396_ = lean_apply_2(v_toPure_2390_, lean_box(0), v___x_2392_);
return v___x_2396_;
}
else
{
size_t v___x_2397_; size_t v___x_2398_; lean_object* v___x_2399_; 
v___x_2397_ = lean_usize_of_nat(v___x_2393_);
v___x_2398_ = lean_usize_of_nat(v_stop_2388_);
v___x_2399_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2384_, v___f_2391_, v_as_2386_, v___x_2397_, v___x_2398_, v___x_2392_);
return v___x_2399_;
}
}
else
{
uint8_t v___x_2400_; 
v___x_2400_ = lean_nat_dec_lt(v_stop_2388_, v_start_2387_);
if (v___x_2400_ == 0)
{
lean_object* v___x_2401_; 
lean_inc(v_toPure_2390_);
lean_dec_ref(v___f_2391_);
lean_dec_ref(v_as_2386_);
lean_dec_ref(v_inst_2384_);
v___x_2401_ = lean_apply_2(v_toPure_2390_, lean_box(0), v___x_2392_);
return v___x_2401_;
}
else
{
size_t v___x_2402_; size_t v___x_2403_; lean_object* v___x_2404_; 
v___x_2402_ = lean_usize_of_nat(v_start_2387_);
v___x_2403_ = lean_usize_of_nat(v_stop_2388_);
v___x_2404_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_2384_, v___f_2391_, v_as_2386_, v___x_2402_, v___x_2403_, v___x_2392_);
return v___x_2404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forRevM___boxed(lean_object* v_00_u03b1_2405_, lean_object* v_m_2406_, lean_object* v_inst_2407_, lean_object* v_f_2408_, lean_object* v_as_2409_, lean_object* v_start_2410_, lean_object* v_stop_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Array_forRevM(v_00_u03b1_2405_, v_m_2406_, v_inst_2407_, v_f_2408_, v_as_2409_, v_start_2410_, v_stop_2411_);
lean_dec(v_stop_2411_);
lean_dec(v_start_2410_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg___lam__0(lean_object* v_f_2413_, lean_object* v_x1_2414_, lean_object* v_x2_2415_){
_start:
{
lean_object* v___x_2416_; 
v___x_2416_ = lean_apply_2(v_f_2413_, v_x1_2414_, v_x2_2415_);
return v___x_2416_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg(lean_object* v_f_2436_, lean_object* v_init_2437_, lean_object* v_as_2438_, lean_object* v_start_2439_, lean_object* v_stop_2440_){
_start:
{
lean_object* v___x_2441_; uint8_t v___x_2442_; 
v___x_2441_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2442_ = lean_nat_dec_lt(v_start_2439_, v_stop_2440_);
if (v___x_2442_ == 0)
{
lean_dec_ref(v_as_2438_);
lean_dec(v_f_2436_);
return v_init_2437_;
}
else
{
lean_object* v___f_2443_; lean_object* v___x_2444_; uint8_t v___x_2445_; 
v___f_2443_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2443_, 0, v_f_2436_);
v___x_2444_ = lean_array_get_size(v_as_2438_);
v___x_2445_ = lean_nat_dec_le(v_stop_2440_, v___x_2444_);
if (v___x_2445_ == 0)
{
uint8_t v___x_2446_; 
v___x_2446_ = lean_nat_dec_lt(v_start_2439_, v___x_2444_);
if (v___x_2446_ == 0)
{
lean_dec_ref(v___f_2443_);
lean_dec_ref(v_as_2438_);
return v_init_2437_;
}
else
{
size_t v___x_2447_; size_t v___x_2448_; lean_object* v___x_2449_; 
v___x_2447_ = lean_usize_of_nat(v_start_2439_);
v___x_2448_ = lean_usize_of_nat(v___x_2444_);
v___x_2449_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2441_, v___f_2443_, v_as_2438_, v___x_2447_, v___x_2448_, v_init_2437_);
return v___x_2449_;
}
}
else
{
size_t v___x_2450_; size_t v___x_2451_; lean_object* v___x_2452_; 
v___x_2450_ = lean_usize_of_nat(v_start_2439_);
v___x_2451_ = lean_usize_of_nat(v_stop_2440_);
v___x_2452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2441_, v___f_2443_, v_as_2438_, v___x_2450_, v___x_2451_, v_init_2437_);
return v___x_2452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldl___redArg___boxed(lean_object* v_f_2453_, lean_object* v_init_2454_, lean_object* v_as_2455_, lean_object* v_start_2456_, lean_object* v_stop_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l_Array_foldl___redArg(v_f_2453_, v_init_2454_, v_as_2455_, v_start_2456_, v_stop_2457_);
lean_dec(v_stop_2457_);
lean_dec(v_start_2456_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l_Array_foldl(lean_object* v_00_u03b1_2459_, lean_object* v_00_u03b2_2460_, lean_object* v_f_2461_, lean_object* v_init_2462_, lean_object* v_as_2463_, lean_object* v_start_2464_, lean_object* v_stop_2465_){
_start:
{
lean_object* v___x_2466_; uint8_t v___x_2467_; 
v___x_2466_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2467_ = lean_nat_dec_lt(v_start_2464_, v_stop_2465_);
if (v___x_2467_ == 0)
{
lean_dec_ref(v_as_2463_);
lean_dec(v_f_2461_);
return v_init_2462_;
}
else
{
lean_object* v___f_2468_; lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___f_2468_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2468_, 0, v_f_2461_);
v___x_2469_ = lean_array_get_size(v_as_2463_);
v___x_2470_ = lean_nat_dec_le(v_stop_2465_, v___x_2469_);
if (v___x_2470_ == 0)
{
uint8_t v___x_2471_; 
v___x_2471_ = lean_nat_dec_lt(v_start_2464_, v___x_2469_);
if (v___x_2471_ == 0)
{
lean_dec_ref(v___f_2468_);
lean_dec_ref(v_as_2463_);
return v_init_2462_;
}
else
{
size_t v___x_2472_; size_t v___x_2473_; lean_object* v___x_2474_; 
v___x_2472_ = lean_usize_of_nat(v_start_2464_);
v___x_2473_ = lean_usize_of_nat(v___x_2469_);
v___x_2474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2466_, v___f_2468_, v_as_2463_, v___x_2472_, v___x_2473_, v_init_2462_);
return v___x_2474_;
}
}
else
{
size_t v___x_2475_; size_t v___x_2476_; lean_object* v___x_2477_; 
v___x_2475_ = lean_usize_of_nat(v_start_2464_);
v___x_2476_ = lean_usize_of_nat(v_stop_2465_);
v___x_2477_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_2466_, v___f_2468_, v_as_2463_, v___x_2475_, v___x_2476_, v_init_2462_);
return v___x_2477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldl___boxed(lean_object* v_00_u03b1_2478_, lean_object* v_00_u03b2_2479_, lean_object* v_f_2480_, lean_object* v_init_2481_, lean_object* v_as_2482_, lean_object* v_start_2483_, lean_object* v_stop_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l_Array_foldl(v_00_u03b1_2478_, v_00_u03b2_2479_, v_f_2480_, v_init_2481_, v_as_2482_, v_start_2483_, v_stop_2484_);
lean_dec(v_stop_2484_);
lean_dec(v_start_2483_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l_Array_foldr___redArg(lean_object* v_f_2486_, lean_object* v_init_2487_, lean_object* v_as_2488_, lean_object* v_start_2489_, lean_object* v_stop_2490_){
_start:
{
lean_object* v___f_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; uint8_t v___x_2494_; 
v___f_2491_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2491_, 0, v_f_2486_);
v___x_2492_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2493_ = lean_array_get_size(v_as_2488_);
v___x_2494_ = lean_nat_dec_le(v_start_2489_, v___x_2493_);
if (v___x_2494_ == 0)
{
uint8_t v___x_2495_; 
v___x_2495_ = lean_nat_dec_lt(v_stop_2490_, v___x_2493_);
if (v___x_2495_ == 0)
{
lean_dec_ref(v___f_2491_);
lean_dec_ref(v_as_2488_);
return v_init_2487_;
}
else
{
size_t v___x_2496_; size_t v___x_2497_; lean_object* v___x_2498_; 
v___x_2496_ = lean_usize_of_nat(v___x_2493_);
v___x_2497_ = lean_usize_of_nat(v_stop_2490_);
v___x_2498_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2492_, v___f_2491_, v_as_2488_, v___x_2496_, v___x_2497_, v_init_2487_);
return v___x_2498_;
}
}
else
{
uint8_t v___x_2499_; 
v___x_2499_ = lean_nat_dec_lt(v_stop_2490_, v_start_2489_);
if (v___x_2499_ == 0)
{
lean_dec_ref(v___f_2491_);
lean_dec_ref(v_as_2488_);
return v_init_2487_;
}
else
{
size_t v___x_2500_; size_t v___x_2501_; lean_object* v___x_2502_; 
v___x_2500_ = lean_usize_of_nat(v_start_2489_);
v___x_2501_ = lean_usize_of_nat(v_stop_2490_);
v___x_2502_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2492_, v___f_2491_, v_as_2488_, v___x_2500_, v___x_2501_, v_init_2487_);
return v___x_2502_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldr___redArg___boxed(lean_object* v_f_2503_, lean_object* v_init_2504_, lean_object* v_as_2505_, lean_object* v_start_2506_, lean_object* v_stop_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Array_foldr___redArg(v_f_2503_, v_init_2504_, v_as_2505_, v_start_2506_, v_stop_2507_);
lean_dec(v_stop_2507_);
lean_dec(v_start_2506_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Array_foldr(lean_object* v_00_u03b1_2509_, lean_object* v_00_u03b2_2510_, lean_object* v_f_2511_, lean_object* v_init_2512_, lean_object* v_as_2513_, lean_object* v_start_2514_, lean_object* v_stop_2515_){
_start:
{
lean_object* v___f_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; uint8_t v___x_2519_; 
v___f_2516_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2516_, 0, v_f_2511_);
v___x_2517_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2518_ = lean_array_get_size(v_as_2513_);
v___x_2519_ = lean_nat_dec_le(v_start_2514_, v___x_2518_);
if (v___x_2519_ == 0)
{
uint8_t v___x_2520_; 
v___x_2520_ = lean_nat_dec_lt(v_stop_2515_, v___x_2518_);
if (v___x_2520_ == 0)
{
lean_dec_ref(v___f_2516_);
lean_dec_ref(v_as_2513_);
return v_init_2512_;
}
else
{
size_t v___x_2521_; size_t v___x_2522_; lean_object* v___x_2523_; 
v___x_2521_ = lean_usize_of_nat(v___x_2518_);
v___x_2522_ = lean_usize_of_nat(v_stop_2515_);
v___x_2523_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2517_, v___f_2516_, v_as_2513_, v___x_2521_, v___x_2522_, v_init_2512_);
return v___x_2523_;
}
}
else
{
uint8_t v___x_2524_; 
v___x_2524_ = lean_nat_dec_lt(v_stop_2515_, v_start_2514_);
if (v___x_2524_ == 0)
{
lean_dec_ref(v___f_2516_);
lean_dec_ref(v_as_2513_);
return v_init_2512_;
}
else
{
size_t v___x_2525_; size_t v___x_2526_; lean_object* v___x_2527_; 
v___x_2525_ = lean_usize_of_nat(v_start_2514_);
v___x_2526_ = lean_usize_of_nat(v_stop_2515_);
v___x_2527_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2517_, v___f_2516_, v_as_2513_, v___x_2525_, v___x_2526_, v_init_2512_);
return v___x_2527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_foldr___boxed(lean_object* v_00_u03b1_2528_, lean_object* v_00_u03b2_2529_, lean_object* v_f_2530_, lean_object* v_init_2531_, lean_object* v_as_2532_, lean_object* v_start_2533_, lean_object* v_stop_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Array_foldr(v_00_u03b1_2528_, v_00_u03b2_2529_, v_f_2530_, v_init_2531_, v_as_2532_, v_start_2533_, v_stop_2534_);
lean_dec(v_stop_2534_);
lean_dec(v_start_2533_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Array_sum___redArg___lam__0(lean_object* v_inst_2536_, lean_object* v_x1_2537_, lean_object* v_x2_2538_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = lean_apply_2(v_inst_2536_, v_x1_2537_, v_x2_2538_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Array_sum___redArg(lean_object* v_inst_2540_, lean_object* v_inst_2541_, lean_object* v_as_2542_){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; uint8_t v___x_2546_; 
v___x_2543_ = lean_array_get_size(v_as_2542_);
v___x_2544_ = lean_unsigned_to_nat(0u);
v___x_2545_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2546_ = lean_nat_dec_lt(v___x_2544_, v___x_2543_);
if (v___x_2546_ == 0)
{
lean_dec_ref(v_as_2542_);
lean_dec(v_inst_2540_);
return v_inst_2541_;
}
else
{
lean_object* v___f_2547_; size_t v___x_2548_; size_t v___x_2549_; lean_object* v___x_2550_; 
v___f_2547_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2547_, 0, v_inst_2540_);
v___x_2548_ = lean_usize_of_nat(v___x_2543_);
v___x_2549_ = ((size_t)0ULL);
v___x_2550_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2545_, v___f_2547_, v_as_2542_, v___x_2548_, v___x_2549_, v_inst_2541_);
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_Array_sum(lean_object* v_00_u03b1_2551_, lean_object* v_inst_2552_, lean_object* v_inst_2553_, lean_object* v_as_2554_){
_start:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; uint8_t v___x_2558_; 
v___x_2555_ = lean_array_get_size(v_as_2554_);
v___x_2556_ = lean_unsigned_to_nat(0u);
v___x_2557_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2558_ = lean_nat_dec_lt(v___x_2556_, v___x_2555_);
if (v___x_2558_ == 0)
{
lean_dec_ref(v_as_2554_);
lean_dec(v_inst_2552_);
return v_inst_2553_;
}
else
{
lean_object* v___f_2559_; size_t v___x_2560_; size_t v___x_2561_; lean_object* v___x_2562_; 
v___f_2559_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2559_, 0, v_inst_2552_);
v___x_2560_ = lean_usize_of_nat(v___x_2555_);
v___x_2561_ = ((size_t)0ULL);
v___x_2562_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2557_, v___f_2559_, v_as_2554_, v___x_2560_, v___x_2561_, v_inst_2553_);
return v___x_2562_;
}
}
}
LEAN_EXPORT lean_object* l_Array_prod___redArg(lean_object* v_inst_2563_, lean_object* v_inst_2564_, lean_object* v_as_2565_){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; uint8_t v___x_2569_; 
v___x_2566_ = lean_array_get_size(v_as_2565_);
v___x_2567_ = lean_unsigned_to_nat(0u);
v___x_2568_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2569_ = lean_nat_dec_lt(v___x_2567_, v___x_2566_);
if (v___x_2569_ == 0)
{
lean_dec_ref(v_as_2565_);
lean_dec(v_inst_2563_);
return v_inst_2564_;
}
else
{
lean_object* v___f_2570_; size_t v___x_2571_; size_t v___x_2572_; lean_object* v___x_2573_; 
v___f_2570_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2570_, 0, v_inst_2563_);
v___x_2571_ = lean_usize_of_nat(v___x_2566_);
v___x_2572_ = ((size_t)0ULL);
v___x_2573_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2568_, v___f_2570_, v_as_2565_, v___x_2571_, v___x_2572_, v_inst_2564_);
return v___x_2573_;
}
}
}
LEAN_EXPORT lean_object* l_Array_prod(lean_object* v_00_u03b1_2574_, lean_object* v_inst_2575_, lean_object* v_inst_2576_, lean_object* v_as_2577_){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; uint8_t v___x_2581_; 
v___x_2578_ = lean_array_get_size(v_as_2577_);
v___x_2579_ = lean_unsigned_to_nat(0u);
v___x_2580_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2581_ = lean_nat_dec_lt(v___x_2579_, v___x_2578_);
if (v___x_2581_ == 0)
{
lean_dec_ref(v_as_2577_);
lean_dec(v_inst_2575_);
return v_inst_2576_;
}
else
{
lean_object* v___f_2582_; size_t v___x_2583_; size_t v___x_2584_; lean_object* v___x_2585_; 
v___f_2582_ = lean_alloc_closure((void*)(l_Array_sum___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2582_, 0, v_inst_2575_);
v___x_2583_ = lean_usize_of_nat(v___x_2578_);
v___x_2584_ = ((size_t)0ULL);
v___x_2585_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2580_, v___f_2582_, v_as_2577_, v___x_2583_, v___x_2584_, v_inst_2576_);
return v___x_2585_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0(lean_object* v_p_2586_, lean_object* v_x1_2587_, lean_object* v_x2_2588_){
_start:
{
lean_object* v___x_2589_; uint8_t v___x_2590_; 
v___x_2589_ = lean_apply_1(v_p_2586_, v_x1_2587_);
v___x_2590_ = lean_unbox(v___x_2589_);
if (v___x_2590_ == 0)
{
lean_inc(v_x2_2588_);
return v_x2_2588_;
}
else
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = lean_unsigned_to_nat(1u);
v___x_2592_ = lean_nat_add(v_x2_2588_, v___x_2591_);
return v___x_2592_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg___lam__0___boxed(lean_object* v_p_2593_, lean_object* v_x1_2594_, lean_object* v_x2_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Array_countP___redArg___lam__0(v_p_2593_, v_x1_2594_, v_x2_2595_);
lean_dec(v_x2_2595_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Array_countP___redArg(lean_object* v_p_2597_, lean_object* v_as_2598_){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; uint8_t v___x_2602_; 
v___x_2599_ = lean_unsigned_to_nat(0u);
v___x_2600_ = lean_array_get_size(v_as_2598_);
v___x_2601_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2602_ = lean_nat_dec_lt(v___x_2599_, v___x_2600_);
if (v___x_2602_ == 0)
{
lean_dec_ref(v_as_2598_);
lean_dec_ref(v_p_2597_);
return v___x_2599_;
}
else
{
lean_object* v___f_2603_; size_t v___x_2604_; size_t v___x_2605_; lean_object* v___x_2606_; 
v___f_2603_ = lean_alloc_closure((void*)(l_Array_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2603_, 0, v_p_2597_);
v___x_2604_ = lean_usize_of_nat(v___x_2600_);
v___x_2605_ = ((size_t)0ULL);
v___x_2606_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2601_, v___f_2603_, v_as_2598_, v___x_2604_, v___x_2605_, v___x_2599_);
return v___x_2606_;
}
}
}
LEAN_EXPORT lean_object* l_Array_countP(lean_object* v_00_u03b1_2607_, lean_object* v_p_2608_, lean_object* v_as_2609_){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; 
v___x_2610_ = lean_unsigned_to_nat(0u);
v___x_2611_ = lean_array_get_size(v_as_2609_);
v___x_2612_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2613_ = lean_nat_dec_lt(v___x_2610_, v___x_2611_);
if (v___x_2613_ == 0)
{
lean_dec_ref(v_as_2609_);
lean_dec_ref(v_p_2608_);
return v___x_2610_;
}
else
{
lean_object* v___f_2614_; size_t v___x_2615_; size_t v___x_2616_; lean_object* v___x_2617_; 
v___f_2614_ = lean_alloc_closure((void*)(l_Array_countP___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2614_, 0, v_p_2608_);
v___x_2615_ = lean_usize_of_nat(v___x_2611_);
v___x_2616_ = ((size_t)0ULL);
v___x_2617_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2612_, v___f_2614_, v_as_2609_, v___x_2615_, v___x_2616_, v___x_2610_);
return v___x_2617_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0(lean_object* v_inst_2618_, lean_object* v_a_2619_, lean_object* v_x1_2620_, lean_object* v_x2_2621_){
_start:
{
lean_object* v___x_2622_; uint8_t v___x_2623_; 
v___x_2622_ = lean_apply_2(v_inst_2618_, v_x1_2620_, v_a_2619_);
v___x_2623_ = lean_unbox(v___x_2622_);
if (v___x_2623_ == 0)
{
lean_inc(v_x2_2621_);
return v_x2_2621_;
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2624_ = lean_unsigned_to_nat(1u);
v___x_2625_ = lean_nat_add(v_x2_2621_, v___x_2624_);
return v___x_2625_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg___lam__0___boxed(lean_object* v_inst_2626_, lean_object* v_a_2627_, lean_object* v_x1_2628_, lean_object* v_x2_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Array_count___redArg___lam__0(v_inst_2626_, v_a_2627_, v_x1_2628_, v_x2_2629_);
lean_dec(v_x2_2629_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Array_count___redArg(lean_object* v_inst_2631_, lean_object* v_a_2632_, lean_object* v_as_2633_){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
v___x_2634_ = lean_unsigned_to_nat(0u);
v___x_2635_ = lean_array_get_size(v_as_2633_);
v___x_2636_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2637_ = lean_nat_dec_lt(v___x_2634_, v___x_2635_);
if (v___x_2637_ == 0)
{
lean_dec_ref(v_as_2633_);
lean_dec(v_a_2632_);
lean_dec_ref(v_inst_2631_);
return v___x_2634_;
}
else
{
lean_object* v___f_2638_; size_t v___x_2639_; size_t v___x_2640_; lean_object* v___x_2641_; 
v___f_2638_ = lean_alloc_closure((void*)(l_Array_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2638_, 0, v_inst_2631_);
lean_closure_set(v___f_2638_, 1, v_a_2632_);
v___x_2639_ = lean_usize_of_nat(v___x_2635_);
v___x_2640_ = ((size_t)0ULL);
v___x_2641_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2636_, v___f_2638_, v_as_2633_, v___x_2639_, v___x_2640_, v___x_2634_);
return v___x_2641_;
}
}
}
LEAN_EXPORT lean_object* l_Array_count(lean_object* v_00_u03b1_2642_, lean_object* v_inst_2643_, lean_object* v_a_2644_, lean_object* v_as_2645_){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; uint8_t v___x_2649_; 
v___x_2646_ = lean_unsigned_to_nat(0u);
v___x_2647_ = lean_array_get_size(v_as_2645_);
v___x_2648_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2649_ = lean_nat_dec_lt(v___x_2646_, v___x_2647_);
if (v___x_2649_ == 0)
{
lean_dec_ref(v_as_2645_);
lean_dec(v_a_2644_);
lean_dec_ref(v_inst_2643_);
return v___x_2646_;
}
else
{
lean_object* v___f_2650_; size_t v___x_2651_; size_t v___x_2652_; lean_object* v___x_2653_; 
v___f_2650_ = lean_alloc_closure((void*)(l_Array_count___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2650_, 0, v_inst_2643_);
lean_closure_set(v___f_2650_, 1, v_a_2644_);
v___x_2651_ = lean_usize_of_nat(v___x_2647_);
v___x_2652_ = ((size_t)0ULL);
v___x_2653_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_2648_, v___f_2650_, v_as_2645_, v___x_2651_, v___x_2652_, v___x_2646_);
return v___x_2653_;
}
}
}
LEAN_EXPORT lean_object* l_Array_map___redArg___lam__0(lean_object* v_f_2654_, lean_object* v_x_2655_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = lean_apply_1(v_f_2654_, v_x_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Array_map___redArg(lean_object* v_f_2657_, lean_object* v_as_2658_){
_start:
{
lean_object* v___f_2659_; lean_object* v___x_2660_; size_t v_sz_2661_; size_t v___x_2662_; lean_object* v___x_2663_; 
v___f_2659_ = lean_alloc_closure((void*)(l_Array_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2659_, 0, v_f_2657_);
v___x_2660_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2661_ = lean_array_size(v_as_2658_);
v___x_2662_ = ((size_t)0ULL);
v___x_2663_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2660_, v___f_2659_, v_sz_2661_, v___x_2662_, v_as_2658_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l_Array_map(lean_object* v_00_u03b1_2664_, lean_object* v_00_u03b2_2665_, lean_object* v_f_2666_, lean_object* v_as_2667_){
_start:
{
lean_object* v___f_2668_; lean_object* v___x_2669_; size_t v_sz_2670_; size_t v___x_2671_; lean_object* v___x_2672_; 
v___f_2668_ = lean_alloc_closure((void*)(l_Array_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2668_, 0, v_f_2666_);
v___x_2669_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2670_ = lean_array_size(v_as_2667_);
v___x_2671_ = ((size_t)0ULL);
v___x_2672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2669_, v___f_2668_, v_sz_2670_, v___x_2671_, v_as_2667_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0(lean_object* v___y_2673_, lean_object* v_x_2674_){
_start:
{
lean_inc(v___y_2673_);
return v___y_2673_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__0___boxed(lean_object* v___y_2675_, lean_object* v_x_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Array_instFunctor___lam__0(v___y_2675_, v_x_2676_);
lean_dec(v_x_2676_);
lean_dec(v___y_2675_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Array_instFunctor___lam__1(lean_object* v_00_u03b1_2678_, lean_object* v_00_u03b2_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_){
_start:
{
lean_object* v___f_2682_; lean_object* v___x_2683_; size_t v_sz_2684_; size_t v___x_2685_; lean_object* v___x_2686_; 
v___f_2682_ = lean_alloc_closure((void*)(l_Array_instFunctor___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2682_, 0, v___y_2680_);
v___x_2683_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2684_ = lean_array_size(v___y_2681_);
v___x_2685_ = ((size_t)0ULL);
v___x_2686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2683_, v___f_2682_, v_sz_2684_, v___x_2685_, v___y_2681_);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg___lam__0(lean_object* v_f_2693_, lean_object* v_x1_2694_, lean_object* v_x2_2695_, lean_object* v_x3_2696_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = lean_apply_3(v_f_2693_, v_x1_2694_, v_x2_2695_, lean_box(0));
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx___redArg(lean_object* v_as_2698_, lean_object* v_f_2699_){
_start:
{
lean_object* v___f_2700_; lean_object* v___x_2701_; size_t v_sz_2702_; size_t v___x_2703_; lean_object* v___x_2704_; 
v___f_2700_ = lean_alloc_closure((void*)(l_Array_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2700_, 0, v_f_2699_);
v___x_2701_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2702_ = lean_array_size(v_as_2698_);
v___x_2703_ = ((size_t)0ULL);
v___x_2704_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2701_, v___f_2700_, v_sz_2702_, v___x_2703_, v_as_2698_);
return v___x_2704_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdx(lean_object* v_00_u03b1_2705_, lean_object* v_00_u03b2_2706_, lean_object* v_as_2707_, lean_object* v_f_2708_){
_start:
{
lean_object* v___f_2709_; lean_object* v___x_2710_; size_t v_sz_2711_; size_t v___x_2712_; lean_object* v___x_2713_; 
v___f_2709_ = lean_alloc_closure((void*)(l_Array_mapFinIdx___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2709_, 0, v_f_2708_);
v___x_2710_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2711_ = lean_array_size(v_as_2707_);
v___x_2712_ = ((size_t)0ULL);
v___x_2713_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2710_, v___f_2709_, v_sz_2711_, v___x_2712_, v_as_2707_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx___redArg(lean_object* v_f_2714_, lean_object* v_as_2715_){
_start:
{
lean_object* v___f_2716_; lean_object* v___x_2717_; size_t v_sz_2718_; size_t v___x_2719_; lean_object* v___x_2720_; 
v___f_2716_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2716_, 0, v_f_2714_);
v___x_2717_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2718_ = lean_array_size(v_as_2715_);
v___x_2719_ = ((size_t)0ULL);
v___x_2720_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2717_, v___f_2716_, v_sz_2718_, v___x_2719_, v_as_2715_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l_Array_mapIdx(lean_object* v_00_u03b1_2721_, lean_object* v_00_u03b2_2722_, lean_object* v_f_2723_, lean_object* v_as_2724_){
_start:
{
lean_object* v___f_2725_; lean_object* v___x_2726_; size_t v_sz_2727_; size_t v___x_2728_; lean_object* v___x_2729_; 
v___f_2725_ = lean_alloc_closure((void*)(l_Array_mapIdxM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2725_, 0, v_f_2723_);
v___x_2726_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v_sz_2727_ = lean_array_size(v_as_2724_);
v___x_2728_ = ((size_t)0ULL);
v___x_2729_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___redArg(v___x_2726_, v___f_2725_, v_sz_2727_, v___x_2728_, v_as_2724_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(lean_object* v_start_2730_, size_t v_sz_2731_, size_t v_i_2732_, lean_object* v_bs_2733_){
_start:
{
uint8_t v___x_2734_; 
v___x_2734_ = lean_usize_dec_lt(v_i_2732_, v_sz_2731_);
if (v___x_2734_ == 0)
{
return v_bs_2733_;
}
else
{
lean_object* v_v_2735_; lean_object* v___x_2736_; lean_object* v_bs_x27_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; size_t v___x_2741_; size_t v___x_2742_; lean_object* v___x_2743_; 
v_v_2735_ = lean_array_uget(v_bs_2733_, v_i_2732_);
v___x_2736_ = lean_unsigned_to_nat(0u);
v_bs_x27_2737_ = lean_array_uset(v_bs_2733_, v_i_2732_, v___x_2736_);
v___x_2738_ = lean_usize_to_nat(v_i_2732_);
v___x_2739_ = lean_nat_add(v_start_2730_, v___x_2738_);
lean_dec(v___x_2738_);
v___x_2740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2740_, 0, v_v_2735_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
v___x_2741_ = ((size_t)1ULL);
v___x_2742_ = lean_usize_add(v_i_2732_, v___x_2741_);
v___x_2743_ = lean_array_uset(v_bs_x27_2737_, v_i_2732_, v___x_2740_);
v_i_2732_ = v___x_2742_;
v_bs_2733_ = v___x_2743_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg___boxed(lean_object* v_start_2745_, lean_object* v_sz_2746_, lean_object* v_i_2747_, lean_object* v_bs_2748_){
_start:
{
size_t v_sz_boxed_2749_; size_t v_i_boxed_2750_; lean_object* v_res_2751_; 
v_sz_boxed_2749_ = lean_unbox_usize(v_sz_2746_);
lean_dec(v_sz_2746_);
v_i_boxed_2750_ = lean_unbox_usize(v_i_2747_);
lean_dec(v_i_2747_);
v_res_2751_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2745_, v_sz_boxed_2749_, v_i_boxed_2750_, v_bs_2748_);
lean_dec(v_start_2745_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg(lean_object* v_xs_2752_, lean_object* v_start_2753_){
_start:
{
size_t v_sz_2754_; size_t v___x_2755_; lean_object* v___x_2756_; 
v_sz_2754_ = lean_array_size(v_xs_2752_);
v___x_2755_ = ((size_t)0ULL);
v___x_2756_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2753_, v_sz_2754_, v___x_2755_, v_xs_2752_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___redArg___boxed(lean_object* v_xs_2757_, lean_object* v_start_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Array_zipIdx___redArg(v_xs_2757_, v_start_2758_);
lean_dec(v_start_2758_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx(lean_object* v_00_u03b1_2760_, lean_object* v_xs_2761_, lean_object* v_start_2762_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Array_zipIdx___redArg(v_xs_2761_, v_start_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l_Array_zipIdx___boxed(lean_object* v_00_u03b1_2764_, lean_object* v_xs_2765_, lean_object* v_start_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Array_zipIdx(v_00_u03b1_2764_, v_xs_2765_, v_start_2766_);
lean_dec(v_start_2766_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(lean_object* v_00_u03b1_2768_, lean_object* v_start_2769_, lean_object* v_as_2770_, size_t v_sz_2771_, size_t v_i_2772_, lean_object* v_bs_2773_){
_start:
{
lean_object* v___x_2774_; 
v___x_2774_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___redArg(v_start_2769_, v_sz_2771_, v_i_2772_, v_bs_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0___boxed(lean_object* v_00_u03b1_2775_, lean_object* v_start_2776_, lean_object* v_as_2777_, lean_object* v_sz_2778_, lean_object* v_i_2779_, lean_object* v_bs_2780_){
_start:
{
size_t v_sz_boxed_2781_; size_t v_i_boxed_2782_; lean_object* v_res_2783_; 
v_sz_boxed_2781_ = lean_unbox_usize(v_sz_2778_);
lean_dec(v_sz_2778_);
v_i_boxed_2782_ = lean_unbox_usize(v_i_2779_);
lean_dec(v_i_2779_);
v_res_2783_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Array_zipIdx_spec__0(v_00_u03b1_2775_, v_start_2776_, v_as_2777_, v_sz_boxed_2781_, v_i_boxed_2782_, v_bs_2780_);
lean_dec_ref(v_as_2777_);
lean_dec(v_start_2776_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0(lean_object* v_p_2784_, lean_object* v___x_2785_, lean_object* v___x_2786_, lean_object* v_a_2787_, lean_object* v_x_2788_, lean_object* v___y_2789_){
_start:
{
lean_object* v___x_2790_; uint8_t v___x_2791_; 
lean_inc(v_a_2787_);
v___x_2790_ = lean_apply_1(v_p_2784_, v_a_2787_);
v___x_2791_ = lean_unbox(v___x_2790_);
if (v___x_2791_ == 0)
{
lean_object* v___x_2792_; 
lean_dec(v_a_2787_);
v___x_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2785_);
return v___x_2792_;
}
else
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
lean_dec_ref(v___x_2785_);
v___x_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2793_, 0, v_a_2787_);
v___x_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
v___x_2795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
lean_ctor_set(v___x_2795_, 1, v___x_2786_);
v___x_2796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
return v___x_2796_;
}
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg___lam__0___boxed(lean_object* v_p_2797_, lean_object* v___x_2798_, lean_object* v___x_2799_, lean_object* v_a_2800_, lean_object* v_x_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Array_find_x3f___redArg___lam__0(v_p_2797_, v___x_2798_, v___x_2799_, v_a_2800_, v_x_2801_, v___y_2802_);
lean_dec_ref(v___y_2802_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f___redArg(lean_object* v_p_2804_, lean_object* v_as_2805_){
_start:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___f_2810_; size_t v_sz_2811_; size_t v___x_2812_; lean_object* v___x_2813_; lean_object* v_fst_2814_; 
v___x_2806_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2807_ = lean_box(0);
v___x_2808_ = lean_box(0);
v___x_2809_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2810_ = lean_alloc_closure((void*)(l_Array_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2810_, 0, v_p_2804_);
lean_closure_set(v___f_2810_, 1, v___x_2809_);
lean_closure_set(v___f_2810_, 2, v___x_2808_);
v_sz_2811_ = lean_array_size(v_as_2805_);
v___x_2812_ = ((size_t)0ULL);
v___x_2813_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2806_, v_as_2805_, v___f_2810_, v_sz_2811_, v___x_2812_, v___x_2809_);
v_fst_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_fst_2814_);
lean_dec(v___x_2813_);
if (lean_obj_tag(v_fst_2814_) == 0)
{
return v___x_2807_;
}
else
{
lean_object* v_val_2815_; 
v_val_2815_ = lean_ctor_get(v_fst_2814_, 0);
lean_inc(v_val_2815_);
lean_dec_ref_known(v_fst_2814_, 1);
return v_val_2815_;
}
}
}
LEAN_EXPORT lean_object* l_Array_find_x3f(lean_object* v_00_u03b1_2816_, lean_object* v_p_2817_, lean_object* v_as_2818_){
_start:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___f_2823_; size_t v_sz_2824_; size_t v___x_2825_; lean_object* v___x_2826_; lean_object* v_fst_2827_; 
v___x_2819_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2820_ = lean_box(0);
v___x_2821_ = lean_box(0);
v___x_2822_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2823_ = lean_alloc_closure((void*)(l_Array_find_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2823_, 0, v_p_2817_);
lean_closure_set(v___f_2823_, 1, v___x_2822_);
lean_closure_set(v___f_2823_, 2, v___x_2821_);
v_sz_2824_ = lean_array_size(v_as_2818_);
v___x_2825_ = ((size_t)0ULL);
v___x_2826_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2819_, v_as_2818_, v___f_2823_, v_sz_2824_, v___x_2825_, v___x_2822_);
v_fst_2827_ = lean_ctor_get(v___x_2826_, 0);
lean_inc(v_fst_2827_);
lean_dec(v___x_2826_);
if (lean_obj_tag(v_fst_2827_) == 0)
{
return v___x_2820_;
}
else
{
lean_object* v_val_2828_; 
v_val_2828_ = lean_ctor_get(v_fst_2827_, 0);
lean_inc(v_val_2828_);
lean_dec_ref_known(v_fst_2827_, 1);
return v_val_2828_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0(lean_object* v_f_2829_, lean_object* v___x_2830_, lean_object* v___x_2831_, lean_object* v_a_2832_, lean_object* v_x_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v___x_2835_; 
v___x_2835_ = lean_apply_1(v_f_2829_, v_a_2832_);
if (lean_obj_tag(v___x_2835_) == 1)
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
lean_dec_ref(v___x_2831_);
v___x_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
v___x_2837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2836_);
lean_ctor_set(v___x_2837_, 1, v___x_2830_);
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
return v___x_2838_;
}
else
{
lean_object* v___x_2839_; 
lean_dec(v___x_2835_);
v___x_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2831_);
return v___x_2839_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg___lam__0___boxed(lean_object* v_f_2840_, lean_object* v___x_2841_, lean_object* v___x_2842_, lean_object* v_a_2843_, lean_object* v_x_2844_, lean_object* v___y_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l_Array_findSome_x3f___redArg___lam__0(v_f_2840_, v___x_2841_, v___x_2842_, v_a_2843_, v_x_2844_, v___y_2845_);
lean_dec_ref(v___y_2845_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f___redArg(lean_object* v_f_2847_, lean_object* v_as_2848_){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___f_2853_; size_t v_sz_2854_; size_t v___x_2855_; lean_object* v___x_2856_; lean_object* v_fst_2857_; 
v___x_2849_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2850_ = lean_box(0);
v___x_2851_ = lean_box(0);
v___x_2852_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2853_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2853_, 0, v_f_2847_);
lean_closure_set(v___f_2853_, 1, v___x_2851_);
lean_closure_set(v___f_2853_, 2, v___x_2852_);
v_sz_2854_ = lean_array_size(v_as_2848_);
v___x_2855_ = ((size_t)0ULL);
v___x_2856_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2849_, v_as_2848_, v___f_2853_, v_sz_2854_, v___x_2855_, v___x_2852_);
v_fst_2857_ = lean_ctor_get(v___x_2856_, 0);
lean_inc(v_fst_2857_);
lean_dec(v___x_2856_);
if (lean_obj_tag(v_fst_2857_) == 0)
{
return v___x_2850_;
}
else
{
lean_object* v_val_2858_; 
v_val_2858_ = lean_ctor_get(v_fst_2857_, 0);
lean_inc(v_val_2858_);
lean_dec_ref_known(v_fst_2857_, 1);
return v_val_2858_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x3f(lean_object* v_00_u03b1_2859_, lean_object* v_00_u03b2_2860_, lean_object* v_f_2861_, lean_object* v_as_2862_){
_start:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___f_2867_; size_t v_sz_2868_; size_t v___x_2869_; lean_object* v___x_2870_; lean_object* v_fst_2871_; 
v___x_2863_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2864_ = lean_box(0);
v___x_2865_ = lean_box(0);
v___x_2866_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2867_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2867_, 0, v_f_2861_);
lean_closure_set(v___f_2867_, 1, v___x_2865_);
lean_closure_set(v___f_2867_, 2, v___x_2866_);
v_sz_2868_ = lean_array_size(v_as_2862_);
v___x_2869_ = ((size_t)0ULL);
v___x_2870_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2863_, v_as_2862_, v___f_2867_, v_sz_2868_, v___x_2869_, v___x_2866_);
v_fst_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_fst_2871_);
lean_dec(v___x_2870_);
if (lean_obj_tag(v_fst_2871_) == 0)
{
return v___x_2864_;
}
else
{
lean_object* v_val_2872_; 
v_val_2872_ = lean_ctor_get(v_fst_2871_, 0);
lean_inc(v_val_2872_);
lean_dec_ref_known(v_fst_2871_, 1);
return v_val_2872_;
}
}
}
static lean_object* _init_l_Array_findSome_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2875_ = ((lean_object*)(l_Array_findSome_x21___redArg___closed__1));
v___x_2876_ = lean_unsigned_to_nat(14u);
v___x_2877_ = lean_unsigned_to_nat(1286u);
v___x_2878_ = ((lean_object*)(l_Array_findSome_x21___redArg___closed__0));
v___x_2879_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_2880_ = l_mkPanicMessageWithDecl(v___x_2879_, v___x_2878_, v___x_2877_, v___x_2876_, v___x_2875_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg(lean_object* v_inst_2881_, lean_object* v_f_2882_, lean_object* v_xs_2883_){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___f_2890_; size_t v_sz_2891_; size_t v___x_2892_; lean_object* v___x_2893_; lean_object* v_fst_2894_; 
v___x_2887_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2888_ = lean_box(0);
v___x_2889_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2890_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2890_, 0, v_f_2882_);
lean_closure_set(v___f_2890_, 1, v___x_2888_);
lean_closure_set(v___f_2890_, 2, v___x_2889_);
v_sz_2891_ = lean_array_size(v_xs_2883_);
v___x_2892_ = ((size_t)0ULL);
v___x_2893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2887_, v_xs_2883_, v___f_2890_, v_sz_2891_, v___x_2892_, v___x_2889_);
v_fst_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_fst_2894_);
lean_dec(v___x_2893_);
if (lean_obj_tag(v_fst_2894_) == 0)
{
goto v___jp_2884_;
}
else
{
lean_object* v_val_2895_; 
v_val_2895_ = lean_ctor_get(v_fst_2894_, 0);
lean_inc(v_val_2895_);
lean_dec_ref_known(v_fst_2894_, 1);
if (lean_obj_tag(v_val_2895_) == 0)
{
goto v___jp_2884_;
}
else
{
lean_object* v_val_2896_; 
v_val_2896_ = lean_ctor_get(v_val_2895_, 0);
lean_inc(v_val_2896_);
lean_dec_ref_known(v_val_2895_, 1);
return v_val_2896_;
}
}
v___jp_2884_:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2885_ = lean_obj_once(&l_Array_findSome_x21___redArg___closed__2, &l_Array_findSome_x21___redArg___closed__2_once, _init_l_Array_findSome_x21___redArg___closed__2);
v___x_2886_ = l_panic___redArg(v_inst_2881_, v___x_2885_);
return v___x_2886_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___redArg___boxed(lean_object* v_inst_2897_, lean_object* v_f_2898_, lean_object* v_xs_2899_){
_start:
{
lean_object* v_res_2900_; 
v_res_2900_ = l_Array_findSome_x21___redArg(v_inst_2897_, v_f_2898_, v_xs_2899_);
lean_dec(v_inst_2897_);
return v_res_2900_;
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21(lean_object* v_00_u03b1_2901_, lean_object* v_00_u03b2_2902_, lean_object* v_inst_2903_, lean_object* v_f_2904_, lean_object* v_xs_2905_){
_start:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___f_2912_; size_t v_sz_2913_; size_t v___x_2914_; lean_object* v___x_2915_; lean_object* v_fst_2916_; 
v___x_2909_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2910_ = lean_box(0);
v___x_2911_ = ((lean_object*)(l_Array_findSomeM_x3f___redArg___closed__0));
v___f_2912_ = lean_alloc_closure((void*)(l_Array_findSome_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2912_, 0, v_f_2904_);
lean_closure_set(v___f_2912_, 1, v___x_2910_);
lean_closure_set(v___f_2912_, 2, v___x_2911_);
v_sz_2913_ = lean_array_size(v_xs_2905_);
v___x_2914_ = ((size_t)0ULL);
v___x_2915_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_2909_, v_xs_2905_, v___f_2912_, v_sz_2913_, v___x_2914_, v___x_2911_);
v_fst_2916_ = lean_ctor_get(v___x_2915_, 0);
lean_inc(v_fst_2916_);
lean_dec(v___x_2915_);
if (lean_obj_tag(v_fst_2916_) == 0)
{
goto v___jp_2906_;
}
else
{
lean_object* v_val_2917_; 
v_val_2917_ = lean_ctor_get(v_fst_2916_, 0);
lean_inc(v_val_2917_);
lean_dec_ref_known(v_fst_2916_, 1);
if (lean_obj_tag(v_val_2917_) == 0)
{
goto v___jp_2906_;
}
else
{
lean_object* v_val_2918_; 
v_val_2918_ = lean_ctor_get(v_val_2917_, 0);
lean_inc(v_val_2918_);
lean_dec_ref_known(v_val_2917_, 1);
return v_val_2918_;
}
}
v___jp_2906_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2907_ = lean_obj_once(&l_Array_findSome_x21___redArg___closed__2, &l_Array_findSome_x21___redArg___closed__2_once, _init_l_Array_findSome_x21___redArg___closed__2);
v___x_2908_ = l_panic___redArg(v_inst_2903_, v___x_2907_);
return v___x_2908_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findSome_x21___boxed(lean_object* v_00_u03b1_2919_, lean_object* v_00_u03b2_2920_, lean_object* v_inst_2921_, lean_object* v_f_2922_, lean_object* v_xs_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Array_findSome_x21(v_00_u03b1_2919_, v_00_u03b2_2920_, v_inst_2921_, v_f_2922_, v_xs_2923_);
lean_dec(v_inst_2921_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg___lam__0(lean_object* v_f_2925_, lean_object* v_x_2926_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = lean_apply_1(v_f_2925_, v_x_2926_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f___redArg(lean_object* v_f_2928_, lean_object* v_as_2929_){
_start:
{
lean_object* v___f_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___f_2930_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2930_, 0, v_f_2928_);
v___x_2931_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2932_ = lean_array_get_size(v_as_2929_);
v___x_2933_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2931_, v___f_2930_, v_as_2929_, v___x_2932_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l_Array_findSomeRev_x3f(lean_object* v_00_u03b1_2934_, lean_object* v_00_u03b2_2935_, lean_object* v_f_2936_, lean_object* v_as_2937_){
_start:
{
lean_object* v___f_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___f_2938_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2938_, 0, v_f_2936_);
v___x_2939_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2940_ = lean_array_get_size(v_as_2937_);
v___x_2941_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2939_, v___f_2938_, v_as_2937_, v___x_2940_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg___lam__0(lean_object* v_p_2942_, lean_object* v_a_2943_){
_start:
{
lean_object* v___x_2944_; uint8_t v___x_2945_; 
lean_inc(v_a_2943_);
v___x_2944_ = lean_apply_1(v_p_2942_, v_a_2943_);
v___x_2945_ = lean_unbox(v___x_2944_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; 
lean_dec(v_a_2943_);
v___x_2946_ = lean_box(0);
return v___x_2946_;
}
else
{
lean_object* v___x_2947_; 
v___x_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2947_, 0, v_a_2943_);
return v___x_2947_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f___redArg(lean_object* v_p_2948_, lean_object* v_as_2949_){
_start:
{
lean_object* v___f_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___f_2950_ = lean_alloc_closure((void*)(l_Array_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2950_, 0, v_p_2948_);
v___x_2951_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2952_ = lean_array_get_size(v_as_2949_);
v___x_2953_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2951_, v___f_2950_, v_as_2949_, v___x_2952_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l_Array_findRev_x3f(lean_object* v_00_u03b1_2954_, lean_object* v_p_2955_, lean_object* v_as_2956_){
_start:
{
lean_object* v___f_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___f_2957_ = lean_alloc_closure((void*)(l_Array_findRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2957_, 0, v_p_2955_);
v___x_2958_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_2959_ = lean_array_get_size(v_as_2956_);
v___x_2960_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___redArg(v___x_2958_, v___f_2957_, v_as_2956_, v___x_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object* v_p_2961_, lean_object* v_as_2962_, lean_object* v_j_2963_){
_start:
{
lean_object* v___x_2964_; uint8_t v___x_2965_; 
v___x_2964_ = lean_array_get_size(v_as_2962_);
v___x_2965_ = lean_nat_dec_lt(v_j_2963_, v___x_2964_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; 
lean_dec(v_j_2963_);
lean_dec_ref(v_p_2961_);
v___x_2966_ = lean_box(0);
return v___x_2966_;
}
else
{
lean_object* v___x_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; 
v___x_2967_ = lean_array_fget_borrowed(v_as_2962_, v_j_2963_);
lean_inc_ref(v_p_2961_);
lean_inc(v___x_2967_);
v___x_2968_ = lean_apply_1(v_p_2961_, v___x_2967_);
v___x_2969_ = lean_unbox(v___x_2968_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2970_ = lean_unsigned_to_nat(1u);
v___x_2971_ = lean_nat_add(v_j_2963_, v___x_2970_);
lean_dec(v_j_2963_);
v_j_2963_ = v___x_2971_;
goto _start;
}
else
{
lean_object* v___x_2973_; 
lean_dec_ref(v_p_2961_);
v___x_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2973_, 0, v_j_2963_);
return v___x_2973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___redArg___boxed(lean_object* v_p_2974_, lean_object* v_as_2975_, lean_object* v_j_2976_){
_start:
{
lean_object* v_res_2977_; 
v_res_2977_ = l_Array_findIdx_x3f_loop___redArg(v_p_2974_, v_as_2975_, v_j_2976_);
lean_dec_ref(v_as_2975_);
return v_res_2977_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop(lean_object* v_00_u03b1_2978_, lean_object* v_p_2979_, lean_object* v_as_2980_, lean_object* v_j_2981_){
_start:
{
lean_object* v___x_2982_; 
v___x_2982_ = l_Array_findIdx_x3f_loop___redArg(v_p_2979_, v_as_2980_, v_j_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___boxed(lean_object* v_00_u03b1_2983_, lean_object* v_p_2984_, lean_object* v_as_2985_, lean_object* v_j_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l_Array_findIdx_x3f_loop(v_00_u03b1_2983_, v_p_2984_, v_as_2985_, v_j_2986_);
lean_dec_ref(v_as_2985_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg(lean_object* v_p_2988_, lean_object* v_as_2989_){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = lean_unsigned_to_nat(0u);
v___x_2991_ = l_Array_findIdx_x3f_loop___redArg(v_p_2988_, v_as_2989_, v___x_2990_);
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___redArg___boxed(lean_object* v_p_2992_, lean_object* v_as_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l_Array_findIdx_x3f___redArg(v_p_2992_, v_as_2993_);
lean_dec_ref(v_as_2993_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f(lean_object* v_00_u03b1_2995_, lean_object* v_p_2996_, lean_object* v_as_2997_){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_unsigned_to_nat(0u);
v___x_2999_ = l_Array_findIdx_x3f_loop___redArg(v_p_2996_, v_as_2997_, v___x_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f___boxed(lean_object* v_00_u03b1_3000_, lean_object* v_p_3001_, lean_object* v_as_3002_){
_start:
{
lean_object* v_res_3003_; 
v_res_3003_ = l_Array_findIdx_x3f(v_00_u03b1_3000_, v_p_3001_, v_as_3002_);
lean_dec_ref(v_as_3002_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(lean_object* v_p_3004_, lean_object* v_as_3005_, lean_object* v_j_3006_){
_start:
{
lean_object* v___x_3007_; uint8_t v___x_3008_; 
v___x_3007_ = lean_array_get_size(v_as_3005_);
v___x_3008_ = lean_nat_dec_lt(v_j_3006_, v___x_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; 
lean_dec(v_j_3006_);
lean_dec_ref(v_p_3004_);
v___x_3009_ = lean_box(0);
return v___x_3009_;
}
else
{
lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v___x_3010_ = lean_array_fget_borrowed(v_as_3005_, v_j_3006_);
lean_inc_ref(v_p_3004_);
lean_inc(v___x_3010_);
v___x_3011_ = lean_apply_1(v_p_3004_, v___x_3010_);
v___x_3012_ = lean_unbox(v___x_3011_);
if (v___x_3012_ == 0)
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3013_ = lean_unsigned_to_nat(1u);
v___x_3014_ = lean_nat_add(v_j_3006_, v___x_3013_);
lean_dec(v_j_3006_);
v_j_3006_ = v___x_3014_;
goto _start;
}
else
{
lean_object* v___x_3016_; 
lean_dec_ref(v_p_3004_);
v___x_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3016_, 0, v_j_3006_);
return v___x_3016_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg___boxed(lean_object* v_p_3017_, lean_object* v_as_3018_, lean_object* v_j_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3017_, v_as_3018_, v_j_3019_);
lean_dec_ref(v_as_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object* v_00_u03b1_3021_, lean_object* v_p_3022_, lean_object* v_as_3023_, lean_object* v_j_3024_){
_start:
{
lean_object* v___x_3025_; 
v___x_3025_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3022_, v_as_3023_, v_j_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___boxed(lean_object* v_00_u03b1_3026_, lean_object* v_p_3027_, lean_object* v_as_3028_, lean_object* v_j_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(v_00_u03b1_3026_, v_p_3027_, v_as_3028_, v_j_3029_);
lean_dec_ref(v_as_3028_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg(lean_object* v_p_3031_, lean_object* v_as_3032_){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = lean_unsigned_to_nat(0u);
v___x_3034_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3031_, v_as_3032_, v___x_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___redArg___boxed(lean_object* v_p_3035_, lean_object* v_as_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Array_findFinIdx_x3f___redArg(v_p_3035_, v_as_3036_);
lean_dec_ref(v_as_3036_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f(lean_object* v_00_u03b1_3038_, lean_object* v_p_3039_, lean_object* v_as_3040_){
_start:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = lean_unsigned_to_nat(0u);
v___x_3042_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_3039_, v_as_3040_, v___x_3041_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Array_findFinIdx_x3f___boxed(lean_object* v_00_u03b1_3043_, lean_object* v_p_3044_, lean_object* v_as_3045_){
_start:
{
lean_object* v_res_3046_; 
v_res_3046_ = l_Array_findFinIdx_x3f(v_00_u03b1_3043_, v_p_3044_, v_as_3045_);
lean_dec_ref(v_as_3045_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___redArg(lean_object* v_p_3047_, lean_object* v_as_3048_){
_start:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3049_ = lean_unsigned_to_nat(0u);
v___x_3050_ = l_Array_findIdx_x3f_loop___redArg(v_p_3047_, v_as_3048_, v___x_3049_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v___x_3051_; 
v___x_3051_ = lean_array_get_size(v_as_3048_);
return v___x_3051_;
}
else
{
lean_object* v_val_3052_; 
v_val_3052_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_val_3052_);
lean_dec_ref_known(v___x_3050_, 1);
return v_val_3052_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___redArg___boxed(lean_object* v_p_3053_, lean_object* v_as_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l_Array_findIdx___redArg(v_p_3053_, v_as_3054_);
lean_dec_ref(v_as_3054_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx(lean_object* v_00_u03b1_3056_, lean_object* v_p_3057_, lean_object* v_as_3058_){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = lean_unsigned_to_nat(0u);
v___x_3060_ = l_Array_findIdx_x3f_loop___redArg(v_p_3057_, v_as_3058_, v___x_3059_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v___x_3061_; 
v___x_3061_ = lean_array_get_size(v_as_3058_);
return v___x_3061_;
}
else
{
lean_object* v_val_3062_; 
v_val_3062_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_val_3062_);
lean_dec_ref_known(v___x_3060_, 1);
return v_val_3062_;
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx___boxed(lean_object* v_00_u03b1_3063_, lean_object* v_p_3064_, lean_object* v_as_3065_){
_start:
{
lean_object* v_res_3066_; 
v_res_3066_ = l_Array_findIdx(v_00_u03b1_3063_, v_p_3064_, v_as_3065_);
lean_dec_ref(v_as_3065_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg(lean_object* v_inst_3067_, lean_object* v_xs_3068_, lean_object* v_v_3069_, lean_object* v_i_3070_){
_start:
{
lean_object* v___x_3071_; uint8_t v___x_3072_; 
v___x_3071_ = lean_array_get_size(v_xs_3068_);
v___x_3072_ = lean_nat_dec_lt(v_i_3070_, v___x_3071_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; 
lean_dec(v_i_3070_);
lean_dec(v_v_3069_);
lean_dec_ref(v_inst_3067_);
v___x_3073_ = lean_box(0);
return v___x_3073_;
}
else
{
lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3074_ = lean_array_fget_borrowed(v_xs_3068_, v_i_3070_);
lean_inc_ref(v_inst_3067_);
lean_inc(v_v_3069_);
lean_inc(v___x_3074_);
v___x_3075_ = lean_apply_2(v_inst_3067_, v___x_3074_, v_v_3069_);
v___x_3076_ = lean_unbox(v___x_3075_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3077_ = lean_unsigned_to_nat(1u);
v___x_3078_ = lean_nat_add(v_i_3070_, v___x_3077_);
lean_dec(v_i_3070_);
v_i_3070_ = v___x_3078_;
goto _start;
}
else
{
lean_object* v___x_3080_; 
lean_dec(v_v_3069_);
lean_dec_ref(v_inst_3067_);
v___x_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3080_, 0, v_i_3070_);
return v___x_3080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___redArg___boxed(lean_object* v_inst_3081_, lean_object* v_xs_3082_, lean_object* v_v_3083_, lean_object* v_i_3084_){
_start:
{
lean_object* v_res_3085_; 
v_res_3085_ = l_Array_idxOfAux___redArg(v_inst_3081_, v_xs_3082_, v_v_3083_, v_i_3084_);
lean_dec_ref(v_xs_3082_);
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux(lean_object* v_00_u03b1_3086_, lean_object* v_inst_3087_, lean_object* v_xs_3088_, lean_object* v_v_3089_, lean_object* v_i_3090_){
_start:
{
lean_object* v___x_3091_; 
v___x_3091_ = l_Array_idxOfAux___redArg(v_inst_3087_, v_xs_3088_, v_v_3089_, v_i_3090_);
return v___x_3091_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___boxed(lean_object* v_00_u03b1_3092_, lean_object* v_inst_3093_, lean_object* v_xs_3094_, lean_object* v_v_3095_, lean_object* v_i_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Array_idxOfAux(v_00_u03b1_3092_, v_inst_3093_, v_xs_3094_, v_v_3095_, v_i_3096_);
lean_dec_ref(v_xs_3094_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg(lean_object* v_inst_3098_, lean_object* v_xs_3099_, lean_object* v_v_3100_){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3101_ = lean_unsigned_to_nat(0u);
v___x_3102_ = l_Array_idxOfAux___redArg(v_inst_3098_, v_xs_3099_, v_v_3100_, v___x_3101_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___redArg___boxed(lean_object* v_inst_3103_, lean_object* v_xs_3104_, lean_object* v_v_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l_Array_finIdxOf_x3f___redArg(v_inst_3103_, v_xs_3104_, v_v_3105_);
lean_dec_ref(v_xs_3104_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f(lean_object* v_00_u03b1_3107_, lean_object* v_inst_3108_, lean_object* v_xs_3109_, lean_object* v_v_3110_){
_start:
{
lean_object* v___x_3111_; 
v___x_3111_ = l_Array_finIdxOf_x3f___redArg(v_inst_3108_, v_xs_3109_, v_v_3110_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___boxed(lean_object* v_00_u03b1_3112_, lean_object* v_inst_3113_, lean_object* v_xs_3114_, lean_object* v_v_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Array_finIdxOf_x3f(v_00_u03b1_3112_, v_inst_3113_, v_xs_3114_, v_v_3115_);
lean_dec_ref(v_xs_3114_);
return v_res_3116_;
}
}
LEAN_EXPORT uint8_t l_Array_idxOf___redArg___lam__0(lean_object* v_inst_3117_, lean_object* v_a_3118_, lean_object* v_x_3119_){
_start:
{
lean_object* v___x_3120_; uint8_t v___x_3121_; 
v___x_3120_ = lean_apply_2(v_inst_3117_, v_x_3119_, v_a_3118_);
v___x_3121_ = lean_unbox(v___x_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___lam__0___boxed(lean_object* v_inst_3122_, lean_object* v_a_3123_, lean_object* v_x_3124_){
_start:
{
uint8_t v_res_3125_; lean_object* v_r_3126_; 
v_res_3125_ = l_Array_idxOf___redArg___lam__0(v_inst_3122_, v_a_3123_, v_x_3124_);
v_r_3126_ = lean_box(v_res_3125_);
return v_r_3126_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg(lean_object* v_inst_3127_, lean_object* v_a_3128_, lean_object* v_as_3129_){
_start:
{
lean_object* v___f_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___f_3130_ = lean_alloc_closure((void*)(l_Array_idxOf___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3130_, 0, v_inst_3127_);
lean_closure_set(v___f_3130_, 1, v_a_3128_);
v___x_3131_ = lean_unsigned_to_nat(0u);
v___x_3132_ = l_Array_findIdx_x3f_loop___redArg(v___f_3130_, v_as_3129_, v___x_3131_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_array_get_size(v_as_3129_);
return v___x_3133_;
}
else
{
lean_object* v_val_3134_; 
v_val_3134_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_val_3134_);
lean_dec_ref_known(v___x_3132_, 1);
return v_val_3134_;
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___redArg___boxed(lean_object* v_inst_3135_, lean_object* v_a_3136_, lean_object* v_as_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l_Array_idxOf___redArg(v_inst_3135_, v_a_3136_, v_as_3137_);
lean_dec_ref(v_as_3137_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf(lean_object* v_00_u03b1_3139_, lean_object* v_inst_3140_, lean_object* v_a_3141_, lean_object* v_as_3142_){
_start:
{
lean_object* v___x_3143_; 
v___x_3143_ = l_Array_idxOf___redArg(v_inst_3140_, v_a_3141_, v_as_3142_);
return v___x_3143_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf___boxed(lean_object* v_00_u03b1_3144_, lean_object* v_inst_3145_, lean_object* v_a_3146_, lean_object* v_as_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Array_idxOf(v_00_u03b1_3144_, v_inst_3145_, v_a_3146_, v_as_3147_);
lean_dec_ref(v_as_3147_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg(lean_object* v_inst_3149_, lean_object* v_xs_3150_, lean_object* v_v_3151_){
_start:
{
lean_object* v___x_3152_; 
v___x_3152_ = l_Array_finIdxOf_x3f___redArg(v_inst_3149_, v_xs_3150_, v_v_3151_);
if (lean_obj_tag(v___x_3152_) == 0)
{
lean_object* v___x_3153_; 
v___x_3153_ = lean_box(0);
return v___x_3153_;
}
else
{
lean_object* v_val_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
v_val_3154_ = lean_ctor_get(v___x_3152_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3152_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3152_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_val_3154_);
lean_dec(v___x_3152_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_val_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___redArg___boxed(lean_object* v_inst_3162_, lean_object* v_xs_3163_, lean_object* v_v_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l_Array_idxOf_x3f___redArg(v_inst_3162_, v_xs_3163_, v_v_3164_);
lean_dec_ref(v_xs_3163_);
return v_res_3165_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f(lean_object* v_00_u03b1_3166_, lean_object* v_inst_3167_, lean_object* v_xs_3168_, lean_object* v_v_3169_){
_start:
{
lean_object* v___x_3170_; 
v___x_3170_ = l_Array_idxOf_x3f___redArg(v_inst_3167_, v_xs_3168_, v_v_3169_);
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___boxed(lean_object* v_00_u03b1_3171_, lean_object* v_inst_3172_, lean_object* v_xs_3173_, lean_object* v_v_3174_){
_start:
{
lean_object* v_res_3175_; 
v_res_3175_ = l_Array_idxOf_x3f(v_00_u03b1_3171_, v_inst_3172_, v_xs_3173_, v_v_3174_);
lean_dec_ref(v_xs_3173_);
return v_res_3175_;
}
}
LEAN_EXPORT uint8_t l_Array_any___redArg___lam__0(lean_object* v_p_3176_, lean_object* v_x_3177_){
_start:
{
lean_object* v___x_3178_; uint8_t v___x_3179_; 
v___x_3178_ = lean_apply_1(v_p_3176_, v_x_3177_);
v___x_3179_ = lean_unbox(v___x_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Array_any___redArg___lam__0___boxed(lean_object* v_p_3180_, lean_object* v_x_3181_){
_start:
{
uint8_t v_res_3182_; lean_object* v_r_3183_; 
v_res_3182_ = l_Array_any___redArg___lam__0(v_p_3180_, v_x_3181_);
v_r_3183_ = lean_box(v_res_3182_);
return v_r_3183_;
}
}
LEAN_EXPORT uint8_t l_Array_any___redArg(lean_object* v_as_3184_, lean_object* v_p_3185_, lean_object* v_start_3186_, lean_object* v_stop_3187_){
_start:
{
lean_object* v___x_3188_; uint8_t v___x_3189_; 
v___x_3188_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3189_ = lean_nat_dec_lt(v_start_3186_, v_stop_3187_);
if (v___x_3189_ == 0)
{
lean_dec(v_stop_3187_);
lean_dec_ref(v_p_3185_);
lean_dec_ref(v_as_3184_);
return v___x_3189_;
}
else
{
lean_object* v___f_3190_; lean_object* v___y_3192_; lean_object* v___x_3198_; uint8_t v___x_3199_; 
v___f_3190_ = lean_alloc_closure((void*)(l_Array_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3190_, 0, v_p_3185_);
v___x_3198_ = lean_array_get_size(v_as_3184_);
v___x_3199_ = lean_nat_dec_le(v_stop_3187_, v___x_3198_);
if (v___x_3199_ == 0)
{
lean_dec(v_stop_3187_);
v___y_3192_ = v___x_3198_;
goto v___jp_3191_;
}
else
{
v___y_3192_ = v_stop_3187_;
goto v___jp_3191_;
}
v___jp_3191_:
{
uint8_t v___x_3193_; 
v___x_3193_ = lean_nat_dec_lt(v_start_3186_, v___y_3192_);
if (v___x_3193_ == 0)
{
lean_dec(v___y_3192_);
lean_dec_ref(v___f_3190_);
lean_dec_ref(v_as_3184_);
return v___x_3193_;
}
else
{
size_t v___x_3194_; size_t v___x_3195_; lean_object* v___x_3196_; uint8_t v___x_3197_; 
v___x_3194_ = lean_usize_of_nat(v_start_3186_);
v___x_3195_ = lean_usize_of_nat(v___y_3192_);
lean_dec(v___y_3192_);
v___x_3196_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3188_, v___f_3190_, v_as_3184_, v___x_3194_, v___x_3195_);
v___x_3197_ = lean_unbox(v___x_3196_);
lean_dec(v___x_3196_);
return v___x_3197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_any___redArg___boxed(lean_object* v_as_3200_, lean_object* v_p_3201_, lean_object* v_start_3202_, lean_object* v_stop_3203_){
_start:
{
uint8_t v_res_3204_; lean_object* v_r_3205_; 
v_res_3204_ = l_Array_any___redArg(v_as_3200_, v_p_3201_, v_start_3202_, v_stop_3203_);
lean_dec(v_start_3202_);
v_r_3205_ = lean_box(v_res_3204_);
return v_r_3205_;
}
}
LEAN_EXPORT uint8_t l_Array_any(lean_object* v_00_u03b1_3206_, lean_object* v_as_3207_, lean_object* v_p_3208_, lean_object* v_start_3209_, lean_object* v_stop_3210_){
_start:
{
lean_object* v___x_3211_; uint8_t v___x_3212_; 
v___x_3211_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3212_ = lean_nat_dec_lt(v_start_3209_, v_stop_3210_);
if (v___x_3212_ == 0)
{
lean_dec(v_stop_3210_);
lean_dec_ref(v_p_3208_);
lean_dec_ref(v_as_3207_);
return v___x_3212_;
}
else
{
lean_object* v___f_3213_; lean_object* v___y_3215_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v___f_3213_ = lean_alloc_closure((void*)(l_Array_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3213_, 0, v_p_3208_);
v___x_3221_ = lean_array_get_size(v_as_3207_);
v___x_3222_ = lean_nat_dec_le(v_stop_3210_, v___x_3221_);
if (v___x_3222_ == 0)
{
lean_dec(v_stop_3210_);
v___y_3215_ = v___x_3221_;
goto v___jp_3214_;
}
else
{
v___y_3215_ = v_stop_3210_;
goto v___jp_3214_;
}
v___jp_3214_:
{
uint8_t v___x_3216_; 
v___x_3216_ = lean_nat_dec_lt(v_start_3209_, v___y_3215_);
if (v___x_3216_ == 0)
{
lean_dec(v___y_3215_);
lean_dec_ref(v___f_3213_);
lean_dec_ref(v_as_3207_);
return v___x_3216_;
}
else
{
size_t v___x_3217_; size_t v___x_3218_; lean_object* v___x_3219_; uint8_t v___x_3220_; 
v___x_3217_ = lean_usize_of_nat(v_start_3209_);
v___x_3218_ = lean_usize_of_nat(v___y_3215_);
lean_dec(v___y_3215_);
v___x_3219_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3211_, v___f_3213_, v_as_3207_, v___x_3217_, v___x_3218_);
v___x_3220_ = lean_unbox(v___x_3219_);
lean_dec(v___x_3219_);
return v___x_3220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_any___boxed(lean_object* v_00_u03b1_3223_, lean_object* v_as_3224_, lean_object* v_p_3225_, lean_object* v_start_3226_, lean_object* v_stop_3227_){
_start:
{
uint8_t v_res_3228_; lean_object* v_r_3229_; 
v_res_3228_ = l_Array_any(v_00_u03b1_3223_, v_as_3224_, v_p_3225_, v_start_3226_, v_stop_3227_);
lean_dec(v_start_3226_);
v_r_3229_ = lean_box(v_res_3228_);
return v_r_3229_;
}
}
LEAN_EXPORT uint8_t l_Array_all___redArg___lam__0(lean_object* v_p_3230_, uint8_t v___x_3231_, lean_object* v_v_3232_){
_start:
{
lean_object* v___x_3233_; uint8_t v___x_3234_; 
v___x_3233_ = lean_apply_1(v_p_3230_, v_v_3232_);
v___x_3234_ = lean_unbox(v___x_3233_);
if (v___x_3234_ == 0)
{
return v___x_3231_;
}
else
{
uint8_t v___x_3235_; 
v___x_3235_ = 0;
return v___x_3235_;
}
}
}
LEAN_EXPORT lean_object* l_Array_all___redArg___lam__0___boxed(lean_object* v_p_3236_, lean_object* v___x_3237_, lean_object* v_v_3238_){
_start:
{
uint8_t v___x_335__boxed_3239_; uint8_t v_res_3240_; lean_object* v_r_3241_; 
v___x_335__boxed_3239_ = lean_unbox(v___x_3237_);
v_res_3240_ = l_Array_all___redArg___lam__0(v_p_3236_, v___x_335__boxed_3239_, v_v_3238_);
v_r_3241_ = lean_box(v_res_3240_);
return v_r_3241_;
}
}
LEAN_EXPORT uint8_t l_Array_all___redArg(lean_object* v_as_3242_, lean_object* v_p_3243_, lean_object* v_start_3244_, lean_object* v_stop_3245_){
_start:
{
lean_object* v___x_3246_; uint8_t v___x_3247_; 
v___x_3246_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3247_ = lean_nat_dec_lt(v_start_3244_, v_stop_3245_);
if (v___x_3247_ == 0)
{
uint8_t v___x_3248_; 
lean_dec(v_stop_3245_);
lean_dec_ref(v_p_3243_);
lean_dec_ref(v_as_3242_);
v___x_3248_ = 1;
return v___x_3248_;
}
else
{
lean_object* v___x_3249_; lean_object* v___f_3250_; lean_object* v___y_3252_; lean_object* v___x_3259_; uint8_t v___x_3260_; 
v___x_3249_ = lean_box(v___x_3247_);
v___f_3250_ = lean_alloc_closure((void*)(l_Array_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3250_, 0, v_p_3243_);
lean_closure_set(v___f_3250_, 1, v___x_3249_);
v___x_3259_ = lean_array_get_size(v_as_3242_);
v___x_3260_ = lean_nat_dec_le(v_stop_3245_, v___x_3259_);
if (v___x_3260_ == 0)
{
lean_dec(v_stop_3245_);
v___y_3252_ = v___x_3259_;
goto v___jp_3251_;
}
else
{
v___y_3252_ = v_stop_3245_;
goto v___jp_3251_;
}
v___jp_3251_:
{
uint8_t v___x_3253_; 
v___x_3253_ = lean_nat_dec_lt(v_start_3244_, v___y_3252_);
if (v___x_3253_ == 0)
{
lean_dec(v___y_3252_);
lean_dec_ref(v___f_3250_);
lean_dec_ref(v_as_3242_);
return v___x_3247_;
}
else
{
size_t v___x_3254_; size_t v___x_3255_; lean_object* v___x_3256_; uint8_t v___x_3257_; 
v___x_3254_ = lean_usize_of_nat(v_start_3244_);
v___x_3255_ = lean_usize_of_nat(v___y_3252_);
lean_dec(v___y_3252_);
v___x_3256_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3246_, v___f_3250_, v_as_3242_, v___x_3254_, v___x_3255_);
v___x_3257_ = lean_unbox(v___x_3256_);
lean_dec(v___x_3256_);
if (v___x_3257_ == 0)
{
return v___x_3253_;
}
else
{
uint8_t v___x_3258_; 
v___x_3258_ = 0;
return v___x_3258_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_all___redArg___boxed(lean_object* v_as_3261_, lean_object* v_p_3262_, lean_object* v_start_3263_, lean_object* v_stop_3264_){
_start:
{
uint8_t v_res_3265_; lean_object* v_r_3266_; 
v_res_3265_ = l_Array_all___redArg(v_as_3261_, v_p_3262_, v_start_3263_, v_stop_3264_);
lean_dec(v_start_3263_);
v_r_3266_ = lean_box(v_res_3265_);
return v_r_3266_;
}
}
LEAN_EXPORT uint8_t l_Array_all(lean_object* v_00_u03b1_3267_, lean_object* v_as_3268_, lean_object* v_p_3269_, lean_object* v_start_3270_, lean_object* v_stop_3271_){
_start:
{
lean_object* v___x_3272_; uint8_t v___x_3273_; 
v___x_3272_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3273_ = lean_nat_dec_lt(v_start_3270_, v_stop_3271_);
if (v___x_3273_ == 0)
{
uint8_t v___x_3274_; 
lean_dec(v_stop_3271_);
lean_dec_ref(v_p_3269_);
lean_dec_ref(v_as_3268_);
v___x_3274_ = 1;
return v___x_3274_;
}
else
{
lean_object* v___x_3275_; lean_object* v___f_3276_; lean_object* v___y_3278_; lean_object* v___x_3285_; uint8_t v___x_3286_; 
v___x_3275_ = lean_box(v___x_3273_);
v___f_3276_ = lean_alloc_closure((void*)(l_Array_all___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3276_, 0, v_p_3269_);
lean_closure_set(v___f_3276_, 1, v___x_3275_);
v___x_3285_ = lean_array_get_size(v_as_3268_);
v___x_3286_ = lean_nat_dec_le(v_stop_3271_, v___x_3285_);
if (v___x_3286_ == 0)
{
lean_dec(v_stop_3271_);
v___y_3278_ = v___x_3285_;
goto v___jp_3277_;
}
else
{
v___y_3278_ = v_stop_3271_;
goto v___jp_3277_;
}
v___jp_3277_:
{
uint8_t v___x_3279_; 
v___x_3279_ = lean_nat_dec_lt(v_start_3270_, v___y_3278_);
if (v___x_3279_ == 0)
{
lean_dec(v___y_3278_);
lean_dec_ref(v___f_3276_);
lean_dec_ref(v_as_3268_);
return v___x_3273_;
}
else
{
size_t v___x_3280_; size_t v___x_3281_; lean_object* v___x_3282_; uint8_t v___x_3283_; 
v___x_3280_ = lean_usize_of_nat(v_start_3270_);
v___x_3281_ = lean_usize_of_nat(v___y_3278_);
lean_dec(v___y_3278_);
v___x_3282_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3272_, v___f_3276_, v_as_3268_, v___x_3280_, v___x_3281_);
v___x_3283_ = lean_unbox(v___x_3282_);
lean_dec(v___x_3282_);
if (v___x_3283_ == 0)
{
return v___x_3279_;
}
else
{
uint8_t v___x_3284_; 
v___x_3284_ = 0;
return v___x_3284_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_all___boxed(lean_object* v_00_u03b1_3287_, lean_object* v_as_3288_, lean_object* v_p_3289_, lean_object* v_start_3290_, lean_object* v_stop_3291_){
_start:
{
uint8_t v_res_3292_; lean_object* v_r_3293_; 
v_res_3292_ = l_Array_all(v_00_u03b1_3287_, v_as_3288_, v_p_3289_, v_start_3290_, v_stop_3291_);
lean_dec(v_start_3290_);
v_r_3293_ = lean_box(v_res_3292_);
return v_r_3293_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___redArg___lam__0(lean_object* v_inst_3294_, lean_object* v_a_3295_, lean_object* v_x_3296_){
_start:
{
lean_object* v___x_3297_; uint8_t v___x_3298_; 
v___x_3297_ = lean_apply_2(v_inst_3294_, v_a_3295_, v_x_3296_);
v___x_3298_ = lean_unbox(v___x_3297_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l_Array_contains___redArg___lam__0___boxed(lean_object* v_inst_3299_, lean_object* v_a_3300_, lean_object* v_x_3301_){
_start:
{
uint8_t v_res_3302_; lean_object* v_r_3303_; 
v_res_3302_ = l_Array_contains___redArg___lam__0(v_inst_3299_, v_a_3300_, v_x_3301_);
v_r_3303_ = lean_box(v_res_3302_);
return v_r_3303_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___redArg(lean_object* v_inst_3304_, lean_object* v_as_3305_, lean_object* v_a_3306_){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; uint8_t v___x_3310_; 
v___x_3307_ = lean_unsigned_to_nat(0u);
v___x_3308_ = lean_array_get_size(v_as_3305_);
v___x_3309_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3310_ = lean_nat_dec_lt(v___x_3307_, v___x_3308_);
if (v___x_3310_ == 0)
{
lean_dec(v_a_3306_);
lean_dec_ref(v_as_3305_);
lean_dec_ref(v_inst_3304_);
return v___x_3310_;
}
else
{
if (v___x_3310_ == 0)
{
lean_dec(v_a_3306_);
lean_dec_ref(v_as_3305_);
lean_dec_ref(v_inst_3304_);
return v___x_3310_;
}
else
{
lean_object* v___f_3311_; size_t v___x_3312_; size_t v___x_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; 
v___f_3311_ = lean_alloc_closure((void*)(l_Array_contains___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3311_, 0, v_inst_3304_);
lean_closure_set(v___f_3311_, 1, v_a_3306_);
v___x_3312_ = ((size_t)0ULL);
v___x_3313_ = lean_usize_of_nat(v___x_3308_);
v___x_3314_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___redArg(v___x_3309_, v___f_3311_, v_as_3305_, v___x_3312_, v___x_3313_);
v___x_3315_ = lean_unbox(v___x_3314_);
lean_dec(v___x_3314_);
return v___x_3315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___redArg___boxed(lean_object* v_inst_3316_, lean_object* v_as_3317_, lean_object* v_a_3318_){
_start:
{
uint8_t v_res_3319_; lean_object* v_r_3320_; 
v_res_3319_ = l_Array_contains___redArg(v_inst_3316_, v_as_3317_, v_a_3318_);
v_r_3320_ = lean_box(v_res_3319_);
return v_r_3320_;
}
}
LEAN_EXPORT uint8_t l_Array_contains(lean_object* v_00_u03b1_3321_, lean_object* v_inst_3322_, lean_object* v_as_3323_, lean_object* v_a_3324_){
_start:
{
uint8_t v___x_3325_; 
v___x_3325_ = l_Array_contains___redArg(v_inst_3322_, v_as_3323_, v_a_3324_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Array_contains___boxed(lean_object* v_00_u03b1_3326_, lean_object* v_inst_3327_, lean_object* v_as_3328_, lean_object* v_a_3329_){
_start:
{
uint8_t v_res_3330_; lean_object* v_r_3331_; 
v_res_3330_ = l_Array_contains(v_00_u03b1_3326_, v_inst_3327_, v_as_3328_, v_a_3329_);
v_r_3331_ = lean_box(v_res_3330_);
return v_r_3331_;
}
}
LEAN_EXPORT uint8_t l_Array_elem___redArg(lean_object* v_inst_3332_, lean_object* v_a_3333_, lean_object* v_as_3334_){
_start:
{
uint8_t v___x_3335_; 
v___x_3335_ = l_Array_contains___redArg(v_inst_3332_, v_as_3334_, v_a_3333_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l_Array_elem___redArg___boxed(lean_object* v_inst_3336_, lean_object* v_a_3337_, lean_object* v_as_3338_){
_start:
{
uint8_t v_res_3339_; lean_object* v_r_3340_; 
v_res_3339_ = l_Array_elem___redArg(v_inst_3336_, v_a_3337_, v_as_3338_);
v_r_3340_ = lean_box(v_res_3339_);
return v_r_3340_;
}
}
LEAN_EXPORT uint8_t l_Array_elem(lean_object* v_00_u03b1_3341_, lean_object* v_inst_3342_, lean_object* v_a_3343_, lean_object* v_as_3344_){
_start:
{
uint8_t v___x_3345_; 
v___x_3345_ = l_Array_contains___redArg(v_inst_3342_, v_as_3344_, v_a_3343_);
return v___x_3345_;
}
}
LEAN_EXPORT lean_object* l_Array_elem___boxed(lean_object* v_00_u03b1_3346_, lean_object* v_inst_3347_, lean_object* v_a_3348_, lean_object* v_as_3349_){
_start:
{
uint8_t v_res_3350_; lean_object* v_r_3351_; 
v_res_3350_ = l_Array_elem(v_00_u03b1_3346_, v_inst_3347_, v_a_3348_, v_as_3349_);
v_r_3351_ = lean_box(v_res_3350_);
return v_r_3351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(lean_object* v_as_3352_, size_t v_i_3353_, size_t v_stop_3354_, lean_object* v_b_3355_){
_start:
{
uint8_t v___x_3356_; 
v___x_3356_ = lean_usize_dec_eq(v_i_3353_, v_stop_3354_);
if (v___x_3356_ == 0)
{
size_t v___x_3357_; size_t v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3357_ = ((size_t)1ULL);
v___x_3358_ = lean_usize_sub(v_i_3353_, v___x_3357_);
v___x_3359_ = lean_array_uget_borrowed(v_as_3352_, v___x_3358_);
lean_inc(v___x_3359_);
v___x_3360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
lean_ctor_set(v___x_3360_, 1, v_b_3355_);
v_i_3353_ = v___x_3358_;
v_b_3355_ = v___x_3360_;
goto _start;
}
else
{
return v_b_3355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg___boxed(lean_object* v_as_3362_, lean_object* v_i_3363_, lean_object* v_stop_3364_, lean_object* v_b_3365_){
_start:
{
size_t v_i_boxed_3366_; size_t v_stop_boxed_3367_; lean_object* v_res_3368_; 
v_i_boxed_3366_ = lean_unbox_usize(v_i_3363_);
lean_dec(v_i_3363_);
v_stop_boxed_3367_ = lean_unbox_usize(v_stop_3364_);
lean_dec(v_stop_3364_);
v_res_3368_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3362_, v_i_boxed_3366_, v_stop_boxed_3367_, v_b_3365_);
lean_dec_ref(v_as_3362_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg(lean_object* v_as_3369_){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; uint8_t v___x_3373_; 
v___x_3370_ = lean_box(0);
v___x_3371_ = lean_array_get_size(v_as_3369_);
v___x_3372_ = lean_unsigned_to_nat(0u);
v___x_3373_ = lean_nat_dec_lt(v___x_3372_, v___x_3371_);
if (v___x_3373_ == 0)
{
return v___x_3370_;
}
else
{
size_t v___x_3374_; size_t v___x_3375_; lean_object* v___x_3376_; 
v___x_3374_ = lean_usize_of_nat(v___x_3371_);
v___x_3375_ = ((size_t)0ULL);
v___x_3376_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3369_, v___x_3374_, v___x_3375_, v___x_3370_);
return v___x_3376_;
}
}
}
LEAN_EXPORT lean_object* l_Array_toListImpl___redArg___boxed(lean_object* v_as_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l_Array_toListImpl___redArg(v_as_3377_);
lean_dec_ref(v_as_3377_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* lean_array_to_list_impl(lean_object* v_00_u03b1_3379_, lean_object* v_as_3380_){
_start:
{
lean_object* v___x_3381_; 
v___x_3381_ = l_Array_toListImpl___redArg(v_as_3380_);
lean_dec_ref(v_as_3380_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(lean_object* v_00_u03b1_3382_, lean_object* v_as_3383_, size_t v_i_3384_, size_t v_stop_3385_, lean_object* v_b_3386_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___redArg(v_as_3383_, v_i_3384_, v_stop_3385_, v_b_3386_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0___boxed(lean_object* v_00_u03b1_3388_, lean_object* v_as_3389_, lean_object* v_i_3390_, lean_object* v_stop_3391_, lean_object* v_b_3392_){
_start:
{
size_t v_i_boxed_3393_; size_t v_stop_boxed_3394_; lean_object* v_res_3395_; 
v_i_boxed_3393_ = lean_unbox_usize(v_i_3390_);
lean_dec(v_i_3390_);
v_stop_boxed_3394_ = lean_unbox_usize(v_stop_3391_);
lean_dec(v_stop_3391_);
v_res_3395_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Array_toListImpl_spec__0(v_00_u03b1_3388_, v_as_3389_, v_i_boxed_3393_, v_stop_boxed_3394_, v_b_3392_);
lean_dec_ref(v_as_3389_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg___lam__0(lean_object* v_x1_3396_, lean_object* v_x2_3397_){
_start:
{
lean_object* v___x_3398_; 
v___x_3398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3398_, 0, v_x1_3396_);
lean_ctor_set(v___x_3398_, 1, v_x2_3397_);
return v___x_3398_;
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend___redArg(lean_object* v_as_3400_, lean_object* v_l_3401_){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; uint8_t v___x_3405_; 
v___x_3402_ = lean_array_get_size(v_as_3400_);
v___x_3403_ = lean_unsigned_to_nat(0u);
v___x_3404_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3405_ = lean_nat_dec_lt(v___x_3403_, v___x_3402_);
if (v___x_3405_ == 0)
{
lean_dec_ref(v_as_3400_);
return v_l_3401_;
}
else
{
lean_object* v___f_3406_; size_t v___x_3407_; size_t v___x_3408_; lean_object* v___x_3409_; 
v___f_3406_ = ((lean_object*)(l_Array_toListAppend___redArg___closed__0));
v___x_3407_ = lean_usize_of_nat(v___x_3402_);
v___x_3408_ = ((size_t)0ULL);
v___x_3409_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_3404_, v___f_3406_, v_as_3400_, v___x_3407_, v___x_3408_, v_l_3401_);
return v___x_3409_;
}
}
}
LEAN_EXPORT lean_object* l_Array_toListAppend(lean_object* v_00_u03b1_3410_, lean_object* v_as_3411_, lean_object* v_l_3412_){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; uint8_t v___x_3416_; 
v___x_3413_ = lean_array_get_size(v_as_3411_);
v___x_3414_ = lean_unsigned_to_nat(0u);
v___x_3415_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3416_ = lean_nat_dec_lt(v___x_3414_, v___x_3413_);
if (v___x_3416_ == 0)
{
lean_dec_ref(v_as_3411_);
return v_l_3412_;
}
else
{
lean_object* v___f_3417_; size_t v___x_3418_; size_t v___x_3419_; lean_object* v___x_3420_; 
v___f_3417_ = ((lean_object*)(l_Array_toListAppend___redArg___closed__0));
v___x_3418_ = lean_usize_of_nat(v___x_3413_);
v___x_3419_ = ((size_t)0ULL);
v___x_3420_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v___x_3415_, v___f_3417_, v_as_3411_, v___x_3418_, v___x_3419_, v_l_3412_);
return v___x_3420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(lean_object* v_as_3421_, size_t v_i_3422_, size_t v_stop_3423_, lean_object* v_b_3424_){
_start:
{
uint8_t v___x_3425_; 
v___x_3425_ = lean_usize_dec_eq(v_i_3422_, v_stop_3423_);
if (v___x_3425_ == 0)
{
lean_object* v___x_3426_; lean_object* v___x_3427_; size_t v___x_3428_; size_t v___x_3429_; 
v___x_3426_ = lean_array_uget_borrowed(v_as_3421_, v_i_3422_);
lean_inc(v___x_3426_);
v___x_3427_ = lean_array_push(v_b_3424_, v___x_3426_);
v___x_3428_ = ((size_t)1ULL);
v___x_3429_ = lean_usize_add(v_i_3422_, v___x_3428_);
v_i_3422_ = v___x_3429_;
v_b_3424_ = v___x_3427_;
goto _start;
}
else
{
return v_b_3424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg___boxed(lean_object* v_as_3431_, lean_object* v_i_3432_, lean_object* v_stop_3433_, lean_object* v_b_3434_){
_start:
{
size_t v_i_boxed_3435_; size_t v_stop_boxed_3436_; lean_object* v_res_3437_; 
v_i_boxed_3435_ = lean_unbox_usize(v_i_3432_);
lean_dec(v_i_3432_);
v_stop_boxed_3436_ = lean_unbox_usize(v_stop_3433_);
lean_dec(v_stop_3433_);
v_res_3437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_as_3431_, v_i_boxed_3435_, v_stop_boxed_3436_, v_b_3434_);
lean_dec_ref(v_as_3431_);
return v_res_3437_;
}
}
LEAN_EXPORT lean_object* l_Array_append___redArg(lean_object* v_as_3438_, lean_object* v_bs_3439_){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; uint8_t v___x_3442_; 
v___x_3440_ = lean_unsigned_to_nat(0u);
v___x_3441_ = lean_array_get_size(v_bs_3439_);
v___x_3442_ = lean_nat_dec_lt(v___x_3440_, v___x_3441_);
if (v___x_3442_ == 0)
{
return v_as_3438_;
}
else
{
size_t v___x_3443_; size_t v___x_3444_; lean_object* v___x_3445_; 
v___x_3443_ = ((size_t)0ULL);
v___x_3444_ = lean_usize_of_nat(v___x_3441_);
v___x_3445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_bs_3439_, v___x_3443_, v___x_3444_, v_as_3438_);
return v___x_3445_;
}
}
}
LEAN_EXPORT lean_object* l_Array_append___redArg___boxed(lean_object* v_as_3446_, lean_object* v_bs_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = l_Array_append___redArg(v_as_3446_, v_bs_3447_);
lean_dec_ref(v_bs_3447_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Array_append(lean_object* v_00_u03b1_3449_, lean_object* v_as_3450_, lean_object* v_bs_3451_){
_start:
{
lean_object* v___x_3452_; 
v___x_3452_ = l_Array_append___redArg(v_as_3450_, v_bs_3451_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Array_append___boxed(lean_object* v_00_u03b1_3453_, lean_object* v_as_3454_, lean_object* v_bs_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = l_Array_append(v_00_u03b1_3453_, v_as_3454_, v_bs_3455_);
lean_dec_ref(v_bs_3455_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(lean_object* v_00_u03b1_3457_, lean_object* v_as_3458_, size_t v_i_3459_, size_t v_stop_3460_, lean_object* v_b_3461_){
_start:
{
lean_object* v___x_3462_; 
v___x_3462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___redArg(v_as_3458_, v_i_3459_, v_stop_3460_, v_b_3461_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0___boxed(lean_object* v_00_u03b1_3463_, lean_object* v_as_3464_, lean_object* v_i_3465_, lean_object* v_stop_3466_, lean_object* v_b_3467_){
_start:
{
size_t v_i_boxed_3468_; size_t v_stop_boxed_3469_; lean_object* v_res_3470_; 
v_i_boxed_3468_ = lean_unbox_usize(v_i_3465_);
lean_dec(v_i_3465_);
v_stop_boxed_3469_ = lean_unbox_usize(v_stop_3466_);
lean_dec(v_stop_3466_);
v_res_3470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_append_spec__0(v_00_u03b1_3463_, v_as_3464_, v_i_boxed_3468_, v_stop_boxed_3469_, v_b_3467_);
lean_dec_ref(v_as_3464_);
return v_res_3470_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend___redArg(){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = ((lean_object*)(l_Array_instAppend___redArg___closed__0));
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend___redArg___boxed(lean_object* v___dummy_3474_){
_start:
{
lean_object* v_res_3475_; 
v_res_3475_ = l_Array_instAppend___redArg();
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l_Array_instAppend(lean_object* v_00_u03b1_3476_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = ((lean_object*)(l_Array_instAppend___redArg___closed__0));
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object* v_x_3478_, lean_object* v_x_3479_){
_start:
{
if (lean_obj_tag(v_x_3479_) == 0)
{
return v_x_3478_;
}
else
{
lean_object* v_head_3480_; lean_object* v_tail_3481_; lean_object* v___x_3482_; 
v_head_3480_ = lean_ctor_get(v_x_3479_, 0);
lean_inc(v_head_3480_);
v_tail_3481_ = lean_ctor_get(v_x_3479_, 1);
lean_inc(v_tail_3481_);
lean_dec_ref_known(v_x_3479_, 2);
v___x_3482_ = lean_array_push(v_x_3478_, v_head_3480_);
v_x_3478_ = v___x_3482_;
v_x_3479_ = v_tail_3481_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_appendList___redArg(lean_object* v_as_3484_, lean_object* v_bs_3485_){
_start:
{
lean_object* v___x_3486_; 
v___x_3486_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_as_3484_, v_bs_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_Array_appendList(lean_object* v_00_u03b1_3487_, lean_object* v_as_3488_, lean_object* v_bs_3489_){
_start:
{
lean_object* v___x_3490_; 
v___x_3490_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_as_3488_, v_bs_3489_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Array_appendList_spec__0(lean_object* v_00_u03b1_3491_, lean_object* v_x_3492_, lean_object* v_x_3493_){
_start:
{
lean_object* v___x_3494_; 
v___x_3494_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_x_3492_, v_x_3493_);
return v___x_3494_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg(){
_start:
{
lean_object* v___x_3497_; 
v___x_3497_ = ((lean_object*)(l_Array_instHAppendList___redArg___closed__0));
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList___redArg___boxed(lean_object* v___dummy_3498_){
_start:
{
lean_object* v_res_3499_; 
v_res_3499_ = l_Array_instHAppendList___redArg();
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* l_Array_instHAppendList(lean_object* v_00_u03b1_3500_){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = ((lean_object*)(l_Array_instHAppendList___redArg___closed__0));
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0(lean_object* v_bs_3502_, lean_object* v_toPure_3503_, lean_object* v_____do__lift_3504_){
_start:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3505_ = l_Array_append___redArg(v_bs_3502_, v_____do__lift_3504_);
v___x_3506_ = lean_apply_2(v_toPure_3503_, lean_box(0), v___x_3505_);
return v___x_3506_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__0___boxed(lean_object* v_bs_3507_, lean_object* v_toPure_3508_, lean_object* v_____do__lift_3509_){
_start:
{
lean_object* v_res_3510_; 
v_res_3510_ = l_Array_flatMapM___redArg___lam__0(v_bs_3507_, v_toPure_3508_, v_____do__lift_3509_);
lean_dec_ref(v_____do__lift_3509_);
return v_res_3510_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg___lam__1(lean_object* v_toPure_3511_, lean_object* v_f_3512_, lean_object* v_toBind_3513_, lean_object* v_bs_3514_, lean_object* v_a_3515_){
_start:
{
lean_object* v___f_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___f_3516_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3516_, 0, v_bs_3514_);
lean_closure_set(v___f_3516_, 1, v_toPure_3511_);
v___x_3517_ = lean_apply_1(v_f_3512_, v_a_3515_);
v___x_3518_ = lean_apply_4(v_toBind_3513_, lean_box(0), lean_box(0), v___x_3517_, v___f_3516_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM___redArg(lean_object* v_inst_3519_, lean_object* v_f_3520_, lean_object* v_as_3521_){
_start:
{
lean_object* v_toApplicative_3522_; lean_object* v_toBind_3523_; lean_object* v_toPure_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; uint8_t v___x_3528_; 
v_toApplicative_3522_ = lean_ctor_get(v_inst_3519_, 0);
v_toBind_3523_ = lean_ctor_get(v_inst_3519_, 1);
v_toPure_3524_ = lean_ctor_get(v_toApplicative_3522_, 1);
v___x_3525_ = lean_unsigned_to_nat(0u);
v___x_3526_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3527_ = lean_array_get_size(v_as_3521_);
v___x_3528_ = lean_nat_dec_lt(v___x_3525_, v___x_3527_);
if (v___x_3528_ == 0)
{
lean_object* v___x_3529_; 
lean_inc(v_toPure_3524_);
lean_dec_ref(v_as_3521_);
lean_dec(v_f_3520_);
lean_dec_ref(v_inst_3519_);
v___x_3529_ = lean_apply_2(v_toPure_3524_, lean_box(0), v___x_3526_);
return v___x_3529_;
}
else
{
lean_object* v___f_3530_; size_t v___x_3531_; size_t v___x_3532_; lean_object* v___x_3533_; 
lean_inc(v_toBind_3523_);
lean_inc(v_toPure_3524_);
v___f_3530_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3530_, 0, v_toPure_3524_);
lean_closure_set(v___f_3530_, 1, v_f_3520_);
lean_closure_set(v___f_3530_, 2, v_toBind_3523_);
v___x_3531_ = ((size_t)0ULL);
v___x_3532_ = lean_usize_of_nat(v___x_3527_);
v___x_3533_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3519_, v___f_3530_, v_as_3521_, v___x_3531_, v___x_3532_, v___x_3526_);
return v___x_3533_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMapM(lean_object* v_00_u03b1_3534_, lean_object* v_m_3535_, lean_object* v_00_u03b2_3536_, lean_object* v_inst_3537_, lean_object* v_f_3538_, lean_object* v_as_3539_){
_start:
{
lean_object* v_toApplicative_3540_; lean_object* v_toBind_3541_; lean_object* v_toPure_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; uint8_t v___x_3546_; 
v_toApplicative_3540_ = lean_ctor_get(v_inst_3537_, 0);
v_toBind_3541_ = lean_ctor_get(v_inst_3537_, 1);
v_toPure_3542_ = lean_ctor_get(v_toApplicative_3540_, 1);
v___x_3543_ = lean_unsigned_to_nat(0u);
v___x_3544_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3545_ = lean_array_get_size(v_as_3539_);
v___x_3546_ = lean_nat_dec_lt(v___x_3543_, v___x_3545_);
if (v___x_3546_ == 0)
{
lean_object* v___x_3547_; 
lean_inc(v_toPure_3542_);
lean_dec_ref(v_as_3539_);
lean_dec(v_f_3538_);
lean_dec_ref(v_inst_3537_);
v___x_3547_ = lean_apply_2(v_toPure_3542_, lean_box(0), v___x_3544_);
return v___x_3547_;
}
else
{
lean_object* v___f_3548_; size_t v___x_3549_; size_t v___x_3550_; lean_object* v___x_3551_; 
lean_inc(v_toBind_3541_);
lean_inc(v_toPure_3542_);
v___f_3548_ = lean_alloc_closure((void*)(l_Array_flatMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3548_, 0, v_toPure_3542_);
lean_closure_set(v___f_3548_, 1, v_f_3538_);
lean_closure_set(v___f_3548_, 2, v_toBind_3541_);
v___x_3549_ = ((size_t)0ULL);
v___x_3550_ = lean_usize_of_nat(v___x_3545_);
v___x_3551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3537_, v___f_3548_, v_as_3539_, v___x_3549_, v___x_3550_, v___x_3544_);
return v___x_3551_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMap___redArg___lam__0(lean_object* v_f_3552_, lean_object* v_x1_3553_, lean_object* v_x2_3554_){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3555_ = lean_apply_1(v_f_3552_, v_x2_3554_);
v___x_3556_ = l_Array_append___redArg(v_x1_3553_, v___x_3555_);
lean_dec_ref(v___x_3555_);
return v___x_3556_;
}
}
LEAN_EXPORT lean_object* l_Array_flatMap___redArg(lean_object* v_f_3557_, lean_object* v_as_3558_){
_start:
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v___x_3559_ = lean_unsigned_to_nat(0u);
v___x_3560_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3561_ = lean_array_get_size(v_as_3558_);
v___x_3562_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3563_ = lean_nat_dec_lt(v___x_3559_, v___x_3561_);
if (v___x_3563_ == 0)
{
lean_dec_ref(v_as_3558_);
lean_dec_ref(v_f_3557_);
return v___x_3560_;
}
else
{
lean_object* v___f_3564_; size_t v___x_3565_; size_t v___x_3566_; lean_object* v___x_3567_; 
v___f_3564_ = lean_alloc_closure((void*)(l_Array_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3564_, 0, v_f_3557_);
v___x_3565_ = ((size_t)0ULL);
v___x_3566_ = lean_usize_of_nat(v___x_3561_);
v___x_3567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3562_, v___f_3564_, v_as_3558_, v___x_3565_, v___x_3566_, v___x_3560_);
return v___x_3567_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatMap(lean_object* v_00_u03b1_3568_, lean_object* v_00_u03b2_3569_, lean_object* v_f_3570_, lean_object* v_as_3571_){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; uint8_t v___x_3576_; 
v___x_3572_ = lean_unsigned_to_nat(0u);
v___x_3573_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3574_ = lean_array_get_size(v_as_3571_);
v___x_3575_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3576_ = lean_nat_dec_lt(v___x_3572_, v___x_3574_);
if (v___x_3576_ == 0)
{
lean_dec_ref(v_as_3571_);
lean_dec_ref(v_f_3570_);
return v___x_3573_;
}
else
{
lean_object* v___f_3577_; size_t v___x_3578_; size_t v___x_3579_; lean_object* v___x_3580_; 
v___f_3577_ = lean_alloc_closure((void*)(l_Array_flatMap___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3577_, 0, v_f_3570_);
v___x_3578_ = ((size_t)0ULL);
v___x_3579_ = lean_usize_of_nat(v___x_3574_);
v___x_3580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3575_, v___f_3577_, v_as_3571_, v___x_3578_, v___x_3579_, v___x_3573_);
return v___x_3580_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatten___redArg(lean_object* v_xss_3582_){
_start:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; uint8_t v___x_3587_; 
v___x_3583_ = lean_unsigned_to_nat(0u);
v___x_3584_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3585_ = lean_array_get_size(v_xss_3582_);
v___x_3586_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3587_ = lean_nat_dec_lt(v___x_3583_, v___x_3585_);
if (v___x_3587_ == 0)
{
lean_dec_ref(v_xss_3582_);
return v___x_3584_;
}
else
{
lean_object* v___f_3588_; size_t v___x_3589_; size_t v___x_3590_; lean_object* v___x_3591_; 
v___f_3588_ = ((lean_object*)(l_Array_flatten___redArg___closed__0));
v___x_3589_ = ((size_t)0ULL);
v___x_3590_ = lean_usize_of_nat(v___x_3585_);
v___x_3591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3586_, v___f_3588_, v_xss_3582_, v___x_3589_, v___x_3590_, v___x_3584_);
return v___x_3591_;
}
}
}
LEAN_EXPORT lean_object* l_Array_flatten(lean_object* v_00_u03b1_3592_, lean_object* v_xss_3593_){
_start:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; uint8_t v___x_3598_; 
v___x_3594_ = lean_unsigned_to_nat(0u);
v___x_3595_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_3596_ = lean_array_get_size(v_xss_3593_);
v___x_3597_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3598_ = lean_nat_dec_lt(v___x_3594_, v___x_3596_);
if (v___x_3598_ == 0)
{
lean_dec_ref(v_xss_3593_);
return v___x_3595_;
}
else
{
lean_object* v___f_3599_; size_t v___x_3600_; size_t v___x_3601_; lean_object* v___x_3602_; 
v___f_3599_ = ((lean_object*)(l_Array_flatten___redArg___closed__0));
v___x_3600_ = ((size_t)0ULL);
v___x_3601_ = lean_usize_of_nat(v___x_3596_);
v___x_3602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3597_, v___f_3599_, v_xss_3593_, v___x_3600_, v___x_3601_, v___x_3595_);
return v___x_3602_;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse_loop___redArg(lean_object* v_as_3603_, lean_object* v_i_3604_, lean_object* v_j_3605_){
_start:
{
uint8_t v___x_3606_; 
v___x_3606_ = lean_nat_dec_lt(v_i_3604_, v_j_3605_);
if (v___x_3606_ == 0)
{
lean_dec(v_j_3605_);
lean_dec(v_i_3604_);
return v_as_3603_;
}
else
{
lean_object* v_as_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
v_as_3607_ = lean_array_fswap(v_as_3603_, v_i_3604_, v_j_3605_);
v___x_3608_ = lean_unsigned_to_nat(1u);
v___x_3609_ = lean_nat_add(v_i_3604_, v___x_3608_);
lean_dec(v_i_3604_);
v___x_3610_ = lean_nat_sub(v_j_3605_, v___x_3608_);
lean_dec(v_j_3605_);
v_as_3603_ = v_as_3607_;
v_i_3604_ = v___x_3609_;
v_j_3605_ = v___x_3610_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse_loop(lean_object* v_00_u03b1_3612_, lean_object* v_as_3613_, lean_object* v_i_3614_, lean_object* v_j_3615_){
_start:
{
lean_object* v___x_3616_; 
v___x_3616_ = l_Array_reverse_loop___redArg(v_as_3613_, v_i_3614_, v_j_3615_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_Array_reverse___redArg(lean_object* v_as_3617_){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; uint8_t v___x_3620_; 
v___x_3618_ = lean_array_get_size(v_as_3617_);
v___x_3619_ = lean_unsigned_to_nat(1u);
v___x_3620_ = lean_nat_dec_le(v___x_3618_, v___x_3619_);
if (v___x_3620_ == 0)
{
lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3621_ = lean_unsigned_to_nat(0u);
v___x_3622_ = lean_nat_sub(v___x_3618_, v___x_3619_);
v___x_3623_ = l_Array_reverse_loop___redArg(v_as_3617_, v___x_3621_, v___x_3622_);
return v___x_3623_;
}
else
{
return v_as_3617_;
}
}
}
LEAN_EXPORT lean_object* l_Array_reverse(lean_object* v_00_u03b1_3624_, lean_object* v_as_3625_){
_start:
{
lean_object* v___x_3626_; 
v___x_3626_ = l_Array_reverse___redArg(v_as_3625_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg___lam__0(lean_object* v_p_3627_, lean_object* v_x1_3628_, lean_object* v_x2_3629_){
_start:
{
lean_object* v___x_3630_; uint8_t v___x_3631_; 
lean_inc(v_x2_3629_);
v___x_3630_ = lean_apply_1(v_p_3627_, v_x2_3629_);
v___x_3631_ = lean_unbox(v___x_3630_);
if (v___x_3631_ == 0)
{
lean_dec(v_x2_3629_);
return v_x1_3628_;
}
else
{
lean_object* v___x_3632_; 
v___x_3632_ = lean_array_push(v_x1_3628_, v_x2_3629_);
return v___x_3632_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg(lean_object* v_p_3635_, lean_object* v_as_3636_, lean_object* v_start_3637_, lean_object* v_stop_3638_){
_start:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; uint8_t v___x_3641_; 
v___x_3639_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3640_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3641_ = lean_nat_dec_lt(v_start_3637_, v_stop_3638_);
if (v___x_3641_ == 0)
{
lean_dec_ref(v_as_3636_);
lean_dec_ref(v_p_3635_);
return v___x_3639_;
}
else
{
lean_object* v___f_3642_; lean_object* v___x_3643_; uint8_t v___x_3644_; 
v___f_3642_ = lean_alloc_closure((void*)(l_Array_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3642_, 0, v_p_3635_);
v___x_3643_ = lean_array_get_size(v_as_3636_);
v___x_3644_ = lean_nat_dec_le(v_stop_3638_, v___x_3643_);
if (v___x_3644_ == 0)
{
uint8_t v___x_3645_; 
v___x_3645_ = lean_nat_dec_lt(v_start_3637_, v___x_3643_);
if (v___x_3645_ == 0)
{
lean_dec_ref(v___f_3642_);
lean_dec_ref(v_as_3636_);
return v___x_3639_;
}
else
{
size_t v___x_3646_; size_t v___x_3647_; lean_object* v___x_3648_; 
v___x_3646_ = lean_usize_of_nat(v_start_3637_);
v___x_3647_ = lean_usize_of_nat(v___x_3643_);
v___x_3648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3640_, v___f_3642_, v_as_3636_, v___x_3646_, v___x_3647_, v___x_3639_);
return v___x_3648_;
}
}
else
{
size_t v___x_3649_; size_t v___x_3650_; lean_object* v___x_3651_; 
v___x_3649_ = lean_usize_of_nat(v_start_3637_);
v___x_3650_ = lean_usize_of_nat(v_stop_3638_);
v___x_3651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3640_, v___f_3642_, v_as_3636_, v___x_3649_, v___x_3650_, v___x_3639_);
return v___x_3651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___redArg___boxed(lean_object* v_p_3652_, lean_object* v_as_3653_, lean_object* v_start_3654_, lean_object* v_stop_3655_){
_start:
{
lean_object* v_res_3656_; 
v_res_3656_ = l_Array_filter___redArg(v_p_3652_, v_as_3653_, v_start_3654_, v_stop_3655_);
lean_dec(v_stop_3655_);
lean_dec(v_start_3654_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l_Array_filter(lean_object* v_00_u03b1_3657_, lean_object* v_p_3658_, lean_object* v_as_3659_, lean_object* v_start_3660_, lean_object* v_stop_3661_){
_start:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; uint8_t v___x_3664_; 
v___x_3662_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3663_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3664_ = lean_nat_dec_lt(v_start_3660_, v_stop_3661_);
if (v___x_3664_ == 0)
{
lean_dec_ref(v_as_3659_);
lean_dec_ref(v_p_3658_);
return v___x_3662_;
}
else
{
lean_object* v___f_3665_; lean_object* v___x_3666_; uint8_t v___x_3667_; 
v___f_3665_ = lean_alloc_closure((void*)(l_Array_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3665_, 0, v_p_3658_);
v___x_3666_ = lean_array_get_size(v_as_3659_);
v___x_3667_ = lean_nat_dec_le(v_stop_3661_, v___x_3666_);
if (v___x_3667_ == 0)
{
uint8_t v___x_3668_; 
v___x_3668_ = lean_nat_dec_lt(v_start_3660_, v___x_3666_);
if (v___x_3668_ == 0)
{
lean_dec_ref(v___f_3665_);
lean_dec_ref(v_as_3659_);
return v___x_3662_;
}
else
{
size_t v___x_3669_; size_t v___x_3670_; lean_object* v___x_3671_; 
v___x_3669_ = lean_usize_of_nat(v_start_3660_);
v___x_3670_ = lean_usize_of_nat(v___x_3666_);
v___x_3671_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3663_, v___f_3665_, v_as_3659_, v___x_3669_, v___x_3670_, v___x_3662_);
return v___x_3671_;
}
}
else
{
size_t v___x_3672_; size_t v___x_3673_; lean_object* v___x_3674_; 
v___x_3672_ = lean_usize_of_nat(v_start_3660_);
v___x_3673_ = lean_usize_of_nat(v_stop_3661_);
v___x_3674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3663_, v___f_3665_, v_as_3659_, v___x_3672_, v___x_3673_, v___x_3662_);
return v___x_3674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filter___boxed(lean_object* v_00_u03b1_3675_, lean_object* v_p_3676_, lean_object* v_as_3677_, lean_object* v_start_3678_, lean_object* v_stop_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l_Array_filter(v_00_u03b1_3675_, v_p_3676_, v_as_3677_, v_start_3678_, v_stop_3679_);
lean_dec(v_stop_3679_);
lean_dec(v_start_3678_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0(lean_object* v_toPure_3681_, lean_object* v_acc_3682_, lean_object* v_a_3683_, uint8_t v_____do__lift_3684_){
_start:
{
if (v_____do__lift_3684_ == 0)
{
lean_object* v___x_3685_; 
lean_dec(v_a_3683_);
v___x_3685_ = lean_apply_2(v_toPure_3681_, lean_box(0), v_acc_3682_);
return v___x_3685_;
}
else
{
lean_object* v___x_3686_; lean_object* v___x_3687_; 
v___x_3686_ = lean_array_push(v_acc_3682_, v_a_3683_);
v___x_3687_ = lean_apply_2(v_toPure_3681_, lean_box(0), v___x_3686_);
return v___x_3687_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__0___boxed(lean_object* v_toPure_3688_, lean_object* v_acc_3689_, lean_object* v_a_3690_, lean_object* v_____do__lift_3691_){
_start:
{
uint8_t v_____do__lift_99__boxed_3692_; lean_object* v_res_3693_; 
v_____do__lift_99__boxed_3692_ = lean_unbox(v_____do__lift_3691_);
v_res_3693_ = l_Array_filterM___redArg___lam__0(v_toPure_3688_, v_acc_3689_, v_a_3690_, v_____do__lift_99__boxed_3692_);
return v_res_3693_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___lam__1(lean_object* v_toPure_3694_, lean_object* v_p_3695_, lean_object* v_toBind_3696_, lean_object* v_acc_3697_, lean_object* v_a_3698_){
_start:
{
lean_object* v___f_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
lean_inc(v_a_3698_);
v___f_3699_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3699_, 0, v_toPure_3694_);
lean_closure_set(v___f_3699_, 1, v_acc_3697_);
lean_closure_set(v___f_3699_, 2, v_a_3698_);
v___x_3700_ = lean_apply_1(v_p_3695_, v_a_3698_);
v___x_3701_ = lean_apply_4(v_toBind_3696_, lean_box(0), lean_box(0), v___x_3700_, v___f_3699_);
return v___x_3701_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg(lean_object* v_inst_3702_, lean_object* v_p_3703_, lean_object* v_as_3704_, lean_object* v_start_3705_, lean_object* v_stop_3706_){
_start:
{
lean_object* v_toApplicative_3707_; lean_object* v_toBind_3708_; lean_object* v_toPure_3709_; lean_object* v___x_3710_; uint8_t v___x_3711_; 
v_toApplicative_3707_ = lean_ctor_get(v_inst_3702_, 0);
v_toBind_3708_ = lean_ctor_get(v_inst_3702_, 1);
v_toPure_3709_ = lean_ctor_get(v_toApplicative_3707_, 1);
v___x_3710_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3711_ = lean_nat_dec_lt(v_start_3705_, v_stop_3706_);
if (v___x_3711_ == 0)
{
lean_object* v___x_3712_; 
lean_inc(v_toPure_3709_);
lean_dec_ref(v_as_3704_);
lean_dec(v_p_3703_);
lean_dec_ref(v_inst_3702_);
v___x_3712_ = lean_apply_2(v_toPure_3709_, lean_box(0), v___x_3710_);
return v___x_3712_;
}
else
{
lean_object* v___f_3713_; lean_object* v___x_3714_; uint8_t v___x_3715_; 
lean_inc(v_toBind_3708_);
lean_inc(v_toPure_3709_);
v___f_3713_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3713_, 0, v_toPure_3709_);
lean_closure_set(v___f_3713_, 1, v_p_3703_);
lean_closure_set(v___f_3713_, 2, v_toBind_3708_);
v___x_3714_ = lean_array_get_size(v_as_3704_);
v___x_3715_ = lean_nat_dec_le(v_stop_3706_, v___x_3714_);
if (v___x_3715_ == 0)
{
uint8_t v___x_3716_; 
v___x_3716_ = lean_nat_dec_lt(v_start_3705_, v___x_3714_);
if (v___x_3716_ == 0)
{
lean_object* v___x_3717_; 
lean_inc(v_toPure_3709_);
lean_dec_ref(v___f_3713_);
lean_dec_ref(v_as_3704_);
lean_dec_ref(v_inst_3702_);
v___x_3717_ = lean_apply_2(v_toPure_3709_, lean_box(0), v___x_3710_);
return v___x_3717_;
}
else
{
size_t v___x_3718_; size_t v___x_3719_; lean_object* v___x_3720_; 
v___x_3718_ = lean_usize_of_nat(v_start_3705_);
v___x_3719_ = lean_usize_of_nat(v___x_3714_);
v___x_3720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3702_, v___f_3713_, v_as_3704_, v___x_3718_, v___x_3719_, v___x_3710_);
return v___x_3720_;
}
}
else
{
size_t v___x_3721_; size_t v___x_3722_; lean_object* v___x_3723_; 
v___x_3721_ = lean_usize_of_nat(v_start_3705_);
v___x_3722_ = lean_usize_of_nat(v_stop_3706_);
v___x_3723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3702_, v___f_3713_, v_as_3704_, v___x_3721_, v___x_3722_, v___x_3710_);
return v___x_3723_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___redArg___boxed(lean_object* v_inst_3724_, lean_object* v_p_3725_, lean_object* v_as_3726_, lean_object* v_start_3727_, lean_object* v_stop_3728_){
_start:
{
lean_object* v_res_3729_; 
v_res_3729_ = l_Array_filterM___redArg(v_inst_3724_, v_p_3725_, v_as_3726_, v_start_3727_, v_stop_3728_);
lean_dec(v_stop_3728_);
lean_dec(v_start_3727_);
return v_res_3729_;
}
}
LEAN_EXPORT lean_object* l_Array_filterM(lean_object* v_m_3730_, lean_object* v_00_u03b1_3731_, lean_object* v_inst_3732_, lean_object* v_p_3733_, lean_object* v_as_3734_, lean_object* v_start_3735_, lean_object* v_stop_3736_){
_start:
{
lean_object* v_toApplicative_3737_; lean_object* v_toBind_3738_; lean_object* v_toPure_3739_; lean_object* v___x_3740_; uint8_t v___x_3741_; 
v_toApplicative_3737_ = lean_ctor_get(v_inst_3732_, 0);
v_toBind_3738_ = lean_ctor_get(v_inst_3732_, 1);
v_toPure_3739_ = lean_ctor_get(v_toApplicative_3737_, 1);
v___x_3740_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3741_ = lean_nat_dec_lt(v_start_3735_, v_stop_3736_);
if (v___x_3741_ == 0)
{
lean_object* v___x_3742_; 
lean_inc(v_toPure_3739_);
lean_dec_ref(v_as_3734_);
lean_dec(v_p_3733_);
lean_dec_ref(v_inst_3732_);
v___x_3742_ = lean_apply_2(v_toPure_3739_, lean_box(0), v___x_3740_);
return v___x_3742_;
}
else
{
lean_object* v___f_3743_; lean_object* v___x_3744_; uint8_t v___x_3745_; 
lean_inc(v_toBind_3738_);
lean_inc(v_toPure_3739_);
v___f_3743_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3743_, 0, v_toPure_3739_);
lean_closure_set(v___f_3743_, 1, v_p_3733_);
lean_closure_set(v___f_3743_, 2, v_toBind_3738_);
v___x_3744_ = lean_array_get_size(v_as_3734_);
v___x_3745_ = lean_nat_dec_le(v_stop_3736_, v___x_3744_);
if (v___x_3745_ == 0)
{
uint8_t v___x_3746_; 
v___x_3746_ = lean_nat_dec_lt(v_start_3735_, v___x_3744_);
if (v___x_3746_ == 0)
{
lean_object* v___x_3747_; 
lean_inc(v_toPure_3739_);
lean_dec_ref(v___f_3743_);
lean_dec_ref(v_as_3734_);
lean_dec_ref(v_inst_3732_);
v___x_3747_ = lean_apply_2(v_toPure_3739_, lean_box(0), v___x_3740_);
return v___x_3747_;
}
else
{
size_t v___x_3748_; size_t v___x_3749_; lean_object* v___x_3750_; 
v___x_3748_ = lean_usize_of_nat(v_start_3735_);
v___x_3749_ = lean_usize_of_nat(v___x_3744_);
v___x_3750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3732_, v___f_3743_, v_as_3734_, v___x_3748_, v___x_3749_, v___x_3740_);
return v___x_3750_;
}
}
else
{
size_t v___x_3751_; size_t v___x_3752_; lean_object* v___x_3753_; 
v___x_3751_ = lean_usize_of_nat(v_start_3735_);
v___x_3752_ = lean_usize_of_nat(v_stop_3736_);
v___x_3753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3732_, v___f_3743_, v_as_3734_, v___x_3751_, v___x_3752_, v___x_3740_);
return v___x_3753_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterM___boxed(lean_object* v_m_3754_, lean_object* v_00_u03b1_3755_, lean_object* v_inst_3756_, lean_object* v_p_3757_, lean_object* v_as_3758_, lean_object* v_start_3759_, lean_object* v_stop_3760_){
_start:
{
lean_object* v_res_3761_; 
v_res_3761_ = l_Array_filterM(v_m_3754_, v_00_u03b1_3755_, v_inst_3756_, v_p_3757_, v_as_3758_, v_start_3759_, v_stop_3760_);
lean_dec(v_stop_3760_);
lean_dec(v_start_3759_);
return v_res_3761_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___lam__1(lean_object* v_toPure_3762_, lean_object* v_p_3763_, lean_object* v_toBind_3764_, lean_object* v_a_3765_, lean_object* v_acc_3766_){
_start:
{
lean_object* v___f_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
lean_inc(v_a_3765_);
v___f_3767_ = lean_alloc_closure((void*)(l_Array_filterM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3767_, 0, v_toPure_3762_);
lean_closure_set(v___f_3767_, 1, v_acc_3766_);
lean_closure_set(v___f_3767_, 2, v_a_3765_);
v___x_3768_ = lean_apply_1(v_p_3763_, v_a_3765_);
v___x_3769_ = lean_apply_4(v_toBind_3764_, lean_box(0), lean_box(0), v___x_3768_, v___f_3767_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg(lean_object* v_inst_3771_, lean_object* v_p_3772_, lean_object* v_as_3773_, lean_object* v_start_3774_, lean_object* v_stop_3775_){
_start:
{
lean_object* v_toApplicative_3776_; lean_object* v_toFunctor_3777_; lean_object* v_toBind_3778_; lean_object* v_toPure_3779_; lean_object* v_map_3780_; lean_object* v___f_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; 
v_toApplicative_3776_ = lean_ctor_get(v_inst_3771_, 0);
v_toFunctor_3777_ = lean_ctor_get(v_toApplicative_3776_, 0);
v_toBind_3778_ = lean_ctor_get(v_inst_3771_, 1);
v_toPure_3779_ = lean_ctor_get(v_toApplicative_3776_, 1);
v_map_3780_ = lean_ctor_get(v_toFunctor_3777_, 0);
lean_inc(v_map_3780_);
lean_inc(v_toBind_3778_);
lean_inc(v_toPure_3779_);
v___f_3781_ = lean_alloc_closure((void*)(l_Array_filterRevM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3781_, 0, v_toPure_3779_);
lean_closure_set(v___f_3781_, 1, v_p_3772_);
lean_closure_set(v___f_3781_, 2, v_toBind_3778_);
v___x_3782_ = ((lean_object*)(l_Array_filterRevM___redArg___closed__0));
v___x_3783_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3784_ = lean_array_get_size(v_as_3773_);
v___x_3785_ = lean_nat_dec_le(v_start_3774_, v___x_3784_);
if (v___x_3785_ == 0)
{
uint8_t v___x_3786_; 
v___x_3786_ = lean_nat_dec_lt(v_stop_3775_, v___x_3784_);
if (v___x_3786_ == 0)
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
lean_inc(v_toPure_3779_);
lean_dec_ref(v___f_3781_);
lean_dec_ref(v_as_3773_);
lean_dec_ref(v_inst_3771_);
v___x_3787_ = lean_apply_2(v_toPure_3779_, lean_box(0), v___x_3783_);
v___x_3788_ = lean_apply_4(v_map_3780_, lean_box(0), lean_box(0), v___x_3782_, v___x_3787_);
return v___x_3788_;
}
else
{
size_t v___x_3789_; size_t v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; 
v___x_3789_ = lean_usize_of_nat(v___x_3784_);
v___x_3790_ = lean_usize_of_nat(v_stop_3775_);
v___x_3791_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3771_, v___f_3781_, v_as_3773_, v___x_3789_, v___x_3790_, v___x_3783_);
v___x_3792_ = lean_apply_4(v_map_3780_, lean_box(0), lean_box(0), v___x_3782_, v___x_3791_);
return v___x_3792_;
}
}
else
{
uint8_t v___x_3793_; 
v___x_3793_ = lean_nat_dec_lt(v_stop_3775_, v_start_3774_);
if (v___x_3793_ == 0)
{
lean_object* v___x_3794_; lean_object* v___x_3795_; 
lean_inc(v_toPure_3779_);
lean_dec_ref(v___f_3781_);
lean_dec_ref(v_as_3773_);
lean_dec_ref(v_inst_3771_);
v___x_3794_ = lean_apply_2(v_toPure_3779_, lean_box(0), v___x_3783_);
v___x_3795_ = lean_apply_4(v_map_3780_, lean_box(0), lean_box(0), v___x_3782_, v___x_3794_);
return v___x_3795_;
}
else
{
size_t v___x_3796_; size_t v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3796_ = lean_usize_of_nat(v_start_3774_);
v___x_3797_ = lean_usize_of_nat(v_stop_3775_);
v___x_3798_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3771_, v___f_3781_, v_as_3773_, v___x_3796_, v___x_3797_, v___x_3783_);
v___x_3799_ = lean_apply_4(v_map_3780_, lean_box(0), lean_box(0), v___x_3782_, v___x_3798_);
return v___x_3799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___redArg___boxed(lean_object* v_inst_3800_, lean_object* v_p_3801_, lean_object* v_as_3802_, lean_object* v_start_3803_, lean_object* v_stop_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Array_filterRevM___redArg(v_inst_3800_, v_p_3801_, v_as_3802_, v_start_3803_, v_stop_3804_);
lean_dec(v_stop_3804_);
lean_dec(v_start_3803_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM(lean_object* v_m_3806_, lean_object* v_00_u03b1_3807_, lean_object* v_inst_3808_, lean_object* v_p_3809_, lean_object* v_as_3810_, lean_object* v_start_3811_, lean_object* v_stop_3812_){
_start:
{
lean_object* v_toApplicative_3813_; lean_object* v_toFunctor_3814_; lean_object* v_toBind_3815_; lean_object* v_toPure_3816_; lean_object* v_map_3817_; lean_object* v___f_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; uint8_t v___x_3822_; 
v_toApplicative_3813_ = lean_ctor_get(v_inst_3808_, 0);
v_toFunctor_3814_ = lean_ctor_get(v_toApplicative_3813_, 0);
v_toBind_3815_ = lean_ctor_get(v_inst_3808_, 1);
v_toPure_3816_ = lean_ctor_get(v_toApplicative_3813_, 1);
v_map_3817_ = lean_ctor_get(v_toFunctor_3814_, 0);
lean_inc(v_map_3817_);
lean_inc(v_toBind_3815_);
lean_inc(v_toPure_3816_);
v___f_3818_ = lean_alloc_closure((void*)(l_Array_filterRevM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3818_, 0, v_toPure_3816_);
lean_closure_set(v___f_3818_, 1, v_p_3809_);
lean_closure_set(v___f_3818_, 2, v_toBind_3815_);
v___x_3819_ = ((lean_object*)(l_Array_filterRevM___redArg___closed__0));
v___x_3820_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3821_ = lean_array_get_size(v_as_3810_);
v___x_3822_ = lean_nat_dec_le(v_start_3811_, v___x_3821_);
if (v___x_3822_ == 0)
{
uint8_t v___x_3823_; 
v___x_3823_ = lean_nat_dec_lt(v_stop_3812_, v___x_3821_);
if (v___x_3823_ == 0)
{
lean_object* v___x_3824_; lean_object* v___x_3825_; 
lean_inc(v_toPure_3816_);
lean_dec_ref(v___f_3818_);
lean_dec_ref(v_as_3810_);
lean_dec_ref(v_inst_3808_);
v___x_3824_ = lean_apply_2(v_toPure_3816_, lean_box(0), v___x_3820_);
v___x_3825_ = lean_apply_4(v_map_3817_, lean_box(0), lean_box(0), v___x_3819_, v___x_3824_);
return v___x_3825_;
}
else
{
size_t v___x_3826_; size_t v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
v___x_3826_ = lean_usize_of_nat(v___x_3821_);
v___x_3827_ = lean_usize_of_nat(v_stop_3812_);
v___x_3828_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3808_, v___f_3818_, v_as_3810_, v___x_3826_, v___x_3827_, v___x_3820_);
v___x_3829_ = lean_apply_4(v_map_3817_, lean_box(0), lean_box(0), v___x_3819_, v___x_3828_);
return v___x_3829_;
}
}
else
{
uint8_t v___x_3830_; 
v___x_3830_ = lean_nat_dec_lt(v_stop_3812_, v_start_3811_);
if (v___x_3830_ == 0)
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
lean_inc(v_toPure_3816_);
lean_dec_ref(v___f_3818_);
lean_dec_ref(v_as_3810_);
lean_dec_ref(v_inst_3808_);
v___x_3831_ = lean_apply_2(v_toPure_3816_, lean_box(0), v___x_3820_);
v___x_3832_ = lean_apply_4(v_map_3817_, lean_box(0), lean_box(0), v___x_3819_, v___x_3831_);
return v___x_3832_;
}
else
{
size_t v___x_3833_; size_t v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3833_ = lean_usize_of_nat(v_start_3811_);
v___x_3834_ = lean_usize_of_nat(v_stop_3812_);
v___x_3835_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___redArg(v_inst_3808_, v___f_3818_, v_as_3810_, v___x_3833_, v___x_3834_, v___x_3820_);
v___x_3836_ = lean_apply_4(v_map_3817_, lean_box(0), lean_box(0), v___x_3819_, v___x_3835_);
return v___x_3836_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterRevM___boxed(lean_object* v_m_3837_, lean_object* v_00_u03b1_3838_, lean_object* v_inst_3839_, lean_object* v_p_3840_, lean_object* v_as_3841_, lean_object* v_start_3842_, lean_object* v_stop_3843_){
_start:
{
lean_object* v_res_3844_; 
v_res_3844_ = l_Array_filterRevM(v_m_3837_, v_00_u03b1_3838_, v_inst_3839_, v_p_3840_, v_as_3841_, v_start_3842_, v_stop_3843_);
lean_dec(v_stop_3843_);
lean_dec(v_start_3842_);
return v_res_3844_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__0(lean_object* v_toPure_3845_, lean_object* v_bs_3846_, lean_object* v_____do__lift_3847_){
_start:
{
if (lean_obj_tag(v_____do__lift_3847_) == 0)
{
lean_object* v___x_3848_; 
v___x_3848_ = lean_apply_2(v_toPure_3845_, lean_box(0), v_bs_3846_);
return v___x_3848_;
}
else
{
lean_object* v_val_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v_val_3849_ = lean_ctor_get(v_____do__lift_3847_, 0);
lean_inc(v_val_3849_);
lean_dec_ref_known(v_____do__lift_3847_, 1);
v___x_3850_ = lean_array_push(v_bs_3846_, v_val_3849_);
v___x_3851_ = lean_apply_2(v_toPure_3845_, lean_box(0), v___x_3850_);
return v___x_3851_;
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___lam__1(lean_object* v_toPure_3852_, lean_object* v_f_3853_, lean_object* v_toBind_3854_, lean_object* v_bs_3855_, lean_object* v_a_3856_){
_start:
{
lean_object* v___f_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___f_3857_ = lean_alloc_closure((void*)(l_Array_filterMapM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3857_, 0, v_toPure_3852_);
lean_closure_set(v___f_3857_, 1, v_bs_3855_);
v___x_3858_ = lean_apply_1(v_f_3853_, v_a_3856_);
v___x_3859_ = lean_apply_4(v_toBind_3854_, lean_box(0), lean_box(0), v___x_3858_, v___f_3857_);
return v___x_3859_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg(lean_object* v_inst_3860_, lean_object* v_f_3861_, lean_object* v_as_3862_, lean_object* v_start_3863_, lean_object* v_stop_3864_){
_start:
{
lean_object* v_toApplicative_3865_; lean_object* v_toBind_3866_; lean_object* v_toPure_3867_; lean_object* v___x_3868_; uint8_t v___x_3869_; 
v_toApplicative_3865_ = lean_ctor_get(v_inst_3860_, 0);
v_toBind_3866_ = lean_ctor_get(v_inst_3860_, 1);
v_toPure_3867_ = lean_ctor_get(v_toApplicative_3865_, 1);
v___x_3868_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_3869_ = lean_nat_dec_lt(v_start_3863_, v_stop_3864_);
if (v___x_3869_ == 0)
{
lean_object* v___x_3870_; 
lean_inc(v_toPure_3867_);
lean_dec_ref(v_as_3862_);
lean_dec(v_f_3861_);
lean_dec_ref(v_inst_3860_);
v___x_3870_ = lean_apply_2(v_toPure_3867_, lean_box(0), v___x_3868_);
return v___x_3870_;
}
else
{
lean_object* v___f_3871_; lean_object* v___x_3872_; uint8_t v___x_3873_; 
lean_inc(v_toBind_3866_);
lean_inc(v_toPure_3867_);
v___f_3871_ = lean_alloc_closure((void*)(l_Array_filterMapM___redArg___lam__1), 5, 3);
lean_closure_set(v___f_3871_, 0, v_toPure_3867_);
lean_closure_set(v___f_3871_, 1, v_f_3861_);
lean_closure_set(v___f_3871_, 2, v_toBind_3866_);
v___x_3872_ = lean_array_get_size(v_as_3862_);
v___x_3873_ = lean_nat_dec_le(v_stop_3864_, v___x_3872_);
if (v___x_3873_ == 0)
{
uint8_t v___x_3874_; 
v___x_3874_ = lean_nat_dec_lt(v_start_3863_, v___x_3872_);
if (v___x_3874_ == 0)
{
lean_object* v___x_3875_; 
lean_inc(v_toPure_3867_);
lean_dec_ref(v___f_3871_);
lean_dec_ref(v_as_3862_);
lean_dec_ref(v_inst_3860_);
v___x_3875_ = lean_apply_2(v_toPure_3867_, lean_box(0), v___x_3868_);
return v___x_3875_;
}
else
{
size_t v___x_3876_; size_t v___x_3877_; lean_object* v___x_3878_; 
v___x_3876_ = lean_usize_of_nat(v_start_3863_);
v___x_3877_ = lean_usize_of_nat(v___x_3872_);
v___x_3878_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3860_, v___f_3871_, v_as_3862_, v___x_3876_, v___x_3877_, v___x_3868_);
return v___x_3878_;
}
}
else
{
size_t v___x_3879_; size_t v___x_3880_; lean_object* v___x_3881_; 
v___x_3879_ = lean_usize_of_nat(v_start_3863_);
v___x_3880_ = lean_usize_of_nat(v_stop_3864_);
v___x_3881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v_inst_3860_, v___f_3871_, v_as_3862_, v___x_3879_, v___x_3880_, v___x_3868_);
return v___x_3881_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___redArg___boxed(lean_object* v_inst_3882_, lean_object* v_f_3883_, lean_object* v_as_3884_, lean_object* v_start_3885_, lean_object* v_stop_3886_){
_start:
{
lean_object* v_res_3887_; 
v_res_3887_ = l_Array_filterMapM___redArg(v_inst_3882_, v_f_3883_, v_as_3884_, v_start_3885_, v_stop_3886_);
lean_dec(v_stop_3886_);
lean_dec(v_start_3885_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM(lean_object* v_00_u03b1_3888_, lean_object* v_m_3889_, lean_object* v_00_u03b2_3890_, lean_object* v_inst_3891_, lean_object* v_f_3892_, lean_object* v_as_3893_, lean_object* v_start_3894_, lean_object* v_stop_3895_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Array_filterMapM___redArg(v_inst_3891_, v_f_3892_, v_as_3893_, v_start_3894_, v_stop_3895_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___boxed(lean_object* v_00_u03b1_3897_, lean_object* v_m_3898_, lean_object* v_00_u03b2_3899_, lean_object* v_inst_3900_, lean_object* v_f_3901_, lean_object* v_as_3902_, lean_object* v_start_3903_, lean_object* v_stop_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l_Array_filterMapM(v_00_u03b1_3897_, v_m_3898_, v_00_u03b2_3899_, v_inst_3900_, v_f_3901_, v_as_3902_, v_start_3903_, v_stop_3904_);
lean_dec(v_stop_3904_);
lean_dec(v_start_3903_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___redArg(lean_object* v_f_3906_, lean_object* v_as_3907_, lean_object* v_start_3908_, lean_object* v_stop_3909_){
_start:
{
lean_object* v___f_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___f_3910_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3910_, 0, v_f_3906_);
v___x_3911_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3912_ = l_Array_filterMapM___redArg(v___x_3911_, v___f_3910_, v_as_3907_, v_start_3908_, v_stop_3909_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___redArg___boxed(lean_object* v_f_3913_, lean_object* v_as_3914_, lean_object* v_start_3915_, lean_object* v_stop_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Array_filterMap___redArg(v_f_3913_, v_as_3914_, v_start_3915_, v_stop_3916_);
lean_dec(v_stop_3916_);
lean_dec(v_start_3915_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap(lean_object* v_00_u03b1_3918_, lean_object* v_00_u03b2_3919_, lean_object* v_f_3920_, lean_object* v_as_3921_, lean_object* v_start_3922_, lean_object* v_stop_3923_){
_start:
{
lean_object* v___f_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; 
v___f_3924_ = lean_alloc_closure((void*)(l_Array_findSomeRev_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3924_, 0, v_f_3920_);
v___x_3925_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3926_ = l_Array_filterMapM___redArg(v___x_3925_, v___f_3924_, v_as_3921_, v_start_3922_, v_stop_3923_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMap___boxed(lean_object* v_00_u03b1_3927_, lean_object* v_00_u03b2_3928_, lean_object* v_f_3929_, lean_object* v_as_3930_, lean_object* v_start_3931_, lean_object* v_stop_3932_){
_start:
{
lean_object* v_res_3933_; 
v_res_3933_ = l_Array_filterMap(v_00_u03b1_3927_, v_00_u03b2_3928_, v_f_3929_, v_as_3930_, v_start_3931_, v_stop_3932_);
lean_dec(v_stop_3932_);
lean_dec(v_start_3931_);
return v_res_3933_;
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg___lam__0(lean_object* v_lt_3934_, lean_object* v_x1_3935_, lean_object* v_x2_3936_){
_start:
{
lean_object* v___x_3937_; uint8_t v___x_3938_; 
lean_inc(v_x2_3936_);
lean_inc(v_x1_3935_);
v___x_3937_ = lean_apply_2(v_lt_3934_, v_x1_3935_, v_x2_3936_);
v___x_3938_ = lean_unbox(v___x_3937_);
if (v___x_3938_ == 0)
{
lean_dec(v_x2_3936_);
return v_x1_3935_;
}
else
{
lean_dec(v_x1_3935_);
return v_x2_3936_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f___redArg(lean_object* v_as_3939_, lean_object* v_lt_3940_){
_start:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; uint8_t v___x_3943_; 
v___x_3941_ = lean_unsigned_to_nat(0u);
v___x_3942_ = lean_array_get_size(v_as_3939_);
v___x_3943_ = lean_nat_dec_lt(v___x_3941_, v___x_3942_);
if (v___x_3943_ == 0)
{
lean_object* v___x_3944_; 
lean_dec_ref(v_lt_3940_);
lean_dec_ref(v_as_3939_);
v___x_3944_ = lean_box(0);
return v___x_3944_;
}
else
{
lean_object* v_a0_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; uint8_t v___x_3948_; 
v_a0_3945_ = lean_array_fget(v_as_3939_, v___x_3941_);
v___x_3946_ = lean_unsigned_to_nat(1u);
v___x_3947_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3948_ = lean_nat_dec_lt(v___x_3946_, v___x_3942_);
if (v___x_3948_ == 0)
{
lean_object* v___x_3949_; 
lean_dec_ref(v_lt_3940_);
lean_dec_ref(v_as_3939_);
v___x_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3949_, 0, v_a0_3945_);
return v___x_3949_;
}
else
{
lean_object* v___f_3950_; size_t v___x_3951_; size_t v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___f_3950_ = lean_alloc_closure((void*)(l_Array_getMax_x3f___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3950_, 0, v_lt_3940_);
v___x_3951_ = ((size_t)1ULL);
v___x_3952_ = lean_usize_of_nat(v___x_3942_);
v___x_3953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_3947_, v___f_3950_, v_as_3939_, v___x_3951_, v___x_3952_, v_a0_3945_);
v___x_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
return v___x_3954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getMax_x3f(lean_object* v_00_u03b1_3955_, lean_object* v_as_3956_, lean_object* v_lt_3957_){
_start:
{
lean_object* v___x_3958_; 
v___x_3958_ = l_Array_getMax_x3f___redArg(v_as_3956_, v_lt_3957_);
return v___x_3958_;
}
}
LEAN_EXPORT lean_object* l_Array_partition___redArg___lam__0(lean_object* v_p_3959_, lean_object* v_a_3960_, lean_object* v_x_3961_, lean_object* v___y_3962_){
_start:
{
lean_object* v_fst_3963_; lean_object* v_snd_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3980_; 
v_fst_3963_ = lean_ctor_get(v___y_3962_, 0);
v_snd_3964_ = lean_ctor_get(v___y_3962_, 1);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___y_3962_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3966_ = v___y_3962_;
v_isShared_3967_ = v_isSharedCheck_3980_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_snd_3964_);
lean_inc(v_fst_3963_);
lean_dec(v___y_3962_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3980_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3968_; uint8_t v___x_3969_; 
lean_inc(v_a_3960_);
v___x_3968_ = lean_apply_1(v_p_3959_, v_a_3960_);
v___x_3969_ = lean_unbox(v___x_3968_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3970_; lean_object* v___x_3972_; 
v___x_3970_ = lean_array_push(v_snd_3964_, v_a_3960_);
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 1, v___x_3970_);
v___x_3972_ = v___x_3966_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v_fst_3963_);
lean_ctor_set(v_reuseFailAlloc_3974_, 1, v___x_3970_);
v___x_3972_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
lean_object* v___x_3973_; 
v___x_3973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3972_);
return v___x_3973_;
}
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3977_; 
v___x_3975_ = lean_array_push(v_fst_3963_, v_a_3960_);
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 0, v___x_3975_);
v___x_3977_ = v___x_3966_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v___x_3975_);
lean_ctor_set(v_reuseFailAlloc_3979_, 1, v_snd_3964_);
v___x_3977_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
lean_object* v___x_3978_; 
v___x_3978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3978_, 0, v___x_3977_);
return v___x_3978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_partition___redArg(lean_object* v_p_3983_, lean_object* v_as_3984_){
_start:
{
lean_object* v___f_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; size_t v_sz_3988_; size_t v___x_3989_; lean_object* v___x_3990_; lean_object* v_fst_3991_; lean_object* v_snd_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_3999_; 
v___f_3985_ = lean_alloc_closure((void*)(l_Array_partition___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3985_, 0, v_p_3983_);
v___x_3986_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_3987_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v_sz_3988_ = lean_array_size(v_as_3984_);
v___x_3989_ = ((size_t)0ULL);
v___x_3990_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_3986_, v_as_3984_, v___f_3985_, v_sz_3988_, v___x_3989_, v___x_3987_);
v_fst_3991_ = lean_ctor_get(v___x_3990_, 0);
v_snd_3992_ = lean_ctor_get(v___x_3990_, 1);
v_isSharedCheck_3999_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3994_ = v___x_3990_;
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_snd_3992_);
lean_inc(v_fst_3991_);
lean_dec(v___x_3990_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_fst_3991_);
lean_ctor_set(v_reuseFailAlloc_3998_, 1, v_snd_3992_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_partition(lean_object* v_00_u03b1_4000_, lean_object* v_p_4001_, lean_object* v_as_4002_){
_start:
{
lean_object* v___f_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; size_t v_sz_4006_; size_t v___x_4007_; lean_object* v___x_4008_; lean_object* v_fst_4009_; lean_object* v_snd_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
v___f_4003_ = lean_alloc_closure((void*)(l_Array_partition___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4003_, 0, v_p_4001_);
v___x_4004_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4005_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v_sz_4006_ = lean_array_size(v_as_4002_);
v___x_4007_ = ((size_t)0ULL);
v___x_4008_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___redArg(v___x_4004_, v_as_4002_, v___f_4003_, v_sz_4006_, v___x_4007_, v___x_4005_);
v_fst_4009_ = lean_ctor_get(v___x_4008_, 0);
v_snd_4010_ = lean_ctor_get(v___x_4008_, 1);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_4008_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_snd_4010_);
lean_inc(v_fst_4009_);
lean_dec(v___x_4008_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_fst_4009_);
lean_ctor_set(v_reuseFailAlloc_4016_, 1, v_snd_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_popWhile___redArg(lean_object* v_p_4018_, lean_object* v_as_4019_){
_start:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; uint8_t v___x_4022_; 
v___x_4020_ = lean_unsigned_to_nat(0u);
v___x_4021_ = lean_array_get_size(v_as_4019_);
v___x_4022_ = lean_nat_dec_lt(v___x_4020_, v___x_4021_);
if (v___x_4022_ == 0)
{
lean_dec_ref(v_p_4018_);
return v_as_4019_;
}
else
{
lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; uint8_t v___x_4027_; 
v___x_4023_ = lean_unsigned_to_nat(1u);
v___x_4024_ = lean_nat_sub(v___x_4021_, v___x_4023_);
v___x_4025_ = lean_array_fget_borrowed(v_as_4019_, v___x_4024_);
lean_dec(v___x_4024_);
lean_inc_ref(v_p_4018_);
lean_inc(v___x_4025_);
v___x_4026_ = lean_apply_1(v_p_4018_, v___x_4025_);
v___x_4027_ = lean_unbox(v___x_4026_);
if (v___x_4027_ == 0)
{
lean_dec_ref(v_p_4018_);
return v_as_4019_;
}
else
{
lean_object* v___x_4028_; 
v___x_4028_ = lean_array_pop(v_as_4019_);
v_as_4019_ = v___x_4028_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_popWhile(lean_object* v_00_u03b1_4030_, lean_object* v_p_4031_, lean_object* v_as_4032_){
_start:
{
lean_object* v___x_4033_; 
v___x_4033_ = l_Array_popWhile___redArg(v_p_4031_, v_as_4032_);
return v___x_4033_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(lean_object* v_p_4034_, lean_object* v_as_4035_, lean_object* v_i_4036_, lean_object* v_acc_4037_){
_start:
{
lean_object* v___x_4038_; uint8_t v___x_4039_; 
v___x_4038_ = lean_array_get_size(v_as_4035_);
v___x_4039_ = lean_nat_dec_lt(v_i_4036_, v___x_4038_);
if (v___x_4039_ == 0)
{
lean_dec(v_i_4036_);
lean_dec_ref(v_p_4034_);
return v_acc_4037_;
}
else
{
lean_object* v_a_4040_; lean_object* v___x_4041_; uint8_t v___x_4042_; 
v_a_4040_ = lean_array_fget_borrowed(v_as_4035_, v_i_4036_);
lean_inc_ref(v_p_4034_);
lean_inc(v_a_4040_);
v___x_4041_ = lean_apply_1(v_p_4034_, v_a_4040_);
v___x_4042_ = lean_unbox(v___x_4041_);
if (v___x_4042_ == 0)
{
lean_dec(v_i_4036_);
lean_dec_ref(v_p_4034_);
return v_acc_4037_;
}
else
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4043_ = lean_unsigned_to_nat(1u);
v___x_4044_ = lean_nat_add(v_i_4036_, v___x_4043_);
lean_dec(v_i_4036_);
lean_inc(v_a_4040_);
v___x_4045_ = lean_array_push(v_acc_4037_, v_a_4040_);
v_i_4036_ = v___x_4044_;
v_acc_4037_ = v___x_4045_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg___boxed(lean_object* v_p_4047_, lean_object* v_as_4048_, lean_object* v_i_4049_, lean_object* v_acc_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4047_, v_as_4048_, v_i_4049_, v_acc_4050_);
lean_dec_ref(v_as_4048_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(lean_object* v_00_u03b1_4052_, lean_object* v_p_4053_, lean_object* v_as_4054_, lean_object* v_i_4055_, lean_object* v_acc_4056_){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4053_, v_as_4054_, v_i_4055_, v_acc_4056_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___boxed(lean_object* v_00_u03b1_4058_, lean_object* v_p_4059_, lean_object* v_as_4060_, lean_object* v_i_4061_, lean_object* v_acc_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go(v_00_u03b1_4058_, v_p_4059_, v_as_4060_, v_i_4061_, v_acc_4062_);
lean_dec_ref(v_as_4060_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg(lean_object* v_p_4064_, lean_object* v_as_4065_){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4066_ = lean_unsigned_to_nat(0u);
v___x_4067_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4068_ = l___private_Init_Data_Array_Basic_0__Array_takeWhile_go___redArg(v_p_4064_, v_as_4065_, v___x_4066_, v___x_4067_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___redArg___boxed(lean_object* v_p_4069_, lean_object* v_as_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Array_takeWhile___redArg(v_p_4069_, v_as_4070_);
lean_dec_ref(v_as_4070_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile(lean_object* v_00_u03b1_4072_, lean_object* v_p_4073_, lean_object* v_as_4074_){
_start:
{
lean_object* v___x_4075_; 
v___x_4075_ = l_Array_takeWhile___redArg(v_p_4073_, v_as_4074_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Array_takeWhile___boxed(lean_object* v_00_u03b1_4076_, lean_object* v_p_4077_, lean_object* v_as_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l_Array_takeWhile(v_00_u03b1_4076_, v_p_4077_, v_as_4078_);
lean_dec_ref(v_as_4078_);
return v_res_4079_;
}
}
static lean_object* _init_l_Array_eraseIdx___auto__1(void){
_start:
{
lean_object* v___x_4080_; 
v___x_4080_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_4080_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx___redArg(lean_object* v_xs_4081_, lean_object* v_i_4082_){
_start:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; uint8_t v___x_4086_; 
v___x_4083_ = lean_unsigned_to_nat(1u);
v___x_4084_ = lean_nat_add(v_i_4082_, v___x_4083_);
v___x_4085_ = lean_array_get_size(v_xs_4081_);
v___x_4086_ = lean_nat_dec_lt(v___x_4084_, v___x_4085_);
if (v___x_4086_ == 0)
{
lean_object* v___x_4087_; 
lean_dec(v___x_4084_);
lean_dec(v_i_4082_);
v___x_4087_ = lean_array_pop(v_xs_4081_);
return v___x_4087_;
}
else
{
lean_object* v_xs_x27_4088_; 
v_xs_x27_4088_ = lean_array_fswap(v_xs_4081_, v___x_4084_, v_i_4082_);
lean_dec(v_i_4082_);
v_xs_4081_ = v_xs_x27_4088_;
v_i_4082_ = v___x_4084_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx(lean_object* v_00_u03b1_4090_, lean_object* v_xs_4091_, lean_object* v_i_4092_, lean_object* v_h_4093_){
_start:
{
lean_object* v___x_4094_; 
v___x_4094_ = l_Array_eraseIdx___redArg(v_xs_4091_, v_i_4092_);
return v___x_4094_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds___redArg(lean_object* v_xs_4095_, lean_object* v_i_4096_){
_start:
{
lean_object* v___x_4097_; uint8_t v___x_4098_; 
v___x_4097_ = lean_array_get_size(v_xs_4095_);
v___x_4098_ = lean_nat_dec_lt(v_i_4096_, v___x_4097_);
if (v___x_4098_ == 0)
{
lean_dec(v_i_4096_);
return v_xs_4095_;
}
else
{
lean_object* v___x_4099_; 
v___x_4099_ = l_Array_eraseIdx___redArg(v_xs_4095_, v_i_4096_);
return v___x_4099_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdxIfInBounds(lean_object* v_00_u03b1_4100_, lean_object* v_xs_4101_, lean_object* v_i_4102_){
_start:
{
lean_object* v___x_4103_; 
v___x_4103_ = l_Array_eraseIdxIfInBounds___redArg(v_xs_4101_, v_i_4102_);
return v___x_4103_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(lean_object* v_msg_4104_){
_start:
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4105_ = lean_obj_once(&l_Array_instInhabited___closed__0, &l_Array_instInhabited___closed__0_once, _init_l_Array_instInhabited___closed__0);
v___x_4106_ = lean_panic_fn_borrowed(v___x_4105_, v_msg_4104_);
return v___x_4106_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Array_eraseIdx_x21_spec__0(lean_object* v_00_u03b1_4107_, lean_object* v_msg_4108_){
_start:
{
lean_object* v___x_4109_; 
v___x_4109_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v_msg_4108_);
return v___x_4109_;
}
}
static lean_object* _init_l_Array_eraseIdx_x21___redArg___closed__2(void){
_start:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4112_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__1));
v___x_4113_ = lean_unsigned_to_nat(47u);
v___x_4114_ = lean_unsigned_to_nat(1874u);
v___x_4115_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__0));
v___x_4116_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_4117_ = l_mkPanicMessageWithDecl(v___x_4116_, v___x_4115_, v___x_4114_, v___x_4113_, v___x_4112_);
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21___redArg(lean_object* v_xs_4118_, lean_object* v_i_4119_){
_start:
{
lean_object* v___x_4120_; uint8_t v___x_4121_; 
v___x_4120_ = lean_array_get_size(v_xs_4118_);
v___x_4121_ = lean_nat_dec_lt(v_i_4119_, v___x_4120_);
if (v___x_4121_ == 0)
{
lean_object* v___x_4122_; lean_object* v___x_4123_; 
lean_dec(v_i_4119_);
lean_dec_ref(v_xs_4118_);
v___x_4122_ = lean_obj_once(&l_Array_eraseIdx_x21___redArg___closed__2, &l_Array_eraseIdx_x21___redArg___closed__2_once, _init_l_Array_eraseIdx_x21___redArg___closed__2);
v___x_4123_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v___x_4122_);
return v___x_4123_;
}
else
{
lean_object* v___x_4124_; 
v___x_4124_ = l_Array_eraseIdx___redArg(v_xs_4118_, v_i_4119_);
return v___x_4124_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseIdx_x21(lean_object* v_00_u03b1_4125_, lean_object* v_xs_4126_, lean_object* v_i_4127_){
_start:
{
lean_object* v___x_4128_; 
v___x_4128_ = l_Array_eraseIdx_x21___redArg(v_xs_4126_, v_i_4127_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Array_erase___redArg(lean_object* v_inst_4129_, lean_object* v_as_4130_, lean_object* v_a_4131_){
_start:
{
lean_object* v___x_4132_; 
v___x_4132_ = l_Array_finIdxOf_x3f___redArg(v_inst_4129_, v_as_4130_, v_a_4131_);
if (lean_obj_tag(v___x_4132_) == 0)
{
return v_as_4130_;
}
else
{
lean_object* v_val_4133_; lean_object* v___x_4134_; 
v_val_4133_ = lean_ctor_get(v___x_4132_, 0);
lean_inc(v_val_4133_);
lean_dec_ref_known(v___x_4132_, 1);
v___x_4134_ = l_Array_eraseIdx___redArg(v_as_4130_, v_val_4133_);
return v___x_4134_;
}
}
}
LEAN_EXPORT lean_object* l_Array_erase(lean_object* v_00_u03b1_4135_, lean_object* v_inst_4136_, lean_object* v_as_4137_, lean_object* v_a_4138_){
_start:
{
lean_object* v___x_4139_; 
v___x_4139_ = l_Array_erase___redArg(v_inst_4136_, v_as_4137_, v_a_4138_);
return v___x_4139_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseP___redArg(lean_object* v_as_4140_, lean_object* v_p_4141_){
_start:
{
lean_object* v___x_4142_; lean_object* v___x_4143_; 
v___x_4142_ = lean_unsigned_to_nat(0u);
v___x_4143_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop___redArg(v_p_4141_, v_as_4140_, v___x_4142_);
if (lean_obj_tag(v___x_4143_) == 0)
{
return v_as_4140_;
}
else
{
lean_object* v_val_4144_; lean_object* v___x_4145_; 
v_val_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_val_4144_);
lean_dec_ref_known(v___x_4143_, 1);
v___x_4145_ = l_Array_eraseIdx___redArg(v_as_4140_, v_val_4144_);
return v___x_4145_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseP(lean_object* v_00_u03b1_4146_, lean_object* v_as_4147_, lean_object* v_p_4148_){
_start:
{
lean_object* v___x_4149_; 
v___x_4149_ = l_Array_eraseP___redArg(v_as_4147_, v_p_4148_);
return v___x_4149_;
}
}
static lean_object* _init_l_Array_insertIdx___auto__1(void){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = lean_obj_once(&l_Array_swap___auto__1___closed__17, &l_Array_swap___auto__1___closed__17_once, _init_l_Array_swap___auto__1___closed__17);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(lean_object* v_i_4151_, lean_object* v_as_4152_, lean_object* v_j_4153_){
_start:
{
uint8_t v___x_4154_; 
v___x_4154_ = lean_nat_dec_lt(v_i_4151_, v_j_4153_);
if (v___x_4154_ == 0)
{
lean_dec(v_j_4153_);
return v_as_4152_;
}
else
{
lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v_as_4157_; 
v___x_4155_ = lean_unsigned_to_nat(1u);
v___x_4156_ = lean_nat_sub(v_j_4153_, v___x_4155_);
v_as_4157_ = lean_array_fswap(v_as_4152_, v___x_4156_, v_j_4153_);
lean_dec(v_j_4153_);
v_as_4152_ = v_as_4157_;
v_j_4153_ = v___x_4156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg___boxed(lean_object* v_i_4159_, lean_object* v_as_4160_, lean_object* v_j_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4159_, v_as_4160_, v_j_4161_);
lean_dec(v_i_4159_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object* v_00_u03b1_4163_, lean_object* v_i_4164_, lean_object* v_as_4165_, lean_object* v_j_4166_){
_start:
{
lean_object* v___x_4167_; 
v___x_4167_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4164_, v_as_4165_, v_j_4166_);
return v___x_4167_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___boxed(lean_object* v_00_u03b1_4168_, lean_object* v_i_4169_, lean_object* v_as_4170_, lean_object* v_j_4171_){
_start:
{
lean_object* v_res_4172_; 
v_res_4172_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(v_00_u03b1_4168_, v_i_4169_, v_as_4170_, v_j_4171_);
lean_dec(v_i_4169_);
return v_res_4172_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg(lean_object* v_as_4173_, lean_object* v_i_4174_, lean_object* v_a_4175_){
_start:
{
lean_object* v_j_4176_; lean_object* v_as_4177_; lean_object* v___x_4178_; 
v_j_4176_ = lean_array_get_size(v_as_4173_);
v_as_4177_ = lean_array_push(v_as_4173_, v_a_4175_);
v___x_4178_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4174_, v_as_4177_, v_j_4176_);
return v___x_4178_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___redArg___boxed(lean_object* v_as_4179_, lean_object* v_i_4180_, lean_object* v_a_4181_){
_start:
{
lean_object* v_res_4182_; 
v_res_4182_ = l_Array_insertIdx___redArg(v_as_4179_, v_i_4180_, v_a_4181_);
lean_dec(v_i_4180_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx(lean_object* v_00_u03b1_4183_, lean_object* v_as_4184_, lean_object* v_i_4185_, lean_object* v_a_4186_, lean_object* v_x_4187_){
_start:
{
lean_object* v_j_4188_; lean_object* v_as_4189_; lean_object* v___x_4190_; 
v_j_4188_ = lean_array_get_size(v_as_4184_);
v_as_4189_ = lean_array_push(v_as_4184_, v_a_4186_);
v___x_4190_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4185_, v_as_4189_, v_j_4188_);
return v___x_4190_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx___boxed(lean_object* v_00_u03b1_4191_, lean_object* v_as_4192_, lean_object* v_i_4193_, lean_object* v_a_4194_, lean_object* v_x_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l_Array_insertIdx(v_00_u03b1_4191_, v_as_4192_, v_i_4193_, v_a_4194_, v_x_4195_);
lean_dec(v_i_4193_);
return v_res_4196_;
}
}
static lean_object* _init_l_Array_insertIdx_x21___redArg___closed__1(void){
_start:
{
lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v___x_4198_ = ((lean_object*)(l_Array_eraseIdx_x21___redArg___closed__1));
v___x_4199_ = lean_unsigned_to_nat(7u);
v___x_4200_ = lean_unsigned_to_nat(1956u);
v___x_4201_ = ((lean_object*)(l_Array_insertIdx_x21___redArg___closed__0));
v___x_4202_ = ((lean_object*)(l_Array_swapAt_x21___redArg___closed__0));
v___x_4203_ = l_mkPanicMessageWithDecl(v___x_4202_, v___x_4201_, v___x_4200_, v___x_4199_, v___x_4198_);
return v___x_4203_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg(lean_object* v_as_4204_, lean_object* v_i_4205_, lean_object* v_a_4206_){
_start:
{
lean_object* v___x_4207_; uint8_t v___x_4208_; 
v___x_4207_ = lean_array_get_size(v_as_4204_);
v___x_4208_ = lean_nat_dec_le(v_i_4205_, v___x_4207_);
if (v___x_4208_ == 0)
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
lean_dec(v_a_4206_);
lean_dec_ref(v_as_4204_);
v___x_4209_ = lean_obj_once(&l_Array_insertIdx_x21___redArg___closed__1, &l_Array_insertIdx_x21___redArg___closed__1_once, _init_l_Array_insertIdx_x21___redArg___closed__1);
v___x_4210_ = l_panic___at___00Array_eraseIdx_x21_spec__0___redArg(v___x_4209_);
return v___x_4210_;
}
else
{
lean_object* v_as_4211_; lean_object* v___x_4212_; 
v_as_4211_ = lean_array_push(v_as_4204_, v_a_4206_);
v___x_4212_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4205_, v_as_4211_, v___x_4207_);
return v___x_4212_;
}
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___redArg___boxed(lean_object* v_as_4213_, lean_object* v_i_4214_, lean_object* v_a_4215_){
_start:
{
lean_object* v_res_4216_; 
v_res_4216_ = l_Array_insertIdx_x21___redArg(v_as_4213_, v_i_4214_, v_a_4215_);
lean_dec(v_i_4214_);
return v_res_4216_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21(lean_object* v_00_u03b1_4217_, lean_object* v_as_4218_, lean_object* v_i_4219_, lean_object* v_a_4220_){
_start:
{
lean_object* v___x_4221_; 
v___x_4221_ = l_Array_insertIdx_x21___redArg(v_as_4218_, v_i_4219_, v_a_4220_);
return v___x_4221_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdx_x21___boxed(lean_object* v_00_u03b1_4222_, lean_object* v_as_4223_, lean_object* v_i_4224_, lean_object* v_a_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l_Array_insertIdx_x21(v_00_u03b1_4222_, v_as_4223_, v_i_4224_, v_a_4225_);
lean_dec(v_i_4224_);
return v_res_4226_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg(lean_object* v_as_4227_, lean_object* v_i_4228_, lean_object* v_a_4229_){
_start:
{
lean_object* v___x_4230_; uint8_t v___x_4231_; 
v___x_4230_ = lean_array_get_size(v_as_4227_);
v___x_4231_ = lean_nat_dec_le(v_i_4228_, v___x_4230_);
if (v___x_4231_ == 0)
{
lean_dec(v_a_4229_);
return v_as_4227_;
}
else
{
lean_object* v_as_4232_; lean_object* v___x_4233_; 
v_as_4232_ = lean_array_push(v_as_4227_, v_a_4229_);
v___x_4233_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop___redArg(v_i_4228_, v_as_4232_, v___x_4230_);
return v___x_4233_;
}
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___redArg___boxed(lean_object* v_as_4234_, lean_object* v_i_4235_, lean_object* v_a_4236_){
_start:
{
lean_object* v_res_4237_; 
v_res_4237_ = l_Array_insertIdxIfInBounds___redArg(v_as_4234_, v_i_4235_, v_a_4236_);
lean_dec(v_i_4235_);
return v_res_4237_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds(lean_object* v_00_u03b1_4238_, lean_object* v_as_4239_, lean_object* v_i_4240_, lean_object* v_a_4241_){
_start:
{
lean_object* v___x_4242_; 
v___x_4242_ = l_Array_insertIdxIfInBounds___redArg(v_as_4239_, v_i_4240_, v_a_4241_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Array_insertIdxIfInBounds___boxed(lean_object* v_00_u03b1_4243_, lean_object* v_as_4244_, lean_object* v_i_4245_, lean_object* v_a_4246_){
_start:
{
lean_object* v_res_4247_; 
v_res_4247_ = l_Array_insertIdxIfInBounds(v_00_u03b1_4243_, v_as_4244_, v_i_4245_, v_a_4246_);
lean_dec(v_i_4245_);
return v_res_4247_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux___redArg(lean_object* v_inst_4248_, lean_object* v_as_4249_, lean_object* v_bs_4250_, lean_object* v_i_4251_){
_start:
{
lean_object* v___x_4252_; uint8_t v___x_4253_; 
v___x_4252_ = lean_array_get_size(v_as_4249_);
v___x_4253_ = lean_nat_dec_lt(v_i_4251_, v___x_4252_);
if (v___x_4253_ == 0)
{
uint8_t v___x_4254_; 
lean_dec(v_i_4251_);
lean_dec_ref(v_inst_4248_);
v___x_4254_ = 1;
return v___x_4254_;
}
else
{
lean_object* v_a_4255_; lean_object* v_b_4256_; lean_object* v___x_4257_; uint8_t v___x_4258_; 
v_a_4255_ = lean_array_fget_borrowed(v_as_4249_, v_i_4251_);
v_b_4256_ = lean_array_fget_borrowed(v_bs_4250_, v_i_4251_);
lean_inc_ref(v_inst_4248_);
lean_inc(v_b_4256_);
lean_inc(v_a_4255_);
v___x_4257_ = lean_apply_2(v_inst_4248_, v_a_4255_, v_b_4256_);
v___x_4258_ = lean_unbox(v___x_4257_);
if (v___x_4258_ == 0)
{
uint8_t v___x_4259_; 
lean_dec(v_i_4251_);
lean_dec_ref(v_inst_4248_);
v___x_4259_ = lean_unbox(v___x_4257_);
return v___x_4259_;
}
else
{
lean_object* v___x_4260_; lean_object* v___x_4261_; 
v___x_4260_ = lean_unsigned_to_nat(1u);
v___x_4261_ = lean_nat_add(v_i_4251_, v___x_4260_);
lean_dec(v_i_4251_);
v_i_4251_ = v___x_4261_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___redArg___boxed(lean_object* v_inst_4263_, lean_object* v_as_4264_, lean_object* v_bs_4265_, lean_object* v_i_4266_){
_start:
{
uint8_t v_res_4267_; lean_object* v_r_4268_; 
v_res_4267_ = l_Array_isPrefixOfAux___redArg(v_inst_4263_, v_as_4264_, v_bs_4265_, v_i_4266_);
lean_dec_ref(v_bs_4265_);
lean_dec_ref(v_as_4264_);
v_r_4268_ = lean_box(v_res_4267_);
return v_r_4268_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOfAux(lean_object* v_00_u03b1_4269_, lean_object* v_inst_4270_, lean_object* v_as_4271_, lean_object* v_bs_4272_, lean_object* v_hle_4273_, lean_object* v_i_4274_){
_start:
{
uint8_t v___x_4275_; 
v___x_4275_ = l_Array_isPrefixOfAux___redArg(v_inst_4270_, v_as_4271_, v_bs_4272_, v_i_4274_);
return v___x_4275_;
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOfAux___boxed(lean_object* v_00_u03b1_4276_, lean_object* v_inst_4277_, lean_object* v_as_4278_, lean_object* v_bs_4279_, lean_object* v_hle_4280_, lean_object* v_i_4281_){
_start:
{
uint8_t v_res_4282_; lean_object* v_r_4283_; 
v_res_4282_ = l_Array_isPrefixOfAux(v_00_u03b1_4276_, v_inst_4277_, v_as_4278_, v_bs_4279_, v_hle_4280_, v_i_4281_);
lean_dec_ref(v_bs_4279_);
lean_dec_ref(v_as_4278_);
v_r_4283_ = lean_box(v_res_4282_);
return v_r_4283_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOf___redArg(lean_object* v_inst_4284_, lean_object* v_as_4285_, lean_object* v_bs_4286_){
_start:
{
lean_object* v___x_4287_; lean_object* v___x_4288_; uint8_t v___x_4289_; 
v___x_4287_ = lean_array_get_size(v_as_4285_);
v___x_4288_ = lean_array_get_size(v_bs_4286_);
v___x_4289_ = lean_nat_dec_le(v___x_4287_, v___x_4288_);
if (v___x_4289_ == 0)
{
lean_dec_ref(v_inst_4284_);
return v___x_4289_;
}
else
{
lean_object* v___x_4290_; uint8_t v___x_4291_; 
v___x_4290_ = lean_unsigned_to_nat(0u);
v___x_4291_ = l_Array_isPrefixOfAux___redArg(v_inst_4284_, v_as_4285_, v_bs_4286_, v___x_4290_);
return v___x_4291_;
}
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOf___redArg___boxed(lean_object* v_inst_4292_, lean_object* v_as_4293_, lean_object* v_bs_4294_){
_start:
{
uint8_t v_res_4295_; lean_object* v_r_4296_; 
v_res_4295_ = l_Array_isPrefixOf___redArg(v_inst_4292_, v_as_4293_, v_bs_4294_);
lean_dec_ref(v_bs_4294_);
lean_dec_ref(v_as_4293_);
v_r_4296_ = lean_box(v_res_4295_);
return v_r_4296_;
}
}
LEAN_EXPORT uint8_t l_Array_isPrefixOf(lean_object* v_00_u03b1_4297_, lean_object* v_inst_4298_, lean_object* v_as_4299_, lean_object* v_bs_4300_){
_start:
{
uint8_t v___x_4301_; 
v___x_4301_ = l_Array_isPrefixOf___redArg(v_inst_4298_, v_as_4299_, v_bs_4300_);
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l_Array_isPrefixOf___boxed(lean_object* v_00_u03b1_4302_, lean_object* v_inst_4303_, lean_object* v_as_4304_, lean_object* v_bs_4305_){
_start:
{
uint8_t v_res_4306_; lean_object* v_r_4307_; 
v_res_4306_ = l_Array_isPrefixOf(v_00_u03b1_4302_, v_inst_4303_, v_as_4304_, v_bs_4305_);
lean_dec_ref(v_bs_4305_);
lean_dec_ref(v_as_4304_);
v_r_4307_ = lean_box(v_res_4306_);
return v_r_4307_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0___boxed(lean_object* v_i_4308_, lean_object* v_cs_4309_, lean_object* v_inst_4310_, lean_object* v_as_4311_, lean_object* v_bs_4312_, lean_object* v_f_4313_, lean_object* v_____do__lift_4314_){
_start:
{
lean_object* v_res_4315_; 
v_res_4315_ = l_Array_zipWithMAux___redArg___lam__0(v_i_4308_, v_cs_4309_, v_inst_4310_, v_as_4311_, v_bs_4312_, v_f_4313_, v_____do__lift_4314_);
lean_dec(v_i_4308_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg(lean_object* v_inst_4316_, lean_object* v_as_4317_, lean_object* v_bs_4318_, lean_object* v_f_4319_, lean_object* v_i_4320_, lean_object* v_cs_4321_){
_start:
{
lean_object* v_toApplicative_4322_; lean_object* v_toBind_4323_; lean_object* v_toPure_4324_; lean_object* v___x_4325_; uint8_t v___x_4326_; 
v_toApplicative_4322_ = lean_ctor_get(v_inst_4316_, 0);
v_toBind_4323_ = lean_ctor_get(v_inst_4316_, 1);
lean_inc(v_toBind_4323_);
v_toPure_4324_ = lean_ctor_get(v_toApplicative_4322_, 1);
v___x_4325_ = lean_array_get_size(v_as_4317_);
v___x_4326_ = lean_nat_dec_lt(v_i_4320_, v___x_4325_);
if (v___x_4326_ == 0)
{
lean_object* v___x_4327_; 
lean_inc(v_toPure_4324_);
lean_dec(v_toBind_4323_);
lean_dec(v_i_4320_);
lean_dec(v_f_4319_);
lean_dec_ref(v_bs_4318_);
lean_dec_ref(v_as_4317_);
lean_dec_ref(v_inst_4316_);
v___x_4327_ = lean_apply_2(v_toPure_4324_, lean_box(0), v_cs_4321_);
return v___x_4327_;
}
else
{
lean_object* v___x_4328_; uint8_t v___x_4329_; 
v___x_4328_ = lean_array_get_size(v_bs_4318_);
v___x_4329_ = lean_nat_dec_lt(v_i_4320_, v___x_4328_);
if (v___x_4329_ == 0)
{
lean_object* v___x_4330_; 
lean_inc(v_toPure_4324_);
lean_dec(v_toBind_4323_);
lean_dec(v_i_4320_);
lean_dec(v_f_4319_);
lean_dec_ref(v_bs_4318_);
lean_dec_ref(v_as_4317_);
lean_dec_ref(v_inst_4316_);
v___x_4330_ = lean_apply_2(v_toPure_4324_, lean_box(0), v_cs_4321_);
return v___x_4330_;
}
else
{
lean_object* v___f_4331_; lean_object* v_a_4332_; lean_object* v_b_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; 
lean_inc(v_f_4319_);
lean_inc_ref(v_bs_4318_);
lean_inc_ref(v_as_4317_);
lean_inc(v_i_4320_);
v___f_4331_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_4331_, 0, v_i_4320_);
lean_closure_set(v___f_4331_, 1, v_cs_4321_);
lean_closure_set(v___f_4331_, 2, v_inst_4316_);
lean_closure_set(v___f_4331_, 3, v_as_4317_);
lean_closure_set(v___f_4331_, 4, v_bs_4318_);
lean_closure_set(v___f_4331_, 5, v_f_4319_);
v_a_4332_ = lean_array_fget(v_as_4317_, v_i_4320_);
lean_dec_ref(v_as_4317_);
v_b_4333_ = lean_array_fget(v_bs_4318_, v_i_4320_);
lean_dec(v_i_4320_);
lean_dec_ref(v_bs_4318_);
v___x_4334_ = lean_apply_2(v_f_4319_, v_a_4332_, v_b_4333_);
v___x_4335_ = lean_apply_4(v_toBind_4323_, lean_box(0), lean_box(0), v___x_4334_, v___f_4331_);
return v___x_4335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___redArg___lam__0(lean_object* v_i_4336_, lean_object* v_cs_4337_, lean_object* v_inst_4338_, lean_object* v_as_4339_, lean_object* v_bs_4340_, lean_object* v_f_4341_, lean_object* v_____do__lift_4342_){
_start:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; 
v___x_4343_ = lean_unsigned_to_nat(1u);
v___x_4344_ = lean_nat_add(v_i_4336_, v___x_4343_);
v___x_4345_ = lean_array_push(v_cs_4337_, v_____do__lift_4342_);
v___x_4346_ = l_Array_zipWithMAux___redArg(v_inst_4338_, v_as_4339_, v_bs_4340_, v_f_4341_, v___x_4344_, v___x_4345_);
return v___x_4346_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux(lean_object* v_00_u03b1_4347_, lean_object* v_00_u03b2_4348_, lean_object* v_00_u03b3_4349_, lean_object* v_m_4350_, lean_object* v_inst_4351_, lean_object* v_as_4352_, lean_object* v_bs_4353_, lean_object* v_f_4354_, lean_object* v_i_4355_, lean_object* v_cs_4356_){
_start:
{
lean_object* v___x_4357_; 
v___x_4357_ = l_Array_zipWithMAux___redArg(v_inst_4351_, v_as_4352_, v_bs_4353_, v_f_4354_, v_i_4355_, v_cs_4356_);
return v___x_4357_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWith___redArg(lean_object* v_f_4358_, lean_object* v_as_4359_, lean_object* v_bs_4360_){
_start:
{
lean_object* v___f_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___f_4361_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4361_, 0, v_f_4358_);
v___x_4362_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4363_ = lean_unsigned_to_nat(0u);
v___x_4364_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4365_ = l_Array_zipWithMAux___redArg(v___x_4362_, v_as_4359_, v_bs_4360_, v___f_4361_, v___x_4363_, v___x_4364_);
return v___x_4365_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWith(lean_object* v_00_u03b1_4366_, lean_object* v_00_u03b2_4367_, lean_object* v_00_u03b3_4368_, lean_object* v_f_4369_, lean_object* v_as_4370_, lean_object* v_bs_4371_){
_start:
{
lean_object* v___f_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; 
v___f_4372_ = lean_alloc_closure((void*)(l_Array_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4372_, 0, v_f_4369_);
v___x_4373_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4374_ = lean_unsigned_to_nat(0u);
v___x_4375_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4376_ = l_Array_zipWithMAux___redArg(v___x_4373_, v_as_4370_, v_bs_4371_, v___f_4372_, v___x_4374_, v___x_4375_);
return v___x_4376_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(lean_object* v_as_4377_, lean_object* v_bs_4378_, lean_object* v_i_4379_, lean_object* v_cs_4380_){
_start:
{
lean_object* v___x_4381_; uint8_t v___x_4382_; 
v___x_4381_ = lean_array_get_size(v_as_4377_);
v___x_4382_ = lean_nat_dec_lt(v_i_4379_, v___x_4381_);
if (v___x_4382_ == 0)
{
lean_dec(v_i_4379_);
return v_cs_4380_;
}
else
{
lean_object* v___x_4383_; uint8_t v___x_4384_; 
v___x_4383_ = lean_array_get_size(v_bs_4378_);
v___x_4384_ = lean_nat_dec_lt(v_i_4379_, v___x_4383_);
if (v___x_4384_ == 0)
{
lean_dec(v_i_4379_);
return v_cs_4380_;
}
else
{
lean_object* v_a_4385_; lean_object* v_b_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
v_a_4385_ = lean_array_fget_borrowed(v_as_4377_, v_i_4379_);
v_b_4386_ = lean_array_fget_borrowed(v_bs_4378_, v_i_4379_);
lean_inc(v_b_4386_);
lean_inc(v_a_4385_);
v___x_4387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4387_, 0, v_a_4385_);
lean_ctor_set(v___x_4387_, 1, v_b_4386_);
v___x_4388_ = lean_unsigned_to_nat(1u);
v___x_4389_ = lean_nat_add(v_i_4379_, v___x_4388_);
lean_dec(v_i_4379_);
v___x_4390_ = lean_array_push(v_cs_4380_, v___x_4387_);
v_i_4379_ = v___x_4389_;
v_cs_4380_ = v___x_4390_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg___boxed(lean_object* v_as_4392_, lean_object* v_bs_4393_, lean_object* v_i_4394_, lean_object* v_cs_4395_){
_start:
{
lean_object* v_res_4396_; 
v_res_4396_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4392_, v_bs_4393_, v_i_4394_, v_cs_4395_);
lean_dec_ref(v_bs_4393_);
lean_dec_ref(v_as_4392_);
return v_res_4396_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___redArg(lean_object* v_as_4399_, lean_object* v_bs_4400_){
_start:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4401_ = lean_unsigned_to_nat(0u);
v___x_4402_ = ((lean_object*)(l_Array_zip___redArg___closed__0));
v___x_4403_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4399_, v_bs_4400_, v___x_4401_, v___x_4402_);
return v___x_4403_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___redArg___boxed(lean_object* v_as_4404_, lean_object* v_bs_4405_){
_start:
{
lean_object* v_res_4406_; 
v_res_4406_ = l_Array_zip___redArg(v_as_4404_, v_bs_4405_);
lean_dec_ref(v_bs_4405_);
lean_dec_ref(v_as_4404_);
return v_res_4406_;
}
}
LEAN_EXPORT lean_object* l_Array_zip(lean_object* v_00_u03b1_4407_, lean_object* v_00_u03b2_4408_, lean_object* v_as_4409_, lean_object* v_bs_4410_){
_start:
{
lean_object* v___x_4411_; 
v___x_4411_ = l_Array_zip___redArg(v_as_4409_, v_bs_4410_);
return v___x_4411_;
}
}
LEAN_EXPORT lean_object* l_Array_zip___boxed(lean_object* v_00_u03b1_4412_, lean_object* v_00_u03b2_4413_, lean_object* v_as_4414_, lean_object* v_bs_4415_){
_start:
{
lean_object* v_res_4416_; 
v_res_4416_ = l_Array_zip(v_00_u03b1_4412_, v_00_u03b2_4413_, v_as_4414_, v_bs_4415_);
lean_dec_ref(v_bs_4415_);
lean_dec_ref(v_as_4414_);
return v_res_4416_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0(lean_object* v_00_u03b1_4417_, lean_object* v_00_u03b2_4418_, lean_object* v_as_4419_, lean_object* v_bs_4420_, lean_object* v_i_4421_, lean_object* v_cs_4422_){
_start:
{
lean_object* v___x_4423_; 
v___x_4423_ = l_Array_zipWithMAux___at___00Array_zip_spec__0___redArg(v_as_4419_, v_bs_4420_, v_i_4421_, v_cs_4422_);
return v___x_4423_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Array_zip_spec__0___boxed(lean_object* v_00_u03b1_4424_, lean_object* v_00_u03b2_4425_, lean_object* v_as_4426_, lean_object* v_bs_4427_, lean_object* v_i_4428_, lean_object* v_cs_4429_){
_start:
{
lean_object* v_res_4430_; 
v_res_4430_ = l_Array_zipWithMAux___at___00Array_zip_spec__0(v_00_u03b1_4424_, v_00_u03b2_4425_, v_as_4426_, v_bs_4427_, v_i_4428_, v_cs_4429_);
lean_dec_ref(v_bs_4427_);
lean_dec_ref(v_as_4426_);
return v_res_4430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(lean_object* v_f_4431_, lean_object* v_as_4432_, lean_object* v_bs_4433_, lean_object* v_i_4434_, lean_object* v_cs_4435_){
_start:
{
lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4445_; lean_object* v___y_4452_; lean_object* v___x_4459_; lean_object* v___x_4460_; uint8_t v___x_4461_; 
v___x_4459_ = lean_array_get_size(v_as_4432_);
v___x_4460_ = lean_array_get_size(v_bs_4433_);
v___x_4461_ = lean_nat_dec_le(v___x_4459_, v___x_4460_);
if (v___x_4461_ == 0)
{
v___y_4452_ = v___x_4459_;
goto v___jp_4451_;
}
else
{
v___y_4452_ = v___x_4460_;
goto v___jp_4451_;
}
v___jp_4436_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v___x_4439_ = lean_unsigned_to_nat(1u);
v___x_4440_ = lean_nat_add(v_i_4434_, v___x_4439_);
lean_dec(v_i_4434_);
lean_inc(v_f_4431_);
v___x_4441_ = lean_apply_2(v_f_4431_, v___y_4437_, v___y_4438_);
v___x_4442_ = lean_array_push(v_cs_4435_, v___x_4441_);
v_i_4434_ = v___x_4440_;
v_cs_4435_ = v___x_4442_;
goto _start;
}
v___jp_4444_:
{
lean_object* v___x_4446_; uint8_t v___x_4447_; 
v___x_4446_ = lean_array_get_size(v_bs_4433_);
v___x_4447_ = lean_nat_dec_lt(v_i_4434_, v___x_4446_);
if (v___x_4447_ == 0)
{
lean_object* v___x_4448_; 
v___x_4448_ = lean_box(0);
v___y_4437_ = v___y_4445_;
v___y_4438_ = v___x_4448_;
goto v___jp_4436_;
}
else
{
lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___x_4449_ = lean_array_fget_borrowed(v_bs_4433_, v_i_4434_);
lean_inc(v___x_4449_);
v___x_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4449_);
v___y_4437_ = v___y_4445_;
v___y_4438_ = v___x_4450_;
goto v___jp_4436_;
}
}
v___jp_4451_:
{
uint8_t v___x_4453_; 
v___x_4453_ = lean_nat_dec_lt(v_i_4434_, v___y_4452_);
lean_dec(v___y_4452_);
if (v___x_4453_ == 0)
{
lean_dec(v_i_4434_);
lean_dec(v_f_4431_);
return v_cs_4435_;
}
else
{
lean_object* v___x_4454_; uint8_t v___x_4455_; 
v___x_4454_ = lean_array_get_size(v_as_4432_);
v___x_4455_ = lean_nat_dec_lt(v_i_4434_, v___x_4454_);
if (v___x_4455_ == 0)
{
lean_object* v___x_4456_; 
v___x_4456_ = lean_box(0);
v___y_4445_ = v___x_4456_;
goto v___jp_4444_;
}
else
{
lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4457_ = lean_array_fget_borrowed(v_as_4432_, v_i_4434_);
lean_inc(v___x_4457_);
v___x_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4458_, 0, v___x_4457_);
v___y_4445_ = v___x_4458_;
goto v___jp_4444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg___boxed(lean_object* v_f_4462_, lean_object* v_as_4463_, lean_object* v_bs_4464_, lean_object* v_i_4465_, lean_object* v_cs_4466_){
_start:
{
lean_object* v_res_4467_; 
v_res_4467_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4462_, v_as_4463_, v_bs_4464_, v_i_4465_, v_cs_4466_);
lean_dec_ref(v_bs_4464_);
lean_dec_ref(v_as_4463_);
return v_res_4467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(lean_object* v_00_u03b1_4468_, lean_object* v_00_u03b2_4469_, lean_object* v_00_u03b3_4470_, lean_object* v_f_4471_, lean_object* v_as_4472_, lean_object* v_bs_4473_, lean_object* v_i_4474_, lean_object* v_cs_4475_){
_start:
{
lean_object* v___x_4476_; 
v___x_4476_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4471_, v_as_4472_, v_bs_4473_, v_i_4474_, v_cs_4475_);
return v___x_4476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___boxed(lean_object* v_00_u03b1_4477_, lean_object* v_00_u03b2_4478_, lean_object* v_00_u03b3_4479_, lean_object* v_f_4480_, lean_object* v_as_4481_, lean_object* v_bs_4482_, lean_object* v_i_4483_, lean_object* v_cs_4484_){
_start:
{
lean_object* v_res_4485_; 
v_res_4485_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go(v_00_u03b1_4477_, v_00_u03b2_4478_, v_00_u03b3_4479_, v_f_4480_, v_as_4481_, v_bs_4482_, v_i_4483_, v_cs_4484_);
lean_dec_ref(v_bs_4482_);
lean_dec_ref(v_as_4481_);
return v_res_4485_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg(lean_object* v_f_4486_, lean_object* v_as_4487_, lean_object* v_bs_4488_){
_start:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4489_ = lean_unsigned_to_nat(0u);
v___x_4490_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4491_ = l___private_Init_Data_Array_Basic_0__Array_zipWithAll_go___redArg(v_f_4486_, v_as_4487_, v_bs_4488_, v___x_4489_, v___x_4490_);
return v___x_4491_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___redArg___boxed(lean_object* v_f_4492_, lean_object* v_as_4493_, lean_object* v_bs_4494_){
_start:
{
lean_object* v_res_4495_; 
v_res_4495_ = l_Array_zipWithAll___redArg(v_f_4492_, v_as_4493_, v_bs_4494_);
lean_dec_ref(v_bs_4494_);
lean_dec_ref(v_as_4493_);
return v_res_4495_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll(lean_object* v_00_u03b1_4496_, lean_object* v_00_u03b2_4497_, lean_object* v_00_u03b3_4498_, lean_object* v_f_4499_, lean_object* v_as_4500_, lean_object* v_bs_4501_){
_start:
{
lean_object* v___x_4502_; 
v___x_4502_ = l_Array_zipWithAll___redArg(v_f_4499_, v_as_4500_, v_bs_4501_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithAll___boxed(lean_object* v_00_u03b1_4503_, lean_object* v_00_u03b2_4504_, lean_object* v_00_u03b3_4505_, lean_object* v_f_4506_, lean_object* v_as_4507_, lean_object* v_bs_4508_){
_start:
{
lean_object* v_res_4509_; 
v_res_4509_ = l_Array_zipWithAll(v_00_u03b1_4503_, v_00_u03b2_4504_, v_00_u03b3_4505_, v_f_4506_, v_as_4507_, v_bs_4508_);
lean_dec_ref(v_bs_4508_);
lean_dec_ref(v_as_4507_);
return v_res_4509_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithM___redArg(lean_object* v_inst_4510_, lean_object* v_f_4511_, lean_object* v_as_4512_, lean_object* v_bs_4513_){
_start:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4514_ = lean_unsigned_to_nat(0u);
v___x_4515_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4516_ = l_Array_zipWithMAux___redArg(v_inst_4510_, v_as_4512_, v_bs_4513_, v_f_4511_, v___x_4514_, v___x_4515_);
return v___x_4516_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithM(lean_object* v_00_u03b1_4517_, lean_object* v_00_u03b2_4518_, lean_object* v_00_u03b3_4519_, lean_object* v_m_4520_, lean_object* v_inst_4521_, lean_object* v_f_4522_, lean_object* v_as_4523_, lean_object* v_bs_4524_){
_start:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; 
v___x_4525_ = lean_unsigned_to_nat(0u);
v___x_4526_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4527_ = l_Array_zipWithMAux___redArg(v_inst_4521_, v_as_4523_, v_bs_4524_, v_f_4522_, v___x_4525_, v___x_4526_);
return v___x_4527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(lean_object* v_as_4528_, size_t v_i_4529_, size_t v_stop_4530_, lean_object* v_b_4531_){
_start:
{
uint8_t v___x_4532_; 
v___x_4532_ = lean_usize_dec_eq(v_i_4529_, v_stop_4530_);
if (v___x_4532_ == 0)
{
lean_object* v_fst_4533_; lean_object* v_snd_4534_; lean_object* v___x_4535_; lean_object* v_fst_4536_; lean_object* v_snd_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4549_; 
v_fst_4533_ = lean_ctor_get(v_b_4531_, 0);
lean_inc(v_fst_4533_);
v_snd_4534_ = lean_ctor_get(v_b_4531_, 1);
lean_inc(v_snd_4534_);
lean_dec_ref(v_b_4531_);
v___x_4535_ = lean_array_uget(v_as_4528_, v_i_4529_);
v_fst_4536_ = lean_ctor_get(v___x_4535_, 0);
v_snd_4537_ = lean_ctor_get(v___x_4535_, 1);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4535_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4539_ = v___x_4535_;
v_isShared_4540_ = v_isSharedCheck_4549_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_snd_4537_);
lean_inc(v_fst_4536_);
lean_dec(v___x_4535_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4549_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4544_; 
v___x_4541_ = lean_array_push(v_fst_4533_, v_fst_4536_);
v___x_4542_ = lean_array_push(v_snd_4534_, v_snd_4537_);
if (v_isShared_4540_ == 0)
{
lean_ctor_set(v___x_4539_, 1, v___x_4542_);
lean_ctor_set(v___x_4539_, 0, v___x_4541_);
v___x_4544_ = v___x_4539_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v___x_4541_);
lean_ctor_set(v_reuseFailAlloc_4548_, 1, v___x_4542_);
v___x_4544_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
size_t v___x_4545_; size_t v___x_4546_; 
v___x_4545_ = ((size_t)1ULL);
v___x_4546_ = lean_usize_add(v_i_4529_, v___x_4545_);
v_i_4529_ = v___x_4546_;
v_b_4531_ = v___x_4544_;
goto _start;
}
}
}
else
{
return v_b_4531_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg___boxed(lean_object* v_as_4550_, lean_object* v_i_4551_, lean_object* v_stop_4552_, lean_object* v_b_4553_){
_start:
{
size_t v_i_boxed_4554_; size_t v_stop_boxed_4555_; lean_object* v_res_4556_; 
v_i_boxed_4554_ = lean_unbox_usize(v_i_4551_);
lean_dec(v_i_4551_);
v_stop_boxed_4555_ = lean_unbox_usize(v_stop_4552_);
lean_dec(v_stop_4552_);
v_res_4556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4550_, v_i_boxed_4554_, v_stop_boxed_4555_, v_b_4553_);
lean_dec_ref(v_as_4550_);
return v_res_4556_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip___redArg(lean_object* v_as_4557_){
_start:
{
lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; uint8_t v___x_4561_; 
v___x_4558_ = lean_unsigned_to_nat(0u);
v___x_4559_ = ((lean_object*)(l_Array_partition___redArg___closed__0));
v___x_4560_ = lean_array_get_size(v_as_4557_);
v___x_4561_ = lean_nat_dec_lt(v___x_4558_, v___x_4560_);
if (v___x_4561_ == 0)
{
return v___x_4559_;
}
else
{
size_t v___x_4562_; size_t v___x_4563_; lean_object* v___x_4564_; 
v___x_4562_ = ((size_t)0ULL);
v___x_4563_ = lean_usize_of_nat(v___x_4560_);
v___x_4564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4557_, v___x_4562_, v___x_4563_, v___x_4559_);
return v___x_4564_;
}
}
}
LEAN_EXPORT lean_object* l_Array_unzip___redArg___boxed(lean_object* v_as_4565_){
_start:
{
lean_object* v_res_4566_; 
v_res_4566_ = l_Array_unzip___redArg(v_as_4565_);
lean_dec_ref(v_as_4565_);
return v_res_4566_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip(lean_object* v_00_u03b1_4567_, lean_object* v_00_u03b2_4568_, lean_object* v_as_4569_){
_start:
{
lean_object* v___x_4570_; 
v___x_4570_ = l_Array_unzip___redArg(v_as_4569_);
return v___x_4570_;
}
}
LEAN_EXPORT lean_object* l_Array_unzip___boxed(lean_object* v_00_u03b1_4571_, lean_object* v_00_u03b2_4572_, lean_object* v_as_4573_){
_start:
{
lean_object* v_res_4574_; 
v_res_4574_ = l_Array_unzip(v_00_u03b1_4571_, v_00_u03b2_4572_, v_as_4573_);
lean_dec_ref(v_as_4573_);
return v_res_4574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(lean_object* v_00_u03b1_4575_, lean_object* v_00_u03b2_4576_, lean_object* v_as_4577_, size_t v_i_4578_, size_t v_stop_4579_, lean_object* v_b_4580_){
_start:
{
lean_object* v___x_4581_; 
v___x_4581_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___redArg(v_as_4577_, v_i_4578_, v_stop_4579_, v_b_4580_);
return v___x_4581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0___boxed(lean_object* v_00_u03b1_4582_, lean_object* v_00_u03b2_4583_, lean_object* v_as_4584_, lean_object* v_i_4585_, lean_object* v_stop_4586_, lean_object* v_b_4587_){
_start:
{
size_t v_i_boxed_4588_; size_t v_stop_boxed_4589_; lean_object* v_res_4590_; 
v_i_boxed_4588_ = lean_unbox_usize(v_i_4585_);
lean_dec(v_i_4585_);
v_stop_boxed_4589_ = lean_unbox_usize(v_stop_4586_);
lean_dec(v_stop_4586_);
v_res_4590_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_unzip_spec__0(v_00_u03b1_4582_, v_00_u03b2_4583_, v_as_4584_, v_i_boxed_4588_, v_stop_boxed_4589_, v_b_4587_);
lean_dec_ref(v_as_4584_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l_Array_replace___redArg(lean_object* v_inst_4591_, lean_object* v_xs_4592_, lean_object* v_a_4593_, lean_object* v_b_4594_){
_start:
{
lean_object* v___x_4595_; 
v___x_4595_ = l_Array_finIdxOf_x3f___redArg(v_inst_4591_, v_xs_4592_, v_a_4593_);
if (lean_obj_tag(v___x_4595_) == 0)
{
lean_dec(v_b_4594_);
return v_xs_4592_;
}
else
{
lean_object* v_val_4596_; lean_object* v___x_4597_; 
v_val_4596_ = lean_ctor_get(v___x_4595_, 0);
lean_inc(v_val_4596_);
lean_dec_ref_known(v___x_4595_, 1);
v___x_4597_ = lean_array_fset(v_xs_4592_, v_val_4596_, v_b_4594_);
lean_dec(v_val_4596_);
return v___x_4597_;
}
}
}
LEAN_EXPORT lean_object* l_Array_replace(lean_object* v_00_u03b1_4598_, lean_object* v_inst_4599_, lean_object* v_xs_4600_, lean_object* v_a_4601_, lean_object* v_b_4602_){
_start:
{
lean_object* v___x_4603_; 
v___x_4603_ = l_Array_replace___redArg(v_inst_4599_, v_xs_4600_, v_a_4601_, v_b_4602_);
return v___x_4603_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT___redArg(){
_start:
{
lean_object* v___x_4605_; 
v___x_4605_ = lean_box(0);
return v___x_4605_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT___redArg___boxed(lean_object* v___dummy_4606_){
_start:
{
lean_object* v_res_4607_; 
v_res_4607_ = l_Array_instLT___redArg();
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l_Array_instLT(lean_object* v_00_u03b1_4608_, lean_object* v_inst_4609_){
_start:
{
lean_object* v___x_4610_; 
v___x_4610_ = lean_box(0);
return v___x_4610_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE___redArg(){
_start:
{
lean_object* v___x_4612_; 
v___x_4612_ = lean_box(0);
return v___x_4612_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE___redArg___boxed(lean_object* v___dummy_4613_){
_start:
{
lean_object* v_res_4614_; 
v_res_4614_ = l_Array_instLE___redArg();
return v_res_4614_;
}
}
LEAN_EXPORT lean_object* l_Array_instLE(lean_object* v_00_u03b1_4615_, lean_object* v_inst_4616_){
_start:
{
lean_object* v___x_4617_; 
v___x_4617_ = lean_box(0);
return v___x_4617_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___redArg(lean_object* v_n_4618_, lean_object* v_a_4619_, lean_object* v_xs_4620_){
_start:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v___x_4621_ = lean_array_get_size(v_xs_4620_);
v___x_4622_ = lean_nat_sub(v_n_4618_, v___x_4621_);
v___x_4623_ = lean_mk_array(v___x_4622_, v_a_4619_);
v___x_4624_ = l_Array_append___redArg(v___x_4623_, v_xs_4620_);
return v___x_4624_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___redArg___boxed(lean_object* v_n_4625_, lean_object* v_a_4626_, lean_object* v_xs_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l_Array_leftpad___redArg(v_n_4625_, v_a_4626_, v_xs_4627_);
lean_dec_ref(v_xs_4627_);
lean_dec(v_n_4625_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad(lean_object* v_00_u03b1_4629_, lean_object* v_n_4630_, lean_object* v_a_4631_, lean_object* v_xs_4632_){
_start:
{
lean_object* v___x_4633_; 
v___x_4633_ = l_Array_leftpad___redArg(v_n_4630_, v_a_4631_, v_xs_4632_);
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l_Array_leftpad___boxed(lean_object* v_00_u03b1_4634_, lean_object* v_n_4635_, lean_object* v_a_4636_, lean_object* v_xs_4637_){
_start:
{
lean_object* v_res_4638_; 
v_res_4638_ = l_Array_leftpad(v_00_u03b1_4634_, v_n_4635_, v_a_4636_, v_xs_4637_);
lean_dec_ref(v_xs_4637_);
lean_dec(v_n_4635_);
return v_res_4638_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___redArg(lean_object* v_n_4639_, lean_object* v_a_4640_, lean_object* v_xs_4641_){
_start:
{
lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v___x_4642_ = lean_array_get_size(v_xs_4641_);
v___x_4643_ = lean_nat_sub(v_n_4639_, v___x_4642_);
v___x_4644_ = lean_mk_array(v___x_4643_, v_a_4640_);
v___x_4645_ = l_Array_append___redArg(v_xs_4641_, v___x_4644_);
lean_dec_ref(v___x_4644_);
return v___x_4645_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___redArg___boxed(lean_object* v_n_4646_, lean_object* v_a_4647_, lean_object* v_xs_4648_){
_start:
{
lean_object* v_res_4649_; 
v_res_4649_ = l_Array_rightpad___redArg(v_n_4646_, v_a_4647_, v_xs_4648_);
lean_dec(v_n_4646_);
return v_res_4649_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad(lean_object* v_00_u03b1_4650_, lean_object* v_n_4651_, lean_object* v_a_4652_, lean_object* v_xs_4653_){
_start:
{
lean_object* v___x_4654_; 
v___x_4654_ = l_Array_rightpad___redArg(v_n_4651_, v_a_4652_, v_xs_4653_);
return v___x_4654_;
}
}
LEAN_EXPORT lean_object* l_Array_rightpad___boxed(lean_object* v_00_u03b1_4655_, lean_object* v_n_4656_, lean_object* v_a_4657_, lean_object* v_xs_4658_){
_start:
{
lean_object* v_res_4659_; 
v_res_4659_ = l_Array_rightpad(v_00_u03b1_4655_, v_n_4656_, v_a_4657_, v_xs_4658_);
lean_dec(v_n_4656_);
return v_res_4659_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0(lean_object* v_x_4660_){
_start:
{
lean_inc(v_x_4660_);
return v_x_4660_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg___lam__0___boxed(lean_object* v_x_4661_){
_start:
{
lean_object* v_res_4662_; 
v_res_4662_ = l_Array_reduceOption___redArg___lam__0(v_x_4661_);
lean_dec(v_x_4661_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption___redArg(lean_object* v_as_4664_){
_start:
{
lean_object* v___f_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___f_4665_ = ((lean_object*)(l_Array_reduceOption___redArg___closed__0));
v___x_4666_ = lean_unsigned_to_nat(0u);
v___x_4667_ = lean_array_get_size(v_as_4664_);
v___x_4668_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4669_ = l_Array_filterMapM___redArg(v___x_4668_, v___f_4665_, v_as_4664_, v___x_4666_, v___x_4667_);
return v___x_4669_;
}
}
LEAN_EXPORT lean_object* l_Array_reduceOption(lean_object* v_00_u03b1_4670_, lean_object* v_as_4671_){
_start:
{
lean_object* v___f_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; 
v___f_4672_ = ((lean_object*)(l_Array_reduceOption___redArg___closed__0));
v___x_4673_ = lean_unsigned_to_nat(0u);
v___x_4674_ = lean_array_get_size(v_as_4671_);
v___x_4675_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4676_ = l_Array_filterMapM___redArg(v___x_4675_, v___f_4672_, v_as_4671_, v___x_4673_, v___x_4674_);
return v___x_4676_;
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg___lam__0(lean_object* v_inst_4677_, lean_object* v_x1_4678_, lean_object* v_x2_4679_){
_start:
{
lean_object* v_fst_4680_; lean_object* v_snd_4681_; lean_object* v___x_4682_; uint8_t v___x_4683_; 
v_fst_4680_ = lean_ctor_get(v_x1_4678_, 0);
v_snd_4681_ = lean_ctor_get(v_x1_4678_, 1);
lean_inc(v_fst_4680_);
lean_inc(v_x2_4679_);
v___x_4682_ = lean_apply_2(v_inst_4677_, v_x2_4679_, v_fst_4680_);
v___x_4683_ = lean_unbox(v___x_4682_);
if (v___x_4683_ == 0)
{
lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4691_; 
lean_inc(v_snd_4681_);
lean_inc(v_fst_4680_);
v_isSharedCheck_4691_ = !lean_is_exclusive(v_x1_4678_);
if (v_isSharedCheck_4691_ == 0)
{
lean_object* v_unused_4692_; lean_object* v_unused_4693_; 
v_unused_4692_ = lean_ctor_get(v_x1_4678_, 1);
lean_dec(v_unused_4692_);
v_unused_4693_ = lean_ctor_get(v_x1_4678_, 0);
lean_dec(v_unused_4693_);
v___x_4685_ = v_x1_4678_;
v_isShared_4686_ = v_isSharedCheck_4691_;
goto v_resetjp_4684_;
}
else
{
lean_dec(v_x1_4678_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4691_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4687_; lean_object* v___x_4689_; 
v___x_4687_ = lean_array_push(v_snd_4681_, v_fst_4680_);
if (v_isShared_4686_ == 0)
{
lean_ctor_set(v___x_4685_, 1, v___x_4687_);
lean_ctor_set(v___x_4685_, 0, v_x2_4679_);
v___x_4689_ = v___x_4685_;
goto v_reusejp_4688_;
}
else
{
lean_object* v_reuseFailAlloc_4690_; 
v_reuseFailAlloc_4690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4690_, 0, v_x2_4679_);
lean_ctor_set(v_reuseFailAlloc_4690_, 1, v___x_4687_);
v___x_4689_ = v_reuseFailAlloc_4690_;
goto v_reusejp_4688_;
}
v_reusejp_4688_:
{
return v___x_4689_;
}
}
}
else
{
lean_dec(v_x2_4679_);
return v_x1_4678_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps___redArg(lean_object* v_inst_4694_, lean_object* v_as_4695_){
_start:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; uint8_t v___x_4698_; 
v___x_4696_ = lean_unsigned_to_nat(0u);
v___x_4697_ = lean_array_get_size(v_as_4695_);
v___x_4698_ = lean_nat_dec_lt(v___x_4696_, v___x_4697_);
if (v___x_4698_ == 0)
{
lean_object* v___x_4699_; 
lean_dec_ref(v_as_4695_);
lean_dec_ref(v_inst_4694_);
v___x_4699_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
return v___x_4699_;
}
else
{
lean_object* v___f_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; size_t v___x_4705_; size_t v___x_4706_; lean_object* v___x_4707_; lean_object* v_fst_4708_; lean_object* v_snd_4709_; lean_object* v___x_4710_; 
v___f_4700_ = lean_alloc_closure((void*)(l_Array_eraseReps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4700_, 0, v_inst_4694_);
v___x_4701_ = lean_array_fget_borrowed(v_as_4695_, v___x_4696_);
v___x_4702_ = ((lean_object*)(l_Array_filter___redArg___closed__0));
v___x_4703_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
lean_inc(v___x_4701_);
v___x_4704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4701_);
lean_ctor_set(v___x_4704_, 1, v___x_4702_);
v___x_4705_ = ((size_t)0ULL);
v___x_4706_ = lean_usize_of_nat(v___x_4697_);
v___x_4707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4703_, v___f_4700_, v_as_4695_, v___x_4705_, v___x_4706_, v___x_4704_);
v_fst_4708_ = lean_ctor_get(v___x_4707_, 0);
lean_inc(v_fst_4708_);
v_snd_4709_ = lean_ctor_get(v___x_4707_, 1);
lean_inc(v_snd_4709_);
lean_dec(v___x_4707_);
v___x_4710_ = lean_array_push(v_snd_4709_, v_fst_4708_);
return v___x_4710_;
}
}
}
LEAN_EXPORT lean_object* l_Array_eraseReps(lean_object* v_00_u03b1_4711_, lean_object* v_inst_4712_, lean_object* v_as_4713_){
_start:
{
lean_object* v___x_4714_; 
v___x_4714_ = l_Array_eraseReps___redArg(v_inst_4712_, v_as_4713_);
return v___x_4714_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(lean_object* v_inst_4715_, lean_object* v_as_4716_, lean_object* v_a_4717_, lean_object* v_x_4718_){
_start:
{
lean_object* v_zero_4719_; uint8_t v_isZero_4720_; 
v_zero_4719_ = lean_unsigned_to_nat(0u);
v_isZero_4720_ = lean_nat_dec_eq(v_x_4718_, v_zero_4719_);
if (v_isZero_4720_ == 1)
{
lean_dec(v_x_4718_);
lean_dec(v_a_4717_);
lean_dec_ref(v_inst_4715_);
return v_isZero_4720_;
}
else
{
lean_object* v_one_4721_; lean_object* v_n_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; uint8_t v___x_4725_; 
v_one_4721_ = lean_unsigned_to_nat(1u);
v_n_4722_ = lean_nat_sub(v_x_4718_, v_one_4721_);
lean_dec(v_x_4718_);
v___x_4723_ = lean_array_fget_borrowed(v_as_4716_, v_n_4722_);
lean_inc_ref(v_inst_4715_);
lean_inc(v___x_4723_);
lean_inc(v_a_4717_);
v___x_4724_ = lean_apply_2(v_inst_4715_, v_a_4717_, v___x_4723_);
v___x_4725_ = lean_unbox(v___x_4724_);
if (v___x_4725_ == 0)
{
v_x_4718_ = v_n_4722_;
goto _start;
}
else
{
lean_dec(v_n_4722_);
lean_dec(v_a_4717_);
lean_dec_ref(v_inst_4715_);
return v_isZero_4720_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg___boxed(lean_object* v_inst_4727_, lean_object* v_as_4728_, lean_object* v_a_4729_, lean_object* v_x_4730_){
_start:
{
uint8_t v_res_4731_; lean_object* v_r_4732_; 
v_res_4731_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4727_, v_as_4728_, v_a_4729_, v_x_4730_);
lean_dec_ref(v_as_4728_);
v_r_4732_ = lean_box(v_res_4731_);
return v_r_4732_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(lean_object* v_00_u03b1_4733_, lean_object* v_inst_4734_, lean_object* v_as_4735_, lean_object* v_a_4736_, lean_object* v_x_4737_, lean_object* v_x_4738_){
_start:
{
uint8_t v___x_4739_; 
v___x_4739_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4734_, v_as_4735_, v_a_4736_, v_x_4737_);
return v___x_4739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___boxed(lean_object* v_00_u03b1_4740_, lean_object* v_inst_4741_, lean_object* v_as_4742_, lean_object* v_a_4743_, lean_object* v_x_4744_, lean_object* v_x_4745_){
_start:
{
uint8_t v_res_4746_; lean_object* v_r_4747_; 
v_res_4746_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux(v_00_u03b1_4740_, v_inst_4741_, v_as_4742_, v_a_4743_, v_x_4744_, v_x_4745_);
lean_dec_ref(v_as_4742_);
v_r_4747_ = lean_box(v_res_4746_);
return v_r_4747_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(lean_object* v_inst_4748_, lean_object* v_as_4749_, lean_object* v_i_4750_){
_start:
{
lean_object* v___x_4751_; uint8_t v___x_4752_; 
v___x_4751_ = lean_array_get_size(v_as_4749_);
v___x_4752_ = lean_nat_dec_lt(v_i_4750_, v___x_4751_);
if (v___x_4752_ == 0)
{
uint8_t v___x_4753_; 
lean_dec(v_i_4750_);
lean_dec_ref(v_inst_4748_);
v___x_4753_ = 1;
return v___x_4753_;
}
else
{
lean_object* v___x_4754_; uint8_t v___x_4755_; 
v___x_4754_ = lean_array_fget_borrowed(v_as_4749_, v_i_4750_);
lean_inc(v_i_4750_);
lean_inc(v___x_4754_);
lean_inc_ref(v_inst_4748_);
v___x_4755_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___redArg(v_inst_4748_, v_as_4749_, v___x_4754_, v_i_4750_);
if (v___x_4755_ == 0)
{
lean_dec(v_i_4750_);
lean_dec_ref(v_inst_4748_);
return v___x_4755_;
}
else
{
lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4756_ = lean_unsigned_to_nat(1u);
v___x_4757_ = lean_nat_add(v_i_4750_, v___x_4756_);
lean_dec(v_i_4750_);
v_i_4750_ = v___x_4757_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg___boxed(lean_object* v_inst_4759_, lean_object* v_as_4760_, lean_object* v_i_4761_){
_start:
{
uint8_t v_res_4762_; lean_object* v_r_4763_; 
v_res_4762_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4759_, v_as_4760_, v_i_4761_);
lean_dec_ref(v_as_4760_);
v_r_4763_ = lean_box(v_res_4762_);
return v_r_4763_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux(lean_object* v_00_u03b1_4764_, lean_object* v_inst_4765_, lean_object* v_as_4766_, lean_object* v_i_4767_){
_start:
{
uint8_t v___x_4768_; 
v___x_4768_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4765_, v_as_4766_, v_i_4767_);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___boxed(lean_object* v_00_u03b1_4769_, lean_object* v_inst_4770_, lean_object* v_as_4771_, lean_object* v_i_4772_){
_start:
{
uint8_t v_res_4773_; lean_object* v_r_4774_; 
v_res_4773_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux(v_00_u03b1_4769_, v_inst_4770_, v_as_4771_, v_i_4772_);
lean_dec_ref(v_as_4771_);
v_r_4774_ = lean_box(v_res_4773_);
return v_r_4774_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___redArg(lean_object* v_inst_4775_, lean_object* v_as_4776_){
_start:
{
lean_object* v___x_4777_; uint8_t v___x_4778_; 
v___x_4777_ = lean_unsigned_to_nat(0u);
v___x_4778_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___redArg(v_inst_4775_, v_as_4776_, v___x_4777_);
return v___x_4778_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___redArg___boxed(lean_object* v_inst_4779_, lean_object* v_as_4780_){
_start:
{
uint8_t v_res_4781_; lean_object* v_r_4782_; 
v_res_4781_ = l_Array_allDiff___redArg(v_inst_4779_, v_as_4780_);
lean_dec_ref(v_as_4780_);
v_r_4782_ = lean_box(v_res_4781_);
return v_r_4782_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff(lean_object* v_00_u03b1_4783_, lean_object* v_inst_4784_, lean_object* v_as_4785_){
_start:
{
uint8_t v___x_4786_; 
v___x_4786_ = l_Array_allDiff___redArg(v_inst_4784_, v_as_4785_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___boxed(lean_object* v_00_u03b1_4787_, lean_object* v_inst_4788_, lean_object* v_as_4789_){
_start:
{
uint8_t v_res_4790_; lean_object* v_r_4791_; 
v_res_4790_ = l_Array_allDiff(v_00_u03b1_4787_, v_inst_4788_, v_as_4789_);
lean_dec_ref(v_as_4789_);
v_r_4791_ = lean_box(v_res_4790_);
return v_r_4791_;
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0(uint8_t v___x_4792_, lean_object* v_x1_4793_, lean_object* v_x2_4794_){
_start:
{
lean_object* v_fst_4795_; uint8_t v___x_4796_; 
v_fst_4795_ = lean_ctor_get(v_x1_4793_, 0);
v___x_4796_ = lean_unbox(v_fst_4795_);
if (v___x_4796_ == 0)
{
lean_object* v_snd_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4805_; 
lean_dec(v_x2_4794_);
v_snd_4797_ = lean_ctor_get(v_x1_4793_, 1);
v_isSharedCheck_4805_ = !lean_is_exclusive(v_x1_4793_);
if (v_isSharedCheck_4805_ == 0)
{
lean_object* v_unused_4806_; 
v_unused_4806_ = lean_ctor_get(v_x1_4793_, 0);
lean_dec(v_unused_4806_);
v___x_4799_ = v_x1_4793_;
v_isShared_4800_ = v_isSharedCheck_4805_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_snd_4797_);
lean_dec(v_x1_4793_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4805_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___x_4801_; lean_object* v___x_4803_; 
v___x_4801_ = lean_box(v___x_4792_);
if (v_isShared_4800_ == 0)
{
lean_ctor_set(v___x_4799_, 0, v___x_4801_);
v___x_4803_ = v___x_4799_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v___x_4801_);
lean_ctor_set(v_reuseFailAlloc_4804_, 1, v_snd_4797_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
}
else
{
lean_object* v_snd_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4817_; 
v_snd_4807_ = lean_ctor_get(v_x1_4793_, 1);
v_isSharedCheck_4817_ = !lean_is_exclusive(v_x1_4793_);
if (v_isSharedCheck_4817_ == 0)
{
lean_object* v_unused_4818_; 
v_unused_4818_ = lean_ctor_get(v_x1_4793_, 0);
lean_dec(v_unused_4818_);
v___x_4809_ = v_x1_4793_;
v_isShared_4810_ = v_isSharedCheck_4817_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_snd_4807_);
lean_dec(v_x1_4793_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4817_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
uint8_t v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4815_; 
v___x_4811_ = 0;
v___x_4812_ = lean_array_push(v_snd_4807_, v_x2_4794_);
v___x_4813_ = lean_box(v___x_4811_);
if (v_isShared_4810_ == 0)
{
lean_ctor_set(v___x_4809_, 1, v___x_4812_);
lean_ctor_set(v___x_4809_, 0, v___x_4813_);
v___x_4815_ = v___x_4809_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v___x_4813_);
lean_ctor_set(v_reuseFailAlloc_4816_, 1, v___x_4812_);
v___x_4815_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
return v___x_4815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg___lam__0___boxed(lean_object* v___x_4819_, lean_object* v_x1_4820_, lean_object* v_x2_4821_){
_start:
{
uint8_t v___x_156__boxed_4822_; lean_object* v_res_4823_; 
v___x_156__boxed_4822_ = lean_unbox(v___x_4819_);
v_res_4823_ = l_Array_getEvenElems___redArg___lam__0(v___x_156__boxed_4822_, v_x1_4820_, v_x2_4821_);
return v_res_4823_;
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems___redArg(lean_object* v_as_4824_){
_start:
{
lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; uint8_t v___x_4829_; 
v___x_4825_ = lean_unsigned_to_nat(0u);
v___x_4826_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_4827_ = lean_array_get_size(v_as_4824_);
v___x_4828_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4829_ = lean_nat_dec_lt(v___x_4825_, v___x_4827_);
if (v___x_4829_ == 0)
{
lean_dec_ref(v_as_4824_);
return v___x_4826_;
}
else
{
lean_object* v___x_4830_; lean_object* v___f_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; size_t v___x_4834_; size_t v___x_4835_; lean_object* v___x_4836_; lean_object* v_snd_4837_; 
v___x_4830_ = lean_box(v___x_4829_);
v___f_4831_ = lean_alloc_closure((void*)(l_Array_getEvenElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4831_, 0, v___x_4830_);
v___x_4832_ = lean_box(v___x_4829_);
v___x_4833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4832_);
lean_ctor_set(v___x_4833_, 1, v___x_4826_);
v___x_4834_ = ((size_t)0ULL);
v___x_4835_ = lean_usize_of_nat(v___x_4827_);
v___x_4836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4828_, v___f_4831_, v_as_4824_, v___x_4834_, v___x_4835_, v___x_4833_);
v_snd_4837_ = lean_ctor_get(v___x_4836_, 1);
lean_inc(v_snd_4837_);
lean_dec(v___x_4836_);
return v_snd_4837_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getEvenElems(lean_object* v_00_u03b1_4838_, lean_object* v_as_4839_){
_start:
{
lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; uint8_t v___x_4844_; 
v___x_4840_ = lean_unsigned_to_nat(0u);
v___x_4841_ = ((lean_object*)(l_Array_instEmptyCollection___redArg___closed__0));
v___x_4842_ = lean_array_get_size(v_as_4839_);
v___x_4843_ = ((lean_object*)(l_Array_foldl___redArg___closed__9));
v___x_4844_ = lean_nat_dec_lt(v___x_4840_, v___x_4842_);
if (v___x_4844_ == 0)
{
lean_dec_ref(v_as_4839_);
return v___x_4841_;
}
else
{
lean_object* v___x_4845_; lean_object* v___f_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; size_t v___x_4849_; size_t v___x_4850_; lean_object* v___x_4851_; lean_object* v_snd_4852_; 
v___x_4845_ = lean_box(v___x_4844_);
v___f_4846_ = lean_alloc_closure((void*)(l_Array_getEvenElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4846_, 0, v___x_4845_);
v___x_4847_ = lean_box(v___x_4844_);
v___x_4848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4848_, 0, v___x_4847_);
lean_ctor_set(v___x_4848_, 1, v___x_4841_);
v___x_4849_ = ((size_t)0ULL);
v___x_4850_ = lean_usize_of_nat(v___x_4842_);
v___x_4851_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___redArg(v___x_4843_, v___f_4846_, v_as_4839_, v___x_4849_, v___x_4850_, v___x_4848_);
v_snd_4852_ = lean_ctor_get(v___x_4851_, 1);
lean_inc(v_snd_4852_);
lean_dec(v___x_4851_);
return v_snd_4852_;
}
}
}
static lean_object* _init_l_Array_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_4858_; lean_object* v___x_4859_; 
v___x_4858_ = ((lean_object*)(l_term_x23_x5b___x2c_x5d___closed__4));
v___x_4859_ = lean_string_length(v___x_4858_);
return v___x_4859_;
}
}
static lean_object* _init_l_Array_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; 
v___x_4860_ = lean_obj_once(&l_Array_repr___redArg___closed__2, &l_Array_repr___redArg___closed__2_once, _init_l_Array_repr___redArg___closed__2);
v___x_4861_ = lean_nat_to_int(v___x_4860_);
return v___x_4861_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___redArg(lean_object* v_inst_4869_, lean_object* v_xs_4870_){
_start:
{
lean_object* v___x_4871_; lean_object* v___x_4872_; uint8_t v___x_4873_; 
v___x_4871_ = lean_array_get_size(v_xs_4870_);
v___x_4872_ = lean_unsigned_to_nat(0u);
v___x_4873_ = lean_nat_dec_eq(v___x_4871_, v___x_4872_);
if (v___x_4873_ == 0)
{
lean_object* v_x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; 
v_x_4874_ = lean_alloc_closure((void*)(l_repr), 3, 2);
lean_closure_set(v_x_4874_, 0, lean_box(0));
lean_closure_set(v_x_4874_, 1, v_inst_4869_);
v___x_4875_ = lean_array_to_list(v_xs_4870_);
v___x_4876_ = ((lean_object*)(l_Array_repr___redArg___closed__1));
v___x_4877_ = l_Std_Format_joinSep___redArg(v_x_4874_, v___x_4875_, v___x_4876_);
v___x_4878_ = lean_obj_once(&l_Array_repr___redArg___closed__3, &l_Array_repr___redArg___closed__3_once, _init_l_Array_repr___redArg___closed__3);
v___x_4879_ = ((lean_object*)(l_Array_repr___redArg___closed__4));
v___x_4880_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4879_);
lean_ctor_set(v___x_4880_, 1, v___x_4877_);
v___x_4881_ = ((lean_object*)(l_Array_repr___redArg___closed__5));
v___x_4882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4880_);
lean_ctor_set(v___x_4882_, 1, v___x_4881_);
v___x_4883_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4883_, 0, v___x_4878_);
lean_ctor_set(v___x_4883_, 1, v___x_4882_);
v___x_4884_ = l_Std_Format_fill(v___x_4883_);
return v___x_4884_;
}
else
{
lean_object* v___x_4885_; 
lean_dec_ref(v_xs_4870_);
lean_dec_ref(v_inst_4869_);
v___x_4885_ = ((lean_object*)(l_Array_repr___redArg___closed__7));
return v___x_4885_;
}
}
}
LEAN_EXPORT lean_object* l_Array_repr(lean_object* v_00_u03b1_4886_, lean_object* v_inst_4887_, lean_object* v_xs_4888_){
_start:
{
lean_object* v___x_4889_; 
v___x_4889_ = l_Array_repr___redArg(v_inst_4887_, v_xs_4888_);
return v___x_4889_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0(lean_object* v_inst_4890_, lean_object* v_xs_4891_, lean_object* v_x_4892_){
_start:
{
lean_object* v___x_4893_; 
v___x_4893_ = l_Array_repr___redArg(v_inst_4890_, v_xs_4891_);
return v___x_4893_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object* v_inst_4894_, lean_object* v_xs_4895_, lean_object* v_x_4896_){
_start:
{
lean_object* v_res_4897_; 
v_res_4897_ = l_Array_instRepr___redArg___lam__0(v_inst_4894_, v_xs_4895_, v_x_4896_);
lean_dec(v_x_4896_);
return v_res_4897_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr___redArg(lean_object* v_inst_4898_){
_start:
{
lean_object* v___f_4899_; 
v___f_4899_ = lean_alloc_closure((void*)(l_Array_instRepr___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4899_, 0, v_inst_4898_);
return v___f_4899_;
}
}
LEAN_EXPORT lean_object* l_Array_instRepr(lean_object* v_00_u03b1_4900_, lean_object* v_inst_4901_){
_start:
{
lean_object* v___f_4902_; 
v___f_4902_ = lean_alloc_closure((void*)(l_Array_instRepr___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4902_, 0, v_inst_4901_);
return v___f_4902_;
}
}
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_GetElem(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* runtime_initialize_Init_WF(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_swap___auto__1 = _init_l_Array_swap___auto__1();
lean_mark_persistent(l_Array_swap___auto__1);
l_Array_swap___auto__3 = _init_l_Array_swap___auto__3();
lean_mark_persistent(l_Array_swap___auto__3);
l_Array_back___auto__1 = _init_l_Array_back___auto__1();
lean_mark_persistent(l_Array_back___auto__1);
l_Array_swapAt___auto__1 = _init_l_Array_swapAt___auto__1();
lean_mark_persistent(l_Array_swapAt___auto__1);
l_Array_eraseIdx___auto__1 = _init_l_Array_eraseIdx___auto__1();
lean_mark_persistent(l_Array_eraseIdx___auto__1);
l_Array_insertIdx___auto__1 = _init_l_Array_insertIdx___auto__1();
lean_mark_persistent(l_Array_insertIdx___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Init_GetElem(uint8_t builtin);
lean_object* initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* initialize_Init_Data_List_ToArrayImpl(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Set(uint8_t builtin);
lean_object* initialize_Init_WF(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_GetElem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_ToArrayImpl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Set(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Array_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
