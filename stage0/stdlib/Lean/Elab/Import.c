// Lean compiler output
// Module: Lean.Elab.Import
// Imports: public import Lean.Parser.Module meta import Lean.Parser.Module import Lean.Compiler.ModPkgExt public import Lean.DeprecatedModule import Init.Data.String.Modify
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_parseHeader(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedImport_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
extern lean_object* l_Lean_linter_deprecated_module;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getDeprecatedModuleByIdx_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_formatDeprecatedModuleWarning(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* l_Lean_findOLean(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
extern lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
lean_object* l_Lean_Environment_setMainModule(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_mkEmptyEnvironment(uint32_t);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Lean_Elab_inServer;
lean_object* l_Lean_getSrcSearchPath();
lean_object* l_Lean_findLean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_HeaderSyntax_isModule(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_isModule___boxed(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 219, 158, 40, 50, 143, 61, 44)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Elab.Import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Elab.HeaderSyntax.imports"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__9_value),LEAN_SCALAR_PTR_LITERAL(107, 73, 92, 3, 207, 252, 164, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(89, 228, 64, 55, 26, 167, 248, 235)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__13_value),LEAN_SCALAR_PTR_LITERAL(198, 166, 14, 39, 152, 190, 236, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__0 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__0_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 173, 92, 3, 94, 219, 131, 202)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__1 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__1_value;
static lean_once_cell_t l_Lean_Elab_HeaderSyntax_imports___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__2;
static const lean_array_object l_Lean_Elab_HeaderSyntax_imports___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__3 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__3_value;
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Init"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__4 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__4_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__4_value),LEAN_SCALAR_PTR_LITERAL(152, 102, 12, 179, 200, 220, 30, 26)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__5 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__5_value;
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__6 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__6_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__6_value),LEAN_SCALAR_PTR_LITERAL(182, 6, 18, 235, 50, 88, 101, 248)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__7 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__7_value;
static const lean_string_object l_Lean_Elab_HeaderSyntax_imports___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moduleTk"};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__8 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__8_value;
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Elab_HeaderSyntax_imports___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__8_value),LEAN_SCALAR_PTR_LITERAL(198, 239, 28, 252, 21, 233, 71, 221)}};
static const lean_object* l_Lean_Elab_HeaderSyntax_imports___closed__9 = (const lean_object*)&l_Lean_Elab_HeaderSyntax_imports___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_toModuleHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "deprecated_module: ignore"};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0_value;
static const lean_ctor_object l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1 = (const lean_object*)&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1_value;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2;
static lean_once_cell_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3;
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "deprecatedModuleExt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(112, 167, 11, 228, 166, 253, 145, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_checkDeprecatedImports___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkDeprecatedImports___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7;
static lean_once_cell_t l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "CON"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PRN"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "AUX"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "NUL"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM1"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM2"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM3"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM4"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM5"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM6"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM7"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM8"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COM9"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "COM¹"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "COM²"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "COM³"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT1"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT2"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT3"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT4"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT5"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT6"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT7"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT8"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LPT9"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "LPT¹"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "LPT²"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 4, .m_data = "LPT³"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27_value;
static const lean_array_object l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*28, .m_other = 0, .m_tag = 246}, .m_size = 28, .m_capacity = 28, .m_data = {((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__0_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__1_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__2_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__3_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__4_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__5_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__6_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__7_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__8_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__9_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__10_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__11_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__12_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__13_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__14_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__15_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__16_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__17_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__18_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__19_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__20_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__21_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__22_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__23_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__24_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__25_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__26_value),((lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__27_value)}};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames___closed__28_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(lean_object*, uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "contains character '"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "' which is forbidden on some operating systems"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "' is a reserved file name on some operating systems"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "module name '"};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "' is not portable: "};
static const lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_parseImports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l_Lean_Elab_parseImports___closed__0 = (const lean_object*)&l_Lean_Elab_parseImports___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImports(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImports___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos(lean_object* v_header_1_){
_start:
{
uint8_t v___x_2_; lean_object* v___x_3_; 
v___x_2_ = 0;
v___x_3_ = l_Lean_Syntax_getPos_x3f(v_header_1_, v___x_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(0u);
return v___x_4_;
}
else
{
lean_object* v_val_5_; 
v_val_5_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_val_5_);
lean_dec_ref_known(v___x_3_, 1);
return v_val_5_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_startPos___boxed(lean_object* v_header_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lean_Elab_HeaderSyntax_startPos(v_header_6_);
lean_dec(v_header_6_);
return v_res_7_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_HeaderSyntax_isModule(lean_object* v_header_8_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_9_ = lean_unsigned_to_nat(0u);
v___x_10_ = l_Lean_Syntax_getArg(v_header_8_, v___x_9_);
v___x_11_ = l_Lean_Syntax_isNone(v___x_10_);
lean_dec(v___x_10_);
if (v___x_11_ == 0)
{
uint8_t v___x_12_; 
v___x_12_ = 1;
return v___x_12_;
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_isModule___boxed(lean_object* v_header_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Elab_HeaderSyntax_isModule(v_header_14_);
lean_dec(v_header_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Array_instInhabited___redArg();
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(lean_object* v_msg_18_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_obj_once(&l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0, &l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0___closed__0);
v___x_20_ = lean_panic_fn_borrowed(v___x_19_, v_msg_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(lean_object* v_msg_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = l_Lean_instInhabitedImport_default;
v___x_23_ = lean_panic_fn_borrowed(v___x_22_, v_msg_21_);
return v___x_23_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_36_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7));
v___x_37_ = lean_unsigned_to_nat(13u);
v___x_38_ = lean_unsigned_to_nat(40u);
v___x_39_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6));
v___x_40_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5));
v___x_41_ = l_mkPanicMessageWithDecl(v___x_40_, v___x_39_, v___x_38_, v___x_37_, v___x_36_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(lean_object* v_moduleTk_60_, size_t v_sz_61_, size_t v_i_62_, lean_object* v_bs_63_){
_start:
{
uint8_t v___x_64_; 
v___x_64_ = lean_usize_dec_lt(v_i_62_, v_sz_61_);
if (v___x_64_ == 0)
{
return v_bs_63_;
}
else
{
lean_object* v___x_65_; lean_object* v_v_66_; lean_object* v___x_67_; lean_object* v_bs_x27_68_; lean_object* v___y_70_; lean_object* v___y_76_; lean_object* v___y_77_; uint8_t v___y_78_; uint8_t v___y_79_; uint8_t v___y_80_; lean_object* v___y_85_; lean_object* v___y_86_; uint8_t v___y_87_; lean_object* v___y_88_; uint8_t v___y_89_; uint8_t v___x_91_; 
v___x_65_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4));
v_v_66_ = lean_array_uget(v_bs_63_, v_i_62_);
v___x_67_ = lean_unsigned_to_nat(0u);
v_bs_x27_68_ = lean_array_uset(v_bs_63_, v_i_62_, v___x_67_);
lean_inc(v_v_66_);
v___x_91_ = l_Lean_Syntax_isOfKind(v_v_66_, v___x_65_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v_v_66_);
v___x_92_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_93_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_92_);
v___y_70_ = v___x_93_;
goto v___jp_69_;
}
else
{
lean_object* v___y_95_; lean_object* v___y_96_; lean_object* v_allTk_97_; lean_object* v___x_107_; lean_object* v___y_109_; lean_object* v_metaTk_110_; lean_object* v_publicTk_126_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_107_ = lean_unsigned_to_nat(1u);
v___x_140_ = l_Lean_Syntax_getArg(v_v_66_, v___x_67_);
v___x_141_ = l_Lean_Syntax_isNone(v___x_140_);
if (v___x_141_ == 0)
{
uint8_t v___x_142_; 
lean_inc(v___x_140_);
v___x_142_ = l_Lean_Syntax_matchesNull(v___x_140_, v___x_107_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; lean_object* v___x_144_; 
lean_dec(v___x_140_);
lean_dec(v_v_66_);
v___x_143_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_144_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_143_);
v___y_70_ = v___x_144_;
goto v___jp_69_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_145_ = l_Lean_Syntax_getArg(v___x_140_, v___x_67_);
lean_dec(v___x_140_);
v___x_146_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14));
lean_inc(v___x_145_);
v___x_147_ = l_Lean_Syntax_isOfKind(v___x_145_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec(v___x_145_);
lean_dec(v_v_66_);
v___x_148_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_149_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_148_);
v___y_70_ = v___x_149_;
goto v___jp_69_;
}
else
{
lean_object* v_publicTk_150_; lean_object* v___x_151_; 
v_publicTk_150_ = l_Lean_Syntax_getArg(v___x_145_, v___x_67_);
lean_dec(v___x_145_);
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v_publicTk_150_);
v_publicTk_126_ = v___x_151_;
goto v___jp_125_;
}
}
}
else
{
lean_object* v___x_152_; 
lean_dec(v___x_140_);
v___x_152_ = lean_box(0);
v_publicTk_126_ = v___x_152_;
goto v___jp_125_;
}
v___jp_94_:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_98_ = lean_unsigned_to_nat(5u);
v___x_99_ = l_Lean_Syntax_getArg(v_v_66_, v___x_98_);
v___x_100_ = l_Lean_Syntax_matchesNull(v___x_99_, v___x_67_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; lean_object* v___x_102_; 
lean_dec(v_allTk_97_);
lean_dec(v___y_96_);
lean_dec(v___y_95_);
lean_dec(v_v_66_);
v___x_101_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_102_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_101_);
v___y_70_ = v___x_102_;
goto v___jp_69_;
}
else
{
lean_object* v___x_103_; lean_object* v_n_104_; lean_object* v___x_105_; 
v___x_103_ = lean_unsigned_to_nat(4u);
v_n_104_ = l_Lean_Syntax_getArg(v_v_66_, v___x_103_);
lean_dec(v_v_66_);
v___x_105_ = l_Lean_TSyntax_getId(v_n_104_);
lean_dec(v_n_104_);
if (lean_obj_tag(v_allTk_97_) == 0)
{
uint8_t v___x_106_; 
v___x_106_ = 0;
v___y_85_ = v___y_95_;
v___y_86_ = v___x_105_;
v___y_87_ = v___x_100_;
v___y_88_ = v___y_96_;
v___y_89_ = v___x_106_;
goto v___jp_84_;
}
else
{
lean_dec_ref_known(v_allTk_97_, 1);
v___y_85_ = v___y_95_;
v___y_86_ = v___x_105_;
v___y_87_ = v___x_100_;
v___y_88_ = v___y_96_;
v___y_89_ = v___x_100_;
goto v___jp_84_;
}
}
}
v___jp_108_:
{
lean_object* v___x_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_111_ = lean_unsigned_to_nat(3u);
v___x_112_ = l_Lean_Syntax_getArg(v_v_66_, v___x_111_);
v___x_113_ = l_Lean_Syntax_isNone(v___x_112_);
if (v___x_113_ == 0)
{
uint8_t v___x_114_; 
lean_inc(v___x_112_);
v___x_114_ = l_Lean_Syntax_matchesNull(v___x_112_, v___x_107_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; 
lean_dec(v___x_112_);
lean_dec(v_metaTk_110_);
lean_dec(v___y_109_);
lean_dec(v_v_66_);
v___x_115_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_116_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_115_);
v___y_70_ = v___x_116_;
goto v___jp_69_;
}
else
{
lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_117_ = l_Lean_Syntax_getArg(v___x_112_, v___x_67_);
lean_dec(v___x_112_);
v___x_118_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10));
lean_inc(v___x_117_);
v___x_119_ = l_Lean_Syntax_isOfKind(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v___x_117_);
lean_dec(v_metaTk_110_);
lean_dec(v___y_109_);
lean_dec(v_v_66_);
v___x_120_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_121_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_120_);
v___y_70_ = v___x_121_;
goto v___jp_69_;
}
else
{
lean_object* v_allTk_122_; lean_object* v___x_123_; 
v_allTk_122_ = l_Lean_Syntax_getArg(v___x_117_, v___x_67_);
lean_dec(v___x_117_);
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v_allTk_122_);
v___y_95_ = v_metaTk_110_;
v___y_96_ = v___y_109_;
v_allTk_97_ = v___x_123_;
goto v___jp_94_;
}
}
}
else
{
lean_object* v___x_124_; 
lean_dec(v___x_112_);
v___x_124_ = lean_box(0);
v___y_95_ = v_metaTk_110_;
v___y_96_ = v___y_109_;
v_allTk_97_ = v___x_124_;
goto v___jp_94_;
}
}
v___jp_125_:
{
lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_127_ = l_Lean_Syntax_getArg(v_v_66_, v___x_107_);
v___x_128_ = l_Lean_Syntax_isNone(v___x_127_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
lean_inc(v___x_127_);
v___x_129_ = l_Lean_Syntax_matchesNull(v___x_127_, v___x_107_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; 
lean_dec(v___x_127_);
lean_dec(v_publicTk_126_);
lean_dec(v_v_66_);
v___x_130_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_131_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_130_);
v___y_70_ = v___x_131_;
goto v___jp_69_;
}
else
{
lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_132_ = l_Lean_Syntax_getArg(v___x_127_, v___x_67_);
lean_dec(v___x_127_);
v___x_133_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12));
lean_inc(v___x_132_);
v___x_134_ = l_Lean_Syntax_isOfKind(v___x_132_, v___x_133_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; lean_object* v___x_136_; 
lean_dec(v___x_132_);
lean_dec(v_publicTk_126_);
lean_dec(v_v_66_);
v___x_135_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__8);
v___x_136_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__1(v___x_135_);
v___y_70_ = v___x_136_;
goto v___jp_69_;
}
else
{
lean_object* v_metaTk_137_; lean_object* v___x_138_; 
v_metaTk_137_ = l_Lean_Syntax_getArg(v___x_132_, v___x_67_);
lean_dec(v___x_132_);
v___x_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_138_, 0, v_metaTk_137_);
v___y_109_ = v_publicTk_126_;
v_metaTk_110_ = v___x_138_;
goto v___jp_108_;
}
}
}
else
{
lean_object* v___x_139_; 
lean_dec(v___x_127_);
v___x_139_ = lean_box(0);
v___y_109_ = v_publicTk_126_;
v_metaTk_110_ = v___x_139_;
goto v___jp_108_;
}
}
}
v___jp_69_:
{
size_t v___x_71_; size_t v___x_72_; lean_object* v___x_73_; 
v___x_71_ = ((size_t)1ULL);
v___x_72_ = lean_usize_add(v_i_62_, v___x_71_);
v___x_73_ = lean_array_uset(v_bs_x27_68_, v_i_62_, v___y_70_);
v_i_62_ = v___x_72_;
v_bs_63_ = v___x_73_;
goto _start;
}
v___jp_75_:
{
if (lean_obj_tag(v___y_76_) == 0)
{
uint8_t v___x_81_; lean_object* v___x_82_; 
v___x_81_ = 0;
v___x_82_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_82_, 0, v___y_77_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___y_78_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1 + 1, v___y_80_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1 + 2, v___x_81_);
v___y_70_ = v___x_82_;
goto v___jp_69_;
}
else
{
lean_object* v___x_83_; 
lean_dec_ref_known(v___y_76_, 1);
v___x_83_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_83_, 0, v___y_77_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*1, v___y_78_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*1 + 1, v___y_80_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*1 + 2, v___y_79_);
v___y_70_ = v___x_83_;
goto v___jp_69_;
}
}
v___jp_84_:
{
if (lean_obj_tag(v___y_88_) == 0)
{
if (lean_obj_tag(v_moduleTk_60_) == 0)
{
v___y_76_ = v___y_85_;
v___y_77_ = v___y_86_;
v___y_78_ = v___y_89_;
v___y_79_ = v___y_87_;
v___y_80_ = v___y_87_;
goto v___jp_75_;
}
else
{
uint8_t v___x_90_; 
v___x_90_ = 0;
v___y_76_ = v___y_85_;
v___y_77_ = v___y_86_;
v___y_78_ = v___y_89_;
v___y_79_ = v___y_87_;
v___y_80_ = v___x_90_;
goto v___jp_75_;
}
}
else
{
lean_dec_ref_known(v___y_88_, 1);
v___y_76_ = v___y_85_;
v___y_77_ = v___y_86_;
v___y_78_ = v___y_89_;
v___y_79_ = v___y_87_;
v___y_80_ = v___y_87_;
goto v___jp_75_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___boxed(lean_object* v_moduleTk_153_, lean_object* v_sz_154_, lean_object* v_i_155_, lean_object* v_bs_156_){
_start:
{
size_t v_sz_boxed_157_; size_t v_i_boxed_158_; lean_object* v_res_159_; 
v_sz_boxed_157_ = lean_unbox_usize(v_sz_154_);
lean_dec(v_sz_154_);
v_i_boxed_158_ = lean_unbox_usize(v_i_155_);
lean_dec(v_i_155_);
v_res_159_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(v_moduleTk_153_, v_sz_boxed_157_, v_i_boxed_158_, v_bs_156_);
lean_dec(v_moduleTk_153_);
return v_res_159_;
}
}
static lean_object* _init_l_Lean_Elab_HeaderSyntax_imports___closed__2(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_166_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__7));
v___x_167_ = lean_unsigned_to_nat(9u);
v___x_168_ = lean_unsigned_to_nat(41u);
v___x_169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__6));
v___x_170_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__5));
v___x_171_ = l_mkPanicMessageWithDecl(v___x_170_, v___x_169_, v___x_168_, v___x_167_, v___x_166_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports(lean_object* v_stx_189_, uint8_t v_includeInit_190_){
_start:
{
lean_object* v___y_192_; lean_object* v___y_193_; lean_object* v___y_194_; lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__1));
lean_inc(v_stx_189_);
v___x_200_ = l_Lean_Syntax_isOfKind(v_stx_189_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec(v_stx_189_);
v___x_201_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_202_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_201_);
return v___x_202_;
}
else
{
lean_object* v___x_203_; lean_object* v___y_205_; lean_object* v___y_206_; lean_object* v___y_209_; lean_object* v_preludeTk_210_; lean_object* v_moduleTk_222_; lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_203_ = lean_unsigned_to_nat(0u);
v___x_237_ = l_Lean_Syntax_getArg(v_stx_189_, v___x_203_);
v___x_238_ = l_Lean_Syntax_isNone(v___x_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_237_);
v___x_240_ = l_Lean_Syntax_matchesNull(v___x_237_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec(v___x_237_);
lean_dec(v_stx_189_);
v___x_241_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_242_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_241_);
return v___x_242_;
}
else
{
lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_243_ = l_Lean_Syntax_getArg(v___x_237_, v___x_203_);
lean_dec(v___x_237_);
v___x_244_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__9));
lean_inc(v___x_243_);
v___x_245_ = l_Lean_Syntax_isOfKind(v___x_243_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec(v___x_243_);
lean_dec(v_stx_189_);
v___x_246_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_247_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_246_);
return v___x_247_;
}
else
{
lean_object* v_moduleTk_248_; lean_object* v___x_249_; 
v_moduleTk_248_ = l_Lean_Syntax_getArg(v___x_243_, v___x_203_);
lean_dec(v___x_243_);
v___x_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_249_, 0, v_moduleTk_248_);
v_moduleTk_222_ = v___x_249_;
goto v___jp_221_;
}
}
}
else
{
lean_object* v___x_250_; 
lean_dec(v___x_237_);
v___x_250_ = lean_box(0);
v_moduleTk_222_ = v___x_250_;
goto v___jp_221_;
}
v___jp_204_:
{
lean_object* v___x_207_; 
v___x_207_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__3));
v___y_192_ = v___y_205_;
v___y_193_ = v___y_206_;
v___y_194_ = v___x_207_;
goto v___jp_191_;
}
v___jp_208_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v_importsStx_213_; 
v___x_211_ = lean_unsigned_to_nat(2u);
v___x_212_ = l_Lean_Syntax_getArg(v_stx_189_, v___x_211_);
lean_dec(v_stx_189_);
v_importsStx_213_ = l_Lean_Syntax_getArgs(v___x_212_);
lean_dec(v___x_212_);
if (lean_obj_tag(v_preludeTk_210_) == 0)
{
if (v_includeInit_190_ == 0)
{
v___y_205_ = v_importsStx_213_;
v___y_206_ = v___y_209_;
goto v___jp_204_;
}
else
{
lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_214_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__5));
v___x_215_ = 0;
v___x_216_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1, v___x_215_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1 + 1, v_includeInit_190_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1 + 2, v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_217_, 0, v___x_214_);
lean_ctor_set_uint8(v___x_217_, sizeof(void*)*1, v___x_215_);
lean_ctor_set_uint8(v___x_217_, sizeof(void*)*1 + 1, v_includeInit_190_);
lean_ctor_set_uint8(v___x_217_, sizeof(void*)*1 + 2, v_includeInit_190_);
v___x_218_ = lean_mk_empty_array_with_capacity(v___x_211_);
v___x_219_ = lean_array_push(v___x_218_, v___x_216_);
v___x_220_ = lean_array_push(v___x_219_, v___x_217_);
v___y_192_ = v_importsStx_213_;
v___y_193_ = v___y_209_;
v___y_194_ = v___x_220_;
goto v___jp_191_;
}
}
else
{
lean_dec_ref_known(v_preludeTk_210_, 1);
v___y_205_ = v_importsStx_213_;
v___y_206_ = v___y_209_;
goto v___jp_204_;
}
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = l_Lean_Syntax_getArg(v_stx_189_, v___x_223_);
v___x_225_ = l_Lean_Syntax_isNone(v___x_224_);
if (v___x_225_ == 0)
{
uint8_t v___x_226_; 
lean_inc(v___x_224_);
v___x_226_ = l_Lean_Syntax_matchesNull(v___x_224_, v___x_223_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec(v___x_224_);
lean_dec(v_moduleTk_222_);
lean_dec(v_stx_189_);
v___x_227_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_228_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_227_);
return v___x_228_;
}
else
{
lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_229_ = l_Lean_Syntax_getArg(v___x_224_, v___x_203_);
lean_dec(v___x_224_);
v___x_230_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__7));
lean_inc(v___x_229_);
v___x_231_ = l_Lean_Syntax_isOfKind(v___x_229_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; 
lean_dec(v___x_229_);
lean_dec(v_moduleTk_222_);
lean_dec(v_stx_189_);
v___x_232_ = lean_obj_once(&l_Lean_Elab_HeaderSyntax_imports___closed__2, &l_Lean_Elab_HeaderSyntax_imports___closed__2_once, _init_l_Lean_Elab_HeaderSyntax_imports___closed__2);
v___x_233_ = l_panic___at___00Lean_Elab_HeaderSyntax_imports_spec__0(v___x_232_);
return v___x_233_;
}
else
{
lean_object* v_preludeTk_234_; lean_object* v___x_235_; 
v_preludeTk_234_ = l_Lean_Syntax_getArg(v___x_229_, v___x_203_);
lean_dec(v___x_229_);
v___x_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_235_, 0, v_preludeTk_234_);
v___y_209_ = v_moduleTk_222_;
v_preludeTk_210_ = v___x_235_;
goto v___jp_208_;
}
}
}
else
{
lean_object* v___x_236_; 
lean_dec(v___x_224_);
v___x_236_ = lean_box(0);
v___y_209_ = v_moduleTk_222_;
v_preludeTk_210_ = v___x_236_;
goto v___jp_208_;
}
}
}
v___jp_191_:
{
size_t v_sz_195_; size_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_sz_195_ = lean_array_size(v___y_192_);
v___x_196_ = ((size_t)0ULL);
v___x_197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2(v___y_193_, v_sz_195_, v___x_196_, v___y_192_);
lean_dec(v___y_193_);
v___x_198_ = l_Array_append___redArg(v___y_194_, v___x_197_);
lean_dec_ref(v___x_197_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_imports___boxed(lean_object* v_stx_251_, lean_object* v_includeInit_252_){
_start:
{
uint8_t v_includeInit_boxed_253_; lean_object* v_res_254_; 
v_includeInit_boxed_253_ = lean_unbox(v_includeInit_252_);
v_res_254_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_251_, v_includeInit_boxed_253_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_HeaderSyntax_toModuleHeader(lean_object* v_stx_255_){
_start:
{
uint8_t v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; lean_object* v___x_259_; 
v___x_256_ = 1;
lean_inc(v_stx_255_);
v___x_257_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_255_, v___x_256_);
v___x_258_ = l_Lean_Elab_HeaderSyntax_isModule(v_stx_255_);
lean_dec(v_stx_255_);
v___x_259_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports(lean_object* v_stx_260_, uint8_t v_includeInit_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lean_Elab_HeaderSyntax_imports(v_stx_260_, v_includeInit_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_headerToImports___boxed(lean_object* v_stx_263_, lean_object* v_includeInit_264_){
_start:
{
uint8_t v_includeInit_boxed_265_; lean_object* v_res_266_; 
v_includeInit_boxed_265_ = lean_unbox(v_includeInit_264_);
v_res_266_ = l_Lean_Elab_headerToImports(v_stx_263_, v_includeInit_boxed_265_);
return v_res_266_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(lean_object* v_opts_267_, lean_object* v_opt_268_){
_start:
{
lean_object* v_name_269_; lean_object* v_defValue_270_; lean_object* v_map_271_; lean_object* v___x_272_; 
v_name_269_ = lean_ctor_get(v_opt_268_, 0);
v_defValue_270_ = lean_ctor_get(v_opt_268_, 1);
v_map_271_ = lean_ctor_get(v_opts_267_, 0);
v___x_272_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_271_, v_name_269_);
if (lean_obj_tag(v___x_272_) == 0)
{
uint8_t v___x_273_; 
v___x_273_ = lean_unbox(v_defValue_270_);
return v___x_273_;
}
else
{
lean_object* v_val_274_; 
v_val_274_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_val_274_);
lean_dec_ref_known(v___x_272_, 1);
if (lean_obj_tag(v_val_274_) == 1)
{
uint8_t v_v_275_; 
v_v_275_ = lean_ctor_get_uint8(v_val_274_, 0);
lean_dec_ref_known(v_val_274_, 0);
return v_v_275_;
}
else
{
uint8_t v___x_276_; 
lean_dec(v_val_274_);
v___x_276_ = lean_unbox(v_defValue_270_);
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0___boxed(lean_object* v_opts_277_, lean_object* v_opt_278_){
_start:
{
uint8_t v_res_279_; lean_object* v_r_280_; 
v_res_279_ = l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(v_opts_277_, v_opt_278_);
lean_dec_ref(v_opt_278_);
lean_dec_ref(v_opts_277_);
v_r_280_ = lean_box(v_res_279_);
return v_r_280_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(lean_object* v_s_281_, lean_object* v_a_282_, uint8_t v_b_283_){
_start:
{
uint8_t v___x_284_; 
v___x_284_ = 0;
switch(lean_obj_tag(v_a_282_))
{
case 0:
{
lean_object* v_pos_285_; lean_object* v_startInclusive_286_; lean_object* v_endExclusive_287_; lean_object* v___x_288_; uint8_t v_decide_289_; 
v_pos_285_ = lean_ctor_get(v_a_282_, 0);
lean_inc(v_pos_285_);
lean_dec_ref_known(v_a_282_, 1);
v_startInclusive_286_ = lean_ctor_get(v_s_281_, 1);
v_endExclusive_287_ = lean_ctor_get(v_s_281_, 2);
v___x_288_ = lean_nat_sub(v_endExclusive_287_, v_startInclusive_286_);
v_decide_289_ = lean_nat_dec_eq(v_pos_285_, v___x_288_);
lean_dec(v___x_288_);
lean_dec(v_pos_285_);
if (v_decide_289_ == 0)
{
uint8_t v___x_290_; 
v___x_290_ = 1;
return v___x_290_;
}
else
{
return v_decide_289_;
}
}
case 1:
{
lean_object* v_pos_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_304_; 
v_pos_291_ = lean_ctor_get(v_a_282_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_a_282_);
if (v_isSharedCheck_304_ == 0)
{
v___x_293_ = v_a_282_;
v_isShared_294_ = v_isSharedCheck_304_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_pos_291_);
lean_dec(v_a_282_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_304_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v_str_295_; lean_object* v_startInclusive_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_301_; 
v_str_295_ = lean_ctor_get(v_s_281_, 0);
v_startInclusive_296_ = lean_ctor_get(v_s_281_, 1);
v___x_297_ = lean_nat_add(v_startInclusive_296_, v_pos_291_);
lean_dec(v_pos_291_);
v___x_298_ = lean_string_utf8_next_fast(v_str_295_, v___x_297_);
lean_dec(v___x_297_);
v___x_299_ = lean_nat_sub(v___x_298_, v_startInclusive_296_);
if (v_isShared_294_ == 0)
{
lean_ctor_set_tag(v___x_293_, 0);
lean_ctor_set(v___x_293_, 0, v___x_299_);
v___x_301_ = v___x_293_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_299_);
v___x_301_ = v_reuseFailAlloc_303_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
v_a_282_ = v___x_301_;
v_b_283_ = v___x_284_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_305_; lean_object* v_table_306_; lean_object* v_stackPos_307_; lean_object* v_needlePos_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_363_; 
v_needle_305_ = lean_ctor_get(v_a_282_, 0);
v_table_306_ = lean_ctor_get(v_a_282_, 1);
v_stackPos_307_ = lean_ctor_get(v_a_282_, 2);
v_needlePos_308_ = lean_ctor_get(v_a_282_, 3);
v_isSharedCheck_363_ = !lean_is_exclusive(v_a_282_);
if (v_isSharedCheck_363_ == 0)
{
v___x_310_ = v_a_282_;
v_isShared_311_ = v_isSharedCheck_363_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_needlePos_308_);
lean_inc(v_stackPos_307_);
lean_inc(v_table_306_);
lean_inc(v_needle_305_);
lean_dec(v_a_282_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_363_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v_str_312_; lean_object* v_startInclusive_313_; lean_object* v_endExclusive_314_; lean_object* v_str_315_; lean_object* v_startInclusive_316_; lean_object* v_endExclusive_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; uint8_t v___x_322_; 
v_str_312_ = lean_ctor_get(v_needle_305_, 0);
v_startInclusive_313_ = lean_ctor_get(v_needle_305_, 1);
v_endExclusive_314_ = lean_ctor_get(v_needle_305_, 2);
v_str_315_ = lean_ctor_get(v_s_281_, 0);
v_startInclusive_316_ = lean_ctor_get(v_s_281_, 1);
v_endExclusive_317_ = lean_ctor_get(v_s_281_, 2);
v___x_318_ = lean_nat_sub(v_stackPos_307_, v_needlePos_308_);
v___x_319_ = lean_nat_sub(v_endExclusive_314_, v_startInclusive_313_);
v___x_320_ = lean_nat_add(v___x_318_, v___x_319_);
v___x_321_ = lean_nat_sub(v_endExclusive_317_, v_startInclusive_316_);
v___x_322_ = lean_nat_dec_le(v___x_320_, v___x_321_);
lean_dec(v___x_320_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
lean_dec(v___x_319_);
lean_del_object(v___x_310_);
lean_dec(v_needlePos_308_);
lean_dec(v_stackPos_307_);
lean_dec_ref(v_table_306_);
lean_dec_ref(v_needle_305_);
v___x_323_ = lean_unsigned_to_nat(1u);
v___x_324_ = lean_nat_add(v___x_318_, v___x_323_);
lean_dec(v___x_318_);
v___x_325_ = lean_nat_dec_le(v___x_324_, v___x_321_);
lean_dec(v___x_321_);
lean_dec(v___x_324_);
if (v___x_325_ == 0)
{
return v_b_283_;
}
else
{
lean_object* v___x_326_; 
v___x_326_ = lean_box(3);
v_a_282_ = v___x_326_;
v_b_283_ = v___x_284_;
goto _start;
}
}
else
{
lean_object* v___x_328_; uint8_t v_stackByte_329_; lean_object* v___x_330_; uint8_t v_patByte_331_; uint8_t v___x_332_; 
lean_dec(v___x_321_);
lean_dec(v___x_318_);
v___x_328_ = lean_nat_add(v_startInclusive_316_, v_stackPos_307_);
v_stackByte_329_ = lean_string_get_byte_fast(v_str_315_, v___x_328_);
v___x_330_ = lean_nat_add(v_startInclusive_313_, v_needlePos_308_);
v_patByte_331_ = lean_string_get_byte_fast(v_str_312_, v___x_330_);
v___x_332_ = lean_uint8_dec_eq(v_stackByte_329_, v_patByte_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; uint8_t v_decide_334_; 
lean_dec(v___x_319_);
v___x_333_ = lean_unsigned_to_nat(0u);
v_decide_334_ = lean_nat_dec_eq(v_needlePos_308_, v___x_333_);
if (v_decide_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v_newNeedlePos_337_; uint8_t v___x_338_; 
v___x_335_ = lean_unsigned_to_nat(1u);
v___x_336_ = lean_nat_sub(v_needlePos_308_, v___x_335_);
lean_dec(v_needlePos_308_);
v_newNeedlePos_337_ = lean_array_fget_borrowed(v_table_306_, v___x_336_);
lean_dec(v___x_336_);
v___x_338_ = lean_nat_dec_eq(v_newNeedlePos_337_, v___x_333_);
if (v___x_338_ == 0)
{
lean_object* v___x_340_; 
lean_inc(v_newNeedlePos_337_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 3, v_newNeedlePos_337_);
v___x_340_ = v___x_310_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_needle_305_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_table_306_);
lean_ctor_set(v_reuseFailAlloc_342_, 2, v_stackPos_307_);
lean_ctor_set(v_reuseFailAlloc_342_, 3, v_newNeedlePos_337_);
v___x_340_ = v_reuseFailAlloc_342_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
v_a_282_ = v___x_340_;
v_b_283_ = v___x_284_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_343_; lean_object* v___x_345_; 
v_nextStackPos_343_ = l_String_Slice_posGE___redArg(v_s_281_, v_stackPos_307_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 3, v___x_333_);
lean_ctor_set(v___x_310_, 2, v_nextStackPos_343_);
v___x_345_ = v___x_310_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_needle_305_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_table_306_);
lean_ctor_set(v_reuseFailAlloc_347_, 2, v_nextStackPos_343_);
lean_ctor_set(v_reuseFailAlloc_347_, 3, v___x_333_);
v___x_345_ = v_reuseFailAlloc_347_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
v_a_282_ = v___x_345_;
v_b_283_ = v___x_284_;
goto _start;
}
}
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v_nextStackPos_350_; lean_object* v___x_352_; 
lean_dec(v_needlePos_308_);
v___x_348_ = lean_unsigned_to_nat(1u);
v___x_349_ = lean_nat_add(v_stackPos_307_, v___x_348_);
lean_dec(v_stackPos_307_);
v_nextStackPos_350_ = l_String_Slice_posGE___redArg(v_s_281_, v___x_349_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 3, v___x_333_);
lean_ctor_set(v___x_310_, 2, v_nextStackPos_350_);
v___x_352_ = v___x_310_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_needle_305_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v_table_306_);
lean_ctor_set(v_reuseFailAlloc_354_, 2, v_nextStackPos_350_);
lean_ctor_set(v_reuseFailAlloc_354_, 3, v___x_333_);
v___x_352_ = v_reuseFailAlloc_354_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
v_a_282_ = v___x_352_;
v_b_283_ = v___x_284_;
goto _start;
}
}
}
else
{
lean_object* v___x_355_; lean_object* v_nextNeedlePos_356_; uint8_t v_decide_357_; 
v___x_355_ = lean_unsigned_to_nat(1u);
v_nextNeedlePos_356_ = lean_nat_add(v_needlePos_308_, v___x_355_);
lean_dec(v_needlePos_308_);
v_decide_357_ = lean_nat_dec_eq(v_nextNeedlePos_356_, v___x_319_);
lean_dec(v___x_319_);
if (v_decide_357_ == 0)
{
lean_object* v_nextStackPos_358_; lean_object* v___x_360_; 
v_nextStackPos_358_ = lean_nat_add(v_stackPos_307_, v___x_355_);
lean_dec(v_stackPos_307_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 3, v_nextNeedlePos_356_);
lean_ctor_set(v___x_310_, 2, v_nextStackPos_358_);
v___x_360_ = v___x_310_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_needle_305_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_table_306_);
lean_ctor_set(v_reuseFailAlloc_362_, 2, v_nextStackPos_358_);
lean_ctor_set(v_reuseFailAlloc_362_, 3, v_nextNeedlePos_356_);
v___x_360_ = v_reuseFailAlloc_362_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
v_a_282_ = v___x_360_;
goto _start;
}
}
else
{
lean_dec(v_nextNeedlePos_356_);
lean_del_object(v___x_310_);
lean_dec(v_stackPos_307_);
lean_dec_ref(v_table_306_);
lean_dec_ref(v_needle_305_);
return v_decide_357_;
}
}
}
}
}
default: 
{
return v_b_283_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg___boxed(lean_object* v_s_364_, lean_object* v_a_365_, lean_object* v_b_366_){
_start:
{
uint8_t v_b_boxed_367_; uint8_t v_res_368_; lean_object* v_r_369_; 
v_b_boxed_367_ = lean_unbox(v_b_366_);
v_res_368_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(v_s_364_, v_a_365_, v_b_boxed_367_);
lean_dec_ref(v_s_364_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1));
v___x_376_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_375_);
return v___x_376_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_377_ = lean_unsigned_to_nat(0u);
v___x_378_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__2);
v___x_379_ = ((lean_object*)(l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__1));
v___x_380_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v___x_378_);
lean_ctor_set(v___x_380_, 2, v___x_377_);
lean_ctor_set(v___x_380_, 3, v___x_377_);
return v___x_380_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(lean_object* v_s_381_){
_start:
{
lean_object* v___x_382_; uint8_t v___x_383_; uint8_t v___x_384_; 
v___x_382_ = lean_obj_once(&l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3, &l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3_once, _init_l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___closed__3);
v___x_383_ = 0;
v___x_384_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(v_s_381_, v___x_382_, v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2___boxed(lean_object* v_s_385_){
_start:
{
uint8_t v_res_386_; lean_object* v_r_387_; 
v_res_386_ = l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(v_s_385_);
lean_dec_ref(v_s_385_);
v_r_387_ = lean_box(v_res_386_);
return v_r_387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(lean_object* v_as_388_, size_t v_sz_389_, size_t v_i_390_, lean_object* v_b_391_){
_start:
{
lean_object* v_a_393_; uint8_t v___x_397_; 
v___x_397_ = lean_usize_dec_lt(v_i_390_, v_sz_389_);
if (v___x_397_ == 0)
{
return v_b_391_;
}
else
{
lean_object* v_fst_398_; lean_object* v_snd_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_474_; 
v_fst_398_ = lean_ctor_get(v_b_391_, 0);
v_snd_399_ = lean_ctor_get(v_b_391_, 1);
v_isSharedCheck_474_ = !lean_is_exclusive(v_b_391_);
if (v_isSharedCheck_474_ == 0)
{
v___x_401_ = v_b_391_;
v_isShared_402_ = v_isSharedCheck_474_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_snd_399_);
lean_inc(v_fst_398_);
lean_dec(v_b_391_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_474_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_403_; lean_object* v_a_404_; lean_object* v___y_406_; lean_object* v_ignoreDeprecatedImports_407_; uint8_t v___x_419_; 
v___x_403_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__4));
v_a_404_ = lean_array_uget_borrowed(v_as_388_, v_i_390_);
lean_inc(v_a_404_);
v___x_419_ = l_Lean_Syntax_isOfKind(v_a_404_, v___x_403_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; 
lean_del_object(v___x_401_);
v___x_420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_420_, 0, v_fst_398_);
lean_ctor_set(v___x_420_, 1, v_snd_399_);
v_a_393_ = v___x_420_;
goto v___jp_392_;
}
else
{
lean_object* v___x_421_; lean_object* v___x_446_; lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_421_ = lean_unsigned_to_nat(0u);
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_466_ = l_Lean_Syntax_getArg(v_a_404_, v___x_421_);
v___x_467_ = l_Lean_Syntax_isNone(v___x_466_);
if (v___x_467_ == 0)
{
uint8_t v___x_468_; 
lean_inc(v___x_466_);
v___x_468_ = l_Lean_Syntax_matchesNull(v___x_466_, v___x_446_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; 
lean_dec(v___x_466_);
lean_del_object(v___x_401_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v_fst_398_);
lean_ctor_set(v___x_469_, 1, v_snd_399_);
v_a_393_ = v___x_469_;
goto v___jp_392_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_470_ = l_Lean_Syntax_getArg(v___x_466_, v___x_421_);
lean_dec(v___x_466_);
v___x_471_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__14));
v___x_472_ = l_Lean_Syntax_isOfKind(v___x_470_, v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; 
lean_del_object(v___x_401_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v_fst_398_);
lean_ctor_set(v___x_473_, 1, v_snd_399_);
v_a_393_ = v___x_473_;
goto v___jp_392_;
}
else
{
goto v___jp_457_;
}
}
}
else
{
lean_dec(v___x_466_);
goto v___jp_457_;
}
v___jp_422_:
{
lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_423_ = lean_unsigned_to_nat(5u);
v___x_424_ = l_Lean_Syntax_getArg(v_a_404_, v___x_423_);
v___x_425_ = l_Lean_Syntax_matchesNull(v___x_424_, v___x_421_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; 
lean_del_object(v___x_401_);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v_fst_398_);
lean_ctor_set(v___x_426_, 1, v_snd_399_);
v_a_393_ = v___x_426_;
goto v___jp_392_;
}
else
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_427_ = lean_unsigned_to_nat(4u);
v___x_428_ = l_Lean_Syntax_getArg(v_a_404_, v___x_427_);
v___x_429_ = l_Lean_Syntax_getTrailing_x3f(v_a_404_);
if (lean_obj_tag(v___x_429_) == 0)
{
v___y_406_ = v___x_428_;
v_ignoreDeprecatedImports_407_ = v_fst_398_;
goto v___jp_405_;
}
else
{
lean_object* v_val_430_; lean_object* v_str_431_; lean_object* v_startPos_432_; lean_object* v_stopPos_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_445_; 
v_val_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_val_430_);
lean_dec_ref_known(v___x_429_, 1);
v_str_431_ = lean_ctor_get(v_val_430_, 0);
v_startPos_432_ = lean_ctor_get(v_val_430_, 1);
v_stopPos_433_ = lean_ctor_get(v_val_430_, 2);
v_isSharedCheck_445_ = !lean_is_exclusive(v_val_430_);
if (v_isSharedCheck_445_ == 0)
{
v___x_435_ = v_val_430_;
v_isShared_436_ = v_isSharedCheck_445_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_stopPos_433_);
lean_inc(v_startPos_432_);
lean_inc(v_str_431_);
lean_dec(v_val_430_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_445_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_440_; 
v___x_437_ = lean_string_utf8_extract(v_str_431_, v_startPos_432_, v_stopPos_433_);
lean_dec(v_stopPos_433_);
lean_dec(v_startPos_432_);
lean_dec_ref(v_str_431_);
v___x_438_ = lean_string_utf8_byte_size(v___x_437_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 2, v___x_438_);
lean_ctor_set(v___x_435_, 1, v___x_421_);
lean_ctor_set(v___x_435_, 0, v___x_437_);
v___x_440_ = v___x_435_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_437_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_421_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v___x_438_);
v___x_440_ = v_reuseFailAlloc_444_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
uint8_t v___x_441_; 
v___x_441_ = l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(v___x_440_);
lean_dec_ref(v___x_440_);
if (v___x_441_ == 0)
{
v___y_406_ = v___x_428_;
v_ignoreDeprecatedImports_407_ = v_fst_398_;
goto v___jp_405_;
}
else
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = l_Lean_TSyntax_getId(v___x_428_);
v___x_443_ = l_Lean_NameSet_insert(v_fst_398_, v___x_442_);
v___y_406_ = v___x_428_;
v_ignoreDeprecatedImports_407_ = v___x_443_;
goto v___jp_405_;
}
}
}
}
}
}
v___jp_447_:
{
lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_448_ = lean_unsigned_to_nat(3u);
v___x_449_ = l_Lean_Syntax_getArg(v_a_404_, v___x_448_);
v___x_450_ = l_Lean_Syntax_isNone(v___x_449_);
if (v___x_450_ == 0)
{
uint8_t v___x_451_; 
lean_inc(v___x_449_);
v___x_451_ = l_Lean_Syntax_matchesNull(v___x_449_, v___x_446_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; 
lean_dec(v___x_449_);
lean_del_object(v___x_401_);
v___x_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_452_, 0, v_fst_398_);
lean_ctor_set(v___x_452_, 1, v_snd_399_);
v_a_393_ = v___x_452_;
goto v___jp_392_;
}
else
{
lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_453_ = l_Lean_Syntax_getArg(v___x_449_, v___x_421_);
lean_dec(v___x_449_);
v___x_454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__10));
v___x_455_ = l_Lean_Syntax_isOfKind(v___x_453_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; 
lean_del_object(v___x_401_);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v_fst_398_);
lean_ctor_set(v___x_456_, 1, v_snd_399_);
v_a_393_ = v___x_456_;
goto v___jp_392_;
}
else
{
goto v___jp_422_;
}
}
}
else
{
lean_dec(v___x_449_);
goto v___jp_422_;
}
}
v___jp_457_:
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = l_Lean_Syntax_getArg(v_a_404_, v___x_446_);
v___x_459_ = l_Lean_Syntax_isNone(v___x_458_);
if (v___x_459_ == 0)
{
uint8_t v___x_460_; 
lean_inc(v___x_458_);
v___x_460_ = l_Lean_Syntax_matchesNull(v___x_458_, v___x_446_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; 
lean_dec(v___x_458_);
lean_del_object(v___x_401_);
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v_fst_398_);
lean_ctor_set(v___x_461_, 1, v_snd_399_);
v_a_393_ = v___x_461_;
goto v___jp_392_;
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_462_ = l_Lean_Syntax_getArg(v___x_458_, v___x_421_);
lean_dec(v___x_458_);
v___x_463_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__12));
v___x_464_ = l_Lean_Syntax_isOfKind(v___x_462_, v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
lean_del_object(v___x_401_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v_fst_398_);
lean_ctor_set(v___x_465_, 1, v_snd_399_);
v_a_393_ = v___x_465_;
goto v___jp_392_;
}
else
{
goto v___jp_447_;
}
}
}
else
{
lean_dec(v___x_458_);
goto v___jp_447_;
}
}
}
v___jp_405_:
{
uint8_t v___x_408_; lean_object* v___x_409_; 
v___x_408_ = 0;
v___x_409_ = l_Lean_Syntax_getPos_x3f(v_a_404_, v___x_408_);
if (lean_obj_tag(v___x_409_) == 1)
{
lean_object* v_val_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v_val_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_val_410_);
lean_dec_ref_known(v___x_409_, 1);
v___x_411_ = l_Lean_TSyntax_getId(v___y_406_);
lean_dec(v___y_406_);
v___x_412_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_411_, v_val_410_, v_snd_399_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 1, v___x_412_);
lean_ctor_set(v___x_401_, 0, v_ignoreDeprecatedImports_407_);
v___x_414_ = v___x_401_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_ignoreDeprecatedImports_407_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
v_a_393_ = v___x_414_;
goto v___jp_392_;
}
}
else
{
lean_object* v___x_417_; 
lean_dec(v___x_409_);
lean_dec(v___y_406_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 0, v_ignoreDeprecatedImports_407_);
v___x_417_ = v___x_401_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_ignoreDeprecatedImports_407_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_snd_399_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
v_a_393_ = v___x_417_;
goto v___jp_392_;
}
}
}
}
}
v___jp_392_:
{
size_t v___x_394_; size_t v___x_395_; 
v___x_394_ = ((size_t)1ULL);
v___x_395_ = lean_usize_add(v_i_390_, v___x_394_);
v_i_390_ = v___x_395_;
v_b_391_ = v_a_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3___boxed(lean_object* v_as_475_, lean_object* v_sz_476_, lean_object* v_i_477_, lean_object* v_b_478_){
_start:
{
size_t v_sz_boxed_479_; size_t v_i_boxed_480_; lean_object* v_res_481_; 
v_sz_boxed_479_ = lean_unbox_usize(v_sz_476_);
lean_dec(v_sz_476_);
v_i_boxed_480_ = lean_unbox_usize(v_i_477_);
lean_dec(v_i_477_);
v_res_481_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(v_as_475_, v_sz_boxed_479_, v_i_boxed_480_, v_b_478_);
lean_dec_ref(v_as_475_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(lean_object* v_o_485_, lean_object* v_k_486_, uint8_t v_v_487_){
_start:
{
lean_object* v_map_488_; uint8_t v_hasTrace_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_503_; 
v_map_488_ = lean_ctor_get(v_o_485_, 0);
v_hasTrace_489_ = lean_ctor_get_uint8(v_o_485_, sizeof(void*)*1);
v_isSharedCheck_503_ = !lean_is_exclusive(v_o_485_);
if (v_isSharedCheck_503_ == 0)
{
v___x_491_ = v_o_485_;
v_isShared_492_ = v_isSharedCheck_503_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_map_488_);
lean_dec(v_o_485_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_503_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_493_, 0, v_v_487_);
lean_inc(v_k_486_);
v___x_494_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_486_, v___x_493_, v_map_488_);
if (v_hasTrace_489_ == 0)
{
lean_object* v___x_495_; uint8_t v___x_496_; lean_object* v___x_498_; 
v___x_495_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___closed__1));
v___x_496_ = l_Lean_Name_isPrefixOf(v___x_495_, v_k_486_);
lean_dec(v_k_486_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v___x_494_);
v___x_498_ = v___x_491_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_494_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
lean_ctor_set_uint8(v___x_498_, sizeof(void*)*1, v___x_496_);
return v___x_498_;
}
}
else
{
lean_object* v___x_501_; 
lean_dec(v_k_486_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v___x_494_);
v___x_501_ = v___x_491_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_494_);
lean_ctor_set_uint8(v_reuseFailAlloc_502_, sizeof(void*)*1, v_hasTrace_489_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5___boxed(lean_object* v_o_504_, lean_object* v_k_505_, lean_object* v_v_506_){
_start:
{
uint8_t v_v_boxed_507_; lean_object* v_res_508_; 
v_v_boxed_507_ = lean_unbox(v_v_506_);
v_res_508_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(v_o_504_, v_k_505_, v_v_boxed_507_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(lean_object* v_opts_509_, lean_object* v_opt_510_, uint8_t v_val_511_){
_start:
{
lean_object* v_name_512_; lean_object* v___x_513_; 
v_name_512_ = lean_ctor_get(v_opt_510_, 0);
lean_inc(v_name_512_);
lean_dec_ref(v_opt_510_);
v___x_513_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4_spec__5(v_opts_509_, v_name_512_, v_val_511_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4___boxed(lean_object* v_opts_514_, lean_object* v_opt_515_, lean_object* v_val_516_){
_start:
{
uint8_t v_val_boxed_517_; lean_object* v_res_518_; 
v_val_boxed_517_ = lean_unbox(v_val_516_);
v_res_518_ = l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(v_opts_514_, v_opt_515_, v_val_boxed_517_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(lean_object* v_ignoreDeprecatedImports_524_, lean_object* v_env_525_, lean_object* v_inputCtx_526_, lean_object* v_importPositions_527_, lean_object* v_startPos_528_, lean_object* v_as_529_, size_t v_i_530_, size_t v_stop_531_, lean_object* v_b_532_){
_start:
{
lean_object* v___y_534_; uint8_t v___x_538_; 
v___x_538_ = lean_usize_dec_eq(v_i_530_, v_stop_531_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v_module_540_; uint8_t v___x_541_; 
v___x_539_ = lean_array_uget_borrowed(v_as_529_, v_i_530_);
v_module_540_ = lean_ctor_get(v___x_539_, 0);
v___x_541_ = l_Lean_NameSet_contains(v_ignoreDeprecatedImports_524_, v_module_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Environment_getModuleIdx_x3f(v_env_525_, v_module_540_);
if (lean_obj_tag(v___x_542_) == 0)
{
v___y_534_ = v_b_532_;
goto v___jp_533_;
}
else
{
lean_object* v_val_543_; lean_object* v___x_544_; 
v_val_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_val_543_);
lean_dec_ref_known(v___x_542_, 1);
v___x_544_ = l_Lean_Environment_getDeprecatedModuleByIdx_x3f(v_env_525_, v_val_543_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_dec(v_val_543_);
v___y_534_ = v_b_532_;
goto v___jp_533_;
}
else
{
lean_object* v_val_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_568_; 
v_val_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_568_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_568_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_val_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_568_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___y_550_; lean_object* v___x_566_; 
v___x_566_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_importPositions_527_, v_module_540_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_inc(v_startPos_528_);
v___y_550_ = v_startPos_528_;
goto v___jp_549_;
}
else
{
lean_object* v_val_567_; 
v_val_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_val_567_);
lean_dec_ref_known(v___x_566_, 1);
v___y_550_ = v_val_567_;
goto v___jp_549_;
}
v___jp_549_:
{
lean_object* v_fileName_551_; lean_object* v_fileMap_552_; lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_560_; 
v_fileName_551_ = lean_ctor_get(v_inputCtx_526_, 1);
v_fileMap_552_ = lean_ctor_get(v_inputCtx_526_, 2);
lean_inc_ref(v_fileMap_552_);
v___x_553_ = l_Lean_FileMap_toPosition(v_fileMap_552_, v___y_550_);
lean_dec(v___y_550_);
v___x_554_ = lean_box(0);
v___x_555_ = 1;
v___x_556_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_557_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__2));
lean_inc(v_module_540_);
v___x_558_ = l_Lean_formatDeprecatedModuleWarning(v_env_525_, v_val_543_, v_module_540_, v_val_545_);
lean_dec(v_val_543_);
if (v_isShared_548_ == 0)
{
lean_ctor_set_tag(v___x_547_, 3);
lean_ctor_set(v___x_547_, 0, v___x_558_);
v___x_560_ = v___x_547_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_565_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_561_ = l_Lean_MessageData_ofFormat(v___x_560_);
v___x_562_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_557_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
lean_inc_ref(v_fileName_551_);
v___x_563_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_563_, 0, v_fileName_551_);
lean_ctor_set(v___x_563_, 1, v___x_553_);
lean_ctor_set(v___x_563_, 2, v___x_554_);
lean_ctor_set(v___x_563_, 3, v___x_556_);
lean_ctor_set(v___x_563_, 4, v___x_562_);
lean_ctor_set_uint8(v___x_563_, sizeof(void*)*5, v___x_541_);
lean_ctor_set_uint8(v___x_563_, sizeof(void*)*5 + 1, v___x_555_);
lean_ctor_set_uint8(v___x_563_, sizeof(void*)*5 + 2, v___x_541_);
v___x_564_ = l_Lean_MessageLog_add(v___x_563_, v_b_532_);
v___y_534_ = v___x_564_;
goto v___jp_533_;
}
}
}
}
}
}
else
{
v___y_534_ = v_b_532_;
goto v___jp_533_;
}
}
else
{
lean_dec(v_startPos_528_);
lean_dec_ref(v_inputCtx_526_);
return v_b_532_;
}
v___jp_533_:
{
size_t v___x_535_; size_t v___x_536_; 
v___x_535_ = ((size_t)1ULL);
v___x_536_ = lean_usize_add(v_i_530_, v___x_535_);
v_i_530_ = v___x_536_;
v_b_532_ = v___y_534_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___boxed(lean_object* v_ignoreDeprecatedImports_569_, lean_object* v_env_570_, lean_object* v_inputCtx_571_, lean_object* v_importPositions_572_, lean_object* v_startPos_573_, lean_object* v_as_574_, lean_object* v_i_575_, lean_object* v_stop_576_, lean_object* v_b_577_){
_start:
{
size_t v_i_boxed_578_; size_t v_stop_boxed_579_; lean_object* v_res_580_; 
v_i_boxed_578_ = lean_unbox_usize(v_i_575_);
lean_dec(v_i_575_);
v_stop_boxed_579_ = lean_unbox_usize(v_stop_576_);
lean_dec(v_stop_576_);
v_res_580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(v_ignoreDeprecatedImports_569_, v_env_570_, v_inputCtx_571_, v_importPositions_572_, v_startPos_573_, v_as_574_, v_i_boxed_578_, v_stop_boxed_579_, v_b_577_);
lean_dec_ref(v_as_574_);
lean_dec(v_importPositions_572_);
lean_dec_ref(v_env_570_);
lean_dec(v_ignoreDeprecatedImports_569_);
return v_res_580_;
}
}
static lean_object* _init_l_Lean_Elab_checkDeprecatedImports___closed__0(void){
_start:
{
lean_object* v_importPositions_581_; lean_object* v_ignoreDeprecatedImports_582_; lean_object* v___x_583_; 
v_importPositions_581_ = lean_box(1);
v_ignoreDeprecatedImports_582_ = l_Lean_NameSet_empty;
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v_ignoreDeprecatedImports_582_);
lean_ctor_set(v___x_583_, 1, v_importPositions_581_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports(lean_object* v_env_584_, lean_object* v_imports_585_, lean_object* v_opts_586_, lean_object* v_inputCtx_587_, lean_object* v_startPos_588_, lean_object* v_messages_589_, lean_object* v_headerStx_x3f_590_, lean_object* v_origHeaderStx_x3f_591_){
_start:
{
lean_object* v_opts_593_; lean_object* v_ignoreDeprecatedImports_594_; lean_object* v_importPositions_595_; lean_object* v_ignoreDeprecatedImports_604_; lean_object* v_importPositions_605_; lean_object* v___y_607_; lean_object* v_opts_608_; lean_object* v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v_moduleTk_647_; lean_object* v_val_657_; 
v_ignoreDeprecatedImports_604_ = l_Lean_NameSet_empty;
v_importPositions_605_ = lean_box(1);
if (lean_obj_tag(v_origHeaderStx_x3f_591_) == 0)
{
if (lean_obj_tag(v_headerStx_x3f_590_) == 1)
{
lean_object* v_val_674_; 
v_val_674_ = lean_ctor_get(v_headerStx_x3f_590_, 0);
lean_inc(v_val_674_);
lean_dec_ref_known(v_headerStx_x3f_590_, 1);
v_val_657_ = v_val_674_;
goto v___jp_656_;
}
else
{
lean_dec(v_headerStx_x3f_590_);
v_opts_593_ = v_opts_586_;
v_ignoreDeprecatedImports_594_ = v_ignoreDeprecatedImports_604_;
v_importPositions_595_ = v_importPositions_605_;
goto v___jp_592_;
}
}
else
{
lean_object* v_val_675_; 
lean_dec(v_headerStx_x3f_590_);
v_val_675_ = lean_ctor_get(v_origHeaderStx_x3f_591_, 0);
lean_inc(v_val_675_);
lean_dec_ref_known(v_origHeaderStx_x3f_591_, 1);
v_val_657_ = v_val_675_;
goto v___jp_656_;
}
v___jp_592_:
{
lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_596_ = l_Lean_linter_deprecated_module;
v___x_597_ = l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(v_opts_593_, v___x_596_);
lean_dec_ref(v_opts_593_);
if (v___x_597_ == 0)
{
lean_dec(v_importPositions_595_);
lean_dec(v_ignoreDeprecatedImports_594_);
lean_dec(v_startPos_588_);
lean_dec_ref(v_inputCtx_587_);
return v_messages_589_;
}
else
{
lean_object* v___x_598_; lean_object* v___x_599_; uint8_t v___x_600_; 
v___x_598_ = lean_unsigned_to_nat(0u);
v___x_599_ = lean_array_get_size(v_imports_585_);
v___x_600_ = lean_nat_dec_lt(v___x_598_, v___x_599_);
if (v___x_600_ == 0)
{
lean_dec(v_importPositions_595_);
lean_dec(v_ignoreDeprecatedImports_594_);
lean_dec(v_startPos_588_);
lean_dec_ref(v_inputCtx_587_);
return v_messages_589_;
}
else
{
size_t v___x_601_; size_t v___x_602_; lean_object* v___x_603_; 
v___x_601_ = ((size_t)0ULL);
v___x_602_ = lean_usize_of_nat(v___x_599_);
v___x_603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1(v_ignoreDeprecatedImports_594_, v_env_584_, v_inputCtx_587_, v_importPositions_595_, v_startPos_588_, v_imports_585_, v___x_601_, v___x_602_, v_messages_589_);
lean_dec(v_importPositions_595_);
lean_dec(v_ignoreDeprecatedImports_594_);
return v___x_603_;
}
}
}
v___jp_606_:
{
lean_object* v___x_609_; size_t v_sz_610_; size_t v___x_611_; lean_object* v___x_612_; lean_object* v_fst_613_; lean_object* v_snd_614_; 
v___x_609_ = lean_obj_once(&l_Lean_Elab_checkDeprecatedImports___closed__0, &l_Lean_Elab_checkDeprecatedImports___closed__0_once, _init_l_Lean_Elab_checkDeprecatedImports___closed__0);
v_sz_610_ = lean_array_size(v___y_607_);
v___x_611_ = ((size_t)0ULL);
v___x_612_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkDeprecatedImports_spec__3(v___y_607_, v_sz_610_, v___x_611_, v___x_609_);
lean_dec_ref(v___y_607_);
v_fst_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_fst_613_);
v_snd_614_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_snd_614_);
lean_dec_ref(v___x_612_);
v_opts_593_ = v_opts_608_;
v_ignoreDeprecatedImports_594_ = v_fst_613_;
v_importPositions_595_ = v_snd_614_;
goto v___jp_592_;
}
v___jp_615_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v_importsStx_621_; 
v___x_619_ = lean_unsigned_to_nat(2u);
v___x_620_ = l_Lean_Syntax_getArg(v___y_618_, v___x_619_);
lean_dec(v___y_618_);
v_importsStx_621_ = l_Lean_Syntax_getArgs(v___x_620_);
lean_dec(v___x_620_);
if (lean_obj_tag(v___y_616_) == 0)
{
lean_dec(v___y_617_);
v___y_607_ = v_importsStx_621_;
v_opts_608_ = v_opts_586_;
goto v___jp_606_;
}
else
{
lean_object* v_val_622_; lean_object* v___x_623_; 
v_val_622_ = lean_ctor_get(v___y_616_, 0);
lean_inc(v_val_622_);
lean_dec_ref_known(v___y_616_, 1);
v___x_623_ = l_Lean_Syntax_getTrailing_x3f(v_val_622_);
lean_dec(v_val_622_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_dec(v___y_617_);
v___y_607_ = v_importsStx_621_;
v_opts_608_ = v_opts_586_;
goto v___jp_606_;
}
else
{
lean_object* v_val_624_; lean_object* v_str_625_; lean_object* v_startPos_626_; lean_object* v_stopPos_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_640_; 
v_val_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_val_624_);
lean_dec_ref_known(v___x_623_, 1);
v_str_625_ = lean_ctor_get(v_val_624_, 0);
v_startPos_626_ = lean_ctor_get(v_val_624_, 1);
v_stopPos_627_ = lean_ctor_get(v_val_624_, 2);
v_isSharedCheck_640_ = !lean_is_exclusive(v_val_624_);
if (v_isSharedCheck_640_ == 0)
{
v___x_629_ = v_val_624_;
v_isShared_630_ = v_isSharedCheck_640_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_stopPos_627_);
lean_inc(v_startPos_626_);
lean_inc(v_str_625_);
lean_dec(v_val_624_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_640_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_631_ = lean_string_utf8_extract(v_str_625_, v_startPos_626_, v_stopPos_627_);
lean_dec(v_stopPos_627_);
lean_dec(v_startPos_626_);
lean_dec_ref(v_str_625_);
v___x_632_ = lean_string_utf8_byte_size(v___x_631_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 2, v___x_632_);
lean_ctor_set(v___x_629_, 1, v___y_617_);
lean_ctor_set(v___x_629_, 0, v___x_631_);
v___x_634_ = v___x_629_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v___y_617_);
lean_ctor_set(v_reuseFailAlloc_639_, 2, v___x_632_);
v___x_634_ = v_reuseFailAlloc_639_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
uint8_t v___x_635_; 
v___x_635_ = l_String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2(v___x_634_);
lean_dec_ref(v___x_634_);
if (v___x_635_ == 0)
{
v___y_607_ = v_importsStx_621_;
v_opts_608_ = v_opts_586_;
goto v___jp_606_;
}
else
{
lean_object* v___x_636_; uint8_t v___x_637_; lean_object* v_opts_638_; 
v___x_636_ = l_Lean_linter_deprecated_module;
v___x_637_ = 0;
v_opts_638_ = l_Lean_Option_set___at___00Lean_Elab_checkDeprecatedImports_spec__4(v_opts_586_, v___x_636_, v___x_637_);
v___y_607_ = v_importsStx_621_;
v_opts_608_ = v_opts_638_;
goto v___jp_606_;
}
}
}
}
}
}
v___jp_641_:
{
lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_648_ = lean_unsigned_to_nat(1u);
v___x_649_ = l_Lean_Syntax_getArg(v___y_643_, v___x_648_);
v___x_650_ = l_Lean_Syntax_isNone(v___x_649_);
if (v___x_650_ == 0)
{
uint8_t v___x_651_; 
lean_inc(v___x_649_);
v___x_651_ = l_Lean_Syntax_matchesNull(v___x_649_, v___x_648_);
if (v___x_651_ == 0)
{
lean_dec(v___x_649_);
lean_dec(v_moduleTk_647_);
lean_dec(v___y_643_);
lean_dec(v___y_642_);
v_opts_593_ = v_opts_586_;
v_ignoreDeprecatedImports_594_ = v_ignoreDeprecatedImports_604_;
v_importPositions_595_ = v_importPositions_605_;
goto v___jp_592_;
}
else
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_652_ = l_Lean_Syntax_getArg(v___x_649_, v___y_642_);
lean_dec(v___x_649_);
v___x_653_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__6));
lean_inc_ref(v___y_645_);
lean_inc_ref(v___y_646_);
lean_inc_ref(v___y_644_);
v___x_654_ = l_Lean_Name_mkStr4(v___y_644_, v___y_646_, v___y_645_, v___x_653_);
v___x_655_ = l_Lean_Syntax_isOfKind(v___x_652_, v___x_654_);
lean_dec(v___x_654_);
if (v___x_655_ == 0)
{
lean_dec(v_moduleTk_647_);
lean_dec(v___y_643_);
lean_dec(v___y_642_);
v_opts_593_ = v_opts_586_;
v_ignoreDeprecatedImports_594_ = v_ignoreDeprecatedImports_604_;
v_importPositions_595_ = v_importPositions_605_;
goto v___jp_592_;
}
else
{
v___y_616_ = v_moduleTk_647_;
v___y_617_ = v___y_642_;
v___y_618_ = v___y_643_;
goto v___jp_615_;
}
}
}
else
{
lean_dec(v___x_649_);
v___y_616_ = v_moduleTk_647_;
v___y_617_ = v___y_642_;
v___y_618_ = v___y_643_;
goto v___jp_615_;
}
}
v___jp_656_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_658_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__0));
v___x_659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__1));
v___x_660_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_HeaderSyntax_imports_spec__2___closed__2));
v___x_661_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__1));
lean_inc(v_val_657_);
v___x_662_ = l_Lean_Syntax_isOfKind(v_val_657_, v___x_661_);
if (v___x_662_ == 0)
{
lean_dec(v_val_657_);
v_opts_593_ = v_opts_586_;
v_ignoreDeprecatedImports_594_ = v_ignoreDeprecatedImports_604_;
v_importPositions_595_ = v_importPositions_605_;
goto v___jp_592_;
}
else
{
lean_object* v___x_663_; lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = l_Lean_Syntax_getArg(v_val_657_, v___x_663_);
v___x_665_ = l_Lean_Syntax_isNone(v___x_664_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_666_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_664_);
v___x_667_ = l_Lean_Syntax_matchesNull(v___x_664_, v___x_666_);
if (v___x_667_ == 0)
{
lean_dec(v___x_664_);
lean_dec(v_val_657_);
v_opts_593_ = v_opts_586_;
v_ignoreDeprecatedImports_594_ = v_ignoreDeprecatedImports_604_;
v_importPositions_595_ = v_importPositions_605_;
goto v___jp_592_;
}
else
{
lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_668_ = l_Lean_Syntax_getArg(v___x_664_, v___x_663_);
lean_dec(v___x_664_);
v___x_669_ = ((lean_object*)(l_Lean_Elab_HeaderSyntax_imports___closed__9));
lean_inc(v___x_668_);
v___x_670_ = l_Lean_Syntax_isOfKind(v___x_668_, v___x_669_);
if (v___x_670_ == 0)
{
lean_dec(v___x_668_);
lean_dec(v_val_657_);
v_opts_593_ = v_opts_586_;
v_ignoreDeprecatedImports_594_ = v_ignoreDeprecatedImports_604_;
v_importPositions_595_ = v_importPositions_605_;
goto v___jp_592_;
}
else
{
lean_object* v_moduleTk_671_; lean_object* v___x_672_; 
v_moduleTk_671_ = l_Lean_Syntax_getArg(v___x_668_, v___x_663_);
lean_dec(v___x_668_);
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v_moduleTk_671_);
v___y_642_ = v___x_663_;
v___y_643_ = v_val_657_;
v___y_644_ = v___x_658_;
v___y_645_ = v___x_660_;
v___y_646_ = v___x_659_;
v_moduleTk_647_ = v___x_672_;
goto v___jp_641_;
}
}
}
else
{
lean_object* v___x_673_; 
lean_dec(v___x_664_);
v___x_673_ = lean_box(0);
v___y_642_ = v___x_663_;
v___y_643_ = v_val_657_;
v___y_644_ = v___x_658_;
v___y_645_ = v___x_660_;
v___y_646_ = v___x_659_;
v_moduleTk_647_ = v___x_673_;
goto v___jp_641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkDeprecatedImports___boxed(lean_object* v_env_676_, lean_object* v_imports_677_, lean_object* v_opts_678_, lean_object* v_inputCtx_679_, lean_object* v_startPos_680_, lean_object* v_messages_681_, lean_object* v_headerStx_x3f_682_, lean_object* v_origHeaderStx_x3f_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lean_Elab_checkDeprecatedImports(v_env_676_, v_imports_677_, v_opts_678_, v_inputCtx_679_, v_startPos_680_, v_messages_681_, v_headerStx_x3f_682_, v_origHeaderStx_x3f_683_);
lean_dec_ref(v_imports_677_);
lean_dec_ref(v_env_676_);
return v_res_684_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2(lean_object* v_s_685_, lean_object* v_inst_686_, lean_object* v_R_687_, lean_object* v_a_688_, uint8_t v_b_689_, lean_object* v_c_690_){
_start:
{
uint8_t v___x_691_; 
v___x_691_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___redArg(v_s_685_, v_a_688_, v_b_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2___boxed(lean_object* v_s_692_, lean_object* v_inst_693_, lean_object* v_R_694_, lean_object* v_a_695_, lean_object* v_b_696_, lean_object* v_c_697_){
_start:
{
uint8_t v_b_boxed_698_; uint8_t v_res_699_; lean_object* v_r_700_; 
v_b_boxed_698_ = lean_unbox(v_b_696_);
v_res_699_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Elab_checkDeprecatedImports_spec__2_spec__2(v_s_692_, v_inst_693_, v_R_694_, v_a_695_, v_b_boxed_698_, v_c_697_);
lean_dec_ref(v_s_692_);
v_r_700_ = lean_box(v_res_699_);
return v_r_700_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_701_; lean_object* v___x_702_; 
v___x_701_ = 33;
v___x_702_ = lean_box_uint32(v___x_701_);
return v___x_702_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2(void){
_start:
{
uint32_t v___x_703_; lean_object* v___x_704_; 
v___x_703_ = 42;
v___x_704_ = lean_box_uint32(v___x_703_);
return v___x_704_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3(void){
_start:
{
uint32_t v___x_705_; lean_object* v___x_706_; 
v___x_705_ = 63;
v___x_706_ = lean_box_uint32(v___x_705_);
return v___x_706_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4(void){
_start:
{
uint32_t v___x_707_; lean_object* v___x_708_; 
v___x_707_ = 124;
v___x_708_ = lean_box_uint32(v___x_707_);
return v___x_708_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5(void){
_start:
{
uint32_t v___x_709_; lean_object* v___x_710_; 
v___x_709_ = 34;
v___x_710_ = lean_box_uint32(v___x_709_);
return v___x_710_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6(void){
_start:
{
uint32_t v___x_711_; lean_object* v___x_712_; 
v___x_711_ = 62;
v___x_712_ = lean_box_uint32(v___x_711_);
return v___x_712_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7(void){
_start:
{
uint32_t v___x_713_; lean_object* v___x_714_; 
v___x_713_ = 60;
v___x_714_ = lean_box_uint32(v___x_713_);
return v___x_714_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_715_ = lean_unsigned_to_nat(7u);
v___x_716_ = lean_mk_empty_array_with_capacity(v___x_715_);
v___x_717_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7;
v___x_718_ = lean_array_push(v___x_716_, v___x_717_);
v___x_719_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6;
v___x_720_ = lean_array_push(v___x_718_, v___x_719_);
v___x_721_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5;
v___x_722_ = lean_array_push(v___x_720_, v___x_721_);
v___x_723_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4;
v___x_724_ = lean_array_push(v___x_722_, v___x_723_);
v___x_725_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3;
v___x_726_ = lean_array_push(v___x_724_, v___x_725_);
v___x_727_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2;
v___x_728_ = lean_array_push(v___x_726_, v___x_727_);
v___x_729_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1;
v___x_730_ = lean_array_push(v___x_728_, v___x_729_);
return v___x_730_;
}
}
static lean_object* _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars(void){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = lean_obj_once(&l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0, &l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0_once, _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__0(lean_object* v_s_819_, lean_object* v_p_820_){
_start:
{
lean_object* v___y_822_; lean_object* v___y_823_; uint32_t v___y_827_; lean_object* v___x_839_; uint8_t v_decide_840_; 
v___x_839_ = lean_string_utf8_byte_size(v_s_819_);
v_decide_840_ = lean_nat_dec_eq(v_p_820_, v___x_839_);
if (v_decide_840_ == 0)
{
uint32_t v___x_841_; uint32_t v___x_842_; uint8_t v___x_843_; 
v___x_841_ = lean_string_utf8_get_fast(v_s_819_, v_p_820_);
v___x_842_ = 97;
v___x_843_ = lean_uint32_dec_le(v___x_842_, v___x_841_);
if (v___x_843_ == 0)
{
v___y_827_ = v___x_841_;
goto v___jp_826_;
}
else
{
uint32_t v___x_844_; uint8_t v___x_845_; 
v___x_844_ = 122;
v___x_845_ = lean_uint32_dec_le(v___x_841_, v___x_844_);
if (v___x_845_ == 0)
{
v___y_827_ = v___x_841_;
goto v___jp_826_;
}
else
{
uint32_t v___x_846_; uint32_t v___x_847_; 
v___x_846_ = 4294967264;
v___x_847_ = lean_uint32_add(v___x_841_, v___x_846_);
v___y_827_ = v___x_847_;
goto v___jp_826_;
}
}
}
else
{
lean_dec(v_p_820_);
return v_s_819_;
}
v___jp_821_:
{
lean_object* v___x_824_; 
v___x_824_ = lean_nat_add(v_p_820_, v___y_823_);
lean_dec(v_p_820_);
v_s_819_ = v___y_822_;
v_p_820_ = v___x_824_;
goto _start;
}
v___jp_826_:
{
lean_object* v___x_828_; uint32_t v___x_829_; uint8_t v___x_830_; 
lean_inc(v_p_820_);
v___x_828_ = lean_string_utf8_set(v_s_819_, v_p_820_, v___y_827_);
v___x_829_ = 127;
v___x_830_ = lean_uint32_dec_le(v___y_827_, v___x_829_);
if (v___x_830_ == 0)
{
uint32_t v___x_831_; uint8_t v___x_832_; 
v___x_831_ = 2047;
v___x_832_ = lean_uint32_dec_le(v___y_827_, v___x_831_);
if (v___x_832_ == 0)
{
uint32_t v___x_833_; uint8_t v___x_834_; 
v___x_833_ = 65535;
v___x_834_ = lean_uint32_dec_le(v___y_827_, v___x_833_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; 
v___x_835_ = lean_unsigned_to_nat(4u);
v___y_822_ = v___x_828_;
v___y_823_ = v___x_835_;
goto v___jp_821_;
}
else
{
lean_object* v___x_836_; 
v___x_836_ = lean_unsigned_to_nat(3u);
v___y_822_ = v___x_828_;
v___y_823_ = v___x_836_;
goto v___jp_821_;
}
}
else
{
lean_object* v___x_837_; 
v___x_837_ = lean_unsigned_to_nat(2u);
v___y_822_ = v___x_828_;
v___y_823_ = v___x_837_;
goto v___jp_821_;
}
}
else
{
lean_object* v___x_838_; 
v___x_838_ = lean_unsigned_to_nat(1u);
v___y_822_ = v___x_828_;
v___y_823_ = v___x_838_;
goto v___jp_821_;
}
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(lean_object* v_s_848_, uint32_t v_a_849_, lean_object* v_a_850_, uint8_t v_b_851_){
_start:
{
lean_object* v_str_852_; lean_object* v_startInclusive_853_; lean_object* v_endExclusive_854_; lean_object* v___x_855_; uint8_t v_decide_856_; 
v_str_852_ = lean_ctor_get(v_s_848_, 0);
v_startInclusive_853_ = lean_ctor_get(v_s_848_, 1);
v_endExclusive_854_ = lean_ctor_get(v_s_848_, 2);
v___x_855_ = lean_nat_sub(v_endExclusive_854_, v_startInclusive_853_);
v_decide_856_ = lean_nat_dec_eq(v_a_850_, v___x_855_);
lean_dec(v___x_855_);
if (v_decide_856_ == 0)
{
lean_object* v___x_857_; uint32_t v___x_858_; uint8_t v___x_859_; 
v___x_857_ = lean_nat_add(v_startInclusive_853_, v_a_850_);
lean_dec(v_a_850_);
v___x_858_ = lean_string_utf8_get_fast(v_str_852_, v___x_857_);
v___x_859_ = lean_uint32_dec_eq(v___x_858_, v_a_849_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = lean_string_utf8_next_fast(v_str_852_, v___x_857_);
lean_dec(v___x_857_);
v___x_861_ = lean_nat_sub(v___x_860_, v_startInclusive_853_);
v_a_850_ = v___x_861_;
v_b_851_ = v___x_859_;
goto _start;
}
else
{
lean_dec(v___x_857_);
return v___x_859_;
}
}
else
{
lean_dec(v_a_850_);
return v_b_851_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg___boxed(lean_object* v_s_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_b_866_){
_start:
{
uint32_t v_a_boxed_867_; uint8_t v_b_boxed_868_; uint8_t v_res_869_; lean_object* v_r_870_; 
v_a_boxed_867_ = lean_unbox_uint32(v_a_864_);
lean_dec(v_a_864_);
v_b_boxed_868_ = lean_unbox(v_b_866_);
v_res_869_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(v_s_863_, v_a_boxed_867_, v_a_865_, v_b_boxed_868_);
lean_dec_ref(v_s_863_);
v_r_870_ = lean_box(v_res_869_);
return v_r_870_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(uint32_t v_a_871_, lean_object* v_s_872_){
_start:
{
lean_object* v_searcher_873_; uint8_t v___x_874_; uint8_t v___x_875_; 
v_searcher_873_ = lean_unsigned_to_nat(0u);
v___x_874_ = 0;
v___x_875_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(v_s_872_, v_a_871_, v_searcher_873_, v___x_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2___boxed(lean_object* v_a_876_, lean_object* v_s_877_){
_start:
{
uint32_t v_a_boxed_878_; uint8_t v_res_879_; lean_object* v_r_880_; 
v_a_boxed_878_ = lean_unbox_uint32(v_a_876_);
lean_dec(v_a_876_);
v_res_879_ = l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(v_a_boxed_878_, v_s_877_);
lean_dec_ref(v_s_877_);
v_r_880_ = lean_box(v_res_879_);
return v_r_880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(lean_object* v_comp_884_, lean_object* v_as_885_, size_t v_sz_886_, size_t v_i_887_, lean_object* v_b_888_){
_start:
{
uint8_t v___x_889_; 
v___x_889_ = lean_usize_dec_lt(v_i_887_, v_sz_886_);
if (v___x_889_ == 0)
{
lean_dec_ref(v_comp_884_);
lean_inc_ref(v_b_888_);
return v_b_888_;
}
else
{
lean_object* v___x_890_; lean_object* v_a_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; uint32_t v___x_895_; uint8_t v___x_896_; 
v___x_890_ = lean_box(0);
v_a_891_ = lean_array_uget_borrowed(v_as_885_, v_i_887_);
v___x_892_ = lean_unsigned_to_nat(0u);
v___x_893_ = lean_string_utf8_byte_size(v_comp_884_);
lean_inc_ref(v_comp_884_);
v___x_894_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_894_, 0, v_comp_884_);
lean_ctor_set(v___x_894_, 1, v___x_892_);
lean_ctor_set(v___x_894_, 2, v___x_893_);
v___x_895_ = lean_unbox_uint32(v_a_891_);
v___x_896_ = l_String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2(v___x_895_, v___x_894_);
lean_dec_ref_known(v___x_894_, 3);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; size_t v___x_898_; size_t v___x_899_; 
v___x_897_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0));
v___x_898_ = ((size_t)1ULL);
v___x_899_ = lean_usize_add(v_i_887_, v___x_898_);
v_i_887_ = v___x_899_;
v_b_888_ = v___x_897_;
goto _start;
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
lean_dec_ref(v_comp_884_);
lean_inc(v_a_891_);
v___x_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_901_, 0, v_a_891_);
v___x_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
v___x_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
lean_ctor_set(v___x_903_, 1, v___x_890_);
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___boxed(lean_object* v_comp_904_, lean_object* v_as_905_, lean_object* v_sz_906_, lean_object* v_i_907_, lean_object* v_b_908_){
_start:
{
size_t v_sz_boxed_909_; size_t v_i_boxed_910_; lean_object* v_res_911_; 
v_sz_boxed_909_ = lean_unbox_usize(v_sz_906_);
lean_dec(v_sz_906_);
v_i_boxed_910_ = lean_unbox_usize(v_i_907_);
lean_dec(v_i_907_);
v_res_911_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(v_comp_904_, v_as_905_, v_sz_boxed_909_, v_i_boxed_910_, v_b_908_);
lean_dec_ref(v_b_908_);
lean_dec_ref(v_as_905_);
return v_res_911_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(lean_object* v_a_912_, lean_object* v_as_913_, size_t v_i_914_, size_t v_stop_915_){
_start:
{
uint8_t v___x_916_; 
v___x_916_ = lean_usize_dec_eq(v_i_914_, v_stop_915_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_917_ = lean_array_uget_borrowed(v_as_913_, v_i_914_);
v___x_918_ = lean_string_dec_eq(v_a_912_, v___x_917_);
if (v___x_918_ == 0)
{
size_t v___x_919_; size_t v___x_920_; 
v___x_919_ = ((size_t)1ULL);
v___x_920_ = lean_usize_add(v_i_914_, v___x_919_);
v_i_914_ = v___x_920_;
goto _start;
}
else
{
return v___x_918_;
}
}
else
{
uint8_t v___x_922_; 
v___x_922_ = 0;
return v___x_922_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1___boxed(lean_object* v_a_923_, lean_object* v_as_924_, lean_object* v_i_925_, lean_object* v_stop_926_){
_start:
{
size_t v_i_boxed_927_; size_t v_stop_boxed_928_; uint8_t v_res_929_; lean_object* v_r_930_; 
v_i_boxed_927_ = lean_unbox_usize(v_i_925_);
lean_dec(v_i_925_);
v_stop_boxed_928_ = lean_unbox_usize(v_stop_926_);
lean_dec(v_stop_926_);
v_res_929_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(v_a_923_, v_as_924_, v_i_boxed_927_, v_stop_boxed_928_);
lean_dec_ref(v_as_924_);
lean_dec_ref(v_a_923_);
v_r_930_ = lean_box(v_res_929_);
return v_r_930_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(lean_object* v_as_931_, lean_object* v_a_932_){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_933_ = lean_unsigned_to_nat(0u);
v___x_934_ = lean_array_get_size(v_as_931_);
v___x_935_ = lean_nat_dec_lt(v___x_933_, v___x_934_);
if (v___x_935_ == 0)
{
return v___x_935_;
}
else
{
size_t v___x_936_; size_t v___x_937_; uint8_t v___x_938_; 
v___x_936_ = ((size_t)0ULL);
v___x_937_ = lean_usize_of_nat(v___x_934_);
v___x_938_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1_spec__1(v_a_932_, v_as_931_, v___x_936_, v___x_937_);
return v___x_938_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1___boxed(lean_object* v_as_939_, lean_object* v_a_940_){
_start:
{
uint8_t v_res_941_; lean_object* v_r_942_; 
v_res_941_ = l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(v_as_939_, v_a_940_);
lean_dec_ref(v_a_940_);
lean_dec_ref(v_as_939_);
v_r_942_ = lean_box(v_res_941_);
return v_r_942_;
}
}
static size_t _init_l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0(void){
_start:
{
lean_object* v___x_943_; size_t v_sz_944_; 
v___x_943_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars;
v_sz_944_ = lean_array_size(v___x_943_);
return v_sz_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability(lean_object* v_comp_949_){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_950_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenNames));
v___x_951_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_comp_949_);
v___x_952_ = l_String_mapAux___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__0(v_comp_949_, v___x_951_);
v___x_953_ = l_Array_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__1(v___x_950_, v___x_952_);
lean_dec_ref(v___x_952_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; size_t v_sz_957_; size_t v___x_958_; lean_object* v___x_959_; lean_object* v_fst_960_; 
v___x_954_ = l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars;
v___x_955_ = lean_box(0);
v___x_956_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3___closed__0));
v_sz_957_ = lean_usize_once(&l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0, &l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0_once, _init_l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__0);
v___x_958_ = ((size_t)0ULL);
v___x_959_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__3(v_comp_949_, v___x_954_, v_sz_957_, v___x_958_, v___x_956_);
v_fst_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_fst_960_);
lean_dec_ref(v___x_959_);
if (lean_obj_tag(v_fst_960_) == 0)
{
return v___x_955_;
}
else
{
lean_object* v_val_961_; 
v_val_961_ = lean_ctor_get(v_fst_960_, 0);
lean_inc(v_val_961_);
lean_dec_ref_known(v_fst_960_, 1);
if (lean_obj_tag(v_val_961_) == 1)
{
lean_object* v_val_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_976_; 
v_val_962_ = lean_ctor_get(v_val_961_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v_val_961_);
if (v_isSharedCheck_976_ == 0)
{
v___x_964_ = v_val_961_;
v_isShared_965_ = v_isSharedCheck_976_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_val_962_);
lean_dec(v_val_961_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_976_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_967_; uint32_t v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_974_; 
v___x_966_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__1));
v___x_967_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_968_ = lean_unbox_uint32(v_val_962_);
lean_dec(v_val_962_);
v___x_969_ = lean_string_push(v___x_967_, v___x_968_);
v___x_970_ = lean_string_append(v___x_966_, v___x_969_);
lean_dec_ref(v___x_969_);
v___x_971_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__2));
v___x_972_ = lean_string_append(v___x_970_, v___x_971_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_972_);
v___x_974_ = v___x_964_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v___x_972_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
else
{
lean_dec(v_val_961_);
return v___x_955_;
}
}
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_977_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__3));
v___x_978_ = lean_string_append(v___x_977_, v_comp_949_);
lean_dec_ref(v_comp_949_);
v___x_979_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability___closed__4));
v___x_980_ = lean_string_append(v___x_978_, v___x_979_);
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3(lean_object* v_s_982_, uint32_t v_a_983_, lean_object* v_inst_984_, lean_object* v_R_985_, lean_object* v_a_986_, uint8_t v_b_987_, lean_object* v_c_988_){
_start:
{
uint8_t v___x_989_; 
v___x_989_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___redArg(v_s_982_, v_a_983_, v_a_986_, v_b_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3___boxed(lean_object* v_s_990_, lean_object* v_a_991_, lean_object* v_inst_992_, lean_object* v_R_993_, lean_object* v_a_994_, lean_object* v_b_995_, lean_object* v_c_996_){
_start:
{
uint32_t v_a_boxed_997_; uint8_t v_b_boxed_998_; uint8_t v_res_999_; lean_object* v_r_1000_; 
v_a_boxed_997_ = lean_unbox_uint32(v_a_991_);
lean_dec(v_a_991_);
v_b_boxed_998_ = lean_unbox(v_b_995_);
v_res_999_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability_spec__2_spec__3(v_s_990_, v_a_boxed_997_, v_inst_992_, v_R_993_, v_a_994_, v_b_boxed_998_, v_c_996_);
lean_dec_ref(v_s_990_);
v_r_1000_ = lean_box(v_res_999_);
return v_r_1000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(lean_object* v_mainModule_1003_, lean_object* v_inputCtx_1004_, lean_object* v_startPos_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_){
_start:
{
switch(lean_obj_tag(v_a_1006_))
{
case 0:
{
lean_dec_ref(v_inputCtx_1004_);
lean_dec(v_mainModule_1003_);
return v_a_1007_;
}
case 1:
{
lean_object* v_pre_1008_; lean_object* v_str_1009_; lean_object* v___x_1010_; 
v_pre_1008_ = lean_ctor_get(v_a_1006_, 0);
lean_inc(v_pre_1008_);
v_str_1009_ = lean_ctor_get(v_a_1006_, 1);
lean_inc_ref(v_str_1009_);
lean_dec_ref_known(v_a_1006_, 2);
v___x_1010_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkComponentPortability(v_str_1009_);
if (lean_obj_tag(v___x_1010_) == 0)
{
v_a_1006_ = v_pre_1008_;
goto _start;
}
else
{
lean_object* v_val_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1037_; 
v_val_1012_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1014_ = v___x_1010_;
v_isShared_1015_ = v_isSharedCheck_1037_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_val_1012_);
lean_dec(v___x_1010_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1037_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_fileName_1016_; lean_object* v_fileMap_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; uint8_t v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v_fileName_1016_ = lean_ctor_get(v_inputCtx_1004_, 1);
v_fileMap_1017_ = lean_ctor_get(v_inputCtx_1004_, 2);
lean_inc_ref(v_fileMap_1017_);
v___x_1018_ = l_Lean_FileMap_toPosition(v_fileMap_1017_, v_startPos_1005_);
v___x_1019_ = lean_box(0);
v___x_1020_ = 0;
v___x_1021_ = 2;
v___x_1022_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_1023_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__0));
v___x_1024_ = 1;
lean_inc(v_mainModule_1003_);
v___x_1025_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mainModule_1003_, v___x_1024_);
v___x_1026_ = lean_string_append(v___x_1023_, v___x_1025_);
lean_dec_ref(v___x_1025_);
v___x_1027_ = ((lean_object*)(l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___closed__1));
v___x_1028_ = lean_string_append(v___x_1026_, v___x_1027_);
v___x_1029_ = lean_string_append(v___x_1028_, v_val_1012_);
lean_dec(v_val_1012_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set_tag(v___x_1014_, 3);
lean_ctor_set(v___x_1014_, 0, v___x_1029_);
v___x_1031_ = v___x_1014_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = l_Lean_MessageData_ofFormat(v___x_1031_);
lean_inc_ref(v_fileName_1016_);
v___x_1033_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1033_, 0, v_fileName_1016_);
lean_ctor_set(v___x_1033_, 1, v___x_1018_);
lean_ctor_set(v___x_1033_, 2, v___x_1019_);
lean_ctor_set(v___x_1033_, 3, v___x_1022_);
lean_ctor_set(v___x_1033_, 4, v___x_1032_);
lean_ctor_set_uint8(v___x_1033_, sizeof(void*)*5, v___x_1020_);
lean_ctor_set_uint8(v___x_1033_, sizeof(void*)*5 + 1, v___x_1021_);
lean_ctor_set_uint8(v___x_1033_, sizeof(void*)*5 + 2, v___x_1020_);
v___x_1034_ = l_Lean_MessageLog_add(v___x_1033_, v_a_1007_);
v_a_1006_ = v_pre_1008_;
v_a_1007_ = v___x_1034_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_pre_1038_; 
v_pre_1038_ = lean_ctor_get(v_a_1006_, 0);
lean_inc(v_pre_1038_);
lean_dec_ref_known(v_a_1006_, 2);
v_a_1006_ = v_pre_1038_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go___boxed(lean_object* v_mainModule_1040_, lean_object* v_inputCtx_1041_, lean_object* v_startPos_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(v_mainModule_1040_, v_inputCtx_1041_, v_startPos_1042_, v_a_1043_, v_a_1044_);
lean_dec(v_startPos_1042_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability(lean_object* v_mainModule_1046_, lean_object* v_inputCtx_1047_, lean_object* v_startPos_1048_, lean_object* v_messages_1049_){
_start:
{
lean_object* v___x_1050_; 
lean_inc(v_mainModule_1046_);
v___x_1050_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(v_mainModule_1046_, v_inputCtx_1047_, v_startPos_1048_, v_mainModule_1046_, v_messages_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkModuleNamePortability___boxed(lean_object* v_mainModule_1051_, lean_object* v_inputCtx_1052_, lean_object* v_startPos_1053_, lean_object* v_messages_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_Elab_checkModuleNamePortability(v_mainModule_1051_, v_inputCtx_1052_, v_startPos_1053_, v_messages_1054_);
lean_dec(v_startPos_1053_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore___lam__0(lean_object* v_package_x3f_1056_, lean_object* v_ps_1057_){
_start:
{
lean_object* v_importedEntries_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_importedEntries_1058_ = lean_ctor_get(v_ps_1057_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_ps_1057_);
if (v_isSharedCheck_1065_ == 0)
{
lean_object* v_unused_1066_; 
v_unused_1066_ = lean_ctor_get(v_ps_1057_, 1);
lean_dec(v_unused_1066_);
v___x_1060_ = v_ps_1057_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_importedEntries_1058_);
lean_dec(v_ps_1057_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 1, v_package_x3f_1056_);
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_importedEntries_1058_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_package_x3f_1056_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore(lean_object* v_startPos_1067_, lean_object* v_imports_1068_, uint8_t v_isModule_1069_, lean_object* v_opts_1070_, lean_object* v_messages_1071_, lean_object* v_inputCtx_1072_, uint32_t v_trustLevel_1073_, lean_object* v_plugins_1074_, uint8_t v_leakEnv_1075_, lean_object* v_mainModule_1076_, lean_object* v_package_x3f_1077_, lean_object* v_arts_1078_, lean_object* v_headerStx_x3f_1079_, lean_object* v_origHeaderStx_x3f_1080_){
_start:
{
lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___f_1089_; lean_object* v_fst_1091_; lean_object* v_snd_1092_; uint8_t v___y_1104_; 
v___f_1089_ = lean_alloc_closure((void*)(l_Lean_Elab_processHeaderCore___lam__0), 2, 1);
lean_closure_set(v___f_1089_, 0, v_package_x3f_1077_);
if (v_isModule_1069_ == 0)
{
uint8_t v___x_1138_; 
v___x_1138_ = 2;
v___y_1104_ = v___x_1138_;
goto v___jp_1103_;
}
else
{
lean_object* v___x_1139_; uint8_t v___x_1140_; 
v___x_1139_ = l_Lean_Elab_inServer;
v___x_1140_ = l_Lean_Option_get___at___00Lean_Elab_checkDeprecatedImports_spec__0(v_opts_1070_, v___x_1139_);
if (v___x_1140_ == 0)
{
uint8_t v___x_1141_; 
v___x_1141_ = 0;
v___y_1104_ = v___x_1141_;
goto v___jp_1103_;
}
else
{
uint8_t v___x_1142_; 
v___x_1142_ = 1;
v___y_1104_ = v___x_1142_;
goto v___jp_1103_;
}
}
v___jp_1082_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
lean_inc(v_startPos_1067_);
lean_inc_ref(v_inputCtx_1072_);
v___x_1085_ = l_Lean_Elab_checkDeprecatedImports(v___y_1084_, v_imports_1068_, v_opts_1070_, v_inputCtx_1072_, v_startPos_1067_, v___y_1083_, v_headerStx_x3f_1079_, v_origHeaderStx_x3f_1080_);
lean_dec_ref(v_imports_1068_);
lean_inc(v_mainModule_1076_);
v___x_1086_ = l___private_Lean_Elab_Import_0__Lean_Elab_checkModuleNamePortability_go(v_mainModule_1076_, v_inputCtx_1072_, v_startPos_1067_, v_mainModule_1076_, v___x_1085_);
lean_dec(v_startPos_1067_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___y_1084_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
return v___x_1088_;
}
v___jp_1090_:
{
lean_object* v___x_1093_; lean_object* v_toEnvExtension_1094_; lean_object* v_asyncMode_1095_; uint8_t v_logWrites_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; uint8_t v___x_1099_; 
v___x_1093_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_1094_ = lean_ctor_get(v___x_1093_, 0);
v_asyncMode_1095_ = lean_ctor_get(v_toEnvExtension_1094_, 2);
v_logWrites_1096_ = lean_ctor_get_uint8(v_toEnvExtension_1094_, sizeof(void*)*6);
lean_inc(v_mainModule_1076_);
v___x_1097_ = l_Lean_Environment_setMainModule(v_fst_1091_, v_mainModule_1076_);
v___x_1098_ = lean_box(0);
v___x_1099_ = 1;
if (v_logWrites_1096_ == 0)
{
lean_object* v___x_1100_; 
lean_inc_ref(v_toEnvExtension_1094_);
v___x_1100_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1094_, v___x_1097_, v___f_1089_, v_asyncMode_1095_, v___x_1098_, v___x_1099_);
v___y_1083_ = v_snd_1092_;
v___y_1084_ = v___x_1100_;
goto v___jp_1082_;
}
else
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_inc_ref_n(v_toEnvExtension_1094_, 2);
v___x_1101_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1094_, v___x_1097_);
lean_dec_ref(v___x_1097_);
v___x_1102_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1094_, v___x_1101_, v___f_1089_, v_asyncMode_1095_, v___x_1098_, v___x_1099_);
v___y_1083_ = v_snd_1092_;
v___y_1084_ = v___x_1102_;
goto v___jp_1082_;
}
}
v___jp_1103_:
{
uint8_t v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = 1;
lean_inc_ref(v_opts_1070_);
lean_inc_ref(v_imports_1068_);
v___x_1106_ = l_Lean_importModules(v_imports_1068_, v_opts_1070_, v_trustLevel_1073_, v_plugins_1074_, v_leakEnv_1075_, v___x_1105_, v___y_1104_, v_arts_1078_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v___x_1106_, 1);
v_fst_1091_ = v_a_1107_;
v_snd_1092_ = v_messages_1071_;
goto v___jp_1090_;
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1137_; 
v_a_1108_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1110_ = v___x_1106_;
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
uint32_t v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = 0;
v___x_1113_ = l_Lean_mkEmptyEnvironment(v___x_1112_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; lean_object* v_fileName_1115_; lean_object* v_fileMap_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; uint8_t v___x_1119_; uint8_t v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1113_, 1);
v_fileName_1115_ = lean_ctor_get(v_inputCtx_1072_, 1);
v_fileMap_1116_ = lean_ctor_get(v_inputCtx_1072_, 2);
lean_inc_ref(v_fileMap_1116_);
v___x_1117_ = l_Lean_FileMap_toPosition(v_fileMap_1116_, v_startPos_1067_);
v___x_1118_ = lean_box(0);
v___x_1119_ = 0;
v___x_1120_ = 2;
v___x_1121_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_checkDeprecatedImports_spec__1___closed__0));
v___x_1122_ = lean_io_error_to_string(v_a_1108_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set_tag(v___x_1110_, 3);
lean_ctor_set(v___x_1110_, 0, v___x_1122_);
v___x_1124_ = v___x_1110_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = l_Lean_MessageData_ofFormat(v___x_1124_);
lean_inc_ref(v_fileName_1115_);
v___x_1126_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1126_, 0, v_fileName_1115_);
lean_ctor_set(v___x_1126_, 1, v___x_1117_);
lean_ctor_set(v___x_1126_, 2, v___x_1118_);
lean_ctor_set(v___x_1126_, 3, v___x_1121_);
lean_ctor_set(v___x_1126_, 4, v___x_1125_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*5, v___x_1119_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*5 + 1, v___x_1120_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*5 + 2, v___x_1119_);
v___x_1127_ = l_Lean_MessageLog_add(v___x_1126_, v_messages_1071_);
v_fst_1091_ = v_a_1114_;
v_snd_1092_ = v___x_1127_;
goto v___jp_1090_;
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_del_object(v___x_1110_);
lean_dec(v_a_1108_);
lean_dec_ref(v___f_1089_);
lean_dec(v_origHeaderStx_x3f_1080_);
lean_dec(v_headerStx_x3f_1079_);
lean_dec(v_mainModule_1076_);
lean_dec_ref(v_inputCtx_1072_);
lean_dec_ref(v_messages_1071_);
lean_dec_ref(v_opts_1070_);
lean_dec_ref(v_imports_1068_);
lean_dec(v_startPos_1067_);
v_a_1129_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1113_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1113_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeaderCore___boxed(lean_object* v_startPos_1143_, lean_object* v_imports_1144_, lean_object* v_isModule_1145_, lean_object* v_opts_1146_, lean_object* v_messages_1147_, lean_object* v_inputCtx_1148_, lean_object* v_trustLevel_1149_, lean_object* v_plugins_1150_, lean_object* v_leakEnv_1151_, lean_object* v_mainModule_1152_, lean_object* v_package_x3f_1153_, lean_object* v_arts_1154_, lean_object* v_headerStx_x3f_1155_, lean_object* v_origHeaderStx_x3f_1156_, lean_object* v_a_1157_){
_start:
{
uint8_t v_isModule_boxed_1158_; uint32_t v_trustLevel_boxed_1159_; uint8_t v_leakEnv_boxed_1160_; lean_object* v_res_1161_; 
v_isModule_boxed_1158_ = lean_unbox(v_isModule_1145_);
v_trustLevel_boxed_1159_ = lean_unbox_uint32(v_trustLevel_1149_);
lean_dec(v_trustLevel_1149_);
v_leakEnv_boxed_1160_ = lean_unbox(v_leakEnv_1151_);
v_res_1161_ = l_Lean_Elab_processHeaderCore(v_startPos_1143_, v_imports_1144_, v_isModule_boxed_1158_, v_opts_1146_, v_messages_1147_, v_inputCtx_1148_, v_trustLevel_boxed_1159_, v_plugins_1150_, v_leakEnv_boxed_1160_, v_mainModule_1152_, v_package_x3f_1153_, v_arts_1154_, v_headerStx_x3f_1155_, v_origHeaderStx_x3f_1156_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader(lean_object* v_header_1162_, lean_object* v_opts_1163_, lean_object* v_messages_1164_, lean_object* v_inputCtx_1165_, uint32_t v_trustLevel_1166_, lean_object* v_plugins_1167_, uint8_t v_leakEnv_1168_, lean_object* v_mainModule_1169_){
_start:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1171_ = l_Lean_Elab_HeaderSyntax_startPos(v_header_1162_);
v___x_1172_ = 1;
lean_inc(v_header_1162_);
v___x_1173_ = l_Lean_Elab_HeaderSyntax_imports(v_header_1162_, v___x_1172_);
v___x_1174_ = l_Lean_Elab_HeaderSyntax_isModule(v_header_1162_);
v___x_1175_ = lean_box(0);
v___x_1176_ = lean_box(1);
v___x_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1177_, 0, v_header_1162_);
v___x_1178_ = l_Lean_Elab_processHeaderCore(v___x_1171_, v___x_1173_, v___x_1174_, v_opts_1163_, v_messages_1164_, v_inputCtx_1165_, v_trustLevel_1166_, v_plugins_1167_, v_leakEnv_1168_, v_mainModule_1169_, v___x_1175_, v___x_1176_, v___x_1177_, v___x_1175_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_processHeader___boxed(lean_object* v_header_1179_, lean_object* v_opts_1180_, lean_object* v_messages_1181_, lean_object* v_inputCtx_1182_, lean_object* v_trustLevel_1183_, lean_object* v_plugins_1184_, lean_object* v_leakEnv_1185_, lean_object* v_mainModule_1186_, lean_object* v_a_1187_){
_start:
{
uint32_t v_trustLevel_boxed_1188_; uint8_t v_leakEnv_boxed_1189_; lean_object* v_res_1190_; 
v_trustLevel_boxed_1188_ = lean_unbox_uint32(v_trustLevel_1183_);
lean_dec(v_trustLevel_1183_);
v_leakEnv_boxed_1189_ = lean_unbox(v_leakEnv_1185_);
v_res_1190_ = l_Lean_Elab_processHeader(v_header_1179_, v_opts_1180_, v_messages_1181_, v_inputCtx_1182_, v_trustLevel_boxed_1188_, v_plugins_1184_, v_leakEnv_boxed_1189_, v_mainModule_1186_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports(lean_object* v_input_1192_, lean_object* v_fileName_1193_){
_start:
{
lean_object* v___y_1196_; 
if (lean_obj_tag(v_fileName_1193_) == 0)
{
lean_object* v___x_1241_; 
v___x_1241_ = ((lean_object*)(l_Lean_Elab_parseImports___closed__0));
v___y_1196_ = v___x_1241_;
goto v___jp_1195_;
}
else
{
lean_object* v_val_1242_; 
v_val_1242_ = lean_ctor_get(v_fileName_1193_, 0);
lean_inc(v_val_1242_);
lean_dec_ref_known(v_fileName_1193_, 1);
v___y_1196_ = v_val_1242_;
goto v___jp_1195_;
}
v___jp_1195_:
{
uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v_inputCtx_1199_; lean_object* v___x_1200_; 
v___x_1197_ = 1;
v___x_1198_ = lean_string_utf8_byte_size(v_input_1192_);
v_inputCtx_1199_ = l_Lean_Parser_mkInputContext___redArg(v_input_1192_, v___y_1196_, v___x_1197_, v___x_1198_);
lean_inc_ref(v_inputCtx_1199_);
v___x_1200_ = l_Lean_Parser_parseHeader(v_inputCtx_1199_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1232_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1232_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1232_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v_snd_1205_; lean_object* v_fst_1206_; lean_object* v_fst_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1230_; 
v_snd_1205_ = lean_ctor_get(v_a_1201_, 1);
lean_inc(v_snd_1205_);
v_fst_1206_ = lean_ctor_get(v_snd_1205_, 0);
lean_inc(v_fst_1206_);
v_fst_1207_ = lean_ctor_get(v_a_1201_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_a_1201_);
if (v_isSharedCheck_1230_ == 0)
{
lean_object* v_unused_1231_; 
v_unused_1231_ = lean_ctor_get(v_a_1201_, 1);
lean_dec(v_unused_1231_);
v___x_1209_ = v_a_1201_;
v_isShared_1210_ = v_isSharedCheck_1230_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_fst_1207_);
lean_dec(v_a_1201_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1230_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v_snd_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1228_; 
v_snd_1211_ = lean_ctor_get(v_snd_1205_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_snd_1205_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v_snd_1205_, 0);
lean_dec(v_unused_1229_);
v___x_1213_ = v_snd_1205_;
v_isShared_1214_ = v_isSharedCheck_1228_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_snd_1211_);
lean_dec(v_snd_1205_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1228_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v_fileMap_1215_; lean_object* v_pos_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1220_; 
v_fileMap_1215_ = lean_ctor_get(v_inputCtx_1199_, 2);
lean_inc_ref(v_fileMap_1215_);
lean_dec_ref(v_inputCtx_1199_);
v_pos_1216_ = lean_ctor_get(v_fst_1206_, 0);
lean_inc(v_pos_1216_);
lean_dec(v_fst_1206_);
v___x_1217_ = l_Lean_Elab_HeaderSyntax_imports(v_fst_1207_, v___x_1197_);
v___x_1218_ = l_Lean_FileMap_toPosition(v_fileMap_1215_, v_pos_1216_);
lean_dec(v_pos_1216_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v___x_1218_);
v___x_1220_ = v___x_1213_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1218_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_snd_1211_);
v___x_1220_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
lean_object* v___x_1222_; 
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v___x_1220_);
lean_ctor_set(v___x_1209_, 0, v___x_1217_);
v___x_1222_ = v___x_1209_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1217_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1224_; 
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1222_);
v___x_1224_ = v___x_1203_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1222_);
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
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec_ref(v_inputCtx_1199_);
v_a_1233_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1200_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1200_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_parseImports___boxed(lean_object* v_input_1243_, lean_object* v_fileName_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_Elab_parseImports(v_input_1243_, v_fileName_1244_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(lean_object* v_s_1247_){
_start:
{
lean_object* v___x_1249_; lean_object* v_putStr_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_get_stdout();
v_putStr_1250_ = lean_ctor_get(v___x_1249_, 4);
lean_inc_ref(v_putStr_1250_);
lean_dec_ref(v___x_1249_);
v___x_1251_ = lean_apply_2(v_putStr_1250_, v_s_1247_, lean_box(0));
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0___boxed(lean_object* v_s_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(v_s_1252_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0(lean_object* v_s_1255_){
_start:
{
uint32_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = 10;
v___x_1258_ = lean_string_push(v_s_1255_, v___x_1257_);
v___x_1259_ = l_IO_print___at___00IO_println___at___00Lean_Elab_printImports_spec__0_spec__0(v___x_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_Elab_printImports_spec__0___boxed(lean_object* v_s_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_IO_println___at___00Lean_Elab_printImports_spec__0(v_s_1260_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(lean_object* v_as_1263_, size_t v_sz_1264_, size_t v_i_1265_, lean_object* v_b_1266_){
_start:
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_usize_dec_lt(v_i_1265_, v_sz_1264_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; 
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v_b_1266_);
return v___x_1269_;
}
else
{
lean_object* v_a_1270_; lean_object* v_module_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_a_1270_ = lean_array_uget_borrowed(v_as_1263_, v_i_1265_);
v_module_1271_ = lean_ctor_get(v_a_1270_, 0);
v___x_1272_ = lean_box(0);
lean_inc(v_module_1271_);
v___x_1273_ = l_Lean_findOLean(v_module_1271_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1275_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1275_ = l_IO_println___at___00Lean_Elab_printImports_spec__0(v_a_1274_);
if (lean_obj_tag(v___x_1275_) == 0)
{
size_t v___x_1276_; size_t v___x_1277_; 
lean_dec_ref_known(v___x_1275_, 1);
v___x_1276_ = ((size_t)1ULL);
v___x_1277_ = lean_usize_add(v_i_1265_, v___x_1276_);
v_i_1265_ = v___x_1277_;
v_b_1266_ = v___x_1272_;
goto _start;
}
else
{
return v___x_1275_;
}
}
else
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
v_a_1279_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1273_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1273_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1279_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1___boxed(lean_object* v_as_1287_, lean_object* v_sz_1288_, lean_object* v_i_1289_, lean_object* v_b_1290_, lean_object* v___y_1291_){
_start:
{
size_t v_sz_boxed_1292_; size_t v_i_boxed_1293_; lean_object* v_res_1294_; 
v_sz_boxed_1292_ = lean_unbox_usize(v_sz_1288_);
lean_dec(v_sz_1288_);
v_i_boxed_1293_ = lean_unbox_usize(v_i_1289_);
lean_dec(v_i_1289_);
v_res_1294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(v_as_1287_, v_sz_boxed_1292_, v_i_boxed_1293_, v_b_1290_);
lean_dec_ref(v_as_1287_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImports(lean_object* v_input_1295_, lean_object* v_fileName_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Elab_parseImports(v_input_1295_, v_fileName_1296_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v_fst_1300_; lean_object* v___x_1301_; size_t v_sz_1302_; size_t v___x_1303_; lean_object* v___x_1304_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1298_, 1);
v_fst_1300_ = lean_ctor_get(v_a_1299_, 0);
lean_inc(v_fst_1300_);
lean_dec(v_a_1299_);
v___x_1301_ = lean_box(0);
v_sz_1302_ = lean_array_size(v_fst_1300_);
v___x_1303_ = ((size_t)0ULL);
v___x_1304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImports_spec__1(v_fst_1300_, v_sz_1302_, v___x_1303_, v___x_1301_);
lean_dec(v_fst_1300_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1311_ == 0)
{
lean_object* v_unused_1312_; 
v_unused_1312_ = lean_ctor_get(v___x_1304_, 0);
lean_dec(v_unused_1312_);
v___x_1306_ = v___x_1304_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_dec(v___x_1304_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1301_);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1301_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
else
{
return v___x_1304_;
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
v_a_1313_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1298_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1298_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImports___boxed(lean_object* v_input_1321_, lean_object* v_fileName_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_Elab_printImports(v_input_1321_, v_fileName_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(lean_object* v_a_1325_, lean_object* v_as_1326_, size_t v_sz_1327_, size_t v_i_1328_, lean_object* v_b_1329_){
_start:
{
uint8_t v___x_1331_; 
v___x_1331_ = lean_usize_dec_lt(v_i_1328_, v_sz_1327_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; 
lean_dec(v_a_1325_);
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v_b_1329_);
return v___x_1332_;
}
else
{
lean_object* v_a_1333_; lean_object* v_module_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_a_1333_ = lean_array_uget_borrowed(v_as_1326_, v_i_1328_);
v_module_1334_ = lean_ctor_get(v_a_1333_, 0);
v___x_1335_ = lean_box(0);
lean_inc(v_module_1334_);
lean_inc(v_a_1325_);
v___x_1336_ = l_Lean_findLean(v_a_1325_, v_module_1334_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1338_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1336_, 1);
v___x_1338_ = l_IO_println___at___00Lean_Elab_printImports_spec__0(v_a_1337_);
if (lean_obj_tag(v___x_1338_) == 0)
{
size_t v___x_1339_; size_t v___x_1340_; 
lean_dec_ref_known(v___x_1338_, 1);
v___x_1339_ = ((size_t)1ULL);
v___x_1340_ = lean_usize_add(v_i_1328_, v___x_1339_);
v_i_1328_ = v___x_1340_;
v_b_1329_ = v___x_1335_;
goto _start;
}
else
{
lean_dec(v_a_1325_);
return v___x_1338_;
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec(v_a_1325_);
v_a_1342_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1336_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1336_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0___boxed(lean_object* v_a_1350_, lean_object* v_as_1351_, lean_object* v_sz_1352_, lean_object* v_i_1353_, lean_object* v_b_1354_, lean_object* v___y_1355_){
_start:
{
size_t v_sz_boxed_1356_; size_t v_i_boxed_1357_; lean_object* v_res_1358_; 
v_sz_boxed_1356_ = lean_unbox_usize(v_sz_1352_);
lean_dec(v_sz_1352_);
v_i_boxed_1357_ = lean_unbox_usize(v_i_1353_);
lean_dec(v_i_1353_);
v_res_1358_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(v_a_1350_, v_as_1351_, v_sz_boxed_1356_, v_i_boxed_1357_, v_b_1354_);
lean_dec_ref(v_as_1351_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs(lean_object* v_input_1359_, lean_object* v_fileName_1360_){
_start:
{
lean_object* v___x_1362_; 
v___x_1362_ = l_Lean_getSrcSearchPath();
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1364_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc(v_a_1363_);
lean_dec_ref_known(v___x_1362_, 1);
v___x_1364_ = l_Lean_Elab_parseImports(v_input_1359_, v_fileName_1360_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v_fst_1366_; lean_object* v___x_1367_; size_t v_sz_1368_; size_t v___x_1369_; lean_object* v___x_1370_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_a_1365_);
lean_dec_ref_known(v___x_1364_, 1);
v_fst_1366_ = lean_ctor_get(v_a_1365_, 0);
lean_inc(v_fst_1366_);
lean_dec(v_a_1365_);
v___x_1367_ = lean_box(0);
v_sz_1368_ = lean_array_size(v_fst_1366_);
v___x_1369_ = ((size_t)0ULL);
v___x_1370_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_printImportSrcs_spec__0(v_a_1363_, v_fst_1366_, v_sz_1368_, v___x_1369_, v___x_1367_);
lean_dec(v_fst_1366_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1377_ == 0)
{
lean_object* v_unused_1378_; 
v_unused_1378_ = lean_ctor_get(v___x_1370_, 0);
lean_dec(v_unused_1378_);
v___x_1372_ = v___x_1370_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_dec(v___x_1370_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 0, v___x_1367_);
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1367_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
else
{
return v___x_1370_;
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
lean_dec(v_a_1363_);
v_a_1379_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1364_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1364_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
lean_dec(v_fileName_1360_);
lean_dec_ref(v_input_1359_);
v_a_1387_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1362_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1362_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1387_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_printImportSrcs___boxed(lean_object* v_input_1395_, lean_object* v_fileName_1396_, lean_object* v_a_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Elab_printImportSrcs(v_input_1395_, v_fileName_1396_);
return v_res_1398_;
}
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_DeprecatedModule(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Modify(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Import(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DeprecatedModule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__1);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__2);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__3);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__4);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__5);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__6);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7 = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars___closed__0___boxed__const__7);
l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars = _init_l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars();
lean_mark_persistent(l___private_Lean_Elab_Import_0__Lean_Elab_osForbiddenChars);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Import(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* initialize_Lean_DeprecatedModule(uint8_t builtin);
lean_object* initialize_Init_Data_String_Modify(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Import(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DeprecatedModule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Import(builtin);
}
#ifdef __cplusplus
}
#endif
