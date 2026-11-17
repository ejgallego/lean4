// Lean compiler output
// Module: Lean.Language.Lean
// Imports: public import Lean.Language.Util public import Lean.Language.Lean.Types public import Lean.Language.Lean.Util public import Lean.Elab.Import
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
extern lean_object* l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
lean_object* l_Lean_Language_Snapshot_transform(lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_IO_CancelToken_new();
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
extern lean_object* l_Lean_Language_Snapshot_Diagnostics_empty;
extern lean_object* l_Lean_Language_instInhabitedDynamicSnapshot;
lean_object* l_Lean_Language_instInhabitedSnapshotTask_default___redArg(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotTree_default;
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedInfoTree_default;
uint8_t l_IO_CancelToken_isSet(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(lean_object*);
lean_object* l_Lean_Elab_InfoState_substituteLazy(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTree_trace(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageLog_empty;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Language_SnapshotTree_waitAll(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_internal_cmdlineSnapshots;
lean_object* l_Lean_Elab_Command_elabCommandTopLevel(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isTerminalCommand(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Elab_Command_runModuleLintersAsync(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
extern lean_object* l_Lean_Core_stderrAsMessages;
extern lean_object* l_ByteArray_empty;
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* lean_get_set_stdout(lean_object*);
lean_object* lean_get_set_stdin(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_get_set_stderr(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_format(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_DeclNameGenerator_ofPrefix(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object*);
lean_object* l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_instInhabitedModuleParserState_default;
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Language_SnapshotTree_transform___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_cancelRec___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_profileit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_eqWithInfo(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get_x3f___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Language_diagnosticsOfHeaderError(lean_object*, lean_object*);
extern lean_object* l_Lean_Language_instInhabitedSnapshotLeaf;
extern lean_object* l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_object* l_Lean_Language_SnapshotTask_bindIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_parseHeader(lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_Elab_HeaderSyntax_startPos(lean_object*);
lean_object* l_Lean_Elab_processHeaderCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Name_getRoot(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_mkState(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
lean_object* l_Lean_List_toPArray_x27___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler_output;
extern lean_object* l_Lean_trace_profiler_serve;
extern lean_object* l_Lean_instInhabitedTraceState_default;
lean_object* l_Lean_Language_SnapshotTask_ofIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(lean_object*);
lean_object* l_String_firstDiffPos(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_get___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0 = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0 = (const lean_object*)&l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg();
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Language_Lean_isBeforeEditPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_isBeforeEditPos___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__1_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Language"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__3_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(175, 210, 78, 119, 167, 98, 198, 170)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__5_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 112, 34, 50, 214, 162, 204, 53)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(35, 57, 84, 103, 218, 237, 164, 234)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__7_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(110, 242, 18, 140, 130, 32, 167, 175)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__8_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(19, 205, 238, 85, 202, 45, 193, 251)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__9_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(126, 74, 26, 188, 17, 43, 130, 1)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "withHeaderExceptions"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(96, 234, 52, 36, 242, 101, 86, 247)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_Lean_setOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__0 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__0_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__1 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__1_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "invalid -D parameter, invalid configuration option '"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__2 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__2_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "' value, it must be true/false"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__3 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__3_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "' value, it must be a natural number"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__4 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__4_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "invalid -D parameter, configuration option '"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__5 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__5_value;
static const lean_string_object l_Lean_Language_Lean_setOption___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "' cannot be set in the command line, use set_option command"};
static const lean_object* l_Lean_Language_Lean_setOption___closed__6 = (const lean_object*)&l_Lean_Language_Lean_setOption___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "weak"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value;
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 5, 49, 232, 223, 147, 119, 138)}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "invalid -D parameter, unknown configuration option '"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "'\n\nIf the option is defined in a library, use '-D"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "' to set it conditionally"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "experimental"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(201, 138, 38, 81, 136, 39, 83, 32)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(93, 242, 21, 84, 145, 94, 84, 207)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "no-op, deprecated"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__3_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 222, 85, 59, 197, 113, 89, 237)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__0_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(24, 94, 31, 95, 17, 215, 109, 107)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__1_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 160, 244, 111, 154, 6, 107, 146)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_experimental_module;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3 = (const lean_object*)&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3_value;
static lean_once_cell_t l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4;
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "process"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__10_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 7, 72, 70, 238, 145, 97, 14)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElab"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__2_value),LEAN_SCALAR_PTR_LITERAL(184, 73, 34, 28, 214, 248, 188, 54)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object*);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 108, 214, 181, 226, 69, 54, 12)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_SnapshotTree_transform___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0_value;
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1_value;
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "parseCmd"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4;
static const lean_array_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6;
static const lean_closure_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "snapshotTree"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 136, 72, 78, 187, 126, 217, 153)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object**);
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "parsing"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__8 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(237, 201, 190, 222, 246, 15, 232, 234)}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1_value;
static const lean_array_object l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_import"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 157, 171, 65, 170, 18, 92, 252)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(12, 104, 192, 143, 94, 68, 237, 67)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "processHeader"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Import"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(36, 108, 229, 135, 237, 231, 134, 26)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8_value;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "importing"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__9_value)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0;
static const lean_string_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parseHeader"};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__1_value),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(152, 110, 119, 15, 255, 246, 245, 53)}};
static const lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Language_Lean_truncateToHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "truncateToHeader"};
static const lean_object* l_Lean_Language_Lean_truncateToHeader___closed__0 = (const lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__0_value;
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 167, 200, 3, 29, 231, 56, 85)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 222, 85, 59, 197, 113, 89, 237)}};
static const lean_ctor_object l_Lean_Language_Lean_truncateToHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value_aux_2),((lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 193, 8, 11, 35, 111, 210, 68)}};
static const lean_object* l_Lean_Language_Lean_truncateToHeader___closed__1 = (const lean_object*)&l_Lean_Language_Lean_truncateToHeader___closed__1_value;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__2;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__3;
static lean_once_cell_t l_Lean_Language_Lean_truncateToHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Language_Lean_truncateToHeader___closed__4;
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(lean_object* v_00_u03b1_1_, lean_object* v_act_2_, lean_object* v_ctx_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_apply_2(v_act_2_, v_ctx_3_, lean_box(0));
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0___boxed(lean_object* v_00_u03b1_7_, lean_object* v_act_8_, lean_object* v_ctx_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Language_Lean_instMonadLiftLeanProcessingMLeanProcessingTIO___lam__0(v_00_u03b1_7_, v_act_8_, v_ctx_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___lam__0(lean_object* v_00_u03b1_14_, lean_object* v_act_15_, lean_object* v_ctx_16_){
_start:
{
lean_object* v_toProcessingContext_17_; lean_object* v___x_18_; 
v_toProcessingContext_17_ = lean_ctor_get(v_ctx_16_, 0);
lean_inc_ref(v_toProcessingContext_17_);
lean_dec_ref(v_ctx_16_);
v___x_18_ = lean_apply_1(v_act_15_, v_toProcessingContext_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg(){
_start:
{
lean_object* v___f_21_; 
v___f_21_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___boxed(lean_object* v___dummy_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg();
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT(lean_object* v_m_24_){
_start:
{
lean_object* v___f_25_; 
v___f_25_ = ((lean_object*)(l_Lean_Language_Lean_instMonadLiftProcessingTLeanProcessingT___redArg___closed__0));
return v___f_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg(lean_object* v_act_26_, lean_object* v_oldInputCtx_x3f_27_, lean_object* v_a_28_){
_start:
{
lean_object* v___y_31_; 
if (lean_obj_tag(v_oldInputCtx_x3f_27_) == 0)
{
lean_object* v___x_34_; 
v___x_34_ = lean_box(0);
v___y_31_ = v___x_34_;
goto v___jp_30_;
}
else
{
lean_object* v_val_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_45_; 
v_val_35_ = lean_ctor_get(v_oldInputCtx_x3f_27_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v_oldInputCtx_x3f_27_);
if (v_isSharedCheck_45_ == 0)
{
v___x_37_ = v_oldInputCtx_x3f_27_;
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_val_35_);
lean_dec(v_oldInputCtx_x3f_27_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_45_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
lean_object* v_inputString_39_; lean_object* v_inputString_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v_inputString_39_ = lean_ctor_get(v_val_35_, 0);
lean_inc_ref(v_inputString_39_);
lean_dec(v_val_35_);
v_inputString_40_ = lean_ctor_get(v_a_28_, 0);
v___x_41_ = l_String_firstDiffPos(v_inputString_39_, v_inputString_40_);
lean_dec_ref(v_inputString_39_);
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 0, v___x_41_);
v___x_43_ = v___x_37_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
v___y_31_ = v___x_43_;
goto v___jp_30_;
}
}
}
v___jp_30_:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
lean_inc_ref(v_a_28_);
v___x_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_32_, 0, v_a_28_);
lean_ctor_set(v___x_32_, 1, v___y_31_);
v___x_33_ = lean_apply_2(v_act_26_, v___x_32_, lean_box(0));
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___redArg___boxed(lean_object* v_act_46_, lean_object* v_oldInputCtx_x3f_47_, lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_46_, v_oldInputCtx_x3f_47_, v_a_48_);
lean_dec_ref(v_a_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run(lean_object* v_00_u03b1_51_, lean_object* v_act_52_, lean_object* v_oldInputCtx_x3f_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v_act_52_, v_oldInputCtx_x3f_53_, v_a_54_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_LeanProcessingM_run___boxed(lean_object* v_00_u03b1_57_, lean_object* v_act_58_, lean_object* v_oldInputCtx_x3f_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Language_Lean_LeanProcessingM_run(v_00_u03b1_57_, v_act_58_, v_oldInputCtx_x3f_59_, v_a_60_);
lean_dec_ref(v_a_60_);
return v_res_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Language_Lean_isBeforeEditPos(lean_object* v_pos_63_, lean_object* v_a_64_){
_start:
{
lean_object* v_firstDiffPos_x3f_66_; 
v_firstDiffPos_x3f_66_ = lean_ctor_get(v_a_64_, 1);
if (lean_obj_tag(v_firstDiffPos_x3f_66_) == 0)
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
else
{
lean_object* v_val_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v_val_68_ = lean_ctor_get(v_firstDiffPos_x3f_66_, 0);
v___x_69_ = lean_unsigned_to_nat(1u);
v___x_70_ = lean_nat_add(v_pos_63_, v___x_69_);
v___x_71_ = lean_nat_dec_le(v___x_70_, v_val_68_);
lean_dec(v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_isBeforeEditPos___boxed(lean_object* v_pos_72_, lean_object* v_a_73_, lean_object* v_a_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_72_, v_a_73_);
lean_dec_ref(v_a_73_);
lean_dec(v_pos_72_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13(void){
_start:
{
uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = 1;
v___x_109_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__12));
v___x_110_ = l_Lean_Name_toString(v___x_109_, v___x_108_);
return v___x_110_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = lean_unsigned_to_nat(32u);
v___x_112_ = lean_mk_empty_array_with_capacity(v___x_111_);
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15(void){
_start:
{
size_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_114_ = ((size_t)5ULL);
v___x_115_ = lean_unsigned_to_nat(0u);
v___x_116_ = lean_unsigned_to_nat(32u);
v___x_117_ = lean_mk_empty_array_with_capacity(v___x_116_);
v___x_118_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_119_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
lean_ctor_set(v___x_119_, 2, v___x_115_);
lean_ctor_set(v___x_119_, 3, v___x_115_);
lean_ctor_set_usize(v___x_119_, 4, v___x_114_);
return v___x_119_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16(void){
_start:
{
lean_object* v___x_120_; uint64_t v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__15);
v___x_121_ = 0ULL;
v___x_122_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set_uint64(v___x_122_, sizeof(void*)*1, v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(lean_object* v_ex_123_, lean_object* v_act_124_, lean_object* v_a_125_){
_start:
{
lean_object* v___x_127_; 
lean_inc_ref(v_a_125_);
v___x_127_ = lean_apply_2(v_act_124_, v_a_125_, lean_box(0));
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v_a_128_; 
lean_dec(v_ex_123_);
v_a_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_a_128_);
lean_dec_ref_known(v___x_127_, 1);
return v_a_128_;
}
else
{
lean_object* v_a_129_; lean_object* v_toProcessingContext_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_a_129_ = lean_ctor_get(v___x_127_, 0);
lean_inc(v_a_129_);
lean_dec_ref_known(v___x_127_, 1);
v_toProcessingContext_130_ = lean_ctor_get(v_a_125_, 0);
v___x_131_ = lean_io_error_to_string(v_a_129_);
v___x_132_ = l_Lean_Language_diagnosticsOfHeaderError(v___x_131_, v_toProcessingContext_130_);
v___x_133_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__13);
v___x_134_ = lean_box(0);
v___x_135_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_136_ = 0;
v___x_137_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_137_, 0, v___x_133_);
lean_ctor_set(v___x_137_, 1, v___x_132_);
lean_ctor_set(v___x_137_, 2, v___x_134_);
lean_ctor_set(v___x_137_, 3, v___x_135_);
lean_ctor_set_uint8(v___x_137_, sizeof(void*)*4, v___x_136_);
v___x_138_ = lean_apply_1(v_ex_123_, v___x_137_);
return v___x_138_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___boxed(lean_object* v_ex_139_, lean_object* v_act_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_139_, v_act_140_, v_a_141_);
lean_dec_ref(v_a_141_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(lean_object* v_00_u03b1_144_, lean_object* v_ex_145_, lean_object* v_act_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v_ex_145_, v_act_146_, v_a_147_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed(lean_object* v_00_u03b1_150_, lean_object* v_ex_151_, lean_object* v_act_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions(v_00_u03b1_150_, v_ex_151_, v_act_152_, v_a_153_);
lean_dec_ref(v_a_153_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(lean_object* v_o_159_, lean_object* v_k_160_, uint8_t v_v_161_){
_start:
{
lean_object* v_map_162_; uint8_t v_hasTrace_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_177_; 
v_map_162_ = lean_ctor_get(v_o_159_, 0);
v_hasTrace_163_ = lean_ctor_get_uint8(v_o_159_, sizeof(void*)*1);
v_isSharedCheck_177_ = !lean_is_exclusive(v_o_159_);
if (v_isSharedCheck_177_ == 0)
{
v___x_165_ = v_o_159_;
v_isShared_166_ = v_isSharedCheck_177_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_map_162_);
lean_dec(v_o_159_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_177_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_167_, 0, v_v_161_);
lean_inc(v_k_160_);
v___x_168_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_160_, v___x_167_, v_map_162_);
if (v_hasTrace_163_ == 0)
{
lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_172_; 
v___x_169_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_170_ = l_Lean_Name_isPrefixOf(v___x_169_, v_k_160_);
lean_dec(v_k_160_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_168_);
v___x_172_ = v___x_165_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_168_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_ctor_set_uint8(v___x_172_, sizeof(void*)*1, v___x_170_);
return v___x_172_;
}
}
else
{
lean_object* v___x_175_; 
lean_dec(v_k_160_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_168_);
v___x_175_ = v___x_165_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_168_);
lean_ctor_set_uint8(v_reuseFailAlloc_176_, sizeof(void*)*1, v_hasTrace_163_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___boxed(lean_object* v_o_178_, lean_object* v_k_179_, lean_object* v_v_180_){
_start:
{
uint8_t v_v_boxed_181_; lean_object* v_res_182_; 
v_v_boxed_181_ = lean_unbox(v_v_180_);
v_res_182_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_o_178_, v_k_179_, v_v_boxed_181_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(lean_object* v_o_183_, lean_object* v_k_184_, lean_object* v_v_185_){
_start:
{
lean_object* v_map_186_; uint8_t v_hasTrace_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_201_; 
v_map_186_ = lean_ctor_get(v_o_183_, 0);
v_hasTrace_187_ = lean_ctor_get_uint8(v_o_183_, sizeof(void*)*1);
v_isSharedCheck_201_ = !lean_is_exclusive(v_o_183_);
if (v_isSharedCheck_201_ == 0)
{
v___x_189_ = v_o_183_;
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_map_186_);
lean_dec(v_o_183_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_191_, 0, v_v_185_);
lean_inc(v_k_184_);
v___x_192_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_184_, v___x_191_, v_map_186_);
if (v_hasTrace_187_ == 0)
{
lean_object* v___x_193_; uint8_t v___x_194_; lean_object* v___x_196_; 
v___x_193_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_194_ = l_Lean_Name_isPrefixOf(v___x_193_, v_k_184_);
lean_dec(v_k_184_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_196_ = v___x_189_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_192_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_ctor_set_uint8(v___x_196_, sizeof(void*)*1, v___x_194_);
return v___x_196_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec(v_k_184_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_199_ = v___x_189_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_192_);
lean_ctor_set_uint8(v_reuseFailAlloc_200_, sizeof(void*)*1, v_hasTrace_187_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(lean_object* v_o_202_, lean_object* v_k_203_, lean_object* v_v_204_){
_start:
{
lean_object* v_map_205_; uint8_t v_hasTrace_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_220_; 
v_map_205_ = lean_ctor_get(v_o_202_, 0);
v_hasTrace_206_ = lean_ctor_get_uint8(v_o_202_, sizeof(void*)*1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_o_202_);
if (v_isSharedCheck_220_ == 0)
{
v___x_208_ = v_o_202_;
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_map_205_);
lean_dec(v_o_202_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v_v_204_);
lean_inc(v_k_203_);
v___x_211_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_203_, v___x_210_, v_map_205_);
if (v_hasTrace_206_ == 0)
{
lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_215_; 
v___x_212_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_213_ = l_Lean_Name_isPrefixOf(v___x_212_, v_k_203_);
lean_dec(v_k_203_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_215_ = v___x_208_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_211_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*1, v___x_213_);
return v___x_215_;
}
}
else
{
lean_object* v___x_218_; 
lean_dec(v_k_203_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_218_ = v___x_208_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_211_);
lean_ctor_set_uint8(v_reuseFailAlloc_219_, sizeof(void*)*1, v_hasTrace_206_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption(lean_object* v_opts_228_, lean_object* v_decl_229_, lean_object* v_name_230_, lean_object* v_val_231_){
_start:
{
lean_object* v_defValue_233_; 
v_defValue_233_ = lean_ctor_get(v_decl_229_, 2);
lean_inc_ref(v_defValue_233_);
lean_dec_ref(v_decl_229_);
switch(lean_obj_tag(v_defValue_233_))
{
case 1:
{
lean_object* v___x_234_; uint8_t v___x_235_; 
lean_dec_ref_known(v_defValue_233_, 0);
v___x_234_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__0));
v___x_235_ = lean_string_dec_eq(v_val_231_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_236_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__1));
v___x_237_ = lean_string_dec_eq(v_val_231_, v___x_236_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec(v_name_230_);
lean_dec_ref(v_opts_228_);
v___x_238_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_239_ = lean_string_append(v___x_238_, v_val_231_);
lean_dec_ref(v_val_231_);
v___x_240_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__3));
v___x_241_ = lean_string_append(v___x_239_, v___x_240_);
v___x_242_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec_ref(v_val_231_);
v___x_244_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_228_, v_name_230_, v___x_235_);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; 
lean_dec_ref(v_val_231_);
v___x_246_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0(v_opts_228_, v_name_230_, v___x_235_);
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
return v___x_247_;
}
}
case 3:
{
lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_272_; 
v_isSharedCheck_272_ = !lean_is_exclusive(v_defValue_233_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v_defValue_233_, 0);
lean_dec(v_unused_273_);
v___x_249_ = v_defValue_233_;
v_isShared_250_ = v_isSharedCheck_272_;
goto v_resetjp_248_;
}
else
{
lean_dec(v_defValue_233_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_272_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_251_ = lean_unsigned_to_nat(0u);
v___x_252_ = lean_string_utf8_byte_size(v_val_231_);
lean_inc_ref(v_val_231_);
v___x_253_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_253_, 0, v_val_231_);
lean_ctor_set(v___x_253_, 1, v___x_251_);
lean_ctor_set(v___x_253_, 2, v___x_252_);
v___x_254_ = l_String_Slice_toNat_x3f(v___x_253_);
lean_dec_ref_known(v___x_253_, 3);
if (lean_obj_tag(v___x_254_) == 1)
{
lean_object* v_val_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_263_; 
lean_del_object(v___x_249_);
lean_dec_ref(v_val_231_);
v_val_255_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_263_ == 0)
{
v___x_257_ = v___x_254_;
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_val_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_261_; 
v___x_259_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__1(v_opts_228_, v_name_230_, v_val_255_);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 0);
lean_ctor_set(v___x_257_, 0, v___x_259_);
v___x_261_ = v___x_257_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
lean_dec(v___x_254_);
lean_dec(v_name_230_);
lean_dec_ref(v_opts_228_);
v___x_264_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__2));
v___x_265_ = lean_string_append(v___x_264_, v_val_231_);
lean_dec_ref(v_val_231_);
v___x_266_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__4));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
if (v_isShared_250_ == 0)
{
lean_ctor_set_tag(v___x_249_, 18);
lean_ctor_set(v___x_249_, 0, v___x_267_);
v___x_269_ = v___x_249_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_267_);
v___x_269_ = v_reuseFailAlloc_271_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; 
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
}
}
case 0:
{
lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_281_; 
v_isSharedCheck_281_ = !lean_is_exclusive(v_defValue_233_);
if (v_isSharedCheck_281_ == 0)
{
lean_object* v_unused_282_; 
v_unused_282_ = lean_ctor_get(v_defValue_233_, 0);
lean_dec(v_unused_282_);
v___x_275_ = v_defValue_233_;
v_isShared_276_ = v_isSharedCheck_281_;
goto v_resetjp_274_;
}
else
{
lean_dec(v_defValue_233_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_281_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_277_ = l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__2(v_opts_228_, v_name_230_, v_val_231_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v___x_277_);
v___x_279_ = v___x_275_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
default: 
{
lean_object* v___x_283_; uint8_t v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec_ref(v_defValue_233_);
lean_dec_ref(v_val_231_);
lean_dec_ref(v_opts_228_);
v___x_283_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__5));
v___x_284_ = 1;
v___x_285_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_230_, v___x_284_);
v___x_286_ = lean_string_append(v___x_283_, v___x_285_);
lean_dec_ref(v___x_285_);
v___x_287_ = ((lean_object*)(l_Lean_Language_Lean_setOption___closed__6));
v___x_288_ = lean_string_append(v___x_286_, v___x_287_);
v___x_289_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
v___x_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_setOption___boxed(lean_object* v_opts_291_, lean_object* v_decl_292_, lean_object* v_name_293_, lean_object* v_val_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_Language_Lean_setOption(v_opts_291_, v_decl_292_, v_name_293_, v_val_294_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(lean_object* v_o_297_, lean_object* v_k_298_, lean_object* v_v_299_){
_start:
{
lean_object* v_map_300_; uint8_t v_hasTrace_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_314_; 
v_map_300_ = lean_ctor_get(v_o_297_, 0);
v_hasTrace_301_ = lean_ctor_get_uint8(v_o_297_, sizeof(void*)*1);
v_isSharedCheck_314_ = !lean_is_exclusive(v_o_297_);
if (v_isSharedCheck_314_ == 0)
{
v___x_303_ = v_o_297_;
v_isShared_304_ = v_isSharedCheck_314_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_map_300_);
lean_dec(v_o_297_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_314_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; 
lean_inc(v_k_298_);
v___x_305_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_298_, v_v_299_, v_map_300_);
if (v_hasTrace_301_ == 0)
{
lean_object* v___x_306_; uint8_t v___x_307_; lean_object* v___x_309_; 
v___x_306_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_307_ = l_Lean_Name_isPrefixOf(v___x_306_, v_k_298_);
lean_dec(v_k_298_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_305_);
v___x_309_ = v___x_303_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_305_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_ctor_set_uint8(v___x_309_, sizeof(void*)*1, v___x_307_);
return v___x_309_;
}
}
else
{
lean_object* v___x_312_; 
lean_dec(v_k_298_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 0, v___x_305_);
v___x_312_ = v___x_303_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_305_);
lean_ctor_set_uint8(v_reuseFailAlloc_313_, sizeof(void*)*1, v_hasTrace_301_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(lean_object* v_a_321_, lean_object* v_init_322_, lean_object* v_x_323_){
_start:
{
if (lean_obj_tag(v_x_323_) == 0)
{
lean_object* v_k_325_; lean_object* v_v_326_; lean_object* v_l_327_; lean_object* v_r_328_; lean_object* v___x_329_; 
v_k_325_ = lean_ctor_get(v_x_323_, 1);
lean_inc(v_k_325_);
v_v_326_ = lean_ctor_get(v_x_323_, 2);
lean_inc(v_v_326_);
v_l_327_ = lean_ctor_get(v_x_323_, 3);
lean_inc(v_l_327_);
v_r_328_ = lean_ctor_get(v_x_323_, 4);
lean_inc(v_r_328_);
lean_dec_ref_known(v_x_323_, 5);
v___x_329_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_321_, v_init_322_, v_l_327_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_378_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_378_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_378_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_378_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_377_; 
v_a_334_ = lean_ctor_get(v_a_330_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v_a_330_);
if (v_isSharedCheck_377_ == 0)
{
v___x_336_ = v_a_330_;
v_isShared_337_ = v_isSharedCheck_377_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v_a_330_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_377_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_338_ = l_Lean_Name_getRoot(v_k_325_);
v___x_339_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__1));
v___x_340_ = lean_box(0);
v___x_341_ = l_Lean_Name_replacePrefix(v_k_325_, v___x_339_, v___x_340_);
v___x_342_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_321_, v___x_341_);
if (lean_obj_tag(v___x_342_) == 1)
{
lean_dec(v___x_338_);
lean_del_object(v___x_336_);
lean_del_object(v___x_332_);
if (lean_obj_tag(v_v_326_) == 0)
{
lean_object* v_val_343_; lean_object* v_v_344_; lean_object* v___x_345_; 
v_val_343_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_val_343_);
lean_dec_ref_known(v___x_342_, 1);
v_v_344_ = lean_ctor_get(v_v_326_, 0);
lean_inc_ref(v_v_344_);
lean_dec_ref_known(v_v_326_, 1);
v___x_345_ = l_Lean_Language_Lean_setOption(v_a_334_, v_val_343_, v___x_341_, v_v_344_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_345_, 1);
v_init_322_ = v_a_346_;
v_x_323_ = v_r_328_;
goto _start;
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_r_328_);
v_a_348_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_345_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_345_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
else
{
lean_object* v___x_356_; 
lean_dec_ref_known(v___x_342_, 1);
v___x_356_ = l_Lean_Options_set___at___00Lean_Language_Lean_reparseOptions_spec__0(v_a_334_, v___x_341_, v_v_326_);
v_init_322_ = v___x_356_;
v_x_323_ = v_r_328_;
goto _start;
}
}
else
{
uint8_t v___x_358_; 
lean_dec(v___x_342_);
lean_dec(v_v_326_);
v___x_358_ = lean_name_eq(v___x_338_, v___x_339_);
lean_dec(v___x_338_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; uint8_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
lean_dec(v_a_334_);
lean_dec(v_r_328_);
v___x_359_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__2));
v___x_360_ = 1;
lean_inc(v___x_341_);
v___x_361_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_341_, v___x_360_);
v___x_362_ = lean_string_append(v___x_359_, v___x_361_);
lean_dec_ref(v___x_361_);
v___x_363_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__3));
v___x_364_ = lean_string_append(v___x_362_, v___x_363_);
v___x_365_ = l_Lean_Name_append(v___x_339_, v___x_341_);
v___x_366_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_365_, v___x_360_);
v___x_367_ = lean_string_append(v___x_364_, v___x_366_);
lean_dec_ref(v___x_366_);
v___x_368_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___closed__4));
v___x_369_ = lean_string_append(v___x_367_, v___x_368_);
if (v_isShared_337_ == 0)
{
lean_ctor_set_tag(v___x_336_, 18);
lean_ctor_set(v___x_336_, 0, v___x_369_);
v___x_371_ = v___x_336_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_375_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
lean_object* v___x_373_; 
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 1);
lean_ctor_set(v___x_332_, 0, v___x_371_);
v___x_373_ = v___x_332_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
else
{
lean_dec(v___x_341_);
lean_del_object(v___x_336_);
lean_del_object(v___x_332_);
v_init_322_ = v_a_334_;
v_x_323_ = v_r_328_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_r_328_);
lean_dec(v_v_326_);
lean_dec(v_k_325_);
return v___x_329_;
}
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v_init_322_);
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1___boxed(lean_object* v_a_381_, lean_object* v_init_382_, lean_object* v_x_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_381_, v_init_382_, v_x_383_);
lean_dec(v_a_381_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions(lean_object* v_opts_386_){
_start:
{
lean_object* v_opts_x27_388_; lean_object* v___x_389_; 
v_opts_x27_388_ = l_Lean_Options_empty;
v___x_389_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v_map_391_; lean_object* v___x_392_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_390_);
lean_dec_ref_known(v___x_389_, 1);
v_map_391_ = lean_ctor_get(v_opts_386_, 0);
lean_inc(v_map_391_);
lean_dec_ref(v_opts_386_);
v___x_392_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_Language_Lean_reparseOptions_spec__1(v_a_390_, v_opts_x27_388_, v_map_391_);
lean_dec(v_a_390_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_401_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_401_ == 0)
{
v___x_395_ = v___x_392_;
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_392_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_401_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_a_397_; lean_object* v___x_399_; 
v_a_397_ = lean_ctor_get(v_a_393_, 0);
lean_inc(v_a_397_);
lean_dec(v_a_393_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 0, v_a_397_);
v___x_399_ = v___x_395_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
v_a_402_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_392_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_392_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v_opts_386_);
v_a_410_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_389_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_389_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_reparseOptions___boxed(lean_object* v_opts_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_Language_Lean_reparseOptions(v_opts_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(lean_object* v_stx_429_){
_start:
{
lean_object* v_stx_431_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_434_ = lean_unsigned_to_nat(0u);
v___x_435_ = l_Lean_Syntax_getArg(v_stx_429_, v___x_434_);
v___x_436_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f___closed__3));
v___x_437_ = l_Lean_Syntax_isOfKind(v___x_435_, v___x_436_);
if (v___x_437_ == 0)
{
v_stx_431_ = v_stx_429_;
goto v___jp_430_;
}
else
{
lean_object* v___x_438_; lean_object* v_stx_439_; 
v___x_438_ = lean_unsigned_to_nat(1u);
v_stx_439_ = l_Lean_Syntax_getArg(v_stx_429_, v___x_438_);
lean_dec(v_stx_429_);
v_stx_431_ = v_stx_439_;
goto v___jp_430_;
}
v___jp_430_:
{
uint8_t v___x_432_; lean_object* v___x_433_; 
v___x_432_ = 0;
v___x_433_ = l_Lean_Syntax_getPos_x3f(v_stx_431_, v___x_432_);
lean_dec(v_stx_431_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(lean_object* v_name_440_, lean_object* v_decl_441_, lean_object* v_ref_442_){
_start:
{
lean_object* v_defValue_444_; lean_object* v_descr_445_; lean_object* v_deprecation_x3f_446_; lean_object* v___x_447_; uint8_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_defValue_444_ = lean_ctor_get(v_decl_441_, 0);
v_descr_445_ = lean_ctor_get(v_decl_441_, 1);
v_deprecation_x3f_446_ = lean_ctor_get(v_decl_441_, 2);
v___x_447_ = lean_alloc_ctor(1, 0, 1);
v___x_448_ = lean_unbox(v_defValue_444_);
lean_ctor_set_uint8(v___x_447_, 0, v___x_448_);
lean_inc(v_deprecation_x3f_446_);
lean_inc_ref(v_descr_445_);
lean_inc_n(v_name_440_, 2);
v___x_449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_449_, 0, v_name_440_);
lean_ctor_set(v___x_449_, 1, v_ref_442_);
lean_ctor_set(v___x_449_, 2, v___x_447_);
lean_ctor_set(v___x_449_, 3, v_descr_445_);
lean_ctor_set(v___x_449_, 4, v_deprecation_x3f_446_);
v___x_450_ = lean_register_option(v_name_440_, v___x_449_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_458_; 
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_458_ == 0)
{
lean_object* v_unused_459_; 
v_unused_459_ = lean_ctor_get(v___x_450_, 0);
lean_dec(v_unused_459_);
v___x_452_ = v___x_450_;
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
else
{
lean_dec(v___x_450_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_456_; 
lean_inc(v_defValue_444_);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v_name_440_);
lean_ctor_set(v___x_454_, 1, v_defValue_444_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_454_);
v___x_456_ = v___x_452_;
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
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
lean_dec(v_name_440_);
v_a_460_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_450_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_450_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_468_, lean_object* v_decl_469_, lean_object* v_ref_470_, lean_object* v_a_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v_name_468_, v_decl_469_, v_ref_470_);
lean_dec_ref(v_decl_469_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_490_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__2_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_491_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__4_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_492_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn___closed__5_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_));
v___x_493_ = l_Lean_Option_register___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4__spec__0(v___x_490_, v___x_491_, v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4____boxed(lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
return v_res_495_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_496_ = lean_unsigned_to_nat(32u);
v___x_497_ = lean_mk_empty_array_with_capacity(v___x_496_);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_499_ = ((size_t)5ULL);
v___x_500_ = lean_unsigned_to_nat(0u);
v___x_501_ = lean_unsigned_to_nat(32u);
v___x_502_ = lean_mk_empty_array_with_capacity(v___x_501_);
v___x_503_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__0);
v___x_504_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_504_, 0, v___x_503_);
lean_ctor_set(v___x_504_, 1, v___x_502_);
lean_ctor_set(v___x_504_, 2, v___x_500_);
lean_ctor_set(v___x_504_, 3, v___x_500_);
lean_ctor_set_usize(v___x_504_, 4, v___x_499_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(lean_object* v___y_505_){
_start:
{
lean_object* v___x_507_; lean_object* v_infoState_508_; lean_object* v_trees_509_; lean_object* v___x_510_; lean_object* v_infoState_511_; lean_object* v_env_512_; lean_object* v_messages_513_; lean_object* v_scopes_514_; lean_object* v_usedQuotCtxts_515_; lean_object* v_nextMacroScope_516_; lean_object* v_maxRecDepth_517_; lean_object* v_ngen_518_; lean_object* v_auxDeclNGen_519_; lean_object* v_traceState_520_; lean_object* v_snapshotTasks_521_; lean_object* v_prevLinterStates_522_; lean_object* v_codeQualityEntryTasks_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_544_; 
v___x_507_ = lean_st_ref_get(v___y_505_);
v_infoState_508_ = lean_ctor_get(v___x_507_, 8);
lean_inc_ref(v_infoState_508_);
lean_dec(v___x_507_);
v_trees_509_ = lean_ctor_get(v_infoState_508_, 2);
lean_inc_ref(v_trees_509_);
lean_dec_ref(v_infoState_508_);
v___x_510_ = lean_st_ref_take(v___y_505_);
v_infoState_511_ = lean_ctor_get(v___x_510_, 8);
v_env_512_ = lean_ctor_get(v___x_510_, 0);
v_messages_513_ = lean_ctor_get(v___x_510_, 1);
v_scopes_514_ = lean_ctor_get(v___x_510_, 2);
v_usedQuotCtxts_515_ = lean_ctor_get(v___x_510_, 3);
v_nextMacroScope_516_ = lean_ctor_get(v___x_510_, 4);
v_maxRecDepth_517_ = lean_ctor_get(v___x_510_, 5);
v_ngen_518_ = lean_ctor_get(v___x_510_, 6);
v_auxDeclNGen_519_ = lean_ctor_get(v___x_510_, 7);
v_traceState_520_ = lean_ctor_get(v___x_510_, 9);
v_snapshotTasks_521_ = lean_ctor_get(v___x_510_, 10);
v_prevLinterStates_522_ = lean_ctor_get(v___x_510_, 11);
v_codeQualityEntryTasks_523_ = lean_ctor_get(v___x_510_, 12);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_544_ == 0)
{
v___x_525_ = v___x_510_;
v_isShared_526_ = v_isSharedCheck_544_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_codeQualityEntryTasks_523_);
lean_inc(v_prevLinterStates_522_);
lean_inc(v_snapshotTasks_521_);
lean_inc(v_traceState_520_);
lean_inc(v_infoState_511_);
lean_inc(v_auxDeclNGen_519_);
lean_inc(v_ngen_518_);
lean_inc(v_maxRecDepth_517_);
lean_inc(v_nextMacroScope_516_);
lean_inc(v_usedQuotCtxts_515_);
lean_inc(v_scopes_514_);
lean_inc(v_messages_513_);
lean_inc(v_env_512_);
lean_dec(v___x_510_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_544_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
uint8_t v_enabled_527_; lean_object* v_assignment_528_; lean_object* v_lazyAssignment_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_542_; 
v_enabled_527_ = lean_ctor_get_uint8(v_infoState_511_, sizeof(void*)*3);
v_assignment_528_ = lean_ctor_get(v_infoState_511_, 0);
v_lazyAssignment_529_ = lean_ctor_get(v_infoState_511_, 1);
v_isSharedCheck_542_ = !lean_is_exclusive(v_infoState_511_);
if (v_isSharedCheck_542_ == 0)
{
lean_object* v_unused_543_; 
v_unused_543_ = lean_ctor_get(v_infoState_511_, 2);
lean_dec(v_unused_543_);
v___x_531_ = v_infoState_511_;
v_isShared_532_ = v_isSharedCheck_542_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_lazyAssignment_529_);
lean_inc(v_assignment_528_);
lean_dec(v_infoState_511_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_542_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_533_; lean_object* v___x_535_; 
v___x_533_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___closed__1);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 2, v___x_533_);
v___x_535_ = v___x_531_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_assignment_528_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v_lazyAssignment_529_);
lean_ctor_set(v_reuseFailAlloc_541_, 2, v___x_533_);
lean_ctor_set_uint8(v_reuseFailAlloc_541_, sizeof(void*)*3, v_enabled_527_);
v___x_535_ = v_reuseFailAlloc_541_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
lean_object* v___x_537_; 
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 8, v___x_535_);
v___x_537_ = v___x_525_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_env_512_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_messages_513_);
lean_ctor_set(v_reuseFailAlloc_540_, 2, v_scopes_514_);
lean_ctor_set(v_reuseFailAlloc_540_, 3, v_usedQuotCtxts_515_);
lean_ctor_set(v_reuseFailAlloc_540_, 4, v_nextMacroScope_516_);
lean_ctor_set(v_reuseFailAlloc_540_, 5, v_maxRecDepth_517_);
lean_ctor_set(v_reuseFailAlloc_540_, 6, v_ngen_518_);
lean_ctor_set(v_reuseFailAlloc_540_, 7, v_auxDeclNGen_519_);
lean_ctor_set(v_reuseFailAlloc_540_, 8, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_540_, 9, v_traceState_520_);
lean_ctor_set(v_reuseFailAlloc_540_, 10, v_snapshotTasks_521_);
lean_ctor_set(v_reuseFailAlloc_540_, 11, v_prevLinterStates_522_);
lean_ctor_set(v_reuseFailAlloc_540_, 12, v_codeQualityEntryTasks_523_);
v___x_537_ = v_reuseFailAlloc_540_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_st_ref_put(v___y_505_, v___x_537_);
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v_trees_509_);
return v___x_539_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg___boxed(lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_545_);
lean_dec(v___y_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___boxed(lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0(v___y_552_, v___y_553_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
return v_res_555_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object* v_opts_556_, lean_object* v_opt_557_){
_start:
{
lean_object* v_name_558_; lean_object* v_defValue_559_; lean_object* v_map_560_; lean_object* v___x_561_; 
v_name_558_ = lean_ctor_get(v_opt_557_, 0);
v_defValue_559_ = lean_ctor_get(v_opt_557_, 1);
v_map_560_ = lean_ctor_get(v_opts_556_, 0);
v___x_561_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_560_, v_name_558_);
if (lean_obj_tag(v___x_561_) == 0)
{
uint8_t v___x_562_; 
v___x_562_ = lean_unbox(v_defValue_559_);
return v___x_562_;
}
else
{
lean_object* v_val_563_; 
v_val_563_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_val_563_);
lean_dec_ref_known(v___x_561_, 1);
if (lean_obj_tag(v_val_563_) == 1)
{
uint8_t v_v_564_; 
v_v_564_ = lean_ctor_get_uint8(v_val_563_, 0);
lean_dec_ref_known(v_val_563_, 0);
return v_v_564_;
}
else
{
uint8_t v___x_565_; 
lean_dec(v_val_563_);
v___x_565_ = lean_unbox(v_defValue_559_);
return v___x_565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object* v_opts_566_, lean_object* v_opt_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_566_, v_opt_567_);
lean_dec_ref(v_opt_567_);
lean_dec_ref(v_opts_566_);
v_r_569_ = lean_box(v_res_568_);
return v_r_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object* v_val_572_, lean_object* v___y_573_){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_574_ = l_Lean_Language_Snapshot_transform(v_val_572_, v___y_573_);
v___x_575_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_574_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object* v_val_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(v_val_577_, v___y_578_);
lean_dec_ref(v___y_578_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object* v_inst_580_, lean_object* v_val_581_){
_start:
{
lean_object* v___f_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
lean_inc_ref(v_val_581_);
v___f_582_ = lean_alloc_closure((void*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed), 2, 1);
lean_closure_set(v___f_582_, 0, v_val_581_);
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v_inst_580_);
lean_ctor_set(v___x_583_, 1, v_val_581_);
v___x_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v___f_582_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object* v_stx_585_, lean_object* v_revCmds_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = l_Lean_Elab_getResetInfoTrees___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__0___redArg(v___y_588_);
lean_dec_ref(v___x_590_);
lean_inc(v_stx_585_);
v___x_591_ = l_Lean_Elab_Command_elabCommandTopLevel(v_stx_585_, v___y_587_, v___y_588_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_603_; 
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v___x_591_, 0);
lean_dec(v_unused_604_);
v___x_593_ = v___x_591_;
v_isShared_594_ = v_isSharedCheck_603_;
goto v_resetjp_592_;
}
else
{
lean_dec(v___x_591_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_603_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
uint8_t v___x_595_; 
v___x_595_ = l_Lean_Parser_isTerminalCommand(v_stx_585_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_598_; 
lean_dec(v_revCmds_586_);
v___x_596_ = lean_box(0);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_596_);
v___x_598_ = v___x_593_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v___x_596_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
lean_del_object(v___x_593_);
v___x_600_ = l_List_reverse___redArg(v_revCmds_586_);
v___x_601_ = lean_array_mk(v___x_600_);
v___x_602_ = l_Lean_Elab_Command_runModuleLintersAsync(v___x_601_, v___y_587_, v___y_588_);
return v___x_602_;
}
}
}
else
{
lean_dec(v_revCmds_586_);
lean_dec(v_stx_585_);
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object* v_stx_605_, lean_object* v_revCmds_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(v_stx_605_, v_revCmds_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
return v_res_610_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_611_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_614_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
lean_ctor_set(v___x_616_, 2, v___x_615_);
lean_ctor_set(v___x_616_, 3, v___x_615_);
lean_ctor_set(v___x_616_, 4, v___x_614_);
lean_ctor_set(v___x_616_, 5, v___x_614_);
lean_ctor_set(v___x_616_, 6, v___x_614_);
lean_ctor_set(v___x_616_, 7, v___x_614_);
lean_ctor_set(v___x_616_, 8, v___x_614_);
lean_ctor_set(v___x_616_, 9, v___x_614_);
lean_ctor_set(v___x_616_, 10, v___x_614_);
return v___x_616_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_617_ = lean_unsigned_to_nat(32u);
v___x_618_ = lean_mk_empty_array_with_capacity(v___x_617_);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4(void){
_start:
{
size_t v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_620_ = ((size_t)5ULL);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_unsigned_to_nat(32u);
v___x_623_ = lean_mk_empty_array_with_capacity(v___x_622_);
v___x_624_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__3);
v___x_625_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_625_, 0, v___x_624_);
lean_ctor_set(v___x_625_, 1, v___x_623_);
lean_ctor_set(v___x_625_, 2, v___x_621_);
lean_ctor_set(v___x_625_, 3, v___x_621_);
lean_ctor_set_usize(v___x_625_, 4, v___x_620_);
return v___x_625_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_626_ = lean_box(1);
v___x_627_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__4);
v___x_628_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
lean_ctor_set(v___x_629_, 1, v___x_627_);
lean_ctor_set(v___x_629_, 2, v___x_626_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(lean_object* v_msgData_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; lean_object* v_env_634_; uint8_t v___x_635_; lean_object* v_env_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v_scopes_639_; lean_object* v___x_640_; lean_object* v_opts_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_633_ = lean_st_ref_get(v___y_631_);
v_env_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc_ref(v_env_634_);
lean_dec(v___x_633_);
v___x_635_ = 0;
v_env_636_ = l_Lean_Environment_setRecordingDeps(v_env_634_, v___x_635_);
v___x_637_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_638_ = lean_st_ref_get(v___y_631_);
v_scopes_639_ = lean_ctor_get(v___x_638_, 2);
lean_inc(v_scopes_639_);
lean_dec(v___x_638_);
v___x_640_ = l_List_head_x21___redArg(v___x_637_, v_scopes_639_);
lean_dec(v_scopes_639_);
v_opts_641_ = lean_ctor_get(v___x_640_, 1);
lean_inc_ref(v_opts_641_);
lean_dec(v___x_640_);
v___x_642_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__2);
v___x_643_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__5);
v___x_644_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_644_, 0, v_env_636_);
lean_ctor_set(v___x_644_, 1, v___x_642_);
lean_ctor_set(v___x_644_, 2, v___x_643_);
lean_ctor_set(v___x_644_, 3, v_opts_641_);
v___x_645_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
lean_ctor_set(v___x_645_, 1, v_msgData_630_);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___boxed(lean_object* v_msgData_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_647_, v___y_648_);
lean_dec(v___y_648_);
return v_res_650_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(uint8_t v___x_651_, lean_object* v_x_652_){
_start:
{
if (lean_obj_tag(v_x_652_) == 1)
{
lean_object* v_pre_653_; 
v_pre_653_ = lean_ctor_get(v_x_652_, 0);
if (lean_obj_tag(v_pre_653_) == 0)
{
lean_object* v_str_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v_str_654_ = lean_ctor_get(v_x_652_, 1);
v___x_655_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0));
v___x_656_ = lean_string_dec_eq(v_str_654_, v___x_655_);
return v___x_656_;
}
else
{
return v___x_651_;
}
}
else
{
return v___x_651_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0___boxed(lean_object* v___x_657_, lean_object* v_x_658_){
_start:
{
uint8_t v___x_9456__boxed_659_; uint8_t v_res_660_; lean_object* v_r_661_; 
v___x_9456__boxed_659_ = lean_unbox(v___x_657_);
v_res_660_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___lam__0(v___x_9456__boxed_659_, v_x_658_);
lean_dec(v_x_658_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(lean_object* v_ref_666_, lean_object* v_msgData_667_, uint8_t v_severity_668_, uint8_t v_isSilent_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___y_674_; uint8_t v___y_675_; uint8_t v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_739_; lean_object* v___y_740_; uint8_t v___y_741_; uint8_t v___y_742_; lean_object* v___y_743_; lean_object* v___y_764_; uint8_t v___y_765_; lean_object* v___y_766_; uint8_t v___y_767_; lean_object* v___y_768_; uint8_t v___y_772_; uint8_t v___x_800_; uint8_t v___x_801_; 
v___x_800_ = 2;
v___x_801_ = l_Lean_instBEqMessageSeverity_beq(v_severity_668_, v___x_800_);
if (v___x_801_ == 0)
{
goto v___jp_789_;
}
else
{
uint8_t v___x_802_; 
lean_inc_ref(v_msgData_667_);
v___x_802_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_667_);
if (v___x_802_ == 0)
{
goto v___jp_789_;
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec_ref(v_msgData_667_);
v___x_803_ = lean_box(0);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
return v___x_804_;
}
}
v___jp_673_:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lean_Elab_Command_getScope___redArg(v___y_681_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v_currNamespace_684_; lean_object* v___x_685_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v___x_682_, 1);
v_currNamespace_684_ = lean_ctor_get(v_a_683_, 2);
lean_inc(v_currNamespace_684_);
lean_dec(v_a_683_);
v___x_685_ = l_Lean_Elab_Command_getScope___redArg(v___y_681_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_721_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_721_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_721_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_721_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v_openDecls_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v_env_695_; lean_object* v_messages_696_; lean_object* v_scopes_697_; lean_object* v_usedQuotCtxts_698_; lean_object* v_nextMacroScope_699_; lean_object* v_maxRecDepth_700_; lean_object* v_ngen_701_; lean_object* v_auxDeclNGen_702_; lean_object* v_infoState_703_; lean_object* v_traceState_704_; lean_object* v_snapshotTasks_705_; lean_object* v_prevLinterStates_706_; lean_object* v_codeQualityEntryTasks_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_720_; 
v_openDecls_690_ = lean_ctor_get(v_a_686_, 3);
lean_inc(v_openDecls_690_);
lean_dec(v_a_686_);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v_currNamespace_684_);
lean_ctor_set(v___x_691_, 1, v_openDecls_690_);
v___x_692_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
lean_ctor_set(v___x_692_, 1, v___y_678_);
lean_inc_ref(v___y_679_);
lean_inc_ref(v___y_677_);
v___x_693_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_693_, 0, v___y_677_);
lean_ctor_set(v___x_693_, 1, v___y_680_);
lean_ctor_set(v___x_693_, 2, v___y_674_);
lean_ctor_set(v___x_693_, 3, v___y_679_);
lean_ctor_set(v___x_693_, 4, v___x_692_);
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*5, v___y_676_);
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*5 + 1, v___y_675_);
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*5 + 2, v_isSilent_669_);
v___x_694_ = lean_st_ref_take(v___y_681_);
v_env_695_ = lean_ctor_get(v___x_694_, 0);
v_messages_696_ = lean_ctor_get(v___x_694_, 1);
v_scopes_697_ = lean_ctor_get(v___x_694_, 2);
v_usedQuotCtxts_698_ = lean_ctor_get(v___x_694_, 3);
v_nextMacroScope_699_ = lean_ctor_get(v___x_694_, 4);
v_maxRecDepth_700_ = lean_ctor_get(v___x_694_, 5);
v_ngen_701_ = lean_ctor_get(v___x_694_, 6);
v_auxDeclNGen_702_ = lean_ctor_get(v___x_694_, 7);
v_infoState_703_ = lean_ctor_get(v___x_694_, 8);
v_traceState_704_ = lean_ctor_get(v___x_694_, 9);
v_snapshotTasks_705_ = lean_ctor_get(v___x_694_, 10);
v_prevLinterStates_706_ = lean_ctor_get(v___x_694_, 11);
v_codeQualityEntryTasks_707_ = lean_ctor_get(v___x_694_, 12);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_720_ == 0)
{
v___x_709_ = v___x_694_;
v_isShared_710_ = v_isSharedCheck_720_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_codeQualityEntryTasks_707_);
lean_inc(v_prevLinterStates_706_);
lean_inc(v_snapshotTasks_705_);
lean_inc(v_traceState_704_);
lean_inc(v_infoState_703_);
lean_inc(v_auxDeclNGen_702_);
lean_inc(v_ngen_701_);
lean_inc(v_maxRecDepth_700_);
lean_inc(v_nextMacroScope_699_);
lean_inc(v_usedQuotCtxts_698_);
lean_inc(v_scopes_697_);
lean_inc(v_messages_696_);
lean_inc(v_env_695_);
lean_dec(v___x_694_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_720_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_711_ = lean_box(0);
v___x_712_ = l_Lean_MessageLog_add(v___x_693_, v_messages_696_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 1, v___x_712_);
v___x_714_ = v___x_709_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_env_695_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v___x_712_);
lean_ctor_set(v_reuseFailAlloc_719_, 2, v_scopes_697_);
lean_ctor_set(v_reuseFailAlloc_719_, 3, v_usedQuotCtxts_698_);
lean_ctor_set(v_reuseFailAlloc_719_, 4, v_nextMacroScope_699_);
lean_ctor_set(v_reuseFailAlloc_719_, 5, v_maxRecDepth_700_);
lean_ctor_set(v_reuseFailAlloc_719_, 6, v_ngen_701_);
lean_ctor_set(v_reuseFailAlloc_719_, 7, v_auxDeclNGen_702_);
lean_ctor_set(v_reuseFailAlloc_719_, 8, v_infoState_703_);
lean_ctor_set(v_reuseFailAlloc_719_, 9, v_traceState_704_);
lean_ctor_set(v_reuseFailAlloc_719_, 10, v_snapshotTasks_705_);
lean_ctor_set(v_reuseFailAlloc_719_, 11, v_prevLinterStates_706_);
lean_ctor_set(v_reuseFailAlloc_719_, 12, v_codeQualityEntryTasks_707_);
v___x_714_ = v_reuseFailAlloc_719_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_715_; lean_object* v___x_717_; 
v___x_715_ = lean_st_ref_put(v___y_681_, v___x_714_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_711_);
v___x_717_ = v___x_688_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_711_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
lean_dec(v_currNamespace_684_);
lean_dec_ref(v___y_680_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_674_);
v_a_722_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_685_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_685_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec_ref(v___y_680_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_674_);
v_a_730_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_682_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_682_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
v___jp_738_:
{
lean_object* v_fileName_744_; lean_object* v_fileMap_745_; uint8_t v_suppressElabErrors_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_762_; 
v_fileName_744_ = lean_ctor_get(v___y_670_, 0);
v_fileMap_745_ = lean_ctor_get(v___y_670_, 1);
v_suppressElabErrors_746_ = lean_ctor_get_uint8(v___y_670_, sizeof(void*)*10);
v___x_747_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_667_);
v___x_748_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v___x_747_, v___y_671_);
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_762_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_762_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_762_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
lean_inc_ref_n(v_fileMap_745_, 2);
v___x_753_ = l_Lean_FileMap_toPosition(v_fileMap_745_, v___y_740_);
lean_dec(v___y_740_);
v___x_754_ = l_Lean_FileMap_toPosition(v_fileMap_745_, v___y_743_);
lean_dec(v___y_743_);
v___x_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
v___x_756_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
if (v_suppressElabErrors_746_ == 0)
{
lean_del_object(v___x_751_);
v___y_674_ = v___x_755_;
v___y_675_ = v___y_741_;
v___y_676_ = v___y_742_;
v___y_677_ = v_fileName_744_;
v___y_678_ = v_a_749_;
v___y_679_ = v___x_756_;
v___y_680_ = v___x_753_;
v___y_681_ = v___y_671_;
goto v___jp_673_;
}
else
{
uint8_t v___x_757_; 
lean_inc(v_a_749_);
lean_inc_ref(v___y_739_);
v___x_757_ = l_Lean_MessageData_hasTag(v___y_739_, v_a_749_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_760_; 
lean_dec_ref_known(v___x_755_, 1);
lean_dec_ref(v___x_753_);
lean_dec(v_a_749_);
v___x_758_ = lean_box(0);
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 0, v___x_758_);
v___x_760_ = v___x_751_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_758_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
else
{
lean_del_object(v___x_751_);
v___y_674_ = v___x_755_;
v___y_675_ = v___y_741_;
v___y_676_ = v___y_742_;
v___y_677_ = v_fileName_744_;
v___y_678_ = v_a_749_;
v___y_679_ = v___x_756_;
v___y_680_ = v___x_753_;
v___y_681_ = v___y_671_;
goto v___jp_673_;
}
}
}
}
v___jp_763_:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_Syntax_getTailPos_x3f(v___y_766_, v___y_765_);
lean_dec(v___y_766_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_inc(v___y_768_);
v___y_739_ = v___y_764_;
v___y_740_ = v___y_768_;
v___y_741_ = v___y_767_;
v___y_742_ = v___y_765_;
v___y_743_ = v___y_768_;
goto v___jp_738_;
}
else
{
lean_object* v_val_770_; 
v_val_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_val_770_);
lean_dec_ref_known(v___x_769_, 1);
v___y_739_ = v___y_764_;
v___y_740_ = v___y_768_;
v___y_741_ = v___y_767_;
v___y_742_ = v___y_765_;
v___y_743_ = v_val_770_;
goto v___jp_738_;
}
}
v___jp_771_:
{
lean_object* v___x_773_; 
v___x_773_ = l_Lean_Elab_Command_getRef___redArg(v___y_670_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v_ref_775_; uint8_t v___x_776_; lean_object* v___f_777_; lean_object* v___x_778_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
lean_dec_ref_known(v___x_773_, 1);
v_ref_775_ = l_Lean_replaceRef(v_ref_666_, v_a_774_);
lean_dec(v_a_774_);
v___x_776_ = 0;
v___f_777_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__1));
v___x_778_ = l_Lean_Syntax_getPos_x3f(v_ref_775_, v___x_776_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v___x_779_; 
v___x_779_ = lean_unsigned_to_nat(0u);
v___y_764_ = v___f_777_;
v___y_765_ = v___x_776_;
v___y_766_ = v_ref_775_;
v___y_767_ = v___y_772_;
v___y_768_ = v___x_779_;
goto v___jp_763_;
}
else
{
lean_object* v_val_780_; 
v_val_780_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_val_780_);
lean_dec_ref_known(v___x_778_, 1);
v___y_764_ = v___f_777_;
v___y_765_ = v___x_776_;
v___y_766_ = v_ref_775_;
v___y_767_ = v___y_772_;
v___y_768_ = v_val_780_;
goto v___jp_763_;
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec_ref(v_msgData_667_);
v_a_781_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_773_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_773_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
v___jp_789_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v_scopes_792_; lean_object* v___x_793_; lean_object* v_opts_794_; uint8_t v___x_795_; uint8_t v___x_796_; 
v___x_790_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_791_ = lean_st_ref_get(v___y_671_);
v_scopes_792_ = lean_ctor_get(v___x_791_, 2);
lean_inc(v_scopes_792_);
lean_dec(v___x_791_);
v___x_793_ = l_List_head_x21___redArg(v___x_790_, v_scopes_792_);
lean_dec(v_scopes_792_);
v_opts_794_ = lean_ctor_get(v___x_793_, 1);
lean_inc_ref(v_opts_794_);
lean_dec(v___x_793_);
v___x_795_ = 1;
v___x_796_ = l_Lean_instBEqMessageSeverity_beq(v_severity_668_, v___x_795_);
if (v___x_796_ == 0)
{
lean_dec_ref(v_opts_794_);
v___y_772_ = v_severity_668_;
goto v___jp_771_;
}
else
{
lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_797_ = l_Lean_warningAsError;
v___x_798_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_794_, v___x_797_);
lean_dec_ref(v_opts_794_);
if (v___x_798_ == 0)
{
v___y_772_ = v_severity_668_;
goto v___jp_771_;
}
else
{
uint8_t v___x_799_; 
v___x_799_ = 2;
v___y_772_ = v___x_799_;
goto v___jp_771_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___boxed(lean_object* v_ref_805_, lean_object* v_msgData_806_, lean_object* v_severity_807_, lean_object* v_isSilent_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_severity_boxed_812_; uint8_t v_isSilent_boxed_813_; lean_object* v_res_814_; 
v_severity_boxed_812_ = lean_unbox(v_severity_807_);
v_isSilent_boxed_813_ = lean_unbox(v_isSilent_808_);
v_res_814_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_805_, v_msgData_806_, v_severity_boxed_812_, v_isSilent_boxed_813_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v_ref_805_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(lean_object* v_msgData_815_, uint8_t v_severity_816_, uint8_t v_isSilent_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_Elab_Command_getRef___redArg(v___y_818_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v___x_823_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_821_, 1);
v___x_823_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_a_822_, v_msgData_815_, v_severity_816_, v_isSilent_817_, v___y_818_, v___y_819_);
lean_dec(v_a_822_);
return v___x_823_;
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec_ref(v_msgData_815_);
v_a_824_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_821_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_821_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12___boxed(lean_object* v_msgData_832_, lean_object* v_severity_833_, lean_object* v_isSilent_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
uint8_t v_severity_boxed_838_; uint8_t v_isSilent_boxed_839_; lean_object* v_res_840_; 
v_severity_boxed_838_ = lean_unbox(v_severity_833_);
v_isSilent_boxed_839_ = lean_unbox(v_isSilent_834_);
v_res_840_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_832_, v_severity_boxed_838_, v_isSilent_boxed_839_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(lean_object* v_msgData_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
uint8_t v___x_845_; uint8_t v___x_846_; lean_object* v___x_847_; 
v___x_845_ = 2;
v___x_846_ = 0;
v___x_847_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5_spec__12(v_msgData_841_, v___x_845_, v___x_846_, v___y_842_, v___y_843_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5___boxed(lean_object* v_msgData_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v_msgData_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(lean_object* v_ref_853_, lean_object* v_msgData_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
uint8_t v___x_858_; uint8_t v___x_859_; lean_object* v___x_860_; 
v___x_858_ = 2;
v___x_859_ = 0;
v___x_860_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10(v_ref_853_, v_msgData_854_, v___x_858_, v___x_859_, v___y_855_, v___y_856_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4___boxed(lean_object* v_ref_861_, lean_object* v_msgData_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_861_, v_msgData_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v_ref_861_);
return v_res_866_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__0));
v___x_869_ = l_Lean_stringToMessageData(v___x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(lean_object* v_ex_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
if (lean_obj_tag(v_ex_870_) == 0)
{
lean_object* v_ref_877_; lean_object* v_msg_878_; lean_object* v___x_879_; 
v_ref_877_ = lean_ctor_get(v_ex_870_, 0);
lean_inc(v_ref_877_);
v_msg_878_ = lean_ctor_get(v_ex_870_, 1);
lean_inc_ref(v_msg_878_);
lean_dec_ref_known(v_ex_870_, 2);
v___x_879_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4(v_ref_877_, v_msg_878_, v___y_871_, v___y_872_);
lean_dec(v_ref_877_);
return v___x_879_;
}
else
{
lean_object* v_id_880_; uint8_t v___x_881_; 
v_id_880_ = lean_ctor_get(v_ex_870_, 0);
lean_inc(v_id_880_);
v___x_881_ = l_Lean_Elab_isAbortExceptionId(v_id_880_);
if (v___x_881_ == 0)
{
uint8_t v___x_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_907_; 
v___x_882_ = l_Lean_Exception_isInterrupt(v_ex_870_);
v_isSharedCheck_907_ = !lean_is_exclusive(v_ex_870_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; lean_object* v_unused_909_; 
v_unused_908_ = lean_ctor_get(v_ex_870_, 1);
lean_dec(v_unused_908_);
v_unused_909_ = lean_ctor_get(v_ex_870_, 0);
lean_dec(v_unused_909_);
v___x_884_ = v_ex_870_;
v_isShared_885_ = v_isSharedCheck_907_;
goto v_resetjp_883_;
}
else
{
lean_dec(v_ex_870_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_907_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
if (v___x_882_ == 0)
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_InternalExceptionId_getName(v_id_880_);
lean_dec(v_id_880_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
lean_del_object(v___x_884_);
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
v___x_888_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___closed__1);
v___x_889_ = l_Lean_MessageData_ofName(v_a_887_);
v___x_890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_888_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__5(v___x_890_, v___y_871_, v___y_872_);
return v___x_891_;
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_906_; 
v_a_892_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_906_ == 0)
{
v___x_894_ = v___x_886_;
v_isShared_895_ = v_isSharedCheck_906_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_886_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_906_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v_ref_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
v_ref_896_ = lean_ctor_get(v___y_871_, 7);
v___x_897_ = lean_io_error_to_string(v_a_892_);
v___x_898_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
v___x_899_ = l_Lean_MessageData_ofFormat(v___x_898_);
lean_inc(v_ref_896_);
if (v_isShared_885_ == 0)
{
lean_ctor_set_tag(v___x_884_, 0);
lean_ctor_set(v___x_884_, 1, v___x_899_);
lean_ctor_set(v___x_884_, 0, v_ref_896_);
v___x_901_ = v___x_884_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_ref_896_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v___x_899_);
v___x_901_ = v_reuseFailAlloc_905_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_903_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v___x_901_);
v___x_903_ = v___x_894_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
else
{
lean_del_object(v___x_884_);
lean_dec(v_id_880_);
goto v___jp_874_;
}
}
}
else
{
lean_dec(v_id_880_);
lean_dec_ref_known(v_ex_870_, 2);
goto v___jp_874_;
}
}
v___jp_874_:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
return v___x_876_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2___boxed(lean_object* v_ex_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_ex_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object* v_x_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; 
lean_inc(v___y_917_);
lean_inc_ref(v___y_916_);
v___x_919_ = lean_apply_3(v_x_915_, v___y_916_, v___y_917_, lean_box(0));
if (lean_obj_tag(v___x_919_) == 0)
{
return v___x_919_;
}
else
{
lean_object* v_a_920_; uint8_t v___x_921_; 
v_a_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_a_920_);
v___x_921_ = l_Lean_Exception_isInterrupt(v_a_920_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
lean_dec_ref_known(v___x_919_, 1);
v___x_922_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2(v_a_920_, v___y_916_, v___y_917_);
return v___x_922_;
}
else
{
lean_dec(v_a_920_);
return v___x_919_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object* v_x_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_x_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object* v___f_928_, lean_object* v___x_929_, lean_object* v_val_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_a_934_; lean_object* v___x_936_; 
v___x_936_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v___f_928_, v___x_929_, v_val_930_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_936_, 1);
v_a_934_ = v_a_937_;
goto v___jp_933_;
}
else
{
lean_object* v___x_938_; 
lean_dec_ref_known(v___x_936_, 1);
v___x_938_ = lean_box(0);
v_a_934_ = v___x_938_;
goto v___jp_933_;
}
v___jp_933_:
{
lean_object* v___x_935_; 
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v_a_934_);
return v___x_935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed(lean_object* v___f_939_, lean_object* v___x_940_, lean_object* v_val_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(v___f_939_, v___x_940_, v_val_941_, v___y_942_);
lean_dec_ref(v___y_942_);
lean_dec(v_val_941_);
lean_dec_ref(v___x_940_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(lean_object* v_h_945_, lean_object* v_x_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_949_ = lean_get_set_stderr(v_h_945_);
lean_inc_ref(v___y_947_);
v___x_950_ = lean_apply_2(v_x_946_, v___y_947_, lean_box(0));
v___x_951_ = lean_get_set_stderr(v___x_949_);
lean_dec_ref(v___x_951_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg___boxed(lean_object* v_h_952_, lean_object* v_x_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_952_, v_x_953_, v___y_954_);
lean_dec_ref(v___y_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(lean_object* v_00_u03b1_957_, lean_object* v_h_958_, lean_object* v_x_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___redArg(v_h_958_, v_x_959_, v___y_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed(lean_object* v_00_u03b1_963_, lean_object* v_h_964_, lean_object* v_x_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7(v_00_u03b1_963_, v_h_964_, v_x_965_, v___y_966_);
lean_dec_ref(v___y_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(lean_object* v_h_969_, lean_object* v_x_970_, lean_object* v___y_971_){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_973_ = lean_get_set_stdin(v_h_969_);
lean_inc_ref(v___y_971_);
v___x_974_ = lean_apply_2(v_x_970_, v___y_971_, lean_box(0));
v___x_975_ = lean_get_set_stdin(v___x_973_);
lean_dec_ref(v___x_975_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg___boxed(lean_object* v_h_976_, lean_object* v_x_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_976_, v_x_977_, v___y_978_);
lean_dec_ref(v___y_978_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(lean_object* v_msg_981_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_983_ = lean_panic_fn_borrowed(v___x_982_, v_msg_981_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(lean_object* v_h_984_, lean_object* v_x_985_, lean_object* v___y_986_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_988_ = lean_get_set_stdout(v_h_984_);
lean_inc_ref(v___y_986_);
v___x_989_ = lean_apply_2(v_x_985_, v___y_986_, lean_box(0));
v___x_990_ = lean_get_set_stdout(v___x_988_);
lean_dec_ref(v___x_990_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg___boxed(lean_object* v_h_991_, lean_object* v_x_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_991_, v_x_992_, v___y_993_);
lean_dec_ref(v___y_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(lean_object* v_00_u03b1_996_, lean_object* v_h_997_, lean_object* v_x_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___redArg(v_h_997_, v_x_998_, v___y_999_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1002_, lean_object* v_h_1003_, lean_object* v_x_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4(v_00_u03b1_1002_, v_h_1003_, v_x_1004_, v___y_1005_);
lean_dec_ref(v___y_1005_);
return v_res_1007_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = l_ByteArray_empty;
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
lean_ctor_set(v___x_1010_, 1, v___x_1008_);
return v___x_1010_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1014_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__3));
v___x_1015_ = lean_unsigned_to_nat(46u);
v___x_1016_ = lean_unsigned_to_nat(193u);
v___x_1017_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__2));
v___x_1018_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__1));
v___x_1019_ = l_mkPanicMessageWithDecl(v___x_1018_, v___x_1017_, v___x_1016_, v___x_1015_, v___x_1014_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(lean_object* v_x_1020_, uint8_t v_isolateStderr_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___y_1034_; 
v___x_1028_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__0);
v___x_1029_ = lean_st_mk_ref(v___x_1028_);
v___x_1030_ = lean_st_mk_ref(v___x_1028_);
v___x_1031_ = l_IO_FS_Stream_ofBuffer(v___x_1029_);
lean_inc(v___x_1030_);
v___x_1032_ = l_IO_FS_Stream_ofBuffer(v___x_1030_);
if (v_isolateStderr_1021_ == 0)
{
v___y_1034_ = v_x_1020_;
goto v___jp_1033_;
}
else
{
lean_object* v___x_1043_; 
lean_inc_ref(v___x_1032_);
v___x_1043_ = lean_alloc_closure((void*)(l_IO_withStderr___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__7___boxed), 5, 3);
lean_closure_set(v___x_1043_, 0, lean_box(0));
lean_closure_set(v___x_1043_, 1, v___x_1032_);
lean_closure_set(v___x_1043_, 2, v_x_1020_);
v___y_1034_ = v___x_1043_;
goto v___jp_1033_;
}
v___jp_1024_:
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___y_1026_);
lean_ctor_set(v___x_1027_, 1, v___y_1025_);
return v___x_1027_;
}
v___jp_1033_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v_data_1038_; uint8_t v___x_1039_; 
v___x_1035_ = lean_alloc_closure((void*)(l_IO_withStdout___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__4___boxed), 5, 3);
lean_closure_set(v___x_1035_, 0, lean_box(0));
lean_closure_set(v___x_1035_, 1, v___x_1032_);
lean_closure_set(v___x_1035_, 2, v___y_1034_);
v___x_1036_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v___x_1031_, v___x_1035_, v___y_1022_);
v___x_1037_ = lean_st_ref_get(v___x_1030_);
lean_dec(v___x_1030_);
v_data_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc_ref(v_data_1038_);
lean_dec(v___x_1037_);
v___x_1039_ = lean_string_validate_utf8(v_data_1038_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
lean_dec_ref(v_data_1038_);
v___x_1040_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4, &l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4_once, _init_l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___closed__4);
v___x_1041_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__6(v___x_1040_);
v___y_1025_ = v___x_1036_;
v___y_1026_ = v___x_1041_;
goto v___jp_1024_;
}
else
{
lean_object* v___x_1042_; 
v___x_1042_ = lean_string_from_utf8_unchecked(v_data_1038_);
v___y_1025_ = v___x_1036_;
v___y_1026_ = v___x_1042_;
goto v___jp_1024_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg___boxed(lean_object* v_x_1044_, lean_object* v_isolateStderr_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
uint8_t v_isolateStderr_boxed_1048_; lean_object* v_res_1049_; 
v_isolateStderr_boxed_1048_ = lean_unbox(v_isolateStderr_1045_);
v_res_1049_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1044_, v_isolateStderr_boxed_1048_, v___y_1046_);
lean_dec_ref(v___y_1046_);
return v_res_1049_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4(void){
_start:
{
uint8_t v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = 1;
v___x_1059_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__3));
v___x_1060_ = l_Lean_Name_toString(v___x_1059_, v___x_1058_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(lean_object* v_stx_1061_, lean_object* v_revCmds_1062_, lean_object* v_cmdState_1063_, lean_object* v_beginPos_1064_, lean_object* v_snap_1065_, lean_object* v_cancelTk_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_env_1069_; lean_object* v_scopes_1070_; lean_object* v_usedQuotCtxts_1071_; lean_object* v_nextMacroScope_1072_; lean_object* v_maxRecDepth_1073_; lean_object* v_ngen_1074_; lean_object* v_auxDeclNGen_1075_; lean_object* v_infoState_1076_; lean_object* v_prevLinterStates_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1160_; 
v_env_1069_ = lean_ctor_get(v_cmdState_1063_, 0);
v_scopes_1070_ = lean_ctor_get(v_cmdState_1063_, 2);
v_usedQuotCtxts_1071_ = lean_ctor_get(v_cmdState_1063_, 3);
v_nextMacroScope_1072_ = lean_ctor_get(v_cmdState_1063_, 4);
v_maxRecDepth_1073_ = lean_ctor_get(v_cmdState_1063_, 5);
v_ngen_1074_ = lean_ctor_get(v_cmdState_1063_, 6);
v_auxDeclNGen_1075_ = lean_ctor_get(v_cmdState_1063_, 7);
v_infoState_1076_ = lean_ctor_get(v_cmdState_1063_, 8);
v_prevLinterStates_1077_ = lean_ctor_get(v_cmdState_1063_, 11);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_cmdState_1063_);
if (v_isSharedCheck_1160_ == 0)
{
lean_object* v_unused_1161_; lean_object* v_unused_1162_; lean_object* v_unused_1163_; lean_object* v_unused_1164_; 
v_unused_1161_ = lean_ctor_get(v_cmdState_1063_, 12);
lean_dec(v_unused_1161_);
v_unused_1162_ = lean_ctor_get(v_cmdState_1063_, 10);
lean_dec(v_unused_1162_);
v_unused_1163_ = lean_ctor_get(v_cmdState_1063_, 9);
lean_dec(v_unused_1163_);
v_unused_1164_ = lean_ctor_get(v_cmdState_1063_, 1);
lean_dec(v_unused_1164_);
v___x_1079_ = v_cmdState_1063_;
v_isShared_1080_ = v_isSharedCheck_1160_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_prevLinterStates_1077_);
lean_inc(v_infoState_1076_);
lean_inc(v_auxDeclNGen_1075_);
lean_inc(v_ngen_1074_);
lean_inc(v_maxRecDepth_1073_);
lean_inc(v_nextMacroScope_1072_);
lean_inc(v_usedQuotCtxts_1071_);
lean_inc(v_scopes_1070_);
lean_inc(v_env_1069_);
lean_dec(v_cmdState_1063_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1160_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___f_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___f_1081_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed), 5, 2);
lean_closure_set(v___f_1081_, 0, v_stx_1061_);
lean_closure_set(v___f_1081_, 1, v_revCmds_1062_);
v___x_1082_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1083_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
v___x_1084_ = l_List_head_x21___redArg(v___x_1082_, v_scopes_1070_);
v___x_1085_ = l_Lean_MessageLog_empty;
v___x_1086_ = lean_unsigned_to_nat(0u);
v___x_1087_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_1088_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 12, v___x_1088_);
lean_ctor_set(v___x_1079_, 10, v___x_1088_);
lean_ctor_set(v___x_1079_, 9, v___x_1087_);
lean_ctor_set(v___x_1079_, 1, v___x_1085_);
v___x_1090_ = v___x_1079_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_env_1069_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v___x_1085_);
lean_ctor_set(v_reuseFailAlloc_1159_, 2, v_scopes_1070_);
lean_ctor_set(v_reuseFailAlloc_1159_, 3, v_usedQuotCtxts_1071_);
lean_ctor_set(v_reuseFailAlloc_1159_, 4, v_nextMacroScope_1072_);
lean_ctor_set(v_reuseFailAlloc_1159_, 5, v_maxRecDepth_1073_);
lean_ctor_set(v_reuseFailAlloc_1159_, 6, v_ngen_1074_);
lean_ctor_set(v_reuseFailAlloc_1159_, 7, v_auxDeclNGen_1075_);
lean_ctor_set(v_reuseFailAlloc_1159_, 8, v_infoState_1076_);
lean_ctor_set(v_reuseFailAlloc_1159_, 9, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1159_, 10, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1159_, 11, v_prevLinterStates_1077_);
lean_ctor_set(v_reuseFailAlloc_1159_, 12, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1091_; lean_object* v_toProcessingContext_1092_; lean_object* v_fileName_1093_; lean_object* v_fileMap_1094_; lean_object* v_opts_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; uint8_t v___x_1101_; uint8_t v___y_1103_; lean_object* v_env_1104_; lean_object* v_scopes_1105_; lean_object* v_usedQuotCtxts_1106_; lean_object* v_nextMacroScope_1107_; lean_object* v_maxRecDepth_1108_; lean_object* v_ngen_1109_; lean_object* v_auxDeclNGen_1110_; lean_object* v_infoState_1111_; lean_object* v_traceState_1112_; lean_object* v_snapshotTasks_1113_; lean_object* v_prevLinterStates_1114_; lean_object* v_codeQualityEntryTasks_1115_; lean_object* v_messages_1116_; lean_object* v___y_1125_; 
v___x_1091_ = lean_st_mk_ref(v___x_1090_);
v_toProcessingContext_1092_ = lean_ctor_get(v_a_1067_, 0);
v_fileName_1093_ = lean_ctor_get(v_toProcessingContext_1092_, 1);
v_fileMap_1094_ = lean_ctor_get(v_toProcessingContext_1092_, 2);
v_opts_1095_ = lean_ctor_get(v___x_1084_, 1);
lean_inc_ref(v_opts_1095_);
lean_dec(v___x_1084_);
v___x_1096_ = lean_box(0);
v___x_1097_ = lean_box(0);
v___x_1098_ = l_Lean_firstFrontendMacroScope;
v___x_1099_ = lean_box(0);
v___x_1100_ = l_Lean_internal_cmdlineSnapshots;
v___x_1101_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1095_, v___x_1100_);
if (v___x_1101_ == 0)
{
lean_object* v___x_1158_; 
lean_inc_ref(v_snap_1065_);
v___x_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1158_, 0, v_snap_1065_);
v___y_1125_ = v___x_1158_;
goto v___jp_1124_;
}
else
{
v___y_1125_ = v___x_1097_;
goto v___jp_1124_;
}
v___jp_1102_:
{
lean_object* v_new_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v_new_1117_ = lean_ctor_get(v_snap_1065_, 1);
lean_inc(v_new_1117_);
lean_dec_ref(v_snap_1065_);
v___x_1118_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1118_, 0, v_env_1104_);
lean_ctor_set(v___x_1118_, 1, v_messages_1116_);
lean_ctor_set(v___x_1118_, 2, v_scopes_1105_);
lean_ctor_set(v___x_1118_, 3, v_usedQuotCtxts_1106_);
lean_ctor_set(v___x_1118_, 4, v_nextMacroScope_1107_);
lean_ctor_set(v___x_1118_, 5, v_maxRecDepth_1108_);
lean_ctor_set(v___x_1118_, 6, v_ngen_1109_);
lean_ctor_set(v___x_1118_, 7, v_auxDeclNGen_1110_);
lean_ctor_set(v___x_1118_, 8, v_infoState_1111_);
lean_ctor_set(v___x_1118_, 9, v_traceState_1112_);
lean_ctor_set(v___x_1118_, 10, v_snapshotTasks_1113_);
lean_ctor_set(v___x_1118_, 11, v_prevLinterStates_1114_);
lean_ctor_set(v___x_1118_, 12, v_codeQualityEntryTasks_1115_);
v___x_1119_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4);
v___x_1120_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_1121_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
lean_ctor_set(v___x_1121_, 2, v___x_1097_);
lean_ctor_set(v___x_1121_, 3, v___x_1087_);
lean_ctor_set_uint8(v___x_1121_, sizeof(void*)*4, v___y_1103_);
v___x_1122_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(v___x_1083_, v___x_1121_);
v___x_1123_ = lean_io_promise_resolve(v___x_1122_, v_new_1117_);
lean_dec(v_new_1117_);
return v___x_1118_;
}
v___jp_1124_:
{
lean_object* v___x_1126_; uint8_t v___x_1127_; uint8_t v___x_1128_; lean_object* v___x_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; lean_object* v_fst_1134_; lean_object* v___x_1135_; lean_object* v_env_1136_; lean_object* v_messages_1137_; lean_object* v_scopes_1138_; lean_object* v_usedQuotCtxts_1139_; lean_object* v_nextMacroScope_1140_; lean_object* v_maxRecDepth_1141_; lean_object* v_ngen_1142_; lean_object* v_auxDeclNGen_1143_; lean_object* v_infoState_1144_; lean_object* v_traceState_1145_; lean_object* v_snapshotTasks_1146_; lean_object* v_prevLinterStates_1147_; lean_object* v_codeQualityEntryTasks_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1126_, 0, v_cancelTk_1066_);
v___x_1127_ = 0;
v___x_1128_ = 0;
lean_inc(v_beginPos_1064_);
lean_inc_ref(v_fileMap_1094_);
lean_inc_ref(v_fileName_1093_);
v___x_1129_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1129_, 0, v_fileName_1093_);
lean_ctor_set(v___x_1129_, 1, v_fileMap_1094_);
lean_ctor_set(v___x_1129_, 2, v___x_1086_);
lean_ctor_set(v___x_1129_, 3, v_beginPos_1064_);
lean_ctor_set(v___x_1129_, 4, v___x_1096_);
lean_ctor_set(v___x_1129_, 5, v___x_1097_);
lean_ctor_set(v___x_1129_, 6, v___x_1098_);
lean_ctor_set(v___x_1129_, 7, v___x_1099_);
lean_ctor_set(v___x_1129_, 8, v___y_1125_);
lean_ctor_set(v___x_1129_, 9, v___x_1126_);
lean_ctor_set_uint8(v___x_1129_, sizeof(void*)*10, v___x_1127_);
lean_ctor_set_uint8(v___x_1129_, sizeof(void*)*10 + 1, v___x_1128_);
lean_inc(v___x_1091_);
v___f_1130_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1130_, 0, v___f_1081_);
lean_closure_set(v___f_1130_, 1, v___x_1129_);
lean_closure_set(v___f_1130_, 2, v___x_1091_);
v___x_1131_ = l_Lean_Core_stderrAsMessages;
v___x_1132_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1095_, v___x_1131_);
lean_dec_ref(v_opts_1095_);
v___x_1133_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v___f_1130_, v___x_1132_, v_a_1067_);
v_fst_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_fst_1134_);
lean_dec_ref(v___x_1133_);
v___x_1135_ = lean_st_ref_get(v___x_1091_);
lean_dec(v___x_1091_);
v_env_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc_ref(v_env_1136_);
v_messages_1137_ = lean_ctor_get(v___x_1135_, 1);
lean_inc_ref(v_messages_1137_);
v_scopes_1138_ = lean_ctor_get(v___x_1135_, 2);
lean_inc(v_scopes_1138_);
v_usedQuotCtxts_1139_ = lean_ctor_get(v___x_1135_, 3);
lean_inc(v_usedQuotCtxts_1139_);
v_nextMacroScope_1140_ = lean_ctor_get(v___x_1135_, 4);
lean_inc(v_nextMacroScope_1140_);
v_maxRecDepth_1141_ = lean_ctor_get(v___x_1135_, 5);
lean_inc(v_maxRecDepth_1141_);
v_ngen_1142_ = lean_ctor_get(v___x_1135_, 6);
lean_inc_ref(v_ngen_1142_);
v_auxDeclNGen_1143_ = lean_ctor_get(v___x_1135_, 7);
lean_inc_ref(v_auxDeclNGen_1143_);
v_infoState_1144_ = lean_ctor_get(v___x_1135_, 8);
lean_inc_ref(v_infoState_1144_);
v_traceState_1145_ = lean_ctor_get(v___x_1135_, 9);
lean_inc_ref(v_traceState_1145_);
v_snapshotTasks_1146_ = lean_ctor_get(v___x_1135_, 10);
lean_inc_ref(v_snapshotTasks_1146_);
v_prevLinterStates_1147_ = lean_ctor_get(v___x_1135_, 11);
lean_inc(v_prevLinterStates_1147_);
v_codeQualityEntryTasks_1148_ = lean_ctor_get(v___x_1135_, 12);
lean_inc_ref(v_codeQualityEntryTasks_1148_);
lean_dec(v___x_1135_);
v___x_1149_ = lean_string_utf8_byte_size(v_fst_1134_);
v___x_1150_ = lean_nat_dec_eq(v___x_1149_, v___x_1086_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; uint8_t v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
lean_inc_ref(v_fileMap_1094_);
v___x_1151_ = l_Lean_FileMap_toPosition(v_fileMap_1094_, v_beginPos_1064_);
lean_dec(v_beginPos_1064_);
v___x_1152_ = 0;
v___x_1153_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1154_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_fst_1134_);
v___x_1155_ = l_Lean_MessageData_ofFormat(v___x_1154_);
lean_inc_ref(v_fileName_1093_);
v___x_1156_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1156_, 0, v_fileName_1093_);
lean_ctor_set(v___x_1156_, 1, v___x_1151_);
lean_ctor_set(v___x_1156_, 2, v___x_1097_);
lean_ctor_set(v___x_1156_, 3, v___x_1153_);
lean_ctor_set(v___x_1156_, 4, v___x_1155_);
lean_ctor_set_uint8(v___x_1156_, sizeof(void*)*5, v___x_1127_);
lean_ctor_set_uint8(v___x_1156_, sizeof(void*)*5 + 1, v___x_1152_);
lean_ctor_set_uint8(v___x_1156_, sizeof(void*)*5 + 2, v___x_1127_);
v___x_1157_ = l_Lean_MessageLog_add(v___x_1156_, v_messages_1137_);
v___y_1103_ = v___x_1127_;
v_env_1104_ = v_env_1136_;
v_scopes_1105_ = v_scopes_1138_;
v_usedQuotCtxts_1106_ = v_usedQuotCtxts_1139_;
v_nextMacroScope_1107_ = v_nextMacroScope_1140_;
v_maxRecDepth_1108_ = v_maxRecDepth_1141_;
v_ngen_1109_ = v_ngen_1142_;
v_auxDeclNGen_1110_ = v_auxDeclNGen_1143_;
v_infoState_1111_ = v_infoState_1144_;
v_traceState_1112_ = v_traceState_1145_;
v_snapshotTasks_1113_ = v_snapshotTasks_1146_;
v_prevLinterStates_1114_ = v_prevLinterStates_1147_;
v_codeQualityEntryTasks_1115_ = v_codeQualityEntryTasks_1148_;
v_messages_1116_ = v___x_1157_;
goto v___jp_1102_;
}
else
{
lean_dec(v_fst_1134_);
lean_dec(v_beginPos_1064_);
v___y_1103_ = v___x_1127_;
v_env_1104_ = v_env_1136_;
v_scopes_1105_ = v_scopes_1138_;
v_usedQuotCtxts_1106_ = v_usedQuotCtxts_1139_;
v_nextMacroScope_1107_ = v_nextMacroScope_1140_;
v_maxRecDepth_1108_ = v_maxRecDepth_1141_;
v_ngen_1109_ = v_ngen_1142_;
v_auxDeclNGen_1110_ = v_auxDeclNGen_1143_;
v_infoState_1111_ = v_infoState_1144_;
v_traceState_1112_ = v_traceState_1145_;
v_snapshotTasks_1113_ = v_snapshotTasks_1146_;
v_prevLinterStates_1114_ = v_prevLinterStates_1147_;
v_codeQualityEntryTasks_1115_ = v_codeQualityEntryTasks_1148_;
v_messages_1116_ = v_messages_1137_;
goto v___jp_1102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object* v_stx_1165_, lean_object* v_revCmds_1166_, lean_object* v_cmdState_1167_, lean_object* v_beginPos_1168_, lean_object* v_snap_1169_, lean_object* v_cancelTk_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_stx_1165_, v_revCmds_1166_, v_cmdState_1167_, v_beginPos_1168_, v_snap_1169_, v_cancelTk_1170_, v_a_1171_);
lean_dec_ref(v_a_1171_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object* v_00_u03b1_1174_, lean_object* v_h_1175_, lean_object* v_x_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_1175_, v_x_1176_, v___y_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1180_, lean_object* v_h_1181_, lean_object* v_x_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(v_00_u03b1_1180_, v_h_1181_, v_x_1182_, v___y_1183_);
lean_dec_ref(v___y_1183_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object* v_00_u03b1_1186_, lean_object* v_x_1187_, uint8_t v_isolateStderr_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1187_, v_isolateStderr_1188_, v___y_1189_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object* v_00_u03b1_1192_, lean_object* v_x_1193_, lean_object* v_isolateStderr_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
uint8_t v_isolateStderr_boxed_1197_; lean_object* v_res_1198_; 
v_isolateStderr_boxed_1197_ = lean_unbox(v_isolateStderr_1194_);
v_res_1198_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(v_00_u03b1_1192_, v_x_1193_, v_isolateStderr_boxed_1197_, v___y_1195_);
lean_dec_ref(v___y_1195_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(lean_object* v_msgData_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg(v_msgData_1199_, v___y_1201_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___boxed(lean_object* v_msgData_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11(v_msgData_1204_, v___y_1205_, v___y_1206_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object* v_a_1209_){
_start:
{
lean_object* v_toSnapshotTreeM_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v_toSnapshotTreeM_1210_ = lean_ctor_get(v_a_1209_, 1);
lean_inc_ref(v_toSnapshotTreeM_1210_);
lean_dec_ref(v_a_1209_);
v___x_1211_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1212_ = lean_apply_1(v_toSnapshotTreeM_1210_, v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object* v_a_1213_){
_start:
{
lean_object* v_toSnapshot_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v_toSnapshot_1214_ = lean_ctor_get(v_a_1213_, 0);
lean_inc_ref(v_toSnapshot_1214_);
lean_dec_ref(v_a_1213_);
v___x_1215_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1216_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_1214_, v___x_1215_);
v___x_1217_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1216_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object* v_a_1219_){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1220_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1221_ = l_Lean_Language_Snapshot_transform(v_a_1219_, v___x_1220_);
v___x_1222_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object* v_opts_1224_, lean_object* v_opt_1225_){
_start:
{
lean_object* v_name_1226_; lean_object* v_defValue_1227_; lean_object* v_map_1228_; lean_object* v___x_1229_; 
v_name_1226_ = lean_ctor_get(v_opt_1225_, 0);
v_defValue_1227_ = lean_ctor_get(v_opt_1225_, 1);
v_map_1228_ = lean_ctor_get(v_opts_1224_, 0);
v___x_1229_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1228_, v_name_1226_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_inc(v_defValue_1227_);
return v_defValue_1227_;
}
else
{
lean_object* v_val_1230_; 
v_val_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc(v_val_1230_);
lean_dec_ref_known(v___x_1229_, 1);
if (lean_obj_tag(v_val_1230_) == 3)
{
lean_object* v_v_1231_; 
v_v_1231_ = lean_ctor_get(v_val_1230_, 0);
lean_inc(v_v_1231_);
lean_dec_ref_known(v_val_1230_, 1);
return v_v_1231_;
}
else
{
lean_dec(v_val_1230_);
lean_inc(v_defValue_1227_);
return v_defValue_1227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object* v_opts_1232_, lean_object* v_opt_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1232_, v_opt_1233_);
lean_dec_ref(v_opt_1233_);
lean_dec_ref(v_opts_1232_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object* v_a_1235_){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1237_ = l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(v_a_1235_, v___x_1236_);
return v___x_1237_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1243_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1244_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1245_ = l_Lean_Name_append(v___x_1244_, v___x_1243_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object* v___x_1246_, lean_object* v___x_1247_, uint8_t v_val_1248_, lean_object* v_val_1249_, lean_object* v_val_1250_, lean_object* v___x_1251_, lean_object* v___x_1252_, uint8_t v___x_1253_, lean_object* v_a_1254_, lean_object* v_pos_1255_, lean_object* v___x_1256_, lean_object* v_infoSt_1257_){
_start:
{
lean_object* v___y_1260_; lean_object* v_msgLog_1261_; lean_object* v___y_1267_; lean_object* v_trees_1299_; lean_object* v_size_1300_; uint8_t v___x_1301_; 
v_trees_1299_ = lean_ctor_get(v_infoSt_1257_, 2);
v_size_1300_ = lean_ctor_get(v_trees_1299_, 2);
v___x_1301_ = lean_nat_dec_lt(v___x_1252_, v_size_1300_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; 
v___x_1302_ = l_outOfBounds___redArg(v___x_1256_);
v___y_1267_ = v___x_1302_;
goto v___jp_1266_;
}
else
{
lean_object* v___x_1303_; 
v___x_1303_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1256_, v_trees_1299_, v___x_1252_);
v___y_1267_ = v___x_1303_;
goto v___jp_1266_;
}
v___jp_1259_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1262_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_msgLog_1261_);
v___x_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___y_1260_);
v___x_1264_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1264_, 0, v___x_1246_);
lean_ctor_set(v___x_1264_, 1, v___x_1262_);
lean_ctor_set(v___x_1264_, 2, v___x_1263_);
lean_ctor_set(v___x_1264_, 3, v___x_1247_);
lean_ctor_set_uint8(v___x_1264_, sizeof(void*)*4, v_val_1248_);
v___x_1265_ = lean_io_promise_resolve(v___x_1264_, v_val_1249_);
return v___x_1265_;
}
v___jp_1266_:
{
lean_object* v_scopes_1268_; lean_object* v___x_1269_; lean_object* v_opts_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v_hasTrace_1274_; 
v_scopes_1268_ = lean_ctor_get(v_val_1250_, 2);
v___x_1269_ = l_List_head_x21___redArg(v___x_1251_, v_scopes_1268_);
v_opts_1270_ = lean_ctor_get(v___x_1269_, 1);
lean_inc_ref(v_opts_1270_);
lean_dec(v___x_1269_);
v___x_1271_ = l_Lean_MessageLog_empty;
v___x_1272_ = l_Lean_inheritedTraceOptions;
v___x_1273_ = lean_st_ref_get(v___x_1272_);
v_hasTrace_1274_ = lean_ctor_get_uint8(v_opts_1270_, sizeof(void*)*1);
if (v_hasTrace_1274_ == 0)
{
lean_dec(v___x_1273_);
lean_dec_ref(v_opts_1270_);
lean_dec(v___x_1252_);
v___y_1260_ = v___y_1267_;
v_msgLog_1261_ = v___x_1271_;
goto v___jp_1259_;
}
else
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; 
v___x_1275_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1276_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1277_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3);
v___x_1278_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1273_, v_opts_1270_, v___x_1277_);
lean_dec_ref(v_opts_1270_);
lean_dec(v___x_1273_);
if (v___x_1278_ == 0)
{
lean_dec(v___x_1252_);
v___y_1260_ = v___y_1267_;
v_msgLog_1261_ = v___x_1271_;
goto v___jp_1259_;
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = lean_box(0);
lean_inc_ref(v___y_1267_);
v___x_1280_ = l_Lean_Elab_InfoTree_format(v___y_1267_, v___x_1279_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; double v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v_toProcessingContext_1285_; lean_object* v_fileName_1286_; lean_object* v_fileMap_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1280_, 1);
v___x_1282_ = lean_float_of_nat(v___x_1252_);
v___x_1283_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_1284_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1284_, 0, v___x_1275_);
lean_ctor_set(v___x_1284_, 1, v___x_1279_);
lean_ctor_set(v___x_1284_, 2, v___x_1283_);
lean_ctor_set_float(v___x_1284_, sizeof(void*)*3, v___x_1282_);
lean_ctor_set_float(v___x_1284_, sizeof(void*)*3 + 8, v___x_1282_);
lean_ctor_set_uint8(v___x_1284_, sizeof(void*)*3 + 16, v___x_1253_);
v_toProcessingContext_1285_ = lean_ctor_get(v_a_1254_, 0);
v_fileName_1286_ = lean_ctor_get(v_toProcessingContext_1285_, 1);
v_fileMap_1287_ = lean_ctor_get(v_toProcessingContext_1285_, 2);
v___x_1288_ = l_Lean_MessageData_nil;
v___x_1289_ = l_Lean_MessageData_ofFormat(v_a_1281_);
v___x_1290_ = lean_unsigned_to_nat(1u);
v___x_1291_ = lean_mk_empty_array_with_capacity(v___x_1290_);
v___x_1292_ = lean_array_push(v___x_1291_, v___x_1289_);
v___x_1293_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1284_);
lean_ctor_set(v___x_1293_, 1, v___x_1288_);
lean_ctor_set(v___x_1293_, 2, v___x_1292_);
v___x_1294_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1276_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
lean_inc_ref(v_fileMap_1287_);
v___x_1295_ = l_Lean_FileMap_toPosition(v_fileMap_1287_, v_pos_1255_);
v___x_1296_ = 0;
lean_inc_ref(v_fileName_1286_);
v___x_1297_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1297_, 0, v_fileName_1286_);
lean_ctor_set(v___x_1297_, 1, v___x_1295_);
lean_ctor_set(v___x_1297_, 2, v___x_1279_);
lean_ctor_set(v___x_1297_, 3, v___x_1283_);
lean_ctor_set(v___x_1297_, 4, v___x_1294_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*5, v_val_1248_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*5 + 1, v___x_1296_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*5 + 2, v_val_1248_);
v___x_1298_ = l_Lean_MessageLog_add(v___x_1297_, v___x_1271_);
v___y_1260_ = v___y_1267_;
v_msgLog_1261_ = v___x_1298_;
goto v___jp_1259_;
}
else
{
lean_dec_ref_known(v___x_1280_, 1);
lean_dec(v___x_1252_);
v___y_1260_ = v___y_1267_;
v_msgLog_1261_ = v___x_1271_;
goto v___jp_1259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object* v___x_1304_, lean_object* v___x_1305_, lean_object* v_val_1306_, lean_object* v_val_1307_, lean_object* v_val_1308_, lean_object* v___x_1309_, lean_object* v___x_1310_, lean_object* v___x_1311_, lean_object* v_a_1312_, lean_object* v_pos_1313_, lean_object* v___x_1314_, lean_object* v_infoSt_1315_, lean_object* v___y_1316_){
_start:
{
uint8_t v_val_24322__boxed_1317_; uint8_t v___x_24327__boxed_1318_; lean_object* v_res_1319_; 
v_val_24322__boxed_1317_ = lean_unbox(v_val_1306_);
v___x_24327__boxed_1318_ = lean_unbox(v___x_1311_);
v_res_1319_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(v___x_1304_, v___x_1305_, v_val_24322__boxed_1317_, v_val_1307_, v_val_1308_, v___x_1309_, v___x_1310_, v___x_24327__boxed_1318_, v_a_1312_, v_pos_1313_, v___x_1314_, v_infoSt_1315_);
lean_dec_ref(v_infoSt_1315_);
lean_dec_ref(v___x_1314_);
lean_dec(v_pos_1313_);
lean_dec_ref(v_a_1312_);
lean_dec_ref(v___x_1309_);
lean_dec_ref(v_val_1308_);
lean_dec(v_val_1307_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object* v___x_1320_, lean_object* v___x_1321_, lean_object* v___x_1322_, uint8_t v_val_1323_, lean_object* v_as_1324_, size_t v_sz_1325_, size_t v_i_1326_, lean_object* v_b_1327_){
_start:
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_usize_dec_lt(v_i_1326_, v_sz_1325_);
if (v___x_1329_ == 0)
{
lean_dec_ref(v___x_1322_);
lean_dec_ref(v___x_1320_);
return v_b_1327_;
}
else
{
lean_object* v_snd_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1348_; 
v_snd_1330_ = lean_ctor_get(v_b_1327_, 1);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_b_1327_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; 
v_unused_1349_ = lean_ctor_get(v_b_1327_, 0);
lean_dec(v_unused_1349_);
v___x_1332_ = v_b_1327_;
v_isShared_1333_ = v_isSharedCheck_1348_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_snd_1330_);
lean_dec(v_b_1327_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1348_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v_a_1334_; lean_object* v_msg_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
v_a_1334_ = lean_array_uget_borrowed(v_as_1324_, v_i_1326_);
v_msg_1335_ = lean_ctor_get(v_a_1334_, 1);
v___x_1336_ = lean_box(0);
lean_inc_ref(v___x_1320_);
v___x_1337_ = l_Lean_FileMap_toPosition(v___x_1320_, v___x_1321_);
v___x_1338_ = 0;
v___x_1339_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1335_);
lean_inc_ref(v___x_1322_);
v___x_1340_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1340_, 0, v___x_1322_);
lean_ctor_set(v___x_1340_, 1, v___x_1337_);
lean_ctor_set(v___x_1340_, 2, v___x_1336_);
lean_ctor_set(v___x_1340_, 3, v___x_1339_);
lean_ctor_set(v___x_1340_, 4, v_msg_1335_);
lean_ctor_set_uint8(v___x_1340_, sizeof(void*)*5, v_val_1323_);
lean_ctor_set_uint8(v___x_1340_, sizeof(void*)*5 + 1, v___x_1338_);
lean_ctor_set_uint8(v___x_1340_, sizeof(void*)*5 + 2, v_val_1323_);
v___x_1341_ = l_Lean_MessageLog_add(v___x_1340_, v_snd_1330_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 1, v___x_1341_);
lean_ctor_set(v___x_1332_, 0, v___x_1336_);
v___x_1343_ = v___x_1332_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1336_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v___x_1341_);
v___x_1343_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
size_t v___x_1344_; size_t v___x_1345_; 
v___x_1344_ = ((size_t)1ULL);
v___x_1345_ = lean_usize_add(v_i_1326_, v___x_1344_);
v_i_1326_ = v___x_1345_;
v_b_1327_ = v___x_1343_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object* v___x_1350_, lean_object* v___x_1351_, lean_object* v___x_1352_, lean_object* v_val_1353_, lean_object* v_as_1354_, lean_object* v_sz_1355_, lean_object* v_i_1356_, lean_object* v_b_1357_, lean_object* v___y_1358_){
_start:
{
uint8_t v_val_24435__boxed_1359_; size_t v_sz_boxed_1360_; size_t v_i_boxed_1361_; lean_object* v_res_1362_; 
v_val_24435__boxed_1359_ = lean_unbox(v_val_1353_);
v_sz_boxed_1360_ = lean_unbox_usize(v_sz_1355_);
lean_dec(v_sz_1355_);
v_i_boxed_1361_ = lean_unbox_usize(v_i_1356_);
lean_dec(v_i_1356_);
v_res_1362_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1350_, v___x_1351_, v___x_1352_, v_val_24435__boxed_1359_, v_as_1354_, v_sz_boxed_1360_, v_i_boxed_1361_, v_b_1357_);
lean_dec_ref(v_as_1354_);
lean_dec(v___x_1351_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object* v___x_1363_, lean_object* v___x_1364_, lean_object* v___x_1365_, uint8_t v_val_1366_, lean_object* v_as_1367_, size_t v_sz_1368_, size_t v_i_1369_, lean_object* v_b_1370_){
_start:
{
uint8_t v___x_1372_; 
v___x_1372_ = lean_usize_dec_lt(v_i_1369_, v_sz_1368_);
if (v___x_1372_ == 0)
{
lean_dec_ref(v___x_1365_);
lean_dec_ref(v___x_1363_);
return v_b_1370_;
}
else
{
lean_object* v_snd_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1391_; 
v_snd_1373_ = lean_ctor_get(v_b_1370_, 1);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_b_1370_);
if (v_isSharedCheck_1391_ == 0)
{
lean_object* v_unused_1392_; 
v_unused_1392_ = lean_ctor_get(v_b_1370_, 0);
lean_dec(v_unused_1392_);
v___x_1375_ = v_b_1370_;
v_isShared_1376_ = v_isSharedCheck_1391_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_snd_1373_);
lean_dec(v_b_1370_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1391_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v_a_1377_; lean_object* v_msg_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v_a_1377_ = lean_array_uget_borrowed(v_as_1367_, v_i_1369_);
v_msg_1378_ = lean_ctor_get(v_a_1377_, 1);
v___x_1379_ = lean_box(0);
lean_inc_ref(v___x_1363_);
v___x_1380_ = l_Lean_FileMap_toPosition(v___x_1363_, v___x_1364_);
v___x_1381_ = 0;
v___x_1382_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1378_);
lean_inc_ref(v___x_1365_);
v___x_1383_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1383_, 0, v___x_1365_);
lean_ctor_set(v___x_1383_, 1, v___x_1380_);
lean_ctor_set(v___x_1383_, 2, v___x_1379_);
lean_ctor_set(v___x_1383_, 3, v___x_1382_);
lean_ctor_set(v___x_1383_, 4, v_msg_1378_);
lean_ctor_set_uint8(v___x_1383_, sizeof(void*)*5, v_val_1366_);
lean_ctor_set_uint8(v___x_1383_, sizeof(void*)*5 + 1, v___x_1381_);
lean_ctor_set_uint8(v___x_1383_, sizeof(void*)*5 + 2, v_val_1366_);
v___x_1384_ = l_Lean_MessageLog_add(v___x_1383_, v_snd_1373_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___x_1384_);
lean_ctor_set(v___x_1375_, 0, v___x_1379_);
v___x_1386_ = v___x_1375_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
size_t v___x_1387_; size_t v___x_1388_; lean_object* v___x_1389_; 
v___x_1387_ = ((size_t)1ULL);
v___x_1388_ = lean_usize_add(v_i_1369_, v___x_1387_);
v___x_1389_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1363_, v___x_1364_, v___x_1365_, v_val_1366_, v_as_1367_, v_sz_1368_, v___x_1388_, v___x_1386_);
return v___x_1389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object* v___x_1393_, lean_object* v___x_1394_, lean_object* v___x_1395_, lean_object* v_val_1396_, lean_object* v_as_1397_, lean_object* v_sz_1398_, lean_object* v_i_1399_, lean_object* v_b_1400_, lean_object* v___y_1401_){
_start:
{
uint8_t v_val_24487__boxed_1402_; size_t v_sz_boxed_1403_; size_t v_i_boxed_1404_; lean_object* v_res_1405_; 
v_val_24487__boxed_1402_ = lean_unbox(v_val_1396_);
v_sz_boxed_1403_ = lean_unbox_usize(v_sz_1398_);
lean_dec(v_sz_1398_);
v_i_boxed_1404_ = lean_unbox_usize(v_i_1399_);
lean_dec(v_i_1399_);
v_res_1405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1393_, v___x_1394_, v___x_1395_, v_val_24487__boxed_1402_, v_as_1397_, v_sz_boxed_1403_, v_i_boxed_1404_, v_b_1400_);
lean_dec_ref(v_as_1397_);
lean_dec(v___x_1394_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object* v_init_1406_, lean_object* v___x_1407_, lean_object* v___x_1408_, lean_object* v___x_1409_, uint8_t v_val_1410_, lean_object* v_n_1411_, lean_object* v_b_1412_){
_start:
{
if (lean_obj_tag(v_n_1411_) == 0)
{
lean_object* v_cs_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; size_t v_sz_1417_; size_t v___x_1418_; lean_object* v___x_1419_; lean_object* v_fst_1420_; 
v_cs_1414_ = lean_ctor_get(v_n_1411_, 0);
v___x_1415_ = lean_box(0);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
lean_ctor_set(v___x_1416_, 1, v_b_1412_);
v_sz_1417_ = lean_array_size(v_cs_1414_);
v___x_1418_ = ((size_t)0ULL);
v___x_1419_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1406_, v___x_1407_, v___x_1408_, v___x_1409_, v_val_1410_, v_cs_1414_, v_sz_1417_, v___x_1418_, v___x_1416_);
v_fst_1420_ = lean_ctor_get(v___x_1419_, 0);
if (lean_obj_tag(v_fst_1420_) == 0)
{
lean_object* v_snd_1421_; lean_object* v___x_1422_; 
v_snd_1421_ = lean_ctor_get(v___x_1419_, 1);
lean_inc(v_snd_1421_);
lean_dec_ref(v___x_1419_);
v___x_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1422_, 0, v_snd_1421_);
return v___x_1422_;
}
else
{
lean_object* v_val_1423_; 
lean_inc_ref(v_fst_1420_);
lean_dec_ref(v___x_1419_);
v_val_1423_ = lean_ctor_get(v_fst_1420_, 0);
lean_inc(v_val_1423_);
lean_dec_ref_known(v_fst_1420_, 1);
return v_val_1423_;
}
}
else
{
lean_object* v_vs_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; size_t v_sz_1427_; size_t v___x_1428_; lean_object* v___x_1429_; lean_object* v_fst_1430_; 
v_vs_1424_ = lean_ctor_get(v_n_1411_, 0);
v___x_1425_ = lean_box(0);
v___x_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
lean_ctor_set(v___x_1426_, 1, v_b_1412_);
v_sz_1427_ = lean_array_size(v_vs_1424_);
v___x_1428_ = ((size_t)0ULL);
v___x_1429_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1407_, v___x_1408_, v___x_1409_, v_val_1410_, v_vs_1424_, v_sz_1427_, v___x_1428_, v___x_1426_);
v_fst_1430_ = lean_ctor_get(v___x_1429_, 0);
if (lean_obj_tag(v_fst_1430_) == 0)
{
lean_object* v_snd_1431_; lean_object* v___x_1432_; 
v_snd_1431_ = lean_ctor_get(v___x_1429_, 1);
lean_inc(v_snd_1431_);
lean_dec_ref(v___x_1429_);
v___x_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_snd_1431_);
return v___x_1432_;
}
else
{
lean_object* v_val_1433_; 
lean_inc_ref(v_fst_1430_);
lean_dec_ref(v___x_1429_);
v_val_1433_ = lean_ctor_get(v_fst_1430_, 0);
lean_inc(v_val_1433_);
lean_dec_ref_known(v_fst_1430_, 1);
return v_val_1433_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object* v_init_1434_, lean_object* v___x_1435_, lean_object* v___x_1436_, lean_object* v___x_1437_, uint8_t v_val_1438_, lean_object* v_as_1439_, size_t v_sz_1440_, size_t v_i_1441_, lean_object* v_b_1442_){
_start:
{
uint8_t v___x_1444_; 
v___x_1444_ = lean_usize_dec_lt(v_i_1441_, v_sz_1440_);
if (v___x_1444_ == 0)
{
lean_dec_ref(v___x_1437_);
lean_dec_ref(v___x_1435_);
return v_b_1442_;
}
else
{
lean_object* v_snd_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1463_; 
v_snd_1445_ = lean_ctor_get(v_b_1442_, 1);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_b_1442_);
if (v_isSharedCheck_1463_ == 0)
{
lean_object* v_unused_1464_; 
v_unused_1464_ = lean_ctor_get(v_b_1442_, 0);
lean_dec(v_unused_1464_);
v___x_1447_ = v_b_1442_;
v_isShared_1448_ = v_isSharedCheck_1463_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_snd_1445_);
lean_dec(v_b_1442_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1463_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v_a_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_box(0);
v_a_1450_ = lean_array_uget_borrowed(v_as_1439_, v_i_1441_);
lean_inc(v_snd_1445_);
lean_inc_ref(v___x_1437_);
lean_inc_ref(v___x_1435_);
v___x_1451_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1434_, v___x_1435_, v___x_1436_, v___x_1437_, v_val_1438_, v_a_1450_, v_snd_1445_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
lean_dec_ref(v___x_1437_);
lean_dec_ref(v___x_1435_);
v___x_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 0, v___x_1452_);
v___x_1454_ = v___x_1447_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_snd_1445_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; 
lean_dec(v_snd_1445_);
v_a_1456_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1451_, 1);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 1, v_a_1456_);
lean_ctor_set(v___x_1447_, 0, v___x_1449_);
v___x_1458_ = v___x_1447_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1462_, 1, v_a_1456_);
v___x_1458_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
size_t v___x_1459_; size_t v___x_1460_; 
v___x_1459_ = ((size_t)1ULL);
v___x_1460_ = lean_usize_add(v_i_1441_, v___x_1459_);
v_i_1441_ = v___x_1460_;
v_b_1442_ = v___x_1458_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object* v_init_1465_, lean_object* v___x_1466_, lean_object* v___x_1467_, lean_object* v___x_1468_, lean_object* v_val_1469_, lean_object* v_as_1470_, lean_object* v_sz_1471_, lean_object* v_i_1472_, lean_object* v_b_1473_, lean_object* v___y_1474_){
_start:
{
uint8_t v_val_24538__boxed_1475_; size_t v_sz_boxed_1476_; size_t v_i_boxed_1477_; lean_object* v_res_1478_; 
v_val_24538__boxed_1475_ = lean_unbox(v_val_1469_);
v_sz_boxed_1476_ = lean_unbox_usize(v_sz_1471_);
lean_dec(v_sz_1471_);
v_i_boxed_1477_ = lean_unbox_usize(v_i_1472_);
lean_dec(v_i_1472_);
v_res_1478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1465_, v___x_1466_, v___x_1467_, v___x_1468_, v_val_24538__boxed_1475_, v_as_1470_, v_sz_boxed_1476_, v_i_boxed_1477_, v_b_1473_);
lean_dec_ref(v_as_1470_);
lean_dec(v___x_1467_);
lean_dec_ref(v_init_1465_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object* v_init_1479_, lean_object* v___x_1480_, lean_object* v___x_1481_, lean_object* v___x_1482_, lean_object* v_val_1483_, lean_object* v_n_1484_, lean_object* v_b_1485_, lean_object* v___y_1486_){
_start:
{
uint8_t v_val_24554__boxed_1487_; lean_object* v_res_1488_; 
v_val_24554__boxed_1487_ = lean_unbox(v_val_1483_);
v_res_1488_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1479_, v___x_1480_, v___x_1481_, v___x_1482_, v_val_24554__boxed_1487_, v_n_1484_, v_b_1485_);
lean_dec_ref(v_n_1484_);
lean_dec(v___x_1481_);
lean_dec_ref(v_init_1479_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object* v___x_1489_, lean_object* v___x_1490_, lean_object* v___x_1491_, uint8_t v_val_1492_, lean_object* v_as_1493_, size_t v_sz_1494_, size_t v_i_1495_, lean_object* v_b_1496_){
_start:
{
uint8_t v___x_1498_; 
v___x_1498_ = lean_usize_dec_lt(v_i_1495_, v_sz_1494_);
if (v___x_1498_ == 0)
{
lean_dec_ref(v___x_1491_);
lean_dec_ref(v___x_1489_);
return v_b_1496_;
}
else
{
lean_object* v_snd_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1517_; 
v_snd_1499_ = lean_ctor_get(v_b_1496_, 1);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_b_1496_);
if (v_isSharedCheck_1517_ == 0)
{
lean_object* v_unused_1518_; 
v_unused_1518_ = lean_ctor_get(v_b_1496_, 0);
lean_dec(v_unused_1518_);
v___x_1501_ = v_b_1496_;
v_isShared_1502_ = v_isSharedCheck_1517_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_snd_1499_);
lean_dec(v_b_1496_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1517_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v_a_1503_; lean_object* v_msg_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1512_; 
v_a_1503_ = lean_array_uget_borrowed(v_as_1493_, v_i_1495_);
v_msg_1504_ = lean_ctor_get(v_a_1503_, 1);
v___x_1505_ = lean_box(0);
lean_inc_ref(v___x_1489_);
v___x_1506_ = l_Lean_FileMap_toPosition(v___x_1489_, v___x_1490_);
v___x_1507_ = 0;
v___x_1508_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1504_);
lean_inc_ref(v___x_1491_);
v___x_1509_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1509_, 0, v___x_1491_);
lean_ctor_set(v___x_1509_, 1, v___x_1506_);
lean_ctor_set(v___x_1509_, 2, v___x_1505_);
lean_ctor_set(v___x_1509_, 3, v___x_1508_);
lean_ctor_set(v___x_1509_, 4, v_msg_1504_);
lean_ctor_set_uint8(v___x_1509_, sizeof(void*)*5, v_val_1492_);
lean_ctor_set_uint8(v___x_1509_, sizeof(void*)*5 + 1, v___x_1507_);
lean_ctor_set_uint8(v___x_1509_, sizeof(void*)*5 + 2, v_val_1492_);
v___x_1510_ = l_Lean_MessageLog_add(v___x_1509_, v_snd_1499_);
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 1, v___x_1510_);
lean_ctor_set(v___x_1501_, 0, v___x_1505_);
v___x_1512_ = v___x_1501_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
size_t v___x_1513_; size_t v___x_1514_; 
v___x_1513_ = ((size_t)1ULL);
v___x_1514_ = lean_usize_add(v_i_1495_, v___x_1513_);
v_i_1495_ = v___x_1514_;
v_b_1496_ = v___x_1512_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object* v___x_1519_, lean_object* v___x_1520_, lean_object* v___x_1521_, lean_object* v_val_1522_, lean_object* v_as_1523_, lean_object* v_sz_1524_, lean_object* v_i_1525_, lean_object* v_b_1526_, lean_object* v___y_1527_){
_start:
{
uint8_t v_val_24636__boxed_1528_; size_t v_sz_boxed_1529_; size_t v_i_boxed_1530_; lean_object* v_res_1531_; 
v_val_24636__boxed_1528_ = lean_unbox(v_val_1522_);
v_sz_boxed_1529_ = lean_unbox_usize(v_sz_1524_);
lean_dec(v_sz_1524_);
v_i_boxed_1530_ = lean_unbox_usize(v_i_1525_);
lean_dec(v_i_1525_);
v_res_1531_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1519_, v___x_1520_, v___x_1521_, v_val_24636__boxed_1528_, v_as_1523_, v_sz_boxed_1529_, v_i_boxed_1530_, v_b_1526_);
lean_dec_ref(v_as_1523_);
lean_dec(v___x_1520_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object* v___x_1532_, lean_object* v___x_1533_, lean_object* v___x_1534_, uint8_t v_val_1535_, lean_object* v_as_1536_, size_t v_sz_1537_, size_t v_i_1538_, lean_object* v_b_1539_){
_start:
{
uint8_t v___x_1541_; 
v___x_1541_ = lean_usize_dec_lt(v_i_1538_, v_sz_1537_);
if (v___x_1541_ == 0)
{
lean_dec_ref(v___x_1534_);
lean_dec_ref(v___x_1532_);
return v_b_1539_;
}
else
{
lean_object* v_snd_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1560_; 
v_snd_1542_ = lean_ctor_get(v_b_1539_, 1);
v_isSharedCheck_1560_ = !lean_is_exclusive(v_b_1539_);
if (v_isSharedCheck_1560_ == 0)
{
lean_object* v_unused_1561_; 
v_unused_1561_ = lean_ctor_get(v_b_1539_, 0);
lean_dec(v_unused_1561_);
v___x_1544_ = v_b_1539_;
v_isShared_1545_ = v_isSharedCheck_1560_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_snd_1542_);
lean_dec(v_b_1539_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1560_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v_a_1546_; lean_object* v_msg_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; uint8_t v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
v_a_1546_ = lean_array_uget_borrowed(v_as_1536_, v_i_1538_);
v_msg_1547_ = lean_ctor_get(v_a_1546_, 1);
v___x_1548_ = lean_box(0);
lean_inc_ref(v___x_1532_);
v___x_1549_ = l_Lean_FileMap_toPosition(v___x_1532_, v___x_1533_);
v___x_1550_ = 0;
v___x_1551_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1547_);
lean_inc_ref(v___x_1534_);
v___x_1552_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1552_, 0, v___x_1534_);
lean_ctor_set(v___x_1552_, 1, v___x_1549_);
lean_ctor_set(v___x_1552_, 2, v___x_1548_);
lean_ctor_set(v___x_1552_, 3, v___x_1551_);
lean_ctor_set(v___x_1552_, 4, v_msg_1547_);
lean_ctor_set_uint8(v___x_1552_, sizeof(void*)*5, v_val_1535_);
lean_ctor_set_uint8(v___x_1552_, sizeof(void*)*5 + 1, v___x_1550_);
lean_ctor_set_uint8(v___x_1552_, sizeof(void*)*5 + 2, v_val_1535_);
v___x_1553_ = l_Lean_MessageLog_add(v___x_1552_, v_snd_1542_);
if (v_isShared_1545_ == 0)
{
lean_ctor_set(v___x_1544_, 1, v___x_1553_);
lean_ctor_set(v___x_1544_, 0, v___x_1548_);
v___x_1555_ = v___x_1544_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1548_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
size_t v___x_1556_; size_t v___x_1557_; lean_object* v___x_1558_; 
v___x_1556_ = ((size_t)1ULL);
v___x_1557_ = lean_usize_add(v_i_1538_, v___x_1556_);
v___x_1558_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1532_, v___x_1533_, v___x_1534_, v_val_1535_, v_as_1536_, v_sz_1537_, v___x_1557_, v___x_1555_);
return v___x_1558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object* v___x_1562_, lean_object* v___x_1563_, lean_object* v___x_1564_, lean_object* v_val_1565_, lean_object* v_as_1566_, lean_object* v_sz_1567_, lean_object* v_i_1568_, lean_object* v_b_1569_, lean_object* v___y_1570_){
_start:
{
uint8_t v_val_24688__boxed_1571_; size_t v_sz_boxed_1572_; size_t v_i_boxed_1573_; lean_object* v_res_1574_; 
v_val_24688__boxed_1571_ = lean_unbox(v_val_1565_);
v_sz_boxed_1572_ = lean_unbox_usize(v_sz_1567_);
lean_dec(v_sz_1567_);
v_i_boxed_1573_ = lean_unbox_usize(v_i_1568_);
lean_dec(v_i_1568_);
v_res_1574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1562_, v___x_1563_, v___x_1564_, v_val_24688__boxed_1571_, v_as_1566_, v_sz_boxed_1572_, v_i_boxed_1573_, v_b_1569_);
lean_dec_ref(v_as_1566_);
lean_dec(v___x_1563_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object* v___x_1575_, lean_object* v___x_1576_, lean_object* v___x_1577_, uint8_t v_val_1578_, lean_object* v_t_1579_, lean_object* v_init_1580_){
_start:
{
lean_object* v_root_1582_; lean_object* v_tail_1583_; lean_object* v___x_1584_; 
v_root_1582_ = lean_ctor_get(v_t_1579_, 0);
v_tail_1583_ = lean_ctor_get(v_t_1579_, 1);
lean_inc_ref(v___x_1577_);
lean_inc_ref(v___x_1575_);
lean_inc_ref(v_init_1580_);
v___x_1584_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1580_, v___x_1575_, v___x_1576_, v___x_1577_, v_val_1578_, v_root_1582_, v_init_1580_);
lean_dec_ref(v_init_1580_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; 
lean_dec_ref(v___x_1577_);
lean_dec_ref(v___x_1575_);
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1584_, 1);
return v_a_1585_;
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; size_t v_sz_1589_; size_t v___x_1590_; lean_object* v___x_1591_; lean_object* v_fst_1592_; 
v_a_1586_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1584_, 1);
v___x_1587_ = lean_box(0);
v___x_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
lean_ctor_set(v___x_1588_, 1, v_a_1586_);
v_sz_1589_ = lean_array_size(v_tail_1583_);
v___x_1590_ = ((size_t)0ULL);
v___x_1591_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1575_, v___x_1576_, v___x_1577_, v_val_1578_, v_tail_1583_, v_sz_1589_, v___x_1590_, v___x_1588_);
v_fst_1592_ = lean_ctor_get(v___x_1591_, 0);
if (lean_obj_tag(v_fst_1592_) == 0)
{
lean_object* v_snd_1593_; 
v_snd_1593_ = lean_ctor_get(v___x_1591_, 1);
lean_inc(v_snd_1593_);
lean_dec_ref(v___x_1591_);
return v_snd_1593_;
}
else
{
lean_object* v_val_1594_; 
lean_inc_ref(v_fst_1592_);
lean_dec_ref(v___x_1591_);
v_val_1594_ = lean_ctor_get(v_fst_1592_, 0);
lean_inc(v_val_1594_);
lean_dec_ref_known(v_fst_1592_, 1);
return v_val_1594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object* v___x_1595_, lean_object* v___x_1596_, lean_object* v___x_1597_, lean_object* v_val_1598_, lean_object* v_t_1599_, lean_object* v_init_1600_, lean_object* v___y_1601_){
_start:
{
uint8_t v_val_24739__boxed_1602_; lean_object* v_res_1603_; 
v_val_24739__boxed_1602_ = lean_unbox(v_val_1598_);
v_res_1603_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v___x_1595_, v___x_1596_, v___x_1597_, v_val_24739__boxed_1602_, v_t_1599_, v_init_1600_);
lean_dec_ref(v_t_1599_);
lean_dec(v___x_1596_);
return v_res_1603_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1604_ = lean_unsigned_to_nat(1u);
v___x_1605_ = l_Lean_firstFrontendMacroScope;
v___x_1606_ = lean_nat_add(v___x_1605_, v___x_1604_);
return v___x_1606_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
return v___x_1614_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1615_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object* v_a_1617_, lean_object* v_opts_1618_, lean_object* v___x_1619_, lean_object* v___x_1620_, lean_object* v___x_1621_, size_t v___x_1622_, uint8_t v___x_1623_, lean_object* v_env_1624_, lean_object* v___x_1625_, lean_object* v___x_1626_, lean_object* v_pos_1627_, uint8_t v_val_1628_, lean_object* v___x_1629_, lean_object* v___x_1630_, lean_object* v___x_1631_, lean_object* v___x_1632_, lean_object* v___x_1633_, uint8_t v___x_1634_, lean_object* v_x_1635_){
_start:
{
lean_object* v_toProcessingContext_1637_; lean_object* v_fileName_1638_; lean_object* v_fileMap_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; uint16_t v___x_1644_; uint8_t v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v_fileName_1664_; lean_object* v_fileMap_1665_; lean_object* v_currNamespace_1666_; lean_object* v_openDecls_1667_; lean_object* v_initHeartbeats_1668_; lean_object* v_maxHeartbeats_1669_; lean_object* v_quotContext_1670_; lean_object* v_currMacroScope_1671_; lean_object* v_cancelTk_x3f_1672_; lean_object* v_inheritedTraceOptions_1673_; lean_object* v_currRecDepth_1674_; lean_object* v_ref_1675_; uint8_t v_suppressElabErrors_1676_; uint8_t v_checkDeprecated_1677_; uint8_t v_isRecordingDeps_1678_; lean_object* v___x_1695_; lean_object* v_nextMacroScope_1697_; lean_object* v_ngen_1698_; lean_object* v_auxDeclNGen_1699_; lean_object* v_traceState_1700_; lean_object* v_recordedDeps_1701_; lean_object* v_messages_1702_; lean_object* v_infoState_1703_; lean_object* v_snapshotTasks_1704_; lean_object* v___y_1705_; lean_object* v___x_1708_; uint8_t v___y_1710_; lean_object* v_env_1727_; uint8_t v___x_1728_; uint16_t v___x_1729_; uint16_t v___x_1730_; uint16_t v___x_1731_; uint8_t v___x_1732_; 
v_toProcessingContext_1637_ = lean_ctor_get(v_a_1617_, 0);
v_fileName_1638_ = lean_ctor_get(v_toProcessingContext_1637_, 1);
v_fileMap_1639_ = lean_ctor_get(v_toProcessingContext_1637_, 2);
v___x_1640_ = lean_box(0);
v___x_1641_ = l_Lean_Core_getMaxHeartbeats(v_opts_1618_);
v___x_1642_ = l_Lean_firstFrontendMacroScope;
v___x_1643_ = lean_box(0);
v___x_1644_ = l_Lean_OptionFlags_ofOptions(v_opts_1618_);
v___x_1645_ = 0;
v___x_1646_ = lean_unsigned_to_nat(1u);
v___x_1647_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_1648_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
lean_inc(v___x_1619_);
v___x_1649_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1619_);
lean_ctor_set(v___x_1649_, 1, v___x_1646_);
lean_ctor_set(v___x_1649_, 2, v___x_1640_);
v___x_1650_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1651_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5);
v___x_1652_ = lean_mk_empty_array_with_capacity(v___x_1620_);
v___x_1653_ = l_Lean_Options_empty;
lean_inc_n(v___x_1620_, 5);
lean_inc_ref_n(v___x_1652_, 5);
v___x_1654_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
lean_ctor_set(v___x_1654_, 2, v___x_1652_);
lean_ctor_set(v___x_1654_, 3, v___x_1620_);
lean_ctor_set(v___x_1654_, 4, v___x_1620_);
lean_ctor_set(v___x_1654_, 5, v___x_1620_);
lean_ctor_set(v___x_1654_, 6, v___x_1652_);
lean_ctor_set(v___x_1654_, 7, v___x_1652_);
v___x_1655_ = lean_mk_empty_array_with_capacity(v___x_1621_);
lean_inc_ref(v___x_1655_);
v___x_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
v___x_1657_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
lean_ctor_set(v___x_1657_, 1, v___x_1655_);
lean_ctor_set(v___x_1657_, 2, v___x_1620_);
lean_ctor_set(v___x_1657_, 3, v___x_1620_);
lean_ctor_set_usize(v___x_1657_, 4, v___x_1622_);
v___x_1658_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_1657_, 2);
v___x_1659_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
lean_ctor_set(v___x_1659_, 1, v___x_1657_);
lean_ctor_set(v___x_1659_, 2, v___x_1658_);
v___x_1660_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1660_, 0, v___x_1650_);
lean_ctor_set(v___x_1660_, 1, v___x_1650_);
lean_ctor_set(v___x_1660_, 2, v___x_1657_);
lean_ctor_set_uint8(v___x_1660_, sizeof(void*)*3, v___x_1623_);
lean_inc_ref(v___x_1625_);
v___x_1661_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1661_, 0, v_env_1624_);
lean_ctor_set(v___x_1661_, 1, v___x_1647_);
lean_ctor_set(v___x_1661_, 2, v___x_1648_);
lean_ctor_set(v___x_1661_, 3, v___x_1649_);
lean_ctor_set(v___x_1661_, 4, v___x_1625_);
lean_ctor_set(v___x_1661_, 5, v___x_1651_);
lean_ctor_set(v___x_1661_, 6, v___x_1654_);
lean_ctor_set(v___x_1661_, 7, v___x_1659_);
lean_ctor_set(v___x_1661_, 8, v___x_1660_);
lean_ctor_set(v___x_1661_, 9, v___x_1652_);
v___x_1662_ = lean_st_mk_ref(v___x_1661_);
v___x_1695_ = lean_st_ref_get(v___x_1632_);
v___x_1708_ = lean_st_ref_get(v___x_1662_);
v_env_1727_ = lean_ctor_get(v___x_1708_, 0);
lean_inc_ref(v_env_1727_);
lean_dec(v___x_1708_);
v___x_1728_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1727_);
lean_dec_ref(v_env_1727_);
v___x_1729_ = 512;
v___x_1730_ = lean_uint16_land(v___x_1644_, v___x_1729_);
v___x_1731_ = 0;
v___x_1732_ = lean_uint16_dec_eq(v___x_1730_, v___x_1731_);
if (v___x_1732_ == 0)
{
if (v___x_1728_ == 0)
{
v___y_1710_ = v___x_1728_;
goto v___jp_1709_;
}
else
{
lean_inc(v___x_1620_);
lean_inc(v___x_1619_);
lean_inc_ref(v_fileMap_1639_);
lean_inc_ref(v_fileName_1638_);
v_fileName_1664_ = v_fileName_1638_;
v_fileMap_1665_ = v_fileMap_1639_;
v_currNamespace_1666_ = v___x_1619_;
v_openDecls_1667_ = v___x_1640_;
v_initHeartbeats_1668_ = v___x_1620_;
v_maxHeartbeats_1669_ = v___x_1641_;
v_quotContext_1670_ = v___x_1619_;
v_currMacroScope_1671_ = v___x_1642_;
v_cancelTk_x3f_1672_ = v___x_1633_;
v_inheritedTraceOptions_1673_ = v___x_1695_;
v_currRecDepth_1674_ = v___x_1620_;
v_ref_1675_ = v___x_1643_;
v_suppressElabErrors_1676_ = v_val_1628_;
v_checkDeprecated_1677_ = v___x_1645_;
v_isRecordingDeps_1678_ = v_val_1628_;
goto v___jp_1663_;
}
}
else
{
if (v___x_1728_ == 0)
{
lean_inc(v___x_1620_);
lean_inc(v___x_1619_);
lean_inc_ref(v_fileMap_1639_);
lean_inc_ref(v_fileName_1638_);
v_fileName_1664_ = v_fileName_1638_;
v_fileMap_1665_ = v_fileMap_1639_;
v_currNamespace_1666_ = v___x_1619_;
v_openDecls_1667_ = v___x_1640_;
v_initHeartbeats_1668_ = v___x_1620_;
v_maxHeartbeats_1669_ = v___x_1641_;
v_quotContext_1670_ = v___x_1619_;
v_currMacroScope_1671_ = v___x_1642_;
v_cancelTk_x3f_1672_ = v___x_1633_;
v_inheritedTraceOptions_1673_ = v___x_1695_;
v_currRecDepth_1674_ = v___x_1620_;
v_ref_1675_ = v___x_1643_;
v_suppressElabErrors_1676_ = v_val_1628_;
v_checkDeprecated_1677_ = v___x_1645_;
v_isRecordingDeps_1678_ = v_val_1628_;
goto v___jp_1663_;
}
else
{
v___y_1710_ = v_val_1628_;
goto v___jp_1709_;
}
}
v___jp_1663_:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1679_ = l_Lean_maxRecDepth;
v___x_1680_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1618_, v___x_1679_);
lean_inc(v_currMacroScope_1671_);
lean_inc(v_openDecls_1667_);
v___x_1681_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1681_, 0, v_fileName_1664_);
lean_ctor_set(v___x_1681_, 1, v_fileMap_1665_);
lean_ctor_set(v___x_1681_, 2, v_opts_1618_);
lean_ctor_set(v___x_1681_, 3, v___x_1680_);
lean_ctor_set(v___x_1681_, 4, v_currNamespace_1666_);
lean_ctor_set(v___x_1681_, 5, v_openDecls_1667_);
lean_ctor_set(v___x_1681_, 6, v_initHeartbeats_1668_);
lean_ctor_set(v___x_1681_, 7, v_maxHeartbeats_1669_);
lean_ctor_set(v___x_1681_, 8, v_quotContext_1670_);
lean_ctor_set(v___x_1681_, 9, v_currMacroScope_1671_);
lean_ctor_set(v___x_1681_, 10, v_cancelTk_x3f_1672_);
lean_ctor_set(v___x_1681_, 11, v_inheritedTraceOptions_1673_);
lean_inc(v_ref_1675_);
v___x_1682_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
lean_ctor_set(v___x_1682_, 1, v_currRecDepth_1674_);
lean_ctor_set(v___x_1682_, 2, v_ref_1675_);
lean_ctor_set_uint16(v___x_1682_, sizeof(void*)*3, v___x_1644_);
lean_ctor_set_uint8(v___x_1682_, sizeof(void*)*3 + 2, v_suppressElabErrors_1676_);
lean_ctor_set_uint8(v___x_1682_, sizeof(void*)*3 + 3, v_checkDeprecated_1677_);
lean_ctor_set_uint8(v___x_1682_, sizeof(void*)*3 + 4, v_isRecordingDeps_1678_);
v___x_1683_ = l_Lean_Language_SnapshotTree_trace(v___x_1626_, v___x_1682_, v___x_1662_);
lean_dec_ref_known(v___x_1682_, 3);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v___x_1684_; lean_object* v_traceState_1685_; lean_object* v_traces_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
lean_dec_ref_known(v___x_1683_, 1);
lean_dec_ref(v___x_1631_);
v___x_1684_ = lean_st_ref_get(v___x_1662_);
lean_dec(v___x_1662_);
v_traceState_1685_ = lean_ctor_get(v___x_1684_, 4);
lean_inc_ref(v_traceState_1685_);
lean_dec(v___x_1684_);
v_traces_1686_ = lean_ctor_get(v_traceState_1685_, 0);
lean_inc_ref(v_traces_1686_);
lean_dec_ref(v_traceState_1685_);
v___x_1687_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_fileName_1638_);
lean_inc_ref(v_fileMap_1639_);
v___x_1688_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v_fileMap_1639_, v_pos_1627_, v_fileName_1638_, v_val_1628_, v_traces_1686_, v___x_1687_);
lean_dec_ref(v_traces_1686_);
v___x_1689_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v___x_1688_);
v___x_1690_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1690_, 0, v___x_1629_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
lean_ctor_set(v___x_1690_, 2, v___x_1630_);
lean_ctor_set(v___x_1690_, 3, v___x_1625_);
lean_ctor_set_uint8(v___x_1690_, sizeof(void*)*4, v_val_1628_);
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
lean_ctor_set(v___x_1691_, 1, v___x_1652_);
v___x_1692_ = lean_task_pure(v___x_1691_);
return v___x_1692_;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
lean_dec_ref_known(v___x_1683_, 1);
lean_dec(v___x_1662_);
lean_dec(v___x_1630_);
lean_dec_ref(v___x_1629_);
lean_dec_ref(v___x_1625_);
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1631_);
lean_ctor_set(v___x_1693_, 1, v___x_1652_);
v___x_1694_ = lean_task_pure(v___x_1693_);
return v___x_1694_;
}
}
v___jp_1696_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1706_, 0, v___y_1705_);
lean_ctor_set(v___x_1706_, 1, v_nextMacroScope_1697_);
lean_ctor_set(v___x_1706_, 2, v_ngen_1698_);
lean_ctor_set(v___x_1706_, 3, v_auxDeclNGen_1699_);
lean_ctor_set(v___x_1706_, 4, v_traceState_1700_);
lean_ctor_set(v___x_1706_, 5, v___x_1651_);
lean_ctor_set(v___x_1706_, 6, v_recordedDeps_1701_);
lean_ctor_set(v___x_1706_, 7, v_messages_1702_);
lean_ctor_set(v___x_1706_, 8, v_infoState_1703_);
lean_ctor_set(v___x_1706_, 9, v_snapshotTasks_1704_);
v___x_1707_ = lean_st_ref_put(v___x_1662_, v___x_1706_);
lean_inc(v___x_1620_);
lean_inc(v___x_1619_);
lean_inc_ref(v_fileMap_1639_);
lean_inc_ref(v_fileName_1638_);
v_fileName_1664_ = v_fileName_1638_;
v_fileMap_1665_ = v_fileMap_1639_;
v_currNamespace_1666_ = v___x_1619_;
v_openDecls_1667_ = v___x_1640_;
v_initHeartbeats_1668_ = v___x_1620_;
v_maxHeartbeats_1669_ = v___x_1641_;
v_quotContext_1670_ = v___x_1619_;
v_currMacroScope_1671_ = v___x_1642_;
v_cancelTk_x3f_1672_ = v___x_1633_;
v_inheritedTraceOptions_1673_ = v___x_1695_;
v_currRecDepth_1674_ = v___x_1620_;
v_ref_1675_ = v___x_1643_;
v_suppressElabErrors_1676_ = v_val_1628_;
v_checkDeprecated_1677_ = v___x_1645_;
v_isRecordingDeps_1678_ = v_val_1628_;
goto v___jp_1663_;
}
v___jp_1709_:
{
lean_object* v___x_1711_; lean_object* v_env_1712_; lean_object* v_nextMacroScope_1713_; lean_object* v_ngen_1714_; lean_object* v_auxDeclNGen_1715_; lean_object* v_traceState_1716_; lean_object* v_recordedDeps_1717_; lean_object* v_messages_1718_; lean_object* v_infoState_1719_; lean_object* v_snapshotTasks_1720_; uint16_t v___x_1721_; uint16_t v___x_1722_; uint16_t v___x_1723_; uint8_t v___x_1724_; 
v___x_1711_ = lean_st_ref_take(v___x_1662_);
v_env_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc_ref(v_env_1712_);
v_nextMacroScope_1713_ = lean_ctor_get(v___x_1711_, 1);
lean_inc(v_nextMacroScope_1713_);
v_ngen_1714_ = lean_ctor_get(v___x_1711_, 2);
lean_inc_ref(v_ngen_1714_);
v_auxDeclNGen_1715_ = lean_ctor_get(v___x_1711_, 3);
lean_inc_ref(v_auxDeclNGen_1715_);
v_traceState_1716_ = lean_ctor_get(v___x_1711_, 4);
lean_inc_ref(v_traceState_1716_);
v_recordedDeps_1717_ = lean_ctor_get(v___x_1711_, 6);
lean_inc_ref(v_recordedDeps_1717_);
v_messages_1718_ = lean_ctor_get(v___x_1711_, 7);
lean_inc_ref(v_messages_1718_);
v_infoState_1719_ = lean_ctor_get(v___x_1711_, 8);
lean_inc_ref(v_infoState_1719_);
v_snapshotTasks_1720_ = lean_ctor_get(v___x_1711_, 9);
lean_inc_ref(v_snapshotTasks_1720_);
lean_dec(v___x_1711_);
v___x_1721_ = 512;
v___x_1722_ = lean_uint16_land(v___x_1644_, v___x_1721_);
v___x_1723_ = 0;
v___x_1724_ = lean_uint16_dec_eq(v___x_1722_, v___x_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = l_Lean_Kernel_enableDiag(v_env_1712_, v___x_1634_);
v_nextMacroScope_1697_ = v_nextMacroScope_1713_;
v_ngen_1698_ = v_ngen_1714_;
v_auxDeclNGen_1699_ = v_auxDeclNGen_1715_;
v_traceState_1700_ = v_traceState_1716_;
v_recordedDeps_1701_ = v_recordedDeps_1717_;
v_messages_1702_ = v_messages_1718_;
v_infoState_1703_ = v_infoState_1719_;
v_snapshotTasks_1704_ = v_snapshotTasks_1720_;
v___y_1705_ = v___x_1725_;
goto v___jp_1696_;
}
else
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lean_Kernel_enableDiag(v_env_1712_, v___y_1710_);
v_nextMacroScope_1697_ = v_nextMacroScope_1713_;
v_ngen_1698_ = v_ngen_1714_;
v_auxDeclNGen_1699_ = v_auxDeclNGen_1715_;
v_traceState_1700_ = v_traceState_1716_;
v_recordedDeps_1701_ = v_recordedDeps_1717_;
v_messages_1702_ = v_messages_1718_;
v_infoState_1703_ = v_infoState_1719_;
v_snapshotTasks_1704_ = v_snapshotTasks_1720_;
v___y_1705_ = v___x_1726_;
goto v___jp_1696_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object** _args){
lean_object* v_a_1733_ = _args[0];
lean_object* v_opts_1734_ = _args[1];
lean_object* v___x_1735_ = _args[2];
lean_object* v___x_1736_ = _args[3];
lean_object* v___x_1737_ = _args[4];
lean_object* v___x_1738_ = _args[5];
lean_object* v___x_1739_ = _args[6];
lean_object* v_env_1740_ = _args[7];
lean_object* v___x_1741_ = _args[8];
lean_object* v___x_1742_ = _args[9];
lean_object* v_pos_1743_ = _args[10];
lean_object* v_val_1744_ = _args[11];
lean_object* v___x_1745_ = _args[12];
lean_object* v___x_1746_ = _args[13];
lean_object* v___x_1747_ = _args[14];
lean_object* v___x_1748_ = _args[15];
lean_object* v___x_1749_ = _args[16];
lean_object* v___x_1750_ = _args[17];
lean_object* v_x_1751_ = _args[18];
lean_object* v___y_1752_ = _args[19];
_start:
{
size_t v___x_24799__boxed_1753_; uint8_t v___x_24800__boxed_1754_; uint8_t v_val_24803__boxed_1755_; uint8_t v___x_24809__boxed_1756_; lean_object* v_res_1757_; 
v___x_24799__boxed_1753_ = lean_unbox_usize(v___x_1738_);
lean_dec(v___x_1738_);
v___x_24800__boxed_1754_ = lean_unbox(v___x_1739_);
v_val_24803__boxed_1755_ = lean_unbox(v_val_1744_);
v___x_24809__boxed_1756_ = lean_unbox(v___x_1750_);
v_res_1757_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(v_a_1733_, v_opts_1734_, v___x_1735_, v___x_1736_, v___x_1737_, v___x_24799__boxed_1753_, v___x_24800__boxed_1754_, v_env_1740_, v___x_1741_, v___x_1742_, v_pos_1743_, v_val_24803__boxed_1755_, v___x_1745_, v___x_1746_, v___x_1747_, v___x_1748_, v___x_1749_, v___x_24809__boxed_1756_, v_x_1751_);
lean_dec(v___x_1748_);
lean_dec(v_pos_1743_);
lean_dec(v___x_1737_);
lean_dec_ref(v_a_1733_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object* v_a_1758_, lean_object* v___x_1759_, lean_object* v_parserState_1760_, lean_object* v_x_1761_){
_start:
{
lean_object* v_toProcessingContext_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v_toProcessingContext_1762_ = lean_ctor_get(v_a_1758_, 0);
v___x_1763_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_toProcessingContext_1762_);
v___x_1764_ = l_Lean_Parser_parseCommand(v_toProcessingContext_1762_, v___x_1759_, v_parserState_1760_, v___x_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object* v_a_1765_, lean_object* v___x_1766_, lean_object* v_parserState_1767_, lean_object* v_x_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(v_a_1765_, v___x_1766_, v_parserState_1767_, v_x_1768_);
lean_dec_ref(v_a_1765_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6(lean_object* v___f_1770_){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_io_promise_new();
v___x_1773_ = lean_apply_2(v___f_1770_, v___x_1772_, lean_box(0));
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6___boxed(lean_object* v___f_1774_, lean_object* v___y_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6(v___f_1774_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object* v_as_1778_, size_t v_i_1779_, size_t v_stop_1780_, lean_object* v_b_1781_){
_start:
{
uint8_t v___x_1783_; 
v___x_1783_ = lean_usize_dec_eq(v_i_1779_, v_stop_1780_);
if (v___x_1783_ == 0)
{
lean_object* v___f_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; size_t v___x_1787_; size_t v___x_1788_; 
v___f_1784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0));
v___x_1785_ = lean_array_uget_borrowed(v_as_1778_, v_i_1779_);
lean_inc(v___x_1785_);
v___x_1786_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___f_1784_, v___x_1785_);
v___x_1787_ = ((size_t)1ULL);
v___x_1788_ = lean_usize_add(v_i_1779_, v___x_1787_);
v_i_1779_ = v___x_1788_;
v_b_1781_ = v___x_1786_;
goto _start;
}
else
{
return v_b_1781_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object* v_as_1790_, lean_object* v_i_1791_, lean_object* v_stop_1792_, lean_object* v_b_1793_, lean_object* v___y_1794_){
_start:
{
size_t v_i_boxed_1795_; size_t v_stop_boxed_1796_; lean_object* v_res_1797_; 
v_i_boxed_1795_ = lean_unbox_usize(v_i_1791_);
lean_dec(v_i_1791_);
v_stop_boxed_1796_ = lean_unbox_usize(v_stop_1792_);
lean_dec(v_stop_1792_);
v_res_1797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_1790_, v_i_boxed_1795_, v_stop_boxed_1796_, v_b_1793_);
lean_dec_ref(v_as_1790_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object* v_oldResult_1798_, lean_object* v_stx_1799_, lean_object* v_revCmds_1800_, lean_object* v_newParserState_1801_, lean_object* v_val_1802_, lean_object* v_sync_1803_, lean_object* v_val_1804_, lean_object* v_a_1805_, lean_object* v_oldNext_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v_sync_boxed_1808_; lean_object* v_res_1809_; 
v_sync_boxed_1808_ = lean_unbox(v_sync_1803_);
v_res_1809_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(v_oldResult_1798_, v_stx_1799_, v_revCmds_1800_, v_newParserState_1801_, v_val_1802_, v_sync_boxed_1808_, v_val_1804_, v_a_1805_, v_oldNext_1806_);
lean_dec_ref(v_a_1805_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object* v_val_1810_, lean_object* v_stx_1811_, lean_object* v_revCmds_1812_, lean_object* v_newParserState_1813_, lean_object* v_val_1814_, uint8_t v_sync_1815_, lean_object* v_val_1816_, lean_object* v_a_1817_, lean_object* v_oldResult_1818_){
_start:
{
lean_object* v_task_1820_; lean_object* v___x_1821_; lean_object* v___f_1822_; lean_object* v___x_1823_; uint8_t v___x_1824_; lean_object* v___x_1825_; 
v_task_1820_ = lean_ctor_get(v_val_1810_, 3);
lean_inc_ref(v_task_1820_);
lean_dec_ref(v_val_1810_);
v___x_1821_ = lean_box(v_sync_1815_);
lean_inc_ref(v_a_1817_);
v___f_1822_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed), 10, 8);
lean_closure_set(v___f_1822_, 0, v_oldResult_1818_);
lean_closure_set(v___f_1822_, 1, v_stx_1811_);
lean_closure_set(v___f_1822_, 2, v_revCmds_1812_);
lean_closure_set(v___f_1822_, 3, v_newParserState_1813_);
lean_closure_set(v___f_1822_, 4, v_val_1814_);
lean_closure_set(v___f_1822_, 5, v___x_1821_);
lean_closure_set(v___f_1822_, 6, v_val_1816_);
lean_closure_set(v___f_1822_, 7, v_a_1817_);
v___x_1823_ = lean_unsigned_to_nat(0u);
v___x_1824_ = 1;
v___x_1825_ = l_BaseIO_chainTask___redArg(v_task_1820_, v___f_1822_, v___x_1823_, v___x_1824_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object* v_val_1826_, lean_object* v_stx_1827_, lean_object* v_revCmds_1828_, lean_object* v_newParserState_1829_, lean_object* v_val_1830_, lean_object* v_sync_1831_, lean_object* v_val_1832_, lean_object* v_a_1833_, lean_object* v_oldResult_1834_, lean_object* v___y_1835_){
_start:
{
uint8_t v_sync_boxed_1836_; lean_object* v_res_1837_; 
v_sync_boxed_1836_ = lean_unbox(v_sync_1831_);
v_res_1837_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(v_val_1826_, v_stx_1827_, v_revCmds_1828_, v_newParserState_1829_, v_val_1830_, v_sync_boxed_1836_, v_val_1832_, v_a_1833_, v_oldResult_1834_);
lean_dec_ref(v_a_1833_);
return v_res_1837_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = l_Lean_Language_instInhabitedDynamicSnapshot;
v___x_1843_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_1842_);
return v___x_1843_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6(void){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = l_Lean_Language_instInhabitedSnapshotTree_default;
v___x_1847_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_1846_);
return v___x_1847_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2(void){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1853_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1));
v___x_1854_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1855_ = l_Lean_Name_append(v___x_1854_, v___x_1853_);
return v___x_1855_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1856_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1856_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object* v_fst_1858_, lean_object* v_revCmds_1859_, lean_object* v_fst_1860_, uint8_t v_val_1861_, lean_object* v_a_1862_, lean_object* v_snd_1863_, lean_object* v___x_1864_, uint8_t v___x_1865_, lean_object* v___x_1866_, lean_object* v___f_1867_, lean_object* v___f_1868_, lean_object* v___f_1869_, lean_object* v_pos_1870_, lean_object* v_cmdState_1871_, lean_object* v___x_1872_, lean_object* v_opts_1873_, lean_object* v_prom_1874_, lean_object* v_old_x3f_1875_, lean_object* v_parseCancelTk_1876_, lean_object* v_elabPromise_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v_snapshotTasks_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v_traceTask_1891_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1915_; lean_object* v___y_1916_; lean_object* v___y_1917_; size_t v___y_1918_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1937_; lean_object* v_env_1938_; lean_object* v_messages_1939_; lean_object* v_scopes_1940_; lean_object* v_infoState_1941_; lean_object* v_traceState_1942_; lean_object* v_snapshotTasks_1943_; lean_object* v_codeQualityEntryTasks_1944_; lean_object* v___y_1945_; lean_object* v_reportedCmdState_1946_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_1983_; size_t v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_1997_; lean_object* v___y_1998_; lean_object* v___y_1999_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v_reportedCmdState_2005_; lean_object* v___x_2013_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2020_; size_t v___y_2021_; lean_object* v___y_2022_; lean_object* v___y_2023_; lean_object* v___y_2024_; lean_object* v___y_2025_; lean_object* v___y_2026_; lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v___y_2124_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v_fst_2143_; lean_object* v_snd_2144_; uint8_t v___x_2156_; 
v___x_1879_ = lean_io_promise_new();
v___x_1880_ = lean_io_promise_new();
v___x_1881_ = lean_io_promise_new();
v___x_2013_ = l_Lean_internal_cmdlineSnapshots;
v___x_2156_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1873_, v___x_2013_);
if (v___x_2156_ == 0)
{
lean_inc_ref(v_fst_1860_);
lean_inc(v_fst_1858_);
v_fst_2143_ = v_fst_1858_;
v_snd_2144_ = v_fst_1860_;
goto v___jp_2142_;
}
else
{
uint8_t v___x_2157_; 
lean_inc(v_fst_1858_);
v___x_2157_ = l_Lean_Parser_isTerminalCommand(v_fst_1858_);
if (v___x_2157_ == 0)
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = lean_box(0);
v___x_2159_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_fst_2143_ = v___x_2158_;
v_snd_2144_ = v___x_2159_;
goto v___jp_2142_;
}
else
{
lean_inc_ref(v_fst_1860_);
lean_inc(v_fst_1858_);
v_fst_2143_ = v_fst_1858_;
v_snd_2144_ = v_fst_1860_;
goto v___jp_2142_;
}
}
v___jp_1882_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1892_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1892_, 0, v___y_1885_);
lean_ctor_set(v___x_1892_, 1, v___y_1883_);
lean_ctor_set(v___x_1892_, 2, v___y_1888_);
lean_ctor_set(v___x_1892_, 3, v_traceTask_1891_);
v___x_1893_ = lean_array_push(v_snapshotTasks_1887_, v___x_1892_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___y_1890_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = lean_io_promise_resolve(v___x_1894_, v___x_1881_);
lean_dec(v___x_1881_);
if (lean_obj_tag(v___y_1889_) == 1)
{
lean_object* v_val_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v_val_1896_ = lean_ctor_get(v___y_1889_, 0);
lean_inc(v_val_1896_);
lean_dec_ref_known(v___y_1889_, 1);
v___x_1897_ = lean_box(0);
v___x_1898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1898_, 0, v_fst_1858_);
lean_ctor_set(v___x_1898_, 1, v_revCmds_1859_);
v___x_1899_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_1897_, v_fst_1860_, v___y_1886_, v_val_1896_, v_val_1861_, v___y_1884_, v___x_1898_, v_a_1862_);
return v___x_1899_;
}
else
{
lean_object* v___x_1900_; 
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1886_);
lean_dec_ref(v___y_1884_);
lean_dec_ref(v_fst_1860_);
lean_dec(v_revCmds_1859_);
lean_dec(v_fst_1858_);
v___x_1900_ = lean_box(0);
return v___x_1900_;
}
}
v___jp_1901_:
{
lean_object* v_snapshotTasks_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v_snapshotTasks_1910_ = lean_ctor_get(v___y_1906_, 10);
lean_inc_ref(v_snapshotTasks_1910_);
v___x_1911_ = lean_mk_empty_array_with_capacity(v___y_1905_);
lean_dec(v___y_1905_);
lean_inc_ref(v___y_1909_);
v___x_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___y_1909_);
lean_ctor_set(v___x_1912_, 1, v___x_1911_);
v___x_1913_ = lean_task_pure(v___x_1912_);
v___y_1883_ = v___y_1902_;
v___y_1884_ = v___y_1903_;
v___y_1885_ = v___y_1904_;
v___y_1886_ = v___y_1906_;
v_snapshotTasks_1887_ = v_snapshotTasks_1910_;
v___y_1888_ = v___y_1907_;
v___y_1889_ = v___y_1908_;
v___y_1890_ = v___y_1909_;
v_traceTask_1891_ = v___x_1913_;
goto v___jp_1882_;
}
v___jp_1914_:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v_opts_1956_; uint8_t v_hasTrace_1957_; 
v___x_1947_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_1939_);
v___x_1948_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1948_, 0, v___y_1928_);
lean_ctor_set(v___x_1948_, 1, v___x_1947_);
lean_ctor_set(v___x_1948_, 2, v___y_1933_);
lean_ctor_set(v___x_1948_, 3, v_traceState_1942_);
lean_ctor_set_uint8(v___x_1948_, sizeof(void*)*4, v_val_1861_);
v___x_1949_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
lean_ctor_set(v___x_1949_, 1, v_reportedCmdState_1946_);
lean_ctor_set(v___x_1949_, 2, v_codeQualityEntryTasks_1944_);
v___x_1950_ = lean_io_promise_resolve(v___x_1949_, v___x_1879_);
lean_dec(v___x_1879_);
v___x_1951_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_1941_);
lean_inc(v___y_1935_);
v___x_1952_ = l_BaseIO_chainTask___redArg(v___x_1951_, v___y_1925_, v___y_1935_, v___x_1865_);
v___x_1953_ = l_Lean_inheritedTraceOptions;
v___x_1954_ = lean_st_ref_get(v___x_1953_);
v___x_1955_ = l_List_head_x21___redArg(v___x_1866_, v_scopes_1940_);
lean_dec(v_scopes_1940_);
lean_dec_ref(v___x_1866_);
v_opts_1956_ = lean_ctor_get(v___x_1955_, 1);
lean_inc_ref(v_opts_1956_);
lean_dec(v___x_1955_);
v_hasTrace_1957_ = lean_ctor_get_uint8(v_opts_1956_, sizeof(void*)*1);
if (v_hasTrace_1957_ == 0)
{
lean_dec_ref(v_opts_1956_);
lean_dec(v___x_1954_);
lean_dec_ref(v_snapshotTasks_1943_);
lean_dec_ref(v_env_1938_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec(v_pos_1870_);
lean_dec_ref(v___f_1869_);
lean_dec_ref(v___f_1868_);
lean_dec_ref(v___f_1867_);
lean_dec(v___x_1864_);
v___y_1902_ = v___y_1926_;
v___y_1903_ = v___y_1934_;
v___y_1904_ = v___y_1936_;
v___y_1905_ = v___y_1935_;
v___y_1906_ = v___y_1937_;
v___y_1907_ = v___y_1945_;
v___y_1908_ = v___y_1929_;
v___y_1909_ = v___y_1930_;
goto v___jp_1901_;
}
else
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_1959_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1954_, v_opts_1956_, v___x_1958_);
lean_dec(v___x_1954_);
if (v___x_1959_ == 0)
{
lean_dec_ref(v_opts_1956_);
lean_dec_ref(v_snapshotTasks_1943_);
lean_dec_ref(v_env_1938_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec(v_pos_1870_);
lean_dec_ref(v___f_1869_);
lean_dec_ref(v___f_1868_);
lean_dec_ref(v___f_1867_);
lean_dec(v___x_1864_);
v___y_1902_ = v___y_1926_;
v___y_1903_ = v___y_1934_;
v___y_1904_ = v___y_1936_;
v___y_1905_ = v___y_1935_;
v___y_1906_ = v___y_1937_;
v___y_1907_ = v___y_1945_;
v___y_1908_ = v___y_1929_;
v___y_1909_ = v___y_1930_;
goto v___jp_1901_;
}
else
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___f_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
lean_inc_n(v___y_1935_, 3);
v___x_1960_ = lean_task_map(v___f_1867_, v___y_1931_, v___y_1935_, v___x_1865_);
lean_inc_n(v___y_1945_, 3);
lean_inc_n(v___y_1927_, 2);
lean_inc_n(v___y_1932_, 2);
v___x_1961_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1961_, 0, v___y_1932_);
lean_ctor_set(v___x_1961_, 1, v___y_1927_);
lean_ctor_set(v___x_1961_, 2, v___y_1945_);
lean_ctor_set(v___x_1961_, 3, v___x_1960_);
v___x_1962_ = lean_task_map(v___f_1868_, v___y_1923_, v___y_1935_, v___x_1865_);
v___x_1963_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1963_, 0, v___y_1932_);
lean_ctor_set(v___x_1963_, 1, v___y_1927_);
lean_ctor_set(v___x_1963_, 2, v___y_1945_);
lean_ctor_set(v___x_1963_, 3, v___x_1962_);
v___x_1964_ = lean_task_map(v___f_1869_, v___y_1924_, v___y_1935_, v___x_1865_);
v___x_1965_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1965_, 0, v___y_1932_);
lean_ctor_set(v___x_1965_, 1, v___y_1927_);
lean_ctor_set(v___x_1965_, 2, v___y_1945_);
lean_ctor_set(v___x_1965_, 3, v___x_1964_);
v___x_1966_ = lean_unsigned_to_nat(3u);
v___x_1967_ = lean_mk_empty_array_with_capacity(v___x_1966_);
v___x_1968_ = lean_array_push(v___x_1967_, v___x_1961_);
v___x_1969_ = lean_array_push(v___x_1968_, v___x_1963_);
v___x_1970_ = lean_array_push(v___x_1969_, v___x_1965_);
v___x_1971_ = l_Array_append___redArg(v___x_1970_, v_snapshotTasks_1943_);
lean_inc_ref(v___y_1930_);
v___x_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___y_1930_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
v___x_1973_ = lean_box_usize(v___y_1918_);
v___x_1974_ = lean_box(v___x_1865_);
v___x_1975_ = lean_box(v_val_1861_);
v___x_1976_ = lean_box(v___x_1959_);
lean_inc_ref(v___x_1972_);
lean_inc_ref(v___y_1922_);
lean_inc_ref(v_a_1862_);
v___f_1977_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_1977_, 0, v_a_1862_);
lean_closure_set(v___f_1977_, 1, v_opts_1956_);
lean_closure_set(v___f_1977_, 2, v___x_1864_);
lean_closure_set(v___f_1977_, 3, v___y_1920_);
lean_closure_set(v___f_1977_, 4, v___y_1919_);
lean_closure_set(v___f_1977_, 5, v___x_1973_);
lean_closure_set(v___f_1977_, 6, v___x_1974_);
lean_closure_set(v___f_1977_, 7, v_env_1938_);
lean_closure_set(v___f_1977_, 8, v___y_1922_);
lean_closure_set(v___f_1977_, 9, v___x_1972_);
lean_closure_set(v___f_1977_, 10, v_pos_1870_);
lean_closure_set(v___f_1977_, 11, v___x_1975_);
lean_closure_set(v___f_1977_, 12, v___y_1921_);
lean_closure_set(v___f_1977_, 13, v___y_1915_);
lean_closure_set(v___f_1977_, 14, v___y_1916_);
lean_closure_set(v___f_1977_, 15, v___x_1953_);
lean_closure_set(v___f_1977_, 16, v___y_1917_);
lean_closure_set(v___f_1977_, 17, v___x_1976_);
v___x_1978_ = l_Lean_Language_SnapshotTree_waitAll(v___x_1972_);
v___x_1979_ = lean_io_bind_task(v___x_1978_, v___f_1977_, v___y_1935_, v_val_1861_);
v___y_1883_ = v___y_1926_;
v___y_1884_ = v___y_1934_;
v___y_1885_ = v___y_1936_;
v___y_1886_ = v___y_1937_;
v_snapshotTasks_1887_ = v_snapshotTasks_1943_;
v___y_1888_ = v___y_1945_;
v___y_1889_ = v___y_1929_;
v___y_1890_ = v___y_1930_;
v_traceTask_1891_ = v___x_1979_;
goto v___jp_1882_;
}
}
}
v___jp_1980_:
{
lean_object* v_env_2006_; lean_object* v_messages_2007_; lean_object* v_scopes_2008_; lean_object* v_infoState_2009_; lean_object* v_traceState_2010_; lean_object* v_snapshotTasks_2011_; lean_object* v_codeQualityEntryTasks_2012_; 
v_env_2006_ = lean_ctor_get(v___y_2003_, 0);
lean_inc_ref(v_env_2006_);
v_messages_2007_ = lean_ctor_get(v___y_2003_, 1);
lean_inc_ref(v_messages_2007_);
v_scopes_2008_ = lean_ctor_get(v___y_2003_, 2);
lean_inc(v_scopes_2008_);
v_infoState_2009_ = lean_ctor_get(v___y_2003_, 8);
lean_inc_ref(v_infoState_2009_);
v_traceState_2010_ = lean_ctor_get(v___y_2003_, 9);
lean_inc_ref(v_traceState_2010_);
v_snapshotTasks_2011_ = lean_ctor_get(v___y_2003_, 10);
lean_inc_ref(v_snapshotTasks_2011_);
v_codeQualityEntryTasks_2012_ = lean_ctor_get(v___y_2003_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2012_);
v___y_1915_ = v___y_1981_;
v___y_1916_ = v___y_1982_;
v___y_1917_ = v___y_1983_;
v___y_1918_ = v___y_1984_;
v___y_1919_ = v___y_1985_;
v___y_1920_ = v___y_1986_;
v___y_1921_ = v___y_1988_;
v___y_1922_ = v___y_1987_;
v___y_1923_ = v___y_1989_;
v___y_1924_ = v___y_1990_;
v___y_1925_ = v___y_1991_;
v___y_1926_ = v___y_1992_;
v___y_1927_ = v___y_1993_;
v___y_1928_ = v___y_1994_;
v___y_1929_ = v___y_1995_;
v___y_1930_ = v___y_1996_;
v___y_1931_ = v___y_1997_;
v___y_1932_ = v___y_1998_;
v___y_1933_ = v___y_1999_;
v___y_1934_ = v___y_2000_;
v___y_1935_ = v___y_2001_;
v___y_1936_ = v___y_2002_;
v___y_1937_ = v___y_2003_;
v_env_1938_ = v_env_2006_;
v_messages_1939_ = v_messages_2007_;
v_scopes_1940_ = v_scopes_2008_;
v_infoState_1941_ = v_infoState_2009_;
v_traceState_1942_ = v_traceState_2010_;
v_snapshotTasks_1943_ = v_snapshotTasks_2011_;
v_codeQualityEntryTasks_1944_ = v_codeQualityEntryTasks_2012_;
v___y_1945_ = v___y_2004_;
v_reportedCmdState_1946_ = v_reportedCmdState_2005_;
goto v___jp_1914_;
}
v___jp_2014_:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___f_2037_; uint8_t v___x_2038_; 
v___x_2033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___y_2032_);
lean_ctor_set(v___x_2033_, 1, v_elabPromise_1877_);
lean_inc_ref(v___y_2017_);
lean_inc_n(v_pos_1870_, 2);
lean_inc(v_revCmds_1859_);
lean_inc(v_fst_1858_);
v___x_2034_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_1858_, v_revCmds_1859_, v_cmdState_1871_, v_pos_1870_, v___x_2033_, v___y_2017_, v_a_1862_);
v___x_2035_ = lean_box(v_val_1861_);
v___x_2036_ = lean_box(v___x_1865_);
lean_inc_ref(v_a_1862_);
lean_inc(v___y_2023_);
lean_inc_ref(v___x_1866_);
lean_inc_ref(v___x_2034_);
lean_inc_ref(v___y_2025_);
lean_inc_ref(v___y_2026_);
v___f_2037_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_2037_, 0, v___y_2026_);
lean_closure_set(v___f_2037_, 1, v___y_2025_);
lean_closure_set(v___f_2037_, 2, v___x_2035_);
lean_closure_set(v___f_2037_, 3, v___x_1880_);
lean_closure_set(v___f_2037_, 4, v___x_2034_);
lean_closure_set(v___f_2037_, 5, v___x_1866_);
lean_closure_set(v___f_2037_, 6, v___y_2023_);
lean_closure_set(v___f_2037_, 7, v___x_2036_);
lean_closure_set(v___f_2037_, 8, v_a_1862_);
lean_closure_set(v___f_2037_, 9, v_pos_1870_);
lean_closure_set(v___f_2037_, 10, v___x_1872_);
v___x_2038_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_1873_, v___x_2013_);
if (v___x_2038_ == 0)
{
lean_inc_ref(v___x_2034_);
lean_inc_ref(v___y_2026_);
lean_inc(v___y_2023_);
lean_inc(v___y_2019_);
lean_inc_ref(v___y_2018_);
lean_inc(v___y_2015_);
v___y_1981_ = v___y_2015_;
v___y_1982_ = v___y_2018_;
v___y_1983_ = v___y_2019_;
v___y_1984_ = v___y_2021_;
v___y_1985_ = v___y_2022_;
v___y_1986_ = v___y_2023_;
v___y_1987_ = v___y_2025_;
v___y_1988_ = v___y_2026_;
v___y_1989_ = v___y_2027_;
v___y_1990_ = v___y_2028_;
v___y_1991_ = v___f_2037_;
v___y_1992_ = v___y_2029_;
v___y_1993_ = v___y_2020_;
v___y_1994_ = v___y_2026_;
v___y_1995_ = v___y_2030_;
v___y_1996_ = v___y_2018_;
v___y_1997_ = v___y_2016_;
v___y_1998_ = v___y_2024_;
v___y_1999_ = v___y_2015_;
v___y_2000_ = v___y_2017_;
v___y_2001_ = v___y_2023_;
v___y_2002_ = v___y_2031_;
v___y_2003_ = v___x_2034_;
v___y_2004_ = v___y_2019_;
v_reportedCmdState_2005_ = v___x_2034_;
goto v___jp_1980_;
}
else
{
uint8_t v___x_2039_; 
lean_inc(v_fst_1858_);
v___x_2039_ = l_Lean_Parser_isTerminalCommand(v_fst_1858_);
if (v___x_2039_ == 0)
{
lean_object* v_env_2040_; lean_object* v_messages_2041_; lean_object* v_scopes_2042_; lean_object* v_infoState_2043_; lean_object* v_traceState_2044_; lean_object* v_snapshotTasks_2045_; lean_object* v_codeQualityEntryTasks_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v_env_2040_ = lean_ctor_get(v___x_2034_, 0);
lean_inc_ref_n(v_env_2040_, 2);
v_messages_2041_ = lean_ctor_get(v___x_2034_, 1);
lean_inc_ref(v_messages_2041_);
v_scopes_2042_ = lean_ctor_get(v___x_2034_, 2);
lean_inc(v_scopes_2042_);
v_infoState_2043_ = lean_ctor_get(v___x_2034_, 8);
lean_inc_ref(v_infoState_2043_);
v_traceState_2044_ = lean_ctor_get(v___x_2034_, 9);
lean_inc_ref(v_traceState_2044_);
v_snapshotTasks_2045_ = lean_ctor_get(v___x_2034_, 10);
lean_inc_ref(v_snapshotTasks_2045_);
v_codeQualityEntryTasks_2046_ = lean_ctor_get(v___x_2034_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2046_);
v___x_2047_ = lean_mk_empty_array_with_capacity(v___y_2022_);
lean_inc_ref(v___x_2047_);
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
lean_inc_n(v___y_2023_, 4);
v___x_2049_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
lean_ctor_set(v___x_2049_, 1, v___x_2047_);
lean_ctor_set(v___x_2049_, 2, v___y_2023_);
lean_ctor_set(v___x_2049_, 3, v___y_2023_);
lean_ctor_set_usize(v___x_2049_, 4, v___y_2021_);
v___x_2050_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2049_, 2);
v___x_2051_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2049_);
lean_ctor_set(v___x_2051_, 1, v___x_2049_);
lean_ctor_set(v___x_2051_, 2, v___x_2050_);
v___x_2052_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2053_ = l_Lean_Options_empty;
v___x_2054_ = lean_box(0);
v___x_2055_ = lean_mk_empty_array_with_capacity(v___y_2023_);
lean_inc_ref_n(v___x_2055_, 3);
lean_inc_n(v___x_1864_, 2);
v___x_2056_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2056_, 0, v___x_2052_);
lean_ctor_set(v___x_2056_, 1, v___x_2053_);
lean_ctor_set(v___x_2056_, 2, v___x_1864_);
lean_ctor_set(v___x_2056_, 3, v___x_2054_);
lean_ctor_set(v___x_2056_, 4, v___x_2054_);
lean_ctor_set(v___x_2056_, 5, v___x_2055_);
lean_ctor_set(v___x_2056_, 6, v___x_2055_);
lean_ctor_set(v___x_2056_, 7, v___x_2054_);
lean_ctor_set(v___x_2056_, 8, v___x_2054_);
lean_ctor_set(v___x_2056_, 9, v___x_2054_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*10, v_val_1861_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*10 + 1, v_val_1861_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*10 + 2, v_val_1861_);
v___x_2057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
lean_ctor_set(v___x_2057_, 1, v___x_2054_);
v___x_2058_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2059_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2060_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_1864_);
v___x_2061_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2062_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
lean_ctor_set(v___x_2062_, 2, v___x_2049_);
lean_ctor_set_uint8(v___x_2062_, sizeof(void*)*3, v___x_1865_);
v___x_2063_ = lean_box(0);
lean_inc_ref(v___y_2025_);
v___x_2064_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2064_, 0, v_env_2040_);
lean_ctor_set(v___x_2064_, 1, v___x_2051_);
lean_ctor_set(v___x_2064_, 2, v___x_2057_);
lean_ctor_set(v___x_2064_, 3, v___x_2050_);
lean_ctor_set(v___x_2064_, 4, v___x_2058_);
lean_ctor_set(v___x_2064_, 5, v___y_2023_);
lean_ctor_set(v___x_2064_, 6, v___x_2059_);
lean_ctor_set(v___x_2064_, 7, v___x_2060_);
lean_ctor_set(v___x_2064_, 8, v___x_2062_);
lean_ctor_set(v___x_2064_, 9, v___y_2025_);
lean_ctor_set(v___x_2064_, 10, v___x_2055_);
lean_ctor_set(v___x_2064_, 11, v___x_2063_);
lean_ctor_set(v___x_2064_, 12, v___x_2055_);
lean_inc_ref(v___y_2026_);
lean_inc(v___y_2019_);
lean_inc_ref(v___y_2018_);
lean_inc(v___y_2015_);
v___y_1915_ = v___y_2015_;
v___y_1916_ = v___y_2018_;
v___y_1917_ = v___y_2019_;
v___y_1918_ = v___y_2021_;
v___y_1919_ = v___y_2022_;
v___y_1920_ = v___y_2023_;
v___y_1921_ = v___y_2026_;
v___y_1922_ = v___y_2025_;
v___y_1923_ = v___y_2027_;
v___y_1924_ = v___y_2028_;
v___y_1925_ = v___f_2037_;
v___y_1926_ = v___y_2029_;
v___y_1927_ = v___y_2020_;
v___y_1928_ = v___y_2026_;
v___y_1929_ = v___y_2030_;
v___y_1930_ = v___y_2018_;
v___y_1931_ = v___y_2016_;
v___y_1932_ = v___y_2024_;
v___y_1933_ = v___y_2015_;
v___y_1934_ = v___y_2017_;
v___y_1935_ = v___y_2023_;
v___y_1936_ = v___y_2031_;
v___y_1937_ = v___x_2034_;
v_env_1938_ = v_env_2040_;
v_messages_1939_ = v_messages_2041_;
v_scopes_1940_ = v_scopes_2042_;
v_infoState_1941_ = v_infoState_2043_;
v_traceState_1942_ = v_traceState_2044_;
v_snapshotTasks_1943_ = v_snapshotTasks_2045_;
v_codeQualityEntryTasks_1944_ = v_codeQualityEntryTasks_2046_;
v___y_1945_ = v___y_2019_;
v_reportedCmdState_1946_ = v___x_2064_;
goto v___jp_1914_;
}
else
{
lean_inc_ref(v___x_2034_);
lean_inc_ref(v___y_2026_);
lean_inc(v___y_2023_);
lean_inc(v___y_2019_);
lean_inc_ref(v___y_2018_);
lean_inc(v___y_2015_);
v___y_1981_ = v___y_2015_;
v___y_1982_ = v___y_2018_;
v___y_1983_ = v___y_2019_;
v___y_1984_ = v___y_2021_;
v___y_1985_ = v___y_2022_;
v___y_1986_ = v___y_2023_;
v___y_1987_ = v___y_2025_;
v___y_1988_ = v___y_2026_;
v___y_1989_ = v___y_2027_;
v___y_1990_ = v___y_2028_;
v___y_1991_ = v___f_2037_;
v___y_1992_ = v___y_2029_;
v___y_1993_ = v___y_2020_;
v___y_1994_ = v___y_2026_;
v___y_1995_ = v___y_2030_;
v___y_1996_ = v___y_2018_;
v___y_1997_ = v___y_2016_;
v___y_1998_ = v___y_2024_;
v___y_1999_ = v___y_2015_;
v___y_2000_ = v___y_2017_;
v___y_2001_ = v___y_2023_;
v___y_2002_ = v___y_2031_;
v___y_2003_ = v___x_2034_;
v___y_2004_ = v___y_2019_;
v_reportedCmdState_2005_ = v___x_2034_;
goto v___jp_1980_;
}
}
}
v___jp_2065_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; size_t v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2071_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_1863_);
v___x_2072_ = l_IO_CancelToken_new();
v___x_2073_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
lean_inc(v___x_1864_);
v___x_2074_ = l_Lean_Name_str___override(v___x_1864_, v___x_2073_);
v___x_2075_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2076_ = l_Lean_Name_str___override(v___x_2074_, v___x_2075_);
v___x_2077_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2078_ = l_Lean_Name_str___override(v___x_2076_, v___x_2077_);
v___x_2079_ = l_Lean_Name_str___override(v___x_2078_, v___x_2075_);
v___x_2080_ = lean_unsigned_to_nat(0u);
v___x_2081_ = l_Lean_Name_num___override(v___x_2079_, v___x_2080_);
v___x_2082_ = l_Lean_Name_str___override(v___x_2081_, v___x_2075_);
v___x_2083_ = l_Lean_Name_str___override(v___x_2082_, v___x_2077_);
v___x_2084_ = l_Lean_Name_str___override(v___x_2083_, v___x_2075_);
v___x_2085_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2086_ = l_Lean_Name_str___override(v___x_2084_, v___x_2085_);
v___x_2087_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3));
v___x_2088_ = l_Lean_Name_str___override(v___x_2086_, v___x_2087_);
v___x_2089_ = l_Lean_Name_toString(v___x_2088_, v___x_1865_);
v___x_2090_ = lean_box(0);
v___x_2091_ = lean_unsigned_to_nat(32u);
v___x_2092_ = ((size_t)5ULL);
v___x_2093_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref_n(v___x_2089_, 2);
v___x_2094_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2094_, 0, v___x_2089_);
lean_ctor_set(v___x_2094_, 1, v___x_2071_);
lean_ctor_set(v___x_2094_, 2, v___x_2090_);
lean_ctor_set(v___x_2094_, 3, v___x_2093_);
lean_ctor_set_uint8(v___x_2094_, sizeof(void*)*4, v_val_1861_);
v___x_2095_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2096_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2096_, 0, v___x_2089_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
lean_ctor_set(v___x_2096_, 2, v___x_2090_);
lean_ctor_set(v___x_2096_, 3, v___x_2093_);
lean_ctor_set_uint8(v___x_2096_, sizeof(void*)*4, v_val_1861_);
lean_inc(v___y_2066_);
v___x_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2097_, 0, v___y_2066_);
v___x_2098_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2097_);
lean_inc_ref(v___x_2072_);
v___x_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2072_);
v___x_2100_ = l_IO_Promise_result_x21___redArg(v_elabPromise_1877_);
lean_inc_ref(v___x_2100_);
lean_inc(v___x_2098_);
lean_inc_ref_n(v___x_2097_, 3);
v___x_2101_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2097_);
lean_ctor_set(v___x_2101_, 1, v___x_2098_);
lean_ctor_set(v___x_2101_, 2, v___x_2099_);
lean_ctor_set(v___x_2101_, 3, v___x_2100_);
v___x_2102_ = l_IO_Promise_result_x21___redArg(v___x_1879_);
lean_inc_ref(v___x_2102_);
lean_inc_n(v___y_2068_, 3);
v___x_2103_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2097_);
lean_ctor_set(v___x_2103_, 1, v___y_2068_);
lean_ctor_set(v___x_2103_, 2, v___x_2090_);
lean_ctor_set(v___x_2103_, 3, v___x_2102_);
v___x_2104_ = l_IO_Promise_result_x21___redArg(v___x_1880_);
lean_inc_ref(v___x_2104_);
v___x_2105_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2097_);
lean_ctor_set(v___x_2105_, 1, v___y_2068_);
lean_ctor_set(v___x_2105_, 2, v___x_2090_);
lean_ctor_set(v___x_2105_, 3, v___x_2104_);
v___x_2106_ = l_IO_Promise_result_x21___redArg(v___x_1881_);
v___x_2107_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2090_);
lean_ctor_set(v___x_2107_, 1, v___y_2068_);
lean_ctor_set(v___x_2107_, 2, v___x_2090_);
lean_ctor_set(v___x_2107_, 3, v___x_2106_);
lean_inc_ref(v___x_2096_);
v___x_2108_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2096_);
lean_ctor_set(v___x_2108_, 1, v___x_2101_);
lean_ctor_set(v___x_2108_, 2, v___x_2103_);
lean_ctor_set(v___x_2108_, 3, v___x_2105_);
lean_ctor_set(v___x_2108_, 4, v___x_2107_);
v___x_2109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2094_);
lean_ctor_set(v___x_2109_, 1, v___y_2066_);
lean_ctor_set(v___x_2109_, 2, v___y_2067_);
lean_ctor_set(v___x_2109_, 3, v___x_2108_);
lean_ctor_set(v___x_2109_, 4, v___y_2070_);
v___x_2110_ = lean_io_promise_resolve(v___x_2109_, v_prom_1874_);
if (lean_obj_tag(v_old_x3f_1875_) == 0)
{
v___y_2015_ = v___x_2090_;
v___y_2016_ = v___x_2100_;
v___y_2017_ = v___x_2072_;
v___y_2018_ = v___x_2096_;
v___y_2019_ = v___x_2090_;
v___y_2020_ = v___x_2098_;
v___y_2021_ = v___x_2092_;
v___y_2022_ = v___x_2091_;
v___y_2023_ = v___x_2080_;
v___y_2024_ = v___x_2097_;
v___y_2025_ = v___x_2093_;
v___y_2026_ = v___x_2089_;
v___y_2027_ = v___x_2102_;
v___y_2028_ = v___x_2104_;
v___y_2029_ = v___y_2068_;
v___y_2030_ = v___y_2069_;
v___y_2031_ = v___x_2090_;
v___y_2032_ = v___x_2090_;
goto v___jp_2014_;
}
else
{
lean_object* v_val_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2122_; 
v_val_2111_ = lean_ctor_get(v_old_x3f_1875_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v_old_x3f_1875_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2113_ = v_old_x3f_1875_;
v_isShared_2114_ = v_isSharedCheck_2122_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_val_2111_);
lean_dec(v_old_x3f_1875_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2122_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v_elabSnap_2115_; lean_object* v_stx_2116_; lean_object* v_elabSnap_2117_; lean_object* v___x_2118_; lean_object* v___x_2120_; 
v_elabSnap_2115_ = lean_ctor_get(v_val_2111_, 3);
lean_inc_ref(v_elabSnap_2115_);
v_stx_2116_ = lean_ctor_get(v_val_2111_, 1);
lean_inc(v_stx_2116_);
lean_dec(v_val_2111_);
v_elabSnap_2117_ = lean_ctor_get(v_elabSnap_2115_, 1);
lean_inc_ref(v_elabSnap_2117_);
lean_dec_ref(v_elabSnap_2115_);
v___x_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2118_, 0, v_stx_2116_);
lean_ctor_set(v___x_2118_, 1, v_elabSnap_2117_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2118_);
v___x_2120_ = v___x_2113_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v___x_2118_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
v___y_2015_ = v___x_2090_;
v___y_2016_ = v___x_2100_;
v___y_2017_ = v___x_2072_;
v___y_2018_ = v___x_2096_;
v___y_2019_ = v___x_2090_;
v___y_2020_ = v___x_2098_;
v___y_2021_ = v___x_2092_;
v___y_2022_ = v___x_2091_;
v___y_2023_ = v___x_2080_;
v___y_2024_ = v___x_2097_;
v___y_2025_ = v___x_2093_;
v___y_2026_ = v___x_2089_;
v___y_2027_ = v___x_2102_;
v___y_2028_ = v___x_2104_;
v___y_2029_ = v___y_2068_;
v___y_2030_ = v___y_2069_;
v___y_2031_ = v___x_2090_;
v___y_2032_ = v___x_2120_;
goto v___jp_2014_;
}
}
}
}
v___jp_2123_:
{
lean_object* v___x_2127_; uint8_t v___x_2128_; 
v___x_2127_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2126_);
lean_inc(v_fst_1858_);
v___x_2128_ = l_Lean_Parser_isTerminalCommand(v_fst_1858_);
if (v___x_2128_ == 0)
{
lean_object* v___x_2129_; lean_object* v_toProcessingContext_2130_; lean_object* v_pos_2131_; lean_object* v_endPos_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2129_ = lean_io_promise_new();
v_toProcessingContext_2130_ = lean_ctor_get(v_a_1862_, 0);
v_pos_2131_ = lean_ctor_get(v_fst_1860_, 0);
v_endPos_2132_ = lean_ctor_get(v_toProcessingContext_2130_, 3);
lean_inc(v___x_2129_);
v___x_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2129_);
v___x_2134_ = lean_box(0);
lean_inc(v_endPos_2132_);
lean_inc(v_pos_2131_);
v___x_2135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2135_, 0, v_pos_2131_);
lean_ctor_set(v___x_2135_, 1, v_endPos_2132_);
v___x_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
v___x_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2137_, 0, v_parseCancelTk_1876_);
v___x_2138_ = l_IO_Promise_result_x21___redArg(v___x_2129_);
lean_dec(v___x_2129_);
v___x_2139_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2134_);
lean_ctor_set(v___x_2139_, 1, v___x_2136_);
lean_ctor_set(v___x_2139_, 2, v___x_2137_);
lean_ctor_set(v___x_2139_, 3, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2139_);
v___y_2066_ = v___y_2124_;
v___y_2067_ = v___y_2125_;
v___y_2068_ = v___x_2127_;
v___y_2069_ = v___x_2133_;
v___y_2070_ = v___x_2140_;
goto v___jp_2065_;
}
else
{
lean_object* v___x_2141_; 
lean_dec_ref(v_parseCancelTk_1876_);
v___x_2141_ = lean_box(0);
v___y_2066_ = v___y_2124_;
v___y_2067_ = v___y_2125_;
v___y_2068_ = v___x_2127_;
v___y_2069_ = v___x_2141_;
v___y_2070_ = v___x_2141_;
goto v___jp_2065_;
}
}
v___jp_2142_:
{
lean_object* v___x_2145_; 
lean_inc(v_fst_1858_);
v___x_2145_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v_fst_1858_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v___x_2146_; 
v___x_2146_ = lean_box(0);
v___y_2124_ = v_fst_2143_;
v___y_2125_ = v_snd_2144_;
v___y_2126_ = v___x_2146_;
goto v___jp_2123_;
}
else
{
lean_object* v_val_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2155_; 
v_val_2147_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2149_ = v___x_2145_;
v_isShared_2150_ = v_isSharedCheck_2155_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_val_2147_);
lean_dec(v___x_2145_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2155_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2151_; lean_object* v___x_2153_; 
lean_inc(v_val_2147_);
v___x_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2151_, 0, v_val_2147_);
lean_ctor_set(v___x_2151_, 1, v_val_2147_);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 0, v___x_2151_);
v___x_2153_ = v___x_2149_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2151_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
v___y_2124_ = v_fst_2143_;
v___y_2125_ = v_snd_2144_;
v___y_2126_ = v___x_2153_;
goto v___jp_2123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object** _args){
lean_object* v_fst_2160_ = _args[0];
lean_object* v_revCmds_2161_ = _args[1];
lean_object* v_fst_2162_ = _args[2];
lean_object* v_val_2163_ = _args[3];
lean_object* v_a_2164_ = _args[4];
lean_object* v_snd_2165_ = _args[5];
lean_object* v___x_2166_ = _args[6];
lean_object* v___x_2167_ = _args[7];
lean_object* v___x_2168_ = _args[8];
lean_object* v___f_2169_ = _args[9];
lean_object* v___f_2170_ = _args[10];
lean_object* v___f_2171_ = _args[11];
lean_object* v_pos_2172_ = _args[12];
lean_object* v_cmdState_2173_ = _args[13];
lean_object* v___x_2174_ = _args[14];
lean_object* v_opts_2175_ = _args[15];
lean_object* v_prom_2176_ = _args[16];
lean_object* v_old_x3f_2177_ = _args[17];
lean_object* v_parseCancelTk_2178_ = _args[18];
lean_object* v_elabPromise_2179_ = _args[19];
lean_object* v___y_2180_ = _args[20];
_start:
{
uint8_t v_val_25274__boxed_2181_; uint8_t v___x_25277__boxed_2182_; lean_object* v_res_2183_; 
v_val_25274__boxed_2181_ = lean_unbox(v_val_2163_);
v___x_25277__boxed_2182_ = lean_unbox(v___x_2167_);
v_res_2183_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v_fst_2160_, v_revCmds_2161_, v_fst_2162_, v_val_25274__boxed_2181_, v_a_2164_, v_snd_2165_, v___x_2166_, v___x_25277__boxed_2182_, v___x_2168_, v___f_2169_, v___f_2170_, v___f_2171_, v_pos_2172_, v_cmdState_2173_, v___x_2174_, v_opts_2175_, v_prom_2176_, v_old_x3f_2177_, v_parseCancelTk_2178_, v_elabPromise_2179_);
lean_dec(v_prom_2176_);
lean_dec_ref(v_opts_2175_);
lean_dec_ref(v_a_2164_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object* v_old_x3f_2185_, lean_object* v_parserState_2186_, lean_object* v_cmdState_2187_, lean_object* v_prom_2188_, uint8_t v_sync_2189_, lean_object* v_parseCancelTk_2190_, lean_object* v_revCmds_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v_toSnapshot_2195_; lean_object* v_stx_2196_; lean_object* v_parserState_2197_; lean_object* v_elabSnap_2198_; lean_object* v_val_2199_; lean_object* v_newParserState_2200_; lean_object* v___f_2233_; lean_object* v___f_2234_; lean_object* v___f_2235_; lean_object* v___x_2236_; uint8_t v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___y_2281_; lean_object* v___y_2282_; lean_object* v___y_2283_; lean_object* v___y_2284_; 
v___f_2233_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0));
v___f_2234_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1));
v___f_2235_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2));
v___x_2236_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2274_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7));
v___x_2275_ = l_Lean_Elab_instInhabitedInfoTree_default;
if (lean_obj_tag(v_old_x3f_2185_) == 1)
{
lean_object* v_val_2337_; lean_object* v_nextCmdSnap_x3f_2338_; 
v_val_2337_ = lean_ctor_get(v_old_x3f_2185_, 0);
v_nextCmdSnap_x3f_2338_ = lean_ctor_get(v_val_2337_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_2338_) == 0)
{
goto v___jp_2305_;
}
else
{
lean_object* v_toSnapshot_2339_; lean_object* v_stx_2340_; lean_object* v_parserState_2341_; lean_object* v_elabSnap_2342_; lean_object* v_val_2343_; lean_object* v___x_2344_; 
v_toSnapshot_2339_ = lean_ctor_get(v_val_2337_, 0);
v_stx_2340_ = lean_ctor_get(v_val_2337_, 1);
v_parserState_2341_ = lean_ctor_get(v_val_2337_, 2);
v_elabSnap_2342_ = lean_ctor_get(v_val_2337_, 3);
v_val_2343_ = lean_ctor_get(v_nextCmdSnap_x3f_2338_, 0);
lean_inc(v_val_2343_);
v___x_2344_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2343_);
if (lean_obj_tag(v___x_2344_) == 1)
{
lean_object* v_val_2345_; lean_object* v_nextCmdSnap_x3f_2346_; 
v_val_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_val_2345_);
lean_dec_ref_known(v___x_2344_, 1);
v_nextCmdSnap_x3f_2346_ = lean_ctor_get(v_val_2345_, 4);
lean_inc(v_nextCmdSnap_x3f_2346_);
lean_dec(v_val_2345_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2346_) == 0)
{
goto v___jp_2305_;
}
else
{
lean_object* v_val_2347_; lean_object* v___x_2348_; 
v_val_2347_ = lean_ctor_get(v_nextCmdSnap_x3f_2346_, 0);
lean_inc(v_val_2347_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2346_, 1);
v___x_2348_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2347_);
if (lean_obj_tag(v___x_2348_) == 1)
{
lean_object* v_val_2349_; lean_object* v_parserState_2350_; lean_object* v_pos_2351_; uint8_t v___x_2352_; 
v_val_2349_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_val_2349_);
lean_dec_ref_known(v___x_2348_, 1);
v_parserState_2350_ = lean_ctor_get(v_val_2349_, 2);
lean_inc_ref(v_parserState_2350_);
lean_dec(v_val_2349_);
v_pos_2351_ = lean_ctor_get(v_parserState_2350_, 0);
lean_inc(v_pos_2351_);
lean_dec_ref(v_parserState_2350_);
v___x_2352_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_2351_, v_a_2192_);
lean_dec(v_pos_2351_);
if (v___x_2352_ == 0)
{
goto v___jp_2305_;
}
else
{
lean_inc(v_val_2343_);
lean_inc_ref(v_elabSnap_2342_);
lean_inc_ref_n(v_parserState_2341_, 2);
lean_inc(v_stx_2340_);
lean_inc_ref(v_toSnapshot_2339_);
lean_dec_ref_known(v_old_x3f_2185_, 1);
lean_dec_ref(v_parseCancelTk_2190_);
lean_dec_ref(v_cmdState_2187_);
lean_dec_ref(v_parserState_2186_);
v_toSnapshot_2195_ = v_toSnapshot_2339_;
v_stx_2196_ = v_stx_2340_;
v_parserState_2197_ = v_parserState_2341_;
v_elabSnap_2198_ = v_elabSnap_2342_;
v_val_2199_ = v_val_2343_;
v_newParserState_2200_ = v_parserState_2341_;
goto v___jp_2194_;
}
}
else
{
lean_dec(v___x_2348_);
goto v___jp_2305_;
}
}
}
else
{
lean_dec(v___x_2344_);
goto v___jp_2305_;
}
}
}
else
{
goto v___jp_2305_;
}
v___jp_2194_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v_resultSnap_2203_; lean_object* v_task_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2227_; 
v___x_2201_ = lean_io_promise_new();
v___x_2202_ = l_IO_CancelToken_new();
v_resultSnap_2203_ = lean_ctor_get(v_elabSnap_2198_, 2);
lean_inc_ref(v_resultSnap_2203_);
v_task_2204_ = lean_ctor_get(v_resultSnap_2203_, 3);
v_isSharedCheck_2227_ = !lean_is_exclusive(v_resultSnap_2203_);
if (v_isSharedCheck_2227_ == 0)
{
lean_object* v_unused_2228_; lean_object* v_unused_2229_; lean_object* v_unused_2230_; 
v_unused_2228_ = lean_ctor_get(v_resultSnap_2203_, 2);
lean_dec(v_unused_2228_);
v_unused_2229_ = lean_ctor_get(v_resultSnap_2203_, 1);
lean_dec(v_unused_2229_);
v_unused_2230_ = lean_ctor_get(v_resultSnap_2203_, 0);
lean_dec(v_unused_2230_);
v___x_2206_ = v_resultSnap_2203_;
v_isShared_2207_ = v_isSharedCheck_2227_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_task_2204_);
lean_dec(v_resultSnap_2203_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2227_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2208_; lean_object* v___f_2209_; lean_object* v___x_2210_; uint8_t v___x_2211_; lean_object* v___x_2212_; lean_object* v_toProcessingContext_2213_; lean_object* v_pos_2214_; lean_object* v_endPos_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2222_; 
v___x_2208_ = lean_box(v_sync_2189_);
lean_inc_ref(v_a_2192_);
lean_inc_ref(v___x_2202_);
lean_inc(v___x_2201_);
lean_inc_ref(v_newParserState_2200_);
lean_inc(v_stx_2196_);
v___f_2209_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed), 10, 8);
lean_closure_set(v___f_2209_, 0, v_val_2199_);
lean_closure_set(v___f_2209_, 1, v_stx_2196_);
lean_closure_set(v___f_2209_, 2, v_revCmds_2191_);
lean_closure_set(v___f_2209_, 3, v_newParserState_2200_);
lean_closure_set(v___f_2209_, 4, v___x_2201_);
lean_closure_set(v___f_2209_, 5, v___x_2208_);
lean_closure_set(v___f_2209_, 6, v___x_2202_);
lean_closure_set(v___f_2209_, 7, v_a_2192_);
v___x_2210_ = lean_unsigned_to_nat(0u);
v___x_2211_ = 1;
v___x_2212_ = l_BaseIO_chainTask___redArg(v_task_2204_, v___f_2209_, v___x_2210_, v___x_2211_);
v_toProcessingContext_2213_ = lean_ctor_get(v_a_2192_, 0);
v_pos_2214_ = lean_ctor_get(v_newParserState_2200_, 0);
lean_inc(v_pos_2214_);
lean_dec_ref(v_newParserState_2200_);
v_endPos_2215_ = lean_ctor_get(v_toProcessingContext_2213_, 3);
v___x_2216_ = lean_box(0);
lean_inc(v_endPos_2215_);
v___x_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2217_, 0, v_pos_2214_);
lean_ctor_set(v___x_2217_, 1, v_endPos_2215_);
v___x_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
v___x_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2202_);
v___x_2220_ = l_IO_Promise_result_x21___redArg(v___x_2201_);
lean_dec(v___x_2201_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 3, v___x_2220_);
lean_ctor_set(v___x_2206_, 2, v___x_2219_);
lean_ctor_set(v___x_2206_, 1, v___x_2218_);
lean_ctor_set(v___x_2206_, 0, v___x_2216_);
v___x_2222_ = v___x_2206_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v___x_2218_);
lean_ctor_set(v_reuseFailAlloc_2226_, 2, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2226_, 3, v___x_2220_);
v___x_2222_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
v___x_2224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2224_, 0, v_toSnapshot_2195_);
lean_ctor_set(v___x_2224_, 1, v_stx_2196_);
lean_ctor_set(v___x_2224_, 2, v_parserState_2197_);
lean_ctor_set(v___x_2224_, 3, v_elabSnap_2198_);
lean_ctor_set(v___x_2224_, 4, v___x_2223_);
v___x_2225_ = lean_io_promise_resolve(v___x_2224_, v_prom_2188_);
lean_dec(v_prom_2188_);
return v___x_2225_;
}
}
}
v___jp_2231_:
{
lean_object* v___x_2232_; 
v___x_2232_ = lean_box(0);
return v___x_2232_;
}
v___jp_2237_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; uint8_t v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2241_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
v___x_2242_ = l_Lean_Name_str___override(v___y_2240_, v___x_2241_);
v___x_2243_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2244_ = l_Lean_Name_str___override(v___x_2242_, v___x_2243_);
v___x_2245_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2246_ = l_Lean_Name_str___override(v___x_2244_, v___x_2245_);
v___x_2247_ = l_Lean_Name_str___override(v___x_2246_, v___x_2243_);
v___x_2248_ = lean_unsigned_to_nat(0u);
v___x_2249_ = l_Lean_Name_num___override(v___x_2247_, v___x_2248_);
v___x_2250_ = l_Lean_Name_str___override(v___x_2249_, v___x_2243_);
v___x_2251_ = l_Lean_Name_str___override(v___x_2250_, v___x_2245_);
v___x_2252_ = l_Lean_Name_str___override(v___x_2251_, v___x_2243_);
v___x_2253_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2254_ = l_Lean_Name_str___override(v___x_2252_, v___x_2253_);
v___x_2255_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3));
v___x_2256_ = l_Lean_Name_str___override(v___x_2254_, v___x_2255_);
v___x_2257_ = l_Lean_Name_toString(v___x_2256_, v___y_2238_);
v___x_2258_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2259_ = lean_box(0);
v___x_2260_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2261_ = 0;
v___x_2262_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2262_, 0, v___x_2257_);
lean_ctor_set(v___x_2262_, 1, v___x_2258_);
lean_ctor_set(v___x_2262_, 2, v___x_2259_);
lean_ctor_set(v___x_2262_, 3, v___x_2260_);
lean_ctor_set_uint8(v___x_2262_, sizeof(void*)*4, v___x_2261_);
v___x_2263_ = lean_box(0);
v___x_2264_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v___x_2265_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5));
lean_inc_ref_n(v___x_2262_, 3);
v___x_2266_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2262_);
lean_ctor_set(v___x_2266_, 1, v_cmdState_2187_);
lean_ctor_set(v___x_2266_, 2, v___x_2265_);
v___x_2267_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2259_, v___x_2266_);
v___x_2268_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2259_, v___x_2262_);
v___x_2269_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6);
v___x_2270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2262_);
lean_ctor_set(v___x_2270_, 1, v___x_2264_);
lean_ctor_set(v___x_2270_, 2, v___x_2267_);
lean_ctor_set(v___x_2270_, 3, v___x_2268_);
lean_ctor_set(v___x_2270_, 4, v___x_2269_);
v___x_2271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2262_);
lean_ctor_set(v___x_2271_, 1, v___x_2263_);
lean_ctor_set(v___x_2271_, 2, v___y_2239_);
lean_ctor_set(v___x_2271_, 3, v___x_2270_);
lean_ctor_set(v___x_2271_, 4, v___x_2259_);
v___x_2272_ = lean_io_promise_resolve(v___x_2271_, v_prom_2188_);
lean_dec(v_prom_2188_);
v___x_2273_ = lean_box(0);
return v___x_2273_;
}
v___jp_2276_:
{
uint8_t v___x_2285_; 
v___x_2285_ = l_IO_CancelToken_isSet(v_parseCancelTk_2190_);
if (v___x_2285_ == 0)
{
uint8_t v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___f_2289_; 
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
v___x_2286_ = 1;
v___x_2287_ = lean_box(v___x_2285_);
v___x_2288_ = lean_box(v___x_2286_);
lean_inc_ref(v_parseCancelTk_2190_);
lean_inc(v_old_x3f_2185_);
lean_inc(v_prom_2188_);
lean_inc_ref(v___y_2278_);
lean_inc_ref(v_cmdState_2187_);
lean_inc(v___y_2279_);
lean_inc(v___y_2282_);
lean_inc_ref(v___y_2277_);
lean_inc_ref(v_a_2192_);
lean_inc_ref(v___y_2281_);
lean_inc(v_revCmds_2191_);
lean_inc(v___y_2280_);
v___f_2289_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed), 21, 19);
lean_closure_set(v___f_2289_, 0, v___y_2280_);
lean_closure_set(v___f_2289_, 1, v_revCmds_2191_);
lean_closure_set(v___f_2289_, 2, v___y_2281_);
lean_closure_set(v___f_2289_, 3, v___x_2287_);
lean_closure_set(v___f_2289_, 4, v_a_2192_);
lean_closure_set(v___f_2289_, 5, v___y_2277_);
lean_closure_set(v___f_2289_, 6, v___y_2282_);
lean_closure_set(v___f_2289_, 7, v___x_2288_);
lean_closure_set(v___f_2289_, 8, v___x_2236_);
lean_closure_set(v___f_2289_, 9, v___f_2233_);
lean_closure_set(v___f_2289_, 10, v___f_2234_);
lean_closure_set(v___f_2289_, 11, v___f_2235_);
lean_closure_set(v___f_2289_, 12, v___y_2279_);
lean_closure_set(v___f_2289_, 13, v_cmdState_2187_);
lean_closure_set(v___f_2289_, 14, v___x_2275_);
lean_closure_set(v___f_2289_, 15, v___y_2278_);
lean_closure_set(v___f_2289_, 16, v_prom_2188_);
lean_closure_set(v___f_2289_, 17, v_old_x3f_2185_);
lean_closure_set(v___f_2289_, 18, v_parseCancelTk_2190_);
if (v_sync_2189_ == 0)
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
lean_dec_ref(v___f_2289_);
v___x_2290_ = lean_io_promise_new();
v___x_2291_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___y_2280_, v_revCmds_2191_, v___y_2281_, v___x_2285_, v_a_2192_, v___y_2277_, v___y_2282_, v___x_2286_, v___x_2236_, v___f_2233_, v___f_2234_, v___f_2235_, v___y_2279_, v_cmdState_2187_, v___x_2275_, v___y_2278_, v_prom_2188_, v_old_x3f_2185_, v_parseCancelTk_2190_, v___x_2290_);
lean_dec(v_prom_2188_);
lean_dec_ref(v___y_2278_);
goto v___jp_2231_;
}
else
{
lean_object* v___f_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v_revCmds_2191_);
lean_dec_ref(v_parseCancelTk_2190_);
lean_dec(v_prom_2188_);
lean_dec_ref(v_cmdState_2187_);
lean_dec(v_old_x3f_2185_);
v___f_2292_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6___boxed), 2, 1);
lean_closure_set(v___f_2292_, 0, v___f_2289_);
v___x_2293_ = lean_unsigned_to_nat(0u);
v___x_2294_ = lean_io_as_task(v___f_2292_, v___x_2293_);
lean_dec_ref(v___x_2294_);
goto v___jp_2231_;
}
}
else
{
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v_revCmds_2191_);
lean_dec_ref(v_parseCancelTk_2190_);
if (lean_obj_tag(v_old_x3f_2185_) == 1)
{
lean_object* v_val_2295_; lean_object* v___x_2296_; lean_object* v_children_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; uint8_t v___x_2300_; 
v_val_2295_ = lean_ctor_get(v_old_x3f_2185_, 0);
lean_inc(v_val_2295_);
lean_dec_ref_known(v_old_x3f_2185_, 1);
v___x_2296_ = l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(v_val_2295_);
v_children_2297_ = lean_ctor_get(v___x_2296_, 1);
lean_inc_ref(v_children_2297_);
lean_dec_ref(v___x_2296_);
v___x_2298_ = lean_unsigned_to_nat(0u);
v___x_2299_ = lean_array_get_size(v_children_2297_);
v___x_2300_ = lean_nat_dec_lt(v___x_2298_, v___x_2299_);
if (v___x_2300_ == 0)
{
lean_dec_ref(v_children_2297_);
v___y_2238_ = v___x_2285_;
v___y_2239_ = v___y_2283_;
v___y_2240_ = v___y_2284_;
goto v___jp_2237_;
}
else
{
lean_object* v___x_2301_; size_t v___x_2302_; size_t v___x_2303_; lean_object* v___x_2304_; 
v___x_2301_ = lean_box(0);
v___x_2302_ = ((size_t)0ULL);
v___x_2303_ = lean_usize_of_nat(v___x_2299_);
v___x_2304_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_children_2297_, v___x_2302_, v___x_2303_, v___x_2301_);
lean_dec_ref(v_children_2297_);
v___y_2238_ = v___x_2285_;
v___y_2239_ = v___y_2283_;
v___y_2240_ = v___y_2284_;
goto v___jp_2237_;
}
}
else
{
lean_dec(v_old_x3f_2185_);
v___y_2238_ = v___x_2285_;
v___y_2239_ = v___y_2283_;
v___y_2240_ = v___y_2284_;
goto v___jp_2237_;
}
}
}
v___jp_2305_:
{
lean_object* v_env_2306_; lean_object* v_scopes_2307_; lean_object* v___x_2308_; lean_object* v_opts_2309_; lean_object* v_currNamespace_2310_; lean_object* v_openDecls_2311_; lean_object* v___x_2312_; lean_object* v___f_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v_snd_2317_; 
v_env_2306_ = lean_ctor_get(v_cmdState_2187_, 0);
v_scopes_2307_ = lean_ctor_get(v_cmdState_2187_, 2);
v___x_2308_ = l_List_head_x21___redArg(v___x_2236_, v_scopes_2307_);
v_opts_2309_ = lean_ctor_get(v___x_2308_, 1);
lean_inc_ref_n(v_opts_2309_, 2);
v_currNamespace_2310_ = lean_ctor_get(v___x_2308_, 2);
lean_inc(v_currNamespace_2310_);
v_openDecls_2311_ = lean_ctor_get(v___x_2308_, 3);
lean_inc(v_openDecls_2311_);
lean_dec(v___x_2308_);
lean_inc_ref(v_env_2306_);
v___x_2312_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2312_, 0, v_env_2306_);
lean_ctor_set(v___x_2312_, 1, v_opts_2309_);
lean_ctor_set(v___x_2312_, 2, v_currNamespace_2310_);
lean_ctor_set(v___x_2312_, 3, v_openDecls_2311_);
lean_inc_ref(v_parserState_2186_);
lean_inc_ref(v_a_2192_);
v___f_2313_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2313_, 0, v_a_2192_);
lean_closure_set(v___f_2313_, 1, v___x_2312_);
lean_closure_set(v___f_2313_, 2, v_parserState_2186_);
v___x_2314_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__8));
v___x_2315_ = lean_box(0);
v___x_2316_ = lean_profileit(v___x_2314_, v_opts_2309_, v___f_2313_, v___x_2315_);
v_snd_2317_ = lean_ctor_get(v___x_2316_, 1);
lean_inc(v_snd_2317_);
if (lean_obj_tag(v_old_x3f_2185_) == 1)
{
lean_object* v_val_2318_; lean_object* v_fst_2319_; lean_object* v_fst_2320_; lean_object* v_snd_2321_; lean_object* v_pos_2322_; lean_object* v_toSnapshot_2323_; lean_object* v_stx_2324_; lean_object* v_parserState_2325_; lean_object* v_elabSnap_2326_; lean_object* v_nextCmdSnap_x3f_2327_; uint8_t v___x_2328_; 
v_val_2318_ = lean_ctor_get(v_old_x3f_2185_, 0);
v_fst_2319_ = lean_ctor_get(v___x_2316_, 0);
lean_inc_n(v_fst_2319_, 2);
lean_dec(v___x_2316_);
v_fst_2320_ = lean_ctor_get(v_snd_2317_, 0);
lean_inc(v_fst_2320_);
v_snd_2321_ = lean_ctor_get(v_snd_2317_, 1);
lean_inc(v_snd_2321_);
lean_dec(v_snd_2317_);
v_pos_2322_ = lean_ctor_get(v_parserState_2186_, 0);
lean_inc(v_pos_2322_);
lean_dec_ref(v_parserState_2186_);
v_toSnapshot_2323_ = lean_ctor_get(v_val_2318_, 0);
v_stx_2324_ = lean_ctor_get(v_val_2318_, 1);
v_parserState_2325_ = lean_ctor_get(v_val_2318_, 2);
v_elabSnap_2326_ = lean_ctor_get(v_val_2318_, 3);
v_nextCmdSnap_x3f_2327_ = lean_ctor_get(v_val_2318_, 4);
lean_inc(v_stx_2324_);
v___x_2328_ = l_Lean_Syntax_eqWithInfo(v_fst_2319_, v_stx_2324_);
if (v___x_2328_ == 0)
{
if (lean_obj_tag(v_nextCmdSnap_x3f_2327_) == 0)
{
lean_inc(v_fst_2320_);
v___y_2277_ = v_snd_2321_;
v___y_2278_ = v_opts_2309_;
v___y_2279_ = v_pos_2322_;
v___y_2280_ = v_fst_2319_;
v___y_2281_ = v_fst_2320_;
v___y_2282_ = v___x_2315_;
v___y_2283_ = v_fst_2320_;
v___y_2284_ = v___x_2315_;
goto v___jp_2276_;
}
else
{
lean_object* v_val_2329_; lean_object* v___x_2330_; 
v_val_2329_ = lean_ctor_get(v_nextCmdSnap_x3f_2327_, 0);
lean_inc(v_val_2329_);
v___x_2330_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_2274_, v_val_2329_);
lean_inc(v_fst_2320_);
v___y_2277_ = v_snd_2321_;
v___y_2278_ = v_opts_2309_;
v___y_2279_ = v_pos_2322_;
v___y_2280_ = v_fst_2319_;
v___y_2281_ = v_fst_2320_;
v___y_2282_ = v___x_2315_;
v___y_2283_ = v_fst_2320_;
v___y_2284_ = v___x_2315_;
goto v___jp_2276_;
}
}
else
{
lean_inc(v_val_2318_);
lean_dec(v_pos_2322_);
lean_dec(v_snd_2321_);
lean_dec(v_fst_2319_);
lean_dec_ref_known(v_old_x3f_2185_, 1);
lean_dec_ref(v_opts_2309_);
lean_dec_ref(v_parseCancelTk_2190_);
lean_dec_ref(v_cmdState_2187_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2327_) == 1)
{
lean_object* v_val_2331_; 
lean_inc_ref(v_nextCmdSnap_x3f_2327_);
lean_inc_ref(v_elabSnap_2326_);
lean_inc_ref(v_parserState_2325_);
lean_inc(v_stx_2324_);
lean_inc_ref(v_toSnapshot_2323_);
lean_dec(v_val_2318_);
v_val_2331_ = lean_ctor_get(v_nextCmdSnap_x3f_2327_, 0);
lean_inc(v_val_2331_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2327_, 1);
v_toSnapshot_2195_ = v_toSnapshot_2323_;
v_stx_2196_ = v_stx_2324_;
v_parserState_2197_ = v_parserState_2325_;
v_elabSnap_2198_ = v_elabSnap_2326_;
v_val_2199_ = v_val_2331_;
v_newParserState_2200_ = v_fst_2320_;
goto v___jp_2194_;
}
else
{
lean_object* v___x_2332_; 
lean_dec(v_fst_2320_);
lean_dec(v_revCmds_2191_);
v___x_2332_ = lean_io_promise_resolve(v_val_2318_, v_prom_2188_);
lean_dec(v_prom_2188_);
return v___x_2332_;
}
}
}
else
{
lean_object* v_fst_2333_; lean_object* v_fst_2334_; lean_object* v_snd_2335_; lean_object* v_pos_2336_; 
v_fst_2333_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_fst_2333_);
lean_dec(v___x_2316_);
v_fst_2334_ = lean_ctor_get(v_snd_2317_, 0);
lean_inc_n(v_fst_2334_, 2);
v_snd_2335_ = lean_ctor_get(v_snd_2317_, 1);
lean_inc(v_snd_2335_);
lean_dec(v_snd_2317_);
v_pos_2336_ = lean_ctor_get(v_parserState_2186_, 0);
lean_inc(v_pos_2336_);
lean_dec_ref(v_parserState_2186_);
v___y_2277_ = v_snd_2335_;
v___y_2278_ = v_opts_2309_;
v___y_2279_ = v_pos_2336_;
v___y_2280_ = v_fst_2333_;
v___y_2281_ = v_fst_2334_;
v___y_2282_ = v___x_2315_;
v___y_2283_ = v_fst_2334_;
v___y_2284_ = v___x_2315_;
goto v___jp_2276_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object* v_oldResult_2353_, lean_object* v_stx_2354_, lean_object* v_revCmds_2355_, lean_object* v_newParserState_2356_, lean_object* v_val_2357_, uint8_t v_sync_2358_, lean_object* v_val_2359_, lean_object* v_a_2360_, lean_object* v_oldNext_2361_){
_start:
{
lean_object* v_cmdState_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v_cmdState_2363_ = lean_ctor_get(v_oldResult_2353_, 1);
lean_inc_ref(v_cmdState_2363_);
lean_dec_ref(v_oldResult_2353_);
v___x_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2364_, 0, v_oldNext_2361_);
v___x_2365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2365_, 0, v_stx_2354_);
lean_ctor_set(v___x_2365_, 1, v_revCmds_2355_);
v___x_2366_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2364_, v_newParserState_2356_, v_cmdState_2363_, v_val_2357_, v_sync_2358_, v_val_2359_, v___x_2365_, v_a_2360_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object* v_old_x3f_2367_, lean_object* v_parserState_2368_, lean_object* v_cmdState_2369_, lean_object* v_prom_2370_, lean_object* v_sync_2371_, lean_object* v_parseCancelTk_2372_, lean_object* v_revCmds_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_){
_start:
{
uint8_t v_sync_boxed_2376_; lean_object* v_res_2377_; 
v_sync_boxed_2376_ = lean_unbox(v_sync_2371_);
v_res_2377_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v_old_x3f_2367_, v_parserState_2368_, v_cmdState_2369_, v_prom_2370_, v_sync_boxed_2376_, v_parseCancelTk_2372_, v_revCmds_2373_, v_a_2374_);
lean_dec_ref(v_a_2374_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object* v_as_2378_, size_t v_i_2379_, size_t v_stop_2380_, lean_object* v_b_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_2378_, v_i_2379_, v_stop_2380_, v_b_2381_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object* v_as_2385_, lean_object* v_i_2386_, lean_object* v_stop_2387_, lean_object* v_b_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
size_t v_i_boxed_2391_; size_t v_stop_boxed_2392_; lean_object* v_res_2393_; 
v_i_boxed_2391_ = lean_unbox_usize(v_i_2386_);
lean_dec(v_i_2386_);
v_stop_boxed_2392_ = lean_unbox_usize(v_stop_2387_);
lean_dec(v_stop_2387_);
v_res_2393_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(v_as_2385_, v_i_boxed_2391_, v_stop_boxed_2392_, v_b_2388_, v___y_2389_);
lean_dec_ref(v___y_2389_);
lean_dec_ref(v_as_2385_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object* v_opts_2394_, lean_object* v_opt_2395_){
_start:
{
lean_object* v_name_2396_; lean_object* v_map_2397_; lean_object* v___x_2398_; 
v_name_2396_ = lean_ctor_get(v_opt_2395_, 0);
v_map_2397_ = lean_ctor_get(v_opts_2394_, 0);
v___x_2398_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2397_, v_name_2396_);
if (lean_obj_tag(v___x_2398_) == 0)
{
lean_object* v___x_2399_; 
v___x_2399_ = lean_box(0);
return v___x_2399_;
}
else
{
lean_object* v_val_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2409_; 
v_val_2400_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2402_ = v___x_2398_;
v_isShared_2403_ = v_isSharedCheck_2409_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_val_2400_);
lean_dec(v___x_2398_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2409_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
if (lean_obj_tag(v_val_2400_) == 0)
{
lean_object* v_v_2404_; lean_object* v___x_2406_; 
v_v_2404_ = lean_ctor_get(v_val_2400_, 0);
lean_inc_ref(v_v_2404_);
lean_dec_ref_known(v_val_2400_, 1);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v_v_2404_);
v___x_2406_ = v___x_2402_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_v_2404_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
else
{
lean_object* v___x_2408_; 
lean_del_object(v___x_2402_);
lean_dec(v_val_2400_);
v___x_2408_ = lean_box(0);
return v___x_2408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object* v_opts_2410_, lean_object* v_opt_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2410_, v_opt_2411_);
lean_dec_ref(v_opt_2411_);
lean_dec_ref(v_opts_2410_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object* v___x_2413_, lean_object* v_x_2414_){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2415_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2413_);
v___x_2416_ = lean_box(0);
v___x_2417_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2417_, 0, v_x_2414_);
lean_ctor_set(v___x_2417_, 1, v___x_2415_);
lean_ctor_set(v___x_2417_, 2, v___x_2416_);
return v___x_2417_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2));
v___x_2424_ = l_Lean_Array_toPArray_x27___redArg(v___x_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object* v_a_2425_, lean_object* v_a_2426_){
_start:
{
if (lean_obj_tag(v_a_2425_) == 0)
{
lean_object* v___x_2427_; 
v___x_2427_ = l_List_reverse___redArg(v_a_2426_);
return v___x_2427_;
}
else
{
lean_object* v_head_2428_; lean_object* v_tail_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2442_; 
v_head_2428_ = lean_ctor_get(v_a_2425_, 0);
v_tail_2429_ = lean_ctor_get(v_a_2425_, 1);
v_isSharedCheck_2442_ = !lean_is_exclusive(v_a_2425_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2431_ = v_a_2425_;
v_isShared_2432_ = v_isSharedCheck_2442_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_tail_2429_);
lean_inc(v_head_2428_);
lean_dec(v_a_2425_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2442_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2439_; 
v___x_2433_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1));
v___x_2434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
lean_ctor_set(v___x_2434_, 1, v_head_2428_);
v___x_2435_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2434_);
v___x_2436_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3, &l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3);
v___x_2437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2435_);
lean_ctor_set(v___x_2437_, 1, v___x_2436_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 1, v_a_2426_);
lean_ctor_set(v___x_2431_, 0, v___x_2437_);
v___x_2439_ = v___x_2431_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2437_);
lean_ctor_set(v_reuseFailAlloc_2441_, 1, v_a_2426_);
v___x_2439_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
v_a_2425_ = v_tail_2429_;
v_a_2426_ = v___x_2439_;
goto _start;
}
}
}
}
}
static double _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2443_; double v___x_2444_; 
v___x_2443_ = lean_unsigned_to_nat(1000000000u);
v___x_2444_ = lean_float_of_nat(v___x_2443_);
return v___x_2444_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10));
v___x_2462_ = l_Lean_MessageData_ofFormat(v___x_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object* v_setupImports_2463_, lean_object* v_stx_2464_, lean_object* v_origStx_2465_, lean_object* v_toProcessingContext_2466_, lean_object* v___x_2467_, lean_object* v_fileMap_2468_, lean_object* v_parserState_2469_, lean_object* v_a_2470_, lean_object* v___x_2471_, lean_object* v___x_2472_, lean_object* v___x_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_toProcessingContext_2476_; lean_object* v___x_2477_; 
v_toProcessingContext_2476_ = lean_ctor_get(v___y_2474_, 0);
lean_inc_ref(v_toProcessingContext_2476_);
lean_inc(v_stx_2464_);
v___x_2477_ = lean_apply_3(v_setupImports_2463_, v_stx_2464_, v_toProcessingContext_2476_, lean_box(0));
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2690_; 
v_a_2478_ = lean_ctor_get(v___x_2477_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2477_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2480_ = v___x_2477_;
v_isShared_2481_ = v_isSharedCheck_2690_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2477_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2690_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
if (lean_obj_tag(v_a_2478_) == 0)
{
lean_object* v_a_2482_; lean_object* v___x_2484_; 
lean_dec_ref(v___x_2473_);
lean_dec(v___x_2471_);
lean_dec_ref(v_parserState_2469_);
lean_dec_ref(v_fileMap_2468_);
lean_dec(v___x_2467_);
lean_dec_ref(v_toProcessingContext_2466_);
lean_dec(v_origStx_2465_);
lean_dec(v_stx_2464_);
v_a_2482_ = lean_ctor_get(v_a_2478_, 0);
lean_inc(v_a_2482_);
lean_dec_ref_known(v_a_2478_, 1);
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 0, v_a_2482_);
v___x_2484_ = v___x_2480_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2482_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2689_; 
v_a_2486_ = lean_ctor_get(v_a_2478_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_a_2478_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2488_ = v_a_2478_;
v_isShared_2489_ = v_isSharedCheck_2689_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v_a_2478_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2689_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v_mainModuleName_2491_; lean_object* v_package_x3f_2492_; uint8_t v_isModule_2493_; lean_object* v_imports_2494_; lean_object* v_opts_2495_; uint32_t v_trustLevel_2496_; lean_object* v_importArts_2497_; lean_object* v_plugins_2498_; double v___x_2499_; double v___x_2500_; double v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; lean_object* v___x_2506_; 
v___x_2490_ = lean_io_mono_nanos_now();
v_mainModuleName_2491_ = lean_ctor_get(v_a_2486_, 0);
lean_inc(v_mainModuleName_2491_);
v_package_x3f_2492_ = lean_ctor_get(v_a_2486_, 1);
lean_inc(v_package_x3f_2492_);
v_isModule_2493_ = lean_ctor_get_uint8(v_a_2486_, sizeof(void*)*6 + 4);
v_imports_2494_ = lean_ctor_get(v_a_2486_, 2);
lean_inc_ref(v_imports_2494_);
v_opts_2495_ = lean_ctor_get(v_a_2486_, 3);
lean_inc_ref(v_opts_2495_);
v_trustLevel_2496_ = lean_ctor_get_uint32(v_a_2486_, sizeof(void*)*6);
v_importArts_2497_ = lean_ctor_get(v_a_2486_, 4);
lean_inc(v_importArts_2497_);
v_plugins_2498_ = lean_ctor_get(v_a_2486_, 5);
lean_inc_ref(v_plugins_2498_);
lean_dec(v_a_2486_);
v___x_2499_ = lean_float_of_nat(v___x_2490_);
v___x_2500_ = lean_float_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0);
v___x_2501_ = lean_float_div(v___x_2499_, v___x_2500_);
v___x_2502_ = l_Lean_Elab_HeaderSyntax_startPos(v_stx_2464_);
v___x_2503_ = l_Lean_MessageLog_empty;
v___x_2504_ = 1;
lean_inc(v_stx_2464_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 0, v_stx_2464_);
v___x_2506_ = v___x_2488_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_stx_2464_);
v___x_2506_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2507_, 0, v_origStx_2465_);
lean_inc_ref(v___x_2506_);
lean_inc_ref(v_opts_2495_);
v___x_2508_ = l_Lean_Elab_processHeaderCore(v___x_2502_, v_imports_2494_, v_isModule_2493_, v_opts_2495_, v___x_2503_, v_toProcessingContext_2466_, v_trustLevel_2496_, v_plugins_2498_, v___x_2504_, v_mainModuleName_2491_, v_package_x3f_2492_, v_importArts_2497_, v___x_2506_, v___x_2507_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2679_; 
v_a_2509_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2511_ = v___x_2508_;
v_isShared_2512_ = v_isSharedCheck_2679_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2508_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2679_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v_fst_2513_; lean_object* v_snd_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2678_; 
v_fst_2513_ = lean_ctor_get(v_a_2509_, 0);
v_snd_2514_ = lean_ctor_get(v_a_2509_, 1);
v_isSharedCheck_2678_ = !lean_is_exclusive(v_a_2509_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2516_ = v_a_2509_;
v_isShared_2517_ = v_isSharedCheck_2678_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_snd_2514_);
lean_inc(v_fst_2513_);
lean_dec(v_a_2509_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2678_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2518_; double v___x_2519_; double v___x_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v_traceState_2538_; 
v___x_2518_ = lean_io_mono_nanos_now();
v___x_2519_ = lean_float_of_nat(v___x_2518_);
v___x_2520_ = lean_float_div(v___x_2519_, v___x_2500_);
lean_inc(v_snd_2514_);
v___x_2521_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2514_);
v___x_2522_ = l_Lean_MessageLog_hasErrors(v_snd_2514_);
if (v___x_2522_ == 0)
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_del_object(v___x_2480_);
lean_dec_ref(v___x_2473_);
v___x_2647_ = l_Lean_trace_profiler_output;
v___x_2648_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2495_, v___x_2647_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v___x_2649_; uint8_t v___x_2650_; 
v___x_2649_ = l_Lean_trace_profiler_serve;
v___x_2650_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_opts_2495_, v___x_2649_);
if (v___x_2650_ == 0)
{
lean_object* v___x_2651_; 
v___x_2651_ = l_Lean_instInhabitedTraceState_default;
v_traceState_2538_ = v___x_2651_;
goto v___jp_2537_;
}
else
{
goto v___jp_2631_;
}
}
else
{
lean_dec_ref_known(v___x_2648_, 1);
goto v___jp_2631_;
}
}
else
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; uint64_t v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; size_t v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2676_; 
lean_del_object(v___x_2516_);
lean_dec(v_snd_2514_);
lean_dec(v_fst_2513_);
lean_del_object(v___x_2511_);
lean_dec_ref(v___x_2506_);
lean_dec_ref(v_opts_2495_);
lean_dec(v___x_2471_);
lean_dec_ref(v_parserState_2469_);
lean_dec_ref(v_fileMap_2468_);
lean_dec(v_stx_2464_);
v___x_2652_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2653_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2654_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2467_, 2);
v___x_2655_ = l_Lean_Name_num___override(v___x_2654_, v___x_2467_);
v___x_2656_ = l_Lean_Name_str___override(v___x_2655_, v___x_2652_);
v___x_2657_ = l_Lean_Name_str___override(v___x_2656_, v___x_2653_);
v___x_2658_ = l_Lean_Name_str___override(v___x_2657_, v___x_2652_);
v___x_2659_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2660_ = l_Lean_Name_str___override(v___x_2658_, v___x_2659_);
v___x_2661_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_2662_ = l_Lean_Name_str___override(v___x_2660_, v___x_2661_);
v___x_2663_ = l_Lean_Name_toString(v___x_2662_, v___x_2504_);
v___x_2664_ = lean_box(0);
v___x_2665_ = 0ULL;
v___x_2666_ = lean_unsigned_to_nat(32u);
v___x_2667_ = lean_mk_empty_array_with_capacity(v___x_2666_);
v___x_2668_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_2669_ = ((size_t)5ULL);
v___x_2670_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set(v___x_2670_, 1, v___x_2667_);
lean_ctor_set(v___x_2670_, 2, v___x_2467_);
lean_ctor_set(v___x_2670_, 3, v___x_2467_);
lean_ctor_set_usize(v___x_2670_, 4, v___x_2669_);
v___x_2671_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
lean_ctor_set_uint64(v___x_2671_, sizeof(void*)*1, v___x_2665_);
v___x_2672_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2672_, 0, v___x_2663_);
lean_ctor_set(v___x_2672_, 1, v___x_2521_);
lean_ctor_set(v___x_2672_, 2, v___x_2664_);
lean_ctor_set(v___x_2672_, 3, v___x_2671_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*4, v___x_2522_);
v___x_2673_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2473_);
v___x_2674_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2672_);
lean_ctor_set(v___x_2674_, 1, v___x_2673_);
lean_ctor_set(v___x_2674_, 2, v___x_2664_);
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 0, v___x_2674_);
v___x_2676_ = v___x_2480_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2674_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
v___jp_2523_:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2535_; 
v___x_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___y_2529_);
v___x_2531_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2531_, 0, v___y_2525_);
lean_ctor_set(v___x_2531_, 1, v___x_2521_);
lean_ctor_set(v___x_2531_, 2, v___x_2530_);
lean_ctor_set(v___x_2531_, 3, v___y_2527_);
lean_ctor_set_uint8(v___x_2531_, sizeof(void*)*4, v___x_2522_);
v___x_2532_ = l_Lean_Language_SnapshotTask_finished___redArg(v___y_2524_, v___x_2531_);
v___x_2533_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2533_, 0, v___y_2528_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
lean_ctor_set(v___x_2533_, 2, v___y_2526_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2533_);
v___x_2535_ = v___x_2511_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2533_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
v___jp_2537_:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Lean_Language_Lean_reparseOptions(v_opts_2495_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v___x_2541_; lean_object* v_env_2542_; lean_object* v_messages_2543_; lean_object* v_scopes_2544_; lean_object* v_usedQuotCtxts_2545_; lean_object* v_nextMacroScope_2546_; lean_object* v_maxRecDepth_2547_; lean_object* v_ngen_2548_; lean_object* v_auxDeclNGen_2549_; lean_object* v_snapshotTasks_2550_; lean_object* v_prevLinterStates_2551_; lean_object* v_codeQualityEntryTasks_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2620_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2539_, 1);
lean_inc(v_fst_2513_);
v___x_2541_ = l_Lean_Elab_Command_mkState(v_fst_2513_, v_snd_2514_, v_a_2540_);
v_env_2542_ = lean_ctor_get(v___x_2541_, 0);
v_messages_2543_ = lean_ctor_get(v___x_2541_, 1);
v_scopes_2544_ = lean_ctor_get(v___x_2541_, 2);
v_usedQuotCtxts_2545_ = lean_ctor_get(v___x_2541_, 3);
v_nextMacroScope_2546_ = lean_ctor_get(v___x_2541_, 4);
v_maxRecDepth_2547_ = lean_ctor_get(v___x_2541_, 5);
v_ngen_2548_ = lean_ctor_get(v___x_2541_, 6);
v_auxDeclNGen_2549_ = lean_ctor_get(v___x_2541_, 7);
v_snapshotTasks_2550_ = lean_ctor_get(v___x_2541_, 10);
v_prevLinterStates_2551_ = lean_ctor_get(v___x_2541_, 11);
v_codeQualityEntryTasks_2552_ = lean_ctor_get(v___x_2541_, 12);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2620_ == 0)
{
lean_object* v_unused_2621_; lean_object* v_unused_2622_; 
v_unused_2621_ = lean_ctor_get(v___x_2541_, 9);
lean_dec(v_unused_2621_);
v_unused_2622_ = lean_ctor_get(v___x_2541_, 8);
lean_dec(v_unused_2622_);
v___x_2554_ = v___x_2541_;
v_isShared_2555_ = v_isSharedCheck_2620_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2552_);
lean_inc(v_prevLinterStates_2551_);
lean_inc(v_snapshotTasks_2550_);
lean_inc(v_auxDeclNGen_2549_);
lean_inc(v_ngen_2548_);
lean_inc(v_maxRecDepth_2547_);
lean_inc(v_nextMacroScope_2546_);
lean_inc(v_usedQuotCtxts_2545_);
lean_inc(v_scopes_2544_);
lean_inc(v_messages_2543_);
lean_inc(v_env_2542_);
lean_dec(v___x_2541_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2620_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2568_; 
v___x_2556_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2557_ = lean_box(0);
lean_inc_n(v___x_2467_, 4);
v___x_2558_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2467_);
lean_ctor_set(v___x_2558_, 1, v___x_2467_);
lean_ctor_set(v___x_2558_, 2, v___x_2467_);
lean_ctor_set(v___x_2558_, 3, v___x_2467_);
lean_ctor_set(v___x_2558_, 4, v___x_2556_);
lean_ctor_set(v___x_2558_, 5, v___x_2556_);
lean_ctor_set(v___x_2558_, 6, v___x_2556_);
lean_ctor_set(v___x_2558_, 7, v___x_2556_);
lean_ctor_set(v___x_2558_, 8, v___x_2556_);
lean_ctor_set(v___x_2558_, 9, v___x_2556_);
lean_ctor_set(v___x_2558_, 10, v___x_2556_);
v___x_2559_ = l_Lean_Options_empty;
v___x_2560_ = lean_box(0);
v___x_2561_ = lean_box(0);
v___x_2562_ = lean_unsigned_to_nat(1u);
v___x_2563_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3));
v___x_2564_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2564_, 0, v_fst_2513_);
lean_ctor_set(v___x_2564_, 1, v___x_2557_);
lean_ctor_set(v___x_2564_, 2, v_fileMap_2468_);
lean_ctor_set(v___x_2564_, 3, v___x_2558_);
lean_ctor_set(v___x_2564_, 4, v___x_2559_);
lean_ctor_set(v___x_2564_, 5, v___x_2560_);
lean_ctor_set(v___x_2564_, 6, v___x_2561_);
lean_ctor_set(v___x_2564_, 7, v___x_2563_);
v___x_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2564_);
v___x_2566_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5));
lean_inc(v_stx_2464_);
if (v_isShared_2517_ == 0)
{
lean_ctor_set(v___x_2516_, 1, v_stx_2464_);
lean_ctor_set(v___x_2516_, 0, v___x_2566_);
v___x_2568_ = v___x_2516_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v___x_2566_);
lean_ctor_set(v_reuseFailAlloc_2619_, 1, v_stx_2464_);
v___x_2568_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2583_; 
v___x_2569_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
v___x_2570_ = lean_unsigned_to_nat(2u);
v___x_2571_ = l_Lean_Syntax_getArg(v_stx_2464_, v___x_2570_);
lean_dec(v_stx_2464_);
v___x_2572_ = l_Lean_Syntax_getArgs(v___x_2571_);
lean_dec(v___x_2571_);
v___x_2573_ = lean_array_to_list(v___x_2572_);
v___x_2574_ = l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(v___x_2573_, v___x_2561_);
v___x_2575_ = l_Lean_List_toPArray_x27___redArg(v___x_2574_);
v___x_2576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2569_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2565_);
lean_ctor_set(v___x_2577_, 1, v___x_2576_);
v___x_2578_ = lean_mk_empty_array_with_capacity(v___x_2562_);
v___x_2579_ = lean_array_push(v___x_2578_, v___x_2577_);
v___x_2580_ = l_Lean_Array_toPArray_x27___redArg(v___x_2579_);
lean_dec_ref(v___x_2579_);
lean_inc_ref(v___x_2580_);
v___x_2581_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2581_, 0, v___x_2556_);
lean_ctor_set(v___x_2581_, 1, v___x_2556_);
lean_ctor_set(v___x_2581_, 2, v___x_2580_);
lean_ctor_set_uint8(v___x_2581_, sizeof(void*)*3, v___x_2504_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 9, v_traceState_2538_);
lean_ctor_set(v___x_2554_, 8, v___x_2581_);
v___x_2583_ = v___x_2554_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_env_2542_);
lean_ctor_set(v_reuseFailAlloc_2618_, 1, v_messages_2543_);
lean_ctor_set(v_reuseFailAlloc_2618_, 2, v_scopes_2544_);
lean_ctor_set(v_reuseFailAlloc_2618_, 3, v_usedQuotCtxts_2545_);
lean_ctor_set(v_reuseFailAlloc_2618_, 4, v_nextMacroScope_2546_);
lean_ctor_set(v_reuseFailAlloc_2618_, 5, v_maxRecDepth_2547_);
lean_ctor_set(v_reuseFailAlloc_2618_, 6, v_ngen_2548_);
lean_ctor_set(v_reuseFailAlloc_2618_, 7, v_auxDeclNGen_2549_);
lean_ctor_set(v_reuseFailAlloc_2618_, 8, v___x_2581_);
lean_ctor_set(v_reuseFailAlloc_2618_, 9, v_traceState_2538_);
lean_ctor_set(v_reuseFailAlloc_2618_, 10, v_snapshotTasks_2550_);
lean_ctor_set(v_reuseFailAlloc_2618_, 11, v_prevLinterStates_2551_);
lean_ctor_set(v_reuseFailAlloc_2618_, 12, v_codeQualityEntryTasks_2552_);
v___x_2583_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; size_t v___x_2594_; lean_object* v___x_2595_; lean_object* v_size_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; uint64_t v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; uint8_t v___x_2615_; 
v___x_2584_ = lean_io_promise_new();
v___x_2585_ = l_IO_CancelToken_new();
lean_inc_ref(v___x_2585_);
lean_inc(v___x_2584_);
lean_inc_ref(v___x_2583_);
v___x_2586_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2557_, v_parserState_2469_, v___x_2583_, v___x_2584_, v___x_2504_, v___x_2585_, v___x_2561_, v_a_2470_);
v___x_2587_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2588_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2589_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2467_, 3);
v___x_2590_ = l_Lean_Name_num___override(v___x_2589_, v___x_2467_);
v___x_2591_ = lean_unsigned_to_nat(32u);
v___x_2592_ = lean_mk_empty_array_with_capacity(v___x_2591_);
v___x_2593_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_2594_ = ((size_t)5ULL);
v___x_2595_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2595_, 0, v___x_2593_);
lean_ctor_set(v___x_2595_, 1, v___x_2592_);
lean_ctor_set(v___x_2595_, 2, v___x_2467_);
lean_ctor_set(v___x_2595_, 3, v___x_2467_);
lean_ctor_set_usize(v___x_2595_, 4, v___x_2594_);
v_size_2596_ = lean_ctor_get(v___x_2580_, 2);
v___x_2597_ = l_Lean_Name_str___override(v___x_2590_, v___x_2587_);
v___x_2598_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2471_);
v___x_2599_ = l_Lean_Name_str___override(v___x_2597_, v___x_2588_);
v___x_2600_ = l_Lean_Name_str___override(v___x_2599_, v___x_2587_);
v___x_2601_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2602_ = l_Lean_Name_str___override(v___x_2600_, v___x_2601_);
v___x_2603_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_2604_ = l_Lean_Name_str___override(v___x_2602_, v___x_2603_);
v___x_2605_ = l_Lean_Name_toString(v___x_2604_, v___x_2504_);
v___x_2606_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2607_ = 0ULL;
v___x_2608_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2608_, 0, v___x_2595_);
lean_ctor_set_uint64(v___x_2608_, sizeof(void*)*1, v___x_2607_);
v___x_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2585_);
v___x_2610_ = l_IO_Promise_result_x21___redArg(v___x_2584_);
lean_dec(v___x_2584_);
v___x_2611_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2471_);
lean_ctor_set(v___x_2611_, 1, v___x_2598_);
lean_ctor_set(v___x_2611_, 2, v___x_2609_);
lean_ctor_set(v___x_2611_, 3, v___x_2610_);
v___x_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2583_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2612_);
lean_inc_ref(v___x_2608_);
lean_inc_ref(v___x_2605_);
v___x_2614_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2614_, 0, v___x_2605_);
lean_ctor_set(v___x_2614_, 1, v___x_2606_);
lean_ctor_set(v___x_2614_, 2, v___x_2557_);
lean_ctor_set(v___x_2614_, 3, v___x_2608_);
lean_ctor_set_uint8(v___x_2614_, sizeof(void*)*4, v___x_2522_);
v___x_2615_ = lean_nat_dec_lt(v___x_2467_, v_size_2596_);
if (v___x_2615_ == 0)
{
lean_object* v___x_2616_; 
lean_dec_ref(v___x_2580_);
lean_dec(v___x_2467_);
v___x_2616_ = l_outOfBounds___redArg(v___x_2472_);
v___y_2524_ = v___x_2506_;
v___y_2525_ = v___x_2605_;
v___y_2526_ = v___x_2613_;
v___y_2527_ = v___x_2608_;
v___y_2528_ = v___x_2614_;
v___y_2529_ = v___x_2616_;
goto v___jp_2523_;
}
else
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2472_, v___x_2580_, v___x_2467_);
lean_dec(v___x_2467_);
lean_dec_ref(v___x_2580_);
v___y_2524_ = v___x_2506_;
v___y_2525_ = v___x_2605_;
v___y_2526_ = v___x_2613_;
v___y_2527_ = v___x_2608_;
v___y_2528_ = v___x_2614_;
v___y_2529_ = v___x_2617_;
goto v___jp_2523_;
}
}
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2630_; 
lean_dec_ref(v_traceState_2538_);
lean_dec_ref(v___x_2521_);
lean_del_object(v___x_2516_);
lean_dec(v_snd_2514_);
lean_dec(v_fst_2513_);
lean_del_object(v___x_2511_);
lean_dec_ref(v___x_2506_);
lean_dec(v___x_2471_);
lean_dec_ref(v_parserState_2469_);
lean_dec_ref(v_fileMap_2468_);
lean_dec(v___x_2467_);
lean_dec(v_stx_2464_);
v_a_2623_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2539_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2539_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2628_; 
if (v_isShared_2626_ == 0)
{
v___x_2628_ = v___x_2625_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_a_2623_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
v___jp_2631_:
{
uint64_t v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2632_ = 0ULL;
v___x_2633_ = lean_box(0);
v___x_2634_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8));
v___x_2635_ = lean_box(0);
v___x_2636_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2_spec__2_spec__4_spec__10___closed__0));
v___x_2637_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2637_, 0, v___x_2634_);
lean_ctor_set(v___x_2637_, 1, v___x_2635_);
lean_ctor_set(v___x_2637_, 2, v___x_2636_);
lean_ctor_set_float(v___x_2637_, sizeof(void*)*3, v___x_2501_);
lean_ctor_set_float(v___x_2637_, sizeof(void*)*3 + 8, v___x_2520_);
lean_ctor_set_uint8(v___x_2637_, sizeof(void*)*3 + 16, v___x_2504_);
v___x_2638_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11);
v___x_2639_ = lean_mk_empty_array_with_capacity(v___x_2467_);
v___x_2640_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2637_);
lean_ctor_set(v___x_2640_, 1, v___x_2638_);
lean_ctor_set(v___x_2640_, 2, v___x_2639_);
v___x_2641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2633_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = lean_unsigned_to_nat(1u);
v___x_2643_ = lean_mk_empty_array_with_capacity(v___x_2642_);
v___x_2644_ = lean_array_push(v___x_2643_, v___x_2641_);
v___x_2645_ = l_Lean_Array_toPArray_x27___redArg(v___x_2644_);
lean_dec_ref(v___x_2644_);
v___x_2646_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2646_, 0, v___x_2645_);
lean_ctor_set_uint64(v___x_2646_, sizeof(void*)*1, v___x_2632_);
v_traceState_2538_ = v___x_2646_;
goto v___jp_2537_;
}
}
}
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec_ref(v___x_2506_);
lean_dec_ref(v_opts_2495_);
lean_del_object(v___x_2480_);
lean_dec_ref(v___x_2473_);
lean_dec(v___x_2471_);
lean_dec_ref(v_parserState_2469_);
lean_dec_ref(v_fileMap_2468_);
lean_dec(v___x_2467_);
lean_dec(v_stx_2464_);
v_a_2680_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2508_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2508_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
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
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref(v___x_2473_);
lean_dec(v___x_2471_);
lean_dec_ref(v_parserState_2469_);
lean_dec_ref(v_fileMap_2468_);
lean_dec(v___x_2467_);
lean_dec_ref(v_toProcessingContext_2466_);
lean_dec(v_origStx_2465_);
lean_dec(v_stx_2464_);
v_a_2691_ = lean_ctor_get(v___x_2477_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2477_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2477_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2477_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object* v_setupImports_2699_, lean_object* v_stx_2700_, lean_object* v_origStx_2701_, lean_object* v_toProcessingContext_2702_, lean_object* v___x_2703_, lean_object* v_fileMap_2704_, lean_object* v_parserState_2705_, lean_object* v_a_2706_, lean_object* v___x_2707_, lean_object* v___x_2708_, lean_object* v___x_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(v_setupImports_2699_, v_stx_2700_, v_origStx_2701_, v_toProcessingContext_2702_, v___x_2703_, v_fileMap_2704_, v_parserState_2705_, v_a_2706_, v___x_2707_, v___x_2708_, v___x_2709_, v___y_2710_);
lean_dec_ref(v___y_2710_);
lean_dec_ref(v___x_2708_);
lean_dec_ref(v_a_2706_);
return v_res_2712_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0(void){
_start:
{
lean_object* v___x_2713_; lean_object* v___f_2714_; 
v___x_2713_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_2714_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0), 2, 1);
lean_closure_set(v___f_2714_, 0, v___x_2713_);
return v___f_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object* v_setupImports_2715_, lean_object* v_stx_2716_, lean_object* v_origStx_2717_, lean_object* v_parserState_2718_, lean_object* v_a_2719_){
_start:
{
lean_object* v_toProcessingContext_2721_; lean_object* v_fileMap_2722_; lean_object* v_endPos_2723_; lean_object* v___x_2724_; lean_object* v___f_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___f_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v_toProcessingContext_2721_ = lean_ctor_get(v_a_2719_, 0);
v_fileMap_2722_ = lean_ctor_get(v_toProcessingContext_2721_, 2);
v_endPos_2723_ = lean_ctor_get(v_toProcessingContext_2721_, 3);
v___x_2724_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_2725_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0);
v___x_2726_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_2727_ = lean_box(0);
v___x_2728_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_a_2719_, 2);
lean_inc_ref(v_fileMap_2722_);
lean_inc_ref(v_toProcessingContext_2721_);
v___f_2729_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed), 13, 11);
lean_closure_set(v___f_2729_, 0, v_setupImports_2715_);
lean_closure_set(v___f_2729_, 1, v_stx_2716_);
lean_closure_set(v___f_2729_, 2, v_origStx_2717_);
lean_closure_set(v___f_2729_, 3, v_toProcessingContext_2721_);
lean_closure_set(v___f_2729_, 4, v___x_2728_);
lean_closure_set(v___f_2729_, 5, v_fileMap_2722_);
lean_closure_set(v___f_2729_, 6, v_parserState_2718_);
lean_closure_set(v___f_2729_, 7, v_a_2719_);
lean_closure_set(v___f_2729_, 8, v___x_2727_);
lean_closure_set(v___f_2729_, 9, v___x_2726_);
lean_closure_set(v___f_2729_, 10, v___x_2724_);
lean_inc(v_endPos_2723_);
v___x_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2728_);
lean_ctor_set(v___x_2730_, 1, v_endPos_2723_);
v___x_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
v___x_2732_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed), 5, 4);
lean_closure_set(v___x_2732_, 0, lean_box(0));
lean_closure_set(v___x_2732_, 1, v___f_2725_);
lean_closure_set(v___x_2732_, 2, v___f_2729_);
lean_closure_set(v___x_2732_, 3, v_a_2719_);
v___x_2733_ = l_Lean_Language_SnapshotTask_ofIO___redArg(v___x_2727_, v___x_2727_, v___x_2731_, v___x_2732_);
return v___x_2733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object* v_setupImports_2734_, lean_object* v_stx_2735_, lean_object* v_origStx_2736_, lean_object* v_parserState_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_2734_, v_stx_2735_, v_origStx_2736_, v_parserState_2737_, v_a_2738_);
lean_dec_ref(v_a_2738_);
return v_res_2740_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2741_ = lean_box(0);
v___x_2742_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2741_);
return v___x_2742_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3(void){
_start:
{
uint8_t v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2747_ = 1;
v___x_2748_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2));
v___x_2749_ = l_Lean_Name_toString(v___x_2748_, v___x_2747_);
return v___x_2749_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4(void){
_start:
{
uint8_t v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2750_ = 0;
v___x_2751_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2752_ = lean_box(0);
v___x_2753_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2754_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2755_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
lean_ctor_set(v___x_2755_, 1, v___x_2753_);
lean_ctor_set(v___x_2755_, 2, v___x_2752_);
lean_ctor_set(v___x_2755_, 3, v___x_2751_);
lean_ctor_set_uint8(v___x_2755_, sizeof(void*)*4, v___x_2750_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object* v_newParserState_2756_, lean_object* v_cmdState_2757_, lean_object* v_a_2758_, lean_object* v_toSnapshot_2759_, lean_object* v_newStx_2760_, lean_object* v_oldCmd_2761_){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; uint8_t v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v_diagnostics_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2791_; 
v___x_2763_ = lean_io_promise_new();
v___x_2764_ = l_IO_CancelToken_new();
v___x_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2765_, 0, v_oldCmd_2761_);
v___x_2766_ = 1;
v___x_2767_ = lean_box(0);
lean_inc_ref(v___x_2764_);
lean_inc(v___x_2763_);
lean_inc_ref(v_cmdState_2757_);
v___x_2768_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2765_, v_newParserState_2756_, v_cmdState_2757_, v___x_2763_, v___x_2766_, v___x_2764_, v___x_2767_, v_a_2758_);
v_diagnostics_2769_ = lean_ctor_get(v_toSnapshot_2759_, 1);
v_isSharedCheck_2791_ = !lean_is_exclusive(v_toSnapshot_2759_);
if (v_isSharedCheck_2791_ == 0)
{
lean_object* v_unused_2792_; lean_object* v_unused_2793_; lean_object* v_unused_2794_; 
v_unused_2792_ = lean_ctor_get(v_toSnapshot_2759_, 3);
lean_dec(v_unused_2792_);
v_unused_2793_ = lean_ctor_get(v_toSnapshot_2759_, 2);
lean_dec(v_unused_2793_);
v_unused_2794_ = lean_ctor_get(v_toSnapshot_2759_, 0);
lean_dec(v_unused_2794_);
v___x_2771_ = v_toSnapshot_2759_;
v_isShared_2772_ = v_isSharedCheck_2791_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_diagnostics_2769_);
lean_dec(v_toSnapshot_2759_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2791_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; uint8_t v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2786_; 
v___x_2773_ = lean_box(0);
v___x_2774_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0);
v___x_2775_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2776_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2764_);
v___x_2778_ = l_IO_Promise_result_x21___redArg(v___x_2763_);
lean_dec(v___x_2763_);
v___x_2779_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2773_);
lean_ctor_set(v___x_2779_, 1, v___x_2774_);
lean_ctor_set(v___x_2779_, 2, v___x_2777_);
lean_ctor_set(v___x_2779_, 3, v___x_2778_);
v___x_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2780_, 0, v_cmdState_2757_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2780_);
v___x_2782_ = 0;
v___x_2783_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2784_, 0, v_newStx_2760_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 3, v___x_2776_);
lean_ctor_set(v___x_2771_, 2, v___x_2773_);
lean_ctor_set(v___x_2771_, 0, v___x_2775_);
v___x_2786_ = v___x_2771_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v___x_2775_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v_diagnostics_2769_);
lean_ctor_set(v_reuseFailAlloc_2790_, 2, v___x_2773_);
lean_ctor_set(v_reuseFailAlloc_2790_, 3, v___x_2776_);
v___x_2786_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
lean_ctor_set_uint8(v___x_2786_, sizeof(void*)*4, v___x_2782_);
v___x_2787_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2784_, v___x_2786_);
v___x_2788_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2783_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
lean_ctor_set(v___x_2788_, 2, v___x_2781_);
v___x_2789_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2773_, v___x_2788_);
return v___x_2789_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object* v_newParserState_2795_, lean_object* v_cmdState_2796_, lean_object* v_a_2797_, lean_object* v_toSnapshot_2798_, lean_object* v_newStx_2799_, lean_object* v_oldCmd_2800_, lean_object* v___y_2801_){
_start:
{
lean_object* v_res_2802_; 
v_res_2802_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(v_newParserState_2795_, v_cmdState_2796_, v_a_2797_, v_toSnapshot_2798_, v_newStx_2799_, v_oldCmd_2800_);
lean_dec_ref(v_a_2797_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object* v_newParserState_2803_, lean_object* v_a_2804_, lean_object* v_newStx_2805_, lean_object* v___x_2806_, lean_object* v_oldProcessed_2807_){
_start:
{
lean_object* v_result_x3f_2809_; 
v_result_x3f_2809_ = lean_ctor_get(v_oldProcessed_2807_, 2);
if (lean_obj_tag(v_result_x3f_2809_) == 1)
{
lean_object* v_val_2810_; lean_object* v_firstCmdSnap_2811_; lean_object* v_toSnapshot_2812_; lean_object* v_cmdState_2813_; lean_object* v_stx_x3f_2814_; lean_object* v___f_2815_; lean_object* v___x_2816_; uint8_t v___x_2817_; lean_object* v___x_2818_; 
v_val_2810_ = lean_ctor_get(v_result_x3f_2809_, 0);
lean_inc(v_val_2810_);
v_firstCmdSnap_2811_ = lean_ctor_get(v_val_2810_, 1);
lean_inc_ref(v_firstCmdSnap_2811_);
v_toSnapshot_2812_ = lean_ctor_get(v_oldProcessed_2807_, 0);
lean_inc_ref(v_toSnapshot_2812_);
lean_dec_ref(v_oldProcessed_2807_);
v_cmdState_2813_ = lean_ctor_get(v_val_2810_, 0);
lean_inc_ref(v_cmdState_2813_);
lean_dec(v_val_2810_);
v_stx_x3f_2814_ = lean_ctor_get(v_firstCmdSnap_2811_, 0);
lean_inc(v_stx_x3f_2814_);
lean_inc_ref(v_a_2804_);
v___f_2815_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2815_, 0, v_newParserState_2803_);
lean_closure_set(v___f_2815_, 1, v_cmdState_2813_);
lean_closure_set(v___f_2815_, 2, v_a_2804_);
lean_closure_set(v___f_2815_, 3, v_toSnapshot_2812_);
lean_closure_set(v___f_2815_, 4, v_newStx_2805_);
v___x_2816_ = lean_box(0);
v___x_2817_ = 1;
v___x_2818_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_firstCmdSnap_2811_, v___f_2815_, v_stx_x3f_2814_, v___x_2806_, v___x_2816_, v___x_2817_);
return v___x_2818_;
}
else
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
lean_dec(v___x_2806_);
lean_dec_ref(v_newParserState_2803_);
v___x_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2819_, 0, v_newStx_2805_);
v___x_2820_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2819_, v_oldProcessed_2807_);
return v___x_2820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object* v_newParserState_2821_, lean_object* v_a_2822_, lean_object* v_newStx_2823_, lean_object* v___x_2824_, lean_object* v_oldProcessed_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v_res_2827_; 
v_res_2827_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(v_newParserState_2821_, v_a_2822_, v_newStx_2823_, v___x_2824_, v_oldProcessed_2825_);
lean_dec_ref(v_a_2822_);
return v_res_2827_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0(void){
_start:
{
uint8_t v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2828_ = 0;
v___x_2829_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2830_ = lean_box(0);
v___x_2831_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2832_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2833_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2833_, 0, v___x_2832_);
lean_ctor_set(v___x_2833_, 1, v___x_2831_);
lean_ctor_set(v___x_2833_, 2, v___x_2830_);
lean_ctor_set(v___x_2833_, 3, v___x_2829_);
lean_ctor_set_uint8(v___x_2833_, sizeof(void*)*4, v___x_2828_);
return v___x_2833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object* v_toProcessingContext_2834_, lean_object* v_a_2835_, lean_object* v_old_2836_, lean_object* v_newStx_2837_, lean_object* v_newParserState_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v_result_x3f_2841_; 
v_result_x3f_2841_ = lean_ctor_get(v_old_2836_, 4);
lean_inc(v_result_x3f_2841_);
if (lean_obj_tag(v_result_x3f_2841_) == 1)
{
lean_object* v_val_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2896_; 
v_val_2842_ = lean_ctor_get(v_result_x3f_2841_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_result_x3f_2841_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2844_ = v_result_x3f_2841_;
v_isShared_2845_ = v_isSharedCheck_2896_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_val_2842_);
lean_dec(v_result_x3f_2841_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2896_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v_processedSnap_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2894_; 
v_processedSnap_2846_ = lean_ctor_get(v_val_2842_, 1);
v_isSharedCheck_2894_ = !lean_is_exclusive(v_val_2842_);
if (v_isSharedCheck_2894_ == 0)
{
lean_object* v_unused_2895_; 
v_unused_2895_ = lean_ctor_get(v_val_2842_, 0);
lean_dec(v_unused_2895_);
v___x_2848_ = v_val_2842_;
v_isShared_2849_ = v_isSharedCheck_2894_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_processedSnap_2846_);
lean_dec(v_val_2842_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2894_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v_toSnapshot_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2889_; 
v_toSnapshot_2850_ = lean_ctor_get(v_old_2836_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v_old_2836_);
if (v_isSharedCheck_2889_ == 0)
{
lean_object* v_unused_2890_; lean_object* v_unused_2891_; lean_object* v_unused_2892_; lean_object* v_unused_2893_; 
v_unused_2890_ = lean_ctor_get(v_old_2836_, 4);
lean_dec(v_unused_2890_);
v_unused_2891_ = lean_ctor_get(v_old_2836_, 3);
lean_dec(v_unused_2891_);
v_unused_2892_ = lean_ctor_get(v_old_2836_, 2);
lean_dec(v_unused_2892_);
v_unused_2893_ = lean_ctor_get(v_old_2836_, 1);
lean_dec(v_unused_2893_);
v___x_2852_ = v_old_2836_;
v_isShared_2853_ = v_isSharedCheck_2889_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_toSnapshot_2850_);
lean_dec(v_old_2836_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2889_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v_pos_2854_; lean_object* v_endPos_2855_; lean_object* v_stx_x3f_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___f_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; lean_object* v___x_2862_; lean_object* v_diagnostics_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2885_; 
v_pos_2854_ = lean_ctor_get(v_newParserState_2838_, 0);
v_endPos_2855_ = lean_ctor_get(v_toProcessingContext_2834_, 3);
v_stx_x3f_2856_ = lean_ctor_get(v_processedSnap_2846_, 0);
lean_inc(v_stx_x3f_2856_);
lean_inc(v_endPos_2855_);
lean_inc(v_pos_2854_);
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v_pos_2854_);
lean_ctor_set(v___x_2857_, 1, v_endPos_2855_);
v___x_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
lean_inc_ref(v___x_2858_);
lean_inc(v_newStx_2837_);
lean_inc_ref(v_a_2835_);
lean_inc_ref(v_newParserState_2838_);
v___f_2859_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed), 6, 4);
lean_closure_set(v___f_2859_, 0, v_newParserState_2838_);
lean_closure_set(v___f_2859_, 1, v_a_2835_);
lean_closure_set(v___f_2859_, 2, v_newStx_2837_);
lean_closure_set(v___f_2859_, 3, v___x_2858_);
v___x_2860_ = lean_box(0);
v___x_2861_ = 1;
v___x_2862_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_processedSnap_2846_, v___f_2859_, v_stx_x3f_2856_, v___x_2858_, v___x_2860_, v___x_2861_);
v_diagnostics_2863_ = lean_ctor_get(v_toSnapshot_2850_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_toSnapshot_2850_);
if (v_isSharedCheck_2885_ == 0)
{
lean_object* v_unused_2886_; lean_object* v_unused_2887_; lean_object* v_unused_2888_; 
v_unused_2886_ = lean_ctor_get(v_toSnapshot_2850_, 3);
lean_dec(v_unused_2886_);
v_unused_2887_ = lean_ctor_get(v_toSnapshot_2850_, 2);
lean_dec(v_unused_2887_);
v_unused_2888_ = lean_ctor_get(v_toSnapshot_2850_, 0);
lean_dec(v_unused_2888_);
v___x_2865_ = v_toSnapshot_2850_;
v_isShared_2866_ = v_isSharedCheck_2885_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_diagnostics_2863_);
lean_dec(v_toSnapshot_2850_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2885_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2870_; 
v___x_2867_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2868_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 1, v___x_2862_);
lean_ctor_set(v___x_2848_, 0, v_newParserState_2838_);
v___x_2870_ = v___x_2848_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_newParserState_2838_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v___x_2862_);
v___x_2870_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
lean_object* v___x_2872_; 
if (v_isShared_2845_ == 0)
{
lean_ctor_set(v___x_2844_, 0, v___x_2870_);
v___x_2872_ = v___x_2844_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2870_);
v___x_2872_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
uint8_t v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2877_; 
v___x_2873_ = 0;
v___x_2874_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0);
lean_inc(v_newStx_2837_);
v___x_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2875_, 0, v_newStx_2837_);
if (v_isShared_2866_ == 0)
{
lean_ctor_set(v___x_2865_, 3, v___x_2868_);
lean_ctor_set(v___x_2865_, 2, v___x_2860_);
lean_ctor_set(v___x_2865_, 0, v___x_2867_);
v___x_2877_ = v___x_2865_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v___x_2867_);
lean_ctor_set(v_reuseFailAlloc_2882_, 1, v_diagnostics_2863_);
lean_ctor_set(v_reuseFailAlloc_2882_, 2, v___x_2860_);
lean_ctor_set(v_reuseFailAlloc_2882_, 3, v___x_2868_);
v___x_2877_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
lean_object* v___x_2878_; lean_object* v___x_2880_; 
lean_ctor_set_uint8(v___x_2877_, sizeof(void*)*4, v___x_2873_);
v___x_2878_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2875_, v___x_2877_);
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 4, v___x_2872_);
lean_ctor_set(v___x_2852_, 3, v_newStx_2837_);
lean_ctor_set(v___x_2852_, 2, v_toProcessingContext_2834_);
lean_ctor_set(v___x_2852_, 1, v___x_2878_);
lean_ctor_set(v___x_2852_, 0, v___x_2874_);
v___x_2880_ = v___x_2852_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v___x_2874_);
lean_ctor_set(v_reuseFailAlloc_2881_, 1, v___x_2878_);
lean_ctor_set(v_reuseFailAlloc_2881_, 2, v_toProcessingContext_2834_);
lean_ctor_set(v_reuseFailAlloc_2881_, 3, v_newStx_2837_);
lean_ctor_set(v_reuseFailAlloc_2881_, 4, v___x_2872_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
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
lean_dec(v_result_x3f_2841_);
lean_dec_ref(v_newParserState_2838_);
lean_dec(v_newStx_2837_);
lean_dec_ref(v_toProcessingContext_2834_);
return v_old_2836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object* v_toProcessingContext_2897_, lean_object* v_a_2898_, lean_object* v_old_2899_, lean_object* v_newStx_2900_, lean_object* v_newParserState_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v_res_2904_; 
v_res_2904_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_2897_, v_a_2898_, v_old_2899_, v_newStx_2900_, v_newParserState_2901_, v___y_2902_);
lean_dec_ref(v___y_2902_);
lean_dec_ref(v_a_2898_);
return v_res_2904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object* v_toProcessingContext_2905_, lean_object* v_setupImports_2906_, lean_object* v_old_x3f_2907_, lean_object* v___x_2908_, lean_object* v___f_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v___x_2912_; 
lean_inc_ref(v_toProcessingContext_2905_);
v___x_2912_ = l_Lean_Parser_parseHeader(v_toProcessingContext_2905_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2982_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2915_ = v___x_2912_;
v_isShared_2916_ = v_isSharedCheck_2982_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2912_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2982_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v_snd_2917_; lean_object* v_fst_2918_; lean_object* v_fst_2919_; lean_object* v_snd_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2981_; 
v_snd_2917_ = lean_ctor_get(v_a_2913_, 1);
lean_inc(v_snd_2917_);
v_fst_2918_ = lean_ctor_get(v_a_2913_, 0);
lean_inc(v_fst_2918_);
lean_dec(v_a_2913_);
v_fst_2919_ = lean_ctor_get(v_snd_2917_, 0);
v_snd_2920_ = lean_ctor_get(v_snd_2917_, 1);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_snd_2917_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2922_ = v_snd_2917_;
v_isShared_2923_ = v_isSharedCheck_2981_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_snd_2920_);
lean_inc(v_fst_2919_);
lean_dec(v_snd_2917_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2981_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
uint8_t v___x_2924_; 
v___x_2924_ = l_Lean_MessageLog_hasErrors(v_snd_2920_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2925_; lean_object* v___y_2927_; 
lean_inc(v_fst_2918_);
v___x_2925_ = l_Lean_Syntax_unsetTrailing(v_fst_2918_);
if (lean_obj_tag(v_old_x3f_2907_) == 1)
{
lean_object* v_val_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2963_; 
v_val_2948_ = lean_ctor_get(v_old_x3f_2907_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v_old_x3f_2907_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2950_ = v_old_x3f_2907_;
v_isShared_2951_ = v_isSharedCheck_2963_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_val_2948_);
lean_dec(v_old_x3f_2907_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2963_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v_stx_2952_; lean_object* v_result_x3f_2953_; lean_object* v___x_2954_; uint8_t v___x_2955_; 
v_stx_2952_ = lean_ctor_get(v_val_2948_, 3);
v_result_x3f_2953_ = lean_ctor_get(v_val_2948_, 4);
lean_inc(v_stx_2952_);
v___x_2954_ = l_Lean_Syntax_unsetTrailing(v_stx_2952_);
lean_inc(v___x_2925_);
v___x_2955_ = l_Lean_Syntax_eqWithInfo(v___x_2925_, v___x_2954_);
if (v___x_2955_ == 0)
{
lean_inc(v_result_x3f_2953_);
lean_del_object(v___x_2950_);
lean_dec(v_val_2948_);
lean_dec_ref(v___f_2909_);
if (lean_obj_tag(v_result_x3f_2953_) == 0)
{
lean_dec_ref(v___x_2908_);
v___y_2927_ = v___y_2910_;
goto v___jp_2926_;
}
else
{
lean_object* v_val_2956_; lean_object* v_processedSnap_2957_; lean_object* v___x_2958_; 
v_val_2956_ = lean_ctor_get(v_result_x3f_2953_, 0);
lean_inc(v_val_2956_);
lean_dec_ref_known(v_result_x3f_2953_, 1);
v_processedSnap_2957_ = lean_ctor_get(v_val_2956_, 1);
lean_inc_ref(v_processedSnap_2957_);
lean_dec(v_val_2956_);
v___x_2958_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_2908_, v_processedSnap_2957_);
v___y_2927_ = v___y_2910_;
goto v___jp_2926_;
}
}
else
{
lean_object* v___x_2959_; lean_object* v___x_2961_; 
lean_dec(v___x_2925_);
lean_del_object(v___x_2922_);
lean_dec(v_snd_2920_);
lean_del_object(v___x_2915_);
lean_dec_ref(v___x_2908_);
lean_dec_ref(v_setupImports_2906_);
lean_dec_ref(v_toProcessingContext_2905_);
lean_inc_ref(v___y_2910_);
v___x_2959_ = lean_apply_5(v___f_2909_, v_val_2948_, v_fst_2918_, v_fst_2919_, v___y_2910_, lean_box(0));
if (v_isShared_2951_ == 0)
{
lean_ctor_set_tag(v___x_2950_, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2959_);
v___x_2961_ = v___x_2950_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
else
{
lean_dec_ref(v___f_2909_);
lean_dec_ref(v___x_2908_);
lean_dec(v_old_x3f_2907_);
v___y_2927_ = v___y_2910_;
goto v___jp_2926_;
}
v___jp_2926_:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2937_; 
v___x_2928_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2920_);
lean_inc(v_fst_2919_);
lean_inc(v_fst_2918_);
v___x_2929_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_2906_, v___x_2925_, v_fst_2918_, v_fst_2919_, v___y_2927_);
v___x_2930_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2931_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2932_ = lean_box(0);
v___x_2933_ = lean_unsigned_to_nat(32u);
v___x_2934_ = lean_mk_empty_array_with_capacity(v___x_2933_);
lean_dec_ref(v___x_2934_);
v___x_2935_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_2923_ == 0)
{
lean_ctor_set(v___x_2922_, 1, v___x_2929_);
v___x_2937_ = v___x_2922_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_fst_2919_);
lean_ctor_set(v_reuseFailAlloc_2947_, 1, v___x_2929_);
v___x_2937_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2945_; 
v___x_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
v___x_2939_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2939_, 0, v___x_2930_);
lean_ctor_set(v___x_2939_, 1, v___x_2931_);
lean_ctor_set(v___x_2939_, 2, v___x_2932_);
lean_ctor_set(v___x_2939_, 3, v___x_2935_);
lean_ctor_set_uint8(v___x_2939_, sizeof(void*)*4, v___x_2924_);
lean_inc(v_fst_2918_);
v___x_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2940_, 0, v_fst_2918_);
v___x_2941_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2941_, 0, v___x_2930_);
lean_ctor_set(v___x_2941_, 1, v___x_2928_);
lean_ctor_set(v___x_2941_, 2, v___x_2932_);
lean_ctor_set(v___x_2941_, 3, v___x_2935_);
lean_ctor_set_uint8(v___x_2941_, sizeof(void*)*4, v___x_2924_);
v___x_2942_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2940_, v___x_2941_);
v___x_2943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2939_);
lean_ctor_set(v___x_2943_, 1, v___x_2942_);
lean_ctor_set(v___x_2943_, 2, v_toProcessingContext_2905_);
lean_ctor_set(v___x_2943_, 3, v_fst_2918_);
lean_ctor_set(v___x_2943_, 4, v___x_2938_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2943_);
v___x_2945_ = v___x_2915_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v___x_2943_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
else
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; uint8_t v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2979_; 
lean_del_object(v___x_2922_);
lean_dec(v_fst_2919_);
lean_dec_ref(v___f_2909_);
lean_dec_ref(v___x_2908_);
lean_dec(v_old_x3f_2907_);
lean_dec_ref(v_setupImports_2906_);
v___x_2964_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2920_);
v___x_2965_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2));
v___x_2966_ = l_Lean_Name_toString(v___x_2965_, v___x_2924_);
v___x_2967_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2968_ = lean_box(0);
v___x_2969_ = lean_unsigned_to_nat(32u);
v___x_2970_ = lean_mk_empty_array_with_capacity(v___x_2969_);
lean_dec_ref(v___x_2970_);
v___x_2971_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref(v___x_2966_);
v___x_2972_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2972_, 0, v___x_2966_);
lean_ctor_set(v___x_2972_, 1, v___x_2967_);
lean_ctor_set(v___x_2972_, 2, v___x_2968_);
lean_ctor_set(v___x_2972_, 3, v___x_2971_);
lean_ctor_set_uint8(v___x_2972_, sizeof(void*)*4, v___x_2924_);
lean_inc(v_fst_2918_);
v___x_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2973_, 0, v_fst_2918_);
v___x_2974_ = 0;
v___x_2975_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2975_, 0, v___x_2966_);
lean_ctor_set(v___x_2975_, 1, v___x_2964_);
lean_ctor_set(v___x_2975_, 2, v___x_2968_);
lean_ctor_set(v___x_2975_, 3, v___x_2971_);
lean_ctor_set_uint8(v___x_2975_, sizeof(void*)*4, v___x_2974_);
v___x_2976_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2973_, v___x_2975_);
v___x_2977_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2972_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
lean_ctor_set(v___x_2977_, 2, v_toProcessingContext_2905_);
lean_ctor_set(v___x_2977_, 3, v_fst_2918_);
lean_ctor_set(v___x_2977_, 4, v___x_2968_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2977_);
v___x_2979_ = v___x_2915_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v___x_2977_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec_ref(v___f_2909_);
lean_dec_ref(v___x_2908_);
lean_dec(v_old_x3f_2907_);
lean_dec_ref(v_setupImports_2906_);
lean_dec_ref(v_toProcessingContext_2905_);
v_a_2983_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2912_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2912_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object* v_toProcessingContext_2991_, lean_object* v_setupImports_2992_, lean_object* v_old_x3f_2993_, lean_object* v___x_2994_, lean_object* v___f_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(v_toProcessingContext_2991_, v_setupImports_2992_, v_old_x3f_2993_, v___x_2994_, v___f_2995_, v___y_2996_);
lean_dec_ref(v___y_2996_);
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object* v___x_2999_, lean_object* v_toProcessingContext_3000_, lean_object* v_x_3001_){
_start:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3002_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2999_);
v___x_3003_ = lean_box(0);
v___x_3004_ = lean_box(0);
v___x_3005_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3005_, 0, v_x_3001_);
lean_ctor_set(v___x_3005_, 1, v___x_3002_);
lean_ctor_set(v___x_3005_, 2, v_toProcessingContext_3000_);
lean_ctor_set(v___x_3005_, 3, v___x_3003_);
lean_ctor_set(v___x_3005_, 4, v___x_3004_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object* v_setupImports_3006_, lean_object* v_old_x3f_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v_toProcessingContext_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___f_3013_; lean_object* v___f_3014_; lean_object* v___f_3015_; 
v_toProcessingContext_3010_ = lean_ctor_get(v_a_3008_, 0);
v___x_3011_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___x_3012_ = l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_inc_ref(v_a_3008_);
lean_inc_ref_n(v_toProcessingContext_3010_, 3);
v___f_3013_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3013_, 0, v_toProcessingContext_3010_);
lean_closure_set(v___f_3013_, 1, v_a_3008_);
lean_inc(v_old_x3f_3007_);
v___f_3014_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed), 7, 5);
lean_closure_set(v___f_3014_, 0, v_toProcessingContext_3010_);
lean_closure_set(v___f_3014_, 1, v_setupImports_3006_);
lean_closure_set(v___f_3014_, 2, v_old_x3f_3007_);
lean_closure_set(v___f_3014_, 3, v___x_3012_);
lean_closure_set(v___f_3014_, 4, v___f_3013_);
v___f_3015_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4), 3, 2);
lean_closure_set(v___f_3015_, 0, v___x_3011_);
lean_closure_set(v___f_3015_, 1, v_toProcessingContext_3010_);
if (lean_obj_tag(v_old_x3f_3007_) == 1)
{
lean_object* v_val_3016_; lean_object* v_result_x3f_3017_; 
v_val_3016_ = lean_ctor_get(v_old_x3f_3007_, 0);
lean_inc(v_val_3016_);
lean_dec_ref_known(v_old_x3f_3007_, 1);
v_result_x3f_3017_ = lean_ctor_get(v_val_3016_, 4);
if (lean_obj_tag(v_result_x3f_3017_) == 1)
{
lean_object* v_stx_3018_; lean_object* v_val_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
v_stx_3018_ = lean_ctor_get(v_val_3016_, 3);
lean_inc(v_stx_3018_);
v_val_3019_ = lean_ctor_get(v_result_x3f_3017_, 0);
lean_inc(v_val_3016_);
v___x_3020_ = l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(v_val_3016_);
v___x_3021_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v___x_3020_);
if (lean_obj_tag(v___x_3021_) == 1)
{
lean_object* v_val_3022_; 
v_val_3022_ = lean_ctor_get(v___x_3021_, 0);
lean_inc(v_val_3022_);
lean_dec_ref_known(v___x_3021_, 1);
if (lean_obj_tag(v_val_3022_) == 1)
{
lean_object* v_val_3023_; lean_object* v_firstCmdSnap_3024_; lean_object* v___x_3025_; 
v_val_3023_ = lean_ctor_get(v_val_3022_, 0);
lean_inc(v_val_3023_);
lean_dec_ref_known(v_val_3022_, 1);
v_firstCmdSnap_3024_ = lean_ctor_get(v_val_3023_, 1);
lean_inc_ref(v_firstCmdSnap_3024_);
lean_dec(v_val_3023_);
v___x_3025_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_firstCmdSnap_3024_);
if (lean_obj_tag(v___x_3025_) == 1)
{
lean_object* v_val_3026_; lean_object* v_nextCmdSnap_x3f_3027_; 
v_val_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_val_3026_);
lean_dec_ref_known(v___x_3025_, 1);
v_nextCmdSnap_x3f_3027_ = lean_ctor_get(v_val_3026_, 4);
lean_inc(v_nextCmdSnap_x3f_3027_);
lean_dec(v_val_3026_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3027_) == 0)
{
lean_object* v___x_3028_; 
lean_dec(v_stx_3018_);
lean_dec(v_val_3016_);
v___x_3028_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3028_;
}
else
{
lean_object* v_val_3029_; lean_object* v___x_3030_; 
v_val_3029_ = lean_ctor_get(v_nextCmdSnap_x3f_3027_, 0);
lean_inc(v_val_3029_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3027_, 1);
v___x_3030_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_3029_);
if (lean_obj_tag(v___x_3030_) == 1)
{
lean_object* v_val_3031_; lean_object* v_parserState_3032_; lean_object* v_pos_3033_; uint8_t v___x_3034_; 
v_val_3031_ = lean_ctor_get(v___x_3030_, 0);
lean_inc(v_val_3031_);
lean_dec_ref_known(v___x_3030_, 1);
v_parserState_3032_ = lean_ctor_get(v_val_3031_, 2);
lean_inc_ref(v_parserState_3032_);
lean_dec(v_val_3031_);
v_pos_3033_ = lean_ctor_get(v_parserState_3032_, 0);
lean_inc(v_pos_3033_);
lean_dec_ref(v_parserState_3032_);
v___x_3034_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_3033_, v_a_3008_);
lean_dec(v_pos_3033_);
if (v___x_3034_ == 0)
{
lean_object* v___x_3035_; 
lean_dec(v_stx_3018_);
lean_dec(v_val_3016_);
v___x_3035_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3035_;
}
else
{
lean_object* v_parserState_3036_; lean_object* v___x_3037_; 
lean_dec_ref(v___f_3015_);
lean_dec_ref(v___f_3014_);
v_parserState_3036_ = lean_ctor_get(v_val_3019_, 0);
lean_inc_ref(v_parserState_3036_);
lean_inc_ref(v_toProcessingContext_3010_);
v___x_3037_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3010_, v_a_3008_, v_val_3016_, v_stx_3018_, v_parserState_3036_, v_a_3008_);
return v___x_3037_;
}
}
else
{
lean_object* v___x_3038_; 
lean_dec(v___x_3030_);
lean_dec(v_stx_3018_);
lean_dec(v_val_3016_);
v___x_3038_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3038_;
}
}
}
else
{
lean_object* v___x_3039_; 
lean_dec(v___x_3025_);
lean_dec(v_stx_3018_);
lean_dec(v_val_3016_);
v___x_3039_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3039_;
}
}
else
{
lean_object* v___x_3040_; 
lean_dec(v_val_3022_);
lean_dec(v_stx_3018_);
lean_dec(v_val_3016_);
v___x_3040_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3040_;
}
}
else
{
lean_object* v___x_3041_; 
lean_dec(v___x_3021_);
lean_dec(v_stx_3018_);
lean_dec(v_val_3016_);
v___x_3041_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3041_;
}
}
else
{
lean_object* v___x_3042_; 
lean_dec(v_val_3016_);
v___x_3042_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3042_;
}
}
else
{
lean_object* v___x_3043_; 
lean_dec(v_old_x3f_3007_);
v___x_3043_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3015_, v___f_3014_, v_a_3008_);
return v___x_3043_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object* v_setupImports_3044_, lean_object* v_old_x3f_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(v_setupImports_3044_, v_old_x3f_3045_, v_a_3046_);
lean_dec_ref(v_a_3046_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object* v_setupImports_3049_, lean_object* v_old_x3f_3050_, lean_object* v_a_3051_){
_start:
{
lean_object* v___x_3053_; 
lean_inc(v_old_x3f_3050_);
v___x_3053_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed), 4, 2);
lean_closure_set(v___x_3053_, 0, v_setupImports_3049_);
lean_closure_set(v___x_3053_, 1, v_old_x3f_3050_);
if (lean_obj_tag(v_old_x3f_3050_) == 0)
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = lean_box(0);
v___x_3055_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3053_, v___x_3054_, v_a_3051_);
return v___x_3055_;
}
else
{
lean_object* v_val_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3065_; 
v_val_3056_ = lean_ctor_get(v_old_x3f_3050_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_old_x3f_3050_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3058_ = v_old_x3f_3050_;
v_isShared_3059_ = v_isSharedCheck_3065_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_val_3056_);
lean_dec(v_old_x3f_3050_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3065_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v_ictx_3060_; lean_object* v___x_3062_; 
v_ictx_3060_ = lean_ctor_get(v_val_3056_, 2);
lean_inc_ref(v_ictx_3060_);
lean_dec(v_val_3056_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set(v___x_3058_, 0, v_ictx_3060_);
v___x_3062_ = v___x_3058_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_ictx_3060_);
v___x_3062_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
lean_object* v___x_3063_; 
v___x_3063_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3053_, v___x_3062_, v_a_3051_);
return v___x_3063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object* v_setupImports_3066_, lean_object* v_old_x3f_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_Lean_Language_Lean_process(v_setupImports_3066_, v_old_x3f_3067_, v_a_3068_);
lean_dec_ref(v_a_3068_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object* v_inputCtx_3071_, lean_object* v_parserState_3072_, lean_object* v_commandState_3073_, lean_object* v_old_x3f_3074_){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3084_; 
v___x_3076_ = lean_io_promise_new();
v___x_3077_ = l_IO_CancelToken_new();
if (lean_obj_tag(v_old_x3f_3074_) == 0)
{
lean_object* v___x_3099_; 
v___x_3099_ = lean_box(0);
v___y_3084_ = v___x_3099_;
goto v___jp_3083_;
}
else
{
lean_object* v_val_3100_; lean_object* v_snd_3101_; lean_object* v___x_3102_; 
v_val_3100_ = lean_ctor_get(v_old_x3f_3074_, 0);
v_snd_3101_ = lean_ctor_get(v_val_3100_, 1);
lean_inc(v_snd_3101_);
v___x_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3102_, 0, v_snd_3101_);
v___y_3084_ = v___x_3102_;
goto v___jp_3083_;
}
v___jp_3078_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___y_3079_, v___y_3080_, v_inputCtx_3071_);
lean_dec(v___x_3081_);
v___x_3082_ = l_IO_Promise_result_x21___redArg(v___x_3076_);
lean_dec(v___x_3076_);
return v___x_3082_;
}
v___jp_3083_:
{
uint8_t v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3085_ = 1;
v___x_3086_ = lean_box(0);
v___x_3087_ = lean_box(v___x_3085_);
lean_inc(v___x_3076_);
v___x_3088_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed), 9, 7);
lean_closure_set(v___x_3088_, 0, v___y_3084_);
lean_closure_set(v___x_3088_, 1, v_parserState_3072_);
lean_closure_set(v___x_3088_, 2, v_commandState_3073_);
lean_closure_set(v___x_3088_, 3, v___x_3076_);
lean_closure_set(v___x_3088_, 4, v___x_3087_);
lean_closure_set(v___x_3088_, 5, v___x_3077_);
lean_closure_set(v___x_3088_, 6, v___x_3086_);
if (lean_obj_tag(v_old_x3f_3074_) == 0)
{
lean_object* v___x_3089_; 
v___x_3089_ = lean_box(0);
v___y_3079_ = v___x_3088_;
v___y_3080_ = v___x_3089_;
goto v___jp_3078_;
}
else
{
lean_object* v_val_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3098_; 
v_val_3090_ = lean_ctor_get(v_old_x3f_3074_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v_old_x3f_3074_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3092_ = v_old_x3f_3074_;
v_isShared_3093_ = v_isSharedCheck_3098_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_val_3090_);
lean_dec(v_old_x3f_3074_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3098_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v_fst_3094_; lean_object* v___x_3096_; 
v_fst_3094_ = lean_ctor_get(v_val_3090_, 0);
lean_inc(v_fst_3094_);
lean_dec(v_val_3090_);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 0, v_fst_3094_);
v___x_3096_ = v___x_3092_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_fst_3094_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
v___y_3079_ = v___x_3088_;
v___y_3080_ = v___x_3096_;
goto v___jp_3078_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object* v_inputCtx_3103_, lean_object* v_parserState_3104_, lean_object* v_commandState_3105_, lean_object* v_old_x3f_3106_, lean_object* v_a_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l_Lean_Language_Lean_processCommands(v_inputCtx_3103_, v_parserState_3104_, v_commandState_3105_, v_old_x3f_3106_);
lean_dec_ref(v_inputCtx_3103_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object* v_snap_3109_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3110_; 
v_nextCmdSnap_x3f_3110_ = lean_ctor_get(v_snap_3109_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_3110_) == 1)
{
lean_object* v_val_3111_; lean_object* v___x_3112_; 
lean_inc_ref(v_nextCmdSnap_x3f_3110_);
lean_dec_ref(v_snap_3109_);
v_val_3111_ = lean_ctor_get(v_nextCmdSnap_x3f_3110_, 0);
lean_inc(v_val_3111_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3110_, 1);
v___x_3112_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3111_);
v_snap_3109_ = v___x_3112_;
goto _start;
}
else
{
lean_object* v_elabSnap_3114_; lean_object* v_resultSnap_3115_; lean_object* v___x_3116_; lean_object* v_cmdState_3117_; lean_object* v___x_3118_; 
v_elabSnap_3114_ = lean_ctor_get(v_snap_3109_, 3);
lean_inc_ref(v_elabSnap_3114_);
lean_dec_ref(v_snap_3109_);
v_resultSnap_3115_ = lean_ctor_get(v_elabSnap_3114_, 2);
lean_inc_ref(v_resultSnap_3115_);
lean_dec_ref(v_elabSnap_3114_);
v___x_3116_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_3115_);
v_cmdState_3117_ = lean_ctor_get(v___x_3116_, 1);
lean_inc_ref(v_cmdState_3117_);
lean_dec(v___x_3116_);
v___x_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3118_, 0, v_cmdState_3117_);
return v___x_3118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object* v_snap_3119_){
_start:
{
lean_object* v_result_x3f_3120_; 
v_result_x3f_3120_ = lean_ctor_get(v_snap_3119_, 4);
lean_inc(v_result_x3f_3120_);
lean_dec_ref(v_snap_3119_);
if (lean_obj_tag(v_result_x3f_3120_) == 0)
{
lean_object* v___x_3121_; 
v___x_3121_ = lean_box(0);
return v___x_3121_;
}
else
{
lean_object* v_val_3122_; lean_object* v_processedSnap_3123_; lean_object* v___x_3124_; lean_object* v_result_x3f_3125_; 
v_val_3122_ = lean_ctor_get(v_result_x3f_3120_, 0);
lean_inc(v_val_3122_);
lean_dec_ref_known(v_result_x3f_3120_, 1);
v_processedSnap_3123_ = lean_ctor_get(v_val_3122_, 1);
lean_inc_ref(v_processedSnap_3123_);
lean_dec(v_val_3122_);
v___x_3124_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3123_);
v_result_x3f_3125_ = lean_ctor_get(v___x_3124_, 2);
lean_inc(v_result_x3f_3125_);
lean_dec(v___x_3124_);
if (lean_obj_tag(v_result_x3f_3125_) == 0)
{
lean_object* v___x_3126_; 
v___x_3126_ = lean_box(0);
return v___x_3126_;
}
else
{
lean_object* v_val_3127_; lean_object* v_firstCmdSnap_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v_val_3127_ = lean_ctor_get(v_result_x3f_3125_, 0);
lean_inc(v_val_3127_);
lean_dec_ref_known(v_result_x3f_3125_, 1);
v_firstCmdSnap_3128_ = lean_ctor_get(v_val_3127_, 1);
lean_inc_ref(v_firstCmdSnap_3128_);
lean_dec(v_val_3127_);
v___x_3129_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3128_);
v___x_3130_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(v___x_3129_);
return v___x_3130_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(lean_object* v_f_3131_, lean_object* v_snap_3132_, lean_object* v_acc_3133_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3134_; lean_object* v_acc_3135_; 
v_nextCmdSnap_x3f_3134_ = lean_ctor_get(v_snap_3132_, 4);
lean_inc(v_nextCmdSnap_x3f_3134_);
lean_inc(v_f_3131_);
v_acc_3135_ = lean_apply_2(v_f_3131_, v_acc_3133_, v_snap_3132_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3134_) == 1)
{
lean_object* v_val_3136_; lean_object* v___x_3137_; 
v_val_3136_ = lean_ctor_get(v_nextCmdSnap_x3f_3134_, 0);
lean_inc(v_val_3136_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3134_, 1);
v___x_3137_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3136_);
v_snap_3132_ = v___x_3137_;
v_acc_3133_ = v_acc_3135_;
goto _start;
}
else
{
lean_dec(v_nextCmdSnap_x3f_3134_);
lean_dec(v_f_3131_);
return v_acc_3135_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go(lean_object* v_00_u03b1_3139_, lean_object* v_f_3140_, lean_object* v_snap_3141_, lean_object* v_acc_3142_){
_start:
{
lean_object* v___x_3143_; 
v___x_3143_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(v_f_3140_, v_snap_3141_, v_acc_3142_);
return v___x_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(lean_object* v_snap_3144_, lean_object* v_init_3145_, lean_object* v_f_3146_){
_start:
{
lean_object* v_result_x3f_3147_; 
v_result_x3f_3147_ = lean_ctor_get(v_snap_3144_, 4);
lean_inc(v_result_x3f_3147_);
lean_dec_ref(v_snap_3144_);
if (lean_obj_tag(v_result_x3f_3147_) == 0)
{
lean_object* v___x_3148_; 
lean_dec(v_f_3146_);
lean_dec(v_init_3145_);
v___x_3148_ = lean_box(0);
return v___x_3148_;
}
else
{
lean_object* v_val_3149_; lean_object* v_processedSnap_3150_; lean_object* v___x_3151_; lean_object* v_result_x3f_3152_; 
v_val_3149_ = lean_ctor_get(v_result_x3f_3147_, 0);
lean_inc(v_val_3149_);
lean_dec_ref_known(v_result_x3f_3147_, 1);
v_processedSnap_3150_ = lean_ctor_get(v_val_3149_, 1);
lean_inc_ref(v_processedSnap_3150_);
lean_dec(v_val_3149_);
v___x_3151_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3150_);
v_result_x3f_3152_ = lean_ctor_get(v___x_3151_, 2);
lean_inc(v_result_x3f_3152_);
lean_dec(v___x_3151_);
if (lean_obj_tag(v_result_x3f_3152_) == 0)
{
lean_object* v___x_3153_; 
lean_dec(v_f_3146_);
lean_dec(v_init_3145_);
v___x_3153_ = lean_box(0);
return v___x_3153_;
}
else
{
lean_object* v_val_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3164_; 
v_val_3154_ = lean_ctor_get(v_result_x3f_3152_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v_result_x3f_3152_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3156_ = v_result_x3f_3152_;
v_isShared_3157_ = v_isSharedCheck_3164_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_val_3154_);
lean_dec(v_result_x3f_3152_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3164_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v_firstCmdSnap_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3162_; 
v_firstCmdSnap_3158_ = lean_ctor_get(v_val_3154_, 1);
lean_inc_ref(v_firstCmdSnap_3158_);
lean_dec(v_val_3154_);
v___x_3159_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3158_);
v___x_3160_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(v_f_3146_, v___x_3159_, v_init_3145_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 0, v___x_3160_);
v___x_3162_ = v___x_3156_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v___x_3160_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f(lean_object* v_00_u03b1_3165_, lean_object* v_snap_3166_, lean_object* v_init_3167_, lean_object* v_f_3168_){
_start:
{
lean_object* v___x_3169_; 
v___x_3169_ = l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(v_snap_3166_, v_init_3167_, v_f_3168_);
return v___x_3169_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__2(void){
_start:
{
uint8_t v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3175_ = 1;
v___x_3176_ = ((lean_object*)(l_Lean_Language_Lean_truncateToHeader___closed__1));
v___x_3177_ = l_Lean_Name_toString(v___x_3176_, v___x_3175_);
return v___x_3177_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__3(void){
_start:
{
uint8_t v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3178_ = 0;
v___x_3179_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3180_ = lean_box(0);
v___x_3181_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3182_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__2, &l_Lean_Language_Lean_truncateToHeader___closed__2_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__2);
v___x_3183_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3183_, 0, v___x_3182_);
lean_ctor_set(v___x_3183_, 1, v___x_3181_);
lean_ctor_set(v___x_3183_, 2, v___x_3180_);
lean_ctor_set(v___x_3183_, 3, v___x_3179_);
lean_ctor_set_uint8(v___x_3183_, sizeof(void*)*4, v___x_3178_);
return v___x_3183_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__4(void){
_start:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3184_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3185_ = lean_box(0);
v___x_3186_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3185_, v___x_3184_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object* v_snap_3187_){
_start:
{
lean_object* v_result_x3f_3188_; 
v_result_x3f_3188_ = lean_ctor_get(v_snap_3187_, 4);
lean_inc(v_result_x3f_3188_);
if (lean_obj_tag(v_result_x3f_3188_) == 1)
{
lean_object* v_val_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3264_; 
v_val_3189_ = lean_ctor_get(v_result_x3f_3188_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v_result_x3f_3188_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3191_ = v_result_x3f_3188_;
v_isShared_3192_ = v_isSharedCheck_3264_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_val_3189_);
lean_dec(v_result_x3f_3188_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3264_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v_toSnapshot_3193_; lean_object* v_metaSnap_3194_; lean_object* v_ictx_3195_; lean_object* v_stx_3196_; lean_object* v_parserState_3197_; lean_object* v_processedSnap_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3263_; 
v_toSnapshot_3193_ = lean_ctor_get(v_snap_3187_, 0);
v_metaSnap_3194_ = lean_ctor_get(v_snap_3187_, 1);
v_ictx_3195_ = lean_ctor_get(v_snap_3187_, 2);
v_stx_3196_ = lean_ctor_get(v_snap_3187_, 3);
v_parserState_3197_ = lean_ctor_get(v_val_3189_, 0);
v_processedSnap_3198_ = lean_ctor_get(v_val_3189_, 1);
v_isSharedCheck_3263_ = !lean_is_exclusive(v_val_3189_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3200_ = v_val_3189_;
v_isShared_3201_ = v_isSharedCheck_3263_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_processedSnap_3198_);
lean_inc(v_parserState_3197_);
lean_dec(v_val_3189_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3263_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v_processed_3202_; lean_object* v_result_x3f_3203_; 
v_processed_3202_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3198_);
v_result_x3f_3203_ = lean_ctor_get(v_processed_3202_, 2);
lean_inc(v_result_x3f_3203_);
if (lean_obj_tag(v_result_x3f_3203_) == 1)
{
lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3257_; 
lean_inc(v_stx_3196_);
lean_inc_ref(v_ictx_3195_);
lean_inc_ref(v_metaSnap_3194_);
lean_inc_ref(v_toSnapshot_3193_);
v_isSharedCheck_3257_ = !lean_is_exclusive(v_snap_3187_);
if (v_isSharedCheck_3257_ == 0)
{
lean_object* v_unused_3258_; lean_object* v_unused_3259_; lean_object* v_unused_3260_; lean_object* v_unused_3261_; lean_object* v_unused_3262_; 
v_unused_3258_ = lean_ctor_get(v_snap_3187_, 4);
lean_dec(v_unused_3258_);
v_unused_3259_ = lean_ctor_get(v_snap_3187_, 3);
lean_dec(v_unused_3259_);
v_unused_3260_ = lean_ctor_get(v_snap_3187_, 2);
lean_dec(v_unused_3260_);
v_unused_3261_ = lean_ctor_get(v_snap_3187_, 1);
lean_dec(v_unused_3261_);
v_unused_3262_ = lean_ctor_get(v_snap_3187_, 0);
lean_dec(v_unused_3262_);
v___x_3205_ = v_snap_3187_;
v_isShared_3206_ = v_isSharedCheck_3257_;
goto v_resetjp_3204_;
}
else
{
lean_dec(v_snap_3187_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3257_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v_val_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3256_; 
v_val_3207_ = lean_ctor_get(v_result_x3f_3203_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_result_x3f_3203_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3209_ = v_result_x3f_3203_;
v_isShared_3210_ = v_isSharedCheck_3256_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_val_3207_);
lean_dec(v_result_x3f_3203_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3256_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v_toSnapshot_3211_; lean_object* v_metaSnap_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3254_; 
v_toSnapshot_3211_ = lean_ctor_get(v_processed_3202_, 0);
v_metaSnap_3212_ = lean_ctor_get(v_processed_3202_, 1);
v_isSharedCheck_3254_ = !lean_is_exclusive(v_processed_3202_);
if (v_isSharedCheck_3254_ == 0)
{
lean_object* v_unused_3255_; 
v_unused_3255_ = lean_ctor_get(v_processed_3202_, 2);
lean_dec(v_unused_3255_);
v___x_3214_ = v_processed_3202_;
v_isShared_3215_ = v_isSharedCheck_3254_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_metaSnap_3212_);
lean_inc(v_toSnapshot_3211_);
lean_dec(v_processed_3202_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3254_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v_cmdState_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3252_; 
v_cmdState_3216_ = lean_ctor_get(v_val_3207_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v_val_3207_);
if (v_isSharedCheck_3252_ == 0)
{
lean_object* v_unused_3253_; 
v_unused_3253_ = lean_ctor_get(v_val_3207_, 1);
lean_dec(v_unused_3253_);
v___x_3218_ = v_val_3207_;
v_isShared_3219_ = v_isSharedCheck_3252_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_cmdState_3216_);
lean_dec(v_val_3207_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3252_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v_resultSnap_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v_elabSnap_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v_termCmd_3231_; lean_object* v___x_3232_; lean_object* v___x_3234_; 
v___x_3220_ = lean_box(0);
v___x_3221_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3222_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5));
lean_inc_ref(v_cmdState_3216_);
v_resultSnap_3223_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_resultSnap_3223_, 0, v___x_3221_);
lean_ctor_set(v_resultSnap_3223_, 1, v_cmdState_3216_);
lean_ctor_set(v_resultSnap_3223_, 2, v___x_3222_);
v___x_3224_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v___x_3225_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3220_, v_resultSnap_3223_);
v___x_3226_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__4, &l_Lean_Language_Lean_truncateToHeader___closed__4_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__4);
v___x_3227_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6);
v_elabSnap_3228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_elabSnap_3228_, 0, v___x_3221_);
lean_ctor_set(v_elabSnap_3228_, 1, v___x_3224_);
lean_ctor_set(v_elabSnap_3228_, 2, v___x_3225_);
lean_ctor_set(v_elabSnap_3228_, 3, v___x_3226_);
lean_ctor_set(v_elabSnap_3228_, 4, v___x_3227_);
v___x_3229_ = lean_box(0);
v___x_3230_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_termCmd_3231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_termCmd_3231_, 0, v___x_3221_);
lean_ctor_set(v_termCmd_3231_, 1, v___x_3229_);
lean_ctor_set(v_termCmd_3231_, 2, v___x_3230_);
lean_ctor_set(v_termCmd_3231_, 3, v_elabSnap_3228_);
lean_ctor_set(v_termCmd_3231_, 4, v___x_3220_);
v___x_3232_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3220_, v_termCmd_3231_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 1, v___x_3232_);
v___x_3234_ = v___x_3218_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_cmdState_3216_);
lean_ctor_set(v_reuseFailAlloc_3251_, 1, v___x_3232_);
v___x_3234_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
lean_object* v___x_3236_; 
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 0, v___x_3234_);
v___x_3236_ = v___x_3209_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3234_);
v___x_3236_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
lean_object* v_newProcessed_3238_; 
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 2, v___x_3236_);
v_newProcessed_3238_ = v___x_3214_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_toSnapshot_3211_);
lean_ctor_set(v_reuseFailAlloc_3249_, 1, v_metaSnap_3212_);
lean_ctor_set(v_reuseFailAlloc_3249_, 2, v___x_3236_);
v_newProcessed_3238_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
lean_object* v___x_3239_; lean_object* v___x_3241_; 
v___x_3239_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3220_, v_newProcessed_3238_);
if (v_isShared_3201_ == 0)
{
lean_ctor_set(v___x_3200_, 1, v___x_3239_);
v___x_3241_ = v___x_3200_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_parserState_3197_);
lean_ctor_set(v_reuseFailAlloc_3248_, 1, v___x_3239_);
v___x_3241_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3243_; 
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 0, v___x_3241_);
v___x_3243_ = v___x_3191_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v___x_3241_);
v___x_3243_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
lean_object* v___x_3245_; 
if (v_isShared_3206_ == 0)
{
lean_ctor_set(v___x_3205_, 4, v___x_3243_);
v___x_3245_ = v___x_3205_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_toSnapshot_3193_);
lean_ctor_set(v_reuseFailAlloc_3246_, 1, v_metaSnap_3194_);
lean_ctor_set(v_reuseFailAlloc_3246_, 2, v_ictx_3195_);
lean_ctor_set(v_reuseFailAlloc_3246_, 3, v_stx_3196_);
lean_ctor_set(v_reuseFailAlloc_3246_, 4, v___x_3243_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
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
else
{
lean_dec(v_result_x3f_3203_);
lean_dec(v_processed_3202_);
lean_del_object(v___x_3200_);
lean_dec_ref(v_parserState_3197_);
lean_del_object(v___x_3191_);
return v_snap_3187_;
}
}
}
}
else
{
lean_dec(v_result_x3f_3188_);
return v_snap_3187_;
}
}
}
lean_object* runtime_initialize_Lean_Language_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Language_Lean_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Import(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Language_Lean_0__Lean_Language_Lean_initFn_00___x40_Lean_Language_Lean_3734918084____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Language_Lean_experimental_module = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Language_Lean_experimental_module);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Language_Util(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean_Types(uint8_t builtin);
lean_object* initialize_Lean_Language_Lean_Util(uint8_t builtin);
lean_object* initialize_Lean_Elab_Import(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Language_Lean(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Language_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Language_Lean_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Import(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Language_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Language_Lean(builtin);
}
#ifdef __cplusplus
}
#endif
