// Lean compiler output
// Module: Lean.Elab.DocString.Builtin.Parsing
// Imports: public import Lean.Parser.Extension public import Lean.DocString.Syntax public import Lean.DocString.View public import Init.While import Init.Data.Array.Attach import Init.Data.Array.Mem
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
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Init_While_0__repeatM_erased___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Doc_InlineView_of(lean_object*);
lean_object* l_Lean_Doc_VersoText_view(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Char_isWhitespace___boxed(lean_object*);
lean_object* l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(lean_object*);
lean_object* l_String_Slice_Pos_skipWhile___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Doc_RoleView_of(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getVersoCode(lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getVersoCodeBlock(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_onlyCodes___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Expected code"};
static const lean_object* l_Lean_Doc_onlyCodes___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Doc_onlyCodes___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1;
static const lean_closure_object l_Lean_Doc_onlyCodes___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Char_isWhitespace___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_onlyCodes___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Doc_onlyCodes___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Doc_onlyCodes___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_onlyCodes___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg___lam__1(lean_object*, lean_object*);
static const lean_array_object l_Lean_Doc_onlyCodes___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_onlyCodes___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_onlyCodes___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__1_value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__2_value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__4_value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__5_value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__0_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__7 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__7_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__3_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__4_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__8 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__8_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__6_value)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__9 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__9_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__10 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__11 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_onlyCode___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Expected precisely 1 code argument"};
static const lean_object* l_Lean_Doc_onlyCode___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_onlyCode___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Doc_onlyCode___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_onlyCode___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "end of input"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Not a quoted string literal"};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0_value;
static lean_once_cell_t l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1;
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__5(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCodeBlock___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCodeBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg___lam__0(lean_object* v___y_1_, lean_object* v_toPure_2_, lean_object* v_____r_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4_, 0, v___y_1_);
v___x_5_ = lean_apply_2(v_toPure_2_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = ((lean_object*)(l_Lean_Doc_onlyCodes___redArg___lam__2___closed__0));
v___x_8_ = l_Lean_stringToMessageData(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Doc_onlyCodes___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = ((lean_object*)(l_Lean_Doc_onlyCodes___redArg___lam__2___closed__2));
v___x_11_ = l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg___lam__2(lean_object* v_toPure_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_toBind_15_, lean_object* v___x_16_, lean_object* v_a_17_, lean_object* v_x_18_, lean_object* v___y_19_){
_start:
{
lean_object* v___f_20_; lean_object* v___x_25_; 
lean_inc(v_toPure_12_);
lean_inc_ref(v___y_19_);
v___f_20_ = lean_alloc_closure((void*)(l_Lean_Doc_onlyCodes___redArg___lam__0), 3, 2);
lean_closure_set(v___f_20_, 0, v___y_19_);
lean_closure_set(v___f_20_, 1, v_toPure_12_);
lean_inc(v_a_17_);
v___x_25_ = l_Lean_Doc_InlineView_of(v_a_17_);
if (lean_obj_tag(v___x_25_) == 1)
{
lean_object* v_val_26_; 
v_val_26_ = lean_ctor_get(v___x_25_, 0);
lean_inc(v_val_26_);
lean_dec_ref_known(v___x_25_, 1);
switch(lean_obj_tag(v_val_26_))
{
case 3:
{
lean_object* v_view_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_37_; 
lean_dec_ref(v___f_20_);
lean_dec(v_a_17_);
lean_dec(v___x_16_);
lean_dec(v_toBind_15_);
lean_dec_ref(v_inst_14_);
lean_dec_ref(v_inst_13_);
v_view_27_ = lean_ctor_get(v_val_26_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v_val_26_);
if (v_isSharedCheck_37_ == 0)
{
v___x_29_ = v_val_26_;
v_isShared_30_ = v_isSharedCheck_37_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_view_27_);
lean_dec(v_val_26_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_37_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v_content_31_; lean_object* v___x_32_; lean_object* v___x_34_; 
v_content_31_ = lean_ctor_get(v_view_27_, 2);
lean_inc(v_content_31_);
lean_dec_ref(v_view_27_);
v___x_32_ = lean_array_push(v___y_19_, v_content_31_);
if (v_isShared_30_ == 0)
{
lean_ctor_set_tag(v___x_29_, 1);
lean_ctor_set(v___x_29_, 0, v___x_32_);
v___x_34_ = v___x_29_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_32_);
v___x_34_ = v_reuseFailAlloc_36_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
lean_object* v___x_35_; 
v___x_35_ = lean_apply_2(v_toPure_12_, lean_box(0), v___x_34_);
return v___x_35_;
}
}
}
case 0:
{
lean_object* v_view_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_56_; 
v_view_38_ = lean_ctor_get(v_val_26_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v_val_26_);
if (v_isSharedCheck_56_ == 0)
{
v___x_40_ = v_val_26_;
v_isShared_41_ = v_isSharedCheck_56_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_view_38_);
lean_dec(v_val_26_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_56_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v_content_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v_decide_48_; 
v_content_42_ = lean_ctor_get(v_view_38_, 1);
lean_inc(v_content_42_);
lean_dec_ref(v_view_38_);
v___x_43_ = l_Lean_Doc_VersoText_view(v_content_42_);
lean_dec(v_content_42_);
v___x_44_ = lean_obj_once(&l_Lean_Doc_onlyCodes___redArg___lam__2___closed__3, &l_Lean_Doc_onlyCodes___redArg___lam__2___closed__3_once, _init_l_Lean_Doc_onlyCodes___redArg___lam__2___closed__3);
v___x_45_ = lean_string_utf8_byte_size(v___x_43_);
lean_inc(v___x_16_);
v___x_46_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_46_, 0, v___x_43_);
lean_ctor_set(v___x_46_, 1, v___x_16_);
lean_ctor_set(v___x_46_, 2, v___x_45_);
v___x_47_ = l_String_Slice_Pos_skipWhile___redArg(v___x_46_, v___x_16_, v___x_44_);
lean_dec_ref_known(v___x_46_, 3);
v_decide_48_ = lean_nat_dec_eq(v___x_47_, v___x_45_);
lean_dec(v___x_47_);
if (v_decide_48_ == 0)
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
lean_del_object(v___x_40_);
lean_dec_ref(v___y_19_);
lean_dec(v_toPure_12_);
v___x_49_ = lean_obj_once(&l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1, &l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1_once, _init_l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1);
v___x_50_ = l_Lean_throwErrorAt___redArg(v_inst_13_, v_inst_14_, v_a_17_, v___x_49_);
v___x_51_ = lean_apply_4(v_toBind_15_, lean_box(0), lean_box(0), v___x_50_, v___f_20_);
return v___x_51_;
}
else
{
lean_object* v___x_53_; 
lean_dec_ref(v___f_20_);
lean_dec(v_a_17_);
lean_dec(v_toBind_15_);
lean_dec_ref(v_inst_14_);
lean_dec_ref(v_inst_13_);
if (v_isShared_41_ == 0)
{
lean_ctor_set_tag(v___x_40_, 1);
lean_ctor_set(v___x_40_, 0, v___y_19_);
v___x_53_ = v___x_40_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___y_19_);
v___x_53_ = v_reuseFailAlloc_55_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
lean_object* v___x_54_; 
v___x_54_ = lean_apply_2(v_toPure_12_, lean_box(0), v___x_53_);
return v___x_54_;
}
}
}
}
default: 
{
lean_dec(v_val_26_);
lean_dec_ref(v___y_19_);
lean_dec(v___x_16_);
lean_dec(v_toPure_12_);
goto v___jp_21_;
}
}
}
else
{
lean_dec(v___x_25_);
lean_dec_ref(v___y_19_);
lean_dec(v___x_16_);
lean_dec(v_toPure_12_);
goto v___jp_21_;
}
v___jp_21_:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_obj_once(&l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1, &l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1_once, _init_l_Lean_Doc_onlyCodes___redArg___lam__2___closed__1);
v___x_23_ = l_Lean_throwErrorAt___redArg(v_inst_13_, v_inst_14_, v_a_17_, v___x_22_);
v___x_24_ = lean_apply_4(v_toBind_15_, lean_box(0), lean_box(0), v___x_23_, v___f_20_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg___lam__1(lean_object* v_toPure_57_, lean_object* v_____s_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_apply_2(v_toPure_57_, lean_box(0), v_____s_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes___redArg(lean_object* v_inst_62_, lean_object* v_inst_63_, lean_object* v_xs_64_){
_start:
{
lean_object* v_toApplicative_65_; lean_object* v_toBind_66_; lean_object* v_toPure_67_; lean_object* v___x_68_; lean_object* v_codes_69_; lean_object* v___f_70_; lean_object* v___f_71_; size_t v_sz_72_; size_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_toApplicative_65_ = lean_ctor_get(v_inst_62_, 0);
v_toBind_66_ = lean_ctor_get(v_inst_62_, 1);
lean_inc_n(v_toBind_66_, 2);
v_toPure_67_ = lean_ctor_get(v_toApplicative_65_, 1);
v___x_68_ = lean_unsigned_to_nat(0u);
v_codes_69_ = ((lean_object*)(l_Lean_Doc_onlyCodes___redArg___closed__0));
lean_inc_ref(v_inst_62_);
lean_inc_n(v_toPure_67_, 2);
v___f_70_ = lean_alloc_closure((void*)(l_Lean_Doc_onlyCodes___redArg___lam__2), 8, 5);
lean_closure_set(v___f_70_, 0, v_toPure_67_);
lean_closure_set(v___f_70_, 1, v_inst_62_);
lean_closure_set(v___f_70_, 2, v_inst_63_);
lean_closure_set(v___f_70_, 3, v_toBind_66_);
lean_closure_set(v___f_70_, 4, v___x_68_);
v___f_71_ = lean_alloc_closure((void*)(l_Lean_Doc_onlyCodes___redArg___lam__1), 2, 1);
lean_closure_set(v___f_71_, 0, v_toPure_67_);
v_sz_72_ = lean_array_size(v_xs_64_);
v___x_73_ = ((size_t)0ULL);
v___x_74_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_62_, v_xs_64_, v___f_70_, v_sz_72_, v___x_73_, v_codes_69_);
v___x_75_ = lean_apply_4(v_toBind_66_, lean_box(0), lean_box(0), v___x_74_, v___f_71_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCodes(lean_object* v_m_76_, lean_object* v_inst_77_, lean_object* v_inst_78_, lean_object* v_xs_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Doc_onlyCodes___redArg(v_inst_77_, v_inst_78_, v_xs_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank_spec__0(lean_object* v_s_81_, lean_object* v_pos_82_){
_start:
{
lean_object* v_str_83_; lean_object* v_startInclusive_84_; lean_object* v_endExclusive_85_; lean_object* v___x_86_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v_decide_97_; 
v_str_83_ = lean_ctor_get(v_s_81_, 0);
v_startInclusive_84_ = lean_ctor_get(v_s_81_, 1);
v_endExclusive_85_ = lean_ctor_get(v_s_81_, 2);
v___x_86_ = lean_nat_add(v_startInclusive_84_, v_pos_82_);
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = lean_nat_sub(v_endExclusive_85_, v___x_86_);
v_decide_97_ = lean_nat_dec_eq(v___x_95_, v___x_96_);
lean_dec(v___x_96_);
if (v_decide_97_ == 0)
{
uint32_t v___x_98_; uint32_t v___x_99_; uint8_t v___x_100_; 
v___x_98_ = lean_string_utf8_get_fast(v_str_83_, v___x_86_);
v___x_99_ = 32;
v___x_100_ = lean_uint32_dec_eq(v___x_98_, v___x_99_);
if (v___x_100_ == 0)
{
uint32_t v___x_101_; uint8_t v___x_102_; 
v___x_101_ = 9;
v___x_102_ = lean_uint32_dec_eq(v___x_98_, v___x_101_);
if (v___x_102_ == 0)
{
uint32_t v___x_103_; uint8_t v___x_104_; 
v___x_103_ = 13;
v___x_104_ = lean_uint32_dec_eq(v___x_98_, v___x_103_);
if (v___x_104_ == 0)
{
uint32_t v___x_105_; uint8_t v___x_106_; 
v___x_105_ = 10;
v___x_106_ = lean_uint32_dec_eq(v___x_98_, v___x_105_);
if (v___x_106_ == 0)
{
lean_dec(v___x_86_);
return v_pos_82_;
}
else
{
goto v___jp_87_;
}
}
else
{
goto v___jp_87_;
}
}
else
{
goto v___jp_87_;
}
}
else
{
goto v___jp_87_;
}
}
else
{
lean_dec(v___x_86_);
return v_pos_82_;
}
v___jp_87_:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_88_ = lean_string_utf8_next_fast(v_str_83_, v___x_86_);
v___x_89_ = lean_nat_sub(v___x_88_, v___x_86_);
lean_dec(v___x_86_);
v___x_90_ = lean_nat_add(v_pos_82_, v___x_89_);
lean_dec(v___x_89_);
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_nat_add(v_pos_82_, v___x_91_);
v___x_93_ = lean_nat_dec_le(v___x_92_, v___x_90_);
lean_dec(v___x_92_);
if (v___x_93_ == 0)
{
lean_dec(v___x_90_);
return v_pos_82_;
}
else
{
lean_dec(v_pos_82_);
v_pos_82_ = v___x_90_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank_spec__0___boxed(lean_object* v_s_107_, lean_object* v_pos_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank_spec__0(v_s_107_, v_pos_108_);
lean_dec_ref(v_s_107_);
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank(lean_object* v_x_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_Doc_InlineView_of(v_x_110_);
if (lean_obj_tag(v___x_111_) == 1)
{
lean_object* v_val_112_; 
v_val_112_ = lean_ctor_get(v___x_111_, 0);
lean_inc(v_val_112_);
lean_dec_ref_known(v___x_111_, 1);
if (lean_obj_tag(v_val_112_) == 0)
{
lean_object* v_view_113_; lean_object* v_content_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v_decide_120_; 
v_view_113_ = lean_ctor_get(v_val_112_, 0);
lean_inc_ref(v_view_113_);
lean_dec_ref_known(v_val_112_, 1);
v_content_114_ = lean_ctor_get(v_view_113_, 1);
lean_inc(v_content_114_);
lean_dec_ref(v_view_113_);
v___x_115_ = l_Lean_Doc_VersoText_view(v_content_114_);
lean_dec(v_content_114_);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_string_utf8_byte_size(v___x_115_);
v___x_118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_118_, 0, v___x_115_);
lean_ctor_set(v___x_118_, 1, v___x_116_);
lean_ctor_set(v___x_118_, 2, v___x_117_);
v___x_119_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank_spec__0(v___x_118_, v___x_116_);
lean_dec_ref_known(v___x_118_, 3);
v_decide_120_ = lean_nat_dec_eq(v___x_119_, v___x_117_);
lean_dec(v___x_119_);
return v_decide_120_;
}
else
{
uint8_t v___x_121_; 
lean_dec(v_val_112_);
v___x_121_ = 0;
return v___x_121_;
}
}
else
{
uint8_t v___x_122_; 
lean_dec(v___x_111_);
v___x_122_ = 0;
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank___boxed(lean_object* v_x_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank(v_x_123_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__0(lean_object* v_x_126_){
_start:
{
lean_inc(v_x_126_);
return v_x_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__0___boxed(lean_object* v_x_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__0(v_x_127_);
lean_dec(v_x_127_);
return v_res_128_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__1(lean_object* v_v_129_){
_start:
{
uint8_t v___x_130_; 
v___x_130_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange_isBlank(v_v_129_);
if (v___x_130_ == 0)
{
uint8_t v___x_131_; 
v___x_131_ = 1;
return v___x_131_;
}
else
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__1___boxed(lean_object* v_v_133_){
_start:
{
uint8_t v_res_134_; lean_object* v_r_135_; 
v_res_134_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__1(v_v_133_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3(lean_object* v_xs_158_, lean_object* v_toPure_159_, lean_object* v___f_160_, lean_object* v___f_161_, lean_object* v___f_162_, lean_object* v_ref_163_){
_start:
{
lean_object* v___x_182_; 
lean_inc(v_ref_163_);
v___x_182_ = l_Lean_Doc_RoleView_of(v_ref_163_);
if (lean_obj_tag(v___x_182_) == 1)
{
lean_object* v_val_183_; lean_object* v_brackets_184_; 
v_val_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_val_183_);
lean_dec_ref_known(v___x_182_, 1);
v_brackets_184_ = lean_ctor_get(v_val_183_, 5);
lean_inc(v_brackets_184_);
lean_dec(v_val_183_);
if (lean_obj_tag(v_brackets_184_) == 1)
{
lean_object* v_val_185_; lean_object* v_fst_186_; lean_object* v_snd_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; size_t v_sz_192_; size_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_ref_163_);
lean_dec_ref(v___f_161_);
lean_dec_ref(v___f_160_);
v_val_185_ = lean_ctor_get(v_brackets_184_, 0);
lean_inc(v_val_185_);
lean_dec_ref_known(v_brackets_184_, 1);
v_fst_186_ = lean_ctor_get(v_val_185_, 0);
lean_inc(v_fst_186_);
v_snd_187_ = lean_ctor_get(v_val_185_, 1);
lean_inc(v_snd_187_);
lean_dec(v_val_185_);
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = lean_mk_empty_array_with_capacity(v___x_188_);
lean_inc_ref(v___x_189_);
v___x_190_ = lean_array_push(v___x_189_, v_fst_186_);
v___x_191_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__9));
v_sz_192_ = lean_array_size(v_xs_158_);
v___x_193_ = ((size_t)0ULL);
v___x_194_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_191_, v___f_162_, v_sz_192_, v___x_193_, v_xs_158_);
v___x_195_ = l_Array_append___redArg(v___x_190_, v___x_194_);
lean_dec(v___x_194_);
v___x_196_ = lean_array_push(v___x_189_, v_snd_187_);
v___x_197_ = l_Array_append___redArg(v___x_195_, v___x_196_);
lean_dec_ref(v___x_196_);
v___x_198_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__11));
v___x_199_ = lean_box(2);
v___x_200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
lean_ctor_set(v___x_200_, 2, v___x_197_);
v___x_201_ = lean_apply_2(v_toPure_159_, lean_box(0), v___x_200_);
return v___x_201_;
}
else
{
lean_dec(v_brackets_184_);
lean_dec_ref(v___f_162_);
goto v___jp_164_;
}
}
else
{
lean_dec(v___x_182_);
lean_dec_ref(v___f_162_);
goto v___jp_164_;
}
v___jp_164_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_165_ = lean_unsigned_to_nat(0u);
v___x_166_ = lean_array_get_size(v_xs_158_);
v___x_167_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__9));
v___x_168_ = lean_nat_dec_lt(v___x_165_, v___x_166_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
lean_dec_ref(v___f_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v_xs_158_);
v___x_169_ = lean_apply_2(v_toPure_159_, lean_box(0), v_ref_163_);
return v___x_169_;
}
else
{
if (v___x_168_ == 0)
{
lean_object* v___x_170_; 
lean_dec_ref(v___f_161_);
lean_dec_ref(v___f_160_);
lean_dec_ref(v_xs_158_);
v___x_170_ = lean_apply_2(v_toPure_159_, lean_box(0), v_ref_163_);
return v___x_170_;
}
else
{
size_t v___x_171_; size_t v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_171_ = ((size_t)0ULL);
v___x_172_ = lean_usize_of_nat(v___x_166_);
lean_inc_ref(v_xs_158_);
v___x_173_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_167_, v___f_160_, v_xs_158_, v___x_171_, v___x_172_);
v___x_174_ = lean_unbox(v___x_173_);
lean_dec(v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
lean_dec_ref(v___f_161_);
lean_dec_ref(v_xs_158_);
v___x_175_ = lean_apply_2(v_toPure_159_, lean_box(0), v_ref_163_);
return v___x_175_;
}
else
{
size_t v_sz_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_ref_163_);
v_sz_176_ = lean_array_size(v_xs_158_);
v___x_177_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_167_, v___f_161_, v_sz_176_, v___x_171_, v_xs_158_);
v___x_178_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__11));
v___x_179_ = lean_box(2);
v___x_180_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
lean_ctor_set(v___x_180_, 1, v___x_178_);
lean_ctor_set(v___x_180_, 2, v___x_177_);
v___x_181_ = lean_apply_2(v_toPure_159_, lean_box(0), v___x_180_);
return v___x_181_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg(lean_object* v_inst_204_, lean_object* v_inst_205_, lean_object* v_xs_206_){
_start:
{
lean_object* v_toApplicative_207_; lean_object* v_toBind_208_; lean_object* v_getRef_209_; lean_object* v_toPure_210_; lean_object* v___f_211_; lean_object* v___f_212_; lean_object* v___f_213_; lean_object* v___x_214_; 
v_toApplicative_207_ = lean_ctor_get(v_inst_204_, 0);
lean_inc_ref(v_toApplicative_207_);
v_toBind_208_ = lean_ctor_get(v_inst_204_, 1);
lean_inc(v_toBind_208_);
lean_dec_ref(v_inst_204_);
v_getRef_209_ = lean_ctor_get(v_inst_205_, 0);
lean_inc(v_getRef_209_);
lean_dec_ref(v_inst_205_);
v_toPure_210_ = lean_ctor_get(v_toApplicative_207_, 1);
lean_inc(v_toPure_210_);
lean_dec_ref(v_toApplicative_207_);
v___f_211_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__0));
v___f_212_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___closed__1));
v___f_213_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3), 6, 5);
lean_closure_set(v___f_213_, 0, v_xs_206_);
lean_closure_set(v___f_213_, 1, v_toPure_210_);
lean_closure_set(v___f_213_, 2, v___f_212_);
lean_closure_set(v___f_213_, 3, v___f_211_);
lean_closure_set(v___f_213_, 4, v___f_211_);
v___x_214_ = lean_apply_4(v_toBind_208_, lean_box(0), lean_box(0), v_getRef_209_, v___f_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange(lean_object* v_m_215_, lean_object* v_inst_216_, lean_object* v_inst_217_, lean_object* v_xs_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg(v_inst_216_, v_inst_217_, v_xs_218_);
return v___x_219_;
}
}
static lean_object* _init_l_Lean_Doc_onlyCode___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = ((lean_object*)(l_Lean_Doc_onlyCode___redArg___lam__0___closed__0));
v___x_222_ = l_Lean_stringToMessageData(v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg___lam__0(lean_object* v_inst_223_, lean_object* v_inst_224_, lean_object* v_____do__lift_225_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_obj_once(&l_Lean_Doc_onlyCode___redArg___lam__0___closed__1, &l_Lean_Doc_onlyCode___redArg___lam__0___closed__1_once, _init_l_Lean_Doc_onlyCode___redArg___lam__0___closed__1);
v___x_227_ = l_Lean_throwErrorAt___redArg(v_inst_223_, v_inst_224_, v_____do__lift_225_, v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg___lam__1(lean_object* v_inst_228_, lean_object* v_toMonadRef_229_, lean_object* v_xs_230_, lean_object* v_toBind_231_, lean_object* v___f_232_, lean_object* v_toPure_233_, lean_object* v_codes_234_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_235_ = lean_array_get_size(v_codes_234_);
v___x_236_ = lean_unsigned_to_nat(1u);
v___x_237_ = lean_nat_dec_eq(v___x_235_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v_toPure_233_);
v___x_238_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg(v_inst_228_, v_toMonadRef_229_, v_xs_230_);
v___x_239_ = lean_apply_4(v_toBind_231_, lean_box(0), lean_box(0), v___x_238_, v___f_232_);
return v___x_239_;
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec(v___f_232_);
lean_dec(v_toBind_231_);
lean_dec_ref(v_xs_230_);
lean_dec_ref(v_toMonadRef_229_);
lean_dec_ref(v_inst_228_);
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = lean_array_fget_borrowed(v_codes_234_, v___x_240_);
lean_inc(v___x_241_);
v___x_242_ = lean_apply_2(v_toPure_233_, lean_box(0), v___x_241_);
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg___lam__1___boxed(lean_object* v_inst_243_, lean_object* v_toMonadRef_244_, lean_object* v_xs_245_, lean_object* v_toBind_246_, lean_object* v___f_247_, lean_object* v_toPure_248_, lean_object* v_codes_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_Doc_onlyCode___redArg___lam__1(v_inst_243_, v_toMonadRef_244_, v_xs_245_, v_toBind_246_, v___f_247_, v_toPure_248_, v_codes_249_);
lean_dec_ref(v_codes_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode___redArg(lean_object* v_inst_251_, lean_object* v_inst_252_, lean_object* v_xs_253_){
_start:
{
lean_object* v_toApplicative_254_; lean_object* v_toBind_255_; lean_object* v_toMonadRef_256_; lean_object* v_toPure_257_; lean_object* v___f_258_; lean_object* v___x_259_; lean_object* v___f_260_; lean_object* v___x_261_; 
v_toApplicative_254_ = lean_ctor_get(v_inst_251_, 0);
v_toBind_255_ = lean_ctor_get(v_inst_251_, 1);
lean_inc_n(v_toBind_255_, 2);
v_toMonadRef_256_ = lean_ctor_get(v_inst_252_, 1);
lean_inc_ref(v_toMonadRef_256_);
v_toPure_257_ = lean_ctor_get(v_toApplicative_254_, 1);
lean_inc(v_toPure_257_);
lean_inc_ref(v_inst_252_);
lean_inc_ref_n(v_inst_251_, 2);
v___f_258_ = lean_alloc_closure((void*)(l_Lean_Doc_onlyCode___redArg___lam__0), 3, 2);
lean_closure_set(v___f_258_, 0, v_inst_251_);
lean_closure_set(v___f_258_, 1, v_inst_252_);
lean_inc_ref(v_xs_253_);
v___x_259_ = l_Lean_Doc_onlyCodes___redArg(v_inst_251_, v_inst_252_, v_xs_253_);
v___f_260_ = lean_alloc_closure((void*)(l_Lean_Doc_onlyCode___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_260_, 0, v_inst_251_);
lean_closure_set(v___f_260_, 1, v_toMonadRef_256_);
lean_closure_set(v___f_260_, 2, v_xs_253_);
lean_closure_set(v___f_260_, 3, v_toBind_255_);
lean_closure_set(v___f_260_, 4, v___f_258_);
lean_closure_set(v___f_260_, 5, v_toPure_257_);
v___x_261_ = lean_apply_4(v_toBind_255_, lean_box(0), lean_box(0), v___x_259_, v___f_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_onlyCode(lean_object* v_m_262_, lean_object* v_inst_263_, lean_object* v_inst_264_, lean_object* v_xs_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Lean_Doc_onlyCode___redArg(v_inst_263_, v_inst_264_, v_xs_265_);
return v___x_266_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2));
v___x_271_ = lean_unsigned_to_nat(14u);
v___x_272_ = lean_unsigned_to_nat(22u);
v___x_273_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1));
v___x_274_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0));
v___x_275_ = l_mkPanicMessageWithDecl(v___x_274_, v___x_273_, v___x_272_, v___x_271_, v___x_270_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(lean_object* v_inst_276_, lean_object* v_s_277_){
_start:
{
lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___x_292_; uint8_t v___x_293_; lean_object* v___y_295_; lean_object* v___x_300_; 
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = 1;
v___x_300_ = l_Lean_Syntax_getPos_x3f(v_s_277_, v___x_293_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_302_ = l_panic___redArg(v___x_292_, v___x_301_);
v___y_295_ = v___x_302_;
goto v___jp_294_;
}
else
{
lean_object* v_val_303_; 
v_val_303_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_val_303_);
lean_dec_ref_known(v___x_300_, 1);
v___y_295_ = v_val_303_;
goto v___jp_294_;
}
v___jp_278_:
{
lean_object* v_toApplicative_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_290_; 
v_toApplicative_281_ = lean_ctor_get(v_inst_276_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v_inst_276_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; 
v_unused_291_ = lean_ctor_get(v_inst_276_, 1);
lean_dec(v_unused_291_);
v___x_283_ = v_inst_276_;
v_isShared_284_ = v_isSharedCheck_290_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_toApplicative_281_);
lean_dec(v_inst_276_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_290_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v_toPure_285_; lean_object* v___x_287_; 
v_toPure_285_ = lean_ctor_get(v_toApplicative_281_, 1);
lean_inc(v_toPure_285_);
lean_dec_ref(v_toApplicative_281_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___y_280_);
lean_ctor_set(v___x_283_, 0, v___y_279_);
v___x_287_ = v___x_283_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___y_279_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v___y_280_);
v___x_287_ = v_reuseFailAlloc_289_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; 
v___x_288_ = lean_apply_2(v_toPure_285_, lean_box(0), v___x_287_);
return v___x_288_;
}
}
}
v___jp_294_:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lean_Syntax_getTailPos_x3f(v_s_277_, v___x_293_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_298_ = l_panic___redArg(v___x_292_, v___x_297_);
v___y_279_ = v___y_295_;
v___y_280_ = v___x_298_;
goto v___jp_278_;
}
else
{
lean_object* v_val_299_; 
v_val_299_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_val_299_);
lean_dec_ref_known(v___x_296_, 1);
v___y_279_ = v___y_295_;
v___y_280_ = v_val_299_;
goto v___jp_278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___boxed(lean_object* v_inst_304_, lean_object* v_s_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_304_, v_s_305_);
lean_dec(v_s_305_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(lean_object* v_m_307_, lean_object* v_inst_308_, lean_object* v_inst_309_, lean_object* v_s_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_308_, v_s_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___boxed(lean_object* v_m_312_, lean_object* v_inst_313_, lean_object* v_inst_314_, lean_object* v_s_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(v_m_312_, v_inst_313_, v_inst_314_, v_s_315_);
lean_dec(v_s_315_);
lean_dec(v_inst_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0(lean_object* v_env_318_, lean_object* v_contents_319_, lean_object* v_p_320_, lean_object* v_ictx_321_, lean_object* v_inst_322_, lean_object* v_inst_323_, lean_object* v_toPure_324_, lean_object* v_____do__lift_325_){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v_s_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_326_ = lean_box(0);
v___x_327_ = lean_box(0);
lean_inc_ref(v_env_318_);
v___x_328_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_328_, 0, v_env_318_);
lean_ctor_set(v___x_328_, 1, v_____do__lift_325_);
lean_ctor_set(v___x_328_, 2, v___x_326_);
lean_ctor_set(v___x_328_, 3, v___x_327_);
v___x_329_ = l_Lean_Parser_getTokenTable(v_env_318_);
v___x_330_ = l_Lean_Parser_mkParserState(v_contents_319_);
lean_inc_ref(v_ictx_321_);
v_s_331_ = l_Lean_Parser_ParserFn_run(v_p_320_, v_ictx_321_, v___x_328_, v___x_329_, v___x_330_);
lean_inc_ref(v_s_331_);
v___x_332_ = l_Lean_Parser_ParserState_allErrors(v_s_331_);
v___x_333_ = lean_array_get_size(v___x_332_);
lean_dec_ref(v___x_332_);
v___x_334_ = lean_unsigned_to_nat(0u);
v___x_335_ = lean_nat_dec_eq(v___x_333_, v___x_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
lean_dec(v_toPure_324_);
v___x_336_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_321_, v_s_331_);
v___x_337_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
v___x_338_ = l_Lean_MessageData_ofFormat(v___x_337_);
v___x_339_ = l_Lean_throwError___redArg(v_inst_322_, v_inst_323_, v___x_338_);
return v___x_339_;
}
else
{
lean_object* v_stxStack_340_; lean_object* v_pos_341_; uint8_t v___x_342_; 
v_stxStack_340_ = lean_ctor_get(v_s_331_, 0);
v_pos_341_ = lean_ctor_get(v_s_331_, 2);
v___x_342_ = l_Lean_Parser_InputContext_atEnd(v_ictx_321_, v_pos_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
lean_dec(v_toPure_324_);
v___x_343_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0));
v___x_344_ = l_Lean_Parser_ParserState_mkError(v_s_331_, v___x_343_);
v___x_345_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_321_, v___x_344_);
v___x_346_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
v___x_347_ = l_Lean_MessageData_ofFormat(v___x_346_);
v___x_348_ = l_Lean_throwError___redArg(v_inst_322_, v_inst_323_, v___x_347_);
return v___x_348_;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; 
lean_inc_ref(v_stxStack_340_);
lean_dec_ref(v_s_331_);
lean_dec_ref(v_inst_323_);
lean_dec_ref(v_inst_322_);
lean_dec_ref(v_ictx_321_);
v___x_349_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_340_);
lean_dec_ref(v_stxStack_340_);
v___x_350_ = lean_apply_2(v_toPure_324_, lean_box(0), v___x_349_);
return v___x_350_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___boxed(lean_object* v_env_351_, lean_object* v_contents_352_, lean_object* v_p_353_, lean_object* v_ictx_354_, lean_object* v_inst_355_, lean_object* v_inst_356_, lean_object* v_toPure_357_, lean_object* v_____do__lift_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0(v_env_351_, v_contents_352_, v_p_353_, v_ictx_354_, v_inst_355_, v_inst_356_, v_toPure_357_, v_____do__lift_358_);
lean_dec_ref(v_contents_352_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__1(lean_object* v_inst_360_, lean_object* v_contents_361_, lean_object* v_env_362_, lean_object* v_p_363_, lean_object* v_inst_364_, lean_object* v_inst_365_, lean_object* v_toPure_366_, lean_object* v_toBind_367_, lean_object* v_____do__lift_368_){
_start:
{
lean_object* v_getOptions_369_; lean_object* v___x_370_; uint8_t v___x_371_; lean_object* v_ictx_372_; lean_object* v___f_373_; lean_object* v___x_374_; 
v_getOptions_369_ = lean_ctor_get(v_inst_360_, 0);
lean_inc(v_getOptions_369_);
lean_dec_ref(v_inst_360_);
v___x_370_ = lean_string_utf8_byte_size(v_contents_361_);
v___x_371_ = 1;
lean_inc_ref(v_contents_361_);
v_ictx_372_ = l_Lean_Parser_mkInputContext___redArg(v_contents_361_, v_____do__lift_368_, v___x_371_, v___x_370_);
v___f_373_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_373_, 0, v_env_362_);
lean_closure_set(v___f_373_, 1, v_contents_361_);
lean_closure_set(v___f_373_, 2, v_p_363_);
lean_closure_set(v___f_373_, 3, v_ictx_372_);
lean_closure_set(v___f_373_, 4, v_inst_364_);
lean_closure_set(v___f_373_, 5, v_inst_365_);
lean_closure_set(v___f_373_, 6, v_toPure_366_);
v___x_374_ = lean_apply_4(v_toBind_367_, lean_box(0), lean_box(0), v_getOptions_369_, v___f_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__2(lean_object* v_inst_375_, lean_object* v_inst_376_, lean_object* v_contents_377_, lean_object* v_p_378_, lean_object* v_inst_379_, lean_object* v_inst_380_, lean_object* v_toPure_381_, lean_object* v_toBind_382_, lean_object* v_env_383_){
_start:
{
lean_object* v_getFileName_384_; lean_object* v___f_385_; lean_object* v___x_386_; 
v_getFileName_384_ = lean_ctor_get(v_inst_375_, 2);
lean_inc(v_getFileName_384_);
lean_dec_ref(v_inst_375_);
lean_inc(v_toBind_382_);
v___f_385_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__1), 9, 8);
lean_closure_set(v___f_385_, 0, v_inst_376_);
lean_closure_set(v___f_385_, 1, v_contents_377_);
lean_closure_set(v___f_385_, 2, v_env_383_);
lean_closure_set(v___f_385_, 3, v_p_378_);
lean_closure_set(v___f_385_, 4, v_inst_379_);
lean_closure_set(v___f_385_, 5, v_inst_380_);
lean_closure_set(v___f_385_, 6, v_toPure_381_);
lean_closure_set(v___f_385_, 7, v_toBind_382_);
v___x_386_ = lean_apply_4(v_toBind_382_, lean_box(0), lean_box(0), v_getFileName_384_, v___f_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(lean_object* v_inst_387_, lean_object* v_inst_388_, lean_object* v_inst_389_, lean_object* v_inst_390_, lean_object* v_inst_391_, lean_object* v_p_392_, lean_object* v_contents_393_){
_start:
{
lean_object* v_toApplicative_394_; lean_object* v_toBind_395_; lean_object* v_getEnv_396_; lean_object* v_toPure_397_; lean_object* v___f_398_; lean_object* v___x_399_; 
v_toApplicative_394_ = lean_ctor_get(v_inst_387_, 0);
v_toBind_395_ = lean_ctor_get(v_inst_387_, 1);
lean_inc_n(v_toBind_395_, 2);
v_getEnv_396_ = lean_ctor_get(v_inst_388_, 0);
lean_inc(v_getEnv_396_);
lean_dec_ref(v_inst_388_);
v_toPure_397_ = lean_ctor_get(v_toApplicative_394_, 1);
lean_inc(v_toPure_397_);
v___f_398_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__2), 9, 8);
lean_closure_set(v___f_398_, 0, v_inst_390_);
lean_closure_set(v___f_398_, 1, v_inst_391_);
lean_closure_set(v___f_398_, 2, v_contents_393_);
lean_closure_set(v___f_398_, 3, v_p_392_);
lean_closure_set(v___f_398_, 4, v_inst_387_);
lean_closure_set(v___f_398_, 5, v_inst_389_);
lean_closure_set(v___f_398_, 6, v_toPure_397_);
lean_closure_set(v___f_398_, 7, v_toBind_395_);
v___x_399_ = lean_apply_4(v_toBind_395_, lean_box(0), lean_box(0), v_getEnv_396_, v___f_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents(lean_object* v_m_400_, lean_object* v_inst_401_, lean_object* v_inst_402_, lean_object* v_inst_403_, lean_object* v_inst_404_, lean_object* v_inst_405_, lean_object* v_p_406_, lean_object* v_contents_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(v_inst_401_, v_inst_402_, v_inst_403_, v_inst_404_, v_inst_405_, v_p_406_, v_contents_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__0(lean_object* v_env_409_, lean_object* v_p_410_, lean_object* v_ictx_411_, lean_object* v_s_412_, lean_object* v_inst_413_, lean_object* v_inst_414_, lean_object* v_toPure_415_, lean_object* v_____do__lift_416_){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v_s_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_417_ = lean_box(0);
v___x_418_ = lean_box(0);
lean_inc_ref(v_env_409_);
v___x_419_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_419_, 0, v_env_409_);
lean_ctor_set(v___x_419_, 1, v_____do__lift_416_);
lean_ctor_set(v___x_419_, 2, v___x_417_);
lean_ctor_set(v___x_419_, 3, v___x_418_);
v___x_420_ = l_Lean_Parser_getTokenTable(v_env_409_);
lean_inc_ref(v_ictx_411_);
v_s_421_ = l_Lean_Parser_ParserFn_run(v_p_410_, v_ictx_411_, v___x_419_, v___x_420_, v_s_412_);
lean_inc_ref(v_s_421_);
v___x_422_ = l_Lean_Parser_ParserState_allErrors(v_s_421_);
v___x_423_ = lean_array_get_size(v___x_422_);
lean_dec_ref(v___x_422_);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_nat_dec_eq(v___x_423_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec(v_toPure_415_);
v___x_426_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_411_, v_s_421_);
v___x_427_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
v___x_428_ = l_Lean_MessageData_ofFormat(v___x_427_);
v___x_429_ = l_Lean_throwError___redArg(v_inst_413_, v_inst_414_, v___x_428_);
return v___x_429_;
}
else
{
lean_object* v_stxStack_430_; lean_object* v_pos_431_; uint8_t v___x_432_; 
v_stxStack_430_ = lean_ctor_get(v_s_421_, 0);
v_pos_431_ = lean_ctor_get(v_s_421_, 2);
v___x_432_ = l_Lean_Parser_InputContext_atEnd(v_ictx_411_, v_pos_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
lean_dec(v_toPure_415_);
v___x_433_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0));
v___x_434_ = l_Lean_Parser_ParserState_mkError(v_s_421_, v___x_433_);
v___x_435_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_411_, v___x_434_);
v___x_436_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
v___x_437_ = l_Lean_MessageData_ofFormat(v___x_436_);
v___x_438_ = l_Lean_throwError___redArg(v_inst_413_, v_inst_414_, v___x_437_);
return v___x_438_;
}
else
{
lean_object* v___x_439_; lean_object* v___x_440_; 
lean_inc_ref(v_stxStack_430_);
lean_dec_ref(v_s_421_);
lean_dec_ref(v_inst_414_);
lean_dec_ref(v_inst_413_);
lean_dec_ref(v_ictx_411_);
v___x_439_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_430_);
lean_dec_ref(v_stxStack_430_);
v___x_440_ = lean_apply_2(v_toPure_415_, lean_box(0), v___x_439_);
return v___x_440_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__1(lean_object* v_inst_441_, lean_object* v_source_442_, uint8_t v___x_443_, lean_object* v___y_444_, lean_object* v_start_445_, lean_object* v_env_446_, lean_object* v_p_447_, lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_toPure_450_, lean_object* v_toBind_451_, lean_object* v_____do__lift_452_){
_start:
{
lean_object* v_getOptions_453_; lean_object* v_ictx_454_; lean_object* v___x_455_; lean_object* v_s_456_; lean_object* v___f_457_; lean_object* v___x_458_; 
v_getOptions_453_ = lean_ctor_get(v_inst_441_, 0);
lean_inc(v_getOptions_453_);
lean_dec_ref(v_inst_441_);
lean_inc_ref(v_source_442_);
v_ictx_454_ = l_Lean_Parser_mkInputContext___redArg(v_source_442_, v_____do__lift_452_, v___x_443_, v___y_444_);
v___x_455_ = l_Lean_Parser_mkParserState(v_source_442_);
lean_dec_ref(v_source_442_);
v_s_456_ = l_Lean_Parser_ParserState_setPos(v___x_455_, v_start_445_);
v___f_457_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent___redArg___lam__0), 8, 7);
lean_closure_set(v___f_457_, 0, v_env_446_);
lean_closure_set(v___f_457_, 1, v_p_447_);
lean_closure_set(v___f_457_, 2, v_ictx_454_);
lean_closure_set(v___f_457_, 3, v_s_456_);
lean_closure_set(v___f_457_, 4, v_inst_448_);
lean_closure_set(v___f_457_, 5, v_inst_449_);
lean_closure_set(v___f_457_, 6, v_toPure_450_);
v___x_458_ = lean_apply_4(v_toBind_451_, lean_box(0), lean_box(0), v_getOptions_453_, v___f_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__1___boxed(lean_object* v_inst_459_, lean_object* v_source_460_, lean_object* v___x_461_, lean_object* v___y_462_, lean_object* v_start_463_, lean_object* v_env_464_, lean_object* v_p_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_toPure_468_, lean_object* v_toBind_469_, lean_object* v_____do__lift_470_){
_start:
{
uint8_t v___x_591__boxed_471_; lean_object* v_res_472_; 
v___x_591__boxed_471_ = lean_unbox(v___x_461_);
v_res_472_ = l_Lean_Doc_parseContent___redArg___lam__1(v_inst_459_, v_source_460_, v___x_591__boxed_471_, v___y_462_, v_start_463_, v_env_464_, v_p_465_, v_inst_466_, v_inst_467_, v_toPure_468_, v_toBind_469_, v_____do__lift_470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__2(lean_object* v_text_473_, lean_object* v_inst_474_, lean_object* v_inst_475_, uint8_t v___x_476_, lean_object* v_env_477_, lean_object* v_p_478_, lean_object* v_inst_479_, lean_object* v_inst_480_, lean_object* v_toPure_481_, lean_object* v_toBind_482_, lean_object* v_____x_483_){
_start:
{
lean_object* v_start_484_; lean_object* v_stop_485_; lean_object* v_source_486_; lean_object* v___y_488_; lean_object* v___x_493_; uint8_t v___x_494_; 
v_start_484_ = lean_ctor_get(v_____x_483_, 0);
lean_inc(v_start_484_);
v_stop_485_ = lean_ctor_get(v_____x_483_, 1);
lean_inc(v_stop_485_);
lean_dec_ref(v_____x_483_);
v_source_486_ = lean_ctor_get(v_text_473_, 0);
lean_inc_ref(v_source_486_);
lean_dec_ref(v_text_473_);
v___x_493_ = lean_string_utf8_byte_size(v_source_486_);
v___x_494_ = lean_nat_dec_le(v_stop_485_, v___x_493_);
if (v___x_494_ == 0)
{
lean_dec(v_stop_485_);
v___y_488_ = v___x_493_;
goto v___jp_487_;
}
else
{
v___y_488_ = v_stop_485_;
goto v___jp_487_;
}
v___jp_487_:
{
lean_object* v_getFileName_489_; lean_object* v___x_490_; lean_object* v___f_491_; lean_object* v___x_492_; 
v_getFileName_489_ = lean_ctor_get(v_inst_474_, 2);
lean_inc(v_getFileName_489_);
lean_dec_ref(v_inst_474_);
v___x_490_ = lean_box(v___x_476_);
lean_inc(v_toBind_482_);
v___f_491_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_491_, 0, v_inst_475_);
lean_closure_set(v___f_491_, 1, v_source_486_);
lean_closure_set(v___f_491_, 2, v___x_490_);
lean_closure_set(v___f_491_, 3, v___y_488_);
lean_closure_set(v___f_491_, 4, v_start_484_);
lean_closure_set(v___f_491_, 5, v_env_477_);
lean_closure_set(v___f_491_, 6, v_p_478_);
lean_closure_set(v___f_491_, 7, v_inst_479_);
lean_closure_set(v___f_491_, 8, v_inst_480_);
lean_closure_set(v___f_491_, 9, v_toPure_481_);
lean_closure_set(v___f_491_, 10, v_toBind_482_);
v___x_492_ = lean_apply_4(v_toBind_482_, lean_box(0), lean_box(0), v_getFileName_489_, v___f_491_);
return v___x_492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__2___boxed(lean_object* v_text_495_, lean_object* v_inst_496_, lean_object* v_inst_497_, lean_object* v___x_498_, lean_object* v_env_499_, lean_object* v_p_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_toPure_503_, lean_object* v_toBind_504_, lean_object* v_____x_505_){
_start:
{
uint8_t v___x_619__boxed_506_; lean_object* v_res_507_; 
v___x_619__boxed_506_ = lean_unbox(v___x_498_);
v_res_507_ = l_Lean_Doc_parseContent___redArg___lam__2(v_text_495_, v_inst_496_, v_inst_497_, v___x_619__boxed_506_, v_env_499_, v_p_500_, v_inst_501_, v_inst_502_, v_toPure_503_, v_toBind_504_, v_____x_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__3(lean_object* v_text_508_, lean_object* v_inst_509_, lean_object* v_inst_510_, uint8_t v___x_511_, lean_object* v_p_512_, lean_object* v_inst_513_, lean_object* v_inst_514_, lean_object* v_toPure_515_, lean_object* v_toBind_516_, lean_object* v_tok_517_, lean_object* v_env_518_){
_start:
{
lean_object* v___x_519_; lean_object* v___f_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_519_ = lean_box(v___x_511_);
lean_inc(v_toBind_516_);
lean_inc_ref(v_inst_513_);
v___f_520_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent___redArg___lam__2___boxed), 11, 10);
lean_closure_set(v___f_520_, 0, v_text_508_);
lean_closure_set(v___f_520_, 1, v_inst_509_);
lean_closure_set(v___f_520_, 2, v_inst_510_);
lean_closure_set(v___f_520_, 3, v___x_519_);
lean_closure_set(v___f_520_, 4, v_env_518_);
lean_closure_set(v___f_520_, 5, v_p_512_);
lean_closure_set(v___f_520_, 6, v_inst_513_);
lean_closure_set(v___f_520_, 7, v_inst_514_);
lean_closure_set(v___f_520_, 8, v_toPure_515_);
lean_closure_set(v___f_520_, 9, v_toBind_516_);
v___x_521_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_513_, v_tok_517_);
v___x_522_ = lean_apply_4(v_toBind_516_, lean_box(0), lean_box(0), v___x_521_, v___f_520_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__3___boxed(lean_object* v_text_523_, lean_object* v_inst_524_, lean_object* v_inst_525_, lean_object* v___x_526_, lean_object* v_p_527_, lean_object* v_inst_528_, lean_object* v_inst_529_, lean_object* v_toPure_530_, lean_object* v_toBind_531_, lean_object* v_tok_532_, lean_object* v_env_533_){
_start:
{
uint8_t v___x_655__boxed_534_; lean_object* v_res_535_; 
v___x_655__boxed_534_ = lean_unbox(v___x_526_);
v_res_535_ = l_Lean_Doc_parseContent___redArg___lam__3(v_text_523_, v_inst_524_, v_inst_525_, v___x_655__boxed_534_, v_p_527_, v_inst_528_, v_inst_529_, v_toPure_530_, v_toBind_531_, v_tok_532_, v_env_533_);
lean_dec(v_tok_532_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__4(lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_inst_538_, uint8_t v___x_539_, lean_object* v_p_540_, lean_object* v_inst_541_, lean_object* v_inst_542_, lean_object* v_toPure_543_, lean_object* v_toBind_544_, lean_object* v_tok_545_, lean_object* v_text_546_){
_start:
{
lean_object* v_getEnv_547_; lean_object* v___x_548_; lean_object* v___f_549_; lean_object* v___x_550_; 
v_getEnv_547_ = lean_ctor_get(v_inst_536_, 0);
lean_inc(v_getEnv_547_);
lean_dec_ref(v_inst_536_);
v___x_548_ = lean_box(v___x_539_);
lean_inc(v_toBind_544_);
v___f_549_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent___redArg___lam__3___boxed), 11, 10);
lean_closure_set(v___f_549_, 0, v_text_546_);
lean_closure_set(v___f_549_, 1, v_inst_537_);
lean_closure_set(v___f_549_, 2, v_inst_538_);
lean_closure_set(v___f_549_, 3, v___x_548_);
lean_closure_set(v___f_549_, 4, v_p_540_);
lean_closure_set(v___f_549_, 5, v_inst_541_);
lean_closure_set(v___f_549_, 6, v_inst_542_);
lean_closure_set(v___f_549_, 7, v_toPure_543_);
lean_closure_set(v___f_549_, 8, v_toBind_544_);
lean_closure_set(v___f_549_, 9, v_tok_545_);
v___x_550_ = lean_apply_4(v_toBind_544_, lean_box(0), lean_box(0), v_getEnv_547_, v___f_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg___lam__4___boxed(lean_object* v_inst_551_, lean_object* v_inst_552_, lean_object* v_inst_553_, lean_object* v___x_554_, lean_object* v_p_555_, lean_object* v_inst_556_, lean_object* v_inst_557_, lean_object* v_toPure_558_, lean_object* v_toBind_559_, lean_object* v_tok_560_, lean_object* v_text_561_){
_start:
{
uint8_t v___x_679__boxed_562_; lean_object* v_res_563_; 
v___x_679__boxed_562_ = lean_unbox(v___x_554_);
v_res_563_ = l_Lean_Doc_parseContent___redArg___lam__4(v_inst_551_, v_inst_552_, v_inst_553_, v___x_679__boxed_562_, v_p_555_, v_inst_556_, v_inst_557_, v_toPure_558_, v_toBind_559_, v_tok_560_, v_text_561_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent___redArg(lean_object* v_inst_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_inst_567_, lean_object* v_inst_568_, lean_object* v_inst_569_, lean_object* v_p_570_, lean_object* v_tok_571_, lean_object* v_contents_572_){
_start:
{
lean_object* v_toApplicative_573_; lean_object* v_toBind_574_; lean_object* v_toPure_575_; uint8_t v___x_576_; lean_object* v___x_577_; 
v_toApplicative_573_ = lean_ctor_get(v_inst_564_, 0);
v_toBind_574_ = lean_ctor_get(v_inst_564_, 1);
v_toPure_575_ = lean_ctor_get(v_toApplicative_573_, 1);
v___x_576_ = 1;
v___x_577_ = l_Lean_Syntax_getPos_x3f(v_tok_571_, v___x_576_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v___x_578_; 
lean_dec(v_tok_571_);
lean_dec(v_inst_565_);
v___x_578_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(v_inst_564_, v_inst_566_, v_inst_567_, v_inst_568_, v_inst_569_, v_p_570_, v_contents_572_);
return v___x_578_;
}
else
{
lean_object* v___x_579_; lean_object* v___f_580_; lean_object* v___x_581_; 
lean_inc(v_toPure_575_);
lean_inc_n(v_toBind_574_, 2);
lean_dec_ref_known(v___x_577_, 1);
lean_dec_ref(v_contents_572_);
v___x_579_ = lean_box(v___x_576_);
v___f_580_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent___redArg___lam__4___boxed), 11, 10);
lean_closure_set(v___f_580_, 0, v_inst_566_);
lean_closure_set(v___f_580_, 1, v_inst_568_);
lean_closure_set(v___f_580_, 2, v_inst_569_);
lean_closure_set(v___f_580_, 3, v___x_579_);
lean_closure_set(v___f_580_, 4, v_p_570_);
lean_closure_set(v___f_580_, 5, v_inst_564_);
lean_closure_set(v___f_580_, 6, v_inst_567_);
lean_closure_set(v___f_580_, 7, v_toPure_575_);
lean_closure_set(v___f_580_, 8, v_toBind_574_);
lean_closure_set(v___f_580_, 9, v_tok_571_);
v___x_581_ = lean_apply_4(v_toBind_574_, lean_box(0), lean_box(0), v_inst_565_, v___f_580_);
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent(lean_object* v_m_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_inst_585_, lean_object* v_inst_586_, lean_object* v_inst_587_, lean_object* v_inst_588_, lean_object* v_p_589_, lean_object* v_tok_590_, lean_object* v_contents_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_Doc_parseContent___redArg(v_inst_583_, v_inst_584_, v_inst_585_, v_inst_586_, v_inst_587_, v_inst_588_, v_p_589_, v_tok_590_, v_contents_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(lean_object* v_str_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_fst_595_; lean_object* v_snd_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_611_; 
v_fst_595_ = lean_ctor_get(v_a_594_, 0);
v_snd_596_ = lean_ctor_get(v_a_594_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_a_594_);
if (v_isSharedCheck_611_ == 0)
{
v___x_598_ = v_a_594_;
v_isShared_599_ = v_isSharedCheck_611_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_snd_596_);
lean_inc(v_fst_595_);
lean_dec(v_a_594_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_611_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_600_ = lean_unsigned_to_nat(1u);
v___x_601_ = lean_nat_dec_le(v___x_600_, v_fst_595_);
if (v___x_601_ == 0)
{
lean_object* v___x_603_; 
if (v_isShared_599_ == 0)
{
v___x_603_ = v___x_598_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_fst_595_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_snd_596_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_605_ = lean_string_utf8_prev(v_str_593_, v_fst_595_);
lean_dec(v_fst_595_);
v___x_606_ = lean_nat_add(v_snd_596_, v___x_600_);
lean_dec(v_snd_596_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v___x_606_);
lean_ctor_set(v___x_598_, 0, v___x_605_);
v___x_608_ = v___x_598_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_605_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v___x_606_);
v___x_608_ = v_reuseFailAlloc_610_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
v_a_594_ = v___x_608_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg___boxed(lean_object* v_str_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_612_, v_a_613_);
lean_dec_ref(v_str_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(lean_object* v_str_615_, lean_object* v_p_616_){
_start:
{
lean_object* v_n_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_snd_620_; 
v_n_617_ = lean_unsigned_to_nat(0u);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v_p_616_);
lean_ctor_set(v___x_618_, 1, v_n_617_);
v___x_619_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_615_, v___x_618_);
v_snd_620_ = lean_ctor_get(v___x_619_, 1);
lean_inc(v_snd_620_);
lean_dec_ref(v___x_619_);
return v_snd_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex___boxed(lean_object* v_str_621_, lean_object* v_p_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(v_str_621_, v_p_622_);
lean_dec_ref(v_str_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(lean_object* v_str_624_, lean_object* v_inst_625_, lean_object* v_a_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_624_, v_a_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___boxed(lean_object* v_str_628_, lean_object* v_inst_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(v_str_628_, v_inst_629_, v_a_630_);
lean_dec_ref(v_str_628_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(lean_object* v_str_632_, lean_object* v_p_633_, lean_object* v_j_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_zero_636_; uint8_t v_isZero_637_; 
v_zero_636_ = lean_unsigned_to_nat(0u);
v_isZero_637_ = lean_nat_dec_eq(v_j_634_, v_zero_636_);
if (v_isZero_637_ == 1)
{
lean_dec(v_j_634_);
return v_a_635_;
}
else
{
lean_object* v_one_638_; lean_object* v_n_639_; lean_object* v___x_640_; 
lean_dec(v_a_635_);
v_one_638_ = lean_unsigned_to_nat(1u);
v_n_639_ = lean_nat_sub(v_j_634_, v_one_638_);
lean_dec(v_j_634_);
v___x_640_ = lean_string_utf8_next(v_str_632_, v_p_633_);
v_j_634_ = v_n_639_;
v_a_635_ = v___x_640_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg___boxed(lean_object* v_str_642_, lean_object* v_p_643_, lean_object* v_j_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_642_, v_p_643_, v_j_644_, v_a_645_);
lean_dec(v_p_643_);
lean_dec_ref(v_str_642_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(lean_object* v_str_647_, lean_object* v_n_648_, lean_object* v_p_649_){
_start:
{
lean_object* v___x_650_; 
lean_inc(v_p_649_);
v___x_650_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_647_, v_p_649_, v_n_648_, v_p_649_);
lean_dec(v_p_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn___boxed(lean_object* v_str_651_, lean_object* v_n_652_, lean_object* v_p_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(v_str_651_, v_n_652_, v_p_653_);
lean_dec_ref(v_str_651_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(lean_object* v_str_655_, lean_object* v_p_656_, lean_object* v_n_657_, lean_object* v_j_658_, lean_object* v_a_659_, lean_object* v_a_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_655_, v_p_656_, v_j_658_, v_a_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___boxed(lean_object* v_str_662_, lean_object* v_p_663_, lean_object* v_n_664_, lean_object* v_j_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(v_str_662_, v_p_663_, v_n_664_, v_j_665_, v_a_666_, v_a_667_);
lean_dec(v_n_664_);
lean_dec(v_p_663_);
lean_dec_ref(v_str_662_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(lean_object* v_text_669_, lean_object* v_posOfStr_670_, lean_object* v_str_671_, lean_object* v_posInStr_672_){
_start:
{
lean_object* v_source_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_source_673_ = lean_ctor_get(v_text_669_, 0);
v___x_674_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(v_str_671_, v_posInStr_672_);
lean_inc(v_posOfStr_670_);
v___x_675_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_source_673_, v_posOfStr_670_, v___x_674_, v_posOfStr_670_);
lean_dec(v_posOfStr_670_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition___boxed(lean_object* v_text_676_, lean_object* v_posOfStr_677_, lean_object* v_str_678_, lean_object* v_posInStr_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_676_, v_posOfStr_677_, v_str_678_, v_posInStr_679_);
lean_dec_ref(v_str_678_);
lean_dec_ref(v_text_676_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(lean_object* v_text_681_, lean_object* v_posOfStr_682_, lean_object* v_str_683_, lean_object* v_a_684_){
_start:
{
switch(lean_obj_tag(v_a_684_))
{
case 0:
{
lean_object* v_pos_685_; lean_object* v_endPos_686_; lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; lean_object* v___x_690_; 
v_pos_685_ = lean_ctor_get(v_a_684_, 1);
lean_inc(v_pos_685_);
v_endPos_686_ = lean_ctor_get(v_a_684_, 3);
lean_inc(v_endPos_686_);
lean_dec_ref_known(v_a_684_, 4);
lean_inc(v_posOfStr_682_);
v___x_687_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_681_, v_posOfStr_682_, v_str_683_, v_pos_685_);
v___x_688_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_681_, v_posOfStr_682_, v_str_683_, v_endPos_686_);
v___x_689_ = 1;
v___x_690_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_690_, 0, v___x_687_);
lean_ctor_set(v___x_690_, 1, v___x_688_);
lean_ctor_set_uint8(v___x_690_, sizeof(void*)*2, v___x_689_);
return v___x_690_;
}
case 1:
{
lean_object* v_pos_691_; lean_object* v_endPos_692_; uint8_t v_canonical_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_702_; 
v_pos_691_ = lean_ctor_get(v_a_684_, 0);
v_endPos_692_ = lean_ctor_get(v_a_684_, 1);
v_canonical_693_ = lean_ctor_get_uint8(v_a_684_, sizeof(void*)*2);
v_isSharedCheck_702_ = !lean_is_exclusive(v_a_684_);
if (v_isSharedCheck_702_ == 0)
{
v___x_695_ = v_a_684_;
v_isShared_696_ = v_isSharedCheck_702_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_endPos_692_);
lean_inc(v_pos_691_);
lean_dec(v_a_684_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_702_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
lean_inc(v_posOfStr_682_);
v___x_697_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_681_, v_posOfStr_682_, v_str_683_, v_pos_691_);
v___x_698_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_681_, v_posOfStr_682_, v_str_683_, v_endPos_692_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 1, v___x_698_);
lean_ctor_set(v___x_695_, 0, v___x_697_);
v___x_700_ = v___x_695_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_697_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___x_698_);
lean_ctor_set_uint8(v_reuseFailAlloc_701_, sizeof(void*)*2, v_canonical_693_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
default: 
{
lean_dec(v_posOfStr_682_);
return v_a_684_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo___boxed(lean_object* v_text_703_, lean_object* v_posOfStr_704_, lean_object* v_str_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_703_, v_posOfStr_704_, v_str_705_, v_a_706_);
lean_dec_ref(v_str_705_);
lean_dec_ref(v_text_703_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(lean_object* v_text_708_, lean_object* v_posOfStr_709_, lean_object* v_str_710_, lean_object* v_a_711_){
_start:
{
switch(lean_obj_tag(v_a_711_))
{
case 0:
{
lean_dec(v_posOfStr_709_);
return v_a_711_;
}
case 1:
{
lean_object* v_info_712_; lean_object* v_kind_713_; lean_object* v_args_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_725_; 
v_info_712_ = lean_ctor_get(v_a_711_, 0);
v_kind_713_ = lean_ctor_get(v_a_711_, 1);
v_args_714_ = lean_ctor_get(v_a_711_, 2);
v_isSharedCheck_725_ = !lean_is_exclusive(v_a_711_);
if (v_isSharedCheck_725_ == 0)
{
v___x_716_ = v_a_711_;
v_isShared_717_ = v_isSharedCheck_725_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_args_714_);
lean_inc(v_kind_713_);
lean_inc(v_info_712_);
lean_dec(v_a_711_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_725_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; size_t v_sz_719_; size_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_723_; 
lean_inc(v_posOfStr_709_);
v___x_718_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_708_, v_posOfStr_709_, v_str_710_, v_info_712_);
v_sz_719_ = lean_array_size(v_args_714_);
v___x_720_ = ((size_t)0ULL);
v___x_721_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(v_text_708_, v_posOfStr_709_, v_str_710_, v_sz_719_, v___x_720_, v_args_714_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 2, v___x_721_);
lean_ctor_set(v___x_716_, 0, v___x_718_);
v___x_723_ = v___x_716_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_kind_713_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v___x_721_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
case 2:
{
lean_object* v_info_726_; lean_object* v_val_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_735_; 
v_info_726_ = lean_ctor_get(v_a_711_, 0);
v_val_727_ = lean_ctor_get(v_a_711_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v_a_711_);
if (v_isSharedCheck_735_ == 0)
{
v___x_729_ = v_a_711_;
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_val_727_);
lean_inc(v_info_726_);
lean_dec(v_a_711_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_731_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_708_, v_posOfStr_709_, v_str_710_, v_info_726_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_731_);
v___x_733_ = v___x_729_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_val_727_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
default: 
{
lean_object* v_info_736_; lean_object* v_rawVal_737_; lean_object* v_val_738_; lean_object* v_preresolved_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_747_; 
v_info_736_ = lean_ctor_get(v_a_711_, 0);
v_rawVal_737_ = lean_ctor_get(v_a_711_, 1);
v_val_738_ = lean_ctor_get(v_a_711_, 2);
v_preresolved_739_ = lean_ctor_get(v_a_711_, 3);
v_isSharedCheck_747_ = !lean_is_exclusive(v_a_711_);
if (v_isSharedCheck_747_ == 0)
{
v___x_741_ = v_a_711_;
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_preresolved_739_);
lean_inc(v_val_738_);
lean_inc(v_rawVal_737_);
lean_inc(v_info_736_);
lean_dec(v_a_711_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_743_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_708_, v_posOfStr_709_, v_str_710_, v_info_736_);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 0, v___x_743_);
v___x_745_ = v___x_741_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_rawVal_737_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_val_738_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v_preresolved_739_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(lean_object* v_text_748_, lean_object* v_posOfStr_749_, lean_object* v_str_750_, size_t v_sz_751_, size_t v_i_752_, lean_object* v_bs_753_){
_start:
{
uint8_t v___x_754_; 
v___x_754_ = lean_usize_dec_lt(v_i_752_, v_sz_751_);
if (v___x_754_ == 0)
{
lean_dec(v_posOfStr_749_);
return v_bs_753_;
}
else
{
lean_object* v_v_755_; lean_object* v___x_756_; lean_object* v_bs_x27_757_; lean_object* v___x_758_; size_t v___x_759_; size_t v___x_760_; lean_object* v___x_761_; 
v_v_755_ = lean_array_uget(v_bs_753_, v_i_752_);
v___x_756_ = lean_unsigned_to_nat(0u);
v_bs_x27_757_ = lean_array_uset(v_bs_753_, v_i_752_, v___x_756_);
lean_inc(v_posOfStr_749_);
v___x_758_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_748_, v_posOfStr_749_, v_str_750_, v_v_755_);
v___x_759_ = ((size_t)1ULL);
v___x_760_ = lean_usize_add(v_i_752_, v___x_759_);
v___x_761_ = lean_array_uset(v_bs_x27_757_, v_i_752_, v___x_758_);
v_i_752_ = v___x_760_;
v_bs_753_ = v___x_761_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0___boxed(lean_object* v_text_763_, lean_object* v_posOfStr_764_, lean_object* v_str_765_, lean_object* v_sz_766_, lean_object* v_i_767_, lean_object* v_bs_768_){
_start:
{
size_t v_sz_boxed_769_; size_t v_i_boxed_770_; lean_object* v_res_771_; 
v_sz_boxed_769_ = lean_unbox_usize(v_sz_766_);
lean_dec(v_sz_766_);
v_i_boxed_770_ = lean_unbox_usize(v_i_767_);
lean_dec(v_i_767_);
v_res_771_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(v_text_763_, v_posOfStr_764_, v_str_765_, v_sz_boxed_769_, v_i_boxed_770_, v_bs_768_);
lean_dec_ref(v_str_765_);
lean_dec_ref(v_text_763_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax___boxed(lean_object* v_text_772_, lean_object* v_posOfStr_773_, lean_object* v_str_774_, lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_772_, v_posOfStr_773_, v_str_774_, v_a_775_);
lean_dec_ref(v_str_774_);
lean_dec_ref(v_text_772_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter___redArg(lean_object* v_x_777_, lean_object* v_h__1_778_, lean_object* v_h__2_779_, lean_object* v_h__3_780_, lean_object* v_h__4_781_){
_start:
{
switch(lean_obj_tag(v_x_777_))
{
case 0:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
lean_dec(v_h__3_780_);
lean_dec(v_h__2_779_);
lean_dec(v_h__1_778_);
v___x_782_ = lean_box(0);
v___x_783_ = lean_apply_1(v_h__4_781_, v___x_782_);
return v___x_783_;
}
case 1:
{
lean_object* v_info_784_; lean_object* v_kind_785_; lean_object* v_args_786_; lean_object* v___x_787_; 
lean_dec(v_h__4_781_);
lean_dec(v_h__3_780_);
lean_dec(v_h__2_779_);
v_info_784_ = lean_ctor_get(v_x_777_, 0);
lean_inc(v_info_784_);
v_kind_785_ = lean_ctor_get(v_x_777_, 1);
lean_inc(v_kind_785_);
v_args_786_ = lean_ctor_get(v_x_777_, 2);
lean_inc_ref(v_args_786_);
lean_dec_ref_known(v_x_777_, 3);
v___x_787_ = lean_apply_3(v_h__1_778_, v_info_784_, v_kind_785_, v_args_786_);
return v___x_787_;
}
case 2:
{
lean_object* v_info_788_; lean_object* v_val_789_; lean_object* v___x_790_; 
lean_dec(v_h__4_781_);
lean_dec(v_h__2_779_);
lean_dec(v_h__1_778_);
v_info_788_ = lean_ctor_get(v_x_777_, 0);
lean_inc(v_info_788_);
v_val_789_ = lean_ctor_get(v_x_777_, 1);
lean_inc_ref(v_val_789_);
lean_dec_ref_known(v_x_777_, 2);
v___x_790_ = lean_apply_2(v_h__3_780_, v_info_788_, v_val_789_);
return v___x_790_;
}
default: 
{
lean_object* v_info_791_; lean_object* v_rawVal_792_; lean_object* v_val_793_; lean_object* v_preresolved_794_; lean_object* v___x_795_; 
lean_dec(v_h__4_781_);
lean_dec(v_h__3_780_);
lean_dec(v_h__1_778_);
v_info_791_ = lean_ctor_get(v_x_777_, 0);
lean_inc(v_info_791_);
v_rawVal_792_ = lean_ctor_get(v_x_777_, 1);
lean_inc_ref(v_rawVal_792_);
v_val_793_ = lean_ctor_get(v_x_777_, 2);
lean_inc(v_val_793_);
v_preresolved_794_ = lean_ctor_get(v_x_777_, 3);
lean_inc(v_preresolved_794_);
lean_dec_ref_known(v_x_777_, 4);
v___x_795_ = lean_apply_4(v_h__2_779_, v_info_791_, v_rawVal_792_, v_val_793_, v_preresolved_794_);
return v___x_795_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter(lean_object* v_motive_796_, lean_object* v_x_797_, lean_object* v_h__1_798_, lean_object* v_h__2_799_, lean_object* v_h__3_800_, lean_object* v_h__4_801_){
_start:
{
switch(lean_obj_tag(v_x_797_))
{
case 0:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec(v_h__3_800_);
lean_dec(v_h__2_799_);
lean_dec(v_h__1_798_);
v___x_802_ = lean_box(0);
v___x_803_ = lean_apply_1(v_h__4_801_, v___x_802_);
return v___x_803_;
}
case 1:
{
lean_object* v_info_804_; lean_object* v_kind_805_; lean_object* v_args_806_; lean_object* v___x_807_; 
lean_dec(v_h__4_801_);
lean_dec(v_h__3_800_);
lean_dec(v_h__2_799_);
v_info_804_ = lean_ctor_get(v_x_797_, 0);
lean_inc(v_info_804_);
v_kind_805_ = lean_ctor_get(v_x_797_, 1);
lean_inc(v_kind_805_);
v_args_806_ = lean_ctor_get(v_x_797_, 2);
lean_inc_ref(v_args_806_);
lean_dec_ref_known(v_x_797_, 3);
v___x_807_ = lean_apply_3(v_h__1_798_, v_info_804_, v_kind_805_, v_args_806_);
return v___x_807_;
}
case 2:
{
lean_object* v_info_808_; lean_object* v_val_809_; lean_object* v___x_810_; 
lean_dec(v_h__4_801_);
lean_dec(v_h__2_799_);
lean_dec(v_h__1_798_);
v_info_808_ = lean_ctor_get(v_x_797_, 0);
lean_inc(v_info_808_);
v_val_809_ = lean_ctor_get(v_x_797_, 1);
lean_inc_ref(v_val_809_);
lean_dec_ref_known(v_x_797_, 2);
v___x_810_ = lean_apply_2(v_h__3_800_, v_info_808_, v_val_809_);
return v___x_810_;
}
default: 
{
lean_object* v_info_811_; lean_object* v_rawVal_812_; lean_object* v_val_813_; lean_object* v_preresolved_814_; lean_object* v___x_815_; 
lean_dec(v_h__4_801_);
lean_dec(v_h__3_800_);
lean_dec(v_h__1_798_);
v_info_811_ = lean_ctor_get(v_x_797_, 0);
lean_inc(v_info_811_);
v_rawVal_812_ = lean_ctor_get(v_x_797_, 1);
lean_inc_ref(v_rawVal_812_);
v_val_813_ = lean_ctor_get(v_x_797_, 2);
lean_inc(v_val_813_);
v_preresolved_814_ = lean_ctor_get(v_x_797_, 3);
lean_inc(v_preresolved_814_);
lean_dec_ref_known(v_x_797_, 4);
v___x_815_ = lean_apply_4(v_h__2_799_, v_info_811_, v_rawVal_812_, v_val_813_, v_preresolved_814_);
return v___x_815_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter___redArg(lean_object* v_x_816_, lean_object* v_h__1_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = lean_apply_2(v_h__1_817_, v_x_816_, lean_box(0));
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter(lean_object* v_00_u03b1_819_, lean_object* v_P_820_, lean_object* v_motive_821_, lean_object* v_x_822_, lean_object* v_h__1_823_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = lean_apply_2(v_h__1_823_, v_x_822_, lean_box(0));
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0(lean_object* v_toPure_825_, lean_object* v_____do__lift_826_){
_start:
{
if (lean_obj_tag(v_____do__lift_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_835_; 
v_a_827_ = lean_ctor_get(v_____do__lift_826_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v_____do__lift_826_);
if (v_isSharedCheck_835_ == 0)
{
v___x_829_ = v_____do__lift_826_;
v_isShared_830_ = v_isSharedCheck_835_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v_____do__lift_826_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_835_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 1);
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_834_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_833_; 
v___x_833_ = lean_apply_2(v_toPure_825_, lean_box(0), v___x_832_);
return v___x_833_;
}
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_844_; 
v_a_836_ = lean_ctor_get(v_____do__lift_826_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v_____do__lift_826_);
if (v_isSharedCheck_844_ == 0)
{
v___x_838_ = v_____do__lift_826_;
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v_____do__lift_826_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 0);
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_843_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_842_; 
v___x_842_ = lean_apply_2(v_toPure_825_, lean_box(0), v___x_841_);
return v___x_842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(lean_object* v_text_845_, lean_object* v_pos_846_, lean_object* v_str_847_, lean_object* v_x_848_){
_start:
{
lean_object* v_fst_849_; lean_object* v_snd_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_858_; 
v_fst_849_ = lean_ctor_get(v_x_848_, 0);
v_snd_850_ = lean_ctor_get(v_x_848_, 1);
v_isSharedCheck_858_ = !lean_is_exclusive(v_x_848_);
if (v_isSharedCheck_858_ == 0)
{
v___x_852_ = v_x_848_;
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_snd_850_);
lean_inc(v_fst_849_);
lean_dec(v_x_848_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_854_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_845_, v_pos_846_, v_str_847_, v_fst_849_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_854_);
v___x_856_ = v___x_852_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_snd_850_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed(lean_object* v_text_859_, lean_object* v_pos_860_, lean_object* v_str_861_, lean_object* v_x_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(v_text_859_, v_pos_860_, v_str_861_, v_x_862_);
lean_dec_ref(v_str_861_);
lean_dec_ref(v_text_859_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(lean_object* v_env_864_, lean_object* v_p_865_, lean_object* v_ictx_866_, lean_object* v_s_867_, lean_object* v_text_868_, lean_object* v_pos_869_, lean_object* v_str_870_, lean_object* v___f_871_, lean_object* v_inst_872_, lean_object* v_inst_873_, lean_object* v_toPure_874_, lean_object* v_____do__lift_875_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_s_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
v___x_876_ = lean_box(0);
v___x_877_ = lean_box(0);
lean_inc_ref(v_env_864_);
v___x_878_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_878_, 0, v_env_864_);
lean_ctor_set(v___x_878_, 1, v_____do__lift_875_);
lean_ctor_set(v___x_878_, 2, v___x_876_);
lean_ctor_set(v___x_878_, 3, v___x_877_);
v___x_879_ = l_Lean_Parser_getTokenTable(v_env_864_);
lean_inc_ref(v_ictx_866_);
v_s_880_ = l_Lean_Parser_ParserFn_run(v_p_865_, v_ictx_866_, v___x_878_, v___x_879_, v_s_867_);
lean_inc_ref(v_s_880_);
v___x_881_ = l_Lean_Parser_ParserState_allErrors(v_s_880_);
v___x_882_ = lean_array_get_size(v___x_881_);
lean_dec_ref(v___x_881_);
v___x_883_ = lean_unsigned_to_nat(0u);
v___x_884_ = lean_nat_dec_eq(v___x_882_, v___x_883_);
if (v___x_884_ == 0)
{
lean_object* v_stxStack_885_; lean_object* v_lhsPrec_886_; lean_object* v_pos_887_; lean_object* v_cache_888_; lean_object* v_errorMsg_889_; lean_object* v_recoveredErrors_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_927_; 
lean_dec(v_toPure_874_);
v_stxStack_885_ = lean_ctor_get(v_s_880_, 0);
v_lhsPrec_886_ = lean_ctor_get(v_s_880_, 1);
v_pos_887_ = lean_ctor_get(v_s_880_, 2);
v_cache_888_ = lean_ctor_get(v_s_880_, 3);
v_errorMsg_889_ = lean_ctor_get(v_s_880_, 4);
v_recoveredErrors_890_ = lean_ctor_get(v_s_880_, 5);
v_isSharedCheck_927_ = !lean_is_exclusive(v_s_880_);
if (v_isSharedCheck_927_ == 0)
{
v___x_892_ = v_s_880_;
v_isShared_893_ = v_isSharedCheck_927_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_recoveredErrors_890_);
lean_inc(v_errorMsg_889_);
lean_inc(v_cache_888_);
lean_inc(v_pos_887_);
lean_inc(v_lhsPrec_886_);
lean_inc(v_stxStack_885_);
lean_dec(v_s_880_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_927_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; lean_object* v___y_896_; 
lean_inc(v_pos_869_);
v___x_894_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_868_, v_pos_869_, v_str_870_, v_pos_887_);
if (lean_obj_tag(v_errorMsg_889_) == 0)
{
lean_dec(v_pos_869_);
v___y_896_ = v_errorMsg_889_;
goto v___jp_895_;
}
else
{
lean_object* v_val_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_926_; 
v_val_908_ = lean_ctor_get(v_errorMsg_889_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v_errorMsg_889_);
if (v_isSharedCheck_926_ == 0)
{
v___x_910_ = v_errorMsg_889_;
v_isShared_911_ = v_isSharedCheck_926_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_val_908_);
lean_dec(v_errorMsg_889_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_926_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v_unexpectedTk_912_; lean_object* v_unexpected_913_; lean_object* v_expected_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_925_; 
v_unexpectedTk_912_ = lean_ctor_get(v_val_908_, 0);
v_unexpected_913_ = lean_ctor_get(v_val_908_, 1);
v_expected_914_ = lean_ctor_get(v_val_908_, 2);
v_isSharedCheck_925_ = !lean_is_exclusive(v_val_908_);
if (v_isSharedCheck_925_ == 0)
{
v___x_916_ = v_val_908_;
v_isShared_917_ = v_isSharedCheck_925_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_expected_914_);
lean_inc(v_unexpected_913_);
lean_inc(v_unexpectedTk_912_);
lean_dec(v_val_908_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_925_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_918_; lean_object* v___x_920_; 
v___x_918_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_868_, v_pos_869_, v_str_870_, v_unexpectedTk_912_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v___x_918_);
v___x_920_ = v___x_916_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_918_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_unexpected_913_);
lean_ctor_set(v_reuseFailAlloc_924_, 2, v_expected_914_);
v___x_920_ = v_reuseFailAlloc_924_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
lean_object* v___x_922_; 
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_920_);
v___x_922_ = v___x_910_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_920_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
v___y_896_ = v___x_922_;
goto v___jp_895_;
}
}
}
}
}
v___jp_895_:
{
lean_object* v___x_897_; size_t v_sz_898_; size_t v___x_899_; lean_object* v___x_900_; lean_object* v_s_902_; 
v___x_897_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_argumentRange___redArg___lam__3___closed__9));
v_sz_898_ = lean_array_size(v_recoveredErrors_890_);
v___x_899_ = ((size_t)0ULL);
v___x_900_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_897_, v___f_871_, v_sz_898_, v___x_899_, v_recoveredErrors_890_);
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 5, v___x_900_);
lean_ctor_set(v___x_892_, 4, v___y_896_);
lean_ctor_set(v___x_892_, 2, v___x_894_);
v_s_902_ = v___x_892_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_stxStack_885_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_lhsPrec_886_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_907_, 3, v_cache_888_);
lean_ctor_set(v_reuseFailAlloc_907_, 4, v___y_896_);
lean_ctor_set(v_reuseFailAlloc_907_, 5, v___x_900_);
v_s_902_ = v_reuseFailAlloc_907_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_903_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_866_, v_s_902_);
v___x_904_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
v___x_905_ = l_Lean_MessageData_ofFormat(v___x_904_);
v___x_906_ = l_Lean_throwError___redArg(v_inst_872_, v_inst_873_, v___x_905_);
return v___x_906_;
}
}
}
}
else
{
lean_object* v_stxStack_928_; lean_object* v_pos_929_; uint8_t v___x_930_; 
lean_dec_ref(v___f_871_);
v_stxStack_928_ = lean_ctor_get(v_s_880_, 0);
v_pos_929_ = lean_ctor_get(v_s_880_, 2);
v___x_930_ = l_Lean_Parser_InputContext_atEnd(v_ictx_866_, v_pos_929_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
lean_dec(v_toPure_874_);
lean_dec(v_pos_869_);
v___x_931_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0));
v___x_932_ = l_Lean_Parser_ParserState_mkError(v_s_880_, v___x_931_);
v___x_933_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_866_, v___x_932_);
v___x_934_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
v___x_935_ = l_Lean_MessageData_ofFormat(v___x_934_);
v___x_936_ = l_Lean_throwError___redArg(v_inst_872_, v_inst_873_, v___x_935_);
return v___x_936_;
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
lean_inc_ref(v_stxStack_928_);
lean_dec_ref(v_s_880_);
lean_dec_ref(v_inst_873_);
lean_dec_ref(v_inst_872_);
lean_dec_ref(v_ictx_866_);
v___x_937_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_928_);
lean_dec_ref(v_stxStack_928_);
v___x_938_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_868_, v_pos_869_, v_str_870_, v___x_937_);
v___x_939_ = lean_apply_2(v_toPure_874_, lean_box(0), v___x_938_);
return v___x_939_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___boxed(lean_object* v_env_940_, lean_object* v_p_941_, lean_object* v_ictx_942_, lean_object* v_s_943_, lean_object* v_text_944_, lean_object* v_pos_945_, lean_object* v_str_946_, lean_object* v___f_947_, lean_object* v_inst_948_, lean_object* v_inst_949_, lean_object* v_toPure_950_, lean_object* v_____do__lift_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(v_env_940_, v_p_941_, v_ictx_942_, v_s_943_, v_text_944_, v_pos_945_, v_str_946_, v___f_947_, v_inst_948_, v_inst_949_, v_toPure_950_, v_____do__lift_951_);
lean_dec_ref(v_str_946_);
lean_dec_ref(v_text_944_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(lean_object* v_inst_953_, lean_object* v_str_954_, uint8_t v___x_955_, lean_object* v_env_956_, lean_object* v_p_957_, lean_object* v_text_958_, lean_object* v_pos_959_, lean_object* v___f_960_, lean_object* v_inst_961_, lean_object* v_inst_962_, lean_object* v_toPure_963_, lean_object* v_toBind_964_, lean_object* v_____do__lift_965_){
_start:
{
lean_object* v_getOptions_966_; lean_object* v___x_967_; lean_object* v_ictx_968_; lean_object* v_s_969_; lean_object* v___f_970_; lean_object* v___x_971_; 
v_getOptions_966_ = lean_ctor_get(v_inst_953_, 0);
lean_inc(v_getOptions_966_);
lean_dec_ref(v_inst_953_);
v___x_967_ = lean_string_utf8_byte_size(v_str_954_);
lean_inc_ref(v_str_954_);
v_ictx_968_ = l_Lean_Parser_mkInputContext___redArg(v_str_954_, v_____do__lift_965_, v___x_955_, v___x_967_);
v_s_969_ = l_Lean_Parser_mkParserState(v_str_954_);
v___f_970_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__2___boxed), 12, 11);
lean_closure_set(v___f_970_, 0, v_env_956_);
lean_closure_set(v___f_970_, 1, v_p_957_);
lean_closure_set(v___f_970_, 2, v_ictx_968_);
lean_closure_set(v___f_970_, 3, v_s_969_);
lean_closure_set(v___f_970_, 4, v_text_958_);
lean_closure_set(v___f_970_, 5, v_pos_959_);
lean_closure_set(v___f_970_, 6, v_str_954_);
lean_closure_set(v___f_970_, 7, v___f_960_);
lean_closure_set(v___f_970_, 8, v_inst_961_);
lean_closure_set(v___f_970_, 9, v_inst_962_);
lean_closure_set(v___f_970_, 10, v_toPure_963_);
v___x_971_ = lean_apply_4(v_toBind_964_, lean_box(0), lean_box(0), v_getOptions_966_, v___f_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed(lean_object* v_inst_972_, lean_object* v_str_973_, lean_object* v___x_974_, lean_object* v_env_975_, lean_object* v_p_976_, lean_object* v_text_977_, lean_object* v_pos_978_, lean_object* v___f_979_, lean_object* v_inst_980_, lean_object* v_inst_981_, lean_object* v_toPure_982_, lean_object* v_toBind_983_, lean_object* v_____do__lift_984_){
_start:
{
uint8_t v___x_1518__boxed_985_; lean_object* v_res_986_; 
v___x_1518__boxed_985_ = lean_unbox(v___x_974_);
v_res_986_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(v_inst_972_, v_str_973_, v___x_1518__boxed_985_, v_env_975_, v_p_976_, v_text_977_, v_pos_978_, v___f_979_, v_inst_980_, v_inst_981_, v_toPure_982_, v_toBind_983_, v_____do__lift_984_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(lean_object* v_inst_987_, lean_object* v_strLit_988_, lean_object* v_text_989_, lean_object* v_inst_990_, uint8_t v___x_991_, lean_object* v_env_992_, lean_object* v_p_993_, lean_object* v_inst_994_, lean_object* v_inst_995_, lean_object* v_toPure_996_, lean_object* v_toBind_997_, lean_object* v_pos_998_){
_start:
{
lean_object* v_getFileName_999_; lean_object* v_str_1000_; lean_object* v___f_1001_; lean_object* v___x_1002_; lean_object* v___f_1003_; lean_object* v___x_1004_; 
v_getFileName_999_ = lean_ctor_get(v_inst_987_, 2);
lean_inc(v_getFileName_999_);
lean_dec_ref(v_inst_987_);
v_str_1000_ = l_Lean_TSyntax_getString(v_strLit_988_);
lean_inc_ref(v_str_1000_);
lean_inc(v_pos_998_);
lean_inc_ref(v_text_989_);
v___f_1001_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1001_, 0, v_text_989_);
lean_closure_set(v___f_1001_, 1, v_pos_998_);
lean_closure_set(v___f_1001_, 2, v_str_1000_);
v___x_1002_ = lean_box(v___x_991_);
lean_inc(v_toBind_997_);
v___f_1003_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed), 13, 12);
lean_closure_set(v___f_1003_, 0, v_inst_990_);
lean_closure_set(v___f_1003_, 1, v_str_1000_);
lean_closure_set(v___f_1003_, 2, v___x_1002_);
lean_closure_set(v___f_1003_, 3, v_env_992_);
lean_closure_set(v___f_1003_, 4, v_p_993_);
lean_closure_set(v___f_1003_, 5, v_text_989_);
lean_closure_set(v___f_1003_, 6, v_pos_998_);
lean_closure_set(v___f_1003_, 7, v___f_1001_);
lean_closure_set(v___f_1003_, 8, v_inst_994_);
lean_closure_set(v___f_1003_, 9, v_inst_995_);
lean_closure_set(v___f_1003_, 10, v_toPure_996_);
lean_closure_set(v___f_1003_, 11, v_toBind_997_);
v___x_1004_ = lean_apply_4(v_toBind_997_, lean_box(0), lean_box(0), v_getFileName_999_, v___f_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4___boxed(lean_object* v_inst_1005_, lean_object* v_strLit_1006_, lean_object* v_text_1007_, lean_object* v_inst_1008_, lean_object* v___x_1009_, lean_object* v_env_1010_, lean_object* v_p_1011_, lean_object* v_inst_1012_, lean_object* v_inst_1013_, lean_object* v_toPure_1014_, lean_object* v_toBind_1015_, lean_object* v_pos_1016_){
_start:
{
uint8_t v___x_1543__boxed_1017_; lean_object* v_res_1018_; 
v___x_1543__boxed_1017_ = lean_unbox(v___x_1009_);
v_res_1018_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(v_inst_1005_, v_strLit_1006_, v_text_1007_, v_inst_1008_, v___x_1543__boxed_1017_, v_env_1010_, v_p_1011_, v_inst_1012_, v_inst_1013_, v_toPure_1014_, v_toBind_1015_, v_pos_1016_);
lean_dec(v_strLit_1006_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__5(lean_object* v___f_1019_, lean_object* v_pos_1020_){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = lean_apply_1(v___f_1019_, v_pos_1020_);
return v___x_1021_;
}
}
static lean_object* _init_l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__0));
v___x_1024_ = l_Lean_stringToMessageData(v___x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(lean_object* v_text_1025_, lean_object* v_inst_1026_, lean_object* v_inst_1027_, lean_object* v_strLit_1028_, lean_object* v_toBind_1029_, lean_object* v___f_1030_, lean_object* v_toPure_1031_, lean_object* v___f_1032_, lean_object* v_____r_1033_, lean_object* v_pos_1034_){
_start:
{
lean_object* v_source_1035_; uint32_t v___x_1036_; uint32_t v___x_1037_; uint8_t v___x_1038_; 
v_source_1035_ = lean_ctor_get(v_text_1025_, 0);
v___x_1036_ = lean_string_utf8_get(v_source_1035_, v_pos_1034_);
v___x_1037_ = 34;
v___x_1038_ = lean_uint32_dec_eq(v___x_1036_, v___x_1037_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
lean_dec(v___f_1032_);
lean_dec(v_toPure_1031_);
v___x_1039_ = lean_obj_once(&l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1, &l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1_once, _init_l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___closed__1);
v___x_1040_ = l_Lean_throwErrorAt___redArg(v_inst_1026_, v_inst_1027_, v_strLit_1028_, v___x_1039_);
v___x_1041_ = lean_apply_4(v_toBind_1029_, lean_box(0), lean_box(0), v___x_1040_, v___f_1030_);
return v___x_1041_;
}
else
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
lean_dec(v___f_1030_);
lean_dec(v_strLit_1028_);
lean_dec_ref(v_inst_1027_);
lean_dec_ref(v_inst_1026_);
v___x_1042_ = lean_string_utf8_next(v_source_1035_, v_pos_1034_);
v___x_1043_ = lean_apply_2(v_toPure_1031_, lean_box(0), v___x_1042_);
v___x_1044_ = lean_apply_4(v_toBind_1029_, lean_box(0), lean_box(0), v___x_1043_, v___f_1032_);
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___boxed(lean_object* v_text_1045_, lean_object* v_inst_1046_, lean_object* v_inst_1047_, lean_object* v_strLit_1048_, lean_object* v_toBind_1049_, lean_object* v___f_1050_, lean_object* v_toPure_1051_, lean_object* v___f_1052_, lean_object* v_____r_1053_, lean_object* v_pos_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(v_text_1045_, v_inst_1046_, v_inst_1047_, v_strLit_1048_, v_toBind_1049_, v___f_1050_, v_toPure_1051_, v___f_1052_, v_____r_1053_, v_pos_1054_);
lean_dec(v_pos_1054_);
lean_dec_ref(v_text_1045_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6(lean_object* v___f_1056_, lean_object* v_____s_1057_){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_box(0);
v___x_1059_ = lean_apply_2(v___f_1056_, v___x_1058_, v_____s_1057_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(lean_object* v_source_1060_, lean_object* v_toPure_1061_, lean_object* v_toBind_1062_, lean_object* v___f_1063_, lean_object* v_b_1064_){
_start:
{
uint32_t v___x_1065_; uint32_t v___x_1066_; uint8_t v___x_1067_; 
v___x_1065_ = lean_string_utf8_get(v_source_1060_, v_b_1064_);
v___x_1066_ = 35;
v___x_1067_ = lean_uint32_dec_eq(v___x_1065_, v___x_1066_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_b_1064_);
v___x_1069_ = lean_apply_2(v_toPure_1061_, lean_box(0), v___x_1068_);
v___x_1070_ = lean_apply_4(v_toBind_1062_, lean_box(0), lean_box(0), v___x_1069_, v___f_1063_);
return v___x_1070_;
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1071_ = lean_string_utf8_next(v_source_1060_, v_b_1064_);
lean_dec(v_b_1064_);
v___x_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
v___x_1073_ = lean_apply_2(v_toPure_1061_, lean_box(0), v___x_1072_);
v___x_1074_ = lean_apply_4(v_toBind_1062_, lean_box(0), lean_box(0), v___x_1073_, v___f_1063_);
return v___x_1074_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed(lean_object* v_source_1075_, lean_object* v_toPure_1076_, lean_object* v_toBind_1077_, lean_object* v___f_1078_, lean_object* v_b_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(v_source_1075_, v_toPure_1076_, v_toBind_1077_, v___f_1078_, v_b_1079_);
lean_dec_ref(v_source_1075_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__9(lean_object* v_text_1081_, lean_object* v___f_1082_, lean_object* v_toPure_1083_, lean_object* v_toBind_1084_, lean_object* v___f_1085_, lean_object* v_inst_1086_, lean_object* v___f_1087_, lean_object* v_____x_1088_){
_start:
{
lean_object* v_start_1089_; lean_object* v_source_1090_; uint32_t v___x_1091_; uint32_t v___x_1092_; uint8_t v___x_1093_; 
v_start_1089_ = lean_ctor_get(v_____x_1088_, 0);
lean_inc(v_start_1089_);
lean_dec_ref(v_____x_1088_);
v_source_1090_ = lean_ctor_get(v_text_1081_, 0);
lean_inc_ref(v_source_1090_);
lean_dec_ref(v_text_1081_);
v___x_1091_ = lean_string_utf8_get(v_source_1090_, v_start_1089_);
v___x_1092_ = 114;
v___x_1093_ = lean_uint32_dec_eq(v___x_1091_, v___x_1092_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
lean_dec_ref(v_source_1090_);
lean_dec(v___f_1087_);
lean_dec_ref(v_inst_1086_);
lean_dec(v___f_1085_);
lean_dec(v_toBind_1084_);
lean_dec(v_toPure_1083_);
v___x_1094_ = lean_box(0);
v___x_1095_ = lean_apply_2(v___f_1082_, v___x_1094_, v_start_1089_);
return v___x_1095_;
}
else
{
lean_object* v___f_1096_; lean_object* v_pos_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_dec(v___f_1082_);
lean_inc(v_toBind_1084_);
lean_inc_ref(v_source_1090_);
v___f_1096_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed), 5, 4);
lean_closure_set(v___f_1096_, 0, v_source_1090_);
lean_closure_set(v___f_1096_, 1, v_toPure_1083_);
lean_closure_set(v___f_1096_, 2, v_toBind_1084_);
lean_closure_set(v___f_1096_, 3, v___f_1085_);
v_pos_1097_ = lean_string_utf8_next(v_source_1090_, v_start_1089_);
lean_dec(v_start_1089_);
lean_dec_ref(v_source_1090_);
v___x_1098_ = l___private_Init_While_0__repeatM_erased___redArg(v_inst_1086_, v___f_1096_, v_pos_1097_);
v___x_1099_ = lean_apply_4(v_toBind_1084_, lean_box(0), lean_box(0), v___x_1098_, v___f_1087_);
return v___x_1099_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(lean_object* v_inst_1100_, lean_object* v_strLit_1101_, lean_object* v_text_1102_, lean_object* v_inst_1103_, uint8_t v___x_1104_, lean_object* v_p_1105_, lean_object* v_inst_1106_, lean_object* v_inst_1107_, lean_object* v_toPure_1108_, lean_object* v_toBind_1109_, lean_object* v___f_1110_, lean_object* v_env_1111_){
_start:
{
lean_object* v___x_1112_; lean_object* v___f_1113_; lean_object* v___f_1114_; lean_object* v___f_1115_; lean_object* v___f_1116_; lean_object* v___f_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1112_ = lean_box(v___x_1104_);
lean_inc_n(v_toBind_1109_, 3);
lean_inc_n(v_toPure_1108_, 2);
lean_inc_ref(v_inst_1107_);
lean_inc_ref_n(v_inst_1106_, 3);
lean_inc_ref_n(v_text_1102_, 2);
lean_inc_n(v_strLit_1101_, 2);
v___f_1113_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__4___boxed), 12, 11);
lean_closure_set(v___f_1113_, 0, v_inst_1100_);
lean_closure_set(v___f_1113_, 1, v_strLit_1101_);
lean_closure_set(v___f_1113_, 2, v_text_1102_);
lean_closure_set(v___f_1113_, 3, v_inst_1103_);
lean_closure_set(v___f_1113_, 4, v___x_1112_);
lean_closure_set(v___f_1113_, 5, v_env_1111_);
lean_closure_set(v___f_1113_, 6, v_p_1105_);
lean_closure_set(v___f_1113_, 7, v_inst_1106_);
lean_closure_set(v___f_1113_, 8, v_inst_1107_);
lean_closure_set(v___f_1113_, 9, v_toPure_1108_);
lean_closure_set(v___f_1113_, 10, v_toBind_1109_);
v___f_1114_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1114_, 0, v___f_1113_);
lean_inc_ref(v___f_1114_);
v___f_1115_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_1115_, 0, v_text_1102_);
lean_closure_set(v___f_1115_, 1, v_inst_1106_);
lean_closure_set(v___f_1115_, 2, v_inst_1107_);
lean_closure_set(v___f_1115_, 3, v_strLit_1101_);
lean_closure_set(v___f_1115_, 4, v_toBind_1109_);
lean_closure_set(v___f_1115_, 5, v___f_1114_);
lean_closure_set(v___f_1115_, 6, v_toPure_1108_);
lean_closure_set(v___f_1115_, 7, v___f_1114_);
lean_inc_ref(v___f_1115_);
v___f_1116_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__6), 2, 1);
lean_closure_set(v___f_1116_, 0, v___f_1115_);
v___f_1117_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__9), 8, 7);
lean_closure_set(v___f_1117_, 0, v_text_1102_);
lean_closure_set(v___f_1117_, 1, v___f_1115_);
lean_closure_set(v___f_1117_, 2, v_toPure_1108_);
lean_closure_set(v___f_1117_, 3, v_toBind_1109_);
lean_closure_set(v___f_1117_, 4, v___f_1110_);
lean_closure_set(v___f_1117_, 5, v_inst_1106_);
lean_closure_set(v___f_1117_, 6, v___f_1116_);
v___x_1118_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_1106_, v_strLit_1101_);
lean_dec(v_strLit_1101_);
v___x_1119_ = lean_apply_4(v_toBind_1109_, lean_box(0), lean_box(0), v___x_1118_, v___f_1117_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10___boxed(lean_object* v_inst_1120_, lean_object* v_strLit_1121_, lean_object* v_text_1122_, lean_object* v_inst_1123_, lean_object* v___x_1124_, lean_object* v_p_1125_, lean_object* v_inst_1126_, lean_object* v_inst_1127_, lean_object* v_toPure_1128_, lean_object* v_toBind_1129_, lean_object* v___f_1130_, lean_object* v_env_1131_){
_start:
{
uint8_t v___x_1671__boxed_1132_; lean_object* v_res_1133_; 
v___x_1671__boxed_1132_ = lean_unbox(v___x_1124_);
v_res_1133_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(v_inst_1120_, v_strLit_1121_, v_text_1122_, v_inst_1123_, v___x_1671__boxed_1132_, v_p_1125_, v_inst_1126_, v_inst_1127_, v_toPure_1128_, v_toBind_1129_, v___f_1130_, v_env_1131_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_strLit_1136_, lean_object* v_inst_1137_, uint8_t v___x_1138_, lean_object* v_p_1139_, lean_object* v_inst_1140_, lean_object* v_inst_1141_, lean_object* v_toPure_1142_, lean_object* v_toBind_1143_, lean_object* v___f_1144_, lean_object* v_text_1145_){
_start:
{
lean_object* v_getEnv_1146_; lean_object* v___x_1147_; lean_object* v___f_1148_; lean_object* v___x_1149_; 
v_getEnv_1146_ = lean_ctor_get(v_inst_1134_, 0);
lean_inc(v_getEnv_1146_);
lean_dec_ref(v_inst_1134_);
v___x_1147_ = lean_box(v___x_1138_);
lean_inc(v_toBind_1143_);
v___f_1148_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__10___boxed), 12, 11);
lean_closure_set(v___f_1148_, 0, v_inst_1135_);
lean_closure_set(v___f_1148_, 1, v_strLit_1136_);
lean_closure_set(v___f_1148_, 2, v_text_1145_);
lean_closure_set(v___f_1148_, 3, v_inst_1137_);
lean_closure_set(v___f_1148_, 4, v___x_1147_);
lean_closure_set(v___f_1148_, 5, v_p_1139_);
lean_closure_set(v___f_1148_, 6, v_inst_1140_);
lean_closure_set(v___f_1148_, 7, v_inst_1141_);
lean_closure_set(v___f_1148_, 8, v_toPure_1142_);
lean_closure_set(v___f_1148_, 9, v_toBind_1143_);
lean_closure_set(v___f_1148_, 10, v___f_1144_);
v___x_1149_ = lean_apply_4(v_toBind_1143_, lean_box(0), lean_box(0), v_getEnv_1146_, v___f_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11___boxed(lean_object* v_inst_1150_, lean_object* v_inst_1151_, lean_object* v_strLit_1152_, lean_object* v_inst_1153_, lean_object* v___x_1154_, lean_object* v_p_1155_, lean_object* v_inst_1156_, lean_object* v_inst_1157_, lean_object* v_toPure_1158_, lean_object* v_toBind_1159_, lean_object* v___f_1160_, lean_object* v_text_1161_){
_start:
{
uint8_t v___x_1706__boxed_1162_; lean_object* v_res_1163_; 
v___x_1706__boxed_1162_ = lean_unbox(v___x_1154_);
v_res_1163_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(v_inst_1150_, v_inst_1151_, v_strLit_1152_, v_inst_1153_, v___x_1706__boxed_1162_, v_p_1155_, v_inst_1156_, v_inst_1157_, v_toPure_1158_, v_toBind_1159_, v___f_1160_, v_text_1161_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object* v_inst_1164_, lean_object* v_inst_1165_, lean_object* v_inst_1166_, lean_object* v_inst_1167_, lean_object* v_inst_1168_, lean_object* v_inst_1169_, lean_object* v_p_1170_, lean_object* v_strLit_1171_){
_start:
{
lean_object* v_toApplicative_1172_; lean_object* v_toBind_1173_; lean_object* v_toPure_1174_; uint8_t v___x_1175_; lean_object* v___x_1176_; 
v_toApplicative_1172_ = lean_ctor_get(v_inst_1164_, 0);
v_toBind_1173_ = lean_ctor_get(v_inst_1164_, 1);
v_toPure_1174_ = lean_ctor_get(v_toApplicative_1172_, 1);
v___x_1175_ = 1;
v___x_1176_ = l_Lean_Syntax_getPos_x3f(v_strLit_1171_, v___x_1175_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_dec(v_inst_1165_);
v___x_1177_ = l_Lean_TSyntax_getString(v_strLit_1171_);
lean_dec(v_strLit_1171_);
v___x_1178_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg(v_inst_1164_, v_inst_1166_, v_inst_1167_, v_inst_1168_, v_inst_1169_, v_p_1170_, v___x_1177_);
return v___x_1178_;
}
else
{
lean_object* v___f_1179_; lean_object* v___x_1180_; lean_object* v___f_1181_; lean_object* v___x_1182_; 
lean_inc_n(v_toPure_1174_, 2);
lean_inc_n(v_toBind_1173_, 2);
lean_dec_ref_known(v___x_1176_, 1);
v___f_1179_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1179_, 0, v_toPure_1174_);
v___x_1180_ = lean_box(v___x_1175_);
v___f_1181_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__11___boxed), 12, 11);
lean_closure_set(v___f_1181_, 0, v_inst_1166_);
lean_closure_set(v___f_1181_, 1, v_inst_1168_);
lean_closure_set(v___f_1181_, 2, v_strLit_1171_);
lean_closure_set(v___f_1181_, 3, v_inst_1169_);
lean_closure_set(v___f_1181_, 4, v___x_1180_);
lean_closure_set(v___f_1181_, 5, v_p_1170_);
lean_closure_set(v___f_1181_, 6, v_inst_1164_);
lean_closure_set(v___f_1181_, 7, v_inst_1167_);
lean_closure_set(v___f_1181_, 8, v_toPure_1174_);
lean_closure_set(v___f_1181_, 9, v_toBind_1173_);
lean_closure_set(v___f_1181_, 10, v___f_1179_);
v___x_1182_ = lean_apply_4(v_toBind_1173_, lean_box(0), lean_box(0), v_inst_1165_, v___f_1181_);
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit(lean_object* v_m_1183_, lean_object* v_inst_1184_, lean_object* v_inst_1185_, lean_object* v_inst_1186_, lean_object* v_inst_1187_, lean_object* v_inst_1188_, lean_object* v_inst_1189_, lean_object* v_p_1190_, lean_object* v_strLit_1191_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_Lean_Doc_parseQuotedStrLit___redArg(v_inst_1184_, v_inst_1185_, v_inst_1186_, v_inst_1187_, v_inst_1188_, v_inst_1189_, v_p_1190_, v_strLit_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__0(lean_object* v_st_1193_, lean_object* v_toPure_1194_, uint8_t v_err_1195_){
_start:
{
lean_object* v_stxStack_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v_stxStack_1196_ = lean_ctor_get(v_st_1193_, 0);
v___x_1197_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1196_);
v___x_1198_ = lean_box(v_err_1195_);
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = lean_apply_2(v_toPure_1194_, lean_box(0), v___x_1199_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__0___boxed(lean_object* v_st_1201_, lean_object* v_toPure_1202_, lean_object* v_err_1203_){
_start:
{
uint8_t v_err_boxed_1204_; lean_object* v_res_1205_; 
v_err_boxed_1204_ = lean_unbox(v_err_1203_);
v_res_1205_ = l_Lean_Doc_parseContent_x27___redArg___lam__0(v_st_1201_, v_toPure_1202_, v_err_boxed_1204_);
lean_dec_ref(v_st_1201_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__1(lean_object* v___f_1206_, uint8_t v_err_1207_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_box(v_err_1207_);
v___x_1209_ = lean_apply_1(v___f_1206_, v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed(lean_object* v___f_1210_, lean_object* v_err_1211_){
_start:
{
uint8_t v_err_boxed_1212_; lean_object* v_res_1213_; 
v_err_boxed_1212_ = lean_unbox(v_err_1211_);
v_res_1213_ = l_Lean_Doc_parseContent_x27___redArg___lam__1(v___f_1210_, v_err_boxed_1212_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__2(lean_object* v_toPure_1214_, uint8_t v___x_1215_, lean_object* v_toBind_1216_, lean_object* v___f_1217_, lean_object* v_____r_1218_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1219_ = lean_box(v___x_1215_);
v___x_1220_ = lean_apply_2(v_toPure_1214_, lean_box(0), v___x_1219_);
v___x_1221_ = lean_apply_4(v_toBind_1216_, lean_box(0), lean_box(0), v___x_1220_, v___f_1217_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__2___boxed(lean_object* v_toPure_1222_, lean_object* v___x_1223_, lean_object* v_toBind_1224_, lean_object* v___f_1225_, lean_object* v_____r_1226_){
_start:
{
uint8_t v___x_1279__boxed_1227_; lean_object* v_res_1228_; 
v___x_1279__boxed_1227_ = lean_unbox(v___x_1223_);
v_res_1228_ = l_Lean_Doc_parseContent_x27___redArg___lam__2(v_toPure_1222_, v___x_1279__boxed_1227_, v_toBind_1224_, v___f_1225_, v_____r_1226_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__6(lean_object* v_env_1229_, lean_object* v_contents_1230_, lean_object* v_p_1231_, lean_object* v_ictx_1232_, lean_object* v_toPure_1233_, uint8_t v___x_1234_, lean_object* v_toBind_1235_, lean_object* v_inst_1236_, lean_object* v_inst_1237_, lean_object* v_inst_1238_, lean_object* v_inst_1239_, lean_object* v_____do__lift_1240_){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_st_1246_; lean_object* v___f_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; 
v___x_1241_ = lean_box(0);
v___x_1242_ = lean_box(0);
lean_inc_ref(v_env_1229_);
v___x_1243_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1243_, 0, v_env_1229_);
lean_ctor_set(v___x_1243_, 1, v_____do__lift_1240_);
lean_ctor_set(v___x_1243_, 2, v___x_1241_);
lean_ctor_set(v___x_1243_, 3, v___x_1242_);
v___x_1244_ = l_Lean_Parser_getTokenTable(v_env_1229_);
v___x_1245_ = l_Lean_Parser_mkParserState(v_contents_1230_);
lean_inc_ref(v_ictx_1232_);
v_st_1246_ = l_Lean_Parser_ParserFn_run(v_p_1231_, v_ictx_1232_, v___x_1243_, v___x_1244_, v___x_1245_);
lean_inc(v_toPure_1233_);
lean_inc_ref_n(v_st_1246_, 2);
v___f_1247_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1247_, 0, v_st_1246_);
lean_closure_set(v___f_1247_, 1, v_toPure_1233_);
v___x_1248_ = l_Lean_Parser_ParserState_allErrors(v_st_1246_);
v___x_1249_ = lean_array_get_size(v___x_1248_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = lean_unsigned_to_nat(0u);
v___x_1251_ = lean_nat_dec_eq(v___x_1249_, v___x_1250_);
if (v___x_1251_ == 0)
{
lean_object* v___f_1252_; lean_object* v___x_1253_; lean_object* v___f_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___f_1252_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1252_, 0, v___f_1247_);
v___x_1253_ = lean_box(v___x_1234_);
lean_inc(v_toBind_1235_);
v___f_1254_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1254_, 0, v_toPure_1233_);
lean_closure_set(v___f_1254_, 1, v___x_1253_);
lean_closure_set(v___f_1254_, 2, v_toBind_1235_);
lean_closure_set(v___f_1254_, 3, v___f_1252_);
v___x_1255_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_1232_, v_st_1246_);
v___x_1256_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
v___x_1257_ = l_Lean_MessageData_ofFormat(v___x_1256_);
v___x_1258_ = l_Lean_logError___redArg(v_inst_1236_, v_inst_1237_, v_inst_1238_, v_inst_1239_, v___x_1257_);
v___x_1259_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1258_, v___f_1254_);
return v___x_1259_;
}
else
{
lean_object* v_pos_1260_; uint8_t v___x_1261_; 
v_pos_1260_ = lean_ctor_get(v_st_1246_, 2);
v___x_1261_ = l_Lean_Parser_InputContext_atEnd(v_ictx_1232_, v_pos_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___f_1262_; lean_object* v___x_1263_; lean_object* v___f_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___f_1262_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1262_, 0, v___f_1247_);
v___x_1263_ = lean_box(v___x_1234_);
lean_inc(v_toBind_1235_);
v___f_1264_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1264_, 0, v_toPure_1233_);
lean_closure_set(v___f_1264_, 1, v___x_1263_);
lean_closure_set(v___f_1264_, 2, v_toBind_1235_);
lean_closure_set(v___f_1264_, 3, v___f_1262_);
v___x_1265_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0));
v___x_1266_ = l_Lean_Parser_ParserState_mkError(v_st_1246_, v___x_1265_);
v___x_1267_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_1232_, v___x_1266_);
v___x_1268_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
v___x_1269_ = l_Lean_MessageData_ofFormat(v___x_1268_);
v___x_1270_ = l_Lean_logError___redArg(v_inst_1236_, v_inst_1237_, v_inst_1238_, v_inst_1239_, v___x_1269_);
v___x_1271_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1270_, v___f_1264_);
return v___x_1271_;
}
else
{
lean_object* v___f_1272_; uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_dec_ref(v_st_1246_);
lean_dec_ref(v_inst_1239_);
lean_dec(v_inst_1238_);
lean_dec_ref(v_inst_1237_);
lean_dec_ref(v_inst_1236_);
lean_dec_ref(v_ictx_1232_);
v___f_1272_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1272_, 0, v___f_1247_);
v___x_1273_ = 0;
v___x_1274_ = lean_box(v___x_1273_);
v___x_1275_ = lean_apply_2(v_toPure_1233_, lean_box(0), v___x_1274_);
v___x_1276_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1275_, v___f_1272_);
return v___x_1276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__6___boxed(lean_object* v_env_1277_, lean_object* v_contents_1278_, lean_object* v_p_1279_, lean_object* v_ictx_1280_, lean_object* v_toPure_1281_, lean_object* v___x_1282_, lean_object* v_toBind_1283_, lean_object* v_inst_1284_, lean_object* v_inst_1285_, lean_object* v_inst_1286_, lean_object* v_inst_1287_, lean_object* v_____do__lift_1288_){
_start:
{
uint8_t v___x_1295__boxed_1289_; lean_object* v_res_1290_; 
v___x_1295__boxed_1289_ = lean_unbox(v___x_1282_);
v_res_1290_ = l_Lean_Doc_parseContent_x27___redArg___lam__6(v_env_1277_, v_contents_1278_, v_p_1279_, v_ictx_1280_, v_toPure_1281_, v___x_1295__boxed_1289_, v_toBind_1283_, v_inst_1284_, v_inst_1285_, v_inst_1286_, v_inst_1287_, v_____do__lift_1288_);
lean_dec_ref(v_contents_1278_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__3(lean_object* v_inst_1291_, lean_object* v_contents_1292_, uint8_t v___x_1293_, lean_object* v_env_1294_, lean_object* v_p_1295_, lean_object* v_toPure_1296_, lean_object* v_toBind_1297_, lean_object* v_inst_1298_, lean_object* v_inst_1299_, lean_object* v_inst_1300_, lean_object* v_____do__lift_1301_){
_start:
{
lean_object* v_getOptions_1302_; lean_object* v___x_1303_; lean_object* v_ictx_1304_; lean_object* v___x_1305_; lean_object* v___f_1306_; lean_object* v___x_1307_; 
v_getOptions_1302_ = lean_ctor_get(v_inst_1291_, 0);
lean_inc(v_getOptions_1302_);
v___x_1303_ = lean_string_utf8_byte_size(v_contents_1292_);
lean_inc_ref(v_contents_1292_);
v_ictx_1304_ = l_Lean_Parser_mkInputContext___redArg(v_contents_1292_, v_____do__lift_1301_, v___x_1293_, v___x_1303_);
v___x_1305_ = lean_box(v___x_1293_);
lean_inc(v_toBind_1297_);
v___f_1306_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__6___boxed), 12, 11);
lean_closure_set(v___f_1306_, 0, v_env_1294_);
lean_closure_set(v___f_1306_, 1, v_contents_1292_);
lean_closure_set(v___f_1306_, 2, v_p_1295_);
lean_closure_set(v___f_1306_, 3, v_ictx_1304_);
lean_closure_set(v___f_1306_, 4, v_toPure_1296_);
lean_closure_set(v___f_1306_, 5, v___x_1305_);
lean_closure_set(v___f_1306_, 6, v_toBind_1297_);
lean_closure_set(v___f_1306_, 7, v_inst_1298_);
lean_closure_set(v___f_1306_, 8, v_inst_1299_);
lean_closure_set(v___f_1306_, 9, v_inst_1300_);
lean_closure_set(v___f_1306_, 10, v_inst_1291_);
v___x_1307_ = lean_apply_4(v_toBind_1297_, lean_box(0), lean_box(0), v_getOptions_1302_, v___f_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__3___boxed(lean_object* v_inst_1308_, lean_object* v_contents_1309_, lean_object* v___x_1310_, lean_object* v_env_1311_, lean_object* v_p_1312_, lean_object* v_toPure_1313_, lean_object* v_toBind_1314_, lean_object* v_inst_1315_, lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_____do__lift_1318_){
_start:
{
uint8_t v___x_1382__boxed_1319_; lean_object* v_res_1320_; 
v___x_1382__boxed_1319_ = lean_unbox(v___x_1310_);
v_res_1320_ = l_Lean_Doc_parseContent_x27___redArg___lam__3(v_inst_1308_, v_contents_1309_, v___x_1382__boxed_1319_, v_env_1311_, v_p_1312_, v_toPure_1313_, v_toBind_1314_, v_inst_1315_, v_inst_1316_, v_inst_1317_, v_____do__lift_1318_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__4(lean_object* v_inst_1321_, lean_object* v_inst_1322_, lean_object* v_contents_1323_, uint8_t v___x_1324_, lean_object* v_p_1325_, lean_object* v_toPure_1326_, lean_object* v_toBind_1327_, lean_object* v_inst_1328_, lean_object* v_inst_1329_, lean_object* v_env_1330_){
_start:
{
lean_object* v_getFileName_1331_; lean_object* v___x_1332_; lean_object* v___f_1333_; lean_object* v___x_1334_; 
v_getFileName_1331_ = lean_ctor_get(v_inst_1321_, 2);
lean_inc(v_getFileName_1331_);
v___x_1332_ = lean_box(v___x_1324_);
lean_inc(v_toBind_1327_);
v___f_1333_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__3___boxed), 11, 10);
lean_closure_set(v___f_1333_, 0, v_inst_1322_);
lean_closure_set(v___f_1333_, 1, v_contents_1323_);
lean_closure_set(v___f_1333_, 2, v___x_1332_);
lean_closure_set(v___f_1333_, 3, v_env_1330_);
lean_closure_set(v___f_1333_, 4, v_p_1325_);
lean_closure_set(v___f_1333_, 5, v_toPure_1326_);
lean_closure_set(v___f_1333_, 6, v_toBind_1327_);
lean_closure_set(v___f_1333_, 7, v_inst_1328_);
lean_closure_set(v___f_1333_, 8, v_inst_1321_);
lean_closure_set(v___f_1333_, 9, v_inst_1329_);
v___x_1334_ = lean_apply_4(v_toBind_1327_, lean_box(0), lean_box(0), v_getFileName_1331_, v___f_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__4___boxed(lean_object* v_inst_1335_, lean_object* v_inst_1336_, lean_object* v_contents_1337_, lean_object* v___x_1338_, lean_object* v_p_1339_, lean_object* v_toPure_1340_, lean_object* v_toBind_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_env_1344_){
_start:
{
uint8_t v___x_1409__boxed_1345_; lean_object* v_res_1346_; 
v___x_1409__boxed_1345_ = lean_unbox(v___x_1338_);
v_res_1346_ = l_Lean_Doc_parseContent_x27___redArg___lam__4(v_inst_1335_, v_inst_1336_, v_contents_1337_, v___x_1409__boxed_1345_, v_p_1339_, v_toPure_1340_, v_toBind_1341_, v_inst_1342_, v_inst_1343_, v_env_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__5(lean_object* v_s_1347_, lean_object* v_toPure_1348_, uint8_t v_err_1349_){
_start:
{
lean_object* v_stxStack_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v_stxStack_1350_ = lean_ctor_get(v_s_1347_, 0);
v___x_1351_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1350_);
v___x_1352_ = lean_box(v_err_1349_);
v___x_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1351_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = lean_apply_2(v_toPure_1348_, lean_box(0), v___x_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__5___boxed(lean_object* v_s_1355_, lean_object* v_toPure_1356_, lean_object* v_err_1357_){
_start:
{
uint8_t v_err_boxed_1358_; lean_object* v_res_1359_; 
v_err_boxed_1358_ = lean_unbox(v_err_1357_);
v_res_1359_ = l_Lean_Doc_parseContent_x27___redArg___lam__5(v_s_1355_, v_toPure_1356_, v_err_boxed_1358_);
lean_dec_ref(v_s_1355_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__12(lean_object* v_env_1360_, lean_object* v_p_1361_, lean_object* v_ictx_1362_, lean_object* v_s_1363_, lean_object* v_toPure_1364_, uint8_t v___x_1365_, lean_object* v_toBind_1366_, lean_object* v_inst_1367_, lean_object* v_inst_1368_, lean_object* v_inst_1369_, lean_object* v_inst_1370_, lean_object* v_____do__lift_1371_){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v_s_1376_; lean_object* v___f_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1372_ = lean_box(0);
v___x_1373_ = lean_box(0);
lean_inc_ref(v_env_1360_);
v___x_1374_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1374_, 0, v_env_1360_);
lean_ctor_set(v___x_1374_, 1, v_____do__lift_1371_);
lean_ctor_set(v___x_1374_, 2, v___x_1372_);
lean_ctor_set(v___x_1374_, 3, v___x_1373_);
v___x_1375_ = l_Lean_Parser_getTokenTable(v_env_1360_);
lean_inc_ref(v_ictx_1362_);
v_s_1376_ = l_Lean_Parser_ParserFn_run(v_p_1361_, v_ictx_1362_, v___x_1374_, v___x_1375_, v_s_1363_);
lean_inc(v_toPure_1364_);
lean_inc_ref_n(v_s_1376_, 2);
v___f_1377_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__5___boxed), 3, 2);
lean_closure_set(v___f_1377_, 0, v_s_1376_);
lean_closure_set(v___f_1377_, 1, v_toPure_1364_);
v___x_1378_ = l_Lean_Parser_ParserState_allErrors(v_s_1376_);
v___x_1379_ = lean_array_get_size(v___x_1378_);
lean_dec_ref(v___x_1378_);
v___x_1380_ = lean_unsigned_to_nat(0u);
v___x_1381_ = lean_nat_dec_eq(v___x_1379_, v___x_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___f_1382_; lean_object* v___x_1383_; lean_object* v___f_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___f_1382_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1382_, 0, v___f_1377_);
v___x_1383_ = lean_box(v___x_1365_);
lean_inc(v_toBind_1366_);
v___f_1384_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1384_, 0, v_toPure_1364_);
lean_closure_set(v___f_1384_, 1, v___x_1383_);
lean_closure_set(v___f_1384_, 2, v_toBind_1366_);
lean_closure_set(v___f_1384_, 3, v___f_1382_);
v___x_1385_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_1362_, v_s_1376_);
v___x_1386_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
v___x_1387_ = l_Lean_MessageData_ofFormat(v___x_1386_);
v___x_1388_ = l_Lean_logError___redArg(v_inst_1367_, v_inst_1368_, v_inst_1369_, v_inst_1370_, v___x_1387_);
v___x_1389_ = lean_apply_4(v_toBind_1366_, lean_box(0), lean_box(0), v___x_1388_, v___f_1384_);
return v___x_1389_;
}
else
{
lean_object* v_pos_1390_; uint8_t v___x_1391_; 
v_pos_1390_ = lean_ctor_get(v_s_1376_, 2);
v___x_1391_ = l_Lean_Parser_InputContext_atEnd(v_ictx_1362_, v_pos_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___f_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___f_1392_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1392_, 0, v___f_1377_);
v___x_1393_ = lean_box(v___x_1365_);
lean_inc(v_toBind_1366_);
v___f_1394_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_1394_, 0, v_toPure_1364_);
lean_closure_set(v___f_1394_, 1, v___x_1393_);
lean_closure_set(v___f_1394_, 2, v_toBind_1366_);
lean_closure_set(v___f_1394_, 3, v___f_1392_);
v___x_1395_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseFromContents___redArg___lam__0___closed__0));
v___x_1396_ = l_Lean_Parser_ParserState_mkError(v_s_1376_, v___x_1395_);
v___x_1397_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_1362_, v___x_1396_);
v___x_1398_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
v___x_1399_ = l_Lean_MessageData_ofFormat(v___x_1398_);
v___x_1400_ = l_Lean_logError___redArg(v_inst_1367_, v_inst_1368_, v_inst_1369_, v_inst_1370_, v___x_1399_);
v___x_1401_ = lean_apply_4(v_toBind_1366_, lean_box(0), lean_box(0), v___x_1400_, v___f_1394_);
return v___x_1401_;
}
else
{
lean_object* v___f_1402_; uint8_t v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_s_1376_);
lean_dec_ref(v_inst_1370_);
lean_dec(v_inst_1369_);
lean_dec_ref(v_inst_1368_);
lean_dec_ref(v_inst_1367_);
lean_dec_ref(v_ictx_1362_);
v___f_1402_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1402_, 0, v___f_1377_);
v___x_1403_ = 0;
v___x_1404_ = lean_box(v___x_1403_);
v___x_1405_ = lean_apply_2(v_toPure_1364_, lean_box(0), v___x_1404_);
v___x_1406_ = lean_apply_4(v_toBind_1366_, lean_box(0), lean_box(0), v___x_1405_, v___f_1402_);
return v___x_1406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__12___boxed(lean_object* v_env_1407_, lean_object* v_p_1408_, lean_object* v_ictx_1409_, lean_object* v_s_1410_, lean_object* v_toPure_1411_, lean_object* v___x_1412_, lean_object* v_toBind_1413_, lean_object* v_inst_1414_, lean_object* v_inst_1415_, lean_object* v_inst_1416_, lean_object* v_inst_1417_, lean_object* v_____do__lift_1418_){
_start:
{
uint8_t v___x_1437__boxed_1419_; lean_object* v_res_1420_; 
v___x_1437__boxed_1419_ = lean_unbox(v___x_1412_);
v_res_1420_ = l_Lean_Doc_parseContent_x27___redArg___lam__12(v_env_1407_, v_p_1408_, v_ictx_1409_, v_s_1410_, v_toPure_1411_, v___x_1437__boxed_1419_, v_toBind_1413_, v_inst_1414_, v_inst_1415_, v_inst_1416_, v_inst_1417_, v_____do__lift_1418_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__7(lean_object* v_inst_1421_, lean_object* v_source_1422_, uint8_t v___x_1423_, lean_object* v___y_1424_, lean_object* v_val_1425_, lean_object* v_env_1426_, lean_object* v_p_1427_, lean_object* v_toPure_1428_, lean_object* v_toBind_1429_, lean_object* v_inst_1430_, lean_object* v_inst_1431_, lean_object* v_inst_1432_, lean_object* v_____do__lift_1433_){
_start:
{
lean_object* v_getOptions_1434_; lean_object* v_ictx_1435_; lean_object* v___x_1436_; lean_object* v_s_1437_; lean_object* v___x_1438_; lean_object* v___f_1439_; lean_object* v___x_1440_; 
v_getOptions_1434_ = lean_ctor_get(v_inst_1421_, 0);
lean_inc(v_getOptions_1434_);
lean_inc_ref(v_source_1422_);
v_ictx_1435_ = l_Lean_Parser_mkInputContext___redArg(v_source_1422_, v_____do__lift_1433_, v___x_1423_, v___y_1424_);
v___x_1436_ = l_Lean_Parser_mkParserState(v_source_1422_);
lean_dec_ref(v_source_1422_);
v_s_1437_ = l_Lean_Parser_ParserState_setPos(v___x_1436_, v_val_1425_);
v___x_1438_ = lean_box(v___x_1423_);
lean_inc(v_toBind_1429_);
v___f_1439_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__12___boxed), 12, 11);
lean_closure_set(v___f_1439_, 0, v_env_1426_);
lean_closure_set(v___f_1439_, 1, v_p_1427_);
lean_closure_set(v___f_1439_, 2, v_ictx_1435_);
lean_closure_set(v___f_1439_, 3, v_s_1437_);
lean_closure_set(v___f_1439_, 4, v_toPure_1428_);
lean_closure_set(v___f_1439_, 5, v___x_1438_);
lean_closure_set(v___f_1439_, 6, v_toBind_1429_);
lean_closure_set(v___f_1439_, 7, v_inst_1430_);
lean_closure_set(v___f_1439_, 8, v_inst_1431_);
lean_closure_set(v___f_1439_, 9, v_inst_1432_);
lean_closure_set(v___f_1439_, 10, v_inst_1421_);
v___x_1440_ = lean_apply_4(v_toBind_1429_, lean_box(0), lean_box(0), v_getOptions_1434_, v___f_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__7___boxed(lean_object* v_inst_1441_, lean_object* v_source_1442_, lean_object* v___x_1443_, lean_object* v___y_1444_, lean_object* v_val_1445_, lean_object* v_env_1446_, lean_object* v_p_1447_, lean_object* v_toPure_1448_, lean_object* v_toBind_1449_, lean_object* v_inst_1450_, lean_object* v_inst_1451_, lean_object* v_inst_1452_, lean_object* v_____do__lift_1453_){
_start:
{
uint8_t v___x_1522__boxed_1454_; lean_object* v_res_1455_; 
v___x_1522__boxed_1454_ = lean_unbox(v___x_1443_);
v_res_1455_ = l_Lean_Doc_parseContent_x27___redArg___lam__7(v_inst_1441_, v_source_1442_, v___x_1522__boxed_1454_, v___y_1444_, v_val_1445_, v_env_1446_, v_p_1447_, v_toPure_1448_, v_toBind_1449_, v_inst_1450_, v_inst_1451_, v_inst_1452_, v_____do__lift_1453_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__8(lean_object* v_text_1456_, lean_object* v_inst_1457_, lean_object* v_inst_1458_, uint8_t v___x_1459_, lean_object* v_val_1460_, lean_object* v_p_1461_, lean_object* v_toPure_1462_, lean_object* v_toBind_1463_, lean_object* v_inst_1464_, lean_object* v_inst_1465_, lean_object* v_tok_1466_, lean_object* v___x_1467_, lean_object* v_env_1468_){
_start:
{
lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1477_; lean_object* v___x_1481_; 
v___x_1481_ = l_Lean_Syntax_getTailPos_x3f(v_tok_1466_, v___x_1459_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_1483_ = l_panic___redArg(v___x_1467_, v___x_1482_);
v___y_1477_ = v___x_1483_;
goto v___jp_1476_;
}
else
{
lean_object* v_val_1484_; 
v_val_1484_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_val_1484_);
lean_dec_ref_known(v___x_1481_, 1);
v___y_1477_ = v_val_1484_;
goto v___jp_1476_;
}
v___jp_1469_:
{
lean_object* v_getFileName_1472_; lean_object* v___x_1473_; lean_object* v___f_1474_; lean_object* v___x_1475_; 
v_getFileName_1472_ = lean_ctor_get(v_inst_1457_, 2);
lean_inc(v_getFileName_1472_);
v___x_1473_ = lean_box(v___x_1459_);
lean_inc(v_toBind_1463_);
v___f_1474_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__7___boxed), 13, 12);
lean_closure_set(v___f_1474_, 0, v_inst_1458_);
lean_closure_set(v___f_1474_, 1, v___y_1470_);
lean_closure_set(v___f_1474_, 2, v___x_1473_);
lean_closure_set(v___f_1474_, 3, v___y_1471_);
lean_closure_set(v___f_1474_, 4, v_val_1460_);
lean_closure_set(v___f_1474_, 5, v_env_1468_);
lean_closure_set(v___f_1474_, 6, v_p_1461_);
lean_closure_set(v___f_1474_, 7, v_toPure_1462_);
lean_closure_set(v___f_1474_, 8, v_toBind_1463_);
lean_closure_set(v___f_1474_, 9, v_inst_1464_);
lean_closure_set(v___f_1474_, 10, v_inst_1457_);
lean_closure_set(v___f_1474_, 11, v_inst_1465_);
v___x_1475_ = lean_apply_4(v_toBind_1463_, lean_box(0), lean_box(0), v_getFileName_1472_, v___f_1474_);
return v___x_1475_;
}
v___jp_1476_:
{
lean_object* v_source_1478_; lean_object* v___x_1479_; uint8_t v___x_1480_; 
v_source_1478_ = lean_ctor_get(v_text_1456_, 0);
lean_inc_ref(v_source_1478_);
lean_dec_ref(v_text_1456_);
v___x_1479_ = lean_string_utf8_byte_size(v_source_1478_);
v___x_1480_ = lean_nat_dec_le(v___y_1477_, v___x_1479_);
if (v___x_1480_ == 0)
{
lean_dec(v___y_1477_);
v___y_1470_ = v_source_1478_;
v___y_1471_ = v___x_1479_;
goto v___jp_1469_;
}
else
{
v___y_1470_ = v_source_1478_;
v___y_1471_ = v___y_1477_;
goto v___jp_1469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__8___boxed(lean_object* v_text_1485_, lean_object* v_inst_1486_, lean_object* v_inst_1487_, lean_object* v___x_1488_, lean_object* v_val_1489_, lean_object* v_p_1490_, lean_object* v_toPure_1491_, lean_object* v_toBind_1492_, lean_object* v_inst_1493_, lean_object* v_inst_1494_, lean_object* v_tok_1495_, lean_object* v___x_1496_, lean_object* v_env_1497_){
_start:
{
uint8_t v___x_1565__boxed_1498_; lean_object* v_res_1499_; 
v___x_1565__boxed_1498_ = lean_unbox(v___x_1488_);
v_res_1499_ = l_Lean_Doc_parseContent_x27___redArg___lam__8(v_text_1485_, v_inst_1486_, v_inst_1487_, v___x_1565__boxed_1498_, v_val_1489_, v_p_1490_, v_toPure_1491_, v_toBind_1492_, v_inst_1493_, v_inst_1494_, v_tok_1495_, v___x_1496_, v_env_1497_);
lean_dec(v___x_1496_);
lean_dec(v_tok_1495_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__9(lean_object* v_inst_1500_, lean_object* v_inst_1501_, lean_object* v_inst_1502_, uint8_t v___x_1503_, lean_object* v_val_1504_, lean_object* v_p_1505_, lean_object* v_toPure_1506_, lean_object* v_toBind_1507_, lean_object* v_inst_1508_, lean_object* v_inst_1509_, lean_object* v_tok_1510_, lean_object* v___x_1511_, lean_object* v_text_1512_){
_start:
{
lean_object* v_getEnv_1513_; lean_object* v___x_1514_; lean_object* v___f_1515_; lean_object* v___x_1516_; 
v_getEnv_1513_ = lean_ctor_get(v_inst_1500_, 0);
lean_inc(v_getEnv_1513_);
lean_dec_ref(v_inst_1500_);
v___x_1514_ = lean_box(v___x_1503_);
lean_inc(v_toBind_1507_);
v___f_1515_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__8___boxed), 13, 12);
lean_closure_set(v___f_1515_, 0, v_text_1512_);
lean_closure_set(v___f_1515_, 1, v_inst_1501_);
lean_closure_set(v___f_1515_, 2, v_inst_1502_);
lean_closure_set(v___f_1515_, 3, v___x_1514_);
lean_closure_set(v___f_1515_, 4, v_val_1504_);
lean_closure_set(v___f_1515_, 5, v_p_1505_);
lean_closure_set(v___f_1515_, 6, v_toPure_1506_);
lean_closure_set(v___f_1515_, 7, v_toBind_1507_);
lean_closure_set(v___f_1515_, 8, v_inst_1508_);
lean_closure_set(v___f_1515_, 9, v_inst_1509_);
lean_closure_set(v___f_1515_, 10, v_tok_1510_);
lean_closure_set(v___f_1515_, 11, v___x_1511_);
v___x_1516_ = lean_apply_4(v_toBind_1507_, lean_box(0), lean_box(0), v_getEnv_1513_, v___f_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg___lam__9___boxed(lean_object* v_inst_1517_, lean_object* v_inst_1518_, lean_object* v_inst_1519_, lean_object* v___x_1520_, lean_object* v_val_1521_, lean_object* v_p_1522_, lean_object* v_toPure_1523_, lean_object* v_toBind_1524_, lean_object* v_inst_1525_, lean_object* v_inst_1526_, lean_object* v_tok_1527_, lean_object* v___x_1528_, lean_object* v_text_1529_){
_start:
{
uint8_t v___x_1620__boxed_1530_; lean_object* v_res_1531_; 
v___x_1620__boxed_1530_ = lean_unbox(v___x_1520_);
v_res_1531_ = l_Lean_Doc_parseContent_x27___redArg___lam__9(v_inst_1517_, v_inst_1518_, v_inst_1519_, v___x_1620__boxed_1530_, v_val_1521_, v_p_1522_, v_toPure_1523_, v_toBind_1524_, v_inst_1525_, v_inst_1526_, v_tok_1527_, v___x_1528_, v_text_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27___redArg(lean_object* v_inst_1532_, lean_object* v_inst_1533_, lean_object* v_inst_1534_, lean_object* v_inst_1535_, lean_object* v_inst_1536_, lean_object* v_inst_1537_, lean_object* v_p_1538_, lean_object* v_tok_1539_, lean_object* v_contents_1540_){
_start:
{
lean_object* v_toApplicative_1541_; lean_object* v_toBind_1542_; lean_object* v_toPure_1543_; uint8_t v___x_1544_; lean_object* v___x_1545_; 
v_toApplicative_1541_ = lean_ctor_get(v_inst_1532_, 0);
v_toBind_1542_ = lean_ctor_get(v_inst_1532_, 1);
lean_inc(v_toBind_1542_);
v_toPure_1543_ = lean_ctor_get(v_toApplicative_1541_, 1);
lean_inc(v_toPure_1543_);
v___x_1544_ = 1;
v___x_1545_ = l_Lean_Syntax_getPos_x3f(v_tok_1539_, v___x_1544_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_getEnv_1546_; lean_object* v___x_1547_; lean_object* v___f_1548_; lean_object* v___x_1549_; 
lean_dec(v_tok_1539_);
lean_dec(v_inst_1533_);
v_getEnv_1546_ = lean_ctor_get(v_inst_1534_, 0);
lean_inc(v_getEnv_1546_);
lean_dec_ref(v_inst_1534_);
v___x_1547_ = lean_box(v___x_1544_);
lean_inc(v_toBind_1542_);
v___f_1548_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_1548_, 0, v_inst_1536_);
lean_closure_set(v___f_1548_, 1, v_inst_1537_);
lean_closure_set(v___f_1548_, 2, v_contents_1540_);
lean_closure_set(v___f_1548_, 3, v___x_1547_);
lean_closure_set(v___f_1548_, 4, v_p_1538_);
lean_closure_set(v___f_1548_, 5, v_toPure_1543_);
lean_closure_set(v___f_1548_, 6, v_toBind_1542_);
lean_closure_set(v___f_1548_, 7, v_inst_1532_);
lean_closure_set(v___f_1548_, 8, v_inst_1535_);
v___x_1549_ = lean_apply_4(v_toBind_1542_, lean_box(0), lean_box(0), v_getEnv_1546_, v___f_1548_);
return v___x_1549_;
}
else
{
lean_object* v_val_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___f_1553_; lean_object* v___x_1554_; 
lean_dec_ref(v_contents_1540_);
v_val_1550_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_val_1550_);
lean_dec_ref_known(v___x_1545_, 1);
v___x_1551_ = lean_unsigned_to_nat(0u);
v___x_1552_ = lean_box(v___x_1544_);
lean_inc(v_toBind_1542_);
v___f_1553_ = lean_alloc_closure((void*)(l_Lean_Doc_parseContent_x27___redArg___lam__9___boxed), 13, 12);
lean_closure_set(v___f_1553_, 0, v_inst_1534_);
lean_closure_set(v___f_1553_, 1, v_inst_1536_);
lean_closure_set(v___f_1553_, 2, v_inst_1537_);
lean_closure_set(v___f_1553_, 3, v___x_1552_);
lean_closure_set(v___f_1553_, 4, v_val_1550_);
lean_closure_set(v___f_1553_, 5, v_p_1538_);
lean_closure_set(v___f_1553_, 6, v_toPure_1543_);
lean_closure_set(v___f_1553_, 7, v_toBind_1542_);
lean_closure_set(v___f_1553_, 8, v_inst_1532_);
lean_closure_set(v___f_1553_, 9, v_inst_1535_);
lean_closure_set(v___f_1553_, 10, v_tok_1539_);
lean_closure_set(v___f_1553_, 11, v___x_1551_);
v___x_1554_ = lean_apply_4(v_toBind_1542_, lean_box(0), lean_box(0), v_inst_1533_, v___f_1553_);
return v___x_1554_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseContent_x27(lean_object* v_m_1555_, lean_object* v_inst_1556_, lean_object* v_inst_1557_, lean_object* v_inst_1558_, lean_object* v_inst_1559_, lean_object* v_inst_1560_, lean_object* v_inst_1561_, lean_object* v_p_1562_, lean_object* v_tok_1563_, lean_object* v_contents_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lean_Doc_parseContent_x27___redArg(v_inst_1556_, v_inst_1557_, v_inst_1558_, v_inst_1559_, v_inst_1560_, v_inst_1561_, v_p_1562_, v_tok_1563_, v_contents_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode___redArg(lean_object* v_inst_1566_, lean_object* v_inst_1567_, lean_object* v_inst_1568_, lean_object* v_inst_1569_, lean_object* v_inst_1570_, lean_object* v_inst_1571_, lean_object* v_p_1572_, lean_object* v_c_1573_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = l_Lean_TSyntax_getVersoCode(v_c_1573_);
v___x_1575_ = l_Lean_Doc_parseContent___redArg(v_inst_1566_, v_inst_1567_, v_inst_1568_, v_inst_1569_, v_inst_1570_, v_inst_1571_, v_p_1572_, v_c_1573_, v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode(lean_object* v_m_1576_, lean_object* v_inst_1577_, lean_object* v_inst_1578_, lean_object* v_inst_1579_, lean_object* v_inst_1580_, lean_object* v_inst_1581_, lean_object* v_inst_1582_, lean_object* v_p_1583_, lean_object* v_c_1584_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_Lean_Doc_parseVersoCode___redArg(v_inst_1577_, v_inst_1578_, v_inst_1579_, v_inst_1580_, v_inst_1581_, v_inst_1582_, v_p_1583_, v_c_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCodeBlock___redArg(lean_object* v_inst_1586_, lean_object* v_inst_1587_, lean_object* v_inst_1588_, lean_object* v_inst_1589_, lean_object* v_inst_1590_, lean_object* v_inst_1591_, lean_object* v_p_1592_, lean_object* v_c_1593_){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = l_Lean_TSyntax_getVersoCodeBlock(v_c_1593_);
v___x_1595_ = l_Lean_Doc_parseContent___redArg(v_inst_1586_, v_inst_1587_, v_inst_1588_, v_inst_1589_, v_inst_1590_, v_inst_1591_, v_p_1592_, v_c_1593_, v___x_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCodeBlock(lean_object* v_m_1596_, lean_object* v_inst_1597_, lean_object* v_inst_1598_, lean_object* v_inst_1599_, lean_object* v_inst_1600_, lean_object* v_inst_1601_, lean_object* v_inst_1602_, lean_object* v_p_1603_, lean_object* v_c_1604_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Lean_Doc_parseVersoCodeBlock___redArg(v_inst_1597_, v_inst_1598_, v_inst_1599_, v_inst_1600_, v_inst_1601_, v_inst_1602_, v_p_1603_, v_c_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode_x27___redArg(lean_object* v_inst_1606_, lean_object* v_inst_1607_, lean_object* v_inst_1608_, lean_object* v_inst_1609_, lean_object* v_inst_1610_, lean_object* v_inst_1611_, lean_object* v_p_1612_, lean_object* v_c_1613_){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = l_Lean_TSyntax_getVersoCode(v_c_1613_);
v___x_1615_ = l_Lean_Doc_parseContent_x27___redArg(v_inst_1606_, v_inst_1607_, v_inst_1608_, v_inst_1609_, v_inst_1610_, v_inst_1611_, v_p_1612_, v_c_1613_, v___x_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseVersoCode_x27(lean_object* v_m_1616_, lean_object* v_inst_1617_, lean_object* v_inst_1618_, lean_object* v_inst_1619_, lean_object* v_inst_1620_, lean_object* v_inst_1621_, lean_object* v_inst_1622_, lean_object* v_p_1623_, lean_object* v_c_1624_){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Lean_Doc_parseVersoCode_x27___redArg(v_inst_1617_, v_inst_1618_, v_inst_1619_, v_inst_1620_, v_inst_1621_, v_inst_1622_, v_p_1623_, v_c_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg(lean_object* v_inst_1626_, lean_object* v_inst_1627_, lean_object* v_inst_1628_, lean_object* v_inst_1629_, lean_object* v_inst_1630_, lean_object* v_inst_1631_, lean_object* v_p_1632_, lean_object* v_s_1633_){
_start:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1634_ = l_Lean_TSyntax_getString(v_s_1633_);
v___x_1635_ = l_Lean_Doc_parseContent___redArg(v_inst_1626_, v_inst_1627_, v_inst_1628_, v_inst_1629_, v_inst_1630_, v_inst_1631_, v_p_1632_, v_s_1633_, v___x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit(lean_object* v_m_1636_, lean_object* v_inst_1637_, lean_object* v_inst_1638_, lean_object* v_inst_1639_, lean_object* v_inst_1640_, lean_object* v_inst_1641_, lean_object* v_inst_1642_, lean_object* v_p_1643_, lean_object* v_s_1644_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_Doc_parseStrLit___redArg(v_inst_1637_, v_inst_1638_, v_inst_1639_, v_inst_1640_, v_inst_1641_, v_inst_1642_, v_p_1643_, v_s_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg(lean_object* v_inst_1646_, lean_object* v_inst_1647_, lean_object* v_inst_1648_, lean_object* v_inst_1649_, lean_object* v_inst_1650_, lean_object* v_inst_1651_, lean_object* v_p_1652_, lean_object* v_s_1653_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = l_Lean_TSyntax_getString(v_s_1653_);
v___x_1655_ = l_Lean_Doc_parseContent_x27___redArg(v_inst_1646_, v_inst_1647_, v_inst_1648_, v_inst_1649_, v_inst_1650_, v_inst_1651_, v_p_1652_, v_s_1653_, v___x_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27(lean_object* v_m_1656_, lean_object* v_inst_1657_, lean_object* v_inst_1658_, lean_object* v_inst_1659_, lean_object* v_inst_1660_, lean_object* v_inst_1661_, lean_object* v_inst_1662_, lean_object* v_p_1663_, lean_object* v_s_1664_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lean_Doc_parseStrLit_x27___redArg(v_inst_1657_, v_inst_1658_, v_inst_1659_, v_inst_1660_, v_inst_1661_, v_inst_1662_, v_p_1663_, v_s_1664_);
return v___x_1665_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_View(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_View(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Lean_DocString_Syntax(uint8_t builtin);
lean_object* initialize_Lean_DocString_View(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_View(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
}
#ifdef __cplusplus
}
#endif
