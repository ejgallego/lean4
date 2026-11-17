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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_parseHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_parseHeader___closed__0 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__0_value;
static const lean_string_object l_Lean_Parser_parseHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_Parser_parseHeader___closed__1 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__1_value;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__2;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__3;
static lean_once_cell_t l_Lean_Parser_parseHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_parseHeader___closed__4;
static const lean_string_object l_Lean_Parser_parseHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lean_Parser_parseHeader___closed__5 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__5_value;
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__6_value_aux_2),((lean_object*)&l_Lean_Parser_parseHeader___closed__5_value),LEAN_SCALAR_PTR_LITERAL(40, 173, 92, 3, 94, 219, 131, 202)}};
static const lean_object* l_Lean_Parser_parseHeader___closed__6 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__6_value;
static const lean_string_object l_Lean_Parser_parseHeader___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moduleTk"};
static const lean_object* l_Lean_Parser_parseHeader___closed__7 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__7_value;
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Parser_parseHeader___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_parseHeader___closed__8_value_aux_2),((lean_object*)&l_Lean_Parser_parseHeader___closed__7_value),LEAN_SCALAR_PTR_LITERAL(198, 239, 28, 252, 21, 233, 71, 221)}};
static const lean_object* l_Lean_Parser_parseHeader___closed__8 = (const lean_object*)&l_Lean_Parser_parseHeader___closed__8_value;
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
v___x_74_ = l_Lean_Parser_Error_toString(v___y_67_);
v___x_75_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
v___x_76_ = l_Lean_MessageData_ofFormat(v___x_75_);
v___x_77_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_77_, 0, v___y_66_);
lean_ctor_set(v___x_77_, 1, v___y_68_);
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
v___y_66_ = v_fileName_82_;
v___y_67_ = v_e_81_;
v___y_68_ = v___x_84_;
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
v___y_66_ = v_fileName_82_;
v___y_67_ = v_e_81_;
v___y_68_ = v___x_84_;
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
lean_ctor_set(v_e_101_, 0, v___y_99_);
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
v_decide_106_ = lean_nat_dec_eq(v_stopPos_105_, v___y_97_);
lean_dec(v_stopPos_105_);
if (v_decide_106_ == 0)
{
lean_dec(v_startPos_104_);
v_pos_79_ = v___y_97_;
v_endPos_x3f_80_ = v___y_96_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
else
{
lean_dec(v___y_97_);
v_pos_79_ = v_startPos_104_;
v_endPos_x3f_80_ = v___y_96_;
v_e_81_ = v_e_101_;
goto v___jp_78_;
}
}
else
{
lean_dec(v___x_102_);
v_pos_79_ = v___y_97_;
v_endPos_x3f_80_ = v___y_96_;
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
v___y_96_ = v_endPos_x3f_111_;
v___y_97_ = v_pos_110_;
v___y_98_ = v_expected_108_;
v___y_99_ = v_unexpectedTk_107_;
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
v___y_96_ = v_endPos_x3f_111_;
v___y_97_ = v_pos_110_;
v___y_98_ = v_expected_108_;
v___y_99_ = v_unexpectedTk_107_;
v___y_100_ = v___x_117_;
goto v___jp_95_;
}
default: 
{
lean_object* v___x_118_; 
v___x_118_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__4));
v___y_96_ = v_endPos_x3f_111_;
v___y_97_ = v_pos_110_;
v___y_98_ = v_expected_108_;
v___y_99_ = v_unexpectedTk_107_;
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
v___x_214_ = l_Lean_FileMap_toPosition(v___y_212_, v___y_213_);
lean_dec(v___y_213_);
v___x_215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = 2;
v___x_217_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v___x_218_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_218_, 0, v___y_211_);
lean_ctor_set(v___x_218_, 1, v___y_210_);
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
v___y_210_ = v___x_223_;
v___y_211_ = v_fileName_221_;
v___y_212_ = v_fileMap_222_;
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
v___y_210_ = v___x_223_;
v___y_211_ = v_fileName_221_;
v___y_212_ = v_fileMap_222_;
v___y_213_ = v_val_225_;
goto v___jp_209_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0___boxed(lean_object* v___x_229_, lean_object* v_inputCtx_230_, lean_object* v_ref_231_, lean_object* v_msg_232_){
_start:
{
uint8_t v___x_4604__boxed_233_; lean_object* v_res_234_; 
v___x_4604__boxed_233_ = lean_unbox(v___x_229_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_4604__boxed_233_, v_inputCtx_230_, v_ref_231_, v_msg_232_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(lean_object* v_inputCtx_280_, uint8_t v___x_281_, lean_object* v_moduleTk_x3f_282_, lean_object* v_as_283_, size_t v_sz_284_, size_t v_i_285_, lean_object* v_b_286_){
_start:
{
lean_object* v_a_289_; uint8_t v___x_293_; 
v___x_293_ = lean_usize_dec_lt(v_i_285_, v_sz_284_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; 
lean_dec_ref(v_inputCtx_280_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v_b_286_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v_a_296_; uint8_t v___x_297_; 
v___x_295_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__4));
v_a_296_ = lean_array_uget_borrowed(v_as_283_, v_i_285_);
lean_inc(v_a_296_);
v___x_297_ = l_Lean_Syntax_isOfKind(v_a_296_, v___x_295_);
if (v___x_297_ == 0)
{
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v___y_299_; lean_object* v_messages_300_; lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v_messages_308_; lean_object* v___x_313_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v_allTk_x3f_317_; lean_object* v___x_348_; lean_object* v___y_350_; lean_object* v_metaTk_x3f_351_; lean_object* v_pubTk_x3f_363_; lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_348_ = lean_unsigned_to_nat(1u);
v___x_373_ = l_Lean_Syntax_getArg(v_a_296_, v___x_313_);
v___x_374_ = l_Lean_Syntax_isNone(v___x_373_);
if (v___x_374_ == 0)
{
uint8_t v___x_375_; 
lean_inc(v___x_373_);
v___x_375_ = l_Lean_Syntax_matchesNull(v___x_373_, v___x_348_);
if (v___x_375_ == 0)
{
lean_dec(v___x_373_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_376_ = l_Lean_Syntax_getArg(v___x_373_, v___x_313_);
lean_dec(v___x_373_);
v___x_377_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__22));
lean_inc(v___x_376_);
v___x_378_ = l_Lean_Syntax_isOfKind(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_dec(v___x_376_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = l_Lean_Syntax_getArg(v___x_376_, v___x_313_);
lean_dec(v___x_376_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v_pubTk_x3f_363_ = v___x_380_;
goto v___jp_362_;
}
}
}
else
{
lean_object* v___x_381_; 
lean_dec(v___x_373_);
v___x_381_ = lean_box(0);
v_pubTk_x3f_363_ = v___x_381_;
goto v___jp_362_;
}
v___jp_298_:
{
if (lean_obj_tag(v___y_299_) == 1)
{
lean_object* v_val_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v_val_301_ = lean_ctor_get(v___y_299_, 0);
lean_inc(v_val_301_);
lean_dec_ref_known(v___y_299_, 1);
v___x_302_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__7);
lean_inc_ref(v_inputCtx_280_);
v___x_303_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_281_, v_inputCtx_280_, v_val_301_, v___x_302_);
lean_dec(v_val_301_);
v___x_304_ = l_Lean_MessageLog_add(v___x_303_, v_messages_300_);
v_a_289_ = v___x_304_;
goto v___jp_288_;
}
else
{
lean_dec(v___y_299_);
v_a_289_ = v_messages_300_;
goto v___jp_288_;
}
}
v___jp_305_:
{
if (lean_obj_tag(v___y_306_) == 1)
{
lean_object* v_val_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_val_309_ = lean_ctor_get(v___y_306_, 0);
lean_inc(v_val_309_);
lean_dec_ref_known(v___y_306_, 1);
v___x_310_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__10);
lean_inc_ref(v_inputCtx_280_);
v___x_311_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_281_, v_inputCtx_280_, v_val_309_, v___x_310_);
lean_dec(v_val_309_);
v___x_312_ = l_Lean_MessageLog_add(v___x_311_, v_messages_308_);
v___y_299_ = v___y_307_;
v_messages_300_ = v___x_312_;
goto v___jp_298_;
}
else
{
lean_dec(v___y_306_);
v___y_299_ = v___y_307_;
v_messages_300_ = v_messages_308_;
goto v___jp_298_;
}
}
v___jp_314_:
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_318_ = lean_unsigned_to_nat(5u);
v___x_319_ = l_Lean_Syntax_getArg(v_a_296_, v___x_318_);
v___x_320_ = l_Lean_Syntax_matchesNull(v___x_319_, v___x_313_);
if (v___x_320_ == 0)
{
lean_dec(v_allTk_x3f_317_);
lean_dec(v___y_316_);
lean_dec(v___y_315_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
if (lean_obj_tag(v_moduleTk_x3f_282_) == 0)
{
if (lean_obj_tag(v___y_315_) == 1)
{
lean_object* v_val_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v_val_321_ = lean_ctor_get(v___y_315_, 0);
lean_inc(v_val_321_);
lean_dec_ref_known(v___y_315_, 1);
v___x_322_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__13);
lean_inc_ref(v_inputCtx_280_);
v___x_323_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_281_, v_inputCtx_280_, v_val_321_, v___x_322_);
lean_dec(v_val_321_);
v___x_324_ = l_Lean_MessageLog_add(v___x_323_, v_b_286_);
v___y_306_ = v___y_316_;
v___y_307_ = v_allTk_x3f_317_;
v_messages_308_ = v___x_324_;
goto v___jp_305_;
}
else
{
lean_dec(v___y_315_);
v___y_306_ = v___y_316_;
v___y_307_ = v_allTk_x3f_317_;
v_messages_308_ = v_b_286_;
goto v___jp_305_;
}
}
else
{
lean_dec(v___y_316_);
if (lean_obj_tag(v_allTk_x3f_317_) == 1)
{
if (lean_obj_tag(v___y_315_) == 0)
{
lean_dec_ref_known(v_allTk_x3f_317_, 1);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v_val_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_346_; 
v_val_325_ = lean_ctor_get(v_allTk_x3f_317_, 0);
lean_inc(v_val_325_);
lean_dec_ref_known(v_allTk_x3f_317_, 1);
v_isSharedCheck_346_ = !lean_is_exclusive(v___y_315_);
if (v_isSharedCheck_346_ == 0)
{
lean_object* v_unused_347_; 
v_unused_347_ = lean_ctor_get(v___y_315_, 0);
lean_dec(v_unused_347_);
v___x_327_ = v___y_315_;
v_isShared_328_ = v_isSharedCheck_346_;
goto v_resetjp_326_;
}
else
{
lean_dec(v___y_315_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_346_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_329_ = lean_unsigned_to_nat(4u);
v___x_330_ = l_Lean_Syntax_getArg(v_a_296_, v___x_329_);
v___x_331_ = l_Lean_TSyntax_getId(v___x_330_);
lean_dec(v___x_330_);
v___x_332_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__14));
v___x_333_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_331_, v___x_320_);
v___x_334_ = lean_string_append(v___x_332_, v___x_333_);
v___x_335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__15));
v___x_336_ = lean_string_append(v___x_334_, v___x_335_);
v___x_337_ = lean_string_append(v___x_336_, v___x_333_);
lean_dec_ref(v___x_333_);
v___x_338_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__16));
v___x_339_ = lean_string_append(v___x_337_, v___x_338_);
if (v_isShared_328_ == 0)
{
lean_ctor_set_tag(v___x_327_, 3);
lean_ctor_set(v___x_327_, 0, v___x_339_);
v___x_341_ = v___x_327_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_345_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = l_Lean_MessageData_ofFormat(v___x_341_);
lean_inc_ref(v_inputCtx_280_);
v___x_343_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___lam__0(v___x_281_, v_inputCtx_280_, v_val_325_, v___x_342_);
lean_dec(v_val_325_);
v___x_344_ = l_Lean_MessageLog_add(v___x_343_, v_b_286_);
v_a_289_ = v___x_344_;
goto v___jp_288_;
}
}
}
}
else
{
lean_dec(v_allTk_x3f_317_);
lean_dec(v___y_315_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
}
}
}
v___jp_349_:
{
lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_352_ = lean_unsigned_to_nat(3u);
v___x_353_ = l_Lean_Syntax_getArg(v_a_296_, v___x_352_);
v___x_354_ = l_Lean_Syntax_isNone(v___x_353_);
if (v___x_354_ == 0)
{
uint8_t v___x_355_; 
lean_inc(v___x_353_);
v___x_355_ = l_Lean_Syntax_matchesNull(v___x_353_, v___x_348_);
if (v___x_355_ == 0)
{
lean_dec(v___x_353_);
lean_dec(v_metaTk_x3f_351_);
lean_dec(v___y_350_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_356_ = l_Lean_Syntax_getArg(v___x_353_, v___x_313_);
lean_dec(v___x_353_);
v___x_357_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__18));
lean_inc(v___x_356_);
v___x_358_ = l_Lean_Syntax_isOfKind(v___x_356_, v___x_357_);
if (v___x_358_ == 0)
{
lean_dec(v___x_356_);
lean_dec(v_metaTk_x3f_351_);
lean_dec(v___y_350_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = l_Lean_Syntax_getArg(v___x_356_, v___x_313_);
lean_dec(v___x_356_);
v___x_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
v___y_315_ = v___y_350_;
v___y_316_ = v_metaTk_x3f_351_;
v_allTk_x3f_317_ = v___x_360_;
goto v___jp_314_;
}
}
}
else
{
lean_object* v___x_361_; 
lean_dec(v___x_353_);
v___x_361_ = lean_box(0);
v___y_315_ = v___y_350_;
v___y_316_ = v_metaTk_x3f_351_;
v_allTk_x3f_317_ = v___x_361_;
goto v___jp_314_;
}
}
v___jp_362_:
{
lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_364_ = l_Lean_Syntax_getArg(v_a_296_, v___x_348_);
v___x_365_ = l_Lean_Syntax_isNone(v___x_364_);
if (v___x_365_ == 0)
{
uint8_t v___x_366_; 
lean_inc(v___x_364_);
v___x_366_ = l_Lean_Syntax_matchesNull(v___x_364_, v___x_348_);
if (v___x_366_ == 0)
{
lean_dec(v___x_364_);
lean_dec(v_pubTk_x3f_363_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_367_ = l_Lean_Syntax_getArg(v___x_364_, v___x_313_);
lean_dec(v___x_364_);
v___x_368_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__20));
lean_inc(v___x_367_);
v___x_369_ = l_Lean_Syntax_isOfKind(v___x_367_, v___x_368_);
if (v___x_369_ == 0)
{
lean_dec(v___x_367_);
lean_dec(v_pubTk_x3f_363_);
v_a_289_ = v_b_286_;
goto v___jp_288_;
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = l_Lean_Syntax_getArg(v___x_367_, v___x_313_);
lean_dec(v___x_367_);
v___x_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
v___y_350_ = v_pubTk_x3f_363_;
v_metaTk_x3f_351_ = v___x_371_;
goto v___jp_349_;
}
}
}
else
{
lean_object* v___x_372_; 
lean_dec(v___x_364_);
v___x_372_ = lean_box(0);
v___y_350_ = v_pubTk_x3f_363_;
v_metaTk_x3f_351_ = v___x_372_;
goto v___jp_349_;
}
}
}
}
v___jp_288_:
{
size_t v___x_290_; size_t v___x_291_; 
v___x_290_ = ((size_t)1ULL);
v___x_291_ = lean_usize_add(v_i_285_, v___x_290_);
v_i_285_ = v___x_291_;
v_b_286_ = v_a_289_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___boxed(lean_object* v_inputCtx_382_, lean_object* v___x_383_, lean_object* v_moduleTk_x3f_384_, lean_object* v_as_385_, lean_object* v_sz_386_, lean_object* v_i_387_, lean_object* v_b_388_, lean_object* v___y_389_){
_start:
{
uint8_t v___x_4735__boxed_390_; size_t v_sz_boxed_391_; size_t v_i_boxed_392_; lean_object* v_res_393_; 
v___x_4735__boxed_390_ = lean_unbox(v___x_383_);
v_sz_boxed_391_ = lean_unbox_usize(v_sz_386_);
lean_dec(v_sz_386_);
v_i_boxed_392_ = lean_unbox_usize(v_i_387_);
lean_dec(v_i_387_);
v_res_393_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(v_inputCtx_382_, v___x_4735__boxed_390_, v_moduleTk_x3f_384_, v_as_385_, v_sz_boxed_391_, v_i_boxed_392_, v_b_388_);
lean_dec_ref(v_as_385_);
lean_dec(v_moduleTk_x3f_384_);
return v_res_393_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__2(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = lean_unsigned_to_nat(32u);
v___x_397_ = lean_mk_empty_array_with_capacity(v___x_396_);
v___x_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
return v___x_398_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__3(void){
_start:
{
size_t v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_399_ = ((size_t)5ULL);
v___x_400_ = lean_unsigned_to_nat(0u);
v___x_401_ = lean_unsigned_to_nat(32u);
v___x_402_ = lean_mk_empty_array_with_capacity(v___x_401_);
v___x_403_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__2, &l_Lean_Parser_parseHeader___closed__2_once, _init_l_Lean_Parser_parseHeader___closed__2);
v___x_404_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set(v___x_404_, 1, v___x_402_);
lean_ctor_set(v___x_404_, 2, v___x_400_);
lean_ctor_set(v___x_404_, 3, v___x_400_);
lean_ctor_set_usize(v___x_404_, 4, v___x_399_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_Parser_parseHeader___closed__4(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = l_Lean_NameSet_empty;
v___x_406_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__3, &l_Lean_Parser_parseHeader___closed__3_once, _init_l_Lean_Parser_parseHeader___closed__3);
v___x_407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
lean_ctor_set(v___x_407_, 2, v___x_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader(lean_object* v_inputCtx_420_){
_start:
{
lean_object* v___y_423_; lean_object* v___y_424_; uint8_t v___y_425_; lean_object* v___y_426_; uint8_t v___y_427_; lean_object* v___y_433_; lean_object* v___y_434_; uint8_t v___y_435_; lean_object* v___y_436_; uint8_t v___y_437_; lean_object* v___x_440_; uint32_t v___x_441_; lean_object* v___x_442_; 
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = 0;
v___x_442_ = l_Lean_mkEmptyEnvironment(v___x_441_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_444_; lean_object* v_fn_445_; lean_object* v_inputString_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_stxStack_457_; lean_object* v_pos_458_; lean_object* v_errorMsg_459_; lean_object* v___y_461_; lean_object* v_messages_462_; size_t v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___y_476_; uint8_t v___y_477_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v___y_495_; size_t v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; uint8_t v___y_499_; lean_object* v_moduleTk_x3f_500_; lean_object* v___y_510_; uint8_t v___x_540_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc_n(v_a_443_, 2);
lean_dec_ref_known(v___x_442_, 1);
v___x_444_ = l_Lean_Parser_Module_header;
v_fn_445_ = lean_ctor_get(v___x_444_, 1);
v_inputString_446_ = lean_ctor_get(v_inputCtx_420_, 0);
v___x_447_ = l_Lean_Parser_getTokenTable(v_a_443_);
v___x_448_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__0));
lean_inc_ref(v_fn_445_);
v___x_449_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_449_, 0, v___x_448_);
lean_closure_set(v___x_449_, 1, v_fn_445_);
v___x_450_ = l_Lean_Parser_Module_updateTokens(v___x_447_);
v___x_451_ = l_Lean_Options_empty;
v___x_452_ = lean_box(0);
v___x_453_ = lean_box(0);
v___x_454_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_454_, 0, v_a_443_);
lean_ctor_set(v___x_454_, 1, v___x_451_);
lean_ctor_set(v___x_454_, 2, v___x_452_);
lean_ctor_set(v___x_454_, 3, v___x_453_);
v___x_455_ = l_Lean_Parser_mkParserState(v_inputString_446_);
lean_inc_ref(v_inputCtx_420_);
v___x_456_ = l_Lean_Parser_ParserFn_run(v___x_449_, v_inputCtx_420_, v___x_454_, v___x_450_, v___x_455_);
v_stxStack_457_ = lean_ctor_get(v___x_456_, 0);
v_pos_458_ = lean_ctor_get(v___x_456_, 2);
lean_inc(v_pos_458_);
v_errorMsg_459_ = lean_ctor_get(v___x_456_, 4);
lean_inc(v_errorMsg_459_);
v___x_540_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_457_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; 
v___x_541_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_457_);
v___y_510_ = v___x_541_;
goto v___jp_509_;
}
else
{
lean_object* v___x_542_; 
v___x_542_ = lean_box(0);
v___y_510_ = v___x_542_;
goto v___jp_509_;
}
v___jp_460_:
{
lean_object* v___x_463_; lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_463_ = l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(v___y_461_);
v_fst_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_fst_464_);
v_snd_465_ = lean_ctor_get(v___x_463_, 1);
lean_inc(v_snd_465_);
lean_dec_ref(v___x_463_);
v___x_466_ = lean_box(0);
v___x_467_ = l_instBEqOption_beq___at___00Lean_Parser_parseHeader_spec__0(v_errorMsg_459_, v___x_466_);
lean_dec(v_errorMsg_459_);
if (v___x_467_ == 0)
{
uint8_t v___x_468_; uint8_t v___x_469_; 
v___x_468_ = 1;
v___x_469_ = lean_unbox(v_snd_465_);
lean_dec(v_snd_465_);
v___y_433_ = v_fst_464_;
v___y_434_ = v_messages_462_;
v___y_435_ = v___x_469_;
v___y_436_ = v_pos_458_;
v___y_437_ = v___x_468_;
goto v___jp_432_;
}
else
{
uint8_t v___x_470_; uint8_t v___x_471_; 
v___x_470_ = 0;
v___x_471_ = lean_unbox(v_snd_465_);
lean_dec(v_snd_465_);
v___y_433_ = v_fst_464_;
v___y_434_ = v_messages_462_;
v___y_435_ = v___x_471_;
v___y_436_ = v_pos_458_;
v___y_437_ = v___x_470_;
goto v___jp_432_;
}
}
v___jp_472_:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; size_t v_sz_481_; lean_object* v___x_482_; 
v___x_478_ = lean_unsigned_to_nat(2u);
v___x_479_ = l_Lean_Syntax_getArg(v___y_474_, v___x_478_);
v___x_480_ = l_Lean_Syntax_getArgs(v___x_479_);
lean_dec(v___x_479_);
v_sz_481_ = lean_array_size(v___x_480_);
v___x_482_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2(v_inputCtx_420_, v___y_477_, v___y_476_, v___x_480_, v_sz_481_, v___y_473_, v___y_475_);
lean_dec_ref(v___x_480_);
lean_dec(v___y_476_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v_a_483_; 
v_a_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_a_483_);
lean_dec_ref_known(v___x_482_, 1);
v___y_461_ = v___y_474_;
v_messages_462_ = v_a_483_;
goto v___jp_460_;
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v___y_474_);
lean_dec(v_errorMsg_459_);
lean_dec(v_pos_458_);
v_a_484_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_482_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_482_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
v___jp_492_:
{
lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_501_ = lean_unsigned_to_nat(1u);
v___x_502_ = l_Lean_Syntax_getArg(v___y_495_, v___x_501_);
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
lean_dec_ref(v_inputCtx_420_);
v___y_461_ = v___y_495_;
v_messages_462_ = v___y_497_;
goto v___jp_460_;
}
else
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_505_ = l_Lean_Syntax_getArg(v___x_502_, v___x_440_);
lean_dec(v___x_502_);
v___x_506_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__1));
lean_inc_ref(v___y_498_);
lean_inc_ref(v___y_493_);
lean_inc_ref(v___y_494_);
v___x_507_ = l_Lean_Name_mkStr4(v___y_494_, v___y_493_, v___y_498_, v___x_506_);
v___x_508_ = l_Lean_Syntax_isOfKind(v___x_505_, v___x_507_);
lean_dec(v___x_507_);
if (v___x_508_ == 0)
{
lean_dec(v_moduleTk_x3f_500_);
lean_dec_ref(v_inputCtx_420_);
v___y_461_ = v___y_495_;
v_messages_462_ = v___y_497_;
goto v___jp_460_;
}
else
{
v___y_473_ = v___y_496_;
v___y_474_ = v___y_495_;
v___y_475_ = v___y_497_;
v___y_476_ = v_moduleTk_x3f_500_;
v___y_477_ = v___y_499_;
goto v___jp_472_;
}
}
}
else
{
lean_dec(v___x_502_);
v___y_473_ = v___y_496_;
v___y_474_ = v___y_495_;
v___y_475_ = v___y_497_;
v___y_476_ = v_moduleTk_x3f_500_;
v___y_477_ = v___y_499_;
goto v___jp_472_;
}
}
v___jp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; size_t v_sz_513_; size_t v___x_514_; lean_object* v___x_515_; 
v___x_511_ = lean_obj_once(&l_Lean_Parser_parseHeader___closed__4, &l_Lean_Parser_parseHeader___closed__4_once, _init_l_Lean_Parser_parseHeader___closed__4);
v___x_512_ = l_Lean_Parser_ParserState_allErrors(v___x_456_);
v_sz_513_ = lean_array_size(v___x_512_);
v___x_514_ = ((size_t)0ULL);
lean_inc_ref(v_inputCtx_420_);
v___x_515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__1(v_inputCtx_420_, v___x_512_, v_sz_513_, v___x_514_, v___x_511_);
lean_dec_ref(v___x_512_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__0));
v___x_518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__1));
v___x_519_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseHeader_spec__2___closed__2));
v___x_520_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__6));
lean_inc(v___y_510_);
v___x_521_ = l_Lean_Syntax_isOfKind(v___y_510_, v___x_520_);
if (v___x_521_ == 0)
{
lean_dec_ref(v_inputCtx_420_);
v___y_461_ = v___y_510_;
v_messages_462_ = v_a_516_;
goto v___jp_460_;
}
else
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = l_Lean_Syntax_getArg(v___y_510_, v___x_440_);
v___x_523_ = l_Lean_Syntax_isNone(v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_522_);
v___x_525_ = l_Lean_Syntax_matchesNull(v___x_522_, v___x_524_);
if (v___x_525_ == 0)
{
lean_dec(v___x_522_);
lean_dec_ref(v_inputCtx_420_);
v___y_461_ = v___y_510_;
v_messages_462_ = v_a_516_;
goto v___jp_460_;
}
else
{
lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_526_ = l_Lean_Syntax_getArg(v___x_522_, v___x_440_);
lean_dec(v___x_522_);
v___x_527_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__8));
lean_inc(v___x_526_);
v___x_528_ = l_Lean_Syntax_isOfKind(v___x_526_, v___x_527_);
if (v___x_528_ == 0)
{
lean_dec(v___x_526_);
lean_dec_ref(v_inputCtx_420_);
v___y_461_ = v___y_510_;
v_messages_462_ = v_a_516_;
goto v___jp_460_;
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = l_Lean_Syntax_getArg(v___x_526_, v___x_440_);
lean_dec(v___x_526_);
v___x_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
v___y_493_ = v___x_518_;
v___y_494_ = v___x_517_;
v___y_495_ = v___y_510_;
v___y_496_ = v___x_514_;
v___y_497_ = v_a_516_;
v___y_498_ = v___x_519_;
v___y_499_ = v___x_521_;
v_moduleTk_x3f_500_ = v___x_530_;
goto v___jp_492_;
}
}
}
else
{
lean_object* v___x_531_; 
lean_dec(v___x_522_);
v___x_531_ = lean_box(0);
v___y_493_ = v___x_518_;
v___y_494_ = v___x_517_;
v___y_495_ = v___y_510_;
v___y_496_ = v___x_514_;
v___y_497_ = v_a_516_;
v___y_498_ = v___x_519_;
v___y_499_ = v___x_521_;
v_moduleTk_x3f_500_ = v___x_531_;
goto v___jp_492_;
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec(v___y_510_);
lean_dec(v_errorMsg_459_);
lean_dec(v_pos_458_);
lean_dec_ref(v_inputCtx_420_);
v_a_532_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_515_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_515_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref(v_inputCtx_420_);
v_a_543_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_442_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_442_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
v___jp_422_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_428_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_428_, 0, v___y_426_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1, v___y_425_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1 + 1, v___y_427_);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v___y_424_);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v___y_423_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
v___jp_432_:
{
if (v___y_435_ == 0)
{
uint8_t v___x_438_; 
v___x_438_ = 1;
v___y_423_ = v___y_433_;
v___y_424_ = v___y_434_;
v___y_425_ = v___y_437_;
v___y_426_ = v___y_436_;
v___y_427_ = v___x_438_;
goto v___jp_422_;
}
else
{
uint8_t v___x_439_; 
v___x_439_ = 0;
v___y_423_ = v___y_433_;
v___y_424_ = v___y_434_;
v___y_425_ = v___y_437_;
v___y_426_ = v___y_436_;
v___y_427_ = v___x_439_;
goto v___jp_422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseHeader___boxed(lean_object* v_inputCtx_551_, lean_object* v_a_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lean_Parser_parseHeader(v_inputCtx_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(lean_object* v_inputCtx_561_, lean_object* v_pos_562_){
_start:
{
lean_object* v___y_564_; lean_object* v_inputString_574_; lean_object* v_endPos_575_; uint8_t v___x_576_; 
v_inputString_574_ = lean_ctor_get(v_inputCtx_561_, 0);
v_endPos_575_ = lean_ctor_get(v_inputCtx_561_, 3);
v___x_576_ = lean_nat_dec_le(v_pos_562_, v_endPos_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
lean_inc(v_endPos_575_);
lean_inc(v_pos_562_);
lean_inc_ref(v_inputString_574_);
v___x_577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_577_, 0, v_inputString_574_);
lean_ctor_set(v___x_577_, 1, v_pos_562_);
lean_ctor_set(v___x_577_, 2, v_endPos_575_);
v___y_564_ = v___x_577_;
goto v___jp_563_;
}
else
{
lean_object* v___x_578_; 
lean_inc_n(v_pos_562_, 2);
lean_inc_ref(v_inputString_574_);
v___x_578_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_578_, 0, v_inputString_574_);
lean_ctor_set(v___x_578_, 1, v_pos_562_);
lean_ctor_set(v___x_578_, 2, v_pos_562_);
v___y_564_ = v___x_578_;
goto v___jp_563_;
}
v___jp_563_:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v_atom_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
lean_inc(v_pos_562_);
lean_inc_ref(v___y_564_);
v___x_565_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_565_, 0, v___y_564_);
lean_ctor_set(v___x_565_, 1, v_pos_562_);
lean_ctor_set(v___x_565_, 2, v___y_564_);
lean_ctor_set(v___x_565_, 3, v_pos_562_);
v___x_566_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___closed__0));
v_atom_567_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_567_, 0, v___x_565_);
lean_ctor_set(v_atom_567_, 1, v___x_566_);
v___x_568_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2));
v___x_569_ = lean_unsigned_to_nat(1u);
v___x_570_ = lean_mk_empty_array_with_capacity(v___x_569_);
v___x_571_ = lean_array_push(v___x_570_, v_atom_567_);
v___x_572_ = lean_box(2);
v___x_573_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_568_);
lean_ctor_set(v___x_573_, 2, v___x_571_);
return v___x_573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___boxed(lean_object* v_inputCtx_579_, lean_object* v_pos_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(v_inputCtx_579_, v_pos_580_);
lean_dec_ref(v_inputCtx_579_);
return v_res_581_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isTerminalCommand(lean_object* v_s_593_){
_start:
{
lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_594_ = ((lean_object*)(l_Lean_Parser_isTerminalCommand___closed__1));
lean_inc(v_s_593_);
v___x_595_ = l_Lean_Syntax_isOfKind(v_s_593_, v___x_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = ((lean_object*)(l_Lean_Parser_isTerminalCommand___closed__2));
lean_inc(v_s_593_);
v___x_597_ = l_Lean_Syntax_isOfKind(v_s_593_, v___x_596_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_598_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI___closed__2));
v___x_599_ = l_Lean_Syntax_isOfKind(v_s_593_, v___x_598_);
return v___x_599_;
}
else
{
lean_dec(v_s_593_);
return v___x_597_;
}
}
else
{
lean_dec(v_s_593_);
return v___x_595_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isTerminalCommand___boxed(lean_object* v_s_600_){
_start:
{
uint8_t v_res_601_; lean_object* v_r_602_; 
v_res_601_ = l_Lean_Parser_isTerminalCommand(v_s_600_);
v_r_602_ = lean_box(v_res_601_);
return v_r_602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(lean_object* v_inputCtx_607_, lean_object* v_pmctx_608_, lean_object* v_pos_609_){
_start:
{
lean_object* v_inputString_610_; lean_object* v_env_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v_s_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_s_620_; lean_object* v_errorMsg_621_; 
v_inputString_610_ = lean_ctor_get(v_inputCtx_607_, 0);
v_env_611_ = lean_ctor_get(v_pmctx_608_, 0);
v___x_612_ = lean_unsigned_to_nat(0u);
v___x_613_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0));
v___x_614_ = l_Lean_Parser_SyntaxStack_empty;
v___x_615_ = l_Lean_Parser_initCacheForInput(v_inputString_610_);
v___x_616_ = lean_box(0);
lean_inc(v_pos_609_);
v_s_617_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_s_617_, 0, v___x_614_);
lean_ctor_set(v_s_617_, 1, v___x_612_);
lean_ctor_set(v_s_617_, 2, v_pos_609_);
lean_ctor_set(v_s_617_, 3, v___x_615_);
lean_ctor_set(v_s_617_, 4, v___x_616_);
lean_ctor_set(v_s_617_, 5, v___x_613_);
v___x_618_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__1));
lean_inc_ref(v_env_611_);
v___x_619_ = l_Lean_Parser_getTokenTable(v_env_611_);
v_s_620_ = l_Lean_Parser_ParserFn_run(v___x_618_, v_inputCtx_607_, v_pmctx_608_, v___x_619_, v_s_617_);
v_errorMsg_621_ = lean_ctor_get(v_s_620_, 4);
if (lean_obj_tag(v_errorMsg_621_) == 0)
{
lean_object* v_pos_622_; 
lean_dec(v_pos_609_);
v_pos_622_ = lean_ctor_get(v_s_620_, 2);
lean_inc(v_pos_622_);
lean_dec_ref(v_s_620_);
return v_pos_622_;
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec_ref(v_s_620_);
v___x_623_ = lean_unsigned_to_nat(1u);
v___x_624_ = lean_nat_add(v_pos_609_, v___x_623_);
lean_dec(v_pos_609_);
return v___x_624_;
}
}
}
static lean_object* _init_l_Lean_Parser_topLevelCommandParserFn___closed__2(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_unsigned_to_nat(0u);
v___x_629_ = ((lean_object*)(l_Lean_Parser_topLevelCommandParserFn___closed__1));
v___x_630_ = l_Lean_Parser_categoryParser(v___x_629_, v___x_628_);
return v___x_630_;
}
}
static lean_object* _init_l_Lean_Parser_topLevelCommandParserFn___closed__3(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_obj_once(&l_Lean_Parser_topLevelCommandParserFn___closed__2, &l_Lean_Parser_topLevelCommandParserFn___closed__2_once, _init_l_Lean_Parser_topLevelCommandParserFn___closed__2);
v___x_632_ = l_Lean_Parser_withPosition(v___x_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_topLevelCommandParserFn(lean_object* v_a_633_, lean_object* v_a_634_){
_start:
{
lean_object* v___x_635_; lean_object* v_fn_636_; lean_object* v___x_637_; 
v___x_635_ = lean_obj_once(&l_Lean_Parser_topLevelCommandParserFn___closed__3, &l_Lean_Parser_topLevelCommandParserFn___closed__3_once, _init_l_Lean_Parser_topLevelCommandParserFn___closed__3);
v_fn_636_ = lean_ctor_get(v___x_635_, 1);
lean_inc_ref(v_fn_636_);
v___x_637_ = lean_apply_2(v_fn_636_, v_a_633_, v_a_634_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(lean_object* v_inputCtx_638_, lean_object* v_as_639_, size_t v_sz_640_, size_t v_i_641_, lean_object* v_b_642_){
_start:
{
uint8_t v___x_643_; 
v___x_643_ = lean_usize_dec_lt(v_i_641_, v_sz_640_);
if (v___x_643_ == 0)
{
lean_dec_ref(v_inputCtx_638_);
return v_b_642_;
}
else
{
lean_object* v_a_644_; lean_object* v_snd_645_; lean_object* v_fst_646_; lean_object* v_fst_647_; lean_object* v_snd_648_; lean_object* v___x_649_; lean_object* v___x_650_; size_t v___x_651_; size_t v___x_652_; 
v_a_644_ = lean_array_uget_borrowed(v_as_639_, v_i_641_);
v_snd_645_ = lean_ctor_get(v_a_644_, 1);
v_fst_646_ = lean_ctor_get(v_a_644_, 0);
v_fst_647_ = lean_ctor_get(v_snd_645_, 0);
v_snd_648_ = lean_ctor_get(v_snd_645_, 1);
lean_inc(v_snd_648_);
lean_inc(v_fst_647_);
lean_inc(v_fst_646_);
lean_inc_ref(v_inputCtx_638_);
v___x_649_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_638_, v_fst_646_, v_fst_647_, v_snd_648_);
v___x_650_ = l_Lean_MessageLog_add(v___x_649_, v_b_642_);
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_641_, v___x_651_);
v_i_641_ = v___x_652_;
v_b_642_ = v___x_650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0___boxed(lean_object* v_inputCtx_654_, lean_object* v_as_655_, lean_object* v_sz_656_, lean_object* v_i_657_, lean_object* v_b_658_){
_start:
{
size_t v_sz_boxed_659_; size_t v_i_boxed_660_; lean_object* v_res_661_; 
v_sz_boxed_659_ = lean_unbox_usize(v_sz_656_);
lean_dec(v_sz_656_);
v_i_boxed_660_ = lean_unbox_usize(v_i_657_);
lean_dec(v_i_657_);
v_res_661_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(v_inputCtx_654_, v_as_655_, v_sz_boxed_659_, v_i_boxed_660_, v_b_658_);
lean_dec_ref(v_as_655_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(lean_object* v_snd_662_, lean_object* v_inputCtx_663_, lean_object* v_pos_664_, lean_object* v_stxStack_665_, lean_object* v_val_666_, lean_object* v___x_667_, lean_object* v_fst_668_, lean_object* v_____r_669_, lean_object* v_pos_670_){
_start:
{
lean_object* v_messages_672_; uint8_t v___y_680_; uint8_t v___y_691_; uint8_t v___x_693_; 
v___x_693_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_665_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_665_);
v___x_695_ = l_Lean_Syntax_getPos_x3f(v___x_694_, v___x_693_);
lean_dec(v___x_694_);
if (lean_obj_tag(v___x_695_) == 0)
{
uint8_t v___x_696_; 
v___x_696_ = 1;
v___y_691_ = v___x_696_;
goto v___jp_690_;
}
else
{
lean_dec_ref_known(v___x_695_, 1);
v___y_691_ = v___x_693_;
goto v___jp_690_;
}
}
else
{
v___y_691_ = v___x_693_;
goto v___jp_690_;
}
v___jp_671_:
{
uint8_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_673_ = 1;
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v_messages_672_);
lean_ctor_set(v___x_674_, 1, v_snd_662_);
v___x_675_ = lean_box(v___x_673_);
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_675_);
lean_ctor_set(v___x_676_, 1, v___x_674_);
v___x_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_677_, 0, v_pos_670_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
}
v___jp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
lean_inc_ref(v_stxStack_665_);
v___x_681_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(v_inputCtx_663_, v_pos_664_, v_stxStack_665_, v_val_666_);
v___x_682_ = l_Lean_MessageLog_add(v___x_681_, v___x_667_);
if (v___y_680_ == 0)
{
uint8_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec(v_snd_662_);
v___x_683_ = 1;
v___x_684_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_665_);
lean_dec_ref(v_stxStack_665_);
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_682_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
v___x_686_ = lean_box(v___x_683_);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v___x_685_);
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v_pos_670_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
else
{
lean_dec_ref(v_stxStack_665_);
v_messages_672_ = v___x_682_;
goto v___jp_671_;
}
}
v___jp_690_:
{
uint8_t v___x_692_; 
v___x_692_ = lean_unbox(v_fst_668_);
if (v___x_692_ == 0)
{
v___y_680_ = v___y_691_;
goto v___jp_679_;
}
else
{
if (v___y_691_ == 0)
{
v___y_680_ = v___y_691_;
goto v___jp_679_;
}
else
{
lean_dec_ref(v_val_666_);
lean_dec_ref(v_stxStack_665_);
lean_dec(v_pos_664_);
lean_dec_ref(v_inputCtx_663_);
v_messages_672_ = v___x_667_;
goto v___jp_671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0___boxed(lean_object* v_snd_697_, lean_object* v_inputCtx_698_, lean_object* v_pos_699_, lean_object* v_stxStack_700_, lean_object* v_val_701_, lean_object* v___x_702_, lean_object* v_fst_703_, lean_object* v_____r_704_, lean_object* v_pos_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_snd_697_, v_inputCtx_698_, v_pos_699_, v_stxStack_700_, v_val_701_, v___x_702_, v_fst_703_, v_____r_704_, v_pos_705_);
lean_dec(v_fst_703_);
return v_res_706_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_alloc_closure((void*)(l_Lean_Parser_topLevelCommandParserFn), 2, 0);
v___x_708_ = ((lean_object*)(l_Lean_Parser_parseHeader___closed__0));
v___x_709_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_709_, 0, v___x_708_);
lean_closure_set(v___x_709_, 1, v___x_707_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(lean_object* v_inputCtx_710_, lean_object* v_pmctx_711_, lean_object* v_a_712_){
_start:
{
lean_object* v___y_714_; lean_object* v_snd_718_; lean_object* v_snd_719_; lean_object* v_fst_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_794_; 
v_snd_718_ = lean_ctor_get(v_a_712_, 1);
lean_inc(v_snd_718_);
v_snd_719_ = lean_ctor_get(v_snd_718_, 1);
lean_inc(v_snd_719_);
v_fst_720_ = lean_ctor_get(v_a_712_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v_a_712_);
if (v_isSharedCheck_794_ == 0)
{
lean_object* v_unused_795_; 
v_unused_795_ = lean_ctor_get(v_a_712_, 1);
lean_dec(v_unused_795_);
v___x_722_ = v_a_712_;
v_isShared_723_ = v_isSharedCheck_794_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_fst_720_);
lean_dec(v_a_712_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_794_;
goto v_resetjp_721_;
}
v___jp_713_:
{
if (lean_obj_tag(v___y_714_) == 0)
{
lean_object* v_a_715_; 
lean_dec_ref(v_pmctx_711_);
lean_dec_ref(v_inputCtx_710_);
v_a_715_ = lean_ctor_get(v___y_714_, 0);
lean_inc(v_a_715_);
lean_dec_ref_known(v___y_714_, 1);
return v_a_715_;
}
else
{
lean_object* v_a_716_; 
v_a_716_ = lean_ctor_get(v___y_714_, 0);
lean_inc(v_a_716_);
lean_dec_ref_known(v___y_714_, 1);
v_a_712_ = v_a_716_;
goto _start;
}
}
v_resetjp_721_:
{
lean_object* v_fst_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_792_; 
v_fst_724_ = lean_ctor_get(v_snd_718_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v_snd_718_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v_snd_718_, 1);
lean_dec(v_unused_793_);
v___x_726_ = v_snd_718_;
v_isShared_727_ = v_isSharedCheck_792_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_fst_724_);
lean_dec(v_snd_718_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_792_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v_fst_728_; lean_object* v_snd_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_791_; 
v_fst_728_ = lean_ctor_get(v_snd_719_, 0);
v_snd_729_ = lean_ctor_get(v_snd_719_, 1);
v_isSharedCheck_791_ = !lean_is_exclusive(v_snd_719_);
if (v_isSharedCheck_791_ == 0)
{
v___x_731_ = v_snd_719_;
v_isShared_732_ = v_isSharedCheck_791_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_snd_729_);
lean_inc(v_fst_728_);
lean_dec(v_snd_719_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_791_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
uint8_t v___x_733_; 
v___x_733_ = l_Lean_Parser_InputContext_atEnd(v_inputCtx_710_, v_fst_720_);
if (v___x_733_ == 0)
{
lean_object* v_env_734_; lean_object* v_inputString_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v_stxStack_745_; lean_object* v_pos_746_; lean_object* v_errorMsg_747_; lean_object* v_recoveredErrors_748_; size_t v_sz_749_; size_t v___x_750_; lean_object* v___x_751_; uint8_t v___y_753_; uint8_t v___x_772_; 
v_env_734_ = lean_ctor_get(v_pmctx_711_, 0);
v_inputString_735_ = lean_ctor_get(v_inputCtx_710_, 0);
v___x_736_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___closed__0);
lean_inc_ref(v_env_734_);
v___x_737_ = l_Lean_Parser_getTokenTable(v_env_734_);
v___x_738_ = l_Lean_Parser_SyntaxStack_empty;
v___x_739_ = lean_unsigned_to_nat(0u);
v___x_740_ = l_Lean_Parser_initCacheForInput(v_inputString_735_);
v___x_741_ = lean_box(0);
v___x_742_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput___closed__0));
lean_inc(v_fst_720_);
v___x_743_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_743_, 0, v___x_738_);
lean_ctor_set(v___x_743_, 1, v___x_739_);
lean_ctor_set(v___x_743_, 2, v_fst_720_);
lean_ctor_set(v___x_743_, 3, v___x_740_);
lean_ctor_set(v___x_743_, 4, v___x_741_);
lean_ctor_set(v___x_743_, 5, v___x_742_);
lean_inc_ref(v_pmctx_711_);
lean_inc_ref_n(v_inputCtx_710_, 2);
v___x_744_ = l_Lean_Parser_ParserFn_run(v___x_736_, v_inputCtx_710_, v_pmctx_711_, v___x_737_, v___x_743_);
v_stxStack_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc_ref(v_stxStack_745_);
v_pos_746_ = lean_ctor_get(v___x_744_, 2);
lean_inc(v_pos_746_);
v_errorMsg_747_ = lean_ctor_get(v___x_744_, 4);
lean_inc(v_errorMsg_747_);
v_recoveredErrors_748_ = lean_ctor_get(v___x_744_, 5);
lean_inc_ref(v_recoveredErrors_748_);
lean_dec_ref(v___x_744_);
v_sz_749_ = lean_array_size(v_recoveredErrors_748_);
v___x_750_ = ((size_t)0ULL);
v___x_751_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_parseCommand_spec__0(v_inputCtx_710_, v_recoveredErrors_748_, v_sz_749_, v___x_750_, v_fst_728_);
lean_dec_ref(v_recoveredErrors_748_);
v___x_772_ = lean_unbox(v_fst_724_);
if (v___x_772_ == 0)
{
uint8_t v___x_773_; 
v___x_773_ = lean_unbox(v_fst_724_);
v___y_753_ = v___x_773_;
goto v___jp_752_;
}
else
{
uint8_t v___x_774_; 
v___x_774_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_745_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_745_);
v___x_776_ = l_Lean_Syntax_isAntiquot(v___x_775_);
lean_dec(v___x_775_);
if (v___x_776_ == 0)
{
v___y_753_ = v___x_776_;
goto v___jp_752_;
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
lean_dec(v_errorMsg_747_);
lean_dec_ref(v_stxStack_745_);
lean_del_object(v___x_731_);
lean_del_object(v___x_726_);
lean_del_object(v___x_722_);
lean_dec(v_fst_720_);
v___x_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_751_);
lean_ctor_set(v___x_777_, 1, v_snd_729_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v_fst_724_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v_pos_746_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v_a_712_ = v___x_779_;
goto _start;
}
}
else
{
v___y_753_ = v___x_733_;
goto v___jp_752_;
}
}
v___jp_752_:
{
if (lean_obj_tag(v_errorMsg_747_) == 0)
{
lean_object* v___x_754_; lean_object* v___x_756_; 
lean_dec(v_snd_729_);
lean_dec(v_fst_724_);
lean_dec(v_fst_720_);
lean_dec_ref(v_pmctx_711_);
lean_dec_ref(v_inputCtx_710_);
v___x_754_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_745_);
lean_dec_ref(v_stxStack_745_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v___x_754_);
lean_ctor_set(v___x_731_, 0, v___x_751_);
v___x_756_ = v___x_731_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_751_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v___x_754_);
v___x_756_ = v_reuseFailAlloc_764_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_757_ = lean_box(v___y_753_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v___x_756_);
lean_ctor_set(v___x_726_, 0, v___x_757_);
v___x_759_ = v___x_726_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v___x_756_);
v___x_759_ = v_reuseFailAlloc_763_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
lean_object* v___x_761_; 
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 1, v___x_759_);
lean_ctor_set(v___x_722_, 0, v_pos_746_);
v___x_761_ = v___x_722_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_pos_746_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_val_765_; uint8_t v_decide_766_; 
lean_del_object(v___x_731_);
lean_del_object(v___x_726_);
lean_del_object(v___x_722_);
v_val_765_ = lean_ctor_get(v_errorMsg_747_, 0);
lean_inc(v_val_765_);
lean_dec_ref_known(v_errorMsg_747_, 1);
v_decide_766_ = lean_nat_dec_eq(v_pos_746_, v_fst_720_);
lean_dec(v_fst_720_);
if (v_decide_766_ == 0)
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = lean_box(0);
lean_inc(v_pos_746_);
lean_inc_ref(v_inputCtx_710_);
v___x_768_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_snd_729_, v_inputCtx_710_, v_pos_746_, v_stxStack_745_, v_val_765_, v___x_751_, v_fst_724_, v___x_767_, v_pos_746_);
lean_dec(v_fst_724_);
v___y_714_ = v___x_768_;
goto v___jp_713_;
}
else
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
lean_inc(v_pos_746_);
lean_inc_ref(v_pmctx_711_);
lean_inc_ref_n(v_inputCtx_710_, 2);
v___x_769_ = l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(v_inputCtx_710_, v_pmctx_711_, v_pos_746_);
v___x_770_ = lean_box(0);
v___x_771_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg___lam__0(v_snd_729_, v_inputCtx_710_, v_pos_746_, v_stxStack_745_, v_val_765_, v___x_751_, v_fst_724_, v___x_770_, v___x_769_);
lean_dec(v_fst_724_);
v___y_714_ = v___x_771_;
goto v___jp_713_;
}
}
}
}
else
{
lean_object* v___x_781_; lean_object* v___x_783_; 
lean_dec(v_snd_729_);
lean_dec_ref(v_pmctx_711_);
lean_inc(v_fst_720_);
v___x_781_ = l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(v_inputCtx_710_, v_fst_720_);
lean_dec_ref(v_inputCtx_710_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v___x_781_);
v___x_783_ = v___x_731_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_fst_728_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v___x_781_);
v___x_783_ = v_reuseFailAlloc_790_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_785_; 
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v___x_783_);
v___x_785_ = v___x_726_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_fst_724_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v___x_783_);
v___x_785_ = v_reuseFailAlloc_789_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_787_; 
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 1, v___x_785_);
v___x_787_ = v___x_722_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_fst_720_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_parseCommand(lean_object* v_inputCtx_796_, lean_object* v_pmctx_797_, lean_object* v_mps_798_, lean_object* v_messages_799_){
_start:
{
lean_object* v_pos_800_; uint8_t v_recovering_801_; uint8_t v_hasLeading_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_842_; 
v_pos_800_ = lean_ctor_get(v_mps_798_, 0);
v_recovering_801_ = lean_ctor_get_uint8(v_mps_798_, sizeof(void*)*1);
v_hasLeading_802_ = lean_ctor_get_uint8(v_mps_798_, sizeof(void*)*1 + 1);
v_isSharedCheck_842_ = !lean_is_exclusive(v_mps_798_);
if (v_isSharedCheck_842_ == 0)
{
v___x_804_ = v_mps_798_;
v_isShared_805_ = v_isSharedCheck_842_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_pos_800_);
lean_dec(v_mps_798_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_842_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v_stx_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v_snd_812_; lean_object* v_snd_813_; lean_object* v_fst_814_; lean_object* v_fst_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_840_; 
v_stx_806_ = lean_box(0);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v_messages_799_);
lean_ctor_set(v___x_807_, 1, v_stx_806_);
v___x_808_ = lean_box(v_recovering_801_);
v___x_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
lean_ctor_set(v___x_809_, 1, v___x_807_);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v_pos_800_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(v_inputCtx_796_, v_pmctx_797_, v___x_810_);
v_snd_812_ = lean_ctor_get(v___x_811_, 1);
lean_inc(v_snd_812_);
v_snd_813_ = lean_ctor_get(v_snd_812_, 1);
lean_inc(v_snd_813_);
v_fst_814_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_fst_814_);
lean_dec_ref(v___x_811_);
v_fst_815_ = lean_ctor_get(v_snd_812_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v_snd_812_);
if (v_isSharedCheck_840_ == 0)
{
lean_object* v_unused_841_; 
v_unused_841_ = lean_ctor_get(v_snd_812_, 1);
lean_dec(v_unused_841_);
v___x_817_ = v_snd_812_;
v_isShared_818_ = v_isSharedCheck_840_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_fst_815_);
lean_dec(v_snd_812_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_840_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v_fst_819_; lean_object* v_snd_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_839_; 
v_fst_819_ = lean_ctor_get(v_snd_813_, 0);
v_snd_820_ = lean_ctor_get(v_snd_813_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_snd_813_);
if (v_isSharedCheck_839_ == 0)
{
v___x_822_ = v_snd_813_;
v_isShared_823_ = v_isSharedCheck_839_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_snd_820_);
lean_inc(v_fst_819_);
lean_dec(v_snd_813_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_839_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v_stx_825_; 
if (v_hasLeading_802_ == 0)
{
v_stx_825_ = v_snd_820_;
goto v___jp_824_;
}
else
{
lean_object* v___x_837_; lean_object* v_fst_838_; 
v___x_837_ = l___private_Lean_Parser_Module_0__Lean_Parser_setStartOfFileLeading(v_snd_820_);
v_fst_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_fst_838_);
lean_dec_ref(v___x_837_);
v_stx_825_ = v_fst_838_;
goto v___jp_824_;
}
v___jp_824_:
{
uint8_t v___x_826_; lean_object* v___x_828_; 
v___x_826_ = 0;
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v_fst_814_);
v___x_828_ = v___x_804_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_fst_814_);
v___x_828_ = v_reuseFailAlloc_836_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
uint8_t v___x_829_; lean_object* v___x_831_; 
v___x_829_ = lean_unbox(v_fst_815_);
lean_dec(v_fst_815_);
lean_ctor_set_uint8(v___x_828_, sizeof(void*)*1, v___x_829_);
lean_ctor_set_uint8(v___x_828_, sizeof(void*)*1 + 1, v___x_826_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 1, v_fst_819_);
lean_ctor_set(v___x_822_, 0, v___x_828_);
v___x_831_ = v___x_822_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_828_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v_fst_819_);
v___x_831_ = v_reuseFailAlloc_835_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_833_; 
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 1, v___x_831_);
lean_ctor_set(v___x_817_, 0, v_stx_825_);
v___x_833_ = v___x_817_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_stx_825_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1(lean_object* v_inputCtx_843_, lean_object* v_pmctx_844_, lean_object* v_inst_845_, lean_object* v_a_846_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Parser_parseCommand_spec__1___redArg(v_inputCtx_843_, v_pmctx_844_, v_a_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(lean_object* v_s_848_){
_start:
{
lean_object* v___x_850_; lean_object* v_putStr_851_; lean_object* v___x_852_; 
v___x_850_ = lean_get_stdout();
v_putStr_851_ = lean_ctor_get(v___x_850_, 4);
lean_inc_ref(v_putStr_851_);
lean_dec_ref(v___x_850_);
v___x_852_ = lean_apply_2(v_putStr_851_, v_s_848_, lean_box(0));
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0___boxed(lean_object* v_s_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(v_s_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(lean_object* v_s_856_){
_start:
{
uint32_t v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = 10;
v___x_859_ = lean_string_push(v_s_856_, v___x_858_);
v___x_860_ = l_IO_print___at___00IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0_spec__0(v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0___boxed(lean_object* v_s_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v_s_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(lean_object* v_msg_864_){
_start:
{
uint8_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = 0;
v___x_867_ = l_Lean_Message_toString(v_msg_864_, v___x_866_);
v___x_868_ = l_IO_println___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__0(v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0___boxed(lean_object* v_msg_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___lam__0(v_msg_869_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(lean_object* v_f_872_, lean_object* v_as_873_, size_t v_i_874_, size_t v_stop_875_, lean_object* v_b_876_){
_start:
{
uint8_t v___x_878_; 
v___x_878_ = lean_usize_dec_eq(v_i_874_, v_stop_875_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = lean_array_uget_borrowed(v_as_873_, v_i_874_);
lean_inc_ref(v_f_872_);
lean_inc(v___x_879_);
v___x_880_ = lean_apply_2(v_f_872_, v___x_879_, lean_box(0));
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; size_t v___x_882_; size_t v___x_883_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_880_, 1);
v___x_882_ = ((size_t)1ULL);
v___x_883_ = lean_usize_add(v_i_874_, v___x_882_);
v_i_874_ = v___x_883_;
v_b_876_ = v_a_881_;
goto _start;
}
else
{
lean_dec_ref(v_f_872_);
return v___x_880_;
}
}
else
{
lean_object* v___x_885_; 
lean_dec_ref(v_f_872_);
v___x_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_885_, 0, v_b_876_);
return v___x_885_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4___boxed(lean_object* v_f_886_, lean_object* v_as_887_, lean_object* v_i_888_, lean_object* v_stop_889_, lean_object* v_b_890_, lean_object* v___y_891_){
_start:
{
size_t v_i_boxed_892_; size_t v_stop_boxed_893_; lean_object* v_res_894_; 
v_i_boxed_892_ = lean_unbox_usize(v_i_888_);
lean_dec(v_i_888_);
v_stop_boxed_893_ = lean_unbox_usize(v_stop_889_);
lean_dec(v_stop_889_);
v_res_894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_886_, v_as_887_, v_i_boxed_892_, v_stop_boxed_893_, v_b_890_);
lean_dec_ref(v_as_887_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(lean_object* v_f_895_, lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_896_) == 0)
{
lean_object* v_cs_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_912_; 
v_cs_898_ = lean_ctor_get(v_x_896_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v_x_896_);
if (v_isSharedCheck_912_ == 0)
{
v___x_900_ = v_x_896_;
v_isShared_901_ = v_isSharedCheck_912_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_cs_898_);
lean_dec(v_x_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_912_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; uint8_t v___x_905_; 
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = lean_array_get_size(v_cs_898_);
v___x_904_ = lean_box(0);
v___x_905_ = lean_nat_dec_lt(v___x_902_, v___x_903_);
if (v___x_905_ == 0)
{
lean_object* v___x_907_; 
lean_dec_ref(v_cs_898_);
lean_dec_ref(v_f_895_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 0, v___x_904_);
v___x_907_ = v___x_900_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_904_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
else
{
size_t v___x_909_; size_t v___x_910_; lean_object* v___x_911_; 
lean_del_object(v___x_900_);
v___x_909_ = ((size_t)0ULL);
v___x_910_ = lean_usize_of_nat(v___x_903_);
v___x_911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_895_, v_cs_898_, v___x_909_, v___x_910_, v___x_904_);
lean_dec_ref(v_cs_898_);
return v___x_911_;
}
}
}
else
{
lean_object* v_vs_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_927_; 
v_vs_913_ = lean_ctor_get(v_x_896_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v_x_896_);
if (v_isSharedCheck_927_ == 0)
{
v___x_915_ = v_x_896_;
v_isShared_916_ = v_isSharedCheck_927_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_vs_913_);
lean_dec(v_x_896_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_927_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = lean_array_get_size(v_vs_913_);
v___x_919_ = lean_box(0);
v___x_920_ = lean_nat_dec_lt(v___x_917_, v___x_918_);
if (v___x_920_ == 0)
{
lean_object* v___x_922_; 
lean_dec_ref(v_vs_913_);
lean_dec_ref(v_f_895_);
if (v_isShared_916_ == 0)
{
lean_ctor_set_tag(v___x_915_, 0);
lean_ctor_set(v___x_915_, 0, v___x_919_);
v___x_922_ = v___x_915_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_919_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
else
{
size_t v___x_924_; size_t v___x_925_; lean_object* v___x_926_; 
lean_del_object(v___x_915_);
v___x_924_ = ((size_t)0ULL);
v___x_925_ = lean_usize_of_nat(v___x_918_);
v___x_926_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_895_, v_vs_913_, v___x_924_, v___x_925_, v___x_919_);
lean_dec_ref(v_vs_913_);
return v___x_926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(lean_object* v_f_928_, lean_object* v_as_929_, size_t v_i_930_, size_t v_stop_931_, lean_object* v_b_932_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = lean_usize_dec_eq(v_i_930_, v_stop_931_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = lean_array_uget_borrowed(v_as_929_, v_i_930_);
lean_inc(v___x_935_);
lean_inc_ref(v_f_928_);
v___x_936_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_928_, v___x_935_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; size_t v___x_938_; size_t v___x_939_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_936_, 1);
v___x_938_ = ((size_t)1ULL);
v___x_939_ = lean_usize_add(v_i_930_, v___x_938_);
v_i_930_ = v___x_939_;
v_b_932_ = v_a_937_;
goto _start;
}
else
{
lean_dec_ref(v_f_928_);
return v___x_936_;
}
}
else
{
lean_object* v___x_941_; 
lean_dec_ref(v_f_928_);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v_b_932_);
return v___x_941_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_f_942_, lean_object* v_as_943_, lean_object* v_i_944_, lean_object* v_stop_945_, lean_object* v_b_946_, lean_object* v___y_947_){
_start:
{
size_t v_i_boxed_948_; size_t v_stop_boxed_949_; lean_object* v_res_950_; 
v_i_boxed_948_ = lean_unbox_usize(v_i_944_);
lean_dec(v_i_944_);
v_stop_boxed_949_ = lean_unbox_usize(v_stop_945_);
lean_dec(v_stop_945_);
v_res_950_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_942_, v_as_943_, v_i_boxed_948_, v_stop_boxed_949_, v_b_946_);
lean_dec_ref(v_as_943_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_f_951_, lean_object* v_x_952_, lean_object* v___y_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_951_, v_x_952_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(lean_object* v_f_955_, lean_object* v_t_956_){
_start:
{
lean_object* v_root_958_; lean_object* v_tail_959_; lean_object* v___x_960_; 
v_root_958_ = lean_ctor_get(v_t_956_, 0);
lean_inc_ref(v_root_958_);
v_tail_959_ = lean_ctor_get(v_t_956_, 1);
lean_inc_ref(v_tail_959_);
lean_dec_ref(v_t_956_);
lean_inc_ref(v_f_955_);
v___x_960_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__4(v_f_955_, v_root_958_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_974_; 
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_974_ == 0)
{
lean_object* v_unused_975_; 
v_unused_975_ = lean_ctor_get(v___x_960_, 0);
lean_dec(v_unused_975_);
v___x_962_ = v___x_960_;
v_isShared_963_ = v_isSharedCheck_974_;
goto v_resetjp_961_;
}
else
{
lean_dec(v___x_960_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_974_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; uint8_t v___x_967_; 
v___x_964_ = lean_unsigned_to_nat(0u);
v___x_965_ = lean_array_get_size(v_tail_959_);
v___x_966_ = lean_box(0);
v___x_967_ = lean_nat_dec_lt(v___x_964_, v___x_965_);
if (v___x_967_ == 0)
{
lean_object* v___x_969_; 
lean_dec_ref(v_tail_959_);
lean_dec_ref(v_f_955_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_966_);
v___x_969_ = v___x_962_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_966_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
else
{
size_t v___x_971_; size_t v___x_972_; lean_object* v___x_973_; 
lean_del_object(v___x_962_);
v___x_971_ = ((size_t)0ULL);
v___x_972_ = lean_usize_of_nat(v___x_965_);
v___x_973_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_955_, v_tail_959_, v___x_971_, v___x_972_, v___x_966_);
lean_dec_ref(v_tail_959_);
return v___x_973_;
}
}
}
else
{
lean_dec_ref(v_tail_959_);
lean_dec_ref(v_f_955_);
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5___boxed(lean_object* v_f_976_, lean_object* v_t_977_, lean_object* v___y_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(v_f_976_, v_t_977_);
return v_res_979_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(lean_object* v_f_981_, lean_object* v_x_982_, size_t v_x_983_, size_t v_x_984_){
_start:
{
if (lean_obj_tag(v_x_982_) == 0)
{
lean_object* v_cs_986_; lean_object* v___x_987_; size_t v___x_988_; lean_object* v_j_989_; lean_object* v___x_990_; size_t v___x_991_; size_t v___x_992_; size_t v___x_993_; size_t v___x_994_; size_t v___x_995_; size_t v___x_996_; lean_object* v___x_997_; 
v_cs_986_ = lean_ctor_get(v_x_982_, 0);
lean_inc_ref(v_cs_986_);
lean_dec_ref_known(v_x_982_, 1);
v___x_987_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___closed__0);
v___x_988_ = lean_usize_shift_right(v_x_983_, v_x_984_);
v_j_989_ = lean_usize_to_nat(v___x_988_);
v___x_990_ = lean_array_get_borrowed(v___x_987_, v_cs_986_, v_j_989_);
v___x_991_ = ((size_t)1ULL);
v___x_992_ = lean_usize_shift_left(v___x_991_, v_x_984_);
v___x_993_ = lean_usize_sub(v___x_992_, v___x_991_);
v___x_994_ = lean_usize_land(v_x_983_, v___x_993_);
v___x_995_ = ((size_t)5ULL);
v___x_996_ = lean_usize_sub(v_x_984_, v___x_995_);
lean_inc(v___x_990_);
lean_inc_ref(v_f_981_);
v___x_997_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_981_, v___x_990_, v___x_994_, v___x_996_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1012_; 
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1012_ == 0)
{
lean_object* v_unused_1013_; 
v_unused_1013_ = lean_ctor_get(v___x_997_, 0);
lean_dec(v_unused_1013_);
v___x_999_ = v___x_997_;
v_isShared_1000_ = v_isSharedCheck_1012_;
goto v_resetjp_998_;
}
else
{
lean_dec(v___x_997_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1012_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1001_ = lean_unsigned_to_nat(1u);
v___x_1002_ = lean_nat_add(v_j_989_, v___x_1001_);
lean_dec(v_j_989_);
v___x_1003_ = lean_array_get_size(v_cs_986_);
v___x_1004_ = lean_box(0);
v___x_1005_ = lean_nat_dec_lt(v___x_1002_, v___x_1003_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1007_; 
lean_dec(v___x_1002_);
lean_dec_ref(v_cs_986_);
lean_dec_ref(v_f_981_);
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v___x_1004_);
v___x_1007_ = v___x_999_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1004_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
else
{
size_t v___x_1009_; size_t v___x_1010_; lean_object* v___x_1011_; 
lean_del_object(v___x_999_);
v___x_1009_ = lean_usize_of_nat(v___x_1002_);
lean_dec(v___x_1002_);
v___x_1010_ = lean_usize_of_nat(v___x_1003_);
v___x_1011_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3_spec__5(v_f_981_, v_cs_986_, v___x_1009_, v___x_1010_, v___x_1004_);
lean_dec_ref(v_cs_986_);
return v___x_1011_;
}
}
}
else
{
lean_dec(v_j_989_);
lean_dec_ref(v_cs_986_);
lean_dec_ref(v_f_981_);
return v___x_997_;
}
}
else
{
lean_object* v_vs_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1028_; 
v_vs_1014_ = lean_ctor_get(v_x_982_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_x_982_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1016_ = v_x_982_;
v_isShared_1017_ = v_isSharedCheck_1028_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_vs_1014_);
lean_dec(v_x_982_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1028_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; uint8_t v___x_1021_; 
v___x_1018_ = lean_usize_to_nat(v_x_983_);
v___x_1019_ = lean_array_get_size(v_vs_1014_);
v___x_1020_ = lean_box(0);
v___x_1021_ = lean_nat_dec_lt(v___x_1018_, v___x_1019_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1023_; 
lean_dec(v___x_1018_);
lean_dec_ref(v_vs_1014_);
lean_dec_ref(v_f_981_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set_tag(v___x_1016_, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1020_);
v___x_1023_ = v___x_1016_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1020_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
else
{
size_t v___x_1025_; size_t v___x_1026_; lean_object* v___x_1027_; 
lean_del_object(v___x_1016_);
v___x_1025_ = lean_usize_of_nat(v___x_1018_);
lean_dec(v___x_1018_);
v___x_1026_ = lean_usize_of_nat(v___x_1019_);
v___x_1027_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_981_, v_vs_1014_, v___x_1025_, v___x_1026_, v___x_1020_);
lean_dec_ref(v_vs_1014_);
return v___x_1027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3___boxed(lean_object* v_f_1029_, lean_object* v_x_1030_, lean_object* v_x_1031_, lean_object* v_x_1032_, lean_object* v___y_1033_){
_start:
{
size_t v_x_1465__boxed_1034_; size_t v_x_1466__boxed_1035_; lean_object* v_res_1036_; 
v_x_1465__boxed_1034_ = lean_unbox_usize(v_x_1031_);
lean_dec(v_x_1031_);
v_x_1466__boxed_1035_ = lean_unbox_usize(v_x_1032_);
lean_dec(v_x_1032_);
v_res_1036_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_1029_, v_x_1030_, v_x_1465__boxed_1034_, v_x_1466__boxed_1035_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(lean_object* v_f_1037_, lean_object* v_t_1038_, lean_object* v_start_1039_){
_start:
{
lean_object* v___x_1041_; uint8_t v___x_1042_; 
v___x_1041_ = lean_unsigned_to_nat(0u);
v___x_1042_ = lean_nat_dec_eq(v_start_1039_, v___x_1041_);
if (v___x_1042_ == 0)
{
lean_object* v_root_1043_; lean_object* v_tail_1044_; size_t v_shift_1045_; lean_object* v_tailOff_1046_; uint8_t v___x_1047_; 
v_root_1043_ = lean_ctor_get(v_t_1038_, 0);
lean_inc_ref(v_root_1043_);
v_tail_1044_ = lean_ctor_get(v_t_1038_, 1);
lean_inc_ref(v_tail_1044_);
v_shift_1045_ = lean_ctor_get_usize(v_t_1038_, 4);
v_tailOff_1046_ = lean_ctor_get(v_t_1038_, 3);
lean_inc(v_tailOff_1046_);
lean_dec_ref(v_t_1038_);
v___x_1047_ = lean_nat_dec_le(v_tailOff_1046_, v_start_1039_);
if (v___x_1047_ == 0)
{
size_t v___x_1048_; lean_object* v___x_1049_; 
lean_dec(v_tailOff_1046_);
v___x_1048_ = lean_usize_of_nat(v_start_1039_);
lean_inc_ref(v_f_1037_);
v___x_1049_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__3(v_f_1037_, v_root_1043_, v___x_1048_, v_shift_1045_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1062_; 
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1062_ == 0)
{
lean_object* v_unused_1063_; 
v_unused_1063_ = lean_ctor_get(v___x_1049_, 0);
lean_dec(v_unused_1063_);
v___x_1051_ = v___x_1049_;
v_isShared_1052_ = v_isSharedCheck_1062_;
goto v_resetjp_1050_;
}
else
{
lean_dec(v___x_1049_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1062_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; 
v___x_1053_ = lean_array_get_size(v_tail_1044_);
v___x_1054_ = lean_box(0);
v___x_1055_ = lean_nat_dec_lt(v___x_1041_, v___x_1053_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1057_; 
lean_dec_ref(v_tail_1044_);
lean_dec_ref(v_f_1037_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___x_1054_);
v___x_1057_ = v___x_1051_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1054_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
else
{
size_t v___x_1059_; size_t v___x_1060_; lean_object* v___x_1061_; 
lean_del_object(v___x_1051_);
v___x_1059_ = ((size_t)0ULL);
v___x_1060_ = lean_usize_of_nat(v___x_1053_);
v___x_1061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_1037_, v_tail_1044_, v___x_1059_, v___x_1060_, v___x_1054_);
lean_dec_ref(v_tail_1044_);
return v___x_1061_;
}
}
}
else
{
lean_dec_ref(v_tail_1044_);
lean_dec_ref(v_f_1037_);
return v___x_1049_;
}
}
else
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; 
lean_dec_ref(v_root_1043_);
v___x_1064_ = lean_nat_sub(v_start_1039_, v_tailOff_1046_);
lean_dec(v_tailOff_1046_);
v___x_1065_ = lean_array_get_size(v_tail_1044_);
v___x_1066_ = lean_box(0);
v___x_1067_ = lean_nat_dec_lt(v___x_1064_, v___x_1065_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; 
lean_dec(v___x_1064_);
lean_dec_ref(v_tail_1044_);
lean_dec_ref(v_f_1037_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1066_);
return v___x_1068_;
}
else
{
size_t v___x_1069_; size_t v___x_1070_; lean_object* v___x_1071_; 
v___x_1069_ = lean_usize_of_nat(v___x_1064_);
lean_dec(v___x_1064_);
v___x_1070_ = lean_usize_of_nat(v___x_1065_);
v___x_1071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__4(v_f_1037_, v_tail_1044_, v___x_1069_, v___x_1070_, v___x_1066_);
lean_dec_ref(v_tail_1044_);
return v___x_1071_;
}
}
}
else
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2_spec__5(v_f_1037_, v_t_1038_);
return v___x_1072_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2___boxed(lean_object* v_f_1073_, lean_object* v_t_1074_, lean_object* v_start_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(v_f_1073_, v_t_1074_, v_start_1075_);
lean_dec(v_start_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(lean_object* v_log_1078_, lean_object* v_f_1079_){
_start:
{
lean_object* v_unreported_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_unreported_1081_ = lean_ctor_get(v_log_1078_, 1);
lean_inc_ref(v_unreported_1081_);
lean_dec_ref(v_log_1078_);
v___x_1082_ = lean_unsigned_to_nat(0u);
v___x_1083_ = l_Lean_PersistentArray_forM___at___00Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1_spec__2(v_f_1079_, v_unreported_1081_, v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1___boxed(lean_object* v_log_1084_, lean_object* v_f_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(v_log_1084_, v_f_1085_);
return v_res_1087_;
}
}
static lean_object* _init_l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__1));
v___x_1091_ = lean_mk_io_user_error(v___x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(lean_object* v_env_1092_, lean_object* v_inputCtx_1093_, lean_object* v_state_1094_, lean_object* v_msgs_1095_, lean_object* v_stxs_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v_snd_1103_; lean_object* v_fst_1104_; lean_object* v_fst_1105_; lean_object* v_snd_1106_; uint8_t v___x_1107_; 
v___x_1098_ = l_Lean_Options_empty;
v___x_1099_ = lean_box(0);
v___x_1100_ = lean_box(0);
lean_inc_ref(v_env_1092_);
v___x_1101_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1101_, 0, v_env_1092_);
lean_ctor_set(v___x_1101_, 1, v___x_1098_);
lean_ctor_set(v___x_1101_, 2, v___x_1099_);
lean_ctor_set(v___x_1101_, 3, v___x_1100_);
lean_inc_ref(v_inputCtx_1093_);
v___x_1102_ = l_Lean_Parser_parseCommand(v_inputCtx_1093_, v___x_1101_, v_state_1094_, v_msgs_1095_);
v_snd_1103_ = lean_ctor_get(v___x_1102_, 1);
lean_inc(v_snd_1103_);
v_fst_1104_ = lean_ctor_get(v___x_1102_, 0);
lean_inc_n(v_fst_1104_, 2);
lean_dec_ref(v___x_1102_);
v_fst_1105_ = lean_ctor_get(v_snd_1103_, 0);
lean_inc(v_fst_1105_);
v_snd_1106_ = lean_ctor_get(v_snd_1103_, 1);
lean_inc(v_snd_1106_);
lean_dec(v_snd_1103_);
v___x_1107_ = l_Lean_Parser_isTerminalCommand(v_fst_1104_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_array_push(v_stxs_1096_, v_fst_1104_);
v_state_1094_ = v_fst_1105_;
v_msgs_1095_ = v_snd_1106_;
v_stxs_1096_ = v___x_1108_;
goto _start;
}
else
{
uint8_t v___x_1110_; 
lean_dec(v_fst_1105_);
lean_dec_ref(v_inputCtx_1093_);
lean_dec_ref(v_env_1092_);
v___x_1110_ = l_Lean_MessageLog_hasUnreported(v_snd_1106_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
lean_dec(v_snd_1106_);
v___x_1111_ = lean_array_push(v_stxs_1096_, v_fst_1104_);
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
else
{
lean_object* v___f_1113_; lean_object* v___x_1114_; 
lean_dec(v_fst_1104_);
lean_dec_ref(v_stxs_1096_);
v___f_1113_ = ((lean_object*)(l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__0));
v___x_1114_ = l_Lean_MessageLog_forM___at___00__private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse_spec__1(v_snd_1106_, v___f_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1122_; 
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1122_ == 0)
{
lean_object* v_unused_1123_; 
v_unused_1123_ = lean_ctor_get(v___x_1114_, 0);
lean_dec(v_unused_1123_);
v___x_1116_ = v___x_1114_;
v_isShared_1117_ = v_isSharedCheck_1122_;
goto v_resetjp_1115_;
}
else
{
lean_dec(v___x_1114_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1122_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v___x_1120_; 
v___x_1118_ = lean_obj_once(&l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2, &l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2_once, _init_l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___closed__2);
if (v_isShared_1117_ == 0)
{
lean_ctor_set_tag(v___x_1116_, 1);
lean_ctor_set(v___x_1116_, 0, v___x_1118_);
v___x_1120_ = v___x_1116_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v___x_1118_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
v_a_1124_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1114_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1114_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse___boxed(lean_object* v_env_1132_, lean_object* v_inputCtx_1133_, lean_object* v_state_1134_, lean_object* v_msgs_1135_, lean_object* v_stxs_1136_, lean_object* v_a_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1132_, v_inputCtx_1133_, v_state_1134_, v_msgs_1135_, v_stxs_1136_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux(lean_object* v_env_1139_, lean_object* v_inputCtx_1140_, lean_object* v_s_1141_, lean_object* v_msgs_1142_, lean_object* v_stxs_1143_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1139_, v_inputCtx_1140_, v_s_1141_, v_msgs_1142_, v_stxs_1143_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModuleAux___boxed(lean_object* v_env_1146_, lean_object* v_inputCtx_1147_, lean_object* v_s_1148_, lean_object* v_msgs_1149_, lean_object* v_stxs_1150_, lean_object* v_a_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_Lean_Parser_testParseModuleAux(v_env_1146_, v_inputCtx_1147_, v_s_1148_, v_msgs_1149_, v_stxs_1150_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule(lean_object* v_env_1161_, lean_object* v_fname_1162_, lean_object* v_contents_1163_){
_start:
{
uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v_inputCtx_1167_; lean_object* v___x_1168_; 
v___x_1165_ = 1;
v___x_1166_ = lean_string_utf8_byte_size(v_contents_1163_);
v_inputCtx_1167_ = l_Lean_Parser_mkInputContext___redArg(v_contents_1163_, v_fname_1162_, v___x_1165_, v___x_1166_);
lean_inc_ref(v_inputCtx_1167_);
v___x_1168_ = l_Lean_Parser_parseHeader(v_inputCtx_1167_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v_snd_1170_; lean_object* v_fst_1171_; lean_object* v_fst_1172_; lean_object* v_snd_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1169_);
lean_dec_ref_known(v___x_1168_, 1);
v_snd_1170_ = lean_ctor_get(v_a_1169_, 1);
lean_inc(v_snd_1170_);
v_fst_1171_ = lean_ctor_get(v_a_1169_, 0);
lean_inc(v_fst_1171_);
lean_dec(v_a_1169_);
v_fst_1172_ = lean_ctor_get(v_snd_1170_, 0);
lean_inc(v_fst_1172_);
v_snd_1173_ = lean_ctor_get(v_snd_1170_, 1);
lean_inc(v_snd_1173_);
lean_dec(v_snd_1170_);
v___x_1174_ = ((lean_object*)(l_Lean_Parser_testParseModule___closed__0));
v___x_1175_ = l___private_Lean_Parser_Module_0__Lean_Parser_testParseModuleAux_parse(v_env_1161_, v_inputCtx_1167_, v_fst_1172_, v_snd_1173_, v___x_1174_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1191_; 
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1191_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1191_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v___x_1180_ = ((lean_object*)(l_Lean_Parser_testParseModule___closed__2));
v___x_1181_ = l_Lean_mkListNode(v_a_1176_);
v___x_1182_ = lean_unsigned_to_nat(2u);
v___x_1183_ = lean_mk_empty_array_with_capacity(v___x_1182_);
v___x_1184_ = lean_array_push(v___x_1183_, v_fst_1171_);
v___x_1185_ = lean_array_push(v___x_1184_, v___x_1181_);
v___x_1186_ = lean_box(2);
v___x_1187_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v___x_1180_);
lean_ctor_set(v___x_1187_, 2, v___x_1185_);
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 0, v___x_1187_);
v___x_1189_ = v___x_1178_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1187_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec(v_fst_1171_);
v_a_1192_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1175_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1175_);
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
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref(v_inputCtx_1167_);
lean_dec_ref(v_env_1161_);
v_a_1200_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1168_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1168_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseModule___boxed(lean_object* v_env_1208_, lean_object* v_fname_1209_, lean_object* v_contents_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Lean_Parser_testParseModule(v_env_1208_, v_fname_1209_, v_contents_1210_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile(lean_object* v_env_1213_, lean_object* v_fname_1214_){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = l_IO_FS_readFile(v_fname_1214_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1218_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1216_, 1);
v___x_1218_ = l_Lean_Parser_testParseModule(v_env_1213_, v_fname_1214_, v_a_1217_);
return v___x_1218_;
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref(v_fname_1214_);
lean_dec_ref(v_env_1213_);
v_a_1219_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1216_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1216_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_testParseFile___boxed(lean_object* v_env_1227_, lean_object* v_fname_1228_, lean_object* v_a_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Lean_Parser_testParseFile(v_env_1227_, v_fname_1228_);
return v_res_1230_;
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
