// Lean compiler output
// Module: Lean.Elab.ParseImportsFast
// Imports: public import Lean.Parser.Module
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
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_isLetterLike(uint32_t);
extern uint32_t l_Lean_idBeginEscape;
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_Lean_isSubScriptAlnum(uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern uint32_t l_Lean_idEndEscape;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instToJsonModuleHeader_toJson(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_String_toFileMap(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
static const lean_array_object l_Lean_ParseImports_instInhabitedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParseImports_instInhabitedState_default___closed__0 = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_instInhabitedState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_ParseImports_instInhabitedState_default___closed__1 = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instInhabitedState_default = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instInhabitedState = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParseImports_instInhabitedParser_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParseImports_skip___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instInhabitedParser = (const lean_object*)&l_Lean_ParseImports_instInhabitedParser_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_setPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkError(lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_State_mkEOIError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected end of input"};
static const lean_object* l_Lean_ParseImports_State_mkEOIError___closed__0 = (const lean_object*)&l_Lean_ParseImports_State_mkEOIError___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_State_mkEOIError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParseImports_State_mkEOIError___closed__0_value)}};
static const lean_object* l_Lean_ParseImports_State_mkEOIError___closed__1 = (const lean_object*)&l_Lean_ParseImports_State_mkEOIError___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkEOIError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_clearError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unterminated comment"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_takeWhile___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_andthen(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_instAndThenParser___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParseImports_instAndThenParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParseImports_instAndThenParser___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParseImports_instAndThenParser___closed__0 = (const lean_object*)&l_Lean_ParseImports_instAndThenParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instAndThenParser = (const lean_object*)&l_Lean_ParseImports_instAndThenParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_whitespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "tabs are not allowed; please configure your editor to expand them"};
static const lean_object* l_Lean_ParseImports_whitespace___closed__0 = (const lean_object*)&l_Lean_ParseImports_whitespace___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_whitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParseImports_whitespace___closed__0_value)}};
static const lean_object* l_Lean_ParseImports_whitespace___closed__1 = (const lean_object*)&l_Lean_ParseImports_whitespace___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_keyword___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_ParseImports_keyword___lam__0___closed__0 = (const lean_object*)&l_Lean_ParseImports_keyword___lam__0___closed__0_value;
static const lean_string_object l_Lean_ParseImports_keyword___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` expected"};
static const lean_object* l_Lean_ParseImports_keyword___lam__0___closed__1 = (const lean_object*)&l_Lean_ParseImports_keyword___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdCont(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdCont___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_pushImport(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestCold(uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestCold___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestFast(uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestFast___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1_value;
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unterminated identifier escape"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParseImports_moduleIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParseImports_moduleIdent___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParseImports_moduleIdent___closed__0 = (const lean_object*)&l_Lean_ParseImports_moduleIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_atomic(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_manyImports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "cannot use 'public', 'meta', or 'all' without 'module'"};
static const lean_object* l_Lean_ParseImports_manyImports___closed__0 = (const lean_object*)&l_Lean_ParseImports_manyImports___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_manyImports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParseImports_manyImports___closed__0_value)}};
static const lean_object* l_Lean_ParseImports_manyImports___closed__1 = (const lean_object*)&l_Lean_ParseImports_manyImports___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Init"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 102, 12, 179, 200, 220, 30, 26)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "`import` expected"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0_value;
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1_value;
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2_value;
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_ParseImports_main___closed__0 = (const lean_object*)&l_Lean_ParseImports_main___closed__0_value;
static const lean_string_object l_Lean_ParseImports_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_ParseImports_main___closed__1 = (const lean_object*)&l_Lean_ParseImports_main___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_main(lean_object*, lean_object*);
static const lean_string_object l_Lean_parseImports_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_parseImports_x27___closed__0 = (const lean_object*)&l_Lean_parseImports_x27___closed__0_value;
static const lean_string_object l_Lean_parseImports_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_parseImports_x27___closed__1 = (const lean_object*)&l_Lean_parseImports_x27___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_parseImports_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseImports_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(lean_object*);
static const lean_string_object l_Lean_instToJsonPrintImportResult_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "result"};
static const lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportResult_toJson___closed__0_value;
static const lean_string_object l_Lean_instToJsonPrintImportResult_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "errors"};
static const lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__1 = (const lean_object*)&l_Lean_instToJsonPrintImportResult_toJson___closed__1_value;
static const lean_array_object l_Lean_instToJsonPrintImportResult_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__2 = (const lean_object*)&l_Lean_instToJsonPrintImportResult_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportResult_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonPrintImportResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPrintImportResult_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonPrintImportResult___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonPrintImportResult = (const lean_object*)&l_Lean_instToJsonPrintImportResult___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(lean_object*);
static const lean_string_object l_Lean_instToJsonPrintImportsResult_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "imports"};
static const lean_object* l_Lean_instToJsonPrintImportsResult_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportsResult_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportsResult_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonPrintImportsResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPrintImportsResult_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonPrintImportsResult___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportsResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonPrintImportsResult = (const lean_object*)&l_Lean_instToJsonPrintImportsResult___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printImportsJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_printImportsJson___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg(lean_object* v_s_10_){
_start:
{
lean_inc_ref(v_s_10_);
return v_s_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg___boxed(lean_object* v_s_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_ParseImports_skip___redArg(v_s_11_);
lean_dec_ref(v_s_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip(lean_object* v_x_13_, lean_object* v_s_14_){
_start:
{
lean_inc_ref(v_s_14_);
return v_s_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___boxed(lean_object* v_x_15_, lean_object* v_s_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_ParseImports_skip(v_x_15_, v_s_16_);
lean_dec_ref(v_s_16_);
lean_dec_ref(v_x_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_setPos(lean_object* v_s_19_, lean_object* v_pos_20_){
_start:
{
lean_object* v_imports_21_; uint8_t v_badModifier_22_; lean_object* v_error_x3f_23_; uint8_t v_isModule_24_; uint8_t v_isMeta_25_; uint8_t v_isExported_26_; uint8_t v_importAll_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_34_; 
v_imports_21_ = lean_ctor_get(v_s_19_, 0);
v_badModifier_22_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3);
v_error_x3f_23_ = lean_ctor_get(v_s_19_, 2);
v_isModule_24_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 1);
v_isMeta_25_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 2);
v_isExported_26_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 3);
v_importAll_27_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 4);
v_isSharedCheck_34_ = !lean_is_exclusive(v_s_19_);
if (v_isSharedCheck_34_ == 0)
{
lean_object* v_unused_35_; 
v_unused_35_ = lean_ctor_get(v_s_19_, 1);
lean_dec(v_unused_35_);
v___x_29_ = v_s_19_;
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_error_x3f_23_);
lean_inc(v_imports_21_);
lean_dec(v_s_19_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___x_32_; 
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 1, v_pos_20_);
v___x_32_ = v___x_29_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_imports_21_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v_pos_20_);
lean_ctor_set(v_reuseFailAlloc_33_, 2, v_error_x3f_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3, v_badModifier_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 1, v_isModule_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 2, v_isMeta_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 3, v_isExported_26_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 4, v_importAll_27_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkError(lean_object* v_s_36_, lean_object* v_msg_37_){
_start:
{
lean_object* v_imports_38_; lean_object* v_pos_39_; uint8_t v_badModifier_40_; uint8_t v_isModule_41_; uint8_t v_isMeta_42_; uint8_t v_isExported_43_; uint8_t v_importAll_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_imports_38_ = lean_ctor_get(v_s_36_, 0);
v_pos_39_ = lean_ctor_get(v_s_36_, 1);
v_badModifier_40_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3);
v_isModule_41_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 1);
v_isMeta_42_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 2);
v_isExported_43_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 3);
v_importAll_44_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 4);
v_isSharedCheck_52_ = !lean_is_exclusive(v_s_36_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v_s_36_, 2);
lean_dec(v_unused_53_);
v___x_46_ = v_s_36_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_pos_39_);
lean_inc(v_imports_38_);
lean_dec(v_s_36_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_48_, 0, v_msg_37_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 2, v___x_48_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_imports_38_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_pos_39_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v___x_48_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3, v_badModifier_40_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 1, v_isModule_41_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 2, v_isMeta_42_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 3, v_isExported_43_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 4, v_importAll_44_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkEOIError(lean_object* v_s_57_){
_start:
{
lean_object* v_imports_58_; lean_object* v_pos_59_; uint8_t v_badModifier_60_; uint8_t v_isModule_61_; uint8_t v_isMeta_62_; uint8_t v_isExported_63_; uint8_t v_importAll_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_72_; 
v_imports_58_ = lean_ctor_get(v_s_57_, 0);
v_pos_59_ = lean_ctor_get(v_s_57_, 1);
v_badModifier_60_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3);
v_isModule_61_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 1);
v_isMeta_62_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 2);
v_isExported_63_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 3);
v_importAll_64_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 4);
v_isSharedCheck_72_ = !lean_is_exclusive(v_s_57_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; 
v_unused_73_ = lean_ctor_get(v_s_57_, 2);
lean_dec(v_unused_73_);
v___x_66_ = v_s_57_;
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_pos_59_);
lean_inc(v_imports_58_);
lean_dec(v_s_57_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = ((lean_object*)(l_Lean_ParseImports_State_mkEOIError___closed__1));
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 2, v___x_68_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_imports_58_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_pos_59_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v___x_68_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3, v_badModifier_60_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 1, v_isModule_61_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 2, v_isMeta_62_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 3, v_isExported_63_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 4, v_importAll_64_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_clearError(lean_object* v_s_74_){
_start:
{
lean_object* v_imports_75_; lean_object* v_pos_76_; uint8_t v_isModule_77_; uint8_t v_isMeta_78_; uint8_t v_isExported_79_; uint8_t v_importAll_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_89_; 
v_imports_75_ = lean_ctor_get(v_s_74_, 0);
v_pos_76_ = lean_ctor_get(v_s_74_, 1);
v_isModule_77_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 1);
v_isMeta_78_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 2);
v_isExported_79_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 3);
v_importAll_80_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 4);
v_isSharedCheck_89_ = !lean_is_exclusive(v_s_74_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v_s_74_, 2);
lean_dec(v_unused_90_);
v___x_82_ = v_s_74_;
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_pos_76_);
lean_inc(v_imports_75_);
lean_dec(v_s_74_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_84_ = 0;
v___x_85_ = lean_box(0);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 2, v___x_85_);
v___x_87_ = v___x_82_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_imports_75_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_pos_76_);
lean_ctor_set(v_reuseFailAlloc_88_, 2, v___x_85_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 1, v_isModule_77_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 2, v_isMeta_78_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 3, v_isExported_79_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 4, v_importAll_80_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*3, v___x_84_);
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next(lean_object* v_s_91_, lean_object* v_input_92_, lean_object* v_pos_93_){
_start:
{
lean_object* v_imports_94_; uint8_t v_badModifier_95_; lean_object* v_error_x3f_96_; uint8_t v_isModule_97_; uint8_t v_isMeta_98_; uint8_t v_isExported_99_; uint8_t v_importAll_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_108_; 
v_imports_94_ = lean_ctor_get(v_s_91_, 0);
v_badModifier_95_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3);
v_error_x3f_96_ = lean_ctor_get(v_s_91_, 2);
v_isModule_97_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 1);
v_isMeta_98_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 2);
v_isExported_99_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 3);
v_importAll_100_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 4);
v_isSharedCheck_108_ = !lean_is_exclusive(v_s_91_);
if (v_isSharedCheck_108_ == 0)
{
lean_object* v_unused_109_; 
v_unused_109_ = lean_ctor_get(v_s_91_, 1);
lean_dec(v_unused_109_);
v___x_102_ = v_s_91_;
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_error_x3f_96_);
lean_inc(v_imports_94_);
lean_dec(v_s_91_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_104_ = lean_string_utf8_next(v_input_92_, v_pos_93_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_104_);
v___x_106_ = v___x_102_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_imports_94_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_error_x3f_96_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3, v_badModifier_95_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 1, v_isModule_97_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 2, v_isMeta_98_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 3, v_isExported_99_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 4, v_importAll_100_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next___boxed(lean_object* v_s_110_, lean_object* v_input_111_, lean_object* v_pos_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_ParseImports_State_next(v_s_110_, v_input_111_, v_pos_112_);
lean_dec(v_pos_112_);
lean_dec_ref(v_input_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg(lean_object* v_s_114_, lean_object* v_input_115_, lean_object* v_pos_116_){
_start:
{
lean_object* v_imports_117_; uint8_t v_badModifier_118_; lean_object* v_error_x3f_119_; uint8_t v_isModule_120_; uint8_t v_isMeta_121_; uint8_t v_isExported_122_; uint8_t v_importAll_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_131_; 
v_imports_117_ = lean_ctor_get(v_s_114_, 0);
v_badModifier_118_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3);
v_error_x3f_119_ = lean_ctor_get(v_s_114_, 2);
v_isModule_120_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 1);
v_isMeta_121_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 2);
v_isExported_122_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 3);
v_importAll_123_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 4);
v_isSharedCheck_131_ = !lean_is_exclusive(v_s_114_);
if (v_isSharedCheck_131_ == 0)
{
lean_object* v_unused_132_; 
v_unused_132_ = lean_ctor_get(v_s_114_, 1);
lean_dec(v_unused_132_);
v___x_125_ = v_s_114_;
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_error_x3f_119_);
lean_inc(v_imports_117_);
lean_dec(v_s_114_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_string_utf8_next_fast(v_input_115_, v_pos_116_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_imports_117_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_130_, 2, v_error_x3f_119_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3, v_badModifier_118_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 1, v_isModule_120_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 2, v_isMeta_121_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 3, v_isExported_122_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 4, v_importAll_123_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg___boxed(lean_object* v_s_133_, lean_object* v_input_134_, lean_object* v_pos_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_ParseImports_State_next_x27___redArg(v_s_133_, v_input_134_, v_pos_135_);
lean_dec(v_pos_135_);
lean_dec_ref(v_input_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27(lean_object* v_s_137_, lean_object* v_input_138_, lean_object* v_pos_139_, lean_object* v_h_140_){
_start:
{
lean_object* v_imports_141_; uint8_t v_badModifier_142_; lean_object* v_error_x3f_143_; uint8_t v_isModule_144_; uint8_t v_isMeta_145_; uint8_t v_isExported_146_; uint8_t v_importAll_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_imports_141_ = lean_ctor_get(v_s_137_, 0);
v_badModifier_142_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3);
v_error_x3f_143_ = lean_ctor_get(v_s_137_, 2);
v_isModule_144_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 1);
v_isMeta_145_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 2);
v_isExported_146_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 3);
v_importAll_147_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 4);
v_isSharedCheck_155_ = !lean_is_exclusive(v_s_137_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v_s_137_, 1);
lean_dec(v_unused_156_);
v___x_149_ = v_s_137_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_error_x3f_143_);
lean_inc(v_imports_141_);
lean_dec(v_s_137_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_string_utf8_next_fast(v_input_138_, v_pos_139_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_imports_141_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v_error_x3f_143_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3, v_badModifier_142_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 1, v_isModule_144_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 2, v_isMeta_145_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 3, v_isExported_146_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 4, v_importAll_147_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___boxed(lean_object* v_s_157_, lean_object* v_input_158_, lean_object* v_pos_159_, lean_object* v_h_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_ParseImports_State_next_x27(v_s_157_, v_input_158_, v_pos_159_, v_h_160_);
lean_dec(v_pos_159_);
lean_dec_ref(v_input_158_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(lean_object* v_s_165_){
_start:
{
lean_object* v_imports_166_; lean_object* v_pos_167_; uint8_t v_badModifier_168_; uint8_t v_isModule_169_; uint8_t v_isMeta_170_; uint8_t v_isExported_171_; uint8_t v_importAll_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_180_; 
v_imports_166_ = lean_ctor_get(v_s_165_, 0);
v_pos_167_ = lean_ctor_get(v_s_165_, 1);
v_badModifier_168_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3);
v_isModule_169_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 1);
v_isMeta_170_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 2);
v_isExported_171_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 3);
v_importAll_172_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 4);
v_isSharedCheck_180_ = !lean_is_exclusive(v_s_165_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; 
v_unused_181_ = lean_ctor_get(v_s_165_, 2);
lean_dec(v_unused_181_);
v___x_174_ = v_s_165_;
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_pos_167_);
lean_inc(v_imports_166_);
lean_dec(v_s_165_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1));
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 2, v___x_176_);
v___x_178_ = v___x_174_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_imports_166_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_pos_167_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v___x_176_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3, v_badModifier_168_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 1, v_isModule_169_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 2, v_isMeta_170_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 3, v_isExported_171_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 4, v_importAll_172_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock(lean_object* v_nesting_182_, lean_object* v_input_183_, lean_object* v_s_184_){
_start:
{
lean_object* v_imports_185_; lean_object* v_pos_186_; uint8_t v_badModifier_187_; lean_object* v_error_x3f_188_; uint8_t v_isModule_189_; uint8_t v_isMeta_190_; uint8_t v_isExported_191_; uint8_t v_importAll_192_; uint8_t v___x_193_; 
v_imports_185_ = lean_ctor_get(v_s_184_, 0);
v_pos_186_ = lean_ctor_get(v_s_184_, 1);
v_badModifier_187_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3);
v_error_x3f_188_ = lean_ctor_get(v_s_184_, 2);
v_isModule_189_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 1);
v_isMeta_190_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 2);
v_isExported_191_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 3);
v_importAll_192_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 4);
v___x_193_ = lean_string_utf8_at_end(v_input_183_, v_pos_186_);
if (v___x_193_ == 0)
{
uint32_t v_curr_194_; lean_object* v_i_195_; uint32_t v___x_196_; uint8_t v___x_197_; 
v_curr_194_ = lean_string_utf8_get_fast(v_input_183_, v_pos_186_);
v_i_195_ = lean_string_utf8_next_fast(v_input_183_, v_pos_186_);
v___x_196_ = 45;
v___x_197_ = lean_uint32_dec_eq(v_curr_194_, v___x_196_);
if (v___x_197_ == 0)
{
uint32_t v___x_198_; uint8_t v___x_199_; 
v___x_198_ = 47;
v___x_199_ = lean_uint32_dec_eq(v_curr_194_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_207_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_207_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; lean_object* v_unused_209_; lean_object* v_unused_210_; 
v_unused_208_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_208_);
v_unused_209_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_209_);
v_unused_210_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_210_);
v___x_201_ = v_s_184_;
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_s_184_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v_i_195_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_206_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_204_ = v_reuseFailAlloc_206_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
v_s_184_ = v___x_204_;
goto _start;
}
}
}
else
{
uint8_t v___x_211_; 
v___x_211_ = lean_string_utf8_at_end(v_input_183_, v_i_195_);
if (v___x_211_ == 0)
{
lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_228_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_228_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_229_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_231_);
v___x_213_ = v_s_184_;
v_isShared_214_ = v_isSharedCheck_228_;
goto v_resetjp_212_;
}
else
{
lean_dec(v_s_184_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_228_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
uint32_t v_curr_215_; uint8_t v___x_216_; 
v_curr_215_ = lean_string_utf8_get_fast(v_input_183_, v_i_195_);
v___x_216_ = lean_uint32_dec_eq(v_curr_215_, v___x_196_);
if (v___x_216_ == 0)
{
lean_object* v___x_218_; 
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v_i_195_);
v___x_218_ = v___x_213_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_220_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_218_ = v_reuseFailAlloc_220_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v_s_184_ = v___x_218_;
goto _start;
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_add(v_nesting_182_, v___x_221_);
lean_dec(v_nesting_182_);
v___x_223_ = lean_string_utf8_next_fast(v_input_183_, v_i_195_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___x_223_);
v___x_225_ = v___x_213_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_227_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_225_ = v_reuseFailAlloc_227_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
v_nesting_182_ = v___x_222_;
v_s_184_ = v___x_225_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_232_; 
lean_dec(v_nesting_182_);
v___x_232_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_232_;
}
}
}
else
{
uint8_t v___x_233_; 
v___x_233_ = lean_string_utf8_at_end(v_input_183_, v_i_195_);
if (v___x_233_ == 0)
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_256_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_256_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_256_ == 0)
{
lean_object* v_unused_257_; lean_object* v_unused_258_; lean_object* v_unused_259_; 
v_unused_257_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_257_);
v_unused_258_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_258_);
v_unused_259_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_259_);
v___x_235_ = v_s_184_;
v_isShared_236_ = v_isSharedCheck_256_;
goto v_resetjp_234_;
}
else
{
lean_dec(v_s_184_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_256_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
uint32_t v_curr_237_; uint32_t v___x_238_; uint8_t v___x_239_; 
v_curr_237_ = lean_string_utf8_get_fast(v_input_183_, v_i_195_);
v___x_238_ = 47;
v___x_239_ = lean_uint32_dec_eq(v_curr_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_241_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v_i_195_);
v___x_241_ = v___x_235_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_243_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_241_ = v_reuseFailAlloc_243_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
v_s_184_ = v___x_241_;
goto _start;
}
}
else
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(1u);
v___x_245_ = lean_nat_dec_eq(v_nesting_182_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_246_ = lean_nat_sub(v_nesting_182_, v___x_244_);
lean_dec(v_nesting_182_);
v___x_247_ = lean_string_utf8_next_fast(v_input_183_, v_i_195_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_247_);
v___x_249_ = v___x_235_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v___x_247_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_249_ = v_reuseFailAlloc_251_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
v_nesting_182_ = v___x_246_;
v_s_184_ = v___x_249_;
goto _start;
}
}
else
{
lean_object* v___x_252_; lean_object* v___x_254_; 
lean_dec(v_nesting_182_);
v___x_252_ = lean_string_utf8_next(v_input_183_, v_i_195_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_252_);
v___x_254_ = v___x_235_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_255_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
else
{
lean_object* v___x_260_; 
lean_dec(v_nesting_182_);
v___x_260_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_260_;
}
}
}
else
{
lean_object* v___x_261_; 
lean_dec(v_nesting_182_);
v___x_261_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock___boxed(lean_object* v_nesting_262_, lean_object* v_input_263_, lean_object* v_s_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_ParseImports_finishCommentBlock(v_nesting_262_, v_input_263_, v_s_264_);
lean_dec_ref(v_input_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil(lean_object* v_p_266_, lean_object* v_input_267_, lean_object* v_s_268_){
_start:
{
lean_object* v_imports_269_; lean_object* v_pos_270_; uint8_t v_badModifier_271_; lean_object* v_error_x3f_272_; uint8_t v_isModule_273_; uint8_t v_isMeta_274_; uint8_t v_isExported_275_; uint8_t v_importAll_276_; uint8_t v___x_277_; 
v_imports_269_ = lean_ctor_get(v_s_268_, 0);
v_pos_270_ = lean_ctor_get(v_s_268_, 1);
v_badModifier_271_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3);
v_error_x3f_272_ = lean_ctor_get(v_s_268_, 2);
v_isModule_273_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 1);
v_isMeta_274_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 2);
v_isExported_275_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 3);
v_importAll_276_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 4);
v___x_277_ = lean_string_utf8_at_end(v_input_267_, v_pos_270_);
if (v___x_277_ == 0)
{
uint32_t v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_278_ = lean_string_utf8_get_fast(v_input_267_, v_pos_270_);
v___x_279_ = lean_box_uint32(v___x_278_);
lean_inc_ref(v_p_266_);
v___x_280_ = lean_apply_1(v_p_266_, v___x_279_);
v___x_281_ = lean_unbox(v___x_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_290_; 
lean_inc(v_error_x3f_272_);
lean_inc(v_pos_270_);
lean_inc_ref(v_imports_269_);
v_isSharedCheck_290_ = !lean_is_exclusive(v_s_268_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; lean_object* v_unused_292_; lean_object* v_unused_293_; 
v_unused_291_ = lean_ctor_get(v_s_268_, 2);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_s_268_, 1);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_s_268_, 0);
lean_dec(v_unused_293_);
v___x_283_ = v_s_268_;
v_isShared_284_ = v_isSharedCheck_290_;
goto v_resetjp_282_;
}
else
{
lean_dec(v_s_268_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_290_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_285_ = lean_string_utf8_next_fast(v_input_267_, v_pos_270_);
lean_dec(v_pos_270_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_285_);
v___x_287_ = v___x_283_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_imports_269_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_error_x3f_272_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3, v_badModifier_271_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 1, v_isModule_273_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 2, v_isMeta_274_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 3, v_isExported_275_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 4, v_importAll_276_);
v___x_287_ = v_reuseFailAlloc_289_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
v_s_268_ = v___x_287_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_p_266_);
return v_s_268_;
}
}
else
{
lean_dec_ref(v_p_266_);
return v_s_268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___boxed(lean_object* v_p_294_, lean_object* v_input_295_, lean_object* v_s_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_ParseImports_takeUntil(v_p_294_, v_input_295_, v_s_296_);
lean_dec_ref(v_input_295_);
return v_res_297_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_takeWhile___lam__0(lean_object* v_p_298_, uint32_t v_c_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_300_ = lean_box_uint32(v_c_299_);
v___x_301_ = lean_apply_1(v_p_298_, v___x_300_);
v___x_302_ = lean_unbox(v___x_301_);
if (v___x_302_ == 0)
{
uint8_t v___x_303_; 
v___x_303_ = 1;
return v___x_303_;
}
else
{
uint8_t v___x_304_; 
v___x_304_ = 0;
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___lam__0___boxed(lean_object* v_p_305_, lean_object* v_c_306_){
_start:
{
uint32_t v_c_boxed_307_; uint8_t v_res_308_; lean_object* v_r_309_; 
v_c_boxed_307_ = lean_unbox_uint32(v_c_306_);
lean_dec(v_c_306_);
v_res_308_ = l_Lean_ParseImports_takeWhile___lam__0(v_p_305_, v_c_boxed_307_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile(lean_object* v_p_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___f_313_; lean_object* v___x_314_; 
v___f_313_ = lean_alloc_closure((void*)(l_Lean_ParseImports_takeWhile___lam__0___boxed), 2, 1);
lean_closure_set(v___f_313_, 0, v_p_310_);
v___x_314_ = l_Lean_ParseImports_takeUntil(v___f_313_, v_a_311_, v_a_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___boxed(lean_object* v_p_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_ParseImports_takeWhile(v_p_315_, v_a_316_, v_a_317_);
lean_dec_ref(v_a_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_andthen(lean_object* v_p_319_, lean_object* v_q_320_, lean_object* v_input_321_, lean_object* v_s_322_){
_start:
{
lean_object* v_s_323_; lean_object* v_error_x3f_324_; 
lean_inc_ref(v_input_321_);
v_s_323_ = lean_apply_2(v_p_319_, v_input_321_, v_s_322_);
v_error_x3f_324_ = lean_ctor_get(v_s_323_, 2);
lean_inc(v_error_x3f_324_);
if (lean_obj_tag(v_error_x3f_324_) == 1)
{
lean_dec_ref_known(v_error_x3f_324_, 1);
lean_dec_ref(v_input_321_);
lean_dec_ref(v_q_320_);
return v_s_323_;
}
else
{
lean_object* v___x_325_; 
lean_dec(v_error_x3f_324_);
v___x_325_ = lean_apply_2(v_q_320_, v_input_321_, v_s_323_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_instAndThenParser___lam__0(lean_object* v_p_326_, lean_object* v_q_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_s_330_; lean_object* v_error_x3f_331_; 
lean_inc_ref(v___y_328_);
v_s_330_ = lean_apply_2(v_p_326_, v___y_328_, v___y_329_);
v_error_x3f_331_ = lean_ctor_get(v_s_330_, 2);
lean_inc(v_error_x3f_331_);
if (lean_obj_tag(v_error_x3f_331_) == 1)
{
lean_dec_ref_known(v_error_x3f_331_, 1);
lean_dec_ref(v___y_328_);
lean_dec_ref(v_q_327_);
return v_s_330_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec(v_error_x3f_331_);
v___x_332_ = lean_box(0);
v___x_333_ = lean_apply_3(v_q_327_, v___x_332_, v___y_328_, v_s_330_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(lean_object* v_input_336_, lean_object* v_s_337_){
_start:
{
lean_object* v_imports_338_; lean_object* v_pos_339_; uint8_t v_badModifier_340_; lean_object* v_error_x3f_341_; uint8_t v_isModule_342_; uint8_t v_isMeta_343_; uint8_t v_isExported_344_; uint8_t v_importAll_345_; uint8_t v___x_346_; 
v_imports_338_ = lean_ctor_get(v_s_337_, 0);
v_pos_339_ = lean_ctor_get(v_s_337_, 1);
v_badModifier_340_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3);
v_error_x3f_341_ = lean_ctor_get(v_s_337_, 2);
v_isModule_342_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 1);
v_isMeta_343_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 2);
v_isExported_344_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 3);
v_importAll_345_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 4);
v___x_346_ = lean_string_utf8_at_end(v_input_336_, v_pos_339_);
if (v___x_346_ == 0)
{
uint32_t v___x_347_; uint32_t v___x_348_; uint8_t v___x_349_; 
v___x_347_ = lean_string_utf8_get_fast(v_input_336_, v_pos_339_);
v___x_348_ = 10;
v___x_349_ = lean_uint32_dec_eq(v___x_347_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_358_; 
lean_inc(v_error_x3f_341_);
lean_inc(v_pos_339_);
lean_inc_ref(v_imports_338_);
v_isSharedCheck_358_ = !lean_is_exclusive(v_s_337_);
if (v_isSharedCheck_358_ == 0)
{
lean_object* v_unused_359_; lean_object* v_unused_360_; lean_object* v_unused_361_; 
v_unused_359_ = lean_ctor_get(v_s_337_, 2);
lean_dec(v_unused_359_);
v_unused_360_ = lean_ctor_get(v_s_337_, 1);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_s_337_, 0);
lean_dec(v_unused_361_);
v___x_351_ = v_s_337_;
v_isShared_352_ = v_isSharedCheck_358_;
goto v_resetjp_350_;
}
else
{
lean_dec(v_s_337_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_358_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = lean_string_utf8_next_fast(v_input_336_, v_pos_339_);
lean_dec(v_pos_339_);
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 1, v___x_353_);
v___x_355_ = v___x_351_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_imports_338_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_357_, 2, v_error_x3f_341_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3, v_badModifier_340_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 1, v_isModule_342_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 2, v_isMeta_343_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 3, v_isExported_344_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 4, v_importAll_345_);
v___x_355_ = v_reuseFailAlloc_357_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
v_s_337_ = v___x_355_;
goto _start;
}
}
}
else
{
return v_s_337_;
}
}
else
{
return v_s_337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0___boxed(lean_object* v_input_362_, lean_object* v_s_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(v_input_362_, v_s_363_);
lean_dec_ref(v_input_362_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace(lean_object* v_input_368_, lean_object* v_s_369_){
_start:
{
lean_object* v_imports_370_; lean_object* v_pos_371_; uint8_t v_badModifier_372_; lean_object* v_error_x3f_373_; uint8_t v_isModule_374_; uint8_t v_isMeta_375_; uint8_t v_isExported_376_; uint8_t v_importAll_377_; uint8_t v___x_382_; 
v_imports_370_ = lean_ctor_get(v_s_369_, 0);
v_pos_371_ = lean_ctor_get(v_s_369_, 1);
v_badModifier_372_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3);
v_error_x3f_373_ = lean_ctor_get(v_s_369_, 2);
v_isModule_374_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 1);
v_isMeta_375_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 2);
v_isExported_376_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 3);
v_importAll_377_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 4);
v___x_382_ = lean_string_utf8_at_end(v_input_368_, v_pos_371_);
if (v___x_382_ == 0)
{
uint32_t v_curr_383_; uint32_t v___x_384_; uint8_t v___x_385_; 
v_curr_383_ = lean_string_utf8_get_fast(v_input_368_, v_pos_371_);
v___x_384_ = 9;
v___x_385_ = lean_uint32_dec_eq(v_curr_383_, v___x_384_);
if (v___x_385_ == 0)
{
uint32_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 32;
v___x_387_ = lean_uint32_dec_eq(v_curr_383_, v___x_386_);
if (v___x_387_ == 0)
{
uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 13;
v___x_389_ = lean_uint32_dec_eq(v_curr_383_, v___x_388_);
if (v___x_389_ == 0)
{
uint32_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 10;
v___x_391_ = lean_uint32_dec_eq(v_curr_383_, v___x_390_);
if (v___x_391_ == 0)
{
uint32_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 45;
v___x_393_ = lean_uint32_dec_eq(v_curr_383_, v___x_392_);
if (v___x_393_ == 0)
{
uint32_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 47;
v___x_395_ = lean_uint32_dec_eq(v_curr_383_, v___x_394_);
if (v___x_395_ == 0)
{
return v_s_369_;
}
else
{
lean_object* v_i_396_; uint32_t v_curr_397_; uint8_t v___x_398_; 
v_i_396_ = lean_string_utf8_next_fast(v_input_368_, v_pos_371_);
v_curr_397_ = lean_string_utf8_get(v_input_368_, v_i_396_);
v___x_398_ = lean_uint32_dec_eq(v_curr_397_, v___x_392_);
if (v___x_398_ == 0)
{
return v_s_369_;
}
else
{
lean_object* v_i_399_; uint32_t v_curr_400_; uint8_t v___x_401_; 
v_i_399_ = lean_string_utf8_next(v_input_368_, v_i_396_);
v_curr_400_ = lean_string_utf8_get(v_input_368_, v_i_399_);
v___x_401_ = lean_uint32_dec_eq(v_curr_400_, v___x_392_);
if (v___x_401_ == 0)
{
uint32_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 33;
v___x_403_ = lean_uint32_dec_eq(v_curr_400_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_415_; 
lean_inc(v_error_x3f_373_);
lean_inc_ref(v_imports_370_);
v_isSharedCheck_415_ = !lean_is_exclusive(v_s_369_);
if (v_isSharedCheck_415_ == 0)
{
lean_object* v_unused_416_; lean_object* v_unused_417_; lean_object* v_unused_418_; 
v_unused_416_ = lean_ctor_get(v_s_369_, 2);
lean_dec(v_unused_416_);
v_unused_417_ = lean_ctor_get(v_s_369_, 1);
lean_dec(v_unused_417_);
v_unused_418_ = lean_ctor_get(v_s_369_, 0);
lean_dec(v_unused_418_);
v___x_405_ = v_s_369_;
v_isShared_406_ = v_isSharedCheck_415_;
goto v_resetjp_404_;
}
else
{
lean_dec(v_s_369_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_415_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_407_ = lean_unsigned_to_nat(1u);
v___x_408_ = lean_string_utf8_next(v_input_368_, v_i_399_);
lean_dec(v_i_399_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 1, v___x_408_);
v___x_410_ = v___x_405_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_imports_370_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_414_, 2, v_error_x3f_373_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 4, v_importAll_377_);
v___x_410_ = v_reuseFailAlloc_414_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v_s_411_; lean_object* v_error_x3f_412_; 
v_s_411_ = l_Lean_ParseImports_finishCommentBlock(v___x_407_, v_input_368_, v___x_410_);
v_error_x3f_412_ = lean_ctor_get(v_s_411_, 2);
if (lean_obj_tag(v_error_x3f_412_) == 1)
{
return v_s_411_;
}
else
{
v_s_369_ = v_s_411_;
goto _start;
}
}
}
}
else
{
lean_dec(v_i_399_);
return v_s_369_;
}
}
else
{
lean_dec(v_i_399_);
return v_s_369_;
}
}
}
}
else
{
lean_object* v_i_419_; uint32_t v_curr_420_; uint8_t v___x_421_; 
v_i_419_ = lean_string_utf8_next_fast(v_input_368_, v_pos_371_);
v_curr_420_ = lean_string_utf8_get(v_input_368_, v_i_419_);
v___x_421_ = lean_uint32_dec_eq(v_curr_420_, v___x_392_);
if (v___x_421_ == 0)
{
return v_s_369_;
}
else
{
lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_432_; 
lean_inc(v_error_x3f_373_);
lean_inc_ref(v_imports_370_);
v_isSharedCheck_432_ = !lean_is_exclusive(v_s_369_);
if (v_isSharedCheck_432_ == 0)
{
lean_object* v_unused_433_; lean_object* v_unused_434_; lean_object* v_unused_435_; 
v_unused_433_ = lean_ctor_get(v_s_369_, 2);
lean_dec(v_unused_433_);
v_unused_434_ = lean_ctor_get(v_s_369_, 1);
lean_dec(v_unused_434_);
v_unused_435_ = lean_ctor_get(v_s_369_, 0);
lean_dec(v_unused_435_);
v___x_423_ = v_s_369_;
v_isShared_424_ = v_isSharedCheck_432_;
goto v_resetjp_422_;
}
else
{
lean_dec(v_s_369_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_432_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_425_ = lean_string_utf8_next(v_input_368_, v_i_419_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v___x_425_);
v___x_427_ = v___x_423_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_imports_370_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_error_x3f_373_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 4, v_importAll_377_);
v___x_427_ = v_reuseFailAlloc_431_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v_s_428_; lean_object* v_error_x3f_429_; 
v_s_428_ = l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(v_input_368_, v___x_427_);
v_error_x3f_429_ = lean_ctor_get(v_s_428_, 2);
if (lean_obj_tag(v_error_x3f_429_) == 1)
{
return v_s_428_;
}
else
{
v_s_369_ = v_s_428_;
goto _start;
}
}
}
}
}
}
else
{
lean_inc(v_error_x3f_373_);
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
lean_dec_ref(v_s_369_);
goto v___jp_378_;
}
}
else
{
lean_inc(v_error_x3f_373_);
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
lean_dec_ref(v_s_369_);
goto v___jp_378_;
}
}
else
{
lean_inc(v_error_x3f_373_);
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
lean_dec_ref(v_s_369_);
goto v___jp_378_;
}
}
else
{
lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
v_isSharedCheck_443_ = !lean_is_exclusive(v_s_369_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; lean_object* v_unused_445_; lean_object* v_unused_446_; 
v_unused_444_ = lean_ctor_get(v_s_369_, 2);
lean_dec(v_unused_444_);
v_unused_445_ = lean_ctor_get(v_s_369_, 1);
lean_dec(v_unused_445_);
v_unused_446_ = lean_ctor_get(v_s_369_, 0);
lean_dec(v_unused_446_);
v___x_437_ = v_s_369_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_dec(v_s_369_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_439_ = ((lean_object*)(l_Lean_ParseImports_whitespace___closed__1));
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 2, v___x_439_);
v___x_441_ = v___x_437_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_imports_370_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_pos_371_);
lean_ctor_set(v_reuseFailAlloc_442_, 2, v___x_439_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 4, v_importAll_377_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
return v_s_369_;
}
v___jp_378_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_string_utf8_next(v_input_368_, v_pos_371_);
lean_dec(v_pos_371_);
v___x_380_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_380_, 0, v_imports_370_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
lean_ctor_set(v___x_380_, 2, v_error_x3f_373_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 4, v_importAll_377_);
v_s_369_ = v___x_380_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace___boxed(lean_object* v_input_447_, lean_object* v_s_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_ParseImports_whitespace(v_input_447_, v_s_448_);
lean_dec_ref(v_input_447_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(lean_object* v_k_450_, lean_object* v_failure_451_, lean_object* v_success_452_, lean_object* v_input_453_, lean_object* v_s_454_, lean_object* v_i_455_, lean_object* v_j_456_){
_start:
{
uint8_t v___x_457_; 
v___x_457_ = lean_string_utf8_at_end(v_k_450_, v_i_455_);
if (v___x_457_ == 0)
{
uint8_t v___x_458_; 
v___x_458_ = lean_string_utf8_at_end(v_input_453_, v_j_456_);
if (v___x_458_ == 0)
{
uint32_t v_curr_u2081_459_; uint32_t v_curr_u2082_460_; uint8_t v___x_461_; 
v_curr_u2081_459_ = lean_string_utf8_get_fast(v_k_450_, v_i_455_);
v_curr_u2082_460_ = lean_string_utf8_get_fast(v_input_453_, v_j_456_);
v___x_461_ = lean_uint32_dec_eq(v_curr_u2081_459_, v_curr_u2082_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_dec(v_j_456_);
lean_dec(v_i_455_);
lean_dec_ref(v_success_452_);
v___x_462_ = lean_apply_2(v_failure_451_, v_input_453_, v_s_454_);
return v___x_462_;
}
else
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_string_utf8_next_fast(v_k_450_, v_i_455_);
lean_dec(v_i_455_);
v___x_464_ = lean_string_utf8_next_fast(v_input_453_, v_j_456_);
lean_dec(v_j_456_);
v_i_455_ = v___x_463_;
v_j_456_ = v___x_464_;
goto _start;
}
}
else
{
lean_object* v___x_466_; 
lean_dec(v_j_456_);
lean_dec(v_i_455_);
lean_dec_ref(v_success_452_);
v___x_466_ = lean_apply_2(v_failure_451_, v_input_453_, v_s_454_);
return v___x_466_;
}
}
else
{
lean_object* v_imports_467_; uint8_t v_badModifier_468_; lean_object* v_error_x3f_469_; uint8_t v_isModule_470_; uint8_t v_isMeta_471_; uint8_t v_isExported_472_; uint8_t v_importAll_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_i_455_);
lean_dec_ref(v_failure_451_);
v_imports_467_ = lean_ctor_get(v_s_454_, 0);
v_badModifier_468_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3);
v_error_x3f_469_ = lean_ctor_get(v_s_454_, 2);
v_isModule_470_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 1);
v_isMeta_471_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 2);
v_isExported_472_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 3);
v_importAll_473_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 4);
v_isSharedCheck_482_ = !lean_is_exclusive(v_s_454_);
if (v_isSharedCheck_482_ == 0)
{
lean_object* v_unused_483_; 
v_unused_483_ = lean_ctor_get(v_s_454_, 1);
lean_dec(v_unused_483_);
v___x_475_ = v_s_454_;
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_error_x3f_469_);
lean_inc(v_imports_467_);
lean_dec(v_s_454_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v_j_456_);
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_imports_467_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_j_456_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_error_x3f_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3, v_badModifier_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 1, v_isModule_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 2, v_isMeta_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 3, v_isExported_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 4, v_importAll_473_);
v___x_478_ = v_reuseFailAlloc_481_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = l_Lean_ParseImports_whitespace(v_input_453_, v___x_478_);
v___x_480_ = lean_apply_2(v_success_452_, v_input_453_, v___x_479_);
return v___x_480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___boxed(lean_object* v_k_484_, lean_object* v_failure_485_, lean_object* v_success_486_, lean_object* v_input_487_, lean_object* v_s_488_, lean_object* v_i_489_, lean_object* v_j_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_484_, v_failure_485_, v_success_486_, v_input_487_, v_s_488_, v_i_489_, v_j_490_);
lean_dec_ref(v_k_484_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore(lean_object* v_k_492_, lean_object* v_failure_493_, lean_object* v_success_494_, lean_object* v_input_495_, lean_object* v_s_496_){
_start:
{
lean_object* v_pos_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_pos_497_ = lean_ctor_get(v_s_496_, 1);
lean_inc(v_pos_497_);
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_492_, v_failure_493_, v_success_494_, v_input_495_, v_s_496_, v___x_498_, v_pos_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore___boxed(lean_object* v_k_500_, lean_object* v_failure_501_, lean_object* v_success_502_, lean_object* v_input_503_, lean_object* v_s_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_ParseImports_keywordCore(v_k_500_, v_failure_501_, v_success_502_, v_input_503_, v_s_504_);
lean_dec_ref(v_k_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0(lean_object* v_k_508_, lean_object* v_x_509_, lean_object* v_s_510_){
_start:
{
lean_object* v_imports_511_; lean_object* v_pos_512_; uint8_t v_badModifier_513_; uint8_t v_isModule_514_; uint8_t v_isMeta_515_; uint8_t v_isExported_516_; uint8_t v_importAll_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_529_; 
v_imports_511_ = lean_ctor_get(v_s_510_, 0);
v_pos_512_ = lean_ctor_get(v_s_510_, 1);
v_badModifier_513_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3);
v_isModule_514_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 1);
v_isMeta_515_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 2);
v_isExported_516_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 3);
v_importAll_517_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 4);
v_isSharedCheck_529_ = !lean_is_exclusive(v_s_510_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v_s_510_, 2);
lean_dec(v_unused_530_);
v___x_519_ = v_s_510_;
v_isShared_520_ = v_isSharedCheck_529_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_pos_512_);
lean_inc(v_imports_511_);
lean_dec(v_s_510_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_529_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_521_ = ((lean_object*)(l_Lean_ParseImports_keyword___lam__0___closed__0));
v___x_522_ = lean_string_append(v___x_521_, v_k_508_);
v___x_523_ = ((lean_object*)(l_Lean_ParseImports_keyword___lam__0___closed__1));
v___x_524_ = lean_string_append(v___x_522_, v___x_523_);
v___x_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 2, v___x_525_);
v___x_527_ = v___x_519_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_imports_511_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_pos_512_);
lean_ctor_set(v_reuseFailAlloc_528_, 2, v___x_525_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3, v_badModifier_513_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 1, v_isModule_514_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 2, v_isMeta_515_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 3, v_isExported_516_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 4, v_importAll_517_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0___boxed(lean_object* v_k_531_, lean_object* v_x_532_, lean_object* v_s_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_ParseImports_keyword___lam__0(v_k_531_, v_x_532_, v_s_533_);
lean_dec_ref(v_x_532_);
lean_dec_ref(v_k_531_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword(lean_object* v_k_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_pos_538_; lean_object* v___f_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v_pos_538_ = lean_ctor_get(v_a_537_, 1);
lean_inc(v_pos_538_);
lean_inc_ref(v_k_535_);
v___f_539_ = lean_alloc_closure((void*)(l_Lean_ParseImports_keyword___lam__0___boxed), 3, 1);
lean_closure_set(v___f_539_, 0, v_k_535_);
v___x_540_ = lean_alloc_closure((void*)(l_Lean_ParseImports_skip___boxed), 2, 0);
v___x_541_ = lean_unsigned_to_nat(0u);
v___x_542_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_535_, v___f_539_, v___x_540_, v_a_536_, v_a_537_, v___x_541_, v_pos_538_);
lean_dec_ref(v_k_535_);
return v___x_542_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdCont(lean_object* v_input_543_, lean_object* v_s_544_){
_start:
{
lean_object* v_pos_545_; uint32_t v_curr_546_; uint32_t v___x_547_; uint8_t v___x_548_; 
v_pos_545_ = lean_ctor_get(v_s_544_, 1);
v_curr_546_ = lean_string_utf8_get(v_input_543_, v_pos_545_);
v___x_547_ = 46;
v___x_548_ = lean_uint32_dec_eq(v_curr_546_, v___x_547_);
if (v___x_548_ == 0)
{
return v___x_548_;
}
else
{
lean_object* v_i_549_; uint8_t v___x_550_; 
v_i_549_ = lean_string_utf8_next(v_input_543_, v_pos_545_);
v___x_550_ = lean_string_utf8_at_end(v_input_543_, v_i_549_);
if (v___x_550_ == 0)
{
uint32_t v_curr_551_; uint32_t v___x_563_; uint8_t v___x_564_; 
v_curr_551_ = lean_string_utf8_get_fast(v_input_543_, v_i_549_);
lean_dec(v_i_549_);
v___x_563_ = 65;
v___x_564_ = lean_uint32_dec_le(v___x_563_, v_curr_551_);
if (v___x_564_ == 0)
{
goto v___jp_558_;
}
else
{
uint32_t v___x_565_; uint8_t v___x_566_; 
v___x_565_ = 90;
v___x_566_ = lean_uint32_dec_le(v_curr_551_, v___x_565_);
if (v___x_566_ == 0)
{
goto v___jp_558_;
}
else
{
return v___x_548_;
}
}
v___jp_552_:
{
uint32_t v___x_553_; uint8_t v___x_554_; 
v___x_553_ = 95;
v___x_554_ = lean_uint32_dec_eq(v_curr_551_, v___x_553_);
if (v___x_554_ == 0)
{
uint8_t v___x_555_; 
v___x_555_ = l_Lean_isLetterLike(v_curr_551_);
if (v___x_555_ == 0)
{
uint32_t v___x_556_; uint8_t v___x_557_; 
v___x_556_ = l_Lean_idBeginEscape;
v___x_557_ = lean_uint32_dec_eq(v_curr_551_, v___x_556_);
return v___x_557_;
}
else
{
return v___x_548_;
}
}
else
{
return v___x_548_;
}
}
v___jp_558_:
{
uint32_t v___x_559_; uint8_t v___x_560_; 
v___x_559_ = 97;
v___x_560_ = lean_uint32_dec_le(v___x_559_, v_curr_551_);
if (v___x_560_ == 0)
{
goto v___jp_552_;
}
else
{
uint32_t v___x_561_; uint8_t v___x_562_; 
v___x_561_ = 122;
v___x_562_ = lean_uint32_dec_le(v_curr_551_, v___x_561_);
if (v___x_562_ == 0)
{
goto v___jp_552_;
}
else
{
return v___x_548_;
}
}
}
}
else
{
uint8_t v___x_567_; 
lean_dec(v_i_549_);
v___x_567_ = 0;
return v___x_567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdCont___boxed(lean_object* v_input_568_, lean_object* v_s_569_){
_start:
{
uint8_t v_res_570_; lean_object* v_r_571_; 
v_res_570_ = l_Lean_ParseImports_isIdCont(v_input_568_, v_s_569_);
lean_dec_ref(v_s_569_);
lean_dec_ref(v_input_568_);
v_r_571_ = lean_box(v_res_570_);
return v_r_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_pushImport(lean_object* v_i_572_, lean_object* v_s_573_){
_start:
{
lean_object* v_imports_574_; lean_object* v_pos_575_; uint8_t v_badModifier_576_; lean_object* v_error_x3f_577_; uint8_t v_isModule_578_; uint8_t v_isMeta_579_; uint8_t v_isExported_580_; uint8_t v_importAll_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_589_; 
v_imports_574_ = lean_ctor_get(v_s_573_, 0);
v_pos_575_ = lean_ctor_get(v_s_573_, 1);
v_badModifier_576_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3);
v_error_x3f_577_ = lean_ctor_get(v_s_573_, 2);
v_isModule_578_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 1);
v_isMeta_579_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 2);
v_isExported_580_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 3);
v_importAll_581_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 4);
v_isSharedCheck_589_ = !lean_is_exclusive(v_s_573_);
if (v_isSharedCheck_589_ == 0)
{
v___x_583_ = v_s_573_;
v_isShared_584_ = v_isSharedCheck_589_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_error_x3f_577_);
lean_inc(v_pos_575_);
lean_inc(v_imports_574_);
lean_dec(v_s_573_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_589_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_585_ = lean_array_push(v_imports_574_, v_i_572_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_585_);
v___x_587_ = v___x_583_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_pos_575_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_error_x3f_577_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3, v_badModifier_576_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 1, v_isModule_578_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 2, v_isMeta_579_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 3, v_isExported_580_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 4, v_importAll_581_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestCold(uint32_t v_c_590_){
_start:
{
uint32_t v___x_591_; uint8_t v___x_592_; 
v___x_591_ = 95;
v___x_592_ = lean_uint32_dec_eq(v_c_590_, v___x_591_);
if (v___x_592_ == 0)
{
uint32_t v___x_593_; uint8_t v___x_594_; 
v___x_593_ = 39;
v___x_594_ = lean_uint32_dec_eq(v_c_590_, v___x_593_);
if (v___x_594_ == 0)
{
uint32_t v___x_595_; uint8_t v___x_596_; 
v___x_595_ = 33;
v___x_596_ = lean_uint32_dec_eq(v_c_590_, v___x_595_);
if (v___x_596_ == 0)
{
uint32_t v___x_597_; uint8_t v___x_598_; 
v___x_597_ = 63;
v___x_598_ = lean_uint32_dec_eq(v_c_590_, v___x_597_);
if (v___x_598_ == 0)
{
uint8_t v___x_599_; 
v___x_599_ = l_Lean_isLetterLike(v_c_590_);
if (v___x_599_ == 0)
{
uint8_t v___x_600_; 
v___x_600_ = l_Lean_isSubScriptAlnum(v_c_590_);
return v___x_600_;
}
else
{
return v___x_599_;
}
}
else
{
return v___x_598_;
}
}
else
{
return v___x_596_;
}
}
else
{
return v___x_594_;
}
}
else
{
return v___x_592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestCold___boxed(lean_object* v_c_601_){
_start:
{
uint32_t v_c_boxed_602_; uint8_t v_res_603_; lean_object* v_r_604_; 
v_c_boxed_602_ = lean_unbox_uint32(v_c_601_);
lean_dec(v_c_601_);
v_res_603_ = l_Lean_ParseImports_isIdRestCold(v_c_boxed_602_);
v_r_604_ = lean_box(v_res_603_);
return v_r_604_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestFast(uint32_t v_c_605_){
_start:
{
uint32_t v___x_634_; uint8_t v___x_635_; 
v___x_634_ = 65;
v___x_635_ = lean_uint32_dec_le(v___x_634_, v_c_605_);
if (v___x_635_ == 0)
{
goto v___jp_629_;
}
else
{
uint32_t v___x_636_; uint8_t v___x_637_; 
v___x_636_ = 90;
v___x_637_ = lean_uint32_dec_le(v_c_605_, v___x_636_);
if (v___x_637_ == 0)
{
goto v___jp_629_;
}
else
{
return v___x_637_;
}
}
v___jp_606_:
{
uint32_t v___x_607_; uint8_t v___x_608_; 
v___x_607_ = 46;
v___x_608_ = lean_uint32_dec_eq(v_c_605_, v___x_607_);
if (v___x_608_ == 0)
{
uint32_t v___x_609_; uint8_t v___x_610_; 
v___x_609_ = 10;
v___x_610_ = lean_uint32_dec_eq(v_c_605_, v___x_609_);
if (v___x_610_ == 0)
{
uint32_t v___x_611_; uint8_t v___x_612_; 
v___x_611_ = 32;
v___x_612_ = lean_uint32_dec_eq(v_c_605_, v___x_611_);
if (v___x_612_ == 0)
{
uint32_t v___x_613_; uint8_t v___x_614_; 
v___x_613_ = 95;
v___x_614_ = lean_uint32_dec_eq(v_c_605_, v___x_613_);
if (v___x_614_ == 0)
{
uint32_t v___x_615_; uint8_t v___x_616_; 
v___x_615_ = 39;
v___x_616_ = lean_uint32_dec_eq(v_c_605_, v___x_615_);
if (v___x_616_ == 0)
{
uint32_t v___x_617_; uint8_t v___x_618_; 
v___x_617_ = 33;
v___x_618_ = lean_uint32_dec_eq(v_c_605_, v___x_617_);
if (v___x_618_ == 0)
{
uint32_t v___x_619_; uint8_t v___x_620_; 
v___x_619_ = 63;
v___x_620_ = lean_uint32_dec_eq(v_c_605_, v___x_619_);
if (v___x_620_ == 0)
{
uint8_t v___x_621_; 
v___x_621_ = l_Lean_isLetterLike(v_c_605_);
if (v___x_621_ == 0)
{
uint8_t v___x_622_; 
v___x_622_ = l_Lean_isSubScriptAlnum(v_c_605_);
return v___x_622_;
}
else
{
return v___x_621_;
}
}
else
{
return v___x_620_;
}
}
else
{
return v___x_618_;
}
}
else
{
return v___x_616_;
}
}
else
{
return v___x_614_;
}
}
else
{
return v___x_610_;
}
}
else
{
return v___x_608_;
}
}
else
{
uint8_t v___x_623_; 
v___x_623_ = 0;
return v___x_623_;
}
}
v___jp_624_:
{
uint32_t v___x_625_; uint8_t v___x_626_; 
v___x_625_ = 48;
v___x_626_ = lean_uint32_dec_le(v___x_625_, v_c_605_);
if (v___x_626_ == 0)
{
goto v___jp_606_;
}
else
{
uint32_t v___x_627_; uint8_t v___x_628_; 
v___x_627_ = 57;
v___x_628_ = lean_uint32_dec_le(v_c_605_, v___x_627_);
if (v___x_628_ == 0)
{
goto v___jp_606_;
}
else
{
return v___x_628_;
}
}
}
v___jp_629_:
{
uint32_t v___x_630_; uint8_t v___x_631_; 
v___x_630_ = 97;
v___x_631_ = lean_uint32_dec_le(v___x_630_, v_c_605_);
if (v___x_631_ == 0)
{
goto v___jp_624_;
}
else
{
uint32_t v___x_632_; uint8_t v___x_633_; 
v___x_632_ = 122;
v___x_633_ = lean_uint32_dec_le(v_c_605_, v___x_632_);
if (v___x_633_ == 0)
{
goto v___jp_624_;
}
else
{
return v___x_633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestFast___boxed(lean_object* v_c_638_){
_start:
{
uint32_t v_c_boxed_639_; uint8_t v_res_640_; lean_object* v_r_641_; 
v_c_boxed_639_ = lean_unbox_uint32(v_c_638_);
lean_dec(v_c_638_);
v_res_640_ = l_Lean_ParseImports_isIdRestFast(v_c_boxed_639_);
v_r_641_ = lean_box(v_res_640_);
return v_r_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(lean_object* v_input_642_, lean_object* v_s_643_){
_start:
{
lean_object* v_imports_644_; lean_object* v_pos_645_; uint8_t v_badModifier_646_; lean_object* v_error_x3f_647_; uint8_t v_isModule_648_; uint8_t v_isMeta_649_; uint8_t v_isExported_650_; uint8_t v_importAll_651_; uint8_t v___x_652_; 
v_imports_644_ = lean_ctor_get(v_s_643_, 0);
v_pos_645_ = lean_ctor_get(v_s_643_, 1);
v_badModifier_646_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3);
v_error_x3f_647_ = lean_ctor_get(v_s_643_, 2);
v_isModule_648_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 1);
v_isMeta_649_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 2);
v_isExported_650_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 3);
v_importAll_651_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 4);
v___x_652_ = lean_string_utf8_at_end(v_input_642_, v_pos_645_);
if (v___x_652_ == 0)
{
uint32_t v___x_653_; uint32_t v___x_654_; uint8_t v___x_655_; 
v___x_653_ = lean_string_utf8_get_fast(v_input_642_, v_pos_645_);
v___x_654_ = l_Lean_idEndEscape;
v___x_655_ = lean_uint32_dec_eq(v___x_653_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_664_; 
lean_inc(v_error_x3f_647_);
lean_inc(v_pos_645_);
lean_inc_ref(v_imports_644_);
v_isSharedCheck_664_ = !lean_is_exclusive(v_s_643_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; lean_object* v_unused_666_; lean_object* v_unused_667_; 
v_unused_665_ = lean_ctor_get(v_s_643_, 2);
lean_dec(v_unused_665_);
v_unused_666_ = lean_ctor_get(v_s_643_, 1);
lean_dec(v_unused_666_);
v_unused_667_ = lean_ctor_get(v_s_643_, 0);
lean_dec(v_unused_667_);
v___x_657_ = v_s_643_;
v_isShared_658_ = v_isSharedCheck_664_;
goto v_resetjp_656_;
}
else
{
lean_dec(v_s_643_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_664_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_659_ = lean_string_utf8_next_fast(v_input_642_, v_pos_645_);
lean_dec(v_pos_645_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_659_);
v___x_661_ = v___x_657_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_imports_644_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_663_, 2, v_error_x3f_647_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3, v_badModifier_646_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 1, v_isModule_648_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 2, v_isMeta_649_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 3, v_isExported_650_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 4, v_importAll_651_);
v___x_661_ = v_reuseFailAlloc_663_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
v_s_643_ = v___x_661_;
goto _start;
}
}
}
else
{
return v_s_643_;
}
}
else
{
return v_s_643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1___boxed(lean_object* v_input_668_, lean_object* v_s_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(v_input_668_, v_s_669_);
lean_dec_ref(v_input_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(uint8_t v___x_671_, lean_object* v_input_672_, lean_object* v_s_673_){
_start:
{
lean_object* v_imports_674_; lean_object* v_pos_675_; uint8_t v_badModifier_676_; lean_object* v_error_x3f_677_; uint8_t v_isModule_678_; uint8_t v_isMeta_679_; uint8_t v_isExported_680_; uint8_t v_importAll_681_; uint8_t v___y_683_; uint8_t v___x_696_; 
v_imports_674_ = lean_ctor_get(v_s_673_, 0);
v_pos_675_ = lean_ctor_get(v_s_673_, 1);
v_badModifier_676_ = lean_ctor_get_uint8(v_s_673_, sizeof(void*)*3);
v_error_x3f_677_ = lean_ctor_get(v_s_673_, 2);
v_isModule_678_ = lean_ctor_get_uint8(v_s_673_, sizeof(void*)*3 + 1);
v_isMeta_679_ = lean_ctor_get_uint8(v_s_673_, sizeof(void*)*3 + 2);
v_isExported_680_ = lean_ctor_get_uint8(v_s_673_, sizeof(void*)*3 + 3);
v_importAll_681_ = lean_ctor_get_uint8(v_s_673_, sizeof(void*)*3 + 4);
v___x_696_ = lean_string_utf8_at_end(v_input_672_, v_pos_675_);
if (v___x_696_ == 0)
{
uint32_t v___x_697_; uint32_t v___x_725_; uint8_t v___x_726_; 
v___x_697_ = lean_string_utf8_get_fast(v_input_672_, v_pos_675_);
v___x_725_ = 65;
v___x_726_ = lean_uint32_dec_le(v___x_725_, v___x_697_);
if (v___x_726_ == 0)
{
goto v___jp_720_;
}
else
{
uint32_t v___x_727_; uint8_t v___x_728_; 
v___x_727_ = 90;
v___x_728_ = lean_uint32_dec_le(v___x_697_, v___x_727_);
if (v___x_728_ == 0)
{
goto v___jp_720_;
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
v___jp_698_:
{
uint32_t v___x_699_; uint8_t v___x_700_; 
v___x_699_ = 46;
v___x_700_ = lean_uint32_dec_eq(v___x_697_, v___x_699_);
if (v___x_700_ == 0)
{
uint32_t v___x_701_; uint8_t v___x_702_; 
v___x_701_ = 10;
v___x_702_ = lean_uint32_dec_eq(v___x_697_, v___x_701_);
if (v___x_702_ == 0)
{
uint32_t v___x_703_; uint8_t v___x_704_; 
v___x_703_ = 32;
v___x_704_ = lean_uint32_dec_eq(v___x_697_, v___x_703_);
if (v___x_704_ == 0)
{
uint32_t v___x_705_; uint8_t v___x_706_; 
v___x_705_ = 95;
v___x_706_ = lean_uint32_dec_eq(v___x_697_, v___x_705_);
if (v___x_706_ == 0)
{
uint32_t v___x_707_; uint8_t v___x_708_; 
v___x_707_ = 39;
v___x_708_ = lean_uint32_dec_eq(v___x_697_, v___x_707_);
if (v___x_708_ == 0)
{
uint32_t v___x_709_; uint8_t v___x_710_; 
v___x_709_ = 33;
v___x_710_ = lean_uint32_dec_eq(v___x_697_, v___x_709_);
if (v___x_710_ == 0)
{
uint32_t v___x_711_; uint8_t v___x_712_; 
v___x_711_ = 63;
v___x_712_ = lean_uint32_dec_eq(v___x_697_, v___x_711_);
if (v___x_712_ == 0)
{
uint8_t v___x_713_; 
v___x_713_ = l_Lean_isLetterLike(v___x_697_);
if (v___x_713_ == 0)
{
uint8_t v___x_714_; 
v___x_714_ = l_Lean_isSubScriptAlnum(v___x_697_);
if (v___x_714_ == 0)
{
return v_s_673_;
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
else
{
return v_s_673_;
}
}
else
{
return v_s_673_;
}
}
else
{
return v_s_673_;
}
}
v___jp_715_:
{
uint32_t v___x_716_; uint8_t v___x_717_; 
v___x_716_ = 48;
v___x_717_ = lean_uint32_dec_le(v___x_716_, v___x_697_);
if (v___x_717_ == 0)
{
goto v___jp_698_;
}
else
{
uint32_t v___x_718_; uint8_t v___x_719_; 
v___x_718_ = 57;
v___x_719_ = lean_uint32_dec_le(v___x_697_, v___x_718_);
if (v___x_719_ == 0)
{
goto v___jp_698_;
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
}
v___jp_720_:
{
uint32_t v___x_721_; uint8_t v___x_722_; 
v___x_721_ = 97;
v___x_722_ = lean_uint32_dec_le(v___x_721_, v___x_697_);
if (v___x_722_ == 0)
{
goto v___jp_715_;
}
else
{
uint32_t v___x_723_; uint8_t v___x_724_; 
v___x_723_ = 122;
v___x_724_ = lean_uint32_dec_le(v___x_697_, v___x_723_);
if (v___x_724_ == 0)
{
goto v___jp_715_;
}
else
{
v___y_683_ = v___x_671_;
goto v___jp_682_;
}
}
}
}
else
{
return v_s_673_;
}
v___jp_682_:
{
if (v___y_683_ == 0)
{
lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_692_; 
lean_inc(v_error_x3f_677_);
lean_inc(v_pos_675_);
lean_inc_ref(v_imports_674_);
v_isSharedCheck_692_ = !lean_is_exclusive(v_s_673_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; lean_object* v_unused_694_; lean_object* v_unused_695_; 
v_unused_693_ = lean_ctor_get(v_s_673_, 2);
lean_dec(v_unused_693_);
v_unused_694_ = lean_ctor_get(v_s_673_, 1);
lean_dec(v_unused_694_);
v_unused_695_ = lean_ctor_get(v_s_673_, 0);
lean_dec(v_unused_695_);
v___x_685_ = v_s_673_;
v_isShared_686_ = v_isSharedCheck_692_;
goto v_resetjp_684_;
}
else
{
lean_dec(v_s_673_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_692_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; lean_object* v___x_689_; 
v___x_687_ = lean_string_utf8_next_fast(v_input_672_, v_pos_675_);
lean_dec(v_pos_675_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 1, v___x_687_);
v___x_689_ = v___x_685_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_imports_674_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_error_x3f_677_);
lean_ctor_set_uint8(v_reuseFailAlloc_691_, sizeof(void*)*3, v_badModifier_676_);
lean_ctor_set_uint8(v_reuseFailAlloc_691_, sizeof(void*)*3 + 1, v_isModule_678_);
lean_ctor_set_uint8(v_reuseFailAlloc_691_, sizeof(void*)*3 + 2, v_isMeta_679_);
lean_ctor_set_uint8(v_reuseFailAlloc_691_, sizeof(void*)*3 + 3, v_isExported_680_);
lean_ctor_set_uint8(v_reuseFailAlloc_691_, sizeof(void*)*3 + 4, v_importAll_681_);
v___x_689_ = v_reuseFailAlloc_691_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
v_s_673_ = v___x_689_;
goto _start;
}
}
}
else
{
return v_s_673_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0___boxed(lean_object* v___x_729_, lean_object* v_input_730_, lean_object* v_s_731_){
_start:
{
uint8_t v___x_1330__boxed_732_; lean_object* v_res_733_; 
v___x_1330__boxed_732_ = lean_unbox(v___x_729_);
v_res_733_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(v___x_1330__boxed_732_, v_input_730_, v_s_731_);
lean_dec_ref(v_input_730_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(lean_object* v_input_740_, lean_object* v_finalize_741_, lean_object* v_module_742_, lean_object* v_s_743_){
_start:
{
lean_object* v___y_745_; uint8_t v___y_746_; lean_object* v___y_747_; uint8_t v___y_748_; uint8_t v___y_749_; lean_object* v___y_750_; lean_object* v___y_751_; uint8_t v___y_752_; uint8_t v___y_753_; lean_object* v___y_758_; uint8_t v___y_759_; lean_object* v___y_760_; uint8_t v___y_761_; uint8_t v___y_762_; lean_object* v___y_763_; lean_object* v___y_764_; uint32_t v___y_765_; uint8_t v___y_766_; lean_object* v___y_767_; uint8_t v___y_768_; lean_object* v___y_776_; uint8_t v___y_777_; lean_object* v___y_778_; uint8_t v___y_779_; uint8_t v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; uint32_t v___y_783_; uint8_t v___y_784_; lean_object* v___y_785_; uint8_t v___y_786_; lean_object* v_imports_791_; lean_object* v_pos_792_; uint8_t v_badModifier_793_; lean_object* v_error_x3f_794_; uint8_t v_isModule_795_; uint8_t v_isMeta_796_; uint8_t v_isExported_797_; uint8_t v_importAll_798_; uint8_t v___x_799_; 
v_imports_791_ = lean_ctor_get(v_s_743_, 0);
v_pos_792_ = lean_ctor_get(v_s_743_, 1);
v_badModifier_793_ = lean_ctor_get_uint8(v_s_743_, sizeof(void*)*3);
v_error_x3f_794_ = lean_ctor_get(v_s_743_, 2);
v_isModule_795_ = lean_ctor_get_uint8(v_s_743_, sizeof(void*)*3 + 1);
v_isMeta_796_ = lean_ctor_get_uint8(v_s_743_, sizeof(void*)*3 + 2);
v_isExported_797_ = lean_ctor_get_uint8(v_s_743_, sizeof(void*)*3 + 3);
v_importAll_798_ = lean_ctor_get_uint8(v_s_743_, sizeof(void*)*3 + 4);
v___x_799_ = lean_string_utf8_at_end(v_input_740_, v_pos_792_);
if (v___x_799_ == 0)
{
lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_902_; 
lean_inc(v_error_x3f_794_);
lean_inc(v_pos_792_);
lean_inc_ref(v_imports_791_);
v_isSharedCheck_902_ = !lean_is_exclusive(v_s_743_);
if (v_isSharedCheck_902_ == 0)
{
lean_object* v_unused_903_; lean_object* v_unused_904_; lean_object* v_unused_905_; 
v_unused_903_ = lean_ctor_get(v_s_743_, 2);
lean_dec(v_unused_903_);
v_unused_904_ = lean_ctor_get(v_s_743_, 1);
lean_dec(v_unused_904_);
v_unused_905_ = lean_ctor_get(v_s_743_, 0);
lean_dec(v_unused_905_);
v___x_827_ = v_s_743_;
v_isShared_828_ = v_isSharedCheck_902_;
goto v_resetjp_826_;
}
else
{
lean_dec(v_s_743_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_902_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
uint32_t v_curr_829_; uint32_t v___x_843_; uint8_t v___x_844_; 
v_curr_829_ = lean_string_utf8_get_fast(v_input_740_, v_pos_792_);
v___x_843_ = l_Lean_idBeginEscape;
v___x_844_ = lean_uint32_dec_eq(v_curr_829_, v___x_843_);
if (v___x_844_ == 0)
{
uint32_t v___x_845_; uint8_t v___x_846_; 
v___x_845_ = 65;
v___x_846_ = lean_uint32_dec_le(v___x_845_, v_curr_829_);
if (v___x_846_ == 0)
{
goto v___jp_838_;
}
else
{
uint32_t v___x_847_; uint8_t v___x_848_; 
v___x_847_ = 90;
v___x_848_ = lean_uint32_dec_le(v_curr_829_, v___x_847_);
if (v___x_848_ == 0)
{
goto v___jp_838_;
}
else
{
lean_del_object(v___x_827_);
goto v___jp_800_;
}
}
}
else
{
lean_object* v_startPart_849_; lean_object* v___x_850_; lean_object* v_s_851_; lean_object* v_imports_852_; lean_object* v_pos_853_; uint8_t v_badModifier_854_; lean_object* v_error_x3f_855_; uint8_t v_isModule_856_; uint8_t v_isMeta_857_; uint8_t v_isExported_858_; uint8_t v_importAll_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_901_; 
lean_del_object(v___x_827_);
v_startPart_849_ = lean_string_utf8_next_fast(v_input_740_, v_pos_792_);
lean_dec(v_pos_792_);
v___x_850_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_850_, 0, v_imports_791_);
lean_ctor_set(v___x_850_, 1, v_startPart_849_);
lean_ctor_set(v___x_850_, 2, v_error_x3f_794_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*3, v_badModifier_793_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*3 + 1, v_isModule_795_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*3 + 2, v_isMeta_796_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*3 + 3, v_isExported_797_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*3 + 4, v_importAll_798_);
v_s_851_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(v_input_740_, v___x_850_);
v_imports_852_ = lean_ctor_get(v_s_851_, 0);
v_pos_853_ = lean_ctor_get(v_s_851_, 1);
v_badModifier_854_ = lean_ctor_get_uint8(v_s_851_, sizeof(void*)*3);
v_error_x3f_855_ = lean_ctor_get(v_s_851_, 2);
v_isModule_856_ = lean_ctor_get_uint8(v_s_851_, sizeof(void*)*3 + 1);
v_isMeta_857_ = lean_ctor_get_uint8(v_s_851_, sizeof(void*)*3 + 2);
v_isExported_858_ = lean_ctor_get_uint8(v_s_851_, sizeof(void*)*3 + 3);
v_importAll_859_ = lean_ctor_get_uint8(v_s_851_, sizeof(void*)*3 + 4);
v_isSharedCheck_901_ = !lean_is_exclusive(v_s_851_);
if (v_isSharedCheck_901_ == 0)
{
v___x_861_ = v_s_851_;
v_isShared_862_ = v_isSharedCheck_901_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_error_x3f_855_);
lean_inc(v_pos_853_);
lean_inc(v_imports_852_);
lean_dec(v_s_851_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_901_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
uint8_t v___x_863_; 
v___x_863_ = lean_string_utf8_at_end(v_input_740_, v_pos_853_);
if (v___x_863_ == 0)
{
lean_object* v_i_864_; lean_object* v_s_866_; 
v_i_864_ = lean_string_utf8_next_fast(v_input_740_, v_pos_853_);
lean_inc(v_error_x3f_855_);
lean_inc_ref(v_imports_852_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 1, v_i_864_);
v_s_866_ = v___x_861_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_imports_852_);
lean_ctor_set(v_reuseFailAlloc_896_, 1, v_i_864_);
lean_ctor_set(v_reuseFailAlloc_896_, 2, v_error_x3f_855_);
lean_ctor_set_uint8(v_reuseFailAlloc_896_, sizeof(void*)*3, v_badModifier_854_);
lean_ctor_set_uint8(v_reuseFailAlloc_896_, sizeof(void*)*3 + 1, v_isModule_856_);
lean_ctor_set_uint8(v_reuseFailAlloc_896_, sizeof(void*)*3 + 2, v_isMeta_857_);
lean_ctor_set_uint8(v_reuseFailAlloc_896_, sizeof(void*)*3 + 3, v_isExported_858_);
lean_ctor_set_uint8(v_reuseFailAlloc_896_, sizeof(void*)*3 + 4, v_importAll_859_);
v_s_866_ = v_reuseFailAlloc_896_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; lean_object* v_module_868_; uint32_t v_curr_873_; uint32_t v___x_874_; uint8_t v___x_875_; 
v___x_867_ = lean_string_utf8_extract(v_input_740_, v_startPart_849_, v_pos_853_);
lean_dec(v_pos_853_);
v_module_868_ = l_Lean_Name_str___override(v_module_742_, v___x_867_);
v_curr_873_ = lean_string_utf8_get(v_input_740_, v_i_864_);
v___x_874_ = 46;
v___x_875_ = lean_uint32_dec_eq(v_curr_873_, v___x_874_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; 
lean_dec(v_error_x3f_855_);
lean_dec_ref(v_imports_852_);
v___x_876_ = lean_apply_3(v_finalize_741_, v_module_868_, v_input_740_, v_s_866_);
return v___x_876_;
}
else
{
lean_object* v_i_877_; uint8_t v___x_878_; 
v_i_877_ = lean_string_utf8_next(v_input_740_, v_i_864_);
v___x_878_ = lean_string_utf8_at_end(v_input_740_, v_i_877_);
if (v___x_878_ == 0)
{
uint32_t v_curr_879_; uint32_t v___x_891_; uint8_t v___x_892_; 
v_curr_879_ = lean_string_utf8_get_fast(v_input_740_, v_i_877_);
lean_dec(v_i_877_);
v___x_891_ = 65;
v___x_892_ = lean_uint32_dec_le(v___x_891_, v_curr_879_);
if (v___x_892_ == 0)
{
goto v___jp_886_;
}
else
{
uint32_t v___x_893_; uint8_t v___x_894_; 
v___x_893_ = 90;
v___x_894_ = lean_uint32_dec_le(v_curr_879_, v___x_893_);
if (v___x_894_ == 0)
{
goto v___jp_886_;
}
else
{
lean_dec_ref(v_s_866_);
goto v___jp_869_;
}
}
v___jp_880_:
{
uint32_t v___x_881_; uint8_t v___x_882_; 
v___x_881_ = 95;
v___x_882_ = lean_uint32_dec_eq(v_curr_879_, v___x_881_);
if (v___x_882_ == 0)
{
uint8_t v___x_883_; 
v___x_883_ = l_Lean_isLetterLike(v_curr_879_);
if (v___x_883_ == 0)
{
uint8_t v___x_884_; 
v___x_884_ = lean_uint32_dec_eq(v_curr_879_, v___x_843_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; 
lean_dec(v_error_x3f_855_);
lean_dec_ref(v_imports_852_);
v___x_885_ = lean_apply_3(v_finalize_741_, v_module_868_, v_input_740_, v_s_866_);
return v___x_885_;
}
else
{
lean_dec_ref(v_s_866_);
goto v___jp_869_;
}
}
else
{
lean_dec_ref(v_s_866_);
goto v___jp_869_;
}
}
else
{
lean_dec_ref(v_s_866_);
goto v___jp_869_;
}
}
v___jp_886_:
{
uint32_t v___x_887_; uint8_t v___x_888_; 
v___x_887_ = 97;
v___x_888_ = lean_uint32_dec_le(v___x_887_, v_curr_879_);
if (v___x_888_ == 0)
{
goto v___jp_880_;
}
else
{
uint32_t v___x_889_; uint8_t v___x_890_; 
v___x_889_ = 122;
v___x_890_ = lean_uint32_dec_le(v_curr_879_, v___x_889_);
if (v___x_890_ == 0)
{
goto v___jp_880_;
}
else
{
lean_dec_ref(v_s_866_);
goto v___jp_869_;
}
}
}
}
else
{
lean_object* v___x_895_; 
lean_dec(v_i_877_);
lean_dec(v_error_x3f_855_);
lean_dec_ref(v_imports_852_);
v___x_895_ = lean_apply_3(v_finalize_741_, v_module_868_, v_input_740_, v_s_866_);
return v___x_895_;
}
}
v___jp_869_:
{
lean_object* v___x_870_; lean_object* v_s_871_; 
v___x_870_ = lean_string_utf8_next(v_input_740_, v_i_864_);
v_s_871_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_s_871_, 0, v_imports_852_);
lean_ctor_set(v_s_871_, 1, v___x_870_);
lean_ctor_set(v_s_871_, 2, v_error_x3f_855_);
lean_ctor_set_uint8(v_s_871_, sizeof(void*)*3, v_badModifier_854_);
lean_ctor_set_uint8(v_s_871_, sizeof(void*)*3 + 1, v_isModule_856_);
lean_ctor_set_uint8(v_s_871_, sizeof(void*)*3 + 2, v_isMeta_857_);
lean_ctor_set_uint8(v_s_871_, sizeof(void*)*3 + 3, v_isExported_858_);
lean_ctor_set_uint8(v_s_871_, sizeof(void*)*3 + 4, v_importAll_859_);
v_module_742_ = v_module_868_;
v_s_743_ = v_s_871_;
goto _start;
}
}
}
else
{
lean_object* v___x_897_; lean_object* v___x_899_; 
lean_dec(v_error_x3f_855_);
lean_dec(v_module_742_);
lean_dec_ref(v_finalize_741_);
lean_dec_ref(v_input_740_);
v___x_897_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3));
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 2, v___x_897_);
v___x_899_ = v___x_861_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_imports_852_);
lean_ctor_set(v_reuseFailAlloc_900_, 1, v_pos_853_);
lean_ctor_set(v_reuseFailAlloc_900_, 2, v___x_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_900_, sizeof(void*)*3, v_badModifier_854_);
lean_ctor_set_uint8(v_reuseFailAlloc_900_, sizeof(void*)*3 + 1, v_isModule_856_);
lean_ctor_set_uint8(v_reuseFailAlloc_900_, sizeof(void*)*3 + 2, v_isMeta_857_);
lean_ctor_set_uint8(v_reuseFailAlloc_900_, sizeof(void*)*3 + 3, v_isExported_858_);
lean_ctor_set_uint8(v_reuseFailAlloc_900_, sizeof(void*)*3 + 4, v_importAll_859_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
v___jp_830_:
{
uint32_t v___x_831_; uint8_t v___x_832_; 
v___x_831_ = 95;
v___x_832_ = lean_uint32_dec_eq(v_curr_829_, v___x_831_);
if (v___x_832_ == 0)
{
uint8_t v___x_833_; 
v___x_833_ = l_Lean_isLetterLike(v_curr_829_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_836_; 
lean_dec(v_error_x3f_794_);
lean_dec(v_module_742_);
lean_dec_ref(v_finalize_741_);
lean_dec_ref(v_input_740_);
v___x_834_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1));
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 2, v___x_834_);
v___x_836_ = v___x_827_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_imports_791_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v_pos_792_);
lean_ctor_set(v_reuseFailAlloc_837_, 2, v___x_834_);
lean_ctor_set_uint8(v_reuseFailAlloc_837_, sizeof(void*)*3, v_badModifier_793_);
lean_ctor_set_uint8(v_reuseFailAlloc_837_, sizeof(void*)*3 + 1, v_isModule_795_);
lean_ctor_set_uint8(v_reuseFailAlloc_837_, sizeof(void*)*3 + 2, v_isMeta_796_);
lean_ctor_set_uint8(v_reuseFailAlloc_837_, sizeof(void*)*3 + 3, v_isExported_797_);
lean_ctor_set_uint8(v_reuseFailAlloc_837_, sizeof(void*)*3 + 4, v_importAll_798_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
else
{
lean_del_object(v___x_827_);
goto v___jp_800_;
}
}
else
{
lean_del_object(v___x_827_);
goto v___jp_800_;
}
}
v___jp_838_:
{
uint32_t v___x_839_; uint8_t v___x_840_; 
v___x_839_ = 97;
v___x_840_ = lean_uint32_dec_le(v___x_839_, v_curr_829_);
if (v___x_840_ == 0)
{
goto v___jp_830_;
}
else
{
uint32_t v___x_841_; uint8_t v___x_842_; 
v___x_841_ = 122;
v___x_842_ = lean_uint32_dec_le(v_curr_829_, v___x_841_);
if (v___x_842_ == 0)
{
goto v___jp_830_;
}
else
{
lean_del_object(v___x_827_);
goto v___jp_800_;
}
}
}
}
}
else
{
lean_object* v___x_906_; 
lean_dec(v_module_742_);
lean_dec_ref(v_finalize_741_);
lean_dec_ref(v_input_740_);
v___x_906_ = l_Lean_ParseImports_State_mkEOIError(v_s_743_);
return v___x_906_;
}
v___jp_744_:
{
lean_object* v___x_754_; lean_object* v_s_755_; 
v___x_754_ = lean_string_utf8_next(v_input_740_, v___y_751_);
lean_dec(v___y_751_);
v_s_755_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_s_755_, 0, v___y_750_);
lean_ctor_set(v_s_755_, 1, v___x_754_);
lean_ctor_set(v_s_755_, 2, v___y_747_);
lean_ctor_set_uint8(v_s_755_, sizeof(void*)*3, v___y_749_);
lean_ctor_set_uint8(v_s_755_, sizeof(void*)*3 + 1, v___y_746_);
lean_ctor_set_uint8(v_s_755_, sizeof(void*)*3 + 2, v___y_752_);
lean_ctor_set_uint8(v_s_755_, sizeof(void*)*3 + 3, v___y_748_);
lean_ctor_set_uint8(v_s_755_, sizeof(void*)*3 + 4, v___y_753_);
v_module_742_ = v___y_745_;
v_s_743_ = v_s_755_;
goto _start;
}
v___jp_757_:
{
uint32_t v___x_769_; uint8_t v___x_770_; 
v___x_769_ = 95;
v___x_770_ = lean_uint32_dec_eq(v___y_765_, v___x_769_);
if (v___x_770_ == 0)
{
uint8_t v___x_771_; 
v___x_771_ = l_Lean_isLetterLike(v___y_765_);
if (v___x_771_ == 0)
{
uint32_t v___x_772_; uint8_t v___x_773_; 
v___x_772_ = l_Lean_idBeginEscape;
v___x_773_ = lean_uint32_dec_eq(v___y_765_, v___x_772_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; 
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec(v___y_758_);
v___x_774_ = lean_apply_3(v_finalize_741_, v___y_760_, v_input_740_, v___y_767_);
return v___x_774_;
}
else
{
lean_dec_ref(v___y_767_);
v___y_745_ = v___y_760_;
v___y_746_ = v___y_759_;
v___y_747_ = v___y_758_;
v___y_748_ = v___y_761_;
v___y_749_ = v___y_762_;
v___y_750_ = v___y_764_;
v___y_751_ = v___y_763_;
v___y_752_ = v___y_766_;
v___y_753_ = v___y_768_;
goto v___jp_744_;
}
}
else
{
lean_dec_ref(v___y_767_);
v___y_745_ = v___y_760_;
v___y_746_ = v___y_759_;
v___y_747_ = v___y_758_;
v___y_748_ = v___y_761_;
v___y_749_ = v___y_762_;
v___y_750_ = v___y_764_;
v___y_751_ = v___y_763_;
v___y_752_ = v___y_766_;
v___y_753_ = v___y_768_;
goto v___jp_744_;
}
}
else
{
lean_dec_ref(v___y_767_);
v___y_745_ = v___y_760_;
v___y_746_ = v___y_759_;
v___y_747_ = v___y_758_;
v___y_748_ = v___y_761_;
v___y_749_ = v___y_762_;
v___y_750_ = v___y_764_;
v___y_751_ = v___y_763_;
v___y_752_ = v___y_766_;
v___y_753_ = v___y_768_;
goto v___jp_744_;
}
}
v___jp_775_:
{
uint32_t v___x_787_; uint8_t v___x_788_; 
v___x_787_ = 97;
v___x_788_ = lean_uint32_dec_le(v___x_787_, v___y_783_);
if (v___x_788_ == 0)
{
v___y_758_ = v___y_778_;
v___y_759_ = v___y_777_;
v___y_760_ = v___y_776_;
v___y_761_ = v___y_779_;
v___y_762_ = v___y_780_;
v___y_763_ = v___y_782_;
v___y_764_ = v___y_781_;
v___y_765_ = v___y_783_;
v___y_766_ = v___y_784_;
v___y_767_ = v___y_785_;
v___y_768_ = v___y_786_;
goto v___jp_757_;
}
else
{
uint32_t v___x_789_; uint8_t v___x_790_; 
v___x_789_ = 122;
v___x_790_ = lean_uint32_dec_le(v___y_783_, v___x_789_);
if (v___x_790_ == 0)
{
v___y_758_ = v___y_778_;
v___y_759_ = v___y_777_;
v___y_760_ = v___y_776_;
v___y_761_ = v___y_779_;
v___y_762_ = v___y_780_;
v___y_763_ = v___y_782_;
v___y_764_ = v___y_781_;
v___y_765_ = v___y_783_;
v___y_766_ = v___y_784_;
v___y_767_ = v___y_785_;
v___y_768_ = v___y_786_;
goto v___jp_757_;
}
else
{
lean_dec_ref(v___y_785_);
v___y_745_ = v___y_776_;
v___y_746_ = v___y_777_;
v___y_747_ = v___y_778_;
v___y_748_ = v___y_779_;
v___y_749_ = v___y_780_;
v___y_750_ = v___y_781_;
v___y_751_ = v___y_782_;
v___y_752_ = v___y_784_;
v___y_753_ = v___y_786_;
goto v___jp_744_;
}
}
}
v___jp_800_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v_s_803_; lean_object* v_imports_804_; lean_object* v_pos_805_; uint8_t v_badModifier_806_; lean_object* v_error_x3f_807_; uint8_t v_isModule_808_; uint8_t v_isMeta_809_; uint8_t v_isExported_810_; uint8_t v_importAll_811_; lean_object* v___x_812_; lean_object* v_module_813_; uint32_t v_curr_814_; uint32_t v___x_815_; uint8_t v___x_816_; 
v___x_801_ = lean_string_utf8_next_fast(v_input_740_, v_pos_792_);
v___x_802_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_802_, 0, v_imports_791_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
lean_ctor_set(v___x_802_, 2, v_error_x3f_794_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*3, v_badModifier_793_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*3 + 1, v_isModule_795_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*3 + 2, v_isMeta_796_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*3 + 3, v_isExported_797_);
lean_ctor_set_uint8(v___x_802_, sizeof(void*)*3 + 4, v_importAll_798_);
v_s_803_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(v___x_799_, v_input_740_, v___x_802_);
v_imports_804_ = lean_ctor_get(v_s_803_, 0);
v_pos_805_ = lean_ctor_get(v_s_803_, 1);
v_badModifier_806_ = lean_ctor_get_uint8(v_s_803_, sizeof(void*)*3);
v_error_x3f_807_ = lean_ctor_get(v_s_803_, 2);
v_isModule_808_ = lean_ctor_get_uint8(v_s_803_, sizeof(void*)*3 + 1);
v_isMeta_809_ = lean_ctor_get_uint8(v_s_803_, sizeof(void*)*3 + 2);
v_isExported_810_ = lean_ctor_get_uint8(v_s_803_, sizeof(void*)*3 + 3);
v_importAll_811_ = lean_ctor_get_uint8(v_s_803_, sizeof(void*)*3 + 4);
v___x_812_ = lean_string_utf8_extract(v_input_740_, v_pos_792_, v_pos_805_);
lean_dec(v_pos_792_);
v_module_813_ = l_Lean_Name_str___override(v_module_742_, v___x_812_);
v_curr_814_ = lean_string_utf8_get(v_input_740_, v_pos_805_);
v___x_815_ = 46;
v___x_816_ = lean_uint32_dec_eq(v_curr_814_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; 
v___x_817_ = lean_apply_3(v_finalize_741_, v_module_813_, v_input_740_, v_s_803_);
return v___x_817_;
}
else
{
lean_object* v_i_818_; uint8_t v___x_819_; 
v_i_818_ = lean_string_utf8_next(v_input_740_, v_pos_805_);
v___x_819_ = lean_string_utf8_at_end(v_input_740_, v_i_818_);
if (v___x_819_ == 0)
{
uint32_t v_curr_820_; uint32_t v___x_821_; uint8_t v___x_822_; 
lean_inc(v_error_x3f_807_);
lean_inc(v_pos_805_);
lean_inc_ref(v_imports_804_);
v_curr_820_ = lean_string_utf8_get_fast(v_input_740_, v_i_818_);
lean_dec(v_i_818_);
v___x_821_ = 65;
v___x_822_ = lean_uint32_dec_le(v___x_821_, v_curr_820_);
if (v___x_822_ == 0)
{
v___y_776_ = v_module_813_;
v___y_777_ = v_isModule_808_;
v___y_778_ = v_error_x3f_807_;
v___y_779_ = v_isExported_810_;
v___y_780_ = v_badModifier_806_;
v___y_781_ = v_imports_804_;
v___y_782_ = v_pos_805_;
v___y_783_ = v_curr_820_;
v___y_784_ = v_isMeta_809_;
v___y_785_ = v_s_803_;
v___y_786_ = v_importAll_811_;
goto v___jp_775_;
}
else
{
uint32_t v___x_823_; uint8_t v___x_824_; 
v___x_823_ = 90;
v___x_824_ = lean_uint32_dec_le(v_curr_820_, v___x_823_);
if (v___x_824_ == 0)
{
v___y_776_ = v_module_813_;
v___y_777_ = v_isModule_808_;
v___y_778_ = v_error_x3f_807_;
v___y_779_ = v_isExported_810_;
v___y_780_ = v_badModifier_806_;
v___y_781_ = v_imports_804_;
v___y_782_ = v_pos_805_;
v___y_783_ = v_curr_820_;
v___y_784_ = v_isMeta_809_;
v___y_785_ = v_s_803_;
v___y_786_ = v_importAll_811_;
goto v___jp_775_;
}
else
{
lean_dec_ref(v_s_803_);
v___y_745_ = v_module_813_;
v___y_746_ = v_isModule_808_;
v___y_747_ = v_error_x3f_807_;
v___y_748_ = v_isExported_810_;
v___y_749_ = v_badModifier_806_;
v___y_750_ = v_imports_804_;
v___y_751_ = v_pos_805_;
v___y_752_ = v_isMeta_809_;
v___y_753_ = v_importAll_811_;
goto v___jp_744_;
}
}
}
else
{
lean_object* v___x_825_; 
lean_dec(v_i_818_);
v___x_825_ = lean_apply_3(v_finalize_741_, v_module_813_, v_input_740_, v_s_803_);
return v___x_825_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0(lean_object* v_module_907_, lean_object* v_input_908_, lean_object* v_s_909_){
_start:
{
uint8_t v_isMeta_910_; uint8_t v_isExported_911_; uint8_t v_importAll_912_; lean_object* v_imp_913_; lean_object* v___x_914_; lean_object* v_s_915_; lean_object* v_imports_916_; lean_object* v_pos_917_; uint8_t v_badModifier_918_; lean_object* v_error_x3f_919_; uint8_t v_isModule_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_932_; 
v_isMeta_910_ = lean_ctor_get_uint8(v_s_909_, sizeof(void*)*3 + 2);
v_isExported_911_ = lean_ctor_get_uint8(v_s_909_, sizeof(void*)*3 + 3);
v_importAll_912_ = lean_ctor_get_uint8(v_s_909_, sizeof(void*)*3 + 4);
v_imp_913_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_imp_913_, 0, v_module_907_);
lean_ctor_set_uint8(v_imp_913_, sizeof(void*)*1, v_importAll_912_);
lean_ctor_set_uint8(v_imp_913_, sizeof(void*)*1 + 1, v_isExported_911_);
lean_ctor_set_uint8(v_imp_913_, sizeof(void*)*1 + 2, v_isMeta_910_);
v___x_914_ = l_Lean_ParseImports_State_pushImport(v_imp_913_, v_s_909_);
v_s_915_ = l_Lean_ParseImports_whitespace(v_input_908_, v___x_914_);
v_imports_916_ = lean_ctor_get(v_s_915_, 0);
v_pos_917_ = lean_ctor_get(v_s_915_, 1);
v_badModifier_918_ = lean_ctor_get_uint8(v_s_915_, sizeof(void*)*3);
v_error_x3f_919_ = lean_ctor_get(v_s_915_, 2);
v_isModule_920_ = lean_ctor_get_uint8(v_s_915_, sizeof(void*)*3 + 1);
v_isSharedCheck_932_ = !lean_is_exclusive(v_s_915_);
if (v_isSharedCheck_932_ == 0)
{
v___x_922_ = v_s_915_;
v_isShared_923_ = v_isSharedCheck_932_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_error_x3f_919_);
lean_inc(v_pos_917_);
lean_inc(v_imports_916_);
lean_dec(v_s_915_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_932_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
uint8_t v___x_924_; 
v___x_924_ = 0;
if (v_isModule_920_ == 0)
{
uint8_t v___x_925_; lean_object* v___x_927_; 
v___x_925_ = 1;
if (v_isShared_923_ == 0)
{
v___x_927_ = v___x_922_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_imports_916_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_pos_917_);
lean_ctor_set(v_reuseFailAlloc_928_, 2, v_error_x3f_919_);
lean_ctor_set_uint8(v_reuseFailAlloc_928_, sizeof(void*)*3, v_badModifier_918_);
lean_ctor_set_uint8(v_reuseFailAlloc_928_, sizeof(void*)*3 + 1, v_isModule_920_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_ctor_set_uint8(v___x_927_, sizeof(void*)*3 + 2, v___x_924_);
lean_ctor_set_uint8(v___x_927_, sizeof(void*)*3 + 3, v___x_925_);
lean_ctor_set_uint8(v___x_927_, sizeof(void*)*3 + 4, v___x_924_);
return v___x_927_;
}
}
else
{
lean_object* v___x_930_; 
if (v_isShared_923_ == 0)
{
v___x_930_ = v___x_922_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_imports_916_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_pos_917_);
lean_ctor_set(v_reuseFailAlloc_931_, 2, v_error_x3f_919_);
lean_ctor_set_uint8(v_reuseFailAlloc_931_, sizeof(void*)*3, v_badModifier_918_);
lean_ctor_set_uint8(v_reuseFailAlloc_931_, sizeof(void*)*3 + 1, v_isModule_920_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*3 + 2, v___x_924_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*3 + 3, v___x_924_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*3 + 4, v___x_924_);
return v___x_930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0___boxed(lean_object* v_module_933_, lean_object* v_input_934_, lean_object* v_s_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lean_ParseImports_moduleIdent___lam__0(v_module_933_, v_input_934_, v_s_935_);
lean_dec_ref(v_input_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent(lean_object* v_input_938_, lean_object* v_s_939_){
_start:
{
lean_object* v_finalize_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v_finalize_940_ = ((lean_object*)(l_Lean_ParseImports_moduleIdent___closed__0));
v___x_941_ = lean_box(0);
v___x_942_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(v_input_938_, v_finalize_940_, v___x_941_, v_s_939_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_atomic(lean_object* v_p_943_, lean_object* v_input_944_, lean_object* v_s_945_){
_start:
{
lean_object* v_pos_946_; lean_object* v_s_947_; lean_object* v_error_x3f_948_; 
v_pos_946_ = lean_ctor_get(v_s_945_, 1);
lean_inc(v_pos_946_);
v_s_947_ = lean_apply_2(v_p_943_, v_input_944_, v_s_945_);
v_error_x3f_948_ = lean_ctor_get(v_s_947_, 2);
lean_inc(v_error_x3f_948_);
if (lean_obj_tag(v_error_x3f_948_) == 1)
{
lean_object* v_imports_949_; uint8_t v_badModifier_950_; uint8_t v_isModule_951_; uint8_t v_isMeta_952_; uint8_t v_isExported_953_; uint8_t v_importAll_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_imports_949_ = lean_ctor_get(v_s_947_, 0);
v_badModifier_950_ = lean_ctor_get_uint8(v_s_947_, sizeof(void*)*3);
v_isModule_951_ = lean_ctor_get_uint8(v_s_947_, sizeof(void*)*3 + 1);
v_isMeta_952_ = lean_ctor_get_uint8(v_s_947_, sizeof(void*)*3 + 2);
v_isExported_953_ = lean_ctor_get_uint8(v_s_947_, sizeof(void*)*3 + 3);
v_importAll_954_ = lean_ctor_get_uint8(v_s_947_, sizeof(void*)*3 + 4);
v_isSharedCheck_961_ = !lean_is_exclusive(v_s_947_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; lean_object* v_unused_963_; 
v_unused_962_ = lean_ctor_get(v_s_947_, 2);
lean_dec(v_unused_962_);
v_unused_963_ = lean_ctor_get(v_s_947_, 1);
lean_dec(v_unused_963_);
v___x_956_ = v_s_947_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_imports_949_);
lean_dec(v_s_947_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v_pos_946_);
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_imports_949_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v_pos_946_);
lean_ctor_set(v_reuseFailAlloc_960_, 2, v_error_x3f_948_);
lean_ctor_set_uint8(v_reuseFailAlloc_960_, sizeof(void*)*3, v_badModifier_950_);
lean_ctor_set_uint8(v_reuseFailAlloc_960_, sizeof(void*)*3 + 1, v_isModule_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_960_, sizeof(void*)*3 + 2, v_isMeta_952_);
lean_ctor_set_uint8(v_reuseFailAlloc_960_, sizeof(void*)*3 + 3, v_isExported_953_);
lean_ctor_set_uint8(v_reuseFailAlloc_960_, sizeof(void*)*3 + 4, v_importAll_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
else
{
lean_dec(v_error_x3f_948_);
lean_dec(v_pos_946_);
return v_s_947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports(lean_object* v_p_967_, lean_object* v_input_968_, lean_object* v_s_969_){
_start:
{
lean_object* v_pos_970_; lean_object* v_s_971_; lean_object* v_error_x3f_972_; 
v_pos_970_ = lean_ctor_get(v_s_969_, 1);
lean_inc(v_pos_970_);
lean_inc_ref(v_p_967_);
lean_inc_ref(v_input_968_);
v_s_971_ = lean_apply_2(v_p_967_, v_input_968_, v_s_969_);
v_error_x3f_972_ = lean_ctor_get(v_s_971_, 2);
lean_inc(v_error_x3f_972_);
if (lean_obj_tag(v_error_x3f_972_) == 1)
{
lean_object* v_imports_973_; lean_object* v_pos_974_; uint8_t v_isModule_975_; uint8_t v_isMeta_976_; uint8_t v_isExported_977_; uint8_t v_importAll_978_; uint8_t v_decide_979_; 
lean_dec_ref_known(v_error_x3f_972_, 1);
lean_dec_ref(v_input_968_);
lean_dec_ref(v_p_967_);
v_imports_973_ = lean_ctor_get(v_s_971_, 0);
lean_inc_ref(v_imports_973_);
v_pos_974_ = lean_ctor_get(v_s_971_, 1);
lean_inc(v_pos_974_);
v_isModule_975_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 1);
v_isMeta_976_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 2);
v_isExported_977_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 3);
v_importAll_978_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 4);
v_decide_979_ = lean_nat_dec_eq(v_pos_974_, v_pos_970_);
lean_dec(v_pos_970_);
if (v_decide_979_ == 0)
{
lean_dec(v_pos_974_);
lean_dec_ref(v_imports_973_);
return v_s_971_;
}
else
{
lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_988_; 
v_isSharedCheck_988_ = !lean_is_exclusive(v_s_971_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; lean_object* v_unused_990_; lean_object* v_unused_991_; 
v_unused_989_ = lean_ctor_get(v_s_971_, 2);
lean_dec(v_unused_989_);
v_unused_990_ = lean_ctor_get(v_s_971_, 1);
lean_dec(v_unused_990_);
v_unused_991_ = lean_ctor_get(v_s_971_, 0);
lean_dec(v_unused_991_);
v___x_981_ = v_s_971_;
v_isShared_982_ = v_isSharedCheck_988_;
goto v_resetjp_980_;
}
else
{
lean_dec(v_s_971_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_988_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
uint8_t v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_983_ = 0;
v___x_984_ = lean_box(0);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 2, v___x_984_);
v___x_986_ = v___x_981_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_imports_973_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_pos_974_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v___x_984_);
lean_ctor_set_uint8(v_reuseFailAlloc_987_, sizeof(void*)*3 + 1, v_isModule_975_);
lean_ctor_set_uint8(v_reuseFailAlloc_987_, sizeof(void*)*3 + 2, v_isMeta_976_);
lean_ctor_set_uint8(v_reuseFailAlloc_987_, sizeof(void*)*3 + 3, v_isExported_977_);
lean_ctor_set_uint8(v_reuseFailAlloc_987_, sizeof(void*)*3 + 4, v_importAll_978_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_ctor_set_uint8(v___x_986_, sizeof(void*)*3, v___x_983_);
return v___x_986_;
}
}
}
}
else
{
uint8_t v_badModifier_992_; 
lean_dec(v_error_x3f_972_);
v_badModifier_992_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3);
if (v_badModifier_992_ == 0)
{
lean_dec(v_pos_970_);
v_s_969_ = v_s_971_;
goto _start;
}
else
{
lean_object* v_imports_994_; uint8_t v_isModule_995_; uint8_t v_isMeta_996_; uint8_t v_isExported_997_; uint8_t v_importAll_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1007_; 
lean_dec_ref(v_input_968_);
lean_dec_ref(v_p_967_);
v_imports_994_ = lean_ctor_get(v_s_971_, 0);
v_isModule_995_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 1);
v_isMeta_996_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 2);
v_isExported_997_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 3);
v_importAll_998_ = lean_ctor_get_uint8(v_s_971_, sizeof(void*)*3 + 4);
v_isSharedCheck_1007_ = !lean_is_exclusive(v_s_971_);
if (v_isSharedCheck_1007_ == 0)
{
lean_object* v_unused_1008_; lean_object* v_unused_1009_; 
v_unused_1008_ = lean_ctor_get(v_s_971_, 2);
lean_dec(v_unused_1008_);
v_unused_1009_ = lean_ctor_get(v_s_971_, 1);
lean_dec(v_unused_1009_);
v___x_1000_ = v_s_971_;
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_imports_994_);
lean_dec(v_s_971_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
uint8_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1002_ = 0;
v___x_1003_ = ((lean_object*)(l_Lean_ParseImports_manyImports___closed__1));
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 2, v___x_1003_);
lean_ctor_set(v___x_1000_, 1, v_pos_970_);
v___x_1005_ = v___x_1000_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_imports_994_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_pos_970_);
lean_ctor_set(v_reuseFailAlloc_1006_, 2, v___x_1003_);
lean_ctor_set_uint8(v_reuseFailAlloc_1006_, sizeof(void*)*3 + 1, v_isModule_995_);
lean_ctor_set_uint8(v_reuseFailAlloc_1006_, sizeof(void*)*3 + 2, v_isMeta_996_);
lean_ctor_set_uint8(v_reuseFailAlloc_1006_, sizeof(void*)*3 + 3, v_isExported_997_);
lean_ctor_set_uint8(v_reuseFailAlloc_1006_, sizeof(void*)*3 + 4, v_importAll_998_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_ctor_set_uint8(v___x_1005_, sizeof(void*)*3, v___x_1002_);
return v___x_1005_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg(uint8_t v_isModule_1010_, lean_object* v_s_1011_){
_start:
{
if (v_isModule_1010_ == 0)
{
lean_object* v_imports_1012_; lean_object* v_pos_1013_; uint8_t v_badModifier_1014_; lean_object* v_error_x3f_1015_; uint8_t v_isMeta_1016_; uint8_t v_importAll_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1025_; 
v_imports_1012_ = lean_ctor_get(v_s_1011_, 0);
v_pos_1013_ = lean_ctor_get(v_s_1011_, 1);
v_badModifier_1014_ = lean_ctor_get_uint8(v_s_1011_, sizeof(void*)*3);
v_error_x3f_1015_ = lean_ctor_get(v_s_1011_, 2);
v_isMeta_1016_ = lean_ctor_get_uint8(v_s_1011_, sizeof(void*)*3 + 2);
v_importAll_1017_ = lean_ctor_get_uint8(v_s_1011_, sizeof(void*)*3 + 4);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_s_1011_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1019_ = v_s_1011_;
v_isShared_1020_ = v_isSharedCheck_1025_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_error_x3f_1015_);
lean_inc(v_pos_1013_);
lean_inc(v_imports_1012_);
lean_dec(v_s_1011_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1025_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
uint8_t v___x_1021_; lean_object* v___x_1023_; 
v___x_1021_ = 1;
if (v_isShared_1020_ == 0)
{
v___x_1023_ = v___x_1019_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_imports_1012_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_pos_1013_);
lean_ctor_set(v_reuseFailAlloc_1024_, 2, v_error_x3f_1015_);
lean_ctor_set_uint8(v_reuseFailAlloc_1024_, sizeof(void*)*3, v_badModifier_1014_);
lean_ctor_set_uint8(v_reuseFailAlloc_1024_, sizeof(void*)*3 + 2, v_isMeta_1016_);
lean_ctor_set_uint8(v_reuseFailAlloc_1024_, sizeof(void*)*3 + 4, v_importAll_1017_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*3 + 1, v_isModule_1010_);
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*3 + 3, v___x_1021_);
return v___x_1023_;
}
}
}
else
{
lean_object* v_imports_1026_; lean_object* v_pos_1027_; uint8_t v_badModifier_1028_; lean_object* v_error_x3f_1029_; uint8_t v_isMeta_1030_; uint8_t v_importAll_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1039_; 
v_imports_1026_ = lean_ctor_get(v_s_1011_, 0);
v_pos_1027_ = lean_ctor_get(v_s_1011_, 1);
v_badModifier_1028_ = lean_ctor_get_uint8(v_s_1011_, sizeof(void*)*3);
v_error_x3f_1029_ = lean_ctor_get(v_s_1011_, 2);
v_isMeta_1030_ = lean_ctor_get_uint8(v_s_1011_, sizeof(void*)*3 + 2);
v_importAll_1031_ = lean_ctor_get_uint8(v_s_1011_, sizeof(void*)*3 + 4);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_s_1011_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1033_ = v_s_1011_;
v_isShared_1034_ = v_isSharedCheck_1039_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_error_x3f_1029_);
lean_inc(v_pos_1027_);
lean_inc(v_imports_1026_);
lean_dec(v_s_1011_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1039_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
uint8_t v___x_1035_; lean_object* v___x_1037_; 
v___x_1035_ = 0;
if (v_isShared_1034_ == 0)
{
v___x_1037_ = v___x_1033_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_imports_1026_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_pos_1027_);
lean_ctor_set(v_reuseFailAlloc_1038_, 2, v_error_x3f_1029_);
lean_ctor_set_uint8(v_reuseFailAlloc_1038_, sizeof(void*)*3, v_badModifier_1028_);
lean_ctor_set_uint8(v_reuseFailAlloc_1038_, sizeof(void*)*3 + 2, v_isMeta_1030_);
lean_ctor_set_uint8(v_reuseFailAlloc_1038_, sizeof(void*)*3 + 4, v_importAll_1031_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*3 + 1, v_isModule_1010_);
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*3 + 3, v___x_1035_);
return v___x_1037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg___boxed(lean_object* v_isModule_1040_, lean_object* v_s_1041_){
_start:
{
uint8_t v_isModule_boxed_1042_; lean_object* v_res_1043_; 
v_isModule_boxed_1042_ = lean_unbox(v_isModule_1040_);
v_res_1043_ = l_Lean_ParseImports_setIsModule___redArg(v_isModule_boxed_1042_, v_s_1041_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule(uint8_t v_isModule_1044_, lean_object* v_x_1045_, lean_object* v_s_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_ParseImports_setIsModule___redArg(v_isModule_1044_, v_s_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___boxed(lean_object* v_isModule_1048_, lean_object* v_x_1049_, lean_object* v_s_1050_){
_start:
{
uint8_t v_isModule_boxed_1051_; lean_object* v_res_1052_; 
v_isModule_boxed_1051_ = lean_unbox(v_isModule_1048_);
v_res_1052_ = l_Lean_ParseImports_setIsModule(v_isModule_boxed_1051_, v_x_1049_, v_s_1050_);
lean_dec_ref(v_x_1049_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___redArg(lean_object* v_s_1053_){
_start:
{
uint8_t v_isModule_1054_; 
v_isModule_1054_ = lean_ctor_get_uint8(v_s_1053_, sizeof(void*)*3 + 1);
if (v_isModule_1054_ == 0)
{
lean_object* v_imports_1055_; lean_object* v_pos_1056_; lean_object* v_error_x3f_1057_; uint8_t v_isMeta_1058_; uint8_t v_isExported_1059_; uint8_t v_importAll_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1068_; 
v_imports_1055_ = lean_ctor_get(v_s_1053_, 0);
v_pos_1056_ = lean_ctor_get(v_s_1053_, 1);
v_error_x3f_1057_ = lean_ctor_get(v_s_1053_, 2);
v_isMeta_1058_ = lean_ctor_get_uint8(v_s_1053_, sizeof(void*)*3 + 2);
v_isExported_1059_ = lean_ctor_get_uint8(v_s_1053_, sizeof(void*)*3 + 3);
v_importAll_1060_ = lean_ctor_get_uint8(v_s_1053_, sizeof(void*)*3 + 4);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_s_1053_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1062_ = v_s_1053_;
v_isShared_1063_ = v_isSharedCheck_1068_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_error_x3f_1057_);
lean_inc(v_pos_1056_);
lean_inc(v_imports_1055_);
lean_dec(v_s_1053_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1068_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
uint8_t v___x_1064_; lean_object* v___x_1066_; 
v___x_1064_ = 1;
if (v_isShared_1063_ == 0)
{
v___x_1066_ = v___x_1062_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_imports_1055_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v_pos_1056_);
lean_ctor_set(v_reuseFailAlloc_1067_, 2, v_error_x3f_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, sizeof(void*)*3 + 1, v_isModule_1054_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, sizeof(void*)*3 + 2, v_isMeta_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, sizeof(void*)*3 + 3, v_isExported_1059_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, sizeof(void*)*3 + 4, v_importAll_1060_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_ctor_set_uint8(v___x_1066_, sizeof(void*)*3, v___x_1064_);
return v___x_1066_;
}
}
}
else
{
lean_object* v_imports_1069_; lean_object* v_pos_1070_; uint8_t v_badModifier_1071_; lean_object* v_error_x3f_1072_; uint8_t v_isExported_1073_; uint8_t v_importAll_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
v_imports_1069_ = lean_ctor_get(v_s_1053_, 0);
v_pos_1070_ = lean_ctor_get(v_s_1053_, 1);
v_badModifier_1071_ = lean_ctor_get_uint8(v_s_1053_, sizeof(void*)*3);
v_error_x3f_1072_ = lean_ctor_get(v_s_1053_, 2);
v_isExported_1073_ = lean_ctor_get_uint8(v_s_1053_, sizeof(void*)*3 + 3);
v_importAll_1074_ = lean_ctor_get_uint8(v_s_1053_, sizeof(void*)*3 + 4);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_s_1053_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v_s_1053_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_error_x3f_1072_);
lean_inc(v_pos_1070_);
lean_inc(v_imports_1069_);
lean_dec(v_s_1053_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_imports_1069_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v_pos_1070_);
lean_ctor_set(v_reuseFailAlloc_1080_, 2, v_error_x3f_1072_);
lean_ctor_set_uint8(v_reuseFailAlloc_1080_, sizeof(void*)*3, v_badModifier_1071_);
lean_ctor_set_uint8(v_reuseFailAlloc_1080_, sizeof(void*)*3 + 1, v_isModule_1054_);
lean_ctor_set_uint8(v_reuseFailAlloc_1080_, sizeof(void*)*3 + 3, v_isExported_1073_);
lean_ctor_set_uint8(v_reuseFailAlloc_1080_, sizeof(void*)*3 + 4, v_importAll_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_ctor_set_uint8(v___x_1079_, sizeof(void*)*3 + 2, v_isModule_1054_);
return v___x_1079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta(lean_object* v_x_1082_, lean_object* v_s_1083_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lean_ParseImports_setMeta___redArg(v_s_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___boxed(lean_object* v_x_1085_, lean_object* v_s_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lean_ParseImports_setMeta(v_x_1085_, v_s_1086_);
lean_dec_ref(v_x_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___redArg(lean_object* v_s_1088_){
_start:
{
uint8_t v_isModule_1089_; 
v_isModule_1089_ = lean_ctor_get_uint8(v_s_1088_, sizeof(void*)*3 + 1);
if (v_isModule_1089_ == 0)
{
lean_object* v_imports_1090_; lean_object* v_pos_1091_; lean_object* v_error_x3f_1092_; uint8_t v_isMeta_1093_; uint8_t v_isExported_1094_; uint8_t v_importAll_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1103_; 
v_imports_1090_ = lean_ctor_get(v_s_1088_, 0);
v_pos_1091_ = lean_ctor_get(v_s_1088_, 1);
v_error_x3f_1092_ = lean_ctor_get(v_s_1088_, 2);
v_isMeta_1093_ = lean_ctor_get_uint8(v_s_1088_, sizeof(void*)*3 + 2);
v_isExported_1094_ = lean_ctor_get_uint8(v_s_1088_, sizeof(void*)*3 + 3);
v_importAll_1095_ = lean_ctor_get_uint8(v_s_1088_, sizeof(void*)*3 + 4);
v_isSharedCheck_1103_ = !lean_is_exclusive(v_s_1088_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1097_ = v_s_1088_;
v_isShared_1098_ = v_isSharedCheck_1103_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_error_x3f_1092_);
lean_inc(v_pos_1091_);
lean_inc(v_imports_1090_);
lean_dec(v_s_1088_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1103_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
uint8_t v___x_1099_; lean_object* v___x_1101_; 
v___x_1099_ = 1;
if (v_isShared_1098_ == 0)
{
v___x_1101_ = v___x_1097_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_imports_1090_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v_pos_1091_);
lean_ctor_set(v_reuseFailAlloc_1102_, 2, v_error_x3f_1092_);
lean_ctor_set_uint8(v_reuseFailAlloc_1102_, sizeof(void*)*3 + 1, v_isModule_1089_);
lean_ctor_set_uint8(v_reuseFailAlloc_1102_, sizeof(void*)*3 + 2, v_isMeta_1093_);
lean_ctor_set_uint8(v_reuseFailAlloc_1102_, sizeof(void*)*3 + 3, v_isExported_1094_);
lean_ctor_set_uint8(v_reuseFailAlloc_1102_, sizeof(void*)*3 + 4, v_importAll_1095_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*3, v___x_1099_);
return v___x_1101_;
}
}
}
else
{
lean_object* v_imports_1104_; lean_object* v_pos_1105_; uint8_t v_badModifier_1106_; lean_object* v_error_x3f_1107_; uint8_t v_isMeta_1108_; uint8_t v_importAll_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
v_imports_1104_ = lean_ctor_get(v_s_1088_, 0);
v_pos_1105_ = lean_ctor_get(v_s_1088_, 1);
v_badModifier_1106_ = lean_ctor_get_uint8(v_s_1088_, sizeof(void*)*3);
v_error_x3f_1107_ = lean_ctor_get(v_s_1088_, 2);
v_isMeta_1108_ = lean_ctor_get_uint8(v_s_1088_, sizeof(void*)*3 + 2);
v_importAll_1109_ = lean_ctor_get_uint8(v_s_1088_, sizeof(void*)*3 + 4);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_s_1088_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v_s_1088_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_error_x3f_1107_);
lean_inc(v_pos_1105_);
lean_inc(v_imports_1104_);
lean_dec(v_s_1088_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_imports_1104_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_pos_1105_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v_error_x3f_1107_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*3, v_badModifier_1106_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*3 + 1, v_isModule_1089_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*3 + 2, v_isMeta_1108_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*3 + 4, v_importAll_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_ctor_set_uint8(v___x_1114_, sizeof(void*)*3 + 3, v_isModule_1089_);
return v___x_1114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported(lean_object* v_x_1117_, lean_object* v_s_1118_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_ParseImports_setExported___redArg(v_s_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___boxed(lean_object* v_x_1120_, lean_object* v_s_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_ParseImports_setExported(v_x_1120_, v_s_1121_);
lean_dec_ref(v_x_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___redArg(lean_object* v_s_1123_){
_start:
{
uint8_t v_isModule_1124_; 
v_isModule_1124_ = lean_ctor_get_uint8(v_s_1123_, sizeof(void*)*3 + 1);
if (v_isModule_1124_ == 0)
{
lean_object* v_imports_1125_; lean_object* v_pos_1126_; lean_object* v_error_x3f_1127_; uint8_t v_isMeta_1128_; uint8_t v_isExported_1129_; uint8_t v_importAll_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1138_; 
v_imports_1125_ = lean_ctor_get(v_s_1123_, 0);
v_pos_1126_ = lean_ctor_get(v_s_1123_, 1);
v_error_x3f_1127_ = lean_ctor_get(v_s_1123_, 2);
v_isMeta_1128_ = lean_ctor_get_uint8(v_s_1123_, sizeof(void*)*3 + 2);
v_isExported_1129_ = lean_ctor_get_uint8(v_s_1123_, sizeof(void*)*3 + 3);
v_importAll_1130_ = lean_ctor_get_uint8(v_s_1123_, sizeof(void*)*3 + 4);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_s_1123_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1132_ = v_s_1123_;
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_error_x3f_1127_);
lean_inc(v_pos_1126_);
lean_inc(v_imports_1125_);
lean_dec(v_s_1123_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
uint8_t v___x_1134_; lean_object* v___x_1136_; 
v___x_1134_ = 1;
if (v_isShared_1133_ == 0)
{
v___x_1136_ = v___x_1132_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_imports_1125_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_pos_1126_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_error_x3f_1127_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3 + 1, v_isModule_1124_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3 + 2, v_isMeta_1128_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3 + 3, v_isExported_1129_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3 + 4, v_importAll_1130_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_ctor_set_uint8(v___x_1136_, sizeof(void*)*3, v___x_1134_);
return v___x_1136_;
}
}
}
else
{
lean_object* v_imports_1139_; lean_object* v_pos_1140_; uint8_t v_badModifier_1141_; lean_object* v_error_x3f_1142_; uint8_t v_isMeta_1143_; uint8_t v_isExported_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
v_imports_1139_ = lean_ctor_get(v_s_1123_, 0);
v_pos_1140_ = lean_ctor_get(v_s_1123_, 1);
v_badModifier_1141_ = lean_ctor_get_uint8(v_s_1123_, sizeof(void*)*3);
v_error_x3f_1142_ = lean_ctor_get(v_s_1123_, 2);
v_isMeta_1143_ = lean_ctor_get_uint8(v_s_1123_, sizeof(void*)*3 + 2);
v_isExported_1144_ = lean_ctor_get_uint8(v_s_1123_, sizeof(void*)*3 + 3);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_s_1123_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v_s_1123_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_error_x3f_1142_);
lean_inc(v_pos_1140_);
lean_inc(v_imports_1139_);
lean_dec(v_s_1123_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_imports_1139_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_pos_1140_);
lean_ctor_set(v_reuseFailAlloc_1150_, 2, v_error_x3f_1142_);
lean_ctor_set_uint8(v_reuseFailAlloc_1150_, sizeof(void*)*3, v_badModifier_1141_);
lean_ctor_set_uint8(v_reuseFailAlloc_1150_, sizeof(void*)*3 + 1, v_isModule_1124_);
lean_ctor_set_uint8(v_reuseFailAlloc_1150_, sizeof(void*)*3 + 2, v_isMeta_1143_);
lean_ctor_set_uint8(v_reuseFailAlloc_1150_, sizeof(void*)*3 + 3, v_isExported_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_ctor_set_uint8(v___x_1149_, sizeof(void*)*3 + 4, v_isModule_1124_);
return v___x_1149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll(lean_object* v_x_1152_, lean_object* v_s_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Lean_ParseImports_setImportAll___redArg(v_s_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___boxed(lean_object* v_x_1155_, lean_object* v_s_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_ParseImports_setImportAll(v_x_1155_, v_s_1156_);
lean_dec_ref(v_x_1155_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(lean_object* v_k_1161_, lean_object* v_input_1162_, lean_object* v_s_1163_, lean_object* v_i_1164_, lean_object* v_j_1165_){
_start:
{
uint8_t v___x_1166_; 
v___x_1166_ = lean_string_utf8_at_end(v_k_1161_, v_i_1164_);
if (v___x_1166_ == 0)
{
uint8_t v___x_1167_; lean_object* v_s_1169_; uint8_t v___x_1175_; 
v___x_1167_ = 1;
v___x_1175_ = lean_string_utf8_at_end(v_input_1162_, v_j_1165_);
if (v___x_1175_ == 0)
{
uint32_t v_curr_u2081_1176_; uint32_t v_curr_u2082_1177_; uint8_t v___x_1178_; 
v_curr_u2081_1176_ = lean_string_utf8_get_fast(v_k_1161_, v_i_1164_);
v_curr_u2082_1177_ = lean_string_utf8_get_fast(v_input_1162_, v_j_1165_);
v___x_1178_ = lean_uint32_dec_eq(v_curr_u2081_1176_, v_curr_u2082_1177_);
if (v___x_1178_ == 0)
{
lean_dec(v_j_1165_);
lean_dec(v_i_1164_);
v_s_1169_ = v_s_1163_;
goto v___jp_1168_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_string_utf8_next_fast(v_k_1161_, v_i_1164_);
lean_dec(v_i_1164_);
v___x_1180_ = lean_string_utf8_next_fast(v_input_1162_, v_j_1165_);
lean_dec(v_j_1165_);
v_i_1164_ = v___x_1179_;
v_j_1165_ = v___x_1180_;
goto _start;
}
}
else
{
lean_dec(v_j_1165_);
lean_dec(v_i_1164_);
v_s_1169_ = v_s_1163_;
goto v___jp_1168_;
}
v___jp_1168_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1170_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1));
v___x_1171_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
lean_ctor_set_uint8(v___x_1171_, sizeof(void*)*1, v___x_1166_);
lean_ctor_set_uint8(v___x_1171_, sizeof(void*)*1 + 1, v___x_1167_);
lean_ctor_set_uint8(v___x_1171_, sizeof(void*)*1 + 2, v___x_1167_);
v___x_1172_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set_uint8(v___x_1172_, sizeof(void*)*1, v___x_1166_);
lean_ctor_set_uint8(v___x_1172_, sizeof(void*)*1 + 1, v___x_1167_);
lean_ctor_set_uint8(v___x_1172_, sizeof(void*)*1 + 2, v___x_1166_);
v___x_1173_ = l_Lean_ParseImports_State_pushImport(v___x_1172_, v_s_1169_);
v___x_1174_ = l_Lean_ParseImports_State_pushImport(v___x_1171_, v___x_1173_);
return v___x_1174_;
}
}
else
{
lean_object* v_imports_1182_; uint8_t v_badModifier_1183_; lean_object* v_error_x3f_1184_; uint8_t v_isModule_1185_; uint8_t v_isMeta_1186_; uint8_t v_isExported_1187_; uint8_t v_importAll_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1196_; 
lean_dec(v_i_1164_);
v_imports_1182_ = lean_ctor_get(v_s_1163_, 0);
v_badModifier_1183_ = lean_ctor_get_uint8(v_s_1163_, sizeof(void*)*3);
v_error_x3f_1184_ = lean_ctor_get(v_s_1163_, 2);
v_isModule_1185_ = lean_ctor_get_uint8(v_s_1163_, sizeof(void*)*3 + 1);
v_isMeta_1186_ = lean_ctor_get_uint8(v_s_1163_, sizeof(void*)*3 + 2);
v_isExported_1187_ = lean_ctor_get_uint8(v_s_1163_, sizeof(void*)*3 + 3);
v_importAll_1188_ = lean_ctor_get_uint8(v_s_1163_, sizeof(void*)*3 + 4);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_s_1163_);
if (v_isSharedCheck_1196_ == 0)
{
lean_object* v_unused_1197_; 
v_unused_1197_ = lean_ctor_get(v_s_1163_, 1);
lean_dec(v_unused_1197_);
v___x_1190_ = v_s_1163_;
v_isShared_1191_ = v_isSharedCheck_1196_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_error_x3f_1184_);
lean_inc(v_imports_1182_);
lean_dec(v_s_1163_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1196_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
lean_ctor_set(v___x_1190_, 1, v_j_1165_);
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_imports_1182_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_j_1165_);
lean_ctor_set(v_reuseFailAlloc_1195_, 2, v_error_x3f_1184_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*3, v_badModifier_1183_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*3 + 1, v_isModule_1185_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*3 + 2, v_isMeta_1186_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*3 + 3, v_isExported_1187_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*3 + 4, v_importAll_1188_);
v___x_1193_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_ParseImports_whitespace(v_input_1162_, v___x_1193_);
return v___x_1194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___boxed(lean_object* v_k_1198_, lean_object* v_input_1199_, lean_object* v_s_1200_, lean_object* v_i_1201_, lean_object* v_j_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(v_k_1198_, v_input_1199_, v_s_1200_, v_i_1201_, v_j_1202_);
lean_dec_ref(v_input_1199_);
lean_dec_ref(v_k_1198_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(lean_object* v_k_1207_, lean_object* v_input_1208_, lean_object* v_s_1209_, lean_object* v_i_1210_, lean_object* v_j_1211_){
_start:
{
lean_object* v_s_1213_; uint8_t v___x_1230_; 
v___x_1230_ = lean_string_utf8_at_end(v_k_1207_, v_i_1210_);
if (v___x_1230_ == 0)
{
uint8_t v___x_1231_; 
v___x_1231_ = lean_string_utf8_at_end(v_input_1208_, v_j_1211_);
if (v___x_1231_ == 0)
{
uint32_t v_curr_u2081_1232_; uint32_t v_curr_u2082_1233_; uint8_t v___x_1234_; 
v_curr_u2081_1232_ = lean_string_utf8_get_fast(v_k_1207_, v_i_1210_);
v_curr_u2082_1233_ = lean_string_utf8_get_fast(v_input_1208_, v_j_1211_);
v___x_1234_ = lean_uint32_dec_eq(v_curr_u2081_1232_, v_curr_u2082_1233_);
if (v___x_1234_ == 0)
{
lean_dec(v_j_1211_);
lean_dec(v_i_1210_);
v_s_1213_ = v_s_1209_;
goto v___jp_1212_;
}
else
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = lean_string_utf8_next_fast(v_k_1207_, v_i_1210_);
lean_dec(v_i_1210_);
v___x_1236_ = lean_string_utf8_next_fast(v_input_1208_, v_j_1211_);
lean_dec(v_j_1211_);
v_i_1210_ = v___x_1235_;
v_j_1211_ = v___x_1236_;
goto _start;
}
}
else
{
lean_dec(v_j_1211_);
lean_dec(v_i_1210_);
v_s_1213_ = v_s_1209_;
goto v___jp_1212_;
}
}
else
{
lean_object* v_imports_1238_; uint8_t v_badModifier_1239_; lean_object* v_error_x3f_1240_; uint8_t v_isModule_1241_; uint8_t v_isMeta_1242_; uint8_t v_isExported_1243_; uint8_t v_importAll_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1252_; 
lean_dec(v_i_1210_);
v_imports_1238_ = lean_ctor_get(v_s_1209_, 0);
v_badModifier_1239_ = lean_ctor_get_uint8(v_s_1209_, sizeof(void*)*3);
v_error_x3f_1240_ = lean_ctor_get(v_s_1209_, 2);
v_isModule_1241_ = lean_ctor_get_uint8(v_s_1209_, sizeof(void*)*3 + 1);
v_isMeta_1242_ = lean_ctor_get_uint8(v_s_1209_, sizeof(void*)*3 + 2);
v_isExported_1243_ = lean_ctor_get_uint8(v_s_1209_, sizeof(void*)*3 + 3);
v_importAll_1244_ = lean_ctor_get_uint8(v_s_1209_, sizeof(void*)*3 + 4);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_s_1209_);
if (v_isSharedCheck_1252_ == 0)
{
lean_object* v_unused_1253_; 
v_unused_1253_ = lean_ctor_get(v_s_1209_, 1);
lean_dec(v_unused_1253_);
v___x_1246_ = v_s_1209_;
v_isShared_1247_ = v_isSharedCheck_1252_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_error_x3f_1240_);
lean_inc(v_imports_1238_);
lean_dec(v_s_1209_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1252_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 1, v_j_1211_);
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_imports_1238_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_j_1211_);
lean_ctor_set(v_reuseFailAlloc_1251_, 2, v_error_x3f_1240_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, sizeof(void*)*3, v_badModifier_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, sizeof(void*)*3 + 1, v_isModule_1241_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, sizeof(void*)*3 + 2, v_isMeta_1242_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, sizeof(void*)*3 + 3, v_isExported_1243_);
lean_ctor_set_uint8(v_reuseFailAlloc_1251_, sizeof(void*)*3 + 4, v_importAll_1244_);
v___x_1249_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lean_ParseImports_whitespace(v_input_1208_, v___x_1249_);
return v___x_1250_;
}
}
}
v___jp_1212_:
{
lean_object* v_imports_1214_; lean_object* v_pos_1215_; uint8_t v_badModifier_1216_; uint8_t v_isModule_1217_; uint8_t v_isMeta_1218_; uint8_t v_isExported_1219_; uint8_t v_importAll_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1228_; 
v_imports_1214_ = lean_ctor_get(v_s_1213_, 0);
v_pos_1215_ = lean_ctor_get(v_s_1213_, 1);
v_badModifier_1216_ = lean_ctor_get_uint8(v_s_1213_, sizeof(void*)*3);
v_isModule_1217_ = lean_ctor_get_uint8(v_s_1213_, sizeof(void*)*3 + 1);
v_isMeta_1218_ = lean_ctor_get_uint8(v_s_1213_, sizeof(void*)*3 + 2);
v_isExported_1219_ = lean_ctor_get_uint8(v_s_1213_, sizeof(void*)*3 + 3);
v_importAll_1220_ = lean_ctor_get_uint8(v_s_1213_, sizeof(void*)*3 + 4);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_s_1213_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v_s_1213_, 2);
lean_dec(v_unused_1229_);
v___x_1222_ = v_s_1213_;
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_pos_1215_);
lean_inc(v_imports_1214_);
lean_dec(v_s_1213_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1224_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1));
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 2, v___x_1224_);
v___x_1226_ = v___x_1222_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_imports_1214_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_pos_1215_);
lean_ctor_set(v_reuseFailAlloc_1227_, 2, v___x_1224_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3, v_badModifier_1216_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 1, v_isModule_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 2, v_isMeta_1218_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 3, v_isExported_1219_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 4, v_importAll_1220_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___boxed(lean_object* v_k_1254_, lean_object* v_input_1255_, lean_object* v_s_1256_, lean_object* v_i_1257_, lean_object* v_j_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(v_k_1254_, v_input_1255_, v_s_1256_, v_i_1257_, v_j_1258_);
lean_dec_ref(v_input_1255_);
lean_dec_ref(v_k_1254_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(lean_object* v_k_1260_, lean_object* v_input_1261_, lean_object* v_s_1262_, lean_object* v_i_1263_, lean_object* v_j_1264_){
_start:
{
uint8_t v___x_1265_; 
v___x_1265_ = lean_string_utf8_at_end(v_k_1260_, v_i_1263_);
if (v___x_1265_ == 0)
{
uint8_t v___x_1266_; 
v___x_1266_ = lean_string_utf8_at_end(v_input_1261_, v_j_1264_);
if (v___x_1266_ == 0)
{
uint32_t v_curr_u2081_1267_; uint32_t v_curr_u2082_1268_; uint8_t v___x_1269_; 
v_curr_u2081_1267_ = lean_string_utf8_get_fast(v_k_1260_, v_i_1263_);
v_curr_u2082_1268_ = lean_string_utf8_get_fast(v_input_1261_, v_j_1264_);
v___x_1269_ = lean_uint32_dec_eq(v_curr_u2081_1267_, v_curr_u2082_1268_);
if (v___x_1269_ == 0)
{
lean_dec(v_j_1264_);
lean_dec(v_i_1263_);
return v_s_1262_;
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_string_utf8_next_fast(v_k_1260_, v_i_1263_);
lean_dec(v_i_1263_);
v___x_1271_ = lean_string_utf8_next_fast(v_input_1261_, v_j_1264_);
lean_dec(v_j_1264_);
v_i_1263_ = v___x_1270_;
v_j_1264_ = v___x_1271_;
goto _start;
}
}
else
{
lean_dec(v_j_1264_);
lean_dec(v_i_1263_);
return v_s_1262_;
}
}
else
{
lean_object* v_imports_1273_; uint8_t v_badModifier_1274_; lean_object* v_error_x3f_1275_; uint8_t v_isModule_1276_; uint8_t v_isMeta_1277_; uint8_t v_isExported_1278_; uint8_t v_importAll_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1288_; 
lean_dec(v_i_1263_);
v_imports_1273_ = lean_ctor_get(v_s_1262_, 0);
v_badModifier_1274_ = lean_ctor_get_uint8(v_s_1262_, sizeof(void*)*3);
v_error_x3f_1275_ = lean_ctor_get(v_s_1262_, 2);
v_isModule_1276_ = lean_ctor_get_uint8(v_s_1262_, sizeof(void*)*3 + 1);
v_isMeta_1277_ = lean_ctor_get_uint8(v_s_1262_, sizeof(void*)*3 + 2);
v_isExported_1278_ = lean_ctor_get_uint8(v_s_1262_, sizeof(void*)*3 + 3);
v_importAll_1279_ = lean_ctor_get_uint8(v_s_1262_, sizeof(void*)*3 + 4);
v_isSharedCheck_1288_ = !lean_is_exclusive(v_s_1262_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; 
v_unused_1289_ = lean_ctor_get(v_s_1262_, 1);
lean_dec(v_unused_1289_);
v___x_1281_ = v_s_1262_;
v_isShared_1282_ = v_isSharedCheck_1288_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_error_x3f_1275_);
lean_inc(v_imports_1273_);
lean_dec(v_s_1262_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1288_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 1, v_j_1264_);
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_imports_1273_);
lean_ctor_set(v_reuseFailAlloc_1287_, 1, v_j_1264_);
lean_ctor_set(v_reuseFailAlloc_1287_, 2, v_error_x3f_1275_);
lean_ctor_set_uint8(v_reuseFailAlloc_1287_, sizeof(void*)*3, v_badModifier_1274_);
lean_ctor_set_uint8(v_reuseFailAlloc_1287_, sizeof(void*)*3 + 1, v_isModule_1276_);
lean_ctor_set_uint8(v_reuseFailAlloc_1287_, sizeof(void*)*3 + 2, v_isMeta_1277_);
lean_ctor_set_uint8(v_reuseFailAlloc_1287_, sizeof(void*)*3 + 3, v_isExported_1278_);
lean_ctor_set_uint8(v_reuseFailAlloc_1287_, sizeof(void*)*3 + 4, v_importAll_1279_);
v___x_1284_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = l_Lean_ParseImports_whitespace(v_input_1261_, v___x_1284_);
v___x_1286_ = l_Lean_ParseImports_setImportAll___redArg(v___x_1285_);
return v___x_1286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2___boxed(lean_object* v_k_1290_, lean_object* v_input_1291_, lean_object* v_s_1292_, lean_object* v_i_1293_, lean_object* v_j_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(v_k_1290_, v_input_1291_, v_s_1292_, v_i_1293_, v_j_1294_);
lean_dec_ref(v_input_1291_);
lean_dec_ref(v_k_1290_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(lean_object* v_k_1296_, lean_object* v_input_1297_, lean_object* v_s_1298_, lean_object* v_i_1299_, lean_object* v_j_1300_){
_start:
{
uint8_t v___x_1301_; 
v___x_1301_ = lean_string_utf8_at_end(v_k_1296_, v_i_1299_);
if (v___x_1301_ == 0)
{
uint8_t v___x_1302_; 
v___x_1302_ = lean_string_utf8_at_end(v_input_1297_, v_j_1300_);
if (v___x_1302_ == 0)
{
uint32_t v_curr_u2081_1303_; uint32_t v_curr_u2082_1304_; uint8_t v___x_1305_; 
v_curr_u2081_1303_ = lean_string_utf8_get_fast(v_k_1296_, v_i_1299_);
v_curr_u2082_1304_ = lean_string_utf8_get_fast(v_input_1297_, v_j_1300_);
v___x_1305_ = lean_uint32_dec_eq(v_curr_u2081_1303_, v_curr_u2082_1304_);
if (v___x_1305_ == 0)
{
lean_dec(v_j_1300_);
lean_dec(v_i_1299_);
return v_s_1298_;
}
else
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_string_utf8_next_fast(v_k_1296_, v_i_1299_);
lean_dec(v_i_1299_);
v___x_1307_ = lean_string_utf8_next_fast(v_input_1297_, v_j_1300_);
lean_dec(v_j_1300_);
v_i_1299_ = v___x_1306_;
v_j_1300_ = v___x_1307_;
goto _start;
}
}
else
{
lean_dec(v_j_1300_);
lean_dec(v_i_1299_);
return v_s_1298_;
}
}
else
{
lean_object* v_imports_1309_; uint8_t v_badModifier_1310_; lean_object* v_error_x3f_1311_; uint8_t v_isModule_1312_; uint8_t v_isMeta_1313_; uint8_t v_isExported_1314_; uint8_t v_importAll_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1324_; 
lean_dec(v_i_1299_);
v_imports_1309_ = lean_ctor_get(v_s_1298_, 0);
v_badModifier_1310_ = lean_ctor_get_uint8(v_s_1298_, sizeof(void*)*3);
v_error_x3f_1311_ = lean_ctor_get(v_s_1298_, 2);
v_isModule_1312_ = lean_ctor_get_uint8(v_s_1298_, sizeof(void*)*3 + 1);
v_isMeta_1313_ = lean_ctor_get_uint8(v_s_1298_, sizeof(void*)*3 + 2);
v_isExported_1314_ = lean_ctor_get_uint8(v_s_1298_, sizeof(void*)*3 + 3);
v_importAll_1315_ = lean_ctor_get_uint8(v_s_1298_, sizeof(void*)*3 + 4);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_s_1298_);
if (v_isSharedCheck_1324_ == 0)
{
lean_object* v_unused_1325_; 
v_unused_1325_ = lean_ctor_get(v_s_1298_, 1);
lean_dec(v_unused_1325_);
v___x_1317_ = v_s_1298_;
v_isShared_1318_ = v_isSharedCheck_1324_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_error_x3f_1311_);
lean_inc(v_imports_1309_);
lean_dec(v_s_1298_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1324_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 1, v_j_1300_);
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_imports_1309_);
lean_ctor_set(v_reuseFailAlloc_1323_, 1, v_j_1300_);
lean_ctor_set(v_reuseFailAlloc_1323_, 2, v_error_x3f_1311_);
lean_ctor_set_uint8(v_reuseFailAlloc_1323_, sizeof(void*)*3, v_badModifier_1310_);
lean_ctor_set_uint8(v_reuseFailAlloc_1323_, sizeof(void*)*3 + 1, v_isModule_1312_);
lean_ctor_set_uint8(v_reuseFailAlloc_1323_, sizeof(void*)*3 + 2, v_isMeta_1313_);
lean_ctor_set_uint8(v_reuseFailAlloc_1323_, sizeof(void*)*3 + 3, v_isExported_1314_);
lean_ctor_set_uint8(v_reuseFailAlloc_1323_, sizeof(void*)*3 + 4, v_importAll_1315_);
v___x_1320_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = l_Lean_ParseImports_whitespace(v_input_1297_, v___x_1320_);
v___x_1322_ = l_Lean_ParseImports_setExported___redArg(v___x_1321_);
return v___x_1322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3___boxed(lean_object* v_k_1326_, lean_object* v_input_1327_, lean_object* v_s_1328_, lean_object* v_i_1329_, lean_object* v_j_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(v_k_1326_, v_input_1327_, v_s_1328_, v_i_1329_, v_j_1330_);
lean_dec_ref(v_input_1327_);
lean_dec_ref(v_k_1326_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(lean_object* v_k_1332_, lean_object* v_input_1333_, lean_object* v_s_1334_, lean_object* v_i_1335_, lean_object* v_j_1336_){
_start:
{
uint8_t v___x_1337_; 
v___x_1337_ = lean_string_utf8_at_end(v_k_1332_, v_i_1335_);
if (v___x_1337_ == 0)
{
uint8_t v___x_1338_; 
v___x_1338_ = lean_string_utf8_at_end(v_input_1333_, v_j_1336_);
if (v___x_1338_ == 0)
{
uint32_t v_curr_u2081_1339_; uint32_t v_curr_u2082_1340_; uint8_t v___x_1341_; 
v_curr_u2081_1339_ = lean_string_utf8_get_fast(v_k_1332_, v_i_1335_);
v_curr_u2082_1340_ = lean_string_utf8_get_fast(v_input_1333_, v_j_1336_);
v___x_1341_ = lean_uint32_dec_eq(v_curr_u2081_1339_, v_curr_u2082_1340_);
if (v___x_1341_ == 0)
{
lean_dec(v_j_1336_);
lean_dec(v_i_1335_);
return v_s_1334_;
}
else
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_string_utf8_next_fast(v_k_1332_, v_i_1335_);
lean_dec(v_i_1335_);
v___x_1343_ = lean_string_utf8_next_fast(v_input_1333_, v_j_1336_);
lean_dec(v_j_1336_);
v_i_1335_ = v___x_1342_;
v_j_1336_ = v___x_1343_;
goto _start;
}
}
else
{
lean_dec(v_j_1336_);
lean_dec(v_i_1335_);
return v_s_1334_;
}
}
else
{
lean_object* v_imports_1345_; uint8_t v_badModifier_1346_; lean_object* v_error_x3f_1347_; uint8_t v_isModule_1348_; uint8_t v_isMeta_1349_; uint8_t v_isExported_1350_; uint8_t v_importAll_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1360_; 
lean_dec(v_i_1335_);
v_imports_1345_ = lean_ctor_get(v_s_1334_, 0);
v_badModifier_1346_ = lean_ctor_get_uint8(v_s_1334_, sizeof(void*)*3);
v_error_x3f_1347_ = lean_ctor_get(v_s_1334_, 2);
v_isModule_1348_ = lean_ctor_get_uint8(v_s_1334_, sizeof(void*)*3 + 1);
v_isMeta_1349_ = lean_ctor_get_uint8(v_s_1334_, sizeof(void*)*3 + 2);
v_isExported_1350_ = lean_ctor_get_uint8(v_s_1334_, sizeof(void*)*3 + 3);
v_importAll_1351_ = lean_ctor_get_uint8(v_s_1334_, sizeof(void*)*3 + 4);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_s_1334_);
if (v_isSharedCheck_1360_ == 0)
{
lean_object* v_unused_1361_; 
v_unused_1361_ = lean_ctor_get(v_s_1334_, 1);
lean_dec(v_unused_1361_);
v___x_1353_ = v_s_1334_;
v_isShared_1354_ = v_isSharedCheck_1360_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_error_x3f_1347_);
lean_inc(v_imports_1345_);
lean_dec(v_s_1334_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1360_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 1, v_j_1336_);
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_imports_1345_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v_j_1336_);
lean_ctor_set(v_reuseFailAlloc_1359_, 2, v_error_x3f_1347_);
lean_ctor_set_uint8(v_reuseFailAlloc_1359_, sizeof(void*)*3, v_badModifier_1346_);
lean_ctor_set_uint8(v_reuseFailAlloc_1359_, sizeof(void*)*3 + 1, v_isModule_1348_);
lean_ctor_set_uint8(v_reuseFailAlloc_1359_, sizeof(void*)*3 + 2, v_isMeta_1349_);
lean_ctor_set_uint8(v_reuseFailAlloc_1359_, sizeof(void*)*3 + 3, v_isExported_1350_);
lean_ctor_set_uint8(v_reuseFailAlloc_1359_, sizeof(void*)*3 + 4, v_importAll_1351_);
v___x_1356_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = l_Lean_ParseImports_whitespace(v_input_1333_, v___x_1356_);
v___x_1358_ = l_Lean_ParseImports_setMeta___redArg(v___x_1357_);
return v___x_1358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4___boxed(lean_object* v_k_1362_, lean_object* v_input_1363_, lean_object* v_s_1364_, lean_object* v_i_1365_, lean_object* v_j_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(v_k_1362_, v_input_1363_, v_s_1364_, v_i_1365_, v_j_1366_);
lean_dec_ref(v_input_1363_);
lean_dec_ref(v_k_1362_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(lean_object* v_input_1372_, lean_object* v_s_1373_){
_start:
{
lean_object* v_pos_1374_; lean_object* v___y_1376_; lean_object* v_imports_1377_; lean_object* v_pos_1378_; uint8_t v_isModule_1379_; uint8_t v_isMeta_1380_; uint8_t v_isExported_1381_; uint8_t v_importAll_1382_; lean_object* v_imports_1388_; uint8_t v_badModifier_1389_; lean_object* v_error_x3f_1390_; uint8_t v_isModule_1391_; uint8_t v_isMeta_1392_; uint8_t v_isExported_1393_; uint8_t v_importAll_1394_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v_error_x3f_1399_; 
v_pos_1374_ = lean_ctor_get(v_s_1373_, 1);
lean_inc_n(v_pos_1374_, 2);
v___x_1396_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0));
v___x_1397_ = lean_unsigned_to_nat(0u);
v___x_1398_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(v___x_1396_, v_input_1372_, v_s_1373_, v___x_1397_, v_pos_1374_);
v_error_x3f_1399_ = lean_ctor_get(v___x_1398_, 2);
if (lean_obj_tag(v_error_x3f_1399_) == 1)
{
lean_object* v_imports_1400_; uint8_t v_badModifier_1401_; uint8_t v_isModule_1402_; uint8_t v_isMeta_1403_; uint8_t v_isExported_1404_; uint8_t v_importAll_1405_; 
lean_inc_ref(v_error_x3f_1399_);
lean_dec_ref(v_input_1372_);
v_imports_1400_ = lean_ctor_get(v___x_1398_, 0);
lean_inc_ref(v_imports_1400_);
v_badModifier_1401_ = lean_ctor_get_uint8(v___x_1398_, sizeof(void*)*3);
v_isModule_1402_ = lean_ctor_get_uint8(v___x_1398_, sizeof(void*)*3 + 1);
v_isMeta_1403_ = lean_ctor_get_uint8(v___x_1398_, sizeof(void*)*3 + 2);
v_isExported_1404_ = lean_ctor_get_uint8(v___x_1398_, sizeof(void*)*3 + 3);
v_importAll_1405_ = lean_ctor_get_uint8(v___x_1398_, sizeof(void*)*3 + 4);
lean_dec_ref(v___x_1398_);
v_imports_1388_ = v_imports_1400_;
v_badModifier_1389_ = v_badModifier_1401_;
v_error_x3f_1390_ = v_error_x3f_1399_;
v_isModule_1391_ = v_isModule_1402_;
v_isMeta_1392_ = v_isMeta_1403_;
v_isExported_1393_ = v_isExported_1404_;
v_importAll_1394_ = v_importAll_1405_;
goto v___jp_1387_;
}
else
{
lean_object* v_pos_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v_error_x3f_1409_; 
v_pos_1406_ = lean_ctor_get(v___x_1398_, 1);
lean_inc(v_pos_1406_);
v___x_1407_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1));
v___x_1408_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(v___x_1407_, v_input_1372_, v___x_1398_, v___x_1397_, v_pos_1406_);
v_error_x3f_1409_ = lean_ctor_get(v___x_1408_, 2);
if (lean_obj_tag(v_error_x3f_1409_) == 1)
{
lean_object* v_imports_1410_; uint8_t v_badModifier_1411_; uint8_t v_isModule_1412_; uint8_t v_isMeta_1413_; uint8_t v_isExported_1414_; uint8_t v_importAll_1415_; 
lean_inc_ref(v_error_x3f_1409_);
lean_dec_ref(v_input_1372_);
v_imports_1410_ = lean_ctor_get(v___x_1408_, 0);
lean_inc_ref(v_imports_1410_);
v_badModifier_1411_ = lean_ctor_get_uint8(v___x_1408_, sizeof(void*)*3);
v_isModule_1412_ = lean_ctor_get_uint8(v___x_1408_, sizeof(void*)*3 + 1);
v_isMeta_1413_ = lean_ctor_get_uint8(v___x_1408_, sizeof(void*)*3 + 2);
v_isExported_1414_ = lean_ctor_get_uint8(v___x_1408_, sizeof(void*)*3 + 3);
v_importAll_1415_ = lean_ctor_get_uint8(v___x_1408_, sizeof(void*)*3 + 4);
lean_dec_ref(v___x_1408_);
v_imports_1388_ = v_imports_1410_;
v_badModifier_1389_ = v_badModifier_1411_;
v_error_x3f_1390_ = v_error_x3f_1409_;
v_isModule_1391_ = v_isModule_1412_;
v_isMeta_1392_ = v_isMeta_1413_;
v_isExported_1393_ = v_isExported_1414_;
v_importAll_1394_ = v_importAll_1415_;
goto v___jp_1387_;
}
else
{
lean_object* v_pos_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v_error_x3f_1419_; 
v_pos_1416_ = lean_ctor_get(v___x_1408_, 1);
lean_inc(v_pos_1416_);
v___x_1417_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2));
v___x_1418_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(v___x_1417_, v_input_1372_, v___x_1408_, v___x_1397_, v_pos_1416_);
v_error_x3f_1419_ = lean_ctor_get(v___x_1418_, 2);
if (lean_obj_tag(v_error_x3f_1419_) == 1)
{
lean_object* v_imports_1420_; uint8_t v_badModifier_1421_; uint8_t v_isModule_1422_; uint8_t v_isMeta_1423_; uint8_t v_isExported_1424_; uint8_t v_importAll_1425_; 
lean_inc_ref(v_error_x3f_1419_);
lean_dec_ref(v_input_1372_);
v_imports_1420_ = lean_ctor_get(v___x_1418_, 0);
lean_inc_ref(v_imports_1420_);
v_badModifier_1421_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3);
v_isModule_1422_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 1);
v_isMeta_1423_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 2);
v_isExported_1424_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 3);
v_importAll_1425_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 4);
lean_dec_ref(v___x_1418_);
v_imports_1388_ = v_imports_1420_;
v_badModifier_1389_ = v_badModifier_1421_;
v_error_x3f_1390_ = v_error_x3f_1419_;
v_isModule_1391_ = v_isModule_1422_;
v_isMeta_1392_ = v_isMeta_1423_;
v_isExported_1393_ = v_isExported_1424_;
v_importAll_1394_ = v_importAll_1425_;
goto v___jp_1387_;
}
else
{
if (lean_obj_tag(v_error_x3f_1419_) == 1)
{
lean_object* v_imports_1426_; lean_object* v_pos_1427_; uint8_t v_isModule_1428_; uint8_t v_isMeta_1429_; uint8_t v_isExported_1430_; uint8_t v_importAll_1431_; 
lean_dec_ref(v_input_1372_);
v_imports_1426_ = lean_ctor_get(v___x_1418_, 0);
lean_inc_ref(v_imports_1426_);
v_pos_1427_ = lean_ctor_get(v___x_1418_, 1);
lean_inc(v_pos_1427_);
v_isModule_1428_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 1);
v_isMeta_1429_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 2);
v_isExported_1430_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 3);
v_importAll_1431_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 4);
v___y_1376_ = v___x_1418_;
v_imports_1377_ = v_imports_1426_;
v_pos_1378_ = v_pos_1427_;
v_isModule_1379_ = v_isModule_1428_;
v_isMeta_1380_ = v_isMeta_1429_;
v_isExported_1381_ = v_isExported_1430_;
v_importAll_1382_ = v_importAll_1431_;
goto v___jp_1375_;
}
else
{
lean_object* v_pos_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v_error_x3f_1435_; 
v_pos_1432_ = lean_ctor_get(v___x_1418_, 1);
lean_inc(v_pos_1432_);
v___x_1433_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3));
v___x_1434_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(v___x_1433_, v_input_1372_, v___x_1418_, v___x_1397_, v_pos_1432_);
v_error_x3f_1435_ = lean_ctor_get(v___x_1434_, 2);
if (lean_obj_tag(v_error_x3f_1435_) == 1)
{
lean_object* v_imports_1436_; lean_object* v_pos_1437_; uint8_t v_isModule_1438_; uint8_t v_isMeta_1439_; uint8_t v_isExported_1440_; uint8_t v_importAll_1441_; 
lean_dec_ref(v_input_1372_);
v_imports_1436_ = lean_ctor_get(v___x_1434_, 0);
lean_inc_ref(v_imports_1436_);
v_pos_1437_ = lean_ctor_get(v___x_1434_, 1);
lean_inc(v_pos_1437_);
v_isModule_1438_ = lean_ctor_get_uint8(v___x_1434_, sizeof(void*)*3 + 1);
v_isMeta_1439_ = lean_ctor_get_uint8(v___x_1434_, sizeof(void*)*3 + 2);
v_isExported_1440_ = lean_ctor_get_uint8(v___x_1434_, sizeof(void*)*3 + 3);
v_importAll_1441_ = lean_ctor_get_uint8(v___x_1434_, sizeof(void*)*3 + 4);
v___y_1376_ = v___x_1434_;
v_imports_1377_ = v_imports_1436_;
v_pos_1378_ = v_pos_1437_;
v_isModule_1379_ = v_isModule_1438_;
v_isMeta_1380_ = v_isMeta_1439_;
v_isExported_1381_ = v_isExported_1440_;
v_importAll_1382_ = v_importAll_1441_;
goto v___jp_1375_;
}
else
{
lean_object* v___x_1442_; lean_object* v_error_x3f_1443_; 
lean_inc_ref(v_input_1372_);
v___x_1442_ = l_Lean_ParseImports_moduleIdent(v_input_1372_, v___x_1434_);
v_error_x3f_1443_ = lean_ctor_get(v___x_1442_, 2);
if (lean_obj_tag(v_error_x3f_1443_) == 1)
{
lean_object* v_imports_1444_; lean_object* v_pos_1445_; uint8_t v_isModule_1446_; uint8_t v_isMeta_1447_; uint8_t v_isExported_1448_; uint8_t v_importAll_1449_; 
lean_dec_ref(v_input_1372_);
v_imports_1444_ = lean_ctor_get(v___x_1442_, 0);
lean_inc_ref(v_imports_1444_);
v_pos_1445_ = lean_ctor_get(v___x_1442_, 1);
lean_inc(v_pos_1445_);
v_isModule_1446_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 1);
v_isMeta_1447_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 2);
v_isExported_1448_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 3);
v_importAll_1449_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 4);
v___y_1376_ = v___x_1442_;
v_imports_1377_ = v_imports_1444_;
v_pos_1378_ = v_pos_1445_;
v_isModule_1379_ = v_isModule_1446_;
v_isMeta_1380_ = v_isMeta_1447_;
v_isExported_1381_ = v_isExported_1448_;
v_importAll_1382_ = v_importAll_1449_;
goto v___jp_1375_;
}
else
{
uint8_t v_badModifier_1450_; 
v_badModifier_1450_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3);
if (v_badModifier_1450_ == 0)
{
lean_dec(v_pos_1374_);
v_s_1373_ = v___x_1442_;
goto _start;
}
else
{
lean_object* v_imports_1452_; uint8_t v_isModule_1453_; uint8_t v_isMeta_1454_; uint8_t v_isExported_1455_; uint8_t v_importAll_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref(v_input_1372_);
v_imports_1452_ = lean_ctor_get(v___x_1442_, 0);
v_isModule_1453_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 1);
v_isMeta_1454_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 2);
v_isExported_1455_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 3);
v_importAll_1456_ = lean_ctor_get_uint8(v___x_1442_, sizeof(void*)*3 + 4);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1465_ == 0)
{
lean_object* v_unused_1466_; lean_object* v_unused_1467_; 
v_unused_1466_ = lean_ctor_get(v___x_1442_, 2);
lean_dec(v_unused_1466_);
v_unused_1467_ = lean_ctor_get(v___x_1442_, 1);
lean_dec(v_unused_1467_);
v___x_1458_ = v___x_1442_;
v_isShared_1459_ = v_isSharedCheck_1465_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_imports_1452_);
lean_dec(v___x_1442_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1465_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
uint8_t v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1460_ = 0;
v___x_1461_ = ((lean_object*)(l_Lean_ParseImports_manyImports___closed__1));
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 2, v___x_1461_);
lean_ctor_set(v___x_1458_, 1, v_pos_1374_);
v___x_1463_ = v___x_1458_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_imports_1452_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_pos_1374_);
lean_ctor_set(v_reuseFailAlloc_1464_, 2, v___x_1461_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*3 + 1, v_isModule_1453_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*3 + 2, v_isMeta_1454_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*3 + 3, v_isExported_1455_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*3 + 4, v_importAll_1456_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
lean_ctor_set_uint8(v___x_1463_, sizeof(void*)*3, v___x_1460_);
return v___x_1463_;
}
}
}
}
}
}
}
}
}
v___jp_1375_:
{
uint8_t v_decide_1383_; 
v_decide_1383_ = lean_nat_dec_eq(v_pos_1378_, v_pos_1374_);
lean_dec(v_pos_1374_);
if (v_decide_1383_ == 0)
{
lean_dec(v_pos_1378_);
lean_dec_ref(v_imports_1377_);
return v___y_1376_;
}
else
{
uint8_t v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
lean_dec_ref(v___y_1376_);
v___x_1384_ = 0;
v___x_1385_ = lean_box(0);
v___x_1386_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1386_, 0, v_imports_1377_);
lean_ctor_set(v___x_1386_, 1, v_pos_1378_);
lean_ctor_set(v___x_1386_, 2, v___x_1385_);
lean_ctor_set_uint8(v___x_1386_, sizeof(void*)*3, v___x_1384_);
lean_ctor_set_uint8(v___x_1386_, sizeof(void*)*3 + 1, v_isModule_1379_);
lean_ctor_set_uint8(v___x_1386_, sizeof(void*)*3 + 2, v_isMeta_1380_);
lean_ctor_set_uint8(v___x_1386_, sizeof(void*)*3 + 3, v_isExported_1381_);
lean_ctor_set_uint8(v___x_1386_, sizeof(void*)*3 + 4, v_importAll_1382_);
return v___x_1386_;
}
}
v___jp_1387_:
{
lean_object* v___x_1395_; 
lean_inc_n(v_pos_1374_, 2);
lean_inc_ref(v_imports_1388_);
v___x_1395_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1395_, 0, v_imports_1388_);
lean_ctor_set(v___x_1395_, 1, v_pos_1374_);
lean_ctor_set(v___x_1395_, 2, v_error_x3f_1390_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*3, v_badModifier_1389_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*3 + 1, v_isModule_1391_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*3 + 2, v_isMeta_1392_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*3 + 3, v_isExported_1393_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*3 + 4, v_importAll_1394_);
v___y_1376_ = v___x_1395_;
v_imports_1377_ = v_imports_1388_;
v_pos_1378_ = v_pos_1374_;
v_isModule_1379_ = v_isModule_1391_;
v_isMeta_1380_ = v_isMeta_1392_;
v_isExported_1381_ = v_isExported_1393_;
v_importAll_1382_ = v_importAll_1394_;
goto v___jp_1375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(lean_object* v_k_1468_, lean_object* v_input_1469_, lean_object* v_s_1470_, lean_object* v_i_1471_, lean_object* v_j_1472_){
_start:
{
uint8_t v___x_1473_; 
v___x_1473_ = lean_string_utf8_at_end(v_k_1468_, v_i_1471_);
if (v___x_1473_ == 0)
{
uint8_t v___x_1474_; 
v___x_1474_ = lean_string_utf8_at_end(v_input_1469_, v_j_1472_);
if (v___x_1474_ == 0)
{
uint32_t v_curr_u2081_1475_; uint32_t v_curr_u2082_1476_; uint8_t v___x_1477_; 
v_curr_u2081_1475_ = lean_string_utf8_get_fast(v_k_1468_, v_i_1471_);
v_curr_u2082_1476_ = lean_string_utf8_get_fast(v_input_1469_, v_j_1472_);
v___x_1477_ = lean_uint32_dec_eq(v_curr_u2081_1475_, v_curr_u2082_1476_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; 
lean_dec(v_j_1472_);
lean_dec(v_i_1471_);
v___x_1478_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1473_, v_s_1470_);
return v___x_1478_;
}
else
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1479_ = lean_string_utf8_next_fast(v_k_1468_, v_i_1471_);
lean_dec(v_i_1471_);
v___x_1480_ = lean_string_utf8_next_fast(v_input_1469_, v_j_1472_);
lean_dec(v_j_1472_);
v_i_1471_ = v___x_1479_;
v_j_1472_ = v___x_1480_;
goto _start;
}
}
else
{
lean_object* v___x_1482_; 
lean_dec(v_j_1472_);
lean_dec(v_i_1471_);
v___x_1482_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1473_, v_s_1470_);
return v___x_1482_;
}
}
else
{
lean_object* v_imports_1483_; uint8_t v_badModifier_1484_; lean_object* v_error_x3f_1485_; uint8_t v_isModule_1486_; uint8_t v_isMeta_1487_; uint8_t v_isExported_1488_; uint8_t v_importAll_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1498_; 
lean_dec(v_i_1471_);
v_imports_1483_ = lean_ctor_get(v_s_1470_, 0);
v_badModifier_1484_ = lean_ctor_get_uint8(v_s_1470_, sizeof(void*)*3);
v_error_x3f_1485_ = lean_ctor_get(v_s_1470_, 2);
v_isModule_1486_ = lean_ctor_get_uint8(v_s_1470_, sizeof(void*)*3 + 1);
v_isMeta_1487_ = lean_ctor_get_uint8(v_s_1470_, sizeof(void*)*3 + 2);
v_isExported_1488_ = lean_ctor_get_uint8(v_s_1470_, sizeof(void*)*3 + 3);
v_importAll_1489_ = lean_ctor_get_uint8(v_s_1470_, sizeof(void*)*3 + 4);
v_isSharedCheck_1498_ = !lean_is_exclusive(v_s_1470_);
if (v_isSharedCheck_1498_ == 0)
{
lean_object* v_unused_1499_; 
v_unused_1499_ = lean_ctor_get(v_s_1470_, 1);
lean_dec(v_unused_1499_);
v___x_1491_ = v_s_1470_;
v_isShared_1492_ = v_isSharedCheck_1498_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_error_x3f_1485_);
lean_inc(v_imports_1483_);
lean_dec(v_s_1470_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1498_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 1, v_j_1472_);
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_imports_1483_);
lean_ctor_set(v_reuseFailAlloc_1497_, 1, v_j_1472_);
lean_ctor_set(v_reuseFailAlloc_1497_, 2, v_error_x3f_1485_);
lean_ctor_set_uint8(v_reuseFailAlloc_1497_, sizeof(void*)*3, v_badModifier_1484_);
lean_ctor_set_uint8(v_reuseFailAlloc_1497_, sizeof(void*)*3 + 1, v_isModule_1486_);
lean_ctor_set_uint8(v_reuseFailAlloc_1497_, sizeof(void*)*3 + 2, v_isMeta_1487_);
lean_ctor_set_uint8(v_reuseFailAlloc_1497_, sizeof(void*)*3 + 3, v_isExported_1488_);
lean_ctor_set_uint8(v_reuseFailAlloc_1497_, sizeof(void*)*3 + 4, v_importAll_1489_);
v___x_1494_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = l_Lean_ParseImports_whitespace(v_input_1469_, v___x_1494_);
v___x_1496_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1473_, v___x_1495_);
return v___x_1496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0___boxed(lean_object* v_k_1500_, lean_object* v_input_1501_, lean_object* v_s_1502_, lean_object* v_i_1503_, lean_object* v_j_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(v_k_1500_, v_input_1501_, v_s_1502_, v_i_1503_, v_j_1504_);
lean_dec_ref(v_input_1501_);
lean_dec_ref(v_k_1500_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_main(lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_pos_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v_s_1513_; lean_object* v_error_x3f_1514_; 
v_pos_1510_ = lean_ctor_get(v_a_1509_, 1);
lean_inc(v_pos_1510_);
v___x_1511_ = ((lean_object*)(l_Lean_ParseImports_main___closed__0));
v___x_1512_ = lean_unsigned_to_nat(0u);
v_s_1513_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(v___x_1511_, v_a_1508_, v_a_1509_, v___x_1512_, v_pos_1510_);
v_error_x3f_1514_ = lean_ctor_get(v_s_1513_, 2);
if (lean_obj_tag(v_error_x3f_1514_) == 1)
{
lean_dec_ref(v_a_1508_);
return v_s_1513_;
}
else
{
lean_object* v_pos_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v_error_x3f_1518_; 
v_pos_1515_ = lean_ctor_get(v_s_1513_, 1);
lean_inc(v_pos_1515_);
v___x_1516_ = ((lean_object*)(l_Lean_ParseImports_main___closed__1));
v___x_1517_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(v___x_1516_, v_a_1508_, v_s_1513_, v___x_1512_, v_pos_1515_);
v_error_x3f_1518_ = lean_ctor_get(v___x_1517_, 2);
if (lean_obj_tag(v_error_x3f_1518_) == 1)
{
lean_dec_ref(v_a_1508_);
return v___x_1517_;
}
else
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(v_a_1508_, v___x_1517_);
return v___x_1519_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseImports_x27(lean_object* v_input_1522_, lean_object* v_fileName_1523_){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v_s_1527_; lean_object* v_error_x3f_1528_; 
v___x_1525_ = ((lean_object*)(l_Lean_ParseImports_instInhabitedState_default___closed__1));
v___x_1526_ = l_Lean_ParseImports_whitespace(v_input_1522_, v___x_1525_);
lean_inc_ref(v_input_1522_);
v_s_1527_ = l_Lean_ParseImports_main(v_input_1522_, v___x_1526_);
v_error_x3f_1528_ = lean_ctor_get(v_s_1527_, 2);
lean_inc(v_error_x3f_1528_);
if (lean_obj_tag(v_error_x3f_1528_) == 1)
{
lean_object* v_pos_1529_; lean_object* v_val_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1552_; 
v_pos_1529_ = lean_ctor_get(v_s_1527_, 1);
lean_inc(v_pos_1529_);
lean_dec_ref(v_s_1527_);
v_val_1530_ = lean_ctor_get(v_error_x3f_1528_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_error_x3f_1528_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1532_ = v_error_x3f_1528_;
v_isShared_1533_ = v_isSharedCheck_1552_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_val_1530_);
lean_dec(v_error_x3f_1528_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1552_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v_fileMap_1534_; lean_object* v_pos_1535_; lean_object* v_line_1536_; lean_object* v_column_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1549_; 
v_fileMap_1534_ = l_Lean_String_toFileMap(v_input_1522_);
v_pos_1535_ = l_Lean_FileMap_toPosition(v_fileMap_1534_, v_pos_1529_);
lean_dec(v_pos_1529_);
v_line_1536_ = lean_ctor_get(v_pos_1535_, 0);
lean_inc(v_line_1536_);
v_column_1537_ = lean_ctor_get(v_pos_1535_, 1);
lean_inc(v_column_1537_);
lean_dec_ref(v_pos_1535_);
v___x_1538_ = ((lean_object*)(l_Lean_parseImports_x27___closed__0));
v___x_1539_ = lean_string_append(v_fileName_1523_, v___x_1538_);
v___x_1540_ = l_Nat_reprFast(v_line_1536_);
v___x_1541_ = lean_string_append(v___x_1539_, v___x_1540_);
lean_dec_ref(v___x_1540_);
v___x_1542_ = lean_string_append(v___x_1541_, v___x_1538_);
v___x_1543_ = l_Nat_reprFast(v_column_1537_);
v___x_1544_ = lean_string_append(v___x_1542_, v___x_1543_);
lean_dec_ref(v___x_1543_);
v___x_1545_ = ((lean_object*)(l_Lean_parseImports_x27___closed__1));
v___x_1546_ = lean_string_append(v___x_1544_, v___x_1545_);
v___x_1547_ = lean_string_append(v___x_1546_, v_val_1530_);
lean_dec(v_val_1530_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set_tag(v___x_1532_, 18);
lean_ctor_set(v___x_1532_, 0, v___x_1547_);
v___x_1549_ = v___x_1532_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1550_; 
v___x_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
return v___x_1550_;
}
}
}
else
{
lean_object* v_imports_1553_; uint8_t v_isModule_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_dec(v_error_x3f_1528_);
lean_dec_ref(v_fileName_1523_);
lean_dec_ref(v_input_1522_);
v_imports_1553_ = lean_ctor_get(v_s_1527_, 0);
lean_inc_ref(v_imports_1553_);
v_isModule_1554_ = lean_ctor_get_uint8(v_s_1527_, sizeof(void*)*3 + 1);
lean_dec_ref(v_s_1527_);
v___x_1555_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1555_, 0, v_imports_1553_);
lean_ctor_set_uint8(v___x_1555_, sizeof(void*)*1, v_isModule_1554_);
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseImports_x27___boxed(lean_object* v_input_1557_, lean_object* v_fileName_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lean_parseImports_x27(v_input_1557_, v_fileName_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(lean_object* v_k_1561_, lean_object* v_x_1562_){
_start:
{
if (lean_obj_tag(v_x_1562_) == 0)
{
lean_object* v___x_1563_; 
lean_dec_ref(v_k_1561_);
v___x_1563_ = lean_box(0);
return v___x_1563_;
}
else
{
lean_object* v_val_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_val_1564_ = lean_ctor_get(v_x_1562_, 0);
lean_inc(v_val_1564_);
lean_dec_ref_known(v_x_1562_, 1);
v___x_1565_ = l_Lean_instToJsonModuleHeader_toJson(v_val_1564_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_k_1561_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = lean_box(0);
v___x_1568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
return v___x_1568_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(lean_object* v_a_1569_, lean_object* v_a_1570_){
_start:
{
if (lean_obj_tag(v_a_1569_) == 0)
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_array_to_list(v_a_1570_);
return v___x_1571_;
}
else
{
lean_object* v_head_1572_; lean_object* v_tail_1573_; lean_object* v___x_1574_; 
v_head_1572_ = lean_ctor_get(v_a_1569_, 0);
lean_inc(v_head_1572_);
v_tail_1573_ = lean_ctor_get(v_a_1569_, 1);
lean_inc(v_tail_1573_);
lean_dec_ref_known(v_a_1569_, 2);
v___x_1574_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1570_, v_head_1572_);
v_a_1569_ = v_tail_1573_;
v_a_1570_ = v___x_1574_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(size_t v_sz_1576_, size_t v_i_1577_, lean_object* v_bs_1578_){
_start:
{
uint8_t v___x_1579_; 
v___x_1579_ = lean_usize_dec_lt(v_i_1577_, v_sz_1576_);
if (v___x_1579_ == 0)
{
return v_bs_1578_;
}
else
{
lean_object* v_v_1580_; lean_object* v___x_1581_; lean_object* v_bs_x27_1582_; lean_object* v___x_1583_; size_t v___x_1584_; size_t v___x_1585_; lean_object* v___x_1586_; 
v_v_1580_ = lean_array_uget(v_bs_1578_, v_i_1577_);
v___x_1581_ = lean_unsigned_to_nat(0u);
v_bs_x27_1582_ = lean_array_uset(v_bs_1578_, v_i_1577_, v___x_1581_);
v___x_1583_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1583_, 0, v_v_1580_);
v___x_1584_ = ((size_t)1ULL);
v___x_1585_ = lean_usize_add(v_i_1577_, v___x_1584_);
v___x_1586_ = lean_array_uset(v_bs_x27_1582_, v_i_1577_, v___x_1583_);
v_i_1577_ = v___x_1585_;
v_bs_1578_ = v___x_1586_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1___boxed(lean_object* v_sz_1588_, lean_object* v_i_1589_, lean_object* v_bs_1590_){
_start:
{
size_t v_sz_boxed_1591_; size_t v_i_boxed_1592_; lean_object* v_res_1593_; 
v_sz_boxed_1591_ = lean_unbox_usize(v_sz_1588_);
lean_dec(v_sz_1588_);
v_i_boxed_1592_ = lean_unbox_usize(v_i_1589_);
lean_dec(v_i_1589_);
v_res_1593_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(v_sz_boxed_1591_, v_i_boxed_1592_, v_bs_1590_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(lean_object* v_a_1594_){
_start:
{
size_t v_sz_1595_; size_t v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v_sz_1595_ = lean_array_size(v_a_1594_);
v___x_1596_ = ((size_t)0ULL);
v___x_1597_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(v_sz_1595_, v___x_1596_, v_a_1594_);
v___x_1598_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportResult_toJson(lean_object* v_x_1603_){
_start:
{
lean_object* v_result_x3f_1604_; lean_object* v_errors_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1623_; 
v_result_x3f_1604_ = lean_ctor_get(v_x_1603_, 0);
v_errors_1605_ = lean_ctor_get(v_x_1603_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_x_1603_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1607_ = v_x_1603_;
v_isShared_1608_ = v_isSharedCheck_1623_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_errors_1605_);
lean_inc(v_result_x3f_1604_);
lean_dec(v_x_1603_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1623_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1614_; 
v___x_1609_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__0));
v___x_1610_ = l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(v___x_1609_, v_result_x3f_1604_);
v___x_1611_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__1));
v___x_1612_ = l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(v_errors_1605_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 1, v___x_1612_);
lean_ctor_set(v___x_1607_, 0, v___x_1611_);
v___x_1614_ = v___x_1607_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1611_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v___x_1612_);
v___x_1614_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1615_ = lean_box(0);
v___x_1616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1614_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
lean_ctor_set(v___x_1617_, 1, v___x_1615_);
v___x_1618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1610_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__2));
v___x_1620_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(v___x_1618_, v___x_1619_);
v___x_1621_ = l_Lean_Json_mkObj(v___x_1620_);
lean_dec(v___x_1620_);
return v___x_1621_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(size_t v_sz_1626_, size_t v_i_1627_, lean_object* v_bs_1628_){
_start:
{
uint8_t v___x_1629_; 
v___x_1629_ = lean_usize_dec_lt(v_i_1627_, v_sz_1626_);
if (v___x_1629_ == 0)
{
return v_bs_1628_;
}
else
{
lean_object* v_v_1630_; lean_object* v___x_1631_; lean_object* v_bs_x27_1632_; lean_object* v___x_1633_; size_t v___x_1634_; size_t v___x_1635_; lean_object* v___x_1636_; 
v_v_1630_ = lean_array_uget(v_bs_1628_, v_i_1627_);
v___x_1631_ = lean_unsigned_to_nat(0u);
v_bs_x27_1632_ = lean_array_uset(v_bs_1628_, v_i_1627_, v___x_1631_);
v___x_1633_ = l_Lean_instToJsonPrintImportResult_toJson(v_v_1630_);
v___x_1634_ = ((size_t)1ULL);
v___x_1635_ = lean_usize_add(v_i_1627_, v___x_1634_);
v___x_1636_ = lean_array_uset(v_bs_x27_1632_, v_i_1627_, v___x_1633_);
v_i_1627_ = v___x_1635_;
v_bs_1628_ = v___x_1636_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1638_, lean_object* v_i_1639_, lean_object* v_bs_1640_){
_start:
{
size_t v_sz_boxed_1641_; size_t v_i_boxed_1642_; lean_object* v_res_1643_; 
v_sz_boxed_1641_ = lean_unbox_usize(v_sz_1638_);
lean_dec(v_sz_1638_);
v_i_boxed_1642_ = lean_unbox_usize(v_i_1639_);
lean_dec(v_i_1639_);
v_res_1643_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(v_sz_boxed_1641_, v_i_boxed_1642_, v_bs_1640_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(lean_object* v_a_1644_){
_start:
{
size_t v_sz_1645_; size_t v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v_sz_1645_ = lean_array_size(v_a_1644_);
v___x_1646_ = ((size_t)0ULL);
v___x_1647_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(v_sz_1645_, v___x_1646_, v_a_1644_);
v___x_1648_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportsResult_toJson(lean_object* v_x_1650_){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1651_ = ((lean_object*)(l_Lean_instToJsonPrintImportsResult_toJson___closed__0));
v___x_1652_ = l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(v_x_1650_);
v___x_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
v___x_1654_ = lean_box(0);
v___x_1655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
lean_ctor_set(v___x_1656_, 1, v___x_1654_);
v___x_1657_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__2));
v___x_1658_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(v___x_1656_, v___x_1657_);
v___x_1659_ = l_Lean_Json_mkObj(v___x_1658_);
lean_dec(v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(size_t v_sz_1664_, size_t v_i_1665_, lean_object* v_bs_1666_){
_start:
{
uint8_t v___x_1668_; 
v___x_1668_ = lean_usize_dec_lt(v_i_1665_, v_sz_1664_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_bs_1666_);
return v___x_1669_;
}
else
{
lean_object* v_v_1670_; lean_object* v___x_1671_; lean_object* v_bs_x27_1672_; lean_object* v_a_1674_; lean_object* v_a_1680_; lean_object* v___x_1687_; 
v_v_1670_ = lean_array_uget(v_bs_1666_, v_i_1665_);
v___x_1671_ = lean_unsigned_to_nat(0u);
v_bs_x27_1672_ = lean_array_uset(v_bs_1666_, v_i_1665_, v___x_1671_);
v___x_1687_ = l_IO_FS_readFile(v_v_1670_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; lean_object* v___x_1689_; 
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1687_, 1);
v___x_1689_ = l_Lean_parseImports_x27(v_a_1688_, v_v_1670_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1699_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1699_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1699_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set_tag(v___x_1692_, 1);
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0));
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1695_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
v_a_1674_ = v___x_1697_;
goto v___jp_1673_;
}
}
}
else
{
lean_object* v_a_1700_; 
v_a_1700_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1689_, 1);
v_a_1680_ = v_a_1700_;
goto v___jp_1679_;
}
}
else
{
lean_object* v_a_1701_; 
lean_dec(v_v_1670_);
v_a_1701_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1687_, 1);
v_a_1680_ = v_a_1701_;
goto v___jp_1679_;
}
v___jp_1673_:
{
size_t v___x_1675_; size_t v___x_1676_; lean_object* v___x_1677_; 
v___x_1675_ = ((size_t)1ULL);
v___x_1676_ = lean_usize_add(v_i_1665_, v___x_1675_);
v___x_1677_ = lean_array_uset(v_bs_x27_1672_, v_i_1665_, v_a_1674_);
v_i_1665_ = v___x_1676_;
v_bs_1666_ = v___x_1677_;
goto _start;
}
v___jp_1679_:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1681_ = lean_box(0);
v___x_1682_ = lean_io_error_to_string(v_a_1680_);
v___x_1683_ = lean_unsigned_to_nat(1u);
v___x_1684_ = lean_mk_empty_array_with_capacity(v___x_1683_);
v___x_1685_ = lean_array_push(v___x_1684_, v___x_1682_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1681_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
v_a_1674_ = v___x_1686_;
goto v___jp_1673_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___boxed(lean_object* v_sz_1702_, lean_object* v_i_1703_, lean_object* v_bs_1704_, lean_object* v___y_1705_){
_start:
{
size_t v_sz_boxed_1706_; size_t v_i_boxed_1707_; lean_object* v_res_1708_; 
v_sz_boxed_1706_ = lean_unbox_usize(v_sz_1702_);
lean_dec(v_sz_1702_);
v_i_boxed_1707_ = lean_unbox_usize(v_i_1703_);
lean_dec(v_i_1703_);
v_res_1708_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(v_sz_boxed_1706_, v_i_boxed_1707_, v_bs_1704_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(lean_object* v_s_1709_){
_start:
{
lean_object* v___x_1711_; lean_object* v_putStr_1712_; lean_object* v___x_1713_; 
v___x_1711_ = lean_get_stdout();
v_putStr_1712_ = lean_ctor_get(v___x_1711_, 4);
lean_inc_ref(v_putStr_1712_);
lean_dec_ref(v___x_1711_);
v___x_1713_ = lean_apply_2(v_putStr_1712_, v_s_1709_, lean_box(0));
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1___boxed(lean_object* v_s_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(v_s_1714_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1(lean_object* v_s_1717_){
_start:
{
uint32_t v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1719_ = 10;
v___x_1720_ = lean_string_push(v_s_1717_, v___x_1719_);
v___x_1721_ = l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(v___x_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1___boxed(lean_object* v_s_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_IO_println___at___00Lean_printImportsJson_spec__1(v_s_1722_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_printImportsJson(lean_object* v_fileNames_1725_){
_start:
{
size_t v_sz_1727_; size_t v___x_1728_; lean_object* v___x_1729_; 
v_sz_1727_ = lean_array_size(v_fileNames_1725_);
v___x_1728_ = ((size_t)0ULL);
v___x_1729_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(v_sz_1727_, v___x_1728_, v_fileNames_1725_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref_known(v___x_1729_, 1);
v___x_1731_ = l_Lean_instToJsonPrintImportsResult_toJson(v_a_1730_);
v___x_1732_ = l_Lean_Json_compress(v___x_1731_);
v___x_1733_ = l_IO_println___at___00Lean_printImportsJson_spec__1(v___x_1732_);
return v___x_1733_;
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
v_a_1734_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1729_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1729_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_printImportsJson___boxed(lean_object* v_fileNames_1742_, lean_object* v_a_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_printImportsJson(v_fileNames_1742_);
return v_res_1744_;
}
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ParseImportsFast(builtin);
}
#ifdef __cplusplus
}
#endif
