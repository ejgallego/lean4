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
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0 = (const lean_object*)&l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5_spec__12(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(lean_object* v_opts_556_, lean_object* v_opt_557_){
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
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2___boxed(lean_object* v_opts_566_, lean_object* v_opt_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_opts_566_, v_opt_567_);
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
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___lam__0(uint8_t v___x_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_612_) == 1)
{
lean_object* v_pre_613_; 
v_pre_613_ = lean_ctor_get(v_x_612_, 0);
if (lean_obj_tag(v_pre_613_) == 0)
{
lean_object* v_str_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v_str_614_ = lean_ctor_get(v_x_612_, 1);
v___x_615_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__0));
v___x_616_ = lean_string_dec_eq(v_str_614_, v___x_615_);
return v___x_616_;
}
else
{
return v___x_611_;
}
}
else
{
return v___x_611_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___lam__0___boxed(lean_object* v___x_617_, lean_object* v_x_618_){
_start:
{
uint8_t v___x_9345__boxed_619_; uint8_t v_res_620_; lean_object* v_r_621_; 
v___x_9345__boxed_619_ = lean_unbox(v___x_617_);
v_res_620_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___lam__0(v___x_9345__boxed_619_, v_x_618_);
lean_dec(v_x_618_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_622_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_625_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
lean_ctor_set(v___x_627_, 2, v___x_626_);
lean_ctor_set(v___x_627_, 3, v___x_626_);
lean_ctor_set(v___x_627_, 4, v___x_625_);
lean_ctor_set(v___x_627_, 5, v___x_625_);
lean_ctor_set(v___x_627_, 6, v___x_625_);
lean_ctor_set(v___x_627_, 7, v___x_625_);
lean_ctor_set(v___x_627_, 8, v___x_625_);
lean_ctor_set(v___x_627_, 9, v___x_625_);
lean_ctor_set(v___x_627_, 10, v___x_625_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_unsigned_to_nat(32u);
v___x_629_ = lean_mk_empty_array_with_capacity(v___x_628_);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
return v___x_630_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__4(void){
_start:
{
size_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_631_ = ((size_t)5ULL);
v___x_632_ = lean_unsigned_to_nat(0u);
v___x_633_ = lean_unsigned_to_nat(32u);
v___x_634_ = lean_mk_empty_array_with_capacity(v___x_633_);
v___x_635_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__3);
v___x_636_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_634_);
lean_ctor_set(v___x_636_, 2, v___x_632_);
lean_ctor_set(v___x_636_, 3, v___x_632_);
lean_ctor_set_usize(v___x_636_, 4, v___x_631_);
return v___x_636_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_637_ = lean_box(1);
v___x_638_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__4);
v___x_639_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__1);
v___x_640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___x_638_);
lean_ctor_set(v___x_640_, 2, v___x_637_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg(lean_object* v_msgData_641_, lean_object* v___y_642_){
_start:
{
lean_object* v___x_644_; lean_object* v_env_645_; uint8_t v___x_646_; lean_object* v_env_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v_scopes_650_; lean_object* v___x_651_; lean_object* v_opts_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_644_ = lean_st_ref_get(v___y_642_);
v_env_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc_ref(v_env_645_);
lean_dec(v___x_644_);
v___x_646_ = 0;
v_env_647_ = l_Lean_Environment_setRecordingDeps(v_env_645_, v___x_646_);
v___x_648_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_649_ = lean_st_ref_get(v___y_642_);
v_scopes_650_ = lean_ctor_get(v___x_649_, 2);
lean_inc(v_scopes_650_);
lean_dec(v___x_649_);
v___x_651_ = l_List_head_x21___redArg(v___x_648_, v_scopes_650_);
lean_dec(v_scopes_650_);
v_opts_652_ = lean_ctor_get(v___x_651_, 1);
lean_inc_ref(v_opts_652_);
lean_dec(v___x_651_);
v___x_653_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__2);
v___x_654_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__5);
v___x_655_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_655_, 0, v_env_647_);
lean_ctor_set(v___x_655_, 1, v___x_653_);
lean_ctor_set(v___x_655_, 2, v___x_654_);
lean_ctor_set(v___x_655_, 3, v_opts_652_);
v___x_656_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
lean_ctor_set(v___x_656_, 1, v_msgData_641_);
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___boxed(lean_object* v_msgData_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg(v_msgData_658_, v___y_659_);
lean_dec(v___y_659_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10(lean_object* v_ref_666_, lean_object* v_msgData_667_, uint8_t v_severity_668_, uint8_t v_isSilent_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; uint8_t v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; uint8_t v___y_680_; lean_object* v___y_681_; lean_object* v___y_739_; lean_object* v___y_740_; uint8_t v___y_741_; uint8_t v___y_742_; lean_object* v___y_743_; uint8_t v___y_764_; lean_object* v___y_765_; lean_object* v___y_766_; uint8_t v___y_767_; lean_object* v___y_768_; uint8_t v___y_772_; uint8_t v___x_800_; uint8_t v___x_801_; 
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
lean_ctor_set(v___x_692_, 1, v___y_679_);
lean_inc_ref(v___y_676_);
lean_inc_ref(v___y_675_);
v___x_693_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_693_, 0, v___y_675_);
lean_ctor_set(v___x_693_, 1, v___y_678_);
lean_ctor_set(v___x_693_, 2, v___y_674_);
lean_ctor_set(v___x_693_, 3, v___y_676_);
lean_ctor_set(v___x_693_, 4, v___x_692_);
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*5, v___y_677_);
lean_ctor_set_uint8(v___x_693_, sizeof(void*)*5 + 1, v___y_680_);
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
lean_dec_ref(v___y_679_);
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
lean_dec_ref(v___y_679_);
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
v___x_748_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg(v___x_747_, v___y_671_);
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
v___x_756_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
if (v_suppressElabErrors_746_ == 0)
{
lean_del_object(v___x_751_);
v___y_674_ = v___x_755_;
v___y_675_ = v_fileName_744_;
v___y_676_ = v___x_756_;
v___y_677_ = v___y_741_;
v___y_678_ = v___x_753_;
v___y_679_ = v_a_749_;
v___y_680_ = v___y_742_;
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
v___y_675_ = v_fileName_744_;
v___y_676_ = v___x_756_;
v___y_677_ = v___y_741_;
v___y_678_ = v___x_753_;
v___y_679_ = v_a_749_;
v___y_680_ = v___y_742_;
v___y_681_ = v___y_671_;
goto v___jp_673_;
}
}
}
}
v___jp_763_:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_Syntax_getTailPos_x3f(v___y_766_, v___y_764_);
lean_dec(v___y_766_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_inc(v___y_768_);
v___y_739_ = v___y_765_;
v___y_740_ = v___y_768_;
v___y_741_ = v___y_764_;
v___y_742_ = v___y_767_;
v___y_743_ = v___y_768_;
goto v___jp_738_;
}
else
{
lean_object* v_val_770_; 
v_val_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_val_770_);
lean_dec_ref_known(v___x_769_, 1);
v___y_739_ = v___y_765_;
v___y_740_ = v___y_768_;
v___y_741_ = v___y_764_;
v___y_742_ = v___y_767_;
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
v___f_777_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__1));
v___x_778_ = l_Lean_Syntax_getPos_x3f(v_ref_775_, v___x_776_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v___x_779_; 
v___x_779_ = lean_unsigned_to_nat(0u);
v___y_764_ = v___x_776_;
v___y_765_ = v___f_777_;
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
v___y_764_ = v___x_776_;
v___y_765_ = v___f_777_;
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
v___x_798_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_opts_794_, v___x_797_);
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
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___boxed(lean_object* v_ref_805_, lean_object* v_msgData_806_, lean_object* v_severity_807_, lean_object* v_isSilent_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_severity_boxed_812_; uint8_t v_isSilent_boxed_813_; lean_object* v_res_814_; 
v_severity_boxed_812_ = lean_unbox(v_severity_807_);
v_isSilent_boxed_813_ = lean_unbox(v_isSilent_808_);
v_res_814_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10(v_ref_805_, v_msgData_806_, v_severity_boxed_812_, v_isSilent_boxed_813_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v_ref_805_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5_spec__12(lean_object* v_msgData_815_, uint8_t v_severity_816_, uint8_t v_isSilent_817_, lean_object* v___y_818_, lean_object* v___y_819_){
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
v___x_823_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10(v_a_822_, v_msgData_815_, v_severity_816_, v_isSilent_817_, v___y_818_, v___y_819_);
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
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5_spec__12___boxed(lean_object* v_msgData_832_, lean_object* v_severity_833_, lean_object* v_isSilent_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
uint8_t v_severity_boxed_838_; uint8_t v_isSilent_boxed_839_; lean_object* v_res_840_; 
v_severity_boxed_838_ = lean_unbox(v_severity_833_);
v_isSilent_boxed_839_ = lean_unbox(v_isSilent_834_);
v_res_840_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5_spec__12(v_msgData_832_, v_severity_boxed_838_, v_isSilent_boxed_839_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5(lean_object* v_msgData_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
uint8_t v___x_845_; uint8_t v___x_846_; lean_object* v___x_847_; 
v___x_845_ = 2;
v___x_846_ = 0;
v___x_847_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5_spec__12(v_msgData_841_, v___x_845_, v___x_846_, v___y_842_, v___y_843_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5___boxed(lean_object* v_msgData_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5(v_msgData_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4(lean_object* v_ref_853_, lean_object* v_msgData_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
uint8_t v___x_858_; uint8_t v___x_859_; lean_object* v___x_860_; 
v___x_858_ = 2;
v___x_859_ = 0;
v___x_860_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10(v_ref_853_, v_msgData_854_, v___x_858_, v___x_859_, v___y_855_, v___y_856_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4___boxed(lean_object* v_ref_861_, lean_object* v_msgData_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4(v_ref_861_, v_msgData_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v_ref_861_);
return v_res_866_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__0));
v___x_869_ = l_Lean_stringToMessageData(v___x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1(lean_object* v_ex_870_, lean_object* v___y_871_, lean_object* v___y_872_){
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
v___x_879_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4(v_ref_877_, v_msg_878_, v___y_871_, v___y_872_);
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
v___x_888_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___closed__1);
v___x_889_ = l_Lean_MessageData_ofName(v_a_887_);
v___x_890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_888_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__5(v___x_890_, v___y_871_, v___y_872_);
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
lean_dec_ref_known(v_ex_870_, 2);
lean_dec(v_id_880_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1___boxed(lean_object* v_ex_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1(v_ex_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(lean_object* v_x_915_, lean_object* v___y_916_, lean_object* v___y_917_){
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
v___x_922_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1(v_a_920_, v___y_916_, v___y_917_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1___boxed(lean_object* v_x_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v_x_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1(lean_object* v___f_928_, lean_object* v___x_929_, lean_object* v_val_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_a_934_; lean_object* v___x_936_; 
v___x_936_ = l_Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1(v___f_928_, v___x_929_, v_val_930_);
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
v___x_982_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
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
lean_object* v_env_1069_; lean_object* v_scopes_1070_; lean_object* v_usedQuotCtxts_1071_; lean_object* v_nextMacroScope_1072_; lean_object* v_maxRecDepth_1073_; lean_object* v_ngen_1074_; lean_object* v_auxDeclNGen_1075_; lean_object* v_infoState_1076_; lean_object* v_prevLinterStates_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1161_; 
v_env_1069_ = lean_ctor_get(v_cmdState_1063_, 0);
v_scopes_1070_ = lean_ctor_get(v_cmdState_1063_, 2);
v_usedQuotCtxts_1071_ = lean_ctor_get(v_cmdState_1063_, 3);
v_nextMacroScope_1072_ = lean_ctor_get(v_cmdState_1063_, 4);
v_maxRecDepth_1073_ = lean_ctor_get(v_cmdState_1063_, 5);
v_ngen_1074_ = lean_ctor_get(v_cmdState_1063_, 6);
v_auxDeclNGen_1075_ = lean_ctor_get(v_cmdState_1063_, 7);
v_infoState_1076_ = lean_ctor_get(v_cmdState_1063_, 8);
v_prevLinterStates_1077_ = lean_ctor_get(v_cmdState_1063_, 11);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_cmdState_1063_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; lean_object* v_unused_1163_; lean_object* v_unused_1164_; lean_object* v_unused_1165_; 
v_unused_1162_ = lean_ctor_get(v_cmdState_1063_, 12);
lean_dec(v_unused_1162_);
v_unused_1163_ = lean_ctor_get(v_cmdState_1063_, 10);
lean_dec(v_unused_1163_);
v_unused_1164_ = lean_ctor_get(v_cmdState_1063_, 9);
lean_dec(v_unused_1164_);
v_unused_1165_ = lean_ctor_get(v_cmdState_1063_, 1);
lean_dec(v_unused_1165_);
v___x_1079_ = v_cmdState_1063_;
v_isShared_1080_ = v_isSharedCheck_1161_;
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
v_isShared_1080_ = v_isSharedCheck_1161_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___f_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; uint8_t v___y_1089_; lean_object* v_env_1090_; lean_object* v_scopes_1091_; lean_object* v_usedQuotCtxts_1092_; lean_object* v_nextMacroScope_1093_; lean_object* v_maxRecDepth_1094_; lean_object* v_ngen_1095_; lean_object* v_auxDeclNGen_1096_; lean_object* v_infoState_1097_; lean_object* v_traceState_1098_; lean_object* v_snapshotTasks_1099_; lean_object* v_prevLinterStates_1100_; lean_object* v_codeQualityEntryTasks_1101_; lean_object* v_messages_1102_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v_toProcessingContext_1116_; lean_object* v_fileName_1117_; lean_object* v_fileMap_1118_; lean_object* v_opts_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___y_1125_; lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___f_1081_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__0___boxed), 5, 2);
lean_closure_set(v___f_1081_, 0, v_stx_1061_);
lean_closure_set(v___f_1081_, 1, v_revCmds_1062_);
v___x_1082_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1083_ = l_Lean_Language_instImpl_00___x40_Lean_Language_Basic_3093936625____hygCtx___hyg_8_;
v___x_1084_ = l_List_head_x21___redArg(v___x_1082_, v_scopes_1070_);
v___x_1085_ = l_Lean_MessageLog_empty;
v___x_1086_ = lean_unsigned_to_nat(0u);
v___x_1087_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_1113_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1114_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_1114_, 0, v_env_1069_);
lean_ctor_set(v___x_1114_, 1, v___x_1085_);
lean_ctor_set(v___x_1114_, 2, v_scopes_1070_);
lean_ctor_set(v___x_1114_, 3, v_usedQuotCtxts_1071_);
lean_ctor_set(v___x_1114_, 4, v_nextMacroScope_1072_);
lean_ctor_set(v___x_1114_, 5, v_maxRecDepth_1073_);
lean_ctor_set(v___x_1114_, 6, v_ngen_1074_);
lean_ctor_set(v___x_1114_, 7, v_auxDeclNGen_1075_);
lean_ctor_set(v___x_1114_, 8, v_infoState_1076_);
lean_ctor_set(v___x_1114_, 9, v___x_1087_);
lean_ctor_set(v___x_1114_, 10, v___x_1113_);
lean_ctor_set(v___x_1114_, 11, v_prevLinterStates_1077_);
lean_ctor_set(v___x_1114_, 12, v___x_1113_);
v___x_1115_ = lean_st_mk_ref(v___x_1114_);
v_toProcessingContext_1116_ = lean_ctor_get(v_a_1067_, 0);
v_fileName_1117_ = lean_ctor_get(v_toProcessingContext_1116_, 1);
v_fileMap_1118_ = lean_ctor_get(v_toProcessingContext_1116_, 2);
v_opts_1119_ = lean_ctor_get(v___x_1084_, 1);
lean_inc_ref(v_opts_1119_);
lean_dec(v___x_1084_);
v___x_1120_ = lean_box(0);
v___x_1121_ = lean_box(0);
v___x_1122_ = l_Lean_firstFrontendMacroScope;
v___x_1123_ = lean_box(0);
v___x_1158_ = l_Lean_internal_cmdlineSnapshots;
v___x_1159_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_opts_1119_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
lean_inc_ref(v_snap_1065_);
v___x_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1160_, 0, v_snap_1065_);
v___y_1125_ = v___x_1160_;
goto v___jp_1124_;
}
else
{
v___y_1125_ = v___x_1121_;
goto v___jp_1124_;
}
v___jp_1088_:
{
lean_object* v_new_1103_; lean_object* v___x_1105_; 
v_new_1103_ = lean_ctor_get(v_snap_1065_, 1);
lean_inc(v_new_1103_);
lean_dec_ref(v_snap_1065_);
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 12, v_codeQualityEntryTasks_1101_);
lean_ctor_set(v___x_1079_, 11, v_prevLinterStates_1100_);
lean_ctor_set(v___x_1079_, 10, v_snapshotTasks_1099_);
lean_ctor_set(v___x_1079_, 9, v_traceState_1098_);
lean_ctor_set(v___x_1079_, 8, v_infoState_1097_);
lean_ctor_set(v___x_1079_, 7, v_auxDeclNGen_1096_);
lean_ctor_set(v___x_1079_, 6, v_ngen_1095_);
lean_ctor_set(v___x_1079_, 5, v_maxRecDepth_1094_);
lean_ctor_set(v___x_1079_, 4, v_nextMacroScope_1093_);
lean_ctor_set(v___x_1079_, 3, v_usedQuotCtxts_1092_);
lean_ctor_set(v___x_1079_, 2, v_scopes_1091_);
lean_ctor_set(v___x_1079_, 1, v_messages_1102_);
lean_ctor_set(v___x_1079_, 0, v_env_1090_);
v___x_1105_ = v___x_1079_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_env_1090_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v_messages_1102_);
lean_ctor_set(v_reuseFailAlloc_1112_, 2, v_scopes_1091_);
lean_ctor_set(v_reuseFailAlloc_1112_, 3, v_usedQuotCtxts_1092_);
lean_ctor_set(v_reuseFailAlloc_1112_, 4, v_nextMacroScope_1093_);
lean_ctor_set(v_reuseFailAlloc_1112_, 5, v_maxRecDepth_1094_);
lean_ctor_set(v_reuseFailAlloc_1112_, 6, v_ngen_1095_);
lean_ctor_set(v_reuseFailAlloc_1112_, 7, v_auxDeclNGen_1096_);
lean_ctor_set(v_reuseFailAlloc_1112_, 8, v_infoState_1097_);
lean_ctor_set(v_reuseFailAlloc_1112_, 9, v_traceState_1098_);
lean_ctor_set(v_reuseFailAlloc_1112_, 10, v_snapshotTasks_1099_);
lean_ctor_set(v_reuseFailAlloc_1112_, 11, v_prevLinterStates_1100_);
lean_ctor_set(v_reuseFailAlloc_1112_, 12, v_codeQualityEntryTasks_1101_);
v___x_1105_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1106_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__4);
v___x_1107_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_1108_ = lean_box(0);
v___x_1109_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1109_, 0, v___x_1106_);
lean_ctor_set(v___x_1109_, 1, v___x_1107_);
lean_ctor_set(v___x_1109_, 2, v___x_1108_);
lean_ctor_set(v___x_1109_, 3, v___x_1087_);
lean_ctor_set_uint8(v___x_1109_, sizeof(void*)*4, v___y_1089_);
v___x_1110_ = l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4(v___x_1083_, v___x_1109_);
v___x_1111_ = lean_io_promise_resolve(v___x_1110_, v_new_1103_);
lean_dec(v_new_1103_);
return v___x_1105_;
}
}
v___jp_1124_:
{
lean_object* v___x_1126_; uint8_t v___x_1127_; uint8_t v___x_1128_; lean_object* v___x_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; lean_object* v_fst_1134_; lean_object* v___x_1135_; lean_object* v_env_1136_; lean_object* v_messages_1137_; lean_object* v_scopes_1138_; lean_object* v_usedQuotCtxts_1139_; lean_object* v_nextMacroScope_1140_; lean_object* v_maxRecDepth_1141_; lean_object* v_ngen_1142_; lean_object* v_auxDeclNGen_1143_; lean_object* v_infoState_1144_; lean_object* v_traceState_1145_; lean_object* v_snapshotTasks_1146_; lean_object* v_prevLinterStates_1147_; lean_object* v_codeQualityEntryTasks_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1126_, 0, v_cancelTk_1066_);
v___x_1127_ = 0;
v___x_1128_ = 0;
lean_inc(v_beginPos_1064_);
lean_inc_ref(v_fileMap_1118_);
lean_inc_ref(v_fileName_1117_);
v___x_1129_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1129_, 0, v_fileName_1117_);
lean_ctor_set(v___x_1129_, 1, v_fileMap_1118_);
lean_ctor_set(v___x_1129_, 2, v___x_1086_);
lean_ctor_set(v___x_1129_, 3, v_beginPos_1064_);
lean_ctor_set(v___x_1129_, 4, v___x_1120_);
lean_ctor_set(v___x_1129_, 5, v___x_1121_);
lean_ctor_set(v___x_1129_, 6, v___x_1122_);
lean_ctor_set(v___x_1129_, 7, v___x_1123_);
lean_ctor_set(v___x_1129_, 8, v___y_1125_);
lean_ctor_set(v___x_1129_, 9, v___x_1126_);
lean_ctor_set_uint8(v___x_1129_, sizeof(void*)*10, v___x_1127_);
lean_ctor_set_uint8(v___x_1129_, sizeof(void*)*10 + 1, v___x_1128_);
lean_inc(v___x_1115_);
v___f_1130_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1130_, 0, v___f_1081_);
lean_closure_set(v___f_1130_, 1, v___x_1129_);
lean_closure_set(v___f_1130_, 2, v___x_1115_);
v___x_1131_ = l_Lean_Core_stderrAsMessages;
v___x_1132_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_opts_1119_, v___x_1131_);
lean_dec_ref(v_opts_1119_);
v___x_1133_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v___f_1130_, v___x_1132_, v_a_1067_);
v_fst_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_fst_1134_);
lean_dec_ref(v___x_1133_);
v___x_1135_ = lean_st_ref_get(v___x_1115_);
lean_dec(v___x_1115_);
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
lean_inc_ref(v_fileMap_1118_);
v___x_1151_ = l_Lean_FileMap_toPosition(v_fileMap_1118_, v_beginPos_1064_);
lean_dec(v_beginPos_1064_);
v___x_1152_ = 0;
v___x_1153_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
v___x_1154_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_fst_1134_);
v___x_1155_ = l_Lean_MessageData_ofFormat(v___x_1154_);
lean_inc_ref(v_fileName_1117_);
v___x_1156_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1156_, 0, v_fileName_1117_);
lean_ctor_set(v___x_1156_, 1, v___x_1151_);
lean_ctor_set(v___x_1156_, 2, v___x_1121_);
lean_ctor_set(v___x_1156_, 3, v___x_1153_);
lean_ctor_set(v___x_1156_, 4, v___x_1155_);
lean_ctor_set_uint8(v___x_1156_, sizeof(void*)*5, v___x_1127_);
lean_ctor_set_uint8(v___x_1156_, sizeof(void*)*5 + 1, v___x_1152_);
lean_ctor_set_uint8(v___x_1156_, sizeof(void*)*5 + 2, v___x_1127_);
v___x_1157_ = l_Lean_MessageLog_add(v___x_1156_, v_messages_1137_);
v___y_1089_ = v___x_1127_;
v_env_1090_ = v_env_1136_;
v_scopes_1091_ = v_scopes_1138_;
v_usedQuotCtxts_1092_ = v_usedQuotCtxts_1139_;
v_nextMacroScope_1093_ = v_nextMacroScope_1140_;
v_maxRecDepth_1094_ = v_maxRecDepth_1141_;
v_ngen_1095_ = v_ngen_1142_;
v_auxDeclNGen_1096_ = v_auxDeclNGen_1143_;
v_infoState_1097_ = v_infoState_1144_;
v_traceState_1098_ = v_traceState_1145_;
v_snapshotTasks_1099_ = v_snapshotTasks_1146_;
v_prevLinterStates_1100_ = v_prevLinterStates_1147_;
v_codeQualityEntryTasks_1101_ = v_codeQualityEntryTasks_1148_;
v_messages_1102_ = v___x_1157_;
goto v___jp_1088_;
}
else
{
lean_dec(v_fst_1134_);
lean_dec(v_beginPos_1064_);
v___y_1089_ = v___x_1127_;
v_env_1090_ = v_env_1136_;
v_scopes_1091_ = v_scopes_1138_;
v_usedQuotCtxts_1092_ = v_usedQuotCtxts_1139_;
v_nextMacroScope_1093_ = v_nextMacroScope_1140_;
v_maxRecDepth_1094_ = v_maxRecDepth_1141_;
v_ngen_1095_ = v_ngen_1142_;
v_auxDeclNGen_1096_ = v_auxDeclNGen_1143_;
v_infoState_1097_ = v_infoState_1144_;
v_traceState_1098_ = v_traceState_1145_;
v_snapshotTasks_1099_ = v_snapshotTasks_1146_;
v_prevLinterStates_1100_ = v_prevLinterStates_1147_;
v_codeQualityEntryTasks_1101_ = v_codeQualityEntryTasks_1148_;
v_messages_1102_ = v_messages_1137_;
goto v___jp_1088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___boxed(lean_object* v_stx_1166_, lean_object* v_revCmds_1167_, lean_object* v_cmdState_1168_, lean_object* v_beginPos_1169_, lean_object* v_snap_1170_, lean_object* v_cancelTk_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_stx_1166_, v_revCmds_1167_, v_cmdState_1168_, v_beginPos_1169_, v_snap_1170_, v_cancelTk_1171_, v_a_1172_);
lean_dec_ref(v_a_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(lean_object* v_00_u03b1_1175_, lean_object* v_h_1176_, lean_object* v_x_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___redArg(v_h_1176_, v_x_1177_, v___y_1178_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1181_, lean_object* v_h_1182_, lean_object* v_x_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_IO_withStdin___at___00IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3_spec__5(v_00_u03b1_1181_, v_h_1182_, v_x_1183_, v___y_1184_);
lean_dec_ref(v___y_1184_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(lean_object* v_00_u03b1_1187_, lean_object* v_x_1188_, uint8_t v_isolateStderr_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___redArg(v_x_1188_, v_isolateStderr_1189_, v___y_1190_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3___boxed(lean_object* v_00_u03b1_1193_, lean_object* v_x_1194_, lean_object* v_isolateStderr_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
uint8_t v_isolateStderr_boxed_1198_; lean_object* v_res_1199_; 
v_isolateStderr_boxed_1198_ = lean_unbox(v_isolateStderr_1195_);
v_res_1199_ = l_IO_FS_withIsolatedStreams___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__3(v_00_u03b1_1193_, v_x_1194_, v_isolateStderr_boxed_1198_, v___y_1196_);
lean_dec_ref(v___y_1196_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11(lean_object* v_msgData_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg(v_msgData_1200_, v___y_1202_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___boxed(lean_object* v_msgData_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11(v_msgData_1205_, v___y_1206_, v___y_1207_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__0(lean_object* v_a_1210_){
_start:
{
lean_object* v_toSnapshotTreeM_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_toSnapshotTreeM_1211_ = lean_ctor_get(v_a_1210_, 1);
lean_inc_ref(v_toSnapshotTreeM_1211_);
lean_dec_ref(v_a_1210_);
v___x_1212_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1213_ = lean_apply_1(v_toSnapshotTreeM_1211_, v___x_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__1(lean_object* v_a_1214_){
_start:
{
lean_object* v_toSnapshot_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v_toSnapshot_1215_ = lean_ctor_get(v_a_1214_, 0);
lean_inc_ref(v_toSnapshot_1215_);
lean_dec_ref(v_a_1214_);
v___x_1216_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1217_ = l_Lean_Language_Snapshot_transform(v_toSnapshot_1215_, v___x_1216_);
v___x_1218_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1217_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__2(lean_object* v_a_1220_){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1221_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1222_ = l_Lean_Language_Snapshot_transform(v_a_1220_, v___x_1221_);
v___x_1223_ = ((lean_object*)(l_Lean_Language_DynamicSnapshot_ofTyped___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__4___lam__0___closed__0));
v___x_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1222_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(lean_object* v_opts_1225_, lean_object* v_opt_1226_){
_start:
{
lean_object* v_name_1227_; lean_object* v_defValue_1228_; lean_object* v_map_1229_; lean_object* v___x_1230_; 
v_name_1227_ = lean_ctor_get(v_opt_1226_, 0);
v_defValue_1228_ = lean_ctor_get(v_opt_1226_, 1);
v_map_1229_ = lean_ctor_get(v_opts_1225_, 0);
v___x_1230_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1229_, v_name_1227_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_inc(v_defValue_1228_);
return v_defValue_1228_;
}
else
{
lean_object* v_val_1231_; 
v_val_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_val_1231_);
lean_dec_ref_known(v___x_1230_, 1);
if (lean_obj_tag(v_val_1231_) == 3)
{
lean_object* v_v_1232_; 
v_v_1232_ = lean_ctor_get(v_val_1231_, 0);
lean_inc(v_v_1232_);
lean_dec_ref_known(v_val_1231_, 1);
return v_v_1232_;
}
else
{
lean_dec(v_val_1231_);
lean_inc(v_defValue_1228_);
return v_defValue_1228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3___boxed(lean_object* v_opts_1233_, lean_object* v_opt_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1233_, v_opt_1234_);
lean_dec_ref(v_opt_1234_);
lean_dec_ref(v_opts_1233_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(lean_object* v_a_1236_){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = l_Lean_Language_instInhabitedSnapshotTreeTransform_default;
v___x_1238_ = l_Lean_Language_Lean_instToSnapshotTreeCommandParsedSnapshot_go(v_a_1236_, v___x_1237_);
return v___x_1238_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1244_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1245_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1246_ = l_Lean_Name_append(v___x_1245_, v___x_1244_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(lean_object* v___x_1247_, lean_object* v___x_1248_, uint8_t v_val_1249_, lean_object* v_val_1250_, lean_object* v_val_1251_, lean_object* v___x_1252_, lean_object* v___x_1253_, uint8_t v___x_1254_, lean_object* v_a_1255_, lean_object* v_pos_1256_, lean_object* v___x_1257_, lean_object* v_infoSt_1258_){
_start:
{
lean_object* v___y_1261_; lean_object* v_msgLog_1262_; lean_object* v___y_1268_; lean_object* v_trees_1300_; lean_object* v_size_1301_; uint8_t v___x_1302_; 
v_trees_1300_ = lean_ctor_get(v_infoSt_1258_, 2);
v_size_1301_ = lean_ctor_get(v_trees_1300_, 2);
v___x_1302_ = lean_nat_dec_lt(v___x_1253_, v_size_1301_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; 
v___x_1303_ = l_outOfBounds___redArg(v___x_1257_);
v___y_1268_ = v___x_1303_;
goto v___jp_1267_;
}
else
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1257_, v_trees_1300_, v___x_1253_);
v___y_1268_ = v___x_1304_;
goto v___jp_1267_;
}
v___jp_1260_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1263_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_msgLog_1262_);
v___x_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1264_, 0, v___y_1261_);
v___x_1265_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1265_, 0, v___x_1247_);
lean_ctor_set(v___x_1265_, 1, v___x_1263_);
lean_ctor_set(v___x_1265_, 2, v___x_1264_);
lean_ctor_set(v___x_1265_, 3, v___x_1248_);
lean_ctor_set_uint8(v___x_1265_, sizeof(void*)*4, v_val_1249_);
v___x_1266_ = lean_io_promise_resolve(v___x_1265_, v_val_1250_);
return v___x_1266_;
}
v___jp_1267_:
{
lean_object* v_scopes_1269_; lean_object* v___x_1270_; lean_object* v_opts_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v_hasTrace_1275_; 
v_scopes_1269_ = lean_ctor_get(v_val_1251_, 2);
v___x_1270_ = l_List_head_x21___redArg(v___x_1252_, v_scopes_1269_);
v_opts_1271_ = lean_ctor_get(v___x_1270_, 1);
lean_inc_ref(v_opts_1271_);
lean_dec(v___x_1270_);
v___x_1272_ = l_Lean_MessageLog_empty;
v___x_1273_ = l_Lean_inheritedTraceOptions;
v___x_1274_ = lean_st_ref_get(v___x_1273_);
v_hasTrace_1275_ = lean_ctor_get_uint8(v_opts_1271_, sizeof(void*)*1);
if (v_hasTrace_1275_ == 0)
{
lean_dec(v___x_1274_);
lean_dec_ref(v_opts_1271_);
lean_dec(v___x_1253_);
v___y_1261_ = v___y_1268_;
v_msgLog_1262_ = v___x_1272_;
goto v___jp_1260_;
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; 
v___x_1276_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__2));
v___x_1277_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1278_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___closed__3);
v___x_1279_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1274_, v_opts_1271_, v___x_1278_);
lean_dec_ref(v_opts_1271_);
lean_dec(v___x_1274_);
if (v___x_1279_ == 0)
{
lean_dec(v___x_1253_);
v___y_1261_ = v___y_1268_;
v_msgLog_1262_ = v___x_1272_;
goto v___jp_1260_;
}
else
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = lean_box(0);
lean_inc_ref(v___y_1268_);
v___x_1281_ = l_Lean_Elab_InfoTree_format(v___y_1268_, v___x_1280_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; double v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v_toProcessingContext_1286_; lean_object* v_fileName_1287_; lean_object* v_fileMap_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref_known(v___x_1281_, 1);
v___x_1283_ = lean_float_of_nat(v___x_1253_);
v___x_1284_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
v___x_1285_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1285_, 0, v___x_1276_);
lean_ctor_set(v___x_1285_, 1, v___x_1280_);
lean_ctor_set(v___x_1285_, 2, v___x_1284_);
lean_ctor_set_float(v___x_1285_, sizeof(void*)*3, v___x_1283_);
lean_ctor_set_float(v___x_1285_, sizeof(void*)*3 + 8, v___x_1283_);
lean_ctor_set_uint8(v___x_1285_, sizeof(void*)*3 + 16, v___x_1254_);
v_toProcessingContext_1286_ = lean_ctor_get(v_a_1255_, 0);
v_fileName_1287_ = lean_ctor_get(v_toProcessingContext_1286_, 1);
v_fileMap_1288_ = lean_ctor_get(v_toProcessingContext_1286_, 2);
v___x_1289_ = l_Lean_MessageData_nil;
v___x_1290_ = l_Lean_MessageData_ofFormat(v_a_1282_);
v___x_1291_ = lean_unsigned_to_nat(1u);
v___x_1292_ = lean_mk_empty_array_with_capacity(v___x_1291_);
v___x_1293_ = lean_array_push(v___x_1292_, v___x_1290_);
v___x_1294_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1285_);
lean_ctor_set(v___x_1294_, 1, v___x_1289_);
lean_ctor_set(v___x_1294_, 2, v___x_1293_);
v___x_1295_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1277_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
lean_inc_ref(v_fileMap_1288_);
v___x_1296_ = l_Lean_FileMap_toPosition(v_fileMap_1288_, v_pos_1256_);
v___x_1297_ = 0;
lean_inc_ref(v_fileName_1287_);
v___x_1298_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1298_, 0, v_fileName_1287_);
lean_ctor_set(v___x_1298_, 1, v___x_1296_);
lean_ctor_set(v___x_1298_, 2, v___x_1280_);
lean_ctor_set(v___x_1298_, 3, v___x_1284_);
lean_ctor_set(v___x_1298_, 4, v___x_1295_);
lean_ctor_set_uint8(v___x_1298_, sizeof(void*)*5, v_val_1249_);
lean_ctor_set_uint8(v___x_1298_, sizeof(void*)*5 + 1, v___x_1297_);
lean_ctor_set_uint8(v___x_1298_, sizeof(void*)*5 + 2, v_val_1249_);
v___x_1299_ = l_Lean_MessageLog_add(v___x_1298_, v___x_1272_);
v___y_1261_ = v___y_1268_;
v_msgLog_1262_ = v___x_1299_;
goto v___jp_1260_;
}
else
{
lean_dec_ref_known(v___x_1281_, 1);
lean_dec(v___x_1253_);
v___y_1261_ = v___y_1268_;
v_msgLog_1262_ = v___x_1272_;
goto v___jp_1260_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed(lean_object* v___x_1305_, lean_object* v___x_1306_, lean_object* v_val_1307_, lean_object* v_val_1308_, lean_object* v_val_1309_, lean_object* v___x_1310_, lean_object* v___x_1311_, lean_object* v___x_1312_, lean_object* v_a_1313_, lean_object* v_pos_1314_, lean_object* v___x_1315_, lean_object* v_infoSt_1316_, lean_object* v___y_1317_){
_start:
{
uint8_t v_val_24306__boxed_1318_; uint8_t v___x_24311__boxed_1319_; lean_object* v_res_1320_; 
v_val_24306__boxed_1318_ = lean_unbox(v_val_1307_);
v___x_24311__boxed_1319_ = lean_unbox(v___x_1312_);
v_res_1320_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4(v___x_1305_, v___x_1306_, v_val_24306__boxed_1318_, v_val_1308_, v_val_1309_, v___x_1310_, v___x_1311_, v___x_24311__boxed_1319_, v_a_1313_, v_pos_1314_, v___x_1315_, v_infoSt_1316_);
lean_dec_ref(v_infoSt_1316_);
lean_dec_ref(v___x_1315_);
lean_dec(v_pos_1314_);
lean_dec_ref(v_a_1313_);
lean_dec_ref(v___x_1310_);
lean_dec_ref(v_val_1309_);
lean_dec(v_val_1308_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(lean_object* v___x_1321_, lean_object* v___x_1322_, lean_object* v___x_1323_, uint8_t v_val_1324_, lean_object* v_as_1325_, size_t v_sz_1326_, size_t v_i_1327_, lean_object* v_b_1328_){
_start:
{
uint8_t v___x_1330_; 
v___x_1330_ = lean_usize_dec_lt(v_i_1327_, v_sz_1326_);
if (v___x_1330_ == 0)
{
lean_dec_ref(v___x_1323_);
lean_dec_ref(v___x_1321_);
return v_b_1328_;
}
else
{
lean_object* v_snd_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1349_; 
v_snd_1331_ = lean_ctor_get(v_b_1328_, 1);
v_isSharedCheck_1349_ = !lean_is_exclusive(v_b_1328_);
if (v_isSharedCheck_1349_ == 0)
{
lean_object* v_unused_1350_; 
v_unused_1350_ = lean_ctor_get(v_b_1328_, 0);
lean_dec(v_unused_1350_);
v___x_1333_ = v_b_1328_;
v_isShared_1334_ = v_isSharedCheck_1349_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_snd_1331_);
lean_dec(v_b_1328_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1349_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v_a_1335_; lean_object* v_msg_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1344_; 
v_a_1335_ = lean_array_uget_borrowed(v_as_1325_, v_i_1327_);
v_msg_1336_ = lean_ctor_get(v_a_1335_, 1);
v___x_1337_ = lean_box(0);
lean_inc_ref(v___x_1321_);
v___x_1338_ = l_Lean_FileMap_toPosition(v___x_1321_, v___x_1322_);
v___x_1339_ = 0;
v___x_1340_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1336_);
lean_inc_ref(v___x_1323_);
v___x_1341_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1341_, 0, v___x_1323_);
lean_ctor_set(v___x_1341_, 1, v___x_1338_);
lean_ctor_set(v___x_1341_, 2, v___x_1337_);
lean_ctor_set(v___x_1341_, 3, v___x_1340_);
lean_ctor_set(v___x_1341_, 4, v_msg_1336_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*5, v_val_1324_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*5 + 1, v___x_1339_);
lean_ctor_set_uint8(v___x_1341_, sizeof(void*)*5 + 2, v_val_1324_);
v___x_1342_ = l_Lean_MessageLog_add(v___x_1341_, v_snd_1331_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 1, v___x_1342_);
lean_ctor_set(v___x_1333_, 0, v___x_1337_);
v___x_1344_ = v___x_1333_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1337_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
size_t v___x_1345_; size_t v___x_1346_; 
v___x_1345_ = ((size_t)1ULL);
v___x_1346_ = lean_usize_add(v_i_1327_, v___x_1345_);
v_i_1327_ = v___x_1346_;
v_b_1328_ = v___x_1344_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9___boxed(lean_object* v___x_1351_, lean_object* v___x_1352_, lean_object* v___x_1353_, lean_object* v_val_1354_, lean_object* v_as_1355_, lean_object* v_sz_1356_, lean_object* v_i_1357_, lean_object* v_b_1358_, lean_object* v___y_1359_){
_start:
{
uint8_t v_val_24419__boxed_1360_; size_t v_sz_boxed_1361_; size_t v_i_boxed_1362_; lean_object* v_res_1363_; 
v_val_24419__boxed_1360_ = lean_unbox(v_val_1354_);
v_sz_boxed_1361_ = lean_unbox_usize(v_sz_1356_);
lean_dec(v_sz_1356_);
v_i_boxed_1362_ = lean_unbox_usize(v_i_1357_);
lean_dec(v_i_1357_);
v_res_1363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1351_, v___x_1352_, v___x_1353_, v_val_24419__boxed_1360_, v_as_1355_, v_sz_boxed_1361_, v_i_boxed_1362_, v_b_1358_);
lean_dec_ref(v_as_1355_);
lean_dec(v___x_1352_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(lean_object* v___x_1364_, lean_object* v___x_1365_, lean_object* v___x_1366_, uint8_t v_val_1367_, lean_object* v_as_1368_, size_t v_sz_1369_, size_t v_i_1370_, lean_object* v_b_1371_){
_start:
{
uint8_t v___x_1373_; 
v___x_1373_ = lean_usize_dec_lt(v_i_1370_, v_sz_1369_);
if (v___x_1373_ == 0)
{
lean_dec_ref(v___x_1366_);
lean_dec_ref(v___x_1364_);
return v_b_1371_;
}
else
{
lean_object* v_snd_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1392_; 
v_snd_1374_ = lean_ctor_get(v_b_1371_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_b_1371_);
if (v_isSharedCheck_1392_ == 0)
{
lean_object* v_unused_1393_; 
v_unused_1393_ = lean_ctor_get(v_b_1371_, 0);
lean_dec(v_unused_1393_);
v___x_1376_ = v_b_1371_;
v_isShared_1377_ = v_isSharedCheck_1392_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_snd_1374_);
lean_dec(v_b_1371_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1392_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v_a_1378_; lean_object* v_msg_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; uint8_t v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1387_; 
v_a_1378_ = lean_array_uget_borrowed(v_as_1368_, v_i_1370_);
v_msg_1379_ = lean_ctor_get(v_a_1378_, 1);
v___x_1380_ = lean_box(0);
lean_inc_ref(v___x_1364_);
v___x_1381_ = l_Lean_FileMap_toPosition(v___x_1364_, v___x_1365_);
v___x_1382_ = 0;
v___x_1383_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1379_);
lean_inc_ref(v___x_1366_);
v___x_1384_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1384_, 0, v___x_1366_);
lean_ctor_set(v___x_1384_, 1, v___x_1381_);
lean_ctor_set(v___x_1384_, 2, v___x_1380_);
lean_ctor_set(v___x_1384_, 3, v___x_1383_);
lean_ctor_set(v___x_1384_, 4, v_msg_1379_);
lean_ctor_set_uint8(v___x_1384_, sizeof(void*)*5, v_val_1367_);
lean_ctor_set_uint8(v___x_1384_, sizeof(void*)*5 + 1, v___x_1382_);
lean_ctor_set_uint8(v___x_1384_, sizeof(void*)*5 + 2, v_val_1367_);
v___x_1385_ = l_Lean_MessageLog_add(v___x_1384_, v_snd_1374_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 1, v___x_1385_);
lean_ctor_set(v___x_1376_, 0, v___x_1380_);
v___x_1387_ = v___x_1376_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1391_, 1, v___x_1385_);
v___x_1387_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
size_t v___x_1388_; size_t v___x_1389_; lean_object* v___x_1390_; 
v___x_1388_ = ((size_t)1ULL);
v___x_1389_ = lean_usize_add(v_i_1370_, v___x_1388_);
v___x_1390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7_spec__9(v___x_1364_, v___x_1365_, v___x_1366_, v_val_1367_, v_as_1368_, v_sz_1369_, v___x_1389_, v___x_1387_);
return v___x_1390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7___boxed(lean_object* v___x_1394_, lean_object* v___x_1395_, lean_object* v___x_1396_, lean_object* v_val_1397_, lean_object* v_as_1398_, lean_object* v_sz_1399_, lean_object* v_i_1400_, lean_object* v_b_1401_, lean_object* v___y_1402_){
_start:
{
uint8_t v_val_24471__boxed_1403_; size_t v_sz_boxed_1404_; size_t v_i_boxed_1405_; lean_object* v_res_1406_; 
v_val_24471__boxed_1403_ = lean_unbox(v_val_1397_);
v_sz_boxed_1404_ = lean_unbox_usize(v_sz_1399_);
lean_dec(v_sz_1399_);
v_i_boxed_1405_ = lean_unbox_usize(v_i_1400_);
lean_dec(v_i_1400_);
v_res_1406_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1394_, v___x_1395_, v___x_1396_, v_val_24471__boxed_1403_, v_as_1398_, v_sz_boxed_1404_, v_i_boxed_1405_, v_b_1401_);
lean_dec_ref(v_as_1398_);
lean_dec(v___x_1395_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(lean_object* v_init_1407_, lean_object* v___x_1408_, lean_object* v___x_1409_, lean_object* v___x_1410_, uint8_t v_val_1411_, lean_object* v_n_1412_, lean_object* v_b_1413_){
_start:
{
if (lean_obj_tag(v_n_1412_) == 0)
{
lean_object* v_cs_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; size_t v_sz_1418_; size_t v___x_1419_; lean_object* v___x_1420_; lean_object* v_fst_1421_; 
v_cs_1415_ = lean_ctor_get(v_n_1412_, 0);
v___x_1416_ = lean_box(0);
v___x_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
lean_ctor_set(v___x_1417_, 1, v_b_1413_);
v_sz_1418_ = lean_array_size(v_cs_1415_);
v___x_1419_ = ((size_t)0ULL);
v___x_1420_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1407_, v___x_1408_, v___x_1409_, v___x_1410_, v_val_1411_, v_cs_1415_, v_sz_1418_, v___x_1419_, v___x_1417_);
v_fst_1421_ = lean_ctor_get(v___x_1420_, 0);
if (lean_obj_tag(v_fst_1421_) == 0)
{
lean_object* v_snd_1422_; lean_object* v___x_1423_; 
v_snd_1422_ = lean_ctor_get(v___x_1420_, 1);
lean_inc(v_snd_1422_);
lean_dec_ref(v___x_1420_);
v___x_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1423_, 0, v_snd_1422_);
return v___x_1423_;
}
else
{
lean_object* v_val_1424_; 
lean_inc_ref(v_fst_1421_);
lean_dec_ref(v___x_1420_);
v_val_1424_ = lean_ctor_get(v_fst_1421_, 0);
lean_inc(v_val_1424_);
lean_dec_ref_known(v_fst_1421_, 1);
return v_val_1424_;
}
}
else
{
lean_object* v_vs_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; size_t v_sz_1428_; size_t v___x_1429_; lean_object* v___x_1430_; lean_object* v_fst_1431_; 
v_vs_1425_ = lean_ctor_get(v_n_1412_, 0);
v___x_1426_ = lean_box(0);
v___x_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
lean_ctor_set(v___x_1427_, 1, v_b_1413_);
v_sz_1428_ = lean_array_size(v_vs_1425_);
v___x_1429_ = ((size_t)0ULL);
v___x_1430_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__7(v___x_1408_, v___x_1409_, v___x_1410_, v_val_1411_, v_vs_1425_, v_sz_1428_, v___x_1429_, v___x_1427_);
v_fst_1431_ = lean_ctor_get(v___x_1430_, 0);
if (lean_obj_tag(v_fst_1431_) == 0)
{
lean_object* v_snd_1432_; lean_object* v___x_1433_; 
v_snd_1432_ = lean_ctor_get(v___x_1430_, 1);
lean_inc(v_snd_1432_);
lean_dec_ref(v___x_1430_);
v___x_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1433_, 0, v_snd_1432_);
return v___x_1433_;
}
else
{
lean_object* v_val_1434_; 
lean_inc_ref(v_fst_1431_);
lean_dec_ref(v___x_1430_);
v_val_1434_ = lean_ctor_get(v_fst_1431_, 0);
lean_inc(v_val_1434_);
lean_dec_ref_known(v_fst_1431_, 1);
return v_val_1434_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(lean_object* v_init_1435_, lean_object* v___x_1436_, lean_object* v___x_1437_, lean_object* v___x_1438_, uint8_t v_val_1439_, lean_object* v_as_1440_, size_t v_sz_1441_, size_t v_i_1442_, lean_object* v_b_1443_){
_start:
{
uint8_t v___x_1445_; 
v___x_1445_ = lean_usize_dec_lt(v_i_1442_, v_sz_1441_);
if (v___x_1445_ == 0)
{
lean_dec_ref(v___x_1438_);
lean_dec_ref(v___x_1436_);
return v_b_1443_;
}
else
{
lean_object* v_snd_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1464_; 
v_snd_1446_ = lean_ctor_get(v_b_1443_, 1);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_b_1443_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v_b_1443_, 0);
lean_dec(v_unused_1465_);
v___x_1448_ = v_b_1443_;
v_isShared_1449_ = v_isSharedCheck_1464_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_snd_1446_);
lean_dec(v_b_1443_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1464_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v_a_1451_; lean_object* v___x_1452_; 
v___x_1450_ = lean_box(0);
v_a_1451_ = lean_array_uget_borrowed(v_as_1440_, v_i_1442_);
lean_inc(v_snd_1446_);
lean_inc_ref(v___x_1438_);
lean_inc_ref(v___x_1436_);
v___x_1452_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1435_, v___x_1436_, v___x_1437_, v___x_1438_, v_val_1439_, v_a_1451_, v_snd_1446_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v___x_1453_; lean_object* v___x_1455_; 
lean_dec_ref(v___x_1438_);
lean_dec_ref(v___x_1436_);
v___x_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1452_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1453_);
v___x_1455_ = v___x_1448_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v_snd_1446_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; 
lean_dec(v_snd_1446_);
v_a_1457_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1452_, 1);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 1, v_a_1457_);
lean_ctor_set(v___x_1448_, 0, v___x_1450_);
v___x_1459_ = v___x_1448_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1450_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v_a_1457_);
v___x_1459_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
size_t v___x_1460_; size_t v___x_1461_; 
v___x_1460_ = ((size_t)1ULL);
v___x_1461_ = lean_usize_add(v_i_1442_, v___x_1460_);
v_i_1442_ = v___x_1461_;
v_b_1443_ = v___x_1459_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6___boxed(lean_object* v_init_1466_, lean_object* v___x_1467_, lean_object* v___x_1468_, lean_object* v___x_1469_, lean_object* v_val_1470_, lean_object* v_as_1471_, lean_object* v_sz_1472_, lean_object* v_i_1473_, lean_object* v_b_1474_, lean_object* v___y_1475_){
_start:
{
uint8_t v_val_24522__boxed_1476_; size_t v_sz_boxed_1477_; size_t v_i_boxed_1478_; lean_object* v_res_1479_; 
v_val_24522__boxed_1476_ = lean_unbox(v_val_1470_);
v_sz_boxed_1477_ = lean_unbox_usize(v_sz_1472_);
lean_dec(v_sz_1472_);
v_i_boxed_1478_ = lean_unbox_usize(v_i_1473_);
lean_dec(v_i_1473_);
v_res_1479_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4_spec__6(v_init_1466_, v___x_1467_, v___x_1468_, v___x_1469_, v_val_24522__boxed_1476_, v_as_1471_, v_sz_boxed_1477_, v_i_boxed_1478_, v_b_1474_);
lean_dec_ref(v_as_1471_);
lean_dec(v___x_1468_);
lean_dec_ref(v_init_1466_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4___boxed(lean_object* v_init_1480_, lean_object* v___x_1481_, lean_object* v___x_1482_, lean_object* v___x_1483_, lean_object* v_val_1484_, lean_object* v_n_1485_, lean_object* v_b_1486_, lean_object* v___y_1487_){
_start:
{
uint8_t v_val_24538__boxed_1488_; lean_object* v_res_1489_; 
v_val_24538__boxed_1488_ = lean_unbox(v_val_1484_);
v_res_1489_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1480_, v___x_1481_, v___x_1482_, v___x_1483_, v_val_24538__boxed_1488_, v_n_1485_, v_b_1486_);
lean_dec_ref(v_n_1485_);
lean_dec(v___x_1482_);
lean_dec_ref(v_init_1480_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(lean_object* v___x_1490_, lean_object* v___x_1491_, lean_object* v___x_1492_, uint8_t v_val_1493_, lean_object* v_as_1494_, size_t v_sz_1495_, size_t v_i_1496_, lean_object* v_b_1497_){
_start:
{
uint8_t v___x_1499_; 
v___x_1499_ = lean_usize_dec_lt(v_i_1496_, v_sz_1495_);
if (v___x_1499_ == 0)
{
lean_dec_ref(v___x_1492_);
lean_dec_ref(v___x_1490_);
return v_b_1497_;
}
else
{
lean_object* v_snd_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1518_; 
v_snd_1500_ = lean_ctor_get(v_b_1497_, 1);
v_isSharedCheck_1518_ = !lean_is_exclusive(v_b_1497_);
if (v_isSharedCheck_1518_ == 0)
{
lean_object* v_unused_1519_; 
v_unused_1519_ = lean_ctor_get(v_b_1497_, 0);
lean_dec(v_unused_1519_);
v___x_1502_ = v_b_1497_;
v_isShared_1503_ = v_isSharedCheck_1518_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_snd_1500_);
lean_dec(v_b_1497_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1518_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v_a_1504_; lean_object* v_msg_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1513_; 
v_a_1504_ = lean_array_uget_borrowed(v_as_1494_, v_i_1496_);
v_msg_1505_ = lean_ctor_get(v_a_1504_, 1);
v___x_1506_ = lean_box(0);
lean_inc_ref(v___x_1490_);
v___x_1507_ = l_Lean_FileMap_toPosition(v___x_1490_, v___x_1491_);
v___x_1508_ = 0;
v___x_1509_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1505_);
lean_inc_ref(v___x_1492_);
v___x_1510_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1510_, 0, v___x_1492_);
lean_ctor_set(v___x_1510_, 1, v___x_1507_);
lean_ctor_set(v___x_1510_, 2, v___x_1506_);
lean_ctor_set(v___x_1510_, 3, v___x_1509_);
lean_ctor_set(v___x_1510_, 4, v_msg_1505_);
lean_ctor_set_uint8(v___x_1510_, sizeof(void*)*5, v_val_1493_);
lean_ctor_set_uint8(v___x_1510_, sizeof(void*)*5 + 1, v___x_1508_);
lean_ctor_set_uint8(v___x_1510_, sizeof(void*)*5 + 2, v_val_1493_);
v___x_1511_ = l_Lean_MessageLog_add(v___x_1510_, v_snd_1500_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 1, v___x_1511_);
lean_ctor_set(v___x_1502_, 0, v___x_1506_);
v___x_1513_ = v___x_1502_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v___x_1506_);
lean_ctor_set(v_reuseFailAlloc_1517_, 1, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
size_t v___x_1514_; size_t v___x_1515_; 
v___x_1514_ = ((size_t)1ULL);
v___x_1515_ = lean_usize_add(v_i_1496_, v___x_1514_);
v_i_1496_ = v___x_1515_;
v_b_1497_ = v___x_1513_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9___boxed(lean_object* v___x_1520_, lean_object* v___x_1521_, lean_object* v___x_1522_, lean_object* v_val_1523_, lean_object* v_as_1524_, lean_object* v_sz_1525_, lean_object* v_i_1526_, lean_object* v_b_1527_, lean_object* v___y_1528_){
_start:
{
uint8_t v_val_24620__boxed_1529_; size_t v_sz_boxed_1530_; size_t v_i_boxed_1531_; lean_object* v_res_1532_; 
v_val_24620__boxed_1529_ = lean_unbox(v_val_1523_);
v_sz_boxed_1530_ = lean_unbox_usize(v_sz_1525_);
lean_dec(v_sz_1525_);
v_i_boxed_1531_ = lean_unbox_usize(v_i_1526_);
lean_dec(v_i_1526_);
v_res_1532_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1520_, v___x_1521_, v___x_1522_, v_val_24620__boxed_1529_, v_as_1524_, v_sz_boxed_1530_, v_i_boxed_1531_, v_b_1527_);
lean_dec_ref(v_as_1524_);
lean_dec(v___x_1521_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(lean_object* v___x_1533_, lean_object* v___x_1534_, lean_object* v___x_1535_, uint8_t v_val_1536_, lean_object* v_as_1537_, size_t v_sz_1538_, size_t v_i_1539_, lean_object* v_b_1540_){
_start:
{
uint8_t v___x_1542_; 
v___x_1542_ = lean_usize_dec_lt(v_i_1539_, v_sz_1538_);
if (v___x_1542_ == 0)
{
lean_dec_ref(v___x_1535_);
lean_dec_ref(v___x_1533_);
return v_b_1540_;
}
else
{
lean_object* v_snd_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1561_; 
v_snd_1543_ = lean_ctor_get(v_b_1540_, 1);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_b_1540_);
if (v_isSharedCheck_1561_ == 0)
{
lean_object* v_unused_1562_; 
v_unused_1562_ = lean_ctor_get(v_b_1540_, 0);
lean_dec(v_unused_1562_);
v___x_1545_ = v_b_1540_;
v_isShared_1546_ = v_isSharedCheck_1561_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_snd_1543_);
lean_dec(v_b_1540_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1561_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v_a_1547_; lean_object* v_msg_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1556_; 
v_a_1547_ = lean_array_uget_borrowed(v_as_1537_, v_i_1539_);
v_msg_1548_ = lean_ctor_get(v_a_1547_, 1);
v___x_1549_ = lean_box(0);
lean_inc_ref(v___x_1533_);
v___x_1550_ = l_Lean_FileMap_toPosition(v___x_1533_, v___x_1534_);
v___x_1551_ = 0;
v___x_1552_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
lean_inc_ref(v_msg_1548_);
lean_inc_ref(v___x_1535_);
v___x_1553_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1553_, 0, v___x_1535_);
lean_ctor_set(v___x_1553_, 1, v___x_1550_);
lean_ctor_set(v___x_1553_, 2, v___x_1549_);
lean_ctor_set(v___x_1553_, 3, v___x_1552_);
lean_ctor_set(v___x_1553_, 4, v_msg_1548_);
lean_ctor_set_uint8(v___x_1553_, sizeof(void*)*5, v_val_1536_);
lean_ctor_set_uint8(v___x_1553_, sizeof(void*)*5 + 1, v___x_1551_);
lean_ctor_set_uint8(v___x_1553_, sizeof(void*)*5 + 2, v_val_1536_);
v___x_1554_ = l_Lean_MessageLog_add(v___x_1553_, v_snd_1543_);
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 1, v___x_1554_);
lean_ctor_set(v___x_1545_, 0, v___x_1549_);
v___x_1556_ = v___x_1545_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1549_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v___x_1554_);
v___x_1556_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
size_t v___x_1557_; size_t v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = ((size_t)1ULL);
v___x_1558_ = lean_usize_add(v_i_1539_, v___x_1557_);
v___x_1559_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5_spec__9(v___x_1533_, v___x_1534_, v___x_1535_, v_val_1536_, v_as_1537_, v_sz_1538_, v___x_1558_, v___x_1556_);
return v___x_1559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5___boxed(lean_object* v___x_1563_, lean_object* v___x_1564_, lean_object* v___x_1565_, lean_object* v_val_1566_, lean_object* v_as_1567_, lean_object* v_sz_1568_, lean_object* v_i_1569_, lean_object* v_b_1570_, lean_object* v___y_1571_){
_start:
{
uint8_t v_val_24672__boxed_1572_; size_t v_sz_boxed_1573_; size_t v_i_boxed_1574_; lean_object* v_res_1575_; 
v_val_24672__boxed_1572_ = lean_unbox(v_val_1566_);
v_sz_boxed_1573_ = lean_unbox_usize(v_sz_1568_);
lean_dec(v_sz_1568_);
v_i_boxed_1574_ = lean_unbox_usize(v_i_1569_);
lean_dec(v_i_1569_);
v_res_1575_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1563_, v___x_1564_, v___x_1565_, v_val_24672__boxed_1572_, v_as_1567_, v_sz_boxed_1573_, v_i_boxed_1574_, v_b_1570_);
lean_dec_ref(v_as_1567_);
lean_dec(v___x_1564_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(lean_object* v___x_1576_, lean_object* v___x_1577_, lean_object* v___x_1578_, uint8_t v_val_1579_, lean_object* v_t_1580_, lean_object* v_init_1581_){
_start:
{
lean_object* v_root_1583_; lean_object* v_tail_1584_; lean_object* v___x_1585_; 
v_root_1583_ = lean_ctor_get(v_t_1580_, 0);
v_tail_1584_ = lean_ctor_get(v_t_1580_, 1);
lean_inc_ref(v___x_1578_);
lean_inc_ref(v___x_1576_);
lean_inc_ref(v_init_1581_);
v___x_1585_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__4(v_init_1581_, v___x_1576_, v___x_1577_, v___x_1578_, v_val_1579_, v_root_1583_, v_init_1581_);
lean_dec_ref(v_init_1581_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; 
lean_dec_ref(v___x_1578_);
lean_dec_ref(v___x_1576_);
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
return v_a_1586_;
}
else
{
lean_object* v_a_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; size_t v_sz_1590_; size_t v___x_1591_; lean_object* v___x_1592_; lean_object* v_fst_1593_; 
v_a_1587_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1588_ = lean_box(0);
v___x_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
lean_ctor_set(v___x_1589_, 1, v_a_1587_);
v_sz_1590_ = lean_array_size(v_tail_1584_);
v___x_1591_ = ((size_t)0ULL);
v___x_1592_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4_spec__5(v___x_1576_, v___x_1577_, v___x_1578_, v_val_1579_, v_tail_1584_, v_sz_1590_, v___x_1591_, v___x_1589_);
v_fst_1593_ = lean_ctor_get(v___x_1592_, 0);
if (lean_obj_tag(v_fst_1593_) == 0)
{
lean_object* v_snd_1594_; 
v_snd_1594_ = lean_ctor_get(v___x_1592_, 1);
lean_inc(v_snd_1594_);
lean_dec_ref(v___x_1592_);
return v_snd_1594_;
}
else
{
lean_object* v_val_1595_; 
lean_inc_ref(v_fst_1593_);
lean_dec_ref(v___x_1592_);
v_val_1595_ = lean_ctor_get(v_fst_1593_, 0);
lean_inc(v_val_1595_);
lean_dec_ref_known(v_fst_1593_, 1);
return v_val_1595_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4___boxed(lean_object* v___x_1596_, lean_object* v___x_1597_, lean_object* v___x_1598_, lean_object* v_val_1599_, lean_object* v_t_1600_, lean_object* v_init_1601_, lean_object* v___y_1602_){
_start:
{
uint8_t v_val_24723__boxed_1603_; lean_object* v_res_1604_; 
v_val_24723__boxed_1603_ = lean_unbox(v_val_1599_);
v_res_1604_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v___x_1596_, v___x_1597_, v___x_1598_, v_val_24723__boxed_1603_, v_t_1600_, v_init_1601_);
lean_dec_ref(v_t_1600_);
lean_dec(v___x_1597_);
return v_res_1604_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = lean_unsigned_to_nat(1u);
v___x_1606_ = l_Lean_firstFrontendMacroScope;
v___x_1607_ = lean_nat_add(v___x_1606_, v___x_1605_);
return v___x_1607_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
return v___x_1615_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(lean_object* v_a_1618_, lean_object* v_opts_1619_, lean_object* v___x_1620_, lean_object* v___x_1621_, lean_object* v___x_1622_, size_t v___x_1623_, uint8_t v___x_1624_, lean_object* v_env_1625_, lean_object* v___x_1626_, lean_object* v___x_1627_, lean_object* v_pos_1628_, uint8_t v_val_1629_, lean_object* v___x_1630_, lean_object* v___x_1631_, lean_object* v___x_1632_, lean_object* v___x_1633_, lean_object* v___x_1634_, uint8_t v___x_1635_, lean_object* v_x_1636_){
_start:
{
lean_object* v_toProcessingContext_1638_; lean_object* v_fileName_1639_; lean_object* v_fileMap_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; uint16_t v___x_1645_; uint8_t v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v_fileName_1665_; lean_object* v_fileMap_1666_; lean_object* v_currNamespace_1667_; lean_object* v_openDecls_1668_; lean_object* v_initHeartbeats_1669_; lean_object* v_maxHeartbeats_1670_; lean_object* v_quotContext_1671_; lean_object* v_currMacroScope_1672_; lean_object* v_cancelTk_x3f_1673_; lean_object* v_inheritedTraceOptions_1674_; lean_object* v_currRecDepth_1675_; lean_object* v_ref_1676_; uint8_t v_suppressElabErrors_1677_; uint8_t v_checkDeprecated_1678_; uint8_t v_isRecordingDeps_1679_; lean_object* v___x_1696_; lean_object* v_nextMacroScope_1698_; lean_object* v_ngen_1699_; lean_object* v_auxDeclNGen_1700_; lean_object* v_traceState_1701_; lean_object* v_recordedDeps_1702_; lean_object* v_messages_1703_; lean_object* v_infoState_1704_; lean_object* v_snapshotTasks_1705_; lean_object* v___y_1706_; lean_object* v___x_1709_; uint8_t v___y_1711_; lean_object* v_env_1728_; uint8_t v___x_1729_; uint16_t v___x_1730_; uint16_t v___x_1731_; uint16_t v___x_1732_; uint8_t v___x_1733_; 
v_toProcessingContext_1638_ = lean_ctor_get(v_a_1618_, 0);
v_fileName_1639_ = lean_ctor_get(v_toProcessingContext_1638_, 1);
v_fileMap_1640_ = lean_ctor_get(v_toProcessingContext_1638_, 2);
v___x_1641_ = lean_box(0);
v___x_1642_ = l_Lean_Core_getMaxHeartbeats(v_opts_1619_);
v___x_1643_ = l_Lean_firstFrontendMacroScope;
v___x_1644_ = lean_box(0);
v___x_1645_ = l_Lean_OptionFlags_ofOptions(v_opts_1619_);
v___x_1646_ = 0;
v___x_1647_ = lean_unsigned_to_nat(1u);
v___x_1648_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_1649_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
lean_inc(v___x_1620_);
v___x_1650_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1620_);
lean_ctor_set(v___x_1650_, 1, v___x_1647_);
lean_ctor_set(v___x_1650_, 2, v___x_1641_);
v___x_1651_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__4);
v___x_1652_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__5);
v___x_1653_ = lean_mk_empty_array_with_capacity(v___x_1621_);
v___x_1654_ = l_Lean_Options_empty;
lean_inc_n(v___x_1621_, 5);
lean_inc_ref_n(v___x_1653_, 5);
v___x_1655_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
lean_ctor_set(v___x_1655_, 2, v___x_1653_);
lean_ctor_set(v___x_1655_, 3, v___x_1621_);
lean_ctor_set(v___x_1655_, 4, v___x_1621_);
lean_ctor_set(v___x_1655_, 5, v___x_1621_);
lean_ctor_set(v___x_1655_, 6, v___x_1653_);
lean_ctor_set(v___x_1655_, 7, v___x_1653_);
v___x_1656_ = lean_mk_empty_array_with_capacity(v___x_1622_);
lean_inc_ref(v___x_1656_);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
v___x_1658_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
lean_ctor_set(v___x_1658_, 1, v___x_1656_);
lean_ctor_set(v___x_1658_, 2, v___x_1621_);
lean_ctor_set(v___x_1658_, 3, v___x_1621_);
lean_ctor_set_usize(v___x_1658_, 4, v___x_1623_);
v___x_1659_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_1658_, 2);
v___x_1660_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1658_);
lean_ctor_set(v___x_1660_, 2, v___x_1659_);
v___x_1661_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1661_, 0, v___x_1651_);
lean_ctor_set(v___x_1661_, 1, v___x_1651_);
lean_ctor_set(v___x_1661_, 2, v___x_1658_);
lean_ctor_set_uint8(v___x_1661_, sizeof(void*)*3, v___x_1624_);
lean_inc_ref(v___x_1626_);
v___x_1662_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1662_, 0, v_env_1625_);
lean_ctor_set(v___x_1662_, 1, v___x_1648_);
lean_ctor_set(v___x_1662_, 2, v___x_1649_);
lean_ctor_set(v___x_1662_, 3, v___x_1650_);
lean_ctor_set(v___x_1662_, 4, v___x_1626_);
lean_ctor_set(v___x_1662_, 5, v___x_1652_);
lean_ctor_set(v___x_1662_, 6, v___x_1655_);
lean_ctor_set(v___x_1662_, 7, v___x_1660_);
lean_ctor_set(v___x_1662_, 8, v___x_1661_);
lean_ctor_set(v___x_1662_, 9, v___x_1653_);
v___x_1663_ = lean_st_mk_ref(v___x_1662_);
v___x_1696_ = lean_st_ref_get(v___x_1633_);
v___x_1709_ = lean_st_ref_get(v___x_1663_);
v_env_1728_ = lean_ctor_get(v___x_1709_, 0);
lean_inc_ref(v_env_1728_);
lean_dec(v___x_1709_);
v___x_1729_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1728_);
lean_dec_ref(v_env_1728_);
v___x_1730_ = 512;
v___x_1731_ = lean_uint16_land(v___x_1645_, v___x_1730_);
v___x_1732_ = 0;
v___x_1733_ = lean_uint16_dec_eq(v___x_1731_, v___x_1732_);
if (v___x_1733_ == 0)
{
if (v___x_1729_ == 0)
{
v___y_1711_ = v___x_1729_;
goto v___jp_1710_;
}
else
{
lean_inc(v___x_1621_);
lean_inc(v___x_1620_);
lean_inc_ref(v_fileMap_1640_);
lean_inc_ref(v_fileName_1639_);
v_fileName_1665_ = v_fileName_1639_;
v_fileMap_1666_ = v_fileMap_1640_;
v_currNamespace_1667_ = v___x_1620_;
v_openDecls_1668_ = v___x_1641_;
v_initHeartbeats_1669_ = v___x_1621_;
v_maxHeartbeats_1670_ = v___x_1642_;
v_quotContext_1671_ = v___x_1620_;
v_currMacroScope_1672_ = v___x_1643_;
v_cancelTk_x3f_1673_ = v___x_1634_;
v_inheritedTraceOptions_1674_ = v___x_1696_;
v_currRecDepth_1675_ = v___x_1621_;
v_ref_1676_ = v___x_1644_;
v_suppressElabErrors_1677_ = v_val_1629_;
v_checkDeprecated_1678_ = v___x_1646_;
v_isRecordingDeps_1679_ = v_val_1629_;
goto v___jp_1664_;
}
}
else
{
if (v___x_1729_ == 0)
{
lean_inc(v___x_1621_);
lean_inc(v___x_1620_);
lean_inc_ref(v_fileMap_1640_);
lean_inc_ref(v_fileName_1639_);
v_fileName_1665_ = v_fileName_1639_;
v_fileMap_1666_ = v_fileMap_1640_;
v_currNamespace_1667_ = v___x_1620_;
v_openDecls_1668_ = v___x_1641_;
v_initHeartbeats_1669_ = v___x_1621_;
v_maxHeartbeats_1670_ = v___x_1642_;
v_quotContext_1671_ = v___x_1620_;
v_currMacroScope_1672_ = v___x_1643_;
v_cancelTk_x3f_1673_ = v___x_1634_;
v_inheritedTraceOptions_1674_ = v___x_1696_;
v_currRecDepth_1675_ = v___x_1621_;
v_ref_1676_ = v___x_1644_;
v_suppressElabErrors_1677_ = v_val_1629_;
v_checkDeprecated_1678_ = v___x_1646_;
v_isRecordingDeps_1679_ = v_val_1629_;
goto v___jp_1664_;
}
else
{
v___y_1711_ = v_val_1629_;
goto v___jp_1710_;
}
}
v___jp_1664_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1680_ = l_Lean_maxRecDepth;
v___x_1681_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__3(v_opts_1619_, v___x_1680_);
lean_inc(v_currMacroScope_1672_);
lean_inc(v_openDecls_1668_);
v___x_1682_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1682_, 0, v_fileName_1665_);
lean_ctor_set(v___x_1682_, 1, v_fileMap_1666_);
lean_ctor_set(v___x_1682_, 2, v_opts_1619_);
lean_ctor_set(v___x_1682_, 3, v___x_1681_);
lean_ctor_set(v___x_1682_, 4, v_currNamespace_1667_);
lean_ctor_set(v___x_1682_, 5, v_openDecls_1668_);
lean_ctor_set(v___x_1682_, 6, v_initHeartbeats_1669_);
lean_ctor_set(v___x_1682_, 7, v_maxHeartbeats_1670_);
lean_ctor_set(v___x_1682_, 8, v_quotContext_1671_);
lean_ctor_set(v___x_1682_, 9, v_currMacroScope_1672_);
lean_ctor_set(v___x_1682_, 10, v_cancelTk_x3f_1673_);
lean_ctor_set(v___x_1682_, 11, v_inheritedTraceOptions_1674_);
lean_inc(v_ref_1676_);
v___x_1683_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
lean_ctor_set(v___x_1683_, 1, v_currRecDepth_1675_);
lean_ctor_set(v___x_1683_, 2, v_ref_1676_);
lean_ctor_set_uint16(v___x_1683_, sizeof(void*)*3, v___x_1645_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 2, v_suppressElabErrors_1677_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 3, v_checkDeprecated_1678_);
lean_ctor_set_uint8(v___x_1683_, sizeof(void*)*3 + 4, v_isRecordingDeps_1679_);
v___x_1684_ = l_Lean_Language_SnapshotTree_trace(v___x_1627_, v___x_1683_, v___x_1663_);
lean_dec_ref_known(v___x_1683_, 3);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v___x_1685_; lean_object* v_traceState_1686_; lean_object* v_traces_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
lean_dec_ref_known(v___x_1684_, 1);
lean_dec_ref(v___x_1632_);
v___x_1685_ = lean_st_ref_get(v___x_1663_);
lean_dec(v___x_1663_);
v_traceState_1686_ = lean_ctor_get(v___x_1685_, 4);
lean_inc_ref(v_traceState_1686_);
lean_dec(v___x_1685_);
v_traces_1687_ = lean_ctor_get(v_traceState_1686_, 0);
lean_inc_ref(v_traces_1687_);
lean_dec_ref(v_traceState_1686_);
v___x_1688_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_fileName_1639_);
lean_inc_ref(v_fileMap_1640_);
v___x_1689_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__4(v_fileMap_1640_, v_pos_1628_, v_fileName_1639_, v_val_1629_, v_traces_1687_, v___x_1688_);
lean_dec_ref(v_traces_1687_);
v___x_1690_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v___x_1689_);
v___x_1691_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1691_, 0, v___x_1630_);
lean_ctor_set(v___x_1691_, 1, v___x_1690_);
lean_ctor_set(v___x_1691_, 2, v___x_1631_);
lean_ctor_set(v___x_1691_, 3, v___x_1626_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*4, v_val_1629_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
lean_ctor_set(v___x_1692_, 1, v___x_1653_);
v___x_1693_ = lean_task_pure(v___x_1692_);
return v___x_1693_;
}
else
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
lean_dec_ref_known(v___x_1684_, 1);
lean_dec(v___x_1663_);
lean_dec(v___x_1631_);
lean_dec_ref(v___x_1630_);
lean_dec_ref(v___x_1626_);
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1632_);
lean_ctor_set(v___x_1694_, 1, v___x_1653_);
v___x_1695_ = lean_task_pure(v___x_1694_);
return v___x_1695_;
}
}
v___jp_1697_:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1707_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1707_, 0, v___y_1706_);
lean_ctor_set(v___x_1707_, 1, v_nextMacroScope_1698_);
lean_ctor_set(v___x_1707_, 2, v_ngen_1699_);
lean_ctor_set(v___x_1707_, 3, v_auxDeclNGen_1700_);
lean_ctor_set(v___x_1707_, 4, v_traceState_1701_);
lean_ctor_set(v___x_1707_, 5, v___x_1652_);
lean_ctor_set(v___x_1707_, 6, v_recordedDeps_1702_);
lean_ctor_set(v___x_1707_, 7, v_messages_1703_);
lean_ctor_set(v___x_1707_, 8, v_infoState_1704_);
lean_ctor_set(v___x_1707_, 9, v_snapshotTasks_1705_);
v___x_1708_ = lean_st_ref_put(v___x_1663_, v___x_1707_);
lean_inc(v___x_1621_);
lean_inc(v___x_1620_);
lean_inc_ref(v_fileMap_1640_);
lean_inc_ref(v_fileName_1639_);
v_fileName_1665_ = v_fileName_1639_;
v_fileMap_1666_ = v_fileMap_1640_;
v_currNamespace_1667_ = v___x_1620_;
v_openDecls_1668_ = v___x_1641_;
v_initHeartbeats_1669_ = v___x_1621_;
v_maxHeartbeats_1670_ = v___x_1642_;
v_quotContext_1671_ = v___x_1620_;
v_currMacroScope_1672_ = v___x_1643_;
v_cancelTk_x3f_1673_ = v___x_1634_;
v_inheritedTraceOptions_1674_ = v___x_1696_;
v_currRecDepth_1675_ = v___x_1621_;
v_ref_1676_ = v___x_1644_;
v_suppressElabErrors_1677_ = v_val_1629_;
v_checkDeprecated_1678_ = v___x_1646_;
v_isRecordingDeps_1679_ = v_val_1629_;
goto v___jp_1664_;
}
v___jp_1710_:
{
lean_object* v___x_1712_; lean_object* v_env_1713_; lean_object* v_nextMacroScope_1714_; lean_object* v_ngen_1715_; lean_object* v_auxDeclNGen_1716_; lean_object* v_traceState_1717_; lean_object* v_recordedDeps_1718_; lean_object* v_messages_1719_; lean_object* v_infoState_1720_; lean_object* v_snapshotTasks_1721_; uint16_t v___x_1722_; uint16_t v___x_1723_; uint16_t v___x_1724_; uint8_t v___x_1725_; 
v___x_1712_ = lean_st_ref_take(v___x_1663_);
v_env_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc_ref(v_env_1713_);
v_nextMacroScope_1714_ = lean_ctor_get(v___x_1712_, 1);
lean_inc(v_nextMacroScope_1714_);
v_ngen_1715_ = lean_ctor_get(v___x_1712_, 2);
lean_inc_ref(v_ngen_1715_);
v_auxDeclNGen_1716_ = lean_ctor_get(v___x_1712_, 3);
lean_inc_ref(v_auxDeclNGen_1716_);
v_traceState_1717_ = lean_ctor_get(v___x_1712_, 4);
lean_inc_ref(v_traceState_1717_);
v_recordedDeps_1718_ = lean_ctor_get(v___x_1712_, 6);
lean_inc_ref(v_recordedDeps_1718_);
v_messages_1719_ = lean_ctor_get(v___x_1712_, 7);
lean_inc_ref(v_messages_1719_);
v_infoState_1720_ = lean_ctor_get(v___x_1712_, 8);
lean_inc_ref(v_infoState_1720_);
v_snapshotTasks_1721_ = lean_ctor_get(v___x_1712_, 9);
lean_inc_ref(v_snapshotTasks_1721_);
lean_dec(v___x_1712_);
v___x_1722_ = 512;
v___x_1723_ = lean_uint16_land(v___x_1645_, v___x_1722_);
v___x_1724_ = 0;
v___x_1725_ = lean_uint16_dec_eq(v___x_1723_, v___x_1724_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lean_Kernel_enableDiag(v_env_1713_, v___x_1635_);
v_nextMacroScope_1698_ = v_nextMacroScope_1714_;
v_ngen_1699_ = v_ngen_1715_;
v_auxDeclNGen_1700_ = v_auxDeclNGen_1716_;
v_traceState_1701_ = v_traceState_1717_;
v_recordedDeps_1702_ = v_recordedDeps_1718_;
v_messages_1703_ = v_messages_1719_;
v_infoState_1704_ = v_infoState_1720_;
v_snapshotTasks_1705_ = v_snapshotTasks_1721_;
v___y_1706_ = v___x_1726_;
goto v___jp_1697_;
}
else
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lean_Kernel_enableDiag(v_env_1713_, v___y_1711_);
v_nextMacroScope_1698_ = v_nextMacroScope_1714_;
v_ngen_1699_ = v_ngen_1715_;
v_auxDeclNGen_1700_ = v_auxDeclNGen_1716_;
v_traceState_1701_ = v_traceState_1717_;
v_recordedDeps_1702_ = v_recordedDeps_1718_;
v_messages_1703_ = v_messages_1719_;
v_infoState_1704_ = v_infoState_1720_;
v_snapshotTasks_1705_ = v_snapshotTasks_1721_;
v___y_1706_ = v___x_1727_;
goto v___jp_1697_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed(lean_object** _args){
lean_object* v_a_1734_ = _args[0];
lean_object* v_opts_1735_ = _args[1];
lean_object* v___x_1736_ = _args[2];
lean_object* v___x_1737_ = _args[3];
lean_object* v___x_1738_ = _args[4];
lean_object* v___x_1739_ = _args[5];
lean_object* v___x_1740_ = _args[6];
lean_object* v_env_1741_ = _args[7];
lean_object* v___x_1742_ = _args[8];
lean_object* v___x_1743_ = _args[9];
lean_object* v_pos_1744_ = _args[10];
lean_object* v_val_1745_ = _args[11];
lean_object* v___x_1746_ = _args[12];
lean_object* v___x_1747_ = _args[13];
lean_object* v___x_1748_ = _args[14];
lean_object* v___x_1749_ = _args[15];
lean_object* v___x_1750_ = _args[16];
lean_object* v___x_1751_ = _args[17];
lean_object* v_x_1752_ = _args[18];
lean_object* v___y_1753_ = _args[19];
_start:
{
size_t v___x_24783__boxed_1754_; uint8_t v___x_24784__boxed_1755_; uint8_t v_val_24787__boxed_1756_; uint8_t v___x_24793__boxed_1757_; lean_object* v_res_1758_; 
v___x_24783__boxed_1754_ = lean_unbox_usize(v___x_1739_);
lean_dec(v___x_1739_);
v___x_24784__boxed_1755_ = lean_unbox(v___x_1740_);
v_val_24787__boxed_1756_ = lean_unbox(v_val_1745_);
v___x_24793__boxed_1757_ = lean_unbox(v___x_1751_);
v_res_1758_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3(v_a_1734_, v_opts_1735_, v___x_1736_, v___x_1737_, v___x_1738_, v___x_24783__boxed_1754_, v___x_24784__boxed_1755_, v_env_1741_, v___x_1742_, v___x_1743_, v_pos_1744_, v_val_24787__boxed_1756_, v___x_1746_, v___x_1747_, v___x_1748_, v___x_1749_, v___x_1750_, v___x_24793__boxed_1757_, v_x_1752_);
lean_dec(v___x_1749_);
lean_dec(v_pos_1744_);
lean_dec(v___x_1738_);
lean_dec_ref(v_a_1734_);
return v_res_1758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(lean_object* v_a_1759_, lean_object* v___x_1760_, lean_object* v_parserState_1761_, lean_object* v_x_1762_){
_start:
{
lean_object* v_toProcessingContext_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v_toProcessingContext_1763_ = lean_ctor_get(v_a_1759_, 0);
v___x_1764_ = l_Lean_MessageLog_empty;
lean_inc_ref(v_toProcessingContext_1763_);
v___x_1765_ = l_Lean_Parser_parseCommand(v_toProcessingContext_1763_, v___x_1760_, v_parserState_1761_, v___x_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed(lean_object* v_a_1766_, lean_object* v___x_1767_, lean_object* v_parserState_1768_, lean_object* v_x_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2(v_a_1766_, v___x_1767_, v_parserState_1768_, v_x_1769_);
lean_dec_ref(v_a_1766_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6(lean_object* v___f_1771_){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = lean_io_promise_new();
v___x_1774_ = lean_apply_2(v___f_1771_, v___x_1773_, lean_box(0));
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6___boxed(lean_object* v___f_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6(v___f_1775_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(lean_object* v_as_1779_, size_t v_i_1780_, size_t v_stop_1781_, lean_object* v_b_1782_){
_start:
{
uint8_t v___x_1784_; 
v___x_1784_ = lean_usize_dec_eq(v_i_1780_, v_stop_1781_);
if (v___x_1784_ == 0)
{
lean_object* v___f_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; size_t v___x_1788_; size_t v___x_1789_; 
v___f_1785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___closed__0));
v___x_1786_ = lean_array_uget_borrowed(v_as_1779_, v_i_1780_);
lean_inc(v___x_1786_);
v___x_1787_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___f_1785_, v___x_1786_);
v___x_1788_ = ((size_t)1ULL);
v___x_1789_ = lean_usize_add(v_i_1780_, v___x_1788_);
v_i_1780_ = v___x_1789_;
v_b_1782_ = v___x_1787_;
goto _start;
}
else
{
return v_b_1782_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg___boxed(lean_object* v_as_1791_, lean_object* v_i_1792_, lean_object* v_stop_1793_, lean_object* v_b_1794_, lean_object* v___y_1795_){
_start:
{
size_t v_i_boxed_1796_; size_t v_stop_boxed_1797_; lean_object* v_res_1798_; 
v_i_boxed_1796_ = lean_unbox_usize(v_i_1792_);
lean_dec(v_i_1792_);
v_stop_boxed_1797_ = lean_unbox_usize(v_stop_1793_);
lean_dec(v_stop_1793_);
v_res_1798_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_1791_, v_i_boxed_1796_, v_stop_boxed_1797_, v_b_1794_);
lean_dec_ref(v_as_1791_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed(lean_object* v_oldResult_1799_, lean_object* v_stx_1800_, lean_object* v_revCmds_1801_, lean_object* v_newParserState_1802_, lean_object* v_val_1803_, lean_object* v_sync_1804_, lean_object* v_val_1805_, lean_object* v_a_1806_, lean_object* v_oldNext_1807_, lean_object* v___y_1808_){
_start:
{
uint8_t v_sync_boxed_1809_; lean_object* v_res_1810_; 
v_sync_boxed_1809_ = lean_unbox(v_sync_1804_);
v_res_1810_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(v_oldResult_1799_, v_stx_1800_, v_revCmds_1801_, v_newParserState_1802_, v_val_1803_, v_sync_boxed_1809_, v_val_1805_, v_a_1806_, v_oldNext_1807_);
lean_dec_ref(v_a_1806_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(lean_object* v_val_1811_, lean_object* v_stx_1812_, lean_object* v_revCmds_1813_, lean_object* v_newParserState_1814_, lean_object* v_val_1815_, uint8_t v_sync_1816_, lean_object* v_val_1817_, lean_object* v_a_1818_, lean_object* v_oldResult_1819_){
_start:
{
lean_object* v_task_1821_; lean_object* v___x_1822_; lean_object* v___f_1823_; lean_object* v___x_1824_; uint8_t v___x_1825_; lean_object* v___x_1826_; 
v_task_1821_ = lean_ctor_get(v_val_1811_, 3);
lean_inc_ref(v_task_1821_);
lean_dec_ref(v_val_1811_);
v___x_1822_ = lean_box(v_sync_1816_);
lean_inc_ref(v_a_1818_);
v___f_1823_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0___boxed), 10, 8);
lean_closure_set(v___f_1823_, 0, v_oldResult_1819_);
lean_closure_set(v___f_1823_, 1, v_stx_1812_);
lean_closure_set(v___f_1823_, 2, v_revCmds_1813_);
lean_closure_set(v___f_1823_, 3, v_newParserState_1814_);
lean_closure_set(v___f_1823_, 4, v_val_1815_);
lean_closure_set(v___f_1823_, 5, v___x_1822_);
lean_closure_set(v___f_1823_, 6, v_val_1817_);
lean_closure_set(v___f_1823_, 7, v_a_1818_);
v___x_1824_ = lean_unsigned_to_nat(0u);
v___x_1825_ = 1;
v___x_1826_ = l_BaseIO_chainTask___redArg(v_task_1821_, v___f_1823_, v___x_1824_, v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed(lean_object* v_val_1827_, lean_object* v_stx_1828_, lean_object* v_revCmds_1829_, lean_object* v_newParserState_1830_, lean_object* v_val_1831_, lean_object* v_sync_1832_, lean_object* v_val_1833_, lean_object* v_a_1834_, lean_object* v_oldResult_1835_, lean_object* v___y_1836_){
_start:
{
uint8_t v_sync_boxed_1837_; lean_object* v_res_1838_; 
v_sync_boxed_1837_ = lean_unbox(v_sync_1832_);
v_res_1838_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1(v_val_1827_, v_stx_1828_, v_revCmds_1829_, v_newParserState_1830_, v_val_1831_, v_sync_boxed_1837_, v_val_1833_, v_a_1834_, v_oldResult_1835_);
lean_dec_ref(v_a_1834_);
return v_res_1838_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4(void){
_start:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1843_ = l_Lean_Language_instInhabitedDynamicSnapshot;
v___x_1844_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_1843_);
return v___x_1844_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6(void){
_start:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1847_ = l_Lean_Language_instInhabitedSnapshotTree_default;
v___x_1848_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_1847_);
return v___x_1848_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2(void){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1854_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__1));
v___x_1855_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Language_Lean_setOption_spec__0___closed__1));
v___x_1856_ = l_Lean_Name_append(v___x_1855_, v___x_1854_);
return v___x_1856_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10_spec__11___redArg___closed__0);
v___x_1858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(lean_object* v_fst_1859_, lean_object* v_revCmds_1860_, lean_object* v_fst_1861_, uint8_t v_val_1862_, lean_object* v_a_1863_, lean_object* v_snd_1864_, lean_object* v___x_1865_, lean_object* v___x_1866_, lean_object* v___f_1867_, lean_object* v___f_1868_, lean_object* v___f_1869_, lean_object* v_pos_1870_, lean_object* v_cmdState_1871_, lean_object* v___x_1872_, lean_object* v_opts_1873_, lean_object* v_prom_1874_, lean_object* v_old_x3f_1875_, lean_object* v_parseCancelTk_1876_, lean_object* v_elabPromise_1877_){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v_snapshotTasks_1890_; lean_object* v_traceTask_1891_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1915_; lean_object* v___y_1916_; lean_object* v___y_1917_; uint8_t v___y_1918_; size_t v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1937_; lean_object* v___y_1938_; uint8_t v___y_1939_; lean_object* v___y_1940_; lean_object* v_env_1941_; lean_object* v_messages_1942_; lean_object* v_scopes_1943_; lean_object* v_infoState_1944_; lean_object* v_traceState_1945_; lean_object* v_snapshotTasks_1946_; lean_object* v_codeQualityEntryTasks_1947_; lean_object* v_reportedCmdState_1948_; lean_object* v___y_1983_; lean_object* v___y_1984_; size_t v___y_1985_; uint8_t v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_1997_; lean_object* v___y_1998_; lean_object* v___y_1999_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; uint8_t v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___x_2016_; lean_object* v___y_2018_; lean_object* v___y_2019_; uint8_t v___y_2020_; lean_object* v___y_2021_; size_t v___y_2022_; lean_object* v___y_2023_; lean_object* v___y_2024_; lean_object* v___y_2025_; lean_object* v___y_2026_; lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; lean_object* v___y_2073_; lean_object* v___y_2074_; lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v_fst_2148_; lean_object* v_snd_2149_; uint8_t v___x_2161_; 
v___x_1879_ = lean_io_promise_new();
v___x_1880_ = lean_io_promise_new();
v___x_1881_ = lean_io_promise_new();
v___x_2016_ = l_Lean_internal_cmdlineSnapshots;
v___x_2161_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_opts_1873_, v___x_2016_);
if (v___x_2161_ == 0)
{
lean_inc_ref(v_fst_1861_);
lean_inc(v_fst_1859_);
v_fst_2148_ = v_fst_1859_;
v_snd_2149_ = v_fst_1861_;
goto v___jp_2147_;
}
else
{
uint8_t v___x_2162_; 
lean_inc(v_fst_1859_);
v___x_2162_ = l_Lean_Parser_isTerminalCommand(v_fst_1859_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2163_ = lean_box(0);
v___x_2164_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_fst_2148_ = v___x_2163_;
v_snd_2149_ = v___x_2164_;
goto v___jp_2147_;
}
else
{
lean_inc_ref(v_fst_1861_);
lean_inc(v_fst_1859_);
v_fst_2148_ = v_fst_1859_;
v_snd_2149_ = v_fst_1861_;
goto v___jp_2147_;
}
}
v___jp_1882_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1892_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1892_, 0, v___y_1885_);
lean_ctor_set(v___x_1892_, 1, v___y_1883_);
lean_ctor_set(v___x_1892_, 2, v___y_1884_);
lean_ctor_set(v___x_1892_, 3, v_traceTask_1891_);
v___x_1893_ = lean_array_push(v_snapshotTasks_1890_, v___x_1892_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___y_1887_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = lean_io_promise_resolve(v___x_1894_, v___x_1881_);
lean_dec(v___x_1881_);
if (lean_obj_tag(v___y_1888_) == 1)
{
lean_object* v_val_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v_val_1896_ = lean_ctor_get(v___y_1888_, 0);
lean_inc(v_val_1896_);
lean_dec_ref_known(v___y_1888_, 1);
v___x_1897_ = lean_box(0);
v___x_1898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1898_, 0, v_fst_1859_);
lean_ctor_set(v___x_1898_, 1, v_revCmds_1860_);
v___x_1899_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_1897_, v_fst_1861_, v___y_1889_, v_val_1896_, v_val_1862_, v___y_1886_, v___x_1898_, v_a_1863_);
return v___x_1899_;
}
else
{
lean_object* v___x_1900_; 
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1886_);
lean_dec_ref(v_fst_1861_);
lean_dec(v_revCmds_1860_);
lean_dec(v_fst_1859_);
v___x_1900_ = lean_box(0);
return v___x_1900_;
}
}
v___jp_1901_:
{
lean_object* v_snapshotTasks_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v_snapshotTasks_1910_ = lean_ctor_get(v___y_1909_, 10);
lean_inc_ref(v_snapshotTasks_1910_);
v___x_1911_ = lean_mk_empty_array_with_capacity(v___y_1908_);
lean_dec(v___y_1908_);
lean_inc_ref(v___y_1906_);
v___x_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___y_1906_);
lean_ctor_set(v___x_1912_, 1, v___x_1911_);
v___x_1913_ = lean_task_pure(v___x_1912_);
v___y_1883_ = v___y_1902_;
v___y_1884_ = v___y_1903_;
v___y_1885_ = v___y_1904_;
v___y_1886_ = v___y_1905_;
v___y_1887_ = v___y_1906_;
v___y_1888_ = v___y_1907_;
v___y_1889_ = v___y_1909_;
v_snapshotTasks_1890_ = v_snapshotTasks_1910_;
v_traceTask_1891_ = v___x_1913_;
goto v___jp_1882_;
}
v___jp_1914_:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v_opts_1958_; uint8_t v_hasTrace_1959_; 
v___x_1949_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_messages_1942_);
v___x_1950_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1950_, 0, v___y_1928_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
lean_ctor_set(v___x_1950_, 2, v___y_1934_);
lean_ctor_set(v___x_1950_, 3, v_traceState_1945_);
lean_ctor_set_uint8(v___x_1950_, sizeof(void*)*4, v_val_1862_);
v___x_1951_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
lean_ctor_set(v___x_1951_, 1, v_reportedCmdState_1948_);
lean_ctor_set(v___x_1951_, 2, v_codeQualityEntryTasks_1947_);
v___x_1952_ = lean_io_promise_resolve(v___x_1951_, v___x_1879_);
lean_dec(v___x_1879_);
v___x_1953_ = l_Lean_Elab_InfoState_substituteLazy(v_infoState_1944_);
lean_inc(v___y_1938_);
v___x_1954_ = l_BaseIO_chainTask___redArg(v___x_1953_, v___y_1925_, v___y_1938_, v___y_1939_);
v___x_1955_ = l_Lean_inheritedTraceOptions;
v___x_1956_ = lean_st_ref_get(v___x_1955_);
v___x_1957_ = l_List_head_x21___redArg(v___x_1866_, v_scopes_1943_);
lean_dec(v_scopes_1943_);
lean_dec_ref(v___x_1866_);
v_opts_1958_ = lean_ctor_get(v___x_1957_, 1);
lean_inc_ref(v_opts_1958_);
lean_dec(v___x_1957_);
v_hasTrace_1959_ = lean_ctor_get_uint8(v_opts_1958_, sizeof(void*)*1);
if (v_hasTrace_1959_ == 0)
{
lean_dec_ref(v_opts_1958_);
lean_dec(v___x_1956_);
lean_dec_ref(v_snapshotTasks_1946_);
lean_dec_ref(v_env_1941_);
lean_dec_ref(v___y_1937_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1931_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v_pos_1870_);
lean_dec_ref(v___f_1869_);
lean_dec_ref(v___f_1868_);
lean_dec_ref(v___f_1867_);
lean_dec(v___x_1865_);
v___y_1902_ = v___y_1932_;
v___y_1903_ = v___y_1933_;
v___y_1904_ = v___y_1926_;
v___y_1905_ = v___y_1936_;
v___y_1906_ = v___y_1929_;
v___y_1907_ = v___y_1930_;
v___y_1908_ = v___y_1938_;
v___y_1909_ = v___y_1940_;
goto v___jp_1901_;
}
else
{
lean_object* v___x_1960_; uint8_t v___x_1961_; 
v___x_1960_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__2);
v___x_1961_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_1956_, v_opts_1958_, v___x_1960_);
lean_dec(v___x_1956_);
if (v___x_1961_ == 0)
{
lean_dec_ref(v_opts_1958_);
lean_dec_ref(v_snapshotTasks_1946_);
lean_dec_ref(v_env_1941_);
lean_dec_ref(v___y_1937_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1931_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec(v___y_1916_);
lean_dec_ref(v___y_1915_);
lean_dec(v_pos_1870_);
lean_dec_ref(v___f_1869_);
lean_dec_ref(v___f_1868_);
lean_dec_ref(v___f_1867_);
lean_dec(v___x_1865_);
v___y_1902_ = v___y_1932_;
v___y_1903_ = v___y_1933_;
v___y_1904_ = v___y_1926_;
v___y_1905_ = v___y_1936_;
v___y_1906_ = v___y_1929_;
v___y_1907_ = v___y_1930_;
v___y_1908_ = v___y_1938_;
v___y_1909_ = v___y_1940_;
goto v___jp_1901_;
}
else
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___f_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
lean_inc_n(v___y_1938_, 3);
v___x_1962_ = lean_task_map(v___f_1867_, v___y_1937_, v___y_1938_, v___y_1939_);
lean_inc_n(v___y_1933_, 3);
lean_inc_n(v___y_1924_, 2);
lean_inc_n(v___y_1935_, 2);
v___x_1963_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1963_, 0, v___y_1935_);
lean_ctor_set(v___x_1963_, 1, v___y_1924_);
lean_ctor_set(v___x_1963_, 2, v___y_1933_);
lean_ctor_set(v___x_1963_, 3, v___x_1962_);
v___x_1964_ = lean_task_map(v___f_1868_, v___y_1931_, v___y_1938_, v___y_1939_);
v___x_1965_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1965_, 0, v___y_1935_);
lean_ctor_set(v___x_1965_, 1, v___y_1924_);
lean_ctor_set(v___x_1965_, 2, v___y_1933_);
lean_ctor_set(v___x_1965_, 3, v___x_1964_);
v___x_1966_ = lean_task_map(v___f_1869_, v___y_1927_, v___y_1938_, v___y_1939_);
v___x_1967_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1967_, 0, v___y_1935_);
lean_ctor_set(v___x_1967_, 1, v___y_1924_);
lean_ctor_set(v___x_1967_, 2, v___y_1933_);
lean_ctor_set(v___x_1967_, 3, v___x_1966_);
v___x_1968_ = lean_unsigned_to_nat(3u);
v___x_1969_ = lean_mk_empty_array_with_capacity(v___x_1968_);
v___x_1970_ = lean_array_push(v___x_1969_, v___x_1963_);
v___x_1971_ = lean_array_push(v___x_1970_, v___x_1965_);
v___x_1972_ = lean_array_push(v___x_1971_, v___x_1967_);
v___x_1973_ = l_Array_append___redArg(v___x_1972_, v_snapshotTasks_1946_);
lean_inc_ref(v___y_1929_);
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___y_1929_);
lean_ctor_set(v___x_1974_, 1, v___x_1973_);
v___x_1975_ = lean_box_usize(v___y_1919_);
v___x_1976_ = lean_box(v___y_1918_);
v___x_1977_ = lean_box(v_val_1862_);
v___x_1978_ = lean_box(v___x_1961_);
lean_inc_ref(v___x_1974_);
lean_inc_ref(v___y_1917_);
lean_inc_ref(v_a_1863_);
v___f_1979_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___boxed), 20, 18);
lean_closure_set(v___f_1979_, 0, v_a_1863_);
lean_closure_set(v___f_1979_, 1, v_opts_1958_);
lean_closure_set(v___f_1979_, 2, v___x_1865_);
lean_closure_set(v___f_1979_, 3, v___y_1921_);
lean_closure_set(v___f_1979_, 4, v___y_1922_);
lean_closure_set(v___f_1979_, 5, v___x_1975_);
lean_closure_set(v___f_1979_, 6, v___x_1976_);
lean_closure_set(v___f_1979_, 7, v_env_1941_);
lean_closure_set(v___f_1979_, 8, v___y_1917_);
lean_closure_set(v___f_1979_, 9, v___x_1974_);
lean_closure_set(v___f_1979_, 10, v_pos_1870_);
lean_closure_set(v___f_1979_, 11, v___x_1977_);
lean_closure_set(v___f_1979_, 12, v___y_1923_);
lean_closure_set(v___f_1979_, 13, v___y_1916_);
lean_closure_set(v___f_1979_, 14, v___y_1915_);
lean_closure_set(v___f_1979_, 15, v___x_1955_);
lean_closure_set(v___f_1979_, 16, v___y_1920_);
lean_closure_set(v___f_1979_, 17, v___x_1978_);
v___x_1980_ = l_Lean_Language_SnapshotTree_waitAll(v___x_1974_);
v___x_1981_ = lean_io_bind_task(v___x_1980_, v___f_1979_, v___y_1938_, v_val_1862_);
v___y_1883_ = v___y_1932_;
v___y_1884_ = v___y_1933_;
v___y_1885_ = v___y_1926_;
v___y_1886_ = v___y_1936_;
v___y_1887_ = v___y_1929_;
v___y_1888_ = v___y_1930_;
v___y_1889_ = v___y_1940_;
v_snapshotTasks_1890_ = v_snapshotTasks_1946_;
v_traceTask_1891_ = v___x_1981_;
goto v___jp_1882_;
}
}
}
v___jp_1982_:
{
lean_object* v_env_2009_; lean_object* v_messages_2010_; lean_object* v_scopes_2011_; lean_object* v_infoState_2012_; lean_object* v_traceState_2013_; lean_object* v_snapshotTasks_2014_; lean_object* v_codeQualityEntryTasks_2015_; 
v_env_2009_ = lean_ctor_get(v___y_2008_, 0);
lean_inc_ref(v_env_2009_);
v_messages_2010_ = lean_ctor_get(v___y_2008_, 1);
lean_inc_ref(v_messages_2010_);
v_scopes_2011_ = lean_ctor_get(v___y_2008_, 2);
lean_inc(v_scopes_2011_);
v_infoState_2012_ = lean_ctor_get(v___y_2008_, 8);
lean_inc_ref(v_infoState_2012_);
v_traceState_2013_ = lean_ctor_get(v___y_2008_, 9);
lean_inc_ref(v_traceState_2013_);
v_snapshotTasks_2014_ = lean_ctor_get(v___y_2008_, 10);
lean_inc_ref(v_snapshotTasks_2014_);
v_codeQualityEntryTasks_2015_ = lean_ctor_get(v___y_2008_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2015_);
lean_inc_ref(v___y_2008_);
v___y_1915_ = v___y_1983_;
v___y_1916_ = v___y_1984_;
v___y_1917_ = v___y_1987_;
v___y_1918_ = v___y_1986_;
v___y_1919_ = v___y_1985_;
v___y_1920_ = v___y_1989_;
v___y_1921_ = v___y_1988_;
v___y_1922_ = v___y_1990_;
v___y_1923_ = v___y_1991_;
v___y_1924_ = v___y_1992_;
v___y_1925_ = v___y_1993_;
v___y_1926_ = v___y_1994_;
v___y_1927_ = v___y_1995_;
v___y_1928_ = v___y_1996_;
v___y_1929_ = v___y_1997_;
v___y_1930_ = v___y_1998_;
v___y_1931_ = v___y_1999_;
v___y_1932_ = v___y_2000_;
v___y_1933_ = v___y_2001_;
v___y_1934_ = v___y_2002_;
v___y_1935_ = v___y_2005_;
v___y_1936_ = v___y_2004_;
v___y_1937_ = v___y_2003_;
v___y_1938_ = v___y_2007_;
v___y_1939_ = v___y_2006_;
v___y_1940_ = v___y_2008_;
v_env_1941_ = v_env_2009_;
v_messages_1942_ = v_messages_2010_;
v_scopes_1943_ = v_scopes_2011_;
v_infoState_1944_ = v_infoState_2012_;
v_traceState_1945_ = v_traceState_2013_;
v_snapshotTasks_1946_ = v_snapshotTasks_2014_;
v_codeQualityEntryTasks_1947_ = v_codeQualityEntryTasks_2015_;
v_reportedCmdState_1948_ = v___y_2008_;
goto v___jp_1914_;
}
v___jp_2017_:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___f_2041_; uint8_t v___x_2042_; 
v___x_2037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___y_2036_);
lean_ctor_set(v___x_2037_, 1, v_elabPromise_1877_);
lean_inc_ref(v___y_2030_);
lean_inc_n(v_pos_1870_, 2);
lean_inc(v_revCmds_1860_);
lean_inc(v_fst_1859_);
v___x_2038_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab(v_fst_1859_, v_revCmds_1860_, v_cmdState_1871_, v_pos_1870_, v___x_2037_, v___y_2030_, v_a_1863_);
v___x_2039_ = lean_box(v_val_1862_);
v___x_2040_ = lean_box(v___y_2020_);
lean_inc_ref(v_a_1863_);
lean_inc(v___y_2023_);
lean_inc_ref(v___x_1866_);
lean_inc_ref(v___x_2038_);
lean_inc_ref(v___y_2028_);
lean_inc_ref(v___y_2029_);
v___f_2041_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__4___boxed), 13, 11);
lean_closure_set(v___f_2041_, 0, v___y_2029_);
lean_closure_set(v___f_2041_, 1, v___y_2028_);
lean_closure_set(v___f_2041_, 2, v___x_2039_);
lean_closure_set(v___f_2041_, 3, v___x_1880_);
lean_closure_set(v___f_2041_, 4, v___x_2038_);
lean_closure_set(v___f_2041_, 5, v___x_1866_);
lean_closure_set(v___f_2041_, 6, v___y_2023_);
lean_closure_set(v___f_2041_, 7, v___x_2040_);
lean_closure_set(v___f_2041_, 8, v_a_1863_);
lean_closure_set(v___f_2041_, 9, v_pos_1870_);
lean_closure_set(v___f_2041_, 10, v___x_1872_);
v___x_2042_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_opts_1873_, v___x_2016_);
if (v___x_2042_ == 0)
{
lean_inc_ref(v___y_2029_);
lean_inc(v___y_2024_);
lean_inc(v___y_2023_);
lean_inc(v___y_2019_);
lean_inc_ref(v___y_2018_);
v___y_1983_ = v___y_2018_;
v___y_1984_ = v___y_2019_;
v___y_1985_ = v___y_2022_;
v___y_1986_ = v___y_2020_;
v___y_1987_ = v___y_2028_;
v___y_1988_ = v___y_2023_;
v___y_1989_ = v___y_2024_;
v___y_1990_ = v___y_2026_;
v___y_1991_ = v___y_2029_;
v___y_1992_ = v___y_2025_;
v___y_1993_ = v___f_2041_;
v___y_1994_ = v___y_2031_;
v___y_1995_ = v___y_2032_;
v___y_1996_ = v___y_2029_;
v___y_1997_ = v___y_2018_;
v___y_1998_ = v___y_2033_;
v___y_1999_ = v___y_2035_;
v___y_2000_ = v___y_2034_;
v___y_2001_ = v___y_2024_;
v___y_2002_ = v___y_2019_;
v___y_2003_ = v___y_2021_;
v___y_2004_ = v___y_2030_;
v___y_2005_ = v___y_2027_;
v___y_2006_ = v___y_2020_;
v___y_2007_ = v___y_2023_;
v___y_2008_ = v___x_2038_;
goto v___jp_1982_;
}
else
{
uint8_t v___x_2043_; 
lean_inc(v_fst_1859_);
v___x_2043_ = l_Lean_Parser_isTerminalCommand(v_fst_1859_);
if (v___x_2043_ == 0)
{
lean_object* v_env_2044_; lean_object* v_messages_2045_; lean_object* v_scopes_2046_; lean_object* v_infoState_2047_; lean_object* v_traceState_2048_; lean_object* v_snapshotTasks_2049_; lean_object* v_codeQualityEntryTasks_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v_env_2044_ = lean_ctor_get(v___x_2038_, 0);
lean_inc_ref_n(v_env_2044_, 2);
v_messages_2045_ = lean_ctor_get(v___x_2038_, 1);
lean_inc_ref(v_messages_2045_);
v_scopes_2046_ = lean_ctor_get(v___x_2038_, 2);
lean_inc(v_scopes_2046_);
v_infoState_2047_ = lean_ctor_get(v___x_2038_, 8);
lean_inc_ref(v_infoState_2047_);
v_traceState_2048_ = lean_ctor_get(v___x_2038_, 9);
lean_inc_ref(v_traceState_2048_);
v_snapshotTasks_2049_ = lean_ctor_get(v___x_2038_, 10);
lean_inc_ref(v_snapshotTasks_2049_);
v_codeQualityEntryTasks_2050_ = lean_ctor_get(v___x_2038_, 12);
lean_inc_ref(v_codeQualityEntryTasks_2050_);
v___x_2051_ = lean_mk_empty_array_with_capacity(v___y_2026_);
lean_inc_ref(v___x_2051_);
v___x_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
lean_inc_n(v___y_2023_, 4);
v___x_2053_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
lean_ctor_set(v___x_2053_, 1, v___x_2051_);
lean_ctor_set(v___x_2053_, 2, v___y_2023_);
lean_ctor_set(v___x_2053_, 3, v___y_2023_);
lean_ctor_set_usize(v___x_2053_, 4, v___y_2022_);
v___x_2054_ = l_Lean_NameSet_empty;
lean_inc_ref_n(v___x_2053_, 2);
v___x_2055_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v___x_2053_);
lean_ctor_set(v___x_2055_, 2, v___x_2054_);
v___x_2056_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
v___x_2057_ = l_Lean_Options_empty;
v___x_2058_ = lean_box(0);
v___x_2059_ = lean_mk_empty_array_with_capacity(v___y_2023_);
lean_inc_ref_n(v___x_2059_, 3);
lean_inc_n(v___x_1865_, 2);
v___x_2060_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v___x_2060_, 0, v___x_2056_);
lean_ctor_set(v___x_2060_, 1, v___x_2057_);
lean_ctor_set(v___x_2060_, 2, v___x_1865_);
lean_ctor_set(v___x_2060_, 3, v___x_2058_);
lean_ctor_set(v___x_2060_, 4, v___x_2058_);
lean_ctor_set(v___x_2060_, 5, v___x_2059_);
lean_ctor_set(v___x_2060_, 6, v___x_2059_);
lean_ctor_set(v___x_2060_, 7, v___x_2058_);
lean_ctor_set(v___x_2060_, 8, v___x_2058_);
lean_ctor_set(v___x_2060_, 9, v___x_2058_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*10, v_val_1862_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*10 + 1, v_val_1862_);
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*10 + 2, v_val_1862_);
v___x_2061_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
lean_ctor_set(v___x_2061_, 1, v___x_2058_);
v___x_2062_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__0);
v___x_2063_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__3___closed__3));
v___x_2064_ = l_Lean_DeclNameGenerator_ofPrefix(v___x_1865_);
v___x_2065_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2066_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
lean_ctor_set(v___x_2066_, 2, v___x_2053_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*3, v___y_2020_);
v___x_2067_ = lean_box(0);
lean_inc_ref(v___y_2028_);
v___x_2068_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_2068_, 0, v_env_2044_);
lean_ctor_set(v___x_2068_, 1, v___x_2055_);
lean_ctor_set(v___x_2068_, 2, v___x_2061_);
lean_ctor_set(v___x_2068_, 3, v___x_2054_);
lean_ctor_set(v___x_2068_, 4, v___x_2062_);
lean_ctor_set(v___x_2068_, 5, v___y_2023_);
lean_ctor_set(v___x_2068_, 6, v___x_2063_);
lean_ctor_set(v___x_2068_, 7, v___x_2064_);
lean_ctor_set(v___x_2068_, 8, v___x_2066_);
lean_ctor_set(v___x_2068_, 9, v___y_2028_);
lean_ctor_set(v___x_2068_, 10, v___x_2059_);
lean_ctor_set(v___x_2068_, 11, v___x_2067_);
lean_ctor_set(v___x_2068_, 12, v___x_2059_);
lean_inc_ref(v___y_2029_);
lean_inc(v___y_2024_);
lean_inc(v___y_2019_);
lean_inc_ref(v___y_2018_);
v___y_1915_ = v___y_2018_;
v___y_1916_ = v___y_2019_;
v___y_1917_ = v___y_2028_;
v___y_1918_ = v___y_2020_;
v___y_1919_ = v___y_2022_;
v___y_1920_ = v___y_2024_;
v___y_1921_ = v___y_2023_;
v___y_1922_ = v___y_2026_;
v___y_1923_ = v___y_2029_;
v___y_1924_ = v___y_2025_;
v___y_1925_ = v___f_2041_;
v___y_1926_ = v___y_2031_;
v___y_1927_ = v___y_2032_;
v___y_1928_ = v___y_2029_;
v___y_1929_ = v___y_2018_;
v___y_1930_ = v___y_2033_;
v___y_1931_ = v___y_2035_;
v___y_1932_ = v___y_2034_;
v___y_1933_ = v___y_2024_;
v___y_1934_ = v___y_2019_;
v___y_1935_ = v___y_2027_;
v___y_1936_ = v___y_2030_;
v___y_1937_ = v___y_2021_;
v___y_1938_ = v___y_2023_;
v___y_1939_ = v___y_2020_;
v___y_1940_ = v___x_2038_;
v_env_1941_ = v_env_2044_;
v_messages_1942_ = v_messages_2045_;
v_scopes_1943_ = v_scopes_2046_;
v_infoState_1944_ = v_infoState_2047_;
v_traceState_1945_ = v_traceState_2048_;
v_snapshotTasks_1946_ = v_snapshotTasks_2049_;
v_codeQualityEntryTasks_1947_ = v_codeQualityEntryTasks_2050_;
v_reportedCmdState_1948_ = v___x_2068_;
goto v___jp_1914_;
}
else
{
lean_inc_ref(v___y_2029_);
lean_inc(v___y_2024_);
lean_inc(v___y_2023_);
lean_inc(v___y_2019_);
lean_inc_ref(v___y_2018_);
v___y_1983_ = v___y_2018_;
v___y_1984_ = v___y_2019_;
v___y_1985_ = v___y_2022_;
v___y_1986_ = v___y_2020_;
v___y_1987_ = v___y_2028_;
v___y_1988_ = v___y_2023_;
v___y_1989_ = v___y_2024_;
v___y_1990_ = v___y_2026_;
v___y_1991_ = v___y_2029_;
v___y_1992_ = v___y_2025_;
v___y_1993_ = v___f_2041_;
v___y_1994_ = v___y_2031_;
v___y_1995_ = v___y_2032_;
v___y_1996_ = v___y_2029_;
v___y_1997_ = v___y_2018_;
v___y_1998_ = v___y_2033_;
v___y_1999_ = v___y_2035_;
v___y_2000_ = v___y_2034_;
v___y_2001_ = v___y_2024_;
v___y_2002_ = v___y_2019_;
v___y_2003_ = v___y_2021_;
v___y_2004_ = v___y_2030_;
v___y_2005_ = v___y_2027_;
v___y_2006_ = v___y_2020_;
v___y_2007_ = v___y_2023_;
v___y_2008_ = v___x_2038_;
goto v___jp_1982_;
}
}
}
v___jp_2069_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; size_t v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2075_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_1864_);
v___x_2076_ = l_IO_CancelToken_new();
v___x_2077_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
lean_inc(v___x_1865_);
v___x_2078_ = l_Lean_Name_str___override(v___x_1865_, v___x_2077_);
v___x_2079_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2080_ = l_Lean_Name_str___override(v___x_2078_, v___x_2079_);
v___x_2081_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2082_ = l_Lean_Name_str___override(v___x_2080_, v___x_2081_);
v___x_2083_ = l_Lean_Name_str___override(v___x_2082_, v___x_2079_);
v___x_2084_ = lean_unsigned_to_nat(0u);
v___x_2085_ = l_Lean_Name_num___override(v___x_2083_, v___x_2084_);
v___x_2086_ = l_Lean_Name_str___override(v___x_2085_, v___x_2079_);
v___x_2087_ = l_Lean_Name_str___override(v___x_2086_, v___x_2081_);
v___x_2088_ = l_Lean_Name_str___override(v___x_2087_, v___x_2079_);
v___x_2089_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2090_ = l_Lean_Name_str___override(v___x_2088_, v___x_2089_);
v___x_2091_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3));
v___x_2092_ = l_Lean_Name_str___override(v___x_2090_, v___x_2091_);
v___x_2093_ = 1;
v___x_2094_ = l_Lean_Name_toString(v___x_2092_, v___x_2093_);
v___x_2095_ = lean_box(0);
v___x_2096_ = lean_unsigned_to_nat(32u);
v___x_2097_ = ((size_t)5ULL);
v___x_2098_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref_n(v___x_2094_, 2);
v___x_2099_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2099_, 0, v___x_2094_);
lean_ctor_set(v___x_2099_, 1, v___x_2075_);
lean_ctor_set(v___x_2099_, 2, v___x_2095_);
lean_ctor_set(v___x_2099_, 3, v___x_2098_);
lean_ctor_set_uint8(v___x_2099_, sizeof(void*)*4, v_val_1862_);
v___x_2100_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2101_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2101_, 0, v___x_2094_);
lean_ctor_set(v___x_2101_, 1, v___x_2100_);
lean_ctor_set(v___x_2101_, 2, v___x_2095_);
lean_ctor_set(v___x_2101_, 3, v___x_2098_);
lean_ctor_set_uint8(v___x_2101_, sizeof(void*)*4, v_val_1862_);
lean_inc(v___y_2071_);
v___x_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2102_, 0, v___y_2071_);
v___x_2103_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2102_);
lean_inc_ref(v___x_2076_);
v___x_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2076_);
v___x_2105_ = l_IO_Promise_result_x21___redArg(v_elabPromise_1877_);
lean_inc_ref(v___x_2105_);
lean_inc(v___x_2103_);
lean_inc_ref_n(v___x_2102_, 3);
v___x_2106_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2102_);
lean_ctor_set(v___x_2106_, 1, v___x_2103_);
lean_ctor_set(v___x_2106_, 2, v___x_2104_);
lean_ctor_set(v___x_2106_, 3, v___x_2105_);
v___x_2107_ = l_IO_Promise_result_x21___redArg(v___x_1879_);
lean_inc_ref(v___x_2107_);
lean_inc_n(v___y_2070_, 3);
v___x_2108_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2102_);
lean_ctor_set(v___x_2108_, 1, v___y_2070_);
lean_ctor_set(v___x_2108_, 2, v___x_2095_);
lean_ctor_set(v___x_2108_, 3, v___x_2107_);
v___x_2109_ = l_IO_Promise_result_x21___redArg(v___x_1880_);
lean_inc_ref(v___x_2109_);
v___x_2110_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2102_);
lean_ctor_set(v___x_2110_, 1, v___y_2070_);
lean_ctor_set(v___x_2110_, 2, v___x_2095_);
lean_ctor_set(v___x_2110_, 3, v___x_2109_);
v___x_2111_ = l_IO_Promise_result_x21___redArg(v___x_1881_);
v___x_2112_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2095_);
lean_ctor_set(v___x_2112_, 1, v___y_2070_);
lean_ctor_set(v___x_2112_, 2, v___x_2095_);
lean_ctor_set(v___x_2112_, 3, v___x_2111_);
lean_inc_ref(v___x_2101_);
v___x_2113_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2101_);
lean_ctor_set(v___x_2113_, 1, v___x_2106_);
lean_ctor_set(v___x_2113_, 2, v___x_2108_);
lean_ctor_set(v___x_2113_, 3, v___x_2110_);
lean_ctor_set(v___x_2113_, 4, v___x_2112_);
v___x_2114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2099_);
lean_ctor_set(v___x_2114_, 1, v___y_2071_);
lean_ctor_set(v___x_2114_, 2, v___y_2073_);
lean_ctor_set(v___x_2114_, 3, v___x_2113_);
lean_ctor_set(v___x_2114_, 4, v___y_2074_);
v___x_2115_ = lean_io_promise_resolve(v___x_2114_, v_prom_1874_);
if (lean_obj_tag(v_old_x3f_1875_) == 0)
{
v___y_2018_ = v___x_2101_;
v___y_2019_ = v___x_2095_;
v___y_2020_ = v___x_2093_;
v___y_2021_ = v___x_2105_;
v___y_2022_ = v___x_2097_;
v___y_2023_ = v___x_2084_;
v___y_2024_ = v___x_2095_;
v___y_2025_ = v___x_2103_;
v___y_2026_ = v___x_2096_;
v___y_2027_ = v___x_2102_;
v___y_2028_ = v___x_2098_;
v___y_2029_ = v___x_2094_;
v___y_2030_ = v___x_2076_;
v___y_2031_ = v___x_2095_;
v___y_2032_ = v___x_2109_;
v___y_2033_ = v___y_2072_;
v___y_2034_ = v___y_2070_;
v___y_2035_ = v___x_2107_;
v___y_2036_ = v___x_2095_;
goto v___jp_2017_;
}
else
{
lean_object* v_val_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2127_; 
v_val_2116_ = lean_ctor_get(v_old_x3f_1875_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v_old_x3f_1875_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2118_ = v_old_x3f_1875_;
v_isShared_2119_ = v_isSharedCheck_2127_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_val_2116_);
lean_dec(v_old_x3f_1875_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2127_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v_elabSnap_2120_; lean_object* v_stx_2121_; lean_object* v_elabSnap_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
v_elabSnap_2120_ = lean_ctor_get(v_val_2116_, 3);
lean_inc_ref(v_elabSnap_2120_);
v_stx_2121_ = lean_ctor_get(v_val_2116_, 1);
lean_inc(v_stx_2121_);
lean_dec(v_val_2116_);
v_elabSnap_2122_ = lean_ctor_get(v_elabSnap_2120_, 1);
lean_inc_ref(v_elabSnap_2122_);
lean_dec_ref(v_elabSnap_2120_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v_stx_2121_);
lean_ctor_set(v___x_2123_, 1, v_elabSnap_2122_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v___x_2123_);
v___x_2125_ = v___x_2118_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
v___y_2018_ = v___x_2101_;
v___y_2019_ = v___x_2095_;
v___y_2020_ = v___x_2093_;
v___y_2021_ = v___x_2105_;
v___y_2022_ = v___x_2097_;
v___y_2023_ = v___x_2084_;
v___y_2024_ = v___x_2095_;
v___y_2025_ = v___x_2103_;
v___y_2026_ = v___x_2096_;
v___y_2027_ = v___x_2102_;
v___y_2028_ = v___x_2098_;
v___y_2029_ = v___x_2094_;
v___y_2030_ = v___x_2076_;
v___y_2031_ = v___x_2095_;
v___y_2032_ = v___x_2109_;
v___y_2033_ = v___y_2072_;
v___y_2034_ = v___y_2070_;
v___y_2035_ = v___x_2107_;
v___y_2036_ = v___x_2125_;
goto v___jp_2017_;
}
}
}
}
v___jp_2128_:
{
lean_object* v___x_2132_; uint8_t v___x_2133_; 
v___x_2132_ = l_Lean_Language_SnapshotTask_ReportingRange_ofOptionInheriting(v___y_2131_);
lean_inc(v_fst_1859_);
v___x_2133_ = l_Lean_Parser_isTerminalCommand(v_fst_1859_);
if (v___x_2133_ == 0)
{
lean_object* v___x_2134_; lean_object* v_toProcessingContext_2135_; lean_object* v_pos_2136_; lean_object* v_endPos_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2134_ = lean_io_promise_new();
v_toProcessingContext_2135_ = lean_ctor_get(v_a_1863_, 0);
v_pos_2136_ = lean_ctor_get(v_fst_1861_, 0);
v_endPos_2137_ = lean_ctor_get(v_toProcessingContext_2135_, 3);
lean_inc(v___x_2134_);
v___x_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2134_);
v___x_2139_ = lean_box(0);
lean_inc(v_endPos_2137_);
lean_inc(v_pos_2136_);
v___x_2140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2140_, 0, v_pos_2136_);
lean_ctor_set(v___x_2140_, 1, v_endPos_2137_);
v___x_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
v___x_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2142_, 0, v_parseCancelTk_1876_);
v___x_2143_ = l_IO_Promise_result_x21___redArg(v___x_2134_);
lean_dec(v___x_2134_);
v___x_2144_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2139_);
lean_ctor_set(v___x_2144_, 1, v___x_2141_);
lean_ctor_set(v___x_2144_, 2, v___x_2142_);
lean_ctor_set(v___x_2144_, 3, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
v___y_2070_ = v___x_2132_;
v___y_2071_ = v___y_2129_;
v___y_2072_ = v___x_2138_;
v___y_2073_ = v___y_2130_;
v___y_2074_ = v___x_2145_;
goto v___jp_2069_;
}
else
{
lean_object* v___x_2146_; 
lean_dec_ref(v_parseCancelTk_1876_);
v___x_2146_ = lean_box(0);
v___y_2070_ = v___x_2132_;
v___y_2071_ = v___y_2129_;
v___y_2072_ = v___x_2146_;
v___y_2073_ = v___y_2130_;
v___y_2074_ = v___x_2146_;
goto v___jp_2069_;
}
}
v___jp_2147_:
{
lean_object* v___x_2150_; 
lean_inc(v_fst_1859_);
v___x_2150_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_getNiceCommandStartPos_x3f(v_fst_1859_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v___x_2151_; 
v___x_2151_ = lean_box(0);
v___y_2129_ = v_fst_2148_;
v___y_2130_ = v_snd_2149_;
v___y_2131_ = v___x_2151_;
goto v___jp_2128_;
}
else
{
lean_object* v_val_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2160_; 
v_val_2152_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2154_ = v___x_2150_;
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_val_2152_);
lean_dec(v___x_2150_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2160_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; lean_object* v___x_2158_; 
lean_inc(v_val_2152_);
v___x_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2156_, 0, v_val_2152_);
lean_ctor_set(v___x_2156_, 1, v_val_2152_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2156_);
v___x_2158_ = v___x_2154_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
v___y_2129_ = v_fst_2148_;
v___y_2130_ = v_snd_2149_;
v___y_2131_ = v___x_2158_;
goto v___jp_2128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed(lean_object** _args){
lean_object* v_fst_2165_ = _args[0];
lean_object* v_revCmds_2166_ = _args[1];
lean_object* v_fst_2167_ = _args[2];
lean_object* v_val_2168_ = _args[3];
lean_object* v_a_2169_ = _args[4];
lean_object* v_snd_2170_ = _args[5];
lean_object* v___x_2171_ = _args[6];
lean_object* v___x_2172_ = _args[7];
lean_object* v___f_2173_ = _args[8];
lean_object* v___f_2174_ = _args[9];
lean_object* v___f_2175_ = _args[10];
lean_object* v_pos_2176_ = _args[11];
lean_object* v_cmdState_2177_ = _args[12];
lean_object* v___x_2178_ = _args[13];
lean_object* v_opts_2179_ = _args[14];
lean_object* v_prom_2180_ = _args[15];
lean_object* v_old_x3f_2181_ = _args[16];
lean_object* v_parseCancelTk_2182_ = _args[17];
lean_object* v_elabPromise_2183_ = _args[18];
lean_object* v___y_2184_ = _args[19];
_start:
{
uint8_t v_val_25260__boxed_2185_; lean_object* v_res_2186_; 
v_val_25260__boxed_2185_ = lean_unbox(v_val_2168_);
v_res_2186_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v_fst_2165_, v_revCmds_2166_, v_fst_2167_, v_val_25260__boxed_2185_, v_a_2169_, v_snd_2170_, v___x_2171_, v___x_2172_, v___f_2173_, v___f_2174_, v___f_2175_, v_pos_2176_, v_cmdState_2177_, v___x_2178_, v_opts_2179_, v_prom_2180_, v_old_x3f_2181_, v_parseCancelTk_2182_, v_elabPromise_2183_);
lean_dec(v_prom_2180_);
lean_dec_ref(v_opts_2179_);
lean_dec_ref(v_a_2169_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(lean_object* v_old_x3f_2188_, lean_object* v_parserState_2189_, lean_object* v_cmdState_2190_, lean_object* v_prom_2191_, uint8_t v_sync_2192_, lean_object* v_parseCancelTk_2193_, lean_object* v_revCmds_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_toSnapshot_2198_; lean_object* v_stx_2199_; lean_object* v_parserState_2200_; lean_object* v_elabSnap_2201_; lean_object* v_val_2202_; lean_object* v_newParserState_2203_; lean_object* v___f_2236_; lean_object* v___f_2237_; lean_object* v___f_2238_; lean_object* v___x_2239_; uint8_t v___y_2241_; lean_object* v___y_2242_; lean_object* v___y_2243_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___y_2280_; lean_object* v___y_2281_; lean_object* v___y_2282_; lean_object* v___y_2283_; lean_object* v___y_2284_; lean_object* v___y_2285_; lean_object* v___y_2286_; lean_object* v___y_2287_; 
v___f_2236_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__0));
v___f_2237_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__1));
v___f_2238_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__2));
v___x_2239_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2277_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__7));
v___x_2278_ = l_Lean_Elab_instInhabitedInfoTree_default;
if (lean_obj_tag(v_old_x3f_2188_) == 1)
{
lean_object* v_val_2338_; lean_object* v_nextCmdSnap_x3f_2339_; 
v_val_2338_ = lean_ctor_get(v_old_x3f_2188_, 0);
v_nextCmdSnap_x3f_2339_ = lean_ctor_get(v_val_2338_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_2339_) == 0)
{
goto v___jp_2306_;
}
else
{
lean_object* v_toSnapshot_2340_; lean_object* v_stx_2341_; lean_object* v_parserState_2342_; lean_object* v_elabSnap_2343_; lean_object* v_val_2344_; lean_object* v___x_2345_; 
v_toSnapshot_2340_ = lean_ctor_get(v_val_2338_, 0);
v_stx_2341_ = lean_ctor_get(v_val_2338_, 1);
v_parserState_2342_ = lean_ctor_get(v_val_2338_, 2);
v_elabSnap_2343_ = lean_ctor_get(v_val_2338_, 3);
v_val_2344_ = lean_ctor_get(v_nextCmdSnap_x3f_2339_, 0);
lean_inc(v_val_2344_);
v___x_2345_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2344_);
if (lean_obj_tag(v___x_2345_) == 1)
{
lean_object* v_val_2346_; lean_object* v_nextCmdSnap_x3f_2347_; 
v_val_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_val_2346_);
lean_dec_ref_known(v___x_2345_, 1);
v_nextCmdSnap_x3f_2347_ = lean_ctor_get(v_val_2346_, 4);
lean_inc(v_nextCmdSnap_x3f_2347_);
lean_dec(v_val_2346_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2347_) == 0)
{
goto v___jp_2306_;
}
else
{
lean_object* v_val_2348_; lean_object* v___x_2349_; 
v_val_2348_ = lean_ctor_get(v_nextCmdSnap_x3f_2347_, 0);
lean_inc(v_val_2348_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2347_, 1);
v___x_2349_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_2348_);
if (lean_obj_tag(v___x_2349_) == 1)
{
lean_object* v_val_2350_; lean_object* v_parserState_2351_; lean_object* v_pos_2352_; uint8_t v___x_2353_; 
v_val_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_val_2350_);
lean_dec_ref_known(v___x_2349_, 1);
v_parserState_2351_ = lean_ctor_get(v_val_2350_, 2);
lean_inc_ref(v_parserState_2351_);
lean_dec(v_val_2350_);
v_pos_2352_ = lean_ctor_get(v_parserState_2351_, 0);
lean_inc(v_pos_2352_);
lean_dec_ref(v_parserState_2351_);
v___x_2353_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_2352_, v_a_2195_);
lean_dec(v_pos_2352_);
if (v___x_2353_ == 0)
{
goto v___jp_2306_;
}
else
{
lean_inc(v_val_2344_);
lean_inc_ref(v_elabSnap_2343_);
lean_inc_ref_n(v_parserState_2342_, 2);
lean_inc(v_stx_2341_);
lean_inc_ref(v_toSnapshot_2340_);
lean_dec_ref_known(v_old_x3f_2188_, 1);
lean_dec_ref(v_parseCancelTk_2193_);
lean_dec_ref(v_cmdState_2190_);
lean_dec_ref(v_parserState_2189_);
v_toSnapshot_2198_ = v_toSnapshot_2340_;
v_stx_2199_ = v_stx_2341_;
v_parserState_2200_ = v_parserState_2342_;
v_elabSnap_2201_ = v_elabSnap_2343_;
v_val_2202_ = v_val_2344_;
v_newParserState_2203_ = v_parserState_2342_;
goto v___jp_2197_;
}
}
else
{
lean_dec(v___x_2349_);
goto v___jp_2306_;
}
}
}
else
{
lean_dec(v___x_2345_);
goto v___jp_2306_;
}
}
}
else
{
goto v___jp_2306_;
}
v___jp_2197_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v_resultSnap_2206_; lean_object* v_task_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2230_; 
v___x_2204_ = lean_io_promise_new();
v___x_2205_ = l_IO_CancelToken_new();
v_resultSnap_2206_ = lean_ctor_get(v_elabSnap_2201_, 2);
lean_inc_ref(v_resultSnap_2206_);
v_task_2207_ = lean_ctor_get(v_resultSnap_2206_, 3);
v_isSharedCheck_2230_ = !lean_is_exclusive(v_resultSnap_2206_);
if (v_isSharedCheck_2230_ == 0)
{
lean_object* v_unused_2231_; lean_object* v_unused_2232_; lean_object* v_unused_2233_; 
v_unused_2231_ = lean_ctor_get(v_resultSnap_2206_, 2);
lean_dec(v_unused_2231_);
v_unused_2232_ = lean_ctor_get(v_resultSnap_2206_, 1);
lean_dec(v_unused_2232_);
v_unused_2233_ = lean_ctor_get(v_resultSnap_2206_, 0);
lean_dec(v_unused_2233_);
v___x_2209_ = v_resultSnap_2206_;
v_isShared_2210_ = v_isSharedCheck_2230_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_task_2207_);
lean_dec(v_resultSnap_2206_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2230_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; lean_object* v___f_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; lean_object* v___x_2215_; lean_object* v_toProcessingContext_2216_; lean_object* v_pos_2217_; lean_object* v_endPos_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2225_; 
v___x_2211_ = lean_box(v_sync_2192_);
lean_inc_ref(v_a_2195_);
lean_inc_ref(v___x_2205_);
lean_inc(v___x_2204_);
lean_inc_ref(v_newParserState_2203_);
lean_inc(v_stx_2199_);
v___f_2212_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__1___boxed), 10, 8);
lean_closure_set(v___f_2212_, 0, v_val_2202_);
lean_closure_set(v___f_2212_, 1, v_stx_2199_);
lean_closure_set(v___f_2212_, 2, v_revCmds_2194_);
lean_closure_set(v___f_2212_, 3, v_newParserState_2203_);
lean_closure_set(v___f_2212_, 4, v___x_2204_);
lean_closure_set(v___f_2212_, 5, v___x_2211_);
lean_closure_set(v___f_2212_, 6, v___x_2205_);
lean_closure_set(v___f_2212_, 7, v_a_2195_);
v___x_2213_ = lean_unsigned_to_nat(0u);
v___x_2214_ = 1;
v___x_2215_ = l_BaseIO_chainTask___redArg(v_task_2207_, v___f_2212_, v___x_2213_, v___x_2214_);
v_toProcessingContext_2216_ = lean_ctor_get(v_a_2195_, 0);
v_pos_2217_ = lean_ctor_get(v_newParserState_2203_, 0);
lean_inc(v_pos_2217_);
lean_dec_ref(v_newParserState_2203_);
v_endPos_2218_ = lean_ctor_get(v_toProcessingContext_2216_, 3);
v___x_2219_ = lean_box(0);
lean_inc(v_endPos_2218_);
v___x_2220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2220_, 0, v_pos_2217_);
lean_ctor_set(v___x_2220_, 1, v_endPos_2218_);
v___x_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
v___x_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2205_);
v___x_2223_ = l_IO_Promise_result_x21___redArg(v___x_2204_);
lean_dec(v___x_2204_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 3, v___x_2223_);
lean_ctor_set(v___x_2209_, 2, v___x_2222_);
lean_ctor_set(v___x_2209_, 1, v___x_2221_);
lean_ctor_set(v___x_2209_, 0, v___x_2219_);
v___x_2225_ = v___x_2209_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v___x_2221_);
lean_ctor_set(v_reuseFailAlloc_2229_, 2, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2229_, 3, v___x_2223_);
v___x_2225_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
v___x_2227_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2227_, 0, v_toSnapshot_2198_);
lean_ctor_set(v___x_2227_, 1, v_stx_2199_);
lean_ctor_set(v___x_2227_, 2, v_parserState_2200_);
lean_ctor_set(v___x_2227_, 3, v_elabSnap_2201_);
lean_ctor_set(v___x_2227_, 4, v___x_2226_);
v___x_2228_ = lean_io_promise_resolve(v___x_2227_, v_prom_2191_);
lean_dec(v_prom_2191_);
return v___x_2228_;
}
}
}
v___jp_2234_:
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_box(0);
return v___x_2235_;
}
v___jp_2240_:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; uint8_t v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2244_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__0));
v___x_2245_ = l_Lean_Name_str___override(v___y_2243_, v___x_2244_);
v___x_2246_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2247_ = l_Lean_Name_str___override(v___x_2245_, v___x_2246_);
v___x_2248_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2249_ = l_Lean_Name_str___override(v___x_2247_, v___x_2248_);
v___x_2250_ = l_Lean_Name_str___override(v___x_2249_, v___x_2246_);
v___x_2251_ = lean_unsigned_to_nat(0u);
v___x_2252_ = l_Lean_Name_num___override(v___x_2250_, v___x_2251_);
v___x_2253_ = l_Lean_Name_str___override(v___x_2252_, v___x_2246_);
v___x_2254_ = l_Lean_Name_str___override(v___x_2253_, v___x_2248_);
v___x_2255_ = l_Lean_Name_str___override(v___x_2254_, v___x_2246_);
v___x_2256_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2257_ = l_Lean_Name_str___override(v___x_2255_, v___x_2256_);
v___x_2258_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__3));
v___x_2259_ = l_Lean_Name_str___override(v___x_2257_, v___x_2258_);
v___x_2260_ = l_Lean_Name_toString(v___x_2259_, v___y_2241_);
v___x_2261_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2262_ = lean_box(0);
v___x_2263_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2264_ = 0;
v___x_2265_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2265_, 0, v___x_2260_);
lean_ctor_set(v___x_2265_, 1, v___x_2261_);
lean_ctor_set(v___x_2265_, 2, v___x_2262_);
lean_ctor_set(v___x_2265_, 3, v___x_2263_);
lean_ctor_set_uint8(v___x_2265_, sizeof(void*)*4, v___x_2264_);
v___x_2266_ = lean_box(0);
v___x_2267_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v___x_2268_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5));
lean_inc_ref_n(v___x_2265_, 3);
v___x_2269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2265_);
lean_ctor_set(v___x_2269_, 1, v_cmdState_2190_);
lean_ctor_set(v___x_2269_, 2, v___x_2268_);
v___x_2270_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2262_, v___x_2269_);
v___x_2271_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2262_, v___x_2265_);
v___x_2272_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6);
v___x_2273_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2265_);
lean_ctor_set(v___x_2273_, 1, v___x_2267_);
lean_ctor_set(v___x_2273_, 2, v___x_2270_);
lean_ctor_set(v___x_2273_, 3, v___x_2271_);
lean_ctor_set(v___x_2273_, 4, v___x_2272_);
v___x_2274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2265_);
lean_ctor_set(v___x_2274_, 1, v___x_2266_);
lean_ctor_set(v___x_2274_, 2, v___y_2242_);
lean_ctor_set(v___x_2274_, 3, v___x_2273_);
lean_ctor_set(v___x_2274_, 4, v___x_2262_);
v___x_2275_ = lean_io_promise_resolve(v___x_2274_, v_prom_2191_);
lean_dec(v_prom_2191_);
v___x_2276_ = lean_box(0);
return v___x_2276_;
}
v___jp_2279_:
{
uint8_t v___x_2288_; 
v___x_2288_ = l_IO_CancelToken_isSet(v_parseCancelTk_2193_);
if (v___x_2288_ == 0)
{
lean_object* v___x_2289_; lean_object* v___f_2290_; 
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
v___x_2289_ = lean_box(v___x_2288_);
lean_inc_ref(v_parseCancelTk_2193_);
lean_inc(v_old_x3f_2188_);
lean_inc(v_prom_2191_);
lean_inc_ref(v___y_2281_);
lean_inc_ref(v_cmdState_2190_);
lean_inc(v___y_2284_);
lean_inc(v___y_2285_);
lean_inc_ref(v___y_2280_);
lean_inc_ref(v_a_2195_);
lean_inc_ref(v___y_2283_);
lean_inc(v_revCmds_2194_);
lean_inc(v___y_2282_);
v___f_2290_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___boxed), 20, 18);
lean_closure_set(v___f_2290_, 0, v___y_2282_);
lean_closure_set(v___f_2290_, 1, v_revCmds_2194_);
lean_closure_set(v___f_2290_, 2, v___y_2283_);
lean_closure_set(v___f_2290_, 3, v___x_2289_);
lean_closure_set(v___f_2290_, 4, v_a_2195_);
lean_closure_set(v___f_2290_, 5, v___y_2280_);
lean_closure_set(v___f_2290_, 6, v___y_2285_);
lean_closure_set(v___f_2290_, 7, v___x_2239_);
lean_closure_set(v___f_2290_, 8, v___f_2236_);
lean_closure_set(v___f_2290_, 9, v___f_2237_);
lean_closure_set(v___f_2290_, 10, v___f_2238_);
lean_closure_set(v___f_2290_, 11, v___y_2284_);
lean_closure_set(v___f_2290_, 12, v_cmdState_2190_);
lean_closure_set(v___f_2290_, 13, v___x_2278_);
lean_closure_set(v___f_2290_, 14, v___y_2281_);
lean_closure_set(v___f_2290_, 15, v_prom_2191_);
lean_closure_set(v___f_2290_, 16, v_old_x3f_2188_);
lean_closure_set(v___f_2290_, 17, v_parseCancelTk_2193_);
if (v_sync_2192_ == 0)
{
lean_object* v___x_2291_; lean_object* v___x_2292_; 
lean_dec_ref(v___f_2290_);
v___x_2291_ = lean_io_promise_new();
v___x_2292_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5(v___y_2282_, v_revCmds_2194_, v___y_2283_, v___x_2288_, v_a_2195_, v___y_2280_, v___y_2285_, v___x_2239_, v___f_2236_, v___f_2237_, v___f_2238_, v___y_2284_, v_cmdState_2190_, v___x_2278_, v___y_2281_, v_prom_2191_, v_old_x3f_2188_, v_parseCancelTk_2193_, v___x_2291_);
lean_dec(v_prom_2191_);
lean_dec_ref(v___y_2281_);
goto v___jp_2234_;
}
else
{
lean_object* v___f_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
lean_dec(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v_revCmds_2194_);
lean_dec_ref(v_parseCancelTk_2193_);
lean_dec(v_prom_2191_);
lean_dec_ref(v_cmdState_2190_);
lean_dec(v_old_x3f_2188_);
v___f_2293_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__6___boxed), 2, 1);
lean_closure_set(v___f_2293_, 0, v___f_2290_);
v___x_2294_ = lean_unsigned_to_nat(0u);
v___x_2295_ = lean_io_as_task(v___f_2293_, v___x_2294_);
lean_dec_ref(v___x_2295_);
goto v___jp_2234_;
}
}
else
{
lean_dec(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v_revCmds_2194_);
lean_dec_ref(v_parseCancelTk_2193_);
if (lean_obj_tag(v_old_x3f_2188_) == 1)
{
lean_object* v_val_2296_; lean_object* v___x_2297_; lean_object* v_children_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; 
v_val_2296_ = lean_ctor_get(v_old_x3f_2188_, 0);
lean_inc(v_val_2296_);
lean_dec_ref_known(v_old_x3f_2188_, 1);
v___x_2297_ = l_Lean_Language_toSnapshotTree___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__5(v_val_2296_);
v_children_2298_ = lean_ctor_get(v___x_2297_, 1);
lean_inc_ref(v_children_2298_);
lean_dec_ref(v___x_2297_);
v___x_2299_ = lean_unsigned_to_nat(0u);
v___x_2300_ = lean_array_get_size(v_children_2298_);
v___x_2301_ = lean_nat_dec_lt(v___x_2299_, v___x_2300_);
if (v___x_2301_ == 0)
{
lean_dec_ref(v_children_2298_);
v___y_2241_ = v___x_2288_;
v___y_2242_ = v___y_2286_;
v___y_2243_ = v___y_2287_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2302_; size_t v___x_2303_; size_t v___x_2304_; lean_object* v___x_2305_; 
v___x_2302_ = lean_box(0);
v___x_2303_ = ((size_t)0ULL);
v___x_2304_ = lean_usize_of_nat(v___x_2300_);
v___x_2305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_children_2298_, v___x_2303_, v___x_2304_, v___x_2302_);
lean_dec_ref(v_children_2298_);
v___y_2241_ = v___x_2288_;
v___y_2242_ = v___y_2286_;
v___y_2243_ = v___y_2287_;
goto v___jp_2240_;
}
}
else
{
lean_dec(v_old_x3f_2188_);
v___y_2241_ = v___x_2288_;
v___y_2242_ = v___y_2286_;
v___y_2243_ = v___y_2287_;
goto v___jp_2240_;
}
}
}
v___jp_2306_:
{
lean_object* v_env_2307_; lean_object* v_scopes_2308_; lean_object* v___x_2309_; lean_object* v_opts_2310_; lean_object* v_currNamespace_2311_; lean_object* v_openDecls_2312_; lean_object* v___x_2313_; lean_object* v___f_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v_snd_2318_; 
v_env_2307_ = lean_ctor_get(v_cmdState_2190_, 0);
v_scopes_2308_ = lean_ctor_get(v_cmdState_2190_, 2);
v___x_2309_ = l_List_head_x21___redArg(v___x_2239_, v_scopes_2308_);
v_opts_2310_ = lean_ctor_get(v___x_2309_, 1);
lean_inc_ref_n(v_opts_2310_, 2);
v_currNamespace_2311_ = lean_ctor_get(v___x_2309_, 2);
lean_inc(v_currNamespace_2311_);
v_openDecls_2312_ = lean_ctor_get(v___x_2309_, 3);
lean_inc(v_openDecls_2312_);
lean_dec(v___x_2309_);
lean_inc_ref(v_env_2307_);
v___x_2313_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2313_, 0, v_env_2307_);
lean_ctor_set(v___x_2313_, 1, v_opts_2310_);
lean_ctor_set(v___x_2313_, 2, v_currNamespace_2311_);
lean_ctor_set(v___x_2313_, 3, v_openDecls_2312_);
lean_inc_ref(v_parserState_2189_);
lean_inc_ref(v_a_2195_);
v___f_2314_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2314_, 0, v_a_2195_);
lean_closure_set(v___f_2314_, 1, v___x_2313_);
lean_closure_set(v___f_2314_, 2, v_parserState_2189_);
v___x_2315_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__8));
v___x_2316_ = lean_box(0);
v___x_2317_ = lean_profileit(v___x_2315_, v_opts_2310_, v___f_2314_, v___x_2316_);
v_snd_2318_ = lean_ctor_get(v___x_2317_, 1);
lean_inc(v_snd_2318_);
if (lean_obj_tag(v_old_x3f_2188_) == 1)
{
lean_object* v_val_2319_; lean_object* v_fst_2320_; lean_object* v_fst_2321_; lean_object* v_snd_2322_; lean_object* v_pos_2323_; lean_object* v_toSnapshot_2324_; lean_object* v_stx_2325_; lean_object* v_parserState_2326_; lean_object* v_elabSnap_2327_; lean_object* v_nextCmdSnap_x3f_2328_; uint8_t v___x_2329_; 
v_val_2319_ = lean_ctor_get(v_old_x3f_2188_, 0);
v_fst_2320_ = lean_ctor_get(v___x_2317_, 0);
lean_inc_n(v_fst_2320_, 2);
lean_dec(v___x_2317_);
v_fst_2321_ = lean_ctor_get(v_snd_2318_, 0);
lean_inc(v_fst_2321_);
v_snd_2322_ = lean_ctor_get(v_snd_2318_, 1);
lean_inc(v_snd_2322_);
lean_dec(v_snd_2318_);
v_pos_2323_ = lean_ctor_get(v_parserState_2189_, 0);
lean_inc(v_pos_2323_);
lean_dec_ref(v_parserState_2189_);
v_toSnapshot_2324_ = lean_ctor_get(v_val_2319_, 0);
v_stx_2325_ = lean_ctor_get(v_val_2319_, 1);
v_parserState_2326_ = lean_ctor_get(v_val_2319_, 2);
v_elabSnap_2327_ = lean_ctor_get(v_val_2319_, 3);
v_nextCmdSnap_x3f_2328_ = lean_ctor_get(v_val_2319_, 4);
lean_inc(v_stx_2325_);
v___x_2329_ = l_Lean_Syntax_eqWithInfo(v_fst_2320_, v_stx_2325_);
if (v___x_2329_ == 0)
{
if (lean_obj_tag(v_nextCmdSnap_x3f_2328_) == 0)
{
lean_inc(v_fst_2321_);
v___y_2280_ = v_snd_2322_;
v___y_2281_ = v_opts_2310_;
v___y_2282_ = v_fst_2320_;
v___y_2283_ = v_fst_2321_;
v___y_2284_ = v_pos_2323_;
v___y_2285_ = v___x_2316_;
v___y_2286_ = v_fst_2321_;
v___y_2287_ = v___x_2316_;
goto v___jp_2279_;
}
else
{
lean_object* v_val_2330_; lean_object* v___x_2331_; 
v_val_2330_ = lean_ctor_get(v_nextCmdSnap_x3f_2328_, 0);
lean_inc(v_val_2330_);
v___x_2331_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_2277_, v_val_2330_);
lean_inc(v_fst_2321_);
v___y_2280_ = v_snd_2322_;
v___y_2281_ = v_opts_2310_;
v___y_2282_ = v_fst_2320_;
v___y_2283_ = v_fst_2321_;
v___y_2284_ = v_pos_2323_;
v___y_2285_ = v___x_2316_;
v___y_2286_ = v_fst_2321_;
v___y_2287_ = v___x_2316_;
goto v___jp_2279_;
}
}
else
{
lean_inc(v_val_2319_);
lean_dec(v_pos_2323_);
lean_dec(v_snd_2322_);
lean_dec(v_fst_2320_);
lean_dec_ref_known(v_old_x3f_2188_, 1);
lean_dec_ref(v_opts_2310_);
lean_dec_ref(v_parseCancelTk_2193_);
lean_dec_ref(v_cmdState_2190_);
if (lean_obj_tag(v_nextCmdSnap_x3f_2328_) == 1)
{
lean_object* v_val_2332_; 
lean_inc_ref(v_nextCmdSnap_x3f_2328_);
lean_inc_ref(v_elabSnap_2327_);
lean_inc_ref(v_parserState_2326_);
lean_inc(v_stx_2325_);
lean_inc_ref(v_toSnapshot_2324_);
lean_dec(v_val_2319_);
v_val_2332_ = lean_ctor_get(v_nextCmdSnap_x3f_2328_, 0);
lean_inc(v_val_2332_);
lean_dec_ref_known(v_nextCmdSnap_x3f_2328_, 1);
v_toSnapshot_2198_ = v_toSnapshot_2324_;
v_stx_2199_ = v_stx_2325_;
v_parserState_2200_ = v_parserState_2326_;
v_elabSnap_2201_ = v_elabSnap_2327_;
v_val_2202_ = v_val_2332_;
v_newParserState_2203_ = v_fst_2321_;
goto v___jp_2197_;
}
else
{
lean_object* v___x_2333_; 
lean_dec(v_fst_2321_);
lean_dec(v_revCmds_2194_);
v___x_2333_ = lean_io_promise_resolve(v_val_2319_, v_prom_2191_);
lean_dec(v_prom_2191_);
return v___x_2333_;
}
}
}
else
{
lean_object* v_fst_2334_; lean_object* v_fst_2335_; lean_object* v_snd_2336_; lean_object* v_pos_2337_; 
v_fst_2334_ = lean_ctor_get(v___x_2317_, 0);
lean_inc(v_fst_2334_);
lean_dec(v___x_2317_);
v_fst_2335_ = lean_ctor_get(v_snd_2318_, 0);
lean_inc_n(v_fst_2335_, 2);
v_snd_2336_ = lean_ctor_get(v_snd_2318_, 1);
lean_inc(v_snd_2336_);
lean_dec(v_snd_2318_);
v_pos_2337_ = lean_ctor_get(v_parserState_2189_, 0);
lean_inc(v_pos_2337_);
lean_dec_ref(v_parserState_2189_);
v___y_2280_ = v_snd_2336_;
v___y_2281_ = v_opts_2310_;
v___y_2282_ = v_fst_2334_;
v___y_2283_ = v_fst_2335_;
v___y_2284_ = v_pos_2337_;
v___y_2285_ = v___x_2316_;
v___y_2286_ = v_fst_2335_;
v___y_2287_ = v___x_2316_;
goto v___jp_2279_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__0(lean_object* v_oldResult_2354_, lean_object* v_stx_2355_, lean_object* v_revCmds_2356_, lean_object* v_newParserState_2357_, lean_object* v_val_2358_, uint8_t v_sync_2359_, lean_object* v_val_2360_, lean_object* v_a_2361_, lean_object* v_oldNext_2362_){
_start:
{
lean_object* v_cmdState_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; 
v_cmdState_2364_ = lean_ctor_get(v_oldResult_2354_, 1);
lean_inc_ref(v_cmdState_2364_);
lean_dec_ref(v_oldResult_2354_);
v___x_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2365_, 0, v_oldNext_2362_);
v___x_2366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2366_, 0, v_stx_2355_);
lean_ctor_set(v___x_2366_, 1, v_revCmds_2356_);
v___x_2367_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2365_, v_newParserState_2357_, v_cmdState_2364_, v_val_2358_, v_sync_2359_, v_val_2360_, v___x_2366_, v_a_2361_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed(lean_object* v_old_x3f_2368_, lean_object* v_parserState_2369_, lean_object* v_cmdState_2370_, lean_object* v_prom_2371_, lean_object* v_sync_2372_, lean_object* v_parseCancelTk_2373_, lean_object* v_revCmds_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_){
_start:
{
uint8_t v_sync_boxed_2377_; lean_object* v_res_2378_; 
v_sync_boxed_2377_ = lean_unbox(v_sync_2372_);
v_res_2378_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v_old_x3f_2368_, v_parserState_2369_, v_cmdState_2370_, v_prom_2371_, v_sync_boxed_2377_, v_parseCancelTk_2373_, v_revCmds_2374_, v_a_2375_);
lean_dec_ref(v_a_2375_);
return v_res_2378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(lean_object* v_as_2379_, size_t v_i_2380_, size_t v_stop_2381_, lean_object* v_b_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v___x_2385_; 
v___x_2385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___redArg(v_as_2379_, v_i_2380_, v_stop_2381_, v_b_2382_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6___boxed(lean_object* v_as_2386_, lean_object* v_i_2387_, lean_object* v_stop_2388_, lean_object* v_b_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
size_t v_i_boxed_2392_; size_t v_stop_boxed_2393_; lean_object* v_res_2394_; 
v_i_boxed_2392_ = lean_unbox_usize(v_i_2387_);
lean_dec(v_i_2387_);
v_stop_boxed_2393_ = lean_unbox_usize(v_stop_2388_);
lean_dec(v_stop_2388_);
v_res_2394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd_spec__6(v_as_2386_, v_i_boxed_2392_, v_stop_boxed_2393_, v_b_2389_, v___y_2390_);
lean_dec_ref(v___y_2390_);
lean_dec_ref(v_as_2386_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(lean_object* v_opts_2395_, lean_object* v_opt_2396_){
_start:
{
lean_object* v_name_2397_; lean_object* v_map_2398_; lean_object* v___x_2399_; 
v_name_2397_ = lean_ctor_get(v_opt_2396_, 0);
v_map_2398_ = lean_ctor_get(v_opts_2395_, 0);
v___x_2399_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2398_, v_name_2397_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_box(0);
return v___x_2400_;
}
else
{
lean_object* v_val_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2410_; 
v_val_2401_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2403_ = v___x_2399_;
v_isShared_2404_ = v_isSharedCheck_2410_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_val_2401_);
lean_dec(v___x_2399_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2410_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
if (lean_obj_tag(v_val_2401_) == 0)
{
lean_object* v_v_2405_; lean_object* v___x_2407_; 
v_v_2405_ = lean_ctor_get(v_val_2401_, 0);
lean_inc_ref(v_v_2405_);
lean_dec_ref_known(v_val_2401_, 1);
if (v_isShared_2404_ == 0)
{
lean_ctor_set(v___x_2403_, 0, v_v_2405_);
v___x_2407_ = v___x_2403_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_v_2405_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
else
{
lean_object* v___x_2409_; 
lean_del_object(v___x_2403_);
lean_dec(v_val_2401_);
v___x_2409_ = lean_box(0);
return v___x_2409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1___boxed(lean_object* v_opts_2411_, lean_object* v_opt_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2411_, v_opt_2412_);
lean_dec_ref(v_opt_2412_);
lean_dec_ref(v_opts_2411_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0(lean_object* v___x_2414_, lean_object* v_x_2415_){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2416_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2414_);
v___x_2417_ = lean_box(0);
v___x_2418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2418_, 0, v_x_2415_);
lean_ctor_set(v___x_2418_, 1, v___x_2416_);
lean_ctor_set(v___x_2418_, 2, v___x_2417_);
return v___x_2418_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2424_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__2));
v___x_2425_ = l_Lean_Array_toPArray_x27___redArg(v___x_2424_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(lean_object* v_a_2426_, lean_object* v_a_2427_){
_start:
{
if (lean_obj_tag(v_a_2426_) == 0)
{
lean_object* v___x_2428_; 
v___x_2428_ = l_List_reverse___redArg(v_a_2427_);
return v___x_2428_;
}
else
{
lean_object* v_head_2429_; lean_object* v_tail_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2443_; 
v_head_2429_ = lean_ctor_get(v_a_2426_, 0);
v_tail_2430_ = lean_ctor_get(v_a_2426_, 1);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_a_2426_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2432_ = v_a_2426_;
v_isShared_2433_ = v_isSharedCheck_2443_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_tail_2430_);
lean_inc(v_head_2429_);
lean_dec(v_a_2426_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2443_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2440_; 
v___x_2434_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__1));
v___x_2435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2434_);
lean_ctor_set(v___x_2435_, 1, v_head_2429_);
v___x_2436_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
v___x_2437_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3, &l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0___closed__3);
v___x_2438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2436_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 1, v_a_2427_);
lean_ctor_set(v___x_2432_, 0, v___x_2438_);
v___x_2440_ = v___x_2432_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2438_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_a_2427_);
v___x_2440_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
v_a_2426_ = v_tail_2430_;
v_a_2427_ = v___x_2440_;
goto _start;
}
}
}
}
}
static double _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2444_; double v___x_2445_; 
v___x_2444_ = lean_unsigned_to_nat(1000000000u);
v___x_2445_ = lean_float_of_nat(v___x_2444_);
return v___x_2445_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11(void){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__10));
v___x_2463_ = l_Lean_MessageData_ofFormat(v___x_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(lean_object* v_setupImports_2464_, lean_object* v_stx_2465_, lean_object* v_origStx_2466_, lean_object* v_toProcessingContext_2467_, lean_object* v___x_2468_, lean_object* v_fileMap_2469_, lean_object* v_parserState_2470_, lean_object* v_a_2471_, lean_object* v___x_2472_, lean_object* v___x_2473_, lean_object* v___x_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_toProcessingContext_2477_; lean_object* v___x_2478_; 
v_toProcessingContext_2477_ = lean_ctor_get(v___y_2475_, 0);
lean_inc_ref(v_toProcessingContext_2477_);
lean_inc(v_stx_2465_);
v___x_2478_ = lean_apply_3(v_setupImports_2464_, v_stx_2465_, v_toProcessingContext_2477_, lean_box(0));
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2691_; 
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2481_ = v___x_2478_;
v_isShared_2482_ = v_isSharedCheck_2691_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2478_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2691_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
if (lean_obj_tag(v_a_2479_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; 
lean_dec_ref(v___x_2474_);
lean_dec(v___x_2472_);
lean_dec_ref(v_parserState_2470_);
lean_dec_ref(v_fileMap_2469_);
lean_dec(v___x_2468_);
lean_dec_ref(v_toProcessingContext_2467_);
lean_dec(v_origStx_2466_);
lean_dec(v_stx_2465_);
v_a_2483_ = lean_ctor_get(v_a_2479_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v_a_2479_, 1);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 0, v_a_2483_);
v___x_2485_ = v___x_2481_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2690_; 
v_a_2487_ = lean_ctor_get(v_a_2479_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_a_2479_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2489_ = v_a_2479_;
v_isShared_2490_ = v_isSharedCheck_2690_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v_a_2479_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2690_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2491_; lean_object* v_mainModuleName_2492_; lean_object* v_package_x3f_2493_; uint8_t v_isModule_2494_; lean_object* v_imports_2495_; lean_object* v_opts_2496_; uint32_t v_trustLevel_2497_; lean_object* v_importArts_2498_; lean_object* v_plugins_2499_; double v___x_2500_; double v___x_2501_; double v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; uint8_t v___x_2505_; lean_object* v___x_2507_; 
v___x_2491_ = lean_io_mono_nanos_now();
v_mainModuleName_2492_ = lean_ctor_get(v_a_2487_, 0);
lean_inc(v_mainModuleName_2492_);
v_package_x3f_2493_ = lean_ctor_get(v_a_2487_, 1);
lean_inc(v_package_x3f_2493_);
v_isModule_2494_ = lean_ctor_get_uint8(v_a_2487_, sizeof(void*)*6 + 4);
v_imports_2495_ = lean_ctor_get(v_a_2487_, 2);
lean_inc_ref(v_imports_2495_);
v_opts_2496_ = lean_ctor_get(v_a_2487_, 3);
lean_inc_ref(v_opts_2496_);
v_trustLevel_2497_ = lean_ctor_get_uint32(v_a_2487_, sizeof(void*)*6);
v_importArts_2498_ = lean_ctor_get(v_a_2487_, 4);
lean_inc(v_importArts_2498_);
v_plugins_2499_ = lean_ctor_get(v_a_2487_, 5);
lean_inc_ref(v_plugins_2499_);
lean_dec(v_a_2487_);
v___x_2500_ = lean_float_of_nat(v___x_2491_);
v___x_2501_ = lean_float_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__0);
v___x_2502_ = lean_float_div(v___x_2500_, v___x_2501_);
v___x_2503_ = l_Lean_Elab_HeaderSyntax_startPos(v_stx_2465_);
v___x_2504_ = l_Lean_MessageLog_empty;
v___x_2505_ = 1;
lean_inc(v_stx_2465_);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v_stx_2465_);
v___x_2507_ = v___x_2489_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_stx_2465_);
v___x_2507_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2508_, 0, v_origStx_2466_);
lean_inc_ref(v___x_2507_);
lean_inc_ref(v_opts_2496_);
v___x_2509_ = l_Lean_Elab_processHeaderCore(v___x_2503_, v_imports_2495_, v_isModule_2494_, v_opts_2496_, v___x_2504_, v_toProcessingContext_2467_, v_trustLevel_2497_, v_plugins_2499_, v___x_2505_, v_mainModuleName_2492_, v_package_x3f_2493_, v_importArts_2498_, v___x_2507_, v___x_2508_);
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2680_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2512_ = v___x_2509_;
v_isShared_2513_ = v_isSharedCheck_2680_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2509_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2680_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v_fst_2514_; lean_object* v_snd_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2679_; 
v_fst_2514_ = lean_ctor_get(v_a_2510_, 0);
v_snd_2515_ = lean_ctor_get(v_a_2510_, 1);
v_isSharedCheck_2679_ = !lean_is_exclusive(v_a_2510_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2517_ = v_a_2510_;
v_isShared_2518_ = v_isSharedCheck_2679_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_snd_2515_);
lean_inc(v_fst_2514_);
lean_dec(v_a_2510_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2679_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2519_; double v___x_2520_; double v___x_2521_; lean_object* v___x_2522_; uint8_t v___x_2523_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v_traceState_2539_; 
v___x_2519_ = lean_io_mono_nanos_now();
v___x_2520_ = lean_float_of_nat(v___x_2519_);
v___x_2521_ = lean_float_div(v___x_2520_, v___x_2501_);
lean_inc(v_snd_2515_);
v___x_2522_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2515_);
v___x_2523_ = l_Lean_MessageLog_hasErrors(v_snd_2515_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
lean_del_object(v___x_2481_);
lean_dec_ref(v___x_2474_);
v___x_2648_ = l_Lean_trace_profiler_output;
v___x_2649_ = l_Lean_Option_get_x3f___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__1(v_opts_2496_, v___x_2648_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v___x_2650_; uint8_t v___x_2651_; 
v___x_2650_ = l_Lean_trace_profiler_serve;
v___x_2651_ = l_Lean_Option_get___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__2(v_opts_2496_, v___x_2650_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Lean_instInhabitedTraceState_default;
v_traceState_2539_ = v___x_2652_;
goto v___jp_2538_;
}
else
{
goto v___jp_2632_;
}
}
else
{
lean_dec_ref_known(v___x_2649_, 1);
goto v___jp_2632_;
}
}
else
{
lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; uint64_t v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; size_t v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
lean_del_object(v___x_2517_);
lean_dec(v_snd_2515_);
lean_dec(v_fst_2514_);
lean_del_object(v___x_2512_);
lean_dec_ref(v___x_2507_);
lean_dec_ref(v_opts_2496_);
lean_dec(v___x_2472_);
lean_dec_ref(v_parserState_2470_);
lean_dec_ref(v_fileMap_2469_);
lean_dec(v_stx_2465_);
v___x_2653_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2654_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2655_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2468_, 2);
v___x_2656_ = l_Lean_Name_num___override(v___x_2655_, v___x_2468_);
v___x_2657_ = l_Lean_Name_str___override(v___x_2656_, v___x_2653_);
v___x_2658_ = l_Lean_Name_str___override(v___x_2657_, v___x_2654_);
v___x_2659_ = l_Lean_Name_str___override(v___x_2658_, v___x_2653_);
v___x_2660_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2661_ = l_Lean_Name_str___override(v___x_2659_, v___x_2660_);
v___x_2662_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_2663_ = l_Lean_Name_str___override(v___x_2661_, v___x_2662_);
v___x_2664_ = l_Lean_Name_toString(v___x_2663_, v___x_2505_);
v___x_2665_ = lean_box(0);
v___x_2666_ = 0ULL;
v___x_2667_ = lean_unsigned_to_nat(32u);
v___x_2668_ = lean_mk_empty_array_with_capacity(v___x_2667_);
v___x_2669_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_2670_ = ((size_t)5ULL);
v___x_2671_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2671_, 0, v___x_2669_);
lean_ctor_set(v___x_2671_, 1, v___x_2668_);
lean_ctor_set(v___x_2671_, 2, v___x_2468_);
lean_ctor_set(v___x_2671_, 3, v___x_2468_);
lean_ctor_set_usize(v___x_2671_, 4, v___x_2670_);
v___x_2672_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
lean_ctor_set_uint64(v___x_2672_, sizeof(void*)*1, v___x_2666_);
v___x_2673_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2673_, 0, v___x_2664_);
lean_ctor_set(v___x_2673_, 1, v___x_2522_);
lean_ctor_set(v___x_2673_, 2, v___x_2665_);
lean_ctor_set(v___x_2673_, 3, v___x_2672_);
lean_ctor_set_uint8(v___x_2673_, sizeof(void*)*4, v___x_2523_);
v___x_2674_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_2474_);
v___x_2675_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2673_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
lean_ctor_set(v___x_2675_, 2, v___x_2665_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 0, v___x_2675_);
v___x_2677_ = v___x_2481_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
v___jp_2524_:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2536_; 
v___x_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2531_, 0, v___y_2530_);
v___x_2532_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2532_, 0, v___y_2529_);
lean_ctor_set(v___x_2532_, 1, v___x_2522_);
lean_ctor_set(v___x_2532_, 2, v___x_2531_);
lean_ctor_set(v___x_2532_, 3, v___y_2526_);
lean_ctor_set_uint8(v___x_2532_, sizeof(void*)*4, v___x_2523_);
v___x_2533_ = l_Lean_Language_SnapshotTask_finished___redArg(v___y_2527_, v___x_2532_);
v___x_2534_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2534_, 0, v___y_2528_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
lean_ctor_set(v___x_2534_, 2, v___y_2525_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 0, v___x_2534_);
v___x_2536_ = v___x_2512_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v___x_2534_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
v___jp_2538_:
{
lean_object* v___x_2540_; 
v___x_2540_ = l_Lean_Language_Lean_reparseOptions(v_opts_2496_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v___x_2542_; lean_object* v_env_2543_; lean_object* v_messages_2544_; lean_object* v_scopes_2545_; lean_object* v_usedQuotCtxts_2546_; lean_object* v_nextMacroScope_2547_; lean_object* v_maxRecDepth_2548_; lean_object* v_ngen_2549_; lean_object* v_auxDeclNGen_2550_; lean_object* v_snapshotTasks_2551_; lean_object* v_prevLinterStates_2552_; lean_object* v_codeQualityEntryTasks_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2621_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2540_, 1);
lean_inc(v_fst_2514_);
v___x_2542_ = l_Lean_Elab_Command_mkState(v_fst_2514_, v_snd_2515_, v_a_2541_);
v_env_2543_ = lean_ctor_get(v___x_2542_, 0);
v_messages_2544_ = lean_ctor_get(v___x_2542_, 1);
v_scopes_2545_ = lean_ctor_get(v___x_2542_, 2);
v_usedQuotCtxts_2546_ = lean_ctor_get(v___x_2542_, 3);
v_nextMacroScope_2547_ = lean_ctor_get(v___x_2542_, 4);
v_maxRecDepth_2548_ = lean_ctor_get(v___x_2542_, 5);
v_ngen_2549_ = lean_ctor_get(v___x_2542_, 6);
v_auxDeclNGen_2550_ = lean_ctor_get(v___x_2542_, 7);
v_snapshotTasks_2551_ = lean_ctor_get(v___x_2542_, 10);
v_prevLinterStates_2552_ = lean_ctor_get(v___x_2542_, 11);
v_codeQualityEntryTasks_2553_ = lean_ctor_get(v___x_2542_, 12);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2621_ == 0)
{
lean_object* v_unused_2622_; lean_object* v_unused_2623_; 
v_unused_2622_ = lean_ctor_get(v___x_2542_, 9);
lean_dec(v_unused_2622_);
v_unused_2623_ = lean_ctor_get(v___x_2542_, 8);
lean_dec(v_unused_2623_);
v___x_2555_ = v___x_2542_;
v_isShared_2556_ = v_isSharedCheck_2621_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2553_);
lean_inc(v_prevLinterStates_2552_);
lean_inc(v_snapshotTasks_2551_);
lean_inc(v_auxDeclNGen_2550_);
lean_inc(v_ngen_2549_);
lean_inc(v_maxRecDepth_2548_);
lean_inc(v_nextMacroScope_2547_);
lean_inc(v_usedQuotCtxts_2546_);
lean_inc(v_scopes_2545_);
lean_inc(v_messages_2544_);
lean_inc(v_env_2543_);
lean_dec(v___x_2542_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2621_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2569_; 
v___x_2557_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___lam__5___closed__3);
v___x_2558_ = lean_box(0);
lean_inc_n(v___x_2468_, 4);
v___x_2559_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2468_);
lean_ctor_set(v___x_2559_, 1, v___x_2468_);
lean_ctor_set(v___x_2559_, 2, v___x_2468_);
lean_ctor_set(v___x_2559_, 3, v___x_2468_);
lean_ctor_set(v___x_2559_, 4, v___x_2557_);
lean_ctor_set(v___x_2559_, 5, v___x_2557_);
lean_ctor_set(v___x_2559_, 6, v___x_2557_);
lean_ctor_set(v___x_2559_, 7, v___x_2557_);
lean_ctor_set(v___x_2559_, 8, v___x_2557_);
lean_ctor_set(v___x_2559_, 9, v___x_2557_);
lean_ctor_set(v___x_2559_, 10, v___x_2557_);
v___x_2560_ = l_Lean_Options_empty;
v___x_2561_ = lean_box(0);
v___x_2562_ = lean_box(0);
v___x_2563_ = lean_unsigned_to_nat(1u);
v___x_2564_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__3));
v___x_2565_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2565_, 0, v_fst_2514_);
lean_ctor_set(v___x_2565_, 1, v___x_2558_);
lean_ctor_set(v___x_2565_, 2, v_fileMap_2469_);
lean_ctor_set(v___x_2565_, 3, v___x_2559_);
lean_ctor_set(v___x_2565_, 4, v___x_2560_);
lean_ctor_set(v___x_2565_, 5, v___x_2561_);
lean_ctor_set(v___x_2565_, 6, v___x_2562_);
lean_ctor_set(v___x_2565_, 7, v___x_2564_);
v___x_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
v___x_2567_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__5));
lean_inc(v_stx_2465_);
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 1, v_stx_2465_);
lean_ctor_set(v___x_2517_, 0, v___x_2567_);
v___x_2569_ = v___x_2517_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v___x_2567_);
lean_ctor_set(v_reuseFailAlloc_2620_, 1, v_stx_2465_);
v___x_2569_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2584_; 
v___x_2570_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
v___x_2571_ = lean_unsigned_to_nat(2u);
v___x_2572_ = l_Lean_Syntax_getArg(v_stx_2465_, v___x_2571_);
lean_dec(v_stx_2465_);
v___x_2573_ = l_Lean_Syntax_getArgs(v___x_2572_);
lean_dec(v___x_2572_);
v___x_2574_ = lean_array_to_list(v___x_2573_);
v___x_2575_ = l_List_mapTR_loop___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader_spec__0(v___x_2574_, v___x_2562_);
v___x_2576_ = l_Lean_List_toPArray_x27___redArg(v___x_2575_);
v___x_2577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2570_);
lean_ctor_set(v___x_2577_, 1, v___x_2576_);
v___x_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2566_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = lean_mk_empty_array_with_capacity(v___x_2563_);
v___x_2580_ = lean_array_push(v___x_2579_, v___x_2578_);
v___x_2581_ = l_Lean_Array_toPArray_x27___redArg(v___x_2580_);
lean_dec_ref(v___x_2580_);
lean_inc_ref(v___x_2581_);
v___x_2582_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2582_, 0, v___x_2557_);
lean_ctor_set(v___x_2582_, 1, v___x_2557_);
lean_ctor_set(v___x_2582_, 2, v___x_2581_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*3, v___x_2505_);
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 9, v_traceState_2539_);
lean_ctor_set(v___x_2555_, 8, v___x_2582_);
v___x_2584_ = v___x_2555_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_env_2543_);
lean_ctor_set(v_reuseFailAlloc_2619_, 1, v_messages_2544_);
lean_ctor_set(v_reuseFailAlloc_2619_, 2, v_scopes_2545_);
lean_ctor_set(v_reuseFailAlloc_2619_, 3, v_usedQuotCtxts_2546_);
lean_ctor_set(v_reuseFailAlloc_2619_, 4, v_nextMacroScope_2547_);
lean_ctor_set(v_reuseFailAlloc_2619_, 5, v_maxRecDepth_2548_);
lean_ctor_set(v_reuseFailAlloc_2619_, 6, v_ngen_2549_);
lean_ctor_set(v_reuseFailAlloc_2619_, 7, v_auxDeclNGen_2550_);
lean_ctor_set(v_reuseFailAlloc_2619_, 8, v___x_2582_);
lean_ctor_set(v_reuseFailAlloc_2619_, 9, v_traceState_2539_);
lean_ctor_set(v_reuseFailAlloc_2619_, 10, v_snapshotTasks_2551_);
lean_ctor_set(v_reuseFailAlloc_2619_, 11, v_prevLinterStates_2552_);
lean_ctor_set(v_reuseFailAlloc_2619_, 12, v_codeQualityEntryTasks_2553_);
v___x_2584_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; size_t v___x_2595_; lean_object* v___x_2596_; lean_object* v_size_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; uint64_t v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2585_ = lean_io_promise_new();
v___x_2586_ = l_IO_CancelToken_new();
lean_inc_ref(v___x_2586_);
lean_inc(v___x_2585_);
lean_inc_ref(v___x_2584_);
v___x_2587_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2558_, v_parserState_2470_, v___x_2584_, v___x_2585_, v___x_2505_, v___x_2586_, v___x_2562_, v_a_2471_);
v___x_2588_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__2));
v___x_2589_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__4));
v___x_2590_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__6));
lean_inc_n(v___x_2468_, 3);
v___x_2591_ = l_Lean_Name_num___override(v___x_2590_, v___x_2468_);
v___x_2592_ = lean_unsigned_to_nat(32u);
v___x_2593_ = lean_mk_empty_array_with_capacity(v___x_2592_);
v___x_2594_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__14);
v___x_2595_ = ((size_t)5ULL);
v___x_2596_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2593_);
lean_ctor_set(v___x_2596_, 2, v___x_2468_);
lean_ctor_set(v___x_2596_, 3, v___x_2468_);
lean_ctor_set_usize(v___x_2596_, 4, v___x_2595_);
v_size_2597_ = lean_ctor_get(v___x_2581_, 2);
v___x_2598_ = l_Lean_Name_str___override(v___x_2591_, v___x_2588_);
v___x_2599_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2472_);
v___x_2600_ = l_Lean_Name_str___override(v___x_2598_, v___x_2589_);
v___x_2601_ = l_Lean_Name_str___override(v___x_2600_, v___x_2588_);
v___x_2602_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab___closed__0));
v___x_2603_ = l_Lean_Name_str___override(v___x_2601_, v___x_2602_);
v___x_2604_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__6));
v___x_2605_ = l_Lean_Name_str___override(v___x_2603_, v___x_2604_);
v___x_2606_ = l_Lean_Name_toString(v___x_2605_, v___x_2505_);
v___x_2607_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2608_ = 0ULL;
v___x_2609_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2609_, 0, v___x_2596_);
lean_ctor_set_uint64(v___x_2609_, sizeof(void*)*1, v___x_2608_);
v___x_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2586_);
v___x_2611_ = l_IO_Promise_result_x21___redArg(v___x_2585_);
lean_dec(v___x_2585_);
v___x_2612_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2472_);
lean_ctor_set(v___x_2612_, 1, v___x_2599_);
lean_ctor_set(v___x_2612_, 2, v___x_2610_);
lean_ctor_set(v___x_2612_, 3, v___x_2611_);
v___x_2613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2584_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_inc_ref(v___x_2609_);
lean_inc_ref(v___x_2606_);
v___x_2615_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2615_, 0, v___x_2606_);
lean_ctor_set(v___x_2615_, 1, v___x_2607_);
lean_ctor_set(v___x_2615_, 2, v___x_2558_);
lean_ctor_set(v___x_2615_, 3, v___x_2609_);
lean_ctor_set_uint8(v___x_2615_, sizeof(void*)*4, v___x_2523_);
v___x_2616_ = lean_nat_dec_lt(v___x_2468_, v_size_2597_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; 
lean_dec_ref(v___x_2581_);
lean_dec(v___x_2468_);
v___x_2617_ = l_outOfBounds___redArg(v___x_2473_);
v___y_2525_ = v___x_2614_;
v___y_2526_ = v___x_2609_;
v___y_2527_ = v___x_2507_;
v___y_2528_ = v___x_2615_;
v___y_2529_ = v___x_2606_;
v___y_2530_ = v___x_2617_;
goto v___jp_2524_;
}
else
{
lean_object* v___x_2618_; 
v___x_2618_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2473_, v___x_2581_, v___x_2468_);
lean_dec(v___x_2468_);
lean_dec_ref(v___x_2581_);
v___y_2525_ = v___x_2614_;
v___y_2526_ = v___x_2609_;
v___y_2527_ = v___x_2507_;
v___y_2528_ = v___x_2615_;
v___y_2529_ = v___x_2606_;
v___y_2530_ = v___x_2618_;
goto v___jp_2524_;
}
}
}
}
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
lean_dec_ref(v_traceState_2539_);
lean_dec_ref(v___x_2522_);
lean_del_object(v___x_2517_);
lean_dec(v_snd_2515_);
lean_dec(v_fst_2514_);
lean_del_object(v___x_2512_);
lean_dec_ref(v___x_2507_);
lean_dec(v___x_2472_);
lean_dec_ref(v_parserState_2470_);
lean_dec_ref(v_fileMap_2469_);
lean_dec(v___x_2468_);
lean_dec(v_stx_2465_);
v_a_2624_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2540_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2540_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
v___jp_2632_:
{
uint64_t v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2633_ = 0ULL;
v___x_2634_ = lean_box(0);
v___x_2635_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__8));
v___x_2636_ = lean_box(0);
v___x_2637_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00__private_Lean_Language_Lean_0__Lean_Language_Lean_process_doElab_spec__1_spec__1_spec__4_spec__10___closed__0));
v___x_2638_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2638_, 0, v___x_2635_);
lean_ctor_set(v___x_2638_, 1, v___x_2636_);
lean_ctor_set(v___x_2638_, 2, v___x_2637_);
lean_ctor_set_float(v___x_2638_, sizeof(void*)*3, v___x_2502_);
lean_ctor_set_float(v___x_2638_, sizeof(void*)*3 + 8, v___x_2521_);
lean_ctor_set_uint8(v___x_2638_, sizeof(void*)*3 + 16, v___x_2505_);
v___x_2639_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___closed__11);
v___x_2640_ = lean_mk_empty_array_with_capacity(v___x_2468_);
v___x_2641_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2638_);
lean_ctor_set(v___x_2641_, 1, v___x_2639_);
lean_ctor_set(v___x_2641_, 2, v___x_2640_);
v___x_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2634_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = lean_unsigned_to_nat(1u);
v___x_2644_ = lean_mk_empty_array_with_capacity(v___x_2643_);
v___x_2645_ = lean_array_push(v___x_2644_, v___x_2642_);
v___x_2646_ = l_Lean_Array_toPArray_x27___redArg(v___x_2645_);
lean_dec_ref(v___x_2645_);
v___x_2647_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2647_, 0, v___x_2646_);
lean_ctor_set_uint64(v___x_2647_, sizeof(void*)*1, v___x_2633_);
v_traceState_2539_ = v___x_2647_;
goto v___jp_2538_;
}
}
}
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
lean_dec_ref(v___x_2507_);
lean_dec_ref(v_opts_2496_);
lean_del_object(v___x_2481_);
lean_dec_ref(v___x_2474_);
lean_dec(v___x_2472_);
lean_dec_ref(v_parserState_2470_);
lean_dec_ref(v_fileMap_2469_);
lean_dec(v___x_2468_);
lean_dec(v_stx_2465_);
v_a_2681_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2509_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2509_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
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
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
lean_dec_ref(v___x_2474_);
lean_dec(v___x_2472_);
lean_dec_ref(v_parserState_2470_);
lean_dec_ref(v_fileMap_2469_);
lean_dec(v___x_2468_);
lean_dec_ref(v_toProcessingContext_2467_);
lean_dec(v_origStx_2466_);
lean_dec(v_stx_2465_);
v_a_2692_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2478_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2478_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed(lean_object* v_setupImports_2700_, lean_object* v_stx_2701_, lean_object* v_origStx_2702_, lean_object* v_toProcessingContext_2703_, lean_object* v___x_2704_, lean_object* v_fileMap_2705_, lean_object* v_parserState_2706_, lean_object* v_a_2707_, lean_object* v___x_2708_, lean_object* v___x_2709_, lean_object* v___x_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1(v_setupImports_2700_, v_stx_2701_, v_origStx_2702_, v_toProcessingContext_2703_, v___x_2704_, v_fileMap_2705_, v_parserState_2706_, v_a_2707_, v___x_2708_, v___x_2709_, v___x_2710_, v___y_2711_);
lean_dec_ref(v___y_2711_);
lean_dec_ref(v___x_2709_);
lean_dec_ref(v_a_2707_);
return v_res_2713_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0(void){
_start:
{
lean_object* v___x_2714_; lean_object* v___f_2715_; 
v___x_2714_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_2715_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__0), 2, 1);
lean_closure_set(v___f_2715_, 0, v___x_2714_);
return v___f_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(lean_object* v_setupImports_2716_, lean_object* v_stx_2717_, lean_object* v_origStx_2718_, lean_object* v_parserState_2719_, lean_object* v_a_2720_){
_start:
{
lean_object* v_toProcessingContext_2722_; lean_object* v_fileMap_2723_; lean_object* v_endPos_2724_; lean_object* v___x_2725_; lean_object* v___f_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___f_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
v_toProcessingContext_2722_ = lean_ctor_get(v_a_2720_, 0);
v_fileMap_2723_ = lean_ctor_get(v_toProcessingContext_2722_, 2);
v_endPos_2724_ = lean_ctor_get(v_toProcessingContext_2722_, 3);
v___x_2725_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___f_2726_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___closed__0);
v___x_2727_ = l_Lean_Elab_instInhabitedInfoTree_default;
v___x_2728_ = lean_box(0);
v___x_2729_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_a_2720_, 2);
lean_inc_ref(v_fileMap_2723_);
lean_inc_ref(v_toProcessingContext_2722_);
v___f_2730_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___lam__1___boxed), 13, 11);
lean_closure_set(v___f_2730_, 0, v_setupImports_2716_);
lean_closure_set(v___f_2730_, 1, v_stx_2717_);
lean_closure_set(v___f_2730_, 2, v_origStx_2718_);
lean_closure_set(v___f_2730_, 3, v_toProcessingContext_2722_);
lean_closure_set(v___f_2730_, 4, v___x_2729_);
lean_closure_set(v___f_2730_, 5, v_fileMap_2723_);
lean_closure_set(v___f_2730_, 6, v_parserState_2719_);
lean_closure_set(v___f_2730_, 7, v_a_2720_);
lean_closure_set(v___f_2730_, 8, v___x_2728_);
lean_closure_set(v___f_2730_, 9, v___x_2727_);
lean_closure_set(v___f_2730_, 10, v___x_2725_);
lean_inc(v_endPos_2724_);
v___x_2731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2729_);
lean_ctor_set(v___x_2731_, 1, v_endPos_2724_);
v___x_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2731_);
v___x_2733_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___boxed), 5, 4);
lean_closure_set(v___x_2733_, 0, lean_box(0));
lean_closure_set(v___x_2733_, 1, v___f_2726_);
lean_closure_set(v___x_2733_, 2, v___f_2730_);
lean_closure_set(v___x_2733_, 3, v_a_2720_);
v___x_2734_ = l_Lean_Language_SnapshotTask_ofIO___redArg(v___x_2728_, v___x_2728_, v___x_2732_, v___x_2733_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader___boxed(lean_object* v_setupImports_2735_, lean_object* v_stx_2736_, lean_object* v_origStx_2737_, lean_object* v_parserState_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_2735_, v_stx_2736_, v_origStx_2737_, v_parserState_2738_, v_a_2739_);
lean_dec_ref(v_a_2739_);
return v_res_2741_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = lean_box(0);
v___x_2743_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_2742_);
return v___x_2743_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3(void){
_start:
{
uint8_t v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2748_ = 1;
v___x_2749_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2));
v___x_2750_ = l_Lean_Name_toString(v___x_2749_, v___x_2748_);
return v___x_2750_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4(void){
_start:
{
uint8_t v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2751_ = 0;
v___x_2752_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2753_ = lean_box(0);
v___x_2754_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2755_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2756_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2756_, 0, v___x_2755_);
lean_ctor_set(v___x_2756_, 1, v___x_2754_);
lean_ctor_set(v___x_2756_, 2, v___x_2753_);
lean_ctor_set(v___x_2756_, 3, v___x_2752_);
lean_ctor_set_uint8(v___x_2756_, sizeof(void*)*4, v___x_2751_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(lean_object* v_newParserState_2757_, lean_object* v_cmdState_2758_, lean_object* v_a_2759_, lean_object* v_toSnapshot_2760_, lean_object* v_newStx_2761_, lean_object* v_oldCmd_2762_){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v_diagnostics_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2792_; 
v___x_2764_ = lean_io_promise_new();
v___x_2765_ = l_IO_CancelToken_new();
v___x_2766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2766_, 0, v_oldCmd_2762_);
v___x_2767_ = 1;
v___x_2768_ = lean_box(0);
lean_inc_ref(v___x_2765_);
lean_inc(v___x_2764_);
lean_inc_ref(v_cmdState_2758_);
v___x_2769_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd(v___x_2766_, v_newParserState_2757_, v_cmdState_2758_, v___x_2764_, v___x_2767_, v___x_2765_, v___x_2768_, v_a_2759_);
v_diagnostics_2770_ = lean_ctor_get(v_toSnapshot_2760_, 1);
v_isSharedCheck_2792_ = !lean_is_exclusive(v_toSnapshot_2760_);
if (v_isSharedCheck_2792_ == 0)
{
lean_object* v_unused_2793_; lean_object* v_unused_2794_; lean_object* v_unused_2795_; 
v_unused_2793_ = lean_ctor_get(v_toSnapshot_2760_, 3);
lean_dec(v_unused_2793_);
v_unused_2794_ = lean_ctor_get(v_toSnapshot_2760_, 2);
lean_dec(v_unused_2794_);
v_unused_2795_ = lean_ctor_get(v_toSnapshot_2760_, 0);
lean_dec(v_unused_2795_);
v___x_2772_ = v_toSnapshot_2760_;
v_isShared_2773_ = v_isSharedCheck_2792_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_diagnostics_2770_);
lean_dec(v_toSnapshot_2760_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2792_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2787_; 
v___x_2774_ = lean_box(0);
v___x_2775_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__0);
v___x_2776_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2777_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2765_);
v___x_2779_ = l_IO_Promise_result_x21___redArg(v___x_2764_);
lean_dec(v___x_2764_);
v___x_2780_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2774_);
lean_ctor_set(v___x_2780_, 1, v___x_2775_);
lean_ctor_set(v___x_2780_, 2, v___x_2778_);
lean_ctor_set(v___x_2780_, 3, v___x_2779_);
v___x_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2781_, 0, v_cmdState_2758_);
lean_ctor_set(v___x_2781_, 1, v___x_2780_);
v___x_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
v___x_2783_ = 0;
v___x_2784_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__4);
v___x_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2785_, 0, v_newStx_2761_);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 3, v___x_2777_);
lean_ctor_set(v___x_2772_, 2, v___x_2774_);
lean_ctor_set(v___x_2772_, 0, v___x_2776_);
v___x_2787_ = v___x_2772_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2776_);
lean_ctor_set(v_reuseFailAlloc_2791_, 1, v_diagnostics_2770_);
lean_ctor_set(v_reuseFailAlloc_2791_, 2, v___x_2774_);
lean_ctor_set(v_reuseFailAlloc_2791_, 3, v___x_2777_);
v___x_2787_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
lean_ctor_set_uint8(v___x_2787_, sizeof(void*)*4, v___x_2783_);
v___x_2788_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2785_, v___x_2787_);
v___x_2789_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2784_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
lean_ctor_set(v___x_2789_, 2, v___x_2782_);
v___x_2790_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2774_, v___x_2789_);
return v___x_2790_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed(lean_object* v_newParserState_2796_, lean_object* v_cmdState_2797_, lean_object* v_a_2798_, lean_object* v_toSnapshot_2799_, lean_object* v_newStx_2800_, lean_object* v_oldCmd_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0(v_newParserState_2796_, v_cmdState_2797_, v_a_2798_, v_toSnapshot_2799_, v_newStx_2800_, v_oldCmd_2801_);
lean_dec_ref(v_a_2798_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(lean_object* v_newParserState_2804_, lean_object* v_a_2805_, lean_object* v_newStx_2806_, lean_object* v___x_2807_, lean_object* v_oldProcessed_2808_){
_start:
{
lean_object* v_result_x3f_2810_; 
v_result_x3f_2810_ = lean_ctor_get(v_oldProcessed_2808_, 2);
if (lean_obj_tag(v_result_x3f_2810_) == 1)
{
lean_object* v_val_2811_; lean_object* v_firstCmdSnap_2812_; lean_object* v_toSnapshot_2813_; lean_object* v_cmdState_2814_; lean_object* v_stx_x3f_2815_; lean_object* v___f_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; lean_object* v___x_2819_; 
v_val_2811_ = lean_ctor_get(v_result_x3f_2810_, 0);
lean_inc(v_val_2811_);
v_firstCmdSnap_2812_ = lean_ctor_get(v_val_2811_, 1);
lean_inc_ref(v_firstCmdSnap_2812_);
v_toSnapshot_2813_ = lean_ctor_get(v_oldProcessed_2808_, 0);
lean_inc_ref(v_toSnapshot_2813_);
lean_dec_ref(v_oldProcessed_2808_);
v_cmdState_2814_ = lean_ctor_get(v_val_2811_, 0);
lean_inc_ref(v_cmdState_2814_);
lean_dec(v_val_2811_);
v_stx_x3f_2815_ = lean_ctor_get(v_firstCmdSnap_2812_, 0);
lean_inc(v_stx_x3f_2815_);
lean_inc_ref(v_a_2805_);
v___f_2816_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2816_, 0, v_newParserState_2804_);
lean_closure_set(v___f_2816_, 1, v_cmdState_2814_);
lean_closure_set(v___f_2816_, 2, v_a_2805_);
lean_closure_set(v___f_2816_, 3, v_toSnapshot_2813_);
lean_closure_set(v___f_2816_, 4, v_newStx_2806_);
v___x_2817_ = lean_box(0);
v___x_2818_ = 1;
v___x_2819_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_firstCmdSnap_2812_, v___f_2816_, v_stx_x3f_2815_, v___x_2807_, v___x_2817_, v___x_2818_);
return v___x_2819_;
}
else
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
lean_dec(v___x_2807_);
lean_dec_ref(v_newParserState_2804_);
v___x_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2820_, 0, v_newStx_2806_);
v___x_2821_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2820_, v_oldProcessed_2808_);
return v___x_2821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed(lean_object* v_newParserState_2822_, lean_object* v_a_2823_, lean_object* v_newStx_2824_, lean_object* v___x_2825_, lean_object* v_oldProcessed_2826_, lean_object* v___y_2827_){
_start:
{
lean_object* v_res_2828_; 
v_res_2828_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1(v_newParserState_2822_, v_a_2823_, v_newStx_2824_, v___x_2825_, v_oldProcessed_2826_);
lean_dec_ref(v_a_2823_);
return v_res_2828_;
}
}
static lean_object* _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0(void){
_start:
{
uint8_t v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2829_ = 0;
v___x_2830_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_2831_ = lean_box(0);
v___x_2832_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2833_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2834_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2834_, 0, v___x_2833_);
lean_ctor_set(v___x_2834_, 1, v___x_2832_);
lean_ctor_set(v___x_2834_, 2, v___x_2831_);
lean_ctor_set(v___x_2834_, 3, v___x_2830_);
lean_ctor_set_uint8(v___x_2834_, sizeof(void*)*4, v___x_2829_);
return v___x_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(lean_object* v_toProcessingContext_2835_, lean_object* v_a_2836_, lean_object* v_old_2837_, lean_object* v_newStx_2838_, lean_object* v_newParserState_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v_result_x3f_2842_; 
v_result_x3f_2842_ = lean_ctor_get(v_old_2837_, 4);
lean_inc(v_result_x3f_2842_);
if (lean_obj_tag(v_result_x3f_2842_) == 1)
{
lean_object* v_val_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2897_; 
v_val_2843_ = lean_ctor_get(v_result_x3f_2842_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v_result_x3f_2842_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2845_ = v_result_x3f_2842_;
v_isShared_2846_ = v_isSharedCheck_2897_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_val_2843_);
lean_dec(v_result_x3f_2842_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2897_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v_processedSnap_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2895_; 
v_processedSnap_2847_ = lean_ctor_get(v_val_2843_, 1);
v_isSharedCheck_2895_ = !lean_is_exclusive(v_val_2843_);
if (v_isSharedCheck_2895_ == 0)
{
lean_object* v_unused_2896_; 
v_unused_2896_ = lean_ctor_get(v_val_2843_, 0);
lean_dec(v_unused_2896_);
v___x_2849_ = v_val_2843_;
v_isShared_2850_ = v_isSharedCheck_2895_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_processedSnap_2847_);
lean_dec(v_val_2843_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2895_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v_toSnapshot_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2890_; 
v_toSnapshot_2851_ = lean_ctor_get(v_old_2837_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v_old_2837_);
if (v_isSharedCheck_2890_ == 0)
{
lean_object* v_unused_2891_; lean_object* v_unused_2892_; lean_object* v_unused_2893_; lean_object* v_unused_2894_; 
v_unused_2891_ = lean_ctor_get(v_old_2837_, 4);
lean_dec(v_unused_2891_);
v_unused_2892_ = lean_ctor_get(v_old_2837_, 3);
lean_dec(v_unused_2892_);
v_unused_2893_ = lean_ctor_get(v_old_2837_, 2);
lean_dec(v_unused_2893_);
v_unused_2894_ = lean_ctor_get(v_old_2837_, 1);
lean_dec(v_unused_2894_);
v___x_2853_ = v_old_2837_;
v_isShared_2854_ = v_isSharedCheck_2890_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_toSnapshot_2851_);
lean_dec(v_old_2837_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2890_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v_pos_2855_; lean_object* v_endPos_2856_; lean_object* v_stx_x3f_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___f_2860_; lean_object* v___x_2861_; uint8_t v___x_2862_; lean_object* v___x_2863_; lean_object* v_diagnostics_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2886_; 
v_pos_2855_ = lean_ctor_get(v_newParserState_2839_, 0);
v_endPos_2856_ = lean_ctor_get(v_toProcessingContext_2835_, 3);
v_stx_x3f_2857_ = lean_ctor_get(v_processedSnap_2847_, 0);
lean_inc(v_stx_x3f_2857_);
lean_inc(v_endPos_2856_);
lean_inc(v_pos_2855_);
v___x_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2858_, 0, v_pos_2855_);
lean_ctor_set(v___x_2858_, 1, v_endPos_2856_);
v___x_2859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
lean_inc_ref(v___x_2859_);
lean_inc(v_newStx_2838_);
lean_inc_ref(v_a_2836_);
lean_inc_ref(v_newParserState_2839_);
v___f_2860_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__1___boxed), 6, 4);
lean_closure_set(v___f_2860_, 0, v_newParserState_2839_);
lean_closure_set(v___f_2860_, 1, v_a_2836_);
lean_closure_set(v___f_2860_, 2, v_newStx_2838_);
lean_closure_set(v___f_2860_, 3, v___x_2859_);
v___x_2861_ = lean_box(0);
v___x_2862_ = 1;
v___x_2863_ = l_Lean_Language_SnapshotTask_bindIO___redArg(v_processedSnap_2847_, v___f_2860_, v_stx_x3f_2857_, v___x_2859_, v___x_2861_, v___x_2862_);
v_diagnostics_2864_ = lean_ctor_get(v_toSnapshot_2851_, 1);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_toSnapshot_2851_);
if (v_isSharedCheck_2886_ == 0)
{
lean_object* v_unused_2887_; lean_object* v_unused_2888_; lean_object* v_unused_2889_; 
v_unused_2887_ = lean_ctor_get(v_toSnapshot_2851_, 3);
lean_dec(v_unused_2887_);
v_unused_2888_ = lean_ctor_get(v_toSnapshot_2851_, 2);
lean_dec(v_unused_2888_);
v_unused_2889_ = lean_ctor_get(v_toSnapshot_2851_, 0);
lean_dec(v_unused_2889_);
v___x_2866_ = v_toSnapshot_2851_;
v_isShared_2867_ = v_isSharedCheck_2886_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_diagnostics_2864_);
lean_dec(v_toSnapshot_2851_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2886_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2871_; 
v___x_2868_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2869_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 1, v___x_2863_);
lean_ctor_set(v___x_2849_, 0, v_newParserState_2839_);
v___x_2871_ = v___x_2849_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_newParserState_2839_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v___x_2863_);
v___x_2871_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
lean_object* v___x_2873_; 
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v___x_2871_);
v___x_2873_ = v___x_2845_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2871_);
v___x_2873_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
uint8_t v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2878_; 
v___x_2874_ = 0;
v___x_2875_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___closed__0);
lean_inc(v_newStx_2838_);
v___x_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2876_, 0, v_newStx_2838_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 3, v___x_2869_);
lean_ctor_set(v___x_2866_, 2, v___x_2861_);
lean_ctor_set(v___x_2866_, 0, v___x_2868_);
v___x_2878_ = v___x_2866_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v___x_2868_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v_diagnostics_2864_);
lean_ctor_set(v_reuseFailAlloc_2883_, 2, v___x_2861_);
lean_ctor_set(v_reuseFailAlloc_2883_, 3, v___x_2869_);
v___x_2878_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
lean_object* v___x_2879_; lean_object* v___x_2881_; 
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*4, v___x_2874_);
v___x_2879_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2876_, v___x_2878_);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 4, v___x_2873_);
lean_ctor_set(v___x_2853_, 3, v_newStx_2838_);
lean_ctor_set(v___x_2853_, 2, v_toProcessingContext_2835_);
lean_ctor_set(v___x_2853_, 1, v___x_2879_);
lean_ctor_set(v___x_2853_, 0, v___x_2875_);
v___x_2881_ = v___x_2853_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v___x_2875_);
lean_ctor_set(v_reuseFailAlloc_2882_, 1, v___x_2879_);
lean_ctor_set(v_reuseFailAlloc_2882_, 2, v_toProcessingContext_2835_);
lean_ctor_set(v_reuseFailAlloc_2882_, 3, v_newStx_2838_);
lean_ctor_set(v_reuseFailAlloc_2882_, 4, v___x_2873_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
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
lean_dec(v_result_x3f_2842_);
lean_dec_ref(v_newParserState_2839_);
lean_dec(v_newStx_2838_);
lean_dec_ref(v_toProcessingContext_2835_);
return v_old_2837_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed(lean_object* v_toProcessingContext_2898_, lean_object* v_a_2899_, lean_object* v_old_2900_, lean_object* v_newStx_2901_, lean_object* v_newParserState_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_){
_start:
{
lean_object* v_res_2905_; 
v_res_2905_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_2898_, v_a_2899_, v_old_2900_, v_newStx_2901_, v_newParserState_2902_, v___y_2903_);
lean_dec_ref(v___y_2903_);
lean_dec_ref(v_a_2899_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(lean_object* v_toProcessingContext_2906_, lean_object* v_setupImports_2907_, lean_object* v_old_x3f_2908_, lean_object* v___x_2909_, lean_object* v___f_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v___x_2913_; 
lean_inc_ref(v_toProcessingContext_2906_);
v___x_2913_ = l_Lean_Parser_parseHeader(v_toProcessingContext_2906_);
if (lean_obj_tag(v___x_2913_) == 0)
{
lean_object* v_a_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2983_; 
v_a_2914_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2916_ = v___x_2913_;
v_isShared_2917_ = v_isSharedCheck_2983_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_a_2914_);
lean_dec(v___x_2913_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2983_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v_snd_2918_; lean_object* v_fst_2919_; lean_object* v_fst_2920_; lean_object* v_snd_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2982_; 
v_snd_2918_ = lean_ctor_get(v_a_2914_, 1);
lean_inc(v_snd_2918_);
v_fst_2919_ = lean_ctor_get(v_a_2914_, 0);
lean_inc(v_fst_2919_);
lean_dec(v_a_2914_);
v_fst_2920_ = lean_ctor_get(v_snd_2918_, 0);
v_snd_2921_ = lean_ctor_get(v_snd_2918_, 1);
v_isSharedCheck_2982_ = !lean_is_exclusive(v_snd_2918_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2923_ = v_snd_2918_;
v_isShared_2924_ = v_isSharedCheck_2982_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_snd_2921_);
lean_inc(v_fst_2920_);
lean_dec(v_snd_2918_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2982_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
uint8_t v___x_2925_; 
v___x_2925_ = l_Lean_MessageLog_hasErrors(v_snd_2921_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; lean_object* v___y_2928_; 
lean_inc(v_fst_2919_);
v___x_2926_ = l_Lean_Syntax_unsetTrailing(v_fst_2919_);
if (lean_obj_tag(v_old_x3f_2908_) == 1)
{
lean_object* v_val_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2964_; 
v_val_2949_ = lean_ctor_get(v_old_x3f_2908_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_old_x3f_2908_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2951_ = v_old_x3f_2908_;
v_isShared_2952_ = v_isSharedCheck_2964_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_val_2949_);
lean_dec(v_old_x3f_2908_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2964_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v_stx_2953_; lean_object* v_result_x3f_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; 
v_stx_2953_ = lean_ctor_get(v_val_2949_, 3);
v_result_x3f_2954_ = lean_ctor_get(v_val_2949_, 4);
lean_inc(v_stx_2953_);
v___x_2955_ = l_Lean_Syntax_unsetTrailing(v_stx_2953_);
lean_inc(v___x_2926_);
v___x_2956_ = l_Lean_Syntax_eqWithInfo(v___x_2926_, v___x_2955_);
if (v___x_2956_ == 0)
{
lean_inc(v_result_x3f_2954_);
lean_del_object(v___x_2951_);
lean_dec(v_val_2949_);
lean_dec_ref(v___f_2910_);
if (lean_obj_tag(v_result_x3f_2954_) == 0)
{
lean_dec_ref(v___x_2909_);
v___y_2928_ = v___y_2911_;
goto v___jp_2927_;
}
else
{
lean_object* v_val_2957_; lean_object* v_processedSnap_2958_; lean_object* v___x_2959_; 
v_val_2957_ = lean_ctor_get(v_result_x3f_2954_, 0);
lean_inc(v_val_2957_);
lean_dec_ref_known(v_result_x3f_2954_, 1);
v_processedSnap_2958_ = lean_ctor_get(v_val_2957_, 1);
lean_inc_ref(v_processedSnap_2958_);
lean_dec(v_val_2957_);
v___x_2959_ = l_Lean_Language_SnapshotTask_cancelRec___redArg(v___x_2909_, v_processedSnap_2958_);
v___y_2928_ = v___y_2911_;
goto v___jp_2927_;
}
}
else
{
lean_object* v___x_2960_; lean_object* v___x_2962_; 
lean_dec(v___x_2926_);
lean_del_object(v___x_2923_);
lean_dec(v_snd_2921_);
lean_del_object(v___x_2916_);
lean_dec_ref(v___x_2909_);
lean_dec_ref(v_setupImports_2907_);
lean_dec_ref(v_toProcessingContext_2906_);
lean_inc_ref(v___y_2911_);
v___x_2960_ = lean_apply_5(v___f_2910_, v_val_2949_, v_fst_2919_, v_fst_2920_, v___y_2911_, lean_box(0));
if (v_isShared_2952_ == 0)
{
lean_ctor_set_tag(v___x_2951_, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2960_);
v___x_2962_ = v___x_2951_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2960_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
}
else
{
lean_dec_ref(v___f_2910_);
lean_dec_ref(v___x_2909_);
lean_dec(v_old_x3f_2908_);
v___y_2928_ = v___y_2911_;
goto v___jp_2927_;
}
v___jp_2927_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2938_; 
v___x_2929_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2921_);
lean_inc(v_fst_2920_);
lean_inc(v_fst_2919_);
v___x_2930_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_processHeader(v_setupImports_2907_, v___x_2926_, v_fst_2919_, v_fst_2920_, v___y_2928_);
v___x_2931_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__3);
v___x_2932_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2933_ = lean_box(0);
v___x_2934_ = lean_unsigned_to_nat(32u);
v___x_2935_ = lean_mk_empty_array_with_capacity(v___x_2934_);
lean_dec_ref(v___x_2935_);
v___x_2936_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 1, v___x_2930_);
v___x_2938_ = v___x_2923_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_fst_2920_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v___x_2930_);
v___x_2938_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2946_; 
v___x_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2938_);
v___x_2940_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2940_, 0, v___x_2931_);
lean_ctor_set(v___x_2940_, 1, v___x_2932_);
lean_ctor_set(v___x_2940_, 2, v___x_2933_);
lean_ctor_set(v___x_2940_, 3, v___x_2936_);
lean_ctor_set_uint8(v___x_2940_, sizeof(void*)*4, v___x_2925_);
lean_inc(v_fst_2919_);
v___x_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_fst_2919_);
v___x_2942_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2942_, 0, v___x_2931_);
lean_ctor_set(v___x_2942_, 1, v___x_2929_);
lean_ctor_set(v___x_2942_, 2, v___x_2933_);
lean_ctor_set(v___x_2942_, 3, v___x_2936_);
lean_ctor_set_uint8(v___x_2942_, sizeof(void*)*4, v___x_2925_);
v___x_2943_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2941_, v___x_2942_);
v___x_2944_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2940_);
lean_ctor_set(v___x_2944_, 1, v___x_2943_);
lean_ctor_set(v___x_2944_, 2, v_toProcessingContext_2906_);
lean_ctor_set(v___x_2944_, 3, v_fst_2919_);
lean_ctor_set(v___x_2944_, 4, v___x_2939_);
if (v_isShared_2917_ == 0)
{
lean_ctor_set(v___x_2916_, 0, v___x_2944_);
v___x_2946_ = v___x_2916_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2944_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
else
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; uint8_t v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2980_; 
lean_del_object(v___x_2923_);
lean_dec(v_fst_2920_);
lean_dec_ref(v___f_2910_);
lean_dec_ref(v___x_2909_);
lean_dec(v_old_x3f_2908_);
lean_dec_ref(v_setupImports_2907_);
v___x_2965_ = l_Lean_Language_Snapshot_Diagnostics_ofMessageLog(v_snd_2921_);
v___x_2966_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__0___closed__2));
v___x_2967_ = l_Lean_Name_toString(v___x_2966_, v___x_2925_);
v___x_2968_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_2969_ = lean_box(0);
v___x_2970_ = lean_unsigned_to_nat(32u);
v___x_2971_ = lean_mk_empty_array_with_capacity(v___x_2970_);
lean_dec_ref(v___x_2971_);
v___x_2972_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
lean_inc_ref(v___x_2967_);
v___x_2973_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2973_, 0, v___x_2967_);
lean_ctor_set(v___x_2973_, 1, v___x_2968_);
lean_ctor_set(v___x_2973_, 2, v___x_2969_);
lean_ctor_set(v___x_2973_, 3, v___x_2972_);
lean_ctor_set_uint8(v___x_2973_, sizeof(void*)*4, v___x_2925_);
lean_inc(v_fst_2919_);
v___x_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2974_, 0, v_fst_2919_);
v___x_2975_ = 0;
v___x_2976_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2976_, 0, v___x_2967_);
lean_ctor_set(v___x_2976_, 1, v___x_2965_);
lean_ctor_set(v___x_2976_, 2, v___x_2969_);
lean_ctor_set(v___x_2976_, 3, v___x_2972_);
lean_ctor_set_uint8(v___x_2976_, sizeof(void*)*4, v___x_2975_);
v___x_2977_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_2974_, v___x_2976_);
v___x_2978_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2973_);
lean_ctor_set(v___x_2978_, 1, v___x_2977_);
lean_ctor_set(v___x_2978_, 2, v_toProcessingContext_2906_);
lean_ctor_set(v___x_2978_, 3, v_fst_2919_);
lean_ctor_set(v___x_2978_, 4, v___x_2969_);
if (v_isShared_2917_ == 0)
{
lean_ctor_set(v___x_2916_, 0, v___x_2978_);
v___x_2980_ = v___x_2916_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v___x_2978_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
}
}
else
{
lean_object* v_a_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2991_; 
lean_dec_ref(v___f_2910_);
lean_dec_ref(v___x_2909_);
lean_dec(v_old_x3f_2908_);
lean_dec_ref(v_setupImports_2907_);
lean_dec_ref(v_toProcessingContext_2906_);
v_a_2984_ = lean_ctor_get(v___x_2913_, 0);
v_isSharedCheck_2991_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2986_ = v___x_2913_;
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_a_2984_);
lean_dec(v___x_2913_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2989_; 
if (v_isShared_2987_ == 0)
{
v___x_2989_ = v___x_2986_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2984_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed(lean_object* v_toProcessingContext_2992_, lean_object* v_setupImports_2993_, lean_object* v_old_x3f_2994_, lean_object* v___x_2995_, lean_object* v___f_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_){
_start:
{
lean_object* v_res_2999_; 
v_res_2999_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3(v_toProcessingContext_2992_, v_setupImports_2993_, v_old_x3f_2994_, v___x_2995_, v___f_2996_, v___y_2997_);
lean_dec_ref(v___y_2997_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4(lean_object* v___x_3000_, lean_object* v_toProcessingContext_3001_, lean_object* v_x_3002_){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3003_ = l_Lean_Language_instInhabitedSnapshotTask_default___redArg(v___x_3000_);
v___x_3004_ = lean_box(0);
v___x_3005_ = lean_box(0);
v___x_3006_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3006_, 0, v_x_3002_);
lean_ctor_set(v___x_3006_, 1, v___x_3003_);
lean_ctor_set(v___x_3006_, 2, v_toProcessingContext_3001_);
lean_ctor_set(v___x_3006_, 3, v___x_3004_);
lean_ctor_set(v___x_3006_, 4, v___x_3005_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(lean_object* v_setupImports_3007_, lean_object* v_old_x3f_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v_toProcessingContext_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___f_3014_; lean_object* v___f_3015_; lean_object* v___f_3016_; 
v_toProcessingContext_3011_ = lean_ctor_get(v_a_3009_, 0);
v___x_3012_ = l_Lean_Language_instInhabitedSnapshotLeaf;
v___x_3013_ = l_Lean_Language_Lean_instToSnapshotTreeHeaderProcessedSnapshot;
lean_inc_ref(v_a_3009_);
lean_inc_ref_n(v_toProcessingContext_3011_, 3);
v___f_3014_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3014_, 0, v_toProcessingContext_3011_);
lean_closure_set(v___f_3014_, 1, v_a_3009_);
lean_inc(v_old_x3f_3008_);
v___f_3015_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__3___boxed), 7, 5);
lean_closure_set(v___f_3015_, 0, v_toProcessingContext_3011_);
lean_closure_set(v___f_3015_, 1, v_setupImports_3007_);
lean_closure_set(v___f_3015_, 2, v_old_x3f_3008_);
lean_closure_set(v___f_3015_, 3, v___x_3013_);
lean_closure_set(v___f_3015_, 4, v___f_3014_);
v___f_3016_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__4), 3, 2);
lean_closure_set(v___f_3016_, 0, v___x_3012_);
lean_closure_set(v___f_3016_, 1, v_toProcessingContext_3011_);
if (lean_obj_tag(v_old_x3f_3008_) == 1)
{
lean_object* v_val_3017_; lean_object* v_result_x3f_3018_; 
v_val_3017_ = lean_ctor_get(v_old_x3f_3008_, 0);
lean_inc(v_val_3017_);
lean_dec_ref_known(v_old_x3f_3008_, 1);
v_result_x3f_3018_ = lean_ctor_get(v_val_3017_, 4);
if (lean_obj_tag(v_result_x3f_3018_) == 1)
{
lean_object* v_stx_3019_; lean_object* v_val_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v_stx_3019_ = lean_ctor_get(v_val_3017_, 3);
lean_inc(v_stx_3019_);
v_val_3020_ = lean_ctor_get(v_result_x3f_3018_, 0);
lean_inc(v_val_3017_);
v___x_3021_ = l_Lean_Language_Lean_HeaderParsedSnapshot_processedResult(v_val_3017_);
v___x_3022_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v___x_3021_);
if (lean_obj_tag(v___x_3022_) == 1)
{
lean_object* v_val_3023_; 
v_val_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_val_3023_);
lean_dec_ref_known(v___x_3022_, 1);
if (lean_obj_tag(v_val_3023_) == 1)
{
lean_object* v_val_3024_; lean_object* v_firstCmdSnap_3025_; lean_object* v___x_3026_; 
v_val_3024_ = lean_ctor_get(v_val_3023_, 0);
lean_inc(v_val_3024_);
lean_dec_ref_known(v_val_3023_, 1);
v_firstCmdSnap_3025_ = lean_ctor_get(v_val_3024_, 1);
lean_inc_ref(v_firstCmdSnap_3025_);
lean_dec(v_val_3024_);
v___x_3026_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_firstCmdSnap_3025_);
if (lean_obj_tag(v___x_3026_) == 1)
{
lean_object* v_val_3027_; lean_object* v_nextCmdSnap_x3f_3028_; 
v_val_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_val_3027_);
lean_dec_ref_known(v___x_3026_, 1);
v_nextCmdSnap_x3f_3028_ = lean_ctor_get(v_val_3027_, 4);
lean_inc(v_nextCmdSnap_x3f_3028_);
lean_dec(v_val_3027_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3028_) == 0)
{
lean_object* v___x_3029_; 
lean_dec(v_stx_3019_);
lean_dec(v_val_3017_);
v___x_3029_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3029_;
}
else
{
lean_object* v_val_3030_; lean_object* v___x_3031_; 
v_val_3030_ = lean_ctor_get(v_nextCmdSnap_x3f_3028_, 0);
lean_inc(v_val_3030_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3028_, 1);
v___x_3031_ = l_Lean_Language_SnapshotTask_get_x3f___redArg(v_val_3030_);
if (lean_obj_tag(v___x_3031_) == 1)
{
lean_object* v_val_3032_; lean_object* v_parserState_3033_; lean_object* v_pos_3034_; uint8_t v___x_3035_; 
v_val_3032_ = lean_ctor_get(v___x_3031_, 0);
lean_inc(v_val_3032_);
lean_dec_ref_known(v___x_3031_, 1);
v_parserState_3033_ = lean_ctor_get(v_val_3032_, 2);
lean_inc_ref(v_parserState_3033_);
lean_dec(v_val_3032_);
v_pos_3034_ = lean_ctor_get(v_parserState_3033_, 0);
lean_inc(v_pos_3034_);
lean_dec_ref(v_parserState_3033_);
v___x_3035_ = l_Lean_Language_Lean_isBeforeEditPos(v_pos_3034_, v_a_3009_);
lean_dec(v_pos_3034_);
if (v___x_3035_ == 0)
{
lean_object* v___x_3036_; 
lean_dec(v_stx_3019_);
lean_dec(v_val_3017_);
v___x_3036_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3036_;
}
else
{
lean_object* v_parserState_3037_; lean_object* v___x_3038_; 
lean_dec_ref(v___f_3016_);
lean_dec_ref(v___f_3015_);
v_parserState_3037_ = lean_ctor_get(v_val_3020_, 0);
lean_inc_ref(v_parserState_3037_);
lean_inc_ref(v_toProcessingContext_3011_);
v___x_3038_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___lam__2(v_toProcessingContext_3011_, v_a_3009_, v_val_3017_, v_stx_3019_, v_parserState_3037_, v_a_3009_);
return v___x_3038_;
}
}
else
{
lean_object* v___x_3039_; 
lean_dec(v___x_3031_);
lean_dec(v_stx_3019_);
lean_dec(v_val_3017_);
v___x_3039_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3039_;
}
}
}
else
{
lean_object* v___x_3040_; 
lean_dec(v___x_3026_);
lean_dec(v_stx_3019_);
lean_dec(v_val_3017_);
v___x_3040_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3040_;
}
}
else
{
lean_object* v___x_3041_; 
lean_dec(v_val_3023_);
lean_dec(v_stx_3019_);
lean_dec(v_val_3017_);
v___x_3041_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3041_;
}
}
else
{
lean_object* v___x_3042_; 
lean_dec(v___x_3022_);
lean_dec(v_stx_3019_);
lean_dec(v_val_3017_);
v___x_3042_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3042_;
}
}
else
{
lean_object* v___x_3043_; 
lean_dec(v_val_3017_);
v___x_3043_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3043_;
}
}
else
{
lean_object* v___x_3044_; 
lean_dec(v_old_x3f_3008_);
v___x_3044_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg(v___f_3016_, v___f_3015_, v_a_3009_);
return v___x_3044_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed(lean_object* v_setupImports_3045_, lean_object* v_old_x3f_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader(v_setupImports_3045_, v_old_x3f_3046_, v_a_3047_);
lean_dec_ref(v_a_3047_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process(lean_object* v_setupImports_3050_, lean_object* v_old_x3f_3051_, lean_object* v_a_3052_){
_start:
{
lean_object* v___x_3054_; 
lean_inc(v_old_x3f_3051_);
v___x_3054_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseHeader___boxed), 4, 2);
lean_closure_set(v___x_3054_, 0, v_setupImports_3050_);
lean_closure_set(v___x_3054_, 1, v_old_x3f_3051_);
if (lean_obj_tag(v_old_x3f_3051_) == 0)
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3055_ = lean_box(0);
v___x_3056_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3054_, v___x_3055_, v_a_3052_);
return v___x_3056_;
}
else
{
lean_object* v_val_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3066_; 
v_val_3057_ = lean_ctor_get(v_old_x3f_3051_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v_old_x3f_3051_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3059_ = v_old_x3f_3051_;
v_isShared_3060_ = v_isSharedCheck_3066_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_val_3057_);
lean_dec(v_old_x3f_3051_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3066_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v_ictx_3061_; lean_object* v___x_3063_; 
v_ictx_3061_ = lean_ctor_get(v_val_3057_, 2);
lean_inc_ref(v_ictx_3061_);
lean_dec(v_val_3057_);
if (v_isShared_3060_ == 0)
{
lean_ctor_set(v___x_3059_, 0, v_ictx_3061_);
v___x_3063_ = v___x_3059_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_ictx_3061_);
v___x_3063_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
lean_object* v___x_3064_; 
v___x_3064_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___x_3054_, v___x_3063_, v_a_3052_);
return v___x_3064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_process___boxed(lean_object* v_setupImports_3067_, lean_object* v_old_x3f_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Lean_Language_Lean_process(v_setupImports_3067_, v_old_x3f_3068_, v_a_3069_);
lean_dec_ref(v_a_3069_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands(lean_object* v_inputCtx_3072_, lean_object* v_parserState_3073_, lean_object* v_commandState_3074_, lean_object* v_old_x3f_3075_){
_start:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3085_; 
v___x_3077_ = lean_io_promise_new();
v___x_3078_ = l_IO_CancelToken_new();
if (lean_obj_tag(v_old_x3f_3075_) == 0)
{
lean_object* v___x_3100_; 
v___x_3100_ = lean_box(0);
v___y_3085_ = v___x_3100_;
goto v___jp_3084_;
}
else
{
lean_object* v_val_3101_; lean_object* v_snd_3102_; lean_object* v___x_3103_; 
v_val_3101_ = lean_ctor_get(v_old_x3f_3075_, 0);
v_snd_3102_ = lean_ctor_get(v_val_3101_, 1);
lean_inc(v_snd_3102_);
v___x_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3103_, 0, v_snd_3102_);
v___y_3085_ = v___x_3103_;
goto v___jp_3084_;
}
v___jp_3079_:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3082_ = l_Lean_Language_Lean_LeanProcessingM_run___redArg(v___y_3080_, v___y_3081_, v_inputCtx_3072_);
lean_dec(v___x_3082_);
v___x_3083_ = l_IO_Promise_result_x21___redArg(v___x_3077_);
lean_dec(v___x_3077_);
return v___x_3083_;
}
v___jp_3084_:
{
uint8_t v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3086_ = 1;
v___x_3087_ = lean_box(0);
v___x_3088_ = lean_box(v___x_3086_);
lean_inc(v___x_3077_);
v___x_3089_ = lean_alloc_closure((void*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___boxed), 9, 7);
lean_closure_set(v___x_3089_, 0, v___y_3085_);
lean_closure_set(v___x_3089_, 1, v_parserState_3073_);
lean_closure_set(v___x_3089_, 2, v_commandState_3074_);
lean_closure_set(v___x_3089_, 3, v___x_3077_);
lean_closure_set(v___x_3089_, 4, v___x_3088_);
lean_closure_set(v___x_3089_, 5, v___x_3078_);
lean_closure_set(v___x_3089_, 6, v___x_3087_);
if (lean_obj_tag(v_old_x3f_3075_) == 0)
{
lean_object* v___x_3090_; 
v___x_3090_ = lean_box(0);
v___y_3080_ = v___x_3089_;
v___y_3081_ = v___x_3090_;
goto v___jp_3079_;
}
else
{
lean_object* v_val_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3099_; 
v_val_3091_ = lean_ctor_get(v_old_x3f_3075_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_old_x3f_3075_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3093_ = v_old_x3f_3075_;
v_isShared_3094_ = v_isSharedCheck_3099_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_val_3091_);
lean_dec(v_old_x3f_3075_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3099_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v_fst_3095_; lean_object* v___x_3097_; 
v_fst_3095_ = lean_ctor_get(v_val_3091_, 0);
lean_inc(v_fst_3095_);
lean_dec(v_val_3091_);
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 0, v_fst_3095_);
v___x_3097_ = v___x_3093_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_fst_3095_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
v___y_3080_ = v___x_3089_;
v___y_3081_ = v___x_3097_;
goto v___jp_3079_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_processCommands___boxed(lean_object* v_inputCtx_3104_, lean_object* v_parserState_3105_, lean_object* v_commandState_3106_, lean_object* v_old_x3f_3107_, lean_object* v_a_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l_Lean_Language_Lean_processCommands(v_inputCtx_3104_, v_parserState_3105_, v_commandState_3106_, v_old_x3f_3107_);
lean_dec_ref(v_inputCtx_3104_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(lean_object* v_snap_3110_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3111_; 
v_nextCmdSnap_x3f_3111_ = lean_ctor_get(v_snap_3110_, 4);
if (lean_obj_tag(v_nextCmdSnap_x3f_3111_) == 1)
{
lean_object* v_val_3112_; lean_object* v___x_3113_; 
lean_inc_ref(v_nextCmdSnap_x3f_3111_);
lean_dec_ref(v_snap_3110_);
v_val_3112_ = lean_ctor_get(v_nextCmdSnap_x3f_3111_, 0);
lean_inc(v_val_3112_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3111_, 1);
v___x_3113_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3112_);
v_snap_3110_ = v___x_3113_;
goto _start;
}
else
{
lean_object* v_elabSnap_3115_; lean_object* v_resultSnap_3116_; lean_object* v___x_3117_; lean_object* v_cmdState_3118_; lean_object* v___x_3119_; 
v_elabSnap_3115_ = lean_ctor_get(v_snap_3110_, 3);
lean_inc_ref(v_elabSnap_3115_);
lean_dec_ref(v_snap_3110_);
v_resultSnap_3116_ = lean_ctor_get(v_elabSnap_3115_, 2);
lean_inc_ref(v_resultSnap_3116_);
lean_dec_ref(v_elabSnap_3115_);
v___x_3117_ = l_Lean_Language_SnapshotTask_get___redArg(v_resultSnap_3116_);
v_cmdState_3118_ = lean_ctor_get(v___x_3117_, 1);
lean_inc_ref(v_cmdState_3118_);
lean_dec(v___x_3117_);
v___x_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3119_, 0, v_cmdState_3118_);
return v___x_3119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_waitForFinalCmdState_x3f(lean_object* v_snap_3120_){
_start:
{
lean_object* v_result_x3f_3121_; 
v_result_x3f_3121_ = lean_ctor_get(v_snap_3120_, 4);
lean_inc(v_result_x3f_3121_);
lean_dec_ref(v_snap_3120_);
if (lean_obj_tag(v_result_x3f_3121_) == 0)
{
lean_object* v___x_3122_; 
v___x_3122_ = lean_box(0);
return v___x_3122_;
}
else
{
lean_object* v_val_3123_; lean_object* v_processedSnap_3124_; lean_object* v___x_3125_; lean_object* v_result_x3f_3126_; 
v_val_3123_ = lean_ctor_get(v_result_x3f_3121_, 0);
lean_inc(v_val_3123_);
lean_dec_ref_known(v_result_x3f_3121_, 1);
v_processedSnap_3124_ = lean_ctor_get(v_val_3123_, 1);
lean_inc_ref(v_processedSnap_3124_);
lean_dec(v_val_3123_);
v___x_3125_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3124_);
v_result_x3f_3126_ = lean_ctor_get(v___x_3125_, 2);
lean_inc(v_result_x3f_3126_);
lean_dec(v___x_3125_);
if (lean_obj_tag(v_result_x3f_3126_) == 0)
{
lean_object* v___x_3127_; 
v___x_3127_ = lean_box(0);
return v___x_3127_;
}
else
{
lean_object* v_val_3128_; lean_object* v_firstCmdSnap_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v_val_3128_ = lean_ctor_get(v_result_x3f_3126_, 0);
lean_inc(v_val_3128_);
lean_dec_ref_known(v_result_x3f_3126_, 1);
v_firstCmdSnap_3129_ = lean_ctor_get(v_val_3128_, 1);
lean_inc_ref(v_firstCmdSnap_3129_);
lean_dec(v_val_3128_);
v___x_3130_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3129_);
v___x_3131_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_waitForFinalCmdState_x3f_goCmd(v___x_3130_);
return v___x_3131_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(lean_object* v_f_3132_, lean_object* v_snap_3133_, lean_object* v_acc_3134_){
_start:
{
lean_object* v_nextCmdSnap_x3f_3135_; lean_object* v_acc_3136_; 
v_nextCmdSnap_x3f_3135_ = lean_ctor_get(v_snap_3133_, 4);
lean_inc(v_nextCmdSnap_x3f_3135_);
lean_inc(v_f_3132_);
v_acc_3136_ = lean_apply_2(v_f_3132_, v_acc_3134_, v_snap_3133_);
if (lean_obj_tag(v_nextCmdSnap_x3f_3135_) == 1)
{
lean_object* v_val_3137_; lean_object* v___x_3138_; 
v_val_3137_ = lean_ctor_get(v_nextCmdSnap_x3f_3135_, 0);
lean_inc(v_val_3137_);
lean_dec_ref_known(v_nextCmdSnap_x3f_3135_, 1);
v___x_3138_ = l_Lean_Language_SnapshotTask_get___redArg(v_val_3137_);
v_snap_3133_ = v___x_3138_;
v_acc_3134_ = v_acc_3136_;
goto _start;
}
else
{
lean_dec(v_nextCmdSnap_x3f_3135_);
lean_dec(v_f_3132_);
return v_acc_3136_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go(lean_object* v_00_u03b1_3140_, lean_object* v_f_3141_, lean_object* v_snap_3142_, lean_object* v_acc_3143_){
_start:
{
lean_object* v___x_3144_; 
v___x_3144_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(v_f_3141_, v_snap_3142_, v_acc_3143_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(lean_object* v_snap_3145_, lean_object* v_init_3146_, lean_object* v_f_3147_){
_start:
{
lean_object* v_result_x3f_3148_; 
v_result_x3f_3148_ = lean_ctor_get(v_snap_3145_, 4);
lean_inc(v_result_x3f_3148_);
lean_dec_ref(v_snap_3145_);
if (lean_obj_tag(v_result_x3f_3148_) == 0)
{
lean_object* v___x_3149_; 
lean_dec(v_f_3147_);
lean_dec(v_init_3146_);
v___x_3149_ = lean_box(0);
return v___x_3149_;
}
else
{
lean_object* v_val_3150_; lean_object* v_processedSnap_3151_; lean_object* v___x_3152_; lean_object* v_result_x3f_3153_; 
v_val_3150_ = lean_ctor_get(v_result_x3f_3148_, 0);
lean_inc(v_val_3150_);
lean_dec_ref_known(v_result_x3f_3148_, 1);
v_processedSnap_3151_ = lean_ctor_get(v_val_3150_, 1);
lean_inc_ref(v_processedSnap_3151_);
lean_dec(v_val_3150_);
v___x_3152_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3151_);
v_result_x3f_3153_ = lean_ctor_get(v___x_3152_, 2);
lean_inc(v_result_x3f_3153_);
lean_dec(v___x_3152_);
if (lean_obj_tag(v_result_x3f_3153_) == 0)
{
lean_object* v___x_3154_; 
lean_dec(v_f_3147_);
lean_dec(v_init_3146_);
v___x_3154_ = lean_box(0);
return v___x_3154_;
}
else
{
lean_object* v_val_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3165_; 
v_val_3155_ = lean_ctor_get(v_result_x3f_3153_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v_result_x3f_3153_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3157_ = v_result_x3f_3153_;
v_isShared_3158_ = v_isSharedCheck_3165_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_val_3155_);
lean_dec(v_result_x3f_3153_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3165_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v_firstCmdSnap_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3163_; 
v_firstCmdSnap_3159_ = lean_ctor_get(v_val_3155_, 1);
lean_inc_ref(v_firstCmdSnap_3159_);
lean_dec(v_val_3155_);
v___x_3160_ = l_Lean_Language_SnapshotTask_get___redArg(v_firstCmdSnap_3159_);
v___x_3161_ = l___private_Lean_Language_Lean_0__Lean_Language_Lean_foldCmdSnaps_x3f_go___redArg(v_f_3147_, v___x_3160_, v_init_3146_);
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 0, v___x_3161_);
v___x_3163_ = v___x_3157_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3161_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_foldCmdSnaps_x3f(lean_object* v_00_u03b1_3166_, lean_object* v_snap_3167_, lean_object* v_init_3168_, lean_object* v_f_3169_){
_start:
{
lean_object* v___x_3170_; 
v___x_3170_ = l_Lean_Language_Lean_foldCmdSnaps_x3f___redArg(v_snap_3167_, v_init_3168_, v_f_3169_);
return v___x_3170_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__2(void){
_start:
{
uint8_t v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3176_ = 1;
v___x_3177_ = ((lean_object*)(l_Lean_Language_Lean_truncateToHeader___closed__1));
v___x_3178_ = l_Lean_Name_toString(v___x_3177_, v___x_3176_);
return v___x_3178_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__3(void){
_start:
{
uint8_t v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3179_ = 0;
v___x_3180_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_withHeaderExceptions___redArg___closed__16);
v___x_3181_ = lean_box(0);
v___x_3182_ = l_Lean_Language_Snapshot_Diagnostics_empty;
v___x_3183_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__2, &l_Lean_Language_Lean_truncateToHeader___closed__2_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__2);
v___x_3184_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3184_, 0, v___x_3183_);
lean_ctor_set(v___x_3184_, 1, v___x_3182_);
lean_ctor_set(v___x_3184_, 2, v___x_3181_);
lean_ctor_set(v___x_3184_, 3, v___x_3180_);
lean_ctor_set_uint8(v___x_3184_, sizeof(void*)*4, v___x_3179_);
return v___x_3184_;
}
}
static lean_object* _init_l_Lean_Language_Lean_truncateToHeader___closed__4(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3186_ = lean_box(0);
v___x_3187_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3186_, v___x_3185_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Language_Lean_truncateToHeader(lean_object* v_snap_3188_){
_start:
{
lean_object* v_result_x3f_3189_; 
v_result_x3f_3189_ = lean_ctor_get(v_snap_3188_, 4);
lean_inc(v_result_x3f_3189_);
if (lean_obj_tag(v_result_x3f_3189_) == 1)
{
lean_object* v_val_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3265_; 
v_val_3190_ = lean_ctor_get(v_result_x3f_3189_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v_result_x3f_3189_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3192_ = v_result_x3f_3189_;
v_isShared_3193_ = v_isSharedCheck_3265_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_val_3190_);
lean_dec(v_result_x3f_3189_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3265_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v_toSnapshot_3194_; lean_object* v_metaSnap_3195_; lean_object* v_ictx_3196_; lean_object* v_stx_3197_; lean_object* v_parserState_3198_; lean_object* v_processedSnap_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3264_; 
v_toSnapshot_3194_ = lean_ctor_get(v_snap_3188_, 0);
v_metaSnap_3195_ = lean_ctor_get(v_snap_3188_, 1);
v_ictx_3196_ = lean_ctor_get(v_snap_3188_, 2);
v_stx_3197_ = lean_ctor_get(v_snap_3188_, 3);
v_parserState_3198_ = lean_ctor_get(v_val_3190_, 0);
v_processedSnap_3199_ = lean_ctor_get(v_val_3190_, 1);
v_isSharedCheck_3264_ = !lean_is_exclusive(v_val_3190_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3201_ = v_val_3190_;
v_isShared_3202_ = v_isSharedCheck_3264_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_processedSnap_3199_);
lean_inc(v_parserState_3198_);
lean_dec(v_val_3190_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3264_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v_processed_3203_; lean_object* v_result_x3f_3204_; 
v_processed_3203_ = l_Lean_Language_SnapshotTask_get___redArg(v_processedSnap_3199_);
v_result_x3f_3204_ = lean_ctor_get(v_processed_3203_, 2);
lean_inc(v_result_x3f_3204_);
if (lean_obj_tag(v_result_x3f_3204_) == 1)
{
lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3258_; 
lean_inc(v_stx_3197_);
lean_inc_ref(v_ictx_3196_);
lean_inc_ref(v_metaSnap_3195_);
lean_inc_ref(v_toSnapshot_3194_);
v_isSharedCheck_3258_ = !lean_is_exclusive(v_snap_3188_);
if (v_isSharedCheck_3258_ == 0)
{
lean_object* v_unused_3259_; lean_object* v_unused_3260_; lean_object* v_unused_3261_; lean_object* v_unused_3262_; lean_object* v_unused_3263_; 
v_unused_3259_ = lean_ctor_get(v_snap_3188_, 4);
lean_dec(v_unused_3259_);
v_unused_3260_ = lean_ctor_get(v_snap_3188_, 3);
lean_dec(v_unused_3260_);
v_unused_3261_ = lean_ctor_get(v_snap_3188_, 2);
lean_dec(v_unused_3261_);
v_unused_3262_ = lean_ctor_get(v_snap_3188_, 1);
lean_dec(v_unused_3262_);
v_unused_3263_ = lean_ctor_get(v_snap_3188_, 0);
lean_dec(v_unused_3263_);
v___x_3206_ = v_snap_3188_;
v_isShared_3207_ = v_isSharedCheck_3258_;
goto v_resetjp_3205_;
}
else
{
lean_dec(v_snap_3188_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3258_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v_val_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3257_; 
v_val_3208_ = lean_ctor_get(v_result_x3f_3204_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v_result_x3f_3204_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3210_ = v_result_x3f_3204_;
v_isShared_3211_ = v_isSharedCheck_3257_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_val_3208_);
lean_dec(v_result_x3f_3204_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3257_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v_toSnapshot_3212_; lean_object* v_metaSnap_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3255_; 
v_toSnapshot_3212_ = lean_ctor_get(v_processed_3203_, 0);
v_metaSnap_3213_ = lean_ctor_get(v_processed_3203_, 1);
v_isSharedCheck_3255_ = !lean_is_exclusive(v_processed_3203_);
if (v_isSharedCheck_3255_ == 0)
{
lean_object* v_unused_3256_; 
v_unused_3256_ = lean_ctor_get(v_processed_3203_, 2);
lean_dec(v_unused_3256_);
v___x_3215_ = v_processed_3203_;
v_isShared_3216_ = v_isSharedCheck_3255_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_metaSnap_3213_);
lean_inc(v_toSnapshot_3212_);
lean_dec(v_processed_3203_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3255_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v_cmdState_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3253_; 
v_cmdState_3217_ = lean_ctor_get(v_val_3208_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v_val_3208_);
if (v_isSharedCheck_3253_ == 0)
{
lean_object* v_unused_3254_; 
v_unused_3254_ = lean_ctor_get(v_val_3208_, 1);
lean_dec(v_unused_3254_);
v___x_3219_ = v_val_3208_;
v_isShared_3220_ = v_isSharedCheck_3253_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_cmdState_3217_);
lean_dec(v_val_3208_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3253_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v_resultSnap_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v_elabSnap_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v_termCmd_3232_; lean_object* v___x_3233_; lean_object* v___x_3235_; 
v___x_3221_ = lean_box(0);
v___x_3222_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__3, &l_Lean_Language_Lean_truncateToHeader___closed__3_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__3);
v___x_3223_ = ((lean_object*)(l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__5));
lean_inc_ref(v_cmdState_3217_);
v_resultSnap_3224_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_resultSnap_3224_, 0, v___x_3222_);
lean_ctor_set(v_resultSnap_3224_, 1, v_cmdState_3217_);
lean_ctor_set(v_resultSnap_3224_, 2, v___x_3223_);
v___x_3225_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__4);
v___x_3226_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3221_, v_resultSnap_3224_);
v___x_3227_ = lean_obj_once(&l_Lean_Language_Lean_truncateToHeader___closed__4, &l_Lean_Language_Lean_truncateToHeader___closed__4_once, _init_l_Lean_Language_Lean_truncateToHeader___closed__4);
v___x_3228_ = lean_obj_once(&l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6, &l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6_once, _init_l___private_Lean_Language_Lean_0__Lean_Language_Lean_process_parseCmd___closed__6);
v_elabSnap_3229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_elabSnap_3229_, 0, v___x_3222_);
lean_ctor_set(v_elabSnap_3229_, 1, v___x_3225_);
lean_ctor_set(v_elabSnap_3229_, 2, v___x_3226_);
lean_ctor_set(v_elabSnap_3229_, 3, v___x_3227_);
lean_ctor_set(v_elabSnap_3229_, 4, v___x_3228_);
v___x_3230_ = lean_box(0);
v___x_3231_ = l_Lean_Parser_instInhabitedModuleParserState_default;
v_termCmd_3232_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_termCmd_3232_, 0, v___x_3222_);
lean_ctor_set(v_termCmd_3232_, 1, v___x_3230_);
lean_ctor_set(v_termCmd_3232_, 2, v___x_3231_);
lean_ctor_set(v_termCmd_3232_, 3, v_elabSnap_3229_);
lean_ctor_set(v_termCmd_3232_, 4, v___x_3221_);
v___x_3233_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3221_, v_termCmd_3232_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 1, v___x_3233_);
v___x_3235_ = v___x_3219_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_cmdState_3217_);
lean_ctor_set(v_reuseFailAlloc_3252_, 1, v___x_3233_);
v___x_3235_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
lean_object* v___x_3237_; 
if (v_isShared_3211_ == 0)
{
lean_ctor_set(v___x_3210_, 0, v___x_3235_);
v___x_3237_ = v___x_3210_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3235_);
v___x_3237_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
lean_object* v_newProcessed_3239_; 
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 2, v___x_3237_);
v_newProcessed_3239_ = v___x_3215_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_toSnapshot_3212_);
lean_ctor_set(v_reuseFailAlloc_3250_, 1, v_metaSnap_3213_);
lean_ctor_set(v_reuseFailAlloc_3250_, 2, v___x_3237_);
v_newProcessed_3239_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
lean_object* v___x_3240_; lean_object* v___x_3242_; 
v___x_3240_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_3221_, v_newProcessed_3239_);
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 1, v___x_3240_);
v___x_3242_ = v___x_3201_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_parserState_3198_);
lean_ctor_set(v_reuseFailAlloc_3249_, 1, v___x_3240_);
v___x_3242_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
lean_object* v___x_3244_; 
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v___x_3242_);
v___x_3244_ = v___x_3192_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
lean_object* v___x_3246_; 
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 4, v___x_3244_);
v___x_3246_ = v___x_3206_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_toSnapshot_3194_);
lean_ctor_set(v_reuseFailAlloc_3247_, 1, v_metaSnap_3195_);
lean_ctor_set(v_reuseFailAlloc_3247_, 2, v_ictx_3196_);
lean_ctor_set(v_reuseFailAlloc_3247_, 3, v_stx_3197_);
lean_ctor_set(v_reuseFailAlloc_3247_, 4, v___x_3244_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
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
lean_dec(v_result_x3f_3204_);
lean_dec(v_processed_3203_);
lean_del_object(v___x_3201_);
lean_dec_ref(v_parserState_3198_);
lean_del_object(v___x_3192_);
return v_snap_3188_;
}
}
}
}
else
{
lean_dec(v_result_x3f_3189_);
return v_snap_3188_;
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
