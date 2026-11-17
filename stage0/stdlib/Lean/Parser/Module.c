// Lean compiler output
// Module: Lean.Parser.Module
// Imports: public import Lean.Parser.Module.Syntax meta import Lean.Parser.Module.Syntax import Init.While meta import Lean.Parser.Extra
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
lean_object* l_Lean_Parser_tokenFn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
extern lean_object* l_Lean_Parser_SyntaxStack_empty;
lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
extern lean_object* l_Lean_Parser_Module_header;
lean_object* l_Lean_Parser_addParserTokens(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_empty___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Parser_mkParserState(lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
uint8_t l_Lean_MessageLog_hasUnreported(lean_object*);
lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_mkListNode(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_Module_updateTokens_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_Module_updateTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Parser.Module"};
static const lean_object* l_Lean_Parser_Module_updateTokens___closed__0 = (const lean_object*)&l_Lean_Parser_Module_updateTokens___closed__0_value;
static const lean_string_object l_Lean_Parser_Module_updateTokens___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Parser.Module.updateTokens"};
static const lean_object* l_Lean_Parser_Module_updateTokens___closed__1 = (const lean_object*)&l_Lean_Parser_Module_updateTokens___closed__1_value;
static const lean_string_object l_Lean_Parser_Module_updateTokens___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Parser_Module_updateTokens___closed__2 = (const lean_object*)&l_Lean_Parser_Module_updateTokens___closed__2_value;
static lean_once_cell_t l_Lean_Parser_Module_updateTokens___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Module_updateTokens___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_Module_updateTokens(lean_object*);
static const lean_ctor_object l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_instInhabitedModuleParserState_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedModuleParserState_default = (const lean_object*)&l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedModuleParserState = (const lean_object*)&l_Lean_Parser_instInhabitedModuleParserState_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected identifier"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unexpected token '"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unexpected token"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_parseHeader_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_parseHeader_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 219, 158, 40, 50, 143, 61, 44)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "cannot use `import all` without `module`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "cannot use `meta import` without `module`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__8_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "cannot use `public import` without `module`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__11_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "cannot use `all` with `public import`; consider using separate `public import "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` and `import all "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 107, .m_capacity = 107, .m_length = 106, .m_data = "` directives in order to import public data into the public scope and private data into the private scope."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__17_value),LEAN_SCALAR_PTR_LITERAL(107, 73, 92, 3, 207, 252, 164, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__19_value),LEAN_SCALAR_PTR_LITERAL(89, 228, 64, 55, 26, 167, 248, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__21_value),LEAN_SCALAR_PTR_LITERAL(198, 166, 14, 39, 152, 190, 236, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_parseHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_parseHeader___closed__0 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__0_value;
static const lean_string_object l_Lean_Parser_parseHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_Parser_parseHeader___closed__1 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__1_value;
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_parseHeader___closed__1_value),LEAN_SCALAR_PTR_LITERAL(182, 6, 18, 235, 50, 88, 101, 248)}};
static const lean_object* l_Lean_Parser_parseHeader___closed__2 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__2_value;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__3;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__4;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__5;
static const lean_string_object l_Lean_Parser_parseHeader___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lean_Parser_parseHeader___closed__6 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__6_value;
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_parseHeader___closed__6_value),LEAN_SCALAR_PTR_LITERAL(40, 173, 92, 3, 94, 219, 131, 202)}};
static const lean_object* l_Lean_Parser_parseHeader___closed__7 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__7_value;
static const lean_string_object l_Lean_Parser_parseHeader___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moduleTk"};
static const lean_object* l_Lean_Parser_parseHeader___closed__8 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__8_value;
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__9_value_aux_2),((lean_object*)&l_Lean_Parser_parseHeader___closed__8_value),LEAN_SCALAR_PTR_LITERAL(198, 239, 28, 252, 21, 233, 71, 221)}};
static const lean_object* l_Lean_Parser_parseHeader___closed__9 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eoi"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 206, 8, 118, 9, 188, 233, 7)}};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_isTerminalCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l_Lean_Parser_isTerminalCommand___closed__0 = (const lean_object*)&l_Lean_Parser_isTerminalCommand___closed__0_value;
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 245, 50, 125, 205, 155, 109, 0)}};
static const lean_object* l_Lean_Parser_isTerminalCommand___closed__1 = (const lean_object*)&l_Lean_Parser_isTerminalCommand___closed__1_value;
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Parser_isTerminalCommand___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(36, 144, 26, 198, 154, 96, 74, 167)}};
static const lean_object* l_Lean_Parser_isTerminalCommand___closed__2 = (const lean_object*)&l_Lean_Parser_isTerminalCommand___closed__2_value;
LEAN_EXPORT uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isTerminalCommand___boxed(lean_object*);
static const lean_array_object l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0_value;
static const lean_closure_object l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_tokenFn, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_topLevelCommandParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_topLevelCommandParserFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_topLevelCommandParserFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_topLevelCommandParserFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__1 = (const lean_object*)&l_Lean_Parser_topLevelCommandParserFn___closed__1_value;
static lean_once_cell_t l_Lean_Parser_topLevelCommandParserFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__2;
static lean_once_cell_t l_Lean_Parser_topLevelCommandParserFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_topLevelCommandParserFn___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_topLevelCommandParserFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "failed to parse file"};
static const lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1 = (const lean_object*)&l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1_value;
static lean_once_cell_t l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_testParseModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_testParseModule___closed__0 = (const lean_object*)&l_Lean_Parser_testParseModule___closed__0_value;
static const lean_string_object l_Lean_Parser_testParseModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_Parser_testParseModule___closed__1 = (const lean_object*)&l_Lean_Parser_testParseModule___closed__1_value;
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_testParseModule___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_testParseModule___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_testParseModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_testParseModule___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_testParseModule___closed__1_value),LEAN_SCALAR_PTR_LITERAL(59, 203, 142, 146, 93, 76, 229, 9)}};
static const lean_object* l_Lean_Parser_testParseModule___closed__2 = (const lean_object*)&l_Lean_Parser_testParseModule___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Data_Trie_empty___redArg();
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_Module_updateTokens_spec__0(lean_object* v_msg_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_obj_once(&l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0, &l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0_once, _init_l_panic___at___00Lean_Parser_Module_updateTokens_spec__0___closed__0);
v___x_4_ = lean_panic_fn_borrowed(v___x_3_, v_msg_2_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Parser_Module_updateTokens___closed__3(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_8_ = ((lean_object*)(l_Lean_Parser_Module_updateTokens___closed__2));
v___x_9_ = lean_unsigned_to_nat(26u);
v___x_10_ = lean_unsigned_to_nat(24u);
v___x_11_ = ((lean_object*)(l_Lean_Parser_Module_updateTokens___closed__1));
v___x_12_ = ((lean_object*)(l_Lean_Parser_Module_updateTokens___closed__0));
v___x_13_ = l_mkPanicMessageWithDecl(v___x_12_, v___x_11_, v___x_10_, v___x_9_, v___x_8_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Module_updateTokens(lean_object* v_tokens_14_){
_start:
{
lean_object* v___x_15_; lean_object* v_info_16_; lean_object* v___x_17_; 
v___x_15_ = l_Lean_Parser_Module_header;
v_info_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc_ref(v_info_16_);
v___x_17_ = l_Lean_Parser_addParserTokens(v_tokens_14_, v_info_16_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; 
lean_dec_ref_known(v___x_17_, 1);
v___x_18_ = lean_obj_once(&l_Lean_Parser_Module_updateTokens___closed__3, &l_Lean_Parser_Module_updateTokens___closed__3_once, _init_l_Lean_Parser_Module_updateTokens___closed__3);
v___x_19_ = l_panic___at___00Lean_Parser_Module_updateTokens_spec__0(v___x_18_);
return v___x_19_;
}
else
{
lean_object* v_a_20_; 
v_a_20_ = lean_ctor_get(v___x_17_, 0);
lean_inc(v_a_20_);
lean_dec_ref_known(v___x_17_, 1);
return v_a_20_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(lean_object* v_as_27_, lean_object* v_i_28_){
_start:
{
lean_object* v_zero_29_; uint8_t v_isZero_30_; 
v_zero_29_ = lean_unsigned_to_nat(0u);
v_isZero_30_ = lean_nat_dec_eq(v_i_28_, v_zero_29_);
if (v_isZero_30_ == 1)
{
lean_object* v___x_31_; 
lean_dec(v_i_28_);
v___x_31_ = lean_box(0);
return v___x_31_;
}
else
{
lean_object* v_one_32_; lean_object* v_n_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_one_32_ = lean_unsigned_to_nat(1u);
v_n_33_ = lean_nat_sub(v_i_28_, v_one_32_);
lean_dec(v_i_28_);
v___x_34_ = l_Subarray_get___redArg(v_as_27_, v_n_33_);
v___x_35_ = l_Lean_Syntax_getTailInfo(v___x_34_);
lean_dec(v___x_34_);
if (lean_obj_tag(v___x_35_) == 0)
{
lean_object* v_trailing_36_; lean_object* v___x_37_; 
lean_dec(v_n_33_);
v_trailing_36_ = lean_ctor_get(v___x_35_, 2);
lean_inc_ref(v_trailing_36_);
lean_dec_ref_known(v___x_35_, 4);
v___x_37_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_37_, 0, v_trailing_36_);
return v___x_37_;
}
else
{
lean_dec(v___x_35_);
v_i_28_ = v_n_33_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg___boxed(lean_object* v_as_39_, lean_object* v_i_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(v_as_39_, v_i_40_);
lean_dec_ref(v_as_39_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing(lean_object* v_s_42_){
_start:
{
lean_object* v___x_43_; lean_object* v_start_44_; lean_object* v_stop_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_43_ = l_Lean_Parser_SyntaxStack_toSubarray(v_s_42_);
v_start_44_ = lean_ctor_get(v___x_43_, 1);
v_stop_45_ = lean_ctor_get(v___x_43_, 2);
v___x_46_ = lean_nat_sub(v_stop_45_, v_start_44_);
v___x_47_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(v___x_43_, v___x_46_);
lean_dec_ref(v___x_43_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0(lean_object* v_as_48_, lean_object* v_i_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___redArg(v_as_48_, v_i_49_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0___boxed(lean_object* v_as_52_, lean_object* v_i_53_, lean_object* v_a_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing_spec__0(v_as_52_, v_i_53_, v_a_54_);
lean_dec_ref(v_as_52_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(lean_object* v_c_61_, lean_object* v_pos_62_, lean_object* v_stk_63_, lean_object* v_e_64_){
_start:
{
lean_object* v___y_66_; lean_object* v___y_67_; lean_object* v___y_68_; lean_object* v___y_69_; lean_object* v_pos_79_; lean_object* v_endPos_x3f_80_; lean_object* v_e_81_; lean_object* v___y_96_; lean_object* v___y_97_; lean_object* v___y_98_; lean_object* v___y_99_; lean_object* v___y_100_; lean_object* v_unexpectedTk_107_; lean_object* v_expected_108_; lean_object* v_pos_110_; lean_object* v_endPos_x3f_111_; lean_object* v_endPos_x3f_119_; uint8_t v___x_120_; 
v_unexpectedTk_107_ = lean_ctor_get(v_e_64_, 0);
v_expected_108_ = lean_ctor_get(v_e_64_, 2);
v_endPos_x3f_119_ = lean_box(0);
v___x_120_ = l_Lean_Syntax_isMissing(v_unexpectedTk_107_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; 
lean_inc(v_expected_108_);
lean_inc(v_unexpectedTk_107_);
lean_dec_ref(v_e_64_);
v___x_121_ = l_Lean_Syntax_getRange_x3f(v_unexpectedTk_107_, v___x_120_);
if (lean_obj_tag(v___x_121_) == 1)
{
lean_object* v_val_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_131_; 
lean_dec(v_pos_62_);
v_val_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_131_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_131_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_val_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_131_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v_start_126_; lean_object* v_stop_127_; lean_object* v_endPos_x3f_129_; 
v_start_126_ = lean_ctor_get(v_val_122_, 0);
lean_inc(v_start_126_);
v_stop_127_ = lean_ctor_get(v_val_122_, 1);
lean_inc(v_stop_127_);
lean_dec(v_val_122_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v_stop_127_);
v_endPos_x3f_129_ = v___x_124_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_stop_127_);
v_endPos_x3f_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
v_pos_110_ = v_start_126_;
v_endPos_x3f_111_ = v_endPos_x3f_129_;
goto v___jp_109_;
}
}
}
else
{
lean_dec(v___x_121_);
v_pos_110_ = v_pos_62_;
v_endPos_x3f_111_ = v_endPos_x3f_119_;
goto v___jp_109_;
}
}
else
{
lean_dec_ref(v_stk_63_);
v_pos_79_ = v_pos_62_;
v_endPos_x3f_80_ = v_endPos_x3f_119_;
v_e_81_ = v_e_64_;
goto v___jp_78_;
}
v___jp_65_:
{
uint8_t v___x_70_; uint8_t v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_70_ = 1;
v___x_71_ = 2;
v___x_72_ = 0;
v___x_73_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v___x_74_ = l_Lean_Parser_Error_toString(v___y_66_);
v___x_75_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
v___x_76_ = l_Lean_MessageData_ofFormat(v___x_75_);
v___x_77_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_77_, 0, v___y_68_);
lean_ctor_set(v___x_77_, 1, v___y_67_);
lean_ctor_set(v___x_77_, 2, v___y_69_);
lean_ctor_set(v___x_77_, 3, v___x_73_);
lean_ctor_set(v___x_77_, 4, v___x_76_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*5, v___x_70_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*5 + 1, v___x_71_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*5 + 2, v___x_72_);
return v___x_77_;
}
v___jp_78_:
{
lean_object* v_fileName_82_; lean_object* v_fileMap_83_; lean_object* v___x_84_; 
v_fileName_82_ = lean_ctor_get(v_c_61_, 1);
lean_inc_ref(v_fileName_82_);
v_fileMap_83_ = lean_ctor_get(v_c_61_, 2);
lean_inc_ref_n(v_fileMap_83_, 2);
lean_dec_ref(v_c_61_);
v___x_84_ = l_Lean_FileMap_toPosition(v_fileMap_83_, v_pos_79_);
lean_dec(v_pos_79_);
if (lean_obj_tag(v_endPos_x3f_80_) == 0)
{
lean_object* v___x_85_; 
lean_dec_ref(v_fileMap_83_);
v___x_85_ = lean_box(0);
v___y_66_ = v_e_81_;
v___y_67_ = v___x_84_;
v___y_68_ = v_fileName_82_;
v___y_69_ = v___x_85_;
goto v___jp_65_;
}
else
{
lean_object* v_val_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_94_; 
v_val_86_ = lean_ctor_get(v_endPos_x3f_80_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v_endPos_x3f_80_);
if (v_isSharedCheck_94_ == 0)
{
v___x_88_ = v_endPos_x3f_80_;
v_isShared_89_ = v_isSharedCheck_94_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_val_86_);
lean_dec(v_endPos_x3f_80_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_94_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_90_ = l_Lean_FileMap_toPosition(v_fileMap_83_, v_val_86_);
lean_dec(v_val_86_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 0, v___x_90_);
v___x_92_ = v___x_88_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___x_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
v___y_66_ = v_e_81_;
v___y_67_ = v___x_84_;
v___y_68_ = v_fileName_82_;
v___y_69_ = v___x_92_;
goto v___jp_65_;
}
}
}
}
v___jp_95_:
{
lean_object* v_e_101_; lean_object* v___x_102_; 
v_e_101_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_e_101_, 0, v___y_97_);
lean_ctor_set(v_e_101_, 1, v___y_100_);
lean_ctor_set(v_e_101_, 2, v___y_98_);
v___x_102_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage_lastTrailing(v_stk_63_);
if (lean_obj_tag(v___x_102_) == 1)
{
lean_object* v_val_103_; lean_object* v_startPos_104_; lean_object* v_stopPos_105_; uint8_t v_decide_106_; 
v_val_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_val_103_);
lean_dec_ref_known(v___x_102_, 1);
v_startPos_104_ = lean_ctor_get(v_val_103_, 1);
lean_inc(v_startPos_104_);
v_stopPos_105_ = lean_ctor_get(v_val_103_, 2);
lean_inc(v_stopPos_105_);
lean_dec(v_val_103_);
v_decide_106_ = lean_nat_dec_eq(v_stopPos_105_, v___y_96_);
lean_dec(v_stopPos_105_);
if (v_decide_106_ == 0)
{
lean_dec(v_startPos_104_);
v_pos_79_ = v___y_96_;
v_endPos_x3f_80_ = v___y_99_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
else
{
lean_dec(v___y_96_);
v_pos_79_ = v_startPos_104_;
v_endPos_x3f_80_ = v___y_99_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
}
else
{
lean_dec(v___x_102_);
v_pos_79_ = v___y_96_;
v_endPos_x3f_80_ = v___y_99_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
}
v___jp_109_:
{
switch(lean_obj_tag(v_unexpectedTk_107_))
{
case 3:
{
lean_object* v___x_112_; 
v___x_112_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__1));
v___y_96_ = v_pos_110_;
v___y_97_ = v_unexpectedTk_107_;
v___y_98_ = v_expected_108_;
v___y_99_ = v_endPos_x3f_111_;
v___y_100_ = v___x_112_;
goto v___jp_95_;
}
case 2:
{
lean_object* v_val_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v_val_113_ = lean_ctor_get(v_unexpectedTk_107_, 1);
v___x_114_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__2));
v___x_115_ = lean_string_append(v___x_114_, v_val_113_);
v___x_116_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__3));
v___x_117_ = lean_string_append(v___x_115_, v___x_116_);
v___y_96_ = v_pos_110_;
v___y_97_ = v_unexpectedTk_107_;
v___y_98_ = v_expected_108_;
v___y_99_ = v_endPos_x3f_111_;
v___y_100_ = v___x_117_;
goto v___jp_95_;
}
default: 
{
lean_object* v___x_118_; 
v___x_118_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4));
v___y_96_ = v_pos_110_;
v___y_97_ = v_unexpectedTk_107_;
v___y_98_ = v_expected_108_;
v___y_99_ = v_endPos_x3f_111_;
v___y_100_ = v___x_118_;
goto v___jp_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(lean_object* v_stx_132_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Syntax_getHeadInfo_x3f(v_stx_132_);
if (lean_obj_tag(v___x_137_) == 1)
{
lean_object* v_val_138_; 
v_val_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_val_138_);
lean_dec_ref_known(v___x_137_, 1);
if (lean_obj_tag(v_val_138_) == 0)
{
lean_object* v_leading_139_; lean_object* v_pos_140_; lean_object* v_trailing_141_; lean_object* v_endPos_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_164_; 
v_leading_139_ = lean_ctor_get(v_val_138_, 0);
v_pos_140_ = lean_ctor_get(v_val_138_, 1);
v_trailing_141_ = lean_ctor_get(v_val_138_, 2);
v_endPos_142_ = lean_ctor_get(v_val_138_, 3);
v_isSharedCheck_164_ = !lean_is_exclusive(v_val_138_);
if (v_isSharedCheck_164_ == 0)
{
v___x_144_ = v_val_138_;
v_isShared_145_ = v_isSharedCheck_164_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_endPos_142_);
lean_inc(v_trailing_141_);
lean_inc(v_pos_140_);
lean_inc(v_leading_139_);
lean_dec(v_val_138_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_164_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v_str_146_; lean_object* v_stopPos_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_162_; 
v_str_146_ = lean_ctor_get(v_leading_139_, 0);
v_stopPos_147_ = lean_ctor_get(v_leading_139_, 2);
v_isSharedCheck_162_ = !lean_is_exclusive(v_leading_139_);
if (v_isSharedCheck_162_ == 0)
{
lean_object* v_unused_163_; 
v_unused_163_ = lean_ctor_get(v_leading_139_, 1);
lean_dec(v_unused_163_);
v___x_149_ = v_leading_139_;
v_isShared_150_ = v_isSharedCheck_162_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_stopPos_147_);
lean_inc(v_str_146_);
lean_dec(v_leading_139_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_162_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_unsigned_to_nat(0u);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_str_146_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_161_, 2, v_stopPos_147_);
v___x_153_ = v_reuseFailAlloc_161_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_155_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_153_);
v___x_155_ = v___x_144_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_153_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_pos_140_);
lean_ctor_set(v_reuseFailAlloc_160_, 2, v_trailing_141_);
lean_ctor_set(v_reuseFailAlloc_160_, 3, v_endPos_142_);
v___x_155_ = v_reuseFailAlloc_160_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; uint8_t v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_156_ = l_Lean_Syntax_setHeadInfo(v_stx_132_, v___x_155_);
v___x_157_ = 1;
v___x_158_ = lean_box(v___x_157_);
v___x_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_156_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
return v___x_159_;
}
}
}
}
}
else
{
lean_dec(v_val_138_);
goto v___jp_133_;
}
}
else
{
lean_dec(v___x_137_);
goto v___jp_133_;
}
v___jp_133_:
{
uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = 0;
v___x_135_ = lean_box(v___x_134_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v_stx_132_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
return v___x_136_;
}
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_parseHeader_spec__0(lean_object* v_x_165_, lean_object* v_x_166_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
if (lean_obj_tag(v_x_166_) == 0)
{
uint8_t v___x_167_; 
v___x_167_ = 1;
return v___x_167_;
}
else
{
uint8_t v___x_168_; 
v___x_168_ = 0;
return v___x_168_;
}
}
else
{
if (lean_obj_tag(v_x_166_) == 0)
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
else
{
lean_object* v_val_170_; lean_object* v_val_171_; uint8_t v___x_172_; 
v_val_170_ = lean_ctor_get(v_x_165_, 0);
v_val_171_ = lean_ctor_get(v_x_166_, 0);
v___x_172_ = l_Lean_Parser_instBEqError_beq(v_val_170_, v_val_171_);
return v___x_172_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_parseHeader_spec__0___boxed(lean_object* v_x_173_, lean_object* v_x_174_){
_start:
{
uint8_t v_res_175_; lean_object* v_r_176_; 
v_res_175_ = l_instBEqOption_beq___at___00Lean_Parser_parseHeader_spec__0(v_x_173_, v_x_174_);
lean_dec(v_x_174_);
lean_dec(v_x_173_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(lean_object* v_inputCtx_177_, lean_object* v_as_178_, size_t v_sz_179_, size_t v_i_180_, lean_object* v_b_181_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_usize_dec_lt(v_i_180_, v_sz_179_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; 
lean_dec_ref(v_inputCtx_177_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v_b_181_);
return v___x_184_;
}
else
{
lean_object* v_a_185_; lean_object* v_snd_186_; lean_object* v_fst_187_; lean_object* v_fst_188_; lean_object* v_snd_189_; lean_object* v___x_190_; lean_object* v___x_191_; size_t v___x_192_; size_t v___x_193_; 
v_a_185_ = lean_array_uget_borrowed(v_as_178_, v_i_180_);
v_snd_186_ = lean_ctor_get(v_a_185_, 1);
v_fst_187_ = lean_ctor_get(v_a_185_, 0);
v_fst_188_ = lean_ctor_get(v_snd_186_, 0);
v_snd_189_ = lean_ctor_get(v_snd_186_, 1);
lean_inc(v_snd_189_);
lean_inc(v_fst_188_);
lean_inc(v_fst_187_);
lean_inc_ref(v_inputCtx_177_);
v___x_190_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_177_, v_fst_187_, v_fst_188_, v_snd_189_);
v___x_191_ = l_Lean_MessageLog_add(v___x_190_, v_b_181_);
v___x_192_ = ((size_t)1ULL);
v___x_193_ = lean_usize_add(v_i_180_, v___x_192_);
v_i_180_ = v___x_193_;
v_b_181_ = v___x_191_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1___boxed(lean_object* v_inputCtx_195_, lean_object* v_as_196_, lean_object* v_sz_197_, lean_object* v_i_198_, lean_object* v_b_199_, lean_object* v___y_200_){
_start:
{
size_t v_sz_boxed_201_; size_t v_i_boxed_202_; lean_object* v_res_203_; 
v_sz_boxed_201_ = lean_unbox_usize(v_sz_197_);
lean_dec(v_sz_197_);
v_i_boxed_202_ = lean_unbox_usize(v_i_198_);
lean_dec(v_i_198_);
v_res_203_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(v_inputCtx_195_, v_as_196_, v_sz_boxed_201_, v_i_boxed_202_, v_b_199_);
lean_dec_ref(v_as_196_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(uint8_t v___x_204_, lean_object* v_inputCtx_205_, lean_object* v_ref_206_, lean_object* v_msg_207_){
_start:
{
uint8_t v___x_208_; lean_object* v___y_210_; lean_object* v___y_211_; lean_object* v___y_212_; lean_object* v___y_213_; lean_object* v___y_220_; lean_object* v___x_226_; 
v___x_208_ = 0;
v___x_226_ = l_Lean_Syntax_getPos_x3f(v_ref_206_, v___x_208_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v___x_227_; 
v___x_227_ = lean_unsigned_to_nat(0u);
v___y_220_ = v___x_227_;
goto v___jp_219_;
}
else
{
lean_object* v_val_228_; 
v_val_228_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_228_);
lean_dec_ref_known(v___x_226_, 1);
v___y_220_ = v_val_228_;
goto v___jp_219_;
}
v___jp_209_:
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_214_ = l_Lean_FileMap_toPosition(v___y_210_, v___y_213_);
lean_dec(v___y_213_);
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = 2;
v___x_217_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v___x_218_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_218_, 0, v___y_211_);
lean_ctor_set(v___x_218_, 1, v___y_212_);
lean_ctor_set(v___x_218_, 2, v___x_215_);
lean_ctor_set(v___x_218_, 3, v___x_217_);
lean_ctor_set(v___x_218_, 4, v_msg_207_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*5, v___x_204_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*5 + 1, v___x_216_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*5 + 2, v___x_208_);
return v___x_218_;
}
v___jp_219_:
{
lean_object* v_fileName_221_; lean_object* v_fileMap_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_fileName_221_ = lean_ctor_get(v_inputCtx_205_, 1);
lean_inc_ref(v_fileName_221_);
v_fileMap_222_ = lean_ctor_get(v_inputCtx_205_, 2);
lean_inc_ref_n(v_fileMap_222_, 2);
lean_dec_ref(v_inputCtx_205_);
v___x_223_ = l_Lean_FileMap_toPosition(v_fileMap_222_, v___y_220_);
v___x_224_ = l_Lean_Syntax_getTailPos_x3f(v_ref_206_, v___x_208_);
if (lean_obj_tag(v___x_224_) == 0)
{
v___y_210_ = v_fileMap_222_;
v___y_211_ = v_fileName_221_;
v___y_212_ = v___x_223_;
v___y_213_ = v___y_220_;
goto v___jp_209_;
}
else
{
lean_object* v_val_225_; 
lean_dec(v___y_220_);
v_val_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_225_);
lean_dec_ref_known(v___x_224_, 1);
v___y_210_ = v_fileMap_222_;
v___y_211_ = v_fileName_221_;
v___y_212_ = v___x_223_;
v___y_213_ = v_val_225_;
goto v___jp_209_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0___boxed(lean_object* v___x_229_, lean_object* v_inputCtx_230_, lean_object* v_ref_231_, lean_object* v_msg_232_){
_start:
{
uint8_t v___x_4780__boxed_233_; lean_object* v_res_234_; 
v___x_4780__boxed_233_ = lean_unbox(v___x_229_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_4780__boxed_233_, v_inputCtx_230_, v_ref_231_, v_msg_232_);
lean_dec(v_ref_231_);
return v_res_234_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__6));
v___x_248_ = l_Lean_MessageData_ofFormat(v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__9));
v___x_253_ = l_Lean_MessageData_ofFormat(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__12));
v___x_258_ = l_Lean_MessageData_ofFormat(v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(lean_object* v_inputCtx_280_, lean_object* v_moduleTk_x3f_281_, lean_object* v_as_282_, size_t v_sz_283_, size_t v_i_284_, lean_object* v_b_285_){
_start:
{
lean_object* v_a_288_; uint8_t v___x_292_; 
v___x_292_ = lean_usize_dec_lt(v_i_284_, v_sz_283_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; 
lean_dec_ref(v_inputCtx_280_);
v___x_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_293_, 0, v_b_285_);
return v___x_293_;
}
else
{
lean_object* v___x_294_; lean_object* v_a_295_; uint8_t v___x_296_; 
v___x_294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4));
v_a_295_ = lean_array_uget_borrowed(v_as_282_, v_i_284_);
lean_inc(v_a_295_);
v___x_296_ = l_Lean_Syntax_isOfKind(v_a_295_, v___x_294_);
if (v___x_296_ == 0)
{
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v___y_298_; lean_object* v_messages_299_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v_messages_307_; lean_object* v___x_312_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v_allTk_x3f_316_; lean_object* v___x_347_; lean_object* v___y_349_; lean_object* v_metaTk_x3f_350_; lean_object* v_pubTk_x3f_362_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_372_ = l_Lean_Syntax_getArg(v_a_295_, v___x_312_);
v___x_373_ = l_Lean_Syntax_isNone(v___x_372_);
if (v___x_373_ == 0)
{
uint8_t v___x_374_; 
lean_inc(v___x_372_);
v___x_374_ = l_Lean_Syntax_matchesNull(v___x_372_, v___x_347_);
if (v___x_374_ == 0)
{
lean_dec(v___x_372_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_375_ = l_Lean_Syntax_getArg(v___x_372_, v___x_312_);
lean_dec(v___x_372_);
v___x_376_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22));
lean_inc(v___x_375_);
v___x_377_ = l_Lean_Syntax_isOfKind(v___x_375_, v___x_376_);
if (v___x_377_ == 0)
{
lean_dec(v___x_375_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = l_Lean_Syntax_getArg(v___x_375_, v___x_312_);
lean_dec(v___x_375_);
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
v_pubTk_x3f_362_ = v___x_379_;
goto v___jp_361_;
}
}
}
else
{
lean_object* v___x_380_; 
lean_dec(v___x_372_);
v___x_380_ = lean_box(0);
v_pubTk_x3f_362_ = v___x_380_;
goto v___jp_361_;
}
v___jp_297_:
{
if (lean_obj_tag(v___y_298_) == 1)
{
lean_object* v_val_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_val_300_ = lean_ctor_get(v___y_298_, 0);
lean_inc(v_val_300_);
lean_dec_ref_known(v___y_298_, 1);
v___x_301_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7);
lean_inc_ref(v_inputCtx_280_);
v___x_302_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_296_, v_inputCtx_280_, v_val_300_, v___x_301_);
lean_dec(v_val_300_);
v___x_303_ = l_Lean_MessageLog_add(v___x_302_, v_messages_299_);
v_a_288_ = v___x_303_;
goto v___jp_287_;
}
else
{
lean_dec(v___y_298_);
v_a_288_ = v_messages_299_;
goto v___jp_287_;
}
}
v___jp_304_:
{
if (lean_obj_tag(v___y_306_) == 1)
{
lean_object* v_val_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_val_308_ = lean_ctor_get(v___y_306_, 0);
lean_inc(v_val_308_);
lean_dec_ref_known(v___y_306_, 1);
v___x_309_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10);
lean_inc_ref(v_inputCtx_280_);
v___x_310_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_296_, v_inputCtx_280_, v_val_308_, v___x_309_);
lean_dec(v_val_308_);
v___x_311_ = l_Lean_MessageLog_add(v___x_310_, v_messages_307_);
v___y_298_ = v___y_305_;
v_messages_299_ = v___x_311_;
goto v___jp_297_;
}
else
{
lean_dec(v___y_306_);
v___y_298_ = v___y_305_;
v_messages_299_ = v_messages_307_;
goto v___jp_297_;
}
}
v___jp_313_:
{
lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_317_ = lean_unsigned_to_nat(5u);
v___x_318_ = l_Lean_Syntax_getArg(v_a_295_, v___x_317_);
v___x_319_ = l_Lean_Syntax_matchesNull(v___x_318_, v___x_312_);
if (v___x_319_ == 0)
{
lean_dec(v_allTk_x3f_316_);
lean_dec(v___y_315_);
lean_dec(v___y_314_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
if (lean_obj_tag(v_moduleTk_x3f_281_) == 0)
{
if (lean_obj_tag(v___y_314_) == 1)
{
lean_object* v_val_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v_val_320_ = lean_ctor_get(v___y_314_, 0);
lean_inc(v_val_320_);
lean_dec_ref_known(v___y_314_, 1);
v___x_321_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13);
lean_inc_ref(v_inputCtx_280_);
v___x_322_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_296_, v_inputCtx_280_, v_val_320_, v___x_321_);
lean_dec(v_val_320_);
v___x_323_ = l_Lean_MessageLog_add(v___x_322_, v_b_285_);
v___y_305_ = v_allTk_x3f_316_;
v___y_306_ = v___y_315_;
v_messages_307_ = v___x_323_;
goto v___jp_304_;
}
else
{
lean_dec(v___y_314_);
v___y_305_ = v_allTk_x3f_316_;
v___y_306_ = v___y_315_;
v_messages_307_ = v_b_285_;
goto v___jp_304_;
}
}
else
{
lean_dec(v___y_315_);
if (lean_obj_tag(v_allTk_x3f_316_) == 1)
{
if (lean_obj_tag(v___y_314_) == 0)
{
lean_dec_ref_known(v_allTk_x3f_316_, 1);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v_val_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_345_; 
v_val_324_ = lean_ctor_get(v_allTk_x3f_316_, 0);
lean_inc(v_val_324_);
lean_dec_ref_known(v_allTk_x3f_316_, 1);
v_isSharedCheck_345_ = !lean_is_exclusive(v___y_314_);
if (v_isSharedCheck_345_ == 0)
{
lean_object* v_unused_346_; 
v_unused_346_ = lean_ctor_get(v___y_314_, 0);
lean_dec(v_unused_346_);
v___x_326_ = v___y_314_;
v_isShared_327_ = v_isSharedCheck_345_;
goto v_resetjp_325_;
}
else
{
lean_dec(v___y_314_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_345_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_328_ = lean_unsigned_to_nat(4u);
v___x_329_ = l_Lean_Syntax_getArg(v_a_295_, v___x_328_);
v___x_330_ = l_Lean_TSyntax_getId(v___x_329_);
lean_dec(v___x_329_);
v___x_331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14));
v___x_332_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_330_, v___x_319_);
v___x_333_ = lean_string_append(v___x_331_, v___x_332_);
v___x_334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15));
v___x_335_ = lean_string_append(v___x_333_, v___x_334_);
v___x_336_ = lean_string_append(v___x_335_, v___x_332_);
lean_dec_ref(v___x_332_);
v___x_337_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16));
v___x_338_ = lean_string_append(v___x_336_, v___x_337_);
if (v_isShared_327_ == 0)
{
lean_ctor_set_tag(v___x_326_, 3);
lean_ctor_set(v___x_326_, 0, v___x_338_);
v___x_340_ = v___x_326_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_338_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = l_Lean_MessageData_ofFormat(v___x_340_);
lean_inc_ref(v_inputCtx_280_);
v___x_342_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_296_, v_inputCtx_280_, v_val_324_, v___x_341_);
lean_dec(v_val_324_);
v___x_343_ = l_Lean_MessageLog_add(v___x_342_, v_b_285_);
v_a_288_ = v___x_343_;
goto v___jp_287_;
}
}
}
}
else
{
lean_dec(v_allTk_x3f_316_);
lean_dec(v___y_314_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
}
}
}
v___jp_348_:
{
lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_351_ = lean_unsigned_to_nat(3u);
v___x_352_ = l_Lean_Syntax_getArg(v_a_295_, v___x_351_);
v___x_353_ = l_Lean_Syntax_isNone(v___x_352_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
lean_inc(v___x_352_);
v___x_354_ = l_Lean_Syntax_matchesNull(v___x_352_, v___x_347_);
if (v___x_354_ == 0)
{
lean_dec(v___x_352_);
lean_dec(v_metaTk_x3f_350_);
lean_dec(v___y_349_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_355_ = l_Lean_Syntax_getArg(v___x_352_, v___x_312_);
lean_dec(v___x_352_);
v___x_356_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18));
lean_inc(v___x_355_);
v___x_357_ = l_Lean_Syntax_isOfKind(v___x_355_, v___x_356_);
if (v___x_357_ == 0)
{
lean_dec(v___x_355_);
lean_dec(v_metaTk_x3f_350_);
lean_dec(v___y_349_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = l_Lean_Syntax_getArg(v___x_355_, v___x_312_);
lean_dec(v___x_355_);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
v___y_314_ = v___y_349_;
v___y_315_ = v_metaTk_x3f_350_;
v_allTk_x3f_316_ = v___x_359_;
goto v___jp_313_;
}
}
}
else
{
lean_object* v___x_360_; 
lean_dec(v___x_352_);
v___x_360_ = lean_box(0);
v___y_314_ = v___y_349_;
v___y_315_ = v_metaTk_x3f_350_;
v_allTk_x3f_316_ = v___x_360_;
goto v___jp_313_;
}
}
v___jp_361_:
{
lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_363_ = l_Lean_Syntax_getArg(v_a_295_, v___x_347_);
v___x_364_ = l_Lean_Syntax_isNone(v___x_363_);
if (v___x_364_ == 0)
{
uint8_t v___x_365_; 
lean_inc(v___x_363_);
v___x_365_ = l_Lean_Syntax_matchesNull(v___x_363_, v___x_347_);
if (v___x_365_ == 0)
{
lean_dec(v___x_363_);
lean_dec(v_pubTk_x3f_362_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_366_ = l_Lean_Syntax_getArg(v___x_363_, v___x_312_);
lean_dec(v___x_363_);
v___x_367_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20));
lean_inc(v___x_366_);
v___x_368_ = l_Lean_Syntax_isOfKind(v___x_366_, v___x_367_);
if (v___x_368_ == 0)
{
lean_dec(v___x_366_);
lean_dec(v_pubTk_x3f_362_);
v_a_288_ = v_b_285_;
goto v___jp_287_;
}
else
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = l_Lean_Syntax_getArg(v___x_366_, v___x_312_);
lean_dec(v___x_366_);
v___x_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
v___y_349_ = v_pubTk_x3f_362_;
v_metaTk_x3f_350_ = v___x_370_;
goto v___jp_348_;
}
}
}
else
{
lean_object* v___x_371_; 
lean_dec(v___x_363_);
v___x_371_ = lean_box(0);
v___y_349_ = v_pubTk_x3f_362_;
v_metaTk_x3f_350_ = v___x_371_;
goto v___jp_348_;
}
}
}
}
v___jp_287_:
{
size_t v___x_289_; size_t v___x_290_; 
v___x_289_ = ((size_t)1ULL);
v___x_290_ = lean_usize_add(v_i_284_, v___x_289_);
v_i_284_ = v___x_290_;
v_b_285_ = v_a_288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___boxed(lean_object* v_inputCtx_381_, lean_object* v_moduleTk_x3f_382_, lean_object* v_as_383_, lean_object* v_sz_384_, lean_object* v_i_385_, lean_object* v_b_386_, lean_object* v___y_387_){
_start:
{
size_t v_sz_boxed_388_; size_t v_i_boxed_389_; lean_object* v_res_390_; 
v_sz_boxed_388_ = lean_unbox_usize(v_sz_384_);
lean_dec(v_sz_384_);
v_i_boxed_389_ = lean_unbox_usize(v_i_385_);
lean_dec(v_i_385_);
v_res_390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(v_inputCtx_381_, v_moduleTk_x3f_382_, v_as_383_, v_sz_boxed_388_, v_i_boxed_389_, v_b_386_);
lean_dec_ref(v_as_383_);
lean_dec(v_moduleTk_x3f_382_);
return v_res_390_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__3(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_unsigned_to_nat(32u);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_398_);
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
return v___x_400_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__4(void){
_start:
{
size_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_401_ = ((size_t)5ULL);
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_unsigned_to_nat(32u);
v___x_404_ = lean_mk_empty_array_with_capacity(v___x_403_);
v___x_405_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__3, &l_Lean_Parser_parseHeader___closed__3_once, _init_l_Lean_Parser_parseHeader___closed__3);
v___x_406_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
lean_ctor_set(v___x_406_, 2, v___x_402_);
lean_ctor_set(v___x_406_, 3, v___x_402_);
lean_ctor_set_usize(v___x_406_, 4, v___x_401_);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__5(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = l_Lean_NameSet_empty;
v___x_408_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__4, &l_Lean_Parser_parseHeader___closed__4_once, _init_l_Lean_Parser_parseHeader___closed__4);
v___x_409_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
lean_ctor_set(v___x_409_, 2, v___x_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader(lean_object* v_inputCtx_422_){
_start:
{
lean_object* v___x_424_; uint32_t v___x_425_; lean_object* v___x_426_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = 0;
v___x_426_ = l_Lean_mkEmptyEnvironment(v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_539_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_539_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_539_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_539_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v_fn_432_; lean_object* v_inputString_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v_stxStack_444_; lean_object* v_pos_445_; lean_object* v_errorMsg_446_; lean_object* v___y_448_; uint8_t v___y_449_; lean_object* v___y_450_; uint8_t v___y_451_; lean_object* v___y_459_; lean_object* v___y_460_; uint8_t v___y_461_; uint8_t v___y_462_; lean_object* v___y_466_; lean_object* v_messages_467_; lean_object* v___y_478_; lean_object* v___y_479_; size_t v___y_480_; lean_object* v___y_481_; lean_object* v___y_497_; size_t v___y_498_; lean_object* v___y_499_; lean_object* v_moduleTk_x3f_500_; lean_object* v___y_509_; uint8_t v___x_536_; 
v___x_431_ = l_Lean_Parser_Module_header;
v_fn_432_ = lean_ctor_get(v___x_431_, 1);
v_inputString_433_ = lean_ctor_get(v_inputCtx_422_, 0);
lean_inc(v_a_427_);
v___x_434_ = l_Lean_Parser_getTokenTable(v_a_427_);
v___x_435_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__0));
lean_inc_ref(v_fn_432_);
v___x_436_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_436_, 0, v___x_435_);
lean_closure_set(v___x_436_, 1, v_fn_432_);
v___x_437_ = l_Lean_Parser_Module_updateTokens(v___x_434_);
v___x_438_ = l_Lean_Options_empty;
v___x_439_ = lean_box(0);
v___x_440_ = lean_box(0);
v___x_441_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_441_, 0, v_a_427_);
lean_ctor_set(v___x_441_, 1, v___x_438_);
lean_ctor_set(v___x_441_, 2, v___x_439_);
lean_ctor_set(v___x_441_, 3, v___x_440_);
v___x_442_ = l_Lean_Parser_mkParserState(v_inputString_433_);
lean_inc_ref(v_inputCtx_422_);
v___x_443_ = l_Lean_Parser_ParserFn_run(v___x_436_, v_inputCtx_422_, v___x_441_, v___x_437_, v___x_442_);
v_stxStack_444_ = lean_ctor_get(v___x_443_, 0);
v_pos_445_ = lean_ctor_get(v___x_443_, 2);
lean_inc(v_pos_445_);
v_errorMsg_446_ = lean_ctor_get(v___x_443_, 4);
lean_inc(v_errorMsg_446_);
v___x_536_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_444_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_444_);
v___y_509_ = v___x_537_;
goto v___jp_508_;
}
else
{
lean_object* v___x_538_; 
v___x_538_ = lean_box(0);
v___y_509_ = v___x_538_;
goto v___jp_508_;
}
v___jp_447_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_452_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_452_, 0, v_pos_445_);
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*1, v___y_449_);
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*1 + 1, v___y_451_);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v___y_450_);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v___y_448_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_454_);
v___x_456_ = v___x_429_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
v___jp_458_:
{
if (v___y_461_ == 0)
{
uint8_t v___x_463_; 
v___x_463_ = 1;
v___y_448_ = v___y_459_;
v___y_449_ = v___y_462_;
v___y_450_ = v___y_460_;
v___y_451_ = v___x_463_;
goto v___jp_447_;
}
else
{
uint8_t v___x_464_; 
v___x_464_ = 0;
v___y_448_ = v___y_459_;
v___y_449_ = v___y_462_;
v___y_450_ = v___y_460_;
v___y_451_ = v___x_464_;
goto v___jp_447_;
}
}
v___jp_465_:
{
lean_object* v___x_468_; lean_object* v_fst_469_; lean_object* v_snd_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_468_ = l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(v___y_466_);
v_fst_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_fst_469_);
v_snd_470_ = lean_ctor_get(v___x_468_, 1);
lean_inc(v_snd_470_);
lean_dec_ref(v___x_468_);
v___x_471_ = lean_box(0);
v___x_472_ = l_instBEqOption_beq___at___00Lean_Parser_parseHeader_spec__0(v_errorMsg_446_, v___x_471_);
lean_dec(v_errorMsg_446_);
if (v___x_472_ == 0)
{
uint8_t v___x_473_; uint8_t v___x_474_; 
v___x_473_ = 1;
v___x_474_ = lean_unbox(v_snd_470_);
lean_dec(v_snd_470_);
v___y_459_ = v_fst_469_;
v___y_460_ = v_messages_467_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_473_;
goto v___jp_458_;
}
else
{
uint8_t v___x_475_; uint8_t v___x_476_; 
v___x_475_ = 0;
v___x_476_ = lean_unbox(v_snd_470_);
lean_dec(v_snd_470_);
v___y_459_ = v_fst_469_;
v___y_460_ = v_messages_467_;
v___y_461_ = v___x_476_;
v___y_462_ = v___x_475_;
goto v___jp_458_;
}
}
v___jp_477_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; size_t v_sz_485_; lean_object* v___x_486_; 
v___x_482_ = lean_unsigned_to_nat(2u);
v___x_483_ = l_Lean_Syntax_getArg(v___y_481_, v___x_482_);
v___x_484_ = l_Lean_Syntax_getArgs(v___x_483_);
lean_dec(v___x_483_);
v_sz_485_ = lean_array_size(v___x_484_);
v___x_486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(v_inputCtx_422_, v___y_479_, v___x_484_, v_sz_485_, v___y_480_, v___y_478_);
lean_dec_ref(v___x_484_);
lean_dec(v___y_479_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
v___y_466_ = v___y_481_;
v_messages_467_ = v_a_487_;
goto v___jp_465_;
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
lean_dec(v___y_481_);
lean_dec(v_errorMsg_446_);
lean_dec(v_pos_445_);
lean_del_object(v___x_429_);
v_a_488_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_486_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_486_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
v___jp_496_:
{
lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_501_ = lean_unsigned_to_nat(1u);
v___x_502_ = l_Lean_Syntax_getArg(v___y_499_, v___x_501_);
v___x_503_ = l_Lean_Syntax_isNone(v___x_502_);
if (v___x_503_ == 0)
{
uint8_t v___x_504_; 
lean_inc(v___x_502_);
v___x_504_ = l_Lean_Syntax_matchesNull(v___x_502_, v___x_501_);
if (v___x_504_ == 0)
{
lean_dec(v___x_502_);
lean_dec(v_moduleTk_x3f_500_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_499_;
v_messages_467_ = v___y_497_;
goto v___jp_465_;
}
else
{
lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_505_ = l_Lean_Syntax_getArg(v___x_502_, v___x_424_);
lean_dec(v___x_502_);
v___x_506_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__2));
v___x_507_ = l_Lean_Syntax_isOfKind(v___x_505_, v___x_506_);
if (v___x_507_ == 0)
{
lean_dec(v_moduleTk_x3f_500_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_499_;
v_messages_467_ = v___y_497_;
goto v___jp_465_;
}
else
{
v___y_478_ = v___y_497_;
v___y_479_ = v_moduleTk_x3f_500_;
v___y_480_ = v___y_498_;
v___y_481_ = v___y_499_;
goto v___jp_477_;
}
}
}
else
{
lean_dec(v___x_502_);
v___y_478_ = v___y_497_;
v___y_479_ = v_moduleTk_x3f_500_;
v___y_480_ = v___y_498_;
v___y_481_ = v___y_499_;
goto v___jp_477_;
}
}
v___jp_508_:
{
lean_object* v___x_510_; lean_object* v___x_511_; size_t v_sz_512_; size_t v___x_513_; lean_object* v___x_514_; 
v___x_510_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__5, &l_Lean_Parser_parseHeader___closed__5_once, _init_l_Lean_Parser_parseHeader___closed__5);
v___x_511_ = l_Lean_Parser_ParserState_allErrors(v___x_443_);
v_sz_512_ = lean_array_size(v___x_511_);
v___x_513_ = ((size_t)0ULL);
lean_inc_ref(v_inputCtx_422_);
v___x_514_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(v_inputCtx_422_, v___x_511_, v_sz_512_, v___x_513_, v___x_510_);
lean_dec_ref(v___x_511_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_514_, 1);
v___x_516_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__7));
lean_inc(v___y_509_);
v___x_517_ = l_Lean_Syntax_isOfKind(v___y_509_, v___x_516_);
if (v___x_517_ == 0)
{
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_509_;
v_messages_467_ = v_a_515_;
goto v___jp_465_;
}
else
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = l_Lean_Syntax_getArg(v___y_509_, v___x_424_);
v___x_519_ = l_Lean_Syntax_isNone(v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_520_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_518_);
v___x_521_ = l_Lean_Syntax_matchesNull(v___x_518_, v___x_520_);
if (v___x_521_ == 0)
{
lean_dec(v___x_518_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_509_;
v_messages_467_ = v_a_515_;
goto v___jp_465_;
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_522_ = l_Lean_Syntax_getArg(v___x_518_, v___x_424_);
lean_dec(v___x_518_);
v___x_523_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__9));
lean_inc(v___x_522_);
v___x_524_ = l_Lean_Syntax_isOfKind(v___x_522_, v___x_523_);
if (v___x_524_ == 0)
{
lean_dec(v___x_522_);
lean_dec_ref(v_inputCtx_422_);
v___y_466_ = v___y_509_;
v_messages_467_ = v_a_515_;
goto v___jp_465_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = l_Lean_Syntax_getArg(v___x_522_, v___x_424_);
lean_dec(v___x_522_);
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
v___y_497_ = v_a_515_;
v___y_498_ = v___x_513_;
v___y_499_ = v___y_509_;
v_moduleTk_x3f_500_ = v___x_526_;
goto v___jp_496_;
}
}
}
else
{
lean_object* v___x_527_; 
lean_dec(v___x_518_);
v___x_527_ = lean_box(0);
v___y_497_ = v_a_515_;
v___y_498_ = v___x_513_;
v___y_499_ = v___y_509_;
v_moduleTk_x3f_500_ = v___x_527_;
goto v___jp_496_;
}
}
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec(v___y_509_);
lean_dec(v_errorMsg_446_);
lean_dec(v_pos_445_);
lean_del_object(v___x_429_);
lean_dec_ref(v_inputCtx_422_);
v_a_528_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_514_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_514_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec_ref(v_inputCtx_422_);
v_a_540_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_426_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_426_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader___boxed(lean_object* v_inputCtx_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_Parser_parseHeader(v_inputCtx_548_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(lean_object* v_inputCtx_558_, lean_object* v_pos_559_){
_start:
{
lean_object* v___y_561_; lean_object* v_inputString_571_; lean_object* v_endPos_572_; uint8_t v___x_573_; 
v_inputString_571_ = lean_ctor_get(v_inputCtx_558_, 0);
v_endPos_572_ = lean_ctor_get(v_inputCtx_558_, 3);
v___x_573_ = lean_nat_dec_le(v_pos_559_, v_endPos_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; 
lean_inc(v_endPos_572_);
lean_inc(v_pos_559_);
lean_inc_ref(v_inputString_571_);
v___x_574_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_574_, 0, v_inputString_571_);
lean_ctor_set(v___x_574_, 1, v_pos_559_);
lean_ctor_set(v___x_574_, 2, v_endPos_572_);
v___y_561_ = v___x_574_;
goto v___jp_560_;
}
else
{
lean_object* v___x_575_; 
lean_inc_n(v_pos_559_, 2);
lean_inc_ref(v_inputString_571_);
v___x_575_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_575_, 0, v_inputString_571_);
lean_ctor_set(v___x_575_, 1, v_pos_559_);
lean_ctor_set(v___x_575_, 2, v_pos_559_);
v___y_561_ = v___x_575_;
goto v___jp_560_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v_atom_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_inc(v_pos_559_);
lean_inc_ref(v___y_561_);
v___x_562_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_562_, 0, v___y_561_);
lean_ctor_set(v___x_562_, 1, v_pos_559_);
lean_ctor_set(v___x_562_, 2, v___y_561_);
lean_ctor_set(v___x_562_, 3, v_pos_559_);
v___x_563_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v_atom_564_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_564_, 0, v___x_562_);
lean_ctor_set(v_atom_564_, 1, v___x_563_);
v___x_565_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2));
v___x_566_ = lean_unsigned_to_nat(1u);
v___x_567_ = lean_mk_empty_array_with_capacity(v___x_566_);
v___x_568_ = lean_array_push(v___x_567_, v_atom_564_);
v___x_569_ = lean_box(2);
v___x_570_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set(v___x_570_, 1, v___x_565_);
lean_ctor_set(v___x_570_, 2, v___x_568_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___boxed(lean_object* v_inputCtx_576_, lean_object* v_pos_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(v_inputCtx_576_, v_pos_577_);
lean_dec_ref(v_inputCtx_576_);
return v_res_578_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isTerminalCommand(lean_object* v_s_590_){
_start:
{
lean_object* v___x_591_; uint8_t v___x_592_; 
v___x_591_ = ((lean_object*)(l_Lean_Parser_isTerminalCommand___closed__1));
lean_inc(v_s_590_);
v___x_592_ = l_Lean_Syntax_isOfKind(v_s_590_, v___x_591_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = ((lean_object*)(l_Lean_Parser_isTerminalCommand___closed__2));
lean_inc(v_s_590_);
v___x_594_ = l_Lean_Syntax_isOfKind(v_s_590_, v___x_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_595_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2));
v___x_596_ = l_Lean_Syntax_isOfKind(v_s_590_, v___x_595_);
return v___x_596_;
}
else
{
lean_dec(v_s_590_);
return v___x_594_;
}
}
else
{
lean_dec(v_s_590_);
return v___x_592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isTerminalCommand___boxed(lean_object* v_s_597_){
_start:
{
uint8_t v_res_598_; lean_object* v_r_599_; 
v_res_598_ = l_Lean_Parser_isTerminalCommand(v_s_597_);
v_r_599_ = lean_box(v_res_598_);
return v_r_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(lean_object* v_inputCtx_604_, lean_object* v_pmctx_605_, lean_object* v_pos_606_){
_start:
{
lean_object* v_inputString_607_; lean_object* v_env_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v_s_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v_s_617_; lean_object* v_errorMsg_618_; 
v_inputString_607_ = lean_ctor_get(v_inputCtx_604_, 0);
v_env_608_ = lean_ctor_get(v_pmctx_605_, 0);
v___x_609_ = lean_unsigned_to_nat(0u);
v___x_610_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0));
v___x_611_ = l_Lean_Parser_SyntaxStack_empty;
v___x_612_ = l_Lean_Parser_initCacheForInput(v_inputString_607_);
v___x_613_ = lean_box(0);
lean_inc(v_pos_606_);
v_s_614_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_s_614_, 0, v___x_611_);
lean_ctor_set(v_s_614_, 1, v___x_609_);
lean_ctor_set(v_s_614_, 2, v_pos_606_);
lean_ctor_set(v_s_614_, 3, v___x_612_);
lean_ctor_set(v_s_614_, 4, v___x_613_);
lean_ctor_set(v_s_614_, 5, v___x_610_);
v___x_615_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1));
lean_inc_ref(v_env_608_);
v___x_616_ = l_Lean_Parser_getTokenTable(v_env_608_);
v_s_617_ = l_Lean_Parser_ParserFn_run(v___x_615_, v_inputCtx_604_, v_pmctx_605_, v___x_616_, v_s_614_);
v_errorMsg_618_ = lean_ctor_get(v_s_617_, 4);
if (lean_obj_tag(v_errorMsg_618_) == 0)
{
lean_object* v_pos_619_; 
lean_dec(v_pos_606_);
v_pos_619_ = lean_ctor_get(v_s_617_, 2);
lean_inc(v_pos_619_);
lean_dec_ref(v_s_617_);
return v_pos_619_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; 
lean_dec_ref(v_s_617_);
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_nat_add(v_pos_606_, v___x_620_);
lean_dec(v_pos_606_);
return v___x_621_;
}
}
}
static lean_object* _init_l_Lean_Parser_topLevelCommandParserFn___closed__2(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = ((lean_object*)(l_Lean_Parser_topLevelCommandParserFn___closed__1));
v___x_627_ = l_Lean_Parser_categoryParser(v___x_626_, v___x_625_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_Parser_topLevelCommandParserFn___closed__3(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_obj_once(&l_Lean_Parser_topLevelCommandParserFn___closed__2, &l_Lean_Parser_topLevelCommandParserFn___closed__2_once, _init_l_Lean_Parser_topLevelCommandParserFn___closed__2);
v___x_629_ = l_Lean_Parser_withPosition(v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_topLevelCommandParserFn(lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
lean_object* v___x_632_; lean_object* v_fn_633_; lean_object* v___x_634_; 
v___x_632_ = lean_obj_once(&l_Lean_Parser_topLevelCommandParserFn___closed__3, &l_Lean_Parser_topLevelCommandParserFn___closed__3_once, _init_l_Lean_Parser_topLevelCommandParserFn___closed__3);
v_fn_633_ = lean_ctor_get(v___x_632_, 1);
lean_inc_ref(v_fn_633_);
v___x_634_ = lean_apply_2(v_fn_633_, v_a_630_, v_a_631_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(lean_object* v_inputCtx_635_, lean_object* v_as_636_, size_t v_sz_637_, size_t v_i_638_, lean_object* v_b_639_){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = lean_usize_dec_lt(v_i_638_, v_sz_637_);
if (v___x_640_ == 0)
{
lean_dec_ref(v_inputCtx_635_);
return v_b_639_;
}
else
{
lean_object* v_a_641_; lean_object* v_snd_642_; lean_object* v_fst_643_; lean_object* v_fst_644_; lean_object* v_snd_645_; lean_object* v___x_646_; lean_object* v___x_647_; size_t v___x_648_; size_t v___x_649_; 
v_a_641_ = lean_array_uget_borrowed(v_as_636_, v_i_638_);
v_snd_642_ = lean_ctor_get(v_a_641_, 1);
v_fst_643_ = lean_ctor_get(v_a_641_, 0);
v_fst_644_ = lean_ctor_get(v_snd_642_, 0);
v_snd_645_ = lean_ctor_get(v_snd_642_, 1);
lean_inc(v_snd_645_);
lean_inc(v_fst_644_);
lean_inc(v_fst_643_);
lean_inc_ref(v_inputCtx_635_);
v___x_646_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_635_, v_fst_643_, v_fst_644_, v_snd_645_);
v___x_647_ = l_Lean_MessageLog_add(v___x_646_, v_b_639_);
v___x_648_ = ((size_t)1ULL);
v___x_649_ = lean_usize_add(v_i_638_, v___x_648_);
v_i_638_ = v___x_649_;
v_b_639_ = v___x_647_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0___boxed(lean_object* v_inputCtx_651_, lean_object* v_as_652_, lean_object* v_sz_653_, lean_object* v_i_654_, lean_object* v_b_655_){
_start:
{
size_t v_sz_boxed_656_; size_t v_i_boxed_657_; lean_object* v_res_658_; 
v_sz_boxed_656_ = lean_unbox_usize(v_sz_653_);
lean_dec(v_sz_653_);
v_i_boxed_657_ = lean_unbox_usize(v_i_654_);
lean_dec(v_i_654_);
v_res_658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(v_inputCtx_651_, v_as_652_, v_sz_boxed_656_, v_i_boxed_657_, v_b_655_);
lean_dec_ref(v_as_652_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(lean_object* v_snd_659_, lean_object* v_inputCtx_660_, lean_object* v_pos_661_, lean_object* v_stxStack_662_, lean_object* v_val_663_, lean_object* v___x_664_, lean_object* v_fst_665_, lean_object* v_____r_666_, lean_object* v_pos_667_){
_start:
{
lean_object* v_messages_669_; uint8_t v___y_677_; uint8_t v___y_688_; uint8_t v___x_690_; 
v___x_690_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_662_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_662_);
v___x_692_ = l_Lean_Syntax_getPos_x3f(v___x_691_, v___x_690_);
lean_dec(v___x_691_);
if (lean_obj_tag(v___x_692_) == 0)
{
uint8_t v___x_693_; 
v___x_693_ = 1;
v___y_688_ = v___x_693_;
goto v___jp_687_;
}
else
{
lean_dec_ref_known(v___x_692_, 1);
v___y_688_ = v___x_690_;
goto v___jp_687_;
}
}
else
{
v___y_688_ = v___x_690_;
goto v___jp_687_;
}
v___jp_668_:
{
uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_670_ = 1;
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_messages_669_);
lean_ctor_set(v___x_671_, 1, v_snd_659_);
v___x_672_ = lean_box(v___x_670_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v___x_671_);
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v_pos_667_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
v___jp_676_:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
lean_inc_ref(v_stxStack_662_);
v___x_678_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_660_, v_pos_661_, v_stxStack_662_, v_val_663_);
v___x_679_ = l_Lean_MessageLog_add(v___x_678_, v___x_664_);
if (v___y_677_ == 0)
{
uint8_t v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
lean_dec(v_snd_659_);
v___x_680_ = 1;
v___x_681_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_662_);
lean_dec_ref(v_stxStack_662_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_679_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = lean_box(v___x_680_);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
lean_ctor_set(v___x_684_, 1, v___x_682_);
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v_pos_667_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
else
{
lean_dec_ref(v_stxStack_662_);
v_messages_669_ = v___x_679_;
goto v___jp_668_;
}
}
v___jp_687_:
{
uint8_t v___x_689_; 
v___x_689_ = lean_unbox(v_fst_665_);
if (v___x_689_ == 0)
{
v___y_677_ = v___y_688_;
goto v___jp_676_;
}
else
{
if (v___y_688_ == 0)
{
v___y_677_ = v___y_688_;
goto v___jp_676_;
}
else
{
lean_dec_ref(v_val_663_);
lean_dec_ref(v_stxStack_662_);
lean_dec(v_pos_661_);
lean_dec_ref(v_inputCtx_660_);
v_messages_669_ = v___x_664_;
goto v___jp_668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0___boxed(lean_object* v_snd_694_, lean_object* v_inputCtx_695_, lean_object* v_pos_696_, lean_object* v_stxStack_697_, lean_object* v_val_698_, lean_object* v___x_699_, lean_object* v_fst_700_, lean_object* v_____r_701_, lean_object* v_pos_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_snd_694_, v_inputCtx_695_, v_pos_696_, v_stxStack_697_, v_val_698_, v___x_699_, v_fst_700_, v_____r_701_, v_pos_702_);
lean_dec(v_fst_700_);
return v_res_703_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_704_ = lean_alloc_closure((void*)(l_Lean_Parser_topLevelCommandParserFn), 2, 0);
v___x_705_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__0));
v___x_706_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_706_, 0, v___x_705_);
lean_closure_set(v___x_706_, 1, v___x_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(lean_object* v_inputCtx_707_, lean_object* v_pmctx_708_, lean_object* v_a_709_){
_start:
{
lean_object* v___y_711_; lean_object* v_snd_715_; lean_object* v_snd_716_; lean_object* v_fst_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_791_; 
v_snd_715_ = lean_ctor_get(v_a_709_, 1);
lean_inc(v_snd_715_);
v_snd_716_ = lean_ctor_get(v_snd_715_, 1);
lean_inc(v_snd_716_);
v_fst_717_ = lean_ctor_get(v_a_709_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_a_709_);
if (v_isSharedCheck_791_ == 0)
{
lean_object* v_unused_792_; 
v_unused_792_ = lean_ctor_get(v_a_709_, 1);
lean_dec(v_unused_792_);
v___x_719_ = v_a_709_;
v_isShared_720_ = v_isSharedCheck_791_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_fst_717_);
lean_dec(v_a_709_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_791_;
goto v_resetjp_718_;
}
v___jp_710_:
{
if (lean_obj_tag(v___y_711_) == 0)
{
lean_object* v_a_712_; 
lean_dec_ref(v_pmctx_708_);
lean_dec_ref(v_inputCtx_707_);
v_a_712_ = lean_ctor_get(v___y_711_, 0);
lean_inc(v_a_712_);
lean_dec_ref_known(v___y_711_, 1);
return v_a_712_;
}
else
{
lean_object* v_a_713_; 
v_a_713_ = lean_ctor_get(v___y_711_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___y_711_, 1);
v_a_709_ = v_a_713_;
goto _start;
}
}
v_resetjp_718_:
{
lean_object* v_fst_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_789_; 
v_fst_721_ = lean_ctor_get(v_snd_715_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v_snd_715_);
if (v_isSharedCheck_789_ == 0)
{
lean_object* v_unused_790_; 
v_unused_790_ = lean_ctor_get(v_snd_715_, 1);
lean_dec(v_unused_790_);
v___x_723_ = v_snd_715_;
v_isShared_724_ = v_isSharedCheck_789_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_fst_721_);
lean_dec(v_snd_715_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_789_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v_fst_725_; lean_object* v_snd_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_788_; 
v_fst_725_ = lean_ctor_get(v_snd_716_, 0);
v_snd_726_ = lean_ctor_get(v_snd_716_, 1);
v_isSharedCheck_788_ = !lean_is_exclusive(v_snd_716_);
if (v_isSharedCheck_788_ == 0)
{
v___x_728_ = v_snd_716_;
v_isShared_729_ = v_isSharedCheck_788_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_snd_726_);
lean_inc(v_fst_725_);
lean_dec(v_snd_716_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_788_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
uint8_t v___x_730_; 
v___x_730_ = l_Lean_Parser_InputContext_atEnd(v_inputCtx_707_, v_fst_717_);
if (v___x_730_ == 0)
{
lean_object* v_env_731_; lean_object* v_inputString_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v_stxStack_742_; lean_object* v_pos_743_; lean_object* v_errorMsg_744_; lean_object* v_recoveredErrors_745_; size_t v_sz_746_; size_t v___x_747_; lean_object* v___x_748_; uint8_t v___y_750_; uint8_t v___x_769_; 
v_env_731_ = lean_ctor_get(v_pmctx_708_, 0);
v_inputString_732_ = lean_ctor_get(v_inputCtx_707_, 0);
v___x_733_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0);
lean_inc_ref(v_env_731_);
v___x_734_ = l_Lean_Parser_getTokenTable(v_env_731_);
v___x_735_ = l_Lean_Parser_SyntaxStack_empty;
v___x_736_ = lean_unsigned_to_nat(0u);
v___x_737_ = l_Lean_Parser_initCacheForInput(v_inputString_732_);
v___x_738_ = lean_box(0);
v___x_739_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0));
lean_inc(v_fst_717_);
v___x_740_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_740_, 0, v___x_735_);
lean_ctor_set(v___x_740_, 1, v___x_736_);
lean_ctor_set(v___x_740_, 2, v_fst_717_);
lean_ctor_set(v___x_740_, 3, v___x_737_);
lean_ctor_set(v___x_740_, 4, v___x_738_);
lean_ctor_set(v___x_740_, 5, v___x_739_);
lean_inc_ref(v_pmctx_708_);
lean_inc_ref_n(v_inputCtx_707_, 2);
v___x_741_ = l_Lean_Parser_ParserFn_run(v___x_733_, v_inputCtx_707_, v_pmctx_708_, v___x_734_, v___x_740_);
v_stxStack_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc_ref(v_stxStack_742_);
v_pos_743_ = lean_ctor_get(v___x_741_, 2);
lean_inc(v_pos_743_);
v_errorMsg_744_ = lean_ctor_get(v___x_741_, 4);
lean_inc(v_errorMsg_744_);
v_recoveredErrors_745_ = lean_ctor_get(v___x_741_, 5);
lean_inc_ref(v_recoveredErrors_745_);
lean_dec_ref(v___x_741_);
v_sz_746_ = lean_array_size(v_recoveredErrors_745_);
v___x_747_ = ((size_t)0ULL);
v___x_748_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(v_inputCtx_707_, v_recoveredErrors_745_, v_sz_746_, v___x_747_, v_fst_725_);
lean_dec_ref(v_recoveredErrors_745_);
v___x_769_ = lean_unbox(v_fst_721_);
if (v___x_769_ == 0)
{
uint8_t v___x_770_; 
v___x_770_ = lean_unbox(v_fst_721_);
v___y_750_ = v___x_770_;
goto v___jp_749_;
}
else
{
uint8_t v___x_771_; 
v___x_771_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_742_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_772_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_742_);
v___x_773_ = l_Lean_Syntax_isAntiquot(v___x_772_);
lean_dec(v___x_772_);
if (v___x_773_ == 0)
{
v___y_750_ = v___x_773_;
goto v___jp_749_;
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
lean_dec(v_errorMsg_744_);
lean_dec_ref(v_stxStack_742_);
lean_del_object(v___x_728_);
lean_del_object(v___x_723_);
lean_del_object(v___x_719_);
lean_dec(v_fst_717_);
v___x_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_774_, 0, v___x_748_);
lean_ctor_set(v___x_774_, 1, v_snd_726_);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v_fst_721_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v_pos_743_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v_a_709_ = v___x_776_;
goto _start;
}
}
else
{
v___y_750_ = v___x_730_;
goto v___jp_749_;
}
}
v___jp_749_:
{
if (lean_obj_tag(v_errorMsg_744_) == 0)
{
lean_object* v___x_751_; lean_object* v___x_753_; 
lean_dec(v_snd_726_);
lean_dec(v_fst_721_);
lean_dec(v_fst_717_);
lean_dec_ref(v_pmctx_708_);
lean_dec_ref(v_inputCtx_707_);
v___x_751_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_742_);
lean_dec_ref(v_stxStack_742_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v___x_751_);
lean_ctor_set(v___x_728_, 0, v___x_748_);
v___x_753_ = v___x_728_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v___x_751_);
v___x_753_ = v_reuseFailAlloc_761_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_754_ = lean_box(v___y_750_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v___x_753_);
lean_ctor_set(v___x_723_, 0, v___x_754_);
v___x_756_ = v___x_723_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_754_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_753_);
v___x_756_ = v_reuseFailAlloc_760_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_758_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 1, v___x_756_);
lean_ctor_set(v___x_719_, 0, v_pos_743_);
v___x_758_ = v___x_719_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_pos_743_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v___x_756_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
else
{
lean_object* v_val_762_; uint8_t v_decide_763_; 
lean_del_object(v___x_728_);
lean_del_object(v___x_723_);
lean_del_object(v___x_719_);
v_val_762_ = lean_ctor_get(v_errorMsg_744_, 0);
lean_inc(v_val_762_);
lean_dec_ref_known(v_errorMsg_744_, 1);
v_decide_763_ = lean_nat_dec_eq(v_pos_743_, v_fst_717_);
lean_dec(v_fst_717_);
if (v_decide_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_box(0);
lean_inc(v_pos_743_);
lean_inc_ref(v_inputCtx_707_);
v___x_765_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_snd_726_, v_inputCtx_707_, v_pos_743_, v_stxStack_742_, v_val_762_, v___x_748_, v_fst_721_, v___x_764_, v_pos_743_);
lean_dec(v_fst_721_);
v___y_711_ = v___x_765_;
goto v___jp_710_;
}
else
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
lean_inc(v_pos_743_);
lean_inc_ref(v_pmctx_708_);
lean_inc_ref_n(v_inputCtx_707_, 2);
v___x_766_ = l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(v_inputCtx_707_, v_pmctx_708_, v_pos_743_);
v___x_767_ = lean_box(0);
v___x_768_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_snd_726_, v_inputCtx_707_, v_pos_743_, v_stxStack_742_, v_val_762_, v___x_748_, v_fst_721_, v___x_767_, v___x_766_);
lean_dec(v_fst_721_);
v___y_711_ = v___x_768_;
goto v___jp_710_;
}
}
}
}
else
{
lean_object* v___x_778_; lean_object* v___x_780_; 
lean_dec(v_snd_726_);
lean_dec_ref(v_pmctx_708_);
lean_inc(v_fst_717_);
v___x_778_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(v_inputCtx_707_, v_fst_717_);
lean_dec_ref(v_inputCtx_707_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v___x_778_);
v___x_780_ = v___x_728_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_fst_725_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v___x_778_);
v___x_780_ = v_reuseFailAlloc_787_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_782_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v___x_780_);
v___x_782_ = v___x_723_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_fst_721_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v___x_780_);
v___x_782_ = v_reuseFailAlloc_786_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_object* v___x_784_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 1, v___x_782_);
v___x_784_ = v___x_719_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_fst_717_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseCommand(lean_object* v_inputCtx_793_, lean_object* v_pmctx_794_, lean_object* v_mps_795_, lean_object* v_messages_796_){
_start:
{
lean_object* v_pos_797_; uint8_t v_recovering_798_; uint8_t v_hasLeading_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_839_; 
v_pos_797_ = lean_ctor_get(v_mps_795_, 0);
v_recovering_798_ = lean_ctor_get_uint8(v_mps_795_, sizeof(void*)*1);
v_hasLeading_799_ = lean_ctor_get_uint8(v_mps_795_, sizeof(void*)*1 + 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_mps_795_);
if (v_isSharedCheck_839_ == 0)
{
v___x_801_ = v_mps_795_;
v_isShared_802_ = v_isSharedCheck_839_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_pos_797_);
lean_dec(v_mps_795_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_839_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v_stx_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_snd_809_; lean_object* v_snd_810_; lean_object* v_fst_811_; lean_object* v_fst_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_837_; 
v_stx_803_ = lean_box(0);
v___x_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_804_, 0, v_messages_796_);
lean_ctor_set(v___x_804_, 1, v_stx_803_);
v___x_805_ = lean_box(v_recovering_798_);
v___x_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
lean_ctor_set(v___x_806_, 1, v___x_804_);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v_pos_797_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(v_inputCtx_793_, v_pmctx_794_, v___x_807_);
v_snd_809_ = lean_ctor_get(v___x_808_, 1);
lean_inc(v_snd_809_);
v_snd_810_ = lean_ctor_get(v_snd_809_, 1);
lean_inc(v_snd_810_);
v_fst_811_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_fst_811_);
lean_dec_ref(v___x_808_);
v_fst_812_ = lean_ctor_get(v_snd_809_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v_snd_809_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; 
v_unused_838_ = lean_ctor_get(v_snd_809_, 1);
lean_dec(v_unused_838_);
v___x_814_ = v_snd_809_;
v_isShared_815_ = v_isSharedCheck_837_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_fst_812_);
lean_dec(v_snd_809_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_837_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v_fst_816_; lean_object* v_snd_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_836_; 
v_fst_816_ = lean_ctor_get(v_snd_810_, 0);
v_snd_817_ = lean_ctor_get(v_snd_810_, 1);
v_isSharedCheck_836_ = !lean_is_exclusive(v_snd_810_);
if (v_isSharedCheck_836_ == 0)
{
v___x_819_ = v_snd_810_;
v_isShared_820_ = v_isSharedCheck_836_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_snd_817_);
lean_inc(v_fst_816_);
lean_dec(v_snd_810_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_836_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v_stx_822_; 
if (v_hasLeading_799_ == 0)
{
v_stx_822_ = v_snd_817_;
goto v___jp_821_;
}
else
{
lean_object* v___x_834_; lean_object* v_fst_835_; 
v___x_834_ = l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(v_snd_817_);
v_fst_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_fst_835_);
lean_dec_ref(v___x_834_);
v_stx_822_ = v_fst_835_;
goto v___jp_821_;
}
v___jp_821_:
{
uint8_t v___x_823_; lean_object* v___x_825_; 
v___x_823_ = 0;
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v_fst_811_);
v___x_825_ = v___x_801_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_fst_811_);
v___x_825_ = v_reuseFailAlloc_833_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
uint8_t v___x_826_; lean_object* v___x_828_; 
v___x_826_ = lean_unbox(v_fst_812_);
lean_dec(v_fst_812_);
lean_ctor_set_uint8(v___x_825_, sizeof(void*)*1, v___x_826_);
lean_ctor_set_uint8(v___x_825_, sizeof(void*)*1 + 1, v___x_823_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 1, v_fst_816_);
lean_ctor_set(v___x_819_, 0, v___x_825_);
v___x_828_ = v___x_819_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_825_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_fst_816_);
v___x_828_ = v_reuseFailAlloc_832_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_830_; 
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 1, v___x_828_);
lean_ctor_set(v___x_814_, 0, v_stx_822_);
v___x_830_ = v___x_814_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_stx_822_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v___x_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1(lean_object* v_inputCtx_840_, lean_object* v_pmctx_841_, lean_object* v_inst_842_, lean_object* v_a_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(v_inputCtx_840_, v_pmctx_841_, v_a_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(lean_object* v_s_845_){
_start:
{
lean_object* v___x_847_; lean_object* v_putStr_848_; lean_object* v___x_849_; 
v___x_847_ = lean_get_stdout();
v_putStr_848_ = lean_ctor_get(v___x_847_, 4);
lean_inc_ref(v_putStr_848_);
lean_dec_ref(v___x_847_);
v___x_849_ = lean_apply_2(v_putStr_848_, v_s_845_, lean_box(0));
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0___boxed(lean_object* v_s_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(v_s_850_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(lean_object* v_s_853_){
_start:
{
uint32_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = 10;
v___x_856_ = lean_string_push(v_s_853_, v___x_855_);
v___x_857_ = l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0___boxed(lean_object* v_s_858_, lean_object* v_a_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v_s_858_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(lean_object* v_msg_861_){
_start:
{
uint8_t v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = 0;
v___x_864_ = l_Lean_Message_toString(v_msg_861_, v___x_863_);
v___x_865_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0___boxed(lean_object* v_msg_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(v_msg_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(lean_object* v_f_869_, lean_object* v_as_870_, size_t v_i_871_, size_t v_stop_872_, lean_object* v_b_873_){
_start:
{
uint8_t v___x_875_; 
v___x_875_ = lean_usize_dec_eq(v_i_871_, v_stop_872_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = lean_array_uget_borrowed(v_as_870_, v_i_871_);
lean_inc_ref(v_f_869_);
lean_inc(v___x_876_);
v___x_877_ = lean_apply_2(v_f_869_, v___x_876_, lean_box(0));
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; size_t v___x_879_; size_t v___x_880_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = ((size_t)1ULL);
v___x_880_ = lean_usize_add(v_i_871_, v___x_879_);
v_i_871_ = v___x_880_;
v_b_873_ = v_a_878_;
goto _start;
}
else
{
lean_dec_ref(v_f_869_);
return v___x_877_;
}
}
else
{
lean_object* v___x_882_; 
lean_dec_ref(v_f_869_);
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v_b_873_);
return v___x_882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4___boxed(lean_object* v_f_883_, lean_object* v_as_884_, lean_object* v_i_885_, lean_object* v_stop_886_, lean_object* v_b_887_, lean_object* v___y_888_){
_start:
{
size_t v_i_boxed_889_; size_t v_stop_boxed_890_; lean_object* v_res_891_; 
v_i_boxed_889_ = lean_unbox_usize(v_i_885_);
lean_dec(v_i_885_);
v_stop_boxed_890_ = lean_unbox_usize(v_stop_886_);
lean_dec(v_stop_886_);
v_res_891_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_883_, v_as_884_, v_i_boxed_889_, v_stop_boxed_890_, v_b_887_);
lean_dec_ref(v_as_884_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(lean_object* v_f_892_, lean_object* v_x_893_){
_start:
{
if (lean_obj_tag(v_x_893_) == 0)
{
lean_object* v_cs_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_909_; 
v_cs_895_ = lean_ctor_get(v_x_893_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v_x_893_);
if (v_isSharedCheck_909_ == 0)
{
v___x_897_ = v_x_893_;
v_isShared_898_ = v_isSharedCheck_909_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_cs_895_);
lean_dec(v_x_893_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_909_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; uint8_t v___x_902_; 
v___x_899_ = lean_unsigned_to_nat(0u);
v___x_900_ = lean_array_get_size(v_cs_895_);
v___x_901_ = lean_box(0);
v___x_902_ = lean_nat_dec_lt(v___x_899_, v___x_900_);
if (v___x_902_ == 0)
{
lean_object* v___x_904_; 
lean_dec_ref(v_cs_895_);
lean_dec_ref(v_f_892_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_901_);
v___x_904_ = v___x_897_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_901_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
else
{
size_t v___x_906_; size_t v___x_907_; lean_object* v___x_908_; 
lean_del_object(v___x_897_);
v___x_906_ = ((size_t)0ULL);
v___x_907_ = lean_usize_of_nat(v___x_900_);
v___x_908_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_892_, v_cs_895_, v___x_906_, v___x_907_, v___x_901_);
lean_dec_ref(v_cs_895_);
return v___x_908_;
}
}
}
else
{
lean_object* v_vs_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_924_; 
v_vs_910_ = lean_ctor_get(v_x_893_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v_x_893_);
if (v_isSharedCheck_924_ == 0)
{
v___x_912_ = v_x_893_;
v_isShared_913_ = v_isSharedCheck_924_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_vs_910_);
lean_dec(v_x_893_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_924_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v___x_914_ = lean_unsigned_to_nat(0u);
v___x_915_ = lean_array_get_size(v_vs_910_);
v___x_916_ = lean_box(0);
v___x_917_ = lean_nat_dec_lt(v___x_914_, v___x_915_);
if (v___x_917_ == 0)
{
lean_object* v___x_919_; 
lean_dec_ref(v_vs_910_);
lean_dec_ref(v_f_892_);
if (v_isShared_913_ == 0)
{
lean_ctor_set_tag(v___x_912_, 0);
lean_ctor_set(v___x_912_, 0, v___x_916_);
v___x_919_ = v___x_912_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_916_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
else
{
size_t v___x_921_; size_t v___x_922_; lean_object* v___x_923_; 
lean_del_object(v___x_912_);
v___x_921_ = ((size_t)0ULL);
v___x_922_ = lean_usize_of_nat(v___x_915_);
v___x_923_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_892_, v_vs_910_, v___x_921_, v___x_922_, v___x_916_);
lean_dec_ref(v_vs_910_);
return v___x_923_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(lean_object* v_f_925_, lean_object* v_as_926_, size_t v_i_927_, size_t v_stop_928_, lean_object* v_b_929_){
_start:
{
uint8_t v___x_931_; 
v___x_931_ = lean_usize_dec_eq(v_i_927_, v_stop_928_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = lean_array_uget_borrowed(v_as_926_, v_i_927_);
lean_inc(v___x_932_);
lean_inc_ref(v_f_925_);
v___x_933_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_925_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; size_t v___x_935_; size_t v___x_936_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
v___x_935_ = ((size_t)1ULL);
v___x_936_ = lean_usize_add(v_i_927_, v___x_935_);
v_i_927_ = v___x_936_;
v_b_929_ = v_a_934_;
goto _start;
}
else
{
lean_dec_ref(v_f_925_);
return v___x_933_;
}
}
else
{
lean_object* v___x_938_; 
lean_dec_ref(v_f_925_);
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v_b_929_);
return v___x_938_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_f_939_, lean_object* v_as_940_, lean_object* v_i_941_, lean_object* v_stop_942_, lean_object* v_b_943_, lean_object* v___y_944_){
_start:
{
size_t v_i_boxed_945_; size_t v_stop_boxed_946_; lean_object* v_res_947_; 
v_i_boxed_945_ = lean_unbox_usize(v_i_941_);
lean_dec(v_i_941_);
v_stop_boxed_946_ = lean_unbox_usize(v_stop_942_);
lean_dec(v_stop_942_);
v_res_947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_939_, v_as_940_, v_i_boxed_945_, v_stop_boxed_946_, v_b_943_);
lean_dec_ref(v_as_940_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_f_948_, lean_object* v_x_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_948_, v_x_949_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(lean_object* v_f_952_, lean_object* v_t_953_){
_start:
{
lean_object* v_root_955_; lean_object* v_tail_956_; lean_object* v___x_957_; 
v_root_955_ = lean_ctor_get(v_t_953_, 0);
lean_inc_ref(v_root_955_);
v_tail_956_ = lean_ctor_get(v_t_953_, 1);
lean_inc_ref(v_tail_956_);
lean_dec_ref(v_t_953_);
lean_inc_ref(v_f_952_);
v___x_957_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_952_, v_root_955_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_971_; 
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_971_ == 0)
{
lean_object* v_unused_972_; 
v_unused_972_ = lean_ctor_get(v___x_957_, 0);
lean_dec(v_unused_972_);
v___x_959_ = v___x_957_;
v_isShared_960_ = v_isSharedCheck_971_;
goto v_resetjp_958_;
}
else
{
lean_dec(v___x_957_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_971_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_961_ = lean_unsigned_to_nat(0u);
v___x_962_ = lean_array_get_size(v_tail_956_);
v___x_963_ = lean_box(0);
v___x_964_ = lean_nat_dec_lt(v___x_961_, v___x_962_);
if (v___x_964_ == 0)
{
lean_object* v___x_966_; 
lean_dec_ref(v_tail_956_);
lean_dec_ref(v_f_952_);
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 0, v___x_963_);
v___x_966_ = v___x_959_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_963_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
else
{
size_t v___x_968_; size_t v___x_969_; lean_object* v___x_970_; 
lean_del_object(v___x_959_);
v___x_968_ = ((size_t)0ULL);
v___x_969_ = lean_usize_of_nat(v___x_962_);
v___x_970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_952_, v_tail_956_, v___x_968_, v___x_969_, v___x_963_);
lean_dec_ref(v_tail_956_);
return v___x_970_;
}
}
}
else
{
lean_dec_ref(v_tail_956_);
lean_dec_ref(v_f_952_);
return v___x_957_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5___boxed(lean_object* v_f_973_, lean_object* v_t_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(v_f_973_, v_t_974_);
return v_res_976_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(lean_object* v_f_978_, lean_object* v_x_979_, size_t v_x_980_, size_t v_x_981_){
_start:
{
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v_cs_983_; lean_object* v___x_984_; size_t v___x_985_; lean_object* v_j_986_; lean_object* v___x_987_; size_t v___x_988_; size_t v___x_989_; size_t v___x_990_; size_t v___x_991_; size_t v___x_992_; size_t v___x_993_; lean_object* v___x_994_; 
v_cs_983_ = lean_ctor_get(v_x_979_, 0);
lean_inc_ref(v_cs_983_);
lean_dec_ref_known(v_x_979_, 1);
v___x_984_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0);
v___x_985_ = lean_usize_shift_right(v_x_980_, v_x_981_);
v_j_986_ = lean_usize_to_nat(v___x_985_);
v___x_987_ = lean_array_get_borrowed(v___x_984_, v_cs_983_, v_j_986_);
v___x_988_ = ((size_t)1ULL);
v___x_989_ = lean_usize_shift_left(v___x_988_, v_x_981_);
v___x_990_ = lean_usize_sub(v___x_989_, v___x_988_);
v___x_991_ = lean_usize_land(v_x_980_, v___x_990_);
v___x_992_ = ((size_t)5ULL);
v___x_993_ = lean_usize_sub(v_x_981_, v___x_992_);
lean_inc(v___x_987_);
lean_inc_ref(v_f_978_);
v___x_994_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_978_, v___x_987_, v___x_991_, v___x_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1009_; 
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1009_ == 0)
{
lean_object* v_unused_1010_; 
v_unused_1010_ = lean_ctor_get(v___x_994_, 0);
lean_dec(v_unused_1010_);
v___x_996_ = v___x_994_;
v_isShared_997_ = v_isSharedCheck_1009_;
goto v_resetjp_995_;
}
else
{
lean_dec(v___x_994_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1009_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_998_ = lean_unsigned_to_nat(1u);
v___x_999_ = lean_nat_add(v_j_986_, v___x_998_);
lean_dec(v_j_986_);
v___x_1000_ = lean_array_get_size(v_cs_983_);
v___x_1001_ = lean_box(0);
v___x_1002_ = lean_nat_dec_lt(v___x_999_, v___x_1000_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1004_; 
lean_dec(v___x_999_);
lean_dec_ref(v_cs_983_);
lean_dec_ref(v_f_978_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 0, v___x_1001_);
v___x_1004_ = v___x_996_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1001_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
else
{
size_t v___x_1006_; size_t v___x_1007_; lean_object* v___x_1008_; 
lean_del_object(v___x_996_);
v___x_1006_ = lean_usize_of_nat(v___x_999_);
lean_dec(v___x_999_);
v___x_1007_ = lean_usize_of_nat(v___x_1000_);
v___x_1008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_978_, v_cs_983_, v___x_1006_, v___x_1007_, v___x_1001_);
lean_dec_ref(v_cs_983_);
return v___x_1008_;
}
}
}
else
{
lean_dec(v_j_986_);
lean_dec_ref(v_cs_983_);
lean_dec_ref(v_f_978_);
return v___x_994_;
}
}
else
{
lean_object* v_vs_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1025_; 
v_vs_1011_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1013_ = v_x_979_;
v_isShared_1014_ = v_isSharedCheck_1025_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_vs_1011_);
lean_dec(v_x_979_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1025_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1015_ = lean_usize_to_nat(v_x_980_);
v___x_1016_ = lean_array_get_size(v_vs_1011_);
v___x_1017_ = lean_box(0);
v___x_1018_ = lean_nat_dec_lt(v___x_1015_, v___x_1016_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1020_; 
lean_dec(v___x_1015_);
lean_dec_ref(v_vs_1011_);
lean_dec_ref(v_f_978_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1017_);
v___x_1020_ = v___x_1013_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1017_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
else
{
size_t v___x_1022_; size_t v___x_1023_; lean_object* v___x_1024_; 
lean_del_object(v___x_1013_);
v___x_1022_ = lean_usize_of_nat(v___x_1015_);
lean_dec(v___x_1015_);
v___x_1023_ = lean_usize_of_nat(v___x_1016_);
v___x_1024_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_978_, v_vs_1011_, v___x_1022_, v___x_1023_, v___x_1017_);
lean_dec_ref(v_vs_1011_);
return v___x_1024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___boxed(lean_object* v_f_1026_, lean_object* v_x_1027_, lean_object* v_x_1028_, lean_object* v_x_1029_, lean_object* v___y_1030_){
_start:
{
size_t v_x_1494__boxed_1031_; size_t v_x_1495__boxed_1032_; lean_object* v_res_1033_; 
v_x_1494__boxed_1031_ = lean_unbox_usize(v_x_1028_);
lean_dec(v_x_1028_);
v_x_1495__boxed_1032_ = lean_unbox_usize(v_x_1029_);
lean_dec(v_x_1029_);
v_res_1033_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_1026_, v_x_1027_, v_x_1494__boxed_1031_, v_x_1495__boxed_1032_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(lean_object* v_f_1034_, lean_object* v_t_1035_, lean_object* v_start_1036_){
_start:
{
lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = lean_nat_dec_eq(v_start_1036_, v___x_1038_);
if (v___x_1039_ == 0)
{
lean_object* v_root_1040_; lean_object* v_tail_1041_; size_t v_shift_1042_; lean_object* v_tailOff_1043_; uint8_t v___x_1044_; 
v_root_1040_ = lean_ctor_get(v_t_1035_, 0);
lean_inc_ref(v_root_1040_);
v_tail_1041_ = lean_ctor_get(v_t_1035_, 1);
lean_inc_ref(v_tail_1041_);
v_shift_1042_ = lean_ctor_get_usize(v_t_1035_, 4);
v_tailOff_1043_ = lean_ctor_get(v_t_1035_, 3);
lean_inc(v_tailOff_1043_);
lean_dec_ref(v_t_1035_);
v___x_1044_ = lean_nat_dec_le(v_tailOff_1043_, v_start_1036_);
if (v___x_1044_ == 0)
{
size_t v___x_1045_; lean_object* v___x_1046_; 
lean_dec(v_tailOff_1043_);
v___x_1045_ = lean_usize_of_nat(v_start_1036_);
lean_inc_ref(v_f_1034_);
v___x_1046_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_1034_, v_root_1040_, v___x_1045_, v_shift_1042_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1059_; 
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1059_ == 0)
{
lean_object* v_unused_1060_; 
v_unused_1060_ = lean_ctor_get(v___x_1046_, 0);
lean_dec(v_unused_1060_);
v___x_1048_ = v___x_1046_;
v_isShared_1049_ = v_isSharedCheck_1059_;
goto v_resetjp_1047_;
}
else
{
lean_dec(v___x_1046_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1059_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; 
v___x_1050_ = lean_array_get_size(v_tail_1041_);
v___x_1051_ = lean_box(0);
v___x_1052_ = lean_nat_dec_lt(v___x_1038_, v___x_1050_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1054_; 
lean_dec_ref(v_tail_1041_);
lean_dec_ref(v_f_1034_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1051_);
v___x_1054_ = v___x_1048_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1051_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
else
{
size_t v___x_1056_; size_t v___x_1057_; lean_object* v___x_1058_; 
lean_del_object(v___x_1048_);
v___x_1056_ = ((size_t)0ULL);
v___x_1057_ = lean_usize_of_nat(v___x_1050_);
v___x_1058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_1034_, v_tail_1041_, v___x_1056_, v___x_1057_, v___x_1051_);
lean_dec_ref(v_tail_1041_);
return v___x_1058_;
}
}
}
else
{
lean_dec_ref(v_tail_1041_);
lean_dec_ref(v_f_1034_);
return v___x_1046_;
}
}
else
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; 
lean_dec_ref(v_root_1040_);
v___x_1061_ = lean_nat_sub(v_start_1036_, v_tailOff_1043_);
lean_dec(v_tailOff_1043_);
v___x_1062_ = lean_array_get_size(v_tail_1041_);
v___x_1063_ = lean_box(0);
v___x_1064_ = lean_nat_dec_lt(v___x_1061_, v___x_1062_);
if (v___x_1064_ == 0)
{
lean_object* v___x_1065_; 
lean_dec(v___x_1061_);
lean_dec_ref(v_tail_1041_);
lean_dec_ref(v_f_1034_);
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
return v___x_1065_;
}
else
{
size_t v___x_1066_; size_t v___x_1067_; lean_object* v___x_1068_; 
v___x_1066_ = lean_usize_of_nat(v___x_1061_);
lean_dec(v___x_1061_);
v___x_1067_ = lean_usize_of_nat(v___x_1062_);
v___x_1068_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_1034_, v_tail_1041_, v___x_1066_, v___x_1067_, v___x_1063_);
lean_dec_ref(v_tail_1041_);
return v___x_1068_;
}
}
}
else
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(v_f_1034_, v_t_1035_);
return v___x_1069_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2___boxed(lean_object* v_f_1070_, lean_object* v_t_1071_, lean_object* v_start_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(v_f_1070_, v_t_1071_, v_start_1072_);
lean_dec(v_start_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(lean_object* v_log_1075_, lean_object* v_f_1076_){
_start:
{
lean_object* v_unreported_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_unreported_1078_ = lean_ctor_get(v_log_1075_, 1);
lean_inc_ref(v_unreported_1078_);
lean_dec_ref(v_log_1075_);
v___x_1079_ = lean_unsigned_to_nat(0u);
v___x_1080_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(v_f_1076_, v_unreported_1078_, v___x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1___boxed(lean_object* v_log_1081_, lean_object* v_f_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(v_log_1081_, v_f_1082_);
return v_res_1084_;
}
}
static lean_object* _init_l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1));
v___x_1088_ = lean_mk_io_user_error(v___x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(lean_object* v_env_1089_, lean_object* v_inputCtx_1090_, lean_object* v_state_1091_, lean_object* v_msgs_1092_, lean_object* v_stxs_1093_){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v_snd_1100_; lean_object* v_fst_1101_; lean_object* v_fst_1102_; lean_object* v_snd_1103_; uint8_t v___x_1104_; 
v___x_1095_ = l_Lean_Options_empty;
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_box(0);
lean_inc_ref(v_env_1089_);
v___x_1098_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1098_, 0, v_env_1089_);
lean_ctor_set(v___x_1098_, 1, v___x_1095_);
lean_ctor_set(v___x_1098_, 2, v___x_1096_);
lean_ctor_set(v___x_1098_, 3, v___x_1097_);
lean_inc_ref(v_inputCtx_1090_);
v___x_1099_ = l_Lean_Parser_parseCommand(v_inputCtx_1090_, v___x_1098_, v_state_1091_, v_msgs_1092_);
v_snd_1100_ = lean_ctor_get(v___x_1099_, 1);
lean_inc(v_snd_1100_);
v_fst_1101_ = lean_ctor_get(v___x_1099_, 0);
lean_inc_n(v_fst_1101_, 2);
lean_dec_ref(v___x_1099_);
v_fst_1102_ = lean_ctor_get(v_snd_1100_, 0);
lean_inc(v_fst_1102_);
v_snd_1103_ = lean_ctor_get(v_snd_1100_, 1);
lean_inc(v_snd_1103_);
lean_dec(v_snd_1100_);
v___x_1104_ = l_Lean_Parser_isTerminalCommand(v_fst_1101_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_array_push(v_stxs_1093_, v_fst_1101_);
v_state_1091_ = v_fst_1102_;
v_msgs_1092_ = v_snd_1103_;
v_stxs_1093_ = v___x_1105_;
goto _start;
}
else
{
uint8_t v___x_1107_; 
lean_dec(v_fst_1102_);
lean_dec_ref(v_inputCtx_1090_);
lean_dec_ref(v_env_1089_);
v___x_1107_ = l_Lean_MessageLog_hasUnreported(v_snd_1103_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_dec(v_snd_1103_);
v___x_1108_ = lean_array_push(v_stxs_1093_, v_fst_1101_);
v___x_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
return v___x_1109_;
}
else
{
lean_object* v___f_1110_; lean_object* v___x_1111_; 
lean_dec(v_fst_1101_);
lean_dec_ref(v_stxs_1093_);
v___f_1110_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0));
v___x_1111_ = l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(v_snd_1103_, v___f_1110_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1119_; 
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1119_ == 0)
{
lean_object* v_unused_1120_; 
v_unused_1120_ = lean_ctor_get(v___x_1111_, 0);
lean_dec(v_unused_1120_);
v___x_1113_ = v___x_1111_;
v_isShared_1114_ = v_isSharedCheck_1119_;
goto v_resetjp_1112_;
}
else
{
lean_dec(v___x_1111_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1119_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1115_ = lean_obj_once(&l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2, &l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2_once, _init_l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2);
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 1);
lean_ctor_set(v___x_1113_, 0, v___x_1115_);
v___x_1117_ = v___x_1113_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
v_a_1121_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1111_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1111_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___boxed(lean_object* v_env_1129_, lean_object* v_inputCtx_1130_, lean_object* v_state_1131_, lean_object* v_msgs_1132_, lean_object* v_stxs_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1129_, v_inputCtx_1130_, v_state_1131_, v_msgs_1132_, v_stxs_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux(lean_object* v_env_1136_, lean_object* v_inputCtx_1137_, lean_object* v_s_1138_, lean_object* v_msgs_1139_, lean_object* v_stxs_1140_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1136_, v_inputCtx_1137_, v_s_1138_, v_msgs_1139_, v_stxs_1140_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux___boxed(lean_object* v_env_1143_, lean_object* v_inputCtx_1144_, lean_object* v_s_1145_, lean_object* v_msgs_1146_, lean_object* v_stxs_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_Parser_testParseModuleAux(v_env_1143_, v_inputCtx_1144_, v_s_1145_, v_msgs_1146_, v_stxs_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule(lean_object* v_env_1158_, lean_object* v_fname_1159_, lean_object* v_contents_1160_){
_start:
{
uint8_t v___x_1162_; lean_object* v___x_1163_; lean_object* v_inputCtx_1164_; lean_object* v___x_1165_; 
v___x_1162_ = 1;
v___x_1163_ = lean_string_utf8_byte_size(v_contents_1160_);
v_inputCtx_1164_ = l_Lean_Parser_mkInputContext___redArg(v_contents_1160_, v_fname_1159_, v___x_1162_, v___x_1163_);
lean_inc_ref(v_inputCtx_1164_);
v___x_1165_ = l_Lean_Parser_parseHeader(v_inputCtx_1164_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v_a_1166_; lean_object* v_snd_1167_; lean_object* v_fst_1168_; lean_object* v_fst_1169_; lean_object* v_snd_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_a_1166_ = lean_ctor_get(v___x_1165_, 0);
lean_inc(v_a_1166_);
lean_dec_ref_known(v___x_1165_, 1);
v_snd_1167_ = lean_ctor_get(v_a_1166_, 1);
lean_inc(v_snd_1167_);
v_fst_1168_ = lean_ctor_get(v_a_1166_, 0);
lean_inc(v_fst_1168_);
lean_dec(v_a_1166_);
v_fst_1169_ = lean_ctor_get(v_snd_1167_, 0);
lean_inc(v_fst_1169_);
v_snd_1170_ = lean_ctor_get(v_snd_1167_, 1);
lean_inc(v_snd_1170_);
lean_dec(v_snd_1167_);
v___x_1171_ = ((lean_object*)(l_Lean_Parser_testParseModule___closed__0));
v___x_1172_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1158_, v_inputCtx_1164_, v_fst_1169_, v_snd_1170_, v___x_1171_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1188_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1188_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1188_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1177_ = ((lean_object*)(l_Lean_Parser_testParseModule___closed__2));
v___x_1178_ = l_Lean_mkListNode(v_a_1173_);
v___x_1179_ = lean_unsigned_to_nat(2u);
v___x_1180_ = lean_mk_empty_array_with_capacity(v___x_1179_);
v___x_1181_ = lean_array_push(v___x_1180_, v_fst_1168_);
v___x_1182_ = lean_array_push(v___x_1181_, v___x_1178_);
v___x_1183_ = lean_box(2);
v___x_1184_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v___x_1177_);
lean_ctor_set(v___x_1184_, 2, v___x_1182_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 0, v___x_1184_);
v___x_1186_ = v___x_1175_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
else
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
lean_dec(v_fst_1168_);
v_a_1189_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1172_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1172_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1204_; 
lean_dec_ref(v_inputCtx_1164_);
lean_dec_ref(v_env_1158_);
v_a_1197_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1199_ = v___x_1165_;
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___x_1165_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1204_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1202_; 
if (v_isShared_1200_ == 0)
{
v___x_1202_ = v___x_1199_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1197_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule___boxed(lean_object* v_env_1205_, lean_object* v_fname_1206_, lean_object* v_contents_1207_, lean_object* v_a_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_Parser_testParseModule(v_env_1205_, v_fname_1206_, v_contents_1207_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile(lean_object* v_env_1210_, lean_object* v_fname_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_IO_FS_readFile(v_fname_1211_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; lean_object* v___x_1215_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref_known(v___x_1213_, 1);
v___x_1215_ = l_Lean_Parser_testParseModule(v_env_1210_, v_fname_1211_, v_a_1214_);
return v___x_1215_;
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
lean_dec_ref(v_fname_1211_);
lean_dec_ref(v_env_1210_);
v_a_1216_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___x_1213_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___x_1213_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile___boxed(lean_object* v_env_1224_, lean_object* v_fname_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_Parser_testParseFile(v_env_1224_, v_fname_1225_);
return v_res_1227_;
}
}
lean_object* runtime_initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Extra(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Module(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module_Syntax(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Lean_Parser_Extra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Module(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Module(builtin);
}
#ifdef __cplusplus
}
#endif
