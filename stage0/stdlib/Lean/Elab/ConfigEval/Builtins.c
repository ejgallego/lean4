// Lean compiler output
// Module: Lean.Elab.ConfigEval.Builtins
// Imports: public import Lean.Elab.ConfigEval.Commands public import Lean.Elab.ConfigEval.DeriveEvalConfigItem import Lean.Linter.MissingDocs
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_MissingDocs_mkSimpleHandler(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_MissingDocs_addBuiltinHandler(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Term_elabTermAndSynthesize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_deriveEvalExprUsingMetaEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*, uint8_t);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Elab_ConfigEval_defEvalConfigItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ensureEvalTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ensureEvalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ConfigEval"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ensureEvalTermInstance"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__7_value),LEAN_SCALAR_PTR_LITERAL(188, 241, 114, 217, 47, 253, 4, 219)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "elabEnsureEvalTermInstance"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 194, 196, 169, 20, 95, 98, 52)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ensureEvalExprInstance"};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 108, 175, 10, 248, 93, 94, 3)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "elabEnsureEvalExprInstance"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 24, 116, 13, 80, 232, 32, 92)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ensure_eval_term_instance"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0_value;
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ensure_eval_expr_instance"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4;
static const lean_array_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "ensureEvalTermExprInstances"};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(10, 66, 158, 168, 204, 221, 79, 184)}};
static const lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expandEnsureEvalTermExprInstance"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(210, 5, 152, 25, 120, 11, 48, 44)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "deriveEvalExprUsingMeta"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 116, 75, 98, 130, 21, 177, 80)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "elabDeriveEvalExprUsingMeta"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 91, 14, 102, 74, 139, 51, 157)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "configEntry"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 149, 160, 204, 146, 200, 218, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "configEntryOmit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 140, 111, 202, 251, 168, 170, 75)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "configEntryHandler"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(78, 145, 34, 65, 77, 53, 67, 42)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "configEntryHandlerKey"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(25, 190, 73, 235, 170, 184, 39, 210)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "configEntryHandlerKeyPrefix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(165, 45, 37, 228, 14, 221, 193, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "configEntryHandlerKeyWildcard"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(81, 192, 13, 21, 20, 44, 232, 93)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0_value)}};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "configEntries"};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__2_value),LEAN_SCALAR_PTR_LITERAL(210, 127, 108, 166, 156, 181, 170, 30)}};
static const lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "defEvalConfigItemCmd"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 50, 201, 157, 117, 233, 235, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "elabDefEvalConfigItemCmd"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 139, 45, 169, 210, 187, 151, 127)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "config elab"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__2_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "strictImplicitBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__4_value),LEAN_SCALAR_PTR_LITERAL(125, 223, 215, 186, 222, 17, 242, 189)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__6_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unsupported binder"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.Syntax"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__8_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9_value)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binderDefault"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__11_value),LEAN_SCALAR_PTR_LITERAL(35, 119, 214, 97, 198, 223, 242, 31)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__13_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term{}"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__15_value),LEAN_SCALAR_PTR_LITERAL(44, 141, 217, 101, 193, 131, 35, 71)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__19_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__21_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__23_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(155, 20, 163, 238, 100, 115, 187, 44)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__28_value)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__30_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33_value),LEAN_SCALAR_PTR_LITERAL(181, 206, 135, 90, 45, 65, 187, 80)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__35_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__37_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__39_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__42_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__44_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__46_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__48_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__50_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "EvalConfigItem.defaultOnErr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "defaultOnErr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cfgType\?"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56_value),LEAN_SCALAR_PTR_LITERAL(58, 117, 29, 104, 229, 209, 250, 101)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkConst"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value),LEAN_SCALAR_PTR_LITERAL(37, 117, 8, 90, 26, 147, 93, 249)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59_value),LEAN_SCALAR_PTR_LITERAL(28, 38, 193, 74, 165, 73, 8, 119)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doubleQuotedName"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__63_value),LEAN_SCALAR_PTR_LITERAL(194, 121, 78, 150, 98, 156, 35, 157)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_1),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__68_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__69_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "logExceptions"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73_value),LEAN_SCALAR_PTR_LITERAL(118, 86, 185, 206, 146, 131, 198, 232)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cfg"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__76_value),LEAN_SCALAR_PTR_LITERAL(193, 249, 49, 54, 148, 135, 57, 21)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "init"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__79_value),LEAN_SCALAR_PTR_LITERAL(72, 5, 38, 228, 229, 249, 19, 211)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "EvalConfigItem.setConfig'"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "EvalConfigItem"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "setConfig'"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value),LEAN_SCALAR_PTR_LITERAL(22, 247, 23, 93, 100, 235, 111, 189)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value_aux_0),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value),LEAN_SCALAR_PTR_LITERAL(64, 183, 169, 121, 35, 91, 151, 47)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86_value),LEAN_SCALAR_PTR_LITERAL(16, 84, 54, 65, 212, 237, 250, 172)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value_aux_3),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__87_value),LEAN_SCALAR_PTR_LITERAL(190, 187, 222, 86, 238, 13, 118, 125)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__89_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__90_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eval"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92_value),LEAN_SCALAR_PTR_LITERAL(12, 151, 53, 232, 164, 85, 213, 132)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__95_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "onErr"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98_value),LEAN_SCALAR_PTR_LITERAL(228, 46, 52, 217, 218, 46, 201, 51)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102_value;
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalConfigItem"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__104_value),LEAN_SCALAR_PTR_LITERAL(180, 209, 241, 176, 164, 63, 27, 216)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108_value),LEAN_SCALAR_PTR_LITERAL(136, 104, 45, 91, 146, 14, 86, 4)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "def_eval_config_item"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110_value;
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "for"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "declareCoreConfigElab"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 30, 123, 201, 158, 66, 128, 147)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Core"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "CoreM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__4_value),LEAN_SCALAR_PTR_LITERAL(194, 126, 120, 188, 150, 235, 117, 203)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__5_value),LEAN_SCALAR_PTR_LITERAL(115, 114, 191, 177, 45, 189, 121, 141)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "elabDeclareCoreConfigElab"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 169, 247, 122, 199, 9, 42, 189)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_&&_"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 195, 203, 117, 177, 125, 57, 22)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "&&"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "read"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(190, 16, 165, 175, 2, 23, 214, 231)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MonadReader"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(11, 173, 117, 41, 17, 79, 142, 168)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(46, 74, 177, 199, 30, 224, 37, 71)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "errToSorry"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(167, 166, 138, 245, 152, 171, 48, 109)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "declareTermConfigElab"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__0_value),LEAN_SCALAR_PTR_LITERAL(145, 108, 165, 103, 249, 154, 177, 123)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___boxed, .m_arity = 8, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value)} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "TermElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__3_value),LEAN_SCALAR_PTR_LITERAL(85, 85, 78, 208, 80, 136, 131, 165)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__6_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "elabDeclareTermConfigElab"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 129, 201, 91, 36, 24, 34, 115)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "recover"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 177, 38, 2, 101, 67, 237, 158)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "declareTacticConfig"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 17, 172, 247, 161, 0, 3, 195)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___boxed, .m_arity = 8, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value)} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TacticM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 63, 151, 54, 27, 84, 190, 214)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "elabDeclareTacticConfig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 103, 219, 85, 28, 93, 217, 46)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Command.liftTermElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "liftTermElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "declareCommandConfig"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 49, 172, 65, 140, 146, 127, 103)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___boxed, .m_arity = 8, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value)} };
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2_value;
static const lean_string_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "CommandElabM"};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__3_value),LEAN_SCALAR_PTR_LITERAL(8, 183, 159, 6, 104, 246, 8, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "elabDeclareCommandConfig"};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6_value),LEAN_SCALAR_PTR_LITERAL(85, 8, 37, 243, 138, 220, 183, 157)}};
static const lean_ctor_object l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 75, 209, 24, 31, 135, 140, 54)}};
static const lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___boxed(lean_object* v_00_u03b1_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0(v_00_u03b1_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg(lean_object* v_a_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg___boxed(lean_object* v_a_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___redArg(v_a_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1(lean_object* v_00_u03b1_37_, lean_object* v_a_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed(lean_object* v_00_u03b1_47_, lean_object* v_a_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1(v_00_u03b1_47_, v_a_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance(lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_vis_x3f_79_; lean_object* v___y_80_; lean_object* v___y_81_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8));
lean_inc(v_x_74_);
v___x_106_ = l_Lean_Syntax_isOfKind(v_x_74_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec(v_x_74_);
v___x_107_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_107_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = l_Lean_Syntax_getArg(v_x_74_, v___x_108_);
v___x_110_ = l_Lean_Syntax_isNone(v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_109_);
v___x_112_ = l_Lean_Syntax_matchesNull(v___x_109_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; 
lean_dec(v___x_109_);
lean_dec(v_x_74_);
v___x_113_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_113_;
}
else
{
lean_object* v_vis_x3f_114_; lean_object* v___x_115_; 
v_vis_x3f_114_ = l_Lean_Syntax_getArg(v___x_109_, v___x_108_);
lean_dec(v___x_109_);
v___x_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_115_, 0, v_vis_x3f_114_);
v_vis_x3f_79_ = v___x_115_;
v___y_80_ = v_a_75_;
v___y_81_ = v_a_76_;
goto v___jp_78_;
}
}
else
{
lean_object* v___x_116_; 
lean_dec(v___x_109_);
v___x_116_ = lean_box(0);
v_vis_x3f_79_ = v___x_116_;
v___y_80_ = v_a_75_;
v___y_81_ = v_a_76_;
goto v___jp_78_;
}
}
v___jp_78_:
{
lean_object* v___x_82_; lean_object* v_kind_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_82_ = lean_unsigned_to_nat(1u);
v_kind_83_ = l_Lean_Syntax_getArg(v_x_74_, v___x_82_);
v___x_84_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_83_);
v___x_85_ = l_Lean_Syntax_isOfKind(v_kind_83_, v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_dec(v_kind_83_);
lean_dec(v_vis_x3f_79_);
lean_dec(v_x_74_);
v___x_86_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_86_;
}
else
{
lean_object* v___x_87_; lean_object* v_tk_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_87_ = lean_unsigned_to_nat(2u);
v_tk_88_ = l_Lean_Syntax_getArg(v_x_74_, v___x_87_);
v___x_89_ = lean_unsigned_to_nat(3u);
v___x_90_ = l_Lean_Syntax_getArg(v_x_74_, v___x_89_);
lean_dec(v_x_74_);
v___x_91_ = lean_box(0);
lean_inc(v___x_90_);
v___x_92_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_92_, 0, v___x_90_);
lean_closure_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed), 9, 2);
lean_closure_set(v___x_93_, 0, lean_box(0));
lean_closure_set(v___x_93_, 1, v___x_92_);
v___x_94_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_93_, v___y_80_, v___y_81_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_96_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc(v_a_95_);
lean_dec_ref_known(v___x_94_, 1);
v___x_96_ = l_Lean_Elab_ConfigEval_ensureEvalTerm(v_vis_x3f_79_, v_kind_83_, v_tk_88_, v___x_90_, v_a_95_, v___y_80_, v___y_81_);
return v___x_96_;
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
lean_dec(v___x_90_);
lean_dec(v_tk_88_);
lean_dec(v_kind_83_);
lean_dec(v_vis_x3f_79_);
v_a_97_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_94_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_94_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___boxed(lean_object* v_x_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance(v_x_117_, v_a_118_, v_a_119_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1(){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_129_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_130_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8));
v___x_131_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___closed__1));
v___x_132_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___boxed), 4, 0);
v___x_133_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_129_, v___x_130_, v___x_131_, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1___boxed(lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1();
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance(lean_object* v_x_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_vis_x3f_147_; lean_object* v___y_148_; lean_object* v___y_149_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1));
lean_inc(v_x_142_);
v___x_174_ = l_Lean_Syntax_isOfKind(v_x_142_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
lean_dec(v_x_142_);
v___x_175_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_175_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = l_Lean_Syntax_getArg(v_x_142_, v___x_176_);
v___x_178_ = l_Lean_Syntax_isNone(v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_177_);
v___x_180_ = l_Lean_Syntax_matchesNull(v___x_177_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; 
lean_dec(v___x_177_);
lean_dec(v_x_142_);
v___x_181_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_181_;
}
else
{
lean_object* v_vis_x3f_182_; lean_object* v___x_183_; 
v_vis_x3f_182_ = l_Lean_Syntax_getArg(v___x_177_, v___x_176_);
lean_dec(v___x_177_);
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v_vis_x3f_182_);
v_vis_x3f_147_ = v___x_183_;
v___y_148_ = v_a_143_;
v___y_149_ = v_a_144_;
goto v___jp_146_;
}
}
else
{
lean_object* v___x_184_; 
lean_dec(v___x_177_);
v___x_184_ = lean_box(0);
v_vis_x3f_147_ = v___x_184_;
v___y_148_ = v_a_143_;
v___y_149_ = v_a_144_;
goto v___jp_146_;
}
}
v___jp_146_:
{
lean_object* v___x_150_; lean_object* v_kind_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_150_ = lean_unsigned_to_nat(1u);
v_kind_151_ = l_Lean_Syntax_getArg(v_x_142_, v___x_150_);
v___x_152_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_151_);
v___x_153_ = l_Lean_Syntax_isOfKind(v_kind_151_, v___x_152_);
if (v___x_153_ == 0)
{
lean_object* v___x_154_; 
lean_dec(v_kind_151_);
lean_dec(v_vis_x3f_147_);
lean_dec(v_x_142_);
v___x_154_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_154_;
}
else
{
lean_object* v___x_155_; lean_object* v_tk_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_155_ = lean_unsigned_to_nat(2u);
v_tk_156_ = l_Lean_Syntax_getArg(v_x_142_, v___x_155_);
v___x_157_ = lean_unsigned_to_nat(3u);
v___x_158_ = l_Lean_Syntax_getArg(v_x_142_, v___x_157_);
lean_dec(v_x_142_);
v___x_159_ = lean_box(0);
lean_inc(v___x_158_);
v___x_160_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_160_, 0, v___x_158_);
lean_closure_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed), 9, 2);
lean_closure_set(v___x_161_, 0, lean_box(0));
lean_closure_set(v___x_161_, 1, v___x_160_);
v___x_162_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_161_, v___y_148_, v___y_149_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_164_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
v___x_164_ = l_Lean_Elab_ConfigEval_ensureEvalExpr(v_vis_x3f_147_, v_kind_151_, v_tk_156_, v___x_158_, v_a_163_, v___y_148_, v___y_149_);
return v___x_164_;
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
lean_dec(v___x_158_);
lean_dec(v_tk_156_);
lean_dec(v_kind_151_);
lean_dec(v_vis_x3f_147_);
v_a_165_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_162_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_162_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___boxed(lean_object* v_x_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance(v_x_185_, v_a_186_, v_a_187_);
lean_dec(v_a_187_);
lean_dec_ref(v_a_186_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1(){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_197_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_198_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__1));
v___x_199_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___closed__1));
v___x_200_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___boxed), 4, 0);
v___x_201_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_197_, v___x_198_, v___x_199_, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1___boxed(lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1();
return v_res_203_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4(void){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Array_mkArray0___redArg();
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance(lean_object* v_x_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v___y_222_; lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_225_; lean_object* v___y_226_; lean_object* v___y_227_; lean_object* v___y_228_; lean_object* v___y_229_; lean_object* v___y_230_; lean_object* v___y_231_; lean_object* v___y_232_; uint8_t v___y_233_; lean_object* v___y_234_; lean_object* v_vis_x3f_249_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
lean_inc(v_x_218_);
v___x_274_ = l_Lean_Syntax_isOfKind(v_x_218_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
lean_dec(v_x_218_);
v___x_275_ = l_Lean_Macro_throwUnsupported___redArg(v_a_220_);
return v___x_275_;
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_276_ = lean_unsigned_to_nat(0u);
v___x_277_ = l_Lean_Syntax_getArg(v_x_218_, v___x_276_);
v___x_278_ = l_Lean_Syntax_isNone(v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_277_);
v___x_280_ = l_Lean_Syntax_matchesNull(v___x_277_, v___x_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; 
lean_dec(v___x_277_);
lean_dec(v_x_218_);
v___x_281_ = l_Lean_Macro_throwUnsupported___redArg(v_a_220_);
return v___x_281_;
}
else
{
lean_object* v_vis_x3f_282_; lean_object* v___x_283_; 
v_vis_x3f_282_ = l_Lean_Syntax_getArg(v___x_277_, v___x_276_);
lean_dec(v___x_277_);
v___x_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_283_, 0, v_vis_x3f_282_);
v_vis_x3f_249_ = v___x_283_;
v___y_250_ = v_a_219_;
v___y_251_ = v_a_220_;
goto v___jp_248_;
}
}
else
{
lean_object* v___x_284_; 
lean_dec(v___x_277_);
v___x_284_ = lean_box(0);
v_vis_x3f_249_ = v___x_284_;
v___y_250_ = v_a_219_;
v___y_251_ = v_a_220_;
goto v___jp_248_;
}
}
v___jp_221_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
lean_inc_ref(v___y_232_);
v___x_235_ = l_Array_append___redArg(v___y_232_, v___y_234_);
lean_dec_ref(v___y_234_);
lean_inc_n(v___y_230_, 2);
lean_inc_n(v___y_225_, 3);
v___x_236_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_236_, 0, v___y_225_);
lean_ctor_set(v___x_236_, 1, v___y_230_);
lean_ctor_set(v___x_236_, 2, v___x_235_);
v___x_237_ = l_Lean_SourceInfo_fromRef(v___y_223_, v___y_233_);
lean_dec(v___y_223_);
v___x_238_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__0));
lean_inc(v___x_237_);
v___x_239_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
lean_inc(v___y_222_);
lean_inc(v___y_227_);
lean_inc_ref(v___x_236_);
lean_inc(v___y_224_);
v___x_240_ = l_Lean_Syntax_node4(v___y_225_, v___y_224_, v___x_236_, v___y_227_, v___x_239_, v___y_222_);
v___x_241_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___closed__0));
lean_inc_ref(v___y_228_);
lean_inc_ref(v___y_231_);
lean_inc_ref(v___y_226_);
v___x_242_ = l_Lean_Name_mkStr4(v___y_226_, v___y_231_, v___y_228_, v___x_241_);
v___x_243_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__1));
v___x_244_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_237_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = l_Lean_Syntax_node4(v___y_225_, v___x_242_, v___x_236_, v___y_227_, v___x_244_, v___y_222_);
v___x_246_ = l_Lean_Syntax_node2(v___y_225_, v___y_230_, v___x_240_, v___x_245_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___y_229_);
return v___x_247_;
}
v___jp_248_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = l_Lean_Syntax_getArg(v_x_218_, v___x_252_);
v___x_254_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0));
v___x_255_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v___x_253_);
v___x_256_ = l_Lean_Syntax_isOfKind(v___x_253_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; 
lean_dec(v___x_253_);
lean_dec(v_vis_x3f_249_);
lean_dec(v_x_218_);
v___x_257_ = l_Lean_Macro_throwUnsupported___redArg(v___y_251_);
return v___x_257_;
}
else
{
lean_object* v_ref_258_; lean_object* v___x_259_; lean_object* v_tk_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v_ref_258_ = lean_ctor_get(v___y_250_, 5);
v___x_259_ = lean_unsigned_to_nat(2u);
v_tk_260_ = l_Lean_Syntax_getArg(v_x_218_, v___x_259_);
v___x_261_ = lean_unsigned_to_nat(3u);
v___x_262_ = l_Lean_Syntax_getArg(v_x_218_, v___x_261_);
lean_dec(v_x_218_);
v___x_263_ = 0;
v___x_264_ = l_Lean_SourceInfo_fromRef(v_ref_258_, v___x_263_);
v___x_265_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3));
v___x_266_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5));
v___x_267_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6));
v___x_268_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__8));
v___x_269_ = lean_obj_once(&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4, &l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4_once, _init_l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4);
if (lean_obj_tag(v_vis_x3f_249_) == 1)
{
lean_object* v_val_270_; lean_object* v___x_271_; 
v_val_270_ = lean_ctor_get(v_vis_x3f_249_, 0);
lean_inc(v_val_270_);
lean_dec_ref_known(v_vis_x3f_249_, 1);
v___x_271_ = l_Array_mkArray1___redArg(v_val_270_);
v___y_222_ = v___x_262_;
v___y_223_ = v_tk_260_;
v___y_224_ = v___x_268_;
v___y_225_ = v___x_264_;
v___y_226_ = v___x_254_;
v___y_227_ = v___x_253_;
v___y_228_ = v___x_267_;
v___y_229_ = v___y_251_;
v___y_230_ = v___x_265_;
v___y_231_ = v___x_266_;
v___y_232_ = v___x_269_;
v___y_233_ = v___x_256_;
v___y_234_ = v___x_271_;
goto v___jp_221_;
}
else
{
lean_object* v___x_272_; 
lean_dec(v_vis_x3f_249_);
v___x_272_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___y_222_ = v___x_262_;
v___y_223_ = v_tk_260_;
v___y_224_ = v___x_268_;
v___y_225_ = v___x_264_;
v___y_226_ = v___x_254_;
v___y_227_ = v___x_253_;
v___y_228_ = v___x_267_;
v___y_229_ = v___y_251_;
v___y_230_ = v___x_265_;
v___y_231_ = v___x_266_;
v___y_232_ = v___x_269_;
v___y_233_ = v___x_256_;
v___y_234_ = v___x_272_;
goto v___jp_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___boxed(lean_object* v_x_285_, lean_object* v_a_286_, lean_object* v_a_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance(v_x_285_, v_a_286_, v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1(){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_296_ = l_Lean_Elab_macroAttribute;
v___x_297_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__7));
v___x_298_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___closed__1));
v___x_299_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___boxed), 3, 0);
v___x_300_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_296_, v___x_297_, v___x_298_, v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1___boxed(lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1();
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta(lean_object* v_x_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_vis_x3f_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_340_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1));
lean_inc(v_x_309_);
v___x_341_ = l_Lean_Syntax_isOfKind(v_x_309_, v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; 
lean_dec(v_x_309_);
v___x_342_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_342_;
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = l_Lean_Syntax_getArg(v_x_309_, v___x_343_);
v___x_345_ = l_Lean_Syntax_isNone(v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_344_);
v___x_347_ = l_Lean_Syntax_matchesNull(v___x_344_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; 
lean_dec(v___x_344_);
lean_dec(v_x_309_);
v___x_348_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_348_;
}
else
{
lean_object* v_vis_x3f_349_; lean_object* v___x_350_; 
v_vis_x3f_349_ = l_Lean_Syntax_getArg(v___x_344_, v___x_343_);
lean_dec(v___x_344_);
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v_vis_x3f_349_);
v_vis_x3f_314_ = v___x_350_;
v___y_315_ = v_a_310_;
v___y_316_ = v_a_311_;
goto v___jp_313_;
}
}
else
{
lean_object* v___x_351_; 
lean_dec(v___x_344_);
v___x_351_ = lean_box(0);
v_vis_x3f_314_ = v___x_351_;
v___y_315_ = v_a_310_;
v___y_316_ = v_a_311_;
goto v___jp_313_;
}
}
v___jp_313_:
{
lean_object* v___x_317_; lean_object* v_kind_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_317_ = lean_unsigned_to_nat(1u);
v_kind_318_ = l_Lean_Syntax_getArg(v_x_309_, v___x_317_);
v___x_319_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_318_);
v___x_320_ = l_Lean_Syntax_isOfKind(v_kind_318_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
lean_dec(v_kind_318_);
lean_dec(v_vis_x3f_314_);
lean_dec(v_x_309_);
v___x_321_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_321_;
}
else
{
lean_object* v___x_322_; lean_object* v_tk_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_322_ = lean_unsigned_to_nat(2u);
v_tk_323_ = l_Lean_Syntax_getArg(v_x_309_, v___x_322_);
v___x_324_ = lean_unsigned_to_nat(3u);
v___x_325_ = l_Lean_Syntax_getArg(v_x_309_, v___x_324_);
lean_dec(v_x_309_);
v___x_326_ = lean_box(0);
lean_inc(v___x_325_);
v___x_327_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermAndSynthesize___boxed), 9, 2);
lean_closure_set(v___x_327_, 0, v___x_325_);
lean_closure_set(v___x_327_, 1, v___x_326_);
v___x_328_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__1___boxed), 9, 2);
lean_closure_set(v___x_328_, 0, lean_box(0));
lean_closure_set(v___x_328_, 1, v___x_327_);
v___x_329_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_328_, v___y_315_, v___y_316_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_331_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = l_Lean_Elab_ConfigEval_deriveEvalExprUsingMetaEval(v_vis_x3f_314_, v_kind_318_, v_tk_323_, v___x_325_, v_a_330_, v___y_315_, v___y_316_);
return v___x_331_;
}
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
lean_dec(v___x_325_);
lean_dec(v_tk_323_);
lean_dec(v_kind_318_);
lean_dec(v_vis_x3f_314_);
v_a_332_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_329_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_329_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___boxed(lean_object* v_x_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta(v_x_352_, v_a_353_, v_a_354_);
lean_dec(v_a_354_);
lean_dec_ref(v_a_353_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1(){
_start:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_364_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_365_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___closed__1));
v___x_366_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___closed__1));
v___x_367_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___boxed), 4, 0);
v___x_368_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_364_, v___x_365_, v___x_366_, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1___boxed(lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1();
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(size_t v_sz_371_, size_t v_i_372_, lean_object* v_bs_373_){
_start:
{
uint8_t v___x_374_; 
v___x_374_ = lean_usize_dec_lt(v_i_372_, v_sz_371_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
v___x_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_375_, 0, v_bs_373_);
return v___x_375_;
}
else
{
lean_object* v_v_376_; lean_object* v___x_377_; lean_object* v_bs_x27_378_; size_t v___x_379_; size_t v___x_380_; lean_object* v___x_381_; 
v_v_376_ = lean_array_uget(v_bs_373_, v_i_372_);
v___x_377_ = lean_unsigned_to_nat(0u);
v_bs_x27_378_ = lean_array_uset(v_bs_373_, v_i_372_, v___x_377_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_add(v_i_372_, v___x_379_);
v___x_381_ = lean_array_uset(v_bs_x27_378_, v_i_372_, v_v_376_);
v_i_372_ = v___x_380_;
v_bs_373_ = v___x_381_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0___boxed(lean_object* v_sz_383_, lean_object* v_i_384_, lean_object* v_bs_385_){
_start:
{
size_t v_sz_boxed_386_; size_t v_i_boxed_387_; lean_object* v_res_388_; 
v_sz_boxed_386_ = lean_unbox_usize(v_sz_383_);
lean_dec(v_sz_383_);
v_i_boxed_387_ = lean_unbox_usize(v_i_384_);
lean_dec(v_i_384_);
v_res_388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(v_sz_boxed_386_, v_i_boxed_387_, v_bs_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(size_t v_sz_389_, size_t v_i_390_, lean_object* v_bs_391_){
_start:
{
uint8_t v___x_392_; 
v___x_392_ = lean_usize_dec_lt(v_i_390_, v_sz_389_);
if (v___x_392_ == 0)
{
return v_bs_391_;
}
else
{
lean_object* v_v_393_; lean_object* v___x_394_; lean_object* v_bs_x27_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; size_t v___x_399_; size_t v___x_400_; lean_object* v___x_401_; 
v_v_393_ = lean_array_uget(v_bs_391_, v_i_390_);
v___x_394_ = lean_unsigned_to_nat(0u);
v_bs_x27_395_ = lean_array_uset(v_bs_391_, v_i_390_, v___x_394_);
v___x_396_ = l_Lean_TSyntax_getId(v_v_393_);
v___x_397_ = l_Lean_Name_eraseMacroScopes(v___x_396_);
lean_dec(v___x_396_);
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v_v_393_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = ((size_t)1ULL);
v___x_400_ = lean_usize_add(v_i_390_, v___x_399_);
v___x_401_ = lean_array_uset(v_bs_x27_395_, v_i_390_, v___x_398_);
v_i_390_ = v___x_400_;
v_bs_391_ = v___x_401_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1___boxed(lean_object* v_sz_403_, lean_object* v_i_404_, lean_object* v_bs_405_){
_start:
{
size_t v_sz_boxed_406_; size_t v_i_boxed_407_; lean_object* v_res_408_; 
v_sz_boxed_406_ = lean_unbox_usize(v_sz_403_);
lean_dec(v_sz_403_);
v_i_boxed_407_ = lean_unbox_usize(v_i_404_);
lean_dec(v_i_404_);
v_res_408_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(v_sz_boxed_406_, v_i_boxed_407_, v_bs_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(uint8_t v___x_409_, lean_object* v_as_410_, size_t v_i_411_, size_t v_stop_412_, lean_object* v_b_413_){
_start:
{
lean_object* v___y_415_; uint8_t v___x_419_; 
v___x_419_ = lean_usize_dec_eq(v_i_411_, v_stop_412_);
if (v___x_419_ == 0)
{
lean_object* v_fst_420_; uint8_t v___x_421_; 
v_fst_420_ = lean_ctor_get(v_b_413_, 0);
v___x_421_ = lean_unbox(v_fst_420_);
if (v___x_421_ == 0)
{
lean_object* v_snd_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_430_; 
v_snd_422_ = lean_ctor_get(v_b_413_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_b_413_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; 
v_unused_431_ = lean_ctor_get(v_b_413_, 0);
lean_dec(v_unused_431_);
v___x_424_ = v_b_413_;
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_snd_422_);
lean_dec(v_b_413_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v___x_428_; 
v___x_426_ = lean_box(v___x_409_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_426_);
v___x_428_ = v___x_424_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_426_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_snd_422_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
v___y_415_ = v___x_428_;
goto v___jp_414_;
}
}
}
else
{
lean_object* v_snd_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_442_; 
v_snd_432_ = lean_ctor_get(v_b_413_, 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v_b_413_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; 
v_unused_443_ = lean_ctor_get(v_b_413_, 0);
lean_dec(v_unused_443_);
v___x_434_ = v_b_413_;
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_snd_432_);
lean_dec(v_b_413_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_440_; 
v___x_436_ = lean_array_uget_borrowed(v_as_410_, v_i_411_);
lean_inc(v___x_436_);
v___x_437_ = lean_array_push(v_snd_432_, v___x_436_);
v___x_438_ = lean_box(v___x_419_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v___x_437_);
lean_ctor_set(v___x_434_, 0, v___x_438_);
v___x_440_ = v___x_434_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v___x_437_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
v___y_415_ = v___x_440_;
goto v___jp_414_;
}
}
}
}
else
{
return v_b_413_;
}
v___jp_414_:
{
size_t v___x_416_; size_t v___x_417_; 
v___x_416_ = ((size_t)1ULL);
v___x_417_ = lean_usize_add(v_i_411_, v___x_416_);
v_i_411_ = v___x_417_;
v_b_413_ = v___y_415_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2___boxed(lean_object* v___x_444_, lean_object* v_as_445_, lean_object* v_i_446_, lean_object* v_stop_447_, lean_object* v_b_448_){
_start:
{
uint8_t v___x_7449__boxed_449_; size_t v_i_boxed_450_; size_t v_stop_boxed_451_; lean_object* v_res_452_; 
v___x_7449__boxed_449_ = lean_unbox(v___x_444_);
v_i_boxed_450_ = lean_unbox_usize(v_i_446_);
lean_dec(v_i_446_);
v_stop_boxed_451_ = lean_unbox_usize(v_stop_447_);
lean_dec(v_stop_447_);
v_res_452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(v___x_7449__boxed_449_, v_as_445_, v_i_boxed_450_, v_stop_boxed_451_, v_b_448_);
lean_dec_ref(v_as_445_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(lean_object* v_as_492_, size_t v_sz_493_, size_t v_i_494_, lean_object* v_b_495_){
_start:
{
lean_object* v_a_498_; uint8_t v___x_502_; 
v___x_502_ = lean_usize_dec_lt(v_i_494_, v_sz_493_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
v___x_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_503_, 0, v_b_495_);
return v___x_503_;
}
else
{
lean_object* v_fst_504_; lean_object* v_snd_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_651_; 
v_fst_504_ = lean_ctor_get(v_b_495_, 0);
v_snd_505_ = lean_ctor_get(v_b_495_, 1);
v_isSharedCheck_651_ = !lean_is_exclusive(v_b_495_);
if (v_isSharedCheck_651_ == 0)
{
v___x_507_ = v_b_495_;
v_isShared_508_ = v_isSharedCheck_651_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_snd_505_);
lean_inc(v_fst_504_);
lean_dec(v_b_495_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_651_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___y_510_; lean_object* v_a_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v_a_533_ = lean_array_uget_borrowed(v_as_492_, v_i_494_);
v___x_534_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1));
lean_inc(v_a_533_);
v___x_535_ = l_Lean_Syntax_isOfKind(v_a_533_, v___x_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
lean_del_object(v___x_507_);
v___x_536_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v___x_537_; 
lean_dec_ref_known(v___x_536_, 1);
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v_fst_504_);
lean_ctor_set(v___x_537_, 1, v_snd_505_);
v_a_498_ = v___x_537_;
goto v___jp_497_;
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_538_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_536_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_536_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
else
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = lean_unsigned_to_nat(1u);
v___x_548_ = l_Lean_Syntax_getArg(v_a_533_, v___x_546_);
v___x_549_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__3));
lean_inc(v___x_548_);
v___x_550_ = l_Lean_Syntax_isOfKind(v___x_548_, v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; uint8_t v___x_552_; 
lean_del_object(v___x_507_);
v___x_551_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__5));
lean_inc(v___x_548_);
v___x_552_ = l_Lean_Syntax_isOfKind(v___x_548_, v___x_551_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; 
lean_dec(v___x_548_);
v___x_553_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v___x_554_; 
lean_dec_ref_known(v___x_553_, 1);
v___x_554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_554_, 0, v_fst_504_);
lean_ctor_set(v___x_554_, 1, v_snd_505_);
v_a_498_ = v___x_554_;
goto v___jp_497_;
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_555_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_553_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_553_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_563_ = l_Lean_Syntax_getArg(v___x_548_, v___x_547_);
v___x_564_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__7));
lean_inc(v___x_563_);
v___x_565_ = l_Lean_Syntax_isOfKind(v___x_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
lean_dec(v___x_563_);
lean_dec(v___x_548_);
v___x_566_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v___x_567_; 
lean_dec_ref_known(v___x_566_, 1);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v_fst_504_);
lean_ctor_set(v___x_567_, 1, v_snd_505_);
v_a_498_ = v___x_567_;
goto v___jp_497_;
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_568_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_566_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_566_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
else
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v_fst_579_; uint8_t v_snd_580_; lean_object* v_____x_586_; lean_object* v___x_590_; lean_object* v___x_591_; uint8_t v___x_592_; 
v___x_576_ = lean_unsigned_to_nat(3u);
v___x_577_ = l_Lean_Syntax_getArg(v___x_548_, v___x_576_);
lean_dec(v___x_548_);
v___x_590_ = l_Lean_Syntax_getArg(v___x_563_, v___x_546_);
v___x_591_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__9));
lean_inc(v___x_590_);
v___x_592_ = l_Lean_Syntax_isOfKind(v___x_590_, v___x_591_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__11));
v___x_594_ = l_Lean_Syntax_isOfKind(v___x_590_, v___x_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref_known(v___x_595_, 1);
v_____x_586_ = v_a_596_;
goto v___jp_585_;
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec(v___x_577_);
lean_dec(v___x_563_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_597_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_595_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_595_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = lean_box(0);
v___x_606_ = 1;
v_fst_579_ = v___x_605_;
v_snd_580_ = v___x_606_;
goto v___jp_578_;
}
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_607_ = l_Lean_Syntax_getArg(v___x_590_, v___x_546_);
v___x_608_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13));
lean_inc(v___x_607_);
v___x_609_ = l_Lean_Syntax_isOfKind(v___x_607_, v___x_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
lean_dec(v___x_607_);
lean_dec(v___x_590_);
v___x_610_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v_a_611_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v___x_610_, 1);
v_____x_586_ = v_a_611_;
goto v___jp_585_;
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
lean_dec(v___x_577_);
lean_dec(v___x_563_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_612_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_610_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_610_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
else
{
lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_620_ = l_Lean_Syntax_getArg(v___x_590_, v___x_547_);
lean_dec(v___x_590_);
lean_inc(v___x_620_);
v___x_621_ = l_Lean_Syntax_matchesNull(v___x_620_, v___x_546_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_622_ = lean_unsigned_to_nat(2u);
v___x_623_ = l_Lean_Syntax_matchesNull(v___x_620_, v___x_622_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; 
lean_dec(v___x_607_);
v___x_624_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_625_);
lean_dec_ref_known(v___x_624_, 1);
v_____x_586_ = v_a_625_;
goto v___jp_585_;
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v___x_577_);
lean_dec(v___x_563_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_626_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_624_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_624_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_634_ = l_Lean_TSyntax_getId(v___x_607_);
lean_dec(v___x_607_);
v___x_635_ = l_Lean_Name_eraseMacroScopes(v___x_634_);
lean_dec(v___x_634_);
v___x_636_ = 1;
v_fst_579_ = v___x_635_;
v_snd_580_ = v___x_636_;
goto v___jp_578_;
}
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
lean_dec(v___x_620_);
v___x_637_ = l_Lean_TSyntax_getId(v___x_607_);
lean_dec(v___x_607_);
v___x_638_ = l_Lean_Name_eraseMacroScopes(v___x_637_);
lean_dec(v___x_637_);
v___x_639_ = 0;
v_fst_579_ = v___x_638_;
v_snd_580_ = v___x_639_;
goto v___jp_578_;
}
}
}
v___jp_578_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_581_ = lean_box(0);
v___x_582_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_582_, 0, v___x_563_);
lean_ctor_set(v___x_582_, 1, v_fst_579_);
lean_ctor_set(v___x_582_, 2, v___x_577_);
lean_ctor_set(v___x_582_, 3, v___x_581_);
lean_ctor_set(v___x_582_, 4, v___x_581_);
lean_ctor_set_uint8(v___x_582_, sizeof(void*)*5, v_snd_580_);
v___x_583_ = lean_array_push(v_snd_505_, v___x_582_);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v_fst_504_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v_a_498_ = v___x_584_;
goto v___jp_497_;
}
v___jp_585_:
{
lean_object* v_fst_587_; lean_object* v_snd_588_; uint8_t v___x_589_; 
v_fst_587_ = lean_ctor_get(v_____x_586_, 0);
lean_inc(v_fst_587_);
v_snd_588_ = lean_ctor_get(v_____x_586_, 1);
lean_inc(v_snd_588_);
lean_dec_ref(v_____x_586_);
v___x_589_ = lean_unbox(v_snd_588_);
lean_dec(v_snd_588_);
v_fst_579_ = v_fst_587_;
v_snd_580_ = v___x_589_;
goto v___jp_578_;
}
}
}
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_640_ = l_Lean_Syntax_getArg(v___x_548_, v___x_547_);
lean_dec(v___x_548_);
v___x_641_ = l_Lean_Syntax_getArgs(v___x_640_);
lean_dec(v___x_640_);
v___x_642_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___x_643_ = lean_array_get_size(v___x_641_);
v___x_644_ = lean_nat_dec_lt(v___x_546_, v___x_643_);
if (v___x_644_ == 0)
{
lean_dec_ref(v___x_641_);
v___y_510_ = v___x_642_;
goto v___jp_509_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; size_t v___x_647_; size_t v___x_648_; lean_object* v___x_649_; lean_object* v_snd_650_; 
v___x_645_ = lean_box(v___x_644_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
lean_ctor_set(v___x_646_, 1, v___x_642_);
v___x_647_ = ((size_t)0ULL);
v___x_648_ = lean_usize_of_nat(v___x_643_);
v___x_649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(v___x_550_, v___x_641_, v___x_647_, v___x_648_, v___x_646_);
lean_dec_ref(v___x_641_);
v_snd_650_ = lean_ctor_get(v___x_649_, 1);
lean_inc(v_snd_650_);
lean_dec_ref(v___x_649_);
v___y_510_ = v_snd_650_;
goto v___jp_509_;
}
}
}
v___jp_509_:
{
size_t v_sz_511_; size_t v___x_512_; lean_object* v___x_513_; 
v_sz_511_ = lean_array_size(v___y_510_);
v___x_512_ = ((size_t)0ULL);
v___x_513_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__0(v_sz_511_, v___x_512_, v___y_510_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v___x_514_; 
v___x_514_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v___x_516_; 
lean_dec_ref_known(v___x_514_, 1);
if (v_isShared_508_ == 0)
{
v___x_516_ = v___x_507_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_fst_504_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_snd_505_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
v_a_498_ = v___x_516_;
goto v___jp_497_;
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_del_object(v___x_507_);
lean_dec(v_snd_505_);
lean_dec(v_fst_504_);
v_a_518_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_514_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_514_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v_val_526_; size_t v_sz_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_531_; 
v_val_526_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_val_526_);
lean_dec_ref_known(v___x_513_, 1);
v_sz_527_ = lean_array_size(v_val_526_);
v___x_528_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__1(v_sz_527_, v___x_512_, v_val_526_);
v___x_529_ = l_Array_append___redArg(v_fst_504_, v___x_528_);
lean_dec_ref(v___x_528_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 0, v___x_529_);
v___x_531_ = v___x_507_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_snd_505_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
v_a_498_ = v___x_531_;
goto v___jp_497_;
}
}
}
}
}
v___jp_497_:
{
size_t v___x_499_; size_t v___x_500_; 
v___x_499_ = ((size_t)1ULL);
v___x_500_ = lean_usize_add(v_i_494_, v___x_499_);
v_i_494_ = v___x_500_;
v_b_495_ = v_a_498_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___boxed(lean_object* v_as_652_, lean_object* v_sz_653_, lean_object* v_i_654_, lean_object* v_b_655_, lean_object* v___y_656_){
_start:
{
size_t v_sz_boxed_657_; size_t v_i_boxed_658_; lean_object* v_res_659_; 
v_sz_boxed_657_ = lean_unbox_usize(v_sz_653_);
lean_dec(v_sz_653_);
v_i_boxed_658_ = lean_unbox_usize(v_i_654_);
lean_dec(v_i_654_);
v_res_659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(v_as_652_, v_sz_boxed_657_, v_i_boxed_658_, v_b_655_);
lean_dec_ref(v_as_652_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(size_t v_sz_660_, size_t v_i_661_, lean_object* v_bs_662_){
_start:
{
uint8_t v___x_663_; 
v___x_663_ = lean_usize_dec_lt(v_i_661_, v_sz_660_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
v___x_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_664_, 0, v_bs_662_);
return v___x_664_;
}
else
{
lean_object* v_v_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v_v_665_ = lean_array_uget(v_bs_662_, v_i_661_);
v___x_666_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__1));
lean_inc(v_v_665_);
v___x_667_ = l_Lean_Syntax_isOfKind(v_v_665_, v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; 
lean_dec(v_v_665_);
lean_dec_ref(v_bs_662_);
v___x_668_ = lean_box(0);
return v___x_668_;
}
else
{
lean_object* v___x_669_; lean_object* v_bs_x27_670_; size_t v___x_671_; size_t v___x_672_; lean_object* v___x_673_; 
v___x_669_ = lean_unsigned_to_nat(0u);
v_bs_x27_670_ = lean_array_uset(v_bs_662_, v_i_661_, v___x_669_);
v___x_671_ = ((size_t)1ULL);
v___x_672_ = lean_usize_add(v_i_661_, v___x_671_);
v___x_673_ = lean_array_uset(v_bs_x27_670_, v_i_661_, v_v_665_);
v_i_661_ = v___x_672_;
v_bs_662_ = v___x_673_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3___boxed(lean_object* v_sz_675_, lean_object* v_i_676_, lean_object* v_bs_677_){
_start:
{
size_t v_sz_boxed_678_; size_t v_i_boxed_679_; lean_object* v_res_680_; 
v_sz_boxed_678_ = lean_unbox_usize(v_sz_675_);
lean_dec(v_sz_675_);
v_i_boxed_679_ = lean_unbox_usize(v_i_676_);
lean_dec(v_i_676_);
v_res_680_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(v_sz_boxed_678_, v_i_boxed_679_, v_bs_677_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView(lean_object* v_entries_x3f_691_, lean_object* v_a_692_, lean_object* v_a_693_){
_start:
{
lean_object* v_omitFields_696_; lean_object* v_handlers_697_; lean_object* v___x_700_; lean_object* v_omitFields_701_; lean_object* v___y_703_; 
v___x_700_ = lean_unsigned_to_nat(0u);
v_omitFields_701_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__0));
if (lean_obj_tag(v_entries_x3f_691_) == 1)
{
lean_object* v_val_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v_val_731_ = lean_ctor_get(v_entries_x3f_691_, 0);
lean_inc_n(v_val_731_, 2);
lean_dec_ref_known(v_entries_x3f_691_, 1);
v___x_732_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
v___x_733_ = l_Lean_Syntax_isOfKind(v_val_731_, v___x_732_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_val_731_);
v___x_734_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
v_a_735_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_734_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_734_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
else
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_743_ = lean_unsigned_to_nat(1u);
v___x_744_ = l_Lean_Syntax_getArg(v_val_731_, v___x_743_);
lean_dec(v_val_731_);
v___x_745_ = l_Lean_Syntax_getArgs(v___x_744_);
lean_dec(v___x_744_);
v___x_746_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___x_747_ = lean_array_get_size(v___x_745_);
v___x_748_ = lean_nat_dec_lt(v___x_700_, v___x_747_);
if (v___x_748_ == 0)
{
lean_dec_ref(v___x_745_);
v___y_703_ = v___x_746_;
goto v___jp_702_;
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; size_t v___x_751_; size_t v___x_752_; lean_object* v___x_753_; lean_object* v_snd_754_; 
v___x_749_ = lean_box(v___x_748_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v___x_746_);
v___x_751_ = ((size_t)0ULL);
v___x_752_ = lean_usize_of_nat(v___x_747_);
v___x_753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__2(v___x_733_, v___x_745_, v___x_751_, v___x_752_, v___x_750_);
lean_dec_ref(v___x_745_);
v_snd_754_ = lean_ctor_get(v___x_753_, 1);
lean_inc(v_snd_754_);
lean_dec_ref(v___x_753_);
v___y_703_ = v_snd_754_;
goto v___jp_702_;
}
}
}
else
{
lean_dec(v_entries_x3f_691_);
v_omitFields_696_ = v_omitFields_701_;
v_handlers_697_ = v_omitFields_701_;
goto v___jp_695_;
}
v___jp_695_:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v_omitFields_696_);
lean_ctor_set(v___x_698_, 1, v_handlers_697_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
v___jp_702_:
{
size_t v_sz_704_; size_t v___x_705_; lean_object* v___x_706_; 
v_sz_704_ = lean_array_size(v___y_703_);
v___x_705_ = ((size_t)0ULL);
v___x_706_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__3(v_sz_704_, v___x_705_, v___y_703_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v___x_707_; lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
v___x_707_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
v_a_708_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_707_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_707_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
else
{
lean_object* v_val_716_; lean_object* v___x_717_; size_t v_sz_718_; lean_object* v___x_719_; 
v_val_716_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_val_716_);
lean_dec_ref_known(v___x_706_, 1);
v___x_717_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__1));
v_sz_718_ = lean_array_size(v_val_716_);
v___x_719_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(v_val_716_, v_sz_718_, v___x_705_, v___x_717_);
lean_dec(v_val_716_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v_fst_721_; lean_object* v_snd_722_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_719_, 1);
v_fst_721_ = lean_ctor_get(v_a_720_, 0);
lean_inc(v_fst_721_);
v_snd_722_ = lean_ctor_get(v_a_720_, 1);
lean_inc(v_snd_722_);
lean_dec(v_a_720_);
v_omitFields_696_ = v_fst_721_;
v_handlers_697_ = v_snd_722_;
goto v___jp_695_;
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
v_a_723_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_719_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_mkEvalConfigItemView___boxed(lean_object* v_entries_x3f_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_Elab_ConfigEval_mkEvalConfigItemView(v_entries_x3f_755_, v_a_756_, v_a_757_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4(lean_object* v_as_760_, size_t v_sz_761_, size_t v_i_762_, lean_object* v_b_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg(v_as_760_, v_sz_761_, v_i_762_, v_b_763_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___boxed(lean_object* v_as_768_, lean_object* v_sz_769_, lean_object* v_i_770_, lean_object* v_b_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
size_t v_sz_boxed_775_; size_t v_i_boxed_776_; lean_object* v_res_777_; 
v_sz_boxed_775_ = lean_unbox_usize(v_sz_769_);
lean_dec(v_sz_769_);
v_i_boxed_776_ = lean_unbox_usize(v_i_770_);
lean_dec(v_i_770_);
v_res_777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4(v_as_768_, v_sz_boxed_775_, v_i_boxed_776_, v_b_771_, v___y_772_, v___y_773_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec_ref(v_as_768_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd(lean_object* v_x_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v_entries_x3f_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
lean_inc(v_x_791_);
v___x_819_ = l_Lean_Syntax_isOfKind(v_x_791_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; 
lean_dec(v_x_791_);
v___x_820_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_820_;
}
else
{
lean_object* v___x_821_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v_vis_x3f_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v_doc_x3f_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___x_869_; uint8_t v___x_870_; 
v___x_821_ = lean_unsigned_to_nat(0u);
v___x_869_ = l_Lean_Syntax_getArg(v_x_791_, v___x_821_);
v___x_870_ = l_Lean_Syntax_isNone(v___x_869_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_871_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_869_);
v___x_872_ = l_Lean_Syntax_matchesNull(v___x_869_, v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; 
lean_dec(v___x_869_);
lean_dec(v_x_791_);
v___x_873_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_873_;
}
else
{
lean_object* v_doc_x3f_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v_doc_x3f_874_ = l_Lean_Syntax_getArg(v___x_869_, v___x_821_);
lean_dec(v___x_869_);
v___x_875_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_874_);
v___x_876_ = l_Lean_Syntax_isOfKind(v_doc_x3f_874_, v___x_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; 
lean_dec(v_doc_x3f_874_);
lean_dec(v_x_791_);
v___x_877_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_877_;
}
else
{
lean_object* v___x_878_; 
v___x_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_878_, 0, v_doc_x3f_874_);
v_doc_x3f_858_ = v___x_878_;
v___y_859_ = v_a_792_;
v___y_860_ = v_a_793_;
goto v___jp_857_;
}
}
}
else
{
lean_object* v___x_879_; 
lean_dec(v___x_869_);
v___x_879_ = lean_box(0);
v_doc_x3f_858_ = v___x_879_;
v___y_859_ = v_a_792_;
v___y_860_ = v_a_793_;
goto v___jp_857_;
}
v___jp_822_:
{
lean_object* v___x_828_; lean_object* v_kind_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_828_ = lean_unsigned_to_nat(2u);
v_kind_829_ = l_Lean_Syntax_getArg(v_x_791_, v___x_828_);
v___x_830_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
lean_inc(v_kind_829_);
v___x_831_ = l_Lean_Syntax_isOfKind(v_kind_829_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; 
lean_dec(v_kind_829_);
lean_dec(v_vis_x3f_825_);
lean_dec(v___y_823_);
lean_dec(v_x_791_);
v___x_832_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_832_;
}
else
{
lean_object* v___x_833_; lean_object* v_fn_834_; lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_833_ = lean_unsigned_to_nat(4u);
v_fn_834_ = l_Lean_Syntax_getArg(v_x_791_, v___x_833_);
v___x_835_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13));
lean_inc(v_fn_834_);
v___x_836_ = l_Lean_Syntax_isOfKind(v_fn_834_, v___x_835_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; 
lean_dec(v_fn_834_);
lean_dec(v_kind_829_);
lean_dec(v_vis_x3f_825_);
lean_dec(v___y_823_);
lean_dec(v_x_791_);
v___x_837_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_837_;
}
else
{
lean_object* v___x_838_; lean_object* v_struct_839_; uint8_t v___x_840_; 
v___x_838_ = lean_unsigned_to_nat(7u);
v_struct_839_ = l_Lean_Syntax_getArg(v_x_791_, v___x_838_);
lean_inc(v_struct_839_);
v___x_840_ = l_Lean_Syntax_isOfKind(v_struct_839_, v___x_835_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; 
lean_dec(v_struct_839_);
lean_dec(v_fn_834_);
lean_dec(v_kind_829_);
lean_dec(v_vis_x3f_825_);
lean_dec(v___y_823_);
lean_dec(v_x_791_);
v___x_841_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_841_;
}
else
{
lean_object* v___x_842_; lean_object* v_tk_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_842_ = lean_unsigned_to_nat(3u);
v_tk_843_ = l_Lean_Syntax_getArg(v_x_791_, v___x_842_);
v___x_844_ = lean_unsigned_to_nat(5u);
v___x_845_ = l_Lean_Syntax_getArg(v_x_791_, v___x_844_);
v___x_846_ = lean_unsigned_to_nat(8u);
v___x_847_ = l_Lean_Syntax_getArg(v_x_791_, v___x_846_);
lean_dec(v_x_791_);
v___x_848_ = l_Lean_Syntax_isNone(v___x_847_);
if (v___x_848_ == 0)
{
uint8_t v___x_849_; 
lean_inc(v___x_847_);
v___x_849_ = l_Lean_Syntax_matchesNull(v___x_847_, v___y_824_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
lean_dec(v___x_847_);
lean_dec(v___x_845_);
lean_dec(v_tk_843_);
lean_dec(v_struct_839_);
lean_dec(v_fn_834_);
lean_dec(v_kind_829_);
lean_dec(v_vis_x3f_825_);
lean_dec(v___y_823_);
v___x_850_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_850_;
}
else
{
lean_object* v_entries_x3f_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v_entries_x3f_851_ = l_Lean_Syntax_getArg(v___x_847_, v___x_821_);
lean_dec(v___x_847_);
v___x_852_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_851_);
v___x_853_ = l_Lean_Syntax_isOfKind(v_entries_x3f_851_, v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; 
lean_dec(v_entries_x3f_851_);
lean_dec(v___x_845_);
lean_dec(v_tk_843_);
lean_dec(v_struct_839_);
lean_dec(v_fn_834_);
lean_dec(v_kind_829_);
lean_dec(v_vis_x3f_825_);
lean_dec(v___y_823_);
v___x_854_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_854_;
}
else
{
lean_object* v___x_855_; 
v___x_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_855_, 0, v_entries_x3f_851_);
v___y_796_ = v_vis_x3f_825_;
v___y_797_ = v_struct_839_;
v___y_798_ = v_tk_843_;
v___y_799_ = v___y_823_;
v___y_800_ = v_kind_829_;
v___y_801_ = v_fn_834_;
v___y_802_ = v___x_845_;
v_entries_x3f_803_ = v___x_855_;
v___y_804_ = v___y_826_;
v___y_805_ = v___y_827_;
goto v___jp_795_;
}
}
}
else
{
lean_object* v___x_856_; 
lean_dec(v___x_847_);
v___x_856_ = lean_box(0);
v___y_796_ = v_vis_x3f_825_;
v___y_797_ = v_struct_839_;
v___y_798_ = v_tk_843_;
v___y_799_ = v___y_823_;
v___y_800_ = v_kind_829_;
v___y_801_ = v_fn_834_;
v___y_802_ = v___x_845_;
v_entries_x3f_803_ = v___x_856_;
v___y_804_ = v___y_826_;
v___y_805_ = v___y_827_;
goto v___jp_795_;
}
}
}
}
}
v___jp_857_:
{
lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_861_ = lean_unsigned_to_nat(1u);
v___x_862_ = l_Lean_Syntax_getArg(v_x_791_, v___x_861_);
v___x_863_ = l_Lean_Syntax_isNone(v___x_862_);
if (v___x_863_ == 0)
{
uint8_t v___x_864_; 
lean_inc(v___x_862_);
v___x_864_ = l_Lean_Syntax_matchesNull(v___x_862_, v___x_861_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; 
lean_dec(v___x_862_);
lean_dec(v_doc_x3f_858_);
lean_dec(v_x_791_);
v___x_865_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_elabEnsureEvalTermInstance_spec__0___redArg();
return v___x_865_;
}
else
{
lean_object* v_vis_x3f_866_; lean_object* v___x_867_; 
v_vis_x3f_866_ = l_Lean_Syntax_getArg(v___x_862_, v___x_821_);
lean_dec(v___x_862_);
v___x_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_867_, 0, v_vis_x3f_866_);
v___y_823_ = v_doc_x3f_858_;
v___y_824_ = v___x_861_;
v_vis_x3f_825_ = v___x_867_;
v___y_826_ = v___y_859_;
v___y_827_ = v___y_860_;
goto v___jp_822_;
}
}
else
{
lean_object* v___x_868_; 
lean_dec(v___x_862_);
v___x_868_ = lean_box(0);
v___y_823_ = v_doc_x3f_858_;
v___y_824_ = v___x_861_;
v_vis_x3f_825_ = v___x_868_;
v___y_826_ = v___y_859_;
v___y_827_ = v___y_860_;
goto v___jp_822_;
}
}
}
v___jp_795_:
{
lean_object* v_binders_806_; lean_object* v___x_807_; 
v_binders_806_ = l_Lean_Syntax_getArgs(v___y_802_);
lean_dec(v___y_802_);
v___x_807_ = l_Lean_Elab_ConfigEval_mkEvalConfigItemView(v_entries_x3f_803_, v___y_804_, v___y_805_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_809_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_807_, 1);
v___x_809_ = l_Lean_Elab_ConfigEval_defEvalConfigItem(v___y_799_, v___y_796_, v___y_800_, v___y_798_, v___y_797_, v___y_801_, v_binders_806_, v_a_808_, v___y_804_, v___y_805_);
return v___x_809_;
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_dec_ref(v_binders_806_);
lean_dec(v___y_801_);
lean_dec(v___y_800_);
lean_dec(v___y_799_);
lean_dec(v___y_798_);
lean_dec(v___y_797_);
lean_dec(v___y_796_);
v_a_810_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_807_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_807_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___boxed(lean_object* v_x_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd(v_x_880_, v_a_881_, v_a_882_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1(){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_892_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_893_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
v___x_894_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___closed__1));
v___x_895_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___boxed), 4, 0);
v___x_896_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_892_, v___x_893_, v___x_894_, v___x_895_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1___boxed(lean_object* v_a_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1();
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd(lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_904_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_905_ = lean_unsigned_to_nat(2u);
v___x_906_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_904_, v___x_905_, v_a_900_, v_a_901_, v_a_902_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___boxed(lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd(v_a_907_, v_a_908_, v_a_909_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
return v_res_911_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___boxed), 4, 0);
v___x_913_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_913_, 0, v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1(){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
v___x_916_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___closed__0);
v___x_917_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_915_, v___x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1___boxed(lean_object* v_a_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1();
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(size_t v_sz_920_, size_t v_i_921_, lean_object* v_bs_922_){
_start:
{
uint8_t v___x_923_; 
v___x_923_ = lean_usize_dec_lt(v_i_921_, v_sz_920_);
if (v___x_923_ == 0)
{
return v_bs_922_;
}
else
{
lean_object* v_v_924_; lean_object* v___x_925_; lean_object* v_bs_x27_926_; size_t v___x_927_; size_t v___x_928_; lean_object* v___x_929_; 
v_v_924_ = lean_array_uget(v_bs_922_, v_i_921_);
v___x_925_ = lean_unsigned_to_nat(0u);
v_bs_x27_926_ = lean_array_uset(v_bs_922_, v_i_921_, v___x_925_);
v___x_927_ = ((size_t)1ULL);
v___x_928_ = lean_usize_add(v_i_921_, v___x_927_);
v___x_929_ = lean_array_uset(v_bs_x27_926_, v_i_921_, v_v_924_);
v_i_921_ = v___x_928_;
v_bs_922_ = v___x_929_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0___boxed(lean_object* v_sz_931_, lean_object* v_i_932_, lean_object* v_bs_933_){
_start:
{
size_t v_sz_boxed_934_; size_t v_i_boxed_935_; lean_object* v_res_936_; 
v_sz_boxed_934_ = lean_unbox_usize(v_sz_931_);
lean_dec(v_sz_931_);
v_i_boxed_935_ = lean_unbox_usize(v_i_932_);
lean_dec(v_i_932_);
v_res_936_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_boxed_934_, v_i_boxed_935_, v_bs_933_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(lean_object* v_stx_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1));
lean_inc(v_stx_962_);
v___x_966_ = l_Lean_Syntax_isOfKind(v_stx_962_, v___x_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_967_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__3));
lean_inc(v_stx_962_);
v___x_968_ = l_Lean_Syntax_isOfKind(v_stx_962_, v___x_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; uint8_t v___x_970_; 
v___x_969_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__5));
lean_inc(v_stx_962_);
v___x_970_ = l_Lean_Syntax_isOfKind(v_stx_962_, v___x_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_971_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__7));
lean_inc(v_stx_962_);
v___x_972_ = l_Lean_Syntax_isOfKind(v_stx_962_, v___x_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_973_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_974_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_962_, v___x_973_, v_a_963_, v_a_964_);
lean_dec(v_stx_962_);
return v___x_974_;
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_975_ = lean_unsigned_to_nat(0u);
v___x_976_ = lean_unsigned_to_nat(1u);
v___x_977_ = l_Lean_Syntax_getArg(v_stx_962_, v___x_976_);
v___x_978_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_977_);
v___x_979_ = l_Lean_Syntax_matchesNull(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
uint8_t v___x_980_; 
v___x_980_ = l_Lean_Syntax_matchesNull(v___x_977_, v___x_975_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_982_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_962_, v___x_981_, v_a_963_, v_a_964_);
lean_dec(v_stx_962_);
return v___x_982_;
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_983_ = l_Lean_mkHole(v_stx_962_, v___x_979_);
lean_dec(v_stx_962_);
v___x_984_ = lean_mk_empty_array_with_capacity(v___x_976_);
v___x_985_ = lean_array_push(v___x_984_, v___x_983_);
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v_a_964_);
return v___x_986_;
}
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
v___x_987_ = l_Lean_Syntax_getArg(v___x_977_, v___x_975_);
lean_dec(v___x_977_);
v___x_988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13));
lean_inc(v___x_987_);
v___x_989_ = l_Lean_Syntax_isOfKind(v___x_987_, v___x_988_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; lean_object* v___x_991_; 
lean_dec(v___x_987_);
v___x_990_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_991_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_962_, v___x_990_, v_a_963_, v_a_964_);
lean_dec(v_stx_962_);
return v___x_991_;
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec(v_stx_962_);
v___x_992_ = lean_mk_empty_array_with_capacity(v___x_976_);
v___x_993_ = lean_array_push(v___x_992_, v___x_987_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v_a_964_);
return v___x_994_;
}
}
}
}
else
{
lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_995_ = lean_unsigned_to_nat(2u);
v___x_996_ = l_Lean_Syntax_getArg(v_stx_962_, v___x_995_);
v___x_997_ = l_Lean_Syntax_matchesNull(v___x_996_, v___x_995_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_999_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_962_, v___x_998_, v_a_963_, v_a_964_);
lean_dec(v_stx_962_);
return v___x_999_;
}
else
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v_ids_1002_; size_t v_sz_1003_; size_t v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1000_ = lean_unsigned_to_nat(1u);
v___x_1001_ = l_Lean_Syntax_getArg(v_stx_962_, v___x_1000_);
lean_dec(v_stx_962_);
v_ids_1002_ = l_Lean_Syntax_getArgs(v___x_1001_);
lean_dec(v___x_1001_);
v_sz_1003_ = lean_array_size(v_ids_1002_);
v___x_1004_ = ((size_t)0ULL);
v___x_1005_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_1003_, v___x_1004_, v_ids_1002_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
lean_ctor_set(v___x_1006_, 1, v_a_964_);
return v___x_1006_;
}
}
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___y_1010_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1007_ = lean_unsigned_to_nat(1u);
v___x_1008_ = l_Lean_Syntax_getArg(v_stx_962_, v___x_1007_);
v___x_1016_ = lean_unsigned_to_nat(2u);
v___x_1017_ = l_Lean_Syntax_getArg(v_stx_962_, v___x_1016_);
v___x_1018_ = l_Lean_Syntax_isNone(v___x_1017_);
if (v___x_1018_ == 0)
{
uint8_t v___x_1019_; 
v___x_1019_ = l_Lean_Syntax_matchesNull(v___x_1017_, v___x_1016_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
lean_dec(v___x_1008_);
v___x_1020_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1021_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_962_, v___x_1020_, v_a_963_, v_a_964_);
lean_dec(v_stx_962_);
return v___x_1021_;
}
else
{
lean_dec(v_stx_962_);
v___y_1010_ = v_a_964_;
goto v___jp_1009_;
}
}
else
{
lean_dec(v___x_1017_);
lean_dec(v_stx_962_);
v___y_1010_ = v_a_964_;
goto v___jp_1009_;
}
v___jp_1009_:
{
lean_object* v_ids_1011_; size_t v_sz_1012_; size_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_ids_1011_ = l_Lean_Syntax_getArgs(v___x_1008_);
lean_dec(v___x_1008_);
v_sz_1012_ = lean_array_size(v_ids_1011_);
v___x_1013_ = ((size_t)0ULL);
v___x_1014_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_1012_, v___x_1013_, v_ids_1011_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
lean_ctor_set(v___x_1015_, 1, v___y_1010_);
return v___x_1015_;
}
}
}
else
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___y_1025_; lean_object* v___x_1031_; lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1022_ = lean_unsigned_to_nat(1u);
v___x_1023_ = l_Lean_Syntax_getArg(v_stx_962_, v___x_1022_);
v___x_1031_ = lean_unsigned_to_nat(2u);
v___x_1032_ = l_Lean_Syntax_getArg(v_stx_962_, v___x_1031_);
v___x_1033_ = l_Lean_Syntax_isNone(v___x_1032_);
if (v___x_1033_ == 0)
{
uint8_t v___x_1034_; 
v___x_1034_ = l_Lean_Syntax_matchesNull(v___x_1032_, v___x_1031_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
lean_dec(v___x_1023_);
v___x_1035_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__8));
v___x_1036_ = l_Lean_Macro_throwErrorAt___redArg(v_stx_962_, v___x_1035_, v_a_963_, v_a_964_);
lean_dec(v_stx_962_);
return v___x_1036_;
}
else
{
lean_dec(v_stx_962_);
v___y_1025_ = v_a_964_;
goto v___jp_1024_;
}
}
else
{
lean_dec(v___x_1032_);
lean_dec(v_stx_962_);
v___y_1025_ = v_a_964_;
goto v___jp_1024_;
}
v___jp_1024_:
{
lean_object* v_ids_1026_; size_t v_sz_1027_; size_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v_ids_1026_ = l_Lean_Syntax_getArgs(v___x_1023_);
lean_dec(v___x_1023_);
v_sz_1027_ = lean_array_size(v_ids_1026_);
v___x_1028_ = ((size_t)0ULL);
v___x_1029_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs_spec__0(v_sz_1027_, v___x_1028_, v_ids_1026_);
v___x_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1029_);
lean_ctor_set(v___x_1030_, 1, v___y_1025_);
return v___x_1030_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___boxed(lean_object* v_stx_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(v_stx_1037_, v_a_1038_, v_a_1039_);
lean_dec_ref(v_a_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(lean_object* v_as_1041_, size_t v_i_1042_, size_t v_stop_1043_, lean_object* v_b_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
uint8_t v___x_1047_; 
v___x_1047_ = lean_usize_dec_eq(v_i_1042_, v_stop_1043_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_array_uget_borrowed(v_as_1041_, v_i_1042_);
lean_inc(v___x_1048_);
v___x_1049_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs(v___x_1048_, v___y_1045_, v___y_1046_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v_a_1051_; lean_object* v___x_1052_; size_t v___x_1053_; size_t v___x_1054_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
v_a_1051_ = lean_ctor_get(v___x_1049_, 1);
lean_inc(v_a_1051_);
lean_dec_ref_known(v___x_1049_, 2);
v___x_1052_ = l_Array_append___redArg(v_b_1044_, v_a_1050_);
lean_dec(v_a_1050_);
v___x_1053_ = ((size_t)1ULL);
v___x_1054_ = lean_usize_add(v_i_1042_, v___x_1053_);
v_i_1042_ = v___x_1054_;
v_b_1044_ = v___x_1052_;
v___y_1046_ = v_a_1051_;
goto _start;
}
else
{
lean_dec_ref(v_b_1044_);
return v___x_1049_;
}
}
else
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1056_, 0, v_b_1044_);
lean_ctor_set(v___x_1056_, 1, v___y_1046_);
return v___x_1056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3___boxed(lean_object* v_as_1057_, lean_object* v_i_1058_, lean_object* v_stop_1059_, lean_object* v_b_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
size_t v_i_boxed_1063_; size_t v_stop_boxed_1064_; lean_object* v_res_1065_; 
v_i_boxed_1063_ = lean_unbox_usize(v_i_1058_);
lean_dec(v_i_1058_);
v_stop_boxed_1064_ = lean_unbox_usize(v_stop_1059_);
lean_dec(v_stop_1059_);
v_res_1065_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(v_as_1057_, v_i_boxed_1063_, v_stop_boxed_1064_, v_b_1060_, v___y_1061_, v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec_ref(v_as_1057_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(size_t v_sz_1066_, size_t v_i_1067_, lean_object* v_bs_1068_){
_start:
{
uint8_t v___x_1069_; 
v___x_1069_ = lean_usize_dec_lt(v_i_1067_, v_sz_1066_);
if (v___x_1069_ == 0)
{
return v_bs_1068_;
}
else
{
lean_object* v_v_1070_; lean_object* v___x_1071_; lean_object* v_bs_x27_1072_; size_t v___x_1073_; size_t v___x_1074_; lean_object* v___x_1075_; 
v_v_1070_ = lean_array_uget(v_bs_1068_, v_i_1067_);
v___x_1071_ = lean_unsigned_to_nat(0u);
v_bs_x27_1072_ = lean_array_uset(v_bs_1068_, v_i_1067_, v___x_1071_);
v___x_1073_ = ((size_t)1ULL);
v___x_1074_ = lean_usize_add(v_i_1067_, v___x_1073_);
v___x_1075_ = lean_array_uset(v_bs_x27_1072_, v_i_1067_, v_v_1070_);
v_i_1067_ = v___x_1074_;
v_bs_1068_ = v___x_1075_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2___boxed(lean_object* v_sz_1077_, lean_object* v_i_1078_, lean_object* v_bs_1079_){
_start:
{
size_t v_sz_boxed_1080_; size_t v_i_boxed_1081_; lean_object* v_res_1082_; 
v_sz_boxed_1080_ = lean_unbox_usize(v_sz_1077_);
lean_dec(v_sz_1077_);
v_i_boxed_1081_ = lean_unbox_usize(v_i_1078_);
lean_dec(v_i_1078_);
v_res_1082_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(v_sz_boxed_1080_, v_i_boxed_1081_, v_bs_1079_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(size_t v_sz_1083_, size_t v_i_1084_, lean_object* v_bs_1085_){
_start:
{
uint8_t v___x_1086_; 
v___x_1086_ = lean_usize_dec_lt(v_i_1084_, v_sz_1083_);
if (v___x_1086_ == 0)
{
return v_bs_1085_;
}
else
{
lean_object* v_v_1087_; lean_object* v___x_1088_; lean_object* v_bs_x27_1089_; size_t v___x_1090_; size_t v___x_1091_; lean_object* v___x_1092_; 
v_v_1087_ = lean_array_uget(v_bs_1085_, v_i_1084_);
v___x_1088_ = lean_unsigned_to_nat(0u);
v_bs_x27_1089_ = lean_array_uset(v_bs_1085_, v_i_1084_, v___x_1088_);
v___x_1090_ = ((size_t)1ULL);
v___x_1091_ = lean_usize_add(v_i_1084_, v___x_1090_);
v___x_1092_ = lean_array_uset(v_bs_x27_1089_, v_i_1084_, v_v_1087_);
v_i_1084_ = v___x_1091_;
v_bs_1085_ = v___x_1092_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0___boxed(lean_object* v_sz_1094_, lean_object* v_i_1095_, lean_object* v_bs_1096_){
_start:
{
size_t v_sz_boxed_1097_; size_t v_i_boxed_1098_; lean_object* v_res_1099_; 
v_sz_boxed_1097_ = lean_unbox_usize(v_sz_1094_);
lean_dec(v_sz_1094_);
v_i_boxed_1098_ = lean_unbox_usize(v_i_1095_);
lean_dec(v_i_1095_);
v_res_1099_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(v_sz_boxed_1097_, v_i_boxed_1098_, v_bs_1096_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(size_t v_sz_1100_, size_t v_i_1101_, lean_object* v_bs_1102_){
_start:
{
uint8_t v___x_1103_; 
v___x_1103_ = lean_usize_dec_lt(v_i_1101_, v_sz_1100_);
if (v___x_1103_ == 0)
{
return v_bs_1102_;
}
else
{
lean_object* v_v_1104_; lean_object* v___x_1105_; lean_object* v_bs_x27_1106_; size_t v___x_1107_; size_t v___x_1108_; lean_object* v___x_1109_; 
v_v_1104_ = lean_array_uget(v_bs_1102_, v_i_1101_);
v___x_1105_ = lean_unsigned_to_nat(0u);
v_bs_x27_1106_ = lean_array_uset(v_bs_1102_, v_i_1101_, v___x_1105_);
v___x_1107_ = ((size_t)1ULL);
v___x_1108_ = lean_usize_add(v_i_1101_, v___x_1107_);
v___x_1109_ = lean_array_uset(v_bs_x27_1106_, v_i_1101_, v_v_1104_);
v_i_1101_ = v___x_1108_;
v_bs_1102_ = v___x_1109_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1___boxed(lean_object* v_sz_1111_, lean_object* v_i_1112_, lean_object* v_bs_1113_){
_start:
{
size_t v_sz_boxed_1114_; size_t v_i_boxed_1115_; lean_object* v_res_1116_; 
v_sz_boxed_1114_ = lean_unbox_usize(v_sz_1111_);
lean_dec(v_sz_1111_);
v_i_boxed_1115_ = lean_unbox_usize(v_i_1112_);
lean_dec(v_i_1112_);
v_res_1116_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(v_sz_boxed_1114_, v_i_boxed_1115_, v_bs_1113_);
return v_res_1116_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__6));
v___x_1126_ = l_String_toRawSubstring_x27(v___x_1125_);
return v___x_1126_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26(void){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__25));
v___x_1167_ = l_String_toRawSubstring_x27(v___x_1166_);
return v___x_1167_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54(void){
_start:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__53));
v___x_1240_ = l_String_toRawSubstring_x27(v___x_1239_);
return v___x_1240_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__56));
v___x_1244_ = l_String_toRawSubstring_x27(v___x_1243_);
return v___x_1244_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60(void){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__59));
v___x_1249_ = l_String_toRawSubstring_x27(v___x_1248_);
return v___x_1249_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74));
v___x_1281_ = l_Lean_mkIdent(v___x_1280_);
return v___x_1281_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__77));
v___x_1286_ = l_Lean_mkIdent(v___x_1285_);
return v___x_1286_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__80));
v___x_1291_ = l_Lean_mkIdent(v___x_1290_);
return v___x_1291_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85(void){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__84));
v___x_1300_ = l_String_toRawSubstring_x27(v___x_1299_);
return v___x_1300_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__92));
v___x_1320_ = l_String_toRawSubstring_x27(v___x_1319_);
return v___x_1320_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__98));
v___x_1332_ = l_String_toRawSubstring_x27(v___x_1331_);
return v___x_1332_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103(void){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1337_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__73));
v___x_1338_ = l_String_toRawSubstring_x27(v___x_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(lean_object* v_monad_1356_, lean_object* v_mkMonadAdapt_1357_, lean_object* v_logExceptionsDefault_1358_, lean_object* v_mkLogExceptionsTerm_1359_, lean_object* v_doc_x3f_1360_, lean_object* v_vis_x3f_1361_, lean_object* v_tk_1362_, lean_object* v_elabName_1363_, lean_object* v_type_1364_, lean_object* v_binders_1365_, lean_object* v_entries_x3f_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1380_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; size_t v___y_1387_; lean_object* v___y_1388_; size_t v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1392_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; size_t v___y_1594_; lean_object* v___y_1595_; lean_object* v___y_1596_; size_t v___y_1597_; lean_object* v___y_1598_; lean_object* v___y_1599_; lean_object* v___y_1600_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1625_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; size_t v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; size_t v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v_a_1682_; lean_object* v_a_1683_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v___x_1369_ = lean_unsigned_to_nat(0u);
v___x_1370_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__0));
v___x_1371_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__0));
v___x_1372_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__1));
v___x_1785_ = lean_array_get_size(v_binders_1365_);
v___x_1786_ = lean_nat_dec_lt(v___x_1369_, v___x_1785_);
if (v___x_1786_ == 0)
{
v_a_1682_ = v___x_1370_;
v_a_1683_ = v_a_1368_;
goto v___jp_1681_;
}
else
{
size_t v___x_1787_; size_t v___x_1788_; lean_object* v___x_1789_; 
v___x_1787_ = ((size_t)0ULL);
v___x_1788_ = lean_usize_of_nat(v___x_1785_);
v___x_1789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__3(v_binders_1365_, v___x_1787_, v___x_1788_, v___x_1370_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; lean_object* v_a_1791_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1790_);
v_a_1791_ = lean_ctor_get(v___x_1789_, 1);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1789_, 2);
v_a_1682_ = v_a_1790_;
v_a_1683_ = v_a_1791_;
goto v___jp_1681_;
}
else
{
lean_object* v_a_1792_; lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec(v_entries_x3f_1366_);
lean_dec_ref(v_binders_1365_);
lean_dec(v_type_1364_);
lean_dec(v_elabName_1363_);
lean_dec(v_tk_1362_);
lean_dec(v_vis_x3f_1361_);
lean_dec(v_doc_x3f_1360_);
lean_dec_ref(v_mkLogExceptionsTerm_1359_);
lean_dec(v_logExceptionsDefault_1358_);
lean_dec_ref(v_mkMonadAdapt_1357_);
lean_dec(v_monad_1356_);
v_a_1792_ = lean_ctor_get(v___x_1789_, 0);
v_a_1793_ = lean_ctor_get(v___x_1789_, 1);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1789_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_inc(v_a_1792_);
lean_dec(v___x_1789_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1792_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
v___jp_1373_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; size_t v_sz_1428_; lean_object* v___x_1429_; size_t v_sz_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
lean_inc_ref_n(v___y_1390_, 2);
v___x_1410_ = l_Array_append___redArg(v___y_1390_, v___y_1409_);
lean_dec_ref(v___y_1409_);
lean_inc_n(v___y_1378_, 18);
lean_inc_n(v___y_1393_, 77);
v___x_1411_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1411_, 0, v___y_1393_);
lean_ctor_set(v___x_1411_, 1, v___y_1378_);
lean_ctor_set(v___x_1411_, 2, v___x_1410_);
lean_inc_n(v___y_1380_, 22);
v___x_1412_ = l_Lean_Syntax_node7(v___y_1393_, v___y_1375_, v___y_1405_, v___y_1380_, v___x_1411_, v___y_1380_, v___y_1380_, v___y_1380_, v___y_1380_);
v___x_1413_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__1));
lean_inc_ref_n(v___y_1408_, 4);
v___x_1414_ = l_Lean_Name_mkStr4(v___x_1371_, v___x_1372_, v___y_1408_, v___x_1413_);
v___x_1415_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__2));
v___x_1416_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___y_1393_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__3));
v___x_1418_ = l_Lean_Name_mkStr4(v___x_1371_, v___x_1372_, v___y_1408_, v___x_1417_);
lean_inc_n(v___y_1388_, 2);
v___x_1419_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1419_, 0, v___y_1388_);
lean_ctor_set(v___x_1419_, 1, v___y_1378_);
lean_ctor_set(v___x_1419_, 2, v___x_1370_);
v___x_1420_ = lean_unsigned_to_nat(2u);
v___x_1421_ = lean_mk_empty_array_with_capacity(v___x_1420_);
v___x_1422_ = lean_array_push(v___x_1421_, v_elabName_1363_);
v___x_1423_ = lean_array_push(v___x_1422_, v___x_1419_);
v___x_1424_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1424_, 0, v___y_1388_);
lean_ctor_set(v___x_1424_, 1, v___x_1418_);
lean_ctor_set(v___x_1424_, 2, v___x_1423_);
v___x_1425_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__4));
v___x_1426_ = l_Lean_Name_mkStr4(v___x_1371_, v___x_1372_, v___y_1408_, v___x_1425_);
v___x_1427_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__1(v___y_1389_, v___y_1387_, v_binders_1365_);
v_sz_1428_ = lean_array_size(v___x_1427_);
v___x_1429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__2(v_sz_1428_, v___y_1387_, v___x_1427_);
v_sz_1430_ = lean_array_size(v___x_1429_);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(v_sz_1430_, v___y_1387_, v___x_1429_);
v___x_1432_ = l_Array_append___redArg(v___y_1390_, v___x_1431_);
lean_dec_ref(v___x_1431_);
v___x_1433_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_getBracketedBinderArgs___closed__1));
lean_inc_ref(v___y_1396_);
v___x_1434_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___y_1393_);
lean_ctor_set(v___x_1434_, 1, v___y_1396_);
v___x_1435_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___y_1404_);
v___x_1436_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__5));
v___x_1437_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___y_1393_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__7);
v___x_1439_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__9));
lean_inc_n(v___y_1392_, 5);
lean_inc_n(v___y_1379_, 5);
v___x_1440_ = l_Lean_addMacroScope(v___y_1379_, v___x_1439_, v___y_1392_);
lean_inc_n(v___y_1381_, 5);
v___x_1441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1439_);
lean_ctor_set(v___x_1441_, 1, v___y_1381_);
v___x_1442_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__10));
lean_inc_n(v___y_1374_, 8);
v___x_1443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
lean_ctor_set(v___x_1443_, 1, v___y_1374_);
v___x_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1441_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1445_, 0, v___y_1393_);
lean_ctor_set(v___x_1445_, 1, v___x_1438_);
lean_ctor_set(v___x_1445_, 2, v___x_1440_);
lean_ctor_set(v___x_1445_, 3, v___x_1444_);
lean_inc_ref_n(v___x_1437_, 4);
v___x_1446_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1378_, v___x_1437_, v___x_1445_);
lean_inc_ref(v___y_1399_);
v___x_1447_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___y_1393_);
lean_ctor_set(v___x_1447_, 1, v___y_1399_);
lean_inc_ref_n(v___x_1447_, 3);
lean_inc_ref_n(v___x_1434_, 3);
v___x_1448_ = l_Lean_Syntax_node5(v___y_1393_, v___x_1433_, v___x_1434_, v___x_1435_, v___x_1446_, v___y_1380_, v___x_1447_);
v___x_1449_ = lean_array_push(v___x_1432_, v___x_1448_);
v___x_1450_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___y_1384_);
lean_inc_n(v_type_1364_, 2);
v___x_1451_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1378_, v___x_1437_, v_type_1364_);
v___x_1452_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__12));
lean_inc_ref(v___y_1394_);
v___x_1453_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1453_, 0, v___y_1393_);
lean_ctor_set(v___x_1453_, 1, v___y_1394_);
v___x_1454_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__14));
v___x_1455_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__16));
v___x_1456_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__17));
v___x_1457_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___y_1393_);
lean_ctor_set(v___x_1457_, 1, v___x_1456_);
v___x_1458_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__18));
v___x_1459_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___y_1393_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
lean_inc_ref(v___x_1459_);
lean_inc_ref(v___x_1457_);
v___x_1460_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1455_, v___x_1457_, v___x_1459_);
v___x_1461_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__20));
v___x_1462_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__22));
v___x_1463_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1462_, v___y_1380_);
v___x_1464_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__24));
v___x_1465_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1464_, v___y_1380_);
v___x_1466_ = l_Lean_Syntax_node6(v___y_1393_, v___x_1461_, v___x_1457_, v___y_1380_, v___x_1463_, v___x_1465_, v___y_1380_, v___x_1459_);
v___x_1467_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1454_, v___x_1460_, v___x_1466_);
lean_inc_ref_n(v___x_1453_, 5);
v___x_1468_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1452_, v___x_1453_, v___x_1467_);
v___x_1469_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___x_1468_);
v___x_1470_ = l_Lean_Syntax_node5(v___y_1393_, v___x_1433_, v___x_1434_, v___x_1450_, v___x_1451_, v___x_1469_, v___x_1447_);
v___x_1471_ = lean_array_push(v___x_1449_, v___x_1470_);
v___x_1472_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___y_1402_);
v___x_1473_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__26);
v___x_1474_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__27));
v___x_1475_ = l_Lean_addMacroScope(v___y_1379_, v___x_1474_, v___y_1392_);
v___x_1476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1474_);
lean_ctor_set(v___x_1476_, 1, v___y_1381_);
v___x_1477_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__29));
v___x_1478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
lean_ctor_set(v___x_1478_, 1, v___y_1374_);
v___x_1479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1476_);
lean_ctor_set(v___x_1479_, 1, v___x_1478_);
v___x_1480_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1480_, 0, v___y_1393_);
lean_ctor_set(v___x_1480_, 1, v___x_1473_);
lean_ctor_set(v___x_1480_, 2, v___x_1475_);
lean_ctor_set(v___x_1480_, 3, v___x_1479_);
v___x_1481_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1378_, v___x_1437_, v___x_1480_);
v___x_1482_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1452_, v___x_1453_, v_logExceptionsDefault_1358_);
v___x_1483_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___x_1482_);
v___x_1484_ = l_Lean_Syntax_node5(v___y_1393_, v___x_1433_, v___x_1434_, v___x_1472_, v___x_1481_, v___x_1483_, v___x_1447_);
v___x_1485_ = lean_array_push(v___x_1471_, v___x_1484_);
v___x_1486_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1486_, 0, v___y_1393_);
lean_ctor_set(v___x_1486_, 1, v___y_1378_);
lean_ctor_set(v___x_1486_, 2, v___x_1485_);
v___x_1487_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__31));
v___x_1488_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v_type_1364_);
lean_inc(v___x_1488_);
lean_inc_n(v___y_1395_, 4);
v___x_1489_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1395_, v_monad_1356_, v___x_1488_);
v___x_1490_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1487_, v___x_1437_, v___x_1489_);
v___x_1491_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___x_1490_);
v___x_1492_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1426_, v___x_1486_, v___x_1491_);
v___x_1493_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__32));
v___x_1494_ = l_Lean_Name_mkStr4(v___x_1371_, v___x_1372_, v___y_1408_, v___x_1493_);
v___x_1495_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__33));
v___x_1496_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__34));
v___x_1497_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___y_1393_);
lean_ctor_set(v___x_1497_, 1, v___x_1495_);
v___x_1498_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__36));
v___x_1499_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__38));
v___x_1500_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__40));
v___x_1501_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__41));
v___x_1502_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___y_1393_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
v___x_1503_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__43));
v___x_1504_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1503_, v___y_1380_);
v___x_1505_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__45));
v___x_1506_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__47));
v___x_1507_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__49));
lean_inc_ref(v___y_1386_);
v___x_1508_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1508_, 0, v___y_1393_);
lean_ctor_set(v___x_1508_, 1, v___y_1386_);
lean_ctor_set(v___x_1508_, 2, v___y_1376_);
lean_ctor_set(v___x_1508_, 3, v___y_1374_);
v___x_1509_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1507_, v___x_1508_);
lean_inc_ref_n(v___y_1383_, 5);
v___x_1510_ = l_String_toRawSubstring_x27(v___y_1383_);
v___x_1511_ = l_Lean_Name_mkStr1(v___y_1383_);
v___x_1512_ = l_Lean_addMacroScope(v___y_1379_, v___x_1511_, v___y_1392_);
lean_inc_ref_n(v___y_1407_, 2);
lean_inc_ref_n(v___y_1391_, 2);
v___x_1513_ = l_Lean_Name_mkStr4(v___x_1371_, v___y_1391_, v___y_1407_, v___y_1383_);
lean_inc(v___x_1513_);
v___x_1514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1513_);
lean_ctor_set(v___x_1514_, 1, v___y_1381_);
v___x_1515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1513_);
v___x_1516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
lean_ctor_set(v___x_1516_, 1, v___y_1374_);
v___x_1517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1514_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
v___x_1518_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1518_, 0, v___y_1393_);
lean_ctor_set(v___x_1518_, 1, v___x_1510_);
lean_ctor_set(v___x_1518_, 2, v___x_1512_);
lean_ctor_set(v___x_1518_, 3, v___x_1517_);
v___x_1519_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1395_, v___x_1518_, v___x_1488_);
v___x_1520_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1487_, v___x_1437_, v___x_1519_);
v___x_1521_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___x_1520_);
v___x_1522_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__51));
v___x_1523_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__52));
v___x_1524_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___y_1393_);
lean_ctor_set(v___x_1524_, 1, v___x_1523_);
v___x_1525_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1522_, v___x_1524_, v___y_1382_);
v___x_1526_ = l_Array_append___redArg(v___y_1390_, v___y_1403_);
lean_dec_ref(v___y_1403_);
v___x_1527_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1527_, 0, v___y_1393_);
lean_ctor_set(v___x_1527_, 1, v___y_1378_);
lean_ctor_set(v___x_1527_, 2, v___x_1526_);
v___x_1528_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1395_, v___x_1525_, v___x_1527_);
v___x_1529_ = l_Lean_Syntax_node5(v___y_1393_, v___x_1506_, v___x_1509_, v___y_1380_, v___x_1521_, v___x_1453_, v___x_1528_);
v___x_1530_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1505_, v___x_1529_);
lean_inc(v___x_1504_);
lean_inc_ref(v___x_1502_);
v___x_1531_ = l_Lean_Syntax_node4(v___y_1393_, v___x_1500_, v___x_1502_, v___y_1380_, v___x_1504_, v___x_1530_);
v___x_1532_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1499_, v___x_1531_, v___y_1380_);
lean_inc_ref(v___y_1385_);
v___x_1533_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1533_, 0, v___y_1393_);
lean_ctor_set(v___x_1533_, 1, v___y_1385_);
lean_ctor_set(v___x_1533_, 2, v___y_1406_);
lean_ctor_set(v___x_1533_, 3, v___y_1374_);
v___x_1534_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1507_, v___x_1533_);
v___x_1535_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__54);
v___x_1536_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__55));
v___x_1537_ = l_Lean_Name_mkStr2(v___y_1383_, v___x_1536_);
v___x_1538_ = l_Lean_addMacroScope(v___y_1379_, v___x_1537_, v___y_1392_);
v___x_1539_ = l_Lean_Name_mkStr5(v___x_1371_, v___y_1391_, v___y_1407_, v___y_1383_, v___x_1536_);
v___x_1540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
lean_ctor_set(v___x_1540_, 1, v___y_1381_);
v___x_1541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1540_);
lean_ctor_set(v___x_1541_, 1, v___y_1374_);
v___x_1542_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1542_, 0, v___y_1393_);
lean_ctor_set(v___x_1542_, 1, v___x_1535_);
lean_ctor_set(v___x_1542_, 2, v___x_1538_);
lean_ctor_set(v___x_1542_, 3, v___x_1541_);
v___x_1543_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__57);
v___x_1544_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__58));
v___x_1545_ = l_Lean_addMacroScope(v___y_1379_, v___x_1544_, v___y_1392_);
v___x_1546_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1546_, 0, v___y_1393_);
lean_ctor_set(v___x_1546_, 1, v___x_1543_);
lean_ctor_set(v___x_1546_, 2, v___x_1545_);
lean_ctor_set(v___x_1546_, 3, v___y_1374_);
v___x_1547_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__60);
v___x_1548_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__61));
v___x_1549_ = l_Lean_addMacroScope(v___y_1379_, v___x_1548_, v___y_1392_);
v___x_1550_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__62));
v___x_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
lean_ctor_set(v___x_1551_, 1, v___y_1381_);
v___x_1552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
lean_ctor_set(v___x_1552_, 1, v___y_1374_);
v___x_1553_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1553_, 0, v___y_1393_);
lean_ctor_set(v___x_1553_, 1, v___x_1547_);
lean_ctor_set(v___x_1553_, 2, v___x_1549_);
lean_ctor_set(v___x_1553_, 3, v___x_1552_);
v___x_1554_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__64));
v___x_1555_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__65));
v___x_1556_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___y_1393_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
lean_inc_ref(v___x_1556_);
v___x_1557_ = l_Lean_Syntax_node3(v___y_1393_, v___x_1554_, v___x_1556_, v___x_1556_, v_type_1364_);
v___x_1558_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___x_1557_);
v___x_1559_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1395_, v___x_1553_, v___x_1558_);
v___x_1560_ = l_Lean_Syntax_node5(v___y_1393_, v___y_1398_, v___x_1434_, v___x_1546_, v___x_1453_, v___x_1559_, v___x_1447_);
v___x_1561_ = l_Lean_Syntax_node1(v___y_1393_, v___y_1378_, v___x_1560_);
v___x_1562_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1395_, v___x_1542_, v___x_1561_);
v___x_1563_ = l_Lean_Syntax_node5(v___y_1393_, v___x_1506_, v___x_1534_, v___y_1380_, v___y_1380_, v___x_1453_, v___x_1562_);
v___x_1564_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1505_, v___x_1563_);
v___x_1565_ = l_Lean_Syntax_node4(v___y_1393_, v___x_1500_, v___x_1502_, v___y_1380_, v___x_1504_, v___x_1564_);
v___x_1566_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1499_, v___x_1565_, v___y_1380_);
v___x_1567_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__67));
v___x_1568_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1567_, v___y_1401_);
v___x_1569_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1499_, v___x_1568_, v___y_1380_);
v___x_1570_ = l_Lean_Syntax_node3(v___y_1393_, v___y_1378_, v___x_1532_, v___x_1566_, v___x_1569_);
v___x_1571_ = l_Lean_Syntax_node1(v___y_1393_, v___x_1498_, v___x_1570_);
v___x_1572_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1496_, v___x_1497_, v___x_1571_);
v___x_1573_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__70));
v___x_1574_ = l_Lean_Syntax_node2(v___y_1393_, v___x_1573_, v___y_1380_, v___y_1380_);
v___x_1575_ = l_Lean_Syntax_node4(v___y_1393_, v___x_1494_, v___x_1453_, v___x_1572_, v___x_1574_, v___y_1380_);
v___x_1576_ = l_Lean_Syntax_node5(v___y_1393_, v___x_1414_, v___x_1416_, v___x_1424_, v___x_1492_, v___x_1575_, v___y_1380_);
v___x_1577_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1397_, v___x_1412_, v___x_1576_);
v___x_1578_ = l_Lean_Syntax_node2(v___y_1393_, v___y_1378_, v___y_1400_, v___x_1577_);
v___x_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
lean_ctor_set(v___x_1579_, 1, v___y_1377_);
return v___x_1579_;
}
v___jp_1580_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
lean_inc_ref(v___y_1596_);
v___x_1616_ = l_Array_append___redArg(v___y_1596_, v___y_1615_);
lean_dec_ref(v___y_1615_);
lean_inc(v___y_1585_);
lean_inc(v___y_1600_);
v___x_1617_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1617_, 0, v___y_1600_);
lean_ctor_set(v___x_1617_, 1, v___y_1585_);
lean_ctor_set(v___x_1617_, 2, v___x_1616_);
if (lean_obj_tag(v_vis_x3f_1361_) == 1)
{
lean_object* v_val_1618_; lean_object* v___x_1619_; 
v_val_1618_ = lean_ctor_get(v_vis_x3f_1361_, 0);
lean_inc(v_val_1618_);
lean_dec_ref_known(v_vis_x3f_1361_, 1);
v___x_1619_ = l_Array_mkArray1___redArg(v_val_1618_);
v___y_1374_ = v___y_1581_;
v___y_1375_ = v___y_1582_;
v___y_1376_ = v___y_1583_;
v___y_1377_ = v___y_1584_;
v___y_1378_ = v___y_1585_;
v___y_1379_ = v___y_1586_;
v___y_1380_ = v___y_1588_;
v___y_1381_ = v___y_1587_;
v___y_1382_ = v___y_1589_;
v___y_1383_ = v___y_1590_;
v___y_1384_ = v___y_1591_;
v___y_1385_ = v___y_1592_;
v___y_1386_ = v___y_1593_;
v___y_1387_ = v___y_1594_;
v___y_1388_ = v___y_1595_;
v___y_1389_ = v___y_1597_;
v___y_1390_ = v___y_1596_;
v___y_1391_ = v___y_1598_;
v___y_1392_ = v___y_1599_;
v___y_1393_ = v___y_1600_;
v___y_1394_ = v___y_1601_;
v___y_1395_ = v___y_1602_;
v___y_1396_ = v___y_1603_;
v___y_1397_ = v___y_1604_;
v___y_1398_ = v___y_1605_;
v___y_1399_ = v___y_1606_;
v___y_1400_ = v___y_1607_;
v___y_1401_ = v___y_1608_;
v___y_1402_ = v___y_1609_;
v___y_1403_ = v___y_1611_;
v___y_1404_ = v___y_1610_;
v___y_1405_ = v___x_1617_;
v___y_1406_ = v___y_1613_;
v___y_1407_ = v___y_1612_;
v___y_1408_ = v___y_1614_;
v___y_1409_ = v___x_1619_;
goto v___jp_1373_;
}
else
{
lean_object* v___x_1620_; 
lean_dec(v_vis_x3f_1361_);
v___x_1620_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___y_1374_ = v___y_1581_;
v___y_1375_ = v___y_1582_;
v___y_1376_ = v___y_1583_;
v___y_1377_ = v___y_1584_;
v___y_1378_ = v___y_1585_;
v___y_1379_ = v___y_1586_;
v___y_1380_ = v___y_1588_;
v___y_1381_ = v___y_1587_;
v___y_1382_ = v___y_1589_;
v___y_1383_ = v___y_1590_;
v___y_1384_ = v___y_1591_;
v___y_1385_ = v___y_1592_;
v___y_1386_ = v___y_1593_;
v___y_1387_ = v___y_1594_;
v___y_1388_ = v___y_1595_;
v___y_1389_ = v___y_1597_;
v___y_1390_ = v___y_1596_;
v___y_1391_ = v___y_1598_;
v___y_1392_ = v___y_1599_;
v___y_1393_ = v___y_1600_;
v___y_1394_ = v___y_1601_;
v___y_1395_ = v___y_1602_;
v___y_1396_ = v___y_1603_;
v___y_1397_ = v___y_1604_;
v___y_1398_ = v___y_1605_;
v___y_1399_ = v___y_1606_;
v___y_1400_ = v___y_1607_;
v___y_1401_ = v___y_1608_;
v___y_1402_ = v___y_1609_;
v___y_1403_ = v___y_1611_;
v___y_1404_ = v___y_1610_;
v___y_1405_ = v___x_1617_;
v___y_1406_ = v___y_1613_;
v___y_1407_ = v___y_1612_;
v___y_1408_ = v___y_1614_;
v___y_1409_ = v___x_1620_;
goto v___jp_1373_;
}
}
v___jp_1621_:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
lean_inc_ref(v___y_1639_);
v___x_1660_ = l_Array_append___redArg(v___y_1639_, v___y_1659_);
lean_dec_ref(v___y_1659_);
lean_inc(v___y_1626_);
lean_inc_n(v___y_1644_, 2);
v___x_1661_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1661_, 0, v___y_1644_);
lean_ctor_set(v___x_1661_, 1, v___y_1626_);
lean_ctor_set(v___x_1661_, 2, v___x_1660_);
v___x_1662_ = lean_unsigned_to_nat(9u);
v___x_1663_ = lean_mk_empty_array_with_capacity(v___x_1662_);
lean_inc(v___y_1628_);
v___x_1664_ = lean_array_push(v___x_1663_, v___y_1628_);
v___x_1665_ = lean_array_push(v___x_1664_, v___y_1635_);
v___x_1666_ = lean_array_push(v___x_1665_, v___y_1645_);
v___x_1667_ = lean_array_push(v___x_1666_, v___y_1622_);
lean_inc(v___y_1630_);
v___x_1668_ = lean_array_push(v___x_1667_, v___y_1630_);
v___x_1669_ = lean_array_push(v___x_1668_, v___y_1642_);
v___x_1670_ = lean_array_push(v___x_1669_, v___y_1637_);
lean_inc(v_type_1364_);
v___x_1671_ = lean_array_push(v___x_1670_, v_type_1364_);
v___x_1672_ = lean_array_push(v___x_1671_, v___x_1661_);
lean_inc(v___y_1651_);
v___x_1673_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1673_, 0, v___y_1644_);
lean_ctor_set(v___x_1673_, 1, v___y_1651_);
lean_ctor_set(v___x_1673_, 2, v___x_1672_);
v___x_1674_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__71));
lean_inc_ref_n(v___y_1658_, 2);
v___x_1675_ = l_Lean_Name_mkStr4(v___x_1371_, v___x_1372_, v___y_1658_, v___x_1674_);
v___x_1676_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__72));
v___x_1677_ = l_Lean_Name_mkStr4(v___x_1371_, v___x_1372_, v___y_1658_, v___x_1676_);
if (lean_obj_tag(v_doc_x3f_1360_) == 1)
{
lean_object* v_val_1678_; lean_object* v___x_1679_; 
v_val_1678_ = lean_ctor_get(v_doc_x3f_1360_, 0);
lean_inc(v_val_1678_);
lean_dec_ref_known(v_doc_x3f_1360_, 1);
v___x_1679_ = l_Array_mkArray1___redArg(v_val_1678_);
v___y_1581_ = v___y_1623_;
v___y_1582_ = v___x_1677_;
v___y_1583_ = v___y_1624_;
v___y_1584_ = v___y_1625_;
v___y_1585_ = v___y_1626_;
v___y_1586_ = v___y_1627_;
v___y_1587_ = v___y_1629_;
v___y_1588_ = v___y_1628_;
v___y_1589_ = v___y_1630_;
v___y_1590_ = v___y_1631_;
v___y_1591_ = v___y_1632_;
v___y_1592_ = v___y_1633_;
v___y_1593_ = v___y_1634_;
v___y_1594_ = v___y_1636_;
v___y_1595_ = v___y_1638_;
v___y_1596_ = v___y_1639_;
v___y_1597_ = v___y_1640_;
v___y_1598_ = v___y_1641_;
v___y_1599_ = v___y_1643_;
v___y_1600_ = v___y_1644_;
v___y_1601_ = v___y_1647_;
v___y_1602_ = v___y_1646_;
v___y_1603_ = v___y_1648_;
v___y_1604_ = v___x_1675_;
v___y_1605_ = v___y_1649_;
v___y_1606_ = v___y_1650_;
v___y_1607_ = v___x_1673_;
v___y_1608_ = v___y_1652_;
v___y_1609_ = v___y_1653_;
v___y_1610_ = v___y_1655_;
v___y_1611_ = v___y_1654_;
v___y_1612_ = v___y_1657_;
v___y_1613_ = v___y_1656_;
v___y_1614_ = v___y_1658_;
v___y_1615_ = v___x_1679_;
goto v___jp_1580_;
}
else
{
lean_object* v___x_1680_; 
lean_dec(v_doc_x3f_1360_);
v___x_1680_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
v___y_1581_ = v___y_1623_;
v___y_1582_ = v___x_1677_;
v___y_1583_ = v___y_1624_;
v___y_1584_ = v___y_1625_;
v___y_1585_ = v___y_1626_;
v___y_1586_ = v___y_1627_;
v___y_1587_ = v___y_1629_;
v___y_1588_ = v___y_1628_;
v___y_1589_ = v___y_1630_;
v___y_1590_ = v___y_1631_;
v___y_1591_ = v___y_1632_;
v___y_1592_ = v___y_1633_;
v___y_1593_ = v___y_1634_;
v___y_1594_ = v___y_1636_;
v___y_1595_ = v___y_1638_;
v___y_1596_ = v___y_1639_;
v___y_1597_ = v___y_1640_;
v___y_1598_ = v___y_1641_;
v___y_1599_ = v___y_1643_;
v___y_1600_ = v___y_1644_;
v___y_1601_ = v___y_1647_;
v___y_1602_ = v___y_1646_;
v___y_1603_ = v___y_1648_;
v___y_1604_ = v___x_1675_;
v___y_1605_ = v___y_1649_;
v___y_1606_ = v___y_1650_;
v___y_1607_ = v___x_1673_;
v___y_1608_ = v___y_1652_;
v___y_1609_ = v___y_1653_;
v___y_1610_ = v___y_1655_;
v___y_1611_ = v___y_1654_;
v___y_1612_ = v___y_1657_;
v___y_1613_ = v___y_1656_;
v___y_1614_ = v___y_1658_;
v___y_1615_ = v___x_1680_;
goto v___jp_1580_;
}
}
v___jp_1681_:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1684_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__74));
v___x_1685_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__75);
lean_inc_ref(v_a_1367_);
v___x_1686_ = lean_apply_3(v_mkLogExceptionsTerm_1359_, v___x_1685_, v_a_1367_, v_a_1683_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1784_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
v_a_1688_ = lean_ctor_get(v___x_1686_, 1);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1690_ = v___x_1686_;
v_isShared_1691_ = v_isSharedCheck_1784_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_inc(v_a_1687_);
lean_dec(v___x_1686_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1784_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v_quotContext_1692_; lean_object* v_currMacroScope_1693_; lean_object* v_ref_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; uint8_t v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1717_; 
v_quotContext_1692_ = lean_ctor_get(v_a_1367_, 1);
v_currMacroScope_1693_ = lean_ctor_get(v_a_1367_, 2);
v_ref_1694_ = lean_ctor_get(v_a_1367_, 5);
v___x_1695_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__78);
v___x_1696_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__81);
v___x_1697_ = 0;
v___x_1698_ = l_Lean_SourceInfo_fromRef(v_ref_1694_, v___x_1697_);
v___x_1699_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__83));
v___x_1700_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__85);
v___x_1701_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__86));
v___x_1702_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__88));
lean_inc_n(v_currMacroScope_1693_, 2);
lean_inc_n(v_quotContext_1692_, 2);
v___x_1703_ = l_Lean_addMacroScope(v_quotContext_1692_, v___x_1702_, v_currMacroScope_1693_);
v___x_1704_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__5));
v___x_1705_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__6));
v___x_1706_ = lean_box(0);
v___x_1707_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__91));
lean_inc_n(v___x_1698_, 3);
v___x_1708_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1698_);
lean_ctor_set(v___x_1708_, 1, v___x_1700_);
lean_ctor_set(v___x_1708_, 2, v___x_1703_);
lean_ctor_set(v___x_1708_, 3, v___x_1707_);
v___x_1709_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3));
v___x_1710_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__93);
v___x_1711_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__94));
v___x_1712_ = l_Lean_addMacroScope(v_quotContext_1692_, v___x_1711_, v_currMacroScope_1693_);
lean_inc(v___x_1712_);
v___x_1713_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1698_);
lean_ctor_set(v___x_1713_, 1, v___x_1710_);
lean_ctor_set(v___x_1713_, 2, v___x_1712_);
lean_ctor_set(v___x_1713_, 3, v___x_1706_);
v___x_1714_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__96));
v___x_1715_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97));
if (v_isShared_1691_ == 0)
{
lean_ctor_set_tag(v___x_1690_, 2);
lean_ctor_set(v___x_1690_, 1, v___x_1715_);
lean_ctor_set(v___x_1690_, 0, v___x_1698_);
v___x_1717_ = v___x_1690_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1698_);
lean_ctor_set(v_reuseFailAlloc_1783_, 1, v___x_1715_);
v___x_1717_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1718_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__99);
v___x_1719_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__100));
lean_inc_n(v_currMacroScope_1693_, 2);
lean_inc_n(v_quotContext_1692_, 2);
v___x_1720_ = l_Lean_addMacroScope(v_quotContext_1692_, v___x_1719_, v_currMacroScope_1693_);
lean_inc(v___x_1720_);
lean_inc_n(v___x_1698_, 7);
v___x_1721_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1698_);
lean_ctor_set(v___x_1721_, 1, v___x_1718_);
lean_ctor_set(v___x_1721_, 2, v___x_1720_);
lean_ctor_set(v___x_1721_, 3, v___x_1706_);
v___x_1722_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__101));
v___x_1723_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1698_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
v___x_1724_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102));
v___x_1725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1698_);
lean_ctor_set(v___x_1725_, 1, v___x_1724_);
lean_inc_ref(v___x_1725_);
lean_inc_ref(v___x_1723_);
lean_inc_ref(v___x_1721_);
lean_inc_ref(v___x_1717_);
v___x_1726_ = l_Lean_Syntax_node5(v___x_1698_, v___x_1714_, v___x_1717_, v___x_1721_, v___x_1723_, v___x_1721_, v___x_1725_);
v___x_1727_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__103);
v___x_1728_ = l_Lean_addMacroScope(v_quotContext_1692_, v___x_1684_, v_currMacroScope_1693_);
v___x_1729_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1698_);
lean_ctor_set(v___x_1729_, 1, v___x_1727_);
lean_ctor_set(v___x_1729_, 2, v___x_1728_);
lean_ctor_set(v___x_1729_, 3, v___x_1706_);
v___x_1730_ = l_Lean_Syntax_node5(v___x_1698_, v___x_1714_, v___x_1717_, v___x_1729_, v___x_1723_, v_a_1687_, v___x_1725_);
v___x_1731_ = l_Lean_Syntax_node5(v___x_1698_, v___x_1709_, v___x_1713_, v___x_1696_, v___x_1695_, v___x_1726_, v___x_1730_);
v___x_1732_ = l_Lean_Syntax_node2(v___x_1698_, v___x_1699_, v___x_1708_, v___x_1731_);
lean_inc_ref(v_a_1367_);
v___x_1733_ = lean_apply_3(v_mkMonadAdapt_1357_, v___x_1732_, v_a_1367_, v_a_1688_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1782_; 
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
v_a_1735_ = lean_ctor_get(v___x_1733_, 1);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1737_ = v___x_1733_;
v_isShared_1738_ = v_isSharedCheck_1782_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_inc(v_a_1734_);
lean_dec(v___x_1733_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1782_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v_fnName_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v_ref_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1759_; 
v___x_1739_ = l_Lean_TSyntax_getId(v_elabName_1363_);
v___x_1740_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__105));
v___x_1741_ = l_Lean_Name_append(v___x_1739_, v___x_1740_);
v_fnName_1742_ = l_Lean_mkIdentFrom(v_elabName_1363_, v___x_1741_, v___x_1697_);
v___x_1743_ = lean_unsigned_to_nat(3u);
v___x_1744_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1745_ = lean_array_push(v___x_1744_, v_tk_1362_);
lean_inc(v_elabName_1363_);
v___x_1746_ = lean_array_push(v___x_1745_, v_elabName_1363_);
lean_inc(v_type_1364_);
v___x_1747_ = lean_array_push(v___x_1746_, v_type_1364_);
v___x_1748_ = lean_box(2);
v___x_1749_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
lean_ctor_set(v___x_1749_, 1, v___x_1709_);
lean_ctor_set(v___x_1749_, 2, v___x_1747_);
v_ref_1750_ = l_Lean_replaceRef(v___x_1749_, v_ref_1694_);
lean_dec_ref_known(v___x_1749_, 3);
v___x_1751_ = l_Lean_SourceInfo_fromRef(v_ref_1750_, v___x_1697_);
lean_dec(v_ref_1750_);
v___x_1752_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__1));
v___x_1753_ = lean_obj_once(&l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4, &l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4_once, _init_l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__4);
lean_inc_n(v___x_1751_, 2);
v___x_1754_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1751_);
lean_ctor_set(v___x_1754_, 1, v___x_1709_);
lean_ctor_set(v___x_1754_, 2, v___x_1753_);
v___x_1755_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2));
v___x_1756_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__106));
v___x_1757_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__107));
if (v_isShared_1738_ == 0)
{
lean_ctor_set_tag(v___x_1737_, 2);
lean_ctor_set(v___x_1737_, 1, v___x_1756_);
lean_ctor_set(v___x_1737_, 0, v___x_1751_);
v___x_1759_ = v___x_1737_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v___x_1756_);
v___x_1759_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; size_t v_sz_1771_; size_t v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
lean_inc_n(v___x_1751_, 9);
v___x_1760_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1757_, v___x_1759_);
v___x_1761_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1709_, v___x_1760_);
v___x_1762_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___closed__4));
v___x_1763_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__108));
v___x_1764_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__109));
v___x_1765_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1751_);
lean_ctor_set(v___x_1765_, 1, v___x_1763_);
v___x_1766_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1764_, v___x_1765_);
v___x_1767_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1709_, v___x_1766_);
v___x_1768_ = l_Lean_Syntax_node1(v___x_1751_, v___x_1762_, v___x_1767_);
v___x_1769_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__110));
v___x_1770_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1751_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
v_sz_1771_ = lean_array_size(v_binders_1365_);
v___x_1772_ = ((size_t)0ULL);
lean_inc_ref(v_binders_1365_);
v___x_1773_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd_spec__0(v_sz_1771_, v___x_1772_, v_binders_1365_);
v___x_1774_ = l_Array_append___redArg(v___x_1753_, v___x_1773_);
lean_dec_ref(v___x_1773_);
v___x_1775_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1751_);
lean_ctor_set(v___x_1775_, 1, v___x_1709_);
lean_ctor_set(v___x_1775_, 2, v___x_1774_);
v___x_1776_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__111));
v___x_1777_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1751_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
if (lean_obj_tag(v_entries_x3f_1366_) == 1)
{
lean_object* v_val_1778_; lean_object* v___x_1779_; 
v_val_1778_ = lean_ctor_get(v_entries_x3f_1366_, 0);
lean_inc(v_val_1778_);
lean_dec_ref_known(v_entries_x3f_1366_, 1);
v___x_1779_ = l_Array_mkArray1___redArg(v_val_1778_);
lean_inc(v_currMacroScope_1693_);
lean_inc(v_quotContext_1692_);
v___y_1622_ = v___x_1770_;
v___y_1623_ = v___x_1706_;
v___y_1624_ = v___x_1712_;
v___y_1625_ = v_a_1735_;
v___y_1626_ = v___x_1709_;
v___y_1627_ = v_quotContext_1692_;
v___y_1628_ = v___x_1754_;
v___y_1629_ = v___x_1706_;
v___y_1630_ = v_fnName_1742_;
v___y_1631_ = v___x_1701_;
v___y_1632_ = v___x_1696_;
v___y_1633_ = v___x_1718_;
v___y_1634_ = v___x_1710_;
v___y_1635_ = v___x_1761_;
v___y_1636_ = v___x_1772_;
v___y_1637_ = v___x_1777_;
v___y_1638_ = v___x_1748_;
v___y_1639_ = v___x_1753_;
v___y_1640_ = v_sz_1771_;
v___y_1641_ = v___x_1704_;
v___y_1642_ = v___x_1775_;
v___y_1643_ = v_currMacroScope_1693_;
v___y_1644_ = v___x_1751_;
v___y_1645_ = v___x_1768_;
v___y_1646_ = v___x_1699_;
v___y_1647_ = v___x_1722_;
v___y_1648_ = v___x_1715_;
v___y_1649_ = v___x_1714_;
v___y_1650_ = v___x_1724_;
v___y_1651_ = v___x_1752_;
v___y_1652_ = v_a_1734_;
v___y_1653_ = v___x_1685_;
v___y_1654_ = v_a_1682_;
v___y_1655_ = v___x_1695_;
v___y_1656_ = v___x_1720_;
v___y_1657_ = v___x_1705_;
v___y_1658_ = v___x_1755_;
v___y_1659_ = v___x_1779_;
goto v___jp_1621_;
}
else
{
lean_object* v___x_1780_; 
lean_dec(v_entries_x3f_1366_);
v___x_1780_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__5));
lean_inc(v_currMacroScope_1693_);
lean_inc(v_quotContext_1692_);
v___y_1622_ = v___x_1770_;
v___y_1623_ = v___x_1706_;
v___y_1624_ = v___x_1712_;
v___y_1625_ = v_a_1735_;
v___y_1626_ = v___x_1709_;
v___y_1627_ = v_quotContext_1692_;
v___y_1628_ = v___x_1754_;
v___y_1629_ = v___x_1706_;
v___y_1630_ = v_fnName_1742_;
v___y_1631_ = v___x_1701_;
v___y_1632_ = v___x_1696_;
v___y_1633_ = v___x_1718_;
v___y_1634_ = v___x_1710_;
v___y_1635_ = v___x_1761_;
v___y_1636_ = v___x_1772_;
v___y_1637_ = v___x_1777_;
v___y_1638_ = v___x_1748_;
v___y_1639_ = v___x_1753_;
v___y_1640_ = v_sz_1771_;
v___y_1641_ = v___x_1704_;
v___y_1642_ = v___x_1775_;
v___y_1643_ = v_currMacroScope_1693_;
v___y_1644_ = v___x_1751_;
v___y_1645_ = v___x_1768_;
v___y_1646_ = v___x_1699_;
v___y_1647_ = v___x_1722_;
v___y_1648_ = v___x_1715_;
v___y_1649_ = v___x_1714_;
v___y_1650_ = v___x_1724_;
v___y_1651_ = v___x_1752_;
v___y_1652_ = v_a_1734_;
v___y_1653_ = v___x_1685_;
v___y_1654_ = v_a_1682_;
v___y_1655_ = v___x_1695_;
v___y_1656_ = v___x_1720_;
v___y_1657_ = v___x_1705_;
v___y_1658_ = v___x_1755_;
v___y_1659_ = v___x_1780_;
goto v___jp_1621_;
}
}
}
}
else
{
lean_dec(v___x_1720_);
lean_dec(v___x_1712_);
lean_dec_ref(v_a_1682_);
lean_dec(v_entries_x3f_1366_);
lean_dec_ref(v_binders_1365_);
lean_dec(v_type_1364_);
lean_dec(v_elabName_1363_);
lean_dec(v_tk_1362_);
lean_dec(v_vis_x3f_1361_);
lean_dec(v_doc_x3f_1360_);
lean_dec(v_logExceptionsDefault_1358_);
lean_dec(v_monad_1356_);
return v___x_1733_;
}
}
}
}
else
{
lean_dec_ref(v_a_1682_);
lean_dec(v_entries_x3f_1366_);
lean_dec_ref(v_binders_1365_);
lean_dec(v_type_1364_);
lean_dec(v_elabName_1363_);
lean_dec(v_tk_1362_);
lean_dec(v_vis_x3f_1361_);
lean_dec(v_doc_x3f_1360_);
lean_dec(v_logExceptionsDefault_1358_);
lean_dec_ref(v_mkMonadAdapt_1357_);
lean_dec(v_monad_1356_);
return v___x_1686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___boxed(lean_object* v_monad_1801_, lean_object* v_mkMonadAdapt_1802_, lean_object* v_logExceptionsDefault_1803_, lean_object* v_mkLogExceptionsTerm_1804_, lean_object* v_doc_x3f_1805_, lean_object* v_vis_x3f_1806_, lean_object* v_tk_1807_, lean_object* v_elabName_1808_, lean_object* v_type_1809_, lean_object* v_binders_1810_, lean_object* v_entries_x3f_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v_monad_1801_, v_mkMonadAdapt_1802_, v_logExceptionsDefault_1803_, v_mkLogExceptionsTerm_1804_, v_doc_x3f_1805_, v_vis_x3f_1806_, v_tk_1807_, v_elabName_1808_, v_type_1809_, v_binders_1810_, v_entries_x3f_1811_, v_a_1812_, v_a_1813_);
lean_dec_ref(v_a_1812_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0(lean_object* v_logExceptions_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1818_, 0, v_logExceptions_1815_);
lean_ctor_set(v___x_1818_, 1, v___y_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0___boxed(lean_object* v_logExceptions_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__0(v_logExceptions_1819_, v___y_1820_, v___y_1821_);
lean_dec_ref(v___y_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1(lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1826_, 0, v___y_1823_);
lean_ctor_set(v___x_1826_, 1, v___y_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1___boxed(lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___lam__1(v___y_1827_, v___y_1828_, v___y_1829_);
lean_dec_ref(v___y_1828_);
return v_res_1830_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7(void){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__6));
v___x_1846_ = l_Lean_mkCIdent(v___x_1845_);
return v___x_1846_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10(void){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__9));
v___x_1852_ = l_Lean_mkCIdent(v___x_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab(lean_object* v_x_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1856_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1));
lean_inc(v_x_1853_);
v___x_1857_ = l_Lean_Syntax_isOfKind(v_x_1853_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; 
lean_dec(v_x_1853_);
v___x_1858_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1855_);
return v___x_1858_;
}
else
{
lean_object* v___f_1859_; lean_object* v___f_1860_; lean_object* v___y_1862_; lean_object* v___y_1863_; lean_object* v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1866_; lean_object* v___y_1867_; lean_object* v_entries_x3f_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___x_1893_; lean_object* v___y_1895_; lean_object* v___y_1896_; lean_object* v_vis_x3f_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v_doc_x3f_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___x_1936_; uint8_t v___x_1937_; 
v___f_1859_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2));
v___f_1860_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3));
v___x_1893_ = lean_unsigned_to_nat(0u);
v___x_1936_ = l_Lean_Syntax_getArg(v_x_1853_, v___x_1893_);
v___x_1937_ = l_Lean_Syntax_isNone(v___x_1936_);
if (v___x_1937_ == 0)
{
lean_object* v___x_1938_; uint8_t v___x_1939_; 
v___x_1938_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_1936_);
v___x_1939_ = l_Lean_Syntax_matchesNull(v___x_1936_, v___x_1938_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; 
lean_dec(v___x_1936_);
lean_dec(v_x_1853_);
v___x_1940_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1855_);
return v___x_1940_;
}
else
{
lean_object* v_doc_x3f_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v_doc_x3f_1941_ = l_Lean_Syntax_getArg(v___x_1936_, v___x_1893_);
lean_dec(v___x_1936_);
v___x_1942_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_1941_);
v___x_1943_ = l_Lean_Syntax_isOfKind(v_doc_x3f_1941_, v___x_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; 
lean_dec(v_doc_x3f_1941_);
lean_dec(v_x_1853_);
v___x_1944_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1855_);
return v___x_1944_;
}
else
{
lean_object* v___x_1945_; 
v___x_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_doc_x3f_1941_);
v_doc_x3f_1925_ = v___x_1945_;
v___y_1926_ = v_a_1854_;
v___y_1927_ = v_a_1855_;
goto v___jp_1924_;
}
}
}
else
{
lean_object* v___x_1946_; 
lean_dec(v___x_1936_);
v___x_1946_ = lean_box(0);
v_doc_x3f_1925_ = v___x_1946_;
v___y_1926_ = v_a_1854_;
v___y_1927_ = v_a_1855_;
goto v___jp_1924_;
}
v___jp_1861_:
{
lean_object* v_binders_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_binders_1871_ = l_Lean_Syntax_getArgs(v___y_1862_);
lean_dec(v___y_1862_);
v___x_1872_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7, &l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__7);
v___x_1873_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10, &l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__10);
v___x_1874_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_1872_, v___f_1860_, v___x_1873_, v___f_1859_, v___y_1866_, v___y_1867_, v___y_1864_, v___y_1863_, v___y_1865_, v_binders_1871_, v_entries_x3f_1868_, v___y_1869_, v___y_1870_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_a_1876_ = lean_ctor_get(v___x_1874_, 1);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1874_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1875_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
else
{
lean_object* v_a_1884_; lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
v_a_1884_ = lean_ctor_get(v___x_1874_, 0);
v_a_1885_ = lean_ctor_get(v___x_1874_, 1);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1874_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_inc(v_a_1884_);
lean_dec(v___x_1874_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1884_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
v___jp_1894_:
{
lean_object* v___x_1900_; lean_object* v_elabName_1901_; lean_object* v___x_1902_; uint8_t v___x_1903_; 
v___x_1900_ = lean_unsigned_to_nat(3u);
v_elabName_1901_ = l_Lean_Syntax_getArg(v_x_1853_, v___x_1900_);
v___x_1902_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13));
lean_inc(v_elabName_1901_);
v___x_1903_ = l_Lean_Syntax_isOfKind(v_elabName_1901_, v___x_1902_);
if (v___x_1903_ == 0)
{
lean_object* v___x_1904_; 
lean_dec(v_elabName_1901_);
lean_dec(v_vis_x3f_1897_);
lean_dec(v___y_1895_);
lean_dec(v_x_1853_);
v___x_1904_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1899_);
return v___x_1904_;
}
else
{
lean_object* v___x_1905_; lean_object* v_type_1906_; uint8_t v___x_1907_; 
v___x_1905_ = lean_unsigned_to_nat(4u);
v_type_1906_ = l_Lean_Syntax_getArg(v_x_1853_, v___x_1905_);
lean_inc(v_type_1906_);
v___x_1907_ = l_Lean_Syntax_isOfKind(v_type_1906_, v___x_1902_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; 
lean_dec(v_type_1906_);
lean_dec(v_elabName_1901_);
lean_dec(v_vis_x3f_1897_);
lean_dec(v___y_1895_);
lean_dec(v_x_1853_);
v___x_1908_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1899_);
return v___x_1908_;
}
else
{
lean_object* v___x_1909_; lean_object* v_tk_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; uint8_t v___x_1915_; 
v___x_1909_ = lean_unsigned_to_nat(2u);
v_tk_1910_ = l_Lean_Syntax_getArg(v_x_1853_, v___x_1909_);
v___x_1911_ = lean_unsigned_to_nat(5u);
v___x_1912_ = l_Lean_Syntax_getArg(v_x_1853_, v___x_1911_);
v___x_1913_ = lean_unsigned_to_nat(6u);
v___x_1914_ = l_Lean_Syntax_getArg(v_x_1853_, v___x_1913_);
lean_dec(v_x_1853_);
v___x_1915_ = l_Lean_Syntax_isNone(v___x_1914_);
if (v___x_1915_ == 0)
{
uint8_t v___x_1916_; 
lean_inc(v___x_1914_);
v___x_1916_ = l_Lean_Syntax_matchesNull(v___x_1914_, v___y_1896_);
if (v___x_1916_ == 0)
{
lean_object* v___x_1917_; 
lean_dec(v___x_1914_);
lean_dec(v___x_1912_);
lean_dec(v_tk_1910_);
lean_dec(v_type_1906_);
lean_dec(v_elabName_1901_);
lean_dec(v_vis_x3f_1897_);
lean_dec(v___y_1895_);
v___x_1917_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1899_);
return v___x_1917_;
}
else
{
lean_object* v_entries_x3f_1918_; lean_object* v___x_1919_; uint8_t v___x_1920_; 
v_entries_x3f_1918_ = l_Lean_Syntax_getArg(v___x_1914_, v___x_1893_);
lean_dec(v___x_1914_);
v___x_1919_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_1918_);
v___x_1920_ = l_Lean_Syntax_isOfKind(v_entries_x3f_1918_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1921_; 
lean_dec(v_entries_x3f_1918_);
lean_dec(v___x_1912_);
lean_dec(v_tk_1910_);
lean_dec(v_type_1906_);
lean_dec(v_elabName_1901_);
lean_dec(v_vis_x3f_1897_);
lean_dec(v___y_1895_);
v___x_1921_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1899_);
return v___x_1921_;
}
else
{
lean_object* v___x_1922_; 
v___x_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1922_, 0, v_entries_x3f_1918_);
v___y_1862_ = v___x_1912_;
v___y_1863_ = v_elabName_1901_;
v___y_1864_ = v_tk_1910_;
v___y_1865_ = v_type_1906_;
v___y_1866_ = v___y_1895_;
v___y_1867_ = v_vis_x3f_1897_;
v_entries_x3f_1868_ = v___x_1922_;
v___y_1869_ = v___y_1898_;
v___y_1870_ = v___y_1899_;
goto v___jp_1861_;
}
}
}
else
{
lean_object* v___x_1923_; 
lean_dec(v___x_1914_);
v___x_1923_ = lean_box(0);
v___y_1862_ = v___x_1912_;
v___y_1863_ = v_elabName_1901_;
v___y_1864_ = v_tk_1910_;
v___y_1865_ = v_type_1906_;
v___y_1866_ = v___y_1895_;
v___y_1867_ = v_vis_x3f_1897_;
v_entries_x3f_1868_ = v___x_1923_;
v___y_1869_ = v___y_1898_;
v___y_1870_ = v___y_1899_;
goto v___jp_1861_;
}
}
}
}
v___jp_1924_:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; uint8_t v___x_1930_; 
v___x_1928_ = lean_unsigned_to_nat(1u);
v___x_1929_ = l_Lean_Syntax_getArg(v_x_1853_, v___x_1928_);
v___x_1930_ = l_Lean_Syntax_isNone(v___x_1929_);
if (v___x_1930_ == 0)
{
uint8_t v___x_1931_; 
lean_inc(v___x_1929_);
v___x_1931_ = l_Lean_Syntax_matchesNull(v___x_1929_, v___x_1928_);
if (v___x_1931_ == 0)
{
lean_object* v___x_1932_; 
lean_dec(v___x_1929_);
lean_dec(v_doc_x3f_1925_);
lean_dec(v_x_1853_);
v___x_1932_ = l_Lean_Macro_throwUnsupported___redArg(v___y_1927_);
return v___x_1932_;
}
else
{
lean_object* v_vis_x3f_1933_; lean_object* v___x_1934_; 
v_vis_x3f_1933_ = l_Lean_Syntax_getArg(v___x_1929_, v___x_1893_);
lean_dec(v___x_1929_);
v___x_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1934_, 0, v_vis_x3f_1933_);
v___y_1895_ = v_doc_x3f_1925_;
v___y_1896_ = v___x_1928_;
v_vis_x3f_1897_ = v___x_1934_;
v___y_1898_ = v___y_1926_;
v___y_1899_ = v___y_1927_;
goto v___jp_1894_;
}
}
else
{
lean_object* v___x_1935_; 
lean_dec(v___x_1929_);
v___x_1935_ = lean_box(0);
v___y_1895_ = v_doc_x3f_1925_;
v___y_1896_ = v___x_1928_;
v_vis_x3f_1897_ = v___x_1935_;
v___y_1898_ = v___y_1926_;
v___y_1899_ = v___y_1927_;
goto v___jp_1894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___boxed(lean_object* v_x_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab(v_x_1947_, v_a_1948_, v_a_1949_);
lean_dec_ref(v_a_1948_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1(){
_start:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1958_ = l_Lean_Elab_macroAttribute;
v___x_1959_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1));
v___x_1960_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___closed__1));
v___x_1961_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___boxed), 3, 0);
v___x_1962_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1958_, v___x_1959_, v___x_1960_, v___x_1961_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1___boxed(lean_object* v_a_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1();
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab(lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1969_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_1970_ = lean_unsigned_to_nat(2u);
v___x_1971_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_1969_, v___x_1970_, v_a_1965_, v_a_1966_, v_a_1967_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___boxed(lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab(v_a_1972_, v_a_1973_, v_a_1974_);
lean_dec(v_a_1974_);
lean_dec_ref(v_a_1973_);
lean_dec(v_a_1972_);
return v_res_1976_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0(void){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___boxed), 4, 0);
v___x_1978_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_1978_, 0, v___x_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1(){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1980_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__1));
v___x_1981_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___closed__0);
v___x_1982_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_1980_, v___x_1981_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1___boxed(lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1();
return v_res_1984_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1996_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__8));
v___x_1997_ = l_String_toRawSubstring_x27(v___x_1996_);
return v___x_1997_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14(void){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__13));
v___x_2003_ = l_String_toRawSubstring_x27(v___x_2002_);
return v___x_2003_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__21));
v___x_2019_ = l_String_toRawSubstring_x27(v___x_2018_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1(lean_object* v___x_2022_, lean_object* v___x_2023_, lean_object* v___x_2024_, lean_object* v___x_2025_, lean_object* v___x_2026_, lean_object* v_logExceptions_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
lean_object* v_quotContext_2030_; lean_object* v_currMacroScope_2031_; lean_object* v_ref_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_quotContext_2030_ = lean_ctor_get(v___y_2028_, 1);
v_currMacroScope_2031_ = lean_ctor_get(v___y_2028_, 2);
v_ref_2032_ = lean_ctor_get(v___y_2028_, 5);
v___x_2033_ = 0;
v___x_2034_ = l_Lean_SourceInfo_fromRef(v_ref_2032_, v___x_2033_);
v___x_2035_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1));
v___x_2036_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2));
lean_inc_n(v___x_2034_, 14);
v___x_2037_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2034_);
lean_ctor_set(v___x_2037_, 1, v___x_2036_);
v___x_2038_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3));
lean_inc_ref_n(v___x_2024_, 5);
lean_inc_ref_n(v___x_2023_, 4);
lean_inc_ref_n(v___x_2022_, 9);
v___x_2039_ = l_Lean_Name_mkStr4(v___x_2022_, v___x_2023_, v___x_2024_, v___x_2038_);
v___x_2040_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4));
v___x_2041_ = l_Lean_Name_mkStr4(v___x_2022_, v___x_2023_, v___x_2024_, v___x_2040_);
v___x_2042_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5));
v___x_2043_ = l_Lean_Name_mkStr4(v___x_2022_, v___x_2023_, v___x_2024_, v___x_2042_);
v___x_2044_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97));
v___x_2045_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2034_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v___x_2046_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7));
v___x_2047_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9);
v___x_2048_ = lean_box(0);
lean_inc_n(v_currMacroScope_2031_, 3);
lean_inc_n(v_quotContext_2030_, 3);
v___x_2049_ = l_Lean_addMacroScope(v_quotContext_2030_, v___x_2048_, v_currMacroScope_2031_);
lean_inc_ref_n(v___x_2025_, 2);
v___x_2050_ = l_Lean_Name_mkStr3(v___x_2022_, v___x_2025_, v___x_2026_);
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
v___x_2052_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10));
v___x_2053_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2));
v___x_2054_ = l_Lean_Name_mkStr3(v___x_2022_, v___x_2052_, v___x_2053_);
v___x_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2054_);
v___x_2056_ = l_Lean_Name_mkStr3(v___x_2022_, v___x_2025_, v___x_2053_);
v___x_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
v___x_2058_ = l_Lean_Name_mkStr3(v___x_2022_, v___x_2025_, v___x_2024_);
v___x_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2058_);
v___x_2060_ = l_Lean_Name_mkStr2(v___x_2022_, v___x_2052_);
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
v___x_2062_ = lean_box(0);
v___x_2063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2061_);
lean_ctor_set(v___x_2063_, 1, v___x_2062_);
v___x_2064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2059_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2057_);
lean_ctor_set(v___x_2065_, 1, v___x_2064_);
v___x_2066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2055_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2051_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
v___x_2068_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2034_);
lean_ctor_set(v___x_2068_, 1, v___x_2047_);
lean_ctor_set(v___x_2068_, 2, v___x_2049_);
lean_ctor_set(v___x_2068_, 3, v___x_2067_);
v___x_2069_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2046_, v___x_2068_);
v___x_2070_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2043_, v___x_2045_, v___x_2069_);
v___x_2071_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11));
v___x_2072_ = l_Lean_Name_mkStr4(v___x_2022_, v___x_2023_, v___x_2024_, v___x_2071_);
v___x_2073_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12));
v___x_2074_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2034_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66));
v___x_2076_ = l_Lean_Name_mkStr4(v___x_2022_, v___x_2023_, v___x_2024_, v___x_2075_);
v___x_2077_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14);
v___x_2078_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15));
v___x_2079_ = l_Lean_addMacroScope(v_quotContext_2030_, v___x_2078_, v_currMacroScope_2031_);
v___x_2080_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19));
v___x_2081_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2034_);
lean_ctor_set(v___x_2081_, 1, v___x_2077_);
lean_ctor_set(v___x_2081_, 2, v___x_2079_);
lean_ctor_set(v___x_2081_, 3, v___x_2080_);
v___x_2082_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2076_, v___x_2081_);
v___x_2083_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2072_, v___x_2074_, v___x_2082_);
v___x_2084_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102));
v___x_2085_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2034_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
v___x_2086_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2041_, v___x_2070_, v___x_2083_, v___x_2085_);
v___x_2087_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20));
v___x_2088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2034_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__22);
v___x_2090_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__23));
v___x_2091_ = l_Lean_addMacroScope(v_quotContext_2030_, v___x_2090_, v_currMacroScope_2031_);
v___x_2092_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2034_);
lean_ctor_set(v___x_2092_, 1, v___x_2089_);
lean_ctor_set(v___x_2092_, 2, v___x_2091_);
lean_ctor_set(v___x_2092_, 3, v___x_2062_);
v___x_2093_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2039_, v___x_2086_, v___x_2088_, v___x_2092_);
v___x_2094_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2035_, v_logExceptions_2027_, v___x_2037_, v___x_2093_);
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set(v___x_2095_, 1, v___y_2029_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___boxed(lean_object* v___x_2096_, lean_object* v___x_2097_, lean_object* v___x_2098_, lean_object* v___x_2099_, lean_object* v___x_2100_, lean_object* v_logExceptions_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1(v___x_2096_, v___x_2097_, v___x_2098_, v___x_2099_, v___x_2100_, v_logExceptions_2101_, v___y_2102_, v___y_2103_);
lean_dec_ref(v___y_2102_);
return v_res_2104_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5(void){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__4));
v___x_2124_ = l_Lean_mkCIdent(v___x_2123_);
return v___x_2124_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8(void){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2129_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__7));
v___x_2130_ = l_Lean_mkCIdent(v___x_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab(lean_object* v_x_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v___x_2134_; uint8_t v___x_2135_; 
v___x_2134_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1));
lean_inc(v_x_2131_);
v___x_2135_ = l_Lean_Syntax_isOfKind(v_x_2131_, v___x_2134_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; 
lean_dec(v_x_2131_);
v___x_2136_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2133_);
return v___x_2136_;
}
else
{
lean_object* v___f_2137_; lean_object* v___y_2139_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v_entries_x3f_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___x_2171_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v_vis_x3f_2175_; lean_object* v___y_2176_; lean_object* v___y_2177_; lean_object* v_doc_x3f_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___x_2214_; uint8_t v___x_2215_; 
v___f_2137_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3));
v___x_2171_ = lean_unsigned_to_nat(0u);
v___x_2214_ = l_Lean_Syntax_getArg(v_x_2131_, v___x_2171_);
v___x_2215_ = l_Lean_Syntax_isNone(v___x_2214_);
if (v___x_2215_ == 0)
{
lean_object* v___x_2216_; uint8_t v___x_2217_; 
v___x_2216_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2214_);
v___x_2217_ = l_Lean_Syntax_matchesNull(v___x_2214_, v___x_2216_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; 
lean_dec(v___x_2214_);
lean_dec(v_x_2131_);
v___x_2218_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2133_);
return v___x_2218_;
}
else
{
lean_object* v_doc_x3f_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; 
v_doc_x3f_2219_ = l_Lean_Syntax_getArg(v___x_2214_, v___x_2171_);
lean_dec(v___x_2214_);
v___x_2220_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_2219_);
v___x_2221_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2219_, v___x_2220_);
if (v___x_2221_ == 0)
{
lean_object* v___x_2222_; 
lean_dec(v_doc_x3f_2219_);
lean_dec(v_x_2131_);
v___x_2222_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2133_);
return v___x_2222_;
}
else
{
lean_object* v___x_2223_; 
v___x_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2223_, 0, v_doc_x3f_2219_);
v_doc_x3f_2203_ = v___x_2223_;
v___y_2204_ = v_a_2132_;
v___y_2205_ = v_a_2133_;
goto v___jp_2202_;
}
}
}
else
{
lean_object* v___x_2224_; 
lean_dec(v___x_2214_);
v___x_2224_ = lean_box(0);
v_doc_x3f_2203_ = v___x_2224_;
v___y_2204_ = v_a_2132_;
v___y_2205_ = v_a_2133_;
goto v___jp_2202_;
}
v___jp_2138_:
{
lean_object* v___f_2148_; lean_object* v_binders_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___f_2148_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__2));
v_binders_2149_ = l_Lean_Syntax_getArgs(v___y_2144_);
lean_dec(v___y_2144_);
v___x_2150_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__5);
v___x_2151_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8);
v___x_2152_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_2150_, v___f_2137_, v___x_2151_, v___f_2148_, v___y_2143_, v___y_2142_, v___y_2141_, v___y_2139_, v___y_2140_, v_binders_2149_, v_entries_x3f_2145_, v___y_2146_, v___y_2147_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_object* v_a_2153_; lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
v_a_2154_ = lean_ctor_get(v___x_2152_, 1);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2152_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_inc(v_a_2153_);
lean_dec(v___x_2152_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2153_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
else
{
lean_object* v_a_2162_; lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2170_; 
v_a_2162_ = lean_ctor_get(v___x_2152_, 0);
v_a_2163_ = lean_ctor_get(v___x_2152_, 1);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2165_ = v___x_2152_;
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_inc(v_a_2162_);
lean_dec(v___x_2152_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2168_; 
if (v_isShared_2166_ == 0)
{
v___x_2168_ = v___x_2165_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2162_);
lean_ctor_set(v_reuseFailAlloc_2169_, 1, v_a_2163_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
}
v___jp_2172_:
{
lean_object* v___x_2178_; lean_object* v_elabName_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; 
v___x_2178_ = lean_unsigned_to_nat(3u);
v_elabName_2179_ = l_Lean_Syntax_getArg(v_x_2131_, v___x_2178_);
v___x_2180_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13));
lean_inc(v_elabName_2179_);
v___x_2181_ = l_Lean_Syntax_isOfKind(v_elabName_2179_, v___x_2180_);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; 
lean_dec(v_elabName_2179_);
lean_dec(v_vis_x3f_2175_);
lean_dec(v___y_2174_);
lean_dec(v_x_2131_);
v___x_2182_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2177_);
return v___x_2182_;
}
else
{
lean_object* v___x_2183_; lean_object* v_type_2184_; uint8_t v___x_2185_; 
v___x_2183_ = lean_unsigned_to_nat(4u);
v_type_2184_ = l_Lean_Syntax_getArg(v_x_2131_, v___x_2183_);
lean_inc(v_type_2184_);
v___x_2185_ = l_Lean_Syntax_isOfKind(v_type_2184_, v___x_2180_);
if (v___x_2185_ == 0)
{
lean_object* v___x_2186_; 
lean_dec(v_type_2184_);
lean_dec(v_elabName_2179_);
lean_dec(v_vis_x3f_2175_);
lean_dec(v___y_2174_);
lean_dec(v_x_2131_);
v___x_2186_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2177_);
return v___x_2186_;
}
else
{
lean_object* v___x_2187_; lean_object* v_tk_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; uint8_t v___x_2193_; 
v___x_2187_ = lean_unsigned_to_nat(2u);
v_tk_2188_ = l_Lean_Syntax_getArg(v_x_2131_, v___x_2187_);
v___x_2189_ = lean_unsigned_to_nat(5u);
v___x_2190_ = l_Lean_Syntax_getArg(v_x_2131_, v___x_2189_);
v___x_2191_ = lean_unsigned_to_nat(6u);
v___x_2192_ = l_Lean_Syntax_getArg(v_x_2131_, v___x_2191_);
lean_dec(v_x_2131_);
v___x_2193_ = l_Lean_Syntax_isNone(v___x_2192_);
if (v___x_2193_ == 0)
{
uint8_t v___x_2194_; 
lean_inc(v___x_2192_);
v___x_2194_ = l_Lean_Syntax_matchesNull(v___x_2192_, v___y_2173_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; 
lean_dec(v___x_2192_);
lean_dec(v___x_2190_);
lean_dec(v_tk_2188_);
lean_dec(v_type_2184_);
lean_dec(v_elabName_2179_);
lean_dec(v_vis_x3f_2175_);
lean_dec(v___y_2174_);
v___x_2195_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2177_);
return v___x_2195_;
}
else
{
lean_object* v_entries_x3f_2196_; lean_object* v___x_2197_; uint8_t v___x_2198_; 
v_entries_x3f_2196_ = l_Lean_Syntax_getArg(v___x_2192_, v___x_2171_);
lean_dec(v___x_2192_);
v___x_2197_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_2196_);
v___x_2198_ = l_Lean_Syntax_isOfKind(v_entries_x3f_2196_, v___x_2197_);
if (v___x_2198_ == 0)
{
lean_object* v___x_2199_; 
lean_dec(v_entries_x3f_2196_);
lean_dec(v___x_2190_);
lean_dec(v_tk_2188_);
lean_dec(v_type_2184_);
lean_dec(v_elabName_2179_);
lean_dec(v_vis_x3f_2175_);
lean_dec(v___y_2174_);
v___x_2199_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2177_);
return v___x_2199_;
}
else
{
lean_object* v___x_2200_; 
v___x_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_entries_x3f_2196_);
v___y_2139_ = v_elabName_2179_;
v___y_2140_ = v_type_2184_;
v___y_2141_ = v_tk_2188_;
v___y_2142_ = v_vis_x3f_2175_;
v___y_2143_ = v___y_2174_;
v___y_2144_ = v___x_2190_;
v_entries_x3f_2145_ = v___x_2200_;
v___y_2146_ = v___y_2176_;
v___y_2147_ = v___y_2177_;
goto v___jp_2138_;
}
}
}
else
{
lean_object* v___x_2201_; 
lean_dec(v___x_2192_);
v___x_2201_ = lean_box(0);
v___y_2139_ = v_elabName_2179_;
v___y_2140_ = v_type_2184_;
v___y_2141_ = v_tk_2188_;
v___y_2142_ = v_vis_x3f_2175_;
v___y_2143_ = v___y_2174_;
v___y_2144_ = v___x_2190_;
v_entries_x3f_2145_ = v___x_2201_;
v___y_2146_ = v___y_2176_;
v___y_2147_ = v___y_2177_;
goto v___jp_2138_;
}
}
}
}
v___jp_2202_:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; 
v___x_2206_ = lean_unsigned_to_nat(1u);
v___x_2207_ = l_Lean_Syntax_getArg(v_x_2131_, v___x_2206_);
v___x_2208_ = l_Lean_Syntax_isNone(v___x_2207_);
if (v___x_2208_ == 0)
{
uint8_t v___x_2209_; 
lean_inc(v___x_2207_);
v___x_2209_ = l_Lean_Syntax_matchesNull(v___x_2207_, v___x_2206_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; 
lean_dec(v___x_2207_);
lean_dec(v_doc_x3f_2203_);
lean_dec(v_x_2131_);
v___x_2210_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2205_);
return v___x_2210_;
}
else
{
lean_object* v_vis_x3f_2211_; lean_object* v___x_2212_; 
v_vis_x3f_2211_ = l_Lean_Syntax_getArg(v___x_2207_, v___x_2171_);
lean_dec(v___x_2207_);
v___x_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2212_, 0, v_vis_x3f_2211_);
v___y_2173_ = v___x_2206_;
v___y_2174_ = v_doc_x3f_2203_;
v_vis_x3f_2175_ = v___x_2212_;
v___y_2176_ = v___y_2204_;
v___y_2177_ = v___y_2205_;
goto v___jp_2172_;
}
}
else
{
lean_object* v___x_2213_; 
lean_dec(v___x_2207_);
v___x_2213_ = lean_box(0);
v___y_2173_ = v___x_2206_;
v___y_2174_ = v_doc_x3f_2203_;
v_vis_x3f_2175_ = v___x_2213_;
v___y_2176_ = v___y_2204_;
v___y_2177_ = v___y_2205_;
goto v___jp_2172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___boxed(lean_object* v_x_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab(v_x_2225_, v_a_2226_, v_a_2227_);
lean_dec_ref(v_a_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1(){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2236_ = l_Lean_Elab_macroAttribute;
v___x_2237_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__1));
v___x_2238_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1));
v___x_2239_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___boxed), 3, 0);
v___x_2240_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2236_, v___x_2237_, v___x_2238_, v___x_2239_);
return v___x_2240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___boxed(lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1();
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab(lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2247_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_2248_ = lean_unsigned_to_nat(2u);
v___x_2249_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_2247_, v___x_2248_, v_a_2243_, v_a_2244_, v_a_2245_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___boxed(lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab(v_a_2250_, v_a_2251_, v_a_2252_);
lean_dec(v_a_2252_);
lean_dec_ref(v_a_2251_);
lean_dec(v_a_2250_);
return v_res_2254_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___boxed), 4, 0);
v___x_2256_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1(){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2258_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1___closed__1));
v___x_2259_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___closed__0);
v___x_2260_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_2258_, v___x_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1___boxed(lean_object* v_a_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1();
return v_res_2262_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__0));
v___x_2265_ = l_String_toRawSubstring_x27(v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1(lean_object* v___x_2268_, lean_object* v___x_2269_, lean_object* v___x_2270_, lean_object* v___x_2271_, lean_object* v___x_2272_, lean_object* v_logExceptions_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_quotContext_2276_; lean_object* v_currMacroScope_2277_; lean_object* v_ref_2278_; uint8_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v_quotContext_2276_ = lean_ctor_get(v___y_2274_, 1);
v_currMacroScope_2277_ = lean_ctor_get(v___y_2274_, 2);
v_ref_2278_ = lean_ctor_get(v___y_2274_, 5);
v___x_2279_ = 0;
v___x_2280_ = l_Lean_SourceInfo_fromRef(v_ref_2278_, v___x_2279_);
v___x_2281_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__1));
v___x_2282_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__2));
lean_inc_n(v___x_2280_, 14);
v___x_2283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2280_);
lean_ctor_set(v___x_2283_, 1, v___x_2282_);
v___x_2284_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__3));
lean_inc_ref_n(v___x_2270_, 5);
lean_inc_ref_n(v___x_2269_, 4);
lean_inc_ref_n(v___x_2268_, 9);
v___x_2285_ = l_Lean_Name_mkStr4(v___x_2268_, v___x_2269_, v___x_2270_, v___x_2284_);
v___x_2286_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__4));
v___x_2287_ = l_Lean_Name_mkStr4(v___x_2268_, v___x_2269_, v___x_2270_, v___x_2286_);
v___x_2288_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__5));
v___x_2289_ = l_Lean_Name_mkStr4(v___x_2268_, v___x_2269_, v___x_2270_, v___x_2288_);
v___x_2290_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__97));
v___x_2291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2280_);
lean_ctor_set(v___x_2291_, 1, v___x_2290_);
v___x_2292_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__7));
v___x_2293_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__9);
v___x_2294_ = lean_box(0);
lean_inc_n(v_currMacroScope_2277_, 3);
lean_inc_n(v_quotContext_2276_, 3);
v___x_2295_ = l_Lean_addMacroScope(v_quotContext_2276_, v___x_2294_, v_currMacroScope_2277_);
lean_inc_ref_n(v___x_2271_, 2);
v___x_2296_ = l_Lean_Name_mkStr3(v___x_2268_, v___x_2271_, v___x_2272_);
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
v___x_2298_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__10));
v___x_2299_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__2));
v___x_2300_ = l_Lean_Name_mkStr3(v___x_2268_, v___x_2298_, v___x_2299_);
v___x_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
v___x_2302_ = l_Lean_Name_mkStr3(v___x_2268_, v___x_2271_, v___x_2299_);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
v___x_2304_ = l_Lean_Name_mkStr3(v___x_2268_, v___x_2271_, v___x_2270_);
v___x_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
v___x_2306_ = l_Lean_Name_mkStr2(v___x_2268_, v___x_2298_);
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
v___x_2308_ = lean_box(0);
v___x_2309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2307_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
v___x_2310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2305_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
v___x_2311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2303_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2301_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
v___x_2313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2297_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
v___x_2314_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2280_);
lean_ctor_set(v___x_2314_, 1, v___x_2293_);
lean_ctor_set(v___x_2314_, 2, v___x_2295_);
lean_ctor_set(v___x_2314_, 3, v___x_2313_);
v___x_2315_ = l_Lean_Syntax_node1(v___x_2280_, v___x_2292_, v___x_2314_);
v___x_2316_ = l_Lean_Syntax_node2(v___x_2280_, v___x_2289_, v___x_2291_, v___x_2315_);
v___x_2317_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__11));
v___x_2318_ = l_Lean_Name_mkStr4(v___x_2268_, v___x_2269_, v___x_2270_, v___x_2317_);
v___x_2319_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__12));
v___x_2320_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2280_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__66));
v___x_2322_ = l_Lean_Name_mkStr4(v___x_2268_, v___x_2269_, v___x_2270_, v___x_2321_);
v___x_2323_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__14);
v___x_2324_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__15));
v___x_2325_ = l_Lean_addMacroScope(v_quotContext_2276_, v___x_2324_, v_currMacroScope_2277_);
v___x_2326_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__19));
v___x_2327_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2280_);
lean_ctor_set(v___x_2327_, 1, v___x_2323_);
lean_ctor_set(v___x_2327_, 2, v___x_2325_);
lean_ctor_set(v___x_2327_, 3, v___x_2326_);
v___x_2328_ = l_Lean_Syntax_node1(v___x_2280_, v___x_2322_, v___x_2327_);
v___x_2329_ = l_Lean_Syntax_node2(v___x_2280_, v___x_2318_, v___x_2320_, v___x_2328_);
v___x_2330_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__102));
v___x_2331_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2280_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
v___x_2332_ = l_Lean_Syntax_node3(v___x_2280_, v___x_2287_, v___x_2316_, v___x_2329_, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___lam__1___closed__20));
v___x_2334_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2280_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1, &l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__1);
v___x_2336_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___closed__2));
v___x_2337_ = l_Lean_addMacroScope(v_quotContext_2276_, v___x_2336_, v_currMacroScope_2277_);
v___x_2338_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2280_);
lean_ctor_set(v___x_2338_, 1, v___x_2335_);
lean_ctor_set(v___x_2338_, 2, v___x_2337_);
lean_ctor_set(v___x_2338_, 3, v___x_2308_);
v___x_2339_ = l_Lean_Syntax_node3(v___x_2280_, v___x_2285_, v___x_2332_, v___x_2334_, v___x_2338_);
v___x_2340_ = l_Lean_Syntax_node3(v___x_2280_, v___x_2281_, v_logExceptions_2273_, v___x_2283_, v___x_2339_);
v___x_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2340_);
lean_ctor_set(v___x_2341_, 1, v___y_2275_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1___boxed(lean_object* v___x_2342_, lean_object* v___x_2343_, lean_object* v___x_2344_, lean_object* v___x_2345_, lean_object* v___x_2346_, lean_object* v_logExceptions_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
lean_object* v_res_2350_; 
v_res_2350_ = l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___lam__1(v___x_2342_, v___x_2343_, v___x_2344_, v___x_2345_, v___x_2346_, v_logExceptions_2347_, v___y_2348_, v___y_2349_);
lean_dec_ref(v___y_2348_);
return v_res_2350_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__5));
v___x_2371_ = l_Lean_mkCIdent(v___x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig(lean_object* v_x_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_){
_start:
{
lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2375_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1));
lean_inc(v_x_2372_);
v___x_2376_ = l_Lean_Syntax_isOfKind(v_x_2372_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; 
lean_dec(v_x_2372_);
v___x_2377_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2374_);
return v___x_2377_;
}
else
{
lean_object* v___f_2378_; lean_object* v___y_2380_; lean_object* v___y_2381_; lean_object* v___y_2382_; lean_object* v___y_2383_; lean_object* v___y_2384_; lean_object* v___y_2385_; lean_object* v_entries_x3f_2386_; lean_object* v___y_2387_; lean_object* v___y_2388_; lean_object* v___x_2412_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v_vis_x3f_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v_doc_x3f_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___x_2455_; uint8_t v___x_2456_; 
v___f_2378_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__3));
v___x_2412_ = lean_unsigned_to_nat(0u);
v___x_2455_ = l_Lean_Syntax_getArg(v_x_2372_, v___x_2412_);
v___x_2456_ = l_Lean_Syntax_isNone(v___x_2455_);
if (v___x_2456_ == 0)
{
lean_object* v___x_2457_; uint8_t v___x_2458_; 
v___x_2457_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2455_);
v___x_2458_ = l_Lean_Syntax_matchesNull(v___x_2455_, v___x_2457_);
if (v___x_2458_ == 0)
{
lean_object* v___x_2459_; 
lean_dec(v___x_2455_);
lean_dec(v_x_2372_);
v___x_2459_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2374_);
return v___x_2459_;
}
else
{
lean_object* v_doc_x3f_2460_; lean_object* v___x_2461_; uint8_t v___x_2462_; 
v_doc_x3f_2460_ = l_Lean_Syntax_getArg(v___x_2455_, v___x_2412_);
lean_dec(v___x_2455_);
v___x_2461_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_2460_);
v___x_2462_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2460_, v___x_2461_);
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; 
lean_dec(v_doc_x3f_2460_);
lean_dec(v_x_2372_);
v___x_2463_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2374_);
return v___x_2463_;
}
else
{
lean_object* v___x_2464_; 
v___x_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2464_, 0, v_doc_x3f_2460_);
v_doc_x3f_2444_ = v___x_2464_;
v___y_2445_ = v_a_2373_;
v___y_2446_ = v_a_2374_;
goto v___jp_2443_;
}
}
}
else
{
lean_object* v___x_2465_; 
lean_dec(v___x_2455_);
v___x_2465_ = lean_box(0);
v_doc_x3f_2444_ = v___x_2465_;
v___y_2445_ = v_a_2373_;
v___y_2446_ = v_a_2374_;
goto v___jp_2443_;
}
v___jp_2379_:
{
lean_object* v___f_2389_; lean_object* v_binders_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___f_2389_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__2));
v_binders_2390_ = l_Lean_Syntax_getArgs(v___y_2383_);
lean_dec(v___y_2383_);
v___x_2391_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6, &l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__6);
v___x_2392_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8);
v___x_2393_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_2391_, v___f_2378_, v___x_2392_, v___f_2389_, v___y_2384_, v___y_2381_, v___y_2385_, v___y_2382_, v___y_2380_, v_binders_2390_, v_entries_x3f_2386_, v___y_2387_, v___y_2388_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v_a_2394_; lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
v_a_2395_ = lean_ctor_get(v___x_2393_, 1);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2393_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2393_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_inc(v_a_2394_);
lean_dec(v___x_2393_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2394_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
v_a_2403_ = lean_ctor_get(v___x_2393_, 0);
v_a_2404_ = lean_ctor_get(v___x_2393_, 1);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2393_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2393_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_inc(v_a_2403_);
lean_dec(v___x_2393_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2403_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
v___jp_2413_:
{
lean_object* v___x_2419_; lean_object* v_elabName_2420_; lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2419_ = lean_unsigned_to_nat(3u);
v_elabName_2420_ = l_Lean_Syntax_getArg(v_x_2372_, v___x_2419_);
v___x_2421_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13));
lean_inc(v_elabName_2420_);
v___x_2422_ = l_Lean_Syntax_isOfKind(v_elabName_2420_, v___x_2421_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; 
lean_dec(v_elabName_2420_);
lean_dec(v_vis_x3f_2416_);
lean_dec(v___y_2415_);
lean_dec(v_x_2372_);
v___x_2423_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2418_);
return v___x_2423_;
}
else
{
lean_object* v___x_2424_; lean_object* v_type_2425_; uint8_t v___x_2426_; 
v___x_2424_ = lean_unsigned_to_nat(4u);
v_type_2425_ = l_Lean_Syntax_getArg(v_x_2372_, v___x_2424_);
lean_inc(v_type_2425_);
v___x_2426_ = l_Lean_Syntax_isOfKind(v_type_2425_, v___x_2421_);
if (v___x_2426_ == 0)
{
lean_object* v___x_2427_; 
lean_dec(v_type_2425_);
lean_dec(v_elabName_2420_);
lean_dec(v_vis_x3f_2416_);
lean_dec(v___y_2415_);
lean_dec(v_x_2372_);
v___x_2427_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2418_);
return v___x_2427_;
}
else
{
lean_object* v___x_2428_; lean_object* v_tk_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; 
v___x_2428_ = lean_unsigned_to_nat(2u);
v_tk_2429_ = l_Lean_Syntax_getArg(v_x_2372_, v___x_2428_);
v___x_2430_ = lean_unsigned_to_nat(5u);
v___x_2431_ = l_Lean_Syntax_getArg(v_x_2372_, v___x_2430_);
v___x_2432_ = lean_unsigned_to_nat(6u);
v___x_2433_ = l_Lean_Syntax_getArg(v_x_2372_, v___x_2432_);
lean_dec(v_x_2372_);
v___x_2434_ = l_Lean_Syntax_isNone(v___x_2433_);
if (v___x_2434_ == 0)
{
uint8_t v___x_2435_; 
lean_inc(v___x_2433_);
v___x_2435_ = l_Lean_Syntax_matchesNull(v___x_2433_, v___y_2414_);
if (v___x_2435_ == 0)
{
lean_object* v___x_2436_; 
lean_dec(v___x_2433_);
lean_dec(v___x_2431_);
lean_dec(v_tk_2429_);
lean_dec(v_type_2425_);
lean_dec(v_elabName_2420_);
lean_dec(v_vis_x3f_2416_);
lean_dec(v___y_2415_);
v___x_2436_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2418_);
return v___x_2436_;
}
else
{
lean_object* v_entries_x3f_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; 
v_entries_x3f_2437_ = l_Lean_Syntax_getArg(v___x_2433_, v___x_2412_);
lean_dec(v___x_2433_);
v___x_2438_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_2437_);
v___x_2439_ = l_Lean_Syntax_isOfKind(v_entries_x3f_2437_, v___x_2438_);
if (v___x_2439_ == 0)
{
lean_object* v___x_2440_; 
lean_dec(v_entries_x3f_2437_);
lean_dec(v___x_2431_);
lean_dec(v_tk_2429_);
lean_dec(v_type_2425_);
lean_dec(v_elabName_2420_);
lean_dec(v_vis_x3f_2416_);
lean_dec(v___y_2415_);
v___x_2440_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2418_);
return v___x_2440_;
}
else
{
lean_object* v___x_2441_; 
v___x_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2441_, 0, v_entries_x3f_2437_);
v___y_2380_ = v_type_2425_;
v___y_2381_ = v_vis_x3f_2416_;
v___y_2382_ = v_elabName_2420_;
v___y_2383_ = v___x_2431_;
v___y_2384_ = v___y_2415_;
v___y_2385_ = v_tk_2429_;
v_entries_x3f_2386_ = v___x_2441_;
v___y_2387_ = v___y_2417_;
v___y_2388_ = v___y_2418_;
goto v___jp_2379_;
}
}
}
else
{
lean_object* v___x_2442_; 
lean_dec(v___x_2433_);
v___x_2442_ = lean_box(0);
v___y_2380_ = v_type_2425_;
v___y_2381_ = v_vis_x3f_2416_;
v___y_2382_ = v_elabName_2420_;
v___y_2383_ = v___x_2431_;
v___y_2384_ = v___y_2415_;
v___y_2385_ = v_tk_2429_;
v_entries_x3f_2386_ = v___x_2442_;
v___y_2387_ = v___y_2417_;
v___y_2388_ = v___y_2418_;
goto v___jp_2379_;
}
}
}
}
v___jp_2443_:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; uint8_t v___x_2449_; 
v___x_2447_ = lean_unsigned_to_nat(1u);
v___x_2448_ = l_Lean_Syntax_getArg(v_x_2372_, v___x_2447_);
v___x_2449_ = l_Lean_Syntax_isNone(v___x_2448_);
if (v___x_2449_ == 0)
{
uint8_t v___x_2450_; 
lean_inc(v___x_2448_);
v___x_2450_ = l_Lean_Syntax_matchesNull(v___x_2448_, v___x_2447_);
if (v___x_2450_ == 0)
{
lean_object* v___x_2451_; 
lean_dec(v___x_2448_);
lean_dec(v_doc_x3f_2444_);
lean_dec(v_x_2372_);
v___x_2451_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2446_);
return v___x_2451_;
}
else
{
lean_object* v_vis_x3f_2452_; lean_object* v___x_2453_; 
v_vis_x3f_2452_ = l_Lean_Syntax_getArg(v___x_2448_, v___x_2412_);
lean_dec(v___x_2448_);
v___x_2453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2453_, 0, v_vis_x3f_2452_);
v___y_2414_ = v___x_2447_;
v___y_2415_ = v_doc_x3f_2444_;
v_vis_x3f_2416_ = v___x_2453_;
v___y_2417_ = v___y_2445_;
v___y_2418_ = v___y_2446_;
goto v___jp_2413_;
}
}
else
{
lean_object* v___x_2454_; 
lean_dec(v___x_2448_);
v___x_2454_ = lean_box(0);
v___y_2414_ = v___x_2447_;
v___y_2415_ = v_doc_x3f_2444_;
v_vis_x3f_2416_ = v___x_2454_;
v___y_2417_ = v___y_2445_;
v___y_2418_ = v___y_2446_;
goto v___jp_2413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___boxed(lean_object* v_x_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l_Lean_Elab_ConfigEval_elabDeclareTacticConfig(v_x_2466_, v_a_2467_, v_a_2468_);
lean_dec_ref(v_a_2467_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1(){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2477_ = l_Lean_Elab_macroAttribute;
v___x_2478_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___closed__1));
v___x_2479_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1));
v___x_2480_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareTacticConfig___boxed), 3, 0);
v___x_2481_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2477_, v___x_2478_, v___x_2479_, v___x_2480_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___boxed(lean_object* v_a_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1();
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig(lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_2489_ = lean_unsigned_to_nat(2u);
v___x_2490_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_2488_, v___x_2489_, v_a_2484_, v_a_2485_, v_a_2486_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___boxed(lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig(v_a_2491_, v_a_2492_, v_a_2493_);
lean_dec(v_a_2493_);
lean_dec_ref(v_a_2492_);
lean_dec(v_a_2491_);
return v_res_2495_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0(void){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___boxed), 4, 0);
v___x_2497_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_2497_, 0, v___x_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1(){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2499_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1___closed__1));
v___x_2500_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___closed__0);
v___x_2501_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_2499_, v___x_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1___boxed(lean_object* v_a_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1();
return v_res_2503_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__0));
v___x_2506_ = l_String_toRawSubstring_x27(v___x_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1(lean_object* v___x_2508_, lean_object* v___x_2509_, lean_object* v___x_2510_, lean_object* v___x_2511_, lean_object* v___x_2512_, lean_object* v_eval_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_quotContext_2516_; lean_object* v_currMacroScope_2517_; lean_object* v_ref_2518_; uint8_t v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v_quotContext_2516_ = lean_ctor_get(v___y_2514_, 1);
v_currMacroScope_2517_ = lean_ctor_get(v___y_2514_, 2);
v_ref_2518_ = lean_ctor_get(v___y_2514_, 5);
v___x_2519_ = 0;
v___x_2520_ = l_Lean_SourceInfo_fromRef(v_ref_2518_, v___x_2519_);
v___x_2521_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd___closed__82));
lean_inc_ref(v___x_2508_);
v___x_2522_ = l_Lean_Name_mkStr4(v___x_2508_, v___x_2509_, v___x_2510_, v___x_2521_);
v___x_2523_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1, &l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__1);
v___x_2524_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___closed__2));
lean_inc_ref(v___x_2511_);
v___x_2525_ = l_Lean_Name_mkStr2(v___x_2511_, v___x_2524_);
lean_inc(v_currMacroScope_2517_);
lean_inc(v_quotContext_2516_);
v___x_2526_ = l_Lean_addMacroScope(v_quotContext_2516_, v___x_2525_, v_currMacroScope_2517_);
v___x_2527_ = l_Lean_Name_mkStr4(v___x_2508_, v___x_2512_, v___x_2511_, v___x_2524_);
v___x_2528_ = lean_box(0);
lean_inc(v___x_2527_);
v___x_2529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2527_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2527_);
v___x_2531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
lean_ctor_set(v___x_2531_, 1, v___x_2528_);
v___x_2532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2529_);
lean_ctor_set(v___x_2532_, 1, v___x_2531_);
lean_inc_n(v___x_2520_, 2);
v___x_2533_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2520_);
lean_ctor_set(v___x_2533_, 1, v___x_2523_);
lean_ctor_set(v___x_2533_, 2, v___x_2526_);
lean_ctor_set(v___x_2533_, 3, v___x_2532_);
v___x_2534_ = ((lean_object*)(l_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___closed__3));
v___x_2535_ = l_Lean_Syntax_node1(v___x_2520_, v___x_2534_, v_eval_2513_);
v___x_2536_ = l_Lean_Syntax_node2(v___x_2520_, v___x_2522_, v___x_2533_, v___x_2535_);
v___x_2537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2536_);
lean_ctor_set(v___x_2537_, 1, v___y_2515_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1___boxed(lean_object* v___x_2538_, lean_object* v___x_2539_, lean_object* v___x_2540_, lean_object* v___x_2541_, lean_object* v___x_2542_, lean_object* v_eval_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___lam__1(v___x_2538_, v___x_2539_, v___x_2540_, v___x_2541_, v___x_2542_, v_eval_2543_, v___y_2544_, v___y_2545_);
lean_dec_ref(v___y_2544_);
return v_res_2546_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__4));
v___x_2566_ = l_Lean_mkCIdent(v___x_2565_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig(lean_object* v_x_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_){
_start:
{
lean_object* v___x_2570_; uint8_t v___x_2571_; 
v___x_2570_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1));
lean_inc(v_x_2567_);
v___x_2571_ = l_Lean_Syntax_isOfKind(v_x_2567_, v___x_2570_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2572_; 
lean_dec(v_x_2567_);
v___x_2572_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2569_);
return v___x_2572_;
}
else
{
lean_object* v___f_2573_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v_entries_x3f_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___x_2607_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v_vis_x3f_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v_doc_x3f_2639_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___x_2650_; uint8_t v___x_2651_; 
v___f_2573_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___closed__2));
v___x_2607_ = lean_unsigned_to_nat(0u);
v___x_2650_ = l_Lean_Syntax_getArg(v_x_2567_, v___x_2607_);
v___x_2651_ = l_Lean_Syntax_isNone(v___x_2650_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; uint8_t v___x_2653_; 
v___x_2652_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_2650_);
v___x_2653_ = l_Lean_Syntax_matchesNull(v___x_2650_, v___x_2652_);
if (v___x_2653_ == 0)
{
lean_object* v___x_2654_; 
lean_dec(v___x_2650_);
lean_dec(v_x_2567_);
v___x_2654_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2569_);
return v___x_2654_;
}
else
{
lean_object* v_doc_x3f_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; 
v_doc_x3f_2655_ = l_Lean_Syntax_getArg(v___x_2650_, v___x_2607_);
lean_dec(v___x_2650_);
v___x_2656_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___closed__4));
lean_inc(v_doc_x3f_2655_);
v___x_2657_ = l_Lean_Syntax_isOfKind(v_doc_x3f_2655_, v___x_2656_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; 
lean_dec(v_doc_x3f_2655_);
lean_dec(v_x_2567_);
v___x_2658_ = l_Lean_Macro_throwUnsupported___redArg(v_a_2569_);
return v___x_2658_;
}
else
{
lean_object* v___x_2659_; 
v___x_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2659_, 0, v_doc_x3f_2655_);
v_doc_x3f_2639_ = v___x_2659_;
v___y_2640_ = v_a_2568_;
v___y_2641_ = v_a_2569_;
goto v___jp_2638_;
}
}
}
else
{
lean_object* v___x_2660_; 
lean_dec(v___x_2650_);
v___x_2660_ = lean_box(0);
v_doc_x3f_2639_ = v___x_2660_;
v___y_2640_ = v_a_2568_;
v___y_2641_ = v_a_2569_;
goto v___jp_2638_;
}
v___jp_2574_:
{
lean_object* v_binders_2584_; lean_object* v___f_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v_binders_2584_ = l_Lean_Syntax_getArgs(v___y_2576_);
lean_dec(v___y_2576_);
v___f_2585_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__2));
v___x_2586_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5, &l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5_once, _init_l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__5);
v___x_2587_ = lean_obj_once(&l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8, &l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8_once, _init_l_Lean_Elab_ConfigEval_elabDeclareTermConfigElab___closed__8);
v___x_2588_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_mkElabConfigCmd(v___x_2586_, v___f_2585_, v___x_2587_, v___f_2573_, v___y_2578_, v___y_2579_, v___y_2577_, v___y_2575_, v___y_2580_, v_binders_2584_, v_entries_x3f_2581_, v___y_2582_, v___y_2583_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2597_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
v_a_2590_ = lean_ctor_get(v___x_2588_, 1);
v_isSharedCheck_2597_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2592_ = v___x_2588_;
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_inc(v_a_2589_);
lean_dec(v___x_2588_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2597_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2595_; 
if (v_isShared_2593_ == 0)
{
v___x_2595_ = v___x_2592_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2589_);
lean_ctor_set(v_reuseFailAlloc_2596_, 1, v_a_2590_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
else
{
lean_object* v_a_2598_; lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
v_a_2598_ = lean_ctor_get(v___x_2588_, 0);
v_a_2599_ = lean_ctor_get(v___x_2588_, 1);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2588_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_inc(v_a_2598_);
lean_dec(v___x_2588_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2598_);
lean_ctor_set(v_reuseFailAlloc_2605_, 1, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
v___jp_2608_:
{
lean_object* v___x_2614_; lean_object* v_elabName_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; 
v___x_2614_ = lean_unsigned_to_nat(3u);
v_elabName_2615_ = l_Lean_Syntax_getArg(v_x_2567_, v___x_2614_);
v___x_2616_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ConfigEval_mkEvalConfigItemView_spec__4___redArg___closed__13));
lean_inc(v_elabName_2615_);
v___x_2617_ = l_Lean_Syntax_isOfKind(v_elabName_2615_, v___x_2616_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; 
lean_dec(v_elabName_2615_);
lean_dec(v_vis_x3f_2611_);
lean_dec(v___y_2609_);
lean_dec(v_x_2567_);
v___x_2618_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2613_);
return v___x_2618_;
}
else
{
lean_object* v___x_2619_; lean_object* v_type_2620_; uint8_t v___x_2621_; 
v___x_2619_ = lean_unsigned_to_nat(4u);
v_type_2620_ = l_Lean_Syntax_getArg(v_x_2567_, v___x_2619_);
lean_inc(v_type_2620_);
v___x_2621_ = l_Lean_Syntax_isOfKind(v_type_2620_, v___x_2616_);
if (v___x_2621_ == 0)
{
lean_object* v___x_2622_; 
lean_dec(v_type_2620_);
lean_dec(v_elabName_2615_);
lean_dec(v_vis_x3f_2611_);
lean_dec(v___y_2609_);
lean_dec(v_x_2567_);
v___x_2622_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2613_);
return v___x_2622_;
}
else
{
lean_object* v___x_2623_; lean_object* v_tk_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; uint8_t v___x_2629_; 
v___x_2623_ = lean_unsigned_to_nat(2u);
v_tk_2624_ = l_Lean_Syntax_getArg(v_x_2567_, v___x_2623_);
v___x_2625_ = lean_unsigned_to_nat(5u);
v___x_2626_ = l_Lean_Syntax_getArg(v_x_2567_, v___x_2625_);
v___x_2627_ = lean_unsigned_to_nat(6u);
v___x_2628_ = l_Lean_Syntax_getArg(v_x_2567_, v___x_2627_);
lean_dec(v_x_2567_);
v___x_2629_ = l_Lean_Syntax_isNone(v___x_2628_);
if (v___x_2629_ == 0)
{
uint8_t v___x_2630_; 
lean_inc(v___x_2628_);
v___x_2630_ = l_Lean_Syntax_matchesNull(v___x_2628_, v___y_2610_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2631_; 
lean_dec(v___x_2628_);
lean_dec(v___x_2626_);
lean_dec(v_tk_2624_);
lean_dec(v_type_2620_);
lean_dec(v_elabName_2615_);
lean_dec(v_vis_x3f_2611_);
lean_dec(v___y_2609_);
v___x_2631_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2613_);
return v___x_2631_;
}
else
{
lean_object* v_entries_x3f_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; 
v_entries_x3f_2632_ = l_Lean_Syntax_getArg(v___x_2628_, v___x_2607_);
lean_dec(v___x_2628_);
v___x_2633_ = ((lean_object*)(l_Lean_Elab_ConfigEval_mkEvalConfigItemView___closed__3));
lean_inc(v_entries_x3f_2632_);
v___x_2634_ = l_Lean_Syntax_isOfKind(v_entries_x3f_2632_, v___x_2633_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; 
lean_dec(v_entries_x3f_2632_);
lean_dec(v___x_2626_);
lean_dec(v_tk_2624_);
lean_dec(v_type_2620_);
lean_dec(v_elabName_2615_);
lean_dec(v_vis_x3f_2611_);
lean_dec(v___y_2609_);
v___x_2635_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2613_);
return v___x_2635_;
}
else
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2636_, 0, v_entries_x3f_2632_);
v___y_2575_ = v_elabName_2615_;
v___y_2576_ = v___x_2626_;
v___y_2577_ = v_tk_2624_;
v___y_2578_ = v___y_2609_;
v___y_2579_ = v_vis_x3f_2611_;
v___y_2580_ = v_type_2620_;
v_entries_x3f_2581_ = v___x_2636_;
v___y_2582_ = v___y_2612_;
v___y_2583_ = v___y_2613_;
goto v___jp_2574_;
}
}
}
else
{
lean_object* v___x_2637_; 
lean_dec(v___x_2628_);
v___x_2637_ = lean_box(0);
v___y_2575_ = v_elabName_2615_;
v___y_2576_ = v___x_2626_;
v___y_2577_ = v_tk_2624_;
v___y_2578_ = v___y_2609_;
v___y_2579_ = v_vis_x3f_2611_;
v___y_2580_ = v_type_2620_;
v_entries_x3f_2581_ = v___x_2637_;
v___y_2582_ = v___y_2612_;
v___y_2583_ = v___y_2613_;
goto v___jp_2574_;
}
}
}
}
v___jp_2638_:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; uint8_t v___x_2644_; 
v___x_2642_ = lean_unsigned_to_nat(1u);
v___x_2643_ = l_Lean_Syntax_getArg(v_x_2567_, v___x_2642_);
v___x_2644_ = l_Lean_Syntax_isNone(v___x_2643_);
if (v___x_2644_ == 0)
{
uint8_t v___x_2645_; 
lean_inc(v___x_2643_);
v___x_2645_ = l_Lean_Syntax_matchesNull(v___x_2643_, v___x_2642_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; 
lean_dec(v___x_2643_);
lean_dec(v_doc_x3f_2639_);
lean_dec(v_x_2567_);
v___x_2646_ = l_Lean_Macro_throwUnsupported___redArg(v___y_2641_);
return v___x_2646_;
}
else
{
lean_object* v_vis_x3f_2647_; lean_object* v___x_2648_; 
v_vis_x3f_2647_ = l_Lean_Syntax_getArg(v___x_2643_, v___x_2607_);
lean_dec(v___x_2643_);
v___x_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2648_, 0, v_vis_x3f_2647_);
v___y_2609_ = v_doc_x3f_2639_;
v___y_2610_ = v___x_2642_;
v_vis_x3f_2611_ = v___x_2648_;
v___y_2612_ = v___y_2640_;
v___y_2613_ = v___y_2641_;
goto v___jp_2608_;
}
}
else
{
lean_object* v___x_2649_; 
lean_dec(v___x_2643_);
v___x_2649_ = lean_box(0);
v___y_2609_ = v_doc_x3f_2639_;
v___y_2610_ = v___x_2642_;
v_vis_x3f_2611_ = v___x_2649_;
v___y_2612_ = v___y_2640_;
v___y_2613_ = v___y_2641_;
goto v___jp_2608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___boxed(lean_object* v_x_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l_Lean_Elab_ConfigEval_elabDeclareCommandConfig(v_x_2661_, v_a_2662_, v_a_2663_);
lean_dec_ref(v_a_2662_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1(){
_start:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2672_ = l_Lean_Elab_macroAttribute;
v___x_2673_ = ((lean_object*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___closed__1));
v___x_2674_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1));
v___x_2675_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_elabDeclareCommandConfig___boxed), 3, 0);
v___x_2676_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2672_, v___x_2673_, v___x_2674_, v___x_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___boxed(lean_object* v_a_2677_){
_start:
{
lean_object* v_res_2678_; 
v_res_2678_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1();
return v_res_2678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab(lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_){
_start:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2683_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___closed__0));
v___x_2684_ = lean_unsigned_to_nat(2u);
v___x_2685_ = l_Lean_Linter_MissingDocs_mkSimpleHandler(v___x_2683_, v___x_2684_, v_a_2679_, v_a_2680_, v_a_2681_);
return v___x_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___boxed(lean_object* v_a_2686_, lean_object* v_a_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab(v_a_2686_, v_a_2687_, v_a_2688_);
lean_dec(v_a_2688_);
lean_dec_ref(v_a_2687_);
lean_dec(v_a_2686_);
return v_res_2690_;
}
}
static lean_object* _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0(void){
_start:
{
lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2691_ = lean_alloc_closure((void*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___boxed), 4, 0);
v___x_2692_ = lean_alloc_closure((void*)(l_Lean_Linter_MissingDocs_SimpleHandler_toHandler___boxed), 6, 1);
lean_closure_set(v___x_2692_, 0, v___x_2691_);
return v___x_2692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1(){
_start:
{
lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; 
v___x_2694_ = ((lean_object*)(l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1___closed__1));
v___x_2695_ = lean_obj_once(&l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0, &l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0_once, _init_l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___closed__0);
v___x_2696_ = l_Lean_Linter_MissingDocs_addBuiltinHandler(v___x_2694_, v___x_2695_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1___boxed(lean_object* v_a_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1();
return v_res_2698_;
}
}
lean_object* runtime_initialize_Lean_Elab_ConfigEval_Commands(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_MissingDocs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ConfigEval_Builtins(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_ConfigEval_Commands(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_MissingDocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalTermInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalTermInstance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabEnsureEvalExprInstance___regBuiltin_Lean_Elab_ConfigEval_elabEnsureEvalExprInstance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance___regBuiltin_Lean_Elab_ConfigEval_expandEnsureEvalTermExprInstance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta___regBuiltin_Lean_Elab_ConfigEval_elabDeriveEvalExprUsingMeta__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd___regBuiltin_Lean_Elab_ConfigEval_elabDefEvalConfigItemCmd__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDefEvalConfigItemCmd__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCoreConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCoreConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareCoreConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTermConfigElab___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTermConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTermConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareTacticConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareTacticConfig__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkDeclareTacticConfig__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_elabDeclareCommandConfig___regBuiltin_Lean_Elab_ConfigEval_elabDeclareCommandConfig__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab___regBuiltin___private_Lean_Elab_ConfigEval_Builtins_0__Lean_Elab_ConfigEval_checkCommandConfigElab__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ConfigEval_Builtins(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_ConfigEval_Commands(uint8_t builtin);
lean_object* initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(uint8_t builtin);
lean_object* initialize_Lean_Linter_MissingDocs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ConfigEval_Builtins(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_ConfigEval_Commands(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ConfigEval_DeriveEvalConfigItem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_MissingDocs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval_Builtins(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ConfigEval_Builtins(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ConfigEval_Builtins(builtin);
}
#ifdef __cplusplus
}
#endif
