// Lean compiler output
// Module: Lake.CLI.BuiltinLint
// Imports: public import Lean.Linter.EnvLinter public import Lean.Linter.PersistentLintLog import Lean.Elab.DocString.Builtin.Postponed import Lean.Linter.CodeQuality
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
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_linter_doc_deferred;
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Linter_EnvLinter_formatLinterResults(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_builtinDeclRanges;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_isAuxRecursor(lean_object*, lean_object*);
uint8_t l_Lean_isNoConfusion(lean_object*, lean_object*);
lean_object* lean_get_stderr();
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_SearchPath_findWithExt(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_Linter_EnvLinter_lintCore(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Linter_EnvLinter_getEnvLinters(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint8_t l_Lean_Linter_isLinterEnabledByOptions(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_getPackageChecks(lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_runPackageChecks(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedPosition_default;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Doc_DeferredCheck_run(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Linter_getAllCodeQualityEntries(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_SerialMessage_toString(lean_object*, uint8_t);
lean_object* l_Lean_Linter_getAllLints(lean_object*);
lean_object* lean_enable_initializer_execution();
lean_object* l_Lean_findOLean(lean_object*);
lean_object* l_Lean_readModuleData(lean_object*);
lean_object* lean_compacted_region_free(lean_object*);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_string_hash(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Linter_CodeQuality_instToJsonEntry_toJson(lean_object*);
lean_object* l_Lean_getSrcSearchPath();
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuiltinLint_instBEqMode_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instBEqMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_BuiltinLint_instBEqMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuiltinLint_instBEqMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuiltinLint_instBEqMode___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_instBEqMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuiltinLint_instBEqMode = (const lean_object*)&l_Lake_BuiltinLint_instBEqMode___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "weak"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 5, 49, 232, 223, 147, 119, 138)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lake_BuiltinLint_leanOptOverrides___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__0_value;
static const lean_string_object l_Lake_BuiltinLint_leanOptOverrides___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "internal"};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__1 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__1_value;
static const lean_string_object l_Lake_BuiltinLint_leanOptOverrides___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cmdlineSnapshots"};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__2 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__2_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 49, 45, 44, 152, 148, 209, 41)}};
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value_aux_0),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__2_value),LEAN_SCALAR_PTR_LITERAL(129, 168, 39, 157, 17, 55, 119, 69)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__3 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__4 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__4_value;
static const lean_ctor_object l_Lake_BuiltinLint_leanOptOverrides___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__3_value),((lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__4_value)}};
static const lean_object* l_Lake_BuiltinLint_leanOptOverrides___closed__5 = (const lean_object*)&l_Lake_BuiltinLint_leanOptOverrides___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0 = (const lean_object*)&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0_value;
static lean_once_cell_t l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instInhabitedExceptionRecord_default;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "-- recorded by `lake lint --record-exceptions`"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(uint32_t);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "set_option "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " false in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "warning: could not read `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "`; skipping its "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " exception(s)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "the docstring of `"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "module docstring #"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "warning: could not determine the position of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "`; cannot record a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "warning: could not locate source file for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` to record a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "error: in module `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "`, in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": error: in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2_value;
static const lean_closure_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3_value;
static const lean_array_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__8_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__21;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "warning: could not determine the command position of a `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` text-linter warning in `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`; skipping its exception"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "-- Text linter diagnostics in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "warning: no declaration range for `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "-- Environment linting passed for "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "in "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2_value;
static const lean_string_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "-- No environment linters were run for "};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3_value;
static const lean_ctor_object l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4 = (const lean_object*)&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4_value;
static lean_once_cell_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5;
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "EnvLinter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 76, 236, 169, 217, 120, 18, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__0;
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__1;
static lean_once_cell_t l_Lake_BuiltinLint_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuiltinLint_run___closed__2;
static const lean_string_object l_Lake_BuiltinLint_run___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "lake lint: no modules specified for builtin linting"};
static const lean_object* l_Lake_BuiltinLint_run___closed__3 = (const lean_object*)&l_Lake_BuiltinLint_run___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed__const__2;
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lake_BuiltinLint_Mode_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lake_BuiltinLint_Mode_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lake_BuiltinLint_Mode_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg(lean_object* v_report_22_){
_start:
{
lean_inc(v_report_22_);
return v_report_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___redArg___boxed(lean_object* v_report_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lake_BuiltinLint_Mode_report_elim___redArg(v_report_23_);
lean_dec(v_report_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_report_28_){
_start:
{
lean_inc(v_report_28_);
return v_report_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_report_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_report_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lake_BuiltinLint_Mode_report_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_report_32_);
lean_dec(v_report_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(lean_object* v_recordExceptions_35_){
_start:
{
lean_inc(v_recordExceptions_35_);
return v_recordExceptions_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg___boxed(lean_object* v_recordExceptions_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lake_BuiltinLint_Mode_recordExceptions_elim___redArg(v_recordExceptions_36_);
lean_dec(v_recordExceptions_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_recordExceptions_41_){
_start:
{
lean_inc(v_recordExceptions_41_);
return v_recordExceptions_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_recordExceptions_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_recordExceptions_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lake_BuiltinLint_Mode_recordExceptions_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_recordExceptions_45_);
lean_dec(v_recordExceptions_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(lean_object* v_codeQuality_48_){
_start:
{
lean_inc(v_codeQuality_48_);
return v_codeQuality_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg___boxed(lean_object* v_codeQuality_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lake_BuiltinLint_Mode_codeQuality_elim___redArg(v_codeQuality_49_);
lean_dec(v_codeQuality_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_codeQuality_54_){
_start:
{
lean_inc(v_codeQuality_54_);
return v_codeQuality_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_Mode_codeQuality_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_codeQuality_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lake_BuiltinLint_Mode_codeQuality_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_codeQuality_58_);
lean_dec(v_codeQuality_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuiltinLint_instBEqMode_beq(uint8_t v_x_61_, uint8_t v_y_62_){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_63_ = lean_box(v_x_61_);
v___x_64_ = lean_obj_tag_nat(v___x_63_);
lean_dec(v___x_63_);
v___x_65_ = lean_box(v_y_62_);
v___x_66_ = lean_obj_tag_nat(v___x_65_);
lean_dec(v___x_65_);
v___x_67_ = lean_nat_dec_eq(v___x_64_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_instBEqMode_beq___boxed(lean_object* v_x_68_, lean_object* v_y_69_){
_start:
{
uint8_t v_x_24__boxed_70_; uint8_t v_y_25__boxed_71_; uint8_t v_res_72_; lean_object* v_r_73_; 
v_x_24__boxed_70_ = lean_unbox(v_x_68_);
v_y_25__boxed_71_ = lean_unbox(v_y_69_);
v_res_72_ = l_Lake_BuiltinLint_instBEqMode_beq(v_x_24__boxed_70_, v_y_25__boxed_71_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(size_t v_sz_79_, size_t v_i_80_, lean_object* v_bs_81_){
_start:
{
uint8_t v___x_82_; 
v___x_82_ = lean_usize_dec_lt(v_i_80_, v_sz_79_);
if (v___x_82_ == 0)
{
return v_bs_81_;
}
else
{
lean_object* v_v_83_; lean_object* v_fst_84_; lean_object* v_snd_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_102_; 
v_v_83_ = lean_array_uget(v_bs_81_, v_i_80_);
v_fst_84_ = lean_ctor_get(v_v_83_, 0);
v_snd_85_ = lean_ctor_get(v_v_83_, 1);
v_isSharedCheck_102_ = !lean_is_exclusive(v_v_83_);
if (v_isSharedCheck_102_ == 0)
{
v___x_87_ = v_v_83_;
v_isShared_88_ = v_isSharedCheck_102_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_snd_85_);
lean_inc(v_fst_84_);
lean_dec(v_v_83_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_102_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_89_; lean_object* v_bs_x27_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_96_; 
v___x_89_ = lean_unsigned_to_nat(0u);
v_bs_x27_90_ = lean_array_uset(v_bs_81_, v_i_80_, v___x_89_);
v___x_91_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___closed__1));
v___x_92_ = l_Lean_Name_append(v___x_91_, v_fst_84_);
v___x_93_ = lean_alloc_ctor(1, 0, 1);
v___x_94_ = lean_unbox(v_snd_85_);
lean_dec(v_snd_85_);
lean_ctor_set_uint8(v___x_93_, 0, v___x_94_);
if (v_isShared_88_ == 0)
{
lean_ctor_set(v___x_87_, 1, v___x_93_);
lean_ctor_set(v___x_87_, 0, v___x_92_);
v___x_96_ = v___x_87_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v___x_93_);
v___x_96_ = v_reuseFailAlloc_101_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
size_t v___x_97_; size_t v___x_98_; lean_object* v___x_99_; 
v___x_97_ = ((size_t)1ULL);
v___x_98_ = lean_usize_add(v_i_80_, v___x_97_);
v___x_99_ = lean_array_uset(v_bs_x27_90_, v_i_80_, v___x_96_);
v_i_80_ = v___x_98_;
v_bs_81_ = v___x_99_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1___boxed(lean_object* v_sz_103_, lean_object* v_i_104_, lean_object* v_bs_105_){
_start:
{
size_t v_sz_boxed_106_; size_t v_i_boxed_107_; lean_object* v_res_108_; 
v_sz_boxed_106_ = lean_unbox_usize(v_sz_103_);
lean_dec(v_sz_103_);
v_i_boxed_107_ = lean_unbox_usize(v_i_104_);
lean_dec(v_i_104_);
v_res_108_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(v_sz_boxed_106_, v_i_boxed_107_, v_bs_105_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(lean_object* v_as_109_, size_t v_i_110_, size_t v_stop_111_, lean_object* v_b_112_){
_start:
{
uint8_t v___x_113_; 
v___x_113_ = lean_usize_dec_eq(v_i_110_, v_stop_111_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; lean_object* v_fst_115_; lean_object* v_snd_116_; lean_object* v___x_117_; size_t v___x_118_; size_t v___x_119_; 
v___x_114_ = lean_array_uget_borrowed(v_as_109_, v_i_110_);
v_fst_115_ = lean_ctor_get(v___x_114_, 0);
v_snd_116_ = lean_ctor_get(v___x_114_, 1);
lean_inc(v_snd_116_);
lean_inc(v_fst_115_);
v___x_117_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_115_, v_snd_116_, v_b_112_);
v___x_118_ = ((size_t)1ULL);
v___x_119_ = lean_usize_add(v_i_110_, v___x_118_);
v_i_110_ = v___x_119_;
v_b_112_ = v___x_117_;
goto _start;
}
else
{
return v_b_112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2___boxed(lean_object* v_as_121_, lean_object* v_i_122_, lean_object* v_stop_123_, lean_object* v_b_124_){
_start:
{
size_t v_i_boxed_125_; size_t v_stop_boxed_126_; lean_object* v_res_127_; 
v_i_boxed_125_ = lean_unbox_usize(v_i_122_);
lean_dec(v_i_122_);
v_stop_boxed_126_ = lean_unbox_usize(v_stop_123_);
lean_dec(v_stop_123_);
v_res_127_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(v_as_121_, v_i_boxed_125_, v_stop_boxed_126_, v_b_124_);
lean_dec_ref(v_as_121_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(lean_object* v_init_128_, lean_object* v_x_129_){
_start:
{
if (lean_obj_tag(v_x_129_) == 0)
{
lean_object* v_k_130_; lean_object* v_v_131_; lean_object* v_l_132_; lean_object* v_r_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_k_130_ = lean_ctor_get(v_x_129_, 1);
v_v_131_ = lean_ctor_get(v_x_129_, 2);
v_l_132_ = lean_ctor_get(v_x_129_, 3);
v_r_133_ = lean_ctor_get(v_x_129_, 4);
v___x_134_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v_init_128_, v_l_132_);
lean_inc(v_v_131_);
lean_inc(v_k_130_);
v___x_135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_135_, 0, v_k_130_);
lean_ctor_set(v___x_135_, 1, v_v_131_);
v___x_136_ = lean_array_push(v___x_134_, v___x_135_);
v_init_128_ = v___x_136_;
v_x_129_ = v_r_133_;
goto _start;
}
else
{
return v_init_128_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0___boxed(lean_object* v_init_138_, lean_object* v_x_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v_init_138_, v_x_139_);
lean_dec(v_x_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides(lean_object* v_args_153_){
_start:
{
lean_object* v_linterOverrides_154_; uint8_t v_mode_155_; lean_object* v___y_157_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_linterOverrides_154_ = lean_ctor_get(v_args_153_, 0);
v_mode_155_ = lean_ctor_get_uint8(v_args_153_, sizeof(void*)*4 + 1);
v___x_169_ = lean_box(1);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = lean_array_get_size(v_linterOverrides_154_);
v___x_172_ = lean_nat_dec_lt(v___x_170_, v___x_171_);
if (v___x_172_ == 0)
{
v___y_157_ = v___x_169_;
goto v___jp_156_;
}
else
{
size_t v___x_173_; size_t v___x_174_; lean_object* v___x_175_; 
v___x_173_ = ((size_t)0ULL);
v___x_174_ = lean_usize_of_nat(v___x_171_);
v___x_175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_leanOptOverrides_spec__2(v_linterOverrides_154_, v___x_173_, v___x_174_, v___x_169_);
v___y_157_ = v___x_175_;
goto v___jp_156_;
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_159_; size_t v_sz_160_; size_t v___x_161_; lean_object* v_base_162_; uint8_t v___x_163_; uint8_t v___x_164_; 
v___x_158_ = ((lean_object*)(l_Lake_BuiltinLint_leanOptOverrides___closed__0));
v___x_159_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v___x_158_, v___y_157_);
lean_dec(v___y_157_);
v_sz_160_ = lean_array_size(v___x_159_);
v___x_161_ = ((size_t)0ULL);
v_base_162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_leanOptOverrides_spec__1(v_sz_160_, v___x_161_, v___x_159_);
v___x_163_ = 1;
v___x_164_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_155_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = l_Lean_LeanOptions_ofArray(v_base_162_);
lean_dec_ref(v_base_162_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = ((lean_object*)(l_Lake_BuiltinLint_leanOptOverrides___closed__5));
v___x_167_ = lean_array_push(v_base_162_, v___x_166_);
v___x_168_ = l_Lean_LeanOptions_ofArray(v___x_167_);
lean_dec_ref(v___x_167_);
return v___x_168_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_leanOptOverrides___boxed(lean_object* v_args_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lake_BuiltinLint_leanOptOverrides(v_args_176_);
lean_dec_ref(v_args_176_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(lean_object* v_init_178_, lean_object* v_t_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0_spec__0(v_init_178_, v_t_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0___boxed(lean_object* v_init_181_, lean_object* v_t_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lake_BuiltinLint_leanOptOverrides_spec__0(v_init_181_, v_t_182_);
lean_dec(v_t_182_);
return v_res_183_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_185_ = lean_box(0);
v___x_186_ = l_Lean_instInhabitedPosition_default;
v___x_187_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_188_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v___x_186_);
lean_ctor_set(v___x_188_, 2, v___x_185_);
return v___x_188_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default(void){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = lean_obj_once(&l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1, &l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1_once, _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__1);
return v___x_189_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord(void){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lake_BuiltinLint_instInhabitedExceptionRecord_default;
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___impl(lean_object* v_x_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_obj_tag_nat(v_x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___impl___boxed(lean_object* v_x_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorIdx___impl(v_x_193_);
lean_dec_ref(v_x_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(lean_object* v_t_195_, lean_object* v_k_196_){
_start:
{
switch(lean_obj_tag(v_t_195_))
{
case 0:
{
uint8_t v_failed_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_failed_197_ = lean_ctor_get_uint8(v_t_195_, 0);
lean_dec_ref_known(v_t_195_, 0);
v___x_198_ = lean_box(v_failed_197_);
v___x_199_ = lean_apply_1(v_k_196_, v___x_198_);
return v___x_199_;
}
case 1:
{
lean_object* v_records_200_; uint8_t v_unlocated_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_records_200_ = lean_ctor_get(v_t_195_, 0);
lean_inc_ref(v_records_200_);
v_unlocated_201_ = lean_ctor_get_uint8(v_t_195_, sizeof(void*)*1);
lean_dec_ref_known(v_t_195_, 1);
v___x_202_ = lean_box(v_unlocated_201_);
v___x_203_ = lean_apply_2(v_k_196_, v_records_200_, v___x_202_);
return v___x_203_;
}
default: 
{
lean_object* v_entries_204_; lean_object* v___x_205_; 
v_entries_204_ = lean_ctor_get(v_t_195_, 0);
lean_inc_ref(v_entries_204_);
lean_dec_ref_known(v_t_195_, 1);
v___x_205_ = lean_apply_1(v_k_196_, v_entries_204_);
return v___x_205_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(lean_object* v_motive_206_, lean_object* v_ctorIdx_207_, lean_object* v_t_208_, lean_object* v_h_209_, lean_object* v_k_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_208_, v_k_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___boxed(lean_object* v_motive_212_, lean_object* v_ctorIdx_213_, lean_object* v_t_214_, lean_object* v_h_215_, lean_object* v_k_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim(v_motive_212_, v_ctorIdx_213_, v_t_214_, v_h_215_, v_k_216_);
lean_dec(v_ctorIdx_213_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim___redArg(lean_object* v_t_218_, lean_object* v_reported_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_218_, v_reported_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_reported_elim(lean_object* v_motive_221_, lean_object* v_t_222_, lean_object* v_h_223_, lean_object* v_reported_224_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_222_, v_reported_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim___redArg(lean_object* v_t_226_, lean_object* v_recorded_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_226_, v_recorded_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_recorded_elim(lean_object* v_motive_229_, lean_object* v_t_230_, lean_object* v_h_231_, lean_object* v_recorded_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_230_, v_recorded_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim___redArg(lean_object* v_t_234_, lean_object* v_codeQualityChecks_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_234_, v_codeQualityChecks_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_codeQualityChecks_elim(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_codeQualityChecks_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_LintingOutcome_ctorElim___redArg(v_t_238_, v_codeQualityChecks_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___impl(lean_object* v_x_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lean_obj_tag_nat(v_x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___impl___boxed(lean_object* v_x_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorIdx___impl(v_x_244_);
lean_dec_ref(v_x_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(lean_object* v_t_246_, lean_object* v_k_247_){
_start:
{
if (lean_obj_tag(v_t_246_) == 0)
{
uint8_t v_failed_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v_failed_248_ = lean_ctor_get_uint8(v_t_246_, 0);
lean_dec_ref_known(v_t_246_, 0);
v___x_249_ = lean_box(v_failed_248_);
v___x_250_ = lean_apply_1(v_k_247_, v___x_249_);
return v___x_250_;
}
else
{
lean_object* v_records_251_; uint8_t v_unlocated_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_records_251_ = lean_ctor_get(v_t_246_, 0);
lean_inc_ref(v_records_251_);
v_unlocated_252_ = lean_ctor_get_uint8(v_t_246_, sizeof(void*)*1);
lean_dec_ref_known(v_t_246_, 1);
v___x_253_ = lean_box(v_unlocated_252_);
v___x_254_ = lean_apply_2(v_k_247_, v_records_251_, v___x_253_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(lean_object* v_motive_255_, lean_object* v_ctorIdx_256_, lean_object* v_t_257_, lean_object* v_h_258_, lean_object* v_k_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_257_, v_k_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___boxed(lean_object* v_motive_261_, lean_object* v_ctorIdx_262_, lean_object* v_t_263_, lean_object* v_h_264_, lean_object* v_k_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim(v_motive_261_, v_ctorIdx_262_, v_t_263_, v_h_264_, v_k_265_);
lean_dec(v_ctorIdx_262_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim___redArg(lean_object* v_t_267_, lean_object* v_reported_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_267_, v_reported_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_reported_elim(lean_object* v_motive_270_, lean_object* v_t_271_, lean_object* v_h_272_, lean_object* v_reported_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_271_, v_reported_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim___redArg(lean_object* v_t_275_, lean_object* v_recorded_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_275_, v_recorded_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_recorded_elim(lean_object* v_motive_278_, lean_object* v_t_279_, lean_object* v_h_280_, lean_object* v_recorded_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_DeferredCheckOutcome_ctorElim___redArg(v_t_279_, v_recorded_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(lean_object* v_pkgRoot_283_, lean_object* v_as_284_, size_t v_i_285_, size_t v_stop_286_, lean_object* v_b_287_){
_start:
{
lean_object* v___y_289_; uint8_t v___x_293_; 
v___x_293_ = lean_usize_dec_eq(v_i_285_, v_stop_286_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; lean_object* v_fst_295_; lean_object* v_snd_296_; uint8_t v___x_297_; 
v___x_294_ = lean_array_uget_borrowed(v_as_284_, v_i_285_);
v_fst_295_ = lean_ctor_get(v___x_294_, 0);
v_snd_296_ = lean_ctor_get(v___x_294_, 1);
v___x_297_ = l_Lean_Name_isPrefixOf(v_pkgRoot_283_, v_fst_295_);
if (v___x_297_ == 0)
{
v___y_289_ = v_b_287_;
goto v___jp_288_;
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_298_ = lean_array_get_size(v_snd_296_);
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = lean_nat_dec_eq(v___x_298_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
lean_inc(v___x_294_);
v___x_301_ = lean_array_push(v_b_287_, v___x_294_);
v___y_289_ = v___x_301_;
goto v___jp_288_;
}
else
{
v___y_289_ = v_b_287_;
goto v___jp_288_;
}
}
}
else
{
return v_b_287_;
}
v___jp_288_:
{
size_t v___x_290_; size_t v___x_291_; 
v___x_290_ = ((size_t)1ULL);
v___x_291_ = lean_usize_add(v_i_285_, v___x_290_);
v_i_285_ = v___x_291_;
v_b_287_ = v___y_289_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0___boxed(lean_object* v_pkgRoot_302_, lean_object* v_as_303_, lean_object* v_i_304_, lean_object* v_stop_305_, lean_object* v_b_306_){
_start:
{
size_t v_i_boxed_307_; size_t v_stop_boxed_308_; lean_object* v_res_309_; 
v_i_boxed_307_ = lean_unbox_usize(v_i_304_);
lean_dec(v_i_304_);
v_stop_boxed_308_ = lean_unbox_usize(v_stop_305_);
lean_dec(v_stop_305_);
v_res_309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_302_, v_as_303_, v_i_boxed_307_, v_stop_boxed_308_, v_b_306_);
lean_dec_ref(v_as_303_);
lean_dec(v_pkgRoot_302_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(lean_object* v_env_312_, lean_object* v_pkgRoot_313_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0));
v___x_316_ = l_Lean_Linter_getAllLints(v_env_312_);
v___x_317_ = lean_array_get_size(v___x_316_);
v___x_318_ = lean_nat_dec_lt(v___x_314_, v___x_317_);
if (v___x_318_ == 0)
{
lean_dec_ref(v___x_316_);
return v___x_315_;
}
else
{
size_t v___x_319_; size_t v___x_320_; lean_object* v___x_321_; 
v___x_319_ = ((size_t)0ULL);
v___x_320_ = lean_usize_of_nat(v___x_317_);
v___x_321_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints_spec__0(v_pkgRoot_313_, v___x_316_, v___x_319_, v___x_320_, v___x_315_);
lean_dec_ref(v___x_316_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___boxed(lean_object* v_env_322_, lean_object* v_pkgRoot_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(v_env_322_, v_pkgRoot_323_);
lean_dec(v_pkgRoot_323_);
lean_dec_ref(v_env_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(size_t v_sz_325_, size_t v_i_326_, lean_object* v_bs_327_){
_start:
{
uint8_t v___x_328_; 
v___x_328_ = lean_usize_dec_lt(v_i_326_, v_sz_325_);
if (v___x_328_ == 0)
{
return v_bs_327_;
}
else
{
lean_object* v_v_329_; lean_object* v_entry_330_; lean_object* v___x_331_; lean_object* v_bs_x27_332_; size_t v___x_333_; size_t v___x_334_; lean_object* v___x_335_; 
v_v_329_ = lean_array_uget_borrowed(v_bs_327_, v_i_326_);
v_entry_330_ = lean_ctor_get(v_v_329_, 1);
lean_inc_ref(v_entry_330_);
v___x_331_ = lean_unsigned_to_nat(0u);
v_bs_x27_332_ = lean_array_uset(v_bs_327_, v_i_326_, v___x_331_);
v___x_333_ = ((size_t)1ULL);
v___x_334_ = lean_usize_add(v_i_326_, v___x_333_);
v___x_335_ = lean_array_uset(v_bs_x27_332_, v_i_326_, v_entry_330_);
v_i_326_ = v___x_334_;
v_bs_327_ = v___x_335_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0___boxed(lean_object* v_sz_337_, lean_object* v_i_338_, lean_object* v_bs_339_){
_start:
{
size_t v_sz_boxed_340_; size_t v_i_boxed_341_; lean_object* v_res_342_; 
v_sz_boxed_340_ = lean_unbox_usize(v_sz_337_);
lean_dec(v_sz_337_);
v_i_boxed_341_ = lean_unbox_usize(v_i_338_);
lean_dec(v_i_338_);
v_res_342_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(v_sz_boxed_340_, v_i_boxed_341_, v_bs_339_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(lean_object* v_linterOpts_343_, lean_object* v_as_344_, size_t v_i_345_, size_t v_stop_346_, lean_object* v_b_347_){
_start:
{
lean_object* v___y_349_; uint8_t v___x_353_; 
v___x_353_ = lean_usize_dec_eq(v_i_345_, v_stop_346_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; lean_object* v_linter_x3f_355_; 
v___x_354_ = lean_array_uget_borrowed(v_as_344_, v_i_345_);
v_linter_x3f_355_ = lean_ctor_get(v___x_354_, 0);
if (lean_obj_tag(v_linter_x3f_355_) == 0)
{
lean_object* v___x_356_; 
lean_inc(v___x_354_);
v___x_356_ = lean_array_push(v_b_347_, v___x_354_);
v___y_349_ = v___x_356_;
goto v___jp_348_;
}
else
{
lean_object* v_val_357_; uint8_t v___x_358_; 
v_val_357_ = lean_ctor_get(v_linter_x3f_355_, 0);
v___x_358_ = l_Lean_Linter_isLinterEnabledByOptions(v_val_357_, v_linterOpts_343_);
if (v___x_358_ == 0)
{
v___y_349_ = v_b_347_;
goto v___jp_348_;
}
else
{
lean_object* v___x_359_; 
lean_inc(v___x_354_);
v___x_359_ = lean_array_push(v_b_347_, v___x_354_);
v___y_349_ = v___x_359_;
goto v___jp_348_;
}
}
}
else
{
return v_b_347_;
}
v___jp_348_:
{
size_t v___x_350_; size_t v___x_351_; 
v___x_350_ = ((size_t)1ULL);
v___x_351_ = lean_usize_add(v_i_345_, v___x_350_);
v_i_345_ = v___x_351_;
v_b_347_ = v___y_349_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1___boxed(lean_object* v_linterOpts_360_, lean_object* v_as_361_, lean_object* v_i_362_, lean_object* v_stop_363_, lean_object* v_b_364_){
_start:
{
size_t v_i_boxed_365_; size_t v_stop_boxed_366_; lean_object* v_res_367_; 
v_i_boxed_365_ = lean_unbox_usize(v_i_362_);
lean_dec(v_i_362_);
v_stop_boxed_366_ = lean_unbox_usize(v_stop_363_);
lean_dec(v_stop_363_);
v_res_367_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_360_, v_as_361_, v_i_boxed_365_, v_stop_boxed_366_, v_b_364_);
lean_dec_ref(v_as_361_);
lean_dec_ref(v_linterOpts_360_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(lean_object* v_mod_370_, lean_object* v_args_371_, lean_object* v_linterOpts_372_, lean_object* v_as_373_, size_t v_sz_374_, size_t v_i_375_, lean_object* v_b_376_){
_start:
{
lean_object* v_a_378_; uint8_t v___x_382_; 
v___x_382_ = lean_usize_dec_lt(v_i_375_, v_sz_374_);
if (v___x_382_ == 0)
{
return v_b_376_;
}
else
{
lean_object* v_a_383_; lean_object* v_fst_384_; lean_object* v_snd_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_420_; 
v_a_383_ = lean_array_uget(v_as_373_, v_i_375_);
v_fst_384_ = lean_ctor_get(v_a_383_, 0);
v_snd_385_ = lean_ctor_get(v_a_383_, 1);
v_isSharedCheck_420_ = !lean_is_exclusive(v_a_383_);
if (v_isSharedCheck_420_ == 0)
{
v___x_387_ = v_a_383_;
v_isShared_388_ = v_isSharedCheck_420_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_snd_385_);
lean_inc(v_fst_384_);
lean_dec(v_a_383_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_420_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v_fst_389_; lean_object* v_snd_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_419_; 
v_fst_389_ = lean_ctor_get(v_b_376_, 0);
v_snd_390_ = lean_ctor_get(v_b_376_, 1);
v_isSharedCheck_419_ = !lean_is_exclusive(v_b_376_);
if (v_isSharedCheck_419_ == 0)
{
v___x_392_ = v_b_376_;
v_isShared_393_ = v_isSharedCheck_419_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_snd_390_);
lean_inc(v_fst_389_);
lean_dec(v_b_376_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_419_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = l_Lean_Name_getRoot(v_mod_370_);
v___x_399_ = l_Lean_Name_isPrefixOf(v___x_398_, v_fst_384_);
lean_dec(v___x_398_);
if (v___x_399_ == 0)
{
lean_del_object(v___x_387_);
lean_dec(v_snd_385_);
lean_dec(v_fst_384_);
goto v___jp_394_;
}
else
{
uint8_t v___x_400_; 
v___x_400_ = l_Lean_NameSet_contains(v_fst_389_, v_fst_384_);
if (v___x_400_ == 0)
{
uint8_t v_lintOnly_401_; lean_object* v___x_402_; lean_object* v___y_404_; 
lean_del_object(v___x_392_);
v_lintOnly_401_ = lean_ctor_get_uint8(v_args_371_, sizeof(void*)*4);
v___x_402_ = l_Lean_NameSet_insert(v_fst_389_, v_fst_384_);
if (v_lintOnly_401_ == 0)
{
v___y_404_ = v_snd_385_;
goto v___jp_403_;
}
else
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = lean_array_get_size(v_snd_385_);
v___x_414_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___closed__0));
v___x_415_ = lean_nat_dec_lt(v___x_412_, v___x_413_);
if (v___x_415_ == 0)
{
lean_dec(v_snd_385_);
v___y_404_ = v___x_414_;
goto v___jp_403_;
}
else
{
size_t v___x_416_; size_t v___x_417_; lean_object* v___x_418_; 
v___x_416_ = ((size_t)0ULL);
v___x_417_ = lean_usize_of_nat(v___x_413_);
v___x_418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__1(v_linterOpts_372_, v_snd_385_, v___x_416_, v___x_417_, v___x_414_);
lean_dec(v_snd_385_);
v___y_404_ = v___x_418_;
goto v___jp_403_;
}
}
v___jp_403_:
{
size_t v_sz_405_; size_t v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v_sz_405_ = lean_array_size(v___y_404_);
v___x_406_ = ((size_t)0ULL);
v___x_407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__0(v_sz_405_, v___x_406_, v___y_404_);
v___x_408_ = l_Array_append___redArg(v_snd_390_, v___x_407_);
lean_dec_ref(v___x_407_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 1, v___x_408_);
lean_ctor_set(v___x_387_, 0, v___x_402_);
v___x_410_ = v___x_387_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v___x_408_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
v_a_378_ = v___x_410_;
goto v___jp_377_;
}
}
}
else
{
lean_del_object(v___x_387_);
lean_dec(v_snd_385_);
lean_dec(v_fst_384_);
goto v___jp_394_;
}
}
v___jp_394_:
{
lean_object* v___x_396_; 
if (v_isShared_393_ == 0)
{
v___x_396_ = v___x_392_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_fst_389_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_snd_390_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
v_a_378_ = v___x_396_;
goto v___jp_377_;
}
}
}
}
}
v___jp_377_:
{
size_t v___x_379_; size_t v___x_380_; 
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_add(v_i_375_, v___x_379_);
v_i_375_ = v___x_380_;
v_b_376_ = v_a_378_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2___boxed(lean_object* v_mod_421_, lean_object* v_args_422_, lean_object* v_linterOpts_423_, lean_object* v_as_424_, lean_object* v_sz_425_, lean_object* v_i_426_, lean_object* v_b_427_){
_start:
{
size_t v_sz_boxed_428_; size_t v_i_boxed_429_; lean_object* v_res_430_; 
v_sz_boxed_428_ = lean_unbox_usize(v_sz_425_);
lean_dec(v_sz_425_);
v_i_boxed_429_ = lean_unbox_usize(v_i_426_);
lean_dec(v_i_426_);
v_res_430_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(v_mod_421_, v_args_422_, v_linterOpts_423_, v_as_424_, v_sz_boxed_428_, v_i_boxed_429_, v_b_427_);
lean_dec_ref(v_as_424_);
lean_dec_ref(v_linterOpts_423_);
lean_dec_ref(v_args_422_);
lean_dec(v_mod_421_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(lean_object* v_args_433_, lean_object* v_linterOpts_434_, lean_object* v_env_435_, lean_object* v_mod_436_, lean_object* v_collectedModules_437_){
_start:
{
lean_object* v_acc_438_; lean_object* v___x_439_; lean_object* v___x_440_; size_t v_sz_441_; size_t v___x_442_; lean_object* v___x_443_; lean_object* v_fst_444_; lean_object* v_snd_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
v_acc_438_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0));
v___x_439_ = l_Lean_Linter_getAllCodeQualityEntries(v_env_435_);
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v_collectedModules_437_);
lean_ctor_set(v___x_440_, 1, v_acc_438_);
v_sz_441_ = lean_array_size(v___x_439_);
v___x_442_ = ((size_t)0ULL);
v___x_443_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality_spec__2(v_mod_436_, v_args_433_, v_linterOpts_434_, v___x_439_, v_sz_441_, v___x_442_, v___x_440_);
lean_dec_ref(v___x_439_);
v_fst_444_ = lean_ctor_get(v___x_443_, 0);
v_snd_445_ = lean_ctor_get(v___x_443_, 1);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_443_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_snd_445_);
lean_inc(v_fst_444_);
lean_dec(v___x_443_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v_fst_444_);
lean_ctor_set(v___x_447_, 0, v_snd_445_);
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_snd_445_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_fst_444_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___boxed(lean_object* v_args_453_, lean_object* v_linterOpts_454_, lean_object* v_env_455_, lean_object* v_mod_456_, lean_object* v_collectedModules_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(v_args_453_, v_linterOpts_454_, v_env_455_, v_mod_456_, v_collectedModules_457_);
lean_dec(v_mod_456_);
lean_dec_ref(v_env_455_);
lean_dec_ref(v_linterOpts_454_);
lean_dec_ref(v_args_453_);
return v_res_458_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(lean_object* v_modData_459_){
_start:
{
uint8_t v_isModule_461_; 
v_isModule_461_ = lean_ctor_get_uint8(v_modData_459_, sizeof(void*)*7);
return v_isModule_461_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule___boxed(lean_object* v_modData_462_, lean_object* v_a_463_){
_start:
{
uint8_t v_res_464_; lean_object* v_r_465_; 
v_res_464_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(v_modData_462_);
lean_dec_ref(v_modData_462_);
v_r_465_ = lean_box(v_res_464_);
return v_r_465_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(uint32_t v_c_468_){
_start:
{
uint32_t v___x_469_; uint8_t v___x_470_; 
v___x_469_ = 32;
v___x_470_ = lean_uint32_dec_eq(v_c_468_, v___x_469_);
if (v___x_470_ == 0)
{
uint32_t v___x_471_; uint8_t v___x_472_; 
v___x_471_ = 9;
v___x_472_ = lean_uint32_dec_eq(v_c_468_, v___x_471_);
return v___x_472_;
}
else
{
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar___boxed(lean_object* v_c_473_){
_start:
{
uint32_t v_c_boxed_474_; uint8_t v_res_475_; lean_object* v_r_476_; 
v_c_boxed_474_ = lean_unbox_uint32(v_c_473_);
lean_dec(v_c_473_);
v_res_475_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(v_c_boxed_474_);
v_r_476_ = lean_box(v_res_475_);
return v_r_476_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(lean_object* v_s_477_, lean_object* v_stopPos_478_, lean_object* v_i_479_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_nat_add(v_i_479_, v___x_480_);
v___x_482_ = lean_nat_dec_le(v___x_481_, v_stopPos_478_);
lean_dec(v___x_481_);
if (v___x_482_ == 0)
{
return v_i_479_;
}
else
{
uint32_t v___x_483_; uint8_t v___x_484_; 
v___x_483_ = lean_string_utf8_get(v_s_477_, v_i_479_);
v___x_484_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_isIndentChar(v___x_483_);
if (v___x_484_ == 0)
{
return v_i_479_;
}
else
{
lean_object* v___x_485_; 
v___x_485_ = lean_string_utf8_next(v_s_477_, v_i_479_);
lean_dec(v_i_479_);
v_i_479_ = v___x_485_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0___boxed(lean_object* v_s_487_, lean_object* v_stopPos_488_, lean_object* v_i_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(v_s_487_, v_stopPos_488_, v_i_489_);
lean_dec(v_stopPos_488_);
lean_dec_ref(v_s_487_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(lean_object* v_line_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v_e_494_; lean_object* v___x_495_; 
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_493_ = lean_string_utf8_byte_size(v_line_491_);
v_e_494_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace_spec__0(v_line_491_, v___x_493_, v___x_492_);
v___x_495_ = lean_string_utf8_extract(v_line_491_, v___x_492_, v_e_494_);
lean_dec(v_e_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace___boxed(lean_object* v_line_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(v_line_496_);
lean_dec_ref(v_line_496_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg(){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___closed__0));
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg___boxed(lean_object* v___dummy_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
return v_res_503_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0(void){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___redArg();
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(lean_object* v_s_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___boxed(lean_object* v_s_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7(v_s_507_);
lean_dec_ref(v_s_507_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
if (lean_obj_tag(v_x_510_) == 0)
{
return v_x_509_;
}
else
{
lean_object* v_key_511_; lean_object* v_value_512_; lean_object* v_tail_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_key_511_ = lean_ctor_get(v_x_510_, 0);
v_value_512_ = lean_ctor_get(v_x_510_, 1);
v_tail_513_ = lean_ctor_get(v_x_510_, 2);
lean_inc(v_value_512_);
lean_inc(v_key_511_);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v_key_511_);
lean_ctor_set(v___x_514_, 1, v_value_512_);
v___x_515_ = lean_array_push(v_x_509_, v___x_514_);
v_x_509_ = v___x_515_;
v_x_510_ = v_tail_513_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19___boxed(lean_object* v_x_517_, lean_object* v_x_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(v_x_517_, v_x_518_);
lean_dec(v_x_518_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(lean_object* v_as_520_, size_t v_i_521_, size_t v_stop_522_, lean_object* v_b_523_){
_start:
{
uint8_t v___x_524_; 
v___x_524_ = lean_usize_dec_eq(v_i_521_, v_stop_522_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; lean_object* v___x_526_; size_t v___x_527_; size_t v___x_528_; 
v___x_525_ = lean_array_uget_borrowed(v_as_520_, v_i_521_);
v___x_526_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__19(v_b_523_, v___x_525_);
v___x_527_ = ((size_t)1ULL);
v___x_528_ = lean_usize_add(v_i_521_, v___x_527_);
v_i_521_ = v___x_528_;
v_b_523_ = v___x_526_;
goto _start;
}
else
{
return v_b_523_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20___boxed(lean_object* v_as_530_, lean_object* v_i_531_, lean_object* v_stop_532_, lean_object* v_b_533_){
_start:
{
size_t v_i_boxed_534_; size_t v_stop_boxed_535_; lean_object* v_res_536_; 
v_i_boxed_534_ = lean_unbox_usize(v_i_531_);
lean_dec(v_i_531_);
v_stop_boxed_535_ = lean_unbox_usize(v_stop_532_);
lean_dec(v_stop_532_);
v_res_536_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(v_as_530_, v_i_boxed_534_, v_stop_boxed_535_, v_b_533_);
lean_dec_ref(v_as_530_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(lean_object* v_s_537_){
_start:
{
lean_object* v___x_539_; lean_object* v_putStr_540_; lean_object* v___x_541_; 
v___x_539_ = lean_get_stderr();
v_putStr_540_ = lean_ctor_get(v___x_539_, 4);
lean_inc_ref(v_putStr_540_);
lean_dec_ref(v___x_539_);
v___x_541_ = lean_apply_2(v_putStr_540_, v_s_537_, lean_box(0));
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29___boxed(lean_object* v_s_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v_s_542_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(lean_object* v_s_545_){
_start:
{
uint32_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_547_ = 10;
v___x_548_ = lean_string_push(v_s_545_, v___x_547_);
v___x_549_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17___boxed(lean_object* v_s_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v_s_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(lean_object* v_x_553_, lean_object* v_x_554_){
_start:
{
if (lean_obj_tag(v_x_554_) == 0)
{
return v_x_553_;
}
else
{
lean_object* v_key_555_; lean_object* v_value_556_; lean_object* v_tail_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v_key_555_ = lean_ctor_get(v_x_554_, 0);
v_value_556_ = lean_ctor_get(v_x_554_, 1);
v_tail_557_ = lean_ctor_get(v_x_554_, 2);
lean_inc(v_value_556_);
lean_inc(v_key_555_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v_key_555_);
lean_ctor_set(v___x_558_, 1, v_value_556_);
v___x_559_ = lean_array_push(v_x_553_, v___x_558_);
v_x_553_ = v___x_559_;
v_x_554_ = v_tail_557_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15___boxed(lean_object* v_x_561_, lean_object* v_x_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(v_x_561_, v_x_562_);
lean_dec(v_x_562_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(lean_object* v_as_564_, size_t v_i_565_, size_t v_stop_566_, lean_object* v_b_567_){
_start:
{
uint8_t v___x_568_; 
v___x_568_ = lean_usize_dec_eq(v_i_565_, v_stop_566_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v___x_570_; size_t v___x_571_; size_t v___x_572_; 
v___x_569_ = lean_array_uget_borrowed(v_as_564_, v_i_565_);
v___x_570_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__15(v_b_567_, v___x_569_);
v___x_571_ = ((size_t)1ULL);
v___x_572_ = lean_usize_add(v_i_565_, v___x_571_);
v_i_565_ = v___x_572_;
v_b_567_ = v___x_570_;
goto _start;
}
else
{
return v_b_567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16___boxed(lean_object* v_as_574_, lean_object* v_i_575_, lean_object* v_stop_576_, lean_object* v_b_577_){
_start:
{
size_t v_i_boxed_578_; size_t v_stop_boxed_579_; lean_object* v_res_580_; 
v_i_boxed_578_ = lean_unbox_usize(v_i_575_);
lean_dec(v_i_575_);
v_stop_boxed_579_ = lean_unbox_usize(v_stop_576_);
lean_dec(v_stop_576_);
v_res_580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(v_as_574_, v_i_boxed_578_, v_stop_boxed_579_, v_b_577_);
lean_dec_ref(v_as_574_);
return v_res_580_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(lean_object* v_a_581_, lean_object* v_b_582_){
_start:
{
lean_object* v_fst_583_; lean_object* v_fst_584_; uint8_t v___x_585_; 
v_fst_583_ = lean_ctor_get(v_b_582_, 0);
v_fst_584_ = lean_ctor_get(v_a_581_, 0);
v___x_585_ = lean_nat_dec_lt(v_fst_583_, v_fst_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0___boxed(lean_object* v_a_586_, lean_object* v_b_587_){
_start:
{
uint8_t v_res_588_; lean_object* v_r_589_; 
v_res_588_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v_a_586_, v_b_587_);
lean_dec_ref(v_b_587_);
lean_dec_ref(v_a_586_);
v_r_589_ = lean_box(v_res_588_);
return v_r_589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(lean_object* v_hi_590_, lean_object* v_pivot_591_, lean_object* v_as_592_, lean_object* v_i_593_, lean_object* v_k_594_){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = lean_nat_dec_lt(v_k_594_, v_hi_590_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec(v_k_594_);
v___x_596_ = lean_array_fswap(v_as_592_, v_i_593_, v_hi_590_);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_i_593_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
return v___x_597_;
}
else
{
lean_object* v_fst_598_; lean_object* v___x_599_; lean_object* v_fst_600_; uint8_t v___x_601_; 
v_fst_598_ = lean_ctor_get(v_pivot_591_, 0);
v___x_599_ = lean_array_fget_borrowed(v_as_592_, v_k_594_);
v_fst_600_ = lean_ctor_get(v___x_599_, 0);
v___x_601_ = lean_nat_dec_lt(v_fst_598_, v_fst_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lean_unsigned_to_nat(1u);
v___x_603_ = lean_nat_add(v_k_594_, v___x_602_);
lean_dec(v_k_594_);
v_k_594_ = v___x_603_;
goto _start;
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_605_ = lean_array_fswap(v_as_592_, v_i_593_, v_k_594_);
v___x_606_ = lean_unsigned_to_nat(1u);
v___x_607_ = lean_nat_add(v_i_593_, v___x_606_);
lean_dec(v_i_593_);
v___x_608_ = lean_nat_add(v_k_594_, v___x_606_);
lean_dec(v_k_594_);
v_as_592_ = v___x_605_;
v_i_593_ = v___x_607_;
v_k_594_ = v___x_608_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg___boxed(lean_object* v_hi_610_, lean_object* v_pivot_611_, lean_object* v_as_612_, lean_object* v_i_613_, lean_object* v_k_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_610_, v_pivot_611_, v_as_612_, v_i_613_, v_k_614_);
lean_dec_ref(v_pivot_611_);
lean_dec(v_hi_610_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(lean_object* v_n_616_, lean_object* v_as_617_, lean_object* v_lo_618_, lean_object* v_hi_619_){
_start:
{
lean_object* v___y_621_; uint8_t v___x_631_; 
v___x_631_ = lean_nat_dec_lt(v_lo_618_, v_hi_619_);
if (v___x_631_ == 0)
{
lean_dec(v_lo_618_);
return v_as_617_;
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v_mid_634_; lean_object* v___y_636_; lean_object* v___y_642_; lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_632_ = lean_nat_add(v_lo_618_, v_hi_619_);
v___x_633_ = lean_unsigned_to_nat(1u);
v_mid_634_ = lean_nat_shiftr(v___x_632_, v___x_633_);
lean_dec(v___x_632_);
v___x_647_ = lean_array_fget_borrowed(v_as_617_, v_mid_634_);
v___x_648_ = lean_array_fget_borrowed(v_as_617_, v_lo_618_);
v___x_649_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_647_, v___x_648_);
if (v___x_649_ == 0)
{
v___y_642_ = v_as_617_;
goto v___jp_641_;
}
else
{
lean_object* v___x_650_; 
v___x_650_ = lean_array_fswap(v_as_617_, v_lo_618_, v_mid_634_);
v___y_642_ = v___x_650_;
goto v___jp_641_;
}
v___jp_635_:
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_637_ = lean_array_fget_borrowed(v___y_636_, v_mid_634_);
v___x_638_ = lean_array_fget_borrowed(v___y_636_, v_hi_619_);
v___x_639_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_637_, v___x_638_);
if (v___x_639_ == 0)
{
lean_dec(v_mid_634_);
v___y_621_ = v___y_636_;
goto v___jp_620_;
}
else
{
lean_object* v___x_640_; 
v___x_640_ = lean_array_fswap(v___y_636_, v_mid_634_, v_hi_619_);
lean_dec(v_mid_634_);
v___y_621_ = v___x_640_;
goto v___jp_620_;
}
}
v___jp_641_:
{
lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_643_ = lean_array_fget_borrowed(v___y_642_, v_hi_619_);
v___x_644_ = lean_array_fget_borrowed(v___y_642_, v_lo_618_);
v___x_645_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___lam__0(v___x_643_, v___x_644_);
if (v___x_645_ == 0)
{
v___y_636_ = v___y_642_;
goto v___jp_635_;
}
else
{
lean_object* v___x_646_; 
v___x_646_ = lean_array_fswap(v___y_642_, v_lo_618_, v_hi_619_);
v___y_636_ = v___x_646_;
goto v___jp_635_;
}
}
}
v___jp_620_:
{
lean_object* v_pivot_622_; lean_object* v___x_623_; lean_object* v_fst_624_; lean_object* v_snd_625_; uint8_t v___x_626_; 
v_pivot_622_ = lean_array_fget(v___y_621_, v_hi_619_);
lean_inc_n(v_lo_618_, 2);
v___x_623_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_619_, v_pivot_622_, v___y_621_, v_lo_618_, v_lo_618_);
lean_dec(v_pivot_622_);
v_fst_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_fst_624_);
v_snd_625_ = lean_ctor_get(v___x_623_, 1);
lean_inc(v_snd_625_);
lean_dec_ref(v___x_623_);
v___x_626_ = lean_nat_dec_le(v_hi_619_, v_fst_624_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_627_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_616_, v_snd_625_, v_lo_618_, v_fst_624_);
v___x_628_ = lean_unsigned_to_nat(1u);
v___x_629_ = lean_nat_add(v_fst_624_, v___x_628_);
lean_dec(v_fst_624_);
v_as_617_ = v___x_627_;
v_lo_618_ = v___x_629_;
goto _start;
}
else
{
lean_dec(v_fst_624_);
lean_dec(v_lo_618_);
return v_snd_625_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg___boxed(lean_object* v_n_651_, lean_object* v_as_652_, lean_object* v_lo_653_, lean_object* v_hi_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_651_, v_as_652_, v_lo_653_, v_hi_654_);
lean_dec(v_hi_654_);
lean_dec(v_n_651_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(lean_object* v_a_656_, lean_object* v___x_657_, lean_object* v___x_658_, lean_object* v_a_659_, lean_object* v_b_660_){
_start:
{
lean_object* v_it_662_; lean_object* v_startInclusive_663_; lean_object* v_endExclusive_664_; 
if (lean_obj_tag(v_a_659_) == 0)
{
lean_object* v_currPos_668_; lean_object* v_searcher_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_692_; 
v_currPos_668_ = lean_ctor_get(v_a_659_, 0);
v_searcher_669_ = lean_ctor_get(v_a_659_, 1);
v_isSharedCheck_692_ = !lean_is_exclusive(v_a_659_);
if (v_isSharedCheck_692_ == 0)
{
v___x_671_ = v_a_659_;
v_isShared_672_ = v_isSharedCheck_692_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_searcher_669_);
lean_inc(v_currPos_668_);
lean_dec(v_a_659_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_692_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
uint8_t v_decide_673_; 
v_decide_673_ = lean_nat_dec_eq(v_searcher_669_, v___x_658_);
if (v_decide_673_ == 0)
{
uint32_t v___x_674_; uint32_t v___x_675_; uint8_t v___x_676_; 
v___x_674_ = 10;
v___x_675_ = lean_string_utf8_get_fast(v_a_656_, v_searcher_669_);
v___x_676_ = lean_uint32_dec_eq(v___x_675_, v___x_674_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_string_utf8_next_fast(v_a_656_, v_searcher_669_);
lean_dec(v_searcher_669_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 1, v___x_677_);
v___x_679_ = v___x_671_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_currPos_668_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v___x_677_);
v___x_679_ = v_reuseFailAlloc_681_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
v_a_659_ = v___x_679_;
goto _start;
}
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v_slice_685_; lean_object* v_nextIt_687_; 
v___x_682_ = lean_string_utf8_next_fast(v_a_656_, v_searcher_669_);
v___x_683_ = lean_nat_sub(v___x_682_, v_searcher_669_);
v___x_684_ = lean_nat_add(v_searcher_669_, v___x_683_);
lean_dec(v___x_683_);
v_slice_685_ = l_String_Slice_subslice_x21(v___x_657_, v_currPos_668_, v_searcher_669_);
lean_inc(v___x_684_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 1, v___x_684_);
lean_ctor_set(v___x_671_, 0, v___x_684_);
v_nextIt_687_ = v___x_671_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v___x_684_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v___x_684_);
v_nextIt_687_ = v_reuseFailAlloc_690_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v_startInclusive_688_; lean_object* v_endExclusive_689_; 
v_startInclusive_688_ = lean_ctor_get(v_slice_685_, 0);
lean_inc(v_startInclusive_688_);
v_endExclusive_689_ = lean_ctor_get(v_slice_685_, 1);
lean_inc(v_endExclusive_689_);
lean_dec_ref(v_slice_685_);
v_it_662_ = v_nextIt_687_;
v_startInclusive_663_ = v_startInclusive_688_;
v_endExclusive_664_ = v_endExclusive_689_;
goto v___jp_661_;
}
}
}
else
{
lean_object* v___x_691_; 
lean_del_object(v___x_671_);
lean_dec(v_searcher_669_);
v___x_691_ = lean_box(1);
lean_inc(v___x_658_);
v_it_662_ = v___x_691_;
v_startInclusive_663_ = v_currPos_668_;
v_endExclusive_664_ = v___x_658_;
goto v___jp_661_;
}
}
}
else
{
lean_dec(v___x_658_);
lean_dec_ref(v_a_656_);
return v_b_660_;
}
v___jp_661_:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
lean_inc_ref(v_a_656_);
v___x_665_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_665_, 0, v_a_656_);
lean_ctor_set(v___x_665_, 1, v_startInclusive_663_);
lean_ctor_set(v___x_665_, 2, v_endExclusive_664_);
v___x_666_ = lean_array_push(v_b_660_, v___x_665_);
v_a_659_ = v_it_662_;
v_b_660_ = v___x_666_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg___boxed(lean_object* v_a_693_, lean_object* v___x_694_, lean_object* v___x_695_, lean_object* v_a_696_, lean_object* v_b_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_693_, v___x_694_, v___x_695_, v_a_696_, v_b_697_);
lean_dec_ref(v___x_694_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(size_t v_sz_699_, size_t v_i_700_, lean_object* v_bs_701_){
_start:
{
uint8_t v___x_702_; 
v___x_702_ = lean_usize_dec_lt(v_i_700_, v_sz_699_);
if (v___x_702_ == 0)
{
return v_bs_701_;
}
else
{
lean_object* v_v_703_; lean_object* v___x_704_; lean_object* v_bs_x27_705_; lean_object* v___x_706_; size_t v___x_707_; size_t v___x_708_; lean_object* v___x_709_; 
v_v_703_ = lean_array_uget(v_bs_701_, v_i_700_);
v___x_704_ = lean_unsigned_to_nat(0u);
v_bs_x27_705_ = lean_array_uset(v_bs_701_, v_i_700_, v___x_704_);
v___x_706_ = l_String_Slice_toString(v_v_703_);
lean_dec(v_v_703_);
v___x_707_ = ((size_t)1ULL);
v___x_708_ = lean_usize_add(v_i_700_, v___x_707_);
v___x_709_ = lean_array_uset(v_bs_x27_705_, v_i_700_, v___x_706_);
v_i_700_ = v___x_708_;
v_bs_701_ = v___x_709_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9___boxed(lean_object* v_sz_711_, lean_object* v_i_712_, lean_object* v_bs_713_){
_start:
{
size_t v_sz_boxed_714_; size_t v_i_boxed_715_; lean_object* v_res_716_; 
v_sz_boxed_714_ = lean_unbox_usize(v_sz_711_);
lean_dec(v_sz_711_);
v_i_boxed_715_ = lean_unbox_usize(v_i_712_);
lean_dec(v_i_712_);
v_res_716_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(v_sz_boxed_714_, v_i_boxed_715_, v_bs_713_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
if (lean_obj_tag(v_x_718_) == 0)
{
return v_x_717_;
}
else
{
lean_object* v_key_719_; lean_object* v_value_720_; lean_object* v_tail_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_744_; 
v_key_719_ = lean_ctor_get(v_x_718_, 0);
v_value_720_ = lean_ctor_get(v_x_718_, 1);
v_tail_721_ = lean_ctor_get(v_x_718_, 2);
v_isSharedCheck_744_ = !lean_is_exclusive(v_x_718_);
if (v_isSharedCheck_744_ == 0)
{
v___x_723_ = v_x_718_;
v_isShared_724_ = v_isSharedCheck_744_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_tail_721_);
lean_inc(v_value_720_);
lean_inc(v_key_719_);
lean_dec(v_x_718_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_744_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_725_; uint64_t v___x_726_; uint64_t v___x_727_; uint64_t v___x_728_; uint64_t v_fold_729_; uint64_t v___x_730_; uint64_t v___x_731_; uint64_t v___x_732_; size_t v___x_733_; size_t v___x_734_; size_t v___x_735_; size_t v___x_736_; size_t v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_725_ = lean_array_get_size(v_x_717_);
v___x_726_ = lean_uint64_of_nat(v_key_719_);
v___x_727_ = 32ULL;
v___x_728_ = lean_uint64_shift_right(v___x_726_, v___x_727_);
v_fold_729_ = lean_uint64_xor(v___x_726_, v___x_728_);
v___x_730_ = 16ULL;
v___x_731_ = lean_uint64_shift_right(v_fold_729_, v___x_730_);
v___x_732_ = lean_uint64_xor(v_fold_729_, v___x_731_);
v___x_733_ = lean_uint64_to_usize(v___x_732_);
v___x_734_ = lean_usize_of_nat(v___x_725_);
v___x_735_ = ((size_t)1ULL);
v___x_736_ = lean_usize_sub(v___x_734_, v___x_735_);
v___x_737_ = lean_usize_land(v___x_733_, v___x_736_);
v___x_738_ = lean_array_uget_borrowed(v_x_717_, v___x_737_);
lean_inc(v___x_738_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 2, v___x_738_);
v___x_740_ = v___x_723_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_key_719_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v_value_720_);
lean_ctor_set(v_reuseFailAlloc_743_, 2, v___x_738_);
v___x_740_ = v_reuseFailAlloc_743_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; 
v___x_741_ = lean_array_uset(v_x_717_, v___x_737_, v___x_740_);
v_x_717_ = v___x_741_;
v_x_718_ = v_tail_721_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(lean_object* v_i_745_, lean_object* v_source_746_, lean_object* v_target_747_){
_start:
{
lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = lean_array_get_size(v_source_746_);
v___x_749_ = lean_nat_dec_lt(v_i_745_, v___x_748_);
if (v___x_749_ == 0)
{
lean_dec_ref(v_source_746_);
lean_dec(v_i_745_);
return v_target_747_;
}
else
{
lean_object* v_es_750_; lean_object* v___x_751_; lean_object* v_source_752_; lean_object* v_target_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_es_750_ = lean_array_fget(v_source_746_, v_i_745_);
v___x_751_ = lean_box(0);
v_source_752_ = lean_array_fset(v_source_746_, v_i_745_, v___x_751_);
v_target_753_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(v_target_747_, v_es_750_);
v___x_754_ = lean_unsigned_to_nat(1u);
v___x_755_ = lean_nat_add(v_i_745_, v___x_754_);
lean_dec(v_i_745_);
v_i_745_ = v___x_755_;
v_source_746_ = v_source_752_;
v_target_747_ = v_target_753_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(lean_object* v_data_757_){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v_nbuckets_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_758_ = lean_array_get_size(v_data_757_);
v___x_759_ = lean_unsigned_to_nat(2u);
v_nbuckets_760_ = lean_nat_mul(v___x_758_, v___x_759_);
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_box(0);
v___x_763_ = lean_mk_array(v_nbuckets_760_, v___x_762_);
v___x_764_ = lean_array_propagate_mark(v_data_757_, v___x_763_);
v___x_765_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(v___x_761_, v_data_757_, v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(lean_object* v_a_766_, lean_object* v_x_767_){
_start:
{
if (lean_obj_tag(v_x_767_) == 0)
{
uint8_t v___x_768_; 
v___x_768_ = 0;
return v___x_768_;
}
else
{
lean_object* v_key_769_; lean_object* v_tail_770_; uint8_t v___x_771_; 
v_key_769_ = lean_ctor_get(v_x_767_, 0);
v_tail_770_ = lean_ctor_get(v_x_767_, 2);
v___x_771_ = lean_nat_dec_eq(v_key_769_, v_a_766_);
if (v___x_771_ == 0)
{
v_x_767_ = v_tail_770_;
goto _start;
}
else
{
return v___x_771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg___boxed(lean_object* v_a_773_, lean_object* v_x_774_){
_start:
{
uint8_t v_res_775_; lean_object* v_r_776_; 
v_res_775_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_773_, v_x_774_);
lean_dec(v_x_774_);
lean_dec(v_a_773_);
v_r_776_ = lean_box(v_res_775_);
return v_r_776_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(lean_object* v_a_777_, lean_object* v_b_778_, lean_object* v_x_779_){
_start:
{
if (lean_obj_tag(v_x_779_) == 0)
{
lean_dec(v_b_778_);
lean_dec(v_a_777_);
return v_x_779_;
}
else
{
lean_object* v_key_780_; lean_object* v_value_781_; lean_object* v_tail_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_794_; 
v_key_780_ = lean_ctor_get(v_x_779_, 0);
v_value_781_ = lean_ctor_get(v_x_779_, 1);
v_tail_782_ = lean_ctor_get(v_x_779_, 2);
v_isSharedCheck_794_ = !lean_is_exclusive(v_x_779_);
if (v_isSharedCheck_794_ == 0)
{
v___x_784_ = v_x_779_;
v_isShared_785_ = v_isSharedCheck_794_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_tail_782_);
lean_inc(v_value_781_);
lean_inc(v_key_780_);
lean_dec(v_x_779_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_794_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
uint8_t v___x_786_; 
v___x_786_ = lean_nat_dec_eq(v_key_780_, v_a_777_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_787_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_777_, v_b_778_, v_tail_782_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 2, v___x_787_);
v___x_789_ = v___x_784_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_key_780_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_value_781_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
else
{
lean_object* v___x_792_; 
lean_dec(v_value_781_);
lean_dec(v_key_780_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 1, v_b_778_);
lean_ctor_set(v___x_784_, 0, v_a_777_);
v___x_792_ = v___x_784_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_777_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_b_778_);
lean_ctor_set(v_reuseFailAlloc_793_, 2, v_tail_782_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(lean_object* v_m_795_, lean_object* v_a_796_, lean_object* v_b_797_){
_start:
{
lean_object* v_size_798_; lean_object* v_buckets_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_842_; 
v_size_798_ = lean_ctor_get(v_m_795_, 0);
v_buckets_799_ = lean_ctor_get(v_m_795_, 1);
v_isSharedCheck_842_ = !lean_is_exclusive(v_m_795_);
if (v_isSharedCheck_842_ == 0)
{
v___x_801_ = v_m_795_;
v_isShared_802_ = v_isSharedCheck_842_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_buckets_799_);
lean_inc(v_size_798_);
lean_dec(v_m_795_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_842_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; uint64_t v___x_804_; uint64_t v___x_805_; uint64_t v___x_806_; uint64_t v_fold_807_; uint64_t v___x_808_; uint64_t v___x_809_; uint64_t v___x_810_; size_t v___x_811_; size_t v___x_812_; size_t v___x_813_; size_t v___x_814_; size_t v___x_815_; lean_object* v_bkt_816_; uint8_t v___x_817_; 
v___x_803_ = lean_array_get_size(v_buckets_799_);
v___x_804_ = lean_uint64_of_nat(v_a_796_);
v___x_805_ = 32ULL;
v___x_806_ = lean_uint64_shift_right(v___x_804_, v___x_805_);
v_fold_807_ = lean_uint64_xor(v___x_804_, v___x_806_);
v___x_808_ = 16ULL;
v___x_809_ = lean_uint64_shift_right(v_fold_807_, v___x_808_);
v___x_810_ = lean_uint64_xor(v_fold_807_, v___x_809_);
v___x_811_ = lean_uint64_to_usize(v___x_810_);
v___x_812_ = lean_usize_of_nat(v___x_803_);
v___x_813_ = ((size_t)1ULL);
v___x_814_ = lean_usize_sub(v___x_812_, v___x_813_);
v___x_815_ = lean_usize_land(v___x_811_, v___x_814_);
v_bkt_816_ = lean_array_uget_borrowed(v_buckets_799_, v___x_815_);
v___x_817_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_796_, v_bkt_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; lean_object* v_size_x27_819_; lean_object* v___x_820_; lean_object* v_buckets_x27_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_818_ = lean_unsigned_to_nat(1u);
v_size_x27_819_ = lean_nat_add(v_size_798_, v___x_818_);
lean_dec(v_size_798_);
lean_inc(v_bkt_816_);
v___x_820_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_820_, 0, v_a_796_);
lean_ctor_set(v___x_820_, 1, v_b_797_);
lean_ctor_set(v___x_820_, 2, v_bkt_816_);
v_buckets_x27_821_ = lean_array_uset(v_buckets_799_, v___x_815_, v___x_820_);
v___x_822_ = lean_unsigned_to_nat(4u);
v___x_823_ = lean_nat_mul(v_size_x27_819_, v___x_822_);
v___x_824_ = lean_unsigned_to_nat(3u);
v___x_825_ = lean_nat_div(v___x_823_, v___x_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_array_get_size(v_buckets_x27_821_);
v___x_827_ = lean_nat_dec_le(v___x_825_, v___x_826_);
lean_dec(v___x_825_);
if (v___x_827_ == 0)
{
lean_object* v_val_828_; lean_object* v___x_830_; 
v_val_828_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(v_buckets_x27_821_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_val_828_);
lean_ctor_set(v___x_801_, 0, v_size_x27_819_);
v___x_830_ = v___x_801_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_size_x27_819_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_val_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
else
{
lean_object* v___x_833_; 
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_buckets_x27_821_);
lean_ctor_set(v___x_801_, 0, v_size_x27_819_);
v___x_833_ = v___x_801_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_size_x27_819_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_buckets_x27_821_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
else
{
lean_object* v___x_835_; lean_object* v_buckets_x27_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
lean_inc(v_bkt_816_);
v___x_835_ = lean_box(0);
v_buckets_x27_836_ = lean_array_uset(v_buckets_799_, v___x_815_, v___x_835_);
v___x_837_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_796_, v_b_797_, v_bkt_816_);
v___x_838_ = lean_array_uset(v_buckets_x27_836_, v___x_815_, v___x_837_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v___x_838_);
v___x_840_ = v___x_801_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_size_798_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v___x_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(lean_object* v_a_843_, lean_object* v_as_844_, size_t v_i_845_, size_t v_stop_846_){
_start:
{
uint8_t v___x_847_; 
v___x_847_ = lean_usize_dec_eq(v_i_845_, v_stop_846_);
if (v___x_847_ == 0)
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_array_uget_borrowed(v_as_844_, v_i_845_);
v___x_849_ = lean_name_eq(v_a_843_, v___x_848_);
if (v___x_849_ == 0)
{
size_t v___x_850_; size_t v___x_851_; 
v___x_850_ = ((size_t)1ULL);
v___x_851_ = lean_usize_add(v_i_845_, v___x_850_);
v_i_845_ = v___x_851_;
goto _start;
}
else
{
return v___x_849_;
}
}
else
{
uint8_t v___x_853_; 
v___x_853_ = 0;
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9___boxed(lean_object* v_a_854_, lean_object* v_as_855_, lean_object* v_i_856_, lean_object* v_stop_857_){
_start:
{
size_t v_i_boxed_858_; size_t v_stop_boxed_859_; uint8_t v_res_860_; lean_object* v_r_861_; 
v_i_boxed_858_ = lean_unbox_usize(v_i_856_);
lean_dec(v_i_856_);
v_stop_boxed_859_ = lean_unbox_usize(v_stop_857_);
lean_dec(v_stop_857_);
v_res_860_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(v_a_854_, v_as_855_, v_i_boxed_858_, v_stop_boxed_859_);
lean_dec_ref(v_as_855_);
lean_dec(v_a_854_);
v_r_861_ = lean_box(v_res_860_);
return v_r_861_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(lean_object* v_as_862_, lean_object* v_a_863_){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; 
v___x_864_ = lean_unsigned_to_nat(0u);
v___x_865_ = lean_array_get_size(v_as_862_);
v___x_866_ = lean_nat_dec_lt(v___x_864_, v___x_865_);
if (v___x_866_ == 0)
{
return v___x_866_;
}
else
{
size_t v___x_867_; size_t v___x_868_; uint8_t v___x_869_; 
v___x_867_ = ((size_t)0ULL);
v___x_868_ = lean_usize_of_nat(v___x_865_);
v___x_869_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4_spec__9(v_a_863_, v_as_862_, v___x_867_, v___x_868_);
return v___x_869_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4___boxed(lean_object* v_as_870_, lean_object* v_a_871_){
_start:
{
uint8_t v_res_872_; lean_object* v_r_873_; 
v_res_872_ = l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(v_as_870_, v_a_871_);
lean_dec(v_a_871_);
lean_dec_ref(v_as_870_);
v_r_873_ = lean_box(v_res_872_);
return v_r_873_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(lean_object* v_a_874_, lean_object* v_fallback_875_, lean_object* v_x_876_){
_start:
{
if (lean_obj_tag(v_x_876_) == 0)
{
lean_inc(v_fallback_875_);
return v_fallback_875_;
}
else
{
lean_object* v_key_877_; lean_object* v_value_878_; lean_object* v_tail_879_; uint8_t v___x_880_; 
v_key_877_ = lean_ctor_get(v_x_876_, 0);
v_value_878_ = lean_ctor_get(v_x_876_, 1);
v_tail_879_ = lean_ctor_get(v_x_876_, 2);
v___x_880_ = lean_nat_dec_eq(v_key_877_, v_a_874_);
if (v___x_880_ == 0)
{
v_x_876_ = v_tail_879_;
goto _start;
}
else
{
lean_inc(v_value_878_);
return v_value_878_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg___boxed(lean_object* v_a_882_, lean_object* v_fallback_883_, lean_object* v_x_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_882_, v_fallback_883_, v_x_884_);
lean_dec(v_x_884_);
lean_dec(v_fallback_883_);
lean_dec(v_a_882_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(lean_object* v_m_886_, lean_object* v_a_887_, lean_object* v_fallback_888_){
_start:
{
lean_object* v_buckets_889_; lean_object* v___x_890_; uint64_t v___x_891_; uint64_t v___x_892_; uint64_t v___x_893_; uint64_t v_fold_894_; uint64_t v___x_895_; uint64_t v___x_896_; uint64_t v___x_897_; size_t v___x_898_; size_t v___x_899_; size_t v___x_900_; size_t v___x_901_; size_t v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_buckets_889_ = lean_ctor_get(v_m_886_, 1);
v___x_890_ = lean_array_get_size(v_buckets_889_);
v___x_891_ = lean_uint64_of_nat(v_a_887_);
v___x_892_ = 32ULL;
v___x_893_ = lean_uint64_shift_right(v___x_891_, v___x_892_);
v_fold_894_ = lean_uint64_xor(v___x_891_, v___x_893_);
v___x_895_ = 16ULL;
v___x_896_ = lean_uint64_shift_right(v_fold_894_, v___x_895_);
v___x_897_ = lean_uint64_xor(v_fold_894_, v___x_896_);
v___x_898_ = lean_uint64_to_usize(v___x_897_);
v___x_899_ = lean_usize_of_nat(v___x_890_);
v___x_900_ = ((size_t)1ULL);
v___x_901_ = lean_usize_sub(v___x_899_, v___x_900_);
v___x_902_ = lean_usize_land(v___x_898_, v___x_901_);
v___x_903_ = lean_array_uget_borrowed(v_buckets_889_, v___x_902_);
v___x_904_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_887_, v_fallback_888_, v___x_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg___boxed(lean_object* v_m_905_, lean_object* v_a_906_, lean_object* v_fallback_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_m_905_, v_a_906_, v_fallback_907_);
lean_dec(v_fallback_907_);
lean_dec(v_a_906_);
lean_dec_ref(v_m_905_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(lean_object* v_as_911_, size_t v_sz_912_, size_t v_i_913_, lean_object* v_b_914_){
_start:
{
lean_object* v_a_917_; uint8_t v___x_921_; 
v___x_921_ = lean_usize_dec_lt(v_i_913_, v_sz_912_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v_b_914_);
return v___x_922_;
}
else
{
lean_object* v_a_923_; lean_object* v_fst_924_; lean_object* v_snd_925_; lean_object* v___x_926_; lean_object* v___x_927_; uint8_t v___x_928_; 
v_a_923_ = lean_array_uget_borrowed(v_as_911_, v_i_913_);
v_fst_924_ = lean_ctor_get(v_a_923_, 0);
v_snd_925_ = lean_ctor_get(v_a_923_, 1);
v___x_926_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0));
v___x_927_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_b_914_, v_fst_924_, v___x_926_);
v___x_928_ = l_Array_contains___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__4(v___x_927_, v_snd_925_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; lean_object* v___x_930_; 
lean_inc(v_snd_925_);
v___x_929_ = lean_array_push(v___x_927_, v_snd_925_);
lean_inc(v_fst_924_);
v___x_930_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(v_b_914_, v_fst_924_, v___x_929_);
v_a_917_ = v___x_930_;
goto v___jp_916_;
}
else
{
lean_dec(v___x_927_);
v_a_917_ = v_b_914_;
goto v___jp_916_;
}
}
v___jp_916_:
{
size_t v___x_918_; size_t v___x_919_; 
v___x_918_ = ((size_t)1ULL);
v___x_919_ = lean_usize_add(v_i_913_, v___x_918_);
v_i_913_ = v___x_919_;
v_b_914_ = v_a_917_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___boxed(lean_object* v_as_931_, lean_object* v_sz_932_, lean_object* v_i_933_, lean_object* v_b_934_, lean_object* v___y_935_){
_start:
{
size_t v_sz_boxed_936_; size_t v_i_boxed_937_; lean_object* v_res_938_; 
v_sz_boxed_936_ = lean_unbox_usize(v_sz_932_);
lean_dec(v_sz_932_);
v_i_boxed_937_ = lean_unbox_usize(v_i_933_);
lean_dec(v_i_933_);
v_res_938_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(v_as_931_, v_sz_boxed_936_, v_i_boxed_937_, v_b_934_);
lean_dec_ref(v_as_931_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(lean_object* v_s_939_){
_start:
{
lean_object* v___x_941_; lean_object* v_putStr_942_; lean_object* v___x_943_; 
v___x_941_ = lean_get_stdout();
v_putStr_942_ = lean_ctor_get(v___x_941_, 4);
lean_inc_ref(v_putStr_942_);
lean_dec_ref(v___x_941_);
v___x_943_ = lean_apply_2(v_putStr_942_, v_s_939_, lean_box(0));
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23___boxed(lean_object* v_s_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v_s_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(lean_object* v_s_947_){
_start:
{
uint32_t v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_949_ = 10;
v___x_950_ = lean_string_push(v_s_947_, v___x_949_);
v___x_951_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13___boxed(lean_object* v_s_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v_s_952_);
return v_res_954_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(uint8_t v___x_955_, lean_object* v_a_956_, lean_object* v_b_957_){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; uint8_t v___x_960_; 
v___x_958_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_956_, v___x_955_);
v___x_959_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_b_957_, v___x_955_);
v___x_960_ = lean_string_dec_lt(v___x_958_, v___x_959_);
lean_dec_ref(v___x_959_);
lean_dec_ref(v___x_958_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0___boxed(lean_object* v___x_961_, lean_object* v_a_962_, lean_object* v_b_963_){
_start:
{
uint8_t v___x_11756__boxed_964_; uint8_t v_res_965_; lean_object* v_r_966_; 
v___x_11756__boxed_964_ = lean_unbox(v___x_961_);
v_res_965_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_11756__boxed_964_, v_a_962_, v_b_963_);
v_r_966_ = lean_box(v_res_965_);
return v_r_966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(lean_object* v___x_967_, lean_object* v___x_968_, lean_object* v_hi_969_, lean_object* v_pivot_970_, lean_object* v_as_971_, lean_object* v_i_972_, lean_object* v_k_973_){
_start:
{
uint8_t v___x_974_; 
v___x_974_ = lean_nat_dec_lt(v_k_973_, v_hi_969_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; lean_object* v___x_976_; 
lean_dec(v_k_973_);
lean_dec(v_pivot_970_);
v___x_975_ = lean_array_fswap(v_as_971_, v_i_972_, v_hi_969_);
v___x_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_976_, 0, v_i_972_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
return v___x_976_;
}
else
{
uint8_t v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_977_ = lean_nat_dec_lt(v___x_967_, v___x_968_);
v___x_978_ = lean_array_fget_borrowed(v_as_971_, v_k_973_);
lean_inc(v___x_978_);
v___x_979_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_978_, v___x_977_);
lean_inc(v_pivot_970_);
v___x_980_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_pivot_970_, v___x_977_);
v___x_981_ = lean_string_dec_lt(v___x_979_, v___x_980_);
lean_dec_ref(v___x_980_);
lean_dec_ref(v___x_979_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_unsigned_to_nat(1u);
v___x_983_ = lean_nat_add(v_k_973_, v___x_982_);
lean_dec(v_k_973_);
v_k_973_ = v___x_983_;
goto _start;
}
else
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_985_ = lean_array_fswap(v_as_971_, v_i_972_, v_k_973_);
v___x_986_ = lean_unsigned_to_nat(1u);
v___x_987_ = lean_nat_add(v_i_972_, v___x_986_);
lean_dec(v_i_972_);
v___x_988_ = lean_nat_add(v_k_973_, v___x_986_);
lean_dec(v_k_973_);
v_as_971_ = v___x_985_;
v_i_972_ = v___x_987_;
v_k_973_ = v___x_988_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg___boxed(lean_object* v___x_990_, lean_object* v___x_991_, lean_object* v_hi_992_, lean_object* v_pivot_993_, lean_object* v_as_994_, lean_object* v_i_995_, lean_object* v_k_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_990_, v___x_991_, v_hi_992_, v_pivot_993_, v_as_994_, v_i_995_, v_k_996_);
lean_dec(v_hi_992_);
lean_dec(v___x_991_);
lean_dec(v___x_990_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(lean_object* v___x_998_, lean_object* v___x_999_, lean_object* v_n_1000_, lean_object* v_as_1001_, lean_object* v_lo_1002_, lean_object* v_hi_1003_){
_start:
{
lean_object* v___y_1005_; uint8_t v___x_1015_; 
v___x_1015_ = lean_nat_dec_lt(v_lo_1002_, v_hi_1003_);
if (v___x_1015_ == 0)
{
lean_dec(v_lo_1002_);
return v_as_1001_;
}
else
{
uint8_t v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v_mid_1019_; lean_object* v___y_1021_; lean_object* v___y_1027_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
v___x_1016_ = lean_nat_dec_lt(v___x_998_, v___x_999_);
v___x_1017_ = lean_nat_add(v_lo_1002_, v_hi_1003_);
v___x_1018_ = lean_unsigned_to_nat(1u);
v_mid_1019_ = lean_nat_shiftr(v___x_1017_, v___x_1018_);
lean_dec(v___x_1017_);
v___x_1032_ = lean_array_fget_borrowed(v_as_1001_, v_mid_1019_);
v___x_1033_ = lean_array_fget_borrowed(v_as_1001_, v_lo_1002_);
lean_inc(v___x_1033_);
lean_inc(v___x_1032_);
v___x_1034_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1016_, v___x_1032_, v___x_1033_);
if (v___x_1034_ == 0)
{
v___y_1027_ = v_as_1001_;
goto v___jp_1026_;
}
else
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_array_fswap(v_as_1001_, v_lo_1002_, v_mid_1019_);
v___y_1027_ = v___x_1035_;
goto v___jp_1026_;
}
v___jp_1020_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; uint8_t v___x_1024_; 
v___x_1022_ = lean_array_fget_borrowed(v___y_1021_, v_mid_1019_);
v___x_1023_ = lean_array_fget_borrowed(v___y_1021_, v_hi_1003_);
lean_inc(v___x_1023_);
lean_inc(v___x_1022_);
v___x_1024_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1016_, v___x_1022_, v___x_1023_);
if (v___x_1024_ == 0)
{
lean_dec(v_mid_1019_);
v___y_1005_ = v___y_1021_;
goto v___jp_1004_;
}
else
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_array_fswap(v___y_1021_, v_mid_1019_, v_hi_1003_);
lean_dec(v_mid_1019_);
v___y_1005_ = v___x_1025_;
goto v___jp_1004_;
}
}
v___jp_1026_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; uint8_t v___x_1030_; 
v___x_1028_ = lean_array_fget_borrowed(v___y_1027_, v_hi_1003_);
v___x_1029_ = lean_array_fget_borrowed(v___y_1027_, v_lo_1002_);
lean_inc(v___x_1029_);
lean_inc(v___x_1028_);
v___x_1030_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___lam__0(v___x_1016_, v___x_1028_, v___x_1029_);
if (v___x_1030_ == 0)
{
v___y_1021_ = v___y_1027_;
goto v___jp_1020_;
}
else
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_array_fswap(v___y_1027_, v_lo_1002_, v_hi_1003_);
v___y_1021_ = v___x_1031_;
goto v___jp_1020_;
}
}
}
v___jp_1004_:
{
lean_object* v_pivot_1006_; lean_object* v___x_1007_; lean_object* v_fst_1008_; lean_object* v_snd_1009_; uint8_t v___x_1010_; 
v_pivot_1006_ = lean_array_fget(v___y_1005_, v_hi_1003_);
lean_inc_n(v_lo_1002_, 2);
v___x_1007_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_998_, v___x_999_, v_hi_1003_, v_pivot_1006_, v___y_1005_, v_lo_1002_, v_lo_1002_);
v_fst_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_fst_1008_);
v_snd_1009_ = lean_ctor_get(v___x_1007_, 1);
lean_inc(v_snd_1009_);
lean_dec_ref(v___x_1007_);
v___x_1010_ = lean_nat_dec_le(v_hi_1003_, v_fst_1008_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_998_, v___x_999_, v_n_1000_, v_snd_1009_, v_lo_1002_, v_fst_1008_);
v___x_1012_ = lean_unsigned_to_nat(1u);
v___x_1013_ = lean_nat_add(v_fst_1008_, v___x_1012_);
lean_dec(v_fst_1008_);
v_as_1001_ = v___x_1011_;
v_lo_1002_ = v___x_1013_;
goto _start;
}
else
{
lean_dec(v_fst_1008_);
lean_dec(v_lo_1002_);
return v_snd_1009_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg___boxed(lean_object* v___x_1036_, lean_object* v___x_1037_, lean_object* v_n_1038_, lean_object* v_as_1039_, lean_object* v_lo_1040_, lean_object* v_hi_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1036_, v___x_1037_, v_n_1038_, v_as_1039_, v_lo_1040_, v_hi_1041_);
lean_dec(v_hi_1041_);
lean_dec(v_n_1038_);
lean_dec(v___x_1037_);
lean_dec(v___x_1036_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(lean_object* v___x_1045_, lean_object* v___x_1046_, lean_object* v___x_1047_, size_t v_sz_1048_, size_t v_i_1049_, lean_object* v_bs_1050_){
_start:
{
uint8_t v___x_1051_; 
v___x_1051_ = lean_usize_dec_lt(v_i_1049_, v_sz_1048_);
if (v___x_1051_ == 0)
{
lean_dec_ref(v___x_1045_);
return v_bs_1050_;
}
else
{
uint8_t v___x_1052_; lean_object* v_v_1053_; lean_object* v___x_1054_; lean_object* v_bs_x27_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; size_t v___x_1064_; size_t v___x_1065_; lean_object* v___x_1066_; 
v___x_1052_ = lean_nat_dec_lt(v___x_1046_, v___x_1047_);
v_v_1053_ = lean_array_uget(v_bs_1050_, v_i_1049_);
v___x_1054_ = lean_unsigned_to_nat(0u);
v_bs_x27_1055_ = lean_array_uset(v_bs_1050_, v_i_1049_, v___x_1054_);
v___x_1056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__0));
lean_inc_ref(v___x_1045_);
v___x_1057_ = lean_string_append(v___x_1045_, v___x_1056_);
v___x_1058_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_v_1053_, v___x_1052_);
v___x_1059_ = lean_string_append(v___x_1057_, v___x_1058_);
lean_dec_ref(v___x_1058_);
v___x_1060_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___closed__1));
v___x_1061_ = lean_string_append(v___x_1059_, v___x_1060_);
v___x_1062_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordedMarker___closed__0));
v___x_1063_ = lean_string_append(v___x_1061_, v___x_1062_);
v___x_1064_ = ((size_t)1ULL);
v___x_1065_ = lean_usize_add(v_i_1049_, v___x_1064_);
v___x_1066_ = lean_array_uset(v_bs_x27_1055_, v_i_1049_, v___x_1063_);
v_i_1049_ = v___x_1065_;
v_bs_1050_ = v___x_1066_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10___boxed(lean_object* v___x_1068_, lean_object* v___x_1069_, lean_object* v___x_1070_, lean_object* v_sz_1071_, lean_object* v_i_1072_, lean_object* v_bs_1073_){
_start:
{
size_t v_sz_boxed_1074_; size_t v_i_boxed_1075_; lean_object* v_res_1076_; 
v_sz_boxed_1074_ = lean_unbox_usize(v_sz_1071_);
lean_dec(v_sz_1071_);
v_i_boxed_1075_ = lean_unbox_usize(v_i_1072_);
lean_dec(v_i_1072_);
v_res_1076_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(v___x_1068_, v___x_1069_, v___x_1070_, v_sz_boxed_1074_, v_i_boxed_1075_, v_bs_1073_);
lean_dec(v___x_1070_);
lean_dec(v___x_1069_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(lean_object* v_as_1077_, size_t v_sz_1078_, size_t v_i_1079_, lean_object* v_b_1080_){
_start:
{
lean_object* v_a_1083_; uint8_t v___x_1087_; 
v___x_1087_ = lean_usize_dec_lt(v_i_1079_, v_sz_1078_);
if (v___x_1087_ == 0)
{
lean_object* v___x_1088_; 
v___x_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1088_, 0, v_b_1080_);
return v___x_1088_;
}
else
{
lean_object* v_a_1089_; lean_object* v_fst_1090_; lean_object* v_snd_1091_; lean_object* v_fst_1092_; lean_object* v_snd_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1132_; 
v_a_1089_ = lean_array_uget_borrowed(v_as_1077_, v_i_1079_);
v_fst_1090_ = lean_ctor_get(v_a_1089_, 0);
v_snd_1091_ = lean_ctor_get(v_a_1089_, 1);
v_fst_1092_ = lean_ctor_get(v_b_1080_, 0);
v_snd_1093_ = lean_ctor_get(v_b_1080_, 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_b_1080_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1095_ = v_b_1080_;
v_isShared_1096_ = v_isSharedCheck_1132_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_snd_1093_);
lean_inc(v_fst_1092_);
lean_dec(v_b_1080_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1132_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1097_ = lean_unsigned_to_nat(1u);
v___x_1098_ = lean_nat_sub(v_fst_1090_, v___x_1097_);
v___x_1099_ = lean_array_get_size(v_fst_1092_);
v___x_1100_ = lean_nat_dec_lt(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1102_; 
lean_dec(v___x_1098_);
if (v_isShared_1096_ == 0)
{
v___x_1102_ = v___x_1095_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_fst_1092_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v_snd_1093_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
v_a_1083_ = v___x_1102_;
goto v___jp_1082_;
}
}
else
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___y_1108_; lean_object* v___x_1121_; lean_object* v___y_1123_; lean_object* v___y_1124_; uint8_t v___x_1126_; 
v___x_1104_ = lean_unsigned_to_nat(0u);
v___x_1105_ = lean_array_fget_borrowed(v_fst_1092_, v___x_1098_);
v___x_1106_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_leadingWhitespace(v___x_1105_);
v___x_1121_ = lean_array_get_size(v_snd_1091_);
v___x_1126_ = lean_nat_dec_eq(v___x_1121_, v___x_1104_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; lean_object* v___y_1129_; uint8_t v___x_1131_; 
v___x_1127_ = lean_nat_sub(v___x_1121_, v___x_1097_);
v___x_1131_ = lean_nat_dec_le(v___x_1104_, v___x_1127_);
if (v___x_1131_ == 0)
{
lean_inc(v___x_1127_);
v___y_1129_ = v___x_1127_;
goto v___jp_1128_;
}
else
{
v___y_1129_ = v___x_1104_;
goto v___jp_1128_;
}
v___jp_1128_:
{
uint8_t v___x_1130_; 
v___x_1130_ = lean_nat_dec_le(v___y_1129_, v___x_1127_);
if (v___x_1130_ == 0)
{
lean_dec(v___x_1127_);
lean_inc(v___y_1129_);
v___y_1123_ = v___y_1129_;
v___y_1124_ = v___y_1129_;
goto v___jp_1122_;
}
else
{
v___y_1123_ = v___y_1129_;
v___y_1124_ = v___x_1127_;
goto v___jp_1122_;
}
}
}
else
{
lean_inc(v_snd_1091_);
v___y_1108_ = v_snd_1091_;
goto v___jp_1107_;
}
v___jp_1107_:
{
size_t v_sz_1109_; size_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1119_; 
v_sz_1109_ = lean_array_size(v___y_1108_);
v___x_1110_ = ((size_t)0ULL);
v___x_1111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__10(v___x_1106_, v___x_1098_, v___x_1099_, v_sz_1109_, v___x_1110_, v___y_1108_);
lean_inc(v___x_1098_);
v___x_1112_ = l_Array_extract___redArg(v_fst_1092_, v___x_1104_, v___x_1098_);
v___x_1113_ = l_Array_append___redArg(v___x_1112_, v___x_1111_);
v___x_1114_ = l_Array_extract___redArg(v_fst_1092_, v___x_1098_, v___x_1099_);
lean_dec(v_fst_1092_);
v___x_1115_ = l_Array_append___redArg(v___x_1113_, v___x_1114_);
lean_dec_ref(v___x_1114_);
v___x_1116_ = lean_array_get_size(v___x_1111_);
lean_dec_ref(v___x_1111_);
v___x_1117_ = lean_nat_add(v_snd_1093_, v___x_1116_);
lean_dec(v_snd_1093_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v___x_1117_);
lean_ctor_set(v___x_1095_, 0, v___x_1115_);
v___x_1119_ = v___x_1095_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1115_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
v_a_1083_ = v___x_1119_;
goto v___jp_1082_;
}
}
v___jp_1122_:
{
lean_object* v___x_1125_; 
lean_inc(v_snd_1091_);
v___x_1125_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1098_, v___x_1099_, v___x_1121_, v_snd_1091_, v___y_1123_, v___y_1124_);
lean_dec(v___y_1124_);
v___y_1108_ = v___x_1125_;
goto v___jp_1107_;
}
}
}
}
v___jp_1082_:
{
size_t v___x_1084_; size_t v___x_1085_; 
v___x_1084_ = ((size_t)1ULL);
v___x_1085_ = lean_usize_add(v_i_1079_, v___x_1084_);
v_i_1079_ = v___x_1085_;
v_b_1080_ = v_a_1083_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12___boxed(lean_object* v_as_1133_, lean_object* v_sz_1134_, lean_object* v_i_1135_, lean_object* v_b_1136_, lean_object* v___y_1137_){
_start:
{
size_t v_sz_boxed_1138_; size_t v_i_boxed_1139_; lean_object* v_res_1140_; 
v_sz_boxed_1138_ = lean_unbox_usize(v_sz_1134_);
lean_dec(v_sz_1134_);
v_i_boxed_1139_ = lean_unbox_usize(v_i_1135_);
lean_dec(v_i_1135_);
v_res_1140_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(v_as_1133_, v_sz_boxed_1138_, v_i_boxed_1139_, v_b_1136_);
lean_dec_ref(v_as_1133_);
return v_res_1140_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = lean_box(0);
v___x_1144_ = lean_unsigned_to_nat(16u);
v___x_1145_ = lean_mk_array(v___x_1144_, v___x_1143_);
return v___x_1145_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__2);
v___x_1147_ = lean_unsigned_to_nat(0u);
v___x_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
lean_ctor_set(v___x_1148_, 1, v___x_1146_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(lean_object* v_as_1157_, size_t v_sz_1158_, size_t v_i_1159_, lean_object* v_b_1160_){
_start:
{
lean_object* v_a_1163_; uint8_t v___x_1167_; 
v___x_1167_ = lean_usize_dec_lt(v_i_1159_, v_sz_1158_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1168_, 0, v_b_1160_);
return v___x_1168_;
}
else
{
lean_object* v_a_1169_; lean_object* v_snd_1170_; lean_object* v_fst_1171_; lean_object* v_snd_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1279_; 
v_a_1169_ = lean_array_uget_borrowed(v_as_1157_, v_i_1159_);
v_snd_1170_ = lean_ctor_get(v_a_1169_, 1);
lean_inc(v_snd_1170_);
v_fst_1171_ = lean_ctor_get(v_snd_1170_, 0);
v_snd_1172_ = lean_ctor_get(v_snd_1170_, 1);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_snd_1170_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1174_ = v_snd_1170_;
v_isShared_1175_ = v_isSharedCheck_1279_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_snd_1172_);
lean_inc(v_fst_1171_);
lean_dec(v_snd_1170_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1279_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1176_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___x_1190_; lean_object* v___x_1191_; size_t v_sz_1192_; size_t v___x_1193_; lean_object* v___x_1194_; 
v___x_1176_ = lean_box(0);
v___x_1190_ = lean_unsigned_to_nat(0u);
v___x_1191_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__3);
v_sz_1192_ = lean_array_size(v_snd_1172_);
v___x_1193_ = ((size_t)0ULL);
v___x_1194_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6(v_snd_1172_, v_sz_1192_, v___x_1193_, v___x_1191_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1196_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1194_, 1);
v___x_1196_ = l_IO_FS_readFile(v_fst_1171_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v_size_1200_; lean_object* v_buckets_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; size_t v_sz_1205_; lean_object* v___x_1206_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1250_; lean_object* v___x_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
lean_dec(v_snd_1172_);
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc_n(v_a_1197_, 2);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1198_ = lean_string_utf8_byte_size(v_a_1197_);
v___x_1199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1199_, 0, v_a_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1190_);
lean_ctor_set(v___x_1199_, 2, v___x_1198_);
v_size_1200_ = lean_ctor_get(v_a_1195_, 0);
lean_inc(v_size_1200_);
v_buckets_1201_ = lean_ctor_get(v_a_1195_, 1);
lean_inc_ref(v_buckets_1201_);
lean_dec(v_a_1195_);
v___x_1202_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__7___closed__0);
v___x_1203_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__4));
v___x_1204_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_1197_, v___x_1199_, v___x_1198_, v___x_1202_, v___x_1203_);
lean_dec_ref_known(v___x_1199_, 3);
v_sz_1205_ = lean_array_size(v___x_1204_);
v___x_1206_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__9(v_sz_1205_, v___x_1193_, v___x_1204_);
v___x_1256_ = lean_mk_empty_array_with_capacity(v_size_1200_);
lean_dec(v_size_1200_);
v___x_1257_ = lean_array_get_size(v_buckets_1201_);
v___x_1258_ = lean_nat_dec_lt(v___x_1190_, v___x_1257_);
if (v___x_1258_ == 0)
{
lean_dec_ref(v_buckets_1201_);
v___y_1250_ = v___x_1256_;
goto v___jp_1249_;
}
else
{
size_t v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = lean_usize_of_nat(v___x_1257_);
v___x_1260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__16(v_buckets_1201_, v___x_1193_, v___x_1259_, v___x_1256_);
lean_dec_ref(v_buckets_1201_);
v___y_1250_ = v___x_1260_;
goto v___jp_1249_;
}
v___jp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 1, v___x_1190_);
lean_ctor_set(v___x_1174_, 0, v___x_1206_);
v___x_1211_ = v___x_1174_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1206_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v___x_1190_);
v___x_1211_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
size_t v_sz_1212_; lean_object* v___x_1213_; 
v_sz_1212_ = lean_array_size(v___y_1209_);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__12(v___y_1209_, v_sz_1212_, v___x_1193_, v___x_1211_);
lean_dec_ref(v___y_1209_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; lean_object* v_fst_1215_; lean_object* v_snd_1216_; uint8_t v___x_1217_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref_known(v___x_1213_, 1);
v_fst_1215_ = lean_ctor_get(v_a_1214_, 0);
lean_inc(v_fst_1215_);
v_snd_1216_ = lean_ctor_get(v_a_1214_, 1);
lean_inc(v_snd_1216_);
lean_dec(v_a_1214_);
v___x_1217_ = lean_nat_dec_lt(v___x_1190_, v_snd_1216_);
if (v___x_1217_ == 0)
{
lean_dec(v_snd_1216_);
lean_dec(v_fst_1215_);
lean_dec(v_fst_1171_);
v_a_1163_ = v___x_1176_;
goto v___jp_1162_;
}
else
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; 
v___x_1218_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__5));
lean_inc(v_snd_1216_);
v___x_1219_ = l_Nat_reprFast(v_snd_1216_);
v___x_1220_ = lean_string_append(v___x_1218_, v___x_1219_);
lean_dec_ref(v___x_1219_);
v___x_1221_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__6));
v___x_1222_ = lean_string_append(v___x_1220_, v___x_1221_);
v___x_1223_ = lean_nat_dec_eq(v_snd_1216_, v___y_1208_);
lean_dec(v_snd_1216_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; 
v___x_1224_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__7));
v___y_1178_ = v___x_1222_;
v___y_1179_ = v_fst_1215_;
v___y_1180_ = v___x_1224_;
goto v___jp_1177_;
}
else
{
lean_object* v___x_1225_; 
v___x_1225_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___y_1178_ = v___x_1222_;
v___y_1179_ = v_fst_1215_;
v___y_1180_ = v___x_1225_;
goto v___jp_1177_;
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec(v_fst_1171_);
v_a_1226_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1213_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1213_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
v___jp_1235_:
{
lean_object* v___x_1241_; 
v___x_1241_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v___y_1239_, v___y_1238_, v___y_1236_, v___y_1240_);
lean_dec(v___y_1240_);
lean_dec(v___y_1239_);
v___y_1208_ = v___y_1237_;
v___y_1209_ = v___x_1241_;
goto v___jp_1207_;
}
v___jp_1242_:
{
uint8_t v___x_1248_; 
v___x_1248_ = lean_nat_dec_le(v___y_1247_, v___y_1245_);
if (v___x_1248_ == 0)
{
lean_dec(v___y_1245_);
lean_inc(v___y_1247_);
v___y_1236_ = v___y_1247_;
v___y_1237_ = v___y_1243_;
v___y_1238_ = v___y_1244_;
v___y_1239_ = v___y_1246_;
v___y_1240_ = v___y_1247_;
goto v___jp_1235_;
}
else
{
v___y_1236_ = v___y_1247_;
v___y_1237_ = v___y_1243_;
v___y_1238_ = v___y_1244_;
v___y_1239_ = v___y_1246_;
v___y_1240_ = v___y_1245_;
goto v___jp_1235_;
}
}
v___jp_1249_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; 
v___x_1251_ = lean_unsigned_to_nat(1u);
v___x_1252_ = lean_array_get_size(v___y_1250_);
v___x_1253_ = lean_nat_dec_eq(v___x_1252_, v___x_1190_);
if (v___x_1253_ == 0)
{
lean_object* v___x_1254_; uint8_t v___x_1255_; 
v___x_1254_ = lean_nat_sub(v___x_1252_, v___x_1251_);
v___x_1255_ = lean_nat_dec_le(v___x_1190_, v___x_1254_);
if (v___x_1255_ == 0)
{
lean_inc(v___x_1254_);
v___y_1243_ = v___x_1251_;
v___y_1244_ = v___y_1250_;
v___y_1245_ = v___x_1254_;
v___y_1246_ = v___x_1252_;
v___y_1247_ = v___x_1254_;
goto v___jp_1242_;
}
else
{
v___y_1243_ = v___x_1251_;
v___y_1244_ = v___y_1250_;
v___y_1245_ = v___x_1254_;
v___y_1246_ = v___x_1252_;
v___y_1247_ = v___x_1190_;
goto v___jp_1242_;
}
}
else
{
v___y_1208_ = v___x_1251_;
v___y_1209_ = v___y_1250_;
goto v___jp_1207_;
}
}
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
lean_dec_ref_known(v___x_1196_, 1);
lean_dec(v_a_1195_);
lean_del_object(v___x_1174_);
v___x_1261_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__8));
v___x_1262_ = lean_string_append(v___x_1261_, v_fst_1171_);
lean_dec(v_fst_1171_);
v___x_1263_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__9));
v___x_1264_ = lean_string_append(v___x_1262_, v___x_1263_);
v___x_1265_ = lean_array_get_size(v_snd_1172_);
lean_dec(v_snd_1172_);
v___x_1266_ = l_Nat_reprFast(v___x_1265_);
v___x_1267_ = lean_string_append(v___x_1264_, v___x_1266_);
lean_dec_ref(v___x_1266_);
v___x_1268_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__10));
v___x_1269_ = lean_string_append(v___x_1267_, v___x_1268_);
v___x_1270_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_1269_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_dec_ref_known(v___x_1270_, 1);
v_a_1163_ = v___x_1176_;
goto v___jp_1162_;
}
else
{
return v___x_1270_;
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
lean_del_object(v___x_1174_);
lean_dec(v_snd_1172_);
lean_dec(v_fst_1171_);
v_a_1271_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1194_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1194_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
v___jp_1177_:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1181_ = lean_string_append(v___y_1178_, v___y_1180_);
v___x_1182_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__0));
v___x_1183_ = lean_string_append(v___x_1181_, v___x_1182_);
v___x_1184_ = lean_string_append(v___x_1183_, v_fst_1171_);
v___x_1185_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_1184_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
lean_dec_ref_known(v___x_1185_, 1);
v___x_1186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___closed__1));
v___x_1187_ = lean_array_to_list(v___y_1179_);
v___x_1188_ = l_String_intercalate(v___x_1186_, v___x_1187_);
v___x_1189_ = l_IO_FS_writeFile(v_fst_1171_, v___x_1188_);
lean_dec_ref(v___x_1188_);
lean_dec(v_fst_1171_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_dec_ref_known(v___x_1189_, 1);
v_a_1163_ = v___x_1176_;
goto v___jp_1162_;
}
else
{
return v___x_1189_;
}
}
else
{
lean_dec(v___y_1179_);
lean_dec(v_fst_1171_);
return v___x_1185_;
}
}
}
}
v___jp_1162_:
{
size_t v___x_1164_; size_t v___x_1165_; 
v___x_1164_ = ((size_t)1ULL);
v___x_1165_ = lean_usize_add(v_i_1159_, v___x_1164_);
v_i_1159_ = v___x_1165_;
v_b_1160_ = v_a_1163_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18___boxed(lean_object* v_as_1280_, lean_object* v_sz_1281_, lean_object* v_i_1282_, lean_object* v_b_1283_, lean_object* v___y_1284_){
_start:
{
size_t v_sz_boxed_1285_; size_t v_i_boxed_1286_; lean_object* v_res_1287_; 
v_sz_boxed_1285_ = lean_unbox_usize(v_sz_1281_);
lean_dec(v_sz_1281_);
v_i_boxed_1286_ = lean_unbox_usize(v_i_1282_);
lean_dec(v_i_1282_);
v_res_1287_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(v_as_1280_, v_sz_boxed_1285_, v_i_boxed_1286_, v_b_1283_);
lean_dec_ref(v_as_1280_);
return v_res_1287_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(lean_object* v_a_1288_, lean_object* v_x_1289_){
_start:
{
if (lean_obj_tag(v_x_1289_) == 0)
{
uint8_t v___x_1290_; 
v___x_1290_ = 0;
return v___x_1290_;
}
else
{
lean_object* v_key_1291_; lean_object* v_tail_1292_; uint8_t v___x_1293_; 
v_key_1291_ = lean_ctor_get(v_x_1289_, 0);
v_tail_1292_ = lean_ctor_get(v_x_1289_, 2);
v___x_1293_ = lean_string_dec_eq(v_key_1291_, v_a_1288_);
if (v___x_1293_ == 0)
{
v_x_1289_ = v_tail_1292_;
goto _start;
}
else
{
return v___x_1293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg___boxed(lean_object* v_a_1295_, lean_object* v_x_1296_){
_start:
{
uint8_t v_res_1297_; lean_object* v_r_1298_; 
v_res_1297_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1295_, v_x_1296_);
lean_dec(v_x_1296_);
lean_dec_ref(v_a_1295_);
v_r_1298_ = lean_box(v_res_1297_);
return v_r_1298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(lean_object* v_a_1299_, lean_object* v_b_1300_, lean_object* v_x_1301_){
_start:
{
if (lean_obj_tag(v_x_1301_) == 0)
{
lean_dec(v_b_1300_);
lean_dec_ref(v_a_1299_);
return v_x_1301_;
}
else
{
lean_object* v_key_1302_; lean_object* v_value_1303_; lean_object* v_tail_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1316_; 
v_key_1302_ = lean_ctor_get(v_x_1301_, 0);
v_value_1303_ = lean_ctor_get(v_x_1301_, 1);
v_tail_1304_ = lean_ctor_get(v_x_1301_, 2);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_x_1301_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1306_ = v_x_1301_;
v_isShared_1307_ = v_isSharedCheck_1316_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_tail_1304_);
lean_inc(v_value_1303_);
lean_inc(v_key_1302_);
lean_dec(v_x_1301_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1316_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
uint8_t v___x_1308_; 
v___x_1308_ = lean_string_dec_eq(v_key_1302_, v_a_1299_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1309_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1299_, v_b_1300_, v_tail_1304_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 2, v___x_1309_);
v___x_1311_ = v___x_1306_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_key_1302_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_value_1303_);
lean_ctor_set(v_reuseFailAlloc_1312_, 2, v___x_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
else
{
lean_object* v___x_1314_; 
lean_dec(v_value_1303_);
lean_dec(v_key_1302_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 1, v_b_1300_);
lean_ctor_set(v___x_1306_, 0, v_a_1299_);
v___x_1314_ = v___x_1306_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1299_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v_b_1300_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v_tail_1304_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(lean_object* v_x_1317_, lean_object* v_x_1318_){
_start:
{
if (lean_obj_tag(v_x_1318_) == 0)
{
return v_x_1317_;
}
else
{
lean_object* v_key_1319_; lean_object* v_value_1320_; lean_object* v_tail_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1344_; 
v_key_1319_ = lean_ctor_get(v_x_1318_, 0);
v_value_1320_ = lean_ctor_get(v_x_1318_, 1);
v_tail_1321_ = lean_ctor_get(v_x_1318_, 2);
v_isSharedCheck_1344_ = !lean_is_exclusive(v_x_1318_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1323_ = v_x_1318_;
v_isShared_1324_ = v_isSharedCheck_1344_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_tail_1321_);
lean_inc(v_value_1320_);
lean_inc(v_key_1319_);
lean_dec(v_x_1318_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1344_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1325_; uint64_t v___x_1326_; uint64_t v___x_1327_; uint64_t v___x_1328_; uint64_t v_fold_1329_; uint64_t v___x_1330_; uint64_t v___x_1331_; uint64_t v___x_1332_; size_t v___x_1333_; size_t v___x_1334_; size_t v___x_1335_; size_t v___x_1336_; size_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1340_; 
v___x_1325_ = lean_array_get_size(v_x_1317_);
v___x_1326_ = lean_string_hash(v_key_1319_);
v___x_1327_ = 32ULL;
v___x_1328_ = lean_uint64_shift_right(v___x_1326_, v___x_1327_);
v_fold_1329_ = lean_uint64_xor(v___x_1326_, v___x_1328_);
v___x_1330_ = 16ULL;
v___x_1331_ = lean_uint64_shift_right(v_fold_1329_, v___x_1330_);
v___x_1332_ = lean_uint64_xor(v_fold_1329_, v___x_1331_);
v___x_1333_ = lean_uint64_to_usize(v___x_1332_);
v___x_1334_ = lean_usize_of_nat(v___x_1325_);
v___x_1335_ = ((size_t)1ULL);
v___x_1336_ = lean_usize_sub(v___x_1334_, v___x_1335_);
v___x_1337_ = lean_usize_land(v___x_1333_, v___x_1336_);
v___x_1338_ = lean_array_uget_borrowed(v_x_1317_, v___x_1337_);
lean_inc(v___x_1338_);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 2, v___x_1338_);
v___x_1340_ = v___x_1323_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_key_1319_);
lean_ctor_set(v_reuseFailAlloc_1343_, 1, v_value_1320_);
lean_ctor_set(v_reuseFailAlloc_1343_, 2, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
lean_object* v___x_1341_; 
v___x_1341_ = lean_array_uset(v_x_1317_, v___x_1337_, v___x_1340_);
v_x_1317_ = v___x_1341_;
v_x_1318_ = v_tail_1321_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(lean_object* v_i_1345_, lean_object* v_source_1346_, lean_object* v_target_1347_){
_start:
{
lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = lean_array_get_size(v_source_1346_);
v___x_1349_ = lean_nat_dec_lt(v_i_1345_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_dec_ref(v_source_1346_);
lean_dec(v_i_1345_);
return v_target_1347_;
}
else
{
lean_object* v_es_1350_; lean_object* v___x_1351_; lean_object* v_source_1352_; lean_object* v_target_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v_es_1350_ = lean_array_fget(v_source_1346_, v_i_1345_);
v___x_1351_ = lean_box(0);
v_source_1352_ = lean_array_fset(v_source_1346_, v_i_1345_, v___x_1351_);
v_target_1353_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(v_target_1347_, v_es_1350_);
v___x_1354_ = lean_unsigned_to_nat(1u);
v___x_1355_ = lean_nat_add(v_i_1345_, v___x_1354_);
lean_dec(v_i_1345_);
v_i_1345_ = v___x_1355_;
v_source_1346_ = v_source_1352_;
v_target_1347_ = v_target_1353_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(lean_object* v_data_1357_){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v_nbuckets_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1358_ = lean_array_get_size(v_data_1357_);
v___x_1359_ = lean_unsigned_to_nat(2u);
v_nbuckets_1360_ = lean_nat_mul(v___x_1358_, v___x_1359_);
v___x_1361_ = lean_unsigned_to_nat(0u);
v___x_1362_ = lean_box(0);
v___x_1363_ = lean_mk_array(v_nbuckets_1360_, v___x_1362_);
v___x_1364_ = lean_array_propagate_mark(v_data_1357_, v___x_1363_);
v___x_1365_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(v___x_1361_, v_data_1357_, v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(lean_object* v_m_1366_, lean_object* v_a_1367_, lean_object* v_b_1368_){
_start:
{
lean_object* v_size_1369_; lean_object* v_buckets_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1413_; 
v_size_1369_ = lean_ctor_get(v_m_1366_, 0);
v_buckets_1370_ = lean_ctor_get(v_m_1366_, 1);
v_isSharedCheck_1413_ = !lean_is_exclusive(v_m_1366_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1372_ = v_m_1366_;
v_isShared_1373_ = v_isSharedCheck_1413_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_buckets_1370_);
lean_inc(v_size_1369_);
lean_dec(v_m_1366_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1413_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1374_; uint64_t v___x_1375_; uint64_t v___x_1376_; uint64_t v___x_1377_; uint64_t v_fold_1378_; uint64_t v___x_1379_; uint64_t v___x_1380_; uint64_t v___x_1381_; size_t v___x_1382_; size_t v___x_1383_; size_t v___x_1384_; size_t v___x_1385_; size_t v___x_1386_; lean_object* v_bkt_1387_; uint8_t v___x_1388_; 
v___x_1374_ = lean_array_get_size(v_buckets_1370_);
v___x_1375_ = lean_string_hash(v_a_1367_);
v___x_1376_ = 32ULL;
v___x_1377_ = lean_uint64_shift_right(v___x_1375_, v___x_1376_);
v_fold_1378_ = lean_uint64_xor(v___x_1375_, v___x_1377_);
v___x_1379_ = 16ULL;
v___x_1380_ = lean_uint64_shift_right(v_fold_1378_, v___x_1379_);
v___x_1381_ = lean_uint64_xor(v_fold_1378_, v___x_1380_);
v___x_1382_ = lean_uint64_to_usize(v___x_1381_);
v___x_1383_ = lean_usize_of_nat(v___x_1374_);
v___x_1384_ = ((size_t)1ULL);
v___x_1385_ = lean_usize_sub(v___x_1383_, v___x_1384_);
v___x_1386_ = lean_usize_land(v___x_1382_, v___x_1385_);
v_bkt_1387_ = lean_array_uget_borrowed(v_buckets_1370_, v___x_1386_);
v___x_1388_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1367_, v_bkt_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v_size_x27_1390_; lean_object* v___x_1391_; lean_object* v_buckets_x27_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; uint8_t v___x_1398_; 
v___x_1389_ = lean_unsigned_to_nat(1u);
v_size_x27_1390_ = lean_nat_add(v_size_1369_, v___x_1389_);
lean_dec(v_size_1369_);
lean_inc(v_bkt_1387_);
v___x_1391_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1391_, 0, v_a_1367_);
lean_ctor_set(v___x_1391_, 1, v_b_1368_);
lean_ctor_set(v___x_1391_, 2, v_bkt_1387_);
v_buckets_x27_1392_ = lean_array_uset(v_buckets_1370_, v___x_1386_, v___x_1391_);
v___x_1393_ = lean_unsigned_to_nat(4u);
v___x_1394_ = lean_nat_mul(v_size_x27_1390_, v___x_1393_);
v___x_1395_ = lean_unsigned_to_nat(3u);
v___x_1396_ = lean_nat_div(v___x_1394_, v___x_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_array_get_size(v_buckets_x27_1392_);
v___x_1398_ = lean_nat_dec_le(v___x_1396_, v___x_1397_);
lean_dec(v___x_1396_);
if (v___x_1398_ == 0)
{
lean_object* v_val_1399_; lean_object* v___x_1401_; 
v_val_1399_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(v_buckets_x27_1392_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v_val_1399_);
lean_ctor_set(v___x_1372_, 0, v_size_x27_1390_);
v___x_1401_ = v___x_1372_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_size_x27_1390_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_val_1399_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
else
{
lean_object* v___x_1404_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v_buckets_x27_1392_);
lean_ctor_set(v___x_1372_, 0, v_size_x27_1390_);
v___x_1404_ = v___x_1372_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_size_x27_1390_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v_buckets_x27_1392_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
else
{
lean_object* v___x_1406_; lean_object* v_buckets_x27_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1411_; 
lean_inc(v_bkt_1387_);
v___x_1406_ = lean_box(0);
v_buckets_x27_1407_ = lean_array_uset(v_buckets_1370_, v___x_1386_, v___x_1406_);
v___x_1408_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1367_, v_b_1368_, v_bkt_1387_);
v___x_1409_ = lean_array_uset(v_buckets_x27_1407_, v___x_1386_, v___x_1408_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v___x_1409_);
v___x_1411_ = v___x_1372_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_size_1369_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v___x_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(lean_object* v_a_1414_, lean_object* v_fallback_1415_, lean_object* v_x_1416_){
_start:
{
if (lean_obj_tag(v_x_1416_) == 0)
{
lean_inc(v_fallback_1415_);
return v_fallback_1415_;
}
else
{
lean_object* v_key_1417_; lean_object* v_value_1418_; lean_object* v_tail_1419_; uint8_t v___x_1420_; 
v_key_1417_ = lean_ctor_get(v_x_1416_, 0);
v_value_1418_ = lean_ctor_get(v_x_1416_, 1);
v_tail_1419_ = lean_ctor_get(v_x_1416_, 2);
v___x_1420_ = lean_string_dec_eq(v_key_1417_, v_a_1414_);
if (v___x_1420_ == 0)
{
v_x_1416_ = v_tail_1419_;
goto _start;
}
else
{
lean_inc(v_value_1418_);
return v_value_1418_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg___boxed(lean_object* v_a_1422_, lean_object* v_fallback_1423_, lean_object* v_x_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1422_, v_fallback_1423_, v_x_1424_);
lean_dec(v_x_1424_);
lean_dec(v_fallback_1423_);
lean_dec_ref(v_a_1422_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(lean_object* v_m_1426_, lean_object* v_a_1427_, lean_object* v_fallback_1428_){
_start:
{
lean_object* v_buckets_1429_; lean_object* v___x_1430_; uint64_t v___x_1431_; uint64_t v___x_1432_; uint64_t v___x_1433_; uint64_t v_fold_1434_; uint64_t v___x_1435_; uint64_t v___x_1436_; uint64_t v___x_1437_; size_t v___x_1438_; size_t v___x_1439_; size_t v___x_1440_; size_t v___x_1441_; size_t v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v_buckets_1429_ = lean_ctor_get(v_m_1426_, 1);
v___x_1430_ = lean_array_get_size(v_buckets_1429_);
v___x_1431_ = lean_string_hash(v_a_1427_);
v___x_1432_ = 32ULL;
v___x_1433_ = lean_uint64_shift_right(v___x_1431_, v___x_1432_);
v_fold_1434_ = lean_uint64_xor(v___x_1431_, v___x_1433_);
v___x_1435_ = 16ULL;
v___x_1436_ = lean_uint64_shift_right(v_fold_1434_, v___x_1435_);
v___x_1437_ = lean_uint64_xor(v_fold_1434_, v___x_1436_);
v___x_1438_ = lean_uint64_to_usize(v___x_1437_);
v___x_1439_ = lean_usize_of_nat(v___x_1430_);
v___x_1440_ = ((size_t)1ULL);
v___x_1441_ = lean_usize_sub(v___x_1439_, v___x_1440_);
v___x_1442_ = lean_usize_land(v___x_1438_, v___x_1441_);
v___x_1443_ = lean_array_uget_borrowed(v_buckets_1429_, v___x_1442_);
v___x_1444_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1427_, v_fallback_1428_, v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg___boxed(lean_object* v_m_1445_, lean_object* v_a_1446_, lean_object* v_fallback_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_m_1445_, v_a_1446_, v_fallback_1447_);
lean_dec(v_fallback_1447_);
lean_dec_ref(v_a_1446_);
lean_dec_ref(v_m_1445_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(lean_object* v_as_1451_, size_t v_sz_1452_, size_t v_i_1453_, lean_object* v_b_1454_){
_start:
{
uint8_t v___x_1456_; 
v___x_1456_ = lean_usize_dec_lt(v_i_1453_, v_sz_1452_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; 
v___x_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1457_, 0, v_b_1454_);
return v___x_1457_;
}
else
{
lean_object* v_a_1458_; lean_object* v_file_1459_; lean_object* v_pos_1460_; lean_object* v_option_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v_fst_1465_; lean_object* v_snd_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1487_; 
v_a_1458_ = lean_array_uget_borrowed(v_as_1451_, v_i_1453_);
v_file_1459_ = lean_ctor_get(v_a_1458_, 0);
v_pos_1460_ = lean_ctor_get(v_a_1458_, 1);
lean_inc_ref(v_pos_1460_);
v_option_1461_ = lean_ctor_get(v_a_1458_, 2);
v___x_1462_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___closed__0));
lean_inc_ref(v_file_1459_);
v___x_1463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1463_, 0, v_file_1459_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_b_1454_, v_file_1459_, v___x_1463_);
lean_dec_ref_known(v___x_1463_, 2);
v_fst_1465_ = lean_ctor_get(v___x_1464_, 0);
v_snd_1466_ = lean_ctor_get(v___x_1464_, 1);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1468_ = v___x_1464_;
v_isShared_1469_ = v_isSharedCheck_1487_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_snd_1466_);
lean_inc(v_fst_1465_);
lean_dec(v___x_1464_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1487_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v_line_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1485_; 
v_line_1470_ = lean_ctor_get(v_pos_1460_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_pos_1460_);
if (v_isSharedCheck_1485_ == 0)
{
lean_object* v_unused_1486_; 
v_unused_1486_ = lean_ctor_get(v_pos_1460_, 1);
lean_dec(v_unused_1486_);
v___x_1472_ = v_pos_1460_;
v_isShared_1473_ = v_isSharedCheck_1485_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_line_1470_);
lean_dec(v_pos_1460_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1485_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
lean_inc(v_option_1461_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 1, v_option_1461_);
lean_ctor_set(v___x_1468_, 0, v_line_1470_);
v___x_1475_ = v___x_1468_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_line_1470_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v_option_1461_);
v___x_1475_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
lean_object* v___x_1476_; lean_object* v___x_1478_; 
v___x_1476_ = lean_array_push(v_snd_1466_, v___x_1475_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 1, v___x_1476_);
lean_ctor_set(v___x_1472_, 0, v_fst_1465_);
v___x_1478_ = v___x_1472_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_fst_1465_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v___x_1476_);
v___x_1478_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
lean_object* v___x_1479_; size_t v___x_1480_; size_t v___x_1481_; 
lean_inc_ref(v_file_1459_);
v___x_1479_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(v_b_1454_, v_file_1459_, v___x_1478_);
v___x_1480_ = ((size_t)1ULL);
v___x_1481_ = lean_usize_add(v_i_1453_, v___x_1480_);
v_i_1453_ = v___x_1481_;
v_b_1454_ = v___x_1479_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2___boxed(lean_object* v_as_1488_, lean_object* v_sz_1489_, lean_object* v_i_1490_, lean_object* v_b_1491_, lean_object* v___y_1492_){
_start:
{
size_t v_sz_boxed_1493_; size_t v_i_boxed_1494_; lean_object* v_res_1495_; 
v_sz_boxed_1493_ = lean_unbox_usize(v_sz_1489_);
lean_dec(v_sz_1489_);
v_i_boxed_1494_ = lean_unbox_usize(v_i_1490_);
lean_dec(v_i_1490_);
v_res_1495_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(v_as_1488_, v_sz_boxed_1493_, v_i_boxed_1494_, v_b_1491_);
lean_dec_ref(v_as_1488_);
return v_res_1495_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0(void){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1496_ = lean_box(0);
v___x_1497_ = lean_unsigned_to_nat(16u);
v___x_1498_ = lean_mk_array(v___x_1497_, v___x_1496_);
return v___x_1498_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v_byFile_1501_; 
v___x_1499_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__0);
v___x_1500_ = lean_unsigned_to_nat(0u);
v_byFile_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_byFile_1501_, 0, v___x_1500_);
lean_ctor_set(v_byFile_1501_, 1, v___x_1499_);
return v_byFile_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(lean_object* v_records_1502_){
_start:
{
lean_object* v___x_1504_; lean_object* v_byFile_1505_; size_t v_sz_1506_; size_t v___x_1507_; lean_object* v___x_1508_; 
v___x_1504_ = lean_unsigned_to_nat(0u);
v_byFile_1505_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___closed__1);
v_sz_1506_ = lean_array_size(v_records_1502_);
v___x_1507_ = ((size_t)0ULL);
v___x_1508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__2(v_records_1502_, v_sz_1506_, v___x_1507_, v_byFile_1505_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; lean_object* v___y_1511_; lean_object* v_size_1523_; lean_object* v_buckets_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v_size_1523_ = lean_ctor_get(v_a_1509_, 0);
lean_inc(v_size_1523_);
v_buckets_1524_ = lean_ctor_get(v_a_1509_, 1);
lean_inc_ref(v_buckets_1524_);
lean_dec(v_a_1509_);
v___x_1525_ = lean_mk_empty_array_with_capacity(v_size_1523_);
lean_dec(v_size_1523_);
v___x_1526_ = lean_array_get_size(v_buckets_1524_);
v___x_1527_ = lean_nat_dec_lt(v___x_1504_, v___x_1526_);
if (v___x_1527_ == 0)
{
lean_dec_ref(v_buckets_1524_);
v___y_1511_ = v___x_1525_;
goto v___jp_1510_;
}
else
{
size_t v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = lean_usize_of_nat(v___x_1526_);
v___x_1529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__20(v_buckets_1524_, v___x_1507_, v___x_1528_, v___x_1525_);
lean_dec_ref(v_buckets_1524_);
v___y_1511_ = v___x_1529_;
goto v___jp_1510_;
}
v___jp_1510_:
{
lean_object* v___x_1512_; size_t v_sz_1513_; lean_object* v___x_1514_; 
v___x_1512_ = lean_box(0);
v_sz_1513_ = lean_array_size(v___y_1511_);
v___x_1514_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__18(v___y_1511_, v_sz_1513_, v___x_1507_, v___x_1512_);
lean_dec_ref(v___y_1511_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1521_ == 0)
{
lean_object* v_unused_1522_; 
v_unused_1522_ = lean_ctor_get(v___x_1514_, 0);
lean_dec(v_unused_1522_);
v___x_1516_ = v___x_1514_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_dec(v___x_1514_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1512_);
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1512_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
else
{
return v___x_1514_;
}
}
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
v_a_1530_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1508_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1508_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles___boxed(lean_object* v_records_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(v_records_1538_);
lean_dec_ref(v_records_1538_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(lean_object* v_00_u03b2_1541_, lean_object* v_m_1542_, lean_object* v_a_1543_, lean_object* v_fallback_1544_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___redArg(v_m_1542_, v_a_1543_, v_fallback_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0___boxed(lean_object* v_00_u03b2_1546_, lean_object* v_m_1547_, lean_object* v_a_1548_, lean_object* v_fallback_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0(v_00_u03b2_1546_, v_m_1547_, v_a_1548_, v_fallback_1549_);
lean_dec(v_fallback_1549_);
lean_dec_ref(v_a_1548_);
lean_dec_ref(v_m_1547_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1(lean_object* v_00_u03b2_1551_, lean_object* v_m_1552_, lean_object* v_a_1553_, lean_object* v_b_1554_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1___redArg(v_m_1552_, v_a_1553_, v_b_1554_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(lean_object* v_00_u03b2_1556_, lean_object* v_m_1557_, lean_object* v_a_1558_, lean_object* v_fallback_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___redArg(v_m_1557_, v_a_1558_, v_fallback_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3___boxed(lean_object* v_00_u03b2_1561_, lean_object* v_m_1562_, lean_object* v_a_1563_, lean_object* v_fallback_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3(v_00_u03b2_1561_, v_m_1562_, v_a_1563_, v_fallback_1564_);
lean_dec(v_fallback_1564_);
lean_dec(v_a_1563_);
lean_dec_ref(v_m_1562_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5(lean_object* v_00_u03b2_1566_, lean_object* v_m_1567_, lean_object* v_a_1568_, lean_object* v_b_1569_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5___redArg(v_m_1567_, v_a_1568_, v_b_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(lean_object* v_a_1571_, lean_object* v___x_1572_, lean_object* v___x_1573_, lean_object* v_inst_1574_, lean_object* v_R_1575_, lean_object* v_a_1576_, lean_object* v_b_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___redArg(v_a_1571_, v___x_1572_, v___x_1573_, v_a_1576_, v_b_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8___boxed(lean_object* v_a_1579_, lean_object* v___x_1580_, lean_object* v___x_1581_, lean_object* v_inst_1582_, lean_object* v_R_1583_, lean_object* v_a_1584_, lean_object* v_b_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__8(v_a_1579_, v___x_1580_, v___x_1581_, v_inst_1582_, v_R_1583_, v_a_1584_, v_b_1585_);
lean_dec_ref(v___x_1580_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(lean_object* v___x_1587_, lean_object* v___x_1588_, lean_object* v_n_1589_, lean_object* v_as_1590_, lean_object* v_lo_1591_, lean_object* v_hi_1592_, lean_object* v_w_1593_, lean_object* v_hlo_1594_, lean_object* v_hhi_1595_){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___redArg(v___x_1587_, v___x_1588_, v_n_1589_, v_as_1590_, v_lo_1591_, v_hi_1592_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11___boxed(lean_object* v___x_1597_, lean_object* v___x_1598_, lean_object* v_n_1599_, lean_object* v_as_1600_, lean_object* v_lo_1601_, lean_object* v_hi_1602_, lean_object* v_w_1603_, lean_object* v_hlo_1604_, lean_object* v_hhi_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11(v___x_1597_, v___x_1598_, v_n_1599_, v_as_1600_, v_lo_1601_, v_hi_1602_, v_w_1603_, v_hlo_1604_, v_hhi_1605_);
lean_dec(v_hi_1602_);
lean_dec(v_n_1599_);
lean_dec(v___x_1598_);
lean_dec(v___x_1597_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(lean_object* v_n_1607_, lean_object* v_as_1608_, lean_object* v_lo_1609_, lean_object* v_hi_1610_, lean_object* v_w_1611_, lean_object* v_hlo_1612_, lean_object* v_hhi_1613_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___redArg(v_n_1607_, v_as_1608_, v_lo_1609_, v_hi_1610_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14___boxed(lean_object* v_n_1615_, lean_object* v_as_1616_, lean_object* v_lo_1617_, lean_object* v_hi_1618_, lean_object* v_w_1619_, lean_object* v_hlo_1620_, lean_object* v_hhi_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14(v_n_1615_, v_as_1616_, v_lo_1617_, v_hi_1618_, v_w_1619_, v_hlo_1620_, v_hhi_1621_);
lean_dec(v_hi_1618_);
lean_dec(v_n_1615_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(lean_object* v_00_u03b2_1623_, lean_object* v_a_1624_, lean_object* v_fallback_1625_, lean_object* v_x_1626_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___redArg(v_a_1624_, v_fallback_1625_, v_x_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1628_, lean_object* v_a_1629_, lean_object* v_fallback_1630_, lean_object* v_x_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__0_spec__0(v_00_u03b2_1628_, v_a_1629_, v_fallback_1630_, v_x_1631_);
lean_dec(v_x_1631_);
lean_dec(v_fallback_1630_);
lean_dec_ref(v_a_1629_);
return v_res_1632_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(lean_object* v_00_u03b2_1633_, lean_object* v_a_1634_, lean_object* v_x_1635_){
_start:
{
uint8_t v___x_1636_; 
v___x_1636_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___redArg(v_a_1634_, v_x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1637_, lean_object* v_a_1638_, lean_object* v_x_1639_){
_start:
{
uint8_t v_res_1640_; lean_object* v_r_1641_; 
v_res_1640_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__2(v_00_u03b2_1637_, v_a_1638_, v_x_1639_);
lean_dec(v_x_1639_);
lean_dec_ref(v_a_1638_);
v_r_1641_ = lean_box(v_res_1640_);
return v_r_1641_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3(lean_object* v_00_u03b2_1642_, lean_object* v_data_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3___redArg(v_data_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4(lean_object* v_00_u03b2_1645_, lean_object* v_a_1646_, lean_object* v_b_1647_, lean_object* v_x_1648_){
_start:
{
lean_object* v___x_1649_; 
v___x_1649_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__4___redArg(v_a_1646_, v_b_1647_, v_x_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(lean_object* v_00_u03b2_1650_, lean_object* v_a_1651_, lean_object* v_fallback_1652_, lean_object* v_x_1653_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___redArg(v_a_1651_, v_fallback_1652_, v_x_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7___boxed(lean_object* v_00_u03b2_1655_, lean_object* v_a_1656_, lean_object* v_fallback_1657_, lean_object* v_x_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__3_spec__7(v_00_u03b2_1655_, v_a_1656_, v_fallback_1657_, v_x_1658_);
lean_dec(v_x_1658_);
lean_dec(v_fallback_1657_);
lean_dec(v_a_1656_);
return v_res_1659_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(lean_object* v_00_u03b2_1660_, lean_object* v_a_1661_, lean_object* v_x_1662_){
_start:
{
uint8_t v___x_1663_; 
v___x_1663_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___redArg(v_a_1661_, v_x_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11___boxed(lean_object* v_00_u03b2_1664_, lean_object* v_a_1665_, lean_object* v_x_1666_){
_start:
{
uint8_t v_res_1667_; lean_object* v_r_1668_; 
v_res_1667_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__11(v_00_u03b2_1664_, v_a_1665_, v_x_1666_);
lean_dec(v_x_1666_);
lean_dec(v_a_1665_);
v_r_1668_ = lean_box(v_res_1667_);
return v_r_1668_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12(lean_object* v_00_u03b2_1669_, lean_object* v_data_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12___redArg(v_data_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13(lean_object* v_00_u03b2_1672_, lean_object* v_a_1673_, lean_object* v_b_1674_, lean_object* v_x_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__13___redArg(v_a_1673_, v_b_1674_, v_x_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(lean_object* v___x_1677_, lean_object* v___x_1678_, lean_object* v_n_1679_, lean_object* v_lo_1680_, lean_object* v_hi_1681_, lean_object* v_hhi_1682_, lean_object* v_pivot_1683_, lean_object* v_as_1684_, lean_object* v_i_1685_, lean_object* v_k_1686_, lean_object* v_ilo_1687_, lean_object* v_ik_1688_, lean_object* v_w_1689_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___redArg(v___x_1677_, v___x_1678_, v_hi_1681_, v_pivot_1683_, v_as_1684_, v_i_1685_, v_k_1686_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20___boxed(lean_object* v___x_1691_, lean_object* v___x_1692_, lean_object* v_n_1693_, lean_object* v_lo_1694_, lean_object* v_hi_1695_, lean_object* v_hhi_1696_, lean_object* v_pivot_1697_, lean_object* v_as_1698_, lean_object* v_i_1699_, lean_object* v_k_1700_, lean_object* v_ilo_1701_, lean_object* v_ik_1702_, lean_object* v_w_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__11_spec__20(v___x_1691_, v___x_1692_, v_n_1693_, v_lo_1694_, v_hi_1695_, v_hhi_1696_, v_pivot_1697_, v_as_1698_, v_i_1699_, v_k_1700_, v_ilo_1701_, v_ik_1702_, v_w_1703_);
lean_dec(v_hi_1695_);
lean_dec(v_lo_1694_);
lean_dec(v_n_1693_);
lean_dec(v___x_1692_);
lean_dec(v___x_1691_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(lean_object* v_n_1705_, lean_object* v_lo_1706_, lean_object* v_hi_1707_, lean_object* v_hhi_1708_, lean_object* v_pivot_1709_, lean_object* v_as_1710_, lean_object* v_i_1711_, lean_object* v_k_1712_, lean_object* v_ilo_1713_, lean_object* v_ik_1714_, lean_object* v_w_1715_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___redArg(v_hi_1707_, v_pivot_1709_, v_as_1710_, v_i_1711_, v_k_1712_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25___boxed(lean_object* v_n_1717_, lean_object* v_lo_1718_, lean_object* v_hi_1719_, lean_object* v_hhi_1720_, lean_object* v_pivot_1721_, lean_object* v_as_1722_, lean_object* v_i_1723_, lean_object* v_k_1724_, lean_object* v_ilo_1725_, lean_object* v_ik_1726_, lean_object* v_w_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__14_spec__25(v_n_1717_, v_lo_1718_, v_hi_1719_, v_hhi_1720_, v_pivot_1721_, v_as_1722_, v_i_1723_, v_k_1724_, v_ilo_1725_, v_ik_1726_, v_w_1727_);
lean_dec_ref(v_pivot_1721_);
lean_dec(v_hi_1719_);
lean_dec(v_lo_1718_);
lean_dec(v_n_1717_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1729_, lean_object* v_i_1730_, lean_object* v_source_1731_, lean_object* v_target_1732_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5___redArg(v_i_1730_, v_source_1731_, v_target_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15(lean_object* v_00_u03b2_1734_, lean_object* v_i_1735_, lean_object* v_source_1736_, lean_object* v_target_1737_){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15___redArg(v_i_1735_, v_source_1736_, v_target_1737_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26(lean_object* v_00_u03b2_1739_, lean_object* v_x_1740_, lean_object* v_x_1741_){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__1_spec__3_spec__5_spec__26___redArg(v_x_1740_, v_x_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33(lean_object* v_00_u03b2_1743_, lean_object* v_x_1744_, lean_object* v_x_1745_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__5_spec__12_spec__15_spec__33___redArg(v_x_1744_, v_x_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(lean_object* v_declName_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v___x_1750_; lean_object* v_env_1751_; lean_object* v___x_1752_; lean_object* v_env_1753_; lean_object* v___x_1754_; lean_object* v_toEnvExtension_1755_; lean_object* v_asyncMode_1756_; uint8_t v___x_1757_; lean_object* v___x_1758_; 
v___x_1750_ = lean_st_ref_get(v___y_1748_);
v_env_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc_ref(v_env_1751_);
lean_dec(v___x_1750_);
v___x_1752_ = lean_st_ref_get(v___y_1748_);
v_env_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc_ref(v_env_1753_);
lean_dec(v___x_1752_);
v___x_1754_ = l_Lean_declRangeExt;
v_toEnvExtension_1755_ = lean_ctor_get(v___x_1754_, 0);
v_asyncMode_1756_ = lean_ctor_get(v_toEnvExtension_1755_, 2);
v___x_1757_ = 0;
lean_inc(v_declName_1747_);
v___x_1758_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1754_, v_env_1751_, v_declName_1747_, v_asyncMode_1756_, v___x_1757_);
if (lean_obj_tag(v___x_1758_) == 0)
{
uint8_t v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = 1;
v___x_1760_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1754_, v_env_1753_, v_declName_1747_, v_asyncMode_1756_, v___x_1759_);
v___x_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
return v___x_1761_;
}
else
{
lean_object* v___x_1762_; 
lean_dec_ref(v_env_1753_);
lean_dec(v_declName_1747_);
v___x_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1758_);
return v___x_1762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg___boxed(lean_object* v_declName_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1763_, v___y_1764_);
lean_dec(v___y_1764_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(lean_object* v_declName_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v___x_1770_; lean_object* v_env_1771_; uint8_t v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1770_ = lean_st_ref_get(v___y_1768_);
v_env_1771_ = lean_ctor_get(v___x_1770_, 0);
lean_inc_ref(v_env_1771_);
lean_dec(v___x_1770_);
v___x_1772_ = l_Lean_isRecCore(v_env_1771_, v_declName_1767_);
v___x_1773_ = lean_box(v___x_1772_);
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1775_, v___y_1776_);
lean_dec(v___y_1776_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(lean_object* v_declName_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v_ranges_1784_; lean_object* v___x_1790_; lean_object* v_env_1791_; lean_object* v___x_1792_; lean_object* v_a_1793_; uint8_t v___x_1798_; 
v___x_1790_ = lean_st_ref_get(v___y_1781_);
v_env_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc_ref_n(v_env_1791_, 2);
lean_dec(v___x_1790_);
lean_inc_n(v_declName_1779_, 2);
v___x_1792_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1779_, v___y_1781_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref(v___x_1792_);
v___x_1798_ = l_Lean_isAuxRecursor(v_env_1791_, v_declName_1779_);
if (v___x_1798_ == 0)
{
uint8_t v___x_1799_; 
lean_inc(v_declName_1779_);
v___x_1799_ = l_Lean_isNoConfusion(v_env_1791_, v_declName_1779_);
if (v___x_1799_ == 0)
{
uint8_t v___x_1800_; 
v___x_1800_ = lean_unbox(v_a_1793_);
lean_dec(v_a_1793_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v_a_1802_; 
lean_inc(v_declName_1779_);
v___x_1801_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1779_, v___y_1781_);
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
lean_dec_ref(v___x_1801_);
v_ranges_1784_ = v_a_1802_;
goto v___jp_1783_;
}
else
{
goto v___jp_1794_;
}
}
else
{
lean_dec(v_a_1793_);
goto v___jp_1794_;
}
}
else
{
lean_dec(v_a_1793_);
lean_dec_ref(v_env_1791_);
goto v___jp_1794_;
}
v___jp_1783_:
{
if (lean_obj_tag(v_ranges_1784_) == 0)
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1785_ = l_Lean_builtinDeclRanges;
v___x_1786_ = lean_st_ref_get(v___x_1785_);
v___x_1787_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1786_, v_declName_1779_);
lean_dec(v_declName_1779_);
lean_dec(v___x_1786_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1787_);
return v___x_1788_;
}
else
{
lean_object* v___x_1789_; 
lean_dec(v_declName_1779_);
v___x_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1789_, 0, v_ranges_1784_);
return v___x_1789_;
}
}
v___jp_1794_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v_a_1797_; 
v___x_1795_ = l_Lean_Name_getPrefix(v_declName_1779_);
v___x_1796_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v___x_1795_, v___y_1781_);
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref(v___x_1796_);
v_ranges_1784_ = v_a_1797_;
goto v___jp_1783_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0___boxed(lean_object* v_declName_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_declName_1803_, v___y_1804_, v___y_1805_);
lean_dec(v___y_1805_);
lean_dec_ref(v___y_1804_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(lean_object* v_failMod_1808_, lean_object* v_site_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_){
_start:
{
if (lean_obj_tag(v_site_1809_) == 0)
{
lean_object* v_name_1813_; lean_object* v___x_1814_; 
v_name_1813_ = lean_ctor_get(v_site_1809_, 0);
lean_inc(v_name_1813_);
lean_dec_ref_known(v_site_1809_, 1);
v___x_1814_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_name_1813_, v_a_1810_, v_a_1811_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1836_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1817_ = v___x_1814_;
v_isShared_1818_ = v_isSharedCheck_1836_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1814_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1836_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
if (lean_obj_tag(v_a_1815_) == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1819_ = lean_box(0);
if (v_isShared_1818_ == 0)
{
lean_ctor_set(v___x_1817_, 0, v___x_1819_);
v___x_1821_ = v___x_1817_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
else
{
lean_object* v_val_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1835_; 
v_val_1823_ = lean_ctor_get(v_a_1815_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v_a_1815_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1825_ = v_a_1815_;
v_isShared_1826_ = v_isSharedCheck_1835_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_val_1823_);
lean_dec(v_a_1815_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1835_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v_range_1827_; lean_object* v_pos_1828_; lean_object* v___x_1830_; 
v_range_1827_ = lean_ctor_get(v_val_1823_, 0);
lean_inc_ref(v_range_1827_);
lean_dec(v_val_1823_);
v_pos_1828_ = lean_ctor_get(v_range_1827_, 0);
lean_inc_ref(v_pos_1828_);
lean_dec_ref(v_range_1827_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v_pos_1828_);
v___x_1830_ = v___x_1825_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_pos_1828_);
v___x_1830_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1832_; 
if (v_isShared_1818_ == 0)
{
lean_ctor_set(v___x_1817_, 0, v___x_1830_);
v___x_1832_ = v___x_1817_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
v_a_1837_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___x_1814_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1814_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
else
{
lean_object* v_n_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1876_; 
v_n_1845_ = lean_ctor_get(v_site_1809_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_site_1809_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1847_ = v_site_1809_;
v_isShared_1848_ = v_isSharedCheck_1876_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_n_1845_);
lean_dec(v_site_1809_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1876_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1849_; lean_object* v_env_1850_; lean_object* v___x_1851_; 
v___x_1849_ = lean_st_ref_get(v_a_1811_);
v_env_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc_ref(v_env_1850_);
lean_dec(v___x_1849_);
v___x_1851_ = l_Lean_getVersoModuleDoc_x3f(v_env_1850_, v_failMod_1808_);
lean_dec_ref(v_env_1850_);
if (lean_obj_tag(v___x_1851_) == 1)
{
lean_object* v_val_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1871_; 
v_val_1852_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1854_ = v___x_1851_;
v_isShared_1855_ = v_isSharedCheck_1871_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_val_1852_);
lean_dec(v___x_1851_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1871_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1856_ = lean_array_get_size(v_val_1852_);
v___x_1857_ = lean_nat_dec_lt(v_n_1845_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1860_; 
lean_del_object(v___x_1854_);
lean_dec(v_val_1852_);
lean_dec(v_n_1845_);
v___x_1858_ = lean_box(0);
if (v_isShared_1848_ == 0)
{
lean_ctor_set_tag(v___x_1847_, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1858_);
v___x_1860_ = v___x_1847_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
return v___x_1860_;
}
}
else
{
lean_object* v___x_1862_; lean_object* v_declarationRange_1863_; lean_object* v_pos_1864_; lean_object* v___x_1866_; 
v___x_1862_ = lean_array_fget(v_val_1852_, v_n_1845_);
lean_dec(v_n_1845_);
lean_dec(v_val_1852_);
v_declarationRange_1863_ = lean_ctor_get(v___x_1862_, 2);
lean_inc_ref(v_declarationRange_1863_);
lean_dec(v___x_1862_);
v_pos_1864_ = lean_ctor_get(v_declarationRange_1863_, 0);
lean_inc_ref(v_pos_1864_);
lean_dec_ref(v_declarationRange_1863_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v_pos_1864_);
v___x_1866_ = v___x_1854_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_pos_1864_);
v___x_1866_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1868_; 
if (v_isShared_1848_ == 0)
{
lean_ctor_set_tag(v___x_1847_, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1866_);
v___x_1868_ = v___x_1847_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v___x_1866_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1874_; 
lean_dec(v___x_1851_);
lean_dec(v_n_1845_);
v___x_1872_ = lean_box(0);
if (v_isShared_1848_ == 0)
{
lean_ctor_set_tag(v___x_1847_, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1872_);
v___x_1874_ = v___x_1847_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f___boxed(lean_object* v_failMod_1877_, lean_object* v_site_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(v_failMod_1877_, v_site_1878_, v_a_1879_, v_a_1880_);
lean_dec(v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec(v_failMod_1877_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(lean_object* v_declName_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___redArg(v_declName_1883_, v___y_1885_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0___boxed(lean_object* v_declName_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lean_isRec___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__0(v_declName_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(lean_object* v_declName_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___redArg(v_declName_1893_, v___y_1895_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1___boxed(lean_object* v_declName_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lean_findDeclarationRangesCore_x3f___at___00Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0_spec__1(v_declName_1898_, v___y_1899_, v___y_1900_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(lean_object* v_x_1906_){
_start:
{
if (lean_obj_tag(v_x_1906_) == 0)
{
lean_object* v_name_1907_; lean_object* v___x_1908_; uint8_t v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v_name_1907_ = lean_ctor_get(v_x_1906_, 0);
lean_inc(v_name_1907_);
lean_dec_ref_known(v_x_1906_, 1);
v___x_1908_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__0));
v___x_1909_ = 1;
v___x_1910_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1907_, v___x_1909_);
v___x_1911_ = lean_string_append(v___x_1908_, v___x_1910_);
lean_dec_ref(v___x_1910_);
v___x_1912_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1));
v___x_1913_ = lean_string_append(v___x_1911_, v___x_1912_);
return v___x_1913_;
}
else
{
lean_object* v_n_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v_n_1914_ = lean_ctor_get(v_x_1906_, 0);
lean_inc(v_n_1914_);
lean_dec_ref_known(v_x_1906_, 1);
v___x_1915_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__2));
v___x_1916_ = lean_unsigned_to_nat(1u);
v___x_1917_ = lean_nat_add(v_n_1914_, v___x_1916_);
lean_dec(v_n_1914_);
v___x_1918_ = l_Nat_reprFast(v___x_1917_);
v___x_1919_ = lean_string_append(v___x_1915_, v___x_1918_);
lean_dec_ref(v___x_1918_);
return v___x_1919_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(lean_object* v_o_1920_, lean_object* v___y_1921_){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v_env_1925_; lean_object* v___x_1926_; lean_object* v_toEnvExtension_1927_; lean_object* v_asyncMode_1928_; lean_object* v___x_1929_; uint8_t v___x_1930_; lean_object* v___x_1931_; lean_object* v_merged_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1940_; 
v___x_1923_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_1924_ = lean_st_ref_get(v___y_1921_);
v_env_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc_ref(v_env_1925_);
lean_dec(v___x_1924_);
v___x_1926_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1927_ = lean_ctor_get(v___x_1926_, 0);
v_asyncMode_1928_ = lean_ctor_get(v_toEnvExtension_1927_, 2);
v___x_1929_ = lean_box(0);
v___x_1930_ = 0;
v___x_1931_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1923_, v___x_1926_, v_env_1925_, v_asyncMode_1928_, v___x_1929_, v___x_1930_);
v_merged_1932_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1940_ == 0)
{
lean_object* v_unused_1941_; 
v_unused_1941_ = lean_ctor_get(v___x_1931_, 1);
lean_dec(v_unused_1941_);
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1940_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_merged_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1940_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 1, v_merged_1932_);
lean_ctor_set(v___x_1934_, 0, v_o_1920_);
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_o_1920_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v_merged_1932_);
v___x_1937_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
lean_object* v___x_1938_; 
v___x_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
return v___x_1938_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg___boxed(lean_object* v_o_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_o_1942_, v___y_1943_);
lean_dec(v___y_1943_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(lean_object* v_o_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1950_; 
v___x_1950_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_o_1946_, v___y_1948_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___boxed(lean_object* v_o_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0(v_o_1951_, v___y_1952_, v___y_1953_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(lean_object* v_opts_1956_, lean_object* v_opt_1957_){
_start:
{
lean_object* v_name_1958_; lean_object* v_defValue_1959_; lean_object* v_map_1960_; lean_object* v___x_1961_; 
v_name_1958_ = lean_ctor_get(v_opt_1957_, 0);
v_defValue_1959_ = lean_ctor_get(v_opt_1957_, 1);
v_map_1960_ = lean_ctor_get(v_opts_1956_, 0);
v___x_1961_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1960_, v_name_1958_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_inc(v_defValue_1959_);
return v_defValue_1959_;
}
else
{
lean_object* v_val_1962_; 
v_val_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_val_1962_);
lean_dec_ref_known(v___x_1961_, 1);
if (lean_obj_tag(v_val_1962_) == 3)
{
lean_object* v_v_1963_; 
v_v_1963_ = lean_ctor_get(v_val_1962_, 0);
lean_inc(v_v_1963_);
lean_dec_ref_known(v_val_1962_, 1);
return v_v_1963_;
}
else
{
lean_dec(v_val_1962_);
lean_inc(v_defValue_1959_);
return v_defValue_1959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2___boxed(lean_object* v_opts_1964_, lean_object* v_opt_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(v_opts_1964_, v_opt_1965_);
lean_dec_ref(v_opt_1965_);
lean_dec_ref(v_opts_1964_);
return v_res_1966_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(lean_object* v_pkgRoot_1967_, lean_object* v_docCheckedModules_1968_, lean_object* v_m_1969_){
_start:
{
uint8_t v___x_1970_; 
v___x_1970_ = l_Lean_Name_isPrefixOf(v_pkgRoot_1967_, v_m_1969_);
if (v___x_1970_ == 0)
{
return v___x_1970_;
}
else
{
uint8_t v___x_1971_; 
v___x_1971_ = l_Lean_NameSet_contains(v_docCheckedModules_1968_, v_m_1969_);
if (v___x_1971_ == 0)
{
return v___x_1970_;
}
else
{
uint8_t v___x_1972_; 
v___x_1972_ = 0;
return v___x_1972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed(lean_object* v_pkgRoot_1973_, lean_object* v_docCheckedModules_1974_, lean_object* v_m_1975_){
_start:
{
uint8_t v_res_1976_; lean_object* v_r_1977_; 
v_res_1976_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0(v_pkgRoot_1973_, v_docCheckedModules_1974_, v_m_1975_);
lean_dec(v_m_1975_);
lean_dec(v_docCheckedModules_1974_);
lean_dec(v_pkgRoot_1973_);
v_r_1977_ = lean_box(v_res_1976_);
return v_r_1977_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(lean_object* v_c_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v_options_1982_; lean_object* v___x_1983_; lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1994_; 
v_options_1982_ = lean_ctor_get(v_c_1978_, 6);
lean_inc_ref(v_options_1982_);
lean_dec_ref(v_c_1978_);
v___x_1983_ = l_Lean_Options_toLinterOptions___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__0___redArg(v_options_1982_, v___y_1980_);
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1986_ = v___x_1983_;
v_isShared_1987_ = v_isSharedCheck_1994_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1983_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1994_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1992_; 
v___x_1988_ = l_Lean_linter_doc_deferred;
v___x_1989_ = l_Lean_Linter_getLinterValue(v___x_1988_, v_a_1984_);
lean_dec(v_a_1984_);
v___x_1990_ = lean_box(v___x_1989_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_1990_);
v___x_1992_ = v___x_1986_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1990_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1___boxed(lean_object* v_c_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__1(v_c_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(uint8_t v___x_2007_, lean_object* v_sp_2008_, lean_object* v_as_2009_, size_t v_sz_2010_, size_t v_i_2011_, lean_object* v_b_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v_a_2017_; uint8_t v_unlocated_2021_; 
v_unlocated_2021_ = lean_usize_dec_lt(v_i_2011_, v_sz_2010_);
if (v_unlocated_2021_ == 0)
{
lean_object* v___x_2022_; 
lean_dec(v_sp_2008_);
v___x_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_b_2012_);
return v___x_2022_;
}
else
{
lean_object* v_a_2023_; lean_object* v_snd_2024_; lean_object* v_fst_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2147_; 
v_a_2023_ = lean_array_uget_borrowed(v_as_2009_, v_i_2011_);
v_snd_2024_ = lean_ctor_get(v_a_2023_, 1);
lean_inc(v_snd_2024_);
v_fst_2025_ = lean_ctor_get(v_snd_2024_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v_snd_2024_);
if (v_isSharedCheck_2147_ == 0)
{
lean_object* v_unused_2148_; 
v_unused_2148_ = lean_ctor_get(v_snd_2024_, 1);
lean_dec(v_unused_2148_);
v___x_2027_ = v_snd_2024_;
v_isShared_2028_ = v_isSharedCheck_2147_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_fst_2025_);
lean_dec(v_snd_2024_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2147_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v_fst_2029_; lean_object* v_fst_2030_; lean_object* v_snd_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2146_; 
v_fst_2029_ = lean_ctor_get(v_a_2023_, 0);
v_fst_2030_ = lean_ctor_get(v_b_2012_, 0);
v_snd_2031_ = lean_ctor_get(v_b_2012_, 1);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_b_2012_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2033_ = v_b_2012_;
v_isShared_2034_ = v_isSharedCheck_2146_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_snd_2031_);
lean_inc(v_fst_2030_);
lean_dec(v_b_2012_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2146_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v_site_2035_; lean_object* v___x_2036_; 
v_site_2035_ = lean_ctor_get(v_fst_2025_, 0);
lean_inc_ref_n(v_site_2035_, 2);
lean_dec(v_fst_2025_);
v___x_2036_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f(v_fst_2029_, v_site_2035_, v___y_2013_, v___y_2014_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
if (lean_obj_tag(v_a_2037_) == 0)
{
lean_object* v___x_2038_; lean_object* v_name_2039_; lean_object* v_ref_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
lean_dec(v_snd_2031_);
v___x_2038_ = l_Lean_linter_doc_deferred;
v_name_2039_ = lean_ctor_get(v___x_2038_, 0);
v_ref_2040_ = lean_ctor_get(v___y_2013_, 2);
lean_inc(v_fst_2029_);
v___x_2041_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2029_, v___x_2007_);
v___x_2042_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__0));
v___x_2043_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2035_);
v___x_2044_ = lean_string_append(v___x_2042_, v___x_2043_);
lean_dec_ref(v___x_2043_);
v___x_2045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__1));
v___x_2046_ = lean_string_append(v___x_2044_, v___x_2045_);
v___x_2047_ = lean_string_append(v___x_2046_, v___x_2041_);
lean_dec_ref(v___x_2041_);
v___x_2048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__2));
v___x_2049_ = lean_string_append(v___x_2047_, v___x_2048_);
lean_inc(v_name_2039_);
v___x_2050_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2039_, v___x_2007_);
v___x_2051_ = lean_string_append(v___x_2049_, v___x_2050_);
lean_dec_ref(v___x_2050_);
v___x_2052_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__3));
v___x_2053_ = lean_string_append(v___x_2051_, v___x_2052_);
v___x_2054_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2053_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v___x_2055_; lean_object* v___x_2057_; 
lean_dec_ref_known(v___x_2054_, 1);
lean_del_object(v___x_2027_);
v___x_2055_ = lean_box(v_unlocated_2021_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 1, v___x_2055_);
v___x_2057_ = v___x_2033_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_fst_2030_);
lean_ctor_set(v_reuseFailAlloc_2058_, 1, v___x_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
v_a_2017_ = v___x_2057_;
goto v___jp_2016_;
}
}
else
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2072_; 
lean_del_object(v___x_2033_);
lean_dec(v_fst_2030_);
lean_dec(v_sp_2008_);
v_a_2059_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2061_ = v___x_2054_;
v_isShared_2062_ = v_isSharedCheck_2072_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2054_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2072_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2067_; 
v___x_2063_ = lean_io_error_to_string(v_a_2059_);
v___x_2064_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
v___x_2065_ = l_Lean_MessageData_ofFormat(v___x_2064_);
lean_inc(v_ref_2040_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 1, v___x_2065_);
lean_ctor_set(v___x_2027_, 0, v_ref_2040_);
v___x_2067_ = v___x_2027_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_ref_2040_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v___x_2065_);
v___x_2067_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2069_; 
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 0, v___x_2067_);
v___x_2069_ = v___x_2061_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
}
else
{
lean_object* v_val_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2137_; 
lean_dec_ref(v_site_2035_);
v_val_2073_ = lean_ctor_get(v_a_2037_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v_a_2037_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2075_ = v_a_2037_;
v_isShared_2076_ = v_isSharedCheck_2137_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_val_2073_);
lean_dec(v_a_2037_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2137_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v_ref_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_ref_2077_ = lean_ctor_get(v___y_2013_, 2);
v___x_2078_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__4));
lean_inc(v_fst_2029_);
lean_inc(v_sp_2008_);
v___x_2079_ = l_Lean_SearchPath_findWithExt(v_sp_2008_, v___x_2078_, v_fst_2029_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
if (lean_obj_tag(v_a_2080_) == 0)
{
lean_object* v___x_2081_; lean_object* v_name_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
lean_dec(v_val_2073_);
lean_dec(v_snd_2031_);
v___x_2081_ = l_Lean_linter_doc_deferred;
v_name_2082_ = lean_ctor_get(v___x_2081_, 0);
v___x_2083_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__5));
lean_inc(v_fst_2029_);
v___x_2084_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2029_, v___x_2007_);
v___x_2085_ = lean_string_append(v___x_2083_, v___x_2084_);
lean_dec_ref(v___x_2084_);
v___x_2086_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__6));
v___x_2087_ = lean_string_append(v___x_2085_, v___x_2086_);
lean_inc(v_name_2082_);
v___x_2088_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2082_, v___x_2007_);
v___x_2089_ = lean_string_append(v___x_2087_, v___x_2088_);
lean_dec_ref(v___x_2088_);
v___x_2090_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__3));
v___x_2091_ = lean_string_append(v___x_2089_, v___x_2090_);
v___x_2092_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2091_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v___x_2093_; lean_object* v___x_2095_; 
lean_dec_ref_known(v___x_2092_, 1);
lean_del_object(v___x_2075_);
lean_del_object(v___x_2027_);
v___x_2093_ = lean_box(v_unlocated_2021_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 1, v___x_2093_);
v___x_2095_ = v___x_2033_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_fst_2030_);
lean_ctor_set(v_reuseFailAlloc_2096_, 1, v___x_2093_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
v_a_2017_ = v___x_2095_;
goto v___jp_2016_;
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2112_; 
lean_del_object(v___x_2033_);
lean_dec(v_fst_2030_);
lean_dec(v_sp_2008_);
v_a_2097_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2099_ = v___x_2092_;
v_isShared_2100_ = v_isSharedCheck_2112_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2092_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2112_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2101_; lean_object* v___x_2103_; 
v___x_2101_ = lean_io_error_to_string(v_a_2097_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set_tag(v___x_2075_, 3);
lean_ctor_set(v___x_2075_, 0, v___x_2101_);
v___x_2103_ = v___x_2075_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v___x_2101_);
v___x_2103_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
lean_object* v___x_2104_; lean_object* v___x_2106_; 
v___x_2104_ = l_Lean_MessageData_ofFormat(v___x_2103_);
lean_inc(v_ref_2077_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 1, v___x_2104_);
lean_ctor_set(v___x_2027_, 0, v_ref_2077_);
v___x_2106_ = v___x_2027_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_ref_2077_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v___x_2104_);
v___x_2106_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
lean_object* v___x_2108_; 
if (v_isShared_2100_ == 0)
{
lean_ctor_set(v___x_2099_, 0, v___x_2106_);
v___x_2108_ = v___x_2099_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v___x_2106_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
}
}
else
{
lean_object* v_val_2113_; lean_object* v___x_2114_; lean_object* v_name_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2119_; 
lean_del_object(v___x_2075_);
lean_del_object(v___x_2027_);
v_val_2113_ = lean_ctor_get(v_a_2080_, 0);
lean_inc(v_val_2113_);
lean_dec_ref_known(v_a_2080_, 1);
v___x_2114_ = l_Lean_linter_doc_deferred;
v_name_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_name_2115_);
v___x_2116_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2116_, 0, v_val_2113_);
lean_ctor_set(v___x_2116_, 1, v_val_2073_);
lean_ctor_set(v___x_2116_, 2, v_name_2115_);
v___x_2117_ = lean_array_push(v_fst_2030_, v___x_2116_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 0, v___x_2117_);
v___x_2119_ = v___x_2033_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2117_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v_snd_2031_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
v_a_2017_ = v___x_2119_;
goto v___jp_2016_;
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2136_; 
lean_dec(v_val_2073_);
lean_del_object(v___x_2033_);
lean_dec(v_snd_2031_);
lean_dec(v_fst_2030_);
lean_dec(v_sp_2008_);
v_a_2121_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2123_ = v___x_2079_;
v_isShared_2124_ = v_isSharedCheck_2136_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2079_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2136_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; lean_object* v___x_2127_; 
v___x_2125_ = lean_io_error_to_string(v_a_2121_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set_tag(v___x_2075_, 3);
lean_ctor_set(v___x_2075_, 0, v___x_2125_);
v___x_2127_ = v___x_2075_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2128_; lean_object* v___x_2130_; 
v___x_2128_ = l_Lean_MessageData_ofFormat(v___x_2127_);
lean_inc(v_ref_2077_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 1, v___x_2128_);
lean_ctor_set(v___x_2027_, 0, v_ref_2077_);
v___x_2130_ = v___x_2027_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_ref_2077_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v___x_2128_);
v___x_2130_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2132_; 
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 0, v___x_2130_);
v___x_2132_ = v___x_2123_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
lean_dec_ref(v_site_2035_);
lean_del_object(v___x_2033_);
lean_dec(v_snd_2031_);
lean_dec(v_fst_2030_);
lean_del_object(v___x_2027_);
lean_dec(v_sp_2008_);
v_a_2138_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___x_2036_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2036_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
}
}
v___jp_2016_:
{
size_t v___x_2018_; size_t v___x_2019_; 
v___x_2018_ = ((size_t)1ULL);
v___x_2019_ = lean_usize_add(v_i_2011_, v___x_2018_);
v_i_2011_ = v___x_2019_;
v_b_2012_ = v_a_2017_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___boxed(lean_object* v___x_2149_, lean_object* v_sp_2150_, lean_object* v_as_2151_, lean_object* v_sz_2152_, lean_object* v_i_2153_, lean_object* v_b_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_){
_start:
{
uint8_t v___x_8299__boxed_2158_; size_t v_sz_boxed_2159_; size_t v_i_boxed_2160_; lean_object* v_res_2161_; 
v___x_8299__boxed_2158_ = lean_unbox(v___x_2149_);
v_sz_boxed_2159_ = lean_unbox_usize(v_sz_2152_);
lean_dec(v_sz_2152_);
v_i_boxed_2160_ = lean_unbox_usize(v_i_2153_);
lean_dec(v_i_2153_);
v_res_2161_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(v___x_8299__boxed_2158_, v_sp_2150_, v_as_2151_, v_sz_boxed_2159_, v_i_boxed_2160_, v_b_2154_, v___y_2155_, v___y_2156_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec_ref(v_as_2151_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg(lean_object* v_sp_2168_, uint8_t v___y_2169_, lean_object* v_as_2170_, size_t v_sz_2171_, size_t v_i_2172_, lean_object* v_b_2173_, lean_object* v___y_2174_){
_start:
{
lean_object* v_a_2177_; uint8_t v___x_2181_; 
v___x_2181_ = lean_usize_dec_lt(v_i_2172_, v_sz_2171_);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; 
lean_dec(v_sp_2168_);
v___x_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2182_, 0, v_b_2173_);
return v___x_2182_;
}
else
{
lean_object* v_a_2183_; lean_object* v_snd_2184_; lean_object* v_fst_2185_; lean_object* v_fst_2186_; lean_object* v_snd_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2280_; 
v_a_2183_ = lean_array_uget_borrowed(v_as_2170_, v_i_2172_);
v_snd_2184_ = lean_ctor_get(v_a_2183_, 1);
lean_inc(v_snd_2184_);
v_fst_2185_ = lean_ctor_get(v_snd_2184_, 0);
lean_inc(v_fst_2185_);
v_fst_2186_ = lean_ctor_get(v_a_2183_, 0);
v_snd_2187_ = lean_ctor_get(v_snd_2184_, 1);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_snd_2184_);
if (v_isSharedCheck_2280_ == 0)
{
lean_object* v_unused_2281_; 
v_unused_2281_ = lean_ctor_get(v_snd_2184_, 0);
lean_dec(v_unused_2281_);
v___x_2189_ = v_snd_2184_;
v_isShared_2190_ = v_isSharedCheck_2280_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_snd_2187_);
lean_dec(v_snd_2184_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2280_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v_site_2191_; lean_object* v_sourceString_2192_; lean_object* v___x_2193_; lean_object* v___y_2195_; lean_object* v___x_2272_; lean_object* v___x_2273_; uint8_t v___x_2274_; 
v_site_2191_ = lean_ctor_get(v_fst_2185_, 0);
lean_inc_ref(v_site_2191_);
v_sourceString_2192_ = lean_ctor_get(v_fst_2185_, 2);
lean_inc_ref(v_sourceString_2192_);
lean_dec(v_fst_2185_);
v___x_2193_ = lean_box(0);
v___x_2272_ = lean_string_utf8_byte_size(v_sourceString_2192_);
v___x_2273_ = lean_unsigned_to_nat(0u);
v___x_2274_ = lean_nat_dec_eq(v___x_2272_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2275_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__4));
v___x_2276_ = lean_string_append(v___x_2275_, v_sourceString_2192_);
lean_dec_ref(v_sourceString_2192_);
v___x_2277_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__5));
v___x_2278_ = lean_string_append(v___x_2276_, v___x_2277_);
v___y_2195_ = v___x_2278_;
goto v___jp_2194_;
}
else
{
lean_object* v___x_2279_; 
lean_dec_ref(v_sourceString_2192_);
v___x_2279_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___y_2195_ = v___x_2279_;
goto v___jp_2194_;
}
v___jp_2194_:
{
lean_object* v_ref_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v_ref_2196_ = lean_ctor_get(v___y_2174_, 2);
v___x_2197_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__4));
lean_inc(v_fst_2186_);
lean_inc(v_sp_2168_);
v___x_2198_ = l_Lean_SearchPath_findWithExt(v_sp_2168_, v___x_2197_, v_fst_2186_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2198_, 1);
if (lean_obj_tag(v_a_2199_) == 0)
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2200_ = l_Lean_MessageData_toString(v_snd_2187_);
v___x_2201_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__0));
lean_inc(v_fst_2186_);
v___x_2202_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2186_, v___y_2169_);
v___x_2203_ = lean_string_append(v___x_2201_, v___x_2202_);
lean_dec_ref(v___x_2202_);
v___x_2204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__1));
v___x_2205_ = lean_string_append(v___x_2203_, v___x_2204_);
v___x_2206_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2191_);
v___x_2207_ = lean_string_append(v___x_2205_, v___x_2206_);
lean_dec_ref(v___x_2206_);
v___x_2208_ = lean_string_append(v___x_2207_, v___y_2195_);
lean_dec_ref(v___y_2195_);
v___x_2209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__2));
v___x_2210_ = lean_string_append(v___x_2208_, v___x_2209_);
v___x_2211_ = lean_string_append(v___x_2210_, v___x_2200_);
lean_dec_ref(v___x_2200_);
v___x_2212_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2211_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_dec_ref_known(v___x_2212_, 1);
lean_del_object(v___x_2189_);
v_a_2177_ = v___x_2193_;
goto v___jp_2176_;
}
else
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2226_; 
lean_dec(v_sp_2168_);
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2215_ = v___x_2212_;
v_isShared_2216_ = v_isSharedCheck_2226_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2212_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2226_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2217_ = lean_io_error_to_string(v_a_2213_);
v___x_2218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
v___x_2219_ = l_Lean_MessageData_ofFormat(v___x_2218_);
lean_inc(v_ref_2196_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 1, v___x_2219_);
lean_ctor_set(v___x_2189_, 0, v_ref_2196_);
v___x_2221_ = v___x_2189_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_ref_2196_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2223_; 
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 0, v___x_2221_);
v___x_2223_ = v___x_2215_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v___x_2221_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
}
else
{
lean_object* v_val_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2257_; 
v_val_2227_ = lean_ctor_get(v_a_2199_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v_a_2199_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2229_ = v_a_2199_;
v_isShared_2230_ = v_isSharedCheck_2257_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_val_2227_);
lean_dec(v_a_2199_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2257_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2231_ = l_Lean_MessageData_toString(v_snd_2187_);
v___x_2232_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__3));
v___x_2233_ = lean_string_append(v_val_2227_, v___x_2232_);
v___x_2234_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite(v_site_2191_);
v___x_2235_ = lean_string_append(v___x_2233_, v___x_2234_);
lean_dec_ref(v___x_2234_);
v___x_2236_ = lean_string_append(v___x_2235_, v___y_2195_);
lean_dec_ref(v___y_2195_);
v___x_2237_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___closed__2));
v___x_2238_ = lean_string_append(v___x_2236_, v___x_2237_);
v___x_2239_ = lean_string_append(v___x_2238_, v___x_2231_);
lean_dec_ref(v___x_2231_);
v___x_2240_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2239_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_dec_ref_known(v___x_2240_, 1);
lean_del_object(v___x_2229_);
lean_del_object(v___x_2189_);
v_a_2177_ = v___x_2193_;
goto v___jp_2176_;
}
else
{
lean_object* v_a_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2256_; 
lean_dec(v_sp_2168_);
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2243_ = v___x_2240_;
v_isShared_2244_ = v_isSharedCheck_2256_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_a_2241_);
lean_dec(v___x_2240_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2256_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2245_; lean_object* v___x_2247_; 
v___x_2245_ = lean_io_error_to_string(v_a_2241_);
if (v_isShared_2230_ == 0)
{
lean_ctor_set_tag(v___x_2229_, 3);
lean_ctor_set(v___x_2229_, 0, v___x_2245_);
v___x_2247_ = v___x_2229_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2245_);
v___x_2247_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
lean_object* v___x_2248_; lean_object* v___x_2250_; 
v___x_2248_ = l_Lean_MessageData_ofFormat(v___x_2247_);
lean_inc(v_ref_2196_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 1, v___x_2248_);
lean_ctor_set(v___x_2189_, 0, v_ref_2196_);
v___x_2250_ = v___x_2189_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_ref_2196_);
lean_ctor_set(v_reuseFailAlloc_2254_, 1, v___x_2248_);
v___x_2250_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
lean_object* v___x_2252_; 
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 0, v___x_2250_);
v___x_2252_ = v___x_2243_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v___x_2250_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2271_; 
lean_dec_ref(v___y_2195_);
lean_dec_ref(v_site_2191_);
lean_dec(v_snd_2187_);
lean_dec(v_sp_2168_);
v_a_2258_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2260_ = v___x_2198_;
v_isShared_2261_ = v_isSharedCheck_2271_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2198_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2271_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2266_; 
v___x_2262_ = lean_io_error_to_string(v_a_2258_);
v___x_2263_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
v___x_2264_ = l_Lean_MessageData_ofFormat(v___x_2263_);
lean_inc(v_ref_2196_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 1, v___x_2264_);
lean_ctor_set(v___x_2189_, 0, v_ref_2196_);
v___x_2266_ = v___x_2189_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_ref_2196_);
lean_ctor_set(v_reuseFailAlloc_2270_, 1, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
lean_object* v___x_2268_; 
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 0, v___x_2266_);
v___x_2268_ = v___x_2260_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
}
}
}
}
v___jp_2176_:
{
size_t v___x_2178_; size_t v___x_2179_; 
v___x_2178_ = ((size_t)1ULL);
v___x_2179_ = lean_usize_add(v_i_2172_, v___x_2178_);
v_i_2172_ = v___x_2179_;
v_b_2173_ = v_a_2177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg___boxed(lean_object* v_sp_2282_, lean_object* v___y_2283_, lean_object* v_as_2284_, lean_object* v_sz_2285_, lean_object* v_i_2286_, lean_object* v_b_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_){
_start:
{
uint8_t v___y_8581__boxed_2290_; size_t v_sz_boxed_2291_; size_t v_i_boxed_2292_; lean_object* v_res_2293_; 
v___y_8581__boxed_2290_ = lean_unbox(v___y_2283_);
v_sz_boxed_2291_ = lean_unbox_usize(v_sz_2285_);
lean_dec(v_sz_2285_);
v_i_boxed_2292_ = lean_unbox_usize(v_i_2286_);
lean_dec(v_i_2286_);
v_res_2293_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg(v_sp_2282_, v___y_8581__boxed_2290_, v_as_2284_, v_sz_boxed_2291_, v_i_boxed_2292_, v_b_2287_, v___y_2288_);
lean_dec_ref(v___y_2288_);
lean_dec_ref(v_as_2284_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(lean_object* v_pkgRoot_2294_, lean_object* v_as_2295_, size_t v_sz_2296_, size_t v_i_2297_, lean_object* v_b_2298_){
_start:
{
lean_object* v_a_2301_; uint8_t v___x_2305_; 
v___x_2305_ = lean_usize_dec_lt(v_i_2297_, v_sz_2296_);
if (v___x_2305_ == 0)
{
lean_object* v___x_2306_; 
v___x_2306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2306_, 0, v_b_2298_);
return v___x_2306_;
}
else
{
lean_object* v_a_2307_; uint8_t v___x_2308_; 
v_a_2307_ = lean_array_uget_borrowed(v_as_2295_, v_i_2297_);
v___x_2308_ = l_Lean_Name_isPrefixOf(v_pkgRoot_2294_, v_a_2307_);
if (v___x_2308_ == 0)
{
v_a_2301_ = v_b_2298_;
goto v___jp_2300_;
}
else
{
lean_object* v___x_2309_; 
lean_inc(v_a_2307_);
v___x_2309_ = l_Lean_NameSet_insert(v_b_2298_, v_a_2307_);
v_a_2301_ = v___x_2309_;
goto v___jp_2300_;
}
}
v___jp_2300_:
{
size_t v___x_2302_; size_t v___x_2303_; 
v___x_2302_ = ((size_t)1ULL);
v___x_2303_ = lean_usize_add(v_i_2297_, v___x_2302_);
v_i_2297_ = v___x_2303_;
v_b_2298_ = v_a_2301_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1___boxed(lean_object* v_pkgRoot_2310_, lean_object* v_as_2311_, lean_object* v_sz_2312_, lean_object* v_i_2313_, lean_object* v_b_2314_, lean_object* v___y_2315_){
_start:
{
size_t v_sz_boxed_2316_; size_t v_i_boxed_2317_; lean_object* v_res_2318_; 
v_sz_boxed_2316_ = lean_unbox_usize(v_sz_2312_);
lean_dec(v_sz_2312_);
v_i_boxed_2317_ = lean_unbox_usize(v_i_2313_);
lean_dec(v_i_2313_);
v_res_2318_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(v_pkgRoot_2310_, v_as_2311_, v_sz_boxed_2316_, v_i_boxed_2317_, v_b_2314_);
lean_dec_ref(v_as_2311_);
lean_dec(v_pkgRoot_2310_);
return v_res_2318_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = l_Lean_Options_empty;
v___x_2326_ = l_Lean_Core_getMaxHeartbeats(v___x_2325_);
return v___x_2326_;
}
}
static uint16_t _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6(void){
_start:
{
lean_object* v___x_2327_; uint16_t v___x_2328_; 
v___x_2327_ = l_Lean_Options_empty;
v___x_2328_ = l_Lean_OptionFlags_ofOptions(v___x_2327_);
return v___x_2328_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_unsigned_to_nat(1u);
v___x_2330_ = l_Lean_firstFrontendMacroScope;
v___x_2331_ = lean_nat_add(v___x_2330_, v___x_2329_);
return v___x_2331_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12(void){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2342_ = lean_unsigned_to_nat(32u);
v___x_2343_ = lean_mk_empty_array_with_capacity(v___x_2342_);
v___x_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
return v___x_2344_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13(void){
_start:
{
size_t v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2345_ = ((size_t)5ULL);
v___x_2346_ = lean_unsigned_to_nat(0u);
v___x_2347_ = lean_unsigned_to_nat(32u);
v___x_2348_ = lean_mk_empty_array_with_capacity(v___x_2347_);
v___x_2349_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__12);
v___x_2350_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2350_, 0, v___x_2349_);
lean_ctor_set(v___x_2350_, 1, v___x_2348_);
lean_ctor_set(v___x_2350_, 2, v___x_2346_);
lean_ctor_set(v___x_2350_, 3, v___x_2346_);
lean_ctor_set_usize(v___x_2350_, 4, v___x_2345_);
return v___x_2350_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14(void){
_start:
{
lean_object* v___x_2351_; uint64_t v___x_2352_; lean_object* v___x_2353_; 
v___x_2351_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_2352_ = 0ULL;
v___x_2353_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2353_, 0, v___x_2351_);
lean_ctor_set_uint64(v___x_2353_, sizeof(void*)*1, v___x_2352_);
return v___x_2353_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15(void){
_start:
{
lean_object* v___x_2354_; 
v___x_2354_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2354_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16(void){
_start:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15);
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2355_);
return v___x_2356_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17(void){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2357_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v___x_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2357_);
lean_ctor_set(v___x_2358_, 1, v___x_2357_);
return v___x_2358_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18(void){
_start:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2359_ = lean_unsigned_to_nat(0u);
v___x_2360_ = l_Lean_Options_empty;
v___x_2361_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0));
v___x_2362_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
lean_ctor_set(v___x_2362_, 1, v___x_2360_);
lean_ctor_set(v___x_2362_, 2, v___x_2361_);
lean_ctor_set(v___x_2362_, 3, v___x_2359_);
lean_ctor_set(v___x_2362_, 4, v___x_2359_);
lean_ctor_set(v___x_2362_, 5, v___x_2359_);
lean_ctor_set(v___x_2362_, 6, v___x_2361_);
lean_ctor_set(v___x_2362_, 7, v___x_2361_);
return v___x_2362_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19(void){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2363_ = l_Lean_NameSet_empty;
v___x_2364_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_2365_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
lean_ctor_set(v___x_2365_, 1, v___x_2364_);
lean_ctor_set(v___x_2365_, 2, v___x_2363_);
return v___x_2365_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20(void){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; uint8_t v_unlocated_2368_; lean_object* v___x_2369_; 
v___x_2366_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__13);
v___x_2367_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__16);
v_unlocated_2368_ = 1;
v___x_2369_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set(v___x_2369_, 1, v___x_2367_);
lean_ctor_set(v___x_2369_, 2, v___x_2366_);
lean_ctor_set_uint8(v___x_2369_, sizeof(void*)*3, v_unlocated_2368_);
return v___x_2369_;
}
}
static uint16_t _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__21(void){
_start:
{
uint16_t v___x_2370_; uint16_t v___x_2371_; uint16_t v___x_2372_; 
v___x_2370_ = 512;
v___x_2371_ = lean_uint16_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_2372_ = lean_uint16_land(v___x_2371_, v___x_2370_);
return v___x_2372_;
}
}
static uint8_t _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22(void){
_start:
{
uint16_t v___x_2373_; uint16_t v___x_2374_; uint8_t v___x_2375_; 
v___x_2373_ = 0;
v___x_2374_ = lean_uint16_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__21, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__21_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__21);
v___x_2375_ = lean_uint16_dec_eq(v___x_2374_, v___x_2373_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(lean_object* v_args_2376_, lean_object* v_linterOpts_2377_, lean_object* v_sp_2378_, lean_object* v_env_2379_, lean_object* v_pkgRoot_2380_, lean_object* v_docCheckedModules_2381_){
_start:
{
lean_object* v___y_2384_; lean_object* v_a_2388_; uint8_t v___y_2392_; lean_object* v_a_2393_; lean_object* v___y_2410_; lean_object* v_a_2411_; lean_object* v___y_2436_; uint8_t v___y_2437_; uint8_t v_lintOnly_2439_; uint8_t v_mode_2440_; lean_object* v___f_2441_; lean_object* v___f_2442_; uint8_t v___y_2444_; uint16_t v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; uint8_t v___y_2448_; lean_object* v___y_2449_; lean_object* v_fileName_2450_; lean_object* v_fileMap_2451_; lean_object* v_currNamespace_2452_; lean_object* v_openDecls_2453_; lean_object* v_initHeartbeats_2454_; lean_object* v_maxHeartbeats_2455_; lean_object* v_quotContext_2456_; lean_object* v_currMacroScope_2457_; lean_object* v_cancelTk_x3f_2458_; lean_object* v_inheritedTraceOptions_2459_; lean_object* v_currRecDepth_2460_; lean_object* v_ref_2461_; uint8_t v_suppressElabErrors_2462_; uint8_t v_checkDeprecated_2463_; uint8_t v_isRecordingDeps_2464_; lean_object* v___y_2465_; uint16_t v___y_2495_; uint8_t v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; uint8_t v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v_nextMacroScope_2502_; lean_object* v_ngen_2503_; lean_object* v_auxDeclNGen_2504_; lean_object* v_traceState_2505_; lean_object* v_recordedDeps_2506_; lean_object* v_messages_2507_; lean_object* v_infoState_2508_; lean_object* v_snapshotTasks_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; uint8_t v___y_2531_; uint16_t v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; uint8_t v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2538_; uint8_t v___y_2539_; uint8_t v___y_2557_; 
v_lintOnly_2439_ = lean_ctor_get_uint8(v_args_2376_, sizeof(void*)*4);
v_mode_2440_ = lean_ctor_get_uint8(v_args_2376_, sizeof(void*)*4 + 1);
lean_inc(v_docCheckedModules_2381_);
lean_inc(v_pkgRoot_2380_);
v___f_2441_ = lean_alloc_closure((void*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2441_, 0, v_pkgRoot_2380_);
lean_closure_set(v___f_2441_, 1, v_docCheckedModules_2381_);
v___f_2442_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__3));
if (v_lintOnly_2439_ == 0)
{
lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2597_ = l_Lean_linter_doc_deferred;
v___x_2598_ = l_Lean_Linter_getLinterValue(v___x_2597_, v_linterOpts_2377_);
v___y_2557_ = v___x_2598_;
goto v___jp_2556_;
}
else
{
lean_object* v___x_2599_; lean_object* v_name_2600_; uint8_t v___x_2601_; 
v___x_2599_ = l_Lean_linter_doc_deferred;
v_name_2600_ = lean_ctor_get(v___x_2599_, 0);
v___x_2601_ = l_Lean_Linter_isLinterEnabledByOptions(v_name_2600_, v_linterOpts_2377_);
v___y_2557_ = v___x_2601_;
goto v___jp_2556_;
}
v___jp_2383_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2385_, 0, v___y_2384_);
lean_ctor_set(v___x_2385_, 1, v_docCheckedModules_2381_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
v___jp_2387_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = lean_mk_io_user_error(v_a_2388_);
v___x_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2389_);
return v___x_2390_;
}
v___jp_2391_:
{
if (lean_obj_tag(v_a_2393_) == 0)
{
lean_object* v_msg_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_msg_2394_ = lean_ctor_get(v_a_2393_, 1);
lean_inc_ref(v_msg_2394_);
lean_dec_ref_known(v_a_2393_, 2);
v___x_2395_ = l_Lean_MessageData_toString(v_msg_2394_);
v___x_2396_ = lean_mk_io_user_error(v___x_2395_);
v___x_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2396_);
return v___x_2397_;
}
else
{
lean_object* v_id_2398_; lean_object* v___x_2399_; 
v_id_2398_ = lean_ctor_get(v_a_2393_, 0);
lean_inc(v_id_2398_);
lean_dec_ref_known(v_a_2393_, 2);
v___x_2399_ = l_Lean_InternalExceptionId_getName(v_id_2398_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
lean_dec(v_id_2398_);
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2399_, 1);
v___x_2401_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_2402_ = l_Lean_Name_toString(v_a_2400_, v___y_2392_);
v___x_2403_ = lean_string_append(v___x_2401_, v___x_2402_);
lean_dec_ref(v___x_2402_);
v_a_2388_ = v___x_2403_;
goto v___jp_2387_;
}
else
{
lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
lean_dec_ref_known(v___x_2399_, 1);
v___x_2404_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_2405_ = l_Nat_reprFast(v_id_2398_);
v___x_2406_ = lean_string_append(v___x_2404_, v___x_2405_);
lean_dec_ref(v___x_2405_);
v___x_2407_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_2408_ = lean_string_append(v___x_2406_, v___x_2407_);
v_a_2388_ = v___x_2408_;
goto v___jp_2387_;
}
}
}
v___jp_2409_:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v_moduleNames_2414_; size_t v_sz_2415_; size_t v___x_2416_; lean_object* v___x_2417_; 
v___x_2412_ = lean_st_ref_get(v___y_2410_);
lean_dec(v___y_2410_);
lean_dec(v___x_2412_);
v___x_2413_ = l_Lean_Environment_header(v_env_2379_);
lean_dec_ref(v_env_2379_);
v_moduleNames_2414_ = lean_ctor_get(v___x_2413_, 4);
lean_inc_ref(v_moduleNames_2414_);
lean_dec_ref(v___x_2413_);
v_sz_2415_ = lean_array_size(v_moduleNames_2414_);
v___x_2416_ = ((size_t)0ULL);
v___x_2417_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__1(v_pkgRoot_2380_, v_moduleNames_2414_, v_sz_2415_, v___x_2416_, v_docCheckedModules_2381_);
lean_dec_ref(v_moduleNames_2414_);
lean_dec(v_pkgRoot_2380_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2426_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___x_2424_; 
v___x_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2422_, 0, v_a_2411_);
lean_ctor_set(v___x_2422_, 1, v_a_2418_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2422_);
v___x_2424_ = v___x_2420_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v___x_2422_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
lean_dec_ref(v_a_2411_);
v_a_2427_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2417_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2417_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
v___jp_2435_:
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_2438_, 0, v___y_2437_);
v___y_2410_ = v___y_2436_;
v_a_2411_ = v___x_2438_;
goto v___jp_2409_;
}
v___jp_2443_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2466_ = l_Lean_maxRecDepth;
v___x_2467_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(v___y_2446_, v___x_2466_);
lean_inc_ref(v___y_2446_);
v___x_2468_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2468_, 0, v_fileName_2450_);
lean_ctor_set(v___x_2468_, 1, v_fileMap_2451_);
lean_ctor_set(v___x_2468_, 2, v___y_2446_);
lean_ctor_set(v___x_2468_, 3, v___x_2467_);
lean_ctor_set(v___x_2468_, 4, v_currNamespace_2452_);
lean_ctor_set(v___x_2468_, 5, v_openDecls_2453_);
lean_ctor_set(v___x_2468_, 6, v_initHeartbeats_2454_);
lean_ctor_set(v___x_2468_, 7, v_maxHeartbeats_2455_);
lean_ctor_set(v___x_2468_, 8, v_quotContext_2456_);
lean_ctor_set(v___x_2468_, 9, v_currMacroScope_2457_);
lean_ctor_set(v___x_2468_, 10, v_cancelTk_x3f_2458_);
lean_ctor_set(v___x_2468_, 11, v_inheritedTraceOptions_2459_);
v___x_2469_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2469_, 0, v___x_2468_);
lean_ctor_set(v___x_2469_, 1, v_currRecDepth_2460_);
lean_ctor_set(v___x_2469_, 2, v_ref_2461_);
lean_ctor_set_uint16(v___x_2469_, sizeof(void*)*3, v___y_2445_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3 + 2, v_suppressElabErrors_2462_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3 + 3, v_checkDeprecated_2463_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3 + 4, v_isRecordingDeps_2464_);
v___x_2470_ = l_Lean_Doc_DeferredCheck_run(v___f_2441_, v___f_2442_, v___x_2469_, v___y_2465_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; uint8_t v___x_2472_; uint8_t v___x_2473_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2470_, 1);
v___x_2472_ = 1;
v___x_2473_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_2440_, v___x_2472_);
if (v___x_2473_ == 0)
{
lean_object* v___x_2474_; size_t v_sz_2475_; size_t v___x_2476_; lean_object* v___x_2477_; 
lean_dec(v___y_2465_);
v___x_2474_ = lean_box(0);
v_sz_2475_ = lean_array_size(v_a_2471_);
v___x_2476_ = ((size_t)0ULL);
v___x_2477_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg(v_sp_2378_, v___y_2448_, v_a_2471_, v_sz_2475_, v___x_2476_, v___x_2474_, v___x_2469_);
lean_dec_ref_known(v___x_2469_, 3);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v___x_2478_; uint8_t v___x_2479_; 
lean_dec_ref_known(v___x_2477_, 1);
v___x_2478_ = lean_array_get_size(v_a_2471_);
lean_dec(v_a_2471_);
v___x_2479_ = lean_nat_dec_eq(v___x_2478_, v___y_2447_);
lean_dec(v___y_2447_);
if (v___x_2479_ == 0)
{
v___y_2436_ = v___y_2449_;
v___y_2437_ = v___y_2448_;
goto v___jp_2435_;
}
else
{
v___y_2436_ = v___y_2449_;
v___y_2437_ = v___x_2473_;
goto v___jp_2435_;
}
}
else
{
lean_object* v_a_2480_; 
lean_dec(v_a_2471_);
lean_dec(v___y_2449_);
lean_dec(v___y_2447_);
lean_dec(v_docCheckedModules_2381_);
lean_dec(v_pkgRoot_2380_);
lean_dec_ref(v_env_2379_);
v_a_2480_ = lean_ctor_get(v___x_2477_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2477_, 1);
v___y_2392_ = v___y_2448_;
v_a_2393_ = v_a_2480_;
goto v___jp_2391_;
}
}
else
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; size_t v_sz_2484_; size_t v___x_2485_; lean_object* v___x_2486_; 
v___x_2481_ = lean_mk_empty_array_with_capacity(v___y_2447_);
lean_dec(v___y_2447_);
v___x_2482_ = lean_box(v___y_2444_);
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2481_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v_sz_2484_ = lean_array_size(v_a_2471_);
v___x_2485_ = ((size_t)0ULL);
v___x_2486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4(v___x_2473_, v_sp_2378_, v_a_2471_, v_sz_2484_, v___x_2485_, v___x_2483_, v___x_2469_, v___y_2465_);
lean_dec(v___y_2465_);
lean_dec_ref_known(v___x_2469_, 3);
lean_dec(v_a_2471_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; lean_object* v_fst_2488_; lean_object* v_snd_2489_; lean_object* v___x_2490_; uint8_t v___x_2491_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2486_, 1);
v_fst_2488_ = lean_ctor_get(v_a_2487_, 0);
lean_inc(v_fst_2488_);
v_snd_2489_ = lean_ctor_get(v_a_2487_, 1);
lean_inc(v_snd_2489_);
lean_dec(v_a_2487_);
v___x_2490_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_2490_, 0, v_fst_2488_);
v___x_2491_ = lean_unbox(v_snd_2489_);
lean_dec(v_snd_2489_);
lean_ctor_set_uint8(v___x_2490_, sizeof(void*)*1, v___x_2491_);
v___y_2410_ = v___y_2449_;
v_a_2411_ = v___x_2490_;
goto v___jp_2409_;
}
else
{
lean_object* v_a_2492_; 
lean_dec(v___y_2449_);
lean_dec(v_docCheckedModules_2381_);
lean_dec(v_pkgRoot_2380_);
lean_dec_ref(v_env_2379_);
v_a_2492_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2486_, 1);
v___y_2392_ = v___y_2448_;
v_a_2393_ = v_a_2492_;
goto v___jp_2391_;
}
}
}
else
{
lean_object* v_a_2493_; 
lean_dec_ref_known(v___x_2469_, 3);
lean_dec(v___y_2465_);
lean_dec(v___y_2449_);
lean_dec(v___y_2447_);
lean_dec(v_docCheckedModules_2381_);
lean_dec(v_pkgRoot_2380_);
lean_dec_ref(v_env_2379_);
lean_dec(v_sp_2378_);
v_a_2493_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2470_, 1);
v___y_2392_ = v___y_2448_;
v_a_2393_ = v_a_2493_;
goto v___jp_2391_;
}
}
v___jp_2494_:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v_toCold_2514_; lean_object* v_currRecDepth_2515_; lean_object* v_ref_2516_; uint8_t v_suppressElabErrors_2517_; uint8_t v_checkDeprecated_2518_; uint8_t v_isRecordingDeps_2519_; lean_object* v_fileName_2520_; lean_object* v_fileMap_2521_; lean_object* v_currNamespace_2522_; lean_object* v_openDecls_2523_; lean_object* v_initHeartbeats_2524_; lean_object* v_maxHeartbeats_2525_; lean_object* v_quotContext_2526_; lean_object* v_currMacroScope_2527_; lean_object* v_cancelTk_x3f_2528_; lean_object* v_inheritedTraceOptions_2529_; 
lean_inc_ref(v___y_2510_);
v___x_2512_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2512_, 0, v___y_2511_);
lean_ctor_set(v___x_2512_, 1, v_nextMacroScope_2502_);
lean_ctor_set(v___x_2512_, 2, v_ngen_2503_);
lean_ctor_set(v___x_2512_, 3, v_auxDeclNGen_2504_);
lean_ctor_set(v___x_2512_, 4, v_traceState_2505_);
lean_ctor_set(v___x_2512_, 5, v___y_2510_);
lean_ctor_set(v___x_2512_, 6, v_recordedDeps_2506_);
lean_ctor_set(v___x_2512_, 7, v_messages_2507_);
lean_ctor_set(v___x_2512_, 8, v_infoState_2508_);
lean_ctor_set(v___x_2512_, 9, v_snapshotTasks_2509_);
v___x_2513_ = lean_st_ref_put(v___y_2501_, v___x_2512_);
v_toCold_2514_ = lean_ctor_get(v___y_2498_, 0);
lean_inc_ref(v_toCold_2514_);
v_currRecDepth_2515_ = lean_ctor_get(v___y_2498_, 1);
lean_inc(v_currRecDepth_2515_);
v_ref_2516_ = lean_ctor_get(v___y_2498_, 2);
lean_inc(v_ref_2516_);
v_suppressElabErrors_2517_ = lean_ctor_get_uint8(v___y_2498_, sizeof(void*)*3 + 2);
v_checkDeprecated_2518_ = lean_ctor_get_uint8(v___y_2498_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2519_ = lean_ctor_get_uint8(v___y_2498_, sizeof(void*)*3 + 4);
lean_dec_ref(v___y_2498_);
v_fileName_2520_ = lean_ctor_get(v_toCold_2514_, 0);
lean_inc_ref(v_fileName_2520_);
v_fileMap_2521_ = lean_ctor_get(v_toCold_2514_, 1);
lean_inc_ref(v_fileMap_2521_);
v_currNamespace_2522_ = lean_ctor_get(v_toCold_2514_, 4);
lean_inc(v_currNamespace_2522_);
v_openDecls_2523_ = lean_ctor_get(v_toCold_2514_, 5);
lean_inc(v_openDecls_2523_);
v_initHeartbeats_2524_ = lean_ctor_get(v_toCold_2514_, 6);
lean_inc(v_initHeartbeats_2524_);
v_maxHeartbeats_2525_ = lean_ctor_get(v_toCold_2514_, 7);
lean_inc(v_maxHeartbeats_2525_);
v_quotContext_2526_ = lean_ctor_get(v_toCold_2514_, 8);
lean_inc(v_quotContext_2526_);
v_currMacroScope_2527_ = lean_ctor_get(v_toCold_2514_, 9);
lean_inc(v_currMacroScope_2527_);
v_cancelTk_x3f_2528_ = lean_ctor_get(v_toCold_2514_, 10);
lean_inc(v_cancelTk_x3f_2528_);
v_inheritedTraceOptions_2529_ = lean_ctor_get(v_toCold_2514_, 11);
lean_inc_ref(v_inheritedTraceOptions_2529_);
lean_dec_ref(v_toCold_2514_);
lean_inc(v___y_2501_);
v___y_2444_ = v___y_2496_;
v___y_2445_ = v___y_2495_;
v___y_2446_ = v___y_2497_;
v___y_2447_ = v___y_2500_;
v___y_2448_ = v___y_2499_;
v___y_2449_ = v___y_2501_;
v_fileName_2450_ = v_fileName_2520_;
v_fileMap_2451_ = v_fileMap_2521_;
v_currNamespace_2452_ = v_currNamespace_2522_;
v_openDecls_2453_ = v_openDecls_2523_;
v_initHeartbeats_2454_ = v_initHeartbeats_2524_;
v_maxHeartbeats_2455_ = v_maxHeartbeats_2525_;
v_quotContext_2456_ = v_quotContext_2526_;
v_currMacroScope_2457_ = v_currMacroScope_2527_;
v_cancelTk_x3f_2458_ = v_cancelTk_x3f_2528_;
v_inheritedTraceOptions_2459_ = v_inheritedTraceOptions_2529_;
v_currRecDepth_2460_ = v_currRecDepth_2515_;
v_ref_2461_ = v_ref_2516_;
v_suppressElabErrors_2462_ = v_suppressElabErrors_2517_;
v_checkDeprecated_2463_ = v_checkDeprecated_2518_;
v_isRecordingDeps_2464_ = v_isRecordingDeps_2519_;
v___y_2465_ = v___y_2501_;
goto v___jp_2443_;
}
v___jp_2530_:
{
lean_object* v___x_2540_; lean_object* v_env_2541_; lean_object* v_nextMacroScope_2542_; lean_object* v_ngen_2543_; lean_object* v_auxDeclNGen_2544_; lean_object* v_traceState_2545_; lean_object* v_recordedDeps_2546_; lean_object* v_messages_2547_; lean_object* v_infoState_2548_; lean_object* v_snapshotTasks_2549_; uint16_t v___x_2550_; uint16_t v___x_2551_; uint16_t v___x_2552_; uint8_t v___x_2553_; 
v___x_2540_ = lean_st_ref_take(v___y_2537_);
v_env_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc_ref(v_env_2541_);
v_nextMacroScope_2542_ = lean_ctor_get(v___x_2540_, 1);
lean_inc(v_nextMacroScope_2542_);
v_ngen_2543_ = lean_ctor_get(v___x_2540_, 2);
lean_inc_ref(v_ngen_2543_);
v_auxDeclNGen_2544_ = lean_ctor_get(v___x_2540_, 3);
lean_inc_ref(v_auxDeclNGen_2544_);
v_traceState_2545_ = lean_ctor_get(v___x_2540_, 4);
lean_inc_ref(v_traceState_2545_);
v_recordedDeps_2546_ = lean_ctor_get(v___x_2540_, 6);
lean_inc_ref(v_recordedDeps_2546_);
v_messages_2547_ = lean_ctor_get(v___x_2540_, 7);
lean_inc_ref(v_messages_2547_);
v_infoState_2548_ = lean_ctor_get(v___x_2540_, 8);
lean_inc_ref(v_infoState_2548_);
v_snapshotTasks_2549_ = lean_ctor_get(v___x_2540_, 9);
lean_inc_ref(v_snapshotTasks_2549_);
lean_dec(v___x_2540_);
v___x_2550_ = 512;
v___x_2551_ = lean_uint16_land(v___y_2532_, v___x_2550_);
v___x_2552_ = 0;
v___x_2553_ = lean_uint16_dec_eq(v___x_2551_, v___x_2552_);
if (v___x_2553_ == 0)
{
lean_object* v___x_2554_; 
v___x_2554_ = l_Lean_Kernel_enableDiag(v_env_2541_, v___y_2536_);
v___y_2495_ = v___y_2532_;
v___y_2496_ = v___y_2531_;
v___y_2497_ = v___y_2533_;
v___y_2498_ = v___y_2534_;
v___y_2499_ = v___y_2536_;
v___y_2500_ = v___y_2535_;
v___y_2501_ = v___y_2537_;
v_nextMacroScope_2502_ = v_nextMacroScope_2542_;
v_ngen_2503_ = v_ngen_2543_;
v_auxDeclNGen_2504_ = v_auxDeclNGen_2544_;
v_traceState_2505_ = v_traceState_2545_;
v_recordedDeps_2506_ = v_recordedDeps_2546_;
v_messages_2507_ = v_messages_2547_;
v_infoState_2508_ = v_infoState_2548_;
v_snapshotTasks_2509_ = v_snapshotTasks_2549_;
v___y_2510_ = v___y_2538_;
v___y_2511_ = v___x_2554_;
goto v___jp_2494_;
}
else
{
lean_object* v___x_2555_; 
v___x_2555_ = l_Lean_Kernel_enableDiag(v_env_2541_, v___y_2539_);
v___y_2495_ = v___y_2532_;
v___y_2496_ = v___y_2531_;
v___y_2497_ = v___y_2533_;
v___y_2498_ = v___y_2534_;
v___y_2499_ = v___y_2536_;
v___y_2500_ = v___y_2535_;
v___y_2501_ = v___y_2537_;
v_nextMacroScope_2502_ = v_nextMacroScope_2542_;
v_ngen_2503_ = v_ngen_2543_;
v_auxDeclNGen_2504_ = v_auxDeclNGen_2544_;
v_traceState_2505_ = v_traceState_2545_;
v_recordedDeps_2506_ = v_recordedDeps_2546_;
v_messages_2507_ = v_messages_2547_;
v_infoState_2508_ = v_infoState_2548_;
v_snapshotTasks_2509_ = v_snapshotTasks_2549_;
v___y_2510_ = v___y_2538_;
v___y_2511_ = v___x_2555_;
goto v___jp_2494_;
}
}
v___jp_2556_:
{
if (v___y_2557_ == 0)
{
uint8_t v___x_2558_; uint8_t v___x_2559_; 
lean_dec_ref(v___f_2441_);
lean_dec(v_pkgRoot_2380_);
lean_dec_ref(v_env_2379_);
lean_dec(v_sp_2378_);
v___x_2558_ = 1;
v___x_2559_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_2440_, v___x_2558_);
if (v___x_2559_ == 0)
{
lean_object* v___x_2560_; 
v___x_2560_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_2560_, 0, v___x_2559_);
v___y_2384_ = v___x_2560_;
goto v___jp_2383_;
}
else
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2561_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_2562_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
lean_ctor_set_uint8(v___x_2562_, sizeof(void*)*1, v___y_2557_);
v___y_2384_ = v___x_2562_;
goto v___jp_2383_;
}
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; uint16_t v___x_2574_; uint8_t v___x_2575_; uint8_t v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v_env_2594_; uint8_t v___x_2595_; uint8_t v___x_2596_; 
v___x_2563_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_2564_ = l_Lean_instInhabitedFileMap_default;
v___x_2565_ = l_Lean_Options_empty;
v___x_2566_ = lean_unsigned_to_nat(1000u);
v___x_2567_ = lean_box(0);
v___x_2568_ = lean_box(0);
v___x_2569_ = lean_unsigned_to_nat(0u);
v___x_2570_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_2571_ = l_Lean_firstFrontendMacroScope;
v___x_2572_ = lean_box(0);
v___x_2573_ = lean_box(0);
v___x_2574_ = lean_uint16_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_2575_ = 0;
v___x_2576_ = 0;
v___x_2577_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7);
v___x_2578_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10));
v___x_2579_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11));
v___x_2580_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14);
v___x_2581_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_2582_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0));
v___x_2583_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_2584_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19);
v___x_2585_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
lean_inc_ref(v_env_2379_);
v___x_2586_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2586_, 0, v_env_2379_);
lean_ctor_set(v___x_2586_, 1, v___x_2577_);
lean_ctor_set(v___x_2586_, 2, v___x_2578_);
lean_ctor_set(v___x_2586_, 3, v___x_2579_);
lean_ctor_set(v___x_2586_, 4, v___x_2580_);
lean_ctor_set(v___x_2586_, 5, v___x_2581_);
lean_ctor_set(v___x_2586_, 6, v___x_2583_);
lean_ctor_set(v___x_2586_, 7, v___x_2584_);
lean_ctor_set(v___x_2586_, 8, v___x_2585_);
lean_ctor_set(v___x_2586_, 9, v___x_2582_);
v___x_2587_ = lean_io_get_num_heartbeats();
v___x_2588_ = lean_st_mk_ref(v___x_2586_);
v___x_2589_ = l_Lean_inheritedTraceOptions;
v___x_2590_ = lean_st_ref_get(v___x_2589_);
lean_inc(v___x_2590_);
lean_inc(v___x_2587_);
v___x_2591_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2563_);
lean_ctor_set(v___x_2591_, 1, v___x_2564_);
lean_ctor_set(v___x_2591_, 2, v___x_2565_);
lean_ctor_set(v___x_2591_, 3, v___x_2566_);
lean_ctor_set(v___x_2591_, 4, v___x_2567_);
lean_ctor_set(v___x_2591_, 5, v___x_2568_);
lean_ctor_set(v___x_2591_, 6, v___x_2587_);
lean_ctor_set(v___x_2591_, 7, v___x_2570_);
lean_ctor_set(v___x_2591_, 8, v___x_2567_);
lean_ctor_set(v___x_2591_, 9, v___x_2571_);
lean_ctor_set(v___x_2591_, 10, v___x_2572_);
lean_ctor_set(v___x_2591_, 11, v___x_2590_);
v___x_2592_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v___x_2569_);
lean_ctor_set(v___x_2592_, 2, v___x_2573_);
lean_ctor_set_uint16(v___x_2592_, sizeof(void*)*3, v___x_2574_);
lean_ctor_set_uint8(v___x_2592_, sizeof(void*)*3 + 2, v___x_2575_);
lean_ctor_set_uint8(v___x_2592_, sizeof(void*)*3 + 3, v___x_2576_);
lean_ctor_set_uint8(v___x_2592_, sizeof(void*)*3 + 4, v___x_2575_);
v___x_2593_ = lean_st_ref_get(v___x_2588_);
v_env_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc_ref(v_env_2594_);
lean_dec(v___x_2593_);
v___x_2595_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2594_);
lean_dec_ref(v_env_2594_);
v___x_2596_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22);
if (v___x_2596_ == 0)
{
if (v___x_2595_ == 0)
{
lean_dec(v___x_2590_);
lean_dec(v___x_2587_);
v___y_2531_ = v___x_2575_;
v___y_2532_ = v___x_2574_;
v___y_2533_ = v___x_2565_;
v___y_2534_ = v___x_2592_;
v___y_2535_ = v___x_2569_;
v___y_2536_ = v___y_2557_;
v___y_2537_ = v___x_2588_;
v___y_2538_ = v___x_2581_;
v___y_2539_ = v___x_2595_;
goto v___jp_2530_;
}
else
{
lean_dec_ref_known(v___x_2592_, 3);
lean_inc(v___x_2588_);
v___y_2444_ = v___x_2575_;
v___y_2445_ = v___x_2574_;
v___y_2446_ = v___x_2565_;
v___y_2447_ = v___x_2569_;
v___y_2448_ = v___y_2557_;
v___y_2449_ = v___x_2588_;
v_fileName_2450_ = v___x_2563_;
v_fileMap_2451_ = v___x_2564_;
v_currNamespace_2452_ = v___x_2567_;
v_openDecls_2453_ = v___x_2568_;
v_initHeartbeats_2454_ = v___x_2587_;
v_maxHeartbeats_2455_ = v___x_2570_;
v_quotContext_2456_ = v___x_2567_;
v_currMacroScope_2457_ = v___x_2571_;
v_cancelTk_x3f_2458_ = v___x_2572_;
v_inheritedTraceOptions_2459_ = v___x_2590_;
v_currRecDepth_2460_ = v___x_2569_;
v_ref_2461_ = v___x_2573_;
v_suppressElabErrors_2462_ = v___x_2575_;
v_checkDeprecated_2463_ = v___x_2576_;
v_isRecordingDeps_2464_ = v___x_2575_;
v___y_2465_ = v___x_2588_;
goto v___jp_2443_;
}
}
else
{
if (v___x_2595_ == 0)
{
lean_dec_ref_known(v___x_2592_, 3);
lean_inc(v___x_2588_);
v___y_2444_ = v___x_2575_;
v___y_2445_ = v___x_2574_;
v___y_2446_ = v___x_2565_;
v___y_2447_ = v___x_2569_;
v___y_2448_ = v___y_2557_;
v___y_2449_ = v___x_2588_;
v_fileName_2450_ = v___x_2563_;
v_fileMap_2451_ = v___x_2564_;
v_currNamespace_2452_ = v___x_2567_;
v_openDecls_2453_ = v___x_2568_;
v_initHeartbeats_2454_ = v___x_2587_;
v_maxHeartbeats_2455_ = v___x_2570_;
v_quotContext_2456_ = v___x_2567_;
v_currMacroScope_2457_ = v___x_2571_;
v_cancelTk_x3f_2458_ = v___x_2572_;
v_inheritedTraceOptions_2459_ = v___x_2590_;
v_currRecDepth_2460_ = v___x_2569_;
v_ref_2461_ = v___x_2573_;
v_suppressElabErrors_2462_ = v___x_2575_;
v_checkDeprecated_2463_ = v___x_2576_;
v_isRecordingDeps_2464_ = v___x_2575_;
v___y_2465_ = v___x_2588_;
goto v___jp_2443_;
}
else
{
lean_dec(v___x_2590_);
lean_dec(v___x_2587_);
v___y_2531_ = v___x_2575_;
v___y_2532_ = v___x_2574_;
v___y_2533_ = v___x_2565_;
v___y_2534_ = v___x_2592_;
v___y_2535_ = v___x_2569_;
v___y_2536_ = v___y_2557_;
v___y_2537_ = v___x_2588_;
v___y_2538_ = v___x_2581_;
v___y_2539_ = v___x_2575_;
goto v___jp_2530_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___boxed(lean_object* v_args_2602_, lean_object* v_linterOpts_2603_, lean_object* v_sp_2604_, lean_object* v_env_2605_, lean_object* v_pkgRoot_2606_, lean_object* v_docCheckedModules_2607_, lean_object* v_a_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(v_args_2602_, v_linterOpts_2603_, v_sp_2604_, v_env_2605_, v_pkgRoot_2606_, v_docCheckedModules_2607_);
lean_dec_ref(v_linterOpts_2603_);
lean_dec_ref(v_args_2602_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(lean_object* v_sp_2610_, uint8_t v___y_2611_, lean_object* v_as_2612_, size_t v_sz_2613_, size_t v_i_2614_, lean_object* v_b_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v___x_2619_; 
v___x_2619_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___redArg(v_sp_2610_, v___y_2611_, v_as_2612_, v_sz_2613_, v_i_2614_, v_b_2615_, v___y_2616_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3___boxed(lean_object* v_sp_2620_, lean_object* v___y_2621_, lean_object* v_as_2622_, lean_object* v_sz_2623_, lean_object* v_i_2624_, lean_object* v_b_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
uint8_t v___y_9341__boxed_2629_; size_t v_sz_boxed_2630_; size_t v_i_boxed_2631_; lean_object* v_res_2632_; 
v___y_9341__boxed_2629_ = lean_unbox(v___y_2621_);
v_sz_boxed_2630_ = lean_unbox_usize(v_sz_2623_);
lean_dec(v_sz_2623_);
v_i_boxed_2631_ = lean_unbox_usize(v_i_2624_);
lean_dec(v_i_2624_);
v_res_2632_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__3(v_sp_2620_, v___y_9341__boxed_2629_, v_as_2622_, v_sz_boxed_2630_, v_i_boxed_2631_, v_b_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v_as_2622_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(lean_object* v_linterOpts_2633_, lean_object* v_as_2634_, size_t v_i_2635_, size_t v_stop_2636_, lean_object* v_b_2637_){
_start:
{
lean_object* v___y_2639_; uint8_t v___x_2643_; 
v___x_2643_ = lean_usize_dec_eq(v_i_2635_, v_stop_2636_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; lean_object* v_linter_2645_; uint8_t v___x_2646_; 
v___x_2644_ = lean_array_uget_borrowed(v_as_2634_, v_i_2635_);
v_linter_2645_ = lean_ctor_get(v___x_2644_, 0);
v___x_2646_ = l_Lean_Linter_isLinterEnabledByOptions(v_linter_2645_, v_linterOpts_2633_);
if (v___x_2646_ == 0)
{
v___y_2639_ = v_b_2637_;
goto v___jp_2638_;
}
else
{
lean_object* v___x_2647_; 
lean_inc(v___x_2644_);
v___x_2647_ = lean_array_push(v_b_2637_, v___x_2644_);
v___y_2639_ = v___x_2647_;
goto v___jp_2638_;
}
}
else
{
return v_b_2637_;
}
v___jp_2638_:
{
size_t v___x_2640_; size_t v___x_2641_; 
v___x_2640_ = ((size_t)1ULL);
v___x_2641_ = lean_usize_add(v_i_2635_, v___x_2640_);
v_i_2635_ = v___x_2641_;
v_b_2637_ = v___y_2639_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1___boxed(lean_object* v_linterOpts_2648_, lean_object* v_as_2649_, lean_object* v_i_2650_, lean_object* v_stop_2651_, lean_object* v_b_2652_){
_start:
{
size_t v_i_boxed_2653_; size_t v_stop_boxed_2654_; lean_object* v_res_2655_; 
v_i_boxed_2653_ = lean_unbox_usize(v_i_2650_);
lean_dec(v_i_2650_);
v_stop_boxed_2654_ = lean_unbox_usize(v_stop_2651_);
lean_dec(v_stop_2651_);
v_res_2655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(v_linterOpts_2648_, v_as_2649_, v_i_boxed_2653_, v_stop_boxed_2654_, v_b_2652_);
lean_dec_ref(v_as_2649_);
lean_dec_ref(v_linterOpts_2648_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(lean_object* v_linterOpts_2658_, lean_object* v_as_2659_, size_t v_i_2660_, size_t v_stop_2661_, lean_object* v_b_2662_){
_start:
{
lean_object* v___y_2664_; uint8_t v___x_2668_; 
v___x_2668_ = lean_usize_dec_eq(v_i_2660_, v_stop_2661_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; lean_object* v_fst_2670_; lean_object* v_snd_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2691_; 
v___x_2669_ = lean_array_uget(v_as_2659_, v_i_2660_);
v_fst_2670_ = lean_ctor_get(v___x_2669_, 0);
v_snd_2671_ = lean_ctor_get(v___x_2669_, 1);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2673_ = v___x_2669_;
v_isShared_2674_ = v_isSharedCheck_2691_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_snd_2671_);
lean_inc(v_fst_2670_);
lean_dec(v___x_2669_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2691_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___y_2676_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; uint8_t v___x_2687_; 
v___x_2684_ = lean_unsigned_to_nat(0u);
v___x_2685_ = lean_array_get_size(v_snd_2671_);
v___x_2686_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___closed__0));
v___x_2687_ = lean_nat_dec_lt(v___x_2684_, v___x_2685_);
if (v___x_2687_ == 0)
{
lean_dec(v_snd_2671_);
v___y_2676_ = v___x_2686_;
goto v___jp_2675_;
}
else
{
size_t v___x_2688_; size_t v___x_2689_; lean_object* v___x_2690_; 
v___x_2688_ = ((size_t)0ULL);
v___x_2689_ = lean_usize_of_nat(v___x_2685_);
v___x_2690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__1(v_linterOpts_2658_, v_snd_2671_, v___x_2688_, v___x_2689_, v___x_2686_);
lean_dec(v_snd_2671_);
v___y_2676_ = v___x_2690_;
goto v___jp_2675_;
}
v___jp_2675_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; uint8_t v___x_2679_; 
v___x_2677_ = lean_array_get_size(v___y_2676_);
v___x_2678_ = lean_unsigned_to_nat(0u);
v___x_2679_ = lean_nat_dec_eq(v___x_2677_, v___x_2678_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2681_; 
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 1, v___y_2676_);
v___x_2681_ = v___x_2673_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_fst_2670_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v___y_2676_);
v___x_2681_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
lean_object* v___x_2682_; 
v___x_2682_ = lean_array_push(v_b_2662_, v___x_2681_);
v___y_2664_ = v___x_2682_;
goto v___jp_2663_;
}
}
else
{
lean_dec_ref(v___y_2676_);
lean_del_object(v___x_2673_);
lean_dec(v_fst_2670_);
v___y_2664_ = v_b_2662_;
goto v___jp_2663_;
}
}
}
}
else
{
return v_b_2662_;
}
v___jp_2663_:
{
size_t v___x_2665_; size_t v___x_2666_; 
v___x_2665_ = ((size_t)1ULL);
v___x_2666_ = lean_usize_add(v_i_2660_, v___x_2665_);
v_i_2660_ = v___x_2666_;
v_b_2662_ = v___y_2664_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9___boxed(lean_object* v_linterOpts_2692_, lean_object* v_as_2693_, lean_object* v_i_2694_, lean_object* v_stop_2695_, lean_object* v_b_2696_){
_start:
{
size_t v_i_boxed_2697_; size_t v_stop_boxed_2698_; lean_object* v_res_2699_; 
v_i_boxed_2697_ = lean_unbox_usize(v_i_2694_);
lean_dec(v_i_2694_);
v_stop_boxed_2698_ = lean_unbox_usize(v_stop_2695_);
lean_dec(v_stop_2695_);
v_res_2699_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(v_linterOpts_2692_, v_as_2693_, v_i_boxed_2697_, v_stop_boxed_2698_, v_b_2696_);
lean_dec_ref(v_as_2693_);
lean_dec_ref(v_linterOpts_2692_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(lean_object* v_linterOpts_2700_, lean_object* v_as_2701_, lean_object* v_start_2702_, lean_object* v_stop_2703_){
_start:
{
lean_object* v___x_2704_; uint8_t v___x_2705_; 
v___x_2704_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints___closed__0));
v___x_2705_ = lean_nat_dec_lt(v_start_2702_, v_stop_2703_);
if (v___x_2705_ == 0)
{
return v___x_2704_;
}
else
{
lean_object* v___x_2706_; uint8_t v___x_2707_; 
v___x_2706_ = lean_array_get_size(v_as_2701_);
v___x_2707_ = lean_nat_dec_le(v_stop_2703_, v___x_2706_);
if (v___x_2707_ == 0)
{
uint8_t v___x_2708_; 
v___x_2708_ = lean_nat_dec_lt(v_start_2702_, v___x_2706_);
if (v___x_2708_ == 0)
{
return v___x_2704_;
}
else
{
size_t v___x_2709_; size_t v___x_2710_; lean_object* v___x_2711_; 
v___x_2709_ = lean_usize_of_nat(v_start_2702_);
v___x_2710_ = lean_usize_of_nat(v___x_2706_);
v___x_2711_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(v_linterOpts_2700_, v_as_2701_, v___x_2709_, v___x_2710_, v___x_2704_);
return v___x_2711_;
}
}
else
{
size_t v___x_2712_; size_t v___x_2713_; lean_object* v___x_2714_; 
v___x_2712_ = lean_usize_of_nat(v_start_2702_);
v___x_2713_ = lean_usize_of_nat(v_stop_2703_);
v___x_2714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9_spec__9(v_linterOpts_2700_, v_as_2701_, v___x_2712_, v___x_2713_, v___x_2704_);
return v___x_2714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9___boxed(lean_object* v_linterOpts_2715_, lean_object* v_as_2716_, lean_object* v_start_2717_, lean_object* v_stop_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(v_linterOpts_2715_, v_as_2716_, v_start_2717_, v_stop_2718_);
lean_dec(v_stop_2718_);
lean_dec(v_start_2717_);
lean_dec_ref(v_as_2716_);
lean_dec_ref(v_linterOpts_2715_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(lean_object* v_fst_2720_, lean_object* v_init_2721_, lean_object* v_x_2722_){
_start:
{
if (lean_obj_tag(v_x_2722_) == 0)
{
lean_object* v_k_2724_; lean_object* v_v_2725_; lean_object* v_l_2726_; lean_object* v_r_2727_; uint8_t v_anyUnlocated_2728_; lean_object* v___x_2729_; lean_object* v_a_2730_; lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2744_; 
v_k_2724_ = lean_ctor_get(v_x_2722_, 1);
lean_inc(v_k_2724_);
v_v_2725_ = lean_ctor_get(v_x_2722_, 2);
lean_inc(v_v_2725_);
v_l_2726_ = lean_ctor_get(v_x_2722_, 3);
lean_inc(v_l_2726_);
v_r_2727_ = lean_ctor_get(v_x_2722_, 4);
lean_inc(v_r_2727_);
lean_dec_ref_known(v_x_2722_, 5);
v_anyUnlocated_2728_ = 1;
lean_inc(v_fst_2720_);
v___x_2729_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_fst_2720_, v_init_2721_, v_l_2726_);
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc(v_a_2730_);
lean_dec_ref(v___x_2729_);
v_a_2731_ = lean_ctor_get(v_a_2730_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_a_2730_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2733_ = v_a_2730_;
v_isShared_2734_ = v_isSharedCheck_2744_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v_a_2730_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2744_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2735_; lean_object* v___x_2737_; 
v___x_2735_ = l_Lean_Name_toString(v_k_2724_, v_anyUnlocated_2728_);
lean_inc(v_fst_2720_);
if (v_isShared_2734_ == 0)
{
lean_ctor_set_tag(v___x_2733_, 0);
lean_ctor_set(v___x_2733_, 0, v_fst_2720_);
v___x_2737_ = v___x_2733_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_fst_2720_);
v___x_2737_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
double v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2738_ = lean_float_of_nat(v_v_2725_);
v___x_2739_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_2739_, 0, v___x_2738_);
v___x_2740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2735_);
lean_ctor_set(v___x_2740_, 1, v___x_2737_);
lean_ctor_set(v___x_2740_, 2, v___x_2739_);
v___x_2741_ = lean_array_push(v_a_2731_, v___x_2740_);
v_init_2721_ = v___x_2741_;
v_x_2722_ = v_r_2727_;
goto _start;
}
}
}
else
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
lean_dec(v_fst_2720_);
v___x_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2745_, 0, v_init_2721_);
v___x_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2745_);
return v___x_2746_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3___boxed(lean_object* v_fst_2747_, lean_object* v_init_2748_, lean_object* v_x_2749_, lean_object* v___y_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_fst_2747_, v_init_2748_, v_x_2749_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(lean_object* v_t_2752_, lean_object* v_k_2753_, lean_object* v_fallback_2754_){
_start:
{
if (lean_obj_tag(v_t_2752_) == 0)
{
lean_object* v_k_2755_; lean_object* v_v_2756_; lean_object* v_l_2757_; lean_object* v_r_2758_; uint8_t v___x_2759_; 
v_k_2755_ = lean_ctor_get(v_t_2752_, 1);
v_v_2756_ = lean_ctor_get(v_t_2752_, 2);
v_l_2757_ = lean_ctor_get(v_t_2752_, 3);
v_r_2758_ = lean_ctor_get(v_t_2752_, 4);
v___x_2759_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2753_, v_k_2755_);
switch(v___x_2759_)
{
case 0:
{
v_t_2752_ = v_l_2757_;
goto _start;
}
case 1:
{
lean_inc(v_v_2756_);
return v_v_2756_;
}
default: 
{
v_t_2752_ = v_r_2758_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_2754_);
return v_fallback_2754_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg___boxed(lean_object* v_t_2762_, lean_object* v_k_2763_, lean_object* v_fallback_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(v_t_2762_, v_k_2763_, v_fallback_2764_);
lean_dec(v_fallback_2764_);
lean_dec(v_k_2763_);
lean_dec(v_t_2762_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(lean_object* v_as_2766_, size_t v_i_2767_, size_t v_stop_2768_, lean_object* v_b_2769_){
_start:
{
uint8_t v___x_2770_; 
v___x_2770_ = lean_usize_dec_eq(v_i_2767_, v_stop_2768_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; lean_object* v_linter_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; size_t v___x_2778_; size_t v___x_2779_; 
v___x_2771_ = lean_array_uget_borrowed(v_as_2766_, v_i_2767_);
v_linter_2772_ = lean_ctor_get(v___x_2771_, 0);
v___x_2773_ = lean_unsigned_to_nat(0u);
v___x_2774_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(v_b_2769_, v_linter_2772_, v___x_2773_);
v___x_2775_ = lean_unsigned_to_nat(1u);
v___x_2776_ = lean_nat_add(v___x_2774_, v___x_2775_);
lean_dec(v___x_2774_);
lean_inc(v_linter_2772_);
v___x_2777_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_linter_2772_, v___x_2776_, v_b_2769_);
v___x_2778_ = ((size_t)1ULL);
v___x_2779_ = lean_usize_add(v_i_2767_, v___x_2778_);
v_i_2767_ = v___x_2779_;
v_b_2769_ = v___x_2777_;
goto _start;
}
else
{
return v_b_2769_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4___boxed(lean_object* v_as_2781_, lean_object* v_i_2782_, lean_object* v_stop_2783_, lean_object* v_b_2784_){
_start:
{
size_t v_i_boxed_2785_; size_t v_stop_boxed_2786_; lean_object* v_res_2787_; 
v_i_boxed_2785_ = lean_unbox_usize(v_i_2782_);
lean_dec(v_i_2782_);
v_stop_boxed_2786_ = lean_unbox_usize(v_stop_2783_);
lean_dec(v_stop_2783_);
v_res_2787_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(v_as_2781_, v_i_boxed_2785_, v_stop_boxed_2786_, v_b_2784_);
lean_dec_ref(v_as_2781_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(lean_object* v_as_2788_, size_t v_sz_2789_, size_t v_i_2790_, lean_object* v_b_2791_){
_start:
{
lean_object* v_a_2794_; uint8_t v___x_2798_; 
v___x_2798_ = lean_usize_dec_lt(v_i_2790_, v_sz_2789_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2799_, 0, v_b_2791_);
return v___x_2799_;
}
else
{
lean_object* v_a_2800_; lean_object* v_fst_2801_; lean_object* v_snd_2802_; lean_object* v___y_2804_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; uint8_t v___x_2819_; 
v_a_2800_ = lean_array_uget_borrowed(v_as_2788_, v_i_2790_);
v_fst_2801_ = lean_ctor_get(v_a_2800_, 0);
v_snd_2802_ = lean_ctor_get(v_a_2800_, 1);
v___x_2816_ = lean_box(1);
v___x_2817_ = lean_unsigned_to_nat(0u);
v___x_2818_ = lean_array_get_size(v_snd_2802_);
v___x_2819_ = lean_nat_dec_lt(v___x_2817_, v___x_2818_);
if (v___x_2819_ == 0)
{
v___y_2804_ = v___x_2816_;
goto v___jp_2803_;
}
else
{
size_t v___x_2820_; size_t v___x_2821_; lean_object* v___x_2822_; 
v___x_2820_ = ((size_t)0ULL);
v___x_2821_ = lean_usize_of_nat(v___x_2818_);
v___x_2822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__4(v_snd_2802_, v___x_2820_, v___x_2821_, v___x_2816_);
v___y_2804_ = v___x_2822_;
goto v___jp_2803_;
}
v___jp_2803_:
{
lean_object* v___x_2805_; 
lean_inc(v_fst_2801_);
v___x_2805_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__3(v_fst_2801_, v_b_2791_, v___y_2804_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v_a_2807_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
v_a_2807_ = lean_ctor_get(v_a_2806_, 0);
lean_inc(v_a_2807_);
lean_dec(v_a_2806_);
v_a_2794_ = v_a_2807_;
goto v___jp_2793_;
}
else
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
v_a_2808_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2805_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2805_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
}
v___jp_2793_:
{
size_t v___x_2795_; size_t v___x_2796_; 
v___x_2795_ = ((size_t)1ULL);
v___x_2796_ = lean_usize_add(v_i_2790_, v___x_2795_);
v_i_2790_ = v___x_2796_;
v_b_2791_ = v_a_2794_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8___boxed(lean_object* v_as_2823_, lean_object* v_sz_2824_, lean_object* v_i_2825_, lean_object* v_b_2826_, lean_object* v___y_2827_){
_start:
{
size_t v_sz_boxed_2828_; size_t v_i_boxed_2829_; lean_object* v_res_2830_; 
v_sz_boxed_2828_ = lean_unbox_usize(v_sz_2824_);
lean_dec(v_sz_2824_);
v_i_boxed_2829_ = lean_unbox_usize(v_i_2825_);
lean_dec(v_i_2825_);
v_res_2830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(v_as_2823_, v_sz_boxed_2828_, v_i_boxed_2829_, v_b_2826_);
lean_dec_ref(v_as_2823_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(lean_object* v_fst_2834_, lean_object* v_as_2835_, size_t v_sz_2836_, size_t v_i_2837_, lean_object* v_b_2838_){
_start:
{
lean_object* v_a_2841_; uint8_t v_anyUnlocated_2845_; 
v_anyUnlocated_2845_ = lean_usize_dec_lt(v_i_2837_, v_sz_2836_);
if (v_anyUnlocated_2845_ == 0)
{
lean_object* v___x_2846_; 
lean_dec(v_fst_2834_);
v___x_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2846_, 0, v_b_2838_);
return v___x_2846_;
}
else
{
lean_object* v_fst_2847_; lean_object* v_snd_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2885_; 
v_fst_2847_ = lean_ctor_get(v_b_2838_, 0);
v_snd_2848_ = lean_ctor_get(v_b_2838_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_b_2838_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2850_ = v_b_2838_;
v_isShared_2851_ = v_isSharedCheck_2885_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_snd_2848_);
lean_inc(v_fst_2847_);
lean_dec(v_b_2838_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2885_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v_a_2852_; lean_object* v_position_x3f_2853_; 
v_a_2852_ = lean_array_uget_borrowed(v_as_2835_, v_i_2837_);
v_position_x3f_2853_ = lean_ctor_get(v_a_2852_, 2);
if (lean_obj_tag(v_position_x3f_2853_) == 0)
{
lean_object* v_linter_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
lean_dec(v_snd_2848_);
v_linter_2854_ = lean_ctor_get(v_a_2852_, 0);
v___x_2855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__0));
lean_inc(v_linter_2854_);
v___x_2856_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_linter_2854_, v_anyUnlocated_2845_);
v___x_2857_ = lean_string_append(v___x_2855_, v___x_2856_);
lean_dec_ref(v___x_2856_);
v___x_2858_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__1));
v___x_2859_ = lean_string_append(v___x_2857_, v___x_2858_);
lean_inc(v_fst_2834_);
v___x_2860_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2834_, v_anyUnlocated_2845_);
v___x_2861_ = lean_string_append(v___x_2859_, v___x_2860_);
lean_dec_ref(v___x_2860_);
v___x_2862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___closed__2));
v___x_2863_ = lean_string_append(v___x_2861_, v___x_2862_);
v___x_2864_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_2863_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v___x_2865_; lean_object* v___x_2867_; 
lean_dec_ref_known(v___x_2864_, 1);
v___x_2865_ = lean_box(v_anyUnlocated_2845_);
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 1, v___x_2865_);
v___x_2867_ = v___x_2850_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_fst_2847_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v___x_2865_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
v_a_2841_ = v___x_2867_;
goto v___jp_2840_;
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_del_object(v___x_2850_);
lean_dec(v_fst_2847_);
lean_dec(v_fst_2834_);
v_a_2869_ = lean_ctor_get(v___x_2864_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2864_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2864_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2864_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
else
{
lean_object* v_linter_2877_; lean_object* v_file_2878_; lean_object* v_val_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2883_; 
v_linter_2877_ = lean_ctor_get(v_a_2852_, 0);
v_file_2878_ = lean_ctor_get(v_a_2852_, 3);
v_val_2879_ = lean_ctor_get(v_position_x3f_2853_, 0);
lean_inc(v_linter_2877_);
lean_inc(v_val_2879_);
lean_inc_ref(v_file_2878_);
v___x_2880_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2880_, 0, v_file_2878_);
lean_ctor_set(v___x_2880_, 1, v_val_2879_);
lean_ctor_set(v___x_2880_, 2, v_linter_2877_);
v___x_2881_ = lean_array_push(v_fst_2847_, v___x_2880_);
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v___x_2881_);
v___x_2883_ = v___x_2850_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2881_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_snd_2848_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
v_a_2841_ = v___x_2883_;
goto v___jp_2840_;
}
}
}
}
v___jp_2840_:
{
size_t v___x_2842_; size_t v___x_2843_; 
v___x_2842_ = ((size_t)1ULL);
v___x_2843_ = lean_usize_add(v_i_2837_, v___x_2842_);
v_i_2837_ = v___x_2843_;
v_b_2838_ = v_a_2841_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2___boxed(lean_object* v_fst_2886_, lean_object* v_as_2887_, lean_object* v_sz_2888_, lean_object* v_i_2889_, lean_object* v_b_2890_, lean_object* v___y_2891_){
_start:
{
size_t v_sz_boxed_2892_; size_t v_i_boxed_2893_; lean_object* v_res_2894_; 
v_sz_boxed_2892_ = lean_unbox_usize(v_sz_2888_);
lean_dec(v_sz_2888_);
v_i_boxed_2893_ = lean_unbox_usize(v_i_2889_);
lean_dec(v_i_2889_);
v_res_2894_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(v_fst_2886_, v_as_2887_, v_sz_boxed_2892_, v_i_boxed_2893_, v_b_2890_);
lean_dec_ref(v_as_2887_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(lean_object* v_as_2895_, size_t v_sz_2896_, size_t v_i_2897_, lean_object* v_b_2898_){
_start:
{
uint8_t v___x_2900_; 
v___x_2900_ = lean_usize_dec_lt(v_i_2897_, v_sz_2896_);
if (v___x_2900_ == 0)
{
lean_object* v___x_2901_; 
v___x_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2901_, 0, v_b_2898_);
return v___x_2901_;
}
else
{
lean_object* v_a_2902_; lean_object* v_fst_2903_; lean_object* v_snd_2904_; lean_object* v_fst_2905_; lean_object* v_snd_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2929_; 
v_a_2902_ = lean_array_uget_borrowed(v_as_2895_, v_i_2897_);
v_fst_2903_ = lean_ctor_get(v_a_2902_, 0);
v_snd_2904_ = lean_ctor_get(v_a_2902_, 1);
v_fst_2905_ = lean_ctor_get(v_b_2898_, 0);
v_snd_2906_ = lean_ctor_get(v_b_2898_, 1);
v_isSharedCheck_2929_ = !lean_is_exclusive(v_b_2898_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2908_ = v_b_2898_;
v_isShared_2909_ = v_isSharedCheck_2929_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_snd_2906_);
lean_inc(v_fst_2905_);
lean_dec(v_b_2898_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2929_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_fst_2905_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_snd_2906_);
v___x_2911_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
size_t v_sz_2912_; size_t v___x_2913_; lean_object* v___x_2914_; 
v_sz_2912_ = lean_array_size(v_snd_2904_);
v___x_2913_ = ((size_t)0ULL);
lean_inc(v_fst_2903_);
v___x_2914_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__2(v_fst_2903_, v_snd_2904_, v_sz_2912_, v___x_2913_, v___x_2911_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; lean_object* v_fst_2916_; lean_object* v_snd_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2927_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2915_);
lean_dec_ref_known(v___x_2914_, 1);
v_fst_2916_ = lean_ctor_get(v_a_2915_, 0);
v_snd_2917_ = lean_ctor_get(v_a_2915_, 1);
v_isSharedCheck_2927_ = !lean_is_exclusive(v_a_2915_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2919_ = v_a_2915_;
v_isShared_2920_ = v_isSharedCheck_2927_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_snd_2917_);
lean_inc(v_fst_2916_);
lean_dec(v_a_2915_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2927_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2920_ == 0)
{
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_fst_2916_);
lean_ctor_set(v_reuseFailAlloc_2926_, 1, v_snd_2917_);
v___x_2922_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
size_t v___x_2923_; size_t v___x_2924_; 
v___x_2923_ = ((size_t)1ULL);
v___x_2924_ = lean_usize_add(v_i_2897_, v___x_2923_);
v_i_2897_ = v___x_2924_;
v_b_2898_ = v___x_2922_;
goto _start;
}
}
}
else
{
return v___x_2914_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7___boxed(lean_object* v_as_2930_, lean_object* v_sz_2931_, lean_object* v_i_2932_, lean_object* v_b_2933_, lean_object* v___y_2934_){
_start:
{
size_t v_sz_boxed_2935_; size_t v_i_boxed_2936_; lean_object* v_res_2937_; 
v_sz_boxed_2935_ = lean_unbox_usize(v_sz_2931_);
lean_dec(v_sz_2931_);
v_i_boxed_2936_ = lean_unbox_usize(v_i_2932_);
lean_dec(v_i_2932_);
v_res_2937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(v_as_2930_, v_sz_boxed_2935_, v_i_boxed_2936_, v_b_2933_);
lean_dec_ref(v_as_2930_);
return v_res_2937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(lean_object* v_as_2938_, size_t v_sz_2939_, size_t v_i_2940_, lean_object* v_b_2941_){
_start:
{
uint8_t v___x_2943_; 
v___x_2943_ = lean_usize_dec_lt(v_i_2940_, v_sz_2939_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2944_, 0, v_b_2941_);
return v___x_2944_;
}
else
{
lean_object* v_a_2945_; lean_object* v_message_2946_; lean_object* v___x_2947_; uint8_t v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v_a_2945_ = lean_array_uget_borrowed(v_as_2938_, v_i_2940_);
v_message_2946_ = lean_ctor_get(v_a_2945_, 1);
v___x_2947_ = lean_box(0);
v___x_2948_ = 0;
lean_inc_ref(v_message_2946_);
v___x_2949_ = l_Lean_SerialMessage_toString(v_message_2946_, v___x_2948_);
v___x_2950_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_2949_);
if (lean_obj_tag(v___x_2950_) == 0)
{
size_t v___x_2951_; size_t v___x_2952_; 
lean_dec_ref_known(v___x_2950_, 1);
v___x_2951_ = ((size_t)1ULL);
v___x_2952_ = lean_usize_add(v_i_2940_, v___x_2951_);
v_i_2940_ = v___x_2952_;
v_b_2941_ = v___x_2947_;
goto _start;
}
else
{
return v___x_2950_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5___boxed(lean_object* v_as_2954_, lean_object* v_sz_2955_, lean_object* v_i_2956_, lean_object* v_b_2957_, lean_object* v___y_2958_){
_start:
{
size_t v_sz_boxed_2959_; size_t v_i_boxed_2960_; lean_object* v_res_2961_; 
v_sz_boxed_2959_ = lean_unbox_usize(v_sz_2955_);
lean_dec(v_sz_2955_);
v_i_boxed_2960_ = lean_unbox_usize(v_i_2956_);
lean_dec(v_i_2956_);
v_res_2961_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(v_as_2954_, v_sz_boxed_2959_, v_i_boxed_2960_, v_b_2957_);
lean_dec_ref(v_as_2954_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(lean_object* v_as_2964_, size_t v_sz_2965_, size_t v_i_2966_, lean_object* v_b_2967_){
_start:
{
uint8_t v___x_2969_; 
v___x_2969_ = lean_usize_dec_lt(v_i_2966_, v_sz_2965_);
if (v___x_2969_ == 0)
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2970_, 0, v_b_2967_);
return v___x_2970_;
}
else
{
lean_object* v_a_2971_; lean_object* v_fst_2972_; lean_object* v_snd_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v_a_2971_ = lean_array_uget_borrowed(v_as_2964_, v_i_2966_);
v_fst_2972_ = lean_ctor_get(v_a_2971_, 0);
v_snd_2973_ = lean_ctor_get(v_a_2971_, 1);
v___x_2974_ = lean_box(0);
v___x_2975_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__0));
lean_inc(v_fst_2972_);
v___x_2976_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_2972_, v___x_2969_);
v___x_2977_ = lean_string_append(v___x_2975_, v___x_2976_);
lean_dec_ref(v___x_2976_);
v___x_2978_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___closed__1));
v___x_2979_ = lean_string_append(v___x_2977_, v___x_2978_);
v___x_2980_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_2979_);
if (lean_obj_tag(v___x_2980_) == 0)
{
size_t v_sz_2981_; size_t v___x_2982_; lean_object* v___x_2983_; 
lean_dec_ref_known(v___x_2980_, 1);
v_sz_2981_ = lean_array_size(v_snd_2973_);
v___x_2982_ = ((size_t)0ULL);
v___x_2983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__5(v_snd_2973_, v_sz_2981_, v___x_2982_, v___x_2974_);
if (lean_obj_tag(v___x_2983_) == 0)
{
size_t v___x_2984_; size_t v___x_2985_; 
lean_dec_ref_known(v___x_2983_, 1);
v___x_2984_ = ((size_t)1ULL);
v___x_2985_ = lean_usize_add(v_i_2966_, v___x_2984_);
v_i_2966_ = v___x_2985_;
v_b_2967_ = v___x_2974_;
goto _start;
}
else
{
return v___x_2983_;
}
}
else
{
return v___x_2980_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6___boxed(lean_object* v_as_2987_, lean_object* v_sz_2988_, lean_object* v_i_2989_, lean_object* v_b_2990_, lean_object* v___y_2991_){
_start:
{
size_t v_sz_boxed_2992_; size_t v_i_boxed_2993_; lean_object* v_res_2994_; 
v_sz_boxed_2992_ = lean_unbox_usize(v_sz_2988_);
lean_dec(v_sz_2988_);
v_i_boxed_2993_ = lean_unbox_usize(v_i_2989_);
lean_dec(v_i_2989_);
v_res_2994_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(v_as_2987_, v_sz_boxed_2992_, v_i_boxed_2993_, v_b_2990_);
lean_dec_ref(v_as_2987_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(lean_object* v_args_2999_, lean_object* v_linterOpts_3000_, lean_object* v_env_3001_, lean_object* v_mod_3002_){
_start:
{
uint8_t v_lintOnly_3004_; uint8_t v_mode_3005_; lean_object* v___y_3007_; uint8_t v___y_3008_; lean_object* v___y_3076_; lean_object* v___x_3082_; lean_object* v_textGroups_3083_; 
v_lintOnly_3004_ = lean_ctor_get_uint8(v_args_2999_, sizeof(void*)*4);
v_mode_3005_ = lean_ctor_get_uint8(v_args_2999_, sizeof(void*)*4 + 1);
v___x_3082_ = l_Lean_Name_getRoot(v_mod_3002_);
v_textGroups_3083_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectTextLints(v_env_3001_, v___x_3082_);
lean_dec(v___x_3082_);
if (v_lintOnly_3004_ == 0)
{
v___y_3076_ = v_textGroups_3083_;
goto v___jp_3075_;
}
else
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3084_ = lean_unsigned_to_nat(0u);
v___x_3085_ = lean_array_get_size(v_textGroups_3083_);
v___x_3086_ = l_Array_filterMapM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__9(v_linterOpts_3000_, v_textGroups_3083_, v___x_3084_, v___x_3085_);
lean_dec_ref(v_textGroups_3083_);
v___y_3076_ = v___x_3086_;
goto v___jp_3075_;
}
v___jp_3006_:
{
switch(v_mode_3005_)
{
case 0:
{
lean_object* v___x_3009_; size_t v_sz_3010_; size_t v___x_3011_; lean_object* v___x_3012_; 
v___x_3009_ = lean_box(0);
v_sz_3010_ = lean_array_size(v___y_3007_);
v___x_3011_ = ((size_t)0ULL);
v___x_3012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__6(v___y_3007_, v_sz_3010_, v___x_3011_, v___x_3009_);
lean_dec_ref(v___y_3007_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3020_; 
v_isSharedCheck_3020_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3020_ == 0)
{
lean_object* v_unused_3021_; 
v_unused_3021_ = lean_ctor_get(v___x_3012_, 0);
lean_dec(v_unused_3021_);
v___x_3014_ = v___x_3012_;
v_isShared_3015_ = v_isSharedCheck_3020_;
goto v_resetjp_3013_;
}
else
{
lean_dec(v___x_3012_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3020_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3016_; lean_object* v___x_3018_; 
v___x_3016_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_3016_, 0, v___y_3008_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v___x_3016_);
v___x_3018_ = v___x_3014_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
else
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3029_; 
v_a_3022_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3024_ = v___x_3012_;
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3012_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3027_; 
if (v_isShared_3025_ == 0)
{
v___x_3027_ = v___x_3024_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3022_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
case 1:
{
lean_object* v___x_3030_; size_t v_sz_3031_; size_t v___x_3032_; lean_object* v___x_3033_; 
v___x_3030_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___closed__0));
v_sz_3031_ = lean_array_size(v___y_3007_);
v___x_3032_ = ((size_t)0ULL);
v___x_3033_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__7(v___y_3007_, v_sz_3031_, v___x_3032_, v___x_3030_);
lean_dec_ref(v___y_3007_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3045_; 
v_a_3034_ = lean_ctor_get(v___x_3033_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3036_ = v___x_3033_;
v_isShared_3037_ = v_isSharedCheck_3045_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3033_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3045_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v_fst_3038_; lean_object* v_snd_3039_; lean_object* v___x_3040_; uint8_t v___x_3041_; lean_object* v___x_3043_; 
v_fst_3038_ = lean_ctor_get(v_a_3034_, 0);
lean_inc(v_fst_3038_);
v_snd_3039_ = lean_ctor_get(v_a_3034_, 1);
lean_inc(v_snd_3039_);
lean_dec(v_a_3034_);
v___x_3040_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_3040_, 0, v_fst_3038_);
v___x_3041_ = lean_unbox(v_snd_3039_);
lean_dec(v_snd_3039_);
lean_ctor_set_uint8(v___x_3040_, sizeof(void*)*1, v___x_3041_);
if (v_isShared_3037_ == 0)
{
lean_ctor_set(v___x_3036_, 0, v___x_3040_);
v___x_3043_ = v___x_3036_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v___x_3040_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
v_a_3046_ = lean_ctor_get(v___x_3033_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3033_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3033_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
default: 
{
lean_object* v_codeQualityEntries_3054_; size_t v_sz_3055_; size_t v___x_3056_; lean_object* v___x_3057_; 
v_codeQualityEntries_3054_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality___closed__0));
v_sz_3055_ = lean_array_size(v___y_3007_);
v___x_3056_ = ((size_t)0ULL);
v___x_3057_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__8(v___y_3007_, v_sz_3055_, v___x_3056_, v_codeQualityEntries_3054_);
lean_dec_ref(v___y_3007_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3066_; 
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3060_ = v___x_3057_;
v_isShared_3061_ = v_isSharedCheck_3066_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_3057_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3066_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3062_; lean_object* v___x_3064_; 
v___x_3062_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3062_, 0, v_a_3058_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 0, v___x_3062_);
v___x_3064_ = v___x_3060_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
v_a_3067_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3057_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3057_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
}
}
v___jp_3075_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; uint8_t v___x_3079_; 
v___x_3077_ = lean_array_get_size(v___y_3076_);
v___x_3078_ = lean_unsigned_to_nat(0u);
v___x_3079_ = lean_nat_dec_eq(v___x_3077_, v___x_3078_);
if (v___x_3079_ == 0)
{
uint8_t v___x_3080_; 
v___x_3080_ = 1;
v___y_3007_ = v___y_3076_;
v___y_3008_ = v___x_3080_;
goto v___jp_3006_;
}
else
{
uint8_t v___x_3081_; 
v___x_3081_ = 0;
v___y_3007_ = v___y_3076_;
v___y_3008_ = v___x_3081_;
goto v___jp_3006_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters___boxed(lean_object* v_args_3087_, lean_object* v_linterOpts_3088_, lean_object* v_env_3089_, lean_object* v_mod_3090_, lean_object* v_a_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(v_args_3087_, v_linterOpts_3088_, v_env_3089_, v_mod_3090_);
lean_dec(v_mod_3090_);
lean_dec_ref(v_env_3089_);
lean_dec_ref(v_linterOpts_3088_);
lean_dec_ref(v_args_3087_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(lean_object* v_00_u03b4_3093_, lean_object* v_t_3094_, lean_object* v_k_3095_, lean_object* v_fallback_3096_){
_start:
{
lean_object* v___x_3097_; 
v___x_3097_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___redArg(v_t_3094_, v_k_3095_, v_fallback_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0___boxed(lean_object* v_00_u03b4_3098_, lean_object* v_t_3099_, lean_object* v_k_3100_, lean_object* v_fallback_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters_spec__0(v_00_u03b4_3098_, v_t_3099_, v_k_3100_, v_fallback_3101_);
lean_dec(v_fallback_3101_);
lean_dec(v_k_3100_);
lean_dec(v_t_3099_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(uint8_t v___y_3103_, lean_object* v_____r_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_3108_, 0, v___y_3103_);
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0___boxed(lean_object* v___y_3110_, lean_object* v_____r_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_){
_start:
{
uint8_t v___y_17063__boxed_3115_; lean_object* v_res_3116_; 
v___y_17063__boxed_3115_ = lean_unbox(v___y_3110_);
v_res_3116_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_17063__boxed_3115_, v_____r_3111_, v___y_3112_, v___y_3113_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
return v_res_3116_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0(void){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3117_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__15);
v___x_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
return v___x_3118_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1(void){
_start:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3119_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0);
v___x_3120_ = lean_unsigned_to_nat(0u);
v___x_3121_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
lean_ctor_set(v___x_3121_, 2, v___x_3120_);
lean_ctor_set(v___x_3121_, 3, v___x_3120_);
lean_ctor_set(v___x_3121_, 4, v___x_3119_);
lean_ctor_set(v___x_3121_, 5, v___x_3119_);
lean_ctor_set(v___x_3121_, 6, v___x_3119_);
lean_ctor_set(v___x_3121_, 7, v___x_3119_);
lean_ctor_set(v___x_3121_, 8, v___x_3119_);
lean_ctor_set(v___x_3121_, 9, v___x_3119_);
lean_ctor_set(v___x_3121_, 10, v___x_3119_);
return v___x_3121_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2(void){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3122_ = lean_unsigned_to_nat(32u);
v___x_3123_ = lean_mk_empty_array_with_capacity(v___x_3122_);
v___x_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
return v___x_3124_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3(void){
_start:
{
size_t v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3125_ = ((size_t)5ULL);
v___x_3126_ = lean_unsigned_to_nat(0u);
v___x_3127_ = lean_unsigned_to_nat(32u);
v___x_3128_ = lean_mk_empty_array_with_capacity(v___x_3127_);
v___x_3129_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__2);
v___x_3130_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
lean_ctor_set(v___x_3130_, 1, v___x_3128_);
lean_ctor_set(v___x_3130_, 2, v___x_3126_);
lean_ctor_set(v___x_3130_, 3, v___x_3126_);
lean_ctor_set_usize(v___x_3130_, 4, v___x_3125_);
return v___x_3130_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4(void){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3131_ = lean_box(1);
v___x_3132_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__3);
v___x_3133_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__0);
v___x_3134_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
lean_ctor_set(v___x_3134_, 1, v___x_3132_);
lean_ctor_set(v___x_3134_, 2, v___x_3131_);
return v___x_3134_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(lean_object* v_msgData_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_){
_start:
{
lean_object* v___x_3139_; lean_object* v_toCold_3140_; lean_object* v_env_3141_; lean_object* v_options_3142_; uint8_t v___x_3143_; lean_object* v_env_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3139_ = lean_st_ref_get(v___y_3137_);
v_toCold_3140_ = lean_ctor_get(v___y_3136_, 0);
v_env_3141_ = lean_ctor_get(v___x_3139_, 0);
lean_inc_ref(v_env_3141_);
lean_dec(v___x_3139_);
v_options_3142_ = lean_ctor_get(v_toCold_3140_, 2);
v___x_3143_ = 0;
v_env_3144_ = l_Lean_Environment_setRecordingDeps(v_env_3141_, v___x_3143_);
v___x_3145_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1);
v___x_3146_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4);
lean_inc_ref(v_options_3142_);
v___x_3147_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3147_, 0, v_env_3144_);
lean_ctor_set(v___x_3147_, 1, v___x_3145_);
lean_ctor_set(v___x_3147_, 2, v___x_3146_);
lean_ctor_set(v___x_3147_, 3, v_options_3142_);
v___x_3148_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
lean_ctor_set(v___x_3148_, 1, v_msgData_3135_);
v___x_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___boxed(lean_object* v_msgData_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(v_msgData_3150_, v___y_3151_, v___y_3152_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(lean_object* v_msg_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
lean_object* v_ref_3159_; lean_object* v___x_3160_; lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3169_; 
v_ref_3159_ = lean_ctor_get(v___y_3156_, 2);
v___x_3160_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18(v_msg_3155_, v___y_3156_, v___y_3157_);
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3163_ = v___x_3160_;
v_isShared_3164_ = v_isSharedCheck_3169_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3160_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3169_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3165_; lean_object* v___x_3167_; 
lean_inc(v_ref_3159_);
v___x_3165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3165_, 0, v_ref_3159_);
lean_ctor_set(v___x_3165_, 1, v_a_3161_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set_tag(v___x_3163_, 1);
lean_ctor_set(v___x_3163_, 0, v___x_3165_);
v___x_3167_ = v___x_3163_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v___x_3165_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg___boxed(lean_object* v_msg_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_){
_start:
{
lean_object* v_res_3174_; 
v_res_3174_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_3170_, v___y_3171_, v___y_3172_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(lean_object* v_ref_3175_, lean_object* v_msg_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v_toCold_3180_; lean_object* v_currRecDepth_3181_; lean_object* v_ref_3182_; uint16_t v_optionFlags_3183_; uint8_t v_suppressElabErrors_3184_; uint8_t v_checkDeprecated_3185_; uint8_t v_isRecordingDeps_3186_; lean_object* v_ref_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v_toCold_3180_ = lean_ctor_get(v___y_3177_, 0);
v_currRecDepth_3181_ = lean_ctor_get(v___y_3177_, 1);
v_ref_3182_ = lean_ctor_get(v___y_3177_, 2);
v_optionFlags_3183_ = lean_ctor_get_uint16(v___y_3177_, sizeof(void*)*3);
v_suppressElabErrors_3184_ = lean_ctor_get_uint8(v___y_3177_, sizeof(void*)*3 + 2);
v_checkDeprecated_3185_ = lean_ctor_get_uint8(v___y_3177_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3186_ = lean_ctor_get_uint8(v___y_3177_, sizeof(void*)*3 + 4);
v_ref_3187_ = l_Lean_replaceRef(v_ref_3175_, v_ref_3182_);
lean_inc(v_currRecDepth_3181_);
lean_inc_ref(v_toCold_3180_);
v___x_3188_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3188_, 0, v_toCold_3180_);
lean_ctor_set(v___x_3188_, 1, v_currRecDepth_3181_);
lean_ctor_set(v___x_3188_, 2, v_ref_3187_);
lean_ctor_set_uint16(v___x_3188_, sizeof(void*)*3, v_optionFlags_3183_);
lean_ctor_set_uint8(v___x_3188_, sizeof(void*)*3 + 2, v_suppressElabErrors_3184_);
lean_ctor_set_uint8(v___x_3188_, sizeof(void*)*3 + 3, v_checkDeprecated_3185_);
lean_ctor_set_uint8(v___x_3188_, sizeof(void*)*3 + 4, v_isRecordingDeps_3186_);
v___x_3189_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_3176_, v___x_3188_, v___y_3178_);
lean_dec_ref_known(v___x_3188_, 3);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg___boxed(lean_object* v_ref_3190_, lean_object* v_msg_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_3190_, v_msg_3191_, v___y_3192_, v___y_3193_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec(v_ref_3190_);
return v_res_3195_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3197_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__0));
v___x_3198_ = l_Lean_stringToMessageData(v___x_3197_);
return v___x_3198_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3200_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__2));
v___x_3201_ = l_Lean_stringToMessageData(v___x_3200_);
return v___x_3201_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5(void){
_start:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3203_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__4));
v___x_3204_ = l_Lean_stringToMessageData(v___x_3203_);
return v___x_3204_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7(void){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3206_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__6));
v___x_3207_ = l_Lean_stringToMessageData(v___x_3206_);
return v___x_3207_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9(void){
_start:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3209_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__8));
v___x_3210_ = l_Lean_stringToMessageData(v___x_3209_);
return v___x_3210_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11(void){
_start:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__10));
v___x_3213_ = l_Lean_stringToMessageData(v___x_3212_);
return v___x_3213_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3215_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__12));
v___x_3216_ = l_Lean_stringToMessageData(v___x_3215_);
return v___x_3216_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(lean_object* v_msg_3217_, lean_object* v_declHint_3218_, lean_object* v___y_3219_){
_start:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v_env_3223_; uint8_t v___x_3224_; 
v___x_3221_ = lean_box(0);
v___x_3222_ = lean_st_ref_get(v___y_3219_);
v_env_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc_ref(v_env_3223_);
lean_dec(v___x_3222_);
v___x_3224_ = l_Lean_Name_isAnonymous(v_declHint_3218_);
if (v___x_3224_ == 0)
{
uint8_t v_isExporting_3225_; 
v_isExporting_3225_ = lean_ctor_get_uint8(v_env_3223_, sizeof(void*)*13);
if (v_isExporting_3225_ == 0)
{
lean_object* v___x_3226_; 
lean_dec_ref(v_env_3223_);
lean_dec(v_declHint_3218_);
v___x_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3226_, 0, v_msg_3217_);
return v___x_3226_;
}
else
{
lean_object* v___x_3227_; uint8_t v___x_3228_; 
lean_inc_ref(v_env_3223_);
v___x_3227_ = l_Lean_Environment_setExporting(v_env_3223_, v___x_3224_);
lean_inc(v_declHint_3218_);
lean_inc_ref(v___x_3227_);
v___x_3228_ = l_Lean_Environment_contains(v___x_3227_, v_declHint_3218_, v_isExporting_3225_);
if (v___x_3228_ == 0)
{
lean_object* v___x_3229_; 
lean_dec_ref(v___x_3227_);
lean_dec_ref(v_env_3223_);
lean_dec(v_declHint_3218_);
v___x_3229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3229_, 0, v_msg_3217_);
return v___x_3229_;
}
else
{
lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v_c_3235_; lean_object* v___x_3236_; 
v___x_3230_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__1);
v___x_3231_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17_spec__18___closed__4);
v___x_3232_ = l_Lean_Options_empty;
lean_inc_ref(v___x_3227_);
v___x_3233_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3227_);
lean_ctor_set(v___x_3233_, 1, v___x_3230_);
lean_ctor_set(v___x_3233_, 2, v___x_3231_);
lean_ctor_set(v___x_3233_, 3, v___x_3232_);
lean_inc(v_declHint_3218_);
v___x_3234_ = l_Lean_MessageData_ofConstName(v_declHint_3218_, v___x_3224_);
v_c_3235_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3235_, 0, v___x_3233_);
lean_ctor_set(v_c_3235_, 1, v___x_3234_);
v___x_3236_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_3227_, v_declHint_3218_);
lean_dec_ref(v___x_3227_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
lean_dec_ref(v_env_3223_);
lean_dec(v_declHint_3218_);
v___x_3237_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1);
v___x_3238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3237_);
lean_ctor_set(v___x_3238_, 1, v_c_3235_);
v___x_3239_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__3);
v___x_3240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3238_);
lean_ctor_set(v___x_3240_, 1, v___x_3239_);
v___x_3241_ = l_Lean_MessageData_note(v___x_3240_);
v___x_3242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3242_, 0, v_msg_3217_);
lean_ctor_set(v___x_3242_, 1, v___x_3241_);
v___x_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
return v___x_3243_;
}
else
{
lean_object* v_val_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3278_; 
v_val_3244_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3246_ = v___x_3236_;
v_isShared_3247_ = v_isSharedCheck_3278_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_val_3244_);
lean_dec(v___x_3236_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3278_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3248_; lean_object* v_moduleNames_3249_; lean_object* v_mod_3250_; uint8_t v___x_3251_; 
v___x_3248_ = l_Lean_Environment_header(v_env_3223_);
lean_dec_ref(v_env_3223_);
v_moduleNames_3249_ = lean_ctor_get(v___x_3248_, 4);
lean_inc_ref(v_moduleNames_3249_);
lean_dec_ref(v___x_3248_);
v_mod_3250_ = lean_array_get(v___x_3221_, v_moduleNames_3249_, v_val_3244_);
lean_dec(v_val_3244_);
lean_dec_ref(v_moduleNames_3249_);
v___x_3251_ = l_Lean_isPrivateName(v_declHint_3218_);
lean_dec(v_declHint_3218_);
if (v___x_3251_ == 0)
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3263_; 
v___x_3252_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__5);
v___x_3253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
lean_ctor_set(v___x_3253_, 1, v_c_3235_);
v___x_3254_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__7);
v___x_3255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3253_);
lean_ctor_set(v___x_3255_, 1, v___x_3254_);
v___x_3256_ = l_Lean_MessageData_ofName(v_mod_3250_);
v___x_3257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3255_);
lean_ctor_set(v___x_3257_, 1, v___x_3256_);
v___x_3258_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__9);
v___x_3259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3257_);
lean_ctor_set(v___x_3259_, 1, v___x_3258_);
v___x_3260_ = l_Lean_MessageData_note(v___x_3259_);
v___x_3261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3261_, 0, v_msg_3217_);
lean_ctor_set(v___x_3261_, 1, v___x_3260_);
if (v_isShared_3247_ == 0)
{
lean_ctor_set_tag(v___x_3246_, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3261_);
v___x_3263_ = v___x_3246_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v___x_3261_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
else
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3276_; 
v___x_3265_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__1);
v___x_3266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
lean_ctor_set(v___x_3266_, 1, v_c_3235_);
v___x_3267_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__11);
v___x_3268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3266_);
lean_ctor_set(v___x_3268_, 1, v___x_3267_);
v___x_3269_ = l_Lean_MessageData_ofName(v_mod_3250_);
v___x_3270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3268_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___closed__13);
v___x_3272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3270_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = l_Lean_MessageData_note(v___x_3272_);
v___x_3274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3274_, 0, v_msg_3217_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
if (v_isShared_3247_ == 0)
{
lean_ctor_set_tag(v___x_3246_, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3274_);
v___x_3276_ = v___x_3246_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v___x_3274_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3279_; 
lean_dec_ref(v_env_3223_);
lean_dec(v_declHint_3218_);
v___x_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3279_, 0, v_msg_3217_);
return v___x_3279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg___boxed(lean_object* v_msg_3280_, lean_object* v_declHint_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_3280_, v_declHint_3281_, v___y_3282_);
lean_dec(v___y_3282_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(lean_object* v_msg_3285_, lean_object* v_declHint_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_){
_start:
{
lean_object* v___x_3290_; lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3300_; 
v___x_3290_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_3285_, v_declHint_3286_, v___y_3288_);
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3293_ = v___x_3290_;
v_isShared_3294_ = v_isSharedCheck_3300_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3290_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3300_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3298_; 
v___x_3295_ = l_Lean_unknownIdentifierMessageTag;
v___x_3296_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
lean_ctor_set(v___x_3296_, 1, v_a_3291_);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v___x_3296_);
v___x_3298_ = v___x_3293_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v___x_3296_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14___boxed(lean_object* v_msg_3301_, lean_object* v_declHint_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_){
_start:
{
lean_object* v_res_3306_; 
v_res_3306_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(v_msg_3301_, v_declHint_3302_, v___y_3303_, v___y_3304_);
lean_dec(v___y_3304_);
lean_dec_ref(v___y_3303_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(lean_object* v_ref_3307_, lean_object* v_msg_3308_, lean_object* v_declHint_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_){
_start:
{
lean_object* v___x_3313_; lean_object* v_a_3314_; lean_object* v___x_3315_; 
v___x_3313_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14(v_msg_3308_, v_declHint_3309_, v___y_3310_, v___y_3311_);
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3314_);
lean_dec_ref(v___x_3313_);
v___x_3315_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_3307_, v_a_3314_, v___y_3310_, v___y_3311_);
return v___x_3315_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg___boxed(lean_object* v_ref_3316_, lean_object* v_msg_3317_, lean_object* v_declHint_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_3316_, v_msg_3317_, v_declHint_3318_, v___y_3319_, v___y_3320_);
lean_dec(v___y_3320_);
lean_dec_ref(v___y_3319_);
lean_dec(v_ref_3316_);
return v_res_3322_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3324_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__0));
v___x_3325_ = l_Lean_stringToMessageData(v___x_3324_);
return v___x_3325_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; 
v___x_3326_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_describeSite___closed__1));
v___x_3327_ = l_Lean_stringToMessageData(v___x_3326_);
return v___x_3327_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(lean_object* v_ref_3328_, lean_object* v_constName_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
lean_object* v___x_3333_; uint8_t v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3333_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__1);
v___x_3334_ = 0;
lean_inc(v_constName_3329_);
v___x_3335_ = l_Lean_MessageData_ofConstName(v_constName_3329_, v___x_3334_);
v___x_3336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3333_);
lean_ctor_set(v___x_3336_, 1, v___x_3335_);
v___x_3337_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___closed__2);
v___x_3338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3336_);
lean_ctor_set(v___x_3338_, 1, v___x_3337_);
v___x_3339_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_3328_, v___x_3338_, v_constName_3329_, v___y_3330_, v___y_3331_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg___boxed(lean_object* v_ref_3340_, lean_object* v_constName_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_3340_, v_constName_3341_, v___y_3342_, v___y_3343_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v_ref_3340_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_){
_start:
{
lean_object* v_ref_3350_; lean_object* v___x_3351_; 
v_ref_3350_ = lean_ctor_get(v___y_3347_, 2);
v___x_3351_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_3350_, v_constName_3346_, v___y_3347_, v___y_3348_);
return v___x_3351_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_3352_, v___y_3353_, v___y_3354_);
lean_dec(v___y_3354_);
lean_dec_ref(v___y_3353_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(lean_object* v_constName_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_){
_start:
{
lean_object* v___x_3361_; lean_object* v_env_3362_; uint8_t v___x_3363_; lean_object* v___x_3364_; 
v___x_3361_ = lean_st_ref_get(v___y_3359_);
v_env_3362_ = lean_ctor_get(v___x_3361_, 0);
lean_inc_ref(v_env_3362_);
lean_dec(v___x_3361_);
v___x_3363_ = 0;
lean_inc(v_constName_3357_);
v___x_3364_ = l_Lean_Environment_find_x3f(v_env_3362_, v_constName_3357_, v___x_3363_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v___x_3365_; 
v___x_3365_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_3357_, v___y_3358_, v___y_3359_);
return v___x_3365_;
}
else
{
lean_object* v_val_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3373_; 
lean_dec(v_constName_3357_);
v_val_3366_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3368_ = v___x_3364_;
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_val_3366_);
lean_dec(v___x_3364_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
if (v_isShared_3369_ == 0)
{
lean_ctor_set_tag(v___x_3368_, 0);
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_val_3366_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0___boxed(lean_object* v_constName_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(v_constName_3374_, v___y_3375_, v___y_3376_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(lean_object* v_declName_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3383_ = lean_box(0);
lean_inc(v_declName_3379_);
v___x_3384_ = l_Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0(v_declName_3379_, v___y_3380_, v___y_3381_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3410_; 
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v___x_3384_, 0);
lean_dec(v_unused_3411_);
v___x_3386_ = v___x_3384_;
v_isShared_3387_ = v_isSharedCheck_3410_;
goto v_resetjp_3385_;
}
else
{
lean_dec(v___x_3384_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3410_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3388_; lean_object* v_env_3389_; lean_object* v___x_3390_; 
v___x_3388_ = lean_st_ref_get(v___y_3381_);
v_env_3389_ = lean_ctor_get(v___x_3388_, 0);
lean_inc_ref(v_env_3389_);
lean_dec(v___x_3388_);
v___x_3390_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3389_, v_declName_3379_);
lean_dec(v_declName_3379_);
lean_dec_ref(v_env_3389_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v___x_3391_; lean_object* v___x_3393_; 
v___x_3391_ = lean_box(0);
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3391_);
v___x_3393_ = v___x_3386_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v___x_3391_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
else
{
lean_object* v_val_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3409_; 
v_val_3395_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3397_ = v___x_3390_;
v_isShared_3398_ = v_isSharedCheck_3409_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_val_3395_);
lean_dec(v___x_3390_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3409_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3399_; lean_object* v_env_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3404_; 
v___x_3399_ = lean_st_ref_get(v___y_3381_);
v_env_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc_ref(v_env_3400_);
lean_dec(v___x_3399_);
v___x_3401_ = l_Lean_Environment_allImportedModuleNames(v_env_3400_);
lean_dec_ref(v_env_3400_);
v___x_3402_ = lean_array_get(v___x_3383_, v___x_3401_, v_val_3395_);
lean_dec(v_val_3395_);
lean_dec_ref(v___x_3401_);
if (v_isShared_3398_ == 0)
{
lean_ctor_set(v___x_3397_, 0, v___x_3402_);
v___x_3404_ = v___x_3397_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
lean_object* v___x_3406_; 
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3404_);
v___x_3406_ = v___x_3386_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v___x_3404_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
return v___x_3406_;
}
}
}
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec(v_declName_3379_);
v_a_3412_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3384_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3384_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0___boxed(lean_object* v_declName_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_declName_3420_, v___y_3421_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(lean_object* v_fst_3426_, lean_object* v_sp_3427_, lean_object* v___x_3428_, lean_object* v_as_3429_, size_t v_sz_3430_, size_t v_i_3431_, lean_object* v_b_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_){
_start:
{
lean_object* v_a_3437_; uint8_t v___x_3441_; 
v___x_3441_ = lean_usize_dec_lt(v_i_3431_, v_sz_3430_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; 
lean_dec(v___x_3428_);
lean_dec(v_sp_3427_);
lean_dec_ref(v_fst_3426_);
v___x_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3442_, 0, v_b_3432_);
return v___x_3442_;
}
else
{
lean_object* v_a_3443_; lean_object* v_fst_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3572_; 
v_a_3443_ = lean_array_uget(v_as_3429_, v_i_3431_);
v_fst_3444_ = lean_ctor_get(v_a_3443_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v_a_3443_);
if (v_isSharedCheck_3572_ == 0)
{
lean_object* v_unused_3573_; 
v_unused_3573_ = lean_ctor_get(v_a_3443_, 1);
lean_dec(v_unused_3573_);
v___x_3446_ = v_a_3443_;
v_isShared_3447_ = v_isSharedCheck_3572_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_fst_3444_);
lean_dec(v_a_3443_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3572_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v_fst_3448_; lean_object* v_snd_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3571_; 
v_fst_3448_ = lean_ctor_get(v_b_3432_, 0);
v_snd_3449_ = lean_ctor_get(v_b_3432_, 1);
v_isSharedCheck_3571_ = !lean_is_exclusive(v_b_3432_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3451_ = v_b_3432_;
v_isShared_3452_ = v_isSharedCheck_3571_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_snd_3449_);
lean_inc(v_fst_3448_);
lean_dec(v_b_3432_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3571_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3453_; 
lean_inc(v_fst_3444_);
v___x_3453_ = l_Lean_findDeclarationRanges_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_deferredSitePos_x3f_spec__0(v_fst_3444_, v___y_3433_, v___y_3434_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v_a_3454_; 
v_a_3454_ = lean_ctor_get(v___x_3453_, 0);
lean_inc(v_a_3454_);
lean_dec_ref_known(v___x_3453_, 1);
if (lean_obj_tag(v_a_3454_) == 0)
{
lean_object* v_optName_3455_; lean_object* v_ref_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
lean_dec(v_snd_3449_);
v_optName_3455_ = lean_ctor_get(v_fst_3426_, 1);
v_ref_3456_ = lean_ctor_get(v___y_3433_, 2);
v___x_3457_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_3444_, v___x_3441_);
v___x_3458_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___closed__0));
v___x_3459_ = lean_string_append(v___x_3458_, v___x_3457_);
lean_dec_ref(v___x_3457_);
v___x_3460_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__2));
v___x_3461_ = lean_string_append(v___x_3459_, v___x_3460_);
lean_inc(v_optName_3455_);
v___x_3462_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_optName_3455_, v___x_3441_);
v___x_3463_ = lean_string_append(v___x_3461_, v___x_3462_);
lean_dec_ref(v___x_3462_);
v___x_3464_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__3));
v___x_3465_ = lean_string_append(v___x_3463_, v___x_3464_);
v___x_3466_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_3465_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v___x_3467_; lean_object* v___x_3469_; 
lean_dec_ref_known(v___x_3466_, 1);
lean_del_object(v___x_3446_);
v___x_3467_ = lean_box(v___x_3441_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 1, v___x_3467_);
v___x_3469_ = v___x_3451_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v_fst_3448_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v___x_3467_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
v_a_3437_ = v___x_3469_;
goto v___jp_3436_;
}
}
else
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3484_; 
lean_del_object(v___x_3451_);
lean_dec(v_fst_3448_);
lean_dec(v___x_3428_);
lean_dec(v_sp_3427_);
lean_dec_ref(v_fst_3426_);
v_a_3471_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3473_ = v___x_3466_;
v_isShared_3474_ = v_isSharedCheck_3484_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3466_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3484_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
v___x_3475_ = lean_io_error_to_string(v_a_3471_);
v___x_3476_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3475_);
v___x_3477_ = l_Lean_MessageData_ofFormat(v___x_3476_);
lean_inc(v_ref_3456_);
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 1, v___x_3477_);
lean_ctor_set(v___x_3446_, 0, v_ref_3456_);
v___x_3479_ = v___x_3446_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_ref_3456_);
lean_ctor_set(v_reuseFailAlloc_3483_, 1, v___x_3477_);
v___x_3479_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
lean_object* v___x_3481_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 0, v___x_3479_);
v___x_3481_ = v___x_3473_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
}
else
{
lean_object* v_val_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3562_; 
v_val_3485_ = lean_ctor_get(v_a_3454_, 0);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_a_3454_);
if (v_isSharedCheck_3562_ == 0)
{
v___x_3487_ = v_a_3454_;
v_isShared_3488_ = v_isSharedCheck_3562_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_val_3485_);
lean_dec(v_a_3454_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3562_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_fst_3444_, v___y_3433_, v___y_3434_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___y_3492_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
if (lean_obj_tag(v_a_3490_) == 0)
{
lean_inc(v___x_3428_);
v___y_3492_ = v___x_3428_;
goto v___jp_3491_;
}
else
{
lean_object* v_val_3553_; 
v_val_3553_ = lean_ctor_get(v_a_3490_, 0);
lean_inc(v_val_3553_);
lean_dec_ref_known(v_a_3490_, 1);
v___y_3492_ = v_val_3553_;
goto v___jp_3491_;
}
v___jp_3491_:
{
lean_object* v_ref_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
v_ref_3493_ = lean_ctor_get(v___y_3433_, 2);
v___x_3494_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__4));
lean_inc(v___y_3492_);
lean_inc(v_sp_3427_);
v___x_3495_ = l_Lean_SearchPath_findWithExt(v_sp_3427_, v___x_3494_, v___y_3492_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v_a_3496_; 
v_a_3496_ = lean_ctor_get(v___x_3495_, 0);
lean_inc(v_a_3496_);
lean_dec_ref_known(v___x_3495_, 1);
if (lean_obj_tag(v_a_3496_) == 0)
{
lean_object* v_optName_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
lean_dec(v_val_3485_);
lean_dec(v_snd_3449_);
v_optName_3497_ = lean_ctor_get(v_fst_3426_, 1);
v___x_3498_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__5));
v___x_3499_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_3492_, v___x_3441_);
v___x_3500_ = lean_string_append(v___x_3498_, v___x_3499_);
lean_dec_ref(v___x_3499_);
v___x_3501_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__6));
v___x_3502_ = lean_string_append(v___x_3500_, v___x_3501_);
lean_inc(v_optName_3497_);
v___x_3503_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_optName_3497_, v___x_3441_);
v___x_3504_ = lean_string_append(v___x_3502_, v___x_3503_);
lean_dec_ref(v___x_3503_);
v___x_3505_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__4___closed__3));
v___x_3506_ = lean_string_append(v___x_3504_, v___x_3505_);
v___x_3507_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_3506_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v___x_3508_; lean_object* v___x_3510_; 
lean_dec_ref_known(v___x_3507_, 1);
lean_del_object(v___x_3487_);
lean_del_object(v___x_3446_);
v___x_3508_ = lean_box(v___x_3441_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 1, v___x_3508_);
v___x_3510_ = v___x_3451_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_fst_3448_);
lean_ctor_set(v_reuseFailAlloc_3511_, 1, v___x_3508_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
v_a_3437_ = v___x_3510_;
goto v___jp_3436_;
}
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3527_; 
lean_del_object(v___x_3451_);
lean_dec(v_fst_3448_);
lean_dec(v___x_3428_);
lean_dec(v_sp_3427_);
lean_dec_ref(v_fst_3426_);
v_a_3512_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3514_ = v___x_3507_;
v_isShared_3515_ = v_isSharedCheck_3527_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3507_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3527_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3516_; lean_object* v___x_3518_; 
v___x_3516_ = lean_io_error_to_string(v_a_3512_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set_tag(v___x_3487_, 3);
lean_ctor_set(v___x_3487_, 0, v___x_3516_);
v___x_3518_ = v___x_3487_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v___x_3516_);
v___x_3518_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
lean_object* v___x_3519_; lean_object* v___x_3521_; 
v___x_3519_ = l_Lean_MessageData_ofFormat(v___x_3518_);
lean_inc(v_ref_3493_);
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 1, v___x_3519_);
lean_ctor_set(v___x_3446_, 0, v_ref_3493_);
v___x_3521_ = v___x_3446_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_ref_3493_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v___x_3519_);
v___x_3521_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
lean_object* v___x_3523_; 
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v___x_3521_);
v___x_3523_ = v___x_3514_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3521_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
}
}
}
}
}
}
else
{
lean_object* v_range_3528_; lean_object* v_val_3529_; lean_object* v_pos_3530_; lean_object* v_optName_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
lean_dec(v___y_3492_);
lean_del_object(v___x_3487_);
lean_del_object(v___x_3446_);
v_range_3528_ = lean_ctor_get(v_val_3485_, 0);
lean_inc_ref(v_range_3528_);
lean_dec(v_val_3485_);
v_val_3529_ = lean_ctor_get(v_a_3496_, 0);
lean_inc(v_val_3529_);
lean_dec_ref_known(v_a_3496_, 1);
v_pos_3530_ = lean_ctor_get(v_range_3528_, 0);
lean_inc_ref(v_pos_3530_);
lean_dec_ref(v_range_3528_);
v_optName_3531_ = lean_ctor_get(v_fst_3426_, 1);
lean_inc(v_optName_3531_);
v___x_3532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3532_, 0, v_val_3529_);
lean_ctor_set(v___x_3532_, 1, v_pos_3530_);
lean_ctor_set(v___x_3532_, 2, v_optName_3531_);
v___x_3533_ = lean_array_push(v_fst_3448_, v___x_3532_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 0, v___x_3533_);
v___x_3535_ = v___x_3451_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3533_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v_snd_3449_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
v_a_3437_ = v___x_3535_;
goto v___jp_3436_;
}
}
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3552_; 
lean_dec(v___y_3492_);
lean_dec(v_val_3485_);
lean_del_object(v___x_3451_);
lean_dec(v_snd_3449_);
lean_dec(v_fst_3448_);
lean_dec(v___x_3428_);
lean_dec(v_sp_3427_);
lean_dec_ref(v_fst_3426_);
v_a_3537_ = lean_ctor_get(v___x_3495_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3495_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3539_ = v___x_3495_;
v_isShared_3540_ = v_isSharedCheck_3552_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3495_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3552_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3541_; lean_object* v___x_3543_; 
v___x_3541_ = lean_io_error_to_string(v_a_3537_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set_tag(v___x_3487_, 3);
lean_ctor_set(v___x_3487_, 0, v___x_3541_);
v___x_3543_ = v___x_3487_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3541_);
v___x_3543_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
lean_object* v___x_3544_; lean_object* v___x_3546_; 
v___x_3544_ = l_Lean_MessageData_ofFormat(v___x_3543_);
lean_inc(v_ref_3493_);
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 1, v___x_3544_);
lean_ctor_set(v___x_3446_, 0, v_ref_3493_);
v___x_3546_ = v___x_3446_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_ref_3493_);
lean_ctor_set(v_reuseFailAlloc_3550_, 1, v___x_3544_);
v___x_3546_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
lean_object* v___x_3548_; 
if (v_isShared_3540_ == 0)
{
lean_ctor_set(v___x_3539_, 0, v___x_3546_);
v___x_3548_ = v___x_3539_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v___x_3546_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3561_; 
lean_del_object(v___x_3487_);
lean_dec(v_val_3485_);
lean_del_object(v___x_3451_);
lean_dec(v_snd_3449_);
lean_dec(v_fst_3448_);
lean_del_object(v___x_3446_);
lean_dec(v___x_3428_);
lean_dec(v_sp_3427_);
lean_dec_ref(v_fst_3426_);
v_a_3554_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3556_ = v___x_3489_;
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3489_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3559_; 
if (v_isShared_3557_ == 0)
{
v___x_3559_ = v___x_3556_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3554_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
}
}
else
{
lean_object* v_a_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3570_; 
lean_del_object(v___x_3451_);
lean_dec(v_snd_3449_);
lean_dec(v_fst_3448_);
lean_del_object(v___x_3446_);
lean_dec(v_fst_3444_);
lean_dec(v___x_3428_);
lean_dec(v_sp_3427_);
lean_dec_ref(v_fst_3426_);
v_a_3563_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3565_ = v___x_3453_;
v_isShared_3566_ = v_isSharedCheck_3570_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_a_3563_);
lean_dec(v___x_3453_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3570_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3568_; 
if (v_isShared_3566_ == 0)
{
v___x_3568_ = v___x_3565_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_a_3563_);
v___x_3568_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
return v___x_3568_;
}
}
}
}
}
}
v___jp_3436_:
{
size_t v___x_3438_; size_t v___x_3439_; 
v___x_3438_ = ((size_t)1ULL);
v___x_3439_ = lean_usize_add(v_i_3431_, v___x_3438_);
v_i_3431_ = v___x_3439_;
v_b_3432_ = v_a_3437_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1___boxed(lean_object* v_fst_3574_, lean_object* v_sp_3575_, lean_object* v___x_3576_, lean_object* v_as_3577_, lean_object* v_sz_3578_, lean_object* v_i_3579_, lean_object* v_b_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_){
_start:
{
size_t v_sz_boxed_3584_; size_t v_i_boxed_3585_; lean_object* v_res_3586_; 
v_sz_boxed_3584_ = lean_unbox_usize(v_sz_3578_);
lean_dec(v_sz_3578_);
v_i_boxed_3585_ = lean_unbox_usize(v_i_3579_);
lean_dec(v_i_3579_);
v_res_3586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(v_fst_3574_, v_sp_3575_, v___x_3576_, v_as_3577_, v_sz_boxed_3584_, v_i_boxed_3585_, v_b_3580_, v___y_3581_, v___y_3582_);
lean_dec(v___y_3582_);
lean_dec_ref(v___y_3581_);
lean_dec_ref(v_as_3577_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(lean_object* v_x_3587_, lean_object* v_x_3588_){
_start:
{
if (lean_obj_tag(v_x_3588_) == 0)
{
return v_x_3587_;
}
else
{
lean_object* v_key_3589_; lean_object* v_value_3590_; lean_object* v_tail_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v_key_3589_ = lean_ctor_get(v_x_3588_, 0);
v_value_3590_ = lean_ctor_get(v_x_3588_, 1);
v_tail_3591_ = lean_ctor_get(v_x_3588_, 2);
lean_inc(v_value_3590_);
lean_inc(v_key_3589_);
v___x_3592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3592_, 0, v_key_3589_);
lean_ctor_set(v___x_3592_, 1, v_value_3590_);
v___x_3593_ = lean_array_push(v_x_3587_, v___x_3592_);
v_x_3587_ = v___x_3593_;
v_x_3588_ = v_tail_3591_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2___boxed(lean_object* v_x_3595_, lean_object* v_x_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(v_x_3595_, v_x_3596_);
lean_dec(v_x_3596_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(lean_object* v_as_3598_, size_t v_i_3599_, size_t v_stop_3600_, lean_object* v_b_3601_){
_start:
{
uint8_t v___x_3602_; 
v___x_3602_ = lean_usize_dec_eq(v_i_3599_, v_stop_3600_);
if (v___x_3602_ == 0)
{
lean_object* v___x_3603_; lean_object* v___x_3604_; size_t v___x_3605_; size_t v___x_3606_; 
v___x_3603_ = lean_array_uget_borrowed(v_as_3598_, v_i_3599_);
v___x_3604_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__2(v_b_3601_, v___x_3603_);
v___x_3605_ = ((size_t)1ULL);
v___x_3606_ = lean_usize_add(v_i_3599_, v___x_3605_);
v_i_3599_ = v___x_3606_;
v_b_3601_ = v___x_3604_;
goto _start;
}
else
{
return v_b_3601_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3___boxed(lean_object* v_as_3608_, lean_object* v_i_3609_, lean_object* v_stop_3610_, lean_object* v_b_3611_){
_start:
{
size_t v_i_boxed_3612_; size_t v_stop_boxed_3613_; lean_object* v_res_3614_; 
v_i_boxed_3612_ = lean_unbox_usize(v_i_3609_);
lean_dec(v_i_3609_);
v_stop_boxed_3613_ = lean_unbox_usize(v_stop_3610_);
lean_dec(v_stop_3610_);
v_res_3614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_as_3608_, v_i_boxed_3612_, v_stop_boxed_3613_, v_b_3611_);
lean_dec_ref(v_as_3608_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(lean_object* v_sp_3615_, lean_object* v___x_3616_, lean_object* v_as_3617_, size_t v_sz_3618_, size_t v_i_3619_, lean_object* v_b_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
uint8_t v___x_3624_; 
v___x_3624_ = lean_usize_dec_lt(v_i_3619_, v_sz_3618_);
if (v___x_3624_ == 0)
{
lean_object* v___x_3625_; 
lean_dec(v___x_3616_);
lean_dec(v_sp_3615_);
v___x_3625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3625_, 0, v_b_3620_);
return v___x_3625_;
}
else
{
lean_object* v_a_3626_; lean_object* v_fst_3627_; lean_object* v_snd_3628_; lean_object* v_fst_3629_; lean_object* v_snd_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3664_; 
v_a_3626_ = lean_array_uget_borrowed(v_as_3617_, v_i_3619_);
v_fst_3627_ = lean_ctor_get(v_a_3626_, 0);
v_snd_3628_ = lean_ctor_get(v_a_3626_, 1);
v_fst_3629_ = lean_ctor_get(v_b_3620_, 0);
v_snd_3630_ = lean_ctor_get(v_b_3620_, 1);
v_isSharedCheck_3664_ = !lean_is_exclusive(v_b_3620_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3632_ = v_b_3620_;
v_isShared_3633_ = v_isSharedCheck_3664_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_snd_3630_);
lean_inc(v_fst_3629_);
lean_dec(v_b_3620_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3664_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___y_3635_; lean_object* v_size_3655_; lean_object* v_buckets_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; uint8_t v___x_3660_; 
v_size_3655_ = lean_ctor_get(v_snd_3628_, 0);
v_buckets_3656_ = lean_ctor_get(v_snd_3628_, 1);
v___x_3657_ = lean_mk_empty_array_with_capacity(v_size_3655_);
v___x_3658_ = lean_unsigned_to_nat(0u);
v___x_3659_ = lean_array_get_size(v_buckets_3656_);
v___x_3660_ = lean_nat_dec_lt(v___x_3658_, v___x_3659_);
if (v___x_3660_ == 0)
{
v___y_3635_ = v___x_3657_;
goto v___jp_3634_;
}
else
{
size_t v___x_3661_; size_t v___x_3662_; lean_object* v___x_3663_; 
v___x_3661_ = ((size_t)0ULL);
v___x_3662_ = lean_usize_of_nat(v___x_3659_);
v___x_3663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_buckets_3656_, v___x_3661_, v___x_3662_, v___x_3657_);
v___y_3635_ = v___x_3663_;
goto v___jp_3634_;
}
v___jp_3634_:
{
lean_object* v___x_3637_; 
if (v_isShared_3633_ == 0)
{
v___x_3637_ = v___x_3632_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_fst_3629_);
lean_ctor_set(v_reuseFailAlloc_3654_, 1, v_snd_3630_);
v___x_3637_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
size_t v_sz_3638_; size_t v___x_3639_; lean_object* v___x_3640_; 
v_sz_3638_ = lean_array_size(v___y_3635_);
v___x_3639_ = ((size_t)0ULL);
lean_inc(v___x_3616_);
lean_inc(v_sp_3615_);
lean_inc(v_fst_3627_);
v___x_3640_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__1(v_fst_3627_, v_sp_3615_, v___x_3616_, v___y_3635_, v_sz_3638_, v___x_3639_, v___x_3637_, v___y_3621_, v___y_3622_);
lean_dec_ref(v___y_3635_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v_a_3641_; lean_object* v_fst_3642_; lean_object* v_snd_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3653_; 
v_a_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc(v_a_3641_);
lean_dec_ref_known(v___x_3640_, 1);
v_fst_3642_ = lean_ctor_get(v_a_3641_, 0);
v_snd_3643_ = lean_ctor_get(v_a_3641_, 1);
v_isSharedCheck_3653_ = !lean_is_exclusive(v_a_3641_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3645_ = v_a_3641_;
v_isShared_3646_ = v_isSharedCheck_3653_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_snd_3643_);
lean_inc(v_fst_3642_);
lean_dec(v_a_3641_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3653_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3648_; 
if (v_isShared_3646_ == 0)
{
v___x_3648_ = v___x_3645_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_fst_3642_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_snd_3643_);
v___x_3648_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
size_t v___x_3649_; size_t v___x_3650_; 
v___x_3649_ = ((size_t)1ULL);
v___x_3650_ = lean_usize_add(v_i_3619_, v___x_3649_);
v_i_3619_ = v___x_3650_;
v_b_3620_ = v___x_3648_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3616_);
lean_dec(v_sp_3615_);
return v___x_3640_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4___boxed(lean_object* v_sp_3665_, lean_object* v___x_3666_, lean_object* v_as_3667_, lean_object* v_sz_3668_, lean_object* v_i_3669_, lean_object* v_b_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_){
_start:
{
size_t v_sz_boxed_3674_; size_t v_i_boxed_3675_; lean_object* v_res_3676_; 
v_sz_boxed_3674_ = lean_unbox_usize(v_sz_3668_);
lean_dec(v_sz_3668_);
v_i_boxed_3675_ = lean_unbox_usize(v_i_3669_);
lean_dec(v_i_3669_);
v_res_3676_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(v_sp_3665_, v___x_3666_, v_as_3667_, v_sz_boxed_3674_, v_i_boxed_3675_, v_b_3670_, v___y_3671_, v___y_3672_);
lean_dec(v___y_3672_);
lean_dec_ref(v___y_3671_);
lean_dec_ref(v_as_3667_);
return v_res_3676_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(uint8_t v___y_3677_, lean_object* v_as_3678_, size_t v_i_3679_, size_t v_stop_3680_){
_start:
{
uint8_t v___x_3681_; 
v___x_3681_ = lean_usize_dec_eq(v_i_3679_, v_stop_3680_);
if (v___x_3681_ == 0)
{
lean_object* v___x_3682_; lean_object* v_snd_3683_; lean_object* v_size_3684_; lean_object* v___x_3685_; uint8_t v___x_3686_; 
v___x_3682_ = lean_array_uget_borrowed(v_as_3678_, v_i_3679_);
v_snd_3683_ = lean_ctor_get(v___x_3682_, 1);
v_size_3684_ = lean_ctor_get(v_snd_3683_, 0);
v___x_3685_ = lean_unsigned_to_nat(0u);
v___x_3686_ = lean_nat_dec_eq(v_size_3684_, v___x_3685_);
if (v___x_3686_ == 0)
{
uint8_t v___x_3687_; 
v___x_3687_ = 1;
return v___x_3687_;
}
else
{
if (v___y_3677_ == 0)
{
size_t v___x_3688_; size_t v___x_3689_; 
v___x_3688_ = ((size_t)1ULL);
v___x_3689_ = lean_usize_add(v_i_3679_, v___x_3688_);
v_i_3679_ = v___x_3689_;
goto _start;
}
else
{
return v___y_3677_;
}
}
}
else
{
uint8_t v___x_3691_; 
v___x_3691_ = 0;
return v___x_3691_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10___boxed(lean_object* v___y_3692_, lean_object* v_as_3693_, lean_object* v_i_3694_, lean_object* v_stop_3695_){
_start:
{
uint8_t v___y_18034__boxed_3696_; size_t v_i_boxed_3697_; size_t v_stop_boxed_3698_; uint8_t v_res_3699_; lean_object* v_r_3700_; 
v___y_18034__boxed_3696_ = lean_unbox(v___y_3692_);
v_i_boxed_3697_ = lean_unbox_usize(v_i_3694_);
lean_dec(v_i_3694_);
v_stop_boxed_3698_ = lean_unbox_usize(v_stop_3695_);
lean_dec(v_stop_3695_);
v_res_3699_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(v___y_18034__boxed_3696_, v_as_3693_, v_i_boxed_3697_, v_stop_boxed_3698_);
lean_dec_ref(v_as_3693_);
v_r_3700_ = lean_box(v_res_3699_);
return v_r_3700_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(lean_object* v_k_3701_, lean_object* v_v_3702_, lean_object* v_t_3703_){
_start:
{
lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; lean_object* v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v___y_3713_; lean_object* v___y_3714_; 
if (lean_obj_tag(v_t_3703_) == 0)
{
lean_object* v_size_3718_; lean_object* v_k_3719_; lean_object* v_v_3720_; lean_object* v_l_3721_; lean_object* v_r_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3982_; 
v_size_3718_ = lean_ctor_get(v_t_3703_, 0);
v_k_3719_ = lean_ctor_get(v_t_3703_, 1);
v_v_3720_ = lean_ctor_get(v_t_3703_, 2);
v_l_3721_ = lean_ctor_get(v_t_3703_, 3);
v_r_3722_ = lean_ctor_get(v_t_3703_, 4);
v_isSharedCheck_3982_ = !lean_is_exclusive(v_t_3703_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3724_ = v_t_3703_;
v_isShared_3725_ = v_isSharedCheck_3982_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_r_3722_);
lean_inc(v_l_3721_);
lean_inc(v_v_3720_);
lean_inc(v_k_3719_);
lean_inc(v_size_3718_);
lean_dec(v_t_3703_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3982_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3740_; lean_object* v___y_3741_; lean_object* v___y_3742_; lean_object* v___y_3743_; lean_object* v___y_3744_; lean_object* v___y_3745_; lean_object* v___y_3746_; lean_object* v___y_3747_; lean_object* v___y_3748_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3758_; lean_object* v___y_3759_; lean_object* v___y_3760_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v___y_3763_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v___y_3766_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3769_; uint8_t v___y_3776_; lean_object* v_fst_3976_; lean_object* v_snd_3977_; lean_object* v_fst_3978_; lean_object* v_snd_3979_; uint8_t v___x_3980_; 
v_fst_3976_ = lean_ctor_get(v_k_3701_, 0);
v_snd_3977_ = lean_ctor_get(v_k_3701_, 1);
v_fst_3978_ = lean_ctor_get(v_k_3719_, 0);
v_snd_3979_ = lean_ctor_get(v_k_3719_, 1);
v___x_3980_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_fst_3976_, v_fst_3978_);
if (v___x_3980_ == 1)
{
uint8_t v___x_3981_; 
v___x_3981_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_snd_3977_, v_snd_3979_);
v___y_3776_ = v___x_3981_;
goto v___jp_3775_;
}
else
{
v___y_3776_ = v___x_3980_;
goto v___jp_3775_;
}
v___jp_3726_:
{
lean_object* v___x_3734_; lean_object* v___x_3736_; 
v___x_3734_ = lean_nat_add(v___y_3728_, v___y_3733_);
lean_dec(v___y_3733_);
lean_dec(v___y_3728_);
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 3, v___y_3730_);
lean_ctor_set(v___x_3724_, 0, v___x_3734_);
v___x_3736_ = v___x_3724_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v___x_3734_);
lean_ctor_set(v_reuseFailAlloc_3738_, 1, v_k_3719_);
lean_ctor_set(v_reuseFailAlloc_3738_, 2, v_v_3720_);
lean_ctor_set(v_reuseFailAlloc_3738_, 3, v___y_3730_);
lean_ctor_set(v_reuseFailAlloc_3738_, 4, v_r_3722_);
v___x_3736_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
lean_object* v___x_3737_; 
v___x_3737_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3737_, 0, v___y_3731_);
lean_ctor_set(v___x_3737_, 1, v___y_3729_);
lean_ctor_set(v___x_3737_, 2, v___y_3732_);
lean_ctor_set(v___x_3737_, 3, v___y_3727_);
lean_ctor_set(v___x_3737_, 4, v___x_3736_);
return v___x_3737_;
}
}
v___jp_3739_:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3752_ = lean_nat_add(v___y_3747_, v___y_3751_);
lean_dec(v___y_3751_);
lean_dec(v___y_3747_);
v___x_3753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3752_);
lean_ctor_set(v___x_3753_, 1, v___y_3742_);
lean_ctor_set(v___x_3753_, 2, v___y_3741_);
lean_ctor_set(v___x_3753_, 3, v___y_3740_);
lean_ctor_set(v___x_3753_, 4, v___y_3743_);
v___x_3754_ = lean_nat_add(v___y_3750_, v___y_3749_);
lean_dec(v___y_3749_);
if (lean_obj_tag(v___y_3744_) == 0)
{
lean_object* v_size_3755_; 
v_size_3755_ = lean_ctor_get(v___y_3744_, 0);
lean_inc(v_size_3755_);
v___y_3727_ = v___x_3753_;
v___y_3728_ = v___x_3754_;
v___y_3729_ = v___y_3745_;
v___y_3730_ = v___y_3744_;
v___y_3731_ = v___y_3746_;
v___y_3732_ = v___y_3748_;
v___y_3733_ = v_size_3755_;
goto v___jp_3726_;
}
else
{
lean_object* v___x_3756_; 
v___x_3756_ = lean_unsigned_to_nat(0u);
v___y_3727_ = v___x_3753_;
v___y_3728_ = v___x_3754_;
v___y_3729_ = v___y_3745_;
v___y_3730_ = v___y_3744_;
v___y_3731_ = v___y_3746_;
v___y_3732_ = v___y_3748_;
v___y_3733_ = v___x_3756_;
goto v___jp_3726_;
}
}
v___jp_3757_:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3770_ = lean_nat_add(v___y_3763_, v___y_3769_);
lean_dec(v___y_3769_);
lean_dec(v___y_3763_);
v___x_3771_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3771_, 0, v___x_3770_);
lean_ctor_set(v___x_3771_, 1, v_k_3719_);
lean_ctor_set(v___x_3771_, 2, v_v_3720_);
lean_ctor_set(v___x_3771_, 3, v_l_3721_);
lean_ctor_set(v___x_3771_, 4, v___y_3762_);
v___x_3772_ = lean_nat_add(v___y_3768_, v___y_3761_);
lean_dec(v___y_3761_);
if (lean_obj_tag(v___y_3760_) == 0)
{
lean_object* v_size_3773_; 
v_size_3773_ = lean_ctor_get(v___y_3760_, 0);
lean_inc(v_size_3773_);
v___y_3705_ = v___y_3758_;
v___y_3706_ = v___y_3759_;
v___y_3707_ = v___x_3771_;
v___y_3708_ = v___y_3760_;
v___y_3709_ = v___x_3772_;
v___y_3710_ = v___y_3764_;
v___y_3711_ = v___y_3765_;
v___y_3712_ = v___y_3766_;
v___y_3713_ = v___y_3767_;
v___y_3714_ = v_size_3773_;
goto v___jp_3704_;
}
else
{
lean_object* v___x_3774_; 
v___x_3774_ = lean_unsigned_to_nat(0u);
v___y_3705_ = v___y_3758_;
v___y_3706_ = v___y_3759_;
v___y_3707_ = v___x_3771_;
v___y_3708_ = v___y_3760_;
v___y_3709_ = v___x_3772_;
v___y_3710_ = v___y_3764_;
v___y_3711_ = v___y_3765_;
v___y_3712_ = v___y_3766_;
v___y_3713_ = v___y_3767_;
v___y_3714_ = v___x_3774_;
goto v___jp_3704_;
}
}
v___jp_3775_:
{
switch(v___y_3776_)
{
case 0:
{
lean_object* v_impl_3777_; lean_object* v___x_3778_; 
lean_dec(v_size_3718_);
v_impl_3777_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_3701_, v_v_3702_, v_l_3721_);
v___x_3778_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3722_) == 0)
{
lean_object* v_size_3779_; lean_object* v_size_3780_; lean_object* v_k_3781_; lean_object* v_v_3782_; lean_object* v_l_3783_; lean_object* v_r_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; uint8_t v___x_3787_; 
v_size_3779_ = lean_ctor_get(v_r_3722_, 0);
v_size_3780_ = lean_ctor_get(v_impl_3777_, 0);
v_k_3781_ = lean_ctor_get(v_impl_3777_, 1);
v_v_3782_ = lean_ctor_get(v_impl_3777_, 2);
v_l_3783_ = lean_ctor_get(v_impl_3777_, 3);
v_r_3784_ = lean_ctor_get(v_impl_3777_, 4);
v___x_3785_ = lean_unsigned_to_nat(3u);
v___x_3786_ = lean_nat_mul(v___x_3785_, v_size_3779_);
v___x_3787_ = lean_nat_dec_lt(v___x_3786_, v_size_3780_);
lean_dec(v___x_3786_);
if (v___x_3787_ == 0)
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
lean_del_object(v___x_3724_);
v___x_3788_ = lean_nat_add(v___x_3778_, v_size_3780_);
v___x_3789_ = lean_nat_add(v___x_3788_, v_size_3779_);
lean_dec(v___x_3788_);
v___x_3790_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3789_);
lean_ctor_set(v___x_3790_, 1, v_k_3719_);
lean_ctor_set(v___x_3790_, 2, v_v_3720_);
lean_ctor_set(v___x_3790_, 3, v_impl_3777_);
lean_ctor_set(v___x_3790_, 4, v_r_3722_);
return v___x_3790_;
}
else
{
lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3827_; 
lean_inc(v_r_3784_);
lean_inc(v_l_3783_);
lean_inc(v_v_3782_);
lean_inc(v_k_3781_);
lean_inc(v_size_3780_);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_impl_3777_);
if (v_isSharedCheck_3827_ == 0)
{
lean_object* v_unused_3828_; lean_object* v_unused_3829_; lean_object* v_unused_3830_; lean_object* v_unused_3831_; lean_object* v_unused_3832_; 
v_unused_3828_ = lean_ctor_get(v_impl_3777_, 4);
lean_dec(v_unused_3828_);
v_unused_3829_ = lean_ctor_get(v_impl_3777_, 3);
lean_dec(v_unused_3829_);
v_unused_3830_ = lean_ctor_get(v_impl_3777_, 2);
lean_dec(v_unused_3830_);
v_unused_3831_ = lean_ctor_get(v_impl_3777_, 1);
lean_dec(v_unused_3831_);
v_unused_3832_ = lean_ctor_get(v_impl_3777_, 0);
lean_dec(v_unused_3832_);
v___x_3792_ = v_impl_3777_;
v_isShared_3793_ = v_isSharedCheck_3827_;
goto v_resetjp_3791_;
}
else
{
lean_dec(v_impl_3777_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3827_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v_size_3794_; lean_object* v_size_3795_; lean_object* v_k_3796_; lean_object* v_v_3797_; lean_object* v_l_3798_; lean_object* v_r_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; uint8_t v___x_3802_; 
v_size_3794_ = lean_ctor_get(v_l_3783_, 0);
v_size_3795_ = lean_ctor_get(v_r_3784_, 0);
v_k_3796_ = lean_ctor_get(v_r_3784_, 1);
v_v_3797_ = lean_ctor_get(v_r_3784_, 2);
v_l_3798_ = lean_ctor_get(v_r_3784_, 3);
v_r_3799_ = lean_ctor_get(v_r_3784_, 4);
v___x_3800_ = lean_unsigned_to_nat(2u);
v___x_3801_ = lean_nat_mul(v___x_3800_, v_size_3794_);
v___x_3802_ = lean_nat_dec_lt(v_size_3795_, v___x_3801_);
lean_dec(v___x_3801_);
if (v___x_3802_ == 0)
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
lean_inc(v_r_3799_);
lean_inc(v_l_3798_);
lean_inc(v_v_3797_);
lean_inc(v_k_3796_);
lean_del_object(v___x_3792_);
lean_dec(v_r_3784_);
v___x_3803_ = lean_nat_add(v___x_3778_, v_size_3780_);
lean_dec(v_size_3780_);
v___x_3804_ = lean_nat_add(v___x_3803_, v_size_3779_);
lean_dec(v___x_3803_);
v___x_3805_ = lean_nat_add(v___x_3778_, v_size_3794_);
if (lean_obj_tag(v_l_3798_) == 0)
{
lean_object* v_size_3806_; 
v_size_3806_ = lean_ctor_get(v_l_3798_, 0);
lean_inc(v_size_3806_);
lean_inc(v_size_3779_);
v___y_3740_ = v_l_3783_;
v___y_3741_ = v_v_3782_;
v___y_3742_ = v_k_3781_;
v___y_3743_ = v_l_3798_;
v___y_3744_ = v_r_3799_;
v___y_3745_ = v_k_3796_;
v___y_3746_ = v___x_3804_;
v___y_3747_ = v___x_3805_;
v___y_3748_ = v_v_3797_;
v___y_3749_ = v_size_3779_;
v___y_3750_ = v___x_3778_;
v___y_3751_ = v_size_3806_;
goto v___jp_3739_;
}
else
{
lean_object* v___x_3807_; 
v___x_3807_ = lean_unsigned_to_nat(0u);
lean_inc(v_size_3779_);
v___y_3740_ = v_l_3783_;
v___y_3741_ = v_v_3782_;
v___y_3742_ = v_k_3781_;
v___y_3743_ = v_l_3798_;
v___y_3744_ = v_r_3799_;
v___y_3745_ = v_k_3796_;
v___y_3746_ = v___x_3804_;
v___y_3747_ = v___x_3805_;
v___y_3748_ = v_v_3797_;
v___y_3749_ = v_size_3779_;
v___y_3750_ = v___x_3778_;
v___y_3751_ = v___x_3807_;
goto v___jp_3739_;
}
}
else
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3813_; 
lean_del_object(v___x_3724_);
v___x_3808_ = lean_nat_add(v___x_3778_, v_size_3780_);
lean_dec(v_size_3780_);
v___x_3809_ = lean_nat_add(v___x_3808_, v_size_3779_);
lean_dec(v___x_3808_);
v___x_3810_ = lean_nat_add(v___x_3778_, v_size_3779_);
v___x_3811_ = lean_nat_add(v___x_3810_, v_size_3795_);
lean_dec(v___x_3810_);
lean_inc_ref(v_r_3722_);
if (v_isShared_3793_ == 0)
{
lean_ctor_set(v___x_3792_, 4, v_r_3722_);
lean_ctor_set(v___x_3792_, 3, v_r_3784_);
lean_ctor_set(v___x_3792_, 2, v_v_3720_);
lean_ctor_set(v___x_3792_, 1, v_k_3719_);
lean_ctor_set(v___x_3792_, 0, v___x_3811_);
v___x_3813_ = v___x_3792_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3826_; 
v_reuseFailAlloc_3826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3826_, 0, v___x_3811_);
lean_ctor_set(v_reuseFailAlloc_3826_, 1, v_k_3719_);
lean_ctor_set(v_reuseFailAlloc_3826_, 2, v_v_3720_);
lean_ctor_set(v_reuseFailAlloc_3826_, 3, v_r_3784_);
lean_ctor_set(v_reuseFailAlloc_3826_, 4, v_r_3722_);
v___x_3813_ = v_reuseFailAlloc_3826_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
v_isSharedCheck_3820_ = !lean_is_exclusive(v_r_3722_);
if (v_isSharedCheck_3820_ == 0)
{
lean_object* v_unused_3821_; lean_object* v_unused_3822_; lean_object* v_unused_3823_; lean_object* v_unused_3824_; lean_object* v_unused_3825_; 
v_unused_3821_ = lean_ctor_get(v_r_3722_, 4);
lean_dec(v_unused_3821_);
v_unused_3822_ = lean_ctor_get(v_r_3722_, 3);
lean_dec(v_unused_3822_);
v_unused_3823_ = lean_ctor_get(v_r_3722_, 2);
lean_dec(v_unused_3823_);
v_unused_3824_ = lean_ctor_get(v_r_3722_, 1);
lean_dec(v_unused_3824_);
v_unused_3825_ = lean_ctor_get(v_r_3722_, 0);
lean_dec(v_unused_3825_);
v___x_3815_ = v_r_3722_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_dec(v_r_3722_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 4, v___x_3813_);
lean_ctor_set(v___x_3815_, 3, v_l_3783_);
lean_ctor_set(v___x_3815_, 2, v_v_3782_);
lean_ctor_set(v___x_3815_, 1, v_k_3781_);
lean_ctor_set(v___x_3815_, 0, v___x_3809_);
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3809_);
lean_ctor_set(v_reuseFailAlloc_3819_, 1, v_k_3781_);
lean_ctor_set(v_reuseFailAlloc_3819_, 2, v_v_3782_);
lean_ctor_set(v_reuseFailAlloc_3819_, 3, v_l_3783_);
lean_ctor_set(v_reuseFailAlloc_3819_, 4, v___x_3813_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3833_; 
lean_del_object(v___x_3724_);
v_l_3833_ = lean_ctor_get(v_impl_3777_, 3);
if (lean_obj_tag(v_l_3833_) == 0)
{
lean_object* v_r_3834_; lean_object* v_k_3835_; lean_object* v_v_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3845_; 
lean_inc_ref(v_l_3833_);
v_r_3834_ = lean_ctor_get(v_impl_3777_, 4);
v_k_3835_ = lean_ctor_get(v_impl_3777_, 1);
v_v_3836_ = lean_ctor_get(v_impl_3777_, 2);
v_isSharedCheck_3845_ = !lean_is_exclusive(v_impl_3777_);
if (v_isSharedCheck_3845_ == 0)
{
lean_object* v_unused_3846_; lean_object* v_unused_3847_; 
v_unused_3846_ = lean_ctor_get(v_impl_3777_, 3);
lean_dec(v_unused_3846_);
v_unused_3847_ = lean_ctor_get(v_impl_3777_, 0);
lean_dec(v_unused_3847_);
v___x_3838_ = v_impl_3777_;
v_isShared_3839_ = v_isSharedCheck_3845_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_r_3834_);
lean_inc(v_v_3836_);
lean_inc(v_k_3835_);
lean_dec(v_impl_3777_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3845_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3840_; lean_object* v___x_3842_; 
v___x_3840_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3834_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set(v___x_3838_, 3, v_r_3834_);
lean_ctor_set(v___x_3838_, 2, v_v_3720_);
lean_ctor_set(v___x_3838_, 1, v_k_3719_);
lean_ctor_set(v___x_3838_, 0, v___x_3778_);
v___x_3842_ = v___x_3838_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3778_);
lean_ctor_set(v_reuseFailAlloc_3844_, 1, v_k_3719_);
lean_ctor_set(v_reuseFailAlloc_3844_, 2, v_v_3720_);
lean_ctor_set(v_reuseFailAlloc_3844_, 3, v_r_3834_);
lean_ctor_set(v_reuseFailAlloc_3844_, 4, v_r_3834_);
v___x_3842_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
lean_object* v___x_3843_; 
v___x_3843_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3840_);
lean_ctor_set(v___x_3843_, 1, v_k_3835_);
lean_ctor_set(v___x_3843_, 2, v_v_3836_);
lean_ctor_set(v___x_3843_, 3, v_l_3833_);
lean_ctor_set(v___x_3843_, 4, v___x_3842_);
return v___x_3843_;
}
}
}
else
{
lean_object* v_r_3848_; 
v_r_3848_ = lean_ctor_get(v_impl_3777_, 4);
lean_inc(v_r_3848_);
if (lean_obj_tag(v_r_3848_) == 0)
{
lean_object* v_k_3849_; lean_object* v_v_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3871_; 
lean_inc(v_l_3833_);
v_k_3849_ = lean_ctor_get(v_impl_3777_, 1);
v_v_3850_ = lean_ctor_get(v_impl_3777_, 2);
v_isSharedCheck_3871_ = !lean_is_exclusive(v_impl_3777_);
if (v_isSharedCheck_3871_ == 0)
{
lean_object* v_unused_3872_; lean_object* v_unused_3873_; lean_object* v_unused_3874_; 
v_unused_3872_ = lean_ctor_get(v_impl_3777_, 4);
lean_dec(v_unused_3872_);
v_unused_3873_ = lean_ctor_get(v_impl_3777_, 3);
lean_dec(v_unused_3873_);
v_unused_3874_ = lean_ctor_get(v_impl_3777_, 0);
lean_dec(v_unused_3874_);
v___x_3852_ = v_impl_3777_;
v_isShared_3853_ = v_isSharedCheck_3871_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_v_3850_);
lean_inc(v_k_3849_);
lean_dec(v_impl_3777_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3871_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v_k_3854_; lean_object* v_v_3855_; lean_object* v___x_3857_; uint8_t v_isShared_3858_; uint8_t v_isSharedCheck_3867_; 
v_k_3854_ = lean_ctor_get(v_r_3848_, 1);
v_v_3855_ = lean_ctor_get(v_r_3848_, 2);
v_isSharedCheck_3867_ = !lean_is_exclusive(v_r_3848_);
if (v_isSharedCheck_3867_ == 0)
{
lean_object* v_unused_3868_; lean_object* v_unused_3869_; lean_object* v_unused_3870_; 
v_unused_3868_ = lean_ctor_get(v_r_3848_, 4);
lean_dec(v_unused_3868_);
v_unused_3869_ = lean_ctor_get(v_r_3848_, 3);
lean_dec(v_unused_3869_);
v_unused_3870_ = lean_ctor_get(v_r_3848_, 0);
lean_dec(v_unused_3870_);
v___x_3857_ = v_r_3848_;
v_isShared_3858_ = v_isSharedCheck_3867_;
goto v_resetjp_3856_;
}
else
{
lean_inc(v_v_3855_);
lean_inc(v_k_3854_);
lean_dec(v_r_3848_);
v___x_3857_ = lean_box(0);
v_isShared_3858_ = v_isSharedCheck_3867_;
goto v_resetjp_3856_;
}
v_resetjp_3856_:
{
lean_object* v___x_3859_; lean_object* v___x_3861_; 
v___x_3859_ = lean_unsigned_to_nat(3u);
if (v_isShared_3858_ == 0)
{
lean_ctor_set(v___x_3857_, 4, v_l_3833_);
lean_ctor_set(v___x_3857_, 3, v_l_3833_);
lean_ctor_set(v___x_3857_, 2, v_v_3850_);
lean_ctor_set(v___x_3857_, 1, v_k_3849_);
lean_ctor_set(v___x_3857_, 0, v___x_3778_);
v___x_3861_ = v___x_3857_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v___x_3778_);
lean_ctor_set(v_reuseFailAlloc_3866_, 1, v_k_3849_);
lean_ctor_set(v_reuseFailAlloc_3866_, 2, v_v_3850_);
lean_ctor_set(v_reuseFailAlloc_3866_, 3, v_l_3833_);
lean_ctor_set(v_reuseFailAlloc_3866_, 4, v_l_3833_);
v___x_3861_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
lean_object* v___x_3863_; 
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 4, v_l_3833_);
lean_ctor_set(v___x_3852_, 2, v_v_3720_);
lean_ctor_set(v___x_3852_, 1, v_k_3719_);
lean_ctor_set(v___x_3852_, 0, v___x_3778_);
v___x_3863_ = v___x_3852_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v___x_3778_);
lean_ctor_set(v_reuseFailAlloc_3865_, 1, v_k_3719_);
lean_ctor_set(v_reuseFailAlloc_3865_, 2, v_v_3720_);
lean_ctor_set(v_reuseFailAlloc_3865_, 3, v_l_3833_);
lean_ctor_set(v_reuseFailAlloc_3865_, 4, v_l_3833_);
v___x_3863_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
lean_object* v___x_3864_; 
v___x_3864_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3859_);
lean_ctor_set(v___x_3864_, 1, v_k_3854_);
lean_ctor_set(v___x_3864_, 2, v_v_3855_);
lean_ctor_set(v___x_3864_, 3, v___x_3861_);
lean_ctor_set(v___x_3864_, 4, v___x_3863_);
return v___x_3864_;
}
}
}
}
}
else
{
lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3875_ = lean_unsigned_to_nat(2u);
v___x_3876_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3875_);
lean_ctor_set(v___x_3876_, 1, v_k_3719_);
lean_ctor_set(v___x_3876_, 2, v_v_3720_);
lean_ctor_set(v___x_3876_, 3, v_impl_3777_);
lean_ctor_set(v___x_3876_, 4, v_r_3848_);
return v___x_3876_;
}
}
}
}
case 1:
{
lean_object* v___x_3877_; 
lean_del_object(v___x_3724_);
lean_dec(v_v_3720_);
lean_dec(v_k_3719_);
v___x_3877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3877_, 0, v_size_3718_);
lean_ctor_set(v___x_3877_, 1, v_k_3701_);
lean_ctor_set(v___x_3877_, 2, v_v_3702_);
lean_ctor_set(v___x_3877_, 3, v_l_3721_);
lean_ctor_set(v___x_3877_, 4, v_r_3722_);
return v___x_3877_;
}
default: 
{
lean_object* v_impl_3878_; lean_object* v___x_3879_; 
lean_del_object(v___x_3724_);
lean_dec(v_size_3718_);
v_impl_3878_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_3701_, v_v_3702_, v_r_3722_);
v___x_3879_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3721_) == 0)
{
lean_object* v_size_3880_; lean_object* v_size_3881_; lean_object* v_k_3882_; lean_object* v_v_3883_; lean_object* v_l_3884_; lean_object* v_r_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; 
v_size_3880_ = lean_ctor_get(v_l_3721_, 0);
v_size_3881_ = lean_ctor_get(v_impl_3878_, 0);
v_k_3882_ = lean_ctor_get(v_impl_3878_, 1);
v_v_3883_ = lean_ctor_get(v_impl_3878_, 2);
v_l_3884_ = lean_ctor_get(v_impl_3878_, 3);
v_r_3885_ = lean_ctor_get(v_impl_3878_, 4);
v___x_3886_ = lean_unsigned_to_nat(3u);
v___x_3887_ = lean_nat_mul(v___x_3886_, v_size_3880_);
v___x_3888_ = lean_nat_dec_lt(v___x_3887_, v_size_3881_);
lean_dec(v___x_3887_);
if (v___x_3888_ == 0)
{
lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3889_ = lean_nat_add(v___x_3879_, v_size_3880_);
v___x_3890_ = lean_nat_add(v___x_3889_, v_size_3881_);
lean_dec(v___x_3889_);
v___x_3891_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3891_, 0, v___x_3890_);
lean_ctor_set(v___x_3891_, 1, v_k_3719_);
lean_ctor_set(v___x_3891_, 2, v_v_3720_);
lean_ctor_set(v___x_3891_, 3, v_l_3721_);
lean_ctor_set(v___x_3891_, 4, v_impl_3878_);
return v___x_3891_;
}
else
{
lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3926_; 
lean_inc(v_r_3885_);
lean_inc(v_l_3884_);
lean_inc(v_v_3883_);
lean_inc(v_k_3882_);
lean_inc(v_size_3881_);
v_isSharedCheck_3926_ = !lean_is_exclusive(v_impl_3878_);
if (v_isSharedCheck_3926_ == 0)
{
lean_object* v_unused_3927_; lean_object* v_unused_3928_; lean_object* v_unused_3929_; lean_object* v_unused_3930_; lean_object* v_unused_3931_; 
v_unused_3927_ = lean_ctor_get(v_impl_3878_, 4);
lean_dec(v_unused_3927_);
v_unused_3928_ = lean_ctor_get(v_impl_3878_, 3);
lean_dec(v_unused_3928_);
v_unused_3929_ = lean_ctor_get(v_impl_3878_, 2);
lean_dec(v_unused_3929_);
v_unused_3930_ = lean_ctor_get(v_impl_3878_, 1);
lean_dec(v_unused_3930_);
v_unused_3931_ = lean_ctor_get(v_impl_3878_, 0);
lean_dec(v_unused_3931_);
v___x_3893_ = v_impl_3878_;
v_isShared_3894_ = v_isSharedCheck_3926_;
goto v_resetjp_3892_;
}
else
{
lean_dec(v_impl_3878_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3926_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v_size_3895_; lean_object* v_k_3896_; lean_object* v_v_3897_; lean_object* v_l_3898_; lean_object* v_r_3899_; lean_object* v_size_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; uint8_t v___x_3903_; 
v_size_3895_ = lean_ctor_get(v_l_3884_, 0);
v_k_3896_ = lean_ctor_get(v_l_3884_, 1);
v_v_3897_ = lean_ctor_get(v_l_3884_, 2);
v_l_3898_ = lean_ctor_get(v_l_3884_, 3);
v_r_3899_ = lean_ctor_get(v_l_3884_, 4);
v_size_3900_ = lean_ctor_get(v_r_3885_, 0);
v___x_3901_ = lean_unsigned_to_nat(2u);
v___x_3902_ = lean_nat_mul(v___x_3901_, v_size_3900_);
v___x_3903_ = lean_nat_dec_lt(v_size_3895_, v___x_3902_);
lean_dec(v___x_3902_);
if (v___x_3903_ == 0)
{
lean_object* v___x_3904_; lean_object* v___x_3905_; 
lean_inc(v_size_3900_);
lean_inc(v_r_3899_);
lean_inc(v_l_3898_);
lean_inc(v_v_3897_);
lean_inc(v_k_3896_);
lean_del_object(v___x_3893_);
lean_dec(v_l_3884_);
v___x_3904_ = lean_nat_add(v___x_3879_, v_size_3880_);
v___x_3905_ = lean_nat_add(v___x_3904_, v_size_3881_);
lean_dec(v_size_3881_);
if (lean_obj_tag(v_l_3898_) == 0)
{
lean_object* v_size_3906_; 
v_size_3906_ = lean_ctor_get(v_l_3898_, 0);
lean_inc(v_size_3906_);
v___y_3758_ = v_v_3897_;
v___y_3759_ = v_v_3883_;
v___y_3760_ = v_r_3899_;
v___y_3761_ = v_size_3900_;
v___y_3762_ = v_l_3898_;
v___y_3763_ = v___x_3904_;
v___y_3764_ = v___x_3905_;
v___y_3765_ = v_k_3882_;
v___y_3766_ = v_k_3896_;
v___y_3767_ = v_r_3885_;
v___y_3768_ = v___x_3879_;
v___y_3769_ = v_size_3906_;
goto v___jp_3757_;
}
else
{
lean_object* v___x_3907_; 
v___x_3907_ = lean_unsigned_to_nat(0u);
v___y_3758_ = v_v_3897_;
v___y_3759_ = v_v_3883_;
v___y_3760_ = v_r_3899_;
v___y_3761_ = v_size_3900_;
v___y_3762_ = v_l_3898_;
v___y_3763_ = v___x_3904_;
v___y_3764_ = v___x_3905_;
v___y_3765_ = v_k_3882_;
v___y_3766_ = v_k_3896_;
v___y_3767_ = v_r_3885_;
v___y_3768_ = v___x_3879_;
v___y_3769_ = v___x_3907_;
goto v___jp_3757_;
}
}
else
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3912_; 
v___x_3908_ = lean_nat_add(v___x_3879_, v_size_3880_);
v___x_3909_ = lean_nat_add(v___x_3908_, v_size_3881_);
lean_dec(v_size_3881_);
v___x_3910_ = lean_nat_add(v___x_3908_, v_size_3895_);
lean_dec(v___x_3908_);
lean_inc_ref(v_l_3721_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 4, v_l_3884_);
lean_ctor_set(v___x_3893_, 3, v_l_3721_);
lean_ctor_set(v___x_3893_, 2, v_v_3720_);
lean_ctor_set(v___x_3893_, 1, v_k_3719_);
lean_ctor_set(v___x_3893_, 0, v___x_3910_);
v___x_3912_ = v___x_3893_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v___x_3910_);
lean_ctor_set(v_reuseFailAlloc_3925_, 1, v_k_3719_);
lean_ctor_set(v_reuseFailAlloc_3925_, 2, v_v_3720_);
lean_ctor_set(v_reuseFailAlloc_3925_, 3, v_l_3721_);
lean_ctor_set(v_reuseFailAlloc_3925_, 4, v_l_3884_);
v___x_3912_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
v_isSharedCheck_3919_ = !lean_is_exclusive(v_l_3721_);
if (v_isSharedCheck_3919_ == 0)
{
lean_object* v_unused_3920_; lean_object* v_unused_3921_; lean_object* v_unused_3922_; lean_object* v_unused_3923_; lean_object* v_unused_3924_; 
v_unused_3920_ = lean_ctor_get(v_l_3721_, 4);
lean_dec(v_unused_3920_);
v_unused_3921_ = lean_ctor_get(v_l_3721_, 3);
lean_dec(v_unused_3921_);
v_unused_3922_ = lean_ctor_get(v_l_3721_, 2);
lean_dec(v_unused_3922_);
v_unused_3923_ = lean_ctor_get(v_l_3721_, 1);
lean_dec(v_unused_3923_);
v_unused_3924_ = lean_ctor_get(v_l_3721_, 0);
lean_dec(v_unused_3924_);
v___x_3914_ = v_l_3721_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_dec(v_l_3721_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
lean_ctor_set(v___x_3914_, 4, v_r_3885_);
lean_ctor_set(v___x_3914_, 3, v___x_3912_);
lean_ctor_set(v___x_3914_, 2, v_v_3883_);
lean_ctor_set(v___x_3914_, 1, v_k_3882_);
lean_ctor_set(v___x_3914_, 0, v___x_3909_);
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v___x_3909_);
lean_ctor_set(v_reuseFailAlloc_3918_, 1, v_k_3882_);
lean_ctor_set(v_reuseFailAlloc_3918_, 2, v_v_3883_);
lean_ctor_set(v_reuseFailAlloc_3918_, 3, v___x_3912_);
lean_ctor_set(v_reuseFailAlloc_3918_, 4, v_r_3885_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3932_; 
v_l_3932_ = lean_ctor_get(v_impl_3878_, 3);
lean_inc(v_l_3932_);
if (lean_obj_tag(v_l_3932_) == 0)
{
lean_object* v_r_3933_; lean_object* v_k_3934_; lean_object* v_v_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3956_; 
v_r_3933_ = lean_ctor_get(v_impl_3878_, 4);
v_k_3934_ = lean_ctor_get(v_impl_3878_, 1);
v_v_3935_ = lean_ctor_get(v_impl_3878_, 2);
v_isSharedCheck_3956_ = !lean_is_exclusive(v_impl_3878_);
if (v_isSharedCheck_3956_ == 0)
{
lean_object* v_unused_3957_; lean_object* v_unused_3958_; 
v_unused_3957_ = lean_ctor_get(v_impl_3878_, 3);
lean_dec(v_unused_3957_);
v_unused_3958_ = lean_ctor_get(v_impl_3878_, 0);
lean_dec(v_unused_3958_);
v___x_3937_ = v_impl_3878_;
v_isShared_3938_ = v_isSharedCheck_3956_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_r_3933_);
lean_inc(v_v_3935_);
lean_inc(v_k_3934_);
lean_dec(v_impl_3878_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3956_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v_k_3939_; lean_object* v_v_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3952_; 
v_k_3939_ = lean_ctor_get(v_l_3932_, 1);
v_v_3940_ = lean_ctor_get(v_l_3932_, 2);
v_isSharedCheck_3952_ = !lean_is_exclusive(v_l_3932_);
if (v_isSharedCheck_3952_ == 0)
{
lean_object* v_unused_3953_; lean_object* v_unused_3954_; lean_object* v_unused_3955_; 
v_unused_3953_ = lean_ctor_get(v_l_3932_, 4);
lean_dec(v_unused_3953_);
v_unused_3954_ = lean_ctor_get(v_l_3932_, 3);
lean_dec(v_unused_3954_);
v_unused_3955_ = lean_ctor_get(v_l_3932_, 0);
lean_dec(v_unused_3955_);
v___x_3942_ = v_l_3932_;
v_isShared_3943_ = v_isSharedCheck_3952_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_v_3940_);
lean_inc(v_k_3939_);
lean_dec(v_l_3932_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3952_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3944_; lean_object* v___x_3946_; 
v___x_3944_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3933_, 2);
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 4, v_r_3933_);
lean_ctor_set(v___x_3942_, 3, v_r_3933_);
lean_ctor_set(v___x_3942_, 2, v_v_3720_);
lean_ctor_set(v___x_3942_, 1, v_k_3719_);
lean_ctor_set(v___x_3942_, 0, v___x_3879_);
v___x_3946_ = v___x_3942_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v___x_3879_);
lean_ctor_set(v_reuseFailAlloc_3951_, 1, v_k_3719_);
lean_ctor_set(v_reuseFailAlloc_3951_, 2, v_v_3720_);
lean_ctor_set(v_reuseFailAlloc_3951_, 3, v_r_3933_);
lean_ctor_set(v_reuseFailAlloc_3951_, 4, v_r_3933_);
v___x_3946_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
lean_object* v___x_3948_; 
lean_inc(v_r_3933_);
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 3, v_r_3933_);
lean_ctor_set(v___x_3937_, 0, v___x_3879_);
v___x_3948_ = v___x_3937_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v___x_3879_);
lean_ctor_set(v_reuseFailAlloc_3950_, 1, v_k_3934_);
lean_ctor_set(v_reuseFailAlloc_3950_, 2, v_v_3935_);
lean_ctor_set(v_reuseFailAlloc_3950_, 3, v_r_3933_);
lean_ctor_set(v_reuseFailAlloc_3950_, 4, v_r_3933_);
v___x_3948_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
lean_object* v___x_3949_; 
v___x_3949_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3944_);
lean_ctor_set(v___x_3949_, 1, v_k_3939_);
lean_ctor_set(v___x_3949_, 2, v_v_3940_);
lean_ctor_set(v___x_3949_, 3, v___x_3946_);
lean_ctor_set(v___x_3949_, 4, v___x_3948_);
return v___x_3949_;
}
}
}
}
}
else
{
lean_object* v_r_3959_; 
v_r_3959_ = lean_ctor_get(v_impl_3878_, 4);
lean_inc(v_r_3959_);
if (lean_obj_tag(v_r_3959_) == 0)
{
lean_object* v_k_3960_; lean_object* v_v_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3970_; 
v_k_3960_ = lean_ctor_get(v_impl_3878_, 1);
v_v_3961_ = lean_ctor_get(v_impl_3878_, 2);
v_isSharedCheck_3970_ = !lean_is_exclusive(v_impl_3878_);
if (v_isSharedCheck_3970_ == 0)
{
lean_object* v_unused_3971_; lean_object* v_unused_3972_; lean_object* v_unused_3973_; 
v_unused_3971_ = lean_ctor_get(v_impl_3878_, 4);
lean_dec(v_unused_3971_);
v_unused_3972_ = lean_ctor_get(v_impl_3878_, 3);
lean_dec(v_unused_3972_);
v_unused_3973_ = lean_ctor_get(v_impl_3878_, 0);
lean_dec(v_unused_3973_);
v___x_3963_ = v_impl_3878_;
v_isShared_3964_ = v_isSharedCheck_3970_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_v_3961_);
lean_inc(v_k_3960_);
lean_dec(v_impl_3878_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3970_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3965_; lean_object* v___x_3967_; 
v___x_3965_ = lean_unsigned_to_nat(3u);
if (v_isShared_3964_ == 0)
{
lean_ctor_set(v___x_3963_, 4, v_l_3932_);
lean_ctor_set(v___x_3963_, 2, v_v_3720_);
lean_ctor_set(v___x_3963_, 1, v_k_3719_);
lean_ctor_set(v___x_3963_, 0, v___x_3879_);
v___x_3967_ = v___x_3963_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v___x_3879_);
lean_ctor_set(v_reuseFailAlloc_3969_, 1, v_k_3719_);
lean_ctor_set(v_reuseFailAlloc_3969_, 2, v_v_3720_);
lean_ctor_set(v_reuseFailAlloc_3969_, 3, v_l_3932_);
lean_ctor_set(v_reuseFailAlloc_3969_, 4, v_l_3932_);
v___x_3967_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
lean_object* v___x_3968_; 
v___x_3968_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3965_);
lean_ctor_set(v___x_3968_, 1, v_k_3960_);
lean_ctor_set(v___x_3968_, 2, v_v_3961_);
lean_ctor_set(v___x_3968_, 3, v___x_3967_);
lean_ctor_set(v___x_3968_, 4, v_r_3959_);
return v___x_3968_;
}
}
}
else
{
lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3974_ = lean_unsigned_to_nat(2u);
v___x_3975_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3975_, 0, v___x_3974_);
lean_ctor_set(v___x_3975_, 1, v_k_3719_);
lean_ctor_set(v___x_3975_, 2, v_v_3720_);
lean_ctor_set(v___x_3975_, 3, v_r_3959_);
lean_ctor_set(v___x_3975_, 4, v_impl_3878_);
return v___x_3975_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3983_ = lean_unsigned_to_nat(1u);
v___x_3984_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3983_);
lean_ctor_set(v___x_3984_, 1, v_k_3701_);
lean_ctor_set(v___x_3984_, 2, v_v_3702_);
lean_ctor_set(v___x_3984_, 3, v_t_3703_);
lean_ctor_set(v___x_3984_, 4, v_t_3703_);
return v___x_3984_;
}
v___jp_3704_:
{
lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3715_ = lean_nat_add(v___y_3709_, v___y_3714_);
lean_dec(v___y_3714_);
lean_dec(v___y_3709_);
v___x_3716_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
lean_ctor_set(v___x_3716_, 1, v___y_3711_);
lean_ctor_set(v___x_3716_, 2, v___y_3706_);
lean_ctor_set(v___x_3716_, 3, v___y_3708_);
lean_ctor_set(v___x_3716_, 4, v___y_3713_);
v___x_3717_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3717_, 0, v___y_3710_);
lean_ctor_set(v___x_3717_, 1, v___y_3712_);
lean_ctor_set(v___x_3717_, 2, v___y_3705_);
lean_ctor_set(v___x_3717_, 3, v___y_3707_);
lean_ctor_set(v___x_3717_, 4, v___x_3716_);
return v___x_3717_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(lean_object* v_t_3985_, lean_object* v_k_3986_, lean_object* v_fallback_3987_){
_start:
{
if (lean_obj_tag(v_t_3985_) == 0)
{
lean_object* v_k_3988_; lean_object* v_v_3989_; lean_object* v_l_3990_; lean_object* v_r_3991_; uint8_t v___y_3993_; lean_object* v_fst_3996_; lean_object* v_snd_3997_; lean_object* v_fst_3998_; lean_object* v_snd_3999_; uint8_t v___x_4000_; 
v_k_3988_ = lean_ctor_get(v_t_3985_, 1);
v_v_3989_ = lean_ctor_get(v_t_3985_, 2);
v_l_3990_ = lean_ctor_get(v_t_3985_, 3);
v_r_3991_ = lean_ctor_get(v_t_3985_, 4);
v_fst_3996_ = lean_ctor_get(v_k_3986_, 0);
v_snd_3997_ = lean_ctor_get(v_k_3986_, 1);
v_fst_3998_ = lean_ctor_get(v_k_3988_, 0);
v_snd_3999_ = lean_ctor_get(v_k_3988_, 1);
v___x_4000_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_fst_3996_, v_fst_3998_);
if (v___x_4000_ == 1)
{
uint8_t v___x_4001_; 
v___x_4001_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_snd_3997_, v_snd_3999_);
v___y_3993_ = v___x_4001_;
goto v___jp_3992_;
}
else
{
v___y_3993_ = v___x_4000_;
goto v___jp_3992_;
}
v___jp_3992_:
{
switch(v___y_3993_)
{
case 0:
{
v_t_3985_ = v_l_3990_;
goto _start;
}
case 1:
{
lean_inc(v_v_3989_);
return v_v_3989_;
}
default: 
{
v_t_3985_ = v_r_3991_;
goto _start;
}
}
}
}
else
{
lean_inc(v_fallback_3987_);
return v_fallback_3987_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg___boxed(lean_object* v_t_4002_, lean_object* v_k_4003_, lean_object* v_fallback_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_t_4002_, v_k_4003_, v_fallback_4004_);
lean_dec(v_fallback_4004_);
lean_dec_ref(v_k_4003_);
lean_dec(v_t_4002_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(lean_object* v___x_4006_, lean_object* v_as_4007_, size_t v_sz_4008_, size_t v_i_4009_, lean_object* v_b_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
uint8_t v___x_4014_; 
v___x_4014_ = lean_usize_dec_lt(v_i_4009_, v_sz_4008_);
if (v___x_4014_ == 0)
{
lean_object* v___x_4015_; 
lean_dec(v___x_4006_);
v___x_4015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4015_, 0, v_b_4010_);
return v___x_4015_;
}
else
{
lean_object* v_a_4016_; lean_object* v_fst_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4045_; 
v_a_4016_ = lean_array_uget(v_as_4007_, v_i_4009_);
v_fst_4017_ = lean_ctor_get(v_a_4016_, 0);
v_isSharedCheck_4045_ = !lean_is_exclusive(v_a_4016_);
if (v_isSharedCheck_4045_ == 0)
{
lean_object* v_unused_4046_; 
v_unused_4046_ = lean_ctor_get(v_a_4016_, 1);
lean_dec(v_unused_4046_);
v___x_4019_ = v_a_4016_;
v_isShared_4020_ = v_isSharedCheck_4045_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_fst_4017_);
lean_dec(v_a_4016_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4045_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4021_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_4017_);
v___x_4022_ = l_Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0(v_fst_4017_, v___y_4011_, v___y_4012_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; lean_object* v___y_4025_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___x_4022_, 1);
if (lean_obj_tag(v_a_4023_) == 0)
{
lean_inc(v___x_4006_);
v___y_4025_ = v___x_4006_;
goto v___jp_4024_;
}
else
{
lean_object* v_val_4036_; 
v_val_4036_ = lean_ctor_get(v_a_4023_, 0);
lean_inc(v_val_4036_);
lean_dec_ref_known(v_a_4023_, 1);
v___y_4025_ = v_val_4036_;
goto v___jp_4024_;
}
v___jp_4024_:
{
lean_object* v___x_4027_; 
if (v_isShared_4020_ == 0)
{
lean_ctor_set(v___x_4019_, 1, v_fst_4017_);
lean_ctor_set(v___x_4019_, 0, v___y_4025_);
v___x_4027_ = v___x_4019_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v___y_4025_);
lean_ctor_set(v_reuseFailAlloc_4035_, 1, v_fst_4017_);
v___x_4027_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; size_t v___x_4032_; size_t v___x_4033_; 
v___x_4028_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_b_4010_, v___x_4027_, v___x_4021_);
v___x_4029_ = lean_unsigned_to_nat(1u);
v___x_4030_ = lean_nat_add(v___x_4028_, v___x_4029_);
lean_dec(v___x_4028_);
v___x_4031_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v___x_4027_, v___x_4030_, v_b_4010_);
v___x_4032_ = ((size_t)1ULL);
v___x_4033_ = lean_usize_add(v_i_4009_, v___x_4032_);
v_i_4009_ = v___x_4033_;
v_b_4010_ = v___x_4031_;
goto _start;
}
}
}
else
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4044_; 
lean_del_object(v___x_4019_);
lean_dec(v_fst_4017_);
lean_dec(v_b_4010_);
lean_dec(v___x_4006_);
v_a_4037_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4039_ = v___x_4022_;
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v___x_4022_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4042_; 
if (v_isShared_4040_ == 0)
{
v___x_4042_ = v___x_4039_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_a_4037_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
return v___x_4042_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7___boxed(lean_object* v___x_4047_, lean_object* v_as_4048_, lean_object* v_sz_4049_, lean_object* v_i_4050_, lean_object* v_b_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_){
_start:
{
size_t v_sz_boxed_4055_; size_t v_i_boxed_4056_; lean_object* v_res_4057_; 
v_sz_boxed_4055_ = lean_unbox_usize(v_sz_4049_);
lean_dec(v_sz_4049_);
v_i_boxed_4056_ = lean_unbox_usize(v_i_4050_);
lean_dec(v_i_4050_);
v_res_4057_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(v___x_4047_, v_as_4048_, v_sz_boxed_4055_, v_i_boxed_4056_, v_b_4051_, v___y_4052_, v___y_4053_);
lean_dec(v___y_4053_);
lean_dec_ref(v___y_4052_);
lean_dec_ref(v_as_4048_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(lean_object* v_fst_4058_, lean_object* v_init_4059_, lean_object* v_x_4060_){
_start:
{
if (lean_obj_tag(v_x_4060_) == 0)
{
lean_object* v_k_4062_; lean_object* v_v_4063_; lean_object* v_l_4064_; lean_object* v_r_4065_; uint8_t v___x_4066_; lean_object* v___x_4067_; lean_object* v_a_4068_; lean_object* v_a_4069_; lean_object* v_fst_4070_; lean_object* v_snd_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4085_; 
v_k_4062_ = lean_ctor_get(v_x_4060_, 1);
lean_inc(v_k_4062_);
v_v_4063_ = lean_ctor_get(v_x_4060_, 2);
lean_inc(v_v_4063_);
v_l_4064_ = lean_ctor_get(v_x_4060_, 3);
lean_inc(v_l_4064_);
v_r_4065_ = lean_ctor_get(v_x_4060_, 4);
lean_inc(v_r_4065_);
lean_dec_ref_known(v_x_4060_, 5);
v___x_4066_ = 1;
lean_inc_ref(v_fst_4058_);
v___x_4067_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4058_, v_init_4059_, v_l_4064_);
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref(v___x_4067_);
v_a_4069_ = lean_ctor_get(v_a_4068_, 0);
lean_inc(v_a_4069_);
lean_dec(v_a_4068_);
v_fst_4070_ = lean_ctor_get(v_k_4062_, 0);
v_snd_4071_ = lean_ctor_get(v_k_4062_, 1);
v_isSharedCheck_4085_ = !lean_is_exclusive(v_k_4062_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4073_ = v_k_4062_;
v_isShared_4074_ = v_isSharedCheck_4085_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_snd_4071_);
lean_inc(v_fst_4070_);
lean_dec(v_k_4062_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4085_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v_optName_4075_; lean_object* v___x_4076_; lean_object* v___x_4078_; 
v_optName_4075_ = lean_ctor_get(v_fst_4058_, 1);
lean_inc(v_optName_4075_);
v___x_4076_ = l_Lean_Name_toString(v_optName_4075_, v___x_4066_);
if (v_isShared_4074_ == 0)
{
lean_ctor_set_tag(v___x_4073_, 1);
v___x_4078_ = v___x_4073_;
goto v_reusejp_4077_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_fst_4070_);
lean_ctor_set(v_reuseFailAlloc_4084_, 1, v_snd_4071_);
v___x_4078_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4077_;
}
v_reusejp_4077_:
{
double v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
v___x_4079_ = lean_float_of_nat(v_v_4063_);
v___x_4080_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_4080_, 0, v___x_4079_);
v___x_4081_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4076_);
lean_ctor_set(v___x_4081_, 1, v___x_4078_);
lean_ctor_set(v___x_4081_, 2, v___x_4080_);
v___x_4082_ = lean_array_push(v_a_4069_, v___x_4081_);
v_init_4059_ = v___x_4082_;
v_x_4060_ = v_r_4065_;
goto _start;
}
}
}
else
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
lean_dec_ref(v_fst_4058_);
v___x_4086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4086_, 0, v_init_4059_);
v___x_4087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4087_, 0, v___x_4086_);
return v___x_4087_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg___boxed(lean_object* v_fst_4088_, lean_object* v_init_4089_, lean_object* v_x_4090_, lean_object* v___y_4091_){
_start:
{
lean_object* v_res_4092_; 
v_res_4092_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4088_, v_init_4089_, v_x_4090_);
return v_res_4092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(lean_object* v___x_4093_, lean_object* v_as_4094_, size_t v_sz_4095_, size_t v_i_4096_, lean_object* v_b_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_){
_start:
{
lean_object* v_a_4102_; uint8_t v___x_4106_; 
v___x_4106_ = lean_usize_dec_lt(v_i_4096_, v_sz_4095_);
if (v___x_4106_ == 0)
{
lean_object* v___x_4107_; 
lean_dec(v___x_4093_);
v___x_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4107_, 0, v_b_4097_);
return v___x_4107_;
}
else
{
lean_object* v_a_4108_; lean_object* v_snd_4109_; lean_object* v_fst_4110_; lean_object* v_size_4111_; lean_object* v_buckets_4112_; lean_object* v___x_4113_; lean_object* v___y_4115_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; uint8_t v___x_4142_; 
v_a_4108_ = lean_array_uget_borrowed(v_as_4094_, v_i_4096_);
v_snd_4109_ = lean_ctor_get(v_a_4108_, 1);
v_fst_4110_ = lean_ctor_get(v_a_4108_, 0);
v_size_4111_ = lean_ctor_get(v_snd_4109_, 0);
v_buckets_4112_ = lean_ctor_get(v_snd_4109_, 1);
v___x_4113_ = lean_box(1);
v___x_4139_ = lean_mk_empty_array_with_capacity(v_size_4111_);
v___x_4140_ = lean_unsigned_to_nat(0u);
v___x_4141_ = lean_array_get_size(v_buckets_4112_);
v___x_4142_ = lean_nat_dec_lt(v___x_4140_, v___x_4141_);
if (v___x_4142_ == 0)
{
v___y_4115_ = v___x_4139_;
goto v___jp_4114_;
}
else
{
size_t v___x_4143_; size_t v___x_4144_; lean_object* v___x_4145_; 
v___x_4143_ = ((size_t)0ULL);
v___x_4144_ = lean_usize_of_nat(v___x_4141_);
v___x_4145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__3(v_buckets_4112_, v___x_4143_, v___x_4144_, v___x_4139_);
v___y_4115_ = v___x_4145_;
goto v___jp_4114_;
}
v___jp_4114_:
{
size_t v_sz_4116_; size_t v___x_4117_; lean_object* v___x_4118_; 
v_sz_4116_ = lean_array_size(v___y_4115_);
v___x_4117_ = ((size_t)0ULL);
lean_inc(v___x_4093_);
v___x_4118_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__7(v___x_4093_, v___y_4115_, v_sz_4116_, v___x_4117_, v___x_4113_, v___y_4098_, v___y_4099_);
lean_dec_ref(v___y_4115_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v_a_4119_; lean_object* v___x_4120_; 
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4119_);
lean_dec_ref_known(v___x_4118_, 1);
lean_inc(v_fst_4110_);
v___x_4120_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4110_, v_b_4097_, v_a_4119_);
if (lean_obj_tag(v___x_4120_) == 0)
{
lean_object* v_a_4121_; lean_object* v_a_4122_; 
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
lean_inc(v_a_4121_);
lean_dec_ref_known(v___x_4120_, 1);
v_a_4122_ = lean_ctor_get(v_a_4121_, 0);
lean_inc(v_a_4122_);
lean_dec(v_a_4121_);
v_a_4102_ = v_a_4122_;
goto v___jp_4101_;
}
else
{
lean_object* v_a_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4130_; 
lean_dec(v___x_4093_);
v_a_4123_ = lean_ctor_get(v___x_4120_, 0);
v_isSharedCheck_4130_ = !lean_is_exclusive(v___x_4120_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4125_ = v___x_4120_;
v_isShared_4126_ = v_isSharedCheck_4130_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_a_4123_);
lean_dec(v___x_4120_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4130_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4128_; 
if (v_isShared_4126_ == 0)
{
v___x_4128_ = v___x_4125_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v_a_4123_);
v___x_4128_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
return v___x_4128_;
}
}
}
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_dec_ref(v_b_4097_);
lean_dec(v___x_4093_);
v_a_4131_ = lean_ctor_get(v___x_4118_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4118_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4118_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4118_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
}
v___jp_4101_:
{
size_t v___x_4103_; size_t v___x_4104_; 
v___x_4103_ = ((size_t)1ULL);
v___x_4104_ = lean_usize_add(v_i_4096_, v___x_4103_);
v_i_4096_ = v___x_4104_;
v_b_4097_ = v_a_4102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9___boxed(lean_object* v___x_4146_, lean_object* v_as_4147_, lean_object* v_sz_4148_, lean_object* v_i_4149_, lean_object* v_b_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
size_t v_sz_boxed_4154_; size_t v_i_boxed_4155_; lean_object* v_res_4156_; 
v_sz_boxed_4154_ = lean_unbox_usize(v_sz_4148_);
lean_dec(v_sz_4148_);
v_i_boxed_4155_ = lean_unbox_usize(v_i_4149_);
lean_dec(v_i_4149_);
v_res_4156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(v___x_4146_, v_as_4147_, v_sz_boxed_4154_, v_i_boxed_4155_, v_b_4150_, v___y_4151_, v___y_4152_);
lean_dec(v___y_4152_);
lean_dec_ref(v___y_4151_);
lean_dec_ref(v_as_4147_);
return v_res_4156_;
}
}
static lean_object* _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5(void){
_start:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; 
v___x_4163_ = l_Lean_maxRecDepth;
v___x_4164_ = l_Lean_Options_empty;
v___x_4165_ = l_Lean_Option_get___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks_spec__2(v___x_4164_, v___x_4163_);
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(lean_object* v_args_4166_, lean_object* v_linterOpts_4167_, lean_object* v_sp_4168_, lean_object* v_env_4169_, lean_object* v_mod_4170_){
_start:
{
lean_object* v_msg_4173_; lean_object* v_a_4178_; lean_object* v_a_4182_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; uint16_t v___x_4207_; uint8_t v___x_4208_; uint8_t v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; uint8_t v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v_a_4224_; lean_object* v___y_4228_; lean_object* v___y_4231_; uint8_t v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4234_; lean_object* v___y_4235_; uint8_t v___y_4236_; lean_object* v___y_4237_; uint8_t v___y_4238_; lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4310_; lean_object* v___y_4311_; uint8_t v___y_4312_; uint8_t v___y_4313_; lean_object* v___y_4323_; lean_object* v___y_4324_; lean_object* v___y_4325_; uint8_t v___y_4326_; lean_object* v___y_4327_; lean_object* v_fileName_4353_; lean_object* v_fileMap_4354_; lean_object* v_currNamespace_4355_; lean_object* v_openDecls_4356_; lean_object* v_initHeartbeats_4357_; lean_object* v_maxHeartbeats_4358_; lean_object* v_quotContext_4359_; lean_object* v_currMacroScope_4360_; lean_object* v_cancelTk_x3f_4361_; lean_object* v_inheritedTraceOptions_4362_; lean_object* v_currRecDepth_4363_; lean_object* v_ref_4364_; uint8_t v_suppressElabErrors_4365_; uint8_t v_checkDeprecated_4366_; uint8_t v_isRecordingDeps_4367_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v_nextMacroScope_4388_; lean_object* v_ngen_4389_; lean_object* v_auxDeclNGen_4390_; lean_object* v_traceState_4391_; lean_object* v_recordedDeps_4392_; lean_object* v_messages_4393_; lean_object* v_infoState_4394_; lean_object* v_snapshotTasks_4395_; lean_object* v___y_4396_; lean_object* v___x_4399_; uint8_t v___y_4401_; lean_object* v_env_4415_; uint8_t v___x_4416_; uint8_t v___x_4417_; 
v___x_4196_ = l_Lean_Name_getRoot(v_mod_4170_);
v___x_4197_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_4198_ = l_Lean_instInhabitedFileMap_default;
v___x_4199_ = l_Lean_Options_empty;
v___x_4200_ = lean_box(0);
v___x_4201_ = lean_box(0);
v___x_4202_ = lean_unsigned_to_nat(0u);
v___x_4203_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_4204_ = l_Lean_firstFrontendMacroScope;
v___x_4205_ = lean_box(0);
v___x_4206_ = lean_box(0);
v___x_4207_ = lean_uint16_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_4208_ = 0;
v___x_4209_ = 0;
v___x_4210_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7);
v___x_4211_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10));
v___x_4212_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11));
v___x_4213_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14);
v___x_4214_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_4215_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0));
v___x_4216_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_4217_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19);
v___x_4218_ = 1;
v___x_4219_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_4220_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4220_, 0, v_env_4169_);
lean_ctor_set(v___x_4220_, 1, v___x_4210_);
lean_ctor_set(v___x_4220_, 2, v___x_4211_);
lean_ctor_set(v___x_4220_, 3, v___x_4212_);
lean_ctor_set(v___x_4220_, 4, v___x_4213_);
lean_ctor_set(v___x_4220_, 5, v___x_4214_);
lean_ctor_set(v___x_4220_, 6, v___x_4216_);
lean_ctor_set(v___x_4220_, 7, v___x_4217_);
lean_ctor_set(v___x_4220_, 8, v___x_4219_);
lean_ctor_set(v___x_4220_, 9, v___x_4215_);
v___x_4221_ = lean_io_get_num_heartbeats();
v___x_4222_ = lean_st_mk_ref(v___x_4220_);
v___x_4385_ = l_Lean_inheritedTraceOptions;
v___x_4386_ = lean_st_ref_get(v___x_4385_);
v___x_4399_ = lean_st_ref_get(v___x_4222_);
v_env_4415_ = lean_ctor_get(v___x_4399_, 0);
lean_inc_ref(v_env_4415_);
lean_dec(v___x_4399_);
v___x_4416_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4415_);
lean_dec_ref(v_env_4415_);
v___x_4417_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22);
if (v___x_4417_ == 0)
{
if (v___x_4416_ == 0)
{
v___y_4401_ = v___x_4416_;
goto v___jp_4400_;
}
else
{
v_fileName_4353_ = v___x_4197_;
v_fileMap_4354_ = v___x_4198_;
v_currNamespace_4355_ = v___x_4200_;
v_openDecls_4356_ = v___x_4201_;
v_initHeartbeats_4357_ = v___x_4221_;
v_maxHeartbeats_4358_ = v___x_4203_;
v_quotContext_4359_ = v___x_4200_;
v_currMacroScope_4360_ = v___x_4204_;
v_cancelTk_x3f_4361_ = v___x_4205_;
v_inheritedTraceOptions_4362_ = v___x_4386_;
v_currRecDepth_4363_ = v___x_4202_;
v_ref_4364_ = v___x_4206_;
v_suppressElabErrors_4365_ = v___x_4208_;
v_checkDeprecated_4366_ = v___x_4209_;
v_isRecordingDeps_4367_ = v___x_4208_;
goto v___jp_4352_;
}
}
else
{
if (v___x_4416_ == 0)
{
v_fileName_4353_ = v___x_4197_;
v_fileMap_4354_ = v___x_4198_;
v_currNamespace_4355_ = v___x_4200_;
v_openDecls_4356_ = v___x_4201_;
v_initHeartbeats_4357_ = v___x_4221_;
v_maxHeartbeats_4358_ = v___x_4203_;
v_quotContext_4359_ = v___x_4200_;
v_currMacroScope_4360_ = v___x_4204_;
v_cancelTk_x3f_4361_ = v___x_4205_;
v_inheritedTraceOptions_4362_ = v___x_4386_;
v_currRecDepth_4363_ = v___x_4202_;
v_ref_4364_ = v___x_4206_;
v_suppressElabErrors_4365_ = v___x_4208_;
v_checkDeprecated_4366_ = v___x_4209_;
v_isRecordingDeps_4367_ = v___x_4208_;
goto v___jp_4352_;
}
else
{
v___y_4401_ = v___x_4208_;
goto v___jp_4400_;
}
}
v___jp_4172_:
{
lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4174_ = l_Lean_MessageData_toString(v_msg_4173_);
v___x_4175_ = lean_mk_io_user_error(v___x_4174_);
v___x_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4176_, 0, v___x_4175_);
return v___x_4176_;
}
v___jp_4177_:
{
lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4179_ = lean_mk_io_user_error(v_a_4178_);
v___x_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4180_, 0, v___x_4179_);
return v___x_4180_;
}
v___jp_4181_:
{
if (lean_obj_tag(v_a_4182_) == 0)
{
lean_object* v_msg_4183_; 
v_msg_4183_ = lean_ctor_get(v_a_4182_, 1);
lean_inc_ref(v_msg_4183_);
lean_dec_ref_known(v_a_4182_, 2);
v_msg_4173_ = v_msg_4183_;
goto v___jp_4172_;
}
else
{
lean_object* v_id_4184_; lean_object* v___x_4185_; 
v_id_4184_ = lean_ctor_get(v_a_4182_, 0);
lean_inc(v_id_4184_);
lean_dec_ref_known(v_a_4182_, 2);
v___x_4185_ = l_Lean_InternalExceptionId_getName(v_id_4184_);
if (lean_obj_tag(v___x_4185_) == 0)
{
lean_object* v_a_4186_; lean_object* v___x_4187_; uint8_t v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
lean_dec(v_id_4184_);
v_a_4186_ = lean_ctor_get(v___x_4185_, 0);
lean_inc(v_a_4186_);
lean_dec_ref_known(v___x_4185_, 1);
v___x_4187_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_4188_ = 1;
v___x_4189_ = l_Lean_Name_toString(v_a_4186_, v___x_4188_);
v___x_4190_ = lean_string_append(v___x_4187_, v___x_4189_);
lean_dec_ref(v___x_4189_);
v_a_4178_ = v___x_4190_;
goto v___jp_4177_;
}
else
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; 
lean_dec_ref_known(v___x_4185_, 1);
v___x_4191_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_4192_ = l_Nat_reprFast(v_id_4184_);
v___x_4193_ = lean_string_append(v___x_4191_, v___x_4192_);
lean_dec_ref(v___x_4192_);
v___x_4194_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_4195_ = lean_string_append(v___x_4193_, v___x_4194_);
v_a_4178_ = v___x_4195_;
goto v___jp_4177_;
}
}
}
v___jp_4223_:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___x_4225_ = lean_st_ref_get(v___x_4222_);
lean_dec(v___x_4222_);
lean_dec(v___x_4225_);
v___x_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4226_, 0, v_a_4224_);
return v___x_4226_;
}
v___jp_4227_:
{
lean_object* v_a_4229_; 
v_a_4229_ = lean_ctor_get(v___y_4228_, 0);
lean_inc(v_a_4229_);
lean_dec_ref(v___y_4228_);
v_a_4224_ = v_a_4229_;
goto v___jp_4223_;
}
v___jp_4230_:
{
switch(v___y_4236_)
{
case 0:
{
lean_dec(v_sp_4168_);
if (v___y_4238_ == 0)
{
lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
lean_dec_ref(v___y_4237_);
lean_dec_ref(v___y_4235_);
lean_dec_ref(v___y_4234_);
v___x_4239_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__0));
v___x_4240_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4170_, v___x_4218_);
v___x_4241_ = lean_string_append(v___x_4239_, v___x_4240_);
lean_dec_ref(v___x_4240_);
v___x_4242_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1));
v___x_4243_ = lean_string_append(v___x_4241_, v___x_4242_);
v___x_4244_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_4243_);
if (lean_obj_tag(v___x_4244_) == 0)
{
lean_object* v_a_4245_; lean_object* v___x_4246_; 
v_a_4245_ = lean_ctor_get(v___x_4244_, 0);
lean_inc(v_a_4245_);
lean_dec_ref_known(v___x_4244_, 1);
v___x_4246_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_4238_, v_a_4245_, v___y_4233_, v___y_4231_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4233_);
v___y_4228_ = v___x_4246_;
goto v___jp_4227_;
}
else
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4256_; 
lean_dec_ref(v___y_4233_);
lean_dec(v___y_4231_);
lean_dec(v___x_4222_);
v_a_4247_ = lean_ctor_get(v___x_4244_, 0);
v_isSharedCheck_4256_ = !lean_is_exclusive(v___x_4244_);
if (v_isSharedCheck_4256_ == 0)
{
v___x_4249_ = v___x_4244_;
v_isShared_4250_ = v_isSharedCheck_4256_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4244_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4256_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4251_; lean_object* v___x_4253_; 
v___x_4251_ = lean_io_error_to_string(v_a_4247_);
if (v_isShared_4250_ == 0)
{
lean_ctor_set_tag(v___x_4249_, 3);
lean_ctor_set(v___x_4249_, 0, v___x_4251_);
v___x_4253_ = v___x_4249_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v___x_4251_);
v___x_4253_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
lean_object* v___x_4254_; 
v___x_4254_ = l_Lean_MessageData_ofFormat(v___x_4253_);
v_msg_4173_ = v___x_4254_;
goto v___jp_4172_;
}
}
}
}
else
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v___x_4257_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__2));
v___x_4258_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4170_, v___y_4238_);
v___x_4259_ = lean_string_append(v___x_4257_, v___x_4258_);
lean_dec_ref(v___x_4258_);
v___x_4260_ = lean_array_get_size(v___y_4235_);
lean_dec_ref(v___y_4235_);
v___x_4261_ = l_Lean_Linter_EnvLinter_formatLinterResults(v___y_4237_, v___y_4234_, v___x_4218_, v___x_4259_, v___x_4260_, v___x_4218_, v___y_4233_, v___y_4231_);
lean_dec_ref(v___y_4234_);
if (lean_obj_tag(v___x_4261_) == 0)
{
lean_object* v_a_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
v_a_4262_ = lean_ctor_get(v___x_4261_, 0);
lean_inc(v_a_4262_);
lean_dec_ref_known(v___x_4261_, 1);
v___x_4263_ = l_Lean_MessageData_toString(v_a_4262_);
v___x_4264_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_4263_);
if (lean_obj_tag(v___x_4264_) == 0)
{
lean_object* v_a_4265_; lean_object* v___x_4266_; 
v_a_4265_ = lean_ctor_get(v___x_4264_, 0);
lean_inc(v_a_4265_);
lean_dec_ref_known(v___x_4264_, 1);
v___x_4266_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___lam__0(v___y_4238_, v_a_4265_, v___y_4233_, v___y_4231_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4233_);
v___y_4228_ = v___x_4266_;
goto v___jp_4227_;
}
else
{
lean_object* v_a_4267_; lean_object* v___x_4269_; uint8_t v_isShared_4270_; uint8_t v_isSharedCheck_4276_; 
lean_dec_ref(v___y_4233_);
lean_dec(v___y_4231_);
lean_dec(v___x_4222_);
v_a_4267_ = lean_ctor_get(v___x_4264_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v___x_4264_);
if (v_isSharedCheck_4276_ == 0)
{
v___x_4269_ = v___x_4264_;
v_isShared_4270_ = v_isSharedCheck_4276_;
goto v_resetjp_4268_;
}
else
{
lean_inc(v_a_4267_);
lean_dec(v___x_4264_);
v___x_4269_ = lean_box(0);
v_isShared_4270_ = v_isSharedCheck_4276_;
goto v_resetjp_4268_;
}
v_resetjp_4268_:
{
lean_object* v___x_4271_; lean_object* v___x_4273_; 
v___x_4271_ = lean_io_error_to_string(v_a_4267_);
if (v_isShared_4270_ == 0)
{
lean_ctor_set_tag(v___x_4269_, 3);
lean_ctor_set(v___x_4269_, 0, v___x_4271_);
v___x_4273_ = v___x_4269_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v___x_4271_);
v___x_4273_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
lean_object* v___x_4274_; 
v___x_4274_ = l_Lean_MessageData_ofFormat(v___x_4273_);
v_msg_4173_ = v___x_4274_;
goto v___jp_4172_;
}
}
}
}
else
{
lean_object* v_a_4277_; 
lean_dec_ref(v___y_4233_);
lean_dec(v___y_4231_);
lean_dec(v___x_4222_);
v_a_4277_ = lean_ctor_get(v___x_4261_, 0);
lean_inc(v_a_4277_);
lean_dec_ref_known(v___x_4261_, 1);
v_a_4182_ = v_a_4277_;
goto v___jp_4181_;
}
}
}
case 1:
{
lean_object* v___x_4278_; lean_object* v_env_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; size_t v_sz_4283_; size_t v___x_4284_; lean_object* v___x_4285_; 
lean_dec_ref(v___y_4235_);
lean_dec_ref(v___y_4234_);
lean_dec(v_mod_4170_);
v___x_4278_ = lean_st_ref_get(v___y_4231_);
v_env_4279_ = lean_ctor_get(v___x_4278_, 0);
lean_inc_ref(v_env_4279_);
lean_dec(v___x_4278_);
v___x_4280_ = l_Lean_Environment_mainModule(v_env_4279_);
lean_dec_ref(v_env_4279_);
v___x_4281_ = lean_box(v___y_4232_);
v___x_4282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4215_);
lean_ctor_set(v___x_4282_, 1, v___x_4281_);
v_sz_4283_ = lean_array_size(v___y_4237_);
v___x_4284_ = ((size_t)0ULL);
v___x_4285_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__4(v_sp_4168_, v___x_4280_, v___y_4237_, v_sz_4283_, v___x_4284_, v___x_4282_, v___y_4233_, v___y_4231_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4233_);
lean_dec_ref(v___y_4237_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; lean_object* v_fst_4287_; lean_object* v_snd_4288_; lean_object* v___x_4289_; uint8_t v___x_4290_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
lean_inc(v_a_4286_);
lean_dec_ref_known(v___x_4285_, 1);
v_fst_4287_ = lean_ctor_get(v_a_4286_, 0);
lean_inc(v_fst_4287_);
v_snd_4288_ = lean_ctor_get(v_a_4286_, 1);
lean_inc(v_snd_4288_);
lean_dec(v_a_4286_);
v___x_4289_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_4289_, 0, v_fst_4287_);
v___x_4290_ = lean_unbox(v_snd_4288_);
lean_dec(v_snd_4288_);
lean_ctor_set_uint8(v___x_4289_, sizeof(void*)*1, v___x_4290_);
v_a_4224_ = v___x_4289_;
goto v___jp_4223_;
}
else
{
lean_object* v_a_4291_; 
lean_dec(v___x_4222_);
v_a_4291_ = lean_ctor_get(v___x_4285_, 0);
lean_inc(v_a_4291_);
lean_dec_ref_known(v___x_4285_, 1);
v_a_4182_ = v_a_4291_;
goto v___jp_4181_;
}
}
default: 
{
lean_object* v___x_4292_; lean_object* v_env_4293_; lean_object* v___x_4294_; size_t v_sz_4295_; size_t v___x_4296_; lean_object* v___x_4297_; 
lean_dec_ref(v___y_4235_);
lean_dec_ref(v___y_4234_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
v___x_4292_ = lean_st_ref_get(v___y_4231_);
v_env_4293_ = lean_ctor_get(v___x_4292_, 0);
lean_inc_ref(v_env_4293_);
lean_dec(v___x_4292_);
v___x_4294_ = l_Lean_Environment_mainModule(v_env_4293_);
lean_dec_ref(v_env_4293_);
v_sz_4295_ = lean_array_size(v___y_4237_);
v___x_4296_ = ((size_t)0ULL);
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__9(v___x_4294_, v___y_4237_, v_sz_4295_, v___x_4296_, v___x_4215_, v___y_4233_, v___y_4231_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4233_);
lean_dec_ref(v___y_4237_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4305_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4300_ = v___x_4297_;
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_a_4298_);
lean_dec(v___x_4297_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4303_; 
if (v_isShared_4301_ == 0)
{
lean_ctor_set_tag(v___x_4300_, 2);
v___x_4303_ = v___x_4300_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4304_; 
v_reuseFailAlloc_4304_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4304_, 0, v_a_4298_);
v___x_4303_ = v_reuseFailAlloc_4304_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
v_a_4224_ = v___x_4303_;
goto v___jp_4223_;
}
}
}
else
{
lean_object* v_a_4306_; 
lean_dec(v___x_4222_);
v_a_4306_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4306_);
lean_dec_ref_known(v___x_4297_, 1);
v_a_4182_ = v_a_4306_;
goto v___jp_4181_;
}
}
}
}
v___jp_4307_:
{
lean_object* v___x_4314_; 
lean_inc_ref(v___y_4310_);
v___x_4314_ = l_Lean_Linter_EnvLinter_lintCore(v___y_4311_, v___y_4310_, v___y_4309_, v___y_4308_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v___x_4316_; uint8_t v___x_4317_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref_known(v___x_4314_, 1);
v___x_4316_ = lean_array_get_size(v_a_4315_);
v___x_4317_ = lean_nat_dec_lt(v___x_4202_, v___x_4316_);
if (v___x_4317_ == 0)
{
v___y_4231_ = v___y_4308_;
v___y_4232_ = v___y_4313_;
v___y_4233_ = v___y_4309_;
v___y_4234_ = v___y_4311_;
v___y_4235_ = v___y_4310_;
v___y_4236_ = v___y_4312_;
v___y_4237_ = v_a_4315_;
v___y_4238_ = v___x_4317_;
goto v___jp_4230_;
}
else
{
if (v___x_4317_ == 0)
{
v___y_4231_ = v___y_4308_;
v___y_4232_ = v___y_4313_;
v___y_4233_ = v___y_4309_;
v___y_4234_ = v___y_4311_;
v___y_4235_ = v___y_4310_;
v___y_4236_ = v___y_4312_;
v___y_4237_ = v_a_4315_;
v___y_4238_ = v___x_4317_;
goto v___jp_4230_;
}
else
{
size_t v___x_4318_; size_t v___x_4319_; uint8_t v___x_4320_; 
v___x_4318_ = ((size_t)0ULL);
v___x_4319_ = lean_usize_of_nat(v___x_4316_);
v___x_4320_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__10(v___y_4313_, v_a_4315_, v___x_4318_, v___x_4319_);
v___y_4231_ = v___y_4308_;
v___y_4232_ = v___y_4313_;
v___y_4233_ = v___y_4309_;
v___y_4234_ = v___y_4311_;
v___y_4235_ = v___y_4310_;
v___y_4236_ = v___y_4312_;
v___y_4237_ = v_a_4315_;
v___y_4238_ = v___x_4320_;
goto v___jp_4230_;
}
}
}
else
{
lean_object* v_a_4321_; 
lean_dec_ref(v___y_4311_);
lean_dec_ref(v___y_4310_);
lean_dec_ref(v___y_4309_);
lean_dec(v___y_4308_);
lean_dec(v___x_4222_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
v_a_4321_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4321_);
lean_dec_ref_known(v___x_4314_, 1);
v_a_4182_ = v_a_4321_;
goto v___jp_4181_;
}
}
v___jp_4322_:
{
lean_object* v___x_4328_; 
v___x_4328_ = l_Lean_Linter_EnvLinter_getEnvLinters(v___y_4327_, v___y_4324_, v___y_4323_);
lean_dec(v___y_4327_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4330_; uint8_t v___x_4331_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_a_4329_);
lean_dec_ref_known(v___x_4328_, 1);
v___x_4330_ = lean_array_get_size(v_a_4329_);
v___x_4331_ = lean_nat_dec_eq(v___x_4330_, v___x_4202_);
if (v___x_4331_ == 0)
{
v___y_4308_ = v___y_4323_;
v___y_4309_ = v___y_4324_;
v___y_4310_ = v_a_4329_;
v___y_4311_ = v___y_4325_;
v___y_4312_ = v___y_4326_;
v___y_4313_ = v___x_4331_;
goto v___jp_4307_;
}
else
{
uint8_t v___x_4332_; uint8_t v___x_4333_; 
v___x_4332_ = 0;
v___x_4333_ = l_Lake_BuiltinLint_instBEqMode_beq(v___y_4326_, v___x_4332_);
if (v___x_4333_ == 0)
{
v___y_4308_ = v___y_4323_;
v___y_4309_ = v___y_4324_;
v___y_4310_ = v_a_4329_;
v___y_4311_ = v___y_4325_;
v___y_4312_ = v___y_4326_;
v___y_4313_ = v___x_4333_;
goto v___jp_4307_;
}
else
{
lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; 
lean_dec(v_a_4329_);
lean_dec_ref(v___y_4325_);
lean_dec_ref(v___y_4324_);
lean_dec(v___y_4323_);
lean_dec(v_sp_4168_);
v___x_4334_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__3));
v___x_4335_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mod_4170_, v___x_4333_);
v___x_4336_ = lean_string_append(v___x_4334_, v___x_4335_);
lean_dec_ref(v___x_4335_);
v___x_4337_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__1));
v___x_4338_ = lean_string_append(v___x_4336_, v___x_4337_);
v___x_4339_ = l_IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13(v___x_4338_);
if (lean_obj_tag(v___x_4339_) == 0)
{
lean_object* v___x_4340_; 
lean_dec_ref_known(v___x_4339_, 1);
v___x_4340_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__4));
v_a_4224_ = v___x_4340_;
goto v___jp_4223_;
}
else
{
lean_object* v_a_4341_; lean_object* v___x_4343_; uint8_t v_isShared_4344_; uint8_t v_isSharedCheck_4350_; 
lean_dec(v___x_4222_);
v_a_4341_ = lean_ctor_get(v___x_4339_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v___x_4339_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4343_ = v___x_4339_;
v_isShared_4344_ = v_isSharedCheck_4350_;
goto v_resetjp_4342_;
}
else
{
lean_inc(v_a_4341_);
lean_dec(v___x_4339_);
v___x_4343_ = lean_box(0);
v_isShared_4344_ = v_isSharedCheck_4350_;
goto v_resetjp_4342_;
}
v_resetjp_4342_:
{
lean_object* v___x_4345_; lean_object* v___x_4347_; 
v___x_4345_ = lean_io_error_to_string(v_a_4341_);
if (v_isShared_4344_ == 0)
{
lean_ctor_set_tag(v___x_4343_, 3);
lean_ctor_set(v___x_4343_, 0, v___x_4345_);
v___x_4347_ = v___x_4343_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v___x_4345_);
v___x_4347_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
lean_object* v___x_4348_; 
v___x_4348_ = l_Lean_MessageData_ofFormat(v___x_4347_);
v_msg_4173_ = v___x_4348_;
goto v___jp_4172_;
}
}
}
}
}
}
else
{
lean_object* v_a_4351_; 
lean_dec_ref(v___y_4325_);
lean_dec_ref(v___y_4324_);
lean_dec(v___y_4323_);
lean_dec(v___x_4222_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
v_a_4351_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_a_4351_);
lean_dec_ref_known(v___x_4328_, 1);
v_a_4182_ = v_a_4351_;
goto v___jp_4181_;
}
}
v___jp_4352_:
{
lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v___x_4368_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5);
lean_inc(v_currMacroScope_4360_);
lean_inc(v_quotContext_4359_);
lean_inc(v_maxHeartbeats_4358_);
lean_inc(v_openDecls_4356_);
lean_inc(v_currNamespace_4355_);
lean_inc_ref(v_fileMap_4354_);
lean_inc_ref(v_fileName_4353_);
v___x_4369_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4369_, 0, v_fileName_4353_);
lean_ctor_set(v___x_4369_, 1, v_fileMap_4354_);
lean_ctor_set(v___x_4369_, 2, v___x_4199_);
lean_ctor_set(v___x_4369_, 3, v___x_4368_);
lean_ctor_set(v___x_4369_, 4, v_currNamespace_4355_);
lean_ctor_set(v___x_4369_, 5, v_openDecls_4356_);
lean_ctor_set(v___x_4369_, 6, v_initHeartbeats_4357_);
lean_ctor_set(v___x_4369_, 7, v_maxHeartbeats_4358_);
lean_ctor_set(v___x_4369_, 8, v_quotContext_4359_);
lean_ctor_set(v___x_4369_, 9, v_currMacroScope_4360_);
lean_ctor_set(v___x_4369_, 10, v_cancelTk_x3f_4361_);
lean_ctor_set(v___x_4369_, 11, v_inheritedTraceOptions_4362_);
lean_inc(v_ref_4364_);
v___x_4370_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4370_, 0, v___x_4369_);
lean_ctor_set(v___x_4370_, 1, v_currRecDepth_4363_);
lean_ctor_set(v___x_4370_, 2, v_ref_4364_);
lean_ctor_set_uint16(v___x_4370_, sizeof(void*)*3, v___x_4207_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*3 + 2, v_suppressElabErrors_4365_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*3 + 3, v_checkDeprecated_4366_);
lean_ctor_set_uint8(v___x_4370_, sizeof(void*)*3 + 4, v_isRecordingDeps_4367_);
v___x_4371_ = l_Lean_Linter_EnvLinter_getDeclsInPackage___redArg(v___x_4196_, v___x_4222_);
lean_dec(v___x_4196_);
if (lean_obj_tag(v___x_4371_) == 0)
{
uint8_t v_lintOnly_4372_; 
v_lintOnly_4372_ = lean_ctor_get_uint8(v_args_4166_, sizeof(void*)*4);
if (v_lintOnly_4372_ == 0)
{
lean_object* v_a_4373_; uint8_t v_mode_4374_; 
lean_dec_ref(v_linterOpts_4167_);
v_a_4373_ = lean_ctor_get(v___x_4371_, 0);
lean_inc(v_a_4373_);
lean_dec_ref_known(v___x_4371_, 1);
v_mode_4374_ = lean_ctor_get_uint8(v_args_4166_, sizeof(void*)*4 + 1);
lean_inc(v___x_4222_);
v___y_4323_ = v___x_4222_;
v___y_4324_ = v___x_4370_;
v___y_4325_ = v_a_4373_;
v___y_4326_ = v_mode_4374_;
v___y_4327_ = v___x_4205_;
goto v___jp_4322_;
}
else
{
lean_object* v_a_4375_; lean_object* v___x_4377_; uint8_t v_isShared_4378_; uint8_t v_isSharedCheck_4383_; 
v_a_4375_ = lean_ctor_get(v___x_4371_, 0);
v_isSharedCheck_4383_ = !lean_is_exclusive(v___x_4371_);
if (v_isSharedCheck_4383_ == 0)
{
v___x_4377_ = v___x_4371_;
v_isShared_4378_ = v_isSharedCheck_4383_;
goto v_resetjp_4376_;
}
else
{
lean_inc(v_a_4375_);
lean_dec(v___x_4371_);
v___x_4377_ = lean_box(0);
v_isShared_4378_ = v_isSharedCheck_4383_;
goto v_resetjp_4376_;
}
v_resetjp_4376_:
{
uint8_t v_mode_4379_; lean_object* v___x_4381_; 
v_mode_4379_ = lean_ctor_get_uint8(v_args_4166_, sizeof(void*)*4 + 1);
if (v_isShared_4378_ == 0)
{
lean_ctor_set_tag(v___x_4377_, 1);
lean_ctor_set(v___x_4377_, 0, v_linterOpts_4167_);
v___x_4381_ = v___x_4377_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_linterOpts_4167_);
v___x_4381_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
lean_inc(v___x_4222_);
v___y_4323_ = v___x_4222_;
v___y_4324_ = v___x_4370_;
v___y_4325_ = v_a_4375_;
v___y_4326_ = v_mode_4379_;
v___y_4327_ = v___x_4381_;
goto v___jp_4322_;
}
}
}
}
else
{
lean_object* v_a_4384_; 
lean_dec_ref_known(v___x_4370_, 3);
lean_dec(v___x_4222_);
lean_dec(v_mod_4170_);
lean_dec(v_sp_4168_);
lean_dec_ref(v_linterOpts_4167_);
v_a_4384_ = lean_ctor_get(v___x_4371_, 0);
lean_inc(v_a_4384_);
lean_dec_ref_known(v___x_4371_, 1);
v_a_4182_ = v_a_4384_;
goto v___jp_4181_;
}
}
v___jp_4387_:
{
lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4397_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4397_, 0, v___y_4396_);
lean_ctor_set(v___x_4397_, 1, v_nextMacroScope_4388_);
lean_ctor_set(v___x_4397_, 2, v_ngen_4389_);
lean_ctor_set(v___x_4397_, 3, v_auxDeclNGen_4390_);
lean_ctor_set(v___x_4397_, 4, v_traceState_4391_);
lean_ctor_set(v___x_4397_, 5, v___x_4214_);
lean_ctor_set(v___x_4397_, 6, v_recordedDeps_4392_);
lean_ctor_set(v___x_4397_, 7, v_messages_4393_);
lean_ctor_set(v___x_4397_, 8, v_infoState_4394_);
lean_ctor_set(v___x_4397_, 9, v_snapshotTasks_4395_);
v___x_4398_ = lean_st_ref_put(v___x_4222_, v___x_4397_);
v_fileName_4353_ = v___x_4197_;
v_fileMap_4354_ = v___x_4198_;
v_currNamespace_4355_ = v___x_4200_;
v_openDecls_4356_ = v___x_4201_;
v_initHeartbeats_4357_ = v___x_4221_;
v_maxHeartbeats_4358_ = v___x_4203_;
v_quotContext_4359_ = v___x_4200_;
v_currMacroScope_4360_ = v___x_4204_;
v_cancelTk_x3f_4361_ = v___x_4205_;
v_inheritedTraceOptions_4362_ = v___x_4386_;
v_currRecDepth_4363_ = v___x_4202_;
v_ref_4364_ = v___x_4206_;
v_suppressElabErrors_4365_ = v___x_4208_;
v_checkDeprecated_4366_ = v___x_4209_;
v_isRecordingDeps_4367_ = v___x_4208_;
goto v___jp_4352_;
}
v___jp_4400_:
{
lean_object* v___x_4402_; lean_object* v_env_4403_; lean_object* v_nextMacroScope_4404_; lean_object* v_ngen_4405_; lean_object* v_auxDeclNGen_4406_; lean_object* v_traceState_4407_; lean_object* v_recordedDeps_4408_; lean_object* v_messages_4409_; lean_object* v_infoState_4410_; lean_object* v_snapshotTasks_4411_; uint8_t v___x_4412_; 
v___x_4402_ = lean_st_ref_take(v___x_4222_);
v_env_4403_ = lean_ctor_get(v___x_4402_, 0);
lean_inc_ref(v_env_4403_);
v_nextMacroScope_4404_ = lean_ctor_get(v___x_4402_, 1);
lean_inc(v_nextMacroScope_4404_);
v_ngen_4405_ = lean_ctor_get(v___x_4402_, 2);
lean_inc_ref(v_ngen_4405_);
v_auxDeclNGen_4406_ = lean_ctor_get(v___x_4402_, 3);
lean_inc_ref(v_auxDeclNGen_4406_);
v_traceState_4407_ = lean_ctor_get(v___x_4402_, 4);
lean_inc_ref(v_traceState_4407_);
v_recordedDeps_4408_ = lean_ctor_get(v___x_4402_, 6);
lean_inc_ref(v_recordedDeps_4408_);
v_messages_4409_ = lean_ctor_get(v___x_4402_, 7);
lean_inc_ref(v_messages_4409_);
v_infoState_4410_ = lean_ctor_get(v___x_4402_, 8);
lean_inc_ref(v_infoState_4410_);
v_snapshotTasks_4411_ = lean_ctor_get(v___x_4402_, 9);
lean_inc_ref(v_snapshotTasks_4411_);
lean_dec(v___x_4402_);
v___x_4412_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22);
if (v___x_4412_ == 0)
{
lean_object* v___x_4413_; 
v___x_4413_ = l_Lean_Kernel_enableDiag(v_env_4403_, v___x_4218_);
v_nextMacroScope_4388_ = v_nextMacroScope_4404_;
v_ngen_4389_ = v_ngen_4405_;
v_auxDeclNGen_4390_ = v_auxDeclNGen_4406_;
v_traceState_4391_ = v_traceState_4407_;
v_recordedDeps_4392_ = v_recordedDeps_4408_;
v_messages_4393_ = v_messages_4409_;
v_infoState_4394_ = v_infoState_4410_;
v_snapshotTasks_4395_ = v_snapshotTasks_4411_;
v___y_4396_ = v___x_4413_;
goto v___jp_4387_;
}
else
{
lean_object* v___x_4414_; 
v___x_4414_ = l_Lean_Kernel_enableDiag(v_env_4403_, v___y_4401_);
v_nextMacroScope_4388_ = v_nextMacroScope_4404_;
v_ngen_4389_ = v_ngen_4405_;
v_auxDeclNGen_4390_ = v_auxDeclNGen_4406_;
v_traceState_4391_ = v_traceState_4407_;
v_recordedDeps_4392_ = v_recordedDeps_4408_;
v_messages_4393_ = v_messages_4409_;
v_infoState_4394_ = v_infoState_4410_;
v_snapshotTasks_4395_ = v_snapshotTasks_4411_;
v___y_4396_ = v___x_4414_;
goto v___jp_4387_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___boxed(lean_object* v_args_4418_, lean_object* v_linterOpts_4419_, lean_object* v_sp_4420_, lean_object* v_env_4421_, lean_object* v_mod_4422_, lean_object* v_a_4423_){
_start:
{
lean_object* v_res_4424_; 
v_res_4424_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(v_args_4418_, v_linterOpts_4419_, v_sp_4420_, v_env_4421_, v_mod_4422_);
lean_dec_ref(v_args_4418_);
return v_res_4424_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(lean_object* v_00_u03b4_4425_, lean_object* v_t_4426_, lean_object* v_k_4427_, lean_object* v_fallback_4428_){
_start:
{
lean_object* v___x_4429_; 
v___x_4429_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___redArg(v_t_4426_, v_k_4427_, v_fallback_4428_);
return v___x_4429_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5___boxed(lean_object* v_00_u03b4_4430_, lean_object* v_t_4431_, lean_object* v_k_4432_, lean_object* v_fallback_4433_){
_start:
{
lean_object* v_res_4434_; 
v_res_4434_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__5(v_00_u03b4_4430_, v_t_4431_, v_k_4432_, v_fallback_4433_);
lean_dec(v_fallback_4433_);
lean_dec_ref(v_k_4432_);
lean_dec(v_t_4431_);
return v_res_4434_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6(lean_object* v_00_u03b2_4435_, lean_object* v_k_4436_, lean_object* v_v_4437_, lean_object* v_t_4438_, lean_object* v_hl_4439_){
_start:
{
lean_object* v___x_4440_; 
v___x_4440_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__6___redArg(v_k_4436_, v_v_4437_, v_t_4438_);
return v___x_4440_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(lean_object* v_fst_4441_, lean_object* v_init_4442_, lean_object* v_x_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v___x_4447_; 
v___x_4447_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___redArg(v_fst_4441_, v_init_4442_, v_x_4443_);
return v___x_4447_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8___boxed(lean_object* v_fst_4448_, lean_object* v_init_4449_, lean_object* v_x_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_){
_start:
{
lean_object* v_res_4454_; 
v_res_4454_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__8(v_fst_4448_, v_init_4449_, v_x_4450_, v___y_4451_, v___y_4452_);
lean_dec(v___y_4452_);
lean_dec_ref(v___y_4451_);
return v_res_4454_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4455_, lean_object* v_constName_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v___x_4460_; 
v___x_4460_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___redArg(v_constName_4456_, v___y_4457_, v___y_4458_);
return v___x_4460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4461_, lean_object* v_constName_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1(v_00_u03b1_4461_, v_constName_4462_, v___y_4463_, v___y_4464_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(lean_object* v_00_u03b1_4467_, lean_object* v_ref_4468_, lean_object* v_constName_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_){
_start:
{
lean_object* v___x_4473_; 
v___x_4473_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___redArg(v_ref_4468_, v_constName_4469_, v___y_4470_, v___y_4471_);
return v___x_4473_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12___boxed(lean_object* v_00_u03b1_4474_, lean_object* v_ref_4475_, lean_object* v_constName_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_){
_start:
{
lean_object* v_res_4480_; 
v_res_4480_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12(v_00_u03b1_4474_, v_ref_4475_, v_constName_4476_, v___y_4477_, v___y_4478_);
lean_dec(v___y_4478_);
lean_dec_ref(v___y_4477_);
lean_dec(v_ref_4475_);
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(lean_object* v_00_u03b1_4481_, lean_object* v_ref_4482_, lean_object* v_msg_4483_, lean_object* v_declHint_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v___x_4488_; 
v___x_4488_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___redArg(v_ref_4482_, v_msg_4483_, v_declHint_4484_, v___y_4485_, v___y_4486_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13___boxed(lean_object* v_00_u03b1_4489_, lean_object* v_ref_4490_, lean_object* v_msg_4491_, lean_object* v_declHint_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_){
_start:
{
lean_object* v_res_4496_; 
v_res_4496_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13(v_00_u03b1_4489_, v_ref_4490_, v_msg_4491_, v_declHint_4492_, v___y_4493_, v___y_4494_);
lean_dec(v___y_4494_);
lean_dec_ref(v___y_4493_);
lean_dec(v_ref_4490_);
return v_res_4496_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(lean_object* v_msg_4497_, lean_object* v_declHint_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_){
_start:
{
lean_object* v___x_4502_; 
v___x_4502_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___redArg(v_msg_4497_, v_declHint_4498_, v___y_4500_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15___boxed(lean_object* v_msg_4503_, lean_object* v_declHint_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_){
_start:
{
lean_object* v_res_4508_; 
v_res_4508_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__14_spec__15(v_msg_4503_, v_declHint_4504_, v___y_4505_, v___y_4506_);
lean_dec(v___y_4506_);
lean_dec_ref(v___y_4505_);
return v_res_4508_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(lean_object* v_00_u03b1_4509_, lean_object* v_ref_4510_, lean_object* v_msg_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_){
_start:
{
lean_object* v___x_4515_; 
v___x_4515_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___redArg(v_ref_4510_, v_msg_4511_, v___y_4512_, v___y_4513_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15___boxed(lean_object* v_00_u03b1_4516_, lean_object* v_ref_4517_, lean_object* v_msg_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15(v_00_u03b1_4516_, v_ref_4517_, v_msg_4518_, v___y_4519_, v___y_4520_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
lean_dec(v_ref_4517_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(lean_object* v_00_u03b1_4523_, lean_object* v_msg_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_){
_start:
{
lean_object* v___x_4528_; 
v___x_4528_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___redArg(v_msg_4524_, v___y_4525_, v___y_4526_);
return v___x_4528_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17___boxed(lean_object* v_00_u03b1_4529_, lean_object* v_msg_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_){
_start:
{
lean_object* v_res_4534_; 
v_res_4534_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_findModuleOf_x3f___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters_spec__0_spec__0_spec__1_spec__12_spec__13_spec__15_spec__17(v_00_u03b1_4529_, v_msg_4530_, v___y_4531_, v___y_4532_);
lean_dec(v___y_4532_);
lean_dec_ref(v___y_4531_);
return v_res_4534_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(lean_object* v_s_4535_){
_start:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; uint32_t v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v___x_4537_ = l_Std_Format_defWidth;
v___x_4538_ = lean_unsigned_to_nat(0u);
v___x_4539_ = l_Std_Format_pretty(v_s_4535_, v___x_4537_, v___x_4538_, v___x_4538_);
v___x_4540_ = 10;
v___x_4541_ = lean_string_push(v___x_4539_, v___x_4540_);
v___x_4542_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17_spec__29(v___x_4541_);
return v___x_4542_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0___boxed(lean_object* v_s_4543_, lean_object* v_a_4544_){
_start:
{
lean_object* v_res_4545_; 
v_res_4545_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(v_s_4543_);
return v_res_4545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(lean_object* v_as_4546_, size_t v_sz_4547_, size_t v_i_4548_, lean_object* v_b_4549_, lean_object* v___y_4550_){
_start:
{
uint8_t v___x_4552_; 
v___x_4552_ = lean_usize_dec_lt(v_i_4548_, v_sz_4547_);
if (v___x_4552_ == 0)
{
lean_object* v___x_4553_; 
v___x_4553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4553_, 0, v_b_4549_);
return v___x_4553_;
}
else
{
lean_object* v___x_4554_; lean_object* v_a_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v_ref_4558_; lean_object* v___x_4559_; 
v___x_4554_ = lean_box(0);
v_a_4555_ = lean_array_uget_borrowed(v_as_4546_, v_i_4548_);
v___x_4556_ = lean_box(0);
lean_inc(v_a_4555_);
v___x_4557_ = l_Lean_MessageData_format(v_a_4555_, v___x_4556_);
v_ref_4558_ = lean_ctor_get(v___y_4550_, 2);
v___x_4559_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__0(v___x_4557_);
if (lean_obj_tag(v___x_4559_) == 0)
{
size_t v___x_4560_; size_t v___x_4561_; 
lean_dec_ref_known(v___x_4559_, 1);
v___x_4560_ = ((size_t)1ULL);
v___x_4561_ = lean_usize_add(v_i_4548_, v___x_4560_);
v_i_4548_ = v___x_4561_;
v_b_4549_ = v___x_4554_;
goto _start;
}
else
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4574_; 
v_a_4563_ = lean_ctor_get(v___x_4559_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4559_);
if (v_isSharedCheck_4574_ == 0)
{
v___x_4565_ = v___x_4559_;
v_isShared_4566_ = v_isSharedCheck_4574_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___x_4559_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4574_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4572_; 
v___x_4567_ = lean_io_error_to_string(v_a_4563_);
v___x_4568_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4568_, 0, v___x_4567_);
v___x_4569_ = l_Lean_MessageData_ofFormat(v___x_4568_);
lean_inc(v_ref_4558_);
v___x_4570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4570_, 0, v_ref_4558_);
lean_ctor_set(v___x_4570_, 1, v___x_4569_);
if (v_isShared_4566_ == 0)
{
lean_ctor_set(v___x_4565_, 0, v___x_4570_);
v___x_4572_ = v___x_4565_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v___x_4570_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg___boxed(lean_object* v_as_4575_, lean_object* v_sz_4576_, lean_object* v_i_4577_, lean_object* v_b_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_){
_start:
{
size_t v_sz_boxed_4581_; size_t v_i_boxed_4582_; lean_object* v_res_4583_; 
v_sz_boxed_4581_ = lean_unbox_usize(v_sz_4576_);
lean_dec(v_sz_4576_);
v_i_boxed_4582_ = lean_unbox_usize(v_i_4577_);
lean_dec(v_i_4577_);
v_res_4583_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_as_4575_, v_sz_boxed_4581_, v_i_boxed_4582_, v_b_4578_, v___y_4579_);
lean_dec_ref(v___y_4579_);
lean_dec_ref(v_as_4575_);
return v_res_4583_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(lean_object* v_errors_4584_, lean_object* v_entries_4585_, lean_object* v_____r_4586_, uint8_t v_anyFailed_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_){
_start:
{
lean_object* v___x_4591_; size_t v_sz_4592_; size_t v___x_4593_; lean_object* v___x_4594_; 
v___x_4591_ = lean_box(0);
v_sz_4592_ = lean_array_size(v_errors_4584_);
v___x_4593_ = ((size_t)0ULL);
v___x_4594_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_errors_4584_, v_sz_4592_, v___x_4593_, v___x_4591_, v___y_4588_);
if (lean_obj_tag(v___x_4594_) == 0)
{
lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4603_; 
v_isSharedCheck_4603_ = !lean_is_exclusive(v___x_4594_);
if (v_isSharedCheck_4603_ == 0)
{
lean_object* v_unused_4604_; 
v_unused_4604_ = lean_ctor_get(v___x_4594_, 0);
lean_dec(v_unused_4604_);
v___x_4596_ = v___x_4594_;
v_isShared_4597_ = v_isSharedCheck_4603_;
goto v_resetjp_4595_;
}
else
{
lean_dec(v___x_4594_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4603_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4601_; 
v___x_4598_ = lean_box(v_anyFailed_4587_);
v___x_4599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4599_, 0, v_entries_4585_);
lean_ctor_set(v___x_4599_, 1, v___x_4598_);
if (v_isShared_4597_ == 0)
{
lean_ctor_set(v___x_4596_, 0, v___x_4599_);
v___x_4601_ = v___x_4596_;
goto v_reusejp_4600_;
}
else
{
lean_object* v_reuseFailAlloc_4602_; 
v_reuseFailAlloc_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4602_, 0, v___x_4599_);
v___x_4601_ = v_reuseFailAlloc_4602_;
goto v_reusejp_4600_;
}
v_reusejp_4600_:
{
return v___x_4601_;
}
}
}
else
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4612_; 
lean_dec_ref(v_entries_4585_);
v_a_4605_ = lean_ctor_get(v___x_4594_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4594_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4607_ = v___x_4594_;
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4594_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4610_; 
if (v_isShared_4608_ == 0)
{
v___x_4610_ = v___x_4607_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_a_4605_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0___boxed(lean_object* v_errors_4613_, lean_object* v_entries_4614_, lean_object* v_____r_4615_, lean_object* v_anyFailed_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_){
_start:
{
uint8_t v_anyFailed_boxed_4620_; lean_object* v_res_4621_; 
v_anyFailed_boxed_4620_ = lean_unbox(v_anyFailed_4616_);
v_res_4621_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4613_, v_entries_4614_, v_____r_4615_, v_anyFailed_boxed_4620_, v___y_4617_, v___y_4618_);
lean_dec(v___y_4618_);
lean_dec_ref(v___y_4617_);
lean_dec_ref(v_errors_4613_);
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(lean_object* v_sp_4622_, lean_object* v_env_4623_, lean_object* v_mod_4624_){
_start:
{
lean_object* v_a_4627_; lean_object* v_a_4631_; uint8_t v_anyFailed_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; uint16_t v___x_4659_; uint8_t v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; uint8_t v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___y_4677_; lean_object* v_fileName_4693_; lean_object* v_fileMap_4694_; lean_object* v_currNamespace_4695_; lean_object* v_openDecls_4696_; lean_object* v_initHeartbeats_4697_; lean_object* v_maxHeartbeats_4698_; lean_object* v_quotContext_4699_; lean_object* v_currMacroScope_4700_; lean_object* v_cancelTk_x3f_4701_; lean_object* v_inheritedTraceOptions_4702_; lean_object* v_currRecDepth_4703_; lean_object* v_ref_4704_; uint8_t v_suppressElabErrors_4705_; uint8_t v_checkDeprecated_4706_; uint8_t v_isRecordingDeps_4707_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v_nextMacroScope_4729_; lean_object* v_ngen_4730_; lean_object* v_auxDeclNGen_4731_; lean_object* v_traceState_4732_; lean_object* v_recordedDeps_4733_; lean_object* v_messages_4734_; lean_object* v_infoState_4735_; lean_object* v_snapshotTasks_4736_; lean_object* v___y_4737_; lean_object* v___x_4740_; uint8_t v___y_4742_; lean_object* v_env_4756_; uint8_t v___x_4757_; uint8_t v___x_4758_; 
v_anyFailed_4648_ = 0;
v___x_4649_ = ((lean_object*)(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default___closed__0));
v___x_4650_ = l_Lean_instInhabitedFileMap_default;
v___x_4651_ = l_Lean_Options_empty;
v___x_4652_ = lean_box(0);
v___x_4653_ = lean_box(0);
v___x_4654_ = lean_unsigned_to_nat(0u);
v___x_4655_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__5);
v___x_4656_ = l_Lean_firstFrontendMacroScope;
v___x_4657_ = lean_box(0);
v___x_4658_ = lean_box(0);
v___x_4659_ = lean_uint16_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__6);
v___x_4660_ = 0;
v___x_4661_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__7);
v___x_4662_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__10));
v___x_4663_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__11));
v___x_4664_ = lean_unsigned_to_nat(32u);
v___x_4665_ = lean_mk_empty_array_with_capacity(v___x_4664_);
lean_dec_ref(v___x_4665_);
v___x_4666_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__14);
v___x_4667_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__17);
v___x_4668_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__6___closed__0));
v___x_4669_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__18);
v___x_4670_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__19);
v___x_4671_ = 1;
v___x_4672_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__20);
v___x_4673_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4673_, 0, v_env_4623_);
lean_ctor_set(v___x_4673_, 1, v___x_4661_);
lean_ctor_set(v___x_4673_, 2, v___x_4662_);
lean_ctor_set(v___x_4673_, 3, v___x_4663_);
lean_ctor_set(v___x_4673_, 4, v___x_4666_);
lean_ctor_set(v___x_4673_, 5, v___x_4667_);
lean_ctor_set(v___x_4673_, 6, v___x_4669_);
lean_ctor_set(v___x_4673_, 7, v___x_4670_);
lean_ctor_set(v___x_4673_, 8, v___x_4672_);
lean_ctor_set(v___x_4673_, 9, v___x_4668_);
v___x_4674_ = lean_io_get_num_heartbeats();
v___x_4675_ = lean_st_mk_ref(v___x_4673_);
v___x_4726_ = l_Lean_inheritedTraceOptions;
v___x_4727_ = lean_st_ref_get(v___x_4726_);
v___x_4740_ = lean_st_ref_get(v___x_4675_);
v_env_4756_ = lean_ctor_get(v___x_4740_, 0);
lean_inc_ref(v_env_4756_);
lean_dec(v___x_4740_);
v___x_4757_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4756_);
lean_dec_ref(v_env_4756_);
v___x_4758_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22);
if (v___x_4758_ == 0)
{
if (v___x_4757_ == 0)
{
v___y_4742_ = v___x_4757_;
goto v___jp_4741_;
}
else
{
v_fileName_4693_ = v___x_4649_;
v_fileMap_4694_ = v___x_4650_;
v_currNamespace_4695_ = v___x_4652_;
v_openDecls_4696_ = v___x_4653_;
v_initHeartbeats_4697_ = v___x_4674_;
v_maxHeartbeats_4698_ = v___x_4655_;
v_quotContext_4699_ = v___x_4652_;
v_currMacroScope_4700_ = v___x_4656_;
v_cancelTk_x3f_4701_ = v___x_4657_;
v_inheritedTraceOptions_4702_ = v___x_4727_;
v_currRecDepth_4703_ = v___x_4654_;
v_ref_4704_ = v___x_4658_;
v_suppressElabErrors_4705_ = v_anyFailed_4648_;
v_checkDeprecated_4706_ = v___x_4660_;
v_isRecordingDeps_4707_ = v_anyFailed_4648_;
goto v___jp_4692_;
}
}
else
{
if (v___x_4757_ == 0)
{
v_fileName_4693_ = v___x_4649_;
v_fileMap_4694_ = v___x_4650_;
v_currNamespace_4695_ = v___x_4652_;
v_openDecls_4696_ = v___x_4653_;
v_initHeartbeats_4697_ = v___x_4674_;
v_maxHeartbeats_4698_ = v___x_4655_;
v_quotContext_4699_ = v___x_4652_;
v_currMacroScope_4700_ = v___x_4656_;
v_cancelTk_x3f_4701_ = v___x_4657_;
v_inheritedTraceOptions_4702_ = v___x_4727_;
v_currRecDepth_4703_ = v___x_4654_;
v_ref_4704_ = v___x_4658_;
v_suppressElabErrors_4705_ = v_anyFailed_4648_;
v_checkDeprecated_4706_ = v___x_4660_;
v_isRecordingDeps_4707_ = v_anyFailed_4648_;
goto v___jp_4692_;
}
else
{
v___y_4742_ = v_anyFailed_4648_;
goto v___jp_4741_;
}
}
v___jp_4626_:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4628_ = lean_mk_io_user_error(v_a_4627_);
v___x_4629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4629_, 0, v___x_4628_);
return v___x_4629_;
}
v___jp_4630_:
{
if (lean_obj_tag(v_a_4631_) == 0)
{
lean_object* v_msg_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; 
v_msg_4632_ = lean_ctor_get(v_a_4631_, 1);
lean_inc_ref(v_msg_4632_);
lean_dec_ref_known(v_a_4631_, 2);
v___x_4633_ = l_Lean_MessageData_toString(v_msg_4632_);
v___x_4634_ = lean_mk_io_user_error(v___x_4633_);
v___x_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4635_, 0, v___x_4634_);
return v___x_4635_;
}
else
{
lean_object* v_id_4636_; lean_object* v___x_4637_; 
v_id_4636_ = lean_ctor_get(v_a_4631_, 0);
lean_inc(v_id_4636_);
lean_dec_ref_known(v_a_4631_, 2);
v___x_4637_ = l_Lean_InternalExceptionId_getName(v_id_4636_);
if (lean_obj_tag(v___x_4637_) == 0)
{
lean_object* v_a_4638_; lean_object* v___x_4639_; uint8_t v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; 
lean_dec(v_id_4636_);
v_a_4638_ = lean_ctor_get(v___x_4637_, 0);
lean_inc(v_a_4638_);
lean_dec_ref_known(v___x_4637_, 1);
v___x_4639_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__0));
v___x_4640_ = 1;
v___x_4641_ = l_Lean_Name_toString(v_a_4638_, v___x_4640_);
v___x_4642_ = lean_string_append(v___x_4639_, v___x_4641_);
lean_dec_ref(v___x_4641_);
v_a_4627_ = v___x_4642_;
goto v___jp_4626_;
}
else
{
lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; 
lean_dec_ref_known(v___x_4637_, 1);
v___x_4643_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__1));
v___x_4644_ = l_Nat_reprFast(v_id_4636_);
v___x_4645_ = lean_string_append(v___x_4643_, v___x_4644_);
lean_dec_ref(v___x_4644_);
v___x_4646_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__2));
v___x_4647_ = lean_string_append(v___x_4645_, v___x_4646_);
v_a_4627_ = v___x_4647_;
goto v___jp_4626_;
}
}
}
v___jp_4676_:
{
if (lean_obj_tag(v___y_4677_) == 0)
{
lean_object* v_a_4678_; lean_object* v___x_4680_; uint8_t v_isShared_4681_; uint8_t v_isSharedCheck_4690_; 
v_a_4678_ = lean_ctor_get(v___y_4677_, 0);
v_isSharedCheck_4690_ = !lean_is_exclusive(v___y_4677_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4680_ = v___y_4677_;
v_isShared_4681_ = v_isSharedCheck_4690_;
goto v_resetjp_4679_;
}
else
{
lean_inc(v_a_4678_);
lean_dec(v___y_4677_);
v___x_4680_ = lean_box(0);
v_isShared_4681_ = v_isSharedCheck_4690_;
goto v_resetjp_4679_;
}
v_resetjp_4679_:
{
lean_object* v___x_4682_; lean_object* v_fst_4683_; lean_object* v_snd_4684_; lean_object* v___x_4685_; uint8_t v___x_4686_; lean_object* v___x_4688_; 
v___x_4682_ = lean_st_ref_get(v___x_4675_);
lean_dec(v___x_4675_);
lean_dec(v___x_4682_);
v_fst_4683_ = lean_ctor_get(v_a_4678_, 0);
lean_inc(v_fst_4683_);
v_snd_4684_ = lean_ctor_get(v_a_4678_, 1);
lean_inc(v_snd_4684_);
lean_dec(v_a_4678_);
v___x_4685_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4685_, 0, v_fst_4683_);
v___x_4686_ = lean_unbox(v_snd_4684_);
lean_dec(v_snd_4684_);
lean_ctor_set_uint8(v___x_4685_, sizeof(void*)*1, v___x_4686_);
if (v_isShared_4681_ == 0)
{
lean_ctor_set(v___x_4680_, 0, v___x_4685_);
v___x_4688_ = v___x_4680_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v___x_4685_);
v___x_4688_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
return v___x_4688_;
}
}
}
else
{
lean_object* v_a_4691_; 
lean_dec(v___x_4675_);
v_a_4691_ = lean_ctor_get(v___y_4677_, 0);
lean_inc(v_a_4691_);
lean_dec_ref_known(v___y_4677_, 1);
v_a_4631_ = v_a_4691_;
goto v___jp_4630_;
}
}
v___jp_4692_:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; 
v___x_4708_ = lean_obj_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters___closed__5);
lean_inc(v_cancelTk_x3f_4701_);
lean_inc(v_currMacroScope_4700_);
lean_inc(v_quotContext_4699_);
lean_inc(v_maxHeartbeats_4698_);
lean_inc(v_openDecls_4696_);
lean_inc(v_currNamespace_4695_);
lean_inc_ref(v_fileMap_4694_);
lean_inc_ref(v_fileName_4693_);
v___x_4709_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4709_, 0, v_fileName_4693_);
lean_ctor_set(v___x_4709_, 1, v_fileMap_4694_);
lean_ctor_set(v___x_4709_, 2, v___x_4651_);
lean_ctor_set(v___x_4709_, 3, v___x_4708_);
lean_ctor_set(v___x_4709_, 4, v_currNamespace_4695_);
lean_ctor_set(v___x_4709_, 5, v_openDecls_4696_);
lean_ctor_set(v___x_4709_, 6, v_initHeartbeats_4697_);
lean_ctor_set(v___x_4709_, 7, v_maxHeartbeats_4698_);
lean_ctor_set(v___x_4709_, 8, v_quotContext_4699_);
lean_ctor_set(v___x_4709_, 9, v_currMacroScope_4700_);
lean_ctor_set(v___x_4709_, 10, v_cancelTk_x3f_4701_);
lean_ctor_set(v___x_4709_, 11, v_inheritedTraceOptions_4702_);
lean_inc(v_ref_4704_);
v___x_4710_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4710_, 0, v___x_4709_);
lean_ctor_set(v___x_4710_, 1, v_currRecDepth_4703_);
lean_ctor_set(v___x_4710_, 2, v_ref_4704_);
lean_ctor_set_uint16(v___x_4710_, sizeof(void*)*3, v___x_4659_);
lean_ctor_set_uint8(v___x_4710_, sizeof(void*)*3 + 2, v_suppressElabErrors_4705_);
lean_ctor_set_uint8(v___x_4710_, sizeof(void*)*3 + 3, v_checkDeprecated_4706_);
lean_ctor_set_uint8(v___x_4710_, sizeof(void*)*3 + 4, v_isRecordingDeps_4707_);
v___x_4711_ = l_Lean_Linter_CodeQuality_getPackageChecks(v___x_4710_, v___x_4675_);
if (lean_obj_tag(v___x_4711_) == 0)
{
lean_object* v_a_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
v_a_4712_ = lean_ctor_get(v___x_4711_, 0);
lean_inc(v_a_4712_);
lean_dec_ref_known(v___x_4711_, 1);
v___x_4713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4713_, 0, v_sp_4622_);
lean_ctor_set(v___x_4713_, 1, v_mod_4624_);
v___x_4714_ = l_Lean_Linter_CodeQuality_runPackageChecks(v_a_4712_, v___x_4713_, v___x_4710_, v___x_4675_);
if (lean_obj_tag(v___x_4714_) == 0)
{
lean_object* v_a_4715_; lean_object* v_entries_4716_; lean_object* v_errors_4717_; lean_object* v___x_4718_; uint8_t v___x_4719_; 
v_a_4715_ = lean_ctor_get(v___x_4714_, 0);
lean_inc(v_a_4715_);
lean_dec_ref_known(v___x_4714_, 1);
v_entries_4716_ = lean_ctor_get(v_a_4715_, 0);
lean_inc_ref(v_entries_4716_);
v_errors_4717_ = lean_ctor_get(v_a_4715_, 1);
lean_inc_ref(v_errors_4717_);
lean_dec(v_a_4715_);
v___x_4718_ = lean_array_get_size(v_errors_4717_);
v___x_4719_ = lean_nat_dec_eq(v___x_4718_, v___x_4654_);
if (v___x_4719_ == 0)
{
lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4720_ = lean_box(0);
v___x_4721_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4717_, v_entries_4716_, v___x_4720_, v___x_4671_, v___x_4710_, v___x_4675_);
lean_dec_ref_known(v___x_4710_, 3);
lean_dec_ref(v_errors_4717_);
v___y_4677_ = v___x_4721_;
goto v___jp_4676_;
}
else
{
lean_object* v___x_4722_; lean_object* v___x_4723_; 
v___x_4722_ = lean_box(0);
v___x_4723_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___lam__0(v_errors_4717_, v_entries_4716_, v___x_4722_, v_anyFailed_4648_, v___x_4710_, v___x_4675_);
lean_dec_ref_known(v___x_4710_, 3);
lean_dec_ref(v_errors_4717_);
v___y_4677_ = v___x_4723_;
goto v___jp_4676_;
}
}
else
{
lean_object* v_a_4724_; 
lean_dec_ref_known(v___x_4710_, 3);
lean_dec(v___x_4675_);
v_a_4724_ = lean_ctor_get(v___x_4714_, 0);
lean_inc(v_a_4724_);
lean_dec_ref_known(v___x_4714_, 1);
v_a_4631_ = v_a_4724_;
goto v___jp_4630_;
}
}
else
{
lean_object* v_a_4725_; 
lean_dec_ref_known(v___x_4710_, 3);
lean_dec(v___x_4675_);
lean_dec(v_mod_4624_);
lean_dec(v_sp_4622_);
v_a_4725_ = lean_ctor_get(v___x_4711_, 0);
lean_inc(v_a_4725_);
lean_dec_ref_known(v___x_4711_, 1);
v_a_4631_ = v_a_4725_;
goto v___jp_4630_;
}
}
v___jp_4728_:
{
lean_object* v___x_4738_; lean_object* v___x_4739_; 
v___x_4738_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_4738_, 0, v___y_4737_);
lean_ctor_set(v___x_4738_, 1, v_nextMacroScope_4729_);
lean_ctor_set(v___x_4738_, 2, v_ngen_4730_);
lean_ctor_set(v___x_4738_, 3, v_auxDeclNGen_4731_);
lean_ctor_set(v___x_4738_, 4, v_traceState_4732_);
lean_ctor_set(v___x_4738_, 5, v___x_4667_);
lean_ctor_set(v___x_4738_, 6, v_recordedDeps_4733_);
lean_ctor_set(v___x_4738_, 7, v_messages_4734_);
lean_ctor_set(v___x_4738_, 8, v_infoState_4735_);
lean_ctor_set(v___x_4738_, 9, v_snapshotTasks_4736_);
v___x_4739_ = lean_st_ref_put(v___x_4675_, v___x_4738_);
v_fileName_4693_ = v___x_4649_;
v_fileMap_4694_ = v___x_4650_;
v_currNamespace_4695_ = v___x_4652_;
v_openDecls_4696_ = v___x_4653_;
v_initHeartbeats_4697_ = v___x_4674_;
v_maxHeartbeats_4698_ = v___x_4655_;
v_quotContext_4699_ = v___x_4652_;
v_currMacroScope_4700_ = v___x_4656_;
v_cancelTk_x3f_4701_ = v___x_4657_;
v_inheritedTraceOptions_4702_ = v___x_4727_;
v_currRecDepth_4703_ = v___x_4654_;
v_ref_4704_ = v___x_4658_;
v_suppressElabErrors_4705_ = v_anyFailed_4648_;
v_checkDeprecated_4706_ = v___x_4660_;
v_isRecordingDeps_4707_ = v_anyFailed_4648_;
goto v___jp_4692_;
}
v___jp_4741_:
{
lean_object* v___x_4743_; lean_object* v_env_4744_; lean_object* v_nextMacroScope_4745_; lean_object* v_ngen_4746_; lean_object* v_auxDeclNGen_4747_; lean_object* v_traceState_4748_; lean_object* v_recordedDeps_4749_; lean_object* v_messages_4750_; lean_object* v_infoState_4751_; lean_object* v_snapshotTasks_4752_; uint8_t v___x_4753_; 
v___x_4743_ = lean_st_ref_take(v___x_4675_);
v_env_4744_ = lean_ctor_get(v___x_4743_, 0);
lean_inc_ref(v_env_4744_);
v_nextMacroScope_4745_ = lean_ctor_get(v___x_4743_, 1);
lean_inc(v_nextMacroScope_4745_);
v_ngen_4746_ = lean_ctor_get(v___x_4743_, 2);
lean_inc_ref(v_ngen_4746_);
v_auxDeclNGen_4747_ = lean_ctor_get(v___x_4743_, 3);
lean_inc_ref(v_auxDeclNGen_4747_);
v_traceState_4748_ = lean_ctor_get(v___x_4743_, 4);
lean_inc_ref(v_traceState_4748_);
v_recordedDeps_4749_ = lean_ctor_get(v___x_4743_, 6);
lean_inc_ref(v_recordedDeps_4749_);
v_messages_4750_ = lean_ctor_get(v___x_4743_, 7);
lean_inc_ref(v_messages_4750_);
v_infoState_4751_ = lean_ctor_get(v___x_4743_, 8);
lean_inc_ref(v_infoState_4751_);
v_snapshotTasks_4752_ = lean_ctor_get(v___x_4743_, 9);
lean_inc_ref(v_snapshotTasks_4752_);
lean_dec(v___x_4743_);
v___x_4753_ = lean_uint8_once(&l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22, &l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22_once, _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__22);
if (v___x_4753_ == 0)
{
lean_object* v___x_4754_; 
v___x_4754_ = l_Lean_Kernel_enableDiag(v_env_4744_, v___x_4671_);
v_nextMacroScope_4729_ = v_nextMacroScope_4745_;
v_ngen_4730_ = v_ngen_4746_;
v_auxDeclNGen_4731_ = v_auxDeclNGen_4747_;
v_traceState_4732_ = v_traceState_4748_;
v_recordedDeps_4733_ = v_recordedDeps_4749_;
v_messages_4734_ = v_messages_4750_;
v_infoState_4735_ = v_infoState_4751_;
v_snapshotTasks_4736_ = v_snapshotTasks_4752_;
v___y_4737_ = v___x_4754_;
goto v___jp_4728_;
}
else
{
lean_object* v___x_4755_; 
v___x_4755_ = l_Lean_Kernel_enableDiag(v_env_4744_, v___y_4742_);
v_nextMacroScope_4729_ = v_nextMacroScope_4745_;
v_ngen_4730_ = v_ngen_4746_;
v_auxDeclNGen_4731_ = v_auxDeclNGen_4747_;
v_traceState_4732_ = v_traceState_4748_;
v_recordedDeps_4733_ = v_recordedDeps_4749_;
v_messages_4734_ = v_messages_4750_;
v_infoState_4735_ = v_infoState_4751_;
v_snapshotTasks_4736_ = v_snapshotTasks_4752_;
v___y_4737_ = v___x_4755_;
goto v___jp_4728_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks___boxed(lean_object* v_sp_4759_, lean_object* v_env_4760_, lean_object* v_mod_4761_, lean_object* v_a_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(v_sp_4759_, v_env_4760_, v_mod_4761_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(lean_object* v_as_4764_, size_t v_sz_4765_, size_t v_i_4766_, lean_object* v_b_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_){
_start:
{
lean_object* v___x_4771_; 
v___x_4771_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___redArg(v_as_4764_, v_sz_4765_, v_i_4766_, v_b_4767_, v___y_4768_);
return v___x_4771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1___boxed(lean_object* v_as_4772_, lean_object* v_sz_4773_, lean_object* v_i_4774_, lean_object* v_b_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_){
_start:
{
size_t v_sz_boxed_4779_; size_t v_i_boxed_4780_; lean_object* v_res_4781_; 
v_sz_boxed_4779_ = lean_unbox_usize(v_sz_4773_);
lean_dec(v_sz_4773_);
v_i_boxed_4780_ = lean_unbox_usize(v_i_4774_);
lean_dec(v_i_4774_);
v_res_4781_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks_spec__1(v_as_4772_, v_sz_boxed_4779_, v_i_boxed_4780_, v_b_4775_, v___y_4776_, v___y_4777_);
lean_dec(v___y_4777_);
lean_dec_ref(v___y_4776_);
lean_dec_ref(v_as_4772_);
return v_res_4781_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1(){
_start:
{
lean_object* v___x_4783_; 
v___x_4783_ = lean_enable_initializer_execution();
return v___x_4783_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1___boxed(lean_object* v_a_4784_){
_start:
{
lean_object* v_res_4785_; 
v_res_4785_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__1();
return v_res_4785_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(lean_object* v_region_4786_){
_start:
{
lean_object* v___x_4788_; 
v___x_4788_ = lean_compacted_region_free(v_region_4786_);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4___boxed(lean_object* v_region_4789_, lean_object* v_a_4790_){
_start:
{
lean_object* v_res_4791_; 
v_res_4791_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_run_unsafe__4(v_region_4789_);
return v_res_4791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(lean_object* v_o_4795_, lean_object* v_k_4796_, uint8_t v_v_4797_){
_start:
{
lean_object* v_map_4798_; uint8_t v_hasTrace_4799_; lean_object* v___x_4801_; uint8_t v_isShared_4802_; uint8_t v_isSharedCheck_4813_; 
v_map_4798_ = lean_ctor_get(v_o_4795_, 0);
v_hasTrace_4799_ = lean_ctor_get_uint8(v_o_4795_, sizeof(void*)*1);
v_isSharedCheck_4813_ = !lean_is_exclusive(v_o_4795_);
if (v_isSharedCheck_4813_ == 0)
{
v___x_4801_ = v_o_4795_;
v_isShared_4802_ = v_isSharedCheck_4813_;
goto v_resetjp_4800_;
}
else
{
lean_inc(v_map_4798_);
lean_dec(v_o_4795_);
v___x_4801_ = lean_box(0);
v_isShared_4802_ = v_isSharedCheck_4813_;
goto v_resetjp_4800_;
}
v_resetjp_4800_:
{
lean_object* v___x_4803_; lean_object* v___x_4804_; 
v___x_4803_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4803_, 0, v_v_4797_);
lean_inc(v_k_4796_);
v___x_4804_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_4796_, v___x_4803_, v_map_4798_);
if (v_hasTrace_4799_ == 0)
{
lean_object* v___x_4805_; uint8_t v___x_4806_; lean_object* v___x_4808_; 
v___x_4805_ = ((lean_object*)(l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___closed__1));
v___x_4806_ = l_Lean_Name_isPrefixOf(v___x_4805_, v_k_4796_);
lean_dec(v_k_4796_);
if (v_isShared_4802_ == 0)
{
lean_ctor_set(v___x_4801_, 0, v___x_4804_);
v___x_4808_ = v___x_4801_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v___x_4804_);
v___x_4808_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
lean_ctor_set_uint8(v___x_4808_, sizeof(void*)*1, v___x_4806_);
return v___x_4808_;
}
}
else
{
lean_object* v___x_4811_; 
lean_dec(v_k_4796_);
if (v_isShared_4802_ == 0)
{
lean_ctor_set(v___x_4801_, 0, v___x_4804_);
v___x_4811_ = v___x_4801_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v___x_4804_);
lean_ctor_set_uint8(v_reuseFailAlloc_4812_, sizeof(void*)*1, v_hasTrace_4799_);
v___x_4811_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
return v___x_4811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0___boxed(lean_object* v_o_4814_, lean_object* v_k_4815_, lean_object* v_v_4816_){
_start:
{
uint8_t v_v_boxed_4817_; lean_object* v_res_4818_; 
v_v_boxed_4817_ = lean_unbox(v_v_4816_);
v_res_4818_ = l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(v_o_4814_, v_k_4815_, v_v_boxed_4817_);
return v_res_4818_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4(lean_object* v_s_4819_){
_start:
{
lean_object* v___x_4821_; lean_object* v___x_4822_; uint32_t v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; 
v___x_4821_ = lean_unsigned_to_nat(80u);
v___x_4822_ = l_Lean_Json_pretty(v_s_4819_, v___x_4821_);
v___x_4823_ = 10;
v___x_4824_ = lean_string_push(v___x_4822_, v___x_4823_);
v___x_4825_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__13_spec__23(v___x_4824_);
return v___x_4825_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lake_BuiltinLint_run_spec__4___boxed(lean_object* v_s_4826_, lean_object* v_a_4827_){
_start:
{
lean_object* v_res_4828_; 
v_res_4828_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__4(v_s_4826_);
return v_res_4828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(lean_object* v_as_4829_, size_t v_sz_4830_, size_t v_i_4831_, lean_object* v_b_4832_){
_start:
{
uint8_t v___x_4834_; 
v___x_4834_ = lean_usize_dec_lt(v_i_4831_, v_sz_4830_);
if (v___x_4834_ == 0)
{
lean_object* v___x_4835_; 
v___x_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4835_, 0, v_b_4832_);
return v___x_4835_;
}
else
{
lean_object* v___x_4836_; lean_object* v_a_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; 
v___x_4836_ = lean_box(0);
v_a_4837_ = lean_array_uget_borrowed(v_as_4829_, v_i_4831_);
lean_inc(v_a_4837_);
v___x_4838_ = l_Lean_Linter_CodeQuality_instToJsonEntry_toJson(v_a_4837_);
v___x_4839_ = l_IO_println___at___00Lake_BuiltinLint_run_spec__4(v___x_4838_);
if (lean_obj_tag(v___x_4839_) == 0)
{
size_t v___x_4840_; size_t v___x_4841_; 
lean_dec_ref_known(v___x_4839_, 1);
v___x_4840_ = ((size_t)1ULL);
v___x_4841_ = lean_usize_add(v_i_4831_, v___x_4840_);
v_i_4831_ = v___x_4841_;
v_b_4832_ = v___x_4836_;
goto _start;
}
else
{
return v___x_4839_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5___boxed(lean_object* v_as_4843_, lean_object* v_sz_4844_, lean_object* v_i_4845_, lean_object* v_b_4846_, lean_object* v___y_4847_){
_start:
{
size_t v_sz_boxed_4848_; size_t v_i_boxed_4849_; lean_object* v_res_4850_; 
v_sz_boxed_4848_ = lean_unbox_usize(v_sz_4844_);
lean_dec(v_sz_4844_);
v_i_boxed_4849_ = lean_unbox_usize(v_i_4845_);
lean_dec(v_i_4845_);
v_res_4850_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v_as_4843_, v_sz_boxed_4848_, v_i_boxed_4849_, v_b_4846_);
lean_dec_ref(v_as_4843_);
return v_res_4850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(lean_object* v___x_4851_, size_t v_sz_4852_, size_t v_i_4853_, lean_object* v_bs_4854_){
_start:
{
uint8_t v_anyUnlocated_4855_; 
v_anyUnlocated_4855_ = lean_usize_dec_lt(v_i_4853_, v_sz_4852_);
if (v_anyUnlocated_4855_ == 0)
{
return v_bs_4854_;
}
else
{
lean_object* v___x_4856_; uint8_t v_anyFailed_4857_; lean_object* v_v_4858_; lean_object* v_bs_x27_4859_; lean_object* v___x_4860_; size_t v___x_4861_; size_t v___x_4862_; lean_object* v___x_4863_; 
v___x_4856_ = lean_unsigned_to_nat(0u);
v_anyFailed_4857_ = lean_nat_dec_eq(v___x_4851_, v___x_4856_);
v_v_4858_ = lean_array_uget(v_bs_4854_, v_i_4853_);
v_bs_x27_4859_ = lean_array_uset(v_bs_4854_, v_i_4853_, v___x_4856_);
v___x_4860_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_4860_, 0, v_v_4858_);
lean_ctor_set_uint8(v___x_4860_, sizeof(void*)*1, v_anyFailed_4857_);
lean_ctor_set_uint8(v___x_4860_, sizeof(void*)*1 + 1, v_anyUnlocated_4855_);
lean_ctor_set_uint8(v___x_4860_, sizeof(void*)*1 + 2, v_anyFailed_4857_);
v___x_4861_ = ((size_t)1ULL);
v___x_4862_ = lean_usize_add(v_i_4853_, v___x_4861_);
v___x_4863_ = lean_array_uset(v_bs_x27_4859_, v_i_4853_, v___x_4860_);
v_i_4853_ = v___x_4862_;
v_bs_4854_ = v___x_4863_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1___boxed(lean_object* v___x_4865_, lean_object* v_sz_4866_, lean_object* v_i_4867_, lean_object* v_bs_4868_){
_start:
{
size_t v_sz_boxed_4869_; size_t v_i_boxed_4870_; lean_object* v_res_4871_; 
v_sz_boxed_4869_ = lean_unbox_usize(v_sz_4866_);
lean_dec(v_sz_4866_);
v_i_boxed_4870_ = lean_unbox_usize(v_i_4867_);
lean_dec(v_i_4867_);
v_res_4871_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(v___x_4865_, v_sz_boxed_4869_, v_i_boxed_4870_, v_bs_4868_);
lean_dec(v___x_4865_);
return v_res_4871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(lean_object* v_as_4872_, size_t v_i_4873_, size_t v_stop_4874_, lean_object* v_b_4875_){
_start:
{
uint8_t v___x_4876_; 
v___x_4876_ = lean_usize_dec_eq(v_i_4873_, v_stop_4874_);
if (v___x_4876_ == 0)
{
lean_object* v___x_4877_; lean_object* v_fst_4878_; lean_object* v_snd_4879_; uint8_t v___x_4880_; lean_object* v___x_4881_; size_t v___x_4882_; size_t v___x_4883_; 
v___x_4877_ = lean_array_uget_borrowed(v_as_4872_, v_i_4873_);
v_fst_4878_ = lean_ctor_get(v___x_4877_, 0);
v_snd_4879_ = lean_ctor_get(v___x_4877_, 1);
v___x_4880_ = lean_unbox(v_snd_4879_);
lean_inc(v_fst_4878_);
v___x_4881_ = l_Lean_Options_set___at___00Lake_BuiltinLint_run_spec__0(v_b_4875_, v_fst_4878_, v___x_4880_);
v___x_4882_ = ((size_t)1ULL);
v___x_4883_ = lean_usize_add(v_i_4873_, v___x_4882_);
v_i_4873_ = v___x_4883_;
v_b_4875_ = v___x_4881_;
goto _start;
}
else
{
return v_b_4875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2___boxed(lean_object* v_as_4885_, lean_object* v_i_4886_, lean_object* v_stop_4887_, lean_object* v_b_4888_){
_start:
{
size_t v_i_boxed_4889_; size_t v_stop_boxed_4890_; lean_object* v_res_4891_; 
v_i_boxed_4889_ = lean_unbox_usize(v_i_4886_);
lean_dec(v_i_4886_);
v_stop_boxed_4890_ = lean_unbox_usize(v_stop_4887_);
lean_dec(v_stop_4887_);
v_res_4891_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_as_4885_, v_i_boxed_4889_, v_stop_boxed_4890_, v_b_4888_);
lean_dec_ref(v_as_4885_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(lean_object* v___x_4901_, lean_object* v_checkImports_4902_, lean_object* v_args_4903_, lean_object* v___x_4904_, lean_object* v_as_4905_, size_t v_sz_4906_, size_t v_i_4907_, lean_object* v_b_4908_){
_start:
{
lean_object* v_a_4911_; lean_object* v___x_4915_; uint8_t v_anyFailed_4916_; uint8_t v_anyUnlocated_4917_; lean_object* v___x_4918_; lean_object* v_envLinterModule_4919_; uint8_t v___x_4920_; 
v___x_4915_ = lean_unsigned_to_nat(0u);
v_anyFailed_4916_ = lean_nat_dec_eq(v___x_4901_, v___x_4915_);
v_anyUnlocated_4917_ = 1;
v___x_4918_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__3));
v_envLinterModule_4919_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_envLinterModule_4919_, 0, v___x_4918_);
lean_ctor_set_uint8(v_envLinterModule_4919_, sizeof(void*)*1, v_anyFailed_4916_);
lean_ctor_set_uint8(v_envLinterModule_4919_, sizeof(void*)*1 + 1, v_anyUnlocated_4917_);
lean_ctor_set_uint8(v_envLinterModule_4919_, sizeof(void*)*1 + 2, v_anyFailed_4916_);
v___x_4920_ = lean_usize_dec_lt(v_i_4907_, v_sz_4906_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4921_; 
lean_dec_ref_known(v_envLinterModule_4919_, 1);
lean_dec(v___x_4904_);
v___x_4921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4921_, 0, v_b_4908_);
return v___x_4921_;
}
else
{
lean_object* v_snd_4922_; lean_object* v_snd_4923_; lean_object* v_snd_4924_; lean_object* v_snd_4925_; lean_object* v_fst_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_5235_; 
v_snd_4922_ = lean_ctor_get(v_b_4908_, 1);
lean_inc(v_snd_4922_);
v_snd_4923_ = lean_ctor_get(v_snd_4922_, 1);
lean_inc(v_snd_4923_);
v_snd_4924_ = lean_ctor_get(v_snd_4923_, 1);
lean_inc(v_snd_4924_);
v_snd_4925_ = lean_ctor_get(v_snd_4924_, 1);
lean_inc(v_snd_4925_);
v_fst_4926_ = lean_ctor_get(v_b_4908_, 0);
v_isSharedCheck_5235_ = !lean_is_exclusive(v_b_4908_);
if (v_isSharedCheck_5235_ == 0)
{
lean_object* v_unused_5236_; 
v_unused_5236_ = lean_ctor_get(v_b_4908_, 1);
lean_dec(v_unused_5236_);
v___x_4928_ = v_b_4908_;
v_isShared_4929_ = v_isSharedCheck_5235_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_fst_4926_);
lean_dec(v_b_4908_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_5235_;
goto v_resetjp_4927_;
}
v_resetjp_4927_:
{
lean_object* v_fst_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_5233_; 
v_fst_4930_ = lean_ctor_get(v_snd_4922_, 0);
v_isSharedCheck_5233_ = !lean_is_exclusive(v_snd_4922_);
if (v_isSharedCheck_5233_ == 0)
{
lean_object* v_unused_5234_; 
v_unused_5234_ = lean_ctor_get(v_snd_4922_, 1);
lean_dec(v_unused_5234_);
v___x_4932_ = v_snd_4922_;
v_isShared_4933_ = v_isSharedCheck_5233_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_fst_4930_);
lean_dec(v_snd_4922_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_5233_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v_fst_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_5231_; 
v_fst_4934_ = lean_ctor_get(v_snd_4923_, 0);
v_isSharedCheck_5231_ = !lean_is_exclusive(v_snd_4923_);
if (v_isSharedCheck_5231_ == 0)
{
lean_object* v_unused_5232_; 
v_unused_5232_ = lean_ctor_get(v_snd_4923_, 1);
lean_dec(v_unused_5232_);
v___x_4936_ = v_snd_4923_;
v_isShared_4937_ = v_isSharedCheck_5231_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_fst_4934_);
lean_dec(v_snd_4923_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_5231_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v_fst_4938_; lean_object* v___x_4940_; uint8_t v_isShared_4941_; uint8_t v_isSharedCheck_5229_; 
v_fst_4938_ = lean_ctor_get(v_snd_4924_, 0);
v_isSharedCheck_5229_ = !lean_is_exclusive(v_snd_4924_);
if (v_isSharedCheck_5229_ == 0)
{
lean_object* v_unused_5230_; 
v_unused_5230_ = lean_ctor_get(v_snd_4924_, 1);
lean_dec(v_unused_5230_);
v___x_4940_ = v_snd_4924_;
v_isShared_4941_ = v_isSharedCheck_5229_;
goto v_resetjp_4939_;
}
else
{
lean_inc(v_fst_4938_);
lean_dec(v_snd_4924_);
v___x_4940_ = lean_box(0);
v_isShared_4941_ = v_isSharedCheck_5229_;
goto v_resetjp_4939_;
}
v_resetjp_4939_:
{
lean_object* v_fst_4942_; lean_object* v_snd_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_5228_; 
v_fst_4942_ = lean_ctor_get(v_snd_4925_, 0);
v_snd_4943_ = lean_ctor_get(v_snd_4925_, 1);
v_isSharedCheck_5228_ = !lean_is_exclusive(v_snd_4925_);
if (v_isSharedCheck_5228_ == 0)
{
v___x_4945_ = v_snd_4925_;
v_isShared_4946_ = v_isSharedCheck_5228_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_snd_4943_);
lean_inc(v_fst_4942_);
lean_dec(v_snd_4925_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_5228_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4947_; lean_object* v_a_4948_; lean_object* v___y_4950_; lean_object* v___y_4951_; uint8_t v_anyFailed_4952_; uint8_t v_anyUnlocated_4953_; lean_object* v_records_4954_; lean_object* v_codeQualityEntries_4955_; lean_object* v___y_5102_; lean_object* v___y_5103_; uint8_t v_anyFailed_5104_; uint8_t v_anyUnlocated_5105_; lean_object* v_records_5106_; lean_object* v_codeQualityEntries_5107_; lean_object* v___y_5125_; lean_object* v___y_5126_; lean_object* v___x_5165_; lean_object* v___x_5166_; 
v___x_4947_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v_a_4948_ = lean_array_uget_borrowed(v_as_4905_, v_i_4907_);
v___x_5165_ = lean_enable_initializer_execution();
lean_inc(v_a_4948_);
v___x_5166_ = l_Lean_findOLean(v_a_4948_);
if (lean_obj_tag(v___x_5166_) == 0)
{
lean_object* v_a_5167_; lean_object* v___x_5168_; 
v_a_5167_ = lean_ctor_get(v___x_5166_, 0);
lean_inc(v_a_5167_);
lean_dec_ref_known(v___x_5166_, 1);
v___x_5168_ = l_Lean_readModuleData(v_a_5167_);
lean_dec(v_a_5167_);
if (lean_obj_tag(v___x_5168_) == 0)
{
lean_object* v_a_5169_; lean_object* v_fst_5170_; lean_object* v_snd_5171_; uint8_t v___x_5172_; uint8_t v___y_5174_; 
v_a_5169_ = lean_ctor_get(v___x_5168_, 0);
lean_inc(v_a_5169_);
lean_dec_ref_known(v___x_5168_, 1);
v_fst_5170_ = lean_ctor_get(v_a_5169_, 0);
lean_inc(v_fst_5170_);
v_snd_5171_ = lean_ctor_get(v_a_5169_, 1);
lean_inc(v_snd_5171_);
lean_dec(v_a_5169_);
v___x_5172_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_getIsModule(v_fst_5170_);
lean_dec(v_fst_5170_);
if (v___x_5172_ == 0)
{
uint8_t v___x_5210_; 
v___x_5210_ = 2;
v___y_5174_ = v___x_5210_;
goto v___jp_5173_;
}
else
{
uint8_t v___x_5211_; 
v___x_5211_ = 1;
v___y_5174_ = v___x_5211_;
goto v___jp_5173_;
}
v___jp_5173_:
{
lean_object* v___x_5175_; 
v___x_5175_ = lean_compacted_region_free(v_snd_5171_);
if (lean_obj_tag(v___x_5175_) == 0)
{
lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; uint32_t v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; 
lean_dec_ref_known(v___x_5175_, 1);
lean_inc(v_a_4948_);
v___x_5176_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_5176_, 0, v_a_4948_);
lean_ctor_set_uint8(v___x_5176_, sizeof(void*)*1, v_anyFailed_4916_);
lean_ctor_set_uint8(v___x_5176_, sizeof(void*)*1 + 1, v_anyUnlocated_4917_);
lean_ctor_set_uint8(v___x_5176_, sizeof(void*)*1 + 2, v_anyFailed_4916_);
v___x_5177_ = lean_unsigned_to_nat(2u);
v___x_5178_ = lean_mk_empty_array_with_capacity(v___x_5177_);
v___x_5179_ = lean_array_push(v___x_5178_, v___x_5176_);
v___x_5180_ = lean_array_push(v___x_5179_, v_envLinterModule_4919_);
v___x_5181_ = l_Array_append___redArg(v___x_5180_, v_checkImports_4902_);
v___x_5182_ = l_Lean_Options_empty;
v___x_5183_ = 1024;
v___x_5184_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___closed__4));
v___x_5185_ = lean_box(1);
v___x_5186_ = l_Lean_importModules(v___x_5181_, v___x_5182_, v___x_5183_, v___x_5184_, v_anyFailed_4916_, v_anyUnlocated_4917_, v___y_5174_, v___x_5185_);
if (lean_obj_tag(v___x_5186_) == 0)
{
lean_object* v_a_5187_; lean_object* v_linterOverrides_5188_; lean_object* v___x_5189_; uint8_t v___x_5190_; 
v_a_5187_ = lean_ctor_get(v___x_5186_, 0);
lean_inc(v_a_5187_);
lean_dec_ref_known(v___x_5186_, 1);
v_linterOverrides_5188_ = lean_ctor_get(v_args_4903_, 0);
v___x_5189_ = lean_array_get_size(v_linterOverrides_5188_);
v___x_5190_ = lean_nat_dec_lt(v___x_4915_, v___x_5189_);
if (v___x_5190_ == 0)
{
v___y_5125_ = v_a_5187_;
v___y_5126_ = v___x_5182_;
goto v___jp_5124_;
}
else
{
size_t v___x_5191_; size_t v___x_5192_; lean_object* v___x_5193_; 
v___x_5191_ = ((size_t)0ULL);
v___x_5192_ = lean_usize_of_nat(v___x_5189_);
v___x_5193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_BuiltinLint_run_spec__2(v_linterOverrides_5188_, v___x_5191_, v___x_5192_, v___x_5182_);
v___y_5125_ = v_a_5187_;
v___y_5126_ = v___x_5193_;
goto v___jp_5124_;
}
}
else
{
lean_object* v_a_5194_; lean_object* v___x_5196_; uint8_t v_isShared_5197_; uint8_t v_isSharedCheck_5201_; 
lean_del_object(v___x_4945_);
lean_dec(v_snd_4943_);
lean_dec(v_fst_4942_);
lean_del_object(v___x_4940_);
lean_dec(v_fst_4938_);
lean_del_object(v___x_4936_);
lean_dec(v_fst_4934_);
lean_del_object(v___x_4932_);
lean_dec(v_fst_4930_);
lean_del_object(v___x_4928_);
lean_dec(v_fst_4926_);
lean_dec(v___x_4904_);
v_a_5194_ = lean_ctor_get(v___x_5186_, 0);
v_isSharedCheck_5201_ = !lean_is_exclusive(v___x_5186_);
if (v_isSharedCheck_5201_ == 0)
{
v___x_5196_ = v___x_5186_;
v_isShared_5197_ = v_isSharedCheck_5201_;
goto v_resetjp_5195_;
}
else
{
lean_inc(v_a_5194_);
lean_dec(v___x_5186_);
v___x_5196_ = lean_box(0);
v_isShared_5197_ = v_isSharedCheck_5201_;
goto v_resetjp_5195_;
}
v_resetjp_5195_:
{
lean_object* v___x_5199_; 
if (v_isShared_5197_ == 0)
{
v___x_5199_ = v___x_5196_;
goto v_reusejp_5198_;
}
else
{
lean_object* v_reuseFailAlloc_5200_; 
v_reuseFailAlloc_5200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5200_, 0, v_a_5194_);
v___x_5199_ = v_reuseFailAlloc_5200_;
goto v_reusejp_5198_;
}
v_reusejp_5198_:
{
return v___x_5199_;
}
}
}
}
else
{
lean_object* v_a_5202_; lean_object* v___x_5204_; uint8_t v_isShared_5205_; uint8_t v_isSharedCheck_5209_; 
lean_del_object(v___x_4945_);
lean_dec(v_snd_4943_);
lean_dec(v_fst_4942_);
lean_del_object(v___x_4940_);
lean_dec(v_fst_4938_);
lean_del_object(v___x_4936_);
lean_dec(v_fst_4934_);
lean_del_object(v___x_4932_);
lean_dec(v_fst_4930_);
lean_del_object(v___x_4928_);
lean_dec(v_fst_4926_);
lean_dec_ref_known(v_envLinterModule_4919_, 1);
lean_dec(v___x_4904_);
v_a_5202_ = lean_ctor_get(v___x_5175_, 0);
v_isSharedCheck_5209_ = !lean_is_exclusive(v___x_5175_);
if (v_isSharedCheck_5209_ == 0)
{
v___x_5204_ = v___x_5175_;
v_isShared_5205_ = v_isSharedCheck_5209_;
goto v_resetjp_5203_;
}
else
{
lean_inc(v_a_5202_);
lean_dec(v___x_5175_);
v___x_5204_ = lean_box(0);
v_isShared_5205_ = v_isSharedCheck_5209_;
goto v_resetjp_5203_;
}
v_resetjp_5203_:
{
lean_object* v___x_5207_; 
if (v_isShared_5205_ == 0)
{
v___x_5207_ = v___x_5204_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5208_; 
v_reuseFailAlloc_5208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5208_, 0, v_a_5202_);
v___x_5207_ = v_reuseFailAlloc_5208_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
return v___x_5207_;
}
}
}
}
}
else
{
lean_object* v_a_5212_; lean_object* v___x_5214_; uint8_t v_isShared_5215_; uint8_t v_isSharedCheck_5219_; 
lean_del_object(v___x_4945_);
lean_dec(v_snd_4943_);
lean_dec(v_fst_4942_);
lean_del_object(v___x_4940_);
lean_dec(v_fst_4938_);
lean_del_object(v___x_4936_);
lean_dec(v_fst_4934_);
lean_del_object(v___x_4932_);
lean_dec(v_fst_4930_);
lean_del_object(v___x_4928_);
lean_dec(v_fst_4926_);
lean_dec_ref_known(v_envLinterModule_4919_, 1);
lean_dec(v___x_4904_);
v_a_5212_ = lean_ctor_get(v___x_5168_, 0);
v_isSharedCheck_5219_ = !lean_is_exclusive(v___x_5168_);
if (v_isSharedCheck_5219_ == 0)
{
v___x_5214_ = v___x_5168_;
v_isShared_5215_ = v_isSharedCheck_5219_;
goto v_resetjp_5213_;
}
else
{
lean_inc(v_a_5212_);
lean_dec(v___x_5168_);
v___x_5214_ = lean_box(0);
v_isShared_5215_ = v_isSharedCheck_5219_;
goto v_resetjp_5213_;
}
v_resetjp_5213_:
{
lean_object* v___x_5217_; 
if (v_isShared_5215_ == 0)
{
v___x_5217_ = v___x_5214_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v_a_5212_);
v___x_5217_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
return v___x_5217_;
}
}
}
}
else
{
lean_object* v_a_5220_; lean_object* v___x_5222_; uint8_t v_isShared_5223_; uint8_t v_isSharedCheck_5227_; 
lean_del_object(v___x_4945_);
lean_dec(v_snd_4943_);
lean_dec(v_fst_4942_);
lean_del_object(v___x_4940_);
lean_dec(v_fst_4938_);
lean_del_object(v___x_4936_);
lean_dec(v_fst_4934_);
lean_del_object(v___x_4932_);
lean_dec(v_fst_4930_);
lean_del_object(v___x_4928_);
lean_dec(v_fst_4926_);
lean_dec_ref_known(v_envLinterModule_4919_, 1);
lean_dec(v___x_4904_);
v_a_5220_ = lean_ctor_get(v___x_5166_, 0);
v_isSharedCheck_5227_ = !lean_is_exclusive(v___x_5166_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5222_ = v___x_5166_;
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
else
{
lean_inc(v_a_5220_);
lean_dec(v___x_5166_);
v___x_5222_ = lean_box(0);
v_isShared_5223_ = v_isSharedCheck_5227_;
goto v_resetjp_5221_;
}
v_resetjp_5221_:
{
lean_object* v___x_5225_; 
if (v_isShared_5223_ == 0)
{
v___x_5225_ = v___x_5222_;
goto v_reusejp_5224_;
}
else
{
lean_object* v_reuseFailAlloc_5226_; 
v_reuseFailAlloc_5226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5226_, 0, v_a_5220_);
v___x_5225_ = v_reuseFailAlloc_5226_;
goto v_reusejp_5224_;
}
v_reusejp_5224_:
{
return v___x_5225_;
}
}
}
v___jp_4949_:
{
uint8_t v_mode_4956_; uint8_t v___x_4957_; uint8_t v___x_4958_; 
v_mode_4956_ = lean_ctor_get_uint8(v_args_4903_, sizeof(void*)*4 + 1);
v___x_4957_ = 2;
v___x_4958_ = l_Lake_BuiltinLint_instBEqMode_beq(v_mode_4956_, v___x_4957_);
if (v___x_4958_ == 0)
{
lean_object* v___x_4959_; lean_object* v___x_4960_; 
v___x_4959_ = l_Lean_Name_getRoot(v_a_4948_);
lean_inc(v___x_4904_);
v___x_4960_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks(v_args_4903_, v___y_4951_, v___x_4904_, v___y_4950_, v___x_4959_, v_fst_4942_);
lean_dec_ref(v___y_4951_);
if (lean_obj_tag(v___x_4960_) == 0)
{
lean_object* v_a_4961_; lean_object* v_outcome_4962_; 
v_a_4961_ = lean_ctor_get(v___x_4960_, 0);
lean_inc(v_a_4961_);
lean_dec_ref_known(v___x_4960_, 1);
v_outcome_4962_ = lean_ctor_get(v_a_4961_, 0);
if (lean_obj_tag(v_outcome_4962_) == 0)
{
uint8_t v_failed_4963_; 
v_failed_4963_ = lean_ctor_get_uint8(v_outcome_4962_, 0);
if (v_failed_4963_ == 0)
{
lean_object* v_checkedModules_4964_; lean_object* v___x_4966_; 
v_checkedModules_4964_ = lean_ctor_get(v_a_4961_, 1);
lean_inc(v_checkedModules_4964_);
lean_dec(v_a_4961_);
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 0, v_checkedModules_4964_);
v___x_4966_ = v___x_4945_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_checkedModules_4964_);
lean_ctor_set(v_reuseFailAlloc_4981_, 1, v_snd_4943_);
v___x_4966_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
lean_object* v___x_4968_; 
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 1, v___x_4966_);
lean_ctor_set(v___x_4940_, 0, v_codeQualityEntries_4955_);
v___x_4968_ = v___x_4940_;
goto v_reusejp_4967_;
}
else
{
lean_object* v_reuseFailAlloc_4980_; 
v_reuseFailAlloc_4980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4980_, 0, v_codeQualityEntries_4955_);
lean_ctor_set(v_reuseFailAlloc_4980_, 1, v___x_4966_);
v___x_4968_ = v_reuseFailAlloc_4980_;
goto v_reusejp_4967_;
}
v_reusejp_4967_:
{
lean_object* v___x_4970_; 
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 1, v___x_4968_);
lean_ctor_set(v___x_4936_, 0, v_records_4954_);
v___x_4970_ = v___x_4936_;
goto v_reusejp_4969_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v_records_4954_);
lean_ctor_set(v_reuseFailAlloc_4979_, 1, v___x_4968_);
v___x_4970_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4969_;
}
v_reusejp_4969_:
{
lean_object* v___x_4971_; lean_object* v___x_4973_; 
v___x_4971_ = lean_box(v_anyUnlocated_4953_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 1, v___x_4970_);
lean_ctor_set(v___x_4932_, 0, v___x_4971_);
v___x_4973_ = v___x_4932_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v___x_4971_);
lean_ctor_set(v_reuseFailAlloc_4978_, 1, v___x_4970_);
v___x_4973_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
lean_object* v___x_4974_; lean_object* v___x_4976_; 
v___x_4974_ = lean_box(v_anyFailed_4952_);
if (v_isShared_4929_ == 0)
{
lean_ctor_set(v___x_4928_, 1, v___x_4973_);
lean_ctor_set(v___x_4928_, 0, v___x_4974_);
v___x_4976_ = v___x_4928_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v___x_4974_);
lean_ctor_set(v_reuseFailAlloc_4977_, 1, v___x_4973_);
v___x_4976_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
v_a_4911_ = v___x_4976_;
goto v___jp_4910_;
}
}
}
}
}
}
else
{
lean_object* v_checkedModules_4982_; lean_object* v___x_4984_; 
v_checkedModules_4982_ = lean_ctor_get(v_a_4961_, 1);
lean_inc(v_checkedModules_4982_);
lean_dec(v_a_4961_);
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 0, v_checkedModules_4982_);
v___x_4984_ = v___x_4945_;
goto v_reusejp_4983_;
}
else
{
lean_object* v_reuseFailAlloc_4999_; 
v_reuseFailAlloc_4999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4999_, 0, v_checkedModules_4982_);
lean_ctor_set(v_reuseFailAlloc_4999_, 1, v_snd_4943_);
v___x_4984_ = v_reuseFailAlloc_4999_;
goto v_reusejp_4983_;
}
v_reusejp_4983_:
{
lean_object* v___x_4986_; 
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 1, v___x_4984_);
lean_ctor_set(v___x_4940_, 0, v_codeQualityEntries_4955_);
v___x_4986_ = v___x_4940_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_codeQualityEntries_4955_);
lean_ctor_set(v_reuseFailAlloc_4998_, 1, v___x_4984_);
v___x_4986_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
lean_object* v___x_4988_; 
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 1, v___x_4986_);
lean_ctor_set(v___x_4936_, 0, v_records_4954_);
v___x_4988_ = v___x_4936_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v_records_4954_);
lean_ctor_set(v_reuseFailAlloc_4997_, 1, v___x_4986_);
v___x_4988_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
lean_object* v___x_4989_; lean_object* v___x_4991_; 
v___x_4989_ = lean_box(v_anyUnlocated_4953_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 1, v___x_4988_);
lean_ctor_set(v___x_4932_, 0, v___x_4989_);
v___x_4991_ = v___x_4932_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4996_; 
v_reuseFailAlloc_4996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4996_, 0, v___x_4989_);
lean_ctor_set(v_reuseFailAlloc_4996_, 1, v___x_4988_);
v___x_4991_ = v_reuseFailAlloc_4996_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
lean_object* v___x_4992_; lean_object* v___x_4994_; 
v___x_4992_ = lean_box(v_anyUnlocated_4917_);
if (v_isShared_4929_ == 0)
{
lean_ctor_set(v___x_4928_, 1, v___x_4991_);
lean_ctor_set(v___x_4928_, 0, v___x_4992_);
v___x_4994_ = v___x_4928_;
goto v_reusejp_4993_;
}
else
{
lean_object* v_reuseFailAlloc_4995_; 
v_reuseFailAlloc_4995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4995_, 0, v___x_4992_);
lean_ctor_set(v_reuseFailAlloc_4995_, 1, v___x_4991_);
v___x_4994_ = v_reuseFailAlloc_4995_;
goto v_reusejp_4993_;
}
v_reusejp_4993_:
{
v_a_4911_ = v___x_4994_;
goto v___jp_4910_;
}
}
}
}
}
}
}
else
{
lean_object* v_checkedModules_5000_; lean_object* v_records_5001_; uint8_t v_unlocated_5002_; lean_object* v___x_5003_; 
lean_inc_ref(v_outcome_4962_);
v_checkedModules_5000_ = lean_ctor_get(v_a_4961_, 1);
lean_inc(v_checkedModules_5000_);
lean_dec(v_a_4961_);
v_records_5001_ = lean_ctor_get(v_outcome_4962_, 0);
lean_inc_ref(v_records_5001_);
v_unlocated_5002_ = lean_ctor_get_uint8(v_outcome_4962_, sizeof(void*)*1);
lean_dec_ref_known(v_outcome_4962_, 1);
v___x_5003_ = l_Array_append___redArg(v_records_4954_, v_records_5001_);
lean_dec_ref(v_records_5001_);
if (v_unlocated_5002_ == 0)
{
lean_object* v___x_5005_; 
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 0, v_checkedModules_5000_);
v___x_5005_ = v___x_4945_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5020_; 
v_reuseFailAlloc_5020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5020_, 0, v_checkedModules_5000_);
lean_ctor_set(v_reuseFailAlloc_5020_, 1, v_snd_4943_);
v___x_5005_ = v_reuseFailAlloc_5020_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
lean_object* v___x_5007_; 
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 1, v___x_5005_);
lean_ctor_set(v___x_4940_, 0, v_codeQualityEntries_4955_);
v___x_5007_ = v___x_4940_;
goto v_reusejp_5006_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v_codeQualityEntries_4955_);
lean_ctor_set(v_reuseFailAlloc_5019_, 1, v___x_5005_);
v___x_5007_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5006_;
}
v_reusejp_5006_:
{
lean_object* v___x_5009_; 
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 1, v___x_5007_);
lean_ctor_set(v___x_4936_, 0, v___x_5003_);
v___x_5009_ = v___x_4936_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5018_; 
v_reuseFailAlloc_5018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5018_, 0, v___x_5003_);
lean_ctor_set(v_reuseFailAlloc_5018_, 1, v___x_5007_);
v___x_5009_ = v_reuseFailAlloc_5018_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
lean_object* v___x_5010_; lean_object* v___x_5012_; 
v___x_5010_ = lean_box(v_anyUnlocated_4953_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 1, v___x_5009_);
lean_ctor_set(v___x_4932_, 0, v___x_5010_);
v___x_5012_ = v___x_4932_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5017_; 
v_reuseFailAlloc_5017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5017_, 0, v___x_5010_);
lean_ctor_set(v_reuseFailAlloc_5017_, 1, v___x_5009_);
v___x_5012_ = v_reuseFailAlloc_5017_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
lean_object* v___x_5013_; lean_object* v___x_5015_; 
v___x_5013_ = lean_box(v_anyFailed_4952_);
if (v_isShared_4929_ == 0)
{
lean_ctor_set(v___x_4928_, 1, v___x_5012_);
lean_ctor_set(v___x_4928_, 0, v___x_5013_);
v___x_5015_ = v___x_4928_;
goto v_reusejp_5014_;
}
else
{
lean_object* v_reuseFailAlloc_5016_; 
v_reuseFailAlloc_5016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5016_, 0, v___x_5013_);
lean_ctor_set(v_reuseFailAlloc_5016_, 1, v___x_5012_);
v___x_5015_ = v_reuseFailAlloc_5016_;
goto v_reusejp_5014_;
}
v_reusejp_5014_:
{
v_a_4911_ = v___x_5015_;
goto v___jp_4910_;
}
}
}
}
}
}
else
{
lean_object* v___x_5022_; 
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 0, v_checkedModules_5000_);
v___x_5022_ = v___x_4945_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5037_; 
v_reuseFailAlloc_5037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5037_, 0, v_checkedModules_5000_);
lean_ctor_set(v_reuseFailAlloc_5037_, 1, v_snd_4943_);
v___x_5022_ = v_reuseFailAlloc_5037_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
lean_object* v___x_5024_; 
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 1, v___x_5022_);
lean_ctor_set(v___x_4940_, 0, v_codeQualityEntries_4955_);
v___x_5024_ = v___x_4940_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5036_; 
v_reuseFailAlloc_5036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5036_, 0, v_codeQualityEntries_4955_);
lean_ctor_set(v_reuseFailAlloc_5036_, 1, v___x_5022_);
v___x_5024_ = v_reuseFailAlloc_5036_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
lean_object* v___x_5026_; 
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 1, v___x_5024_);
lean_ctor_set(v___x_4936_, 0, v___x_5003_);
v___x_5026_ = v___x_4936_;
goto v_reusejp_5025_;
}
else
{
lean_object* v_reuseFailAlloc_5035_; 
v_reuseFailAlloc_5035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5035_, 0, v___x_5003_);
lean_ctor_set(v_reuseFailAlloc_5035_, 1, v___x_5024_);
v___x_5026_ = v_reuseFailAlloc_5035_;
goto v_reusejp_5025_;
}
v_reusejp_5025_:
{
lean_object* v___x_5027_; lean_object* v___x_5029_; 
v___x_5027_ = lean_box(v_anyUnlocated_4917_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 1, v___x_5026_);
lean_ctor_set(v___x_4932_, 0, v___x_5027_);
v___x_5029_ = v___x_4932_;
goto v_reusejp_5028_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v___x_5027_);
lean_ctor_set(v_reuseFailAlloc_5034_, 1, v___x_5026_);
v___x_5029_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5028_;
}
v_reusejp_5028_:
{
lean_object* v___x_5030_; lean_object* v___x_5032_; 
v___x_5030_ = lean_box(v_anyFailed_4952_);
if (v_isShared_4929_ == 0)
{
lean_ctor_set(v___x_4928_, 1, v___x_5029_);
lean_ctor_set(v___x_4928_, 0, v___x_5030_);
v___x_5032_ = v___x_4928_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v___x_5030_);
lean_ctor_set(v_reuseFailAlloc_5033_, 1, v___x_5029_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
v_a_4911_ = v___x_5032_;
goto v___jp_4910_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_5038_; lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5045_; 
lean_dec_ref(v_codeQualityEntries_4955_);
lean_dec_ref(v_records_4954_);
lean_del_object(v___x_4945_);
lean_dec(v_snd_4943_);
lean_del_object(v___x_4940_);
lean_del_object(v___x_4936_);
lean_del_object(v___x_4932_);
lean_del_object(v___x_4928_);
lean_dec(v___x_4904_);
v_a_5038_ = lean_ctor_get(v___x_4960_, 0);
v_isSharedCheck_5045_ = !lean_is_exclusive(v___x_4960_);
if (v_isSharedCheck_5045_ == 0)
{
v___x_5040_ = v___x_4960_;
v_isShared_5041_ = v_isSharedCheck_5045_;
goto v_resetjp_5039_;
}
else
{
lean_inc(v_a_5038_);
lean_dec(v___x_4960_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5045_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v___x_5043_; 
if (v_isShared_5041_ == 0)
{
v___x_5043_ = v___x_5040_;
goto v_reusejp_5042_;
}
else
{
lean_object* v_reuseFailAlloc_5044_; 
v_reuseFailAlloc_5044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5044_, 0, v_a_5038_);
v___x_5043_ = v_reuseFailAlloc_5044_;
goto v_reusejp_5042_;
}
v_reusejp_5042_:
{
return v___x_5043_;
}
}
}
}
else
{
lean_object* v___x_5046_; lean_object* v_fst_5047_; lean_object* v_snd_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5100_; 
lean_del_object(v___x_4928_);
v___x_5046_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_collectRecordedCodeQuality(v_args_4903_, v___y_4951_, v___y_4950_, v_a_4948_, v_snd_4943_);
lean_dec_ref(v___y_4951_);
v_fst_5047_ = lean_ctor_get(v___x_5046_, 0);
v_snd_5048_ = lean_ctor_get(v___x_5046_, 1);
v_isSharedCheck_5100_ = !lean_is_exclusive(v___x_5046_);
if (v_isSharedCheck_5100_ == 0)
{
v___x_5050_ = v___x_5046_;
v_isShared_5051_ = v_isSharedCheck_5100_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_snd_5048_);
lean_inc(v_fst_5047_);
lean_dec(v___x_5046_);
v___x_5050_ = lean_box(0);
v_isShared_5051_ = v_isSharedCheck_5100_;
goto v_resetjp_5049_;
}
v_resetjp_5049_:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; 
v___x_5052_ = l_Array_append___redArg(v_codeQualityEntries_4955_, v_fst_5047_);
lean_dec(v_fst_5047_);
lean_inc(v_a_4948_);
lean_inc(v___x_4904_);
v___x_5053_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runPackageCodeQualityChecks(v___x_4904_, v___y_4950_, v_a_4948_);
if (lean_obj_tag(v___x_5053_) == 0)
{
lean_object* v_a_5054_; lean_object* v_entries_5055_; uint8_t v_failed_5056_; lean_object* v___x_5057_; 
v_a_5054_ = lean_ctor_get(v___x_5053_, 0);
lean_inc(v_a_5054_);
lean_dec_ref_known(v___x_5053_, 1);
v_entries_5055_ = lean_ctor_get(v_a_5054_, 0);
lean_inc_ref(v_entries_5055_);
v_failed_5056_ = lean_ctor_get_uint8(v_a_5054_, sizeof(void*)*1);
lean_dec(v_a_5054_);
v___x_5057_ = l_Array_append___redArg(v___x_5052_, v_entries_5055_);
lean_dec_ref(v_entries_5055_);
if (v_failed_5056_ == 0)
{
lean_object* v___x_5059_; 
if (v_isShared_5051_ == 0)
{
lean_ctor_set(v___x_5050_, 0, v_fst_4942_);
v___x_5059_ = v___x_5050_;
goto v_reusejp_5058_;
}
else
{
lean_object* v_reuseFailAlloc_5074_; 
v_reuseFailAlloc_5074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5074_, 0, v_fst_4942_);
lean_ctor_set(v_reuseFailAlloc_5074_, 1, v_snd_5048_);
v___x_5059_ = v_reuseFailAlloc_5074_;
goto v_reusejp_5058_;
}
v_reusejp_5058_:
{
lean_object* v___x_5061_; 
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 1, v___x_5059_);
lean_ctor_set(v___x_4945_, 0, v___x_5057_);
v___x_5061_ = v___x_4945_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5073_; 
v_reuseFailAlloc_5073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5073_, 0, v___x_5057_);
lean_ctor_set(v_reuseFailAlloc_5073_, 1, v___x_5059_);
v___x_5061_ = v_reuseFailAlloc_5073_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
lean_object* v___x_5063_; 
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 1, v___x_5061_);
lean_ctor_set(v___x_4940_, 0, v_records_4954_);
v___x_5063_ = v___x_4940_;
goto v_reusejp_5062_;
}
else
{
lean_object* v_reuseFailAlloc_5072_; 
v_reuseFailAlloc_5072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5072_, 0, v_records_4954_);
lean_ctor_set(v_reuseFailAlloc_5072_, 1, v___x_5061_);
v___x_5063_ = v_reuseFailAlloc_5072_;
goto v_reusejp_5062_;
}
v_reusejp_5062_:
{
lean_object* v___x_5064_; lean_object* v___x_5066_; 
v___x_5064_ = lean_box(v_anyUnlocated_4953_);
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 1, v___x_5063_);
lean_ctor_set(v___x_4936_, 0, v___x_5064_);
v___x_5066_ = v___x_4936_;
goto v_reusejp_5065_;
}
else
{
lean_object* v_reuseFailAlloc_5071_; 
v_reuseFailAlloc_5071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5071_, 0, v___x_5064_);
lean_ctor_set(v_reuseFailAlloc_5071_, 1, v___x_5063_);
v___x_5066_ = v_reuseFailAlloc_5071_;
goto v_reusejp_5065_;
}
v_reusejp_5065_:
{
lean_object* v___x_5067_; lean_object* v___x_5069_; 
v___x_5067_ = lean_box(v_anyFailed_4952_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 1, v___x_5066_);
lean_ctor_set(v___x_4932_, 0, v___x_5067_);
v___x_5069_ = v___x_4932_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v___x_5067_);
lean_ctor_set(v_reuseFailAlloc_5070_, 1, v___x_5066_);
v___x_5069_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
v_a_4911_ = v___x_5069_;
goto v___jp_4910_;
}
}
}
}
}
}
else
{
lean_object* v___x_5076_; 
if (v_isShared_5051_ == 0)
{
lean_ctor_set(v___x_5050_, 0, v_fst_4942_);
v___x_5076_ = v___x_5050_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v_fst_4942_);
lean_ctor_set(v_reuseFailAlloc_5091_, 1, v_snd_5048_);
v___x_5076_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
lean_object* v___x_5078_; 
if (v_isShared_4946_ == 0)
{
lean_ctor_set(v___x_4945_, 1, v___x_5076_);
lean_ctor_set(v___x_4945_, 0, v___x_5057_);
v___x_5078_ = v___x_4945_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5090_; 
v_reuseFailAlloc_5090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5090_, 0, v___x_5057_);
lean_ctor_set(v_reuseFailAlloc_5090_, 1, v___x_5076_);
v___x_5078_ = v_reuseFailAlloc_5090_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
lean_object* v___x_5080_; 
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 1, v___x_5078_);
lean_ctor_set(v___x_4940_, 0, v_records_4954_);
v___x_5080_ = v___x_4940_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v_records_4954_);
lean_ctor_set(v_reuseFailAlloc_5089_, 1, v___x_5078_);
v___x_5080_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
lean_object* v___x_5081_; lean_object* v___x_5083_; 
v___x_5081_ = lean_box(v_anyUnlocated_4953_);
if (v_isShared_4937_ == 0)
{
lean_ctor_set(v___x_4936_, 1, v___x_5080_);
lean_ctor_set(v___x_4936_, 0, v___x_5081_);
v___x_5083_ = v___x_4936_;
goto v_reusejp_5082_;
}
else
{
lean_object* v_reuseFailAlloc_5088_; 
v_reuseFailAlloc_5088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5088_, 0, v___x_5081_);
lean_ctor_set(v_reuseFailAlloc_5088_, 1, v___x_5080_);
v___x_5083_ = v_reuseFailAlloc_5088_;
goto v_reusejp_5082_;
}
v_reusejp_5082_:
{
lean_object* v___x_5084_; lean_object* v___x_5086_; 
v___x_5084_ = lean_box(v_anyUnlocated_4917_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 1, v___x_5083_);
lean_ctor_set(v___x_4932_, 0, v___x_5084_);
v___x_5086_ = v___x_4932_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v___x_5084_);
lean_ctor_set(v_reuseFailAlloc_5087_, 1, v___x_5083_);
v___x_5086_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
v_a_4911_ = v___x_5086_;
goto v___jp_4910_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5092_; lean_object* v___x_5094_; uint8_t v_isShared_5095_; uint8_t v_isSharedCheck_5099_; 
lean_dec_ref(v___x_5052_);
lean_del_object(v___x_5050_);
lean_dec(v_snd_5048_);
lean_dec_ref(v_records_4954_);
lean_del_object(v___x_4945_);
lean_dec(v_fst_4942_);
lean_del_object(v___x_4940_);
lean_del_object(v___x_4936_);
lean_del_object(v___x_4932_);
lean_dec(v___x_4904_);
v_a_5092_ = lean_ctor_get(v___x_5053_, 0);
v_isSharedCheck_5099_ = !lean_is_exclusive(v___x_5053_);
if (v_isSharedCheck_5099_ == 0)
{
v___x_5094_ = v___x_5053_;
v_isShared_5095_ = v_isSharedCheck_5099_;
goto v_resetjp_5093_;
}
else
{
lean_inc(v_a_5092_);
lean_dec(v___x_5053_);
v___x_5094_ = lean_box(0);
v_isShared_5095_ = v_isSharedCheck_5099_;
goto v_resetjp_5093_;
}
v_resetjp_5093_:
{
lean_object* v___x_5097_; 
if (v_isShared_5095_ == 0)
{
v___x_5097_ = v___x_5094_;
goto v_reusejp_5096_;
}
else
{
lean_object* v_reuseFailAlloc_5098_; 
v_reuseFailAlloc_5098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5098_, 0, v_a_5092_);
v___x_5097_ = v_reuseFailAlloc_5098_;
goto v_reusejp_5096_;
}
v_reusejp_5096_:
{
return v___x_5097_;
}
}
}
}
}
}
v___jp_5101_:
{
lean_object* v___x_5108_; 
lean_inc(v_a_4948_);
lean_inc_ref(v___y_5102_);
lean_inc(v___x_4904_);
lean_inc_ref(v___y_5103_);
v___x_5108_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runEnvironmentLinters(v_args_4903_, v___y_5103_, v___x_4904_, v___y_5102_, v_a_4948_);
if (lean_obj_tag(v___x_5108_) == 0)
{
lean_object* v_a_5109_; 
v_a_5109_ = lean_ctor_get(v___x_5108_, 0);
lean_inc(v_a_5109_);
lean_dec_ref_known(v___x_5108_, 1);
switch(lean_obj_tag(v_a_5109_))
{
case 0:
{
uint8_t v_failed_5110_; 
v_failed_5110_ = lean_ctor_get_uint8(v_a_5109_, 0);
lean_dec_ref_known(v_a_5109_, 0);
if (v_failed_5110_ == 0)
{
v___y_4950_ = v___y_5102_;
v___y_4951_ = v___y_5103_;
v_anyFailed_4952_ = v_anyFailed_5104_;
v_anyUnlocated_4953_ = v_anyUnlocated_5105_;
v_records_4954_ = v_records_5106_;
v_codeQualityEntries_4955_ = v_codeQualityEntries_5107_;
goto v___jp_4949_;
}
else
{
v___y_4950_ = v___y_5102_;
v___y_4951_ = v___y_5103_;
v_anyFailed_4952_ = v_anyUnlocated_4917_;
v_anyUnlocated_4953_ = v_anyUnlocated_5105_;
v_records_4954_ = v_records_5106_;
v_codeQualityEntries_4955_ = v_codeQualityEntries_5107_;
goto v___jp_4949_;
}
}
case 1:
{
lean_object* v_records_5111_; uint8_t v_unlocated_5112_; lean_object* v___x_5113_; 
v_records_5111_ = lean_ctor_get(v_a_5109_, 0);
lean_inc_ref(v_records_5111_);
v_unlocated_5112_ = lean_ctor_get_uint8(v_a_5109_, sizeof(void*)*1);
lean_dec_ref_known(v_a_5109_, 1);
v___x_5113_ = l_Array_append___redArg(v_records_5106_, v_records_5111_);
lean_dec_ref(v_records_5111_);
if (v_unlocated_5112_ == 0)
{
v___y_4950_ = v___y_5102_;
v___y_4951_ = v___y_5103_;
v_anyFailed_4952_ = v_anyFailed_5104_;
v_anyUnlocated_4953_ = v_anyUnlocated_5105_;
v_records_4954_ = v___x_5113_;
v_codeQualityEntries_4955_ = v_codeQualityEntries_5107_;
goto v___jp_4949_;
}
else
{
v___y_4950_ = v___y_5102_;
v___y_4951_ = v___y_5103_;
v_anyFailed_4952_ = v_anyFailed_5104_;
v_anyUnlocated_4953_ = v_anyUnlocated_4917_;
v_records_4954_ = v___x_5113_;
v_codeQualityEntries_4955_ = v_codeQualityEntries_5107_;
goto v___jp_4949_;
}
}
default: 
{
lean_object* v_entries_5114_; lean_object* v___x_5115_; 
v_entries_5114_ = lean_ctor_get(v_a_5109_, 0);
lean_inc_ref(v_entries_5114_);
lean_dec_ref_known(v_a_5109_, 1);
v___x_5115_ = l_Array_append___redArg(v_codeQualityEntries_5107_, v_entries_5114_);
lean_dec_ref(v_entries_5114_);
v___y_4950_ = v___y_5102_;
v___y_4951_ = v___y_5103_;
v_anyFailed_4952_ = v_anyFailed_5104_;
v_anyUnlocated_4953_ = v_anyUnlocated_5105_;
v_records_4954_ = v_records_5106_;
v_codeQualityEntries_4955_ = v___x_5115_;
goto v___jp_4949_;
}
}
}
else
{
lean_object* v_a_5116_; lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5123_; 
lean_dec_ref(v_codeQualityEntries_5107_);
lean_dec_ref(v_records_5106_);
lean_dec_ref(v___y_5103_);
lean_dec_ref(v___y_5102_);
lean_del_object(v___x_4945_);
lean_dec(v_snd_4943_);
lean_dec(v_fst_4942_);
lean_del_object(v___x_4940_);
lean_del_object(v___x_4936_);
lean_del_object(v___x_4932_);
lean_del_object(v___x_4928_);
lean_dec(v___x_4904_);
v_a_5116_ = lean_ctor_get(v___x_5108_, 0);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5108_);
if (v_isSharedCheck_5123_ == 0)
{
v___x_5118_ = v___x_5108_;
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
else
{
lean_inc(v_a_5116_);
lean_dec(v___x_5108_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5121_; 
if (v_isShared_5119_ == 0)
{
v___x_5121_ = v___x_5118_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_a_5116_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
}
v___jp_5124_:
{
lean_object* v___x_5127_; lean_object* v_toEnvExtension_5128_; lean_object* v_asyncMode_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v_merged_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5163_; 
v___x_5127_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_5128_ = lean_ctor_get(v___x_5127_, 0);
v_asyncMode_5129_ = lean_ctor_get(v_toEnvExtension_5128_, 2);
v___x_5130_ = lean_box(0);
lean_inc_ref(v___y_5125_);
v___x_5131_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4947_, v___x_5127_, v___y_5125_, v_asyncMode_5129_, v___x_5130_, v_anyFailed_4916_);
v_merged_5132_ = lean_ctor_get(v___x_5131_, 0);
v_isSharedCheck_5163_ = !lean_is_exclusive(v___x_5131_);
if (v_isSharedCheck_5163_ == 0)
{
lean_object* v_unused_5164_; 
v_unused_5164_ = lean_ctor_get(v___x_5131_, 1);
lean_dec(v_unused_5164_);
v___x_5134_ = v___x_5131_;
v_isShared_5135_ = v_isSharedCheck_5163_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_merged_5132_);
lean_dec(v___x_5131_);
v___x_5134_ = lean_box(0);
v_isShared_5135_ = v_isSharedCheck_5163_;
goto v_resetjp_5133_;
}
v_resetjp_5133_:
{
lean_object* v___x_5137_; 
if (v_isShared_5135_ == 0)
{
lean_ctor_set(v___x_5134_, 1, v_merged_5132_);
lean_ctor_set(v___x_5134_, 0, v___y_5126_);
v___x_5137_ = v___x_5134_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5162_; 
v_reuseFailAlloc_5162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5162_, 0, v___y_5126_);
lean_ctor_set(v_reuseFailAlloc_5162_, 1, v_merged_5132_);
v___x_5137_ = v_reuseFailAlloc_5162_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
lean_object* v___x_5138_; 
v___x_5138_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runTextLinters(v_args_4903_, v___x_5137_, v___y_5125_, v_a_4948_);
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_object* v_a_5139_; 
v_a_5139_ = lean_ctor_get(v___x_5138_, 0);
lean_inc(v_a_5139_);
lean_dec_ref_known(v___x_5138_, 1);
switch(lean_obj_tag(v_a_5139_))
{
case 0:
{
uint8_t v___x_5140_; 
v___x_5140_ = lean_unbox(v_fst_4926_);
lean_dec(v_fst_4926_);
if (v___x_5140_ == 0)
{
uint8_t v_failed_5141_; uint8_t v___x_5142_; 
v_failed_5141_ = lean_ctor_get_uint8(v_a_5139_, 0);
lean_dec_ref_known(v_a_5139_, 0);
v___x_5142_ = lean_unbox(v_fst_4930_);
lean_dec(v_fst_4930_);
v___y_5102_ = v___y_5125_;
v___y_5103_ = v___x_5137_;
v_anyFailed_5104_ = v_failed_5141_;
v_anyUnlocated_5105_ = v___x_5142_;
v_records_5106_ = v_fst_4934_;
v_codeQualityEntries_5107_ = v_fst_4938_;
goto v___jp_5101_;
}
else
{
uint8_t v___x_5143_; 
lean_dec_ref_known(v_a_5139_, 0);
v___x_5143_ = lean_unbox(v_fst_4930_);
lean_dec(v_fst_4930_);
v___y_5102_ = v___y_5125_;
v___y_5103_ = v___x_5137_;
v_anyFailed_5104_ = v_anyUnlocated_4917_;
v_anyUnlocated_5105_ = v___x_5143_;
v_records_5106_ = v_fst_4934_;
v_codeQualityEntries_5107_ = v_fst_4938_;
goto v___jp_5101_;
}
}
case 1:
{
lean_object* v_records_5144_; uint8_t v_unlocated_5145_; lean_object* v___x_5146_; 
v_records_5144_ = lean_ctor_get(v_a_5139_, 0);
lean_inc_ref(v_records_5144_);
v_unlocated_5145_ = lean_ctor_get_uint8(v_a_5139_, sizeof(void*)*1);
lean_dec_ref_known(v_a_5139_, 1);
v___x_5146_ = l_Array_append___redArg(v_fst_4934_, v_records_5144_);
lean_dec_ref(v_records_5144_);
if (v_unlocated_5145_ == 0)
{
uint8_t v___x_5147_; uint8_t v___x_5148_; 
v___x_5147_ = lean_unbox(v_fst_4926_);
lean_dec(v_fst_4926_);
v___x_5148_ = lean_unbox(v_fst_4930_);
lean_dec(v_fst_4930_);
v___y_5102_ = v___y_5125_;
v___y_5103_ = v___x_5137_;
v_anyFailed_5104_ = v___x_5147_;
v_anyUnlocated_5105_ = v___x_5148_;
v_records_5106_ = v___x_5146_;
v_codeQualityEntries_5107_ = v_fst_4938_;
goto v___jp_5101_;
}
else
{
uint8_t v___x_5149_; 
lean_dec(v_fst_4930_);
v___x_5149_ = lean_unbox(v_fst_4926_);
lean_dec(v_fst_4926_);
v___y_5102_ = v___y_5125_;
v___y_5103_ = v___x_5137_;
v_anyFailed_5104_ = v___x_5149_;
v_anyUnlocated_5105_ = v_anyUnlocated_4917_;
v_records_5106_ = v___x_5146_;
v_codeQualityEntries_5107_ = v_fst_4938_;
goto v___jp_5101_;
}
}
default: 
{
lean_object* v_entries_5150_; lean_object* v___x_5151_; uint8_t v___x_5152_; uint8_t v___x_5153_; 
v_entries_5150_ = lean_ctor_get(v_a_5139_, 0);
lean_inc_ref(v_entries_5150_);
lean_dec_ref_known(v_a_5139_, 1);
v___x_5151_ = l_Array_append___redArg(v_fst_4938_, v_entries_5150_);
lean_dec_ref(v_entries_5150_);
v___x_5152_ = lean_unbox(v_fst_4926_);
lean_dec(v_fst_4926_);
v___x_5153_ = lean_unbox(v_fst_4930_);
lean_dec(v_fst_4930_);
v___y_5102_ = v___y_5125_;
v___y_5103_ = v___x_5137_;
v_anyFailed_5104_ = v___x_5152_;
v_anyUnlocated_5105_ = v___x_5153_;
v_records_5106_ = v_fst_4934_;
v_codeQualityEntries_5107_ = v___x_5151_;
goto v___jp_5101_;
}
}
}
else
{
lean_object* v_a_5154_; lean_object* v___x_5156_; uint8_t v_isShared_5157_; uint8_t v_isSharedCheck_5161_; 
lean_dec_ref(v___x_5137_);
lean_dec_ref(v___y_5125_);
lean_del_object(v___x_4945_);
lean_dec(v_snd_4943_);
lean_dec(v_fst_4942_);
lean_del_object(v___x_4940_);
lean_dec(v_fst_4938_);
lean_del_object(v___x_4936_);
lean_dec(v_fst_4934_);
lean_del_object(v___x_4932_);
lean_dec(v_fst_4930_);
lean_del_object(v___x_4928_);
lean_dec(v_fst_4926_);
lean_dec(v___x_4904_);
v_a_5154_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5161_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5161_ == 0)
{
v___x_5156_ = v___x_5138_;
v_isShared_5157_ = v_isSharedCheck_5161_;
goto v_resetjp_5155_;
}
else
{
lean_inc(v_a_5154_);
lean_dec(v___x_5138_);
v___x_5156_ = lean_box(0);
v_isShared_5157_ = v_isSharedCheck_5161_;
goto v_resetjp_5155_;
}
v_resetjp_5155_:
{
lean_object* v___x_5159_; 
if (v_isShared_5157_ == 0)
{
v___x_5159_ = v___x_5156_;
goto v_reusejp_5158_;
}
else
{
lean_object* v_reuseFailAlloc_5160_; 
v_reuseFailAlloc_5160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5160_, 0, v_a_5154_);
v___x_5159_ = v_reuseFailAlloc_5160_;
goto v_reusejp_5158_;
}
v_reusejp_5158_:
{
return v___x_5159_;
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_4910_:
{
size_t v___x_4912_; size_t v___x_4913_; 
v___x_4912_ = ((size_t)1ULL);
v___x_4913_ = lean_usize_add(v_i_4907_, v___x_4912_);
v_i_4907_ = v___x_4913_;
v_b_4908_ = v_a_4911_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3___boxed(lean_object* v___x_5237_, lean_object* v_checkImports_5238_, lean_object* v_args_5239_, lean_object* v___x_5240_, lean_object* v_as_5241_, lean_object* v_sz_5242_, lean_object* v_i_5243_, lean_object* v_b_5244_, lean_object* v___y_5245_){
_start:
{
size_t v_sz_boxed_5246_; size_t v_i_boxed_5247_; lean_object* v_res_5248_; 
v_sz_boxed_5246_ = lean_unbox_usize(v_sz_5242_);
lean_dec(v_sz_5242_);
v_i_boxed_5247_ = lean_unbox_usize(v_i_5243_);
lean_dec(v_i_5243_);
v_res_5248_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(v___x_5237_, v_checkImports_5238_, v_args_5239_, v___x_5240_, v_as_5241_, v_sz_boxed_5246_, v_i_boxed_5247_, v_b_5244_);
lean_dec_ref(v_as_5241_);
lean_dec_ref(v_args_5239_);
lean_dec_ref(v_checkImports_5238_);
lean_dec(v___x_5237_);
return v_res_5248_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__0(void){
_start:
{
lean_object* v___x_5249_; lean_object* v___x_5250_; 
v___x_5249_ = l_Lean_NameSet_empty;
v___x_5250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5249_);
lean_ctor_set(v___x_5250_, 1, v___x_5249_);
return v___x_5250_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__1(void){
_start:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; 
v___x_5251_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__0, &l_Lake_BuiltinLint_run___closed__0_once, _init_l_Lake_BuiltinLint_run___closed__0);
v___x_5252_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_5253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5253_, 0, v___x_5252_);
lean_ctor_set(v___x_5253_, 1, v___x_5251_);
return v___x_5253_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___closed__2(void){
_start:
{
lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; 
v___x_5254_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__1, &l_Lake_BuiltinLint_run___closed__1_once, _init_l_Lake_BuiltinLint_run___closed__1);
v___x_5255_ = ((lean_object*)(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_runDeferredChecks___closed__4));
v___x_5256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5256_, 0, v___x_5255_);
lean_ctor_set(v___x_5256_, 1, v___x_5254_);
return v___x_5256_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__1(void){
_start:
{
uint32_t v___x_5258_; lean_object* v___x_5259_; 
v___x_5258_ = 0;
v___x_5259_ = lean_box_uint32(v___x_5258_);
return v___x_5259_;
}
}
static lean_object* _init_l_Lake_BuiltinLint_run___boxed__const__2(void){
_start:
{
uint32_t v___x_5260_; lean_object* v___x_5261_; 
v___x_5260_ = 1;
v___x_5261_ = lean_box_uint32(v___x_5260_);
return v___x_5261_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run(lean_object* v_args_5262_){
_start:
{
lean_object* v_mods_5264_; uint8_t v_mode_5265_; lean_object* v_checks_5266_; lean_object* v_srcSearchPath_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; uint8_t v_anyFailed_5270_; 
v_mods_5264_ = lean_ctor_get(v_args_5262_, 1);
lean_inc_ref(v_mods_5264_);
v_mode_5265_ = lean_ctor_get_uint8(v_args_5262_, sizeof(void*)*4 + 1);
v_checks_5266_ = lean_ctor_get(v_args_5262_, 2);
v_srcSearchPath_5267_ = lean_ctor_get(v_args_5262_, 3);
v___x_5268_ = lean_array_get_size(v_mods_5264_);
v___x_5269_ = lean_unsigned_to_nat(0u);
v_anyFailed_5270_ = lean_nat_dec_eq(v___x_5268_, v___x_5269_);
if (v_anyFailed_5270_ == 0)
{
size_t v_sz_5271_; size_t v___x_5272_; lean_object* v_checkImports_5273_; lean_object* v___x_5274_; 
v_sz_5271_ = lean_array_size(v_checks_5266_);
v___x_5272_ = ((size_t)0ULL);
lean_inc_ref(v_checks_5266_);
v_checkImports_5273_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_BuiltinLint_run_spec__1(v___x_5268_, v_sz_5271_, v___x_5272_, v_checks_5266_);
v___x_5274_ = l_Lean_getSrcSearchPath();
if (lean_obj_tag(v___x_5274_) == 0)
{
lean_object* v_a_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; size_t v_sz_5282_; lean_object* v___x_5283_; 
v_a_5275_ = lean_ctor_get(v___x_5274_, 0);
lean_inc(v_a_5275_);
lean_dec_ref_known(v___x_5274_, 1);
lean_inc(v_srcSearchPath_5267_);
v___x_5276_ = l_List_appendTR___redArg(v_srcSearchPath_5267_, v_a_5275_);
v___x_5277_ = lean_obj_once(&l_Lake_BuiltinLint_run___closed__2, &l_Lake_BuiltinLint_run___closed__2_once, _init_l_Lake_BuiltinLint_run___closed__2);
v___x_5278_ = lean_box(v_anyFailed_5270_);
v___x_5279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5279_, 0, v___x_5278_);
lean_ctor_set(v___x_5279_, 1, v___x_5277_);
v___x_5280_ = lean_box(v_anyFailed_5270_);
v___x_5281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5281_, 0, v___x_5280_);
lean_ctor_set(v___x_5281_, 1, v___x_5279_);
v_sz_5282_ = lean_array_size(v_mods_5264_);
v___x_5283_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__3(v___x_5268_, v_checkImports_5273_, v_args_5262_, v___x_5276_, v_mods_5264_, v_sz_5282_, v___x_5272_, v___x_5281_);
lean_dec_ref(v_mods_5264_);
lean_dec_ref(v_args_5262_);
lean_dec_ref(v_checkImports_5273_);
if (lean_obj_tag(v___x_5283_) == 0)
{
lean_object* v_a_5284_; lean_object* v___x_5286_; uint8_t v_isShared_5287_; uint8_t v_isSharedCheck_5355_; 
v_a_5284_ = lean_ctor_get(v___x_5283_, 0);
v_isSharedCheck_5355_ = !lean_is_exclusive(v___x_5283_);
if (v_isSharedCheck_5355_ == 0)
{
v___x_5286_ = v___x_5283_;
v_isShared_5287_ = v_isSharedCheck_5355_;
goto v_resetjp_5285_;
}
else
{
lean_inc(v_a_5284_);
lean_dec(v___x_5283_);
v___x_5286_ = lean_box(0);
v_isShared_5287_ = v_isSharedCheck_5355_;
goto v_resetjp_5285_;
}
v_resetjp_5285_:
{
switch(v_mode_5265_)
{
case 0:
{
lean_object* v_fst_5288_; uint8_t v___x_5289_; 
v_fst_5288_ = lean_ctor_get(v_a_5284_, 0);
lean_inc(v_fst_5288_);
lean_dec(v_a_5284_);
v___x_5289_ = lean_unbox(v_fst_5288_);
lean_dec(v_fst_5288_);
if (v___x_5289_ == 0)
{
lean_object* v___x_5290_; lean_object* v___x_5292_; 
v___x_5290_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5287_ == 0)
{
lean_ctor_set(v___x_5286_, 0, v___x_5290_);
v___x_5292_ = v___x_5286_;
goto v_reusejp_5291_;
}
else
{
lean_object* v_reuseFailAlloc_5293_; 
v_reuseFailAlloc_5293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5293_, 0, v___x_5290_);
v___x_5292_ = v_reuseFailAlloc_5293_;
goto v_reusejp_5291_;
}
v_reusejp_5291_:
{
return v___x_5292_;
}
}
else
{
lean_object* v___x_5294_; lean_object* v___x_5296_; 
v___x_5294_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5287_ == 0)
{
lean_ctor_set(v___x_5286_, 0, v___x_5294_);
v___x_5296_ = v___x_5286_;
goto v_reusejp_5295_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v___x_5294_);
v___x_5296_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5295_;
}
v_reusejp_5295_:
{
return v___x_5296_;
}
}
}
case 1:
{
lean_object* v_snd_5298_; lean_object* v_snd_5299_; lean_object* v_fst_5300_; lean_object* v_fst_5301_; lean_object* v___x_5302_; 
v_snd_5298_ = lean_ctor_get(v_a_5284_, 1);
lean_inc(v_snd_5298_);
lean_del_object(v___x_5286_);
lean_dec(v_a_5284_);
v_snd_5299_ = lean_ctor_get(v_snd_5298_, 1);
lean_inc(v_snd_5299_);
v_fst_5300_ = lean_ctor_get(v_snd_5298_, 0);
lean_inc(v_fst_5300_);
lean_dec(v_snd_5298_);
v_fst_5301_ = lean_ctor_get(v_snd_5299_, 0);
lean_inc(v_fst_5301_);
lean_dec(v_snd_5299_);
v___x_5302_ = l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles(v_fst_5301_);
lean_dec(v_fst_5301_);
if (lean_obj_tag(v___x_5302_) == 0)
{
lean_object* v___x_5304_; uint8_t v_isShared_5305_; uint8_t v_isSharedCheck_5315_; 
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5302_);
if (v_isSharedCheck_5315_ == 0)
{
lean_object* v_unused_5316_; 
v_unused_5316_ = lean_ctor_get(v___x_5302_, 0);
lean_dec(v_unused_5316_);
v___x_5304_ = v___x_5302_;
v_isShared_5305_ = v_isSharedCheck_5315_;
goto v_resetjp_5303_;
}
else
{
lean_dec(v___x_5302_);
v___x_5304_ = lean_box(0);
v_isShared_5305_ = v_isSharedCheck_5315_;
goto v_resetjp_5303_;
}
v_resetjp_5303_:
{
uint8_t v___x_5306_; 
v___x_5306_ = lean_unbox(v_fst_5300_);
lean_dec(v_fst_5300_);
if (v___x_5306_ == 0)
{
lean_object* v___x_5307_; lean_object* v___x_5309_; 
v___x_5307_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5305_ == 0)
{
lean_ctor_set(v___x_5304_, 0, v___x_5307_);
v___x_5309_ = v___x_5304_;
goto v_reusejp_5308_;
}
else
{
lean_object* v_reuseFailAlloc_5310_; 
v_reuseFailAlloc_5310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5310_, 0, v___x_5307_);
v___x_5309_ = v_reuseFailAlloc_5310_;
goto v_reusejp_5308_;
}
v_reusejp_5308_:
{
return v___x_5309_;
}
}
else
{
lean_object* v___x_5311_; lean_object* v___x_5313_; 
v___x_5311_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5305_ == 0)
{
lean_ctor_set(v___x_5304_, 0, v___x_5311_);
v___x_5313_ = v___x_5304_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v___x_5311_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
}
else
{
lean_object* v_a_5317_; lean_object* v___x_5319_; uint8_t v_isShared_5320_; uint8_t v_isSharedCheck_5324_; 
lean_dec(v_fst_5300_);
v_a_5317_ = lean_ctor_get(v___x_5302_, 0);
v_isSharedCheck_5324_ = !lean_is_exclusive(v___x_5302_);
if (v_isSharedCheck_5324_ == 0)
{
v___x_5319_ = v___x_5302_;
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
else
{
lean_inc(v_a_5317_);
lean_dec(v___x_5302_);
v___x_5319_ = lean_box(0);
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
v_resetjp_5318_:
{
lean_object* v___x_5322_; 
if (v_isShared_5320_ == 0)
{
v___x_5322_ = v___x_5319_;
goto v_reusejp_5321_;
}
else
{
lean_object* v_reuseFailAlloc_5323_; 
v_reuseFailAlloc_5323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5323_, 0, v_a_5317_);
v___x_5322_ = v_reuseFailAlloc_5323_;
goto v_reusejp_5321_;
}
v_reusejp_5321_:
{
return v___x_5322_;
}
}
}
}
default: 
{
lean_object* v_snd_5325_; lean_object* v_snd_5326_; lean_object* v_snd_5327_; lean_object* v_fst_5328_; lean_object* v_fst_5329_; lean_object* v___x_5330_; size_t v_sz_5331_; lean_object* v___x_5332_; 
v_snd_5325_ = lean_ctor_get(v_a_5284_, 1);
lean_del_object(v___x_5286_);
v_snd_5326_ = lean_ctor_get(v_snd_5325_, 1);
v_snd_5327_ = lean_ctor_get(v_snd_5326_, 1);
lean_inc(v_snd_5327_);
v_fst_5328_ = lean_ctor_get(v_a_5284_, 0);
lean_inc(v_fst_5328_);
lean_dec(v_a_5284_);
v_fst_5329_ = lean_ctor_get(v_snd_5327_, 0);
lean_inc(v_fst_5329_);
lean_dec(v_snd_5327_);
v___x_5330_ = lean_box(0);
v_sz_5331_ = lean_array_size(v_fst_5329_);
v___x_5332_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_BuiltinLint_run_spec__5(v_fst_5329_, v_sz_5331_, v___x_5272_, v___x_5330_);
lean_dec(v_fst_5329_);
if (lean_obj_tag(v___x_5332_) == 0)
{
lean_object* v___x_5334_; uint8_t v_isShared_5335_; uint8_t v_isSharedCheck_5345_; 
v_isSharedCheck_5345_ = !lean_is_exclusive(v___x_5332_);
if (v_isSharedCheck_5345_ == 0)
{
lean_object* v_unused_5346_; 
v_unused_5346_ = lean_ctor_get(v___x_5332_, 0);
lean_dec(v_unused_5346_);
v___x_5334_ = v___x_5332_;
v_isShared_5335_ = v_isSharedCheck_5345_;
goto v_resetjp_5333_;
}
else
{
lean_dec(v___x_5332_);
v___x_5334_ = lean_box(0);
v_isShared_5335_ = v_isSharedCheck_5345_;
goto v_resetjp_5333_;
}
v_resetjp_5333_:
{
uint8_t v___x_5336_; 
v___x_5336_ = lean_unbox(v_fst_5328_);
lean_dec(v_fst_5328_);
if (v___x_5336_ == 0)
{
lean_object* v___x_5337_; lean_object* v___x_5339_; 
v___x_5337_ = l_Lake_BuiltinLint_run___boxed__const__1;
if (v_isShared_5335_ == 0)
{
lean_ctor_set(v___x_5334_, 0, v___x_5337_);
v___x_5339_ = v___x_5334_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v___x_5337_);
v___x_5339_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
return v___x_5339_;
}
}
else
{
lean_object* v___x_5341_; lean_object* v___x_5343_; 
v___x_5341_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5335_ == 0)
{
lean_ctor_set(v___x_5334_, 0, v___x_5341_);
v___x_5343_ = v___x_5334_;
goto v_reusejp_5342_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v___x_5341_);
v___x_5343_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5342_;
}
v_reusejp_5342_:
{
return v___x_5343_;
}
}
}
}
else
{
lean_object* v_a_5347_; lean_object* v___x_5349_; uint8_t v_isShared_5350_; uint8_t v_isSharedCheck_5354_; 
lean_dec(v_fst_5328_);
v_a_5347_ = lean_ctor_get(v___x_5332_, 0);
v_isSharedCheck_5354_ = !lean_is_exclusive(v___x_5332_);
if (v_isSharedCheck_5354_ == 0)
{
v___x_5349_ = v___x_5332_;
v_isShared_5350_ = v_isSharedCheck_5354_;
goto v_resetjp_5348_;
}
else
{
lean_inc(v_a_5347_);
lean_dec(v___x_5332_);
v___x_5349_ = lean_box(0);
v_isShared_5350_ = v_isSharedCheck_5354_;
goto v_resetjp_5348_;
}
v_resetjp_5348_:
{
lean_object* v___x_5352_; 
if (v_isShared_5350_ == 0)
{
v___x_5352_ = v___x_5349_;
goto v_reusejp_5351_;
}
else
{
lean_object* v_reuseFailAlloc_5353_; 
v_reuseFailAlloc_5353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5353_, 0, v_a_5347_);
v___x_5352_ = v_reuseFailAlloc_5353_;
goto v_reusejp_5351_;
}
v_reusejp_5351_:
{
return v___x_5352_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5356_; lean_object* v___x_5358_; uint8_t v_isShared_5359_; uint8_t v_isSharedCheck_5363_; 
v_a_5356_ = lean_ctor_get(v___x_5283_, 0);
v_isSharedCheck_5363_ = !lean_is_exclusive(v___x_5283_);
if (v_isSharedCheck_5363_ == 0)
{
v___x_5358_ = v___x_5283_;
v_isShared_5359_ = v_isSharedCheck_5363_;
goto v_resetjp_5357_;
}
else
{
lean_inc(v_a_5356_);
lean_dec(v___x_5283_);
v___x_5358_ = lean_box(0);
v_isShared_5359_ = v_isSharedCheck_5363_;
goto v_resetjp_5357_;
}
v_resetjp_5357_:
{
lean_object* v___x_5361_; 
if (v_isShared_5359_ == 0)
{
v___x_5361_ = v___x_5358_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5362_; 
v_reuseFailAlloc_5362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5362_, 0, v_a_5356_);
v___x_5361_ = v_reuseFailAlloc_5362_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
return v___x_5361_;
}
}
}
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
lean_dec_ref(v_checkImports_5273_);
lean_dec_ref(v_mods_5264_);
lean_dec_ref(v_args_5262_);
v_a_5364_ = lean_ctor_get(v___x_5274_, 0);
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5274_);
if (v_isSharedCheck_5371_ == 0)
{
v___x_5366_ = v___x_5274_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_a_5364_);
lean_dec(v___x_5274_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5364_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
}
else
{
lean_object* v___x_5372_; lean_object* v___x_5373_; 
lean_dec_ref(v_mods_5264_);
lean_dec_ref(v_args_5262_);
v___x_5372_ = ((lean_object*)(l_Lake_BuiltinLint_run___closed__3));
v___x_5373_ = l_IO_eprintln___at___00__private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_recordExceptionsToFiles_spec__17(v___x_5372_);
if (lean_obj_tag(v___x_5373_) == 0)
{
lean_object* v___x_5375_; uint8_t v_isShared_5376_; uint8_t v_isSharedCheck_5381_; 
v_isSharedCheck_5381_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5381_ == 0)
{
lean_object* v_unused_5382_; 
v_unused_5382_ = lean_ctor_get(v___x_5373_, 0);
lean_dec(v_unused_5382_);
v___x_5375_ = v___x_5373_;
v_isShared_5376_ = v_isSharedCheck_5381_;
goto v_resetjp_5374_;
}
else
{
lean_dec(v___x_5373_);
v___x_5375_ = lean_box(0);
v_isShared_5376_ = v_isSharedCheck_5381_;
goto v_resetjp_5374_;
}
v_resetjp_5374_:
{
lean_object* v___x_5377_; lean_object* v___x_5379_; 
v___x_5377_ = l_Lake_BuiltinLint_run___boxed__const__2;
if (v_isShared_5376_ == 0)
{
lean_ctor_set(v___x_5375_, 0, v___x_5377_);
v___x_5379_ = v___x_5375_;
goto v_reusejp_5378_;
}
else
{
lean_object* v_reuseFailAlloc_5380_; 
v_reuseFailAlloc_5380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5380_, 0, v___x_5377_);
v___x_5379_ = v_reuseFailAlloc_5380_;
goto v_reusejp_5378_;
}
v_reusejp_5378_:
{
return v___x_5379_;
}
}
}
else
{
lean_object* v_a_5383_; lean_object* v___x_5385_; uint8_t v_isShared_5386_; uint8_t v_isSharedCheck_5390_; 
v_a_5383_ = lean_ctor_get(v___x_5373_, 0);
v_isSharedCheck_5390_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5390_ == 0)
{
v___x_5385_ = v___x_5373_;
v_isShared_5386_ = v_isSharedCheck_5390_;
goto v_resetjp_5384_;
}
else
{
lean_inc(v_a_5383_);
lean_dec(v___x_5373_);
v___x_5385_ = lean_box(0);
v_isShared_5386_ = v_isSharedCheck_5390_;
goto v_resetjp_5384_;
}
v_resetjp_5384_:
{
lean_object* v___x_5388_; 
if (v_isShared_5386_ == 0)
{
v___x_5388_ = v___x_5385_;
goto v_reusejp_5387_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v_a_5383_);
v___x_5388_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5387_;
}
v_reusejp_5387_:
{
return v___x_5388_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuiltinLint_run___boxed(lean_object* v_args_5391_, lean_object* v_a_5392_){
_start:
{
lean_object* v_res_5393_; 
v_res_5393_ = l_Lake_BuiltinLint_run(v_args_5391_);
return v_res_5393_;
}
}
lean_object* runtime_initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_CodeQuality(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_CodeQuality(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_BuiltinLint_instInhabitedExceptionRecord_default = _init_l_Lake_BuiltinLint_instInhabitedExceptionRecord_default();
lean_mark_persistent(l_Lake_BuiltinLint_instInhabitedExceptionRecord_default);
l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord = _init_l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord();
lean_mark_persistent(l___private_Lake_CLI_BuiltinLint_0__Lake_BuiltinLint_instInhabitedExceptionRecord);
l_Lake_BuiltinLint_run___boxed__const__1 = _init_l_Lake_BuiltinLint_run___boxed__const__1();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__1);
l_Lake_BuiltinLint_run___boxed__const__2 = _init_l_Lake_BuiltinLint_run___boxed__const__2();
lean_mark_persistent(l_Lake_BuiltinLint_run___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Linter_EnvLinter(uint8_t builtin);
lean_object* initialize_Lean_Linter_PersistentLintLog(uint8_t builtin);
lean_object* initialize_Lean_Elab_DocString_Builtin_Postponed(uint8_t builtin);
lean_object* initialize_Lean_Linter_CodeQuality(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_BuiltinLint(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Linter_EnvLinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DocString_Builtin_Postponed(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_CodeQuality(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_BuiltinLint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_BuiltinLint(builtin);
}
#ifdef __cplusplus
}
#endif
