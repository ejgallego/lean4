// Lean compiler output
// Module: Lean.Server.Completion.ImportCompletion
// Imports: public import Lean.Util.LakePath public import Lean.Data.Lsp public import Lean.Parser.Module meta import Lean.Parser.Module
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
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_NameTrie_matchingToArray___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* lean_io_read_dir(lean_object*);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
lean_object* l_System_FilePath_extension(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_PrefixTreeNode_empty___redArg();
lean_object* l_Lean_NameTrie_insert___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_determineLakePath();
lean_object* lean_io_process_spawn(lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_getSrcSearchPath();
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_NameTrie_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Module"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3_value;
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value_aux_2),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 173, 92, 3, 94, 219, 131, 202)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5_value;
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value_aux_2),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__5_value),LEAN_SCALAR_PTR_LITERAL(182, 6, 18, 235, 50, 88, 101, 248)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "moduleTk"};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7_value;
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value_aux_2),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__7_value),LEAN_SCALAR_PTR_LITERAL(198, 239, 28, 252, 21, 233, 71, 221)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8_value;
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__3;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Server.Completion.ImportCompletion"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Lean.Lsp.ImportCompletion.computePartialImportCompletions"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 219, 158, 40, 50, 143, 61, 44)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_0),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_1),((lean_object*)&l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2_value),LEAN_SCALAR_PTR_LITERAL(239, 68, 245, 129, 233, 83, 45, 77)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(198, 166, 14, 39, 152, 190, 236, 172)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCompletionRequest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCompletionRequest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0(lean_object*);
static const lean_ctor_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "available-imports"};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1_value;
static const lean_array_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__1_value)}};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2_value;
static const lean_array_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3_value;
static const lean_string_object l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid output from `lake available-imports`:\n"};
static const lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4 = (const lean_object*)&l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake();
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath();
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports();
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_addCompletionItemData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "import "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(lean_object* v_as_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_b_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
return v_b_4_;
}
else
{
lean_object* v_a_6_; lean_object* v___x_7_; size_t v___x_8_; size_t v___x_9_; 
v_a_6_ = lean_array_uget_borrowed(v_as_1_, v_i_3_);
lean_inc(v_a_6_);
v___x_7_ = l_Lean_NameTrie_insert___redArg(v_b_4_, v_a_6_, v_a_6_);
v___x_8_ = ((size_t)1ULL);
v___x_9_ = lean_usize_add(v_i_3_, v___x_8_);
v_i_3_ = v___x_9_;
v_b_4_ = v___x_7_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0___boxed(lean_object* v_as_11_, lean_object* v_sz_12_, lean_object* v_i_13_, lean_object* v_b_14_){
_start:
{
size_t v_sz_boxed_15_; size_t v_i_boxed_16_; lean_object* v_res_17_; 
v_sz_boxed_15_ = lean_unbox_usize(v_sz_12_);
lean_dec(v_sz_12_);
v_i_boxed_16_ = lean_unbox_usize(v_i_13_);
lean_dec(v_i_13_);
v_res_17_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(v_as_11_, v_sz_boxed_15_, v_i_boxed_16_, v_b_14_);
lean_dec_ref(v_as_11_);
return v_res_17_;
}
}
static lean_object* _init_l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0(void){
_start:
{
lean_object* v_importTrie_18_; 
v_importTrie_18_ = l_Lean_PrefixTreeNode_empty___redArg();
return v_importTrie_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(lean_object* v_imports_19_){
_start:
{
lean_object* v_importTrie_20_; size_t v_sz_21_; size_t v___x_22_; lean_object* v___x_23_; 
v_importTrie_20_ = lean_obj_once(&l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0, &l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0_once, _init_l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___closed__0);
v_sz_21_ = lean_array_size(v_imports_19_);
v___x_22_ = ((size_t)0ULL);
v___x_23_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie_spec__0(v_imports_19_, v_sz_21_, v___x_22_, v_importTrie_20_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie___boxed(lean_object* v_imports_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(v_imports_24_);
lean_dec_ref(v_imports_24_);
return v_res_25_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(lean_object* v_completionPos_26_, lean_object* v_as_27_, size_t v_i_28_, size_t v_stop_29_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = lean_usize_dec_eq(v_i_28_, v_stop_29_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; lean_object* v_importStx_36_; lean_object* v_importCmd_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v_allTk_x3f_40_; lean_object* v___x_41_; lean_object* v_importId_42_; lean_object* v___y_44_; 
v___x_35_ = lean_unsigned_to_nat(2u);
v_importStx_36_ = lean_array_uget_borrowed(v_as_27_, v_i_28_);
v_importCmd_37_ = l_Lean_Syntax_getArg(v_importStx_36_, v___x_35_);
v___x_38_ = lean_unsigned_to_nat(3u);
v___x_39_ = l_Lean_Syntax_getArg(v_importStx_36_, v___x_38_);
v_allTk_x3f_40_ = l_Lean_Syntax_getOptional_x3f(v___x_39_);
lean_dec(v___x_39_);
v___x_41_ = lean_unsigned_to_nat(4u);
v_importId_42_ = l_Lean_Syntax_getArg(v_importStx_36_, v___x_41_);
if (lean_obj_tag(v_allTk_x3f_40_) == 0)
{
goto v___jp_50_;
}
else
{
lean_object* v_val_52_; lean_object* v___x_53_; 
v_val_52_ = lean_ctor_get(v_allTk_x3f_40_, 0);
lean_inc(v_val_52_);
lean_dec_ref_known(v_allTk_x3f_40_, 1);
v___x_53_ = l_Lean_Syntax_getTailPos_x3f(v_val_52_, v___x_34_);
lean_dec(v_val_52_);
if (lean_obj_tag(v___x_53_) == 0)
{
goto v___jp_50_;
}
else
{
lean_dec(v_importCmd_37_);
v___y_44_ = v___x_53_;
goto v___jp_43_;
}
}
v___jp_43_:
{
uint8_t v___x_45_; 
v___x_45_ = l_Lean_Syntax_isMissing(v_importId_42_);
lean_dec(v_importId_42_);
if (v___x_45_ == 0)
{
lean_dec(v___y_44_);
goto v___jp_30_;
}
else
{
if (lean_obj_tag(v___y_44_) == 0)
{
goto v___jp_30_;
}
else
{
lean_object* v_val_46_; lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v_decide_49_; 
v_val_46_ = lean_ctor_get(v___y_44_, 0);
lean_inc(v_val_46_);
lean_dec_ref_known(v___y_44_, 1);
v___x_47_ = lean_unsigned_to_nat(1u);
v___x_48_ = lean_nat_add(v_val_46_, v___x_47_);
lean_dec(v_val_46_);
v_decide_49_ = lean_nat_dec_eq(v_completionPos_26_, v___x_48_);
lean_dec(v___x_48_);
if (v_decide_49_ == 0)
{
goto v___jp_30_;
}
else
{
return v_decide_49_;
}
}
}
}
v___jp_50_:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Syntax_getTailPos_x3f(v_importCmd_37_, v___x_34_);
lean_dec(v_importCmd_37_);
v___y_44_ = v___x_51_;
goto v___jp_43_;
}
}
else
{
uint8_t v___x_54_; 
v___x_54_ = 0;
return v___x_54_;
}
v___jp_30_:
{
size_t v___x_31_; size_t v___x_32_; 
v___x_31_ = ((size_t)1ULL);
v___x_32_ = lean_usize_add(v_i_28_, v___x_31_);
v_i_28_ = v___x_32_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0___boxed(lean_object* v_completionPos_55_, lean_object* v_as_56_, lean_object* v_i_57_, lean_object* v_stop_58_){
_start:
{
size_t v_i_boxed_59_; size_t v_stop_boxed_60_; uint8_t v_res_61_; lean_object* v_r_62_; 
v_i_boxed_59_ = lean_unbox_usize(v_i_57_);
lean_dec(v_i_57_);
v_stop_boxed_60_ = lean_unbox_usize(v_stop_58_);
lean_dec(v_stop_58_);
v_res_61_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(v_completionPos_55_, v_as_56_, v_i_boxed_59_, v_stop_boxed_60_);
lean_dec_ref(v_as_56_);
lean_dec(v_completionPos_55_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(lean_object* v_headerStx_84_, lean_object* v_completionPos_85_){
_start:
{
lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4));
lean_inc(v_headerStx_84_);
v___x_87_ = l_Lean_Syntax_isOfKind(v_headerStx_84_, v___x_86_);
if (v___x_87_ == 0)
{
lean_dec(v_headerStx_84_);
return v___x_87_;
}
else
{
lean_object* v___x_88_; lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_106_ = l_Lean_Syntax_getArg(v_headerStx_84_, v___x_88_);
v___x_107_ = l_Lean_Syntax_isNone(v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_106_);
v___x_109_ = l_Lean_Syntax_matchesNull(v___x_106_, v___x_108_);
if (v___x_109_ == 0)
{
lean_dec(v___x_106_);
lean_dec(v_headerStx_84_);
return v___x_109_;
}
else
{
lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_110_ = l_Lean_Syntax_getArg(v___x_106_, v___x_88_);
lean_dec(v___x_106_);
v___x_111_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8));
v___x_112_ = l_Lean_Syntax_isOfKind(v___x_110_, v___x_111_);
if (v___x_112_ == 0)
{
lean_dec(v_headerStx_84_);
return v___x_112_;
}
else
{
goto v___jp_98_;
}
}
}
else
{
lean_dec(v___x_106_);
goto v___jp_98_;
}
v___jp_89_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v_importsStx_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_90_ = lean_unsigned_to_nat(2u);
v___x_91_ = l_Lean_Syntax_getArg(v_headerStx_84_, v___x_90_);
lean_dec(v_headerStx_84_);
v_importsStx_92_ = l_Lean_Syntax_getArgs(v___x_91_);
lean_dec(v___x_91_);
v___x_93_ = lean_array_get_size(v_importsStx_92_);
v___x_94_ = lean_nat_dec_lt(v___x_88_, v___x_93_);
if (v___x_94_ == 0)
{
lean_dec_ref(v_importsStx_92_);
return v___x_94_;
}
else
{
if (v___x_94_ == 0)
{
lean_dec_ref(v_importsStx_92_);
return v___x_94_;
}
else
{
size_t v___x_95_; size_t v___x_96_; uint8_t v___x_97_; 
v___x_95_ = ((size_t)0ULL);
v___x_96_ = lean_usize_of_nat(v___x_93_);
v___x_97_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportNameCompletionRequest_spec__0(v_completionPos_85_, v_importsStx_92_, v___x_95_, v___x_96_);
lean_dec_ref(v_importsStx_92_);
return v___x_97_;
}
}
}
v___jp_98_:
{
lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_99_ = lean_unsigned_to_nat(1u);
v___x_100_ = l_Lean_Syntax_getArg(v_headerStx_84_, v___x_99_);
v___x_101_ = l_Lean_Syntax_isNone(v___x_100_);
if (v___x_101_ == 0)
{
uint8_t v___x_102_; 
lean_inc(v___x_100_);
v___x_102_ = l_Lean_Syntax_matchesNull(v___x_100_, v___x_99_);
if (v___x_102_ == 0)
{
lean_dec(v___x_100_);
lean_dec(v_headerStx_84_);
return v___x_102_;
}
else
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_103_ = l_Lean_Syntax_getArg(v___x_100_, v___x_88_);
lean_dec(v___x_100_);
v___x_104_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6));
v___x_105_ = l_Lean_Syntax_isOfKind(v___x_103_, v___x_104_);
if (v___x_105_ == 0)
{
lean_dec(v_headerStx_84_);
return v___x_105_;
}
else
{
goto v___jp_89_;
}
}
}
else
{
lean_dec(v___x_100_);
goto v___jp_89_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___boxed(lean_object* v_headerStx_113_, lean_object* v_completionPos_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(v_headerStx_113_, v_completionPos_114_);
lean_dec(v_completionPos_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0(lean_object* v_msg_117_){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_panic_fn_borrowed(v___x_118_, v_msg_117_);
return v___x_119_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__3(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__2));
v___x_124_ = lean_unsigned_to_nat(14u);
v___x_125_ = lean_unsigned_to_nat(22u);
v___x_126_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__1));
v___x_127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__0));
v___x_128_ = l_mkPanicMessageWithDecl(v___x_127_, v___x_126_, v___x_125_, v___x_124_, v___x_123_);
return v___x_128_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(lean_object* v_completionPos_129_, lean_object* v_as_130_, size_t v_i_131_, size_t v_stop_132_){
_start:
{
lean_object* v___y_138_; uint8_t v___x_140_; 
v___x_140_ = lean_usize_dec_eq(v_i_131_, v_stop_132_);
if (v___x_140_ == 0)
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_array_uget_borrowed(v_as_130_, v_i_131_);
v___x_142_ = l_Lean_Syntax_getPos_x3f(v___x_141_, v___x_140_);
if (lean_obj_tag(v___x_142_) == 0)
{
goto v___jp_133_;
}
else
{
lean_object* v_val_143_; lean_object* v___x_144_; 
v_val_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_val_143_);
lean_dec_ref_known(v___x_142_, 1);
v___x_144_ = l_Lean_Syntax_getTailPos_x3f(v___x_141_, v___x_140_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_dec(v_val_143_);
goto v___jp_133_;
}
else
{
uint8_t v___x_145_; 
v___x_145_ = lean_nat_dec_le(v_val_143_, v_completionPos_129_);
lean_dec(v_val_143_);
if (v___x_145_ == 0)
{
lean_dec_ref_known(v___x_144_, 1);
goto v___jp_133_;
}
else
{
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___closed__3);
v___x_147_ = l_panic___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__0(v___x_146_);
v___y_138_ = v___x_147_;
goto v___jp_137_;
}
else
{
lean_object* v_val_148_; 
v_val_148_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_val_148_);
lean_dec_ref_known(v___x_144_, 1);
v___y_138_ = v_val_148_;
goto v___jp_137_;
}
}
}
}
}
else
{
uint8_t v___x_149_; 
v___x_149_ = 0;
return v___x_149_;
}
v___jp_133_:
{
size_t v___x_134_; size_t v___x_135_; 
v___x_134_ = ((size_t)1ULL);
v___x_135_ = lean_usize_add(v_i_131_, v___x_134_);
v_i_131_ = v___x_135_;
goto _start;
}
v___jp_137_:
{
uint8_t v___x_139_; 
v___x_139_ = lean_nat_dec_le(v_completionPos_129_, v___y_138_);
lean_dec(v___y_138_);
if (v___x_139_ == 0)
{
goto v___jp_133_;
}
else
{
return v___x_139_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1___boxed(lean_object* v_completionPos_150_, lean_object* v_as_151_, lean_object* v_i_152_, lean_object* v_stop_153_){
_start:
{
size_t v_i_boxed_154_; size_t v_stop_boxed_155_; uint8_t v_res_156_; lean_object* v_r_157_; 
v_i_boxed_154_ = lean_unbox_usize(v_i_152_);
lean_dec(v_i_152_);
v_stop_boxed_155_ = lean_unbox_usize(v_stop_153_);
lean_dec(v_stop_153_);
v_res_156_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(v_completionPos_150_, v_as_151_, v_i_boxed_154_, v_stop_boxed_155_);
lean_dec_ref(v_as_151_);
lean_dec(v_completionPos_150_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__2(lean_object* v_completionPos_158_, lean_object* v_as_159_, size_t v_i_160_, size_t v_stop_161_){
_start:
{
uint8_t v___x_166_; 
v___x_166_ = lean_usize_dec_eq(v_i_160_, v_stop_161_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = lean_array_uget_borrowed(v_as_159_, v_i_160_);
v___x_169_ = l_Lean_Syntax_getArgs(v___x_168_);
v___x_170_ = lean_array_get_size(v___x_169_);
v___x_171_ = lean_nat_dec_lt(v___x_167_, v___x_170_);
if (v___x_171_ == 0)
{
lean_dec_ref(v___x_169_);
goto v___jp_162_;
}
else
{
if (v___x_171_ == 0)
{
lean_dec_ref(v___x_169_);
goto v___jp_162_;
}
else
{
size_t v___x_172_; size_t v___x_173_; uint8_t v___x_174_; 
v___x_172_ = ((size_t)0ULL);
v___x_173_ = lean_usize_of_nat(v___x_170_);
v___x_174_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__1(v_completionPos_158_, v___x_169_, v___x_172_, v___x_173_);
lean_dec_ref(v___x_169_);
if (v___x_174_ == 0)
{
goto v___jp_162_;
}
else
{
return v___x_174_;
}
}
}
}
else
{
uint8_t v___x_175_; 
v___x_175_ = 0;
return v___x_175_;
}
v___jp_162_:
{
size_t v___x_163_; size_t v___x_164_; 
v___x_163_ = ((size_t)1ULL);
v___x_164_ = lean_usize_add(v_i_160_, v___x_163_);
v_i_160_ = v___x_164_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__2___boxed(lean_object* v_completionPos_176_, lean_object* v_as_177_, lean_object* v_i_178_, lean_object* v_stop_179_){
_start:
{
size_t v_i_boxed_180_; size_t v_stop_boxed_181_; uint8_t v_res_182_; lean_object* v_r_183_; 
v_i_boxed_180_ = lean_unbox_usize(v_i_178_);
lean_dec(v_i_178_);
v_stop_boxed_181_ = lean_unbox_usize(v_stop_179_);
lean_dec(v_stop_179_);
v_res_182_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__2(v_completionPos_176_, v_as_177_, v_i_boxed_180_, v_stop_boxed_181_);
lean_dec_ref(v_as_177_);
lean_dec(v_completionPos_176_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(lean_object* v_headerStx_184_, lean_object* v_completionPos_185_){
_start:
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4));
lean_inc(v_headerStx_184_);
v___x_187_ = l_Lean_Syntax_isOfKind(v_headerStx_184_, v___x_186_);
if (v___x_187_ == 0)
{
lean_dec(v_headerStx_184_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_207_ = l_Lean_Syntax_getArg(v_headerStx_184_, v___x_188_);
v___x_208_ = l_Lean_Syntax_isNone(v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_207_);
v___x_210_ = l_Lean_Syntax_matchesNull(v___x_207_, v___x_209_);
if (v___x_210_ == 0)
{
lean_dec(v___x_207_);
lean_dec(v_headerStx_184_);
return v___x_210_;
}
else
{
lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_211_ = l_Lean_Syntax_getArg(v___x_207_, v___x_188_);
lean_dec(v___x_207_);
v___x_212_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8));
v___x_213_ = l_Lean_Syntax_isOfKind(v___x_211_, v___x_212_);
if (v___x_213_ == 0)
{
lean_dec(v_headerStx_184_);
return v___x_213_;
}
else
{
goto v___jp_199_;
}
}
}
else
{
lean_dec(v___x_207_);
goto v___jp_199_;
}
v___jp_189_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v_importsStx_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_190_ = lean_unsigned_to_nat(2u);
v___x_191_ = l_Lean_Syntax_getArg(v_headerStx_184_, v___x_190_);
lean_dec(v_headerStx_184_);
v_importsStx_192_ = l_Lean_Syntax_getArgs(v___x_191_);
lean_dec(v___x_191_);
v___x_193_ = lean_array_get_size(v_importsStx_192_);
v___x_194_ = lean_nat_dec_lt(v___x_188_, v___x_193_);
if (v___x_194_ == 0)
{
lean_dec_ref(v_importsStx_192_);
return v___x_187_;
}
else
{
if (v___x_194_ == 0)
{
lean_dec_ref(v_importsStx_192_);
return v___x_187_;
}
else
{
size_t v___x_195_; size_t v___x_196_; uint8_t v___x_197_; 
v___x_195_ = ((size_t)0ULL);
v___x_196_ = lean_usize_of_nat(v___x_193_);
v___x_197_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest_spec__2(v_completionPos_185_, v_importsStx_192_, v___x_195_, v___x_196_);
lean_dec_ref(v_importsStx_192_);
if (v___x_197_ == 0)
{
return v___x_187_;
}
else
{
uint8_t v___x_198_; 
v___x_198_ = 0;
return v___x_198_;
}
}
}
}
v___jp_199_:
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_200_ = lean_unsigned_to_nat(1u);
v___x_201_ = l_Lean_Syntax_getArg(v_headerStx_184_, v___x_200_);
v___x_202_ = l_Lean_Syntax_isNone(v___x_201_);
if (v___x_202_ == 0)
{
uint8_t v___x_203_; 
lean_inc(v___x_201_);
v___x_203_ = l_Lean_Syntax_matchesNull(v___x_201_, v___x_200_);
if (v___x_203_ == 0)
{
lean_dec(v___x_201_);
lean_dec(v_headerStx_184_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_204_ = l_Lean_Syntax_getArg(v___x_201_, v___x_188_);
lean_dec(v___x_201_);
v___x_205_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6));
v___x_206_ = l_Lean_Syntax_isOfKind(v___x_204_, v___x_205_);
if (v___x_206_ == 0)
{
lean_dec(v_headerStx_184_);
return v___x_206_;
}
else
{
goto v___jp_189_;
}
}
}
else
{
lean_dec(v___x_201_);
goto v___jp_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest___boxed(lean_object* v_headerStx_214_, lean_object* v_completionPos_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(v_headerStx_214_, v_completionPos_215_);
lean_dec(v_completionPos_215_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(lean_object* v_msg_218_){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_box(0);
v___x_220_ = lean_panic_fn_borrowed(v___x_219_, v_msg_218_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(lean_object* v_hi_221_, lean_object* v_pivot_222_, lean_object* v_as_223_, lean_object* v_i_224_, lean_object* v_k_225_){
_start:
{
uint8_t v___x_226_; 
v___x_226_ = lean_nat_dec_lt(v_k_225_, v_hi_221_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec(v_k_225_);
v___x_227_ = lean_array_fswap(v_as_223_, v_i_224_, v_hi_221_);
v___x_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_228_, 0, v_i_224_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
return v___x_228_;
}
else
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = lean_array_fget_borrowed(v_as_223_, v_k_225_);
v___x_230_ = l_Lean_Name_quickLt(v___x_229_, v_pivot_222_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = lean_unsigned_to_nat(1u);
v___x_232_ = lean_nat_add(v_k_225_, v___x_231_);
lean_dec(v_k_225_);
v_k_225_ = v___x_232_;
goto _start;
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_234_ = lean_array_fswap(v_as_223_, v_i_224_, v_k_225_);
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_nat_add(v_i_224_, v___x_235_);
lean_dec(v_i_224_);
v___x_237_ = lean_nat_add(v_k_225_, v___x_235_);
lean_dec(v_k_225_);
v_as_223_ = v___x_234_;
v_i_224_ = v___x_236_;
v_k_225_ = v___x_237_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg___boxed(lean_object* v_hi_239_, lean_object* v_pivot_240_, lean_object* v_as_241_, lean_object* v_i_242_, lean_object* v_k_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(v_hi_239_, v_pivot_240_, v_as_241_, v_i_242_, v_k_243_);
lean_dec(v_pivot_240_);
lean_dec(v_hi_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(lean_object* v_n_245_, lean_object* v_as_246_, lean_object* v_lo_247_, lean_object* v_hi_248_){
_start:
{
lean_object* v___y_250_; uint8_t v___x_260_; 
v___x_260_ = lean_nat_dec_lt(v_lo_247_, v_hi_248_);
if (v___x_260_ == 0)
{
lean_dec(v_lo_247_);
return v_as_246_;
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_mid_263_; lean_object* v___y_265_; lean_object* v___y_271_; lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_261_ = lean_nat_add(v_lo_247_, v_hi_248_);
v___x_262_ = lean_unsigned_to_nat(1u);
v_mid_263_ = lean_nat_shiftr(v___x_261_, v___x_262_);
lean_dec(v___x_261_);
v___x_276_ = lean_array_fget_borrowed(v_as_246_, v_mid_263_);
v___x_277_ = lean_array_fget_borrowed(v_as_246_, v_lo_247_);
v___x_278_ = l_Lean_Name_quickLt(v___x_276_, v___x_277_);
if (v___x_278_ == 0)
{
v___y_271_ = v_as_246_;
goto v___jp_270_;
}
else
{
lean_object* v___x_279_; 
v___x_279_ = lean_array_fswap(v_as_246_, v_lo_247_, v_mid_263_);
v___y_271_ = v___x_279_;
goto v___jp_270_;
}
v___jp_264_:
{
lean_object* v___x_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_266_ = lean_array_fget_borrowed(v___y_265_, v_mid_263_);
v___x_267_ = lean_array_fget_borrowed(v___y_265_, v_hi_248_);
v___x_268_ = l_Lean_Name_quickLt(v___x_266_, v___x_267_);
if (v___x_268_ == 0)
{
lean_dec(v_mid_263_);
v___y_250_ = v___y_265_;
goto v___jp_249_;
}
else
{
lean_object* v___x_269_; 
v___x_269_ = lean_array_fswap(v___y_265_, v_mid_263_, v_hi_248_);
lean_dec(v_mid_263_);
v___y_250_ = v___x_269_;
goto v___jp_249_;
}
}
v___jp_270_:
{
lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_272_ = lean_array_fget_borrowed(v___y_271_, v_hi_248_);
v___x_273_ = lean_array_fget_borrowed(v___y_271_, v_lo_247_);
v___x_274_ = l_Lean_Name_quickLt(v___x_272_, v___x_273_);
if (v___x_274_ == 0)
{
v___y_265_ = v___y_271_;
goto v___jp_264_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = lean_array_fswap(v___y_271_, v_lo_247_, v_hi_248_);
v___y_265_ = v___x_275_;
goto v___jp_264_;
}
}
}
v___jp_249_:
{
lean_object* v_pivot_251_; lean_object* v___x_252_; lean_object* v_fst_253_; lean_object* v_snd_254_; uint8_t v___x_255_; 
v_pivot_251_ = lean_array_fget(v___y_250_, v_hi_248_);
lean_inc_n(v_lo_247_, 2);
v___x_252_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(v_hi_248_, v_pivot_251_, v___y_250_, v_lo_247_, v_lo_247_);
lean_dec(v_pivot_251_);
v_fst_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_fst_253_);
v_snd_254_ = lean_ctor_get(v___x_252_, 1);
lean_inc(v_snd_254_);
lean_dec_ref(v___x_252_);
v___x_255_ = lean_nat_dec_le(v_hi_248_, v_fst_253_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v_n_245_, v_snd_254_, v_lo_247_, v_fst_253_);
v___x_257_ = lean_unsigned_to_nat(1u);
v___x_258_ = lean_nat_add(v_fst_253_, v___x_257_);
lean_dec(v_fst_253_);
v_as_246_ = v___x_256_;
v_lo_247_ = v___x_258_;
goto _start;
}
else
{
lean_dec(v_fst_253_);
lean_dec(v_lo_247_);
return v_snd_254_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg___boxed(lean_object* v_n_280_, lean_object* v_as_281_, lean_object* v_lo_282_, lean_object* v_hi_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v_n_280_, v_as_281_, v_lo_282_, v_hi_283_);
lean_dec(v_hi_283_);
lean_dec(v_n_280_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(uint8_t v___x_285_, lean_object* v_snd_286_, lean_object* v_as_287_, size_t v_i_288_, size_t v_stop_289_, lean_object* v_b_290_){
_start:
{
lean_object* v___y_292_; uint8_t v___x_296_; 
v___x_296_ = lean_usize_dec_eq(v_i_288_, v_stop_289_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_297_ = lean_array_uget_borrowed(v_as_287_, v_i_288_);
lean_inc(v___x_297_);
v___x_298_ = l_Lean_Name_toString(v___x_297_, v___x_285_);
v___x_299_ = lean_string_utf8_byte_size(v___x_298_);
v___x_300_ = lean_string_utf8_byte_size(v_snd_286_);
v___x_301_ = lean_nat_dec_le(v___x_300_, v___x_299_);
if (v___x_301_ == 0)
{
lean_dec_ref(v___x_298_);
v___y_292_ = v_b_290_;
goto v___jp_291_;
}
else
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_unsigned_to_nat(0u);
v___x_303_ = lean_string_memcmp(v___x_298_, v_snd_286_, v___x_302_, v___x_302_, v___x_300_);
lean_dec_ref(v___x_298_);
if (v___x_303_ == 0)
{
v___y_292_ = v_b_290_;
goto v___jp_291_;
}
else
{
lean_object* v___x_304_; 
lean_inc(v___x_297_);
v___x_304_ = lean_array_push(v_b_290_, v___x_297_);
v___y_292_ = v___x_304_;
goto v___jp_291_;
}
}
}
else
{
return v_b_290_;
}
v___jp_291_:
{
size_t v___x_293_; size_t v___x_294_; 
v___x_293_ = ((size_t)1ULL);
v___x_294_ = lean_usize_add(v_i_288_, v___x_293_);
v_i_288_ = v___x_294_;
v_b_290_ = v___y_292_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5___boxed(lean_object* v___x_305_, lean_object* v_snd_306_, lean_object* v_as_307_, lean_object* v_i_308_, lean_object* v_stop_309_, lean_object* v_b_310_){
_start:
{
uint8_t v___x_4627__boxed_311_; size_t v_i_boxed_312_; size_t v_stop_boxed_313_; lean_object* v_res_314_; 
v___x_4627__boxed_311_ = lean_unbox(v___x_305_);
v_i_boxed_312_ = lean_unbox_usize(v_i_308_);
lean_dec(v_i_308_);
v_stop_boxed_313_ = lean_unbox_usize(v_stop_309_);
lean_dec(v_stop_309_);
v_res_314_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(v___x_4627__boxed_311_, v_snd_306_, v_as_307_, v_i_boxed_312_, v_stop_boxed_313_, v_b_310_);
lean_dec_ref(v_as_307_);
lean_dec_ref(v_snd_306_);
return v_res_314_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_318_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__2));
v___x_319_ = lean_unsigned_to_nat(10u);
v___x_320_ = lean_unsigned_to_nat(60u);
v___x_321_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__1));
v___x_322_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__0));
v___x_323_ = l_mkPanicMessageWithDecl(v___x_322_, v___x_321_, v___x_320_, v___x_319_, v___x_318_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(lean_object* v_a_327_, lean_object* v___x_328_, lean_object* v___x_329_, lean_object* v_completionPos_330_, lean_object* v___x_331_, lean_object* v___x_332_, lean_object* v___x_333_, lean_object* v___x_334_, lean_object* v_x_335_){
_start:
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = l_Lean_Syntax_getArg(v_a_327_, v___x_331_);
v___x_393_ = l_Lean_Syntax_isNone(v___x_392_);
if (v___x_393_ == 0)
{
uint8_t v___x_394_; 
lean_inc(v___x_392_);
v___x_394_ = l_Lean_Syntax_matchesNull(v___x_392_, v___x_331_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; lean_object* v___x_396_; 
lean_dec(v___x_392_);
lean_dec_ref(v___x_334_);
lean_dec_ref(v___x_333_);
lean_dec_ref(v___x_332_);
v___x_395_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_396_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_395_);
return v___x_396_;
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_397_ = l_Lean_Syntax_getArg(v___x_392_, v___x_329_);
lean_dec(v___x_392_);
v___x_398_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__6));
lean_inc_ref(v___x_334_);
lean_inc_ref(v___x_333_);
lean_inc_ref(v___x_332_);
v___x_399_ = l_Lean_Name_mkStr4(v___x_332_, v___x_333_, v___x_334_, v___x_398_);
v___x_400_ = l_Lean_Syntax_isOfKind(v___x_397_, v___x_399_);
lean_dec(v___x_399_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; 
lean_dec_ref(v___x_334_);
lean_dec_ref(v___x_333_);
lean_dec_ref(v___x_332_);
v___x_401_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_402_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_401_);
return v___x_402_;
}
else
{
goto v___jp_379_;
}
}
}
else
{
lean_dec(v___x_392_);
goto v___jp_379_;
}
v___jp_336_:
{
lean_object* v___x_337_; lean_object* v_importId_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_337_ = lean_unsigned_to_nat(4u);
v_importId_338_ = l_Lean_Syntax_getArg(v_a_327_, v___x_337_);
v___x_339_ = lean_unsigned_to_nat(5u);
v___x_340_ = l_Lean_Syntax_getArg(v_a_327_, v___x_339_);
v___x_341_ = l_Lean_Syntax_isNone(v___x_340_);
if (v___x_341_ == 0)
{
uint8_t v___x_342_; 
lean_inc(v___x_340_);
v___x_342_ = l_Lean_Syntax_matchesNull(v___x_340_, v___x_328_);
if (v___x_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v___x_340_);
lean_dec(v_importId_338_);
v___x_343_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_344_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_343_);
return v___x_344_;
}
else
{
lean_object* v_trailingDotTk_x3f_345_; lean_object* v___x_346_; 
v_trailingDotTk_x3f_345_ = l_Lean_Syntax_getArg(v___x_340_, v___x_329_);
lean_dec(v___x_340_);
v___x_346_ = l_Lean_Syntax_getTailPos_x3f(v_trailingDotTk_x3f_345_, v___x_341_);
lean_dec(v_trailingDotTk_x3f_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v___x_347_; 
lean_dec(v_importId_338_);
v___x_347_ = lean_box(0);
return v___x_347_;
}
else
{
lean_object* v_val_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_360_; 
v_val_348_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_360_ == 0)
{
v___x_350_ = v___x_346_;
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_val_348_);
lean_dec(v___x_346_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
uint8_t v_decide_352_; 
v_decide_352_ = lean_nat_dec_eq(v_val_348_, v_completionPos_330_);
lean_dec(v_val_348_);
if (v_decide_352_ == 0)
{
lean_object* v___x_353_; 
lean_del_object(v___x_350_);
lean_dec(v_importId_338_);
v___x_353_ = lean_box(0);
return v___x_353_;
}
else
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_358_; 
v___x_354_ = l_Lean_TSyntax_getId(v_importId_338_);
lean_dec(v_importId_338_);
v___x_355_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4));
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_354_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_356_);
v___x_358_ = v___x_350_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
else
{
uint8_t v___x_361_; lean_object* v___x_362_; 
lean_dec(v___x_340_);
v___x_361_ = 0;
v___x_362_ = l_Lean_Syntax_getTailPos_x3f(v_importId_338_, v___x_361_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v___x_363_; 
lean_dec(v_importId_338_);
v___x_363_ = lean_box(0);
return v___x_363_;
}
else
{
lean_object* v_val_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_378_; 
v_val_364_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_378_ == 0)
{
v___x_366_ = v___x_362_;
v_isShared_367_ = v_isSharedCheck_378_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_val_364_);
lean_dec(v___x_362_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_378_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
uint8_t v_decide_368_; 
v_decide_368_ = lean_nat_dec_eq(v_val_364_, v_completionPos_330_);
lean_dec(v_val_364_);
if (v_decide_368_ == 0)
{
lean_object* v___x_369_; 
lean_del_object(v___x_366_);
lean_dec(v_importId_338_);
v___x_369_ = lean_box(0);
return v___x_369_;
}
else
{
lean_object* v___x_370_; 
v___x_370_ = l_Lean_TSyntax_getId(v_importId_338_);
lean_dec(v_importId_338_);
if (lean_obj_tag(v___x_370_) == 1)
{
lean_object* v_pre_371_; lean_object* v_str_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v_pre_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_pre_371_);
v_str_372_ = lean_ctor_get(v___x_370_, 1);
lean_inc_ref(v_str_372_);
lean_dec_ref_known(v___x_370_, 2);
v___x_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_373_, 0, v_pre_371_);
lean_ctor_set(v___x_373_, 1, v_str_372_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 0, v___x_373_);
v___x_375_ = v___x_366_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
else
{
lean_object* v___x_377_; 
lean_dec(v___x_370_);
lean_del_object(v___x_366_);
v___x_377_ = lean_box(0);
return v___x_377_;
}
}
}
}
}
}
v___jp_379_:
{
lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_380_ = lean_unsigned_to_nat(3u);
v___x_381_ = l_Lean_Syntax_getArg(v_a_327_, v___x_380_);
v___x_382_ = l_Lean_Syntax_isNone(v___x_381_);
if (v___x_382_ == 0)
{
uint8_t v___x_383_; 
lean_inc(v___x_381_);
v___x_383_ = l_Lean_Syntax_matchesNull(v___x_381_, v___x_331_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; lean_object* v___x_385_; 
lean_dec(v___x_381_);
lean_dec_ref(v___x_334_);
lean_dec_ref(v___x_333_);
lean_dec_ref(v___x_332_);
v___x_384_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_385_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_384_);
return v___x_385_;
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_386_ = l_Lean_Syntax_getArg(v___x_381_, v___x_329_);
lean_dec(v___x_381_);
v___x_387_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__5));
v___x_388_ = l_Lean_Name_mkStr4(v___x_332_, v___x_333_, v___x_334_, v___x_387_);
v___x_389_ = l_Lean_Syntax_isOfKind(v___x_386_, v___x_388_);
lean_dec(v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_391_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_390_);
return v___x_391_;
}
else
{
goto v___jp_336_;
}
}
}
else
{
lean_dec(v___x_381_);
lean_dec_ref(v___x_334_);
lean_dec_ref(v___x_333_);
lean_dec_ref(v___x_332_);
goto v___jp_336_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___boxed(lean_object* v_a_403_, lean_object* v___x_404_, lean_object* v___x_405_, lean_object* v_completionPos_406_, lean_object* v___x_407_, lean_object* v___x_408_, lean_object* v___x_409_, lean_object* v___x_410_, lean_object* v_x_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(v_a_403_, v___x_404_, v___x_405_, v_completionPos_406_, v___x_407_, v___x_408_, v___x_409_, v___x_410_, v_x_411_);
lean_dec(v___x_407_);
lean_dec(v_completionPos_406_);
lean_dec(v___x_405_);
lean_dec(v___x_404_);
lean_dec(v_a_403_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(lean_object* v_completionPos_428_, lean_object* v_as_429_, size_t v_sz_430_, size_t v_i_431_, lean_object* v_b_432_){
_start:
{
uint8_t v___x_433_; 
v___x_433_ = lean_usize_dec_lt(v_i_431_, v_sz_430_);
if (v___x_433_ == 0)
{
lean_inc_ref(v_b_432_);
return v_b_432_;
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___y_437_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v_a_447_; uint8_t v___x_448_; 
v___x_434_ = lean_box(0);
v___x_435_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0));
v___x_443_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__0));
v___x_444_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__1));
v___x_445_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__2));
v___x_446_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__2));
v_a_447_ = lean_array_uget_borrowed(v_as_429_, v_i_431_);
lean_inc(v_a_447_);
v___x_448_ = l_Lean_Syntax_isOfKind(v_a_447_, v___x_446_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_450_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_449_);
v___y_437_ = v___x_450_;
goto v___jp_436_;
}
else
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_451_ = lean_unsigned_to_nat(2u);
v___x_452_ = lean_unsigned_to_nat(0u);
v___x_453_ = lean_unsigned_to_nat(1u);
v___x_454_ = l_Lean_Syntax_getArg(v_a_447_, v___x_452_);
v___x_455_ = l_Lean_Syntax_isNone(v___x_454_);
if (v___x_455_ == 0)
{
uint8_t v___x_456_; 
lean_inc(v___x_454_);
v___x_456_ = l_Lean_Syntax_matchesNull(v___x_454_, v___x_453_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec(v___x_454_);
v___x_457_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_458_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_457_);
v___y_437_ = v___x_458_;
goto v___jp_436_;
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_459_ = l_Lean_Syntax_getArg(v___x_454_, v___x_452_);
lean_dec(v___x_454_);
v___x_460_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__4));
v___x_461_ = l_Lean_Syntax_isOfKind(v___x_459_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__3);
v___x_463_ = l_panic___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__2(v___x_462_);
v___y_437_ = v___x_463_;
goto v___jp_436_;
}
else
{
lean_object* v___x_464_; 
v___x_464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(v_a_447_, v___x_451_, v___x_452_, v_completionPos_428_, v___x_453_, v___x_443_, v___x_444_, v___x_445_, v___x_434_);
v___y_437_ = v___x_464_;
goto v___jp_436_;
}
}
}
else
{
lean_object* v___x_465_; 
lean_dec(v___x_454_);
v___x_465_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0(v_a_447_, v___x_451_, v___x_452_, v_completionPos_428_, v___x_453_, v___x_443_, v___x_444_, v___x_445_, v___x_434_);
v___y_437_ = v___x_465_;
goto v___jp_436_;
}
}
v___jp_436_:
{
if (lean_obj_tag(v___y_437_) == 1)
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v___y_437_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
lean_ctor_set(v___x_439_, 1, v___x_434_);
return v___x_439_;
}
else
{
size_t v___x_440_; size_t v___x_441_; 
lean_dec(v___y_437_);
v___x_440_ = ((size_t)1ULL);
v___x_441_ = lean_usize_add(v_i_431_, v___x_440_);
v_i_431_ = v___x_441_;
v_b_432_ = v___x_435_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___boxed(lean_object* v_completionPos_466_, lean_object* v_as_467_, lean_object* v_sz_468_, lean_object* v_i_469_, lean_object* v_b_470_){
_start:
{
size_t v_sz_boxed_471_; size_t v_i_boxed_472_; lean_object* v_res_473_; 
v_sz_boxed_471_ = lean_unbox_usize(v_sz_468_);
lean_dec(v_sz_468_);
v_i_boxed_472_ = lean_unbox_usize(v_i_469_);
lean_dec(v_i_469_);
v_res_473_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(v_completionPos_466_, v_as_467_, v_sz_boxed_471_, v_i_boxed_472_, v_b_470_);
lean_dec_ref(v_b_470_);
lean_dec_ref(v_as_467_);
lean_dec(v_completionPos_466_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(lean_object* v_fst_474_, size_t v_sz_475_, size_t v_i_476_, lean_object* v_bs_477_){
_start:
{
uint8_t v___x_478_; 
v___x_478_ = lean_usize_dec_lt(v_i_476_, v_sz_475_);
if (v___x_478_ == 0)
{
return v_bs_477_;
}
else
{
lean_object* v_v_479_; lean_object* v___x_480_; lean_object* v_bs_x27_481_; lean_object* v___x_482_; lean_object* v___x_483_; size_t v___x_484_; size_t v___x_485_; lean_object* v___x_486_; 
v_v_479_ = lean_array_uget(v_bs_477_, v_i_476_);
v___x_480_ = lean_unsigned_to_nat(0u);
v_bs_x27_481_ = lean_array_uset(v_bs_477_, v_i_476_, v___x_480_);
v___x_482_ = lean_box(0);
v___x_483_ = l_Lean_Name_replacePrefix(v_v_479_, v_fst_474_, v___x_482_);
v___x_484_ = ((size_t)1ULL);
v___x_485_ = lean_usize_add(v_i_476_, v___x_484_);
v___x_486_ = lean_array_uset(v_bs_x27_481_, v_i_476_, v___x_483_);
v_i_476_ = v___x_485_;
v_bs_477_ = v___x_486_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4___boxed(lean_object* v_fst_488_, lean_object* v_sz_489_, lean_object* v_i_490_, lean_object* v_bs_491_){
_start:
{
size_t v_sz_boxed_492_; size_t v_i_boxed_493_; lean_object* v_res_494_; 
v_sz_boxed_492_ = lean_unbox_usize(v_sz_489_);
lean_dec(v_sz_489_);
v_i_boxed_493_ = lean_unbox_usize(v_i_490_);
lean_dec(v_i_490_);
v_res_494_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(v_fst_488_, v_sz_boxed_492_, v_i_boxed_493_, v_bs_491_);
lean_dec(v_fst_488_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(lean_object* v_as_495_, size_t v_i_496_, size_t v_stop_497_, lean_object* v_b_498_){
_start:
{
lean_object* v___y_500_; uint8_t v___x_504_; 
v___x_504_ = lean_usize_dec_eq(v_i_496_, v_stop_497_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_array_uget_borrowed(v_as_495_, v_i_496_);
v___x_506_ = l_Lean_Name_isAnonymous(v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_inc(v___x_505_);
v___x_507_ = lean_array_push(v_b_498_, v___x_505_);
v___y_500_ = v___x_507_;
goto v___jp_499_;
}
else
{
v___y_500_ = v_b_498_;
goto v___jp_499_;
}
}
else
{
return v_b_498_;
}
v___jp_499_:
{
size_t v___x_501_; size_t v___x_502_; 
v___x_501_ = ((size_t)1ULL);
v___x_502_ = lean_usize_add(v_i_496_, v___x_501_);
v_i_496_ = v___x_502_;
v_b_498_ = v___y_500_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1___boxed(lean_object* v_as_508_, lean_object* v_i_509_, lean_object* v_stop_510_, lean_object* v_b_511_){
_start:
{
size_t v_i_boxed_512_; size_t v_stop_boxed_513_; lean_object* v_res_514_; 
v_i_boxed_512_ = lean_unbox_usize(v_i_509_);
lean_dec(v_i_509_);
v_stop_boxed_513_ = lean_unbox_usize(v_stop_510_);
lean_dec(v_stop_510_);
v_res_514_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(v_as_508_, v_i_boxed_512_, v_stop_boxed_513_, v_b_511_);
lean_dec_ref(v_as_508_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(lean_object* v_headerStx_517_, lean_object* v_completionPos_518_, lean_object* v_availableImports_519_){
_start:
{
lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___x_530_; uint8_t v___x_531_; 
v___x_530_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__4));
lean_inc(v_headerStx_517_);
v___x_531_ = l_Lean_Syntax_isOfKind(v_headerStx_517_, v___x_530_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; 
lean_dec_ref(v_availableImports_519_);
lean_dec(v_headerStx_517_);
v___x_532_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_532_;
}
else
{
lean_object* v___x_533_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___y_551_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_582_ = l_Lean_Syntax_getArg(v_headerStx_517_, v___x_533_);
v___x_583_ = l_Lean_Syntax_isNone(v___x_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_582_);
v___x_585_ = l_Lean_Syntax_matchesNull(v___x_582_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; 
lean_dec(v___x_582_);
lean_dec_ref(v_availableImports_519_);
lean_dec(v_headerStx_517_);
v___x_586_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_586_;
}
else
{
lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v___x_587_ = l_Lean_Syntax_getArg(v___x_582_, v___x_533_);
lean_dec(v___x_582_);
v___x_588_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__8));
v___x_589_ = l_Lean_Syntax_isOfKind(v___x_587_, v___x_588_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
lean_dec_ref(v_availableImports_519_);
lean_dec(v_headerStx_517_);
v___x_590_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_590_;
}
else
{
goto v___jp_572_;
}
}
}
else
{
lean_dec(v___x_582_);
goto v___jp_572_;
}
v___jp_534_:
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = lean_array_get_size(v___y_536_);
v___x_538_ = lean_nat_dec_eq(v___x_537_, v___x_533_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_539_ = lean_nat_sub(v___x_537_, v___y_535_);
v___x_540_ = lean_nat_dec_le(v___x_533_, v___x_539_);
if (v___x_540_ == 0)
{
lean_inc(v___x_539_);
v___y_523_ = v___x_537_;
v___y_524_ = v___x_539_;
v___y_525_ = v___y_536_;
v___y_526_ = v___x_539_;
goto v___jp_522_;
}
else
{
v___y_523_ = v___x_537_;
v___y_524_ = v___x_539_;
v___y_525_ = v___y_536_;
v___y_526_ = v___x_533_;
goto v___jp_522_;
}
}
else
{
return v___y_536_;
}
}
v___jp_541_:
{
lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_544_ = lean_array_get_size(v___y_543_);
v___x_545_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
v___x_546_ = lean_nat_dec_lt(v___x_533_, v___x_544_);
if (v___x_546_ == 0)
{
lean_dec_ref(v___y_543_);
v___y_535_ = v___y_542_;
v___y_536_ = v___x_545_;
goto v___jp_534_;
}
else
{
size_t v___x_547_; size_t v___x_548_; lean_object* v___x_549_; 
v___x_547_ = ((size_t)0ULL);
v___x_548_ = lean_usize_of_nat(v___x_544_);
v___x_549_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__1(v___y_543_, v___x_547_, v___x_548_, v___x_545_);
lean_dec_ref(v___y_543_);
v___y_535_ = v___y_542_;
v___y_536_ = v___x_549_;
goto v___jp_534_;
}
}
v___jp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v_importsStx_554_; lean_object* v___x_555_; size_t v_sz_556_; size_t v___x_557_; lean_object* v___x_558_; lean_object* v_fst_559_; 
v___x_552_ = lean_unsigned_to_nat(2u);
v___x_553_ = l_Lean_Syntax_getArg(v_headerStx_517_, v___x_552_);
lean_dec(v_headerStx_517_);
v_importsStx_554_ = l_Lean_Syntax_getArgs(v___x_553_);
lean_dec(v___x_553_);
v___x_555_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___closed__0));
v_sz_556_ = lean_array_size(v_importsStx_554_);
v___x_557_ = ((size_t)0ULL);
v___x_558_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3(v_completionPos_518_, v_importsStx_554_, v_sz_556_, v___x_557_, v___x_555_);
lean_dec_ref(v_importsStx_554_);
v_fst_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_fst_559_);
lean_dec_ref(v___x_558_);
if (lean_obj_tag(v_fst_559_) == 0)
{
lean_dec_ref(v_availableImports_519_);
goto v___jp_520_;
}
else
{
lean_object* v_val_560_; 
v_val_560_ = lean_ctor_get(v_fst_559_, 0);
lean_inc(v_val_560_);
lean_dec_ref_known(v_fst_559_, 1);
if (lean_obj_tag(v_val_560_) == 1)
{
lean_object* v_val_561_; lean_object* v_fst_562_; lean_object* v_snd_563_; lean_object* v___x_564_; size_t v_sz_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
v_val_561_ = lean_ctor_get(v_val_560_, 0);
lean_inc(v_val_561_);
lean_dec_ref_known(v_val_560_, 1);
v_fst_562_ = lean_ctor_get(v_val_561_, 0);
lean_inc(v_fst_562_);
v_snd_563_ = lean_ctor_get(v_val_561_, 1);
lean_inc(v_snd_563_);
lean_dec(v_val_561_);
v___x_564_ = l_Lean_NameTrie_matchingToArray___redArg(v_availableImports_519_, v_fst_562_);
v_sz_565_ = lean_array_size(v___x_564_);
v___x_566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__4(v_fst_562_, v_sz_565_, v___x_557_, v___x_564_);
lean_dec(v_fst_562_);
v___x_567_ = lean_array_get_size(v___x_566_);
v___x_568_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
v___x_569_ = lean_nat_dec_lt(v___x_533_, v___x_567_);
if (v___x_569_ == 0)
{
lean_dec_ref(v___x_566_);
lean_dec(v_snd_563_);
v___y_542_ = v___y_551_;
v___y_543_ = v___x_568_;
goto v___jp_541_;
}
else
{
size_t v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_usize_of_nat(v___x_567_);
v___x_571_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__5(v___x_531_, v_snd_563_, v___x_566_, v___x_557_, v___x_570_, v___x_568_);
lean_dec_ref(v___x_566_);
lean_dec(v_snd_563_);
v___y_542_ = v___y_551_;
v___y_543_ = v___x_571_;
goto v___jp_541_;
}
}
else
{
lean_dec(v_val_560_);
lean_dec_ref(v_availableImports_519_);
goto v___jp_520_;
}
}
}
v___jp_572_:
{
lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_573_ = lean_unsigned_to_nat(1u);
v___x_574_ = l_Lean_Syntax_getArg(v_headerStx_517_, v___x_573_);
v___x_575_ = l_Lean_Syntax_isNone(v___x_574_);
if (v___x_575_ == 0)
{
uint8_t v___x_576_; 
lean_inc(v___x_574_);
v___x_576_ = l_Lean_Syntax_matchesNull(v___x_574_, v___x_573_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
lean_dec(v___x_574_);
lean_dec_ref(v_availableImports_519_);
lean_dec(v_headerStx_517_);
v___x_577_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_577_;
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_578_ = l_Lean_Syntax_getArg(v___x_574_, v___x_533_);
lean_dec(v___x_574_);
v___x_579_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest___closed__6));
v___x_580_ = l_Lean_Syntax_isOfKind(v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; 
lean_dec_ref(v_availableImports_519_);
lean_dec(v_headerStx_517_);
v___x_581_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_581_;
}
else
{
v___y_551_ = v___x_573_;
goto v___jp_550_;
}
}
}
else
{
lean_dec(v___x_574_);
v___y_551_ = v___x_573_;
goto v___jp_550_;
}
}
}
v___jp_520_:
{
lean_object* v___x_521_; 
v___x_521_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
return v___x_521_;
}
v___jp_522_:
{
uint8_t v___x_527_; 
v___x_527_ = lean_nat_dec_le(v___y_526_, v___y_524_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
lean_dec(v___y_524_);
lean_inc(v___y_526_);
v___x_528_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v___y_523_, v___y_525_, v___y_526_, v___y_526_);
lean_dec(v___y_526_);
lean_dec(v___y_523_);
return v___x_528_;
}
else
{
lean_object* v___x_529_; 
v___x_529_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v___y_523_, v___y_525_, v___y_526_, v___y_524_);
lean_dec(v___y_524_);
lean_dec(v___y_523_);
return v___x_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___boxed(lean_object* v_headerStx_591_, lean_object* v_completionPos_592_, lean_object* v_availableImports_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(v_headerStx_591_, v_completionPos_592_, v_availableImports_593_);
lean_dec(v_completionPos_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0(lean_object* v_n_595_, lean_object* v_as_596_, lean_object* v_lo_597_, lean_object* v_hi_598_, lean_object* v_w_599_, lean_object* v_hlo_600_, lean_object* v_hhi_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___redArg(v_n_595_, v_as_596_, v_lo_597_, v_hi_598_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0___boxed(lean_object* v_n_603_, lean_object* v_as_604_, lean_object* v_lo_605_, lean_object* v_hi_606_, lean_object* v_w_607_, lean_object* v_hlo_608_, lean_object* v_hhi_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0(v_n_603_, v_as_604_, v_lo_605_, v_hi_606_, v_w_607_, v_hlo_608_, v_hhi_609_);
lean_dec(v_hi_606_);
lean_dec(v_n_603_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0(lean_object* v_n_611_, lean_object* v_lo_612_, lean_object* v_hi_613_, lean_object* v_hhi_614_, lean_object* v_pivot_615_, lean_object* v_as_616_, lean_object* v_i_617_, lean_object* v_k_618_, lean_object* v_ilo_619_, lean_object* v_ik_620_, lean_object* v_w_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___redArg(v_hi_613_, v_pivot_615_, v_as_616_, v_i_617_, v_k_618_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0___boxed(lean_object* v_n_623_, lean_object* v_lo_624_, lean_object* v_hi_625_, lean_object* v_hhi_626_, lean_object* v_pivot_627_, lean_object* v_as_628_, lean_object* v_i_629_, lean_object* v_k_630_, lean_object* v_ilo_631_, lean_object* v_ik_632_, lean_object* v_w_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__0_spec__0(v_n_623_, v_lo_624_, v_hi_625_, v_hhi_626_, v_pivot_627_, v_as_628_, v_i_629_, v_k_630_, v_ilo_631_, v_ik_632_, v_w_633_);
lean_dec(v_pivot_627_);
lean_dec(v_hi_625_);
lean_dec(v_lo_624_);
lean_dec(v_n_623_);
return v_res_634_;
}
}
LEAN_EXPORT uint8_t l_Lean_Lsp_ImportCompletion_isImportCompletionRequest(lean_object* v_text_635_, lean_object* v_headerStx_636_, lean_object* v_params_637_){
_start:
{
lean_object* v_position_638_; lean_object* v_completionPos_639_; lean_object* v___y_641_; uint8_t v___x_646_; lean_object* v___y_648_; lean_object* v___x_651_; 
v_position_638_ = lean_ctor_get(v_params_637_, 1);
lean_inc_ref(v_position_638_);
lean_dec_ref(v_params_637_);
v_completionPos_639_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_635_, v_position_638_);
v___x_646_ = 0;
v___x_651_ = l_Lean_Syntax_getPos_x3f(v_headerStx_636_, v___x_646_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v___x_652_; 
v___x_652_ = lean_unsigned_to_nat(0u);
v___y_648_ = v___x_652_;
goto v___jp_647_;
}
else
{
lean_object* v_val_653_; 
v_val_653_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_val_653_);
lean_dec_ref_known(v___x_651_, 1);
v___y_648_ = v_val_653_;
goto v___jp_647_;
}
v___jp_640_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_642_ = lean_unsigned_to_nat(1u);
v___x_643_ = lean_nat_add(v___y_641_, v___x_642_);
lean_dec(v___y_641_);
v___x_644_ = lean_nat_add(v___x_643_, v___x_642_);
lean_dec(v___x_643_);
v___x_645_ = lean_nat_dec_le(v_completionPos_639_, v___x_644_);
lean_dec(v___x_644_);
lean_dec(v_completionPos_639_);
return v___x_645_;
}
v___jp_647_:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lean_Syntax_getTailPos_x3f(v_headerStx_636_, v___x_646_);
if (lean_obj_tag(v___x_649_) == 0)
{
v___y_641_ = v___y_648_;
goto v___jp_640_;
}
else
{
lean_object* v_val_650_; 
lean_dec(v___y_648_);
v_val_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_val_650_);
lean_dec_ref_known(v___x_649_, 1);
v___y_641_ = v_val_650_;
goto v___jp_640_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_isImportCompletionRequest___boxed(lean_object* v_text_654_, lean_object* v_headerStx_655_, lean_object* v_params_656_){
_start:
{
uint8_t v_res_657_; lean_object* v_r_658_; 
v_res_657_ = l_Lean_Lsp_ImportCompletion_isImportCompletionRequest(v_text_654_, v_headerStx_655_, v_params_656_);
lean_dec(v_headerStx_655_);
lean_dec_ref(v_text_654_);
v_r_658_ = lean_box(v_res_657_);
return v_r_658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(size_t v_sz_659_, size_t v_i_660_, lean_object* v_bs_661_){
_start:
{
uint8_t v___x_662_; 
v___x_662_ = lean_usize_dec_lt(v_i_660_, v_sz_659_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; 
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v_bs_661_);
return v___x_663_;
}
else
{
lean_object* v_v_664_; lean_object* v___x_665_; 
v_v_664_ = lean_array_uget_borrowed(v_bs_661_, v_i_660_);
lean_inc(v_v_664_);
v___x_665_ = l_Lean_Name_fromJson_x3f(v_v_664_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
lean_dec_ref(v_bs_661_);
v_a_666_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_665_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_675_; lean_object* v_bs_x27_676_; size_t v___x_677_; size_t v___x_678_; lean_object* v___x_679_; 
v_a_674_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_674_);
lean_dec_ref_known(v___x_665_, 1);
v___x_675_ = lean_unsigned_to_nat(0u);
v_bs_x27_676_ = lean_array_uset(v_bs_661_, v_i_660_, v___x_675_);
v___x_677_ = ((size_t)1ULL);
v___x_678_ = lean_usize_add(v_i_660_, v___x_677_);
v___x_679_ = lean_array_uset(v_bs_x27_676_, v_i_660_, v_a_674_);
v_i_660_ = v___x_678_;
v_bs_661_ = v___x_679_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0___boxed(lean_object* v_sz_681_, lean_object* v_i_682_, lean_object* v_bs_683_){
_start:
{
size_t v_sz_boxed_684_; size_t v_i_boxed_685_; lean_object* v_res_686_; 
v_sz_boxed_684_ = lean_unbox_usize(v_sz_681_);
lean_dec(v_sz_681_);
v_i_boxed_685_ = lean_unbox_usize(v_i_682_);
lean_dec(v_i_682_);
v_res_686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(v_sz_boxed_684_, v_i_boxed_685_, v_bs_683_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0(lean_object* v_x_689_){
_start:
{
if (lean_obj_tag(v_x_689_) == 4)
{
lean_object* v_elems_690_; size_t v_sz_691_; size_t v___x_692_; lean_object* v___x_693_; 
v_elems_690_ = lean_ctor_get(v_x_689_, 0);
lean_inc_ref(v_elems_690_);
lean_dec_ref_known(v_x_689_, 1);
v_sz_691_ = lean_array_size(v_elems_690_);
v___x_692_ = ((size_t)0ULL);
v___x_693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0_spec__0(v_sz_691_, v___x_692_, v_elems_690_);
return v___x_693_;
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_694_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__0));
v___x_695_ = lean_unsigned_to_nat(80u);
v___x_696_ = l_Lean_Json_pretty(v_x_689_, v___x_695_);
v___x_697_ = lean_string_append(v___x_694_, v___x_696_);
lean_dec_ref(v___x_696_);
v___x_698_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0___closed__1));
v___x_699_ = lean_string_append(v___x_697_, v___x_698_);
v___x_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake(){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lean_determineLakePath();
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; uint8_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc(v_a_714_);
lean_dec_ref_known(v___x_713_, 1);
v___x_715_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__0));
v___x_716_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__2));
v___x_717_ = lean_box(0);
v___x_718_ = lean_unsigned_to_nat(0u);
v___x_719_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__3));
v___x_720_ = 1;
v___x_721_ = 0;
v___x_722_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_722_, 0, v___x_715_);
lean_ctor_set(v___x_722_, 1, v_a_714_);
lean_ctor_set(v___x_722_, 2, v___x_716_);
lean_ctor_set(v___x_722_, 3, v___x_717_);
lean_ctor_set(v___x_722_, 4, v___x_719_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*5, v___x_720_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*5 + 1, v___x_721_);
v___x_723_ = lean_io_process_spawn(v___x_722_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v_stdout_725_; lean_object* v___x_726_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
v_stdout_725_ = lean_ctor_get(v_a_724_, 1);
v___x_726_ = l_IO_FS_Handle_readToEnd(v_stdout_725_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_779_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_779_ == 0)
{
v___x_729_ = v___x_726_;
v_isShared_730_ = v_isSharedCheck_779_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_779_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v_str_734_; lean_object* v_startInclusive_735_; lean_object* v_endExclusive_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_731_ = lean_string_utf8_byte_size(v_a_727_);
v___x_732_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_732_, 0, v_a_727_);
lean_ctor_set(v___x_732_, 1, v___x_718_);
lean_ctor_set(v___x_732_, 2, v___x_731_);
v___x_733_ = l_String_Slice_trimAscii(v___x_732_);
v_str_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc_ref(v_str_734_);
v_startInclusive_735_ = lean_ctor_get(v___x_733_, 1);
lean_inc(v_startInclusive_735_);
v_endExclusive_736_ = lean_ctor_get(v___x_733_, 2);
lean_inc(v_endExclusive_736_);
lean_dec_ref(v___x_733_);
v___x_737_ = lean_string_utf8_extract_fast(v_str_734_, v_startInclusive_735_, v_endExclusive_736_);
lean_dec(v_endExclusive_736_);
lean_dec(v_startInclusive_735_);
lean_dec_ref(v_str_734_);
v___x_738_ = lean_io_process_child_wait(v___x_715_, v_a_724_);
lean_dec(v_a_724_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_770_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_770_ == 0)
{
v___x_741_ = v___x_738_;
v_isShared_742_ = v_isSharedCheck_770_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_738_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_770_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
uint32_t v___x_750_; uint32_t v___x_751_; uint8_t v___x_752_; 
v___x_750_ = 0;
v___x_751_ = lean_unbox_uint32(v_a_739_);
lean_dec(v_a_739_);
v___x_752_ = lean_uint32_dec_eq(v___x_751_, v___x_750_);
if (v___x_752_ == 0)
{
lean_object* v___x_754_; 
lean_del_object(v___x_741_);
lean_dec_ref(v___x_737_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_717_);
v___x_754_ = v___x_729_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_717_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
else
{
lean_object* v___x_756_; 
lean_inc_ref(v___x_737_);
v___x_756_ = l_Lean_Json_parse(v___x_737_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_dec_ref_known(v___x_756_, 1);
lean_del_object(v___x_729_);
goto v___jp_743_;
}
else
{
lean_object* v_a_757_; lean_object* v___x_758_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_756_, 1);
v___x_758_ = l_Lean_Array_fromJson_x3f___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake_spec__0(v_a_757_);
if (lean_obj_tag(v___x_758_) == 1)
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_769_; 
lean_del_object(v___x_741_);
lean_dec_ref(v___x_737_);
v_a_759_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_769_ == 0)
{
v___x_761_ = v___x_758_;
v_isShared_762_ = v_isSharedCheck_769_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_758_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_769_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_768_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v___x_766_; 
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_764_);
v___x_766_ = v___x_729_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_764_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_dec_ref(v___x_758_);
lean_del_object(v___x_729_);
goto v___jp_743_;
}
}
}
v___jp_743_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_744_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___closed__4));
v___x_745_ = lean_string_append(v___x_744_, v___x_737_);
lean_dec_ref(v___x_737_);
v___x_746_ = lean_mk_io_user_error(v___x_745_);
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 1);
lean_ctor_set(v___x_741_, 0, v___x_746_);
v___x_748_ = v___x_741_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_746_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v___x_737_);
lean_del_object(v___x_729_);
v_a_771_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_738_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_738_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_a_724_);
v_a_780_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_726_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_726_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
v_a_788_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_723_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_723_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
else
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_803_; 
v_a_796_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_803_ == 0)
{
v___x_798_ = v___x_713_;
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_713_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_796_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake___boxed(lean_object* v_a_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake();
return v_res_805_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(lean_object* v_x_806_, lean_object* v_x_807_){
_start:
{
if (lean_obj_tag(v_x_806_) == 0)
{
if (lean_obj_tag(v_x_807_) == 0)
{
uint8_t v___x_808_; 
v___x_808_ = 1;
return v___x_808_;
}
else
{
uint8_t v___x_809_; 
v___x_809_ = 0;
return v___x_809_;
}
}
else
{
if (lean_obj_tag(v_x_807_) == 0)
{
uint8_t v___x_810_; 
v___x_810_ = 0;
return v___x_810_;
}
else
{
lean_object* v_val_811_; lean_object* v_val_812_; uint8_t v___x_813_; 
v_val_811_ = lean_ctor_get(v_x_806_, 0);
v_val_812_ = lean_ctor_get(v_x_807_, 0);
v___x_813_ = lean_string_dec_eq(v_val_811_, v_val_812_);
return v___x_813_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0___boxed(lean_object* v_x_814_, lean_object* v_x_815_){
_start:
{
uint8_t v_res_816_; lean_object* v_r_817_; 
v_res_816_ = l_instBEqOption_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(v_x_814_, v_x_815_);
lean_dec(v_x_815_);
lean_dec(v_x_814_);
v_r_817_ = lean_box(v_res_816_);
return v_r_817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0(lean_object* v___x_818_, lean_object* v_f_819_, lean_object* v_x_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = l_Lean_Name_append(v___x_818_, v_x_820_);
v___x_824_ = lean_apply_3(v_f_819_, v___x_823_, v___y_821_, lean_box(0));
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0___boxed(lean_object* v___x_825_, lean_object* v_f_826_, lean_object* v_x_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0(v___x_825_, v_f_826_, v_x_827_, v___y_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(lean_object* v_f_834_, lean_object* v_as_835_, size_t v_sz_836_, size_t v_i_837_, lean_object* v_b_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_a_842_; lean_object* v_snd_843_; uint8_t v___x_847_; 
v___x_847_ = lean_usize_dec_lt(v_i_837_, v_sz_836_);
if (v___x_847_ == 0)
{
lean_object* v___x_848_; lean_object* v___x_849_; 
lean_dec_ref(v_f_834_);
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v_b_838_);
lean_ctor_set(v___x_848_, 1, v___y_839_);
v___x_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
else
{
lean_object* v___x_850_; lean_object* v_a_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_850_ = lean_box(0);
v_a_851_ = lean_array_uget_borrowed(v_as_835_, v_i_837_);
lean_inc(v_a_851_);
v___x_852_ = l_IO_FS_DirEntry_path(v_a_851_);
v___x_853_ = l_System_FilePath_isDir(v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_854_ = l_System_FilePath_extension(v___x_852_);
v___x_855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___closed__1));
v___x_856_ = l_instBEqOption_beq___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__0(v___x_854_, v___x_855_);
lean_dec(v___x_854_);
if (v___x_856_ == 0)
{
v_a_842_ = v___x_850_;
v_snd_843_ = v___y_839_;
goto v___jp_841_;
}
else
{
lean_object* v_fileName_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_fileName_857_ = lean_ctor_get(v_a_851_, 1);
v___x_858_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Lsp_ImportCompletion_computePartialImportCompletions_spec__3___lam__0___closed__4));
lean_inc_ref(v_fileName_857_);
v___x_859_ = l_System_FilePath_withExtension(v_fileName_857_, v___x_858_);
v___x_860_ = lean_box(0);
v___x_861_ = l_Lean_Name_str___override(v___x_860_, v___x_859_);
lean_inc_ref(v_f_834_);
v___x_862_ = lean_apply_3(v_f_834_, v___x_861_, v___y_839_, lean_box(0));
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v_snd_864_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_862_, 1);
v_snd_864_ = lean_ctor_get(v_a_863_, 1);
lean_inc(v_snd_864_);
lean_dec(v_a_863_);
v_a_842_ = v___x_850_;
v_snd_843_ = v_snd_864_;
goto v___jp_841_;
}
else
{
lean_dec_ref(v_f_834_);
return v___x_862_;
}
}
}
else
{
lean_object* v_fileName_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___f_868_; lean_object* v___x_869_; 
v_fileName_865_ = lean_ctor_get(v_a_851_, 1);
v___x_866_ = lean_box(0);
lean_inc_ref(v_fileName_865_);
v___x_867_ = l_Lean_Name_str___override(v___x_866_, v_fileName_865_);
lean_inc_ref(v_f_834_);
v___f_868_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___lam__0___boxed), 5, 2);
lean_closure_set(v___f_868_, 0, v___x_867_);
lean_closure_set(v___f_868_, 1, v_f_834_);
v___x_869_ = l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(v___x_852_, v___f_868_, v___y_839_);
lean_dec_ref(v___x_852_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v_snd_871_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v_snd_871_ = lean_ctor_get(v_a_870_, 1);
lean_inc(v_snd_871_);
lean_dec(v_a_870_);
v_a_842_ = v___x_850_;
v_snd_843_ = v_snd_871_;
goto v___jp_841_;
}
else
{
lean_dec_ref(v_f_834_);
return v___x_869_;
}
}
}
v___jp_841_:
{
size_t v___x_844_; size_t v___x_845_; 
v___x_844_ = ((size_t)1ULL);
v___x_845_ = lean_usize_add(v_i_837_, v___x_844_);
v_i_837_ = v___x_845_;
v_b_838_ = v_a_842_;
v___y_839_ = v_snd_843_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(lean_object* v_dir_872_, lean_object* v_f_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = lean_io_read_dir(v_dir_872_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; size_t v_sz_879_; size_t v___x_880_; lean_object* v___x_881_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = lean_box(0);
v_sz_879_ = lean_array_size(v_a_877_);
v___x_880_ = ((size_t)0ULL);
v___x_881_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(v_f_873_, v_a_877_, v_sz_879_, v___x_880_, v___x_878_, v___y_874_);
lean_dec(v_a_877_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_898_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_898_ == 0)
{
v___x_884_ = v___x_881_;
v_isShared_885_ = v_isSharedCheck_898_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_881_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_898_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v_snd_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_896_; 
v_snd_886_ = lean_ctor_get(v_a_882_, 1);
v_isSharedCheck_896_ = !lean_is_exclusive(v_a_882_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v_a_882_, 0);
lean_dec(v_unused_897_);
v___x_888_ = v_a_882_;
v_isShared_889_ = v_isSharedCheck_896_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_snd_886_);
lean_dec(v_a_882_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_896_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_878_);
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_878_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_snd_886_);
v___x_891_ = v_reuseFailAlloc_895_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_893_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_891_);
v___x_893_ = v___x_884_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_891_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
else
{
return v___x_881_;
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec_ref(v___y_874_);
lean_dec_ref(v_f_873_);
v_a_899_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_876_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_876_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0___boxed(lean_object* v_dir_907_, lean_object* v_f_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(v_dir_907_, v_f_908_, v___y_909_);
lean_dec_ref(v_dir_907_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1___boxed(lean_object* v_f_912_, lean_object* v_as_913_, lean_object* v_sz_914_, lean_object* v_i_915_, lean_object* v_b_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
size_t v_sz_boxed_919_; size_t v_i_boxed_920_; lean_object* v_res_921_; 
v_sz_boxed_919_ = lean_unbox_usize(v_sz_914_);
lean_dec(v_sz_914_);
v_i_boxed_920_ = lean_unbox_usize(v_i_915_);
lean_dec(v_i_915_);
v_res_921_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0_spec__1(v_f_912_, v_as_913_, v_sz_boxed_919_, v_i_boxed_920_, v_b_916_, v___y_917_);
lean_dec_ref(v_as_913_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0(lean_object* v___x_922_, lean_object* v_mod_923_, lean_object* v___y_924_){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_926_ = lean_array_push(v___y_924_, v_mod_923_);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_922_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0___boxed(lean_object* v___x_929_, lean_object* v_mod_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___lam__0(v___x_929_, v_mod_930_, v___y_931_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(lean_object* v_as_x27_936_, lean_object* v_b_937_, lean_object* v___y_938_){
_start:
{
if (lean_obj_tag(v_as_x27_936_) == 0)
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v_b_937_);
lean_ctor_set(v___x_940_, 1, v___y_938_);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
return v___x_941_;
}
else
{
lean_object* v_head_942_; lean_object* v_tail_943_; lean_object* v___x_944_; lean_object* v___f_945_; uint8_t v___x_946_; 
v_head_942_ = lean_ctor_get(v_as_x27_936_, 0);
v_tail_943_ = lean_ctor_get(v_as_x27_936_, 1);
v___x_944_ = lean_box(0);
v___f_945_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___closed__0));
v___x_946_ = l_System_FilePath_isDir(v_head_942_);
if (v___x_946_ == 0)
{
v_as_x27_936_ = v_tail_943_;
v_b_937_ = v___x_944_;
goto _start;
}
else
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_forEachModuleInDir___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__0(v_head_942_, v___f_945_, v___y_938_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v_snd_950_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_948_, 1);
v_snd_950_ = lean_ctor_get(v_a_949_, 1);
lean_inc(v_snd_950_);
lean_dec(v_a_949_);
v_as_x27_936_ = v_tail_943_;
v_b_937_ = v___x_944_;
v___y_938_ = v_snd_950_;
goto _start;
}
else
{
return v___x_948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg___boxed(lean_object* v_as_x27_952_, lean_object* v_b_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(v_as_x27_952_, v_b_953_, v___y_954_);
lean_dec(v_as_x27_952_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath(){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = ((lean_object*)(l_Lean_Lsp_ImportCompletion_computePartialImportCompletions___closed__0));
v___x_959_ = l_Lean_getSrcSearchPath();
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
v___x_961_ = lean_box(0);
v___x_962_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(v_a_960_, v___x_961_, v___x_958_);
lean_dec(v_a_960_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_971_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_971_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_971_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_971_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v_snd_967_; lean_object* v___x_969_; 
v_snd_967_ = lean_ctor_get(v_a_963_, 1);
lean_inc(v_snd_967_);
lean_dec(v_a_963_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 0, v_snd_967_);
v___x_969_ = v___x_965_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_snd_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_a_972_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_962_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_962_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
v_a_980_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_959_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_959_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath___boxed(lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath();
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1(lean_object* v_as_990_, lean_object* v_as_x27_991_, lean_object* v_b_992_, lean_object* v_a_993_, lean_object* v___y_994_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___redArg(v_as_x27_991_, v_b_992_, v___y_994_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1___boxed(lean_object* v_as_997_, lean_object* v_as_x27_998_, lean_object* v_b_999_, lean_object* v_a_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_List_forIn_x27_loop___at___00Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath_spec__1(v_as_997_, v_as_x27_998_, v_b_999_, v_a_1000_, v___y_1001_);
lean_dec(v_as_x27_998_);
lean_dec(v_as_997_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports(){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromLake();
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1015_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1015_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1015_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
if (lean_obj_tag(v_a_1006_) == 0)
{
lean_object* v___x_1010_; 
lean_del_object(v___x_1008_);
v___x_1010_ = l_Lean_Lsp_ImportCompletion_collectAvailableImportsFromSrcSearchPath();
return v___x_1010_;
}
else
{
lean_object* v_val_1011_; lean_object* v___x_1013_; 
v_val_1011_ = lean_ctor_get(v_a_1006_, 0);
lean_inc(v_val_1011_);
lean_dec_ref_known(v_a_1006_, 1);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v_val_1011_);
v___x_1013_ = v___x_1008_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_val_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_a_1016_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1005_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1005_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_collectAvailableImports___boxed(lean_object* v_a_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lean_Lsp_ImportCompletion_collectAvailableImports();
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(lean_object* v_uri_1026_, lean_object* v_pos_1027_, size_t v_sz_1028_, size_t v_i_1029_, lean_object* v_bs_1030_){
_start:
{
uint8_t v___x_1031_; 
v___x_1031_ = lean_usize_dec_lt(v_i_1029_, v_sz_1028_);
if (v___x_1031_ == 0)
{
lean_dec_ref(v_pos_1027_);
lean_dec_ref(v_uri_1026_);
return v_bs_1030_;
}
else
{
lean_object* v_v_1032_; lean_object* v_label_1033_; lean_object* v_detail_x3f_1034_; lean_object* v_documentation_x3f_1035_; lean_object* v_kind_x3f_1036_; lean_object* v_textEdit_x3f_1037_; lean_object* v_sortText_x3f_1038_; lean_object* v_tags_x3f_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1066_; 
v_v_1032_ = lean_array_uget(v_bs_1030_, v_i_1029_);
v_label_1033_ = lean_ctor_get(v_v_1032_, 0);
v_detail_x3f_1034_ = lean_ctor_get(v_v_1032_, 1);
v_documentation_x3f_1035_ = lean_ctor_get(v_v_1032_, 2);
v_kind_x3f_1036_ = lean_ctor_get(v_v_1032_, 3);
v_textEdit_x3f_1037_ = lean_ctor_get(v_v_1032_, 4);
v_sortText_x3f_1038_ = lean_ctor_get(v_v_1032_, 5);
v_tags_x3f_1039_ = lean_ctor_get(v_v_1032_, 7);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_v_1032_);
if (v_isSharedCheck_1066_ == 0)
{
lean_object* v_unused_1067_; 
v_unused_1067_ = lean_ctor_get(v_v_1032_, 6);
lean_dec(v_unused_1067_);
v___x_1041_ = v_v_1032_;
v_isShared_1042_ = v_isSharedCheck_1066_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_tags_x3f_1039_);
lean_inc(v_sortText_x3f_1038_);
lean_inc(v_textEdit_x3f_1037_);
lean_inc(v_kind_x3f_1036_);
lean_inc(v_documentation_x3f_1035_);
lean_inc(v_detail_x3f_1034_);
lean_inc(v_label_1033_);
lean_dec(v_v_1032_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1066_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v_line_1043_; lean_object* v_character_1044_; lean_object* v___x_1045_; lean_object* v_bs_x27_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v_arr_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
v_line_1043_ = lean_ctor_get(v_pos_1027_, 0);
v_character_1044_ = lean_ctor_get(v_pos_1027_, 1);
v___x_1045_ = lean_unsigned_to_nat(0u);
v_bs_x27_1046_ = lean_array_uset(v_bs_1030_, v_i_1029_, v___x_1045_);
lean_inc_ref(v_uri_1026_);
v___x_1047_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1047_, 0, v_uri_1026_);
lean_inc(v_line_1043_);
v___x_1048_ = l_Lean_JsonNumber_fromNat(v_line_1043_);
v___x_1049_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_inc(v_character_1044_);
v___x_1050_ = l_Lean_JsonNumber_fromNat(v_character_1044_);
v___x_1051_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
v___x_1052_ = lean_unsigned_to_nat(3u);
v___x_1053_ = lean_mk_empty_array_with_capacity(v___x_1052_);
v___x_1054_ = lean_array_push(v___x_1053_, v___x_1047_);
v___x_1055_ = lean_array_push(v___x_1054_, v___x_1049_);
v_arr_1056_ = lean_array_push(v___x_1055_, v___x_1051_);
v___x_1057_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_arr_1056_);
v___x_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 6, v___x_1058_);
v___x_1060_ = v___x_1041_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_label_1033_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v_detail_x3f_1034_);
lean_ctor_set(v_reuseFailAlloc_1065_, 2, v_documentation_x3f_1035_);
lean_ctor_set(v_reuseFailAlloc_1065_, 3, v_kind_x3f_1036_);
lean_ctor_set(v_reuseFailAlloc_1065_, 4, v_textEdit_x3f_1037_);
lean_ctor_set(v_reuseFailAlloc_1065_, 5, v_sortText_x3f_1038_);
lean_ctor_set(v_reuseFailAlloc_1065_, 6, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1065_, 7, v_tags_x3f_1039_);
v___x_1060_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
size_t v___x_1061_; size_t v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = ((size_t)1ULL);
v___x_1062_ = lean_usize_add(v_i_1029_, v___x_1061_);
v___x_1063_ = lean_array_uset(v_bs_x27_1046_, v_i_1029_, v___x_1060_);
v_i_1029_ = v___x_1062_;
v_bs_1030_ = v___x_1063_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0___boxed(lean_object* v_uri_1068_, lean_object* v_pos_1069_, lean_object* v_sz_1070_, lean_object* v_i_1071_, lean_object* v_bs_1072_){
_start:
{
size_t v_sz_boxed_1073_; size_t v_i_boxed_1074_; lean_object* v_res_1075_; 
v_sz_boxed_1073_ = lean_unbox_usize(v_sz_1070_);
lean_dec(v_sz_1070_);
v_i_boxed_1074_ = lean_unbox_usize(v_i_1071_);
lean_dec(v_i_1071_);
v_res_1075_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(v_uri_1068_, v_pos_1069_, v_sz_boxed_1073_, v_i_boxed_1074_, v_bs_1072_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_addCompletionItemData(lean_object* v_uri_1076_, lean_object* v_pos_1077_, lean_object* v_completionList_1078_){
_start:
{
uint8_t v_isIncomplete_1079_; lean_object* v_items_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1090_; 
v_isIncomplete_1079_ = lean_ctor_get_uint8(v_completionList_1078_, sizeof(void*)*1);
v_items_1080_ = lean_ctor_get(v_completionList_1078_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_completionList_1078_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1082_ = v_completionList_1078_;
v_isShared_1083_ = v_isSharedCheck_1090_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_items_1080_);
lean_dec(v_completionList_1078_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1090_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
size_t v_sz_1084_; size_t v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1088_; 
v_sz_1084_ = lean_array_size(v_items_1080_);
v___x_1085_ = ((size_t)0ULL);
v___x_1086_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_addCompletionItemData_spec__0(v_uri_1076_, v_pos_1077_, v_sz_1084_, v___x_1085_, v_items_1080_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1086_);
v___x_1088_ = v___x_1082_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
lean_ctor_set_uint8(v_reuseFailAlloc_1089_, sizeof(void*)*1, v_isIncomplete_1079_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(size_t v_sz_1091_, size_t v_i_1092_, lean_object* v_bs_1093_){
_start:
{
uint8_t v___x_1094_; 
v___x_1094_ = lean_usize_dec_lt(v_i_1092_, v_sz_1091_);
if (v___x_1094_ == 0)
{
return v_bs_1093_;
}
else
{
lean_object* v_v_1095_; lean_object* v___x_1096_; lean_object* v_bs_x27_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; size_t v___x_1101_; size_t v___x_1102_; lean_object* v___x_1103_; 
v_v_1095_ = lean_array_uget(v_bs_1093_, v_i_1092_);
v___x_1096_ = lean_unsigned_to_nat(0u);
v_bs_x27_1097_ = lean_array_uset(v_bs_1093_, v_i_1092_, v___x_1096_);
v___x_1098_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1095_, v___x_1094_);
v___x_1099_ = lean_box(0);
v___x_1100_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
lean_ctor_set(v___x_1100_, 2, v___x_1099_);
lean_ctor_set(v___x_1100_, 3, v___x_1099_);
lean_ctor_set(v___x_1100_, 4, v___x_1099_);
lean_ctor_set(v___x_1100_, 5, v___x_1099_);
lean_ctor_set(v___x_1100_, 6, v___x_1099_);
lean_ctor_set(v___x_1100_, 7, v___x_1099_);
v___x_1101_ = ((size_t)1ULL);
v___x_1102_ = lean_usize_add(v_i_1092_, v___x_1101_);
v___x_1103_ = lean_array_uset(v_bs_x27_1097_, v_i_1092_, v___x_1100_);
v_i_1092_ = v___x_1102_;
v_bs_1093_ = v___x_1103_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0___boxed(lean_object* v_sz_1105_, lean_object* v_i_1106_, lean_object* v_bs_1107_){
_start:
{
size_t v_sz_boxed_1108_; size_t v_i_boxed_1109_; lean_object* v_res_1110_; 
v_sz_boxed_1108_ = lean_unbox_usize(v_sz_1105_);
lean_dec(v_sz_1105_);
v_i_boxed_1109_ = lean_unbox_usize(v_i_1106_);
lean_dec(v_i_1106_);
v_res_1110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(v_sz_boxed_1108_, v_i_boxed_1109_, v_bs_1107_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(uint8_t v___x_1111_, size_t v_sz_1112_, size_t v_i_1113_, lean_object* v_bs_1114_){
_start:
{
uint8_t v___x_1115_; 
v___x_1115_ = lean_usize_dec_lt(v_i_1113_, v_sz_1112_);
if (v___x_1115_ == 0)
{
return v_bs_1114_;
}
else
{
lean_object* v_v_1116_; lean_object* v___x_1117_; lean_object* v_bs_x27_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; size_t v___x_1122_; size_t v___x_1123_; lean_object* v___x_1124_; 
v_v_1116_ = lean_array_uget(v_bs_1114_, v_i_1113_);
v___x_1117_ = lean_unsigned_to_nat(0u);
v_bs_x27_1118_ = lean_array_uset(v_bs_1114_, v_i_1113_, v___x_1117_);
v___x_1119_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1116_, v___x_1111_);
v___x_1120_ = lean_box(0);
v___x_1121_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
lean_ctor_set(v___x_1121_, 2, v___x_1120_);
lean_ctor_set(v___x_1121_, 3, v___x_1120_);
lean_ctor_set(v___x_1121_, 4, v___x_1120_);
lean_ctor_set(v___x_1121_, 5, v___x_1120_);
lean_ctor_set(v___x_1121_, 6, v___x_1120_);
lean_ctor_set(v___x_1121_, 7, v___x_1120_);
v___x_1122_ = ((size_t)1ULL);
v___x_1123_ = lean_usize_add(v_i_1113_, v___x_1122_);
v___x_1124_ = lean_array_uset(v_bs_x27_1118_, v_i_1113_, v___x_1121_);
v_i_1113_ = v___x_1123_;
v_bs_1114_ = v___x_1124_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2___boxed(lean_object* v___x_1126_, lean_object* v_sz_1127_, lean_object* v_i_1128_, lean_object* v_bs_1129_){
_start:
{
uint8_t v___x_697__boxed_1130_; size_t v_sz_boxed_1131_; size_t v_i_boxed_1132_; lean_object* v_res_1133_; 
v___x_697__boxed_1130_ = lean_unbox(v___x_1126_);
v_sz_boxed_1131_ = lean_unbox_usize(v_sz_1127_);
lean_dec(v_sz_1127_);
v_i_boxed_1132_ = lean_unbox_usize(v_i_1128_);
lean_dec(v_i_1128_);
v_res_1133_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(v___x_697__boxed_1130_, v_sz_boxed_1131_, v_i_boxed_1132_, v_bs_1129_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(uint8_t v___x_1135_, size_t v_sz_1136_, size_t v_i_1137_, lean_object* v_bs_1138_){
_start:
{
uint8_t v___x_1139_; 
v___x_1139_ = lean_usize_dec_lt(v_i_1137_, v_sz_1136_);
if (v___x_1139_ == 0)
{
return v_bs_1138_;
}
else
{
lean_object* v_v_1140_; lean_object* v___x_1141_; lean_object* v_bs_x27_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; size_t v___x_1148_; size_t v___x_1149_; lean_object* v___x_1150_; 
v_v_1140_ = lean_array_uget(v_bs_1138_, v_i_1137_);
v___x_1141_ = lean_unsigned_to_nat(0u);
v_bs_x27_1142_ = lean_array_uset(v_bs_1138_, v_i_1137_, v___x_1141_);
v___x_1143_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___closed__0));
v___x_1144_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1140_, v___x_1135_);
v___x_1145_ = lean_string_append(v___x_1143_, v___x_1144_);
lean_dec_ref(v___x_1144_);
v___x_1146_ = lean_box(0);
v___x_1147_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
lean_ctor_set(v___x_1147_, 2, v___x_1146_);
lean_ctor_set(v___x_1147_, 3, v___x_1146_);
lean_ctor_set(v___x_1147_, 4, v___x_1146_);
lean_ctor_set(v___x_1147_, 5, v___x_1146_);
lean_ctor_set(v___x_1147_, 6, v___x_1146_);
lean_ctor_set(v___x_1147_, 7, v___x_1146_);
v___x_1148_ = ((size_t)1ULL);
v___x_1149_ = lean_usize_add(v_i_1137_, v___x_1148_);
v___x_1150_ = lean_array_uset(v_bs_x27_1142_, v_i_1137_, v___x_1147_);
v_i_1137_ = v___x_1149_;
v_bs_1138_ = v___x_1150_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1___boxed(lean_object* v___x_1152_, lean_object* v_sz_1153_, lean_object* v_i_1154_, lean_object* v_bs_1155_){
_start:
{
uint8_t v___x_720__boxed_1156_; size_t v_sz_boxed_1157_; size_t v_i_boxed_1158_; lean_object* v_res_1159_; 
v___x_720__boxed_1156_ = lean_unbox(v___x_1152_);
v_sz_boxed_1157_ = lean_unbox_usize(v_sz_1153_);
lean_dec(v_sz_1153_);
v_i_boxed_1158_ = lean_unbox_usize(v_i_1154_);
lean_dec(v_i_1154_);
v_res_1159_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(v___x_720__boxed_1156_, v_sz_boxed_1157_, v_i_boxed_1158_, v_bs_1155_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find(lean_object* v_uri_1160_, lean_object* v_pos_1161_, lean_object* v_text_1162_, lean_object* v_headerStx_1163_, lean_object* v_availableImports_1164_){
_start:
{
lean_object* v_availableImports_1165_; lean_object* v_completionPos_1166_; uint8_t v___x_1167_; 
v_availableImports_1165_ = l_Lean_Lsp_ImportCompletion_AvailableImports_toImportTrie(v_availableImports_1164_);
lean_inc_ref(v_pos_1161_);
v_completionPos_1166_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_1162_, v_pos_1161_);
lean_inc(v_headerStx_1163_);
v___x_1167_ = l_Lean_Lsp_ImportCompletion_isImportNameCompletionRequest(v_headerStx_1163_, v_completionPos_1166_);
if (v___x_1167_ == 0)
{
uint8_t v___x_1168_; 
lean_inc(v_headerStx_1163_);
v___x_1168_ = l_Lean_Lsp_ImportCompletion_isImportCmdCompletionRequest(v_headerStx_1163_, v_completionPos_1166_);
if (v___x_1168_ == 0)
{
lean_object* v_completionNames_1169_; size_t v_sz_1170_; size_t v___x_1171_; lean_object* v_completions_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_completionNames_1169_ = l_Lean_Lsp_ImportCompletion_computePartialImportCompletions(v_headerStx_1163_, v_completionPos_1166_, v_availableImports_1165_);
lean_dec(v_completionPos_1166_);
v_sz_1170_ = lean_array_size(v_completionNames_1169_);
v___x_1171_ = ((size_t)0ULL);
v_completions_1172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__0(v_sz_1170_, v___x_1171_, v_completionNames_1169_);
v___x_1173_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1173_, 0, v_completions_1172_);
lean_ctor_set_uint8(v___x_1173_, sizeof(void*)*1, v___x_1168_);
v___x_1174_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1160_, v_pos_1161_, v___x_1173_);
return v___x_1174_;
}
else
{
lean_object* v___x_1175_; size_t v_sz_1176_; size_t v___x_1177_; lean_object* v_allAvailableFullImportCompletions_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
lean_dec(v_completionPos_1166_);
lean_dec(v_headerStx_1163_);
v___x_1175_ = l_Lean_NameTrie_toArray___redArg(v_availableImports_1165_);
v_sz_1176_ = lean_array_size(v___x_1175_);
v___x_1177_ = ((size_t)0ULL);
v_allAvailableFullImportCompletions_1178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__1(v___x_1168_, v_sz_1176_, v___x_1177_, v___x_1175_);
v___x_1179_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1179_, 0, v_allAvailableFullImportCompletions_1178_);
lean_ctor_set_uint8(v___x_1179_, sizeof(void*)*1, v___x_1167_);
v___x_1180_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1160_, v_pos_1161_, v___x_1179_);
return v___x_1180_;
}
}
else
{
lean_object* v___x_1181_; size_t v_sz_1182_; size_t v___x_1183_; lean_object* v_allAvailableImportNameCompletions_1184_; uint8_t v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_dec(v_completionPos_1166_);
lean_dec(v_headerStx_1163_);
v___x_1181_ = l_Lean_NameTrie_toArray___redArg(v_availableImports_1165_);
v_sz_1182_ = lean_array_size(v___x_1181_);
v___x_1183_ = ((size_t)0ULL);
v_allAvailableImportNameCompletions_1184_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Lsp_ImportCompletion_find_spec__2(v___x_1167_, v_sz_1182_, v___x_1183_, v___x_1181_);
v___x_1185_ = 0;
v___x_1186_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1186_, 0, v_allAvailableImportNameCompletions_1184_);
lean_ctor_set_uint8(v___x_1186_, sizeof(void*)*1, v___x_1185_);
v___x_1187_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1160_, v_pos_1161_, v___x_1186_);
return v___x_1187_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_find___boxed(lean_object* v_uri_1188_, lean_object* v_pos_1189_, lean_object* v_text_1190_, lean_object* v_headerStx_1191_, lean_object* v_availableImports_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Lean_Lsp_ImportCompletion_find(v_uri_1188_, v_pos_1189_, v_text_1190_, v_headerStx_1191_, v_availableImports_1192_);
lean_dec_ref(v_availableImports_1192_);
lean_dec_ref(v_text_1190_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions(lean_object* v_uri_1194_, lean_object* v_pos_1195_, lean_object* v_text_1196_, lean_object* v_headerStx_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_Lsp_ImportCompletion_collectAvailableImports();
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1209_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1207_; 
lean_inc_ref(v_pos_1195_);
lean_inc_ref(v_uri_1194_);
v___x_1204_ = l_Lean_Lsp_ImportCompletion_find(v_uri_1194_, v_pos_1195_, v_text_1196_, v_headerStx_1197_, v_a_1200_);
lean_dec(v_a_1200_);
v___x_1205_ = l_Lean_Lsp_ImportCompletion_addCompletionItemData(v_uri_1194_, v_pos_1195_, v___x_1204_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1205_);
v___x_1207_ = v___x_1202_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec(v_headerStx_1197_);
lean_dec_ref(v_pos_1195_);
lean_dec_ref(v_uri_1194_);
v_a_1210_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1199_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1199_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Lsp_ImportCompletion_computeCompletions___boxed(lean_object* v_uri_1218_, lean_object* v_pos_1219_, lean_object* v_text_1220_, lean_object* v_headerStx_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_Lsp_ImportCompletion_computeCompletions(v_uri_1218_, v_pos_1219_, v_text_1220_, v_headerStx_1221_);
lean_dec_ref(v_text_1220_);
return v_res_1223_;
}
}
lean_object* runtime_initialize_Lean_Util_LakePath(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Lsp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_ImportCompletion(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_LakePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_ImportCompletion(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_LakePath(uint8_t builtin);
lean_object* initialize_Lean_Data_Lsp(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_ImportCompletion(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_LakePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_ImportCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_ImportCompletion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_ImportCompletion(builtin);
}
#ifdef __cplusplus
}
#endif
