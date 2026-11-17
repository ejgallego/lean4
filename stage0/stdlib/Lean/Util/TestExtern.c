// Lean compiler output
// Module: Lean.Util.TestExtern
// Imports: public meta import Lean.Meta.Tactic.Unfold public meta import Lean.Meta.Eval public meta import Lean.Compiler.ImplementedByAttr public meta import Lean.Elab.Command public import Init.Notation import Lean.Exception public meta import Lean.Compiler.ExternAttr
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_unfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_getImplementedBy_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_testExternCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_testExternCmd___closed__0 = (const lean_object*)&l_Lean_testExternCmd___closed__0_value;
static const lean_string_object l_Lean_testExternCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "testExternCmd"};
static const lean_object* l_Lean_testExternCmd___closed__1 = (const lean_object*)&l_Lean_testExternCmd___closed__1_value;
static const lean_ctor_object l_Lean_testExternCmd___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_testExternCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_testExternCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_testExternCmd___closed__2_value_aux_0),((lean_object*)&l_Lean_testExternCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 105, 245, 61, 9, 235, 143, 113)}};
static const lean_object* l_Lean_testExternCmd___closed__2 = (const lean_object*)&l_Lean_testExternCmd___closed__2_value;
static const lean_string_object l_Lean_testExternCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_testExternCmd___closed__3 = (const lean_object*)&l_Lean_testExternCmd___closed__3_value;
static const lean_ctor_object l_Lean_testExternCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_testExternCmd___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_testExternCmd___closed__4 = (const lean_object*)&l_Lean_testExternCmd___closed__4_value;
static const lean_string_object l_Lean_testExternCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "test_extern "};
static const lean_object* l_Lean_testExternCmd___closed__5 = (const lean_object*)&l_Lean_testExternCmd___closed__5_value;
static const lean_ctor_object l_Lean_testExternCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_testExternCmd___closed__5_value)}};
static const lean_object* l_Lean_testExternCmd___closed__6 = (const lean_object*)&l_Lean_testExternCmd___closed__6_value;
static const lean_string_object l_Lean_testExternCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_testExternCmd___closed__7 = (const lean_object*)&l_Lean_testExternCmd___closed__7_value;
static const lean_ctor_object l_Lean_testExternCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_testExternCmd___closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_testExternCmd___closed__8 = (const lean_object*)&l_Lean_testExternCmd___closed__8_value;
static const lean_ctor_object l_Lean_testExternCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_testExternCmd___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_testExternCmd___closed__9 = (const lean_object*)&l_Lean_testExternCmd___closed__9_value;
static const lean_ctor_object l_Lean_testExternCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_testExternCmd___closed__4_value),((lean_object*)&l_Lean_testExternCmd___closed__6_value),((lean_object*)&l_Lean_testExternCmd___closed__9_value)}};
static const lean_object* l_Lean_testExternCmd___closed__10 = (const lean_object*)&l_Lean_testExternCmd___closed__10_value;
static const lean_ctor_object l_Lean_testExternCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_testExternCmd___closed__2_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_testExternCmd___closed__10_value)}};
static const lean_object* l_Lean_testExternCmd___closed__11 = (const lean_object*)&l_Lean_testExternCmd___closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_testExternCmd = (const lean_object*)&l_Lean_testExternCmd___closed__11_value;
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_elabTestExtern___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__0 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_elabTestExtern___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_elabTestExtern___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__1 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_elabTestExtern___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_elabTestExtern___lam__0___closed__2;
static const lean_string_object l_Lean_elabTestExtern___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "native implementation did not agree with reference implementation!\n"};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__3 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_elabTestExtern___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_elabTestExtern___lam__0___closed__3_value)}};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__4 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_elabTestExtern___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_elabTestExtern___lam__0___closed__5;
static const lean_string_object l_Lean_elabTestExtern___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Compare the outputs of:\n#eval "};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__6 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_elabTestExtern___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_elabTestExtern___lam__0___closed__7;
static const lean_string_object l_Lean_elabTestExtern___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\n and\n#eval "};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__8 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_elabTestExtern___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_elabTestExtern___lam__0___closed__9;
static const lean_string_object l_Lean_elabTestExtern___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "test_extern: "};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__10 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_elabTestExtern___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_elabTestExtern___lam__0___closed__11;
static const lean_string_object l_Lean_elabTestExtern___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = " does not have an @[extern] attribute or @[implemented_by] attribute"};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__12 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__12_value;
static lean_once_cell_t l_Lean_elabTestExtern___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_elabTestExtern___lam__0___closed__13;
static const lean_string_object l_Lean_elabTestExtern___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "test_extern: expects a function application"};
static const lean_object* l_Lean_elabTestExtern___lam__0___closed__14 = (const lean_object*)&l_Lean_elabTestExtern___lam__0___closed__14_value;
static lean_once_cell_t l_Lean_elabTestExtern___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_elabTestExtern___lam__0___closed__15;
LEAN_EXPORT lean_object* l_Lean_elabTestExtern___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_elabTestExtern___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_elabTestExtern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_elabTestExtern___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_box(0);
v___x_28_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg(){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___closed__0);
v___x_32_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg___boxed(lean_object* v___y_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg();
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0(lean_object* v_00_u03b1_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg();
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___boxed(lean_object* v_00_u03b1_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0(v_00_u03b1_40_, v___y_41_, v___y_42_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__1(lean_object* v_msgData_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v___x_51_; lean_object* v_env_52_; uint8_t v___x_53_; lean_object* v_env_54_; lean_object* v___x_55_; lean_object* v_toCold_56_; lean_object* v_mctx_57_; lean_object* v_lctx_58_; lean_object* v_options_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_51_ = lean_st_ref_get(v___y_49_);
v_env_52_ = lean_ctor_get(v___x_51_, 0);
lean_inc_ref(v_env_52_);
lean_dec(v___x_51_);
v___x_53_ = 0;
v_env_54_ = l_Lean_Environment_setRecordingDeps(v_env_52_, v___x_53_);
v___x_55_ = lean_st_ref_get(v___y_47_);
v_toCold_56_ = lean_ctor_get(v___y_48_, 0);
v_mctx_57_ = lean_ctor_get(v___x_55_, 0);
lean_inc_ref(v_mctx_57_);
lean_dec(v___x_55_);
v_lctx_58_ = lean_ctor_get(v___y_46_, 2);
v_options_59_ = lean_ctor_get(v_toCold_56_, 2);
lean_inc_ref(v_options_59_);
lean_inc_ref(v_lctx_58_);
v___x_60_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_60_, 0, v_env_54_);
lean_ctor_set(v___x_60_, 1, v_mctx_57_);
lean_ctor_set(v___x_60_, 2, v_lctx_58_);
lean_ctor_set(v___x_60_, 3, v_options_59_);
v___x_61_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v_msgData_45_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__1___boxed(lean_object* v_msgData_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__1(v_msgData_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
return v_res_69_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__3(lean_object* v_opts_70_, lean_object* v_opt_71_){
_start:
{
lean_object* v_name_72_; lean_object* v_defValue_73_; lean_object* v_map_74_; lean_object* v___x_75_; 
v_name_72_ = lean_ctor_get(v_opt_71_, 0);
v_defValue_73_ = lean_ctor_get(v_opt_71_, 1);
v_map_74_ = lean_ctor_get(v_opts_70_, 0);
v___x_75_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_74_, v_name_72_);
if (lean_obj_tag(v___x_75_) == 0)
{
uint8_t v___x_76_; 
v___x_76_ = lean_unbox(v_defValue_73_);
return v___x_76_;
}
else
{
lean_object* v_val_77_; 
v_val_77_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_val_77_);
lean_dec_ref_known(v___x_75_, 1);
if (lean_obj_tag(v_val_77_) == 1)
{
uint8_t v_v_78_; 
v_v_78_ = lean_ctor_get_uint8(v_val_77_, 0);
lean_dec_ref_known(v_val_77_, 0);
return v_v_78_;
}
else
{
uint8_t v___x_79_; 
lean_dec(v_val_77_);
v___x_79_ = lean_unbox(v_defValue_73_);
return v___x_79_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__3___boxed(lean_object* v_opts_80_, lean_object* v_opt_81_){
_start:
{
uint8_t v_res_82_; lean_object* v_r_83_; 
v_res_82_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__3(v_opts_80_, v_opt_81_);
lean_dec_ref(v_opt_81_);
lean_dec_ref(v_opts_80_);
v_r_83_ = lean_box(v_res_82_);
return v_r_83_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_box(1);
v___x_85_ = l_Lean_MessageData_ofFormat(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__2));
v___x_90_ = l_Lean_MessageData_ofFormat(v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4(lean_object* v_x_91_, lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 0)
{
return v_x_91_;
}
else
{
lean_object* v_head_93_; lean_object* v_tail_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_116_; 
v_head_93_ = lean_ctor_get(v_x_92_, 0);
v_tail_94_ = lean_ctor_get(v_x_92_, 1);
v_isSharedCheck_116_ = !lean_is_exclusive(v_x_92_);
if (v_isSharedCheck_116_ == 0)
{
v___x_96_ = v_x_92_;
v_isShared_97_ = v_isSharedCheck_116_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_tail_94_);
lean_inc(v_head_93_);
lean_dec(v_x_92_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_116_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v_before_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_114_; 
v_before_98_ = lean_ctor_get(v_head_93_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v_head_93_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; 
v_unused_115_ = lean_ctor_get(v_head_93_, 1);
lean_dec(v_unused_115_);
v___x_100_ = v_head_93_;
v_isShared_101_ = v_isSharedCheck_114_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_before_98_);
lean_dec(v_head_93_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_114_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_101_ == 0)
{
lean_ctor_set_tag(v___x_100_, 7);
lean_ctor_set(v___x_100_, 1, v___x_102_);
lean_ctor_set(v___x_100_, 0, v_x_91_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_x_91_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v___x_102_);
v___x_104_ = v_reuseFailAlloc_113_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; lean_object* v___x_107_; 
v___x_105_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__3);
if (v_isShared_97_ == 0)
{
lean_ctor_set_tag(v___x_96_, 7);
lean_ctor_set(v___x_96_, 1, v___x_105_);
lean_ctor_set(v___x_96_, 0, v___x_104_);
v___x_107_ = v___x_96_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v___x_105_);
v___x_107_ = v_reuseFailAlloc_112_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = l_Lean_MessageData_ofSyntax(v_before_98_);
v___x_109_ = l_Lean_indentD(v___x_108_);
v___x_110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_107_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v_x_91_ = v___x_110_;
v_x_92_ = v_tail_94_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__1));
v___x_121_ = l_Lean_MessageData_ofFormat(v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg(lean_object* v_msgData_122_, lean_object* v_macroStack_123_, lean_object* v___y_124_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_126_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_124_);
v___x_127_ = l_Lean_Elab_pp_macroStack;
v___x_128_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__3(v___x_126_, v___x_127_);
lean_dec_ref(v___x_126_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
lean_dec(v_macroStack_123_);
v___x_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_129_, 0, v_msgData_122_);
return v___x_129_;
}
else
{
if (lean_obj_tag(v_macroStack_123_) == 0)
{
lean_object* v___x_130_; 
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v_msgData_122_);
return v___x_130_;
}
else
{
lean_object* v_head_131_; lean_object* v_after_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_147_; 
v_head_131_ = lean_ctor_get(v_macroStack_123_, 0);
lean_inc(v_head_131_);
v_after_132_ = lean_ctor_get(v_head_131_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_head_131_);
if (v_isSharedCheck_147_ == 0)
{
lean_object* v_unused_148_; 
v_unused_148_ = lean_ctor_get(v_head_131_, 0);
lean_dec(v_unused_148_);
v___x_134_ = v_head_131_;
v_isShared_135_ = v_isSharedCheck_147_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_after_132_);
lean_dec(v_head_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_147_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_136_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4___closed__0);
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 7);
lean_ctor_set(v___x_134_, 1, v___x_136_);
lean_ctor_set(v___x_134_, 0, v_msgData_122_);
v___x_138_ = v___x_134_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_msgData_122_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v___x_136_);
v___x_138_ = v_reuseFailAlloc_146_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v_msgData_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_139_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___closed__2);
v___x_140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = l_Lean_MessageData_ofSyntax(v_after_132_);
v___x_142_ = l_Lean_indentD(v___x_141_);
v_msgData_143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_143_, 0, v___x_140_);
lean_ctor_set(v_msgData_143_, 1, v___x_142_);
v___x_144_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2_spec__4(v_msgData_143_, v_macroStack_123_);
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
return v___x_145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_149_, lean_object* v_macroStack_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg(v_msgData_149_, v_macroStack_150_, v___y_151_);
lean_dec_ref(v___y_151_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg(lean_object* v_msg_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_ref_162_; lean_object* v_macroStack_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v_a_166_; lean_object* v___x_167_; lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_176_; 
v_ref_162_ = lean_ctor_get(v___y_159_, 2);
v_macroStack_163_ = lean_ctor_get(v___y_155_, 1);
v___x_164_ = l_Lean_Elab_getBetterRef(v_ref_162_, v_macroStack_163_);
v___x_165_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__1(v_msg_154_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
v_a_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_a_166_);
lean_dec_ref(v___x_165_);
lean_inc(v_macroStack_163_);
v___x_167_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg(v_a_166_, v_macroStack_163_, v___y_159_);
v_a_168_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_176_ == 0)
{
v___x_170_ = v___x_167_;
v_isShared_171_ = v_isSharedCheck_176_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_167_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_176_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_164_);
lean_ctor_set(v___x_172_, 1, v_a_168_);
if (v_isShared_171_ == 0)
{
lean_ctor_set_tag(v___x_170_, 1);
lean_ctor_set(v___x_170_, 0, v___x_172_);
v___x_174_ = v___x_170_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg___boxed(lean_object* v_msg_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg(v_msg_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_185_;
}
}
static lean_object* _init_l_Lean_elabTestExtern___lam__0___closed__2(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = lean_box(0);
v___x_190_ = ((lean_object*)(l_Lean_elabTestExtern___lam__0___closed__1));
v___x_191_ = l_Lean_Expr_const___override(v___x_190_, v___x_189_);
return v___x_191_;
}
}
static lean_object* _init_l_Lean_elabTestExtern___lam__0___closed__5(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = ((lean_object*)(l_Lean_elabTestExtern___lam__0___closed__4));
v___x_196_ = l_Lean_MessageData_ofFormat(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_elabTestExtern___lam__0___closed__7(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(l_Lean_elabTestExtern___lam__0___closed__6));
v___x_199_ = l_Lean_stringToMessageData(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_elabTestExtern___lam__0___closed__9(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(l_Lean_elabTestExtern___lam__0___closed__8));
v___x_202_ = l_Lean_stringToMessageData(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_l_Lean_elabTestExtern___lam__0___closed__11(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = ((lean_object*)(l_Lean_elabTestExtern___lam__0___closed__10));
v___x_205_ = l_Lean_stringToMessageData(v___x_204_);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_elabTestExtern___lam__0___closed__13(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = ((lean_object*)(l_Lean_elabTestExtern___lam__0___closed__12));
v___x_208_ = l_Lean_stringToMessageData(v___x_207_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_elabTestExtern___lam__0___closed__15(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = ((lean_object*)(l_Lean_elabTestExtern___lam__0___closed__14));
v___x_211_ = l_Lean_stringToMessageData(v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_elabTestExtern___lam__0(lean_object* v___x_212_, lean_object* v___x_213_, uint8_t v___x_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lean_Elab_Term_elabTermAndSynthesize(v___x_212_, v___x_213_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_224_; 
v_a_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_a_223_);
lean_dec_ref_known(v___x_222_, 1);
v___x_224_ = l_Lean_Expr_getAppFn(v_a_223_);
if (lean_obj_tag(v___x_224_) == 4)
{
lean_object* v_declName_225_; lean_object* v___x_226_; uint8_t v___y_228_; lean_object* v_env_291_; uint8_t v___x_292_; 
v_declName_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc_n(v_declName_225_, 2);
lean_dec_ref_known(v___x_224_, 2);
v___x_226_ = lean_st_ref_get(v___y_220_);
v_env_291_ = lean_ctor_get(v___x_226_, 0);
lean_inc_ref_n(v_env_291_, 2);
lean_dec(v___x_226_);
v___x_292_ = l_Lean_isExtern(v_env_291_, v_declName_225_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; 
lean_inc(v_declName_225_);
v___x_293_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_291_, v_declName_225_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
lean_dec(v_a_223_);
v___x_294_ = lean_obj_once(&l_Lean_elabTestExtern___lam__0___closed__11, &l_Lean_elabTestExtern___lam__0___closed__11_once, _init_l_Lean_elabTestExtern___lam__0___closed__11);
v___x_295_ = l_Lean_MessageData_ofName(v_declName_225_);
v___x_296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_obj_once(&l_Lean_elabTestExtern___lam__0___closed__13, &l_Lean_elabTestExtern___lam__0___closed__13_once, _init_l_Lean_elabTestExtern___lam__0___closed__13);
v___x_298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg(v___x_298_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
return v___x_299_;
}
else
{
lean_dec_ref_known(v___x_293_, 1);
v___y_228_ = v___x_214_;
goto v___jp_227_;
}
}
else
{
lean_dec_ref(v_env_291_);
v___y_228_ = v___x_292_;
goto v___jp_227_;
}
v___jp_227_:
{
lean_object* v___x_229_; 
lean_inc(v_a_223_);
v___x_229_ = l_Lean_Meta_unfold(v_a_223_, v_declName_225_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v_expr_231_; lean_object* v___x_232_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v___x_229_, 1);
v_expr_231_ = lean_ctor_get(v_a_230_, 0);
lean_inc_ref_n(v_expr_231_, 2);
lean_dec(v_a_230_);
lean_inc(v_a_223_);
v___x_232_ = l_Lean_Meta_mkEq(v_a_223_, v_expr_231_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_234_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_232_, 1);
v___x_234_ = l_Lean_Meta_mkDecide(v_a_233_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_234_) == 0)
{
lean_object* v_a_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; 
v_a_235_ = lean_ctor_get(v___x_234_, 0);
lean_inc(v_a_235_);
lean_dec_ref_known(v___x_234_, 1);
v___x_236_ = lean_obj_once(&l_Lean_elabTestExtern___lam__0___closed__2, &l_Lean_elabTestExtern___lam__0___closed__2_once, _init_l_Lean_elabTestExtern___lam__0___closed__2);
v___x_237_ = 1;
v___x_238_ = l_Lean_Meta_evalExpr___redArg(v___x_236_, v_a_235_, v___x_237_, v___y_228_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_258_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_258_ == 0)
{
v___x_241_ = v___x_238_;
v_isShared_242_ = v_isSharedCheck_258_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_258_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
uint8_t v___x_243_; 
v___x_243_ = lean_unbox(v_a_239_);
lean_dec(v_a_239_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
lean_del_object(v___x_241_);
v___x_244_ = lean_obj_once(&l_Lean_elabTestExtern___lam__0___closed__5, &l_Lean_elabTestExtern___lam__0___closed__5_once, _init_l_Lean_elabTestExtern___lam__0___closed__5);
v___x_245_ = lean_obj_once(&l_Lean_elabTestExtern___lam__0___closed__7, &l_Lean_elabTestExtern___lam__0___closed__7_once, _init_l_Lean_elabTestExtern___lam__0___closed__7);
v___x_246_ = l_Lean_MessageData_ofExpr(v_a_223_);
v___x_247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = lean_obj_once(&l_Lean_elabTestExtern___lam__0___closed__9, &l_Lean_elabTestExtern___lam__0___closed__9_once, _init_l_Lean_elabTestExtern___lam__0___closed__9);
v___x_249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_247_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = l_Lean_MessageData_ofExpr(v_expr_231_);
v___x_251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_244_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg(v___x_252_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; lean_object* v___x_256_; 
lean_dec_ref(v_expr_231_);
lean_dec(v_a_223_);
v___x_254_ = lean_box(0);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v___x_254_);
v___x_256_ = v___x_241_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
}
else
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_266_; 
lean_dec_ref(v_expr_231_);
lean_dec(v_a_223_);
v_a_259_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_266_ == 0)
{
v___x_261_ = v___x_238_;
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_238_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_259_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec_ref(v_expr_231_);
lean_dec(v_a_223_);
v_a_267_ = lean_ctor_get(v___x_234_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_234_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_234_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_234_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec_ref(v_expr_231_);
lean_dec(v_a_223_);
v_a_275_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_232_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_232_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
lean_dec(v_a_223_);
v_a_283_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_290_ == 0)
{
v___x_285_ = v___x_229_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_229_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_a_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; 
lean_dec_ref(v___x_224_);
lean_dec(v_a_223_);
v___x_300_ = lean_obj_once(&l_Lean_elabTestExtern___lam__0___closed__15, &l_Lean_elabTestExtern___lam__0___closed__15_once, _init_l_Lean_elabTestExtern___lam__0___closed__15);
v___x_301_ = l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg(v___x_300_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
return v___x_301_;
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
v_a_302_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___x_222_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_222_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_elabTestExtern___lam__0___boxed(lean_object* v___x_310_, lean_object* v___x_311_, lean_object* v___x_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
uint8_t v___x_4215__boxed_320_; lean_object* v_res_321_; 
v___x_4215__boxed_320_ = lean_unbox(v___x_312_);
v_res_321_ = l_Lean_elabTestExtern___lam__0(v___x_310_, v___x_311_, v___x_4215__boxed_320_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
lean_dec(v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_elabTestExtern(lean_object* v_x_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = ((lean_object*)(l_Lean_testExternCmd___closed__2));
lean_inc(v_x_322_);
v___x_327_ = l_Lean_Syntax_isOfKind(v_x_322_, v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; 
lean_dec(v_x_322_);
v___x_328_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_elabTestExtern_spec__0___redArg();
return v___x_328_;
}
else
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___f_333_; lean_object* v___x_334_; 
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = l_Lean_Syntax_getArg(v_x_322_, v___x_329_);
lean_dec(v_x_322_);
v___x_331_ = lean_box(0);
v___x_332_ = lean_box(v___x_327_);
v___f_333_ = lean_alloc_closure((void*)(l_Lean_elabTestExtern___lam__0___boxed), 10, 3);
lean_closure_set(v___f_333_, 0, v___x_330_);
lean_closure_set(v___f_333_, 1, v___x_331_);
lean_closure_set(v___f_333_, 2, v___x_332_);
v___x_334_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_333_, v_a_323_, v_a_324_);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_elabTestExtern___boxed(lean_object* v_x_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_elabTestExtern(v_x_335_, v_a_336_, v_a_337_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1(lean_object* v_00_u03b1_340_, lean_object* v_msg_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___redArg(v_msg_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_elabTestExtern_spec__1___boxed(lean_object* v_00_u03b1_350_, lean_object* v_msg_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_throwError___at___00Lean_elabTestExtern_spec__1(v_00_u03b1_350_, v_msg_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2(lean_object* v_msgData_360_, lean_object* v_macroStack_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___redArg(v_msgData_360_, v_macroStack_361_, v___y_366_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2___boxed(lean_object* v_msgData_370_, lean_object* v_macroStack_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_elabTestExtern_spec__1_spec__2(v_msgData_370_, v_macroStack_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
return v_res_379_;
}
}
lean_object* runtime_initialize_Init_Notation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_TestExtern(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Unfold(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_TestExtern(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Unfold(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eval(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Init_Notation(uint8_t builtin);
lean_object* initialize_Lean_Exception(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_TestExtern(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Notation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_TestExtern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_TestExtern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_TestExtern(builtin);
}
#ifdef __cplusplus
}
#endif
