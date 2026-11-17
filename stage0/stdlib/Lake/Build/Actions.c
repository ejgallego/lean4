// Lean compiler output
// Module: Lake.Build.Actions
// Imports: public import Lake.Util.Log import Lake.Util.Proc import Lake.Util.FilePath import Lake.Util.IO import Lake.Util.Url import Init.Data.String.Search import Init.Data.String.TakeDrop import Init.System.Platform import Lean.CoreM import Lean.Compiler.Options
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_array_size(lean_object*);
extern uint8_t l_System_Platform_isOSX;
lean_object* l_Lean_instToJsonModuleSetup_toJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_System_SearchPath_toString(lean_object*);
lean_object* l_Lake_mkCmdLog(lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
static const lean_ctor_object l_Lake_compileLeanIR___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_compileLeanIR___closed__0 = (const lean_object*)&l_Lake_compileLeanIR___closed__0_value;
static const lean_string_object l_Lake_compileLeanIR___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l_Lake_compileLeanIR___closed__1 = (const lean_object*)&l_Lake_compileLeanIR___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_compileLeanIR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanIR___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileLeanModule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean exited with code "};
static const lean_object* l_Lake_compileLeanModule___lam__0___closed__0 = (const lean_object*)&l_Lake_compileLeanModule___lam__0___closed__0_value;
static const lean_string_object l_Lake_compileLeanModule___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stderr:\n"};
static const lean_object* l_Lake_compileLeanModule___lam__0___closed__1 = (const lean_object*)&l_Lake_compileLeanModule___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdout:\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileLeanModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--setup"};
static const lean_object* l_Lake_compileLeanModule___closed__0 = (const lean_object*)&l_Lake_compileLeanModule___closed__0_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__1;
static const lean_string_object l_Lake_compileLeanModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--json"};
static const lean_object* l_Lake_compileLeanModule___closed__2 = (const lean_object*)&l_Lake_compileLeanModule___closed__2_value;
static const lean_string_object l_Lake_compileLeanModule___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_compileLeanModule___closed__3 = (const lean_object*)&l_Lake_compileLeanModule___closed__3_value;
static const lean_string_object l_Lake_compileLeanModule___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to execute '"};
static const lean_object* l_Lake_compileLeanModule___closed__4 = (const lean_object*)&l_Lake_compileLeanModule___closed__4_value;
static const lean_string_object l_Lake_compileLeanModule___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "': "};
static const lean_object* l_Lake_compileLeanModule___closed__5 = (const lean_object*)&l_Lake_compileLeanModule___closed__5_value;
static const lean_string_object l_Lake_compileLeanModule___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-b"};
static const lean_object* l_Lake_compileLeanModule___closed__6 = (const lean_object*)&l_Lake_compileLeanModule___closed__6_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__7;
static const lean_string_object l_Lake_compileLeanModule___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-c"};
static const lean_object* l_Lake_compileLeanModule___closed__8 = (const lean_object*)&l_Lake_compileLeanModule___closed__8_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__9;
static const lean_string_object l_Lake_compileLeanModule___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-i"};
static const lean_object* l_Lake_compileLeanModule___closed__10 = (const lean_object*)&l_Lake_compileLeanModule___closed__10_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__11;
static const lean_string_object l_Lake_compileLeanModule___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l_Lake_compileLeanModule___closed__12 = (const lean_object*)&l_Lake_compileLeanModule___closed__12_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__13;
LEAN_EXPORT lean_object* l_Lake_compileLeanModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_compileO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileO___closed__0;
static lean_once_cell_t l_Lake_compileO___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileO___closed__1;
static const lean_array_object l_Lake_compileO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_compileO___closed__2 = (const lean_object*)&l_Lake_compileO___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_compileO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_mkArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rsp"};
static const lean_object* l_Lake_mkArgs___closed__0 = (const lean_object*)&l_Lake_mkArgs___closed__0_value;
static const lean_string_object l_Lake_mkArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Lake_mkArgs___closed__1 = (const lean_object*)&l_Lake_mkArgs___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_mkArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileStaticLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rcs"};
static const lean_object* l_Lake_compileStaticLib___closed__0 = (const lean_object*)&l_Lake_compileStaticLib___closed__0_value;
static const lean_array_object l_Lake_compileStaticLib___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_compileStaticLib___closed__0_value)}};
static const lean_object* l_Lake_compileStaticLib___closed__1 = (const lean_object*)&l_Lake_compileStaticLib___closed__1_value;
static const lean_string_object l_Lake_compileStaticLib___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--thin"};
static const lean_object* l_Lake_compileStaticLib___closed__2 = (const lean_object*)&l_Lake_compileStaticLib___closed__2_value;
static lean_once_cell_t l_Lake_compileStaticLib___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileStaticLib___closed__3;
LEAN_EXPORT lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileStaticLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileSharedLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "-shared"};
static const lean_object* l_Lake_compileSharedLib___closed__0 = (const lean_object*)&l_Lake_compileSharedLib___closed__0_value;
static lean_once_cell_t l_Lake_compileSharedLib___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileSharedLib___closed__1;
static lean_once_cell_t l_Lake_compileSharedLib___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileSharedLib___closed__2;
static const lean_string_object l_Lake_compileSharedLib___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "MACOSX_DEPLOYMENT_TARGET"};
static const lean_object* l_Lake_compileSharedLib___closed__3 = (const lean_object*)&l_Lake_compileSharedLib___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_compileSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileSharedLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileExe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-H"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_download___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CURL"};
static const lean_object* l_Lake_download___closed__0 = (const lean_object*)&l_Lake_download___closed__0_value;
static const lean_string_object l_Lake_download___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "curl"};
static const lean_object* l_Lake_download___closed__1 = (const lean_object*)&l_Lake_download___closed__1_value;
static const lean_string_object l_Lake_download___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l_Lake_download___closed__2 = (const lean_object*)&l_Lake_download___closed__2_value;
static const lean_string_object l_Lake_download___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-S"};
static const lean_object* l_Lake_download___closed__3 = (const lean_object*)&l_Lake_download___closed__3_value;
static const lean_string_object l_Lake_download___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-f"};
static const lean_object* l_Lake_download___closed__4 = (const lean_object*)&l_Lake_download___closed__4_value;
static const lean_string_object l_Lake_download___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l_Lake_download___closed__5 = (const lean_object*)&l_Lake_download___closed__5_value;
static lean_once_cell_t l_Lake_download___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__6;
static lean_once_cell_t l_Lake_download___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__7;
static lean_once_cell_t l_Lake_download___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__8;
static lean_once_cell_t l_Lake_download___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__9;
LEAN_EXPORT lean_object* l_Lake_download(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_download___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_untar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tar"};
static const lean_object* l_Lake_untar___closed__0 = (const lean_object*)&l_Lake_untar___closed__0_value;
static const lean_string_object l_Lake_untar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-C"};
static const lean_object* l_Lake_untar___closed__1 = (const lean_object*)&l_Lake_untar___closed__1_value;
static const lean_string_object l_Lake_untar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-xvv"};
static const lean_object* l_Lake_untar___closed__2 = (const lean_object*)&l_Lake_untar___closed__2_value;
static const lean_string_object l_Lake_untar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "-xvvz"};
static const lean_object* l_Lake_untar___closed__3 = (const lean_object*)&l_Lake_untar___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_untar(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_untar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "--exclude="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_tar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_tar___closed__0 = (const lean_object*)&l_Lake_tar___closed__0_value;
static lean_once_cell_t l_Lake_tar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_tar___closed__1;
static const lean_string_object l_Lake_tar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "COPYFILE_DISABLE"};
static const lean_object* l_Lake_tar___closed__2 = (const lean_object*)&l_Lake_tar___closed__2_value;
static const lean_string_object l_Lake_tar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_tar___closed__3 = (const lean_object*)&l_Lake_tar___closed__3_value;
static const lean_ctor_object l_Lake_tar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_tar___closed__3_value)}};
static const lean_object* l_Lake_tar___closed__4 = (const lean_object*)&l_Lake_tar___closed__4_value;
static const lean_ctor_object l_Lake_tar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_tar___closed__2_value),((lean_object*)&l_Lake_tar___closed__4_value)}};
static const lean_object* l_Lake_tar___closed__5 = (const lean_object*)&l_Lake_tar___closed__5_value;
static const lean_array_object l_Lake_tar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_tar___closed__5_value)}};
static const lean_object* l_Lake_tar___closed__6 = (const lean_object*)&l_Lake_tar___closed__6_value;
static const lean_string_object l_Lake_tar___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-cvv"};
static const lean_object* l_Lake_tar___closed__7 = (const lean_object*)&l_Lake_tar___closed__7_value;
static const lean_array_object l_Lake_tar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_tar___closed__7_value)}};
static const lean_object* l_Lake_tar___closed__8 = (const lean_object*)&l_Lake_tar___closed__8_value;
static const lean_string_object l_Lake_tar___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-z"};
static const lean_object* l_Lake_tar___closed__9 = (const lean_object*)&l_Lake_tar___closed__9_value;
static lean_once_cell_t l_Lake_tar___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_tar___closed__10;
LEAN_EXPORT lean_object* l_Lake_tar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanIR(lean_object* v_setupFile_4_, lean_object* v_irFile_5_, lean_object* v_cFile_6_, lean_object* v_leanPath_7_, lean_object* v_leanir_8_, lean_object* v_a_9_){
_start:
{
lean_object* v___x_11_; 
lean_inc_ref(v_irFile_5_);
v___x_11_ = l_Lake_createParentDirs(v_irFile_5_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_12_; 
lean_dec_ref_known(v___x_11_, 1);
lean_inc_ref(v_cFile_6_);
v___x_12_ = l_Lake_createParentDirs(v_cFile_6_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_36_; 
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_36_ == 0)
{
lean_object* v_unused_37_; 
v_unused_37_ = lean_ctor_get(v___x_12_, 0);
lean_dec(v_unused_37_);
v___x_14_ = v___x_12_;
v_isShared_15_ = v_isSharedCheck_36_;
goto v_resetjp_13_;
}
else
{
lean_dec(v___x_12_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_36_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_16_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_17_ = lean_unsigned_to_nat(3u);
v___x_18_ = lean_mk_empty_array_with_capacity(v___x_17_);
v___x_19_ = lean_array_push(v___x_18_, v_setupFile_4_);
v___x_20_ = lean_array_push(v___x_19_, v_irFile_5_);
v___x_21_ = lean_array_push(v___x_20_, v_cFile_6_);
v___x_22_ = lean_box(0);
v___x_23_ = ((lean_object*)(l_Lake_compileLeanIR___closed__1));
v___x_24_ = l_System_SearchPath_toString(v_leanPath_7_);
if (v_isShared_15_ == 0)
{
lean_ctor_set_tag(v___x_14_, 1);
lean_ctor_set(v___x_14_, 0, v___x_24_);
v___x_26_ = v___x_14_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v___x_24_);
v___x_26_ = v_reuseFailAlloc_35_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; uint8_t v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_23_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
v___x_28_ = lean_unsigned_to_nat(1u);
v___x_29_ = lean_mk_empty_array_with_capacity(v___x_28_);
v___x_30_ = lean_array_push(v___x_29_, v___x_27_);
v___x_31_ = 1;
v___x_32_ = 0;
v___x_33_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_33_, 0, v___x_16_);
lean_ctor_set(v___x_33_, 1, v_leanir_8_);
lean_ctor_set(v___x_33_, 2, v___x_21_);
lean_ctor_set(v___x_33_, 3, v___x_22_);
lean_ctor_set(v___x_33_, 4, v___x_30_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*5, v___x_31_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*5 + 1, v___x_32_);
v___x_34_ = l_Lake_proc(v___x_33_, v___x_32_, v___x_22_, v_a_9_);
return v___x_34_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec_ref(v_leanir_8_);
lean_dec(v_leanPath_7_);
lean_dec_ref(v_cFile_6_);
lean_dec_ref(v_irFile_5_);
lean_dec_ref(v_setupFile_4_);
v_a_38_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_38_);
lean_dec_ref_known(v___x_12_, 1);
v___x_39_ = lean_io_error_to_string(v_a_38_);
v___x_40_ = 3;
v___x_41_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_41_, 0, v___x_39_);
lean_ctor_set_uint8(v___x_41_, sizeof(void*)*1, v___x_40_);
v___x_42_ = lean_array_get_size(v_a_9_);
v___x_43_ = lean_array_push(v_a_9_, v___x_41_);
v___x_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
return v___x_44_;
}
}
else
{
lean_object* v_a_45_; lean_object* v___x_46_; uint8_t v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
lean_dec_ref(v_leanir_8_);
lean_dec(v_leanPath_7_);
lean_dec_ref(v_cFile_6_);
lean_dec_ref(v_irFile_5_);
lean_dec_ref(v_setupFile_4_);
v_a_45_ = lean_ctor_get(v___x_11_, 0);
lean_inc(v_a_45_);
lean_dec_ref_known(v___x_11_, 1);
v___x_46_ = lean_io_error_to_string(v_a_45_);
v___x_47_ = 3;
v___x_48_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_48_, 0, v___x_46_);
lean_ctor_set_uint8(v___x_48_, sizeof(void*)*1, v___x_47_);
v___x_49_ = lean_array_get_size(v_a_9_);
v___x_50_ = lean_array_push(v_a_9_, v___x_48_);
v___x_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_49_);
lean_ctor_set(v___x_51_, 1, v___x_50_);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanIR___boxed(lean_object* v_setupFile_52_, lean_object* v_irFile_53_, lean_object* v_cFile_54_, lean_object* v_leanPath_55_, lean_object* v_leanir_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lake_compileLeanIR(v_setupFile_52_, v_irFile_53_, v_cFile_54_, v_leanPath_55_, v_leanir_56_, v_a_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg(){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___closed__0));
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg___boxed(lean_object* v___dummy_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg();
return v_res_65_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___redArg();
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1(lean_object* v_s_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___boxed(lean_object* v_s_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1(v_s_69_);
lean_dec_ref(v_s_69_);
return v_res_70_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(lean_object* v_opts_71_, lean_object* v_opt_72_){
_start:
{
lean_object* v_name_73_; lean_object* v_defValue_74_; lean_object* v_map_75_; lean_object* v___x_76_; 
v_name_73_ = lean_ctor_get(v_opt_72_, 0);
v_defValue_74_ = lean_ctor_get(v_opt_72_, 1);
v_map_75_ = lean_ctor_get(v_opts_71_, 0);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_75_, v_name_73_);
if (lean_obj_tag(v___x_76_) == 0)
{
uint8_t v___x_77_; 
v___x_77_ = lean_unbox(v_defValue_74_);
return v___x_77_;
}
else
{
lean_object* v_val_78_; 
v_val_78_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_val_78_);
lean_dec_ref_known(v___x_76_, 1);
if (lean_obj_tag(v_val_78_) == 1)
{
uint8_t v_v_79_; 
v_v_79_ = lean_ctor_get_uint8(v_val_78_, 0);
lean_dec_ref_known(v_val_78_, 0);
return v_v_79_;
}
else
{
uint8_t v___x_80_; 
lean_dec(v_val_78_);
v___x_80_ = lean_unbox(v_defValue_74_);
return v___x_80_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3___boxed(lean_object* v_opts_81_, lean_object* v_opt_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(v_opts_81_, v_opt_82_);
lean_dec_ref(v_opt_82_);
lean_dec_ref(v_opts_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(lean_object* v_as_85_, size_t v_i_86_, size_t v_stop_87_){
_start:
{
uint8_t v___x_88_; 
v___x_88_ = lean_usize_dec_eq(v_i_86_, v_stop_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; uint8_t v_level_90_; 
v___x_89_ = lean_array_uget_borrowed(v_as_85_, v_i_86_);
v_level_90_ = lean_ctor_get_uint8(v___x_89_, sizeof(void*)*1);
if (v_level_90_ == 3)
{
uint8_t v___x_91_; 
v___x_91_ = 1;
return v___x_91_;
}
else
{
size_t v___x_92_; size_t v___x_93_; 
v___x_92_ = ((size_t)1ULL);
v___x_93_ = lean_usize_add(v_i_86_, v___x_92_);
v_i_86_ = v___x_93_;
goto _start;
}
}
else
{
uint8_t v___x_95_; 
v___x_95_ = 0;
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0___boxed(lean_object* v_as_96_, lean_object* v_i_97_, lean_object* v_stop_98_){
_start:
{
size_t v_i_boxed_99_; size_t v_stop_boxed_100_; uint8_t v_res_101_; lean_object* v_r_102_; 
v_i_boxed_99_ = lean_unbox_usize(v_i_97_);
lean_dec(v_i_97_);
v_stop_boxed_100_ = lean_unbox_usize(v_stop_98_);
lean_dec(v_stop_98_);
v_res_101_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(v_as_96_, v_i_boxed_99_, v_stop_boxed_100_);
lean_dec_ref(v_as_96_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0(uint32_t v_exitCode_105_, lean_object* v___x_106_, lean_object* v_stderr_107_, lean_object* v_____r_108_, lean_object* v___y_109_){
_start:
{
lean_object* v___y_112_; lean_object* v___y_123_; uint8_t v___y_124_; lean_object* v___y_130_; uint8_t v___y_131_; lean_object* v___y_137_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_146_ = lean_string_utf8_byte_size(v_stderr_107_);
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_nat_dec_eq(v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_149_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__1));
v___x_150_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_150_, 0, v_stderr_107_);
lean_ctor_set(v___x_150_, 1, v___x_147_);
lean_ctor_set(v___x_150_, 2, v___x_146_);
v___x_151_ = l_String_Slice_trimAscii(v___x_150_);
v___x_152_ = l_String_Slice_toString(v___x_151_);
lean_dec_ref(v___x_151_);
v___x_153_ = lean_string_append(v___x_149_, v___x_152_);
lean_dec_ref(v___x_152_);
v___x_154_ = 1;
v___x_155_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_155_, 0, v___x_153_);
lean_ctor_set_uint8(v___x_155_, sizeof(void*)*1, v___x_154_);
v___x_156_ = lean_array_push(v___y_109_, v___x_155_);
v___y_137_ = v___x_156_;
goto v___jp_136_;
}
else
{
lean_dec_ref(v_stderr_107_);
v___y_137_ = v___y_109_;
goto v___jp_136_;
}
v___jp_111_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_113_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__0));
v___x_114_ = lean_uint32_to_nat(v_exitCode_105_);
v___x_115_ = l_Nat_reprFast(v___x_114_);
v___x_116_ = lean_string_append(v___x_113_, v___x_115_);
lean_dec_ref(v___x_115_);
v___x_117_ = 3;
v___x_118_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*1, v___x_117_);
v___x_119_ = lean_array_get_size(v___y_112_);
v___x_120_ = lean_array_push(v___y_112_, v___x_118_);
v___x_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
return v___x_121_;
}
v___jp_122_:
{
uint32_t v___x_125_; uint8_t v___x_126_; 
v___x_125_ = 0;
v___x_126_ = lean_uint32_dec_eq(v_exitCode_105_, v___x_125_);
if (v___x_126_ == 0)
{
v___y_112_ = v___y_123_;
goto v___jp_111_;
}
else
{
if (v___y_124_ == 0)
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_box(0);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___y_123_);
return v___x_128_;
}
else
{
v___y_112_ = v___y_123_;
goto v___jp_111_;
}
}
}
v___jp_129_:
{
uint32_t v___x_132_; uint8_t v___x_133_; 
v___x_132_ = 1;
v___x_133_ = lean_uint32_dec_eq(v_exitCode_105_, v___x_132_);
if (v___x_133_ == 0)
{
v___y_123_ = v___y_130_;
v___y_124_ = v___y_131_;
goto v___jp_122_;
}
else
{
if (v___y_131_ == 0)
{
v___y_123_ = v___y_130_;
v___y_124_ = v___y_131_;
goto v___jp_122_;
}
else
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_array_get_size(v___y_130_);
v___x_135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___y_130_);
return v___x_135_;
}
}
}
v___jp_136_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_138_ = lean_array_get_size(v___y_137_);
v___x_139_ = l_Array_extract___redArg(v___y_137_, v___x_106_, v___x_138_);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_array_get_size(v___x_139_);
v___x_142_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
lean_dec_ref(v___x_139_);
v___y_130_ = v___y_137_;
v___y_131_ = v___x_142_;
goto v___jp_129_;
}
else
{
size_t v___x_143_; size_t v___x_144_; uint8_t v___x_145_; 
v___x_143_ = ((size_t)0ULL);
v___x_144_ = lean_usize_of_nat(v___x_141_);
v___x_145_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_compileLeanModule_spec__0(v___x_139_, v___x_143_, v___x_144_);
lean_dec_ref(v___x_139_);
v___y_130_ = v___y_137_;
v___y_131_ = v___x_145_;
goto v___jp_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0___boxed(lean_object* v_exitCode_157_, lean_object* v___x_158_, lean_object* v_stderr_159_, lean_object* v_____r_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
uint32_t v_exitCode_boxed_163_; lean_object* v_res_164_; 
v_exitCode_boxed_163_ = lean_unbox_uint32(v_exitCode_157_);
lean_dec(v_exitCode_157_);
v_res_164_ = l_Lake_compileLeanModule___lam__0(v_exitCode_boxed_163_, v___x_158_, v_stderr_159_, v_____r_160_, v___y_161_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__1(lean_object* v___f_165_, lean_object* v_00___166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_box(0);
v___x_170_ = lean_apply_3(v___f_165_, v___x_169_, v___y_167_, lean_box(0));
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__1___boxed(lean_object* v___f_171_, lean_object* v_00___172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lake_compileLeanModule___lam__1(v___f_171_, v_00___172_, v___y_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(lean_object* v_a_176_, lean_object* v_b_177_, lean_object* v_relLeanFile_178_, lean_object* v_____r_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_a_183_; lean_object* v_toBaseMessage_185_; uint8_t v_isSilent_186_; 
v_toBaseMessage_185_ = lean_ctor_get(v_a_176_, 0);
lean_inc_ref(v_toBaseMessage_185_);
v_isSilent_186_ = lean_ctor_get_uint8(v_toBaseMessage_185_, sizeof(void*)*5 + 2);
if (v_isSilent_186_ == 0)
{
lean_object* v_kind_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_211_; 
v_kind_187_ = lean_ctor_get(v_a_176_, 1);
v_isSharedCheck_211_ = !lean_is_exclusive(v_a_176_);
if (v_isSharedCheck_211_ == 0)
{
lean_object* v_unused_212_; 
v_unused_212_ = lean_ctor_get(v_a_176_, 0);
lean_dec(v_unused_212_);
v___x_189_ = v_a_176_;
v_isShared_190_ = v_isSharedCheck_211_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_kind_187_);
lean_dec(v_a_176_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_211_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v_pos_191_; lean_object* v_endPos_192_; uint8_t v_keepFullRange_193_; uint8_t v_severity_194_; lean_object* v_caption_195_; lean_object* v_data_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_209_; 
v_pos_191_ = lean_ctor_get(v_toBaseMessage_185_, 1);
v_endPos_192_ = lean_ctor_get(v_toBaseMessage_185_, 2);
v_keepFullRange_193_ = lean_ctor_get_uint8(v_toBaseMessage_185_, sizeof(void*)*5);
v_severity_194_ = lean_ctor_get_uint8(v_toBaseMessage_185_, sizeof(void*)*5 + 1);
v_caption_195_ = lean_ctor_get(v_toBaseMessage_185_, 3);
v_data_196_ = lean_ctor_get(v_toBaseMessage_185_, 4);
v_isSharedCheck_209_ = !lean_is_exclusive(v_toBaseMessage_185_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; 
v_unused_210_ = lean_ctor_get(v_toBaseMessage_185_, 0);
lean_dec(v_unused_210_);
v___x_198_ = v_toBaseMessage_185_;
v_isShared_199_ = v_isSharedCheck_209_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_data_196_);
lean_inc(v_caption_195_);
lean_inc(v_endPos_192_);
lean_inc(v_pos_191_);
lean_dec(v_toBaseMessage_185_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_209_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_202_; 
v___x_200_ = l_Lake_mkRelPathString(v_relLeanFile_178_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v___x_200_);
v___x_202_ = v___x_198_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_200_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_pos_191_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v_endPos_192_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v_caption_195_);
lean_ctor_set(v_reuseFailAlloc_208_, 4, v_data_196_);
lean_ctor_set_uint8(v_reuseFailAlloc_208_, sizeof(void*)*5, v_keepFullRange_193_);
lean_ctor_set_uint8(v_reuseFailAlloc_208_, sizeof(void*)*5 + 1, v_severity_194_);
lean_ctor_set_uint8(v_reuseFailAlloc_208_, sizeof(void*)*5 + 2, v_isSilent_186_);
v___x_202_ = v_reuseFailAlloc_208_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v___x_204_; 
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_202_);
v___x_204_ = v___x_189_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_kind_187_);
v___x_204_ = v_reuseFailAlloc_207_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = l_Lake_LogEntry_ofSerialMessage(v___x_204_);
v___x_206_ = lean_array_push(v___y_180_, v___x_205_);
v_a_183_ = v___x_206_;
goto v___jp_182_;
}
}
}
}
}
else
{
lean_dec_ref(v_toBaseMessage_185_);
lean_dec_ref(v_relLeanFile_178_);
lean_dec_ref(v_a_176_);
v_a_183_ = v___y_180_;
goto v___jp_182_;
}
v___jp_182_:
{
lean_object* v___x_184_; 
v___x_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_184_, 0, v_b_177_);
lean_ctor_set(v___x_184_, 1, v_a_183_);
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0___boxed(lean_object* v_a_213_, lean_object* v_b_214_, lean_object* v_relLeanFile_215_, lean_object* v_____r_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(v_a_213_, v_b_214_, v_relLeanFile_215_, v_____r_216_, v___y_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(lean_object* v_relLeanFile_222_, lean_object* v___x_223_, lean_object* v___x_224_, lean_object* v___x_225_, lean_object* v_a_226_, lean_object* v_b_227_, lean_object* v___y_228_){
_start:
{
lean_object* v___y_231_; lean_object* v___y_232_; lean_object* v___y_238_; lean_object* v___y_239_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v_it_253_; lean_object* v_startInclusive_254_; lean_object* v_endExclusive_255_; 
if (lean_obj_tag(v_a_226_) == 0)
{
lean_object* v_currPos_273_; lean_object* v_searcher_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_297_; 
v_currPos_273_ = lean_ctor_get(v_a_226_, 0);
v_searcher_274_ = lean_ctor_get(v_a_226_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_a_226_);
if (v_isSharedCheck_297_ == 0)
{
v___x_276_ = v_a_226_;
v_isShared_277_ = v_isSharedCheck_297_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_searcher_274_);
lean_inc(v_currPos_273_);
lean_dec(v_a_226_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_297_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
uint8_t v_decide_278_; 
v_decide_278_ = lean_nat_dec_eq(v_searcher_274_, v___x_225_);
if (v_decide_278_ == 0)
{
uint32_t v___x_279_; uint32_t v___x_280_; uint8_t v___x_281_; 
v___x_279_ = 10;
v___x_280_ = lean_string_utf8_get_fast(v___x_223_, v_searcher_274_);
v___x_281_ = lean_uint32_dec_eq(v___x_280_, v___x_279_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_282_ = lean_string_utf8_next_fast(v___x_223_, v_searcher_274_);
lean_dec(v_searcher_274_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v___x_282_);
v___x_284_ = v___x_276_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_currPos_273_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_282_);
v___x_284_ = v_reuseFailAlloc_286_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
v_a_226_ = v___x_284_;
goto _start;
}
}
else
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_slice_290_; lean_object* v_nextIt_292_; 
v___x_287_ = lean_string_utf8_next_fast(v___x_223_, v_searcher_274_);
v___x_288_ = lean_nat_sub(v___x_287_, v_searcher_274_);
v___x_289_ = lean_nat_add(v_searcher_274_, v___x_288_);
lean_dec(v___x_288_);
v_slice_290_ = l_String_Slice_subslice_x21(v___x_224_, v_currPos_273_, v_searcher_274_);
lean_inc(v___x_289_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v___x_289_);
lean_ctor_set(v___x_276_, 0, v___x_289_);
v_nextIt_292_ = v___x_276_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_295_, 1, v___x_289_);
v_nextIt_292_ = v_reuseFailAlloc_295_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v_startInclusive_293_; lean_object* v_endExclusive_294_; 
v_startInclusive_293_ = lean_ctor_get(v_slice_290_, 0);
lean_inc(v_startInclusive_293_);
v_endExclusive_294_ = lean_ctor_get(v_slice_290_, 1);
lean_inc(v_endExclusive_294_);
lean_dec_ref(v_slice_290_);
v_it_253_ = v_nextIt_292_;
v_startInclusive_254_ = v_startInclusive_293_;
v_endExclusive_255_ = v_endExclusive_294_;
goto v___jp_252_;
}
}
}
else
{
lean_object* v___x_296_; 
lean_del_object(v___x_276_);
lean_dec(v_searcher_274_);
v___x_296_ = lean_box(1);
lean_inc(v___x_225_);
v_it_253_ = v___x_296_;
v_startInclusive_254_ = v_currPos_273_;
v_endExclusive_255_ = v___x_225_;
goto v___jp_252_;
}
}
}
else
{
lean_object* v___x_298_; 
lean_dec(v___x_225_);
lean_dec_ref(v_relLeanFile_222_);
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_b_227_);
lean_ctor_set(v___x_298_, 1, v___y_228_);
return v___x_298_;
}
v___jp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_233_ = lean_string_append(v_b_227_, v___y_232_);
lean_dec_ref(v___y_232_);
v___x_234_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__0));
v___x_235_ = lean_string_append(v___x_233_, v___x_234_);
v_a_226_ = v___y_231_;
v_b_227_ = v___x_235_;
goto _start;
}
v___jp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_240_ = lean_string_utf8_byte_size(v_b_227_);
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = lean_nat_dec_eq(v___x_240_, v___x_241_);
if (v___x_242_ == 0)
{
v___y_231_ = v___y_238_;
v___y_232_ = v___y_239_;
goto v___jp_230_;
}
else
{
lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_string_utf8_byte_size(v___y_239_);
v___x_244_ = lean_nat_dec_eq(v___x_243_, v___x_241_);
if (v___x_244_ == 0)
{
v___y_231_ = v___y_238_;
v___y_232_ = v___y_239_;
goto v___jp_230_;
}
else
{
lean_dec_ref(v___y_239_);
v_a_226_ = v___y_238_;
goto _start;
}
}
}
v___jp_246_:
{
if (lean_obj_tag(v___y_248_) == 0)
{
lean_object* v_a_249_; lean_object* v_a_250_; 
v_a_249_ = lean_ctor_get(v___y_248_, 0);
lean_inc(v_a_249_);
v_a_250_ = lean_ctor_get(v___y_248_, 1);
lean_inc(v_a_250_);
lean_dec_ref_known(v___y_248_, 2);
v_a_226_ = v___y_247_;
v_b_227_ = v_a_249_;
v___y_228_ = v_a_250_;
goto _start;
}
else
{
lean_dec(v___y_247_);
lean_dec(v___x_225_);
lean_dec_ref(v_relLeanFile_222_);
return v___y_248_;
}
}
v___jp_252_:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_string_utf8_extract_fast(v___x_223_, v_startInclusive_254_, v_endExclusive_255_);
lean_dec(v_endExclusive_255_);
lean_dec(v_startInclusive_254_);
lean_inc_ref(v___x_256_);
v___x_257_ = l_Lean_Json_parse(v___x_256_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_dec_ref_known(v___x_257_, 1);
v___y_238_ = v_it_253_;
v___y_239_ = v___x_256_;
goto v___jp_237_;
}
else
{
lean_object* v_a_258_; lean_object* v___x_259_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_a_258_);
lean_dec_ref_known(v___x_257_, 1);
v___x_259_ = l_Lean_instFromJsonSerialMessage_fromJson(v_a_258_);
if (lean_obj_tag(v___x_259_) == 1)
{
lean_object* v_a_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
lean_dec_ref(v___x_256_);
v_a_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc(v_a_260_);
lean_dec_ref_known(v___x_259_, 1);
v___x_261_ = lean_string_utf8_byte_size(v_b_227_);
v___x_262_ = lean_unsigned_to_nat(0u);
v___x_263_ = lean_nat_dec_eq(v___x_261_, v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_264_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1));
v___x_265_ = lean_string_append(v___x_264_, v_b_227_);
v___x_266_ = 1;
v___x_267_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set_uint8(v___x_267_, sizeof(void*)*1, v___x_266_);
v___x_268_ = lean_box(0);
v___x_269_ = lean_array_push(v___y_228_, v___x_267_);
lean_inc_ref(v_relLeanFile_222_);
v___x_270_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(v_a_260_, v_b_227_, v_relLeanFile_222_, v___x_268_, v___x_269_);
v___y_247_ = v_it_253_;
v___y_248_ = v___x_270_;
goto v___jp_246_;
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_box(0);
lean_inc_ref(v_relLeanFile_222_);
v___x_272_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___lam__0(v_a_260_, v_b_227_, v_relLeanFile_222_, v___x_271_, v___y_228_);
v___y_247_ = v_it_253_;
v___y_248_ = v___x_272_;
goto v___jp_246_;
}
}
else
{
lean_dec_ref(v___x_259_);
v___y_238_ = v_it_253_;
v___y_239_ = v___x_256_;
goto v___jp_237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___boxed(lean_object* v_relLeanFile_299_, lean_object* v___x_300_, lean_object* v___x_301_, lean_object* v___x_302_, lean_object* v_a_303_, lean_object* v_b_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(v_relLeanFile_299_, v___x_300_, v___x_301_, v___x_302_, v_a_303_, v_b_304_, v___y_305_);
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_300_);
return v_res_307_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__1(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_309_ = ((lean_object*)(l_Lake_compileLeanModule___closed__0));
v___x_310_ = lean_unsigned_to_nat(2u);
v___x_311_ = lean_mk_empty_array_with_capacity(v___x_310_);
v___x_312_ = lean_array_push(v___x_311_, v___x_309_);
return v___x_312_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__7(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_318_ = ((lean_object*)(l_Lake_compileLeanModule___closed__6));
v___x_319_ = lean_unsigned_to_nat(2u);
v___x_320_ = lean_mk_empty_array_with_capacity(v___x_319_);
v___x_321_ = lean_array_push(v___x_320_, v___x_318_);
return v___x_321_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__9(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_323_ = ((lean_object*)(l_Lake_compileLeanModule___closed__8));
v___x_324_ = lean_unsigned_to_nat(2u);
v___x_325_ = lean_mk_empty_array_with_capacity(v___x_324_);
v___x_326_ = lean_array_push(v___x_325_, v___x_323_);
return v___x_326_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__11(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_328_ = ((lean_object*)(l_Lake_compileLeanModule___closed__10));
v___x_329_ = lean_unsigned_to_nat(2u);
v___x_330_ = lean_mk_empty_array_with_capacity(v___x_329_);
v___x_331_ = lean_array_push(v___x_330_, v___x_328_);
return v___x_331_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__13(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_333_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_334_ = lean_unsigned_to_nat(2u);
v___x_335_ = lean_mk_empty_array_with_capacity(v___x_334_);
v___x_336_ = lean_array_push(v___x_335_, v___x_333_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule(lean_object* v_leanFile_337_, lean_object* v_relLeanFile_338_, lean_object* v_setup_339_, lean_object* v_setupFile_340_, lean_object* v_arts_341_, lean_object* v_leanArgs_342_, lean_object* v_leanPath_343_, lean_object* v_lean_344_, lean_object* v_a_345_){
_start:
{
lean_object* v___y_348_; lean_object* v_a_349_; lean_object* v___y_352_; lean_object* v___y_353_; lean_object* v_args_356_; lean_object* v___y_357_; lean_object* v_olean_x3f_447_; lean_object* v_ilean_x3f_448_; lean_object* v_c_x3f_449_; lean_object* v_bc_x3f_450_; lean_object* v_args_452_; lean_object* v___y_453_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v_args_482_; lean_object* v___y_483_; lean_object* v_args_490_; lean_object* v___y_491_; lean_object* v_args_504_; 
v_olean_x3f_447_ = lean_ctor_get(v_arts_341_, 1);
lean_inc(v_olean_x3f_447_);
v_ilean_x3f_448_ = lean_ctor_get(v_arts_341_, 4);
lean_inc(v_ilean_x3f_448_);
v_c_x3f_449_ = lean_ctor_get(v_arts_341_, 7);
lean_inc(v_c_x3f_449_);
v_bc_x3f_450_ = lean_ctor_get(v_arts_341_, 8);
lean_inc(v_bc_x3f_450_);
lean_dec_ref(v_arts_341_);
v_args_504_ = lean_array_push(v_leanArgs_342_, v_leanFile_337_);
if (lean_obj_tag(v_olean_x3f_447_) == 1)
{
lean_object* v_val_505_; lean_object* v___x_506_; 
v_val_505_ = lean_ctor_get(v_olean_x3f_447_, 0);
lean_inc_n(v_val_505_, 2);
lean_dec_ref_known(v_olean_x3f_447_, 1);
v___x_506_ = l_Lake_createParentDirs(v_val_505_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
lean_dec_ref_known(v___x_506_, 1);
v___x_507_ = lean_obj_once(&l_Lake_compileLeanModule___closed__13, &l_Lake_compileLeanModule___closed__13_once, _init_l_Lake_compileLeanModule___closed__13);
v___x_508_ = lean_array_push(v___x_507_, v_val_505_);
v___x_509_ = l_Array_append___redArg(v_args_504_, v___x_508_);
lean_dec_ref(v___x_508_);
v_args_490_ = v___x_509_;
v___y_491_ = v_a_345_;
goto v___jp_489_;
}
else
{
lean_object* v_a_510_; lean_object* v___x_511_; uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
lean_dec(v_val_505_);
lean_dec_ref(v_args_504_);
lean_dec(v_bc_x3f_450_);
lean_dec(v_c_x3f_449_);
lean_dec(v_ilean_x3f_448_);
lean_dec_ref(v_lean_344_);
lean_dec(v_leanPath_343_);
lean_dec_ref(v_setupFile_340_);
lean_dec_ref(v_setup_339_);
lean_dec_ref(v_relLeanFile_338_);
v_a_510_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_510_);
lean_dec_ref_known(v___x_506_, 1);
v___x_511_ = lean_io_error_to_string(v_a_510_);
v___x_512_ = 3;
v___x_513_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_513_, 0, v___x_511_);
lean_ctor_set_uint8(v___x_513_, sizeof(void*)*1, v___x_512_);
v___x_514_ = lean_array_get_size(v_a_345_);
v___x_515_ = lean_array_push(v_a_345_, v___x_513_);
v___x_516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
return v___x_516_;
}
}
else
{
lean_dec(v_olean_x3f_447_);
v_args_490_ = v_args_504_;
v___y_491_ = v_a_345_;
goto v___jp_489_;
}
v___jp_347_:
{
lean_object* v___x_350_; 
v___x_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_350_, 0, v___y_348_);
lean_ctor_set(v___x_350_, 1, v_a_349_);
return v___x_350_;
}
v___jp_351_:
{
if (lean_obj_tag(v___y_353_) == 0)
{
lean_dec(v___y_352_);
return v___y_353_;
}
else
{
lean_object* v_a_354_; 
v_a_354_ = lean_ctor_get(v___y_353_, 1);
lean_inc(v_a_354_);
lean_dec_ref_known(v___y_353_, 2);
v___y_348_ = v___y_352_;
v_a_349_ = v_a_354_;
goto v___jp_347_;
}
}
v___jp_355_:
{
lean_object* v___x_358_; 
lean_inc_ref(v_setupFile_340_);
v___x_358_ = l_Lake_createParentDirs(v_setupFile_340_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec_ref_known(v___x_358_, 1);
v___x_359_ = l_Lean_instToJsonModuleSetup_toJson(v_setup_339_);
v___x_360_ = lean_unsigned_to_nat(80u);
v___x_361_ = l_Lean_Json_pretty(v___x_359_, v___x_360_);
v___x_362_ = l_IO_FS_writeFile(v_setupFile_340_, v___x_361_);
lean_dec_ref(v___x_361_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_431_; 
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v___x_362_, 0);
lean_dec(v_unused_432_);
v___x_364_ = v___x_362_;
v_isShared_365_ = v_isSharedCheck_431_;
goto v_resetjp_363_;
}
else
{
lean_dec(v___x_362_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_431_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_366_ = lean_obj_once(&l_Lake_compileLeanModule___closed__1, &l_Lake_compileLeanModule___closed__1_once, _init_l_Lake_compileLeanModule___closed__1);
v___x_367_ = lean_array_push(v___x_366_, v_setupFile_340_);
v___x_368_ = l_Array_append___redArg(v_args_356_, v___x_367_);
lean_dec_ref(v___x_367_);
v___x_369_ = ((lean_object*)(l_Lake_compileLeanModule___closed__2));
v___x_370_ = lean_array_push(v___x_368_, v___x_369_);
v___x_371_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_372_ = lean_box(0);
v___x_373_ = ((lean_object*)(l_Lake_compileLeanIR___closed__1));
v___x_374_ = l_System_SearchPath_toString(v_leanPath_343_);
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 1);
lean_ctor_set(v___x_364_, 0, v___x_374_);
v___x_376_ = v___x_364_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_374_);
v___x_376_ = v_reuseFailAlloc_430_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_373_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_mk_empty_array_with_capacity(v___x_378_);
v___x_380_ = lean_array_push(v___x_379_, v___x_377_);
v___x_381_ = 1;
v___x_382_ = 0;
lean_inc_ref(v_lean_344_);
v___x_383_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_383_, 0, v___x_371_);
lean_ctor_set(v___x_383_, 1, v_lean_344_);
lean_ctor_set(v___x_383_, 2, v___x_370_);
lean_ctor_set(v___x_383_, 3, v___x_372_);
lean_ctor_set(v___x_383_, 4, v___x_380_);
lean_ctor_set_uint8(v___x_383_, sizeof(void*)*5, v___x_381_);
lean_ctor_set_uint8(v___x_383_, sizeof(void*)*5 + 1, v___x_382_);
v___x_384_ = lean_array_get_size(v___y_357_);
lean_inc_ref(v___x_383_);
v___x_385_ = l_Lake_mkCmdLog(v___x_383_);
v___x_386_ = 0;
v___x_387_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_387_, 0, v___x_385_);
lean_ctor_set_uint8(v___x_387_, sizeof(void*)*1, v___x_386_);
v___x_388_ = lean_array_push(v___y_357_, v___x_387_);
v___x_389_ = l_IO_Process_output(v___x_383_, v___x_372_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; uint32_t v_exitCode_391_; lean_object* v_stdout_392_; lean_object* v_stderr_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___f_396_; lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
lean_dec_ref(v_lean_344_);
v_a_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_390_);
lean_dec_ref_known(v___x_389_, 1);
v_exitCode_391_ = lean_ctor_get_uint32(v_a_390_, sizeof(void*)*2);
v_stdout_392_ = lean_ctor_get(v_a_390_, 0);
lean_inc_ref(v_stdout_392_);
v_stderr_393_ = lean_ctor_get(v_a_390_, 1);
lean_inc_ref_n(v_stderr_393_, 2);
lean_dec(v_a_390_);
v___x_394_ = lean_array_get_size(v___x_388_);
v___x_395_ = lean_box_uint32(v_exitCode_391_);
v___f_396_ = lean_alloc_closure((void*)(l_Lake_compileLeanModule___lam__0___boxed), 6, 3);
lean_closure_set(v___f_396_, 0, v___x_395_);
lean_closure_set(v___f_396_, 1, v___x_394_);
lean_closure_set(v___f_396_, 2, v_stderr_393_);
v___x_397_ = lean_string_utf8_byte_size(v_stdout_392_);
v___x_398_ = lean_unsigned_to_nat(0u);
v___x_399_ = lean_nat_dec_eq(v___x_397_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_inc_ref(v_stdout_392_);
v___x_400_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_400_, 0, v_stdout_392_);
lean_ctor_set(v___x_400_, 1, v___x_398_);
lean_ctor_set(v___x_400_, 2, v___x_397_);
v___x_401_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_402_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__1___closed__0);
v___x_403_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(v_relLeanFile_338_, v_stdout_392_, v___x_400_, v___x_397_, v___x_402_, v___x_401_, v___x_388_);
lean_dec_ref_known(v___x_400_, 3);
lean_dec_ref(v_stdout_392_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v_a_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
v_a_405_ = lean_ctor_get(v___x_403_, 1);
lean_inc(v_a_405_);
lean_dec_ref_known(v___x_403_, 2);
v___x_406_ = lean_string_utf8_byte_size(v_a_404_);
v___x_407_ = lean_nat_dec_eq(v___x_406_, v___x_398_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
lean_dec_ref(v___f_396_);
v___x_408_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg___closed__1));
v___x_409_ = lean_string_append(v___x_408_, v_a_404_);
lean_dec(v_a_404_);
v___x_410_ = 1;
v___x_411_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_411_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_411_, sizeof(void*)*1, v___x_410_);
v___x_412_ = lean_box(0);
v___x_413_ = lean_array_push(v_a_405_, v___x_411_);
v___x_414_ = l_Lake_compileLeanModule___lam__0(v_exitCode_391_, v___x_394_, v_stderr_393_, v___x_412_, v___x_413_);
v___y_352_ = v___x_384_;
v___y_353_ = v___x_414_;
goto v___jp_351_;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; 
lean_dec(v_a_404_);
lean_dec_ref(v_stderr_393_);
v___x_415_ = lean_box(0);
v___x_416_ = l_Lake_compileLeanModule___lam__1(v___f_396_, v___x_415_, v_a_405_);
v___y_352_ = v___x_384_;
v___y_353_ = v___x_416_;
goto v___jp_351_;
}
}
else
{
lean_object* v_a_417_; 
lean_dec_ref(v___f_396_);
lean_dec_ref(v_stderr_393_);
v_a_417_ = lean_ctor_get(v___x_403_, 1);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_403_, 2);
v___y_348_ = v___x_384_;
v_a_349_ = v_a_417_;
goto v___jp_347_;
}
}
else
{
lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec_ref(v_stderr_393_);
lean_dec_ref(v_stdout_392_);
lean_dec_ref(v_relLeanFile_338_);
v___x_418_ = lean_box(0);
v___x_419_ = l_Lake_compileLeanModule___lam__1(v___f_396_, v___x_418_, v___x_388_);
v___y_352_ = v___x_384_;
v___y_353_ = v___x_419_;
goto v___jp_351_;
}
}
else
{
lean_object* v_a_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref(v_relLeanFile_338_);
v_a_420_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_389_, 1);
v___x_421_ = ((lean_object*)(l_Lake_compileLeanModule___closed__4));
v___x_422_ = lean_string_append(v___x_421_, v_lean_344_);
lean_dec_ref(v_lean_344_);
v___x_423_ = ((lean_object*)(l_Lake_compileLeanModule___closed__5));
v___x_424_ = lean_string_append(v___x_422_, v___x_423_);
v___x_425_ = lean_io_error_to_string(v_a_420_);
v___x_426_ = lean_string_append(v___x_424_, v___x_425_);
lean_dec_ref(v___x_425_);
v___x_427_ = 3;
v___x_428_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1, v___x_427_);
v___x_429_ = lean_array_push(v___x_388_, v___x_428_);
v___y_348_ = v___x_384_;
v_a_349_ = v___x_429_;
goto v___jp_347_;
}
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_434_; uint8_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec_ref(v_args_356_);
lean_dec_ref(v_lean_344_);
lean_dec(v_leanPath_343_);
lean_dec_ref(v_setupFile_340_);
lean_dec_ref(v_relLeanFile_338_);
v_a_433_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_433_);
lean_dec_ref_known(v___x_362_, 1);
v___x_434_ = lean_io_error_to_string(v_a_433_);
v___x_435_ = 3;
v___x_436_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_436_, 0, v___x_434_);
lean_ctor_set_uint8(v___x_436_, sizeof(void*)*1, v___x_435_);
v___x_437_ = lean_array_get_size(v___y_357_);
v___x_438_ = lean_array_push(v___y_357_, v___x_436_);
v___x_439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
return v___x_439_;
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_441_; uint8_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec_ref(v_args_356_);
lean_dec_ref(v_lean_344_);
lean_dec(v_leanPath_343_);
lean_dec_ref(v_setupFile_340_);
lean_dec_ref(v_setup_339_);
lean_dec_ref(v_relLeanFile_338_);
v_a_440_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_358_, 1);
v___x_441_ = lean_io_error_to_string(v_a_440_);
v___x_442_ = 3;
v___x_443_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set_uint8(v___x_443_, sizeof(void*)*1, v___x_442_);
v___x_444_ = lean_array_get_size(v___y_357_);
v___x_445_ = lean_array_push(v___y_357_, v___x_443_);
v___x_446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
return v___x_446_;
}
}
v___jp_451_:
{
if (lean_obj_tag(v_bc_x3f_450_) == 1)
{
lean_object* v_val_454_; lean_object* v___x_455_; 
v_val_454_ = lean_ctor_get(v_bc_x3f_450_, 0);
lean_inc_n(v_val_454_, 2);
lean_dec_ref_known(v_bc_x3f_450_, 1);
v___x_455_ = l_Lake_createParentDirs(v_val_454_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec_ref_known(v___x_455_, 1);
v___x_456_ = lean_obj_once(&l_Lake_compileLeanModule___closed__7, &l_Lake_compileLeanModule___closed__7_once, _init_l_Lake_compileLeanModule___closed__7);
v___x_457_ = lean_array_push(v___x_456_, v_val_454_);
v___x_458_ = l_Array_append___redArg(v_args_452_, v___x_457_);
lean_dec_ref(v___x_457_);
v_args_356_ = v___x_458_;
v___y_357_ = v___y_453_;
goto v___jp_355_;
}
else
{
lean_object* v_a_459_; lean_object* v___x_460_; uint8_t v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec(v_val_454_);
lean_dec_ref(v_args_452_);
lean_dec_ref(v_lean_344_);
lean_dec(v_leanPath_343_);
lean_dec_ref(v_setupFile_340_);
lean_dec_ref(v_setup_339_);
lean_dec_ref(v_relLeanFile_338_);
v_a_459_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_455_, 1);
v___x_460_ = lean_io_error_to_string(v_a_459_);
v___x_461_ = 3;
v___x_462_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_462_, 0, v___x_460_);
lean_ctor_set_uint8(v___x_462_, sizeof(void*)*1, v___x_461_);
v___x_463_ = lean_array_get_size(v___y_453_);
v___x_464_ = lean_array_push(v___y_453_, v___x_462_);
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
return v___x_465_;
}
}
else
{
lean_dec(v_bc_x3f_450_);
v_args_356_ = v_args_452_;
v___y_357_ = v___y_453_;
goto v___jp_355_;
}
}
v___jp_466_:
{
if (lean_obj_tag(v_c_x3f_449_) == 1)
{
lean_object* v_val_469_; lean_object* v___x_470_; 
v_val_469_ = lean_ctor_get(v_c_x3f_449_, 0);
lean_inc_n(v_val_469_, 2);
lean_dec_ref_known(v_c_x3f_449_, 1);
v___x_470_ = l_Lake_createParentDirs(v_val_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec_ref_known(v___x_470_, 1);
v___x_471_ = lean_obj_once(&l_Lake_compileLeanModule___closed__9, &l_Lake_compileLeanModule___closed__9_once, _init_l_Lake_compileLeanModule___closed__9);
v___x_472_ = lean_array_push(v___x_471_, v_val_469_);
v___x_473_ = l_Array_append___redArg(v___y_467_, v___x_472_);
lean_dec_ref(v___x_472_);
v_args_452_ = v___x_473_;
v___y_453_ = v___y_468_;
goto v___jp_451_;
}
else
{
lean_object* v_a_474_; lean_object* v___x_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec(v_val_469_);
lean_dec_ref(v___y_467_);
lean_dec(v_bc_x3f_450_);
lean_dec_ref(v_lean_344_);
lean_dec(v_leanPath_343_);
lean_dec_ref(v_setupFile_340_);
lean_dec_ref(v_setup_339_);
lean_dec_ref(v_relLeanFile_338_);
v_a_474_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_474_);
lean_dec_ref_known(v___x_470_, 1);
v___x_475_ = lean_io_error_to_string(v_a_474_);
v___x_476_ = 3;
v___x_477_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set_uint8(v___x_477_, sizeof(void*)*1, v___x_476_);
v___x_478_ = lean_array_get_size(v___y_468_);
v___x_479_ = lean_array_push(v___y_468_, v___x_477_);
v___x_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
return v___x_480_;
}
}
else
{
lean_dec(v_c_x3f_449_);
v_args_452_ = v___y_467_;
v___y_453_ = v___y_468_;
goto v___jp_451_;
}
}
v___jp_481_:
{
uint8_t v_isModule_484_; 
v_isModule_484_ = lean_ctor_get_uint8(v_setup_339_, sizeof(void*)*7);
if (v_isModule_484_ == 0)
{
v___y_467_ = v_args_482_;
v___y_468_ = v___y_483_;
goto v___jp_466_;
}
else
{
lean_object* v_options_485_; lean_object* v_opts_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_options_485_ = lean_ctor_get(v_setup_339_, 6);
lean_inc(v_options_485_);
v_opts_486_ = l_Lean_LeanOptions_toOptions(v_options_485_);
v___x_487_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_488_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__3(v_opts_486_, v___x_487_);
lean_dec_ref(v_opts_486_);
if (v___x_488_ == 0)
{
v___y_467_ = v_args_482_;
v___y_468_ = v___y_483_;
goto v___jp_466_;
}
else
{
lean_dec(v_c_x3f_449_);
v_args_452_ = v_args_482_;
v___y_453_ = v___y_483_;
goto v___jp_451_;
}
}
}
v___jp_489_:
{
if (lean_obj_tag(v_ilean_x3f_448_) == 1)
{
lean_object* v_val_492_; lean_object* v___x_493_; 
v_val_492_ = lean_ctor_get(v_ilean_x3f_448_, 0);
lean_inc_n(v_val_492_, 2);
lean_dec_ref_known(v_ilean_x3f_448_, 1);
v___x_493_ = l_Lake_createParentDirs(v_val_492_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec_ref_known(v___x_493_, 1);
v___x_494_ = lean_obj_once(&l_Lake_compileLeanModule___closed__11, &l_Lake_compileLeanModule___closed__11_once, _init_l_Lake_compileLeanModule___closed__11);
v___x_495_ = lean_array_push(v___x_494_, v_val_492_);
v___x_496_ = l_Array_append___redArg(v_args_490_, v___x_495_);
lean_dec_ref(v___x_495_);
v_args_482_ = v___x_496_;
v___y_483_ = v___y_491_;
goto v___jp_481_;
}
else
{
lean_object* v_a_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec(v_val_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_bc_x3f_450_);
lean_dec(v_c_x3f_449_);
lean_dec_ref(v_lean_344_);
lean_dec(v_leanPath_343_);
lean_dec_ref(v_setupFile_340_);
lean_dec_ref(v_setup_339_);
lean_dec_ref(v_relLeanFile_338_);
v_a_497_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_a_497_);
lean_dec_ref_known(v___x_493_, 1);
v___x_498_ = lean_io_error_to_string(v_a_497_);
v___x_499_ = 3;
v___x_500_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = lean_array_get_size(v___y_491_);
v___x_502_ = lean_array_push(v___y_491_, v___x_500_);
v___x_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
return v___x_503_;
}
}
else
{
lean_dec(v_ilean_x3f_448_);
v_args_482_ = v_args_490_;
v___y_483_ = v___y_491_;
goto v___jp_481_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___boxed(lean_object* v_leanFile_517_, lean_object* v_relLeanFile_518_, lean_object* v_setup_519_, lean_object* v_setupFile_520_, lean_object* v_arts_521_, lean_object* v_leanArgs_522_, lean_object* v_leanPath_523_, lean_object* v_lean_524_, lean_object* v_a_525_, lean_object* v_a_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lake_compileLeanModule(v_leanFile_517_, v_relLeanFile_518_, v_setup_519_, v_setupFile_520_, v_arts_521_, v_leanArgs_522_, v_leanPath_523_, v_lean_524_, v_a_525_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2(lean_object* v_relLeanFile_528_, lean_object* v___x_529_, lean_object* v___x_530_, lean_object* v___x_531_, lean_object* v_inst_532_, lean_object* v_R_533_, lean_object* v_a_534_, lean_object* v_b_535_, lean_object* v_c_536_, lean_object* v___y_537_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___redArg(v_relLeanFile_528_, v___x_529_, v___x_530_, v___x_531_, v_a_534_, v_b_535_, v___y_537_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2___boxed(lean_object* v_relLeanFile_540_, lean_object* v___x_541_, lean_object* v___x_542_, lean_object* v___x_543_, lean_object* v_inst_544_, lean_object* v_R_545_, lean_object* v_a_546_, lean_object* v_b_547_, lean_object* v_c_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__2(v_relLeanFile_540_, v___x_541_, v___x_542_, v___x_543_, v_inst_544_, v_R_545_, v_a_546_, v_b_547_, v_c_548_, v___y_549_);
lean_dec_ref(v___x_542_);
lean_dec_ref(v___x_541_);
return v_res_551_;
}
}
static lean_object* _init_l_Lake_compileO___closed__0(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_552_ = ((lean_object*)(l_Lake_compileLeanModule___closed__8));
v___x_553_ = lean_unsigned_to_nat(4u);
v___x_554_ = lean_mk_empty_array_with_capacity(v___x_553_);
v___x_555_ = lean_array_push(v___x_554_, v___x_552_);
return v___x_555_;
}
}
static lean_object* _init_l_Lake_compileO___closed__1(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_557_ = lean_obj_once(&l_Lake_compileO___closed__0, &l_Lake_compileO___closed__0_once, _init_l_Lake_compileO___closed__0);
v___x_558_ = lean_array_push(v___x_557_, v___x_556_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileO(lean_object* v_oFile_561_, lean_object* v_srcFile_562_, lean_object* v_moreArgs_563_, lean_object* v_compiler_564_, lean_object* v_a_565_){
_start:
{
lean_object* v___x_567_; 
lean_inc_ref(v_oFile_561_);
v___x_567_ = l_Lake_createParentDirs(v_oFile_561_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
lean_dec_ref_known(v___x_567_, 1);
v___x_568_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_569_ = lean_obj_once(&l_Lake_compileO___closed__1, &l_Lake_compileO___closed__1_once, _init_l_Lake_compileO___closed__1);
v___x_570_ = lean_array_push(v___x_569_, v_oFile_561_);
v___x_571_ = lean_array_push(v___x_570_, v_srcFile_562_);
v___x_572_ = l_Array_append___redArg(v___x_571_, v_moreArgs_563_);
v___x_573_ = lean_box(0);
v___x_574_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_575_ = 1;
v___x_576_ = 0;
v___x_577_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_577_, 0, v___x_568_);
lean_ctor_set(v___x_577_, 1, v_compiler_564_);
lean_ctor_set(v___x_577_, 2, v___x_572_);
lean_ctor_set(v___x_577_, 3, v___x_573_);
lean_ctor_set(v___x_577_, 4, v___x_574_);
lean_ctor_set_uint8(v___x_577_, sizeof(void*)*5, v___x_575_);
lean_ctor_set_uint8(v___x_577_, sizeof(void*)*5 + 1, v___x_576_);
v___x_578_ = l_Lake_proc(v___x_577_, v___x_576_, v___x_573_, v_a_565_);
return v___x_578_;
}
else
{
lean_object* v_a_579_; lean_object* v___x_580_; uint8_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
lean_dec_ref(v_compiler_564_);
lean_dec_ref(v_srcFile_562_);
lean_dec_ref(v_oFile_561_);
v_a_579_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_567_, 1);
v___x_580_ = lean_io_error_to_string(v_a_579_);
v___x_581_ = 3;
v___x_582_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_582_, 0, v___x_580_);
lean_ctor_set_uint8(v___x_582_, sizeof(void*)*1, v___x_581_);
v___x_583_ = lean_array_get_size(v_a_565_);
v___x_584_ = lean_array_push(v_a_565_, v___x_582_);
v___x_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileO___boxed(lean_object* v_oFile_586_, lean_object* v_srcFile_587_, lean_object* v_moreArgs_588_, lean_object* v_compiler_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lake_compileO(v_oFile_586_, v_srcFile_587_, v_moreArgs_588_, v_compiler_589_, v_a_590_);
lean_dec_ref(v_moreArgs_588_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(lean_object* v___x_593_, lean_object* v___y_594_, lean_object* v_a_595_, lean_object* v_b_596_){
_start:
{
uint8_t v_decide_597_; 
v_decide_597_ = lean_nat_dec_eq(v_a_595_, v___x_593_);
if (v_decide_597_ == 0)
{
uint32_t v___x_598_; lean_object* v___x_599_; uint32_t v___x_605_; uint8_t v___x_606_; 
v___x_598_ = lean_string_utf8_get_fast(v___y_594_, v_a_595_);
v___x_599_ = lean_string_utf8_next_fast(v___y_594_, v_a_595_);
lean_dec(v_a_595_);
v___x_605_ = 92;
v___x_606_ = lean_uint32_dec_eq(v___x_598_, v___x_605_);
if (v___x_606_ == 0)
{
uint32_t v___x_607_; uint8_t v___x_608_; 
v___x_607_ = 34;
v___x_608_ = lean_uint32_dec_eq(v___x_598_, v___x_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; 
v___x_609_ = lean_string_push(v_b_596_, v___x_598_);
v_a_595_ = v___x_599_;
v_b_596_ = v___x_609_;
goto _start;
}
else
{
goto v___jp_600_;
}
}
else
{
goto v___jp_600_;
}
v___jp_600_:
{
uint32_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_601_ = 92;
v___x_602_ = lean_string_push(v_b_596_, v___x_601_);
v___x_603_ = lean_string_push(v___x_602_, v___x_598_);
v_a_595_ = v___x_599_;
v_b_596_ = v___x_603_;
goto _start;
}
}
else
{
lean_dec(v_a_595_);
return v_b_596_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg___boxed(lean_object* v___x_611_, lean_object* v___y_612_, lean_object* v_a_613_, lean_object* v_b_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_611_, v___y_612_, v_a_613_, v_b_614_);
lean_dec_ref(v___y_612_);
lean_dec(v___x_611_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(lean_object* v_a_618_, lean_object* v_as_619_, size_t v_i_620_, size_t v_stop_621_, lean_object* v_b_622_, lean_object* v___y_623_){
_start:
{
uint8_t v___x_625_; 
v___x_625_ = lean_usize_dec_eq(v_i_620_, v_stop_621_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_626_ = lean_array_uget_borrowed(v_as_619_, v_i_620_);
v___x_627_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_628_ = lean_string_utf8_byte_size(v___x_626_);
v___x_629_ = lean_unsigned_to_nat(0u);
v___x_630_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_628_, v___x_626_, v___x_629_, v___x_627_);
v___x_631_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0));
v___x_632_ = lean_string_append(v___x_631_, v___x_630_);
lean_dec_ref(v___x_630_);
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1));
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
v___x_635_ = lean_io_prim_handle_put_str(v_a_618_, v___x_634_);
lean_dec_ref(v___x_634_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; size_t v___x_637_; size_t v___x_638_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
v___x_637_ = ((size_t)1ULL);
v___x_638_ = lean_usize_add(v_i_620_, v___x_637_);
v_i_620_ = v___x_638_;
v_b_622_ = v_a_636_;
goto _start;
}
else
{
lean_object* v_a_640_; lean_object* v___x_641_; uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_a_640_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_635_, 1);
v___x_641_ = lean_io_error_to_string(v_a_640_);
v___x_642_ = 3;
v___x_643_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set_uint8(v___x_643_, sizeof(void*)*1, v___x_642_);
v___x_644_ = lean_array_get_size(v___y_623_);
v___x_645_ = lean_array_push(v___y_623_, v___x_643_);
v___x_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
return v___x_646_;
}
}
else
{
lean_object* v___x_647_; 
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v_b_622_);
lean_ctor_set(v___x_647_, 1, v___y_623_);
return v___x_647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___boxed(lean_object* v_a_648_, lean_object* v_as_649_, lean_object* v_i_650_, lean_object* v_stop_651_, lean_object* v_b_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
size_t v_i_boxed_655_; size_t v_stop_boxed_656_; lean_object* v_res_657_; 
v_i_boxed_655_ = lean_unbox_usize(v_i_650_);
lean_dec(v_i_650_);
v_stop_boxed_656_ = lean_unbox_usize(v_stop_651_);
lean_dec(v_stop_651_);
v_res_657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_648_, v_as_649_, v_i_boxed_655_, v_stop_boxed_656_, v_b_652_, v___y_653_);
lean_dec_ref(v_as_649_);
lean_dec(v_a_648_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs(lean_object* v_basePath_660_, lean_object* v_args_661_, lean_object* v_a_662_){
_start:
{
lean_object* v___x_664_; lean_object* v_rspFile_665_; lean_object* v_a_667_; uint8_t v___x_674_; lean_object* v___x_675_; 
v___x_664_ = ((lean_object*)(l_Lake_mkArgs___closed__0));
v_rspFile_665_ = l_System_FilePath_addExtension(v_basePath_660_, v___x_664_);
v___x_674_ = 1;
v___x_675_ = lean_io_prim_handle_mk(v_rspFile_665_, v___x_674_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v_a_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc(v_a_676_);
lean_dec_ref_known(v___x_675_, 1);
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = lean_array_get_size(v_args_661_);
v___x_679_ = lean_nat_dec_lt(v___x_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_dec(v_a_676_);
v_a_667_ = v_a_662_;
goto v___jp_666_;
}
else
{
lean_object* v___x_680_; size_t v___x_681_; size_t v___x_682_; lean_object* v___x_683_; 
v___x_680_ = lean_box(0);
v___x_681_ = ((size_t)0ULL);
v___x_682_ = lean_usize_of_nat(v___x_678_);
v___x_683_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_676_, v_args_661_, v___x_681_, v___x_682_, v___x_680_, v_a_662_);
lean_dec(v_a_676_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; 
v_a_684_ = lean_ctor_get(v___x_683_, 1);
lean_inc(v_a_684_);
lean_dec_ref_known(v___x_683_, 2);
v_a_667_ = v_a_684_;
goto v___jp_666_;
}
else
{
lean_object* v_a_685_; lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v_rspFile_665_);
v_a_685_ = lean_ctor_get(v___x_683_, 0);
v_a_686_ = lean_ctor_get(v___x_683_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_683_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_inc(v_a_685_);
lean_dec(v___x_683_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_685_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_695_; uint8_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
lean_dec_ref(v_rspFile_665_);
v_a_694_ = lean_ctor_get(v___x_675_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v___x_675_, 1);
v___x_695_ = lean_io_error_to_string(v_a_694_);
v___x_696_ = 3;
v___x_697_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set_uint8(v___x_697_, sizeof(void*)*1, v___x_696_);
v___x_698_ = lean_array_get_size(v_a_662_);
v___x_699_ = lean_array_push(v_a_662_, v___x_697_);
v___x_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
return v___x_700_;
}
v___jp_666_:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_668_ = ((lean_object*)(l_Lake_mkArgs___closed__1));
v___x_669_ = lean_string_append(v___x_668_, v_rspFile_665_);
lean_dec_ref(v_rspFile_665_);
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_mk_empty_array_with_capacity(v___x_670_);
v___x_672_ = lean_array_push(v___x_671_, v___x_669_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v_a_667_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs___boxed(lean_object* v_basePath_701_, lean_object* v_args_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lake_mkArgs(v_basePath_701_, v_args_702_, v_a_703_);
lean_dec_ref(v_args_702_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(lean_object* v___x_706_, lean_object* v___x_707_, lean_object* v___y_708_, lean_object* v_inst_709_, lean_object* v_R_710_, lean_object* v_a_711_, lean_object* v_b_712_, lean_object* v_c_713_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_707_, v___y_708_, v_a_711_, v_b_712_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___boxed(lean_object* v___x_715_, lean_object* v___x_716_, lean_object* v___y_717_, lean_object* v_inst_718_, lean_object* v_R_719_, lean_object* v_a_720_, lean_object* v_b_721_, lean_object* v_c_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(v___x_715_, v___x_716_, v___y_717_, v_inst_718_, v_R_719_, v_a_720_, v_b_721_, v_c_722_);
lean_dec_ref(v___y_717_);
lean_dec(v___x_716_);
lean_dec_ref(v___x_715_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(size_t v_sz_724_, size_t v_i_725_, lean_object* v_bs_726_){
_start:
{
uint8_t v___x_727_; 
v___x_727_ = lean_usize_dec_lt(v_i_725_, v_sz_724_);
if (v___x_727_ == 0)
{
return v_bs_726_;
}
else
{
lean_object* v_v_728_; lean_object* v___x_729_; lean_object* v_bs_x27_730_; size_t v___x_731_; size_t v___x_732_; lean_object* v___x_733_; 
v_v_728_ = lean_array_uget(v_bs_726_, v_i_725_);
v___x_729_ = lean_unsigned_to_nat(0u);
v_bs_x27_730_ = lean_array_uset(v_bs_726_, v_i_725_, v___x_729_);
v___x_731_ = ((size_t)1ULL);
v___x_732_ = lean_usize_add(v_i_725_, v___x_731_);
v___x_733_ = lean_array_uset(v_bs_x27_730_, v_i_725_, v_v_728_);
v_i_725_ = v___x_732_;
v_bs_726_ = v___x_733_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0___boxed(lean_object* v_sz_735_, lean_object* v_i_736_, lean_object* v_bs_737_){
_start:
{
size_t v_sz_boxed_738_; size_t v_i_boxed_739_; lean_object* v_res_740_; 
v_sz_boxed_738_ = lean_unbox_usize(v_sz_735_);
lean_dec(v_sz_735_);
v_i_boxed_739_ = lean_unbox_usize(v_i_736_);
lean_dec(v_i_736_);
v_res_740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_boxed_738_, v_i_boxed_739_, v_bs_737_);
return v_res_740_;
}
}
static lean_object* _init_l_Lake_compileStaticLib___closed__3(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = ((lean_object*)(l_Lake_compileStaticLib___closed__2));
v___x_748_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_749_ = lean_array_push(v___x_748_, v___x_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib(lean_object* v_libFile_750_, lean_object* v_oFiles_751_, lean_object* v_ar_752_, uint8_t v_thin_753_, lean_object* v_a_754_){
_start:
{
lean_object* v___x_756_; 
lean_inc_ref(v_libFile_750_);
v___x_756_ = l_Lake_createParentDirs(v_libFile_750_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v___x_757_; 
lean_dec_ref_known(v___x_756_, 1);
v___x_757_ = l_Lake_removeFileIfExists(v_libFile_750_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v___x_758_; uint8_t v___x_759_; lean_object* v___y_761_; 
lean_dec_ref_known(v___x_757_, 1);
v___x_758_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_759_ = 1;
if (v_thin_753_ == 0)
{
v___y_761_ = v___x_758_;
goto v___jp_760_;
}
else
{
lean_object* v___x_785_; 
v___x_785_ = lean_obj_once(&l_Lake_compileStaticLib___closed__3, &l_Lake_compileStaticLib___closed__3_once, _init_l_Lake_compileStaticLib___closed__3);
v___y_761_ = v___x_785_;
goto v___jp_760_;
}
v___jp_760_:
{
size_t v_sz_762_; size_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v_sz_762_ = lean_array_size(v_oFiles_751_);
v___x_763_ = ((size_t)0ULL);
v___x_764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_762_, v___x_763_, v_oFiles_751_);
lean_inc_ref(v_libFile_750_);
v___x_765_ = l_Lake_mkArgs(v_libFile_750_, v___x_764_, v_a_754_);
lean_dec_ref(v___x_764_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
v_a_767_ = lean_ctor_get(v___x_765_, 1);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_765_, 2);
lean_inc_ref(v___y_761_);
v___x_768_ = lean_array_push(v___y_761_, v_libFile_750_);
v___x_769_ = l_Array_append___redArg(v___x_768_, v_a_766_);
lean_dec(v_a_766_);
v___x_770_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_771_ = lean_box(0);
v___x_772_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_773_ = 0;
v___x_774_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_774_, 0, v___x_770_);
lean_ctor_set(v___x_774_, 1, v_ar_752_);
lean_ctor_set(v___x_774_, 2, v___x_769_);
lean_ctor_set(v___x_774_, 3, v___x_771_);
lean_ctor_set(v___x_774_, 4, v___x_772_);
lean_ctor_set_uint8(v___x_774_, sizeof(void*)*5, v___x_759_);
lean_ctor_set_uint8(v___x_774_, sizeof(void*)*5 + 1, v___x_773_);
v___x_775_ = l_Lake_proc(v___x_774_, v___x_773_, v___x_771_, v_a_767_);
return v___x_775_;
}
else
{
lean_object* v_a_776_; lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec_ref(v_ar_752_);
lean_dec_ref(v_libFile_750_);
v_a_776_ = lean_ctor_get(v___x_765_, 0);
v_a_777_ = lean_ctor_get(v___x_765_, 1);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_765_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_inc(v_a_776_);
lean_dec(v___x_765_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_776_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_787_; uint8_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
lean_dec_ref(v_ar_752_);
lean_dec_ref(v_oFiles_751_);
lean_dec_ref(v_libFile_750_);
v_a_786_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_786_);
lean_dec_ref_known(v___x_757_, 1);
v___x_787_ = lean_io_error_to_string(v_a_786_);
v___x_788_ = 3;
v___x_789_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_789_, 0, v___x_787_);
lean_ctor_set_uint8(v___x_789_, sizeof(void*)*1, v___x_788_);
v___x_790_ = lean_array_get_size(v_a_754_);
v___x_791_ = lean_array_push(v_a_754_, v___x_789_);
v___x_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_792_, 0, v___x_790_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
return v___x_792_;
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_794_; uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_dec_ref(v_ar_752_);
lean_dec_ref(v_oFiles_751_);
lean_dec_ref(v_libFile_750_);
v_a_793_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_756_, 1);
v___x_794_ = lean_io_error_to_string(v_a_793_);
v___x_795_ = 3;
v___x_796_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_796_, 0, v___x_794_);
lean_ctor_set_uint8(v___x_796_, sizeof(void*)*1, v___x_795_);
v___x_797_ = lean_array_get_size(v_a_754_);
v___x_798_ = lean_array_push(v_a_754_, v___x_796_);
v___x_799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib___boxed(lean_object* v_libFile_800_, lean_object* v_oFiles_801_, lean_object* v_ar_802_, lean_object* v_thin_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
uint8_t v_thin_boxed_806_; lean_object* v_res_807_; 
v_thin_boxed_806_ = lean_unbox(v_thin_803_);
v_res_807_ = l_Lake_compileStaticLib(v_libFile_800_, v_oFiles_801_, v_ar_802_, v_thin_boxed_806_, v_a_804_);
return v_res_807_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__1(void){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_809_ = ((lean_object*)(l_Lake_compileSharedLib___closed__0));
v___x_810_ = lean_unsigned_to_nat(3u);
v___x_811_ = lean_mk_empty_array_with_capacity(v___x_810_);
v___x_812_ = lean_array_push(v___x_811_, v___x_809_);
return v___x_812_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__2(void){
_start:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_814_ = lean_obj_once(&l_Lake_compileSharedLib___closed__1, &l_Lake_compileSharedLib___closed__1_once, _init_l_Lake_compileSharedLib___closed__1);
v___x_815_ = lean_array_push(v___x_814_, v___x_813_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib(lean_object* v_libFile_817_, lean_object* v_linkArgs_818_, lean_object* v_linker_819_, lean_object* v_macosxDeploymentTarget_x3f_820_, lean_object* v_a_821_){
_start:
{
lean_object* v___x_823_; 
lean_inc_ref(v_libFile_817_);
v___x_823_ = l_Lake_createParentDirs(v_libFile_817_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v___x_824_; 
lean_dec_ref_known(v___x_823_, 1);
lean_inc_ref(v_libFile_817_);
v___x_824_ = l_Lake_mkArgs(v_libFile_817_, v_linkArgs_818_, v_a_821_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___y_833_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
v_a_826_ = lean_ctor_get(v___x_824_, 1);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_824_, 2);
v___x_827_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_828_ = lean_obj_once(&l_Lake_compileSharedLib___closed__2, &l_Lake_compileSharedLib___closed__2_once, _init_l_Lake_compileSharedLib___closed__2);
v___x_829_ = lean_array_push(v___x_828_, v_libFile_817_);
v___x_830_ = l_Array_append___redArg(v___x_829_, v_a_825_);
lean_dec(v_a_825_);
v___x_831_ = lean_box(0);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_820_) == 0)
{
lean_object* v___x_838_; 
v___x_838_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_833_ = v___x_838_;
goto v___jp_832_;
}
else
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_839_ = ((lean_object*)(l_Lake_compileSharedLib___closed__3));
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v_macosxDeploymentTarget_x3f_820_);
v___x_841_ = lean_unsigned_to_nat(1u);
v___x_842_ = lean_mk_empty_array_with_capacity(v___x_841_);
v___x_843_ = lean_array_push(v___x_842_, v___x_840_);
v___y_833_ = v___x_843_;
goto v___jp_832_;
}
v___jp_832_:
{
uint8_t v___x_834_; uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_834_ = 1;
v___x_835_ = 0;
v___x_836_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_836_, 0, v___x_827_);
lean_ctor_set(v___x_836_, 1, v_linker_819_);
lean_ctor_set(v___x_836_, 2, v___x_830_);
lean_ctor_set(v___x_836_, 3, v___x_831_);
lean_ctor_set(v___x_836_, 4, v___y_833_);
lean_ctor_set_uint8(v___x_836_, sizeof(void*)*5, v___x_834_);
lean_ctor_set_uint8(v___x_836_, sizeof(void*)*5 + 1, v___x_835_);
v___x_837_ = l_Lake_proc(v___x_836_, v___x_835_, v___x_831_, v_a_826_);
return v___x_837_;
}
}
else
{
lean_object* v_a_844_; lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v_macosxDeploymentTarget_x3f_820_);
lean_dec_ref(v_linker_819_);
lean_dec_ref(v_libFile_817_);
v_a_844_ = lean_ctor_get(v___x_824_, 0);
v_a_845_ = lean_ctor_get(v___x_824_, 1);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_824_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_inc(v_a_844_);
lean_dec(v___x_824_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_844_);
lean_ctor_set(v_reuseFailAlloc_851_, 1, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_854_; uint8_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
lean_dec(v_macosxDeploymentTarget_x3f_820_);
lean_dec_ref(v_linker_819_);
lean_dec_ref(v_libFile_817_);
v_a_853_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_823_, 1);
v___x_854_ = lean_io_error_to_string(v_a_853_);
v___x_855_ = 3;
v___x_856_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set_uint8(v___x_856_, sizeof(void*)*1, v___x_855_);
v___x_857_ = lean_array_get_size(v_a_821_);
v___x_858_ = lean_array_push(v_a_821_, v___x_856_);
v___x_859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_857_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
return v___x_859_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib___boxed(lean_object* v_libFile_860_, lean_object* v_linkArgs_861_, lean_object* v_linker_862_, lean_object* v_macosxDeploymentTarget_x3f_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lake_compileSharedLib(v_libFile_860_, v_linkArgs_861_, v_linker_862_, v_macosxDeploymentTarget_x3f_863_, v_a_864_);
lean_dec_ref(v_linkArgs_861_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe(lean_object* v_binFile_867_, lean_object* v_linkArgs_868_, lean_object* v_linker_869_, lean_object* v_macosxDeploymentTarget_x3f_870_, lean_object* v_a_871_){
_start:
{
lean_object* v___x_873_; 
lean_inc_ref(v_binFile_867_);
v___x_873_ = l_Lake_createParentDirs(v_binFile_867_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v___x_874_; 
lean_dec_ref_known(v___x_873_, 1);
lean_inc_ref(v_binFile_867_);
v___x_874_ = l_Lake_mkArgs(v_binFile_867_, v_linkArgs_868_, v_a_871_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v_a_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___y_885_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
v_a_876_ = lean_ctor_get(v___x_874_, 1);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_874_, 2);
v___x_877_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_878_ = lean_unsigned_to_nat(2u);
v___x_879_ = lean_mk_empty_array_with_capacity(v___x_878_);
lean_dec_ref(v___x_879_);
v___x_880_ = lean_obj_once(&l_Lake_compileLeanModule___closed__13, &l_Lake_compileLeanModule___closed__13_once, _init_l_Lake_compileLeanModule___closed__13);
v___x_881_ = lean_array_push(v___x_880_, v_binFile_867_);
v___x_882_ = l_Array_append___redArg(v___x_881_, v_a_875_);
lean_dec(v_a_875_);
v___x_883_ = lean_box(0);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_870_) == 0)
{
lean_object* v___x_890_; 
v___x_890_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_885_ = v___x_890_;
goto v___jp_884_;
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_891_ = ((lean_object*)(l_Lake_compileSharedLib___closed__3));
v___x_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
lean_ctor_set(v___x_892_, 1, v_macosxDeploymentTarget_x3f_870_);
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_mk_empty_array_with_capacity(v___x_893_);
v___x_895_ = lean_array_push(v___x_894_, v___x_892_);
v___y_885_ = v___x_895_;
goto v___jp_884_;
}
v___jp_884_:
{
uint8_t v___x_886_; uint8_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_886_ = 1;
v___x_887_ = 0;
v___x_888_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_888_, 0, v___x_877_);
lean_ctor_set(v___x_888_, 1, v_linker_869_);
lean_ctor_set(v___x_888_, 2, v___x_882_);
lean_ctor_set(v___x_888_, 3, v___x_883_);
lean_ctor_set(v___x_888_, 4, v___y_885_);
lean_ctor_set_uint8(v___x_888_, sizeof(void*)*5, v___x_886_);
lean_ctor_set_uint8(v___x_888_, sizeof(void*)*5 + 1, v___x_887_);
v___x_889_ = l_Lake_proc(v___x_888_, v___x_887_, v___x_883_, v_a_876_);
return v___x_889_;
}
}
else
{
lean_object* v_a_896_; lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec(v_macosxDeploymentTarget_x3f_870_);
lean_dec_ref(v_linker_869_);
lean_dec_ref(v_binFile_867_);
v_a_896_ = lean_ctor_get(v___x_874_, 0);
v_a_897_ = lean_ctor_get(v___x_874_, 1);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_874_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_inc(v_a_896_);
lean_dec(v___x_874_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_896_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_906_; uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
lean_dec(v_macosxDeploymentTarget_x3f_870_);
lean_dec_ref(v_linker_869_);
lean_dec_ref(v_binFile_867_);
v_a_905_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_873_, 1);
v___x_906_ = lean_io_error_to_string(v_a_905_);
v___x_907_ = 3;
v___x_908_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set_uint8(v___x_908_, sizeof(void*)*1, v___x_907_);
v___x_909_ = lean_array_get_size(v_a_871_);
v___x_910_ = lean_array_push(v_a_871_, v___x_908_);
v___x_911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe___boxed(lean_object* v_binFile_912_, lean_object* v_linkArgs_913_, lean_object* v_linker_914_, lean_object* v_macosxDeploymentTarget_x3f_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lake_compileExe(v_binFile_912_, v_linkArgs_913_, v_linker_914_, v_macosxDeploymentTarget_x3f_915_, v_a_916_);
lean_dec_ref(v_linkArgs_913_);
return v_res_918_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_920_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0));
v___x_921_ = lean_unsigned_to_nat(2u);
v___x_922_ = lean_mk_empty_array_with_capacity(v___x_921_);
v___x_923_ = lean_array_push(v___x_922_, v___x_920_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(lean_object* v_as_924_, size_t v_i_925_, size_t v_stop_926_, lean_object* v_b_927_){
_start:
{
uint8_t v___x_928_; 
v___x_928_ = lean_usize_dec_eq(v_i_925_, v_stop_926_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; size_t v___x_933_; size_t v___x_934_; 
v___x_929_ = lean_array_uget_borrowed(v_as_924_, v_i_925_);
v___x_930_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1);
lean_inc(v___x_929_);
v___x_931_ = lean_array_push(v___x_930_, v___x_929_);
v___x_932_ = l_Array_append___redArg(v_b_927_, v___x_931_);
lean_dec_ref(v___x_931_);
v___x_933_ = ((size_t)1ULL);
v___x_934_ = lean_usize_add(v_i_925_, v___x_933_);
v_i_925_ = v___x_934_;
v_b_927_ = v___x_932_;
goto _start;
}
else
{
return v_b_927_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___boxed(lean_object* v_as_936_, lean_object* v_i_937_, lean_object* v_stop_938_, lean_object* v_b_939_){
_start:
{
size_t v_i_boxed_940_; size_t v_stop_boxed_941_; lean_object* v_res_942_; 
v_i_boxed_940_ = lean_unbox_usize(v_i_937_);
lean_dec(v_i_937_);
v_stop_boxed_941_ = lean_unbox_usize(v_stop_938_);
lean_dec(v_stop_938_);
v_res_942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_as_936_, v_i_boxed_940_, v_stop_boxed_941_, v_b_939_);
lean_dec_ref(v_as_936_);
return v_res_942_;
}
}
static lean_object* _init_l_Lake_download___closed__6(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_949_ = ((lean_object*)(l_Lake_download___closed__2));
v___x_950_ = lean_unsigned_to_nat(7u);
v___x_951_ = lean_mk_empty_array_with_capacity(v___x_950_);
v___x_952_ = lean_array_push(v___x_951_, v___x_949_);
return v___x_952_;
}
}
static lean_object* _init_l_Lake_download___closed__7(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_953_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_954_ = lean_obj_once(&l_Lake_download___closed__6, &l_Lake_download___closed__6_once, _init_l_Lake_download___closed__6);
v___x_955_ = lean_array_push(v___x_954_, v___x_953_);
return v___x_955_;
}
}
static lean_object* _init_l_Lake_download___closed__8(void){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_956_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_957_ = lean_obj_once(&l_Lake_download___closed__7, &l_Lake_download___closed__7_once, _init_l_Lake_download___closed__7);
v___x_958_ = lean_array_push(v___x_957_, v___x_956_);
return v___x_958_;
}
}
static lean_object* _init_l_Lake_download___closed__9(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_960_ = lean_obj_once(&l_Lake_download___closed__8, &l_Lake_download___closed__8_once, _init_l_Lake_download___closed__8);
v___x_961_ = lean_array_push(v___x_960_, v___x_959_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lake_download(lean_object* v_url_962_, lean_object* v_file_963_, lean_object* v_headers_964_, lean_object* v_a_965_){
_start:
{
lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v_val_970_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_986_; uint8_t v___x_998_; 
v___x_998_ = l_System_FilePath_pathExists(v_file_963_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; 
lean_inc_ref(v_file_963_);
v___x_999_ = l_Lake_createParentDirs(v_file_963_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_dec_ref_known(v___x_999_, 1);
v___y_986_ = v_a_965_;
goto v___jp_985_;
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
lean_dec_ref(v_file_963_);
lean_dec_ref(v_url_962_);
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = lean_io_error_to_string(v_a_1000_);
v___x_1002_ = 3;
v___x_1003_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set_uint8(v___x_1003_, sizeof(void*)*1, v___x_1002_);
v___x_1004_ = lean_array_get_size(v_a_965_);
v___x_1005_ = lean_array_push(v_a_965_, v___x_1003_);
v___x_1006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
return v___x_1006_;
}
}
else
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_io_remove_file(v_file_963_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_dec_ref_known(v___x_1007_, 1);
v___y_986_ = v_a_965_;
goto v___jp_985_;
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
lean_dec_ref(v_file_963_);
lean_dec_ref(v_url_962_);
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v___x_1009_ = lean_io_error_to_string(v_a_1008_);
v___x_1010_ = 3;
v___x_1011_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set_uint8(v___x_1011_, sizeof(void*)*1, v___x_1010_);
v___x_1012_ = lean_array_get_size(v_a_965_);
v___x_1013_ = lean_array_push(v_a_965_, v___x_1011_);
v___x_1014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
return v___x_1014_;
}
}
v___jp_967_:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; uint8_t v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_971_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_972_ = lean_box(0);
v___x_973_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_974_ = 1;
v___x_975_ = 0;
v___x_976_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_976_, 0, v___x_971_);
lean_ctor_set(v___x_976_, 1, v_val_970_);
lean_ctor_set(v___x_976_, 2, v___y_969_);
lean_ctor_set(v___x_976_, 3, v___x_972_);
lean_ctor_set(v___x_976_, 4, v___x_973_);
lean_ctor_set_uint8(v___x_976_, sizeof(void*)*5, v___x_974_);
lean_ctor_set_uint8(v___x_976_, sizeof(void*)*5 + 1, v___x_975_);
v___x_977_ = l_Lake_proc(v___x_976_, v___x_974_, v___x_972_, v___y_968_);
return v___x_977_;
}
v___jp_978_:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = ((lean_object*)(l_Lake_download___closed__0));
v___x_982_ = lean_io_getenv(v___x_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v___x_983_; 
v___x_983_ = ((lean_object*)(l_Lake_download___closed__1));
v___y_968_ = v___y_979_;
v___y_969_ = v___y_980_;
v_val_970_ = v___x_983_;
goto v___jp_967_;
}
else
{
lean_object* v_val_984_; 
v_val_984_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_val_984_);
lean_dec_ref_known(v___x_982_, 1);
v___y_968_ = v___y_979_;
v___y_969_ = v___y_980_;
v_val_970_ = v_val_984_;
goto v___jp_967_;
}
}
v___jp_985_:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_987_ = ((lean_object*)(l_Lake_download___closed__5));
v___x_988_ = lean_obj_once(&l_Lake_download___closed__9, &l_Lake_download___closed__9_once, _init_l_Lake_download___closed__9);
v___x_989_ = lean_array_push(v___x_988_, v_file_963_);
v___x_990_ = lean_array_push(v___x_989_, v___x_987_);
v___x_991_ = lean_array_push(v___x_990_, v_url_962_);
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_array_get_size(v_headers_964_);
v___x_994_ = lean_nat_dec_lt(v___x_992_, v___x_993_);
if (v___x_994_ == 0)
{
v___y_979_ = v___y_986_;
v___y_980_ = v___x_991_;
goto v___jp_978_;
}
else
{
size_t v___x_995_; size_t v___x_996_; lean_object* v___x_997_; 
v___x_995_ = ((size_t)0ULL);
v___x_996_ = lean_usize_of_nat(v___x_993_);
v___x_997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_headers_964_, v___x_995_, v___x_996_, v___x_991_);
v___y_979_ = v___y_986_;
v___y_980_ = v___x_997_;
goto v___jp_978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_download___boxed(lean_object* v_url_1015_, lean_object* v_file_1016_, lean_object* v_headers_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lake_download(v_url_1015_, v_file_1016_, v_headers_1017_, v_a_1018_);
lean_dec_ref(v_headers_1017_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lake_untar(lean_object* v_file_1025_, lean_object* v_dir_1026_, uint8_t v_gzip_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v_opts_1031_; lean_object* v___y_1032_; lean_object* v___x_1050_; 
lean_inc_ref(v_dir_1026_);
v___x_1050_ = l_IO_FS_createDirAll(v_dir_1026_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_dec_ref_known(v___x_1050_, 1);
if (v_gzip_1027_ == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = ((lean_object*)(l_Lake_untar___closed__2));
v_opts_1031_ = v___x_1051_;
v___y_1032_ = v_a_1028_;
goto v___jp_1030_;
}
else
{
lean_object* v___x_1052_; 
v___x_1052_ = ((lean_object*)(l_Lake_untar___closed__3));
v_opts_1031_ = v___x_1052_;
v___y_1032_ = v_a_1028_;
goto v___jp_1030_;
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
lean_dec_ref(v_dir_1026_);
lean_dec_ref(v_file_1025_);
v_a_1053_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1053_);
lean_dec_ref_known(v___x_1050_, 1);
v___x_1054_ = lean_io_error_to_string(v_a_1053_);
v___x_1055_ = 3;
v___x_1056_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*1, v___x_1055_);
v___x_1057_ = lean_array_get_size(v_a_1028_);
v___x_1058_ = lean_array_push(v_a_1028_, v___x_1056_);
v___x_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
return v___x_1059_;
}
v___jp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; uint8_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1033_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_1034_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1035_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_1036_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1037_ = lean_unsigned_to_nat(5u);
v___x_1038_ = lean_mk_empty_array_with_capacity(v___x_1037_);
lean_inc_ref(v_opts_1031_);
v___x_1039_ = lean_array_push(v___x_1038_, v_opts_1031_);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1035_);
v___x_1041_ = lean_array_push(v___x_1040_, v_file_1025_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1036_);
v___x_1043_ = lean_array_push(v___x_1042_, v_dir_1026_);
v___x_1044_ = lean_box(0);
v___x_1045_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_1046_ = 1;
v___x_1047_ = 0;
v___x_1048_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1048_, 0, v___x_1033_);
lean_ctor_set(v___x_1048_, 1, v___x_1034_);
lean_ctor_set(v___x_1048_, 2, v___x_1043_);
lean_ctor_set(v___x_1048_, 3, v___x_1044_);
lean_ctor_set(v___x_1048_, 4, v___x_1045_);
lean_ctor_set_uint8(v___x_1048_, sizeof(void*)*5, v___x_1046_);
lean_ctor_set_uint8(v___x_1048_, sizeof(void*)*5 + 1, v___x_1047_);
v___x_1049_ = l_Lake_proc(v___x_1048_, v___x_1046_, v___x_1044_, v___y_1032_);
return v___x_1049_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_untar___boxed(lean_object* v_file_1060_, lean_object* v_dir_1061_, lean_object* v_gzip_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
uint8_t v_gzip_boxed_1065_; lean_object* v_res_1066_; 
v_gzip_boxed_1065_ = lean_unbox(v_gzip_1062_);
v_res_1066_ = l_Lake_untar(v_file_1060_, v_dir_1061_, v_gzip_boxed_1065_, v_a_1063_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(lean_object* v_as_1068_, size_t v_sz_1069_, size_t v_i_1070_, lean_object* v_b_1071_, lean_object* v___y_1072_){
_start:
{
uint8_t v___x_1074_; 
v___x_1074_ = lean_usize_dec_lt(v_i_1070_, v_sz_1069_);
if (v___x_1074_ == 0)
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v_b_1071_);
lean_ctor_set(v___x_1075_, 1, v___y_1072_);
return v___x_1075_;
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; size_t v___x_1080_; size_t v___x_1081_; 
v_a_1076_ = lean_array_uget_borrowed(v_as_1068_, v_i_1070_);
v___x_1077_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0));
v___x_1078_ = lean_string_append(v___x_1077_, v_a_1076_);
v___x_1079_ = lean_array_push(v_b_1071_, v___x_1078_);
v___x_1080_ = ((size_t)1ULL);
v___x_1081_ = lean_usize_add(v_i_1070_, v___x_1080_);
v_i_1070_ = v___x_1081_;
v_b_1071_ = v___x_1079_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___boxed(lean_object* v_as_1083_, lean_object* v_sz_1084_, lean_object* v_i_1085_, lean_object* v_b_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
size_t v_sz_boxed_1089_; size_t v_i_boxed_1090_; lean_object* v_res_1091_; 
v_sz_boxed_1089_ = lean_unbox_usize(v_sz_1084_);
lean_dec(v_sz_1084_);
v_i_boxed_1090_ = lean_unbox_usize(v_i_1085_);
lean_dec(v_i_1085_);
v_res_1091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_as_1083_, v_sz_boxed_1089_, v_i_boxed_1090_, v_b_1086_, v___y_1087_);
lean_dec_ref(v_as_1083_);
return v_res_1091_;
}
}
static lean_object* _init_l_Lake_tar___closed__1(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1093_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_1094_ = lean_unsigned_to_nat(5u);
v___x_1095_ = lean_mk_empty_array_with_capacity(v___x_1094_);
v___x_1096_ = lean_array_push(v___x_1095_, v___x_1093_);
return v___x_1096_;
}
}
static lean_object* _init_l_Lake_tar___closed__10(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1114_ = ((lean_object*)(l_Lake_tar___closed__9));
v___x_1115_ = ((lean_object*)(l_Lake_tar___closed__8));
v___x_1116_ = lean_array_push(v___x_1115_, v___x_1114_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lake_tar(lean_object* v_dir_1117_, lean_object* v_file_1118_, uint8_t v_gzip_1119_, lean_object* v_excludePaths_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; uint8_t v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v_args_1136_; lean_object* v___y_1137_; lean_object* v___x_1167_; 
lean_inc_ref(v_file_1118_);
v___x_1167_ = l_Lake_createParentDirs(v_file_1118_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v___x_1168_; 
lean_dec_ref_known(v___x_1167_, 1);
v___x_1168_ = ((lean_object*)(l_Lake_tar___closed__8));
if (v_gzip_1119_ == 0)
{
v_args_1136_ = v___x_1168_;
v___y_1137_ = v_a_1121_;
goto v___jp_1135_;
}
else
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_obj_once(&l_Lake_tar___closed__10, &l_Lake_tar___closed__10_once, _init_l_Lake_tar___closed__10);
v_args_1136_ = v___x_1169_;
v___y_1137_ = v_a_1121_;
goto v___jp_1135_;
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
lean_dec_ref(v_file_1118_);
lean_dec_ref(v_dir_1117_);
v_a_1170_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1167_, 1);
v___x_1171_ = lean_io_error_to_string(v_a_1170_);
v___x_1172_ = 3;
v___x_1173_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1173_, 0, v___x_1171_);
lean_ctor_set_uint8(v___x_1173_, sizeof(void*)*1, v___x_1172_);
v___x_1174_ = lean_array_get_size(v_a_1121_);
v___x_1175_ = lean_array_push(v_a_1121_, v___x_1173_);
v___x_1176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1174_);
lean_ctor_set(v___x_1176_, 1, v___x_1175_);
return v___x_1176_;
}
v___jp_1123_:
{
uint8_t v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1131_ = 0;
lean_inc_ref(v___y_1130_);
lean_inc(v___y_1126_);
lean_inc_ref(v___y_1129_);
lean_inc_ref(v___y_1128_);
v___x_1132_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1132_, 0, v___y_1128_);
lean_ctor_set(v___x_1132_, 1, v___y_1129_);
lean_ctor_set(v___x_1132_, 2, v___y_1125_);
lean_ctor_set(v___x_1132_, 3, v___y_1126_);
lean_ctor_set(v___x_1132_, 4, v___y_1130_);
lean_ctor_set_uint8(v___x_1132_, sizeof(void*)*5, v___y_1127_);
lean_ctor_set_uint8(v___x_1132_, sizeof(void*)*5 + 1, v___x_1131_);
v___x_1133_ = lean_box(0);
v___x_1134_ = l_Lake_proc(v___x_1132_, v___y_1127_, v___x_1133_, v___y_1124_);
return v___x_1134_;
}
v___jp_1135_:
{
size_t v_sz_1138_; size_t v___x_1139_; lean_object* v___x_1140_; 
v_sz_1138_ = lean_array_size(v_excludePaths_1120_);
v___x_1139_ = ((size_t)0ULL);
lean_inc_ref(v_args_1136_);
v___x_1140_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_excludePaths_1120_, v_sz_1138_, v___x_1139_, v_args_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; lean_object* v_a_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; uint8_t v___x_1155_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
v_a_1142_ = lean_ctor_get(v___x_1140_, 1);
lean_inc(v_a_1142_);
lean_dec_ref_known(v___x_1140_, 2);
v___x_1143_ = ((lean_object*)(l_Lake_compileLeanIR___closed__0));
v___x_1144_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1145_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1146_ = ((lean_object*)(l_Lake_tar___closed__0));
v___x_1147_ = lean_obj_once(&l_Lake_tar___closed__1, &l_Lake_tar___closed__1_once, _init_l_Lake_tar___closed__1);
v___x_1148_ = lean_array_push(v___x_1147_, v_file_1118_);
v___x_1149_ = lean_array_push(v___x_1148_, v___x_1145_);
v___x_1150_ = lean_array_push(v___x_1149_, v_dir_1117_);
v___x_1151_ = lean_array_push(v___x_1150_, v___x_1146_);
v___x_1152_ = l_Array_append___redArg(v_a_1141_, v___x_1151_);
lean_dec_ref(v___x_1151_);
v___x_1153_ = lean_box(0);
v___x_1154_ = l_System_Platform_isOSX;
v___x_1155_ = 1;
if (v___x_1154_ == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_1124_ = v_a_1142_;
v___y_1125_ = v___x_1152_;
v___y_1126_ = v___x_1153_;
v___y_1127_ = v___x_1155_;
v___y_1128_ = v___x_1143_;
v___y_1129_ = v___x_1144_;
v___y_1130_ = v___x_1156_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1157_; 
v___x_1157_ = ((lean_object*)(l_Lake_tar___closed__6));
v___y_1124_ = v_a_1142_;
v___y_1125_ = v___x_1152_;
v___y_1126_ = v___x_1153_;
v___y_1127_ = v___x_1155_;
v___y_1128_ = v___x_1143_;
v___y_1129_ = v___x_1144_;
v___y_1130_ = v___x_1157_;
goto v___jp_1123_;
}
}
else
{
lean_object* v_a_1158_; lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
lean_dec_ref(v_file_1118_);
lean_dec_ref(v_dir_1117_);
v_a_1158_ = lean_ctor_get(v___x_1140_, 0);
v_a_1159_ = lean_ctor_get(v___x_1140_, 1);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1140_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_inc(v_a_1158_);
lean_dec(v___x_1140_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1158_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object* v_dir_1177_, lean_object* v_file_1178_, lean_object* v_gzip_1179_, lean_object* v_excludePaths_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_){
_start:
{
uint8_t v_gzip_boxed_1183_; lean_object* v_res_1184_; 
v_gzip_boxed_1183_ = lean_unbox(v_gzip_1179_);
v_res_1184_ = l_Lake_tar(v_dir_1177_, v_file_1178_, v_gzip_boxed_1183_, v_excludePaths_1180_, v_a_1181_);
lean_dec_ref(v_excludePaths_1180_);
return v_res_1184_;
}
}
lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Url(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Log(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_Url(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Actions(builtin);
}
#ifdef __cplusplus
}
#endif
