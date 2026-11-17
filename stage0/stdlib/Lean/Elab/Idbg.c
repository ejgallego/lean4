// Lean compiler output
// Module: Lean.Elab.Idbg
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Std.Async.TCP
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
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_KVMap_instValueNat;
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_inServer;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_Async_AsyncTask_block___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uv_tcp_send(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_uv_tcp_recv(lean_object*, uint64_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_uv_tcp_shutdown(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mod(uint64_t, uint64_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint16_t lean_uint64_to_uint16(uint64_t);
lean_object* l_Std_Net_IPv4Addr_ofParts(uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* l_List_range(lean_object*);
lean_object* l_IO_sleep(uint32_t);
lean_object* lean_uv_tcp_new();
lean_object* lean_uv_tcp_bind(lean_object*, lean_object*);
lean_object* lean_uv_tcp_listen(lean_object*, uint32_t);
lean_object* lean_uv_tcp_accept(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_IO_CancelToken_new();
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Core_wrapAsyncAsSnapshot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_setNondep(lean_object*, uint8_t);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_stderr();
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
extern lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default;
uint8_t l_Lean_Json_isNull(lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* lean_array_pop(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Level_mvar___override(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Level_imax___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_max___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* lean_uv_tcp_connect(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected Name, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "num expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "str expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "expected BinderInfo, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "expected Literal, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mvar"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected Level, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "imax expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "max expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fvar"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "levels"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bi"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nondep"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "struct"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected Expr, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "app expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(lean_object*);
LEAN_EXPORT uint16_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the promise linked to the Async was dropped"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value;
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2_value;
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2_value)} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "idbg: connection closed"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1_value;
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2_value;
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2_value)} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "idbg: invalid header"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "idbg: invalid UTF-8"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "idbg: invalid length"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2;
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__3___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3_value)} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_idbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 143, 231, 50, 41, 181, 42, 64)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "<idbg>"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16;
static const lean_array_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "idbg evalConst failed: "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__25 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__25_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static uint16_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__26;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "connection refused"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(18) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "idbg client: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4_value;
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5_value;
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5_value)} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_idbg_client_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doIdbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 152, 121, 224, 0, 70, 155, 32)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Idbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(222, 127, 37, 145, 246, 253, 221, 130)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(167, 188, 96, 25, 36, 32, 177, 172)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(154, 85, 246, 154, 57, 30, 227, 186)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 120, 240, 118, 26, 169, 87, 68)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(72, 181, 66, 123, 98, 246, 242, 167)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "controlInfoIdbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(38, 98, 163, 235, 228, 39, 161, 40)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "idbg: "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 47, 116, 218, 39, 28, 172, 37)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 47, 116, 218, 39, 28, 172, 37)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(233, 207, 36, 16, 41, 121, 79, 89)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_>>=_"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 92, 54, 199, 40, 32, 117, 253)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Idbg.idbgClientLoop"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "idbgClientLoop"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(216, 3, 140, 103, 23, 193, 97, 10)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15_value),LEAN_SCALAR_PTR_LITERAL(114, 35, 176, 243, 23, 158, 209, 172)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">>="};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabIdbgCore"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "idbg: abstracted type still has metavariables"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "idbg: abstracted value still has metavariables"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35;
static const lean_array_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "repr"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37_value),LEAN_SCALAR_PTR_LITERAL(248, 109, 138, 163, 21, 170, 71, 243)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToString"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39_value),LEAN_SCALAR_PTR_LITERAL(30, 202, 174, 203, 16, 186, 159, 168)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40_value),LEAN_SCALAR_PTR_LITERAL(206, 210, 39, 124, 69, 192, 37, 107)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "idbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 127, 98, 129, 230, 27, 154, 50)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabIdbgTerm"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 12, 184, 32, 84, 90, 234, 209)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "idbg body"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabDoIdbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 80, 1, 78, 180, 59, 65, 71)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(lean_object* v_x_3_){
_start:
{
switch(lean_obj_tag(v_x_3_))
{
case 0:
{
lean_object* v___x_4_; 
v___x_4_ = lean_box(0);
return v___x_4_;
}
case 1:
{
lean_object* v_pre_5_; lean_object* v_str_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_pre_5_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_pre_5_);
v_str_6_ = lean_ctor_get(v_x_3_, 1);
lean_inc_ref(v_str_6_);
lean_dec_ref_known(v_x_3_, 2);
v___x_7_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0));
v___x_8_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_pre_5_);
v___x_9_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_9_, 0, v_str_6_);
v___x_10_ = lean_unsigned_to_nat(2u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
v___x_12_ = lean_array_push(v___x_11_, v___x_8_);
v___x_13_ = lean_array_push(v___x_12_, v___x_9_);
v___x_14_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_7_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
v___x_16_ = lean_box(0);
v___x_17_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_15_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = l_Lean_Json_mkObj(v___x_17_);
lean_dec_ref_known(v___x_17_, 2);
return v___x_18_;
}
default: 
{
lean_object* v_pre_19_; lean_object* v_i_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v_pre_19_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_pre_19_);
v_i_20_ = lean_ctor_get(v_x_3_, 1);
lean_inc(v_i_20_);
lean_dec_ref_known(v_x_3_, 2);
v___x_21_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1));
v___x_22_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_pre_19_);
v___x_23_ = l_Lean_JsonNumber_fromNat(v_i_20_);
v___x_24_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
v___x_25_ = lean_unsigned_to_nat(2u);
v___x_26_ = lean_mk_empty_array_with_capacity(v___x_25_);
v___x_27_ = lean_array_push(v___x_26_, v___x_22_);
v___x_28_ = lean_array_push(v___x_27_, v___x_24_);
v___x_29_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_21_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
v___x_31_ = lean_box(0);
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_30_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = l_Lean_Json_mkObj(v___x_32_);
lean_dec_ref_known(v___x_32_, 2);
return v___x_33_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(size_t v_sz_34_, size_t v_i_35_, lean_object* v_bs_36_){
_start:
{
uint8_t v___x_37_; 
v___x_37_ = lean_usize_dec_lt(v_i_35_, v_sz_34_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; 
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v_bs_36_);
return v___x_38_;
}
else
{
lean_object* v_v_39_; lean_object* v___x_40_; lean_object* v_bs_x27_41_; size_t v___x_42_; size_t v___x_43_; lean_object* v___x_44_; 
v_v_39_ = lean_array_uget(v_bs_36_, v_i_35_);
v___x_40_ = lean_unsigned_to_nat(0u);
v_bs_x27_41_ = lean_array_uset(v_bs_36_, v_i_35_, v___x_40_);
v___x_42_ = ((size_t)1ULL);
v___x_43_ = lean_usize_add(v_i_35_, v___x_42_);
v___x_44_ = lean_array_uset(v_bs_x27_41_, v_i_35_, v_v_39_);
v_i_35_ = v___x_43_;
v_bs_36_ = v___x_44_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0___boxed(lean_object* v_sz_46_, lean_object* v_i_47_, lean_object* v_bs_48_){
_start:
{
size_t v_sz_boxed_49_; size_t v_i_boxed_50_; lean_object* v_res_51_; 
v_sz_boxed_49_ = lean_unbox_usize(v_sz_46_);
lean_dec(v_sz_46_);
v_i_boxed_50_ = lean_unbox_usize(v_i_47_);
lean_dec(v_i_47_);
v_res_51_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(v_sz_boxed_49_, v_i_boxed_50_, v_bs_48_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(lean_object* v_x_54_){
_start:
{
if (lean_obj_tag(v_x_54_) == 4)
{
lean_object* v_elems_55_; size_t v_sz_56_; size_t v___x_57_; lean_object* v___x_58_; 
v_elems_55_ = lean_ctor_get(v_x_54_, 0);
lean_inc_ref(v_elems_55_);
lean_dec_ref_known(v_x_54_, 1);
v_sz_56_ = lean_array_size(v_elems_55_);
v___x_57_ = ((size_t)0ULL);
v___x_58_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(v_sz_56_, v___x_57_, v_elems_55_);
return v___x_58_;
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_59_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0));
v___x_60_ = lean_unsigned_to_nat(80u);
v___x_61_ = l_Lean_Json_pretty(v_x_54_, v___x_60_);
v___x_62_ = lean_string_append(v___x_59_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(lean_object* v_j_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = l_Lean_Json_isNull(v_j_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0));
lean_inc(v_j_75_);
v___x_78_ = l_Lean_Json_getObjVal_x3f(v_j_75_, v___x_77_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec_ref_known(v___x_78_, 1);
v___x_79_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1));
lean_inc(v_j_75_);
v___x_80_ = l_Lean_Json_getObjVal_x3f(v_j_75_, v___x_79_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_91_; 
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_91_ == 0)
{
lean_object* v_unused_92_; 
v_unused_92_ = lean_ctor_get(v___x_80_, 0);
lean_dec(v_unused_92_);
v___x_82_ = v___x_80_;
v_isShared_83_ = v_isSharedCheck_91_;
goto v_resetjp_81_;
}
else
{
lean_dec(v___x_80_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_91_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0));
v___x_85_ = lean_unsigned_to_nat(80u);
v___x_86_ = l_Lean_Json_pretty(v_j_75_, v___x_85_);
v___x_87_ = lean_string_append(v___x_84_, v___x_86_);
lean_dec_ref(v___x_86_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v___x_87_);
v___x_89_ = v___x_82_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_94_; 
lean_dec(v_j_75_);
v_a_93_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_93_);
lean_dec_ref_known(v___x_80_, 1);
v___x_94_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_93_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v_a_103_ = lean_ctor_get(v___x_94_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_94_, 1);
v___x_104_ = lean_array_get_size(v_a_103_);
v___x_105_ = lean_unsigned_to_nat(2u);
v___x_106_ = lean_nat_dec_eq(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec(v_a_103_);
v___x_107_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2));
return v___x_107_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = lean_array_fget_borrowed(v_a_103_, v___x_108_);
lean_inc(v___x_109_);
v___x_110_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v___x_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_dec(v_a_103_);
return v___x_110_;
}
else
{
lean_object* v_a_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref_known(v___x_110_, 1);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_array_fget(v_a_103_, v___x_112_);
lean_dec(v_a_103_);
v___x_114_ = l_Lean_Json_getNat_x3f(v___x_113_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
lean_dec(v_a_111_);
v_a_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_131_; 
v_a_123_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_131_ == 0)
{
v___x_125_ = v___x_114_;
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_114_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = l_Lean_Name_num___override(v_a_111_, v_a_123_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 0, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_127_);
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
}
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_133_; 
lean_dec(v_j_75_);
v_a_132_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_78_, 1);
v___x_133_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_a_142_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v___x_133_, 1);
v___x_143_ = lean_array_get_size(v_a_142_);
v___x_144_ = lean_unsigned_to_nat(2u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; 
lean_dec(v_a_142_);
v___x_146_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4));
return v___x_146_;
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_array_fget_borrowed(v_a_142_, v___x_147_);
lean_inc(v___x_148_);
v___x_149_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v___x_148_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_dec(v_a_142_);
return v___x_149_;
}
else
{
lean_object* v_a_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_149_, 1);
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lean_array_fget(v_a_142_, v___x_151_);
lean_dec(v_a_142_);
v___x_153_ = l_Lean_Json_getStr_x3f(v___x_152_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
lean_dec(v_a_150_);
v_a_154_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_153_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_170_; 
v_a_162_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_170_ == 0)
{
v___x_164_ = v___x_153_;
v_isShared_165_ = v_isSharedCheck_170_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_153_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_170_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_166_ = l_Lean_Name_str___override(v_a_150_, v_a_162_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_166_);
v___x_168_ = v___x_164_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
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
lean_object* v___x_171_; 
lean_dec(v_j_75_);
v___x_171_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5));
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(uint8_t v_x_184_){
_start:
{
switch(v_x_184_)
{
case 0:
{
lean_object* v___x_185_; 
v___x_185_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1));
return v___x_185_;
}
case 1:
{
lean_object* v___x_186_; 
v___x_186_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3));
return v___x_186_;
}
case 2:
{
lean_object* v___x_187_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5));
return v___x_187_;
}
default: 
{
lean_object* v___x_188_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7));
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___boxed(lean_object* v_x_189_){
_start:
{
uint8_t v_x_64__boxed_190_; lean_object* v_res_191_; 
v_x_64__boxed_190_ = lean_unbox(v_x_189_);
v_res_191_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(v_x_64__boxed_190_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(lean_object* v_x_205_){
_start:
{
lean_object* v_j_207_; 
if (lean_obj_tag(v_x_205_) == 3)
{
lean_object* v_s_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v_s_213_ = lean_ctor_get(v_x_205_, 0);
v___x_214_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0));
v___x_215_ = lean_string_dec_eq(v_s_213_, v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2));
v___x_217_ = lean_string_dec_eq(v_s_213_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_218_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4));
v___x_219_ = lean_string_dec_eq(v_s_213_, v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6));
v___x_221_ = lean_string_dec_eq(v_s_213_, v___x_220_);
if (v___x_221_ == 0)
{
v_j_207_ = v_x_205_;
goto v___jp_206_;
}
else
{
lean_object* v___x_222_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_222_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1));
return v___x_222_;
}
}
else
{
lean_object* v___x_223_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_223_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2));
return v___x_223_;
}
}
else
{
lean_object* v___x_224_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_224_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3));
return v___x_224_;
}
}
else
{
lean_object* v___x_225_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_225_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4));
return v___x_225_;
}
}
else
{
v_j_207_ = v_x_205_;
goto v___jp_206_;
}
v___jp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_208_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0));
v___x_209_ = lean_unsigned_to_nat(80u);
v___x_210_ = l_Lean_Json_pretty(v_j_207_, v___x_209_);
v___x_211_ = lean_string_append(v___x_208_, v___x_210_);
lean_dec_ref(v___x_210_);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson(lean_object* v_x_228_){
_start:
{
if (lean_obj_tag(v_x_228_) == 0)
{
lean_object* v_val_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_242_; 
v_val_229_ = lean_ctor_get(v_x_228_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v_x_228_);
if (v_isSharedCheck_242_ == 0)
{
v___x_231_ = v_x_228_;
v_isShared_232_ = v_isSharedCheck_242_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_val_229_);
lean_dec(v_x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_242_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v___x_233_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0));
v___x_234_ = l_Lean_JsonNumber_fromNat(v_val_229_);
if (v_isShared_232_ == 0)
{
lean_ctor_set_tag(v___x_231_, 2);
lean_ctor_set(v___x_231_, 0, v___x_234_);
v___x_236_ = v___x_231_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_241_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_233_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = l_Lean_Json_mkObj(v___x_239_);
lean_dec_ref_known(v___x_239_, 2);
return v___x_240_;
}
}
}
else
{
lean_object* v_val_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_255_; 
v_val_243_ = lean_ctor_get(v_x_228_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v_x_228_);
if (v_isSharedCheck_255_ == 0)
{
v___x_245_ = v_x_228_;
v_isShared_246_ = v_isSharedCheck_255_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_val_243_);
lean_dec(v_x_228_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_255_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1));
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 3);
v___x_249_ = v___x_245_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_val_243_);
v___x_249_ = v_reuseFailAlloc_254_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_247_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_box(0);
v___x_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = l_Lean_Json_mkObj(v___x_252_);
lean_dec_ref_known(v___x_252_, 2);
return v___x_253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f(lean_object* v_j_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0));
lean_inc(v_j_257_);
v___x_259_ = l_Lean_Json_getObjVal_x3f(v_j_257_, v___x_258_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_298_; 
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_298_ == 0)
{
lean_object* v_unused_299_; 
v_unused_299_ = lean_ctor_get(v___x_259_, 0);
lean_dec(v_unused_299_);
v___x_261_ = v___x_259_;
v_isShared_262_ = v_isSharedCheck_298_;
goto v_resetjp_260_;
}
else
{
lean_dec(v___x_259_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_298_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1));
lean_inc(v_j_257_);
v___x_264_ = l_Lean_Json_getObjVal_x3f(v_j_257_, v___x_263_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_275_; 
lean_del_object(v___x_261_);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_275_ == 0)
{
lean_object* v_unused_276_; 
v_unused_276_ = lean_ctor_get(v___x_264_, 0);
lean_dec(v_unused_276_);
v___x_266_ = v___x_264_;
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
else
{
lean_dec(v___x_264_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_268_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0));
v___x_269_ = lean_unsigned_to_nat(80u);
v___x_270_ = l_Lean_Json_pretty(v_j_257_, v___x_269_);
v___x_271_ = lean_string_append(v___x_268_, v___x_270_);
lean_dec_ref(v___x_270_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_271_);
v___x_273_ = v___x_266_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_278_; 
lean_dec(v_j_257_);
v_a_277_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_264_, 1);
v___x_278_ = l_Lean_Json_getStr_x3f(v_a_277_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_del_object(v___x_261_);
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_297_; 
v_a_287_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_297_ == 0)
{
v___x_289_ = v___x_278_;
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_278_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_262_ == 0)
{
lean_ctor_set_tag(v___x_261_, 1);
lean_ctor_set(v___x_261_, 0, v_a_287_);
v___x_292_ = v___x_261_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_296_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_294_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_292_);
v___x_294_ = v___x_289_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_324_; 
lean_dec(v_j_257_);
v_a_300_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_324_ == 0)
{
v___x_302_ = v___x_259_;
v_isShared_303_ = v_isSharedCheck_324_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_259_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_324_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_Json_getNat_x3f(v_a_300_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
lean_del_object(v___x_302_);
v_a_305_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_304_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_304_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_323_; 
v_a_313_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_323_ == 0)
{
v___x_315_ = v___x_304_;
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_304_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set_tag(v___x_302_, 0);
lean_ctor_set(v___x_302_, 0, v_a_313_);
v___x_318_ = v___x_302_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_322_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_320_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_318_);
v___x_320_ = v___x_315_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2));
v___x_333_ = l_Lean_Json_mkObj(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(lean_object* v_x_339_){
_start:
{
switch(lean_obj_tag(v_x_339_))
{
case 0:
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3);
return v___x_340_;
}
case 1:
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_a_341_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v_x_339_, 1);
v___x_342_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4));
v___x_343_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_341_);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = lean_box(0);
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_344_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = l_Lean_Json_mkObj(v___x_346_);
lean_dec_ref_known(v___x_346_, 2);
return v___x_347_;
}
case 2:
{
lean_object* v_a_348_; lean_object* v_a_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_a_348_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_348_);
v_a_349_ = lean_ctor_get(v_x_339_, 1);
lean_inc(v_a_349_);
lean_dec_ref_known(v_x_339_, 2);
v___x_350_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5));
v___x_351_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_348_);
v___x_352_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_349_);
v___x_353_ = lean_unsigned_to_nat(2u);
v___x_354_ = lean_mk_empty_array_with_capacity(v___x_353_);
v___x_355_ = lean_array_push(v___x_354_, v___x_351_);
v___x_356_ = lean_array_push(v___x_355_, v___x_352_);
v___x_357_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_350_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = lean_box(0);
v___x_360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_358_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = l_Lean_Json_mkObj(v___x_360_);
lean_dec_ref_known(v___x_360_, 2);
return v___x_361_;
}
case 3:
{
lean_object* v_a_362_; lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_a_362_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_362_);
v_a_363_ = lean_ctor_get(v_x_339_, 1);
lean_inc(v_a_363_);
lean_dec_ref_known(v_x_339_, 2);
v___x_364_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6));
v___x_365_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_362_);
v___x_366_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_363_);
v___x_367_ = lean_unsigned_to_nat(2u);
v___x_368_ = lean_mk_empty_array_with_capacity(v___x_367_);
v___x_369_ = lean_array_push(v___x_368_, v___x_365_);
v___x_370_ = lean_array_push(v___x_369_, v___x_366_);
v___x_371_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_364_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = lean_box(0);
v___x_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = l_Lean_Json_mkObj(v___x_374_);
lean_dec_ref_known(v___x_374_, 2);
return v___x_375_;
}
case 4:
{
lean_object* v_a_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_a_376_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_376_);
lean_dec_ref_known(v_x_339_, 1);
v___x_377_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7));
v___x_378_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_a_376_);
v___x_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = lean_box(0);
v___x_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = l_Lean_Json_mkObj(v___x_381_);
lean_dec_ref_known(v___x_381_, 2);
return v___x_382_;
}
default: 
{
lean_object* v_a_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_a_383_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_383_);
lean_dec_ref_known(v_x_339_, 1);
v___x_384_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
v___x_385_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_a_383_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_box(0);
v___x_388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = l_Lean_Json_mkObj(v___x_388_);
lean_dec_ref_known(v___x_388_, 2);
return v___x_389_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(lean_object* v_j_399_){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0));
lean_inc(v_j_399_);
v___x_401_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_402_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4));
lean_inc(v_j_399_);
v___x_403_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec_ref_known(v___x_403_, 1);
v___x_404_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5));
lean_inc(v_j_399_);
v___x_405_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref_known(v___x_405_, 1);
v___x_406_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6));
lean_inc(v_j_399_);
v___x_407_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_406_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref_known(v___x_407_, 1);
v___x_408_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7));
lean_inc(v_j_399_);
v___x_409_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_408_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec_ref_known(v___x_409_, 1);
v___x_410_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
lean_inc(v_j_399_);
v___x_411_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_422_; 
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_422_ == 0)
{
lean_object* v_unused_423_; 
v_unused_423_ = lean_ctor_get(v___x_411_, 0);
lean_dec(v_unused_423_);
v___x_413_ = v___x_411_;
v_isShared_414_ = v_isSharedCheck_422_;
goto v_resetjp_412_;
}
else
{
lean_dec(v___x_411_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_422_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_415_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0));
v___x_416_ = lean_unsigned_to_nat(80u);
v___x_417_ = l_Lean_Json_pretty(v_j_399_, v___x_416_);
v___x_418_ = lean_string_append(v___x_415_, v___x_417_);
lean_dec_ref(v___x_417_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 0, v___x_418_);
v___x_420_ = v___x_413_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_418_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_425_; 
lean_dec(v_j_399_);
v_a_424_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_411_, 1);
v___x_425_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_425_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_425_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_442_; 
v_a_434_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_442_ == 0)
{
v___x_436_ = v___x_425_;
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_425_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v___x_440_; 
v___x_438_ = l_Lean_Level_mvar___override(v_a_434_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_438_);
v___x_440_ = v___x_436_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_444_; 
lean_dec(v_j_399_);
v_a_443_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_409_, 1);
v___x_444_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_443_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_461_; 
v_a_453_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_461_ == 0)
{
v___x_455_ = v___x_444_;
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_444_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_457_ = l_Lean_Level_param___override(v_a_453_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 0, v___x_457_);
v___x_459_ = v___x_455_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_457_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
else
{
lean_object* v_a_462_; lean_object* v___x_463_; 
lean_dec(v_j_399_);
v_a_462_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___x_407_, 1);
v___x_463_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_462_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v_a_472_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_463_, 1);
v___x_473_ = lean_array_get_size(v_a_472_);
v___x_474_ = lean_unsigned_to_nat(2u);
v___x_475_ = lean_nat_dec_eq(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
lean_dec(v_a_472_);
v___x_476_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2));
return v___x_476_;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = lean_array_fget_borrowed(v_a_472_, v___x_477_);
lean_inc(v___x_478_);
v___x_479_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_dec(v_a_472_);
return v___x_479_;
}
else
{
lean_object* v_a_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_a_480_);
lean_dec_ref_known(v___x_479_, 1);
v___x_481_ = lean_unsigned_to_nat(1u);
v___x_482_ = lean_array_fget(v_a_472_, v___x_481_);
lean_dec(v_a_472_);
v___x_483_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_482_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_dec(v_a_480_);
return v___x_483_;
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_492_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_492_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_492_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_492_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_488_ = l_Lean_Level_imax___override(v_a_480_, v_a_484_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_488_);
v___x_490_ = v___x_486_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_488_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
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
lean_object* v_a_493_; lean_object* v___x_494_; 
lean_dec(v_j_399_);
v_a_493_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___x_405_, 1);
v___x_494_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_493_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_494_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_494_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_504_; lean_object* v___x_505_; uint8_t v___x_506_; 
v_a_503_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_494_, 1);
v___x_504_ = lean_array_get_size(v_a_503_);
v___x_505_ = lean_unsigned_to_nat(2u);
v___x_506_ = lean_nat_dec_eq(v___x_504_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_dec(v_a_503_);
v___x_507_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4));
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = lean_array_fget_borrowed(v_a_503_, v___x_508_);
lean_inc(v___x_509_);
v___x_510_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_509_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_dec(v_a_503_);
return v___x_510_;
}
else
{
lean_object* v_a_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_510_, 1);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_array_fget(v_a_503_, v___x_512_);
lean_dec(v_a_503_);
v___x_514_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_513_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_dec(v_a_511_);
return v___x_514_;
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v___x_514_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_514_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = l_Lean_Level_max___override(v_a_511_, v_a_515_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v___x_519_);
v___x_521_ = v___x_517_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
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
lean_object* v_a_524_; lean_object* v___x_525_; 
lean_dec(v_j_399_);
v_a_524_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_524_);
lean_dec_ref_known(v___x_403_, 1);
v___x_525_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v_a_524_);
if (lean_obj_tag(v___x_525_) == 0)
{
return v___x_525_;
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_534_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_534_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_530_ = l_Lean_Level_succ___override(v_a_526_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_530_);
v___x_532_ = v___x_528_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
else
{
lean_object* v___x_535_; 
lean_dec_ref_known(v___x_401_, 1);
lean_dec(v_j_399_);
v___x_535_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5));
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(size_t v_sz_536_, size_t v_i_537_, lean_object* v_bs_538_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_usize_dec_lt(v_i_537_, v_sz_536_);
if (v___x_539_ == 0)
{
return v_bs_538_;
}
else
{
lean_object* v_v_540_; lean_object* v___x_541_; lean_object* v_bs_x27_542_; lean_object* v___x_543_; size_t v___x_544_; size_t v___x_545_; lean_object* v___x_546_; 
v_v_540_ = lean_array_uget(v_bs_538_, v_i_537_);
v___x_541_ = lean_unsigned_to_nat(0u);
v_bs_x27_542_ = lean_array_uset(v_bs_538_, v_i_537_, v___x_541_);
v___x_543_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_v_540_);
v___x_544_ = ((size_t)1ULL);
v___x_545_ = lean_usize_add(v_i_537_, v___x_544_);
v___x_546_ = lean_array_uset(v_bs_x27_542_, v_i_537_, v___x_543_);
v_i_537_ = v___x_545_;
v_bs_538_ = v___x_546_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0___boxed(lean_object* v_sz_548_, lean_object* v_i_549_, lean_object* v_bs_550_){
_start:
{
size_t v_sz_boxed_551_; size_t v_i_boxed_552_; lean_object* v_res_553_; 
v_sz_boxed_551_ = lean_unbox_usize(v_sz_548_);
lean_dec(v_sz_548_);
v_i_boxed_552_ = lean_unbox_usize(v_i_549_);
lean_dec(v_i_549_);
v_res_553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(v_sz_boxed_551_, v_i_boxed_552_, v_bs_550_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(lean_object* v_x_574_){
_start:
{
switch(lean_obj_tag(v_x_574_))
{
case 0:
{
lean_object* v_deBruijnIndex_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_deBruijnIndex_575_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_deBruijnIndex_575_);
lean_dec_ref_known(v_x_574_, 1);
v___x_576_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0));
v___x_577_ = l_Lean_JsonNumber_fromNat(v_deBruijnIndex_575_);
v___x_578_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
v___x_579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_576_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = lean_box(0);
v___x_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = l_Lean_Json_mkObj(v___x_581_);
lean_dec_ref_known(v___x_581_, 2);
return v___x_582_;
}
case 1:
{
lean_object* v_fvarId_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_fvarId_583_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_fvarId_583_);
lean_dec_ref_known(v_x_574_, 1);
v___x_584_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1));
v___x_585_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_fvarId_583_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = lean_box(0);
v___x_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_Json_mkObj(v___x_588_);
lean_dec_ref_known(v___x_588_, 2);
return v___x_589_;
}
case 2:
{
lean_object* v_mvarId_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_mvarId_590_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_mvarId_590_);
lean_dec_ref_known(v_x_574_, 1);
v___x_591_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
v___x_592_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_mvarId_590_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_box(0);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = l_Lean_Json_mkObj(v___x_595_);
lean_dec_ref_known(v___x_595_, 2);
return v___x_596_;
}
case 3:
{
lean_object* v_u_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_u_597_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_u_597_);
lean_dec_ref_known(v_x_574_, 1);
v___x_598_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2));
v___x_599_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_u_597_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = lean_box(0);
v___x_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_600_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
v___x_603_ = l_Lean_Json_mkObj(v___x_602_);
lean_dec_ref_known(v___x_602_, 2);
return v___x_603_;
}
case 4:
{
lean_object* v_declName_604_; lean_object* v_us_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; size_t v_sz_611_; size_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_declName_604_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_declName_604_);
v_us_605_ = lean_ctor_get(v_x_574_, 1);
lean_inc(v_us_605_);
lean_dec_ref_known(v_x_574_, 2);
v___x_606_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3));
v___x_607_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_declName_604_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4));
v___x_610_ = lean_array_mk(v_us_605_);
v_sz_611_ = lean_array_size(v___x_610_);
v___x_612_ = ((size_t)0ULL);
v___x_613_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(v_sz_611_, v___x_612_, v___x_610_);
v___x_614_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_609_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = lean_box(0);
v___x_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_615_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_608_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = l_Lean_Json_mkObj(v___x_618_);
lean_dec_ref_known(v___x_618_, 2);
return v___x_619_;
}
case 5:
{
lean_object* v_fn_620_; lean_object* v_arg_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_fn_620_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_fn_620_);
v_arg_621_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_arg_621_);
lean_dec_ref_known(v_x_574_, 2);
v___x_622_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5));
v___x_623_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_fn_620_);
v___x_624_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_arg_621_);
v___x_625_ = lean_unsigned_to_nat(2u);
v___x_626_ = lean_mk_empty_array_with_capacity(v___x_625_);
v___x_627_ = lean_array_push(v___x_626_, v___x_623_);
v___x_628_ = lean_array_push(v___x_627_, v___x_624_);
v___x_629_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_622_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = lean_box(0);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = l_Lean_Json_mkObj(v___x_632_);
lean_dec_ref_known(v___x_632_, 2);
return v___x_633_;
}
case 6:
{
lean_object* v_binderName_634_; lean_object* v_binderType_635_; lean_object* v_body_636_; uint8_t v_binderInfo_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_binderName_634_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_binderName_634_);
v_binderType_635_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_binderType_635_);
v_body_636_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_body_636_);
v_binderInfo_637_ = lean_ctor_get_uint8(v_x_574_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_x_574_, 3);
v___x_638_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6));
v___x_639_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_640_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_binderName_634_);
v___x_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_643_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_binderType_635_);
v___x_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
v___x_646_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_body_636_);
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_645_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_649_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(v_binderInfo_637_);
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = lean_box(0);
v___x_652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_650_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_647_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_644_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_641_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = l_Lean_Json_mkObj(v___x_655_);
lean_dec_ref_known(v___x_655_, 2);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_638_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_651_);
v___x_659_ = l_Lean_Json_mkObj(v___x_658_);
lean_dec_ref_known(v___x_658_, 2);
return v___x_659_;
}
case 7:
{
lean_object* v_binderName_660_; lean_object* v_binderType_661_; lean_object* v_body_662_; uint8_t v_binderInfo_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_binderName_660_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_binderName_660_);
v_binderType_661_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_binderType_661_);
v_body_662_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_body_662_);
v_binderInfo_663_ = lean_ctor_get_uint8(v_x_574_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_x_574_, 3);
v___x_664_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11));
v___x_665_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_666_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_binderName_660_);
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_669_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_binderType_661_);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
v___x_672_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_body_662_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_675_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(v_binderInfo_663_);
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_674_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = lean_box(0);
v___x_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_676_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_673_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v___x_680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_670_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v___x_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_667_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_Json_mkObj(v___x_681_);
lean_dec_ref_known(v___x_681_, 2);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_664_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
lean_ctor_set(v___x_684_, 1, v___x_677_);
v___x_685_ = l_Lean_Json_mkObj(v___x_684_);
lean_dec_ref_known(v___x_684_, 2);
return v___x_685_;
}
case 8:
{
lean_object* v_declName_686_; lean_object* v_type_687_; lean_object* v_value_688_; lean_object* v_body_689_; uint8_t v_nondep_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_declName_686_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_declName_686_);
v_type_687_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_type_687_);
v_value_688_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_value_688_);
v_body_689_ = lean_ctor_get(v_x_574_, 3);
lean_inc_ref(v_body_689_);
v_nondep_690_ = lean_ctor_get_uint8(v_x_574_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_x_574_, 4);
v___x_691_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12));
v___x_692_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_693_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_declName_686_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_692_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___x_695_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_696_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_type_687_);
v___x_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
v___x_699_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_value_688_);
v___x_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
v___x_701_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
v___x_702_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_body_689_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14));
v___x_705_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_705_, 0, v_nondep_690_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_704_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = lean_box(0);
v___x_708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_706_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_703_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
v___x_710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_700_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_697_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_694_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = l_Lean_Json_mkObj(v___x_712_);
lean_dec_ref_known(v___x_712_, 2);
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_691_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
lean_ctor_set(v___x_715_, 1, v___x_707_);
v___x_716_ = l_Lean_Json_mkObj(v___x_715_);
lean_dec_ref_known(v___x_715_, 2);
return v___x_716_;
}
case 9:
{
lean_object* v_a_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_a_717_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_a_717_);
lean_dec_ref_known(v_x_574_, 1);
v___x_718_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15));
v___x_719_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson(v_a_717_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_box(0);
v___x_722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
v___x_723_ = l_Lean_Json_mkObj(v___x_722_);
lean_dec_ref_known(v___x_722_, 2);
return v___x_723_;
}
case 10:
{
lean_object* v_expr_724_; 
v_expr_724_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_expr_724_);
lean_dec_ref_known(v_x_574_, 2);
v_x_574_ = v_expr_724_;
goto _start;
}
default: 
{
lean_object* v_typeName_726_; lean_object* v_idx_727_; lean_object* v_struct_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v_typeName_726_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_typeName_726_);
v_idx_727_ = lean_ctor_get(v_x_574_, 1);
lean_inc(v_idx_727_);
v_struct_728_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_struct_728_);
lean_dec_ref_known(v_x_574_, 3);
v___x_729_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16));
v___x_730_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17));
v___x_731_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_typeName_726_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18));
v___x_734_ = l_Lean_JsonNumber_fromNat(v_idx_727_);
v___x_735_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_733_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19));
v___x_738_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_struct_728_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = lean_box(0);
v___x_741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
v___x_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_736_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_732_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = l_Lean_Json_mkObj(v___x_743_);
lean_dec_ref_known(v___x_743_, 2);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_729_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___x_740_);
v___x_747_ = l_Lean_Json_mkObj(v___x_746_);
lean_dec_ref_known(v___x_746_, 2);
return v___x_747_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f_spec__0(lean_object* v_x_748_, lean_object* v_x_749_){
_start:
{
if (lean_obj_tag(v_x_748_) == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = l_List_reverse___redArg(v_x_749_);
v___x_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
else
{
lean_object* v_head_752_; lean_object* v_tail_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_771_; 
v_head_752_ = lean_ctor_get(v_x_748_, 0);
v_tail_753_ = lean_ctor_get(v_x_748_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v_x_748_);
if (v_isSharedCheck_771_ == 0)
{
v___x_755_ = v_x_748_;
v_isShared_756_ = v_isSharedCheck_771_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_tail_753_);
lean_inc(v_head_752_);
lean_dec(v_x_748_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_771_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; 
v___x_757_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v_head_752_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_del_object(v___x_755_);
lean_dec(v_tail_753_);
lean_dec(v_x_749_);
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; 
v_a_766_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_757_, 1);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 1, v_x_749_);
lean_ctor_set(v___x_755_, 0, v_a_766_);
v___x_768_ = v___x_755_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_766_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_x_749_);
v___x_768_ = v_reuseFailAlloc_770_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
v_x_748_ = v_tail_753_;
v_x_749_ = v___x_768_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(lean_object* v_j_776_){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0));
lean_inc(v_j_776_);
v___x_778_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_777_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; 
lean_dec_ref_known(v___x_778_, 1);
v___x_779_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1));
lean_inc(v_j_776_);
v___x_780_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_779_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec_ref_known(v___x_780_, 1);
v___x_781_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
lean_inc(v_j_776_);
v___x_782_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_781_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; 
lean_dec_ref_known(v___x_782_, 1);
v___x_783_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2));
lean_inc(v_j_776_);
v___x_784_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_783_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
lean_dec_ref_known(v___x_784_, 1);
v___x_785_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3));
lean_inc(v_j_776_);
v___x_786_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_785_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v___x_787_; lean_object* v___x_788_; 
lean_dec_ref_known(v___x_786_, 1);
v___x_787_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5));
lean_inc(v_j_776_);
v___x_788_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_787_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec_ref_known(v___x_788_, 1);
v___x_789_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6));
lean_inc(v_j_776_);
v___x_790_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; 
lean_dec_ref_known(v___x_790_, 1);
v___x_791_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11));
lean_inc(v_j_776_);
v___x_792_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
lean_dec_ref_known(v___x_792_, 1);
v___x_793_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12));
lean_inc(v_j_776_);
v___x_794_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_793_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v___x_795_; lean_object* v___x_796_; 
lean_dec_ref_known(v___x_794_, 1);
v___x_795_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15));
lean_inc(v_j_776_);
v___x_796_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_795_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec_ref_known(v___x_796_, 1);
v___x_797_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16));
lean_inc(v_j_776_);
v___x_798_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_797_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_809_; 
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v___x_798_, 0);
lean_dec(v_unused_810_);
v___x_800_ = v___x_798_;
v_isShared_801_ = v_isSharedCheck_809_;
goto v_resetjp_799_;
}
else
{
lean_dec(v___x_798_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_809_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_802_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0));
v___x_803_ = lean_unsigned_to_nat(80u);
v___x_804_ = l_Lean_Json_pretty(v_j_776_, v___x_803_);
v___x_805_ = lean_string_append(v___x_802_, v___x_804_);
lean_dec_ref(v___x_804_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_805_);
v___x_807_ = v___x_800_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec(v_j_776_);
v_a_811_ = lean_ctor_get(v___x_798_, 0);
lean_inc_n(v_a_811_, 2);
lean_dec_ref_known(v___x_798_, 1);
v___x_812_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17));
v___x_813_ = l_Lean_Json_getObjVal_x3f(v_a_811_, v___x_812_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_a_811_);
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_823_; 
v_a_822_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_813_, 1);
v___x_823_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec(v_a_811_);
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
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
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_a_832_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_823_, 1);
v___x_833_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18));
lean_inc(v_a_811_);
v___x_834_ = l_Lean_Json_getObjVal_x3f(v_a_811_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_a_832_);
lean_dec(v_a_811_);
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
else
{
lean_object* v_a_843_; lean_object* v___x_844_; 
v_a_843_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_834_, 1);
v___x_844_ = l_Lean_Json_getNat_x3f(v_a_843_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v_a_832_);
lean_dec(v_a_811_);
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
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
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_a_853_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_844_, 1);
v___x_854_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19));
v___x_855_ = l_Lean_Json_getObjVal_x3f(v_a_811_, v___x_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_a_853_);
lean_dec(v_a_832_);
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_855_, 1);
v___x_865_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_dec(v_a_853_);
lean_dec(v_a_832_);
return v___x_865_;
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_874_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_874_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_870_ = l_Lean_Expr_proj___override(v_a_832_, v_a_853_, v_a_866_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_870_);
v___x_872_ = v___x_868_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
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
lean_object* v_a_875_; lean_object* v___x_876_; 
lean_dec(v_j_776_);
v_a_875_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_796_, 1);
v___x_876_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f(v_a_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_893_; 
v_a_885_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_893_ == 0)
{
v___x_887_ = v___x_876_;
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_876_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_889_ = l_Lean_Expr_lit___override(v_a_885_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_891_ = v___x_887_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec(v_j_776_);
v_a_894_ = lean_ctor_get(v___x_794_, 0);
lean_inc_n(v_a_894_, 2);
lean_dec_ref_known(v___x_794_, 1);
v___x_895_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_896_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec(v_a_894_);
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
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
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_906_; 
v_a_905_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_896_, 1);
v___x_906_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec(v_a_894_);
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_a_915_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_906_, 1);
v___x_916_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc(v_a_894_);
v___x_917_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v_a_915_);
lean_dec(v_a_894_);
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_917_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_927_; 
v_a_926_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_917_, 1);
v___x_927_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_dec(v_a_915_);
lean_dec(v_a_894_);
return v___x_927_;
}
else
{
lean_object* v_a_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
v___x_929_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
lean_inc(v_a_894_);
v___x_930_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_929_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_940_; 
v_a_939_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_930_, 1);
v___x_940_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_939_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
return v___x_940_;
}
else
{
lean_object* v_a_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v___x_942_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
lean_inc(v_a_894_);
v___x_943_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_942_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_953_; 
v_a_952_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_943_, 1);
v___x_953_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_952_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
return v___x_953_;
}
else
{
lean_object* v_a_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14));
v___x_956_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_955_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
lean_dec(v_a_954_);
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
v_a_957_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_956_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_956_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_966_; 
v_a_965_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_956_, 1);
v___x_966_ = l_Lean_Json_getBool_x3f(v_a_965_);
lean_dec(v_a_965_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec(v_a_954_);
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_984_; 
v_a_975_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_984_ == 0)
{
v___x_977_ = v___x_966_;
v_isShared_978_ = v_isSharedCheck_984_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_966_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_984_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_979_ = lean_unbox(v_a_975_);
lean_dec(v_a_975_);
v___x_980_ = l_Lean_Expr_letE___override(v_a_915_, v_a_928_, v_a_941_, v_a_954_, v___x_979_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 0, v___x_980_);
v___x_982_ = v___x_977_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
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
}
}
else
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
lean_dec(v_j_776_);
v_a_985_ = lean_ctor_get(v___x_792_, 0);
lean_inc_n(v_a_985_, 2);
lean_dec_ref_known(v___x_792_, 1);
v___x_986_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_987_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_986_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_a_985_);
v_a_988_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_987_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_987_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_997_; 
v_a_996_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_987_, 1);
v___x_997_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_996_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_dec(v_a_985_);
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v_a_1006_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_997_, 1);
v___x_1007_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc(v_a_985_);
v___x_1008_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_1007_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1018_; 
v_a_1017_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1018_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1017_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
return v___x_1018_;
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
lean_inc(v_a_985_);
v___x_1021_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1031_; 
v_a_1030_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1031_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1030_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
return v___x_1031_;
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v___x_1033_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_1034_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_1033_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v_a_1032_);
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1044_; 
v_a_1043_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1044_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(v_a_1043_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec(v_a_1032_);
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1062_; 
v_a_1053_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1055_ = v___x_1044_;
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1044_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
uint8_t v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1057_ = lean_unbox(v_a_1053_);
lean_dec(v_a_1053_);
v___x_1058_ = l_Lean_Expr_forallE___override(v_a_1006_, v_a_1019_, v_a_1032_, v___x_1057_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1058_);
v___x_1060_ = v___x_1055_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
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
else
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_dec(v_j_776_);
v_a_1063_ = lean_ctor_get(v___x_790_, 0);
lean_inc_n(v_a_1063_, 2);
lean_dec_ref_known(v___x_790_, 1);
v___x_1064_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_1065_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1064_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
lean_dec(v_a_1063_);
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1065_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1065_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1075_; 
v_a_1074_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1075_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1074_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec(v_a_1063_);
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_a_1084_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1085_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc(v_a_1063_);
v___x_1086_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1085_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1096_; 
v_a_1095_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1086_, 1);
v___x_1096_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
return v___x_1096_;
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref_known(v___x_1096_, 1);
v___x_1098_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
lean_inc(v_a_1063_);
v___x_1099_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1109_; 
v_a_1108_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1108_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1109_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1108_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
return v___x_1109_;
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_a_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_a_1110_);
lean_dec_ref_known(v___x_1109_, 1);
v___x_1111_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_1112_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1111_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_a_1110_);
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1112_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1112_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1122_; 
v_a_1121_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1122_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(v_a_1121_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec(v_a_1110_);
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1122_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1122_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1140_; 
v_a_1131_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1133_ = v___x_1122_;
v_isShared_1134_ = v_isSharedCheck_1140_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1122_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1140_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1135_ = lean_unbox(v_a_1131_);
lean_dec(v_a_1131_);
v___x_1136_ = l_Lean_Expr_lam___override(v_a_1084_, v_a_1097_, v_a_1110_, v___x_1135_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
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
else
{
lean_object* v_a_1141_; lean_object* v___x_1142_; 
lean_dec(v_j_776_);
v_a_1141_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_1141_);
lean_dec_ref_known(v___x_788_, 1);
v___x_1142_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_1141_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v_a_1151_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1151_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1152_ = lean_array_get_size(v_a_1151_);
v___x_1153_ = lean_unsigned_to_nat(2u);
v___x_1154_ = lean_nat_dec_eq(v___x_1152_, v___x_1153_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; 
lean_dec(v_a_1151_);
v___x_1155_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2));
return v___x_1155_;
}
else
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1156_ = lean_unsigned_to_nat(0u);
v___x_1157_ = lean_array_fget_borrowed(v_a_1151_, v___x_1156_);
lean_inc(v___x_1157_);
v___x_1158_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v___x_1157_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_dec(v_a_1151_);
return v___x_1158_;
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___x_1158_, 1);
v___x_1160_ = lean_unsigned_to_nat(1u);
v___x_1161_ = lean_array_fget(v_a_1151_, v___x_1160_);
lean_dec(v_a_1151_);
v___x_1162_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v___x_1161_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_dec(v_a_1159_);
return v___x_1162_;
}
else
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1171_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1167_ = l_Lean_Expr_app___override(v_a_1159_, v_a_1163_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1167_);
v___x_1169_ = v___x_1165_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
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
lean_object* v_a_1172_; lean_object* v___x_1173_; 
v_a_1172_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_1172_);
lean_dec_ref_known(v___x_786_, 1);
v___x_1173_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1172_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
lean_dec(v_j_776_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v_a_1182_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1173_, 1);
v___x_1183_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4));
v___x_1184_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_1183_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec(v_a_1182_);
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1194_; 
v_a_1193_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1193_);
lean_dec_ref_known(v___x_1184_, 1);
v___x_1194_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_1193_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
lean_dec(v_a_1182_);
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1194_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1194_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v_a_1203_ = lean_ctor_get(v___x_1194_, 0);
lean_inc(v_a_1203_);
lean_dec_ref_known(v___x_1194_, 1);
v___x_1204_ = lean_array_to_list(v_a_1203_);
v___x_1205_ = lean_box(0);
v___x_1206_ = l_List_mapM_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f_spec__0(v___x_1204_, v___x_1205_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
lean_dec(v_a_1182_);
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v___x_1206_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1206_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1223_; 
v_a_1215_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1217_ = v___x_1206_;
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1206_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1223_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1221_; 
v___x_1219_ = l_Lean_Expr_const___override(v_a_1182_, v_a_1215_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 0, v___x_1219_);
v___x_1221_ = v___x_1217_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1219_);
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
}
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1225_; 
lean_dec(v_j_776_);
v_a_1224_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v___x_784_, 1);
v___x_1225_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v_a_1224_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1225_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1225_);
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
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1242_; 
v_a_1234_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1236_ = v___x_1225_;
v_isShared_1237_ = v_isSharedCheck_1242_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1225_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1242_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1240_; 
v___x_1238_ = l_Lean_Expr_sort___override(v_a_1234_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 0, v___x_1238_);
v___x_1240_ = v___x_1236_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v___x_1238_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1244_; 
lean_dec(v_j_776_);
v_a_1243_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_782_, 1);
v___x_1244_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1243_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1244_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1244_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1261_; 
v_a_1253_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1255_ = v___x_1244_;
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1244_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1257_ = l_Lean_Expr_mvar___override(v_a_1253_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 0, v___x_1257_);
v___x_1259_ = v___x_1255_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1257_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
}
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1263_; 
lean_dec(v_j_776_);
v_a_1262_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_780_, 1);
v___x_1263_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1262_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
else
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1280_; 
v_a_1272_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1274_ = v___x_1263_;
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1263_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = l_Lean_Expr_fvar___override(v_a_1272_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 0, v___x_1276_);
v___x_1278_ = v___x_1274_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1282_; 
lean_dec(v_j_776_);
v_a_1281_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_778_, 1);
v___x_1282_ = l_Lean_Json_getNat_x3f(v_a_1281_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1282_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1282_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1299_; 
v_a_1291_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1293_ = v___x_1282_;
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1282_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___x_1295_ = l_Lean_Expr_bvar___override(v_a_1291_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1295_);
v___x_1297_ = v___x_1293_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
}
LEAN_EXPORT uint16_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(lean_object* v_siteId_1300_){
_start:
{
uint64_t v_h_1301_; uint64_t v___x_1302_; uint64_t v___x_1303_; uint64_t v___x_1304_; uint64_t v___x_1305_; uint16_t v___x_1306_; 
v_h_1301_ = lean_string_hash(v_siteId_1300_);
v___x_1302_ = 55535ULL;
v___x_1303_ = lean_uint64_mod(v_h_1301_, v___x_1302_);
v___x_1304_ = 10000ULL;
v___x_1305_ = lean_uint64_add(v___x_1303_, v___x_1304_);
v___x_1306_ = lean_uint64_to_uint16(v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort___boxed(lean_object* v_siteId_1307_){
_start:
{
uint16_t v_res_1308_; lean_object* v_r_1309_; 
v_res_1308_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(v_siteId_1307_);
lean_dec_ref(v_siteId_1307_);
v_r_1309_ = lean_box(v_res_1308_);
return v_r_1309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0(lean_object* v___x_1310_, lean_object* v_x_1311_){
_start:
{
if (lean_obj_tag(v_x_1311_) == 0)
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = lean_mk_io_user_error(v___x_1310_);
v___x_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
return v___x_1313_;
}
else
{
lean_object* v_val_1314_; 
lean_dec_ref(v___x_1310_);
v_val_1314_ = lean_ctor_get(v_x_1311_, 0);
lean_inc(v_val_1314_);
return v_val_1314_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0___boxed(lean_object* v___x_1315_, lean_object* v_x_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0(v___x_1315_, v_x_1316_);
lean_dec(v_x_1316_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__1(lean_object* v___f_1318_, lean_object* v_x_1319_){
_start:
{
if (lean_obj_tag(v_x_1319_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1329_; 
lean_dec_ref(v___f_1318_);
v_a_1321_ = lean_ctor_get(v_x_1319_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_x_1319_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1323_ = v_x_1319_;
v_isShared_1324_ = v_isSharedCheck_1329_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v_x_1319_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1329_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1321_);
v___x_1326_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
return v___x_1327_;
}
}
}
else
{
lean_object* v_a_1330_; 
v_a_1330_ = lean_ctor_get(v_x_1319_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v_x_1319_, 1);
if (lean_obj_tag(v_a_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1339_; 
lean_dec_ref(v___f_1318_);
v_a_1331_ = lean_ctor_get(v_a_1330_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_a_1330_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1333_ = v_a_1330_;
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v_a_1330_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
return v___x_1337_;
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v_a_1340_ = lean_ctor_get(v_a_1330_, 0);
lean_inc(v_a_1340_);
lean_dec_ref_known(v_a_1330_, 1);
v___x_1341_ = lean_io_promise_result_opt(v_a_1340_);
lean_dec(v_a_1340_);
v___x_1342_ = lean_unsigned_to_nat(0u);
v___x_1343_ = 0;
v___x_1344_ = lean_task_map(v___f_1318_, v___x_1341_, v___x_1342_, v___x_1343_);
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
return v___x_1345_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__1___boxed(lean_object* v___f_1346_, lean_object* v_x_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__1(v___f_1346_, v_x_1347_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(lean_object* v_client_1356_, lean_object* v_msg_1357_){
_start:
{
lean_object* v_bytes_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v_header_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___f_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; lean_object* v_val_1373_; lean_object* v___x_1382_; 
v_bytes_1359_ = lean_string_to_utf8(v_msg_1357_);
v___x_1360_ = lean_byte_array_size(v_bytes_1359_);
v___x_1361_ = l_Nat_reprFast(v___x_1360_);
v___x_1362_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0));
v___x_1363_ = lean_string_append(v___x_1361_, v___x_1362_);
v_header_1364_ = lean_string_to_utf8(v___x_1363_);
v___x_1365_ = lean_unsigned_to_nat(2u);
v___x_1366_ = lean_mk_empty_array_with_capacity(v___x_1365_);
v___x_1367_ = lean_array_push(v___x_1366_, v_header_1364_);
v___x_1368_ = lean_array_push(v___x_1367_, v_bytes_1359_);
v___f_1369_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__3));
v___x_1370_ = lean_unsigned_to_nat(0u);
v___x_1371_ = 0;
v___x_1382_ = lean_uv_tcp_send(v_client_1356_, v___x_1368_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1382_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1382_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
lean_ctor_set_tag(v___x_1385_, 1);
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
v_val_1373_ = v___x_1388_;
goto v___jp_1372_;
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
v_a_1391_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1382_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1382_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
lean_ctor_set_tag(v___x_1393_, 0);
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
v_val_1373_ = v___x_1396_;
goto v___jp_1372_;
}
}
}
v___jp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1374_, 0, v_val_1373_);
v___x_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
v___x_1376_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1370_, v___x_1371_, v___x_1375_, v___f_1369_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_a_1377_);
lean_dec_ref_known(v___x_1376_, 1);
v___x_1378_ = lean_task_pure(v_a_1377_);
v___x_1379_ = l_Std_Async_AsyncTask_block___redArg(v___x_1378_);
return v___x_1379_;
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1381_; 
v_a_1380_ = lean_ctor_get(v___x_1376_, 0);
lean_inc_ref(v_a_1380_);
lean_dec_ref_known(v___x_1376_, 1);
v___x_1381_ = l_Std_Async_AsyncTask_block___redArg(v_a_1380_);
return v___x_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___boxed(lean_object* v_client_1399_, lean_object* v_msg_1400_, lean_object* v_a_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(v_client_1399_, v_msg_1400_);
lean_dec(v_client_1399_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__1(lean_object* v___f_1403_, lean_object* v_x_1404_){
_start:
{
if (lean_obj_tag(v_x_1404_) == 0)
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1414_; 
lean_dec_ref(v___f_1403_);
v_a_1406_ = lean_ctor_get(v_x_1404_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_x_1404_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1408_ = v_x_1404_;
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v_x_1404_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
return v___x_1412_;
}
}
}
else
{
lean_object* v_a_1415_; 
v_a_1415_ = lean_ctor_get(v_x_1404_, 0);
lean_inc(v_a_1415_);
lean_dec_ref_known(v_x_1404_, 1);
if (lean_obj_tag(v_a_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1424_; 
lean_dec_ref(v___f_1403_);
v_a_1416_ = lean_ctor_get(v_a_1415_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v_a_1415_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1418_ = v_a_1415_;
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v_a_1415_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1424_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1421_; 
if (v_isShared_1419_ == 0)
{
v___x_1421_ = v___x_1418_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1416_);
v___x_1421_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1422_; 
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
return v___x_1422_;
}
}
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; uint8_t v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v_a_1425_ = lean_ctor_get(v_a_1415_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v_a_1415_, 1);
v___x_1426_ = lean_io_promise_result_opt(v_a_1425_);
lean_dec(v_a_1425_);
v___x_1427_ = lean_unsigned_to_nat(0u);
v___x_1428_ = 0;
v___x_1429_ = lean_task_map(v___f_1403_, v___x_1426_, v___x_1427_, v___x_1428_);
v___x_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
return v___x_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__1___boxed(lean_object* v___f_1431_, lean_object* v_x_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__1(v___f_1431_, v_x_1432_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0(lean_object* v___x_1435_, lean_object* v_x_1436_){
_start:
{
if (lean_obj_tag(v_x_1436_) == 0)
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1437_ = lean_mk_io_user_error(v___x_1435_);
v___x_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1437_);
return v___x_1438_;
}
else
{
lean_object* v_val_1439_; 
lean_dec_ref(v___x_1435_);
v_val_1439_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_val_1439_);
return v_val_1439_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0___boxed(lean_object* v___x_1440_, lean_object* v_x_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0(v___x_1440_, v_x_1441_);
lean_dec(v_x_1441_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(lean_object* v_client_1450_, lean_object* v_a_1451_){
_start:
{
lean_object* v___y_1454_; uint8_t v___y_1455_; uint8_t v___x_1464_; lean_object* v_a_1466_; uint64_t v___x_1493_; lean_object* v___f_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; lean_object* v_val_1498_; lean_object* v___x_1505_; 
v___x_1464_ = 0;
v___x_1493_ = 1ULL;
v___f_1494_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3));
v___x_1495_ = lean_unsigned_to_nat(0u);
v___x_1496_ = 0;
v___x_1505_ = lean_uv_tcp_recv(v_client_1450_, v___x_1493_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1513_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1508_ = v___x_1505_;
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_dec(v___x_1505_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1511_; 
if (v_isShared_1509_ == 0)
{
lean_ctor_set_tag(v___x_1508_, 1);
v___x_1511_ = v___x_1508_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1506_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
v_val_1498_ = v___x_1511_;
goto v___jp_1497_;
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
v_a_1514_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1505_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1505_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
lean_ctor_set_tag(v___x_1516_, 0);
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
v_val_1498_ = v___x_1519_;
goto v___jp_1497_;
}
}
}
v___jp_1453_:
{
uint8_t v___x_1456_; uint8_t v___x_1457_; 
v___x_1456_ = 10;
v___x_1457_ = lean_uint8_dec_eq(v___y_1455_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1458_ = lean_unsigned_to_nat(0u);
v___x_1459_ = lean_byte_array_size(v_a_1451_);
v___x_1460_ = lean_byte_array_size(v___y_1454_);
v___x_1461_ = lean_byte_array_copy_slice(v___y_1454_, v___x_1458_, v_a_1451_, v___x_1459_, v___x_1460_, v___x_1457_);
lean_dec_ref(v___y_1454_);
v_a_1451_ = v___x_1461_;
goto _start;
}
else
{
lean_object* v___x_1463_; 
lean_dec_ref(v___y_1454_);
v___x_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1463_, 0, v_a_1451_);
return v___x_1463_;
}
}
v___jp_1465_:
{
lean_object* v___x_1467_; 
v___x_1467_ = l_Std_Async_AsyncTask_block___redArg(v_a_1466_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1484_; 
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1470_ = v___x_1467_;
v_isShared_1471_ = v_isSharedCheck_1484_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1467_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1484_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
if (lean_obj_tag(v_a_1468_) == 1)
{
lean_object* v_val_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; 
lean_del_object(v___x_1470_);
v_val_1472_ = lean_ctor_get(v_a_1468_, 0);
lean_inc(v_val_1472_);
lean_dec_ref_known(v_a_1468_, 1);
v___x_1473_ = lean_unsigned_to_nat(0u);
v___x_1474_ = lean_byte_array_size(v_val_1472_);
v___x_1475_ = lean_nat_dec_lt(v___x_1473_, v___x_1474_);
if (v___x_1475_ == 0)
{
lean_object* v___x_1476_; lean_object* v___x_1477_; uint8_t v___x_1478_; 
v___x_1476_ = lean_box(v___x_1464_);
v___x_1477_ = l_outOfBounds___redArg(v___x_1476_);
lean_dec(v___x_1476_);
v___x_1478_ = lean_unbox(v___x_1477_);
lean_dec(v___x_1477_);
v___y_1454_ = v_val_1472_;
v___y_1455_ = v___x_1478_;
goto v___jp_1453_;
}
else
{
uint8_t v___x_1479_; 
v___x_1479_ = lean_byte_array_fget(v_val_1472_, v___x_1473_);
v___y_1454_ = v_val_1472_;
v___y_1455_ = v___x_1479_;
goto v___jp_1453_;
}
}
else
{
lean_object* v___x_1480_; lean_object* v___x_1482_; 
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1451_);
v___x_1480_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1));
if (v_isShared_1471_ == 0)
{
lean_ctor_set_tag(v___x_1470_, 1);
lean_ctor_set(v___x_1470_, 0, v___x_1480_);
v___x_1482_ = v___x_1470_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec_ref(v_a_1451_);
v_a_1485_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1467_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1467_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
v___jp_1497_:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v_val_1498_);
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
v___x_1501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1495_, v___x_1496_, v___x_1500_, v___f_1494_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = lean_task_pure(v_a_1502_);
v_a_1466_ = v___x_1503_;
goto v___jp_1465_;
}
else
{
lean_object* v_a_1504_; 
v_a_1504_ = lean_ctor_get(v___x_1501_, 0);
lean_inc_ref(v_a_1504_);
lean_dec_ref_known(v___x_1501_, 1);
v_a_1466_ = v_a_1504_;
goto v___jp_1465_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___boxed(lean_object* v_client_1522_, lean_object* v_a_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(v_client_1522_, v_a_1523_);
lean_dec(v_client_1522_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(lean_object* v_val_1526_, lean_object* v_client_1527_, lean_object* v_a_1528_){
_start:
{
lean_object* v_a_1531_; lean_object* v___x_1557_; uint8_t v___x_1558_; 
v___x_1557_ = lean_byte_array_size(v_a_1528_);
v___x_1558_ = lean_nat_dec_lt(v___x_1557_, v_val_1526_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_a_1528_);
return v___x_1559_;
}
else
{
lean_object* v___x_1560_; uint64_t v___x_1561_; lean_object* v___f_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; lean_object* v_val_1566_; lean_object* v___x_1573_; 
v___x_1560_ = lean_nat_sub(v_val_1526_, v___x_1557_);
v___x_1561_ = lean_uint64_of_nat(v___x_1560_);
lean_dec(v___x_1560_);
v___f_1562_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3));
v___x_1563_ = lean_unsigned_to_nat(0u);
v___x_1564_ = 0;
v___x_1573_ = lean_uv_tcp_recv(v_client_1527_, v___x_1561_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1573_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1573_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
lean_ctor_set_tag(v___x_1576_, 1);
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
v_val_1566_ = v___x_1579_;
goto v___jp_1565_;
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_a_1582_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1573_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1573_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set_tag(v___x_1584_, 0);
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
v_val_1566_ = v___x_1587_;
goto v___jp_1565_;
}
}
}
v___jp_1565_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1567_, 0, v_val_1566_);
v___x_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1567_);
v___x_1569_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1563_, v___x_1564_, v___x_1568_, v___f_1562_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1571_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
lean_inc(v_a_1570_);
lean_dec_ref_known(v___x_1569_, 1);
v___x_1571_ = lean_task_pure(v_a_1570_);
v_a_1531_ = v___x_1571_;
goto v___jp_1530_;
}
else
{
lean_object* v_a_1572_; 
v_a_1572_ = lean_ctor_get(v___x_1569_, 0);
lean_inc_ref(v_a_1572_);
lean_dec_ref_known(v___x_1569_, 1);
v_a_1531_ = v_a_1572_;
goto v___jp_1530_;
}
}
}
v___jp_1530_:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Std_Async_AsyncTask_block___redArg(v_a_1531_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1548_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1535_ = v___x_1532_;
v_isShared_1536_ = v_isSharedCheck_1548_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1532_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1548_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
if (lean_obj_tag(v_a_1533_) == 1)
{
lean_object* v_val_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; uint8_t v___x_1541_; lean_object* v___x_1542_; 
lean_del_object(v___x_1535_);
v_val_1537_ = lean_ctor_get(v_a_1533_, 0);
lean_inc(v_val_1537_);
lean_dec_ref_known(v_a_1533_, 1);
v___x_1538_ = lean_unsigned_to_nat(0u);
v___x_1539_ = lean_byte_array_size(v_a_1528_);
v___x_1540_ = lean_byte_array_size(v_val_1537_);
v___x_1541_ = 0;
v___x_1542_ = lean_byte_array_copy_slice(v_val_1537_, v___x_1538_, v_a_1528_, v___x_1539_, v___x_1540_, v___x_1541_);
lean_dec(v_val_1537_);
v_a_1528_ = v___x_1542_;
goto _start;
}
else
{
lean_object* v___x_1544_; lean_object* v___x_1546_; 
lean_dec(v_a_1533_);
lean_dec_ref(v_a_1528_);
v___x_1544_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1));
if (v_isShared_1536_ == 0)
{
lean_ctor_set_tag(v___x_1535_, 1);
lean_ctor_set(v___x_1535_, 0, v___x_1544_);
v___x_1546_ = v___x_1535_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
lean_dec_ref(v_a_1528_);
v_a_1549_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1532_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1532_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg___boxed(lean_object* v_val_1590_, lean_object* v_client_1591_, lean_object* v_a_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(v_val_1590_, v_client_1591_, v_a_1592_);
lean_dec(v_client_1591_);
lean_dec(v_val_1590_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(lean_object* v_client_1604_){
_start:
{
lean_object* v_header_1606_; lean_object* v___x_1607_; 
v_header_1606_ = l_ByteArray_empty;
v___x_1607_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(v_client_1604_, v_header_1606_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1650_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1610_ = v___x_1607_;
v_isShared_1611_ = v_isSharedCheck_1650_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1607_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1650_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
uint8_t v___x_1612_; 
v___x_1612_ = lean_string_validate_utf8(v_a_1608_);
if (v___x_1612_ == 0)
{
lean_object* v___x_1613_; lean_object* v___x_1615_; 
lean_dec(v_a_1608_);
v___x_1613_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1));
if (v_isShared_1611_ == 0)
{
lean_ctor_set_tag(v___x_1610_, 1);
lean_ctor_set(v___x_1610_, 0, v___x_1613_);
v___x_1615_ = v___x_1610_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1617_ = lean_string_from_utf8_unchecked(v_a_1608_);
v___x_1618_ = lean_unsigned_to_nat(0u);
v___x_1619_ = lean_string_utf8_byte_size(v___x_1617_);
v___x_1620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1617_);
lean_ctor_set(v___x_1620_, 1, v___x_1618_);
lean_ctor_set(v___x_1620_, 2, v___x_1619_);
v___x_1621_ = l_String_Slice_toNat_x3f(v___x_1620_);
lean_dec_ref_known(v___x_1620_, 3);
if (lean_obj_tag(v___x_1621_) == 1)
{
lean_object* v_val_1622_; lean_object* v___x_1623_; 
lean_del_object(v___x_1610_);
v_val_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_val_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1623_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(v_val_1622_, v_client_1604_, v_header_1606_);
lean_dec(v_val_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1637_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1637_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1637_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
uint8_t v___x_1628_; 
v___x_1628_ = lean_string_validate_utf8(v_a_1624_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1631_; 
lean_dec(v_a_1624_);
v___x_1629_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3));
if (v_isShared_1627_ == 0)
{
lean_ctor_set_tag(v___x_1626_, 1);
lean_ctor_set(v___x_1626_, 0, v___x_1629_);
v___x_1631_ = v___x_1626_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1629_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
else
{
lean_object* v___x_1633_; lean_object* v___x_1635_; 
v___x_1633_ = lean_string_from_utf8_unchecked(v_a_1624_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1633_);
v___x_1635_ = v___x_1626_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v___x_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
v_a_1638_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1623_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1623_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
else
{
lean_object* v___x_1646_; lean_object* v___x_1648_; 
lean_dec(v___x_1621_);
v___x_1646_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5));
if (v_isShared_1611_ == 0)
{
lean_ctor_set_tag(v___x_1610_, 1);
lean_ctor_set(v___x_1610_, 0, v___x_1646_);
v___x_1648_ = v___x_1610_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
v_a_1651_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1607_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1607_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___boxed(lean_object* v_client_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(v_client_1659_);
lean_dec(v_client_1659_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0(lean_object* v_client_1662_, lean_object* v_inst_1663_, lean_object* v_a_1664_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(v_client_1662_, v_a_1664_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___boxed(lean_object* v_client_1667_, lean_object* v_inst_1668_, lean_object* v_a_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0(v_client_1667_, v_inst_1668_, v_a_1669_);
lean_dec(v_client_1667_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1(lean_object* v_val_1672_, lean_object* v_client_1673_, lean_object* v_inst_1674_, lean_object* v_a_1675_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(v_val_1672_, v_client_1673_, v_a_1675_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___boxed(lean_object* v_val_1678_, lean_object* v_client_1679_, lean_object* v_inst_1680_, lean_object* v_a_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1(v_val_1678_, v_client_1679_, v_inst_1680_, v_a_1681_);
lean_dec(v_client_1679_);
lean_dec(v_val_1678_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__0(lean_object* v___y_1684_){
_start:
{
if (lean_obj_tag(v___y_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
v_a_1685_ = lean_ctor_get(v___y_1684_, 0);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___y_1684_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1687_ = v___y_1684_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___y_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1685_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
v_a_1693_ = lean_ctor_get(v___y_1684_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___y_1684_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___y_1684_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___y_1684_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__3(lean_object* v___x_1701_, lean_object* v_x_1702_){
_start:
{
if (lean_obj_tag(v_x_1702_) == 0)
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = lean_mk_io_user_error(v___x_1701_);
v___x_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
return v___x_1704_;
}
else
{
lean_object* v_val_1705_; 
lean_dec_ref(v___x_1701_);
v_val_1705_ = lean_ctor_get(v_x_1702_, 0);
lean_inc(v_val_1705_);
return v_val_1705_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__3___boxed(lean_object* v___x_1706_, lean_object* v_x_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__3(v___x_1706_, v_x_1707_);
lean_dec(v_x_1707_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__1(lean_object* v___f_1709_, lean_object* v_x_1710_){
_start:
{
if (lean_obj_tag(v_x_1710_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1720_; 
lean_dec_ref(v___f_1709_);
v_a_1712_ = lean_ctor_get(v_x_1710_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_x_1710_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1714_ = v_x_1710_;
v_isShared_1715_ = v_isSharedCheck_1720_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v_x_1710_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1720_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1717_; 
if (v_isShared_1715_ == 0)
{
v___x_1717_ = v___x_1714_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1712_);
v___x_1717_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
return v___x_1718_;
}
}
}
else
{
lean_object* v_a_1721_; 
v_a_1721_ = lean_ctor_get(v_x_1710_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v_x_1710_, 1);
if (lean_obj_tag(v_a_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1730_; 
lean_dec_ref(v___f_1709_);
v_a_1722_ = lean_ctor_get(v_a_1721_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_a_1721_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1724_ = v_a_1721_;
v_isShared_1725_ = v_isSharedCheck_1730_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v_a_1721_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1730_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1728_; 
v___x_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
return v___x_1728_;
}
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v_a_1731_ = lean_ctor_get(v_a_1721_, 0);
lean_inc(v_a_1731_);
lean_dec_ref_known(v_a_1721_, 1);
v___x_1732_ = lean_io_promise_result_opt(v_a_1731_);
lean_dec(v_a_1731_);
v___x_1733_ = lean_unsigned_to_nat(0u);
v___x_1734_ = 0;
v___x_1735_ = lean_task_map(v___f_1709_, v___x_1732_, v___x_1733_, v___x_1734_);
v___x_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
return v___x_1736_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__1___boxed(lean_object* v___f_1737_, lean_object* v_x_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__1(v___f_1737_, v_x_1738_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(lean_object* v_addr_1741_, lean_object* v_as_x27_1742_, lean_object* v_b_1743_){
_start:
{
if (lean_obj_tag(v_as_x27_1742_) == 0)
{
lean_object* v___x_1745_; 
lean_dec_ref(v_addr_1741_);
v___x_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1745_, 0, v_b_1743_);
return v___x_1745_;
}
else
{
lean_object* v_tail_1746_; lean_object* v___x_1751_; 
v_tail_1746_ = lean_ctor_get(v_as_x27_1742_, 1);
v___x_1751_ = lean_uv_tcp_new();
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1778_; 
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1754_ = v___x_1751_;
v_isShared_1755_ = v_isSharedCheck_1778_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_a_1752_);
lean_dec(v___x_1751_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1778_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
lean_inc_ref(v_addr_1741_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 0, v_addr_1741_);
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_addr_1741_);
v___x_1757_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_uv_tcp_bind(v_a_1752_, v___x_1757_);
lean_dec_ref(v___x_1757_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1775_; 
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1775_ == 0)
{
lean_object* v_unused_1776_; 
v_unused_1776_ = lean_ctor_get(v___x_1758_, 0);
lean_dec(v_unused_1776_);
v___x_1760_ = v___x_1758_;
v_isShared_1761_ = v_isSharedCheck_1775_;
goto v_resetjp_1759_;
}
else
{
lean_dec(v___x_1758_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1775_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
uint32_t v___x_1762_; lean_object* v___x_1763_; 
v___x_1762_ = 1;
v___x_1763_ = lean_uv_tcp_listen(v_a_1752_, v___x_1762_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1773_; 
lean_dec(v_b_1743_);
lean_dec_ref(v_addr_1741_);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1773_ == 0)
{
lean_object* v_unused_1774_; 
v_unused_1774_ = lean_ctor_get(v___x_1763_, 0);
lean_dec(v_unused_1774_);
v___x_1765_ = v___x_1763_;
v_isShared_1766_ = v_isSharedCheck_1773_;
goto v_resetjp_1764_;
}
else
{
lean_dec(v___x_1763_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1773_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1761_ == 0)
{
lean_ctor_set_tag(v___x_1760_, 1);
lean_ctor_set(v___x_1760_, 0, v_a_1752_);
v___x_1768_ = v___x_1760_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_a_1752_);
v___x_1768_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1770_; 
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1768_);
v___x_1770_ = v___x_1765_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1768_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1763_, 1);
lean_del_object(v___x_1760_);
lean_dec(v_a_1752_);
goto v___jp_1747_;
}
}
}
else
{
lean_dec_ref_known(v___x_1758_, 1);
lean_dec(v_a_1752_);
goto v___jp_1747_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1751_, 1);
goto v___jp_1747_;
}
v___jp_1747_:
{
uint32_t v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = 100;
v___x_1749_ = l_IO_sleep(v___x_1748_);
v_as_x27_1742_ = v_tail_1746_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg___boxed(lean_object* v_addr_1779_, lean_object* v_as_x27_1780_, lean_object* v_b_1781_, lean_object* v___y_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(v_addr_1779_, v_as_x27_1780_, v_b_1781_);
lean_dec(v_as_x27_1780_);
return v_res_1783_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1(void){
_start:
{
uint8_t v___x_1785_; uint8_t v___x_1786_; uint8_t v___x_1787_; lean_object* v___x_1788_; 
v___x_1785_ = 1;
v___x_1786_ = 0;
v___x_1787_ = 127;
v___x_1788_ = l_Std_Net_IPv4Addr_ofParts(v___x_1787_, v___x_1786_, v___x_1786_, v___x_1785_);
return v___x_1788_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2(void){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = lean_unsigned_to_nat(100u);
v___x_1790_ = l_List_range(v___x_1789_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(lean_object* v_siteId_1795_, lean_object* v_exprJson_1796_){
_start:
{
lean_object* v___y_1799_; lean_object* v_a_1800_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; uint8_t v___y_1823_; lean_object* v_val_1824_; lean_object* v_a_1832_; lean_object* v_a_1884_; lean_object* v___f_1886_; uint16_t v_port_1887_; lean_object* v___x_1888_; lean_object* v_addr_1889_; lean_object* v_server_x3f_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1951_; 
v___f_1886_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0));
v_port_1887_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(v_siteId_1795_);
v___x_1888_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1);
v_addr_1889_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_addr_1889_, 0, v___x_1888_);
lean_ctor_set_uint16(v_addr_1889_, sizeof(void*)*1, v_port_1887_);
v_server_x3f_1890_ = lean_box(0);
v___x_1891_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2);
v___x_1892_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(v_addr_1889_, v___x_1891_, v_server_x3f_1890_);
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1895_ = v___x_1892_;
v_isShared_1896_ = v_isSharedCheck_1951_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1951_;
goto v_resetjp_1894_;
}
v___jp_1798_:
{
lean_object* v___x_1801_; 
v___x_1801_ = l_Std_Async_AsyncTask_block___redArg(v_a_1800_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1809_; 
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1809_ == 0)
{
lean_object* v_unused_1810_; 
v_unused_1810_ = lean_ctor_get(v___x_1801_, 0);
lean_dec(v_unused_1810_);
v___x_1803_ = v___x_1801_;
v_isShared_1804_ = v_isSharedCheck_1809_;
goto v_resetjp_1802_;
}
else
{
lean_dec(v___x_1801_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1809_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1805_; lean_object* v___x_1807_; 
v___x_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1805_, 0, v___y_1799_);
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v___x_1805_);
v___x_1807_ = v___x_1803_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v___x_1805_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
lean_dec_ref(v___y_1799_);
v_a_1811_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v___x_1801_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1801_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
v___jp_1819_:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1825_, 0, v_val_1824_);
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
lean_inc_ref(v___y_1820_);
v___x_1827_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_1822_, v___y_1823_, v___x_1826_, v___y_1820_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1829_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1827_, 1);
v___x_1829_ = lean_task_pure(v_a_1828_);
v___y_1799_ = v___y_1821_;
v_a_1800_ = v___x_1829_;
goto v___jp_1798_;
}
else
{
lean_object* v_a_1830_; 
v_a_1830_ = lean_ctor_get(v___x_1827_, 0);
lean_inc_ref(v_a_1830_);
lean_dec_ref_known(v___x_1827_, 1);
v___y_1799_ = v___y_1821_;
v_a_1800_ = v_a_1830_;
goto v___jp_1798_;
}
}
v___jp_1831_:
{
lean_object* v___x_1833_; 
v___x_1833_ = l_Std_Async_AsyncTask_block___redArg(v_a_1832_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = l_Lean_Json_compress(v_exprJson_1796_);
v___x_1836_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(v_a_1834_, v___x_1835_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v___x_1837_; 
lean_dec_ref_known(v___x_1836_, 1);
v___x_1837_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(v_a_1834_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___f_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; lean_object* v___x_1842_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___f_1839_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__3));
v___x_1840_ = lean_unsigned_to_nat(0u);
v___x_1841_ = 0;
v___x_1842_ = lean_uv_tcp_shutdown(v_a_1834_);
lean_dec(v_a_1834_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
lean_ctor_set_tag(v___x_1845_, 1);
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
v___y_1820_ = v___f_1839_;
v___y_1821_ = v_a_1838_;
v___y_1822_ = v___x_1840_;
v___y_1823_ = v___x_1841_;
v_val_1824_ = v___x_1848_;
goto v___jp_1819_;
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
v_a_1851_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1842_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1842_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
lean_ctor_set_tag(v___x_1853_, 0);
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
v___y_1820_ = v___f_1839_;
v___y_1821_ = v_a_1838_;
v___y_1822_ = v___x_1840_;
v___y_1823_ = v___x_1841_;
v_val_1824_ = v___x_1856_;
goto v___jp_1819_;
}
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
lean_dec(v_a_1834_);
v_a_1859_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1837_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1837_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec(v_a_1834_);
v_a_1867_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1836_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1836_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec(v_exprJson_1796_);
v_a_1875_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1833_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1833_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
v___jp_1883_:
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_task_pure(v_a_1884_);
v_a_1832_ = v___x_1885_;
goto v___jp_1831_;
}
v_resetjp_1894_:
{
if (lean_obj_tag(v_a_1893_) == 1)
{
lean_object* v_val_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1947_; 
lean_del_object(v___x_1895_);
v_val_1897_ = lean_ctor_get(v_a_1893_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_a_1893_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1899_ = v_a_1893_;
v_isShared_1900_ = v_isSharedCheck_1947_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_val_1897_);
lean_dec(v_a_1893_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1947_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___f_1901_; lean_object* v___x_1902_; uint8_t v___x_1903_; lean_object* v_val_1905_; lean_object* v___x_1930_; 
v___f_1901_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__4));
v___x_1902_ = lean_unsigned_to_nat(0u);
v___x_1903_ = 0;
v___x_1930_ = lean_uv_tcp_accept(v_val_1897_);
lean_dec(v_val_1897_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
lean_ctor_set_tag(v___x_1933_, 1);
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
v_val_1905_ = v___x_1936_;
goto v___jp_1904_;
}
}
}
else
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1946_; 
v_a_1939_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1941_ = v___x_1930_;
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v___x_1930_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1946_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1944_; 
if (v_isShared_1942_ == 0)
{
lean_ctor_set_tag(v___x_1941_, 0);
v___x_1944_ = v___x_1941_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v_a_1939_);
v___x_1944_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
v_val_1905_ = v___x_1944_;
goto v___jp_1904_;
}
}
}
v___jp_1904_:
{
lean_object* v___x_1907_; 
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v_val_1905_);
v___x_1907_ = v___x_1899_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_val_1905_);
v___x_1907_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
v___x_1909_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1902_, v___x_1903_, v___x_1908_, v___f_1901_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v_a_1910_; 
v_a_1910_ = lean_ctor_get(v___x_1909_, 0);
lean_inc(v_a_1910_);
lean_dec_ref_known(v___x_1909_, 1);
if (lean_obj_tag(v_a_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
v_a_1911_ = lean_ctor_get(v_a_1910_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_a_1910_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v_a_1910_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v_a_1910_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
v_a_1884_ = v___x_1916_;
goto v___jp_1883_;
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
v_a_1919_ = lean_ctor_get(v_a_1910_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_a_1910_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v_a_1910_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v_a_1910_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
v_a_1884_ = v___x_1924_;
goto v___jp_1883_;
}
}
}
}
else
{
lean_object* v_a_1927_; lean_object* v___x_1928_; 
v_a_1927_ = lean_ctor_get(v___x_1909_, 0);
lean_inc_ref(v_a_1927_);
lean_dec_ref_known(v___x_1909_, 1);
v___x_1928_ = lean_task_map(v___f_1886_, v_a_1927_, v___x_1902_, v___x_1903_);
v_a_1832_ = v___x_1928_;
goto v___jp_1831_;
}
}
}
}
}
else
{
lean_object* v___x_1949_; 
lean_dec(v_a_1893_);
lean_dec(v_exprJson_1796_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v_server_x3f_1890_);
v___x_1949_ = v___x_1895_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_server_x3f_1890_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___boxed(lean_object* v_siteId_1952_, lean_object* v_exprJson_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(v_siteId_1952_, v_exprJson_1953_);
lean_dec_ref(v_siteId_1952_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0(lean_object* v_addr_1956_, lean_object* v_as_1957_, lean_object* v_as_x27_1958_, lean_object* v_b_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v___x_1962_; 
v___x_1962_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(v_addr_1956_, v_as_x27_1958_, v_b_1959_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___boxed(lean_object* v_addr_1963_, lean_object* v_as_1964_, lean_object* v_as_x27_1965_, lean_object* v_b_1966_, lean_object* v_a_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0(v_addr_1963_, v_as_1964_, v_as_x27_1965_, v_b_1966_, v_a_1967_);
lean_dec(v_as_x27_1965_);
lean_dec(v_as_1964_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(lean_object* v_imports_1972_){
_start:
{
lean_object* v___x_1974_; uint32_t v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; uint8_t v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1974_ = l_Lean_Options_empty;
v___x_1975_ = 0;
v___x_1976_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0));
v___x_1977_ = 0;
v___x_1978_ = 2;
v___x_1979_ = lean_box(1);
lean_inc_ref(v_imports_1972_);
v___x_1980_ = l_Lean_importModules(v_imports_1972_, v___x_1974_, v___x_1975_, v___x_1976_, v___x_1977_, v___x_1977_, v___x_1978_, v___x_1979_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_dec_ref(v_imports_1972_);
return v___x_1980_;
}
else
{
lean_object* v___x_1981_; lean_object* v___x_1982_; 
lean_dec_ref_known(v___x_1980_, 1);
v___x_1981_ = lean_array_pop(v_imports_1972_);
v___x_1982_ = l_Lean_importModules(v___x_1981_, v___x_1974_, v___x_1975_, v___x_1976_, v___x_1977_, v___x_1977_, v___x_1978_, v___x_1979_);
return v___x_1982_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___boxed(lean_object* v_imports_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(v_imports_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg(lean_object* v_name_1986_, lean_object* v_env_x27_1987_){
_start:
{
lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; 
v___x_1988_ = l_Lean_Options_empty;
v___x_1989_ = 0;
v___x_1990_ = l_Lean_Environment_evalConst___redArg(v_env_x27_1987_, v___x_1988_, v_name_1986_, v___x_1989_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg___boxed(lean_object* v_name_1991_, lean_object* v_env_x27_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg(v_name_1991_, v_env_x27_1992_);
lean_dec_ref(v_env_x27_1992_);
lean_dec(v_name_1991_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1(lean_object* v_00_u03b1_1994_, lean_object* v_name_1995_, lean_object* v_env_x27_1996_){
_start:
{
lean_object* v___x_1997_; uint8_t v___x_1998_; lean_object* v___x_1999_; 
v___x_1997_ = l_Lean_Options_empty;
v___x_1998_ = 0;
v___x_1999_ = l_Lean_Environment_evalConst___redArg(v_env_x27_1996_, v___x_1997_, v_name_1995_, v___x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___boxed(lean_object* v_00_u03b1_2000_, lean_object* v_name_2001_, lean_object* v_env_x27_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1(v_00_u03b1_2000_, v_name_2001_, v_env_x27_2002_);
lean_dec_ref(v_env_x27_2002_);
lean_dec(v_name_2001_);
return v_res_2003_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4(void){
_start:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = l_Lean_Options_empty;
v___x_2012_ = l_Lean_Core_getMaxHeartbeats(v___x_2011_);
return v___x_2012_;
}
}
static uint16_t _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5(void){
_start:
{
lean_object* v___x_2013_; uint16_t v___x_2014_; 
v___x_2013_ = l_Lean_Options_empty;
v___x_2014_ = l_Lean_OptionFlags_ofOptions(v___x_2013_);
return v___x_2014_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2015_ = lean_unsigned_to_nat(1u);
v___x_2016_ = l_Lean_firstFrontendMacroScope;
v___x_2017_ = lean_nat_add(v___x_2016_, v___x_2015_);
return v___x_2017_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11(void){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2028_ = lean_unsigned_to_nat(32u);
v___x_2029_ = lean_mk_empty_array_with_capacity(v___x_2028_);
v___x_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2029_);
return v___x_2030_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12(void){
_start:
{
size_t v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2031_ = ((size_t)5ULL);
v___x_2032_ = lean_unsigned_to_nat(0u);
v___x_2033_ = lean_unsigned_to_nat(32u);
v___x_2034_ = lean_mk_empty_array_with_capacity(v___x_2033_);
v___x_2035_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11);
v___x_2036_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
lean_ctor_set(v___x_2036_, 1, v___x_2034_);
lean_ctor_set(v___x_2036_, 2, v___x_2032_);
lean_ctor_set(v___x_2036_, 3, v___x_2032_);
lean_ctor_set_usize(v___x_2036_, 4, v___x_2031_);
return v___x_2036_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13(void){
_start:
{
lean_object* v___x_2037_; uint64_t v___x_2038_; lean_object* v___x_2039_; 
v___x_2037_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12);
v___x_2038_ = 0ULL;
v___x_2039_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2039_, 0, v___x_2037_);
lean_ctor_set_uint64(v___x_2039_, sizeof(void*)*1, v___x_2038_);
return v___x_2039_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14(void){
_start:
{
lean_object* v___x_2040_; 
v___x_2040_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2040_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15(void){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14);
v___x_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
return v___x_2042_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16(void){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15);
v___x_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
return v___x_2044_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18(void){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2047_ = lean_unsigned_to_nat(0u);
v___x_2048_ = l_Lean_Options_empty;
v___x_2049_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17));
v___x_2050_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
lean_ctor_set(v___x_2050_, 1, v___x_2048_);
lean_ctor_set(v___x_2050_, 2, v___x_2049_);
lean_ctor_set(v___x_2050_, 3, v___x_2047_);
lean_ctor_set(v___x_2050_, 4, v___x_2047_);
lean_ctor_set(v___x_2050_, 5, v___x_2047_);
lean_ctor_set(v___x_2050_, 6, v___x_2049_);
lean_ctor_set(v___x_2050_, 7, v___x_2049_);
return v___x_2050_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19(void){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2051_ = l_Lean_NameSet_empty;
v___x_2052_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12);
v___x_2053_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
lean_ctor_set(v___x_2053_, 2, v___x_2051_);
return v___x_2053_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20(void){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; uint8_t v___x_2056_; lean_object* v___x_2057_; 
v___x_2054_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12);
v___x_2055_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15);
v___x_2056_ = 1;
v___x_2057_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2055_);
lean_ctor_set(v___x_2057_, 2, v___x_2054_);
lean_ctor_set_uint8(v___x_2057_, sizeof(void*)*3, v___x_2056_);
return v___x_2057_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21(void){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2058_ = l_Lean_maxRecDepth;
v___x_2059_ = l_Lean_Options_empty;
v___x_2060_ = l_Lean_KVMap_instValueNat;
v___x_2061_ = l_Lean_Option_get___redArg(v___x_2060_, v___x_2059_, v___x_2058_);
return v___x_2061_;
}
}
static uint16_t _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__26(void){
_start:
{
uint16_t v___x_2066_; uint16_t v___x_2067_; uint16_t v___x_2068_; 
v___x_2066_ = 512;
v___x_2067_ = lean_uint16_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5);
v___x_2068_ = lean_uint16_land(v___x_2067_, v___x_2066_);
return v___x_2068_;
}
}
static uint8_t _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27(void){
_start:
{
uint16_t v___x_2069_; uint16_t v___x_2070_; uint8_t v___x_2071_; 
v___x_2069_ = 0;
v___x_2070_ = lean_uint16_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__26, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__26_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__26);
v___x_2071_ = lean_uint16_dec_eq(v___x_2070_, v___x_2069_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(lean_object* v_env_2072_, lean_object* v_type_2073_, lean_object* v_value_2074_){
_start:
{
lean_object* v_a_2077_; lean_object* v_name_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; uint8_t v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v_decl_2087_; uint8_t v___x_2088_; uint8_t v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; uint16_t v___x_2099_; uint8_t v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___y_2116_; lean_object* v_nextMacroScope_2169_; lean_object* v_ngen_2170_; lean_object* v_auxDeclNGen_2171_; lean_object* v_traceState_2172_; lean_object* v_recordedDeps_2173_; lean_object* v_messages_2174_; lean_object* v_infoState_2175_; lean_object* v_snapshotTasks_2176_; lean_object* v___y_2177_; lean_object* v___x_2180_; uint8_t v___y_2182_; lean_object* v_env_2196_; uint8_t v___x_2197_; uint8_t v___x_2198_; 
v_name_2080_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1));
v___x_2081_ = lean_box(0);
v___x_2082_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2082_, 0, v_name_2080_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
lean_ctor_set(v___x_2082_, 2, v_type_2073_);
v___x_2083_ = lean_box(0);
v___x_2084_ = 0;
v___x_2085_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2));
v___x_2086_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2086_, 0, v___x_2082_);
lean_ctor_set(v___x_2086_, 1, v_value_2074_);
lean_ctor_set(v___x_2086_, 2, v___x_2083_);
lean_ctor_set(v___x_2086_, 3, v___x_2085_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*4, v___x_2084_);
v_decl_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_decl_2087_, 0, v___x_2086_);
v___x_2088_ = 1;
v___x_2089_ = 0;
v___x_2090_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3));
v___x_2091_ = l_Lean_instInhabitedFileMap_default;
v___x_2092_ = l_Lean_Options_empty;
v___x_2093_ = lean_box(0);
v___x_2094_ = lean_unsigned_to_nat(0u);
v___x_2095_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4);
v___x_2096_ = l_Lean_firstFrontendMacroScope;
v___x_2097_ = lean_box(0);
v___x_2098_ = lean_box(0);
v___x_2099_ = lean_uint16_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5);
v___x_2100_ = 0;
v___x_2101_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6);
v___x_2102_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9));
v___x_2103_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10));
v___x_2104_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13);
v___x_2105_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16);
v___x_2106_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17));
v___x_2107_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18);
v___x_2108_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19);
v___x_2109_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20);
v___x_2110_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2110_, 0, v_env_2072_);
lean_ctor_set(v___x_2110_, 1, v___x_2101_);
lean_ctor_set(v___x_2110_, 2, v___x_2102_);
lean_ctor_set(v___x_2110_, 3, v___x_2103_);
lean_ctor_set(v___x_2110_, 4, v___x_2104_);
lean_ctor_set(v___x_2110_, 5, v___x_2105_);
lean_ctor_set(v___x_2110_, 6, v___x_2107_);
lean_ctor_set(v___x_2110_, 7, v___x_2108_);
lean_ctor_set(v___x_2110_, 8, v___x_2109_);
lean_ctor_set(v___x_2110_, 9, v___x_2106_);
v___x_2111_ = lean_io_get_num_heartbeats();
v___x_2112_ = lean_st_mk_ref(v___x_2110_);
v___x_2113_ = l_Lean_inheritedTraceOptions;
v___x_2114_ = lean_st_ref_get(v___x_2113_);
v___x_2180_ = lean_st_ref_get(v___x_2112_);
v_env_2196_ = lean_ctor_get(v___x_2180_, 0);
lean_inc_ref(v_env_2196_);
lean_dec(v___x_2180_);
v___x_2197_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2196_);
lean_dec_ref(v_env_2196_);
v___x_2198_ = lean_uint8_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27);
if (v___x_2198_ == 0)
{
if (v___x_2197_ == 0)
{
v___y_2182_ = v___x_2197_;
goto v___jp_2181_;
}
else
{
lean_inc(v___x_2112_);
v___y_2116_ = v___x_2112_;
goto v___jp_2115_;
}
}
else
{
if (v___x_2197_ == 0)
{
lean_inc(v___x_2112_);
v___y_2116_ = v___x_2112_;
goto v___jp_2115_;
}
else
{
v___y_2182_ = v___x_2089_;
goto v___jp_2181_;
}
}
v___jp_2076_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2078_ = lean_mk_io_user_error(v_a_2077_);
v___x_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
return v___x_2079_;
}
v___jp_2115_:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2117_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21);
v___x_2118_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2090_);
lean_ctor_set(v___x_2118_, 1, v___x_2091_);
lean_ctor_set(v___x_2118_, 2, v___x_2092_);
lean_ctor_set(v___x_2118_, 3, v___x_2117_);
lean_ctor_set(v___x_2118_, 4, v___x_2093_);
lean_ctor_set(v___x_2118_, 5, v___x_2081_);
lean_ctor_set(v___x_2118_, 6, v___x_2111_);
lean_ctor_set(v___x_2118_, 7, v___x_2095_);
lean_ctor_set(v___x_2118_, 8, v___x_2093_);
lean_ctor_set(v___x_2118_, 9, v___x_2096_);
lean_ctor_set(v___x_2118_, 10, v___x_2097_);
lean_ctor_set(v___x_2118_, 11, v___x_2114_);
v___x_2119_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
lean_ctor_set(v___x_2119_, 1, v___x_2094_);
lean_ctor_set(v___x_2119_, 2, v___x_2098_);
lean_ctor_set_uint16(v___x_2119_, sizeof(void*)*3, v___x_2099_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*3 + 2, v___x_2089_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*3 + 3, v___x_2100_);
lean_ctor_set_uint8(v___x_2119_, sizeof(void*)*3 + 4, v___x_2089_);
v___x_2120_ = l_Lean_addAndCompile(v_decl_2087_, v___x_2088_, v___x_2089_, v___x_2119_, v___y_2116_);
lean_dec(v___y_2116_);
lean_dec_ref_known(v___x_2119_, 3);
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2144_; 
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2144_ == 0)
{
lean_object* v_unused_2145_; 
v_unused_2145_ = lean_ctor_get(v___x_2120_, 0);
lean_dec(v_unused_2145_);
v___x_2122_ = v___x_2120_;
v_isShared_2123_ = v_isSharedCheck_2144_;
goto v_resetjp_2121_;
}
else
{
lean_dec(v___x_2120_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2144_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2124_; lean_object* v_env_2125_; lean_object* v___x_2126_; 
v___x_2124_ = lean_st_ref_get(v___x_2112_);
lean_dec(v___x_2112_);
v_env_2125_ = lean_ctor_get(v___x_2124_, 0);
lean_inc_ref(v_env_2125_);
lean_dec(v___x_2124_);
v___x_2126_ = l_Lean_Environment_evalConst___redArg(v_env_2125_, v___x_2092_, v_name_2080_, v___x_2089_);
lean_dec_ref(v_env_2125_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2139_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2129_ = v___x_2126_;
v_isShared_2130_ = v_isSharedCheck_2139_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2126_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2139_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2131_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22));
v___x_2132_ = lean_string_append(v___x_2131_, v_a_2127_);
lean_dec(v_a_2127_);
if (v_isShared_2130_ == 0)
{
lean_ctor_set_tag(v___x_2129_, 18);
lean_ctor_set(v___x_2129_, 0, v___x_2132_);
v___x_2134_ = v___x_2129_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2136_; 
if (v_isShared_2123_ == 0)
{
lean_ctor_set_tag(v___x_2122_, 1);
lean_ctor_set(v___x_2122_, 0, v___x_2134_);
v___x_2136_ = v___x_2122_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; 
v_a_2140_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2140_);
lean_dec_ref_known(v___x_2126_, 1);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 0, v_a_2140_);
v___x_2142_ = v___x_2122_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2167_; 
lean_dec(v___x_2112_);
v_a_2146_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2148_ = v___x_2120_;
v_isShared_2149_ = v_isSharedCheck_2167_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2120_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2167_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
if (lean_obj_tag(v_a_2146_) == 0)
{
lean_object* v_msg_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2154_; 
v_msg_2150_ = lean_ctor_get(v_a_2146_, 1);
lean_inc_ref(v_msg_2150_);
lean_dec_ref_known(v_a_2146_, 2);
v___x_2151_ = l_Lean_MessageData_toString(v_msg_2150_);
v___x_2152_ = lean_mk_io_user_error(v___x_2151_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2152_);
v___x_2154_ = v___x_2148_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v___x_2152_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
else
{
lean_object* v_id_2156_; lean_object* v___x_2157_; 
lean_del_object(v___x_2148_);
v_id_2156_ = lean_ctor_get(v_a_2146_, 0);
lean_inc(v_id_2156_);
lean_dec_ref_known(v_a_2146_, 2);
v___x_2157_ = l_Lean_InternalExceptionId_getName(v_id_2156_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_dec(v_id_2156_);
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
lean_inc(v_a_2158_);
lean_dec_ref_known(v___x_2157_, 1);
v___x_2159_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23));
v___x_2160_ = l_Lean_Name_toString(v_a_2158_, v___x_2088_);
v___x_2161_ = lean_string_append(v___x_2159_, v___x_2160_);
lean_dec_ref(v___x_2160_);
v_a_2077_ = v___x_2161_;
goto v___jp_2076_;
}
else
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
lean_dec_ref_known(v___x_2157_, 1);
v___x_2162_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24));
v___x_2163_ = l_Nat_reprFast(v_id_2156_);
v___x_2164_ = lean_string_append(v___x_2162_, v___x_2163_);
lean_dec_ref(v___x_2163_);
v___x_2165_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__25));
v___x_2166_ = lean_string_append(v___x_2164_, v___x_2165_);
v_a_2077_ = v___x_2166_;
goto v___jp_2076_;
}
}
}
}
}
v___jp_2168_:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2178_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2178_, 0, v___y_2177_);
lean_ctor_set(v___x_2178_, 1, v_nextMacroScope_2169_);
lean_ctor_set(v___x_2178_, 2, v_ngen_2170_);
lean_ctor_set(v___x_2178_, 3, v_auxDeclNGen_2171_);
lean_ctor_set(v___x_2178_, 4, v_traceState_2172_);
lean_ctor_set(v___x_2178_, 5, v___x_2105_);
lean_ctor_set(v___x_2178_, 6, v_recordedDeps_2173_);
lean_ctor_set(v___x_2178_, 7, v_messages_2174_);
lean_ctor_set(v___x_2178_, 8, v_infoState_2175_);
lean_ctor_set(v___x_2178_, 9, v_snapshotTasks_2176_);
v___x_2179_ = lean_st_ref_put(v___x_2112_, v___x_2178_);
lean_inc(v___x_2112_);
v___y_2116_ = v___x_2112_;
goto v___jp_2115_;
}
v___jp_2181_:
{
lean_object* v___x_2183_; lean_object* v_env_2184_; lean_object* v_nextMacroScope_2185_; lean_object* v_ngen_2186_; lean_object* v_auxDeclNGen_2187_; lean_object* v_traceState_2188_; lean_object* v_recordedDeps_2189_; lean_object* v_messages_2190_; lean_object* v_infoState_2191_; lean_object* v_snapshotTasks_2192_; uint8_t v___x_2193_; 
v___x_2183_ = lean_st_ref_take(v___x_2112_);
v_env_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc_ref(v_env_2184_);
v_nextMacroScope_2185_ = lean_ctor_get(v___x_2183_, 1);
lean_inc(v_nextMacroScope_2185_);
v_ngen_2186_ = lean_ctor_get(v___x_2183_, 2);
lean_inc_ref(v_ngen_2186_);
v_auxDeclNGen_2187_ = lean_ctor_get(v___x_2183_, 3);
lean_inc_ref(v_auxDeclNGen_2187_);
v_traceState_2188_ = lean_ctor_get(v___x_2183_, 4);
lean_inc_ref(v_traceState_2188_);
v_recordedDeps_2189_ = lean_ctor_get(v___x_2183_, 6);
lean_inc_ref(v_recordedDeps_2189_);
v_messages_2190_ = lean_ctor_get(v___x_2183_, 7);
lean_inc_ref(v_messages_2190_);
v_infoState_2191_ = lean_ctor_get(v___x_2183_, 8);
lean_inc_ref(v_infoState_2191_);
v_snapshotTasks_2192_ = lean_ctor_get(v___x_2183_, 9);
lean_inc_ref(v_snapshotTasks_2192_);
lean_dec(v___x_2183_);
v___x_2193_ = lean_uint8_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__27);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; 
v___x_2194_ = l_Lean_Kernel_enableDiag(v_env_2184_, v___x_2088_);
v_nextMacroScope_2169_ = v_nextMacroScope_2185_;
v_ngen_2170_ = v_ngen_2186_;
v_auxDeclNGen_2171_ = v_auxDeclNGen_2187_;
v_traceState_2172_ = v_traceState_2188_;
v_recordedDeps_2173_ = v_recordedDeps_2189_;
v_messages_2174_ = v_messages_2190_;
v_infoState_2175_ = v_infoState_2191_;
v_snapshotTasks_2176_ = v_snapshotTasks_2192_;
v___y_2177_ = v___x_2194_;
goto v___jp_2168_;
}
else
{
lean_object* v___x_2195_; 
v___x_2195_ = l_Lean_Kernel_enableDiag(v_env_2184_, v___y_2182_);
v_nextMacroScope_2169_ = v_nextMacroScope_2185_;
v_ngen_2170_ = v_ngen_2186_;
v_auxDeclNGen_2171_ = v_auxDeclNGen_2187_;
v_traceState_2172_ = v_traceState_2188_;
v_recordedDeps_2173_ = v_recordedDeps_2189_;
v_messages_2174_ = v_messages_2190_;
v_infoState_2175_ = v_infoState_2191_;
v_snapshotTasks_2176_ = v_snapshotTasks_2192_;
v___y_2177_ = v___x_2195_;
goto v___jp_2168_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___boxed(lean_object* v_env_2199_, lean_object* v_type_2200_, lean_object* v_value_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(v_env_2199_, v_type_2200_, v_value_2201_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval(lean_object* v_00_u03b1_2204_, lean_object* v_inst_2205_, lean_object* v_env_2206_, lean_object* v_type_2207_, lean_object* v_value_2208_){
_start:
{
lean_object* v___x_2210_; 
v___x_2210_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(v_env_2206_, v_type_2207_, v_value_2208_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___boxed(lean_object* v_00_u03b1_2211_, lean_object* v_inst_2212_, lean_object* v_env_2213_, lean_object* v_type_2214_, lean_object* v_value_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval(v_00_u03b1_2211_, v_inst_2212_, v_env_2213_, v_type_2214_, v_value_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(lean_object* v_e_2218_){
_start:
{
if (lean_obj_tag(v_e_2218_) == 0)
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2228_; 
v_a_2220_ = lean_ctor_get(v_e_2218_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v_e_2218_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2222_ = v_e_2218_;
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v_e_2218_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2224_ = lean_mk_io_user_error(v_a_2220_);
if (v_isShared_2223_ == 0)
{
lean_ctor_set_tag(v___x_2222_, 1);
lean_ctor_set(v___x_2222_, 0, v___x_2224_);
v___x_2226_ = v___x_2222_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
v_a_2229_ = lean_ctor_get(v_e_2218_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v_e_2218_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v_e_2218_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v_e_2218_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
lean_ctor_set_tag(v___x_2231_, 0);
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg___boxed(lean_object* v_e_2237_, lean_object* v_a_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v_e_2237_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2(lean_object* v_00_u03b1_2240_, lean_object* v_e_2241_){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v_e_2241_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___boxed(lean_object* v_00_u03b1_2244_, lean_object* v_e_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2(v_00_u03b1_2244_, v_e_2245_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1(lean_object* v___x_2248_, lean_object* v_x_2249_){
_start:
{
if (lean_obj_tag(v_x_2249_) == 0)
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = lean_mk_io_user_error(v___x_2248_);
v___x_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
return v___x_2251_;
}
else
{
lean_object* v_val_2252_; 
lean_dec_ref(v___x_2248_);
v_val_2252_ = lean_ctor_get(v_x_2249_, 0);
lean_inc(v_val_2252_);
return v_val_2252_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1___boxed(lean_object* v___x_2253_, lean_object* v_x_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1(v___x_2253_, v_x_2254_);
lean_dec(v_x_2254_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__2(lean_object* v___f_2256_, lean_object* v_x_2257_){
_start:
{
if (lean_obj_tag(v_x_2257_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2267_; 
lean_dec_ref(v___f_2256_);
v_a_2259_ = lean_ctor_get(v_x_2257_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_x_2257_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2261_ = v_x_2257_;
v_isShared_2262_ = v_isSharedCheck_2267_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v_x_2257_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2267_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
lean_object* v___x_2265_; 
v___x_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2264_);
return v___x_2265_;
}
}
}
else
{
lean_object* v_a_2268_; 
v_a_2268_ = lean_ctor_get(v_x_2257_, 0);
lean_inc(v_a_2268_);
lean_dec_ref_known(v_x_2257_, 1);
if (lean_obj_tag(v_a_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2277_; 
lean_dec_ref(v___f_2256_);
v_a_2269_ = lean_ctor_get(v_a_2268_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v_a_2268_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2271_ = v_a_2268_;
v_isShared_2272_ = v_isSharedCheck_2277_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v_a_2268_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2277_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
lean_object* v___x_2275_; 
v___x_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
return v___x_2275_;
}
}
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; uint8_t v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v_a_2278_ = lean_ctor_get(v_a_2268_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v_a_2268_, 1);
v___x_2279_ = lean_io_promise_result_opt(v_a_2278_);
lean_dec(v_a_2278_);
v___x_2280_ = lean_unsigned_to_nat(0u);
v___x_2281_ = 0;
v___x_2282_ = lean_task_map(v___f_2256_, v___x_2279_, v___x_2280_, v___x_2281_);
v___x_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
return v___x_2283_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__2___boxed(lean_object* v___f_2284_, lean_object* v_x_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__2(v___f_2284_, v_x_2285_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(lean_object* v___x_2288_, lean_object* v___x_2289_, lean_object* v___x_2290_, lean_object* v_a_2291_, lean_object* v_b_2292_){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_box(0);
switch(lean_obj_tag(v_a_2291_))
{
case 0:
{
lean_object* v_pos_2294_; lean_object* v___x_2295_; 
v_pos_2294_ = lean_ctor_get(v_a_2291_, 0);
lean_inc(v_pos_2294_);
lean_dec_ref_known(v_a_2291_, 1);
v___x_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2295_, 0, v_pos_2294_);
return v___x_2295_;
}
case 1:
{
lean_object* v_pos_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2305_; 
v_pos_2296_ = lean_ctor_get(v_a_2291_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v_a_2291_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2298_ = v_a_2291_;
v_isShared_2299_ = v_isSharedCheck_2305_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_pos_2296_);
lean_dec(v_a_2291_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2305_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2300_; lean_object* v___x_2302_; 
v___x_2300_ = lean_string_utf8_next_fast(v___x_2288_, v_pos_2296_);
lean_dec(v_pos_2296_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set_tag(v___x_2298_, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2300_);
v___x_2302_ = v___x_2298_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
v_a_2291_ = v___x_2302_;
v_b_2292_ = v___x_2293_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_2306_; lean_object* v_table_2307_; lean_object* v_stackPos_2308_; lean_object* v_needlePos_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2362_; 
v_needle_2306_ = lean_ctor_get(v_a_2291_, 0);
v_table_2307_ = lean_ctor_get(v_a_2291_, 1);
v_stackPos_2308_ = lean_ctor_get(v_a_2291_, 2);
v_needlePos_2309_ = lean_ctor_get(v_a_2291_, 3);
v_isSharedCheck_2362_ = !lean_is_exclusive(v_a_2291_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2311_ = v_a_2291_;
v_isShared_2312_ = v_isSharedCheck_2362_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_needlePos_2309_);
lean_inc(v_stackPos_2308_);
lean_inc(v_table_2307_);
lean_inc(v_needle_2306_);
lean_dec(v_a_2291_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2362_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v_str_2313_; lean_object* v_startInclusive_2314_; lean_object* v_endExclusive_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; 
v_str_2313_ = lean_ctor_get(v_needle_2306_, 0);
v_startInclusive_2314_ = lean_ctor_get(v_needle_2306_, 1);
v_endExclusive_2315_ = lean_ctor_get(v_needle_2306_, 2);
v___x_2316_ = lean_nat_sub(v_stackPos_2308_, v_needlePos_2309_);
v___x_2317_ = lean_nat_sub(v_endExclusive_2315_, v_startInclusive_2314_);
v___x_2318_ = lean_nat_add(v___x_2316_, v___x_2317_);
v___x_2319_ = lean_nat_dec_le(v___x_2318_, v___x_2290_);
lean_dec(v___x_2318_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
lean_dec(v___x_2317_);
lean_del_object(v___x_2311_);
lean_dec(v_needlePos_2309_);
lean_dec(v_stackPos_2308_);
lean_dec_ref(v_table_2307_);
lean_dec_ref(v_needle_2306_);
v___x_2320_ = lean_unsigned_to_nat(1u);
v___x_2321_ = lean_nat_add(v___x_2316_, v___x_2320_);
lean_dec(v___x_2316_);
v___x_2322_ = lean_nat_dec_le(v___x_2321_, v___x_2290_);
lean_dec(v___x_2321_);
if (v___x_2322_ == 0)
{
lean_inc(v_b_2292_);
return v_b_2292_;
}
else
{
lean_object* v___x_2323_; 
v___x_2323_ = lean_box(3);
v_a_2291_ = v___x_2323_;
v_b_2292_ = v___x_2293_;
goto _start;
}
}
else
{
uint8_t v_stackByte_2325_; lean_object* v___x_2326_; uint8_t v_patByte_2327_; uint8_t v___x_2328_; 
lean_dec(v___x_2316_);
lean_inc(v_stackPos_2308_);
v_stackByte_2325_ = lean_string_get_byte_fast(v___x_2288_, v_stackPos_2308_);
v___x_2326_ = lean_nat_add(v_startInclusive_2314_, v_needlePos_2309_);
v_patByte_2327_ = lean_string_get_byte_fast(v_str_2313_, v___x_2326_);
v___x_2328_ = lean_uint8_dec_eq(v_stackByte_2325_, v_patByte_2327_);
if (v___x_2328_ == 0)
{
lean_object* v___x_2329_; uint8_t v_decide_2330_; 
lean_dec(v___x_2317_);
v___x_2329_ = lean_unsigned_to_nat(0u);
v_decide_2330_ = lean_nat_dec_eq(v_needlePos_2309_, v___x_2329_);
if (v_decide_2330_ == 0)
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v_newNeedlePos_2333_; uint8_t v___x_2334_; 
v___x_2331_ = lean_unsigned_to_nat(1u);
v___x_2332_ = lean_nat_sub(v_needlePos_2309_, v___x_2331_);
lean_dec(v_needlePos_2309_);
v_newNeedlePos_2333_ = lean_array_fget_borrowed(v_table_2307_, v___x_2332_);
lean_dec(v___x_2332_);
v___x_2334_ = lean_nat_dec_eq(v_newNeedlePos_2333_, v___x_2329_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2336_; 
lean_inc(v_newNeedlePos_2333_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 3, v_newNeedlePos_2333_);
v___x_2336_ = v___x_2311_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_needle_2306_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v_table_2307_);
lean_ctor_set(v_reuseFailAlloc_2338_, 2, v_stackPos_2308_);
lean_ctor_set(v_reuseFailAlloc_2338_, 3, v_newNeedlePos_2333_);
v___x_2336_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
v_a_2291_ = v___x_2336_;
v_b_2292_ = v___x_2293_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_2339_; lean_object* v___x_2341_; 
v_nextStackPos_2339_ = l_String_Slice_posGE___redArg(v___x_2289_, v_stackPos_2308_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 3, v___x_2329_);
lean_ctor_set(v___x_2311_, 2, v_nextStackPos_2339_);
v___x_2341_ = v___x_2311_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_needle_2306_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_table_2307_);
lean_ctor_set(v_reuseFailAlloc_2343_, 2, v_nextStackPos_2339_);
lean_ctor_set(v_reuseFailAlloc_2343_, 3, v___x_2329_);
v___x_2341_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
v_a_2291_ = v___x_2341_;
v_b_2292_ = v___x_2293_;
goto _start;
}
}
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v_nextStackPos_2346_; lean_object* v___x_2348_; 
lean_dec(v_needlePos_2309_);
v___x_2344_ = lean_unsigned_to_nat(1u);
v___x_2345_ = lean_nat_add(v_stackPos_2308_, v___x_2344_);
lean_dec(v_stackPos_2308_);
v_nextStackPos_2346_ = l_String_Slice_posGE___redArg(v___x_2289_, v___x_2345_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 3, v___x_2329_);
lean_ctor_set(v___x_2311_, 2, v_nextStackPos_2346_);
v___x_2348_ = v___x_2311_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_needle_2306_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v_table_2307_);
lean_ctor_set(v_reuseFailAlloc_2350_, 2, v_nextStackPos_2346_);
lean_ctor_set(v_reuseFailAlloc_2350_, 3, v___x_2329_);
v___x_2348_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
v_a_2291_ = v___x_2348_;
v_b_2292_ = v___x_2293_;
goto _start;
}
}
}
else
{
lean_object* v___x_2351_; lean_object* v_nextStackPos_2352_; lean_object* v_nextNeedlePos_2353_; uint8_t v_decide_2354_; 
v___x_2351_ = lean_unsigned_to_nat(1u);
v_nextStackPos_2352_ = lean_nat_add(v_stackPos_2308_, v___x_2351_);
lean_dec(v_stackPos_2308_);
v_nextNeedlePos_2353_ = lean_nat_add(v_needlePos_2309_, v___x_2351_);
lean_dec(v_needlePos_2309_);
v_decide_2354_ = lean_nat_dec_eq(v_nextNeedlePos_2353_, v___x_2317_);
lean_dec(v___x_2317_);
if (v_decide_2354_ == 0)
{
lean_object* v___x_2356_; 
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 3, v_nextNeedlePos_2353_);
lean_ctor_set(v___x_2311_, 2, v_nextStackPos_2352_);
v___x_2356_ = v___x_2311_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_needle_2306_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_table_2307_);
lean_ctor_set(v_reuseFailAlloc_2358_, 2, v_nextStackPos_2352_);
lean_ctor_set(v_reuseFailAlloc_2358_, 3, v_nextNeedlePos_2353_);
v___x_2356_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
v_a_2291_ = v___x_2356_;
goto _start;
}
}
else
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; 
lean_del_object(v___x_2311_);
lean_dec_ref(v_table_2307_);
lean_dec_ref(v_needle_2306_);
v___x_2359_ = lean_nat_sub(v_nextStackPos_2352_, v_nextNeedlePos_2353_);
lean_dec(v_nextNeedlePos_2353_);
lean_dec(v_nextStackPos_2352_);
v___x_2360_ = l_String_Slice_pos_x21(v___x_2289_, v___x_2359_);
lean_dec(v___x_2359_);
v___x_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2361_, 0, v___x_2360_);
return v___x_2361_;
}
}
}
}
}
default: 
{
lean_inc(v_b_2292_);
return v_b_2292_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg___boxed(lean_object* v___x_2363_, lean_object* v___x_2364_, lean_object* v___x_2365_, lean_object* v_a_2366_, lean_object* v_b_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(v___x_2363_, v___x_2364_, v___x_2365_, v_a_2366_, v_b_2367_);
lean_dec(v_b_2367_);
lean_dec(v___x_2365_);
lean_dec_ref(v___x_2364_);
lean_dec_ref(v___x_2363_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(lean_object* v_____r_2369_){
_start:
{
uint32_t v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2371_ = 500;
v___x_2372_ = l_IO_sleep(v___x_2371_);
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
return v___x_2373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0___boxed(lean_object* v_____r_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(v_____r_2374_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(lean_object* v_s_2377_){
_start:
{
lean_object* v___x_2379_; lean_object* v_putStr_2380_; lean_object* v___x_2381_; 
v___x_2379_ = lean_get_stderr();
v_putStr_2380_ = lean_ctor_get(v___x_2379_, 4);
lean_inc_ref(v_putStr_2380_);
lean_dec_ref(v___x_2379_);
v___x_2381_ = lean_apply_2(v_putStr_2380_, v_s_2377_, lean_box(0));
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1___boxed(lean_object* v_s_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(v_s_2382_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(lean_object* v_s_2385_){
_start:
{
uint32_t v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2387_ = 10;
v___x_2388_ = lean_string_push(v_s_2385_, v___x_2387_);
v___x_2389_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(v___x_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1___boxed(lean_object* v_s_2390_, lean_object* v_a_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(v_s_2390_);
return v_res_2392_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2398_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1));
v___x_2399_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_2398_);
return v___x_2399_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2400_ = lean_unsigned_to_nat(0u);
v___x_2401_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2);
v___x_2402_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1));
v___x_2403_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
lean_ctor_set(v___x_2403_, 1, v___x_2401_);
lean_ctor_set(v___x_2403_, 2, v___x_2400_);
lean_ctor_set(v___x_2403_, 3, v___x_2400_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(lean_object* v_a_2409_, lean_object* v_apply_2410_, lean_object* v___x_2411_){
_start:
{
lean_object* v___y_2414_; lean_object* v___x_2416_; lean_object* v_a_2418_; lean_object* v_a_2433_; lean_object* v___y_2438_; uint8_t v___y_2439_; lean_object* v___y_2440_; lean_object* v_val_2441_; lean_object* v___x_2448_; 
v___x_2416_ = lean_box(0);
v___x_2448_ = lean_uv_tcp_new();
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2539_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2451_ = v___x_2448_;
v_isShared_2452_ = v_isSharedCheck_2539_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2448_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2539_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v_a_2454_; lean_object* v___x_2509_; 
lean_inc_ref(v___x_2411_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2411_);
v___x_2509_ = v___x_2451_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v___x_2411_);
v___x_2509_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2508_;
}
v___jp_2453_:
{
lean_object* v___x_2455_; 
v___x_2455_ = l_Std_Async_AsyncTask_block___redArg(v_a_2454_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v___x_2456_; 
lean_dec_ref_known(v___x_2455_, 1);
v___x_2456_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(v_a_2449_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2456_, 1);
v___x_2458_ = l_Lean_Json_parse(v_a_2457_);
v___x_2459_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2458_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_a_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
lean_inc_n(v_a_2460_, 2);
lean_dec_ref_known(v___x_2459_, 1);
v___x_2461_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_2462_ = l_Lean_Json_getObjVal_x3f(v_a_2460_, v___x_2461_);
v___x_2463_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2462_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2464_);
lean_dec_ref_known(v___x_2463_, 1);
v___x_2465_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_2464_);
v___x_2466_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2465_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_object* v_a_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v_a_2467_ = lean_ctor_get(v___x_2466_, 0);
lean_inc(v_a_2467_);
lean_dec_ref_known(v___x_2466_, 1);
v___x_2468_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
v___x_2469_ = l_Lean_Json_getObjVal_x3f(v_a_2460_, v___x_2468_);
v___x_2470_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2469_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2470_, 1);
v___x_2472_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_2471_);
v___x_2473_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2472_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_object* v_a_2474_; lean_object* v___x_2475_; 
v_a_2474_ = lean_ctor_get(v___x_2473_, 0);
lean_inc(v_a_2474_);
lean_dec_ref_known(v___x_2473_, 1);
lean_inc_ref(v_a_2409_);
v___x_2475_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(v_a_2409_, v_a_2467_, v_a_2474_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2476_);
lean_dec_ref_known(v___x_2475_, 1);
lean_inc_ref(v_apply_2410_);
v___x_2477_ = lean_apply_1(v_apply_2410_, v_a_2476_);
v___x_2478_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(v_a_2449_, v___x_2477_);
if (lean_obj_tag(v___x_2478_) == 0)
{
lean_object* v___f_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; lean_object* v___x_2482_; 
lean_dec_ref_known(v___x_2478_, 1);
v___f_2479_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6));
v___x_2480_ = lean_unsigned_to_nat(0u);
v___x_2481_ = 0;
v___x_2482_ = lean_uv_tcp_shutdown(v_a_2449_);
lean_dec(v_a_2449_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2482_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
lean_ctor_set_tag(v___x_2485_, 1);
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
v___y_2438_ = v___f_2479_;
v___y_2439_ = v___x_2481_;
v___y_2440_ = v___x_2480_;
v_val_2441_ = v___x_2488_;
goto v___jp_2437_;
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
v_a_2491_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2482_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2482_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
lean_ctor_set_tag(v___x_2493_, 0);
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
v___y_2438_ = v___f_2479_;
v___y_2439_ = v___x_2481_;
v___y_2440_ = v___x_2480_;
v_val_2441_ = v___x_2496_;
goto v___jp_2437_;
}
}
}
}
else
{
lean_object* v_a_2499_; 
lean_dec(v_a_2449_);
v_a_2499_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_a_2499_);
lean_dec_ref_known(v___x_2478_, 1);
v_a_2418_ = v_a_2499_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2500_; 
lean_dec(v_a_2449_);
v_a_2500_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2475_, 1);
v_a_2418_ = v_a_2500_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2501_; 
lean_dec(v_a_2467_);
lean_dec(v_a_2449_);
v_a_2501_ = lean_ctor_get(v___x_2473_, 0);
lean_inc(v_a_2501_);
lean_dec_ref_known(v___x_2473_, 1);
v_a_2418_ = v_a_2501_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2502_; 
lean_dec(v_a_2467_);
lean_dec(v_a_2449_);
v_a_2502_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2502_);
lean_dec_ref_known(v___x_2470_, 1);
v_a_2418_ = v_a_2502_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2503_; 
lean_dec(v_a_2460_);
lean_dec(v_a_2449_);
v_a_2503_ = lean_ctor_get(v___x_2466_, 0);
lean_inc(v_a_2503_);
lean_dec_ref_known(v___x_2466_, 1);
v_a_2418_ = v_a_2503_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2504_; 
lean_dec(v_a_2460_);
lean_dec(v_a_2449_);
v_a_2504_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2504_);
lean_dec_ref_known(v___x_2463_, 1);
v_a_2418_ = v_a_2504_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2505_; 
lean_dec(v_a_2449_);
v_a_2505_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2505_);
lean_dec_ref_known(v___x_2459_, 1);
v_a_2418_ = v_a_2505_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2506_; 
lean_dec(v_a_2449_);
v_a_2506_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2506_);
lean_dec_ref_known(v___x_2456_, 1);
v_a_2418_ = v_a_2506_;
goto v___jp_2417_;
}
}
else
{
lean_object* v_a_2507_; 
lean_dec(v_a_2449_);
v_a_2507_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2507_);
lean_dec_ref_known(v___x_2455_, 1);
v_a_2418_ = v_a_2507_;
goto v___jp_2417_;
}
}
v_reusejp_2508_:
{
lean_object* v___f_2510_; lean_object* v___x_2511_; uint8_t v___x_2512_; lean_object* v_val_2514_; lean_object* v___x_2521_; 
v___f_2510_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6));
v___x_2511_ = lean_unsigned_to_nat(0u);
v___x_2512_ = 0;
v___x_2521_ = lean_uv_tcp_connect(v_a_2449_, v___x_2509_);
lean_dec_ref(v___x_2509_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2521_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2521_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
lean_ctor_set_tag(v___x_2524_, 1);
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
v_val_2514_ = v___x_2527_;
goto v___jp_2513_;
}
}
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
v_a_2530_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2521_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2521_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
lean_ctor_set_tag(v___x_2532_, 0);
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
v_val_2514_ = v___x_2535_;
goto v___jp_2513_;
}
}
}
v___jp_2513_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2515_, 0, v_val_2514_);
v___x_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
v___x_2517_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2511_, v___x_2512_, v___x_2516_, v___f_2510_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2519_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_a_2518_);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2519_ = lean_task_pure(v_a_2518_);
v_a_2454_ = v___x_2519_;
goto v___jp_2453_;
}
else
{
lean_object* v_a_2520_; 
v_a_2520_ = lean_ctor_get(v___x_2517_, 0);
lean_inc_ref(v_a_2520_);
lean_dec_ref_known(v___x_2517_, 1);
v_a_2454_ = v_a_2520_;
goto v___jp_2453_;
}
}
}
}
}
else
{
lean_object* v_a_2540_; 
v_a_2540_ = lean_ctor_get(v___x_2448_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2448_, 1);
v_a_2418_ = v_a_2540_;
goto v___jp_2417_;
}
v___jp_2413_:
{
if (lean_obj_tag(v___y_2414_) == 0)
{
lean_dec_ref_known(v___y_2414_, 1);
goto _start;
}
else
{
lean_dec_ref(v___x_2411_);
lean_dec_ref(v_apply_2410_);
lean_dec_ref(v_a_2409_);
return v___y_2414_;
}
}
v___jp_2417_:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2419_ = lean_io_error_to_string(v_a_2418_);
v___x_2420_ = lean_unsigned_to_nat(0u);
v___x_2421_ = lean_string_utf8_byte_size(v___x_2419_);
lean_inc_ref(v___x_2419_);
v___x_2422_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2419_);
lean_ctor_set(v___x_2422_, 1, v___x_2420_);
lean_ctor_set(v___x_2422_, 2, v___x_2421_);
v___x_2423_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3);
v___x_2424_ = lean_box(0);
v___x_2425_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(v___x_2419_, v___x_2422_, v___x_2421_, v___x_2423_, v___x_2424_);
lean_dec_ref_known(v___x_2422_, 3);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2426_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4));
v___x_2427_ = lean_string_append(v___x_2426_, v___x_2419_);
lean_dec_ref(v___x_2419_);
v___x_2428_ = l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(v___x_2427_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2428_, 1);
v___x_2430_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(v_a_2429_);
v___y_2414_ = v___x_2430_;
goto v___jp_2413_;
}
else
{
lean_dec_ref(v___x_2411_);
lean_dec_ref(v_apply_2410_);
lean_dec_ref(v_a_2409_);
return v___x_2428_;
}
}
else
{
lean_object* v___x_2431_; 
lean_dec_ref_known(v___x_2425_, 1);
lean_dec_ref(v___x_2419_);
v___x_2431_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(v___x_2416_);
v___y_2414_ = v___x_2431_;
goto v___jp_2413_;
}
}
v___jp_2432_:
{
lean_object* v___x_2434_; 
v___x_2434_ = l_Std_Async_AsyncTask_block___redArg(v_a_2433_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_dec_ref_known(v___x_2434_, 1);
goto _start;
}
else
{
lean_object* v_a_2436_; 
v_a_2436_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2436_);
lean_dec_ref_known(v___x_2434_, 1);
v_a_2418_ = v_a_2436_;
goto v___jp_2417_;
}
}
v___jp_2437_:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2442_, 0, v_val_2441_);
v___x_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2442_);
lean_inc_ref(v___y_2438_);
v___x_2444_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_2440_, v___y_2439_, v___x_2443_, v___y_2438_);
if (lean_obj_tag(v___x_2444_) == 0)
{
lean_object* v_a_2445_; lean_object* v___x_2446_; 
v_a_2445_ = lean_ctor_get(v___x_2444_, 0);
lean_inc(v_a_2445_);
lean_dec_ref_known(v___x_2444_, 1);
v___x_2446_ = lean_task_pure(v_a_2445_);
v_a_2433_ = v___x_2446_;
goto v___jp_2432_;
}
else
{
lean_object* v_a_2447_; 
v_a_2447_ = lean_ctor_get(v___x_2444_, 0);
lean_inc_ref(v_a_2447_);
lean_dec_ref_known(v___x_2444_, 1);
v_a_2433_ = v_a_2447_;
goto v___jp_2432_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___boxed(lean_object* v_a_2541_, lean_object* v_apply_2542_, lean_object* v___x_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v_res_2545_; 
v_res_2545_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(v_a_2541_, v_apply_2542_, v___x_2543_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* lean_idbg_client_loop(lean_object* v_siteId_2546_, lean_object* v_imports_2547_, lean_object* v_apply_2548_){
_start:
{
lean_object* v___x_2550_; 
v___x_2550_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(v_imports_2547_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v_a_2551_; uint16_t v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v_a_2551_ = lean_ctor_get(v___x_2550_, 0);
lean_inc(v_a_2551_);
lean_dec_ref_known(v___x_2550_, 1);
v___x_2552_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(v_siteId_2546_);
lean_dec_ref(v_siteId_2546_);
v___x_2553_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1);
v___x_2554_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2554_, 0, v___x_2553_);
lean_ctor_set_uint16(v___x_2554_, sizeof(void*)*1, v___x_2552_);
v___x_2555_ = lean_box(0);
v___x_2556_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(v_a_2551_, v_apply_2548_, v___x_2554_);
if (lean_obj_tag(v___x_2556_) == 0)
{
lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2563_ == 0)
{
lean_object* v_unused_2564_; 
v_unused_2564_ = lean_ctor_get(v___x_2556_, 0);
lean_dec(v_unused_2564_);
v___x_2558_ = v___x_2556_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_dec(v___x_2556_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 0, v___x_2555_);
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v___x_2555_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
else
{
return v___x_2556_;
}
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2572_; 
lean_dec_ref(v_apply_2548_);
lean_dec_ref(v_siteId_2546_);
v_a_2565_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2567_ = v___x_2550_;
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2550_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2570_; 
if (v_isShared_2568_ == 0)
{
v___x_2570_ = v___x_2567_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2565_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl___boxed(lean_object* v_siteId_2573_, lean_object* v_imports_2574_, lean_object* v_apply_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = lean_idbg_client_loop(v_siteId_2573_, v_imports_2574_, v_apply_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0(lean_object* v___x_2578_, lean_object* v___x_2579_, lean_object* v___x_2580_, lean_object* v_inst_2581_, lean_object* v_R_2582_, lean_object* v_a_2583_, lean_object* v_b_2584_, lean_object* v_c_2585_){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(v___x_2578_, v___x_2579_, v___x_2580_, v_a_2583_, v_b_2584_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___boxed(lean_object* v___x_2587_, lean_object* v___x_2588_, lean_object* v___x_2589_, lean_object* v_inst_2590_, lean_object* v_R_2591_, lean_object* v_a_2592_, lean_object* v_b_2593_, lean_object* v_c_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0(v___x_2587_, v___x_2588_, v___x_2589_, v_inst_2590_, v_R_2591_, v_a_2592_, v_b_2593_, v_c_2594_);
lean_dec(v_b_2593_);
lean_dec(v___x_2589_);
lean_dec_ref(v___x_2588_);
lean_dec_ref(v___x_2587_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3(lean_object* v_a_2596_, lean_object* v_apply_2597_, lean_object* v___x_2598_, lean_object* v_inst_2599_, lean_object* v_a_2600_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(v_a_2596_, v_apply_2597_, v___x_2598_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___boxed(lean_object* v_a_2603_, lean_object* v_apply_2604_, lean_object* v___x_2605_, lean_object* v_inst_2606_, lean_object* v_a_2607_, lean_object* v___y_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3(v_a_2603_, v_apply_2604_, v___x_2605_, v_inst_2606_, v_a_2607_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg(){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = l_Lean_Elab_Do_instInhabitedControlInfo_default;
v___x_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg___boxed(lean_object* v_a_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg();
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg(lean_object* v_x_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v___x_2623_; 
v___x_2623_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg();
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___boxed(lean_object* v_x_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_){
_start:
{
lean_object* v_res_2632_; 
v_res_2632_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg(v_x_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_);
lean_dec(v_a_2630_);
lean_dec_ref(v_a_2629_);
lean_dec(v_a_2628_);
lean_dec_ref(v_a_2627_);
lean_dec(v_a_2626_);
lean_dec_ref(v_a_2625_);
lean_dec(v_x_2624_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1(){
_start:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2675_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2676_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4));
v___x_2677_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18));
v___x_2678_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___boxed), 8, 0);
v___x_2679_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2675_, v___x_2676_, v___x_2677_, v___x_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___boxed(lean_object* v_a_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1();
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(lean_object* v_e_2682_, lean_object* v___y_2683_){
_start:
{
uint8_t v___x_2685_; 
v___x_2685_ = l_Lean_Expr_hasMVar(v_e_2682_);
if (v___x_2685_ == 0)
{
lean_object* v___x_2686_; 
v___x_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2686_, 0, v_e_2682_);
return v___x_2686_;
}
else
{
lean_object* v___x_2687_; lean_object* v_mctx_2688_; lean_object* v___x_2689_; lean_object* v_fst_2690_; lean_object* v_snd_2691_; lean_object* v___x_2692_; lean_object* v_cache_2693_; lean_object* v_zetaDeltaFVarIds_2694_; lean_object* v_postponed_2695_; lean_object* v_diag_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2705_; 
v___x_2687_ = lean_st_ref_get(v___y_2683_);
v_mctx_2688_ = lean_ctor_get(v___x_2687_, 0);
lean_inc_ref(v_mctx_2688_);
lean_dec(v___x_2687_);
v___x_2689_ = l_Lean_instantiateMVarsCore(v_mctx_2688_, v_e_2682_);
v_fst_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc(v_fst_2690_);
v_snd_2691_ = lean_ctor_get(v___x_2689_, 1);
lean_inc(v_snd_2691_);
lean_dec_ref(v___x_2689_);
v___x_2692_ = lean_st_ref_take(v___y_2683_);
v_cache_2693_ = lean_ctor_get(v___x_2692_, 1);
v_zetaDeltaFVarIds_2694_ = lean_ctor_get(v___x_2692_, 2);
v_postponed_2695_ = lean_ctor_get(v___x_2692_, 3);
v_diag_2696_ = lean_ctor_get(v___x_2692_, 4);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2705_ == 0)
{
lean_object* v_unused_2706_; 
v_unused_2706_ = lean_ctor_get(v___x_2692_, 0);
lean_dec(v_unused_2706_);
v___x_2698_ = v___x_2692_;
v_isShared_2699_ = v_isSharedCheck_2705_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_diag_2696_);
lean_inc(v_postponed_2695_);
lean_inc(v_zetaDeltaFVarIds_2694_);
lean_inc(v_cache_2693_);
lean_dec(v___x_2692_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2705_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 0, v_snd_2691_);
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_snd_2691_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_cache_2693_);
lean_ctor_set(v_reuseFailAlloc_2704_, 2, v_zetaDeltaFVarIds_2694_);
lean_ctor_set(v_reuseFailAlloc_2704_, 3, v_postponed_2695_);
lean_ctor_set(v_reuseFailAlloc_2704_, 4, v_diag_2696_);
v___x_2701_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2702_ = lean_st_ref_put(v___y_2683_, v___x_2701_);
v___x_2703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2703_, 0, v_fst_2690_);
return v___x_2703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg___boxed(lean_object* v_e_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_e_2707_, v___y_2708_);
lean_dec(v___y_2708_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3(lean_object* v_e_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_e_2711_, v___y_2715_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___boxed(lean_object* v_e_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3(v_e_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(lean_object* v_lctx_2729_, lean_object* v_x_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v_keyedConfig_2738_; uint8_t v_trackZetaDelta_2739_; lean_object* v_zetaDeltaSet_2740_; lean_object* v_localInstances_2741_; lean_object* v_defEqCtx_x3f_2742_; lean_object* v_synthPendingDepth_2743_; lean_object* v_customCanUnfoldPredicate_x3f_2744_; uint8_t v_univApprox_2745_; uint8_t v_inTypeClassResolution_2746_; uint8_t v_cacheInferType_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v_keyedConfig_2738_ = lean_ctor_get(v___y_2733_, 0);
v_trackZetaDelta_2739_ = lean_ctor_get_uint8(v___y_2733_, sizeof(void*)*7);
v_zetaDeltaSet_2740_ = lean_ctor_get(v___y_2733_, 1);
v_localInstances_2741_ = lean_ctor_get(v___y_2733_, 3);
v_defEqCtx_x3f_2742_ = lean_ctor_get(v___y_2733_, 4);
v_synthPendingDepth_2743_ = lean_ctor_get(v___y_2733_, 5);
v_customCanUnfoldPredicate_x3f_2744_ = lean_ctor_get(v___y_2733_, 6);
v_univApprox_2745_ = lean_ctor_get_uint8(v___y_2733_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2746_ = lean_ctor_get_uint8(v___y_2733_, sizeof(void*)*7 + 2);
v_cacheInferType_2747_ = lean_ctor_get_uint8(v___y_2733_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_2744_);
lean_inc(v_synthPendingDepth_2743_);
lean_inc(v_defEqCtx_x3f_2742_);
lean_inc_ref(v_localInstances_2741_);
lean_inc(v_zetaDeltaSet_2740_);
lean_inc_ref(v_keyedConfig_2738_);
v___x_2748_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2748_, 0, v_keyedConfig_2738_);
lean_ctor_set(v___x_2748_, 1, v_zetaDeltaSet_2740_);
lean_ctor_set(v___x_2748_, 2, v_lctx_2729_);
lean_ctor_set(v___x_2748_, 3, v_localInstances_2741_);
lean_ctor_set(v___x_2748_, 4, v_defEqCtx_x3f_2742_);
lean_ctor_set(v___x_2748_, 5, v_synthPendingDepth_2743_);
lean_ctor_set(v___x_2748_, 6, v_customCanUnfoldPredicate_x3f_2744_);
lean_ctor_set_uint8(v___x_2748_, sizeof(void*)*7, v_trackZetaDelta_2739_);
lean_ctor_set_uint8(v___x_2748_, sizeof(void*)*7 + 1, v_univApprox_2745_);
lean_ctor_set_uint8(v___x_2748_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2746_);
lean_ctor_set_uint8(v___x_2748_, sizeof(void*)*7 + 3, v_cacheInferType_2747_);
lean_inc(v___y_2736_);
lean_inc_ref(v___y_2735_);
lean_inc(v___y_2734_);
lean_inc(v___y_2732_);
lean_inc_ref(v___y_2731_);
v___x_2749_ = lean_apply_7(v_x_2730_, v___y_2731_, v___y_2732_, v___x_2748_, v___y_2734_, v___y_2735_, v___y_2736_, lean_box(0));
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2752_ = v___x_2749_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_a_2750_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
else
{
return v___x_2749_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg___boxed(lean_object* v_lctx_2758_, lean_object* v_x_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(v_lctx_2758_, v_x_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec(v___y_2761_);
lean_dec_ref(v___y_2760_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4(lean_object* v_00_u03b1_2768_, lean_object* v_lctx_2769_, lean_object* v_x_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v___x_2778_; 
v___x_2778_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(v_lctx_2769_, v_x_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___boxed(lean_object* v_00_u03b1_2779_, lean_object* v_lctx_2780_, lean_object* v_x_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4(v_00_u03b1_2779_, v_lctx_2780_, v_x_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
lean_dec(v___y_2787_);
lean_dec_ref(v___y_2786_);
lean_dec(v___y_2785_);
lean_dec_ref(v___y_2784_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0(lean_object* v_k_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v_b_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v___x_2799_; 
lean_inc(v___y_2797_);
lean_inc_ref(v___y_2796_);
lean_inc(v___y_2795_);
lean_inc_ref(v___y_2794_);
lean_inc(v___y_2792_);
lean_inc_ref(v___y_2791_);
v___x_2799_ = lean_apply_8(v_k_2790_, v_b_2793_, v___y_2791_, v___y_2792_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, lean_box(0));
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0___boxed(lean_object* v_k_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v_b_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0(v_k_2800_, v___y_2801_, v___y_2802_, v_b_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___y_2805_);
lean_dec_ref(v___y_2804_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(lean_object* v_name_2810_, uint8_t v_bi_2811_, lean_object* v_type_2812_, lean_object* v_k_2813_, uint8_t v_kind_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v___f_2822_; lean_object* v___x_2823_; 
lean_inc(v___y_2816_);
lean_inc_ref(v___y_2815_);
v___f_2822_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2822_, 0, v_k_2813_);
lean_closure_set(v___f_2822_, 1, v___y_2815_);
lean_closure_set(v___f_2822_, 2, v___y_2816_);
v___x_2823_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2810_, v_bi_2811_, v_type_2812_, v___f_2822_, v_kind_2814_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2823_) == 0)
{
return v___x_2823_;
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v___x_2823_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2823_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_a_2824_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___boxed(lean_object* v_name_2832_, lean_object* v_bi_2833_, lean_object* v_type_2834_, lean_object* v_k_2835_, lean_object* v_kind_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
uint8_t v_bi_boxed_2844_; uint8_t v_kind_boxed_2845_; lean_object* v_res_2846_; 
v_bi_boxed_2844_ = lean_unbox(v_bi_2833_);
v_kind_boxed_2845_ = lean_unbox(v_kind_2836_);
v_res_2846_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(v_name_2832_, v_bi_boxed_2844_, v_type_2834_, v_k_2835_, v_kind_boxed_2845_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_);
lean_dec(v___y_2842_);
lean_dec_ref(v___y_2841_);
lean_dec(v___y_2840_);
lean_dec_ref(v___y_2839_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5(lean_object* v_00_u03b1_2847_, lean_object* v_name_2848_, uint8_t v_bi_2849_, lean_object* v_type_2850_, lean_object* v_k_2851_, uint8_t v_kind_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(v_name_2848_, v_bi_2849_, v_type_2850_, v_k_2851_, v_kind_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___boxed(lean_object* v_00_u03b1_2861_, lean_object* v_name_2862_, lean_object* v_bi_2863_, lean_object* v_type_2864_, lean_object* v_k_2865_, lean_object* v_kind_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
uint8_t v_bi_boxed_2874_; uint8_t v_kind_boxed_2875_; lean_object* v_res_2876_; 
v_bi_boxed_2874_ = lean_unbox(v_bi_2863_);
v_kind_boxed_2875_ = lean_unbox(v_kind_2866_);
v_res_2876_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5(v_00_u03b1_2861_, v_name_2862_, v_bi_boxed_2874_, v_type_2864_, v_k_2865_, v_kind_boxed_2875_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
return v_res_2876_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(lean_object* v_opts_2877_, lean_object* v_opt_2878_){
_start:
{
lean_object* v_name_2879_; lean_object* v_defValue_2880_; lean_object* v_map_2881_; lean_object* v___x_2882_; 
v_name_2879_ = lean_ctor_get(v_opt_2878_, 0);
v_defValue_2880_ = lean_ctor_get(v_opt_2878_, 1);
v_map_2881_ = lean_ctor_get(v_opts_2877_, 0);
v___x_2882_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2881_, v_name_2879_);
if (lean_obj_tag(v___x_2882_) == 0)
{
uint8_t v___x_2883_; 
v___x_2883_ = lean_unbox(v_defValue_2880_);
return v___x_2883_;
}
else
{
lean_object* v_val_2884_; 
v_val_2884_ = lean_ctor_get(v___x_2882_, 0);
lean_inc(v_val_2884_);
lean_dec_ref_known(v___x_2882_, 1);
if (lean_obj_tag(v_val_2884_) == 1)
{
uint8_t v_v_2885_; 
v_v_2885_ = lean_ctor_get_uint8(v_val_2884_, 0);
lean_dec_ref_known(v_val_2884_, 0);
return v_v_2885_;
}
else
{
uint8_t v___x_2886_; 
lean_dec(v_val_2884_);
v___x_2886_ = lean_unbox(v_defValue_2880_);
return v___x_2886_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8___boxed(lean_object* v_opts_2887_, lean_object* v_opt_2888_){
_start:
{
uint8_t v_res_2889_; lean_object* v_r_2890_; 
v_res_2889_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v_opts_2887_, v_opt_2888_);
lean_dec_ref(v_opt_2888_);
lean_dec_ref(v_opts_2887_);
v_r_2890_ = lean_box(v_res_2889_);
return v_r_2890_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0(uint8_t v___x_2898_, lean_object* v_x_2899_){
_start:
{
if (lean_obj_tag(v_x_2899_) == 1)
{
lean_object* v_pre_2900_; 
v_pre_2900_ = lean_ctor_get(v_x_2899_, 0);
switch(lean_obj_tag(v_pre_2900_))
{
case 1:
{
lean_object* v_pre_2901_; 
v_pre_2901_ = lean_ctor_get(v_pre_2900_, 0);
switch(lean_obj_tag(v_pre_2901_))
{
case 0:
{
lean_object* v_str_2902_; lean_object* v_str_2903_; lean_object* v___x_2904_; uint8_t v___x_2905_; 
v_str_2902_ = lean_ctor_get(v_x_2899_, 1);
v_str_2903_ = lean_ctor_get(v_pre_2900_, 1);
v___x_2904_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8));
v___x_2905_ = lean_string_dec_eq(v_str_2903_, v___x_2904_);
if (v___x_2905_ == 0)
{
lean_object* v___x_2906_; uint8_t v___x_2907_; 
v___x_2906_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0));
v___x_2907_ = lean_string_dec_eq(v_str_2903_, v___x_2906_);
if (v___x_2907_ == 0)
{
return v___x_2907_;
}
else
{
lean_object* v___x_2908_; uint8_t v___x_2909_; 
v___x_2908_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1));
v___x_2909_ = lean_string_dec_eq(v_str_2902_, v___x_2908_);
return v___x_2909_;
}
}
else
{
lean_object* v___x_2910_; uint8_t v___x_2911_; 
v___x_2910_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2));
v___x_2911_ = lean_string_dec_eq(v_str_2902_, v___x_2910_);
return v___x_2911_;
}
}
case 1:
{
lean_object* v_pre_2912_; 
v_pre_2912_ = lean_ctor_get(v_pre_2901_, 0);
if (lean_obj_tag(v_pre_2912_) == 0)
{
lean_object* v_str_2913_; lean_object* v_str_2914_; lean_object* v_str_2915_; lean_object* v___x_2916_; uint8_t v___x_2917_; 
v_str_2913_ = lean_ctor_get(v_x_2899_, 1);
v_str_2914_ = lean_ctor_get(v_pre_2900_, 1);
v_str_2915_ = lean_ctor_get(v_pre_2901_, 1);
v___x_2916_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3));
v___x_2917_ = lean_string_dec_eq(v_str_2915_, v___x_2916_);
if (v___x_2917_ == 0)
{
return v___x_2917_;
}
else
{
lean_object* v___x_2918_; uint8_t v___x_2919_; 
v___x_2918_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4));
v___x_2919_ = lean_string_dec_eq(v_str_2914_, v___x_2918_);
if (v___x_2919_ == 0)
{
return v___x_2919_;
}
else
{
lean_object* v___x_2920_; uint8_t v___x_2921_; 
v___x_2920_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5));
v___x_2921_ = lean_string_dec_eq(v_str_2913_, v___x_2920_);
return v___x_2921_;
}
}
}
else
{
return v___x_2898_;
}
}
default: 
{
return v___x_2898_;
}
}
}
case 0:
{
lean_object* v_str_2922_; lean_object* v___x_2923_; uint8_t v___x_2924_; 
v_str_2922_ = lean_ctor_get(v_x_2899_, 1);
v___x_2923_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6));
v___x_2924_ = lean_string_dec_eq(v_str_2922_, v___x_2923_);
return v___x_2924_;
}
default: 
{
return v___x_2898_;
}
}
}
else
{
return v___x_2898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___boxed(lean_object* v___x_2925_, lean_object* v_x_2926_){
_start:
{
uint8_t v___x_33971__boxed_2927_; uint8_t v_res_2928_; lean_object* v_r_2929_; 
v___x_33971__boxed_2927_ = lean_unbox(v___x_2925_);
v_res_2928_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0(v___x_33971__boxed_2927_, v_x_2926_);
lean_dec(v_x_2926_);
v_r_2929_ = lean_box(v_res_2928_);
return v_r_2929_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0(void){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2930_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14);
v___x_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2930_);
return v___x_2931_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1(void){
_start:
{
lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2932_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0);
v___x_2933_ = lean_unsigned_to_nat(0u);
v___x_2934_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
lean_ctor_set(v___x_2934_, 1, v___x_2933_);
lean_ctor_set(v___x_2934_, 2, v___x_2933_);
lean_ctor_set(v___x_2934_, 3, v___x_2933_);
lean_ctor_set(v___x_2934_, 4, v___x_2932_);
lean_ctor_set(v___x_2934_, 5, v___x_2932_);
lean_ctor_set(v___x_2934_, 6, v___x_2932_);
lean_ctor_set(v___x_2934_, 7, v___x_2932_);
lean_ctor_set(v___x_2934_, 8, v___x_2932_);
lean_ctor_set(v___x_2934_, 9, v___x_2932_);
lean_ctor_set(v___x_2934_, 10, v___x_2932_);
return v___x_2934_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2(void){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2935_ = lean_unsigned_to_nat(32u);
v___x_2936_ = lean_mk_empty_array_with_capacity(v___x_2935_);
v___x_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
return v___x_2937_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3(void){
_start:
{
size_t v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2938_ = ((size_t)5ULL);
v___x_2939_ = lean_unsigned_to_nat(0u);
v___x_2940_ = lean_unsigned_to_nat(32u);
v___x_2941_ = lean_mk_empty_array_with_capacity(v___x_2940_);
v___x_2942_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2);
v___x_2943_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
lean_ctor_set(v___x_2943_, 1, v___x_2941_);
lean_ctor_set(v___x_2943_, 2, v___x_2939_);
lean_ctor_set(v___x_2943_, 3, v___x_2939_);
lean_ctor_set_usize(v___x_2943_, 4, v___x_2938_);
return v___x_2943_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4(void){
_start:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2944_ = lean_box(1);
v___x_2945_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3);
v___x_2946_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0);
v___x_2947_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
lean_ctor_set(v___x_2947_, 1, v___x_2945_);
lean_ctor_set(v___x_2947_, 2, v___x_2944_);
return v___x_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(lean_object* v_msgData_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_){
_start:
{
lean_object* v___x_2952_; lean_object* v_toCold_2953_; lean_object* v_env_2954_; lean_object* v_options_2955_; uint8_t v___x_2956_; lean_object* v_env_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2952_ = lean_st_ref_get(v___y_2950_);
v_toCold_2953_ = lean_ctor_get(v___y_2949_, 0);
v_env_2954_ = lean_ctor_get(v___x_2952_, 0);
lean_inc_ref(v_env_2954_);
lean_dec(v___x_2952_);
v_options_2955_ = lean_ctor_get(v_toCold_2953_, 2);
v___x_2956_ = 0;
v_env_2957_ = l_Lean_Environment_setRecordingDeps(v_env_2954_, v___x_2956_);
v___x_2958_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1);
v___x_2959_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4);
lean_inc_ref(v_options_2955_);
v___x_2960_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2960_, 0, v_env_2957_);
lean_ctor_set(v___x_2960_, 1, v___x_2958_);
lean_ctor_set(v___x_2960_, 2, v___x_2959_);
lean_ctor_set(v___x_2960_, 3, v_options_2955_);
v___x_2961_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2960_);
lean_ctor_set(v___x_2961_, 1, v_msgData_2948_);
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___boxed(lean_object* v_msgData_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(v_msgData_2963_, v___y_2964_, v___y_2965_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(lean_object* v_ref_2972_, lean_object* v_msgData_2973_, uint8_t v_severity_2974_, uint8_t v_isSilent_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
uint8_t v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; uint8_t v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v_toCold_2987_; lean_object* v___y_2988_; lean_object* v___y_3017_; lean_object* v___y_3018_; uint8_t v___y_3019_; uint8_t v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; uint8_t v___y_3023_; lean_object* v___y_3024_; uint8_t v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; uint8_t v___y_3048_; uint8_t v___y_3049_; lean_object* v___y_3050_; uint8_t v___y_3054_; uint8_t v___x_3071_; uint8_t v___x_3072_; 
v___x_3071_ = 2;
v___x_3072_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2974_, v___x_3071_);
if (v___x_3072_ == 0)
{
goto v___jp_3064_;
}
else
{
uint8_t v___x_3073_; 
lean_inc_ref(v_msgData_2973_);
v___x_3073_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2973_);
if (v___x_3073_ == 0)
{
goto v___jp_3064_;
}
else
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
lean_dec_ref(v_msgData_2973_);
v___x_3074_ = lean_box(0);
v___x_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
return v___x_3075_;
}
}
v___jp_2979_:
{
lean_object* v_currNamespace_2989_; lean_object* v_openDecls_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v_env_2995_; lean_object* v_nextMacroScope_2996_; lean_object* v_ngen_2997_; lean_object* v_auxDeclNGen_2998_; lean_object* v_traceState_2999_; lean_object* v_cache_3000_; lean_object* v_recordedDeps_3001_; lean_object* v_messages_3002_; lean_object* v_infoState_3003_; lean_object* v_snapshotTasks_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3015_; 
v_currNamespace_2989_ = lean_ctor_get(v_toCold_2987_, 4);
v_openDecls_2990_ = lean_ctor_get(v_toCold_2987_, 5);
lean_inc(v_openDecls_2990_);
lean_inc(v_currNamespace_2989_);
v___x_2991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2991_, 0, v_currNamespace_2989_);
lean_ctor_set(v___x_2991_, 1, v_openDecls_2990_);
v___x_2992_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
lean_ctor_set(v___x_2992_, 1, v___y_2981_);
lean_inc_ref(v___y_2986_);
lean_inc_ref(v___y_2985_);
v___x_2993_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2993_, 0, v___y_2985_);
lean_ctor_set(v___x_2993_, 1, v___y_2983_);
lean_ctor_set(v___x_2993_, 2, v___y_2982_);
lean_ctor_set(v___x_2993_, 3, v___y_2986_);
lean_ctor_set(v___x_2993_, 4, v___x_2992_);
lean_ctor_set_uint8(v___x_2993_, sizeof(void*)*5, v___y_2984_);
lean_ctor_set_uint8(v___x_2993_, sizeof(void*)*5 + 1, v___y_2980_);
lean_ctor_set_uint8(v___x_2993_, sizeof(void*)*5 + 2, v_isSilent_2975_);
v___x_2994_ = lean_st_ref_take(v___y_2988_);
v_env_2995_ = lean_ctor_get(v___x_2994_, 0);
v_nextMacroScope_2996_ = lean_ctor_get(v___x_2994_, 1);
v_ngen_2997_ = lean_ctor_get(v___x_2994_, 2);
v_auxDeclNGen_2998_ = lean_ctor_get(v___x_2994_, 3);
v_traceState_2999_ = lean_ctor_get(v___x_2994_, 4);
v_cache_3000_ = lean_ctor_get(v___x_2994_, 5);
v_recordedDeps_3001_ = lean_ctor_get(v___x_2994_, 6);
v_messages_3002_ = lean_ctor_get(v___x_2994_, 7);
v_infoState_3003_ = lean_ctor_get(v___x_2994_, 8);
v_snapshotTasks_3004_ = lean_ctor_get(v___x_2994_, 9);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3006_ = v___x_2994_;
v_isShared_3007_ = v_isSharedCheck_3015_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_snapshotTasks_3004_);
lean_inc(v_infoState_3003_);
lean_inc(v_messages_3002_);
lean_inc(v_recordedDeps_3001_);
lean_inc(v_cache_3000_);
lean_inc(v_traceState_2999_);
lean_inc(v_auxDeclNGen_2998_);
lean_inc(v_ngen_2997_);
lean_inc(v_nextMacroScope_2996_);
lean_inc(v_env_2995_);
lean_dec(v___x_2994_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3015_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3011_; 
v___x_3008_ = lean_box(0);
v___x_3009_ = l_Lean_MessageLog_add(v___x_2993_, v_messages_3002_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 7, v___x_3009_);
v___x_3011_ = v___x_3006_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_env_2995_);
lean_ctor_set(v_reuseFailAlloc_3014_, 1, v_nextMacroScope_2996_);
lean_ctor_set(v_reuseFailAlloc_3014_, 2, v_ngen_2997_);
lean_ctor_set(v_reuseFailAlloc_3014_, 3, v_auxDeclNGen_2998_);
lean_ctor_set(v_reuseFailAlloc_3014_, 4, v_traceState_2999_);
lean_ctor_set(v_reuseFailAlloc_3014_, 5, v_cache_3000_);
lean_ctor_set(v_reuseFailAlloc_3014_, 6, v_recordedDeps_3001_);
lean_ctor_set(v_reuseFailAlloc_3014_, 7, v___x_3009_);
lean_ctor_set(v_reuseFailAlloc_3014_, 8, v_infoState_3003_);
lean_ctor_set(v_reuseFailAlloc_3014_, 9, v_snapshotTasks_3004_);
v___x_3011_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3012_ = lean_st_ref_put(v___y_2988_, v___x_3011_);
v___x_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3008_);
return v___x_3013_;
}
}
}
v___jp_3016_:
{
lean_object* v_fileName_3025_; lean_object* v_fileMap_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3042_; 
v_fileName_3025_ = lean_ctor_get(v___y_3021_, 0);
v_fileMap_3026_ = lean_ctor_get(v___y_3021_, 1);
v___x_3027_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2973_);
v___x_3028_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(v___x_3027_, v___y_2976_, v___y_2977_);
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3031_ = v___x_3028_;
v_isShared_3032_ = v_isSharedCheck_3042_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_dec(v___x_3028_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3042_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; 
lean_inc_ref_n(v_fileMap_3026_, 2);
v___x_3033_ = l_Lean_FileMap_toPosition(v_fileMap_3026_, v___y_3022_);
lean_dec(v___y_3022_);
v___x_3034_ = l_Lean_FileMap_toPosition(v_fileMap_3026_, v___y_3024_);
lean_dec(v___y_3024_);
v___x_3035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
v___x_3036_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0));
if (v___y_3023_ == 0)
{
lean_del_object(v___x_3031_);
v___y_2980_ = v___y_3019_;
v___y_2981_ = v_a_3029_;
v___y_2982_ = v___x_3035_;
v___y_2983_ = v___x_3033_;
v___y_2984_ = v___y_3020_;
v___y_2985_ = v_fileName_3025_;
v___y_2986_ = v___x_3036_;
v_toCold_2987_ = v___y_3017_;
v___y_2988_ = v___y_2977_;
goto v___jp_2979_;
}
else
{
uint8_t v___x_3037_; 
lean_inc(v_a_3029_);
lean_inc_ref(v___y_3018_);
v___x_3037_ = l_Lean_MessageData_hasTag(v___y_3018_, v_a_3029_);
if (v___x_3037_ == 0)
{
lean_object* v___x_3038_; lean_object* v___x_3040_; 
lean_dec_ref_known(v___x_3035_, 1);
lean_dec_ref(v___x_3033_);
lean_dec(v_a_3029_);
v___x_3038_ = lean_box(0);
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 0, v___x_3038_);
v___x_3040_ = v___x_3031_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v___x_3038_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
else
{
lean_del_object(v___x_3031_);
v___y_2980_ = v___y_3019_;
v___y_2981_ = v_a_3029_;
v___y_2982_ = v___x_3035_;
v___y_2983_ = v___x_3033_;
v___y_2984_ = v___y_3020_;
v___y_2985_ = v_fileName_3025_;
v___y_2986_ = v___x_3036_;
v_toCold_2987_ = v___y_3017_;
v___y_2988_ = v___y_2977_;
goto v___jp_2979_;
}
}
}
}
v___jp_3043_:
{
lean_object* v___x_3051_; 
v___x_3051_ = l_Lean_Syntax_getTailPos_x3f(v___y_3046_, v___y_3044_);
lean_dec(v___y_3046_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_inc(v___y_3050_);
v___y_3017_ = v___y_3045_;
v___y_3018_ = v___y_3047_;
v___y_3019_ = v___y_3049_;
v___y_3020_ = v___y_3044_;
v___y_3021_ = v___y_3045_;
v___y_3022_ = v___y_3050_;
v___y_3023_ = v___y_3048_;
v___y_3024_ = v___y_3050_;
goto v___jp_3016_;
}
else
{
lean_object* v_val_3052_; 
v_val_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_val_3052_);
lean_dec_ref_known(v___x_3051_, 1);
v___y_3017_ = v___y_3045_;
v___y_3018_ = v___y_3047_;
v___y_3019_ = v___y_3049_;
v___y_3020_ = v___y_3044_;
v___y_3021_ = v___y_3045_;
v___y_3022_ = v___y_3050_;
v___y_3023_ = v___y_3048_;
v___y_3024_ = v_val_3052_;
goto v___jp_3016_;
}
}
v___jp_3053_:
{
lean_object* v_toCold_3055_; lean_object* v_ref_3056_; uint8_t v_suppressElabErrors_3057_; lean_object* v_ref_3058_; uint8_t v___x_3059_; lean_object* v___f_3060_; lean_object* v___x_3061_; 
v_toCold_3055_ = lean_ctor_get(v___y_2976_, 0);
v_ref_3056_ = lean_ctor_get(v___y_2976_, 2);
v_suppressElabErrors_3057_ = lean_ctor_get_uint8(v___y_2976_, sizeof(void*)*3 + 2);
v_ref_3058_ = l_Lean_replaceRef(v_ref_2972_, v_ref_3056_);
v___x_3059_ = 0;
v___f_3060_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__1));
v___x_3061_ = l_Lean_Syntax_getPos_x3f(v_ref_3058_, v___x_3059_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v___x_3062_; 
v___x_3062_ = lean_unsigned_to_nat(0u);
v___y_3044_ = v___x_3059_;
v___y_3045_ = v_toCold_3055_;
v___y_3046_ = v_ref_3058_;
v___y_3047_ = v___f_3060_;
v___y_3048_ = v_suppressElabErrors_3057_;
v___y_3049_ = v___y_3054_;
v___y_3050_ = v___x_3062_;
goto v___jp_3043_;
}
else
{
lean_object* v_val_3063_; 
v_val_3063_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_val_3063_);
lean_dec_ref_known(v___x_3061_, 1);
v___y_3044_ = v___x_3059_;
v___y_3045_ = v_toCold_3055_;
v___y_3046_ = v_ref_3058_;
v___y_3047_ = v___f_3060_;
v___y_3048_ = v_suppressElabErrors_3057_;
v___y_3049_ = v___y_3054_;
v___y_3050_ = v_val_3063_;
goto v___jp_3043_;
}
}
v___jp_3064_:
{
uint8_t v___x_3065_; uint8_t v___x_3066_; 
v___x_3065_ = 1;
v___x_3066_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2974_, v___x_3065_);
if (v___x_3066_ == 0)
{
v___y_3054_ = v_severity_2974_;
goto v___jp_3053_;
}
else
{
lean_object* v___x_3067_; lean_object* v___x_3068_; uint8_t v___x_3069_; 
v___x_3067_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2976_);
v___x_3068_ = l_Lean_warningAsError;
v___x_3069_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v___x_3067_, v___x_3068_);
lean_dec_ref(v___x_3067_);
if (v___x_3069_ == 0)
{
v___y_3054_ = v_severity_2974_;
goto v___jp_3053_;
}
else
{
uint8_t v___x_3070_; 
v___x_3070_ = 2;
v___y_3054_ = v___x_3070_;
goto v___jp_3053_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___boxed(lean_object* v_ref_3076_, lean_object* v_msgData_3077_, lean_object* v_severity_3078_, lean_object* v_isSilent_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_){
_start:
{
uint8_t v_severity_boxed_3083_; uint8_t v_isSilent_boxed_3084_; lean_object* v_res_3085_; 
v_severity_boxed_3083_ = lean_unbox(v_severity_3078_);
v_isSilent_boxed_3084_ = lean_unbox(v_isSilent_3079_);
v_res_3085_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(v_ref_3076_, v_msgData_3077_, v_severity_boxed_3083_, v_isSilent_boxed_3084_, v___y_3080_, v___y_3081_);
lean_dec(v___y_3081_);
lean_dec_ref(v___y_3080_);
lean_dec(v_ref_3076_);
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(lean_object* v_ref_3086_, lean_object* v_msgData_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_){
_start:
{
uint8_t v___x_3091_; uint8_t v___x_3092_; lean_object* v___x_3093_; 
v___x_3091_ = 0;
v___x_3092_ = 0;
v___x_3093_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(v_ref_3086_, v_msgData_3087_, v___x_3091_, v___x_3092_, v___y_3088_, v___y_3089_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9___boxed(lean_object* v_ref_3094_, lean_object* v_msgData_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(v_ref_3094_, v_msgData_3095_, v___y_3096_, v___y_3097_);
lean_dec(v___y_3097_);
lean_dec_ref(v___y_3096_);
lean_dec(v_ref_3094_);
return v_res_3099_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3101_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0));
v___x_3102_ = l_Lean_stringToMessageData(v___x_3101_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0(lean_object* v___x_3103_, lean_object* v___x_3104_, lean_object* v_ref_3105_, lean_object* v_x_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_){
_start:
{
lean_object* v_ref_3110_; lean_object* v___x_3111_; 
v_ref_3110_ = lean_ctor_get(v___y_3107_, 2);
v___x_3111_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(v___x_3103_, v___x_3104_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3125_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3114_ = v___x_3111_;
v_isShared_3115_ = v_isSharedCheck_3125_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3111_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3125_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
if (lean_obj_tag(v_a_3112_) == 1)
{
lean_object* v_val_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
lean_del_object(v___x_3114_);
v_val_3116_ = lean_ctor_get(v_a_3112_, 0);
lean_inc(v_val_3116_);
lean_dec_ref_known(v_a_3112_, 1);
v___x_3117_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1);
v___x_3118_ = l_Lean_stringToMessageData(v_val_3116_);
v___x_3119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3117_);
lean_ctor_set(v___x_3119_, 1, v___x_3118_);
v___x_3120_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(v_ref_3105_, v___x_3119_, v___y_3107_, v___y_3108_);
return v___x_3120_;
}
else
{
lean_object* v___x_3121_; lean_object* v___x_3123_; 
lean_dec(v_a_3112_);
v___x_3121_ = lean_box(0);
if (v_isShared_3115_ == 0)
{
lean_ctor_set(v___x_3114_, 0, v___x_3121_);
v___x_3123_ = v___x_3114_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3137_; 
v_a_3126_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3128_ = v___x_3111_;
v_isShared_3129_ = v_isSharedCheck_3137_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3111_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3137_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3135_; 
v___x_3130_ = lean_io_error_to_string(v_a_3126_);
v___x_3131_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
v___x_3132_ = l_Lean_MessageData_ofFormat(v___x_3131_);
lean_inc(v_ref_3110_);
v___x_3133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3133_, 0, v_ref_3110_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 0, v___x_3133_);
v___x_3135_ = v___x_3128_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3133_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___boxed(lean_object* v___x_3138_, lean_object* v___x_3139_, lean_object* v_ref_3140_, lean_object* v_x_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0(v___x_3138_, v___x_3139_, v_ref_3140_, v_x_3141_, v___y_3142_, v___y_3143_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v_ref_3140_);
lean_dec_ref(v___x_3138_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1(lean_object* v___x_3146_, lean_object* v___x_3147_, uint8_t v___x_3148_, uint8_t v___x_3149_, uint8_t v___x_3150_, lean_object* v_fVar_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
lean_inc_ref(v_fVar_3151_);
v___x_3159_ = l_Lean_mkAppN(v_fVar_3151_, v___x_3146_);
v___x_3160_ = lean_array_push(v___x_3147_, v_fVar_3151_);
v___x_3161_ = l_Lean_Meta_mkLambdaFVars(v___x_3160_, v___x_3159_, v___x_3148_, v___x_3149_, v___x_3148_, v___x_3149_, v___x_3150_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
lean_dec_ref(v___x_3160_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1___boxed(lean_object* v___x_3162_, lean_object* v___x_3163_, lean_object* v___x_3164_, lean_object* v___x_3165_, lean_object* v___x_3166_, lean_object* v_fVar_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
uint8_t v___x_34414__boxed_3175_; uint8_t v___x_34415__boxed_3176_; uint8_t v___x_34416__boxed_3177_; lean_object* v_res_3178_; 
v___x_34414__boxed_3175_ = lean_unbox(v___x_3164_);
v___x_34415__boxed_3176_ = lean_unbox(v___x_3165_);
v___x_34416__boxed_3177_ = lean_unbox(v___x_3166_);
v_res_3178_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1(v___x_3162_, v___x_3163_, v___x_34414__boxed_3175_, v___x_34415__boxed_3176_, v___x_34416__boxed_3177_, v_fVar_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec_ref(v___x_3162_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2(lean_object* v___x_3179_, lean_object* v_a_3180_, uint8_t v___x_3181_, uint8_t v___x_3182_, uint8_t v___x_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_Lean_Meta_mkLambdaFVars(v___x_3179_, v_a_3180_, v___x_3181_, v___x_3182_, v___x_3181_, v___x_3182_, v___x_3183_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; lean_object* v___x_3193_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc_n(v_a_3192_, 2);
lean_dec_ref_known(v___x_3191_, 1);
lean_inc(v___y_3187_);
v___x_3193_ = lean_infer_type(v_a_3192_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_object* v_a_3194_; lean_object* v___x_3195_; lean_object* v_a_3196_; lean_object* v___x_3197_; lean_object* v_a_3198_; lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3206_; 
v_a_3194_ = lean_ctor_get(v___x_3193_, 0);
lean_inc(v_a_3194_);
lean_dec_ref_known(v___x_3193_, 1);
v___x_3195_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_3192_, v___y_3187_);
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref(v___x_3195_);
v___x_3197_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_3194_, v___y_3187_);
lean_dec(v___y_3187_);
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3200_ = v___x_3197_;
v_isShared_3201_ = v_isSharedCheck_3206_;
goto v_resetjp_3199_;
}
else
{
lean_inc(v_a_3198_);
lean_dec(v___x_3197_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3206_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3202_; lean_object* v___x_3204_; 
v___x_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3202_, 0, v_a_3196_);
lean_ctor_set(v___x_3202_, 1, v_a_3198_);
if (v_isShared_3201_ == 0)
{
lean_ctor_set(v___x_3200_, 0, v___x_3202_);
v___x_3204_ = v___x_3200_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v___x_3202_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
else
{
lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3214_; 
lean_dec(v_a_3192_);
lean_dec(v___y_3187_);
v_a_3207_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3209_ = v___x_3193_;
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_dec(v___x_3193_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3212_; 
if (v_isShared_3210_ == 0)
{
v___x_3212_ = v___x_3209_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v_a_3207_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
return v___x_3212_;
}
}
}
}
else
{
lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3222_; 
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
v_a_3215_ = lean_ctor_get(v___x_3191_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3217_ = v___x_3191_;
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_dec(v___x_3191_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v___x_3220_; 
if (v_isShared_3218_ == 0)
{
v___x_3220_ = v___x_3217_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_a_3215_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2___boxed(lean_object* v___x_3223_, lean_object* v_a_3224_, lean_object* v___x_3225_, lean_object* v___x_3226_, lean_object* v___x_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_){
_start:
{
uint8_t v___x_34456__boxed_3235_; uint8_t v___x_34457__boxed_3236_; uint8_t v___x_34458__boxed_3237_; lean_object* v_res_3238_; 
v___x_34456__boxed_3235_ = lean_unbox(v___x_3225_);
v___x_34457__boxed_3236_ = lean_unbox(v___x_3226_);
v___x_34458__boxed_3237_ = lean_unbox(v___x_3227_);
v_res_3238_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2(v___x_3223_, v_a_3224_, v___x_34456__boxed_3235_, v___x_34457__boxed_3236_, v___x_34458__boxed_3237_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_);
lean_dec(v___y_3229_);
lean_dec_ref(v___y_3228_);
lean_dec_ref(v___x_3223_);
return v_res_3238_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4(void){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3247_ = lean_box(0);
v___x_3248_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3));
v___x_3249_ = l_Lean_Expr_const___override(v___x_3248_, v___x_3247_);
return v___x_3249_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7(void){
_start:
{
lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3254_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0));
v___x_3255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6));
v___x_3256_ = l_Lean_Expr_const___override(v___x_3255_, v___x_3254_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(lean_object* v_as_3257_, size_t v_i_3258_, size_t v_stop_3259_, lean_object* v_b_3260_){
_start:
{
uint8_t v___x_3261_; 
v___x_3261_ = lean_usize_dec_eq(v_i_3258_, v_stop_3259_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3262_; size_t v___x_3263_; size_t v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; 
v___x_3262_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4);
v___x_3263_ = ((size_t)1ULL);
v___x_3264_ = lean_usize_sub(v_i_3258_, v___x_3263_);
v___x_3265_ = lean_array_uget_borrowed(v_as_3257_, v___x_3264_);
v___x_3266_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7);
lean_inc(v___x_3265_);
v___x_3267_ = l_Lean_mkApp3(v___x_3266_, v___x_3262_, v___x_3265_, v_b_3260_);
v_i_3258_ = v___x_3264_;
v_b_3260_ = v___x_3267_;
goto _start;
}
else
{
return v_b_3260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___boxed(lean_object* v_as_3269_, lean_object* v_i_3270_, lean_object* v_stop_3271_, lean_object* v_b_3272_){
_start:
{
size_t v_i_boxed_3273_; size_t v_stop_boxed_3274_; lean_object* v_res_3275_; 
v_i_boxed_3273_ = lean_unbox_usize(v_i_3270_);
lean_dec(v_i_3270_);
v_stop_boxed_3274_ = lean_unbox_usize(v_stop_3271_);
lean_dec(v_stop_3271_);
v_res_3275_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(v_as_3269_, v_i_boxed_3273_, v_stop_boxed_3274_, v_b_3272_);
lean_dec_ref(v_as_3269_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7(lean_object* v_init_3276_, lean_object* v_l_3277_){
_start:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; uint8_t v___x_3281_; 
v___x_3278_ = lean_array_mk(v_l_3277_);
v___x_3279_ = lean_array_get_size(v___x_3278_);
v___x_3280_ = lean_unsigned_to_nat(0u);
v___x_3281_ = lean_nat_dec_lt(v___x_3280_, v___x_3279_);
if (v___x_3281_ == 0)
{
lean_dec_ref(v___x_3278_);
return v_init_3276_;
}
else
{
size_t v___x_3282_; size_t v___x_3283_; lean_object* v___x_3284_; 
v___x_3282_ = lean_usize_of_nat(v___x_3279_);
v___x_3283_ = ((size_t)0ULL);
v___x_3284_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(v___x_3278_, v___x_3282_, v___x_3283_, v_init_3276_);
lean_dec_ref(v___x_3278_);
return v___x_3284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(lean_object* v_as_3285_, size_t v_sz_3286_, size_t v_i_3287_, lean_object* v_b_3288_){
_start:
{
uint8_t v___x_3290_; 
v___x_3290_ = lean_usize_dec_lt(v_i_3287_, v_sz_3286_);
if (v___x_3290_ == 0)
{
lean_object* v___x_3291_; 
v___x_3291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3291_, 0, v_b_3288_);
return v___x_3291_;
}
else
{
lean_object* v_snd_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3309_; 
v_snd_3292_ = lean_ctor_get(v_b_3288_, 1);
v_isSharedCheck_3309_ = !lean_is_exclusive(v_b_3288_);
if (v_isSharedCheck_3309_ == 0)
{
lean_object* v_unused_3310_; 
v_unused_3310_ = lean_ctor_get(v_b_3288_, 0);
lean_dec(v_unused_3310_);
v___x_3294_ = v_b_3288_;
v_isShared_3295_ = v_isSharedCheck_3309_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_snd_3292_);
lean_dec(v_b_3288_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3309_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v___x_3296_; lean_object* v_a_3298_; lean_object* v_a_3305_; 
v___x_3296_ = lean_box(0);
v_a_3305_ = lean_array_uget_borrowed(v_as_3285_, v_i_3287_);
if (lean_obj_tag(v_a_3305_) == 0)
{
v_a_3298_ = v_snd_3292_;
goto v___jp_3297_;
}
else
{
lean_object* v_val_3306_; uint8_t v___x_3307_; 
v_val_3306_ = lean_ctor_get(v_a_3305_, 0);
v___x_3307_ = l_Lean_LocalDecl_isAuxDecl(v_val_3306_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; 
lean_inc(v_val_3306_);
v___x_3308_ = lean_array_push(v_snd_3292_, v_val_3306_);
v_a_3298_ = v___x_3308_;
goto v___jp_3297_;
}
else
{
v_a_3298_ = v_snd_3292_;
goto v___jp_3297_;
}
}
v___jp_3297_:
{
lean_object* v___x_3300_; 
if (v_isShared_3295_ == 0)
{
lean_ctor_set(v___x_3294_, 1, v_a_3298_);
lean_ctor_set(v___x_3294_, 0, v___x_3296_);
v___x_3300_ = v___x_3294_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v___x_3296_);
lean_ctor_set(v_reuseFailAlloc_3304_, 1, v_a_3298_);
v___x_3300_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
size_t v___x_3301_; size_t v___x_3302_; 
v___x_3301_ = ((size_t)1ULL);
v___x_3302_ = lean_usize_add(v_i_3287_, v___x_3301_);
v_i_3287_ = v___x_3302_;
v_b_3288_ = v___x_3300_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg___boxed(lean_object* v_as_3311_, lean_object* v_sz_3312_, lean_object* v_i_3313_, lean_object* v_b_3314_, lean_object* v___y_3315_){
_start:
{
size_t v_sz_boxed_3316_; size_t v_i_boxed_3317_; lean_object* v_res_3318_; 
v_sz_boxed_3316_ = lean_unbox_usize(v_sz_3312_);
lean_dec(v_sz_3312_);
v_i_boxed_3317_ = lean_unbox_usize(v_i_3313_);
lean_dec(v_i_3313_);
v_res_3318_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(v_as_3311_, v_sz_boxed_3316_, v_i_boxed_3317_, v_b_3314_);
lean_dec_ref(v_as_3311_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(lean_object* v_as_3319_, size_t v_sz_3320_, size_t v_i_3321_, lean_object* v_b_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_){
_start:
{
uint8_t v___x_3330_; 
v___x_3330_ = lean_usize_dec_lt(v_i_3321_, v_sz_3320_);
if (v___x_3330_ == 0)
{
lean_object* v___x_3331_; 
v___x_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3331_, 0, v_b_3322_);
return v___x_3331_;
}
else
{
lean_object* v_snd_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3349_; 
v_snd_3332_ = lean_ctor_get(v_b_3322_, 1);
v_isSharedCheck_3349_ = !lean_is_exclusive(v_b_3322_);
if (v_isSharedCheck_3349_ == 0)
{
lean_object* v_unused_3350_; 
v_unused_3350_ = lean_ctor_get(v_b_3322_, 0);
lean_dec(v_unused_3350_);
v___x_3334_ = v_b_3322_;
v_isShared_3335_ = v_isSharedCheck_3349_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_snd_3332_);
lean_dec(v_b_3322_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3349_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___x_3336_; lean_object* v_a_3338_; lean_object* v_a_3345_; 
v___x_3336_ = lean_box(0);
v_a_3345_ = lean_array_uget_borrowed(v_as_3319_, v_i_3321_);
if (lean_obj_tag(v_a_3345_) == 0)
{
v_a_3338_ = v_snd_3332_;
goto v___jp_3337_;
}
else
{
lean_object* v_val_3346_; uint8_t v___x_3347_; 
v_val_3346_ = lean_ctor_get(v_a_3345_, 0);
v___x_3347_ = l_Lean_LocalDecl_isAuxDecl(v_val_3346_);
if (v___x_3347_ == 0)
{
lean_object* v___x_3348_; 
lean_inc(v_val_3346_);
v___x_3348_ = lean_array_push(v_snd_3332_, v_val_3346_);
v_a_3338_ = v___x_3348_;
goto v___jp_3337_;
}
else
{
v_a_3338_ = v_snd_3332_;
goto v___jp_3337_;
}
}
v___jp_3337_:
{
lean_object* v___x_3340_; 
if (v_isShared_3335_ == 0)
{
lean_ctor_set(v___x_3334_, 1, v_a_3338_);
lean_ctor_set(v___x_3334_, 0, v___x_3336_);
v___x_3340_ = v___x_3334_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3344_, 1, v_a_3338_);
v___x_3340_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
size_t v___x_3341_; size_t v___x_3342_; lean_object* v___x_3343_; 
v___x_3341_ = ((size_t)1ULL);
v___x_3342_ = lean_usize_add(v_i_3321_, v___x_3341_);
v___x_3343_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(v_as_3319_, v_sz_3320_, v___x_3342_, v___x_3340_);
return v___x_3343_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1___boxed(lean_object* v_as_3351_, lean_object* v_sz_3352_, lean_object* v_i_3353_, lean_object* v_b_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
size_t v_sz_boxed_3362_; size_t v_i_boxed_3363_; lean_object* v_res_3364_; 
v_sz_boxed_3362_ = lean_unbox_usize(v_sz_3352_);
lean_dec(v_sz_3352_);
v_i_boxed_3363_ = lean_unbox_usize(v_i_3353_);
lean_dec(v_i_3353_);
v_res_3364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(v_as_3351_, v_sz_boxed_3362_, v_i_boxed_3363_, v_b_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec(v___y_3356_);
lean_dec_ref(v___y_3355_);
lean_dec_ref(v_as_3351_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(lean_object* v_as_3365_, size_t v_sz_3366_, size_t v_i_3367_, lean_object* v_b_3368_){
_start:
{
uint8_t v___x_3370_; 
v___x_3370_ = lean_usize_dec_lt(v_i_3367_, v_sz_3366_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; 
v___x_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_b_3368_);
return v___x_3371_;
}
else
{
lean_object* v_snd_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3389_; 
v_snd_3372_ = lean_ctor_get(v_b_3368_, 1);
v_isSharedCheck_3389_ = !lean_is_exclusive(v_b_3368_);
if (v_isSharedCheck_3389_ == 0)
{
lean_object* v_unused_3390_; 
v_unused_3390_ = lean_ctor_get(v_b_3368_, 0);
lean_dec(v_unused_3390_);
v___x_3374_ = v_b_3368_;
v_isShared_3375_ = v_isSharedCheck_3389_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_snd_3372_);
lean_dec(v_b_3368_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3389_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v_a_3378_; lean_object* v_a_3385_; 
v___x_3376_ = lean_box(0);
v_a_3385_ = lean_array_uget_borrowed(v_as_3365_, v_i_3367_);
if (lean_obj_tag(v_a_3385_) == 0)
{
v_a_3378_ = v_snd_3372_;
goto v___jp_3377_;
}
else
{
lean_object* v_val_3386_; uint8_t v___x_3387_; 
v_val_3386_ = lean_ctor_get(v_a_3385_, 0);
v___x_3387_ = l_Lean_LocalDecl_isAuxDecl(v_val_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; 
lean_inc(v_val_3386_);
v___x_3388_ = lean_array_push(v_snd_3372_, v_val_3386_);
v_a_3378_ = v___x_3388_;
goto v___jp_3377_;
}
else
{
v_a_3378_ = v_snd_3372_;
goto v___jp_3377_;
}
}
v___jp_3377_:
{
lean_object* v___x_3380_; 
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 1, v_a_3378_);
lean_ctor_set(v___x_3374_, 0, v___x_3376_);
v___x_3380_ = v___x_3374_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3376_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v_a_3378_);
v___x_3380_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
size_t v___x_3381_; size_t v___x_3382_; 
v___x_3381_ = ((size_t)1ULL);
v___x_3382_ = lean_usize_add(v_i_3367_, v___x_3381_);
v_i_3367_ = v___x_3382_;
v_b_3368_ = v___x_3380_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg___boxed(lean_object* v_as_3391_, lean_object* v_sz_3392_, lean_object* v_i_3393_, lean_object* v_b_3394_, lean_object* v___y_3395_){
_start:
{
size_t v_sz_boxed_3396_; size_t v_i_boxed_3397_; lean_object* v_res_3398_; 
v_sz_boxed_3396_ = lean_unbox_usize(v_sz_3392_);
lean_dec(v_sz_3392_);
v_i_boxed_3397_ = lean_unbox_usize(v_i_3393_);
lean_dec(v_i_3393_);
v_res_3398_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(v_as_3391_, v_sz_boxed_3396_, v_i_boxed_3397_, v_b_3394_);
lean_dec_ref(v_as_3391_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(lean_object* v_as_3399_, size_t v_sz_3400_, size_t v_i_3401_, lean_object* v_b_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
uint8_t v___x_3410_; 
v___x_3410_ = lean_usize_dec_lt(v_i_3401_, v_sz_3400_);
if (v___x_3410_ == 0)
{
lean_object* v___x_3411_; 
v___x_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3411_, 0, v_b_3402_);
return v___x_3411_;
}
else
{
lean_object* v_snd_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3429_; 
v_snd_3412_ = lean_ctor_get(v_b_3402_, 1);
v_isSharedCheck_3429_ = !lean_is_exclusive(v_b_3402_);
if (v_isSharedCheck_3429_ == 0)
{
lean_object* v_unused_3430_; 
v_unused_3430_ = lean_ctor_get(v_b_3402_, 0);
lean_dec(v_unused_3430_);
v___x_3414_ = v_b_3402_;
v_isShared_3415_ = v_isSharedCheck_3429_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_snd_3412_);
lean_dec(v_b_3402_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3429_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3416_; lean_object* v_a_3418_; lean_object* v_a_3425_; 
v___x_3416_ = lean_box(0);
v_a_3425_ = lean_array_uget_borrowed(v_as_3399_, v_i_3401_);
if (lean_obj_tag(v_a_3425_) == 0)
{
v_a_3418_ = v_snd_3412_;
goto v___jp_3417_;
}
else
{
lean_object* v_val_3426_; uint8_t v___x_3427_; 
v_val_3426_ = lean_ctor_get(v_a_3425_, 0);
v___x_3427_ = l_Lean_LocalDecl_isAuxDecl(v_val_3426_);
if (v___x_3427_ == 0)
{
lean_object* v___x_3428_; 
lean_inc(v_val_3426_);
v___x_3428_ = lean_array_push(v_snd_3412_, v_val_3426_);
v_a_3418_ = v___x_3428_;
goto v___jp_3417_;
}
else
{
v_a_3418_ = v_snd_3412_;
goto v___jp_3417_;
}
}
v___jp_3417_:
{
lean_object* v___x_3420_; 
if (v_isShared_3415_ == 0)
{
lean_ctor_set(v___x_3414_, 1, v_a_3418_);
lean_ctor_set(v___x_3414_, 0, v___x_3416_);
v___x_3420_ = v___x_3414_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v___x_3416_);
lean_ctor_set(v_reuseFailAlloc_3424_, 1, v_a_3418_);
v___x_3420_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
size_t v___x_3421_; size_t v___x_3422_; lean_object* v___x_3423_; 
v___x_3421_ = ((size_t)1ULL);
v___x_3422_ = lean_usize_add(v_i_3401_, v___x_3421_);
v___x_3423_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(v_as_3399_, v_sz_3400_, v___x_3422_, v___x_3420_);
return v___x_3423_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6___boxed(lean_object* v_as_3431_, lean_object* v_sz_3432_, lean_object* v_i_3433_, lean_object* v_b_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
size_t v_sz_boxed_3442_; size_t v_i_boxed_3443_; lean_object* v_res_3444_; 
v_sz_boxed_3442_ = lean_unbox_usize(v_sz_3432_);
lean_dec(v_sz_3432_);
v_i_boxed_3443_ = lean_unbox_usize(v_i_3433_);
lean_dec(v_i_3433_);
v_res_3444_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(v_as_3431_, v_sz_boxed_3442_, v_i_boxed_3443_, v_b_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec_ref(v_as_3431_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(lean_object* v_init_3445_, lean_object* v_n_3446_, lean_object* v_b_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
if (lean_obj_tag(v_n_3446_) == 0)
{
lean_object* v_cs_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; size_t v_sz_3458_; size_t v___x_3459_; lean_object* v___x_3460_; 
v_cs_3455_ = lean_ctor_get(v_n_3446_, 0);
v___x_3456_ = lean_box(0);
v___x_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
lean_ctor_set(v___x_3457_, 1, v_b_3447_);
v_sz_3458_ = lean_array_size(v_cs_3455_);
v___x_3459_ = ((size_t)0ULL);
v___x_3460_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(v_init_3445_, v_cs_3455_, v_sz_3458_, v___x_3459_, v___x_3457_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3475_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3463_ = v___x_3460_;
v_isShared_3464_ = v_isSharedCheck_3475_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3460_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3475_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v_fst_3465_; 
v_fst_3465_ = lean_ctor_get(v_a_3461_, 0);
if (lean_obj_tag(v_fst_3465_) == 0)
{
lean_object* v_snd_3466_; lean_object* v___x_3467_; lean_object* v___x_3469_; 
v_snd_3466_ = lean_ctor_get(v_a_3461_, 1);
lean_inc(v_snd_3466_);
lean_dec(v_a_3461_);
v___x_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3467_, 0, v_snd_3466_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3467_);
v___x_3469_ = v___x_3463_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v___x_3467_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
else
{
lean_object* v_val_3471_; lean_object* v___x_3473_; 
lean_inc_ref(v_fst_3465_);
lean_dec(v_a_3461_);
v_val_3471_ = lean_ctor_get(v_fst_3465_, 0);
lean_inc(v_val_3471_);
lean_dec_ref_known(v_fst_3465_, 1);
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v_val_3471_);
v___x_3473_ = v___x_3463_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_val_3471_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
else
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3483_; 
v_a_3476_ = lean_ctor_get(v___x_3460_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3478_ = v___x_3460_;
v_isShared_3479_ = v_isSharedCheck_3483_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v___x_3460_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3483_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3481_; 
if (v_isShared_3479_ == 0)
{
v___x_3481_ = v___x_3478_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_a_3476_);
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
else
{
lean_object* v_vs_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; size_t v_sz_3487_; size_t v___x_3488_; lean_object* v___x_3489_; 
v_vs_3484_ = lean_ctor_get(v_n_3446_, 0);
v___x_3485_ = lean_box(0);
v___x_3486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3485_);
lean_ctor_set(v___x_3486_, 1, v_b_3447_);
v_sz_3487_ = lean_array_size(v_vs_3484_);
v___x_3488_ = ((size_t)0ULL);
v___x_3489_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(v_vs_3484_, v_sz_3487_, v___x_3488_, v___x_3486_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3504_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3492_ = v___x_3489_;
v_isShared_3493_ = v_isSharedCheck_3504_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3489_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3504_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v_fst_3494_; 
v_fst_3494_ = lean_ctor_get(v_a_3490_, 0);
if (lean_obj_tag(v_fst_3494_) == 0)
{
lean_object* v_snd_3495_; lean_object* v___x_3496_; lean_object* v___x_3498_; 
v_snd_3495_ = lean_ctor_get(v_a_3490_, 1);
lean_inc(v_snd_3495_);
lean_dec(v_a_3490_);
v___x_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3496_, 0, v_snd_3495_);
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 0, v___x_3496_);
v___x_3498_ = v___x_3492_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v___x_3496_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
else
{
lean_object* v_val_3500_; lean_object* v___x_3502_; 
lean_inc_ref(v_fst_3494_);
lean_dec(v_a_3490_);
v_val_3500_ = lean_ctor_get(v_fst_3494_, 0);
lean_inc(v_val_3500_);
lean_dec_ref_known(v_fst_3494_, 1);
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 0, v_val_3500_);
v___x_3502_ = v___x_3492_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_val_3500_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
v_a_3505_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3489_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3489_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(lean_object* v_init_3513_, lean_object* v_as_3514_, size_t v_sz_3515_, size_t v_i_3516_, lean_object* v_b_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_){
_start:
{
uint8_t v___x_3525_; 
v___x_3525_ = lean_usize_dec_lt(v_i_3516_, v_sz_3515_);
if (v___x_3525_ == 0)
{
lean_object* v___x_3526_; 
v___x_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3526_, 0, v_b_3517_);
return v___x_3526_;
}
else
{
lean_object* v_snd_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3561_; 
v_snd_3527_ = lean_ctor_get(v_b_3517_, 1);
v_isSharedCheck_3561_ = !lean_is_exclusive(v_b_3517_);
if (v_isSharedCheck_3561_ == 0)
{
lean_object* v_unused_3562_; 
v_unused_3562_ = lean_ctor_get(v_b_3517_, 0);
lean_dec(v_unused_3562_);
v___x_3529_ = v_b_3517_;
v_isShared_3530_ = v_isSharedCheck_3561_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_snd_3527_);
lean_dec(v_b_3517_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3561_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3531_; lean_object* v_a_3532_; lean_object* v___x_3533_; 
v___x_3531_ = lean_box(0);
v_a_3532_ = lean_array_uget_borrowed(v_as_3514_, v_i_3516_);
lean_inc(v_snd_3527_);
v___x_3533_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(v_init_3513_, v_a_3532_, v_snd_3527_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
if (lean_obj_tag(v___x_3533_) == 0)
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3552_; 
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3536_ = v___x_3533_;
v_isShared_3537_ = v_isSharedCheck_3552_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3533_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3552_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
if (lean_obj_tag(v_a_3534_) == 0)
{
lean_object* v___x_3538_; lean_object* v___x_3540_; 
v___x_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3538_, 0, v_a_3534_);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 0, v___x_3538_);
v___x_3540_ = v___x_3529_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v___x_3538_);
lean_ctor_set(v_reuseFailAlloc_3544_, 1, v_snd_3527_);
v___x_3540_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
lean_object* v___x_3542_; 
if (v_isShared_3537_ == 0)
{
lean_ctor_set(v___x_3536_, 0, v___x_3540_);
v___x_3542_ = v___x_3536_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3540_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
}
else
{
lean_object* v_a_3545_; lean_object* v___x_3547_; 
lean_del_object(v___x_3536_);
lean_dec(v_snd_3527_);
v_a_3545_ = lean_ctor_get(v_a_3534_, 0);
lean_inc(v_a_3545_);
lean_dec_ref_known(v_a_3534_, 1);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 1, v_a_3545_);
lean_ctor_set(v___x_3529_, 0, v___x_3531_);
v___x_3547_ = v___x_3529_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3531_);
lean_ctor_set(v_reuseFailAlloc_3551_, 1, v_a_3545_);
v___x_3547_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
size_t v___x_3548_; size_t v___x_3549_; 
v___x_3548_ = ((size_t)1ULL);
v___x_3549_ = lean_usize_add(v_i_3516_, v___x_3548_);
v_i_3516_ = v___x_3549_;
v_b_3517_ = v___x_3547_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3560_; 
lean_del_object(v___x_3529_);
lean_dec(v_snd_3527_);
v_a_3553_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3555_ = v___x_3533_;
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3553_);
lean_dec(v___x_3533_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_a_3553_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5___boxed(lean_object* v_init_3563_, lean_object* v_as_3564_, lean_object* v_sz_3565_, lean_object* v_i_3566_, lean_object* v_b_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_){
_start:
{
size_t v_sz_boxed_3575_; size_t v_i_boxed_3576_; lean_object* v_res_3577_; 
v_sz_boxed_3575_ = lean_unbox_usize(v_sz_3565_);
lean_dec(v_sz_3565_);
v_i_boxed_3576_ = lean_unbox_usize(v_i_3566_);
lean_dec(v_i_3566_);
v_res_3577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(v_init_3563_, v_as_3564_, v_sz_boxed_3575_, v_i_boxed_3576_, v_b_3567_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_, v___y_3572_, v___y_3573_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
lean_dec(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec(v___y_3569_);
lean_dec_ref(v___y_3568_);
lean_dec_ref(v_as_3564_);
lean_dec_ref(v_init_3563_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0___boxed(lean_object* v_init_3578_, lean_object* v_n_3579_, lean_object* v_b_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_){
_start:
{
lean_object* v_res_3588_; 
v_res_3588_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(v_init_3578_, v_n_3579_, v_b_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
lean_dec(v___y_3586_);
lean_dec_ref(v___y_3585_);
lean_dec(v___y_3584_);
lean_dec_ref(v___y_3583_);
lean_dec(v___y_3582_);
lean_dec_ref(v___y_3581_);
lean_dec_ref(v_n_3579_);
lean_dec_ref(v_init_3578_);
return v_res_3588_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(lean_object* v_t_3589_, lean_object* v_init_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v_root_3598_; lean_object* v_tail_3599_; lean_object* v___x_3600_; 
v_root_3598_ = lean_ctor_get(v_t_3589_, 0);
v_tail_3599_ = lean_ctor_get(v_t_3589_, 1);
lean_inc_ref(v_init_3590_);
v___x_3600_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(v_init_3590_, v_root_3598_, v_init_3590_, v___y_3591_, v___y_3592_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_);
lean_dec_ref(v_init_3590_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3637_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3603_ = v___x_3600_;
v_isShared_3604_ = v_isSharedCheck_3637_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v___x_3600_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3637_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
if (lean_obj_tag(v_a_3601_) == 0)
{
lean_object* v_a_3605_; lean_object* v___x_3607_; 
v_a_3605_ = lean_ctor_get(v_a_3601_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v_a_3601_, 1);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 0, v_a_3605_);
v___x_3607_ = v___x_3603_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3605_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
else
{
lean_object* v_a_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; size_t v_sz_3612_; size_t v___x_3613_; lean_object* v___x_3614_; 
lean_del_object(v___x_3603_);
v_a_3609_ = lean_ctor_get(v_a_3601_, 0);
lean_inc(v_a_3609_);
lean_dec_ref_known(v_a_3601_, 1);
v___x_3610_ = lean_box(0);
v___x_3611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
lean_ctor_set(v___x_3611_, 1, v_a_3609_);
v_sz_3612_ = lean_array_size(v_tail_3599_);
v___x_3613_ = ((size_t)0ULL);
v___x_3614_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(v_tail_3599_, v_sz_3612_, v___x_3613_, v___x_3611_, v___y_3591_, v___y_3592_, v___y_3593_, v___y_3594_, v___y_3595_, v___y_3596_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3628_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3617_ = v___x_3614_;
v_isShared_3618_ = v_isSharedCheck_3628_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v___x_3614_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3628_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v_fst_3619_; 
v_fst_3619_ = lean_ctor_get(v_a_3615_, 0);
if (lean_obj_tag(v_fst_3619_) == 0)
{
lean_object* v_snd_3620_; lean_object* v___x_3622_; 
v_snd_3620_ = lean_ctor_get(v_a_3615_, 1);
lean_inc(v_snd_3620_);
lean_dec(v_a_3615_);
if (v_isShared_3618_ == 0)
{
lean_ctor_set(v___x_3617_, 0, v_snd_3620_);
v___x_3622_ = v___x_3617_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_snd_3620_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
return v___x_3622_;
}
}
else
{
lean_object* v_val_3624_; lean_object* v___x_3626_; 
lean_inc_ref(v_fst_3619_);
lean_dec(v_a_3615_);
v_val_3624_ = lean_ctor_get(v_fst_3619_, 0);
lean_inc(v_val_3624_);
lean_dec_ref_known(v_fst_3619_, 1);
if (v_isShared_3618_ == 0)
{
lean_ctor_set(v___x_3617_, 0, v_val_3624_);
v___x_3626_ = v___x_3617_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_val_3624_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3636_; 
v_a_3629_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3631_ = v___x_3614_;
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3614_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
}
}
else
{
lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3645_; 
v_a_3638_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3640_ = v___x_3600_;
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v___x_3600_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
lean_object* v___x_3643_; 
if (v_isShared_3641_ == 0)
{
v___x_3643_ = v___x_3640_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_a_3638_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0___boxed(lean_object* v_t_3646_, lean_object* v_init_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(v_t_3646_, v_init_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_);
lean_dec(v___y_3653_);
lean_dec_ref(v___y_3652_);
lean_dec(v___y_3651_);
lean_dec_ref(v___y_3650_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec_ref(v_t_3646_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(size_t v_sz_3656_, size_t v_i_3657_, lean_object* v_bs_3658_){
_start:
{
uint8_t v___x_3659_; 
v___x_3659_ = lean_usize_dec_lt(v_i_3657_, v_sz_3656_);
if (v___x_3659_ == 0)
{
return v_bs_3658_;
}
else
{
lean_object* v_v_3660_; lean_object* v___x_3661_; lean_object* v_bs_x27_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; size_t v___x_3665_; size_t v___x_3666_; lean_object* v___x_3667_; 
v_v_3660_ = lean_array_uget(v_bs_3658_, v_i_3657_);
v___x_3661_ = lean_unsigned_to_nat(0u);
v_bs_x27_3662_ = lean_array_uset(v_bs_3658_, v_i_3657_, v___x_3661_);
v___x_3663_ = l_Lean_LocalDecl_fvarId(v_v_3660_);
lean_dec(v_v_3660_);
v___x_3664_ = l_Lean_mkFVar(v___x_3663_);
v___x_3665_ = ((size_t)1ULL);
v___x_3666_ = lean_usize_add(v_i_3657_, v___x_3665_);
v___x_3667_ = lean_array_uset(v_bs_x27_3662_, v_i_3657_, v___x_3664_);
v_i_3657_ = v___x_3666_;
v_bs_3658_ = v___x_3667_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1___boxed(lean_object* v_sz_3669_, lean_object* v_i_3670_, lean_object* v_bs_3671_){
_start:
{
size_t v_sz_boxed_3672_; size_t v_i_boxed_3673_; lean_object* v_res_3674_; 
v_sz_boxed_3672_ = lean_unbox_usize(v_sz_3669_);
lean_dec(v_sz_3669_);
v_i_boxed_3673_ = lean_unbox_usize(v_i_3670_);
lean_dec(v_i_3670_);
v_res_3674_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(v_sz_boxed_3672_, v_i_boxed_3673_, v_bs_3671_);
return v_res_3674_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3680_ = lean_box(0);
v___x_3681_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1));
v___x_3682_ = l_Lean_Expr_const___override(v___x_3681_, v___x_3680_);
return v___x_3682_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6(void){
_start:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3688_ = lean_box(0);
v___x_3689_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5));
v___x_3690_ = l_Lean_mkConst(v___x_3689_, v___x_3688_);
return v___x_3690_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; 
v___x_3695_ = lean_box(0);
v___x_3696_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8));
v___x_3697_ = l_Lean_mkConst(v___x_3696_, v___x_3695_);
return v___x_3697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(size_t v_sz_3698_, size_t v_i_3699_, lean_object* v_bs_3700_){
_start:
{
uint8_t v___x_3702_; 
v___x_3702_ = lean_usize_dec_lt(v_i_3699_, v_sz_3698_);
if (v___x_3702_ == 0)
{
lean_object* v___x_3703_; 
v___x_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3703_, 0, v_bs_3700_);
return v___x_3703_;
}
else
{
lean_object* v_v_3704_; lean_object* v_module_3705_; uint8_t v_importAll_3706_; uint8_t v_isExported_3707_; uint8_t v_isMeta_3708_; lean_object* v___x_3709_; lean_object* v_bs_x27_3710_; lean_object* v___x_3711_; lean_object* v___y_3713_; lean_object* v___y_3714_; lean_object* v___y_3715_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3734_; 
v_v_3704_ = lean_array_uget_borrowed(v_bs_3700_, v_i_3699_);
v_module_3705_ = lean_ctor_get(v_v_3704_, 0);
lean_inc(v_module_3705_);
v_importAll_3706_ = lean_ctor_get_uint8(v_v_3704_, sizeof(void*)*1);
v_isExported_3707_ = lean_ctor_get_uint8(v_v_3704_, sizeof(void*)*1 + 1);
v_isMeta_3708_ = lean_ctor_get_uint8(v_v_3704_, sizeof(void*)*1 + 2);
v___x_3709_ = lean_unsigned_to_nat(0u);
v_bs_x27_3710_ = lean_array_uset(v_bs_3700_, v_i_3699_, v___x_3709_);
v___x_3711_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_module_3705_);
if (v_importAll_3706_ == 0)
{
lean_object* v___x_3737_; 
v___x_3737_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6);
v___y_3734_ = v___x_3737_;
goto v___jp_3733_;
}
else
{
lean_object* v___x_3738_; 
v___x_3738_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9);
v___y_3734_ = v___x_3738_;
goto v___jp_3733_;
}
v___jp_3712_:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; size_t v___x_3724_; size_t v___x_3725_; lean_object* v___x_3726_; 
v___x_3716_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2);
v___x_3717_ = lean_unsigned_to_nat(4u);
v___x_3718_ = lean_mk_empty_array_with_capacity(v___x_3717_);
v___x_3719_ = lean_array_push(v___x_3718_, v___x_3711_);
lean_inc_ref(v___y_3713_);
v___x_3720_ = lean_array_push(v___x_3719_, v___y_3713_);
lean_inc_ref(v___y_3714_);
v___x_3721_ = lean_array_push(v___x_3720_, v___y_3714_);
lean_inc_ref(v___y_3715_);
v___x_3722_ = lean_array_push(v___x_3721_, v___y_3715_);
v___x_3723_ = l_Lean_mkAppN(v___x_3716_, v___x_3722_);
lean_dec_ref(v___x_3722_);
v___x_3724_ = ((size_t)1ULL);
v___x_3725_ = lean_usize_add(v_i_3699_, v___x_3724_);
v___x_3726_ = lean_array_uset(v_bs_x27_3710_, v_i_3699_, v___x_3723_);
v_i_3699_ = v___x_3725_;
v_bs_3700_ = v___x_3726_;
goto _start;
}
v___jp_3728_:
{
if (v_isMeta_3708_ == 0)
{
lean_object* v___x_3731_; 
v___x_3731_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6);
v___y_3713_ = v___y_3729_;
v___y_3714_ = v___y_3730_;
v___y_3715_ = v___x_3731_;
goto v___jp_3712_;
}
else
{
lean_object* v___x_3732_; 
v___x_3732_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9);
v___y_3713_ = v___y_3729_;
v___y_3714_ = v___y_3730_;
v___y_3715_ = v___x_3732_;
goto v___jp_3712_;
}
}
v___jp_3733_:
{
if (v_isExported_3707_ == 0)
{
lean_object* v___x_3735_; 
v___x_3735_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6);
v___y_3729_ = v___y_3734_;
v___y_3730_ = v___x_3735_;
goto v___jp_3728_;
}
else
{
lean_object* v___x_3736_; 
v___x_3736_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9);
v___y_3729_ = v___y_3734_;
v___y_3730_ = v___x_3736_;
goto v___jp_3728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___boxed(lean_object* v_sz_3739_, lean_object* v_i_3740_, lean_object* v_bs_3741_, lean_object* v___y_3742_){
_start:
{
size_t v_sz_boxed_3743_; size_t v_i_boxed_3744_; lean_object* v_res_3745_; 
v_sz_boxed_3743_ = lean_unbox_usize(v_sz_3739_);
lean_dec(v_sz_3739_);
v_i_boxed_3744_ = lean_unbox_usize(v_i_3740_);
lean_dec(v_i_3740_);
v_res_3745_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(v_sz_boxed_3743_, v_i_boxed_3744_, v_bs_3741_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(lean_object* v_x_3746_, lean_object* v_x_3747_, lean_object* v_x_3748_, lean_object* v_x_3749_){
_start:
{
lean_object* v_ks_3750_; lean_object* v_vs_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3775_; 
v_ks_3750_ = lean_ctor_get(v_x_3746_, 0);
v_vs_3751_ = lean_ctor_get(v_x_3746_, 1);
v_isSharedCheck_3775_ = !lean_is_exclusive(v_x_3746_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3753_ = v_x_3746_;
v_isShared_3754_ = v_isSharedCheck_3775_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_vs_3751_);
lean_inc(v_ks_3750_);
lean_dec(v_x_3746_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3775_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3755_; uint8_t v___x_3756_; 
v___x_3755_ = lean_array_get_size(v_ks_3750_);
v___x_3756_ = lean_nat_dec_lt(v_x_3747_, v___x_3755_);
if (v___x_3756_ == 0)
{
lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3760_; 
lean_dec(v_x_3747_);
v___x_3757_ = lean_array_push(v_ks_3750_, v_x_3748_);
v___x_3758_ = lean_array_push(v_vs_3751_, v_x_3749_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 1, v___x_3758_);
lean_ctor_set(v___x_3753_, 0, v___x_3757_);
v___x_3760_ = v___x_3753_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v___x_3757_);
lean_ctor_set(v_reuseFailAlloc_3761_, 1, v___x_3758_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
else
{
lean_object* v_k_x27_3762_; uint8_t v___x_3763_; 
v_k_x27_3762_ = lean_array_fget_borrowed(v_ks_3750_, v_x_3747_);
v___x_3763_ = l_Lean_instBEqFVarId_beq(v_x_3748_, v_k_x27_3762_);
if (v___x_3763_ == 0)
{
lean_object* v___x_3765_; 
if (v_isShared_3754_ == 0)
{
v___x_3765_ = v___x_3753_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_ks_3750_);
lean_ctor_set(v_reuseFailAlloc_3769_, 1, v_vs_3751_);
v___x_3765_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = lean_unsigned_to_nat(1u);
v___x_3767_ = lean_nat_add(v_x_3747_, v___x_3766_);
lean_dec(v_x_3747_);
v_x_3746_ = v___x_3765_;
v_x_3747_ = v___x_3767_;
goto _start;
}
}
else
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3773_; 
v___x_3770_ = lean_array_fset(v_ks_3750_, v_x_3747_, v_x_3748_);
v___x_3771_ = lean_array_fset(v_vs_3751_, v_x_3747_, v_x_3749_);
lean_dec(v_x_3747_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 1, v___x_3771_);
lean_ctor_set(v___x_3753_, 0, v___x_3770_);
v___x_3773_ = v___x_3753_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v___x_3770_);
lean_ctor_set(v_reuseFailAlloc_3774_, 1, v___x_3771_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(lean_object* v_n_3776_, lean_object* v_k_3777_, lean_object* v_v_3778_){
_start:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; 
v___x_3779_ = lean_unsigned_to_nat(0u);
v___x_3780_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(v_n_3776_, v___x_3779_, v_k_3777_, v_v_3778_);
return v___x_3780_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(lean_object* v_x_3782_, size_t v_x_3783_, size_t v_x_3784_, lean_object* v_x_3785_, lean_object* v_x_3786_){
_start:
{
if (lean_obj_tag(v_x_3782_) == 0)
{
lean_object* v_es_3787_; size_t v___x_3788_; size_t v___x_3789_; lean_object* v_j_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; 
v_es_3787_ = lean_ctor_get(v_x_3782_, 0);
v___x_3788_ = ((size_t)31ULL);
v___x_3789_ = lean_usize_land(v_x_3783_, v___x_3788_);
v_j_3790_ = lean_usize_to_nat(v___x_3789_);
v___x_3791_ = lean_array_get_size(v_es_3787_);
v___x_3792_ = lean_nat_dec_lt(v_j_3790_, v___x_3791_);
if (v___x_3792_ == 0)
{
lean_dec(v_j_3790_);
lean_dec(v_x_3786_);
lean_dec(v_x_3785_);
return v_x_3782_;
}
else
{
lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3831_; 
lean_inc_ref(v_es_3787_);
v_isSharedCheck_3831_ = !lean_is_exclusive(v_x_3782_);
if (v_isSharedCheck_3831_ == 0)
{
lean_object* v_unused_3832_; 
v_unused_3832_ = lean_ctor_get(v_x_3782_, 0);
lean_dec(v_unused_3832_);
v___x_3794_ = v_x_3782_;
v_isShared_3795_ = v_isSharedCheck_3831_;
goto v_resetjp_3793_;
}
else
{
lean_dec(v_x_3782_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3831_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v_v_3796_; lean_object* v___x_3797_; lean_object* v_xs_x27_3798_; lean_object* v___y_3800_; 
v_v_3796_ = lean_array_fget(v_es_3787_, v_j_3790_);
v___x_3797_ = lean_box(0);
v_xs_x27_3798_ = lean_array_fset(v_es_3787_, v_j_3790_, v___x_3797_);
switch(lean_obj_tag(v_v_3796_))
{
case 0:
{
lean_object* v_key_3805_; lean_object* v_val_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3816_; 
v_key_3805_ = lean_ctor_get(v_v_3796_, 0);
v_val_3806_ = lean_ctor_get(v_v_3796_, 1);
v_isSharedCheck_3816_ = !lean_is_exclusive(v_v_3796_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3808_ = v_v_3796_;
v_isShared_3809_ = v_isSharedCheck_3816_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_val_3806_);
lean_inc(v_key_3805_);
lean_dec(v_v_3796_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3816_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
uint8_t v___x_3810_; 
v___x_3810_ = l_Lean_instBEqFVarId_beq(v_x_3785_, v_key_3805_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
lean_del_object(v___x_3808_);
v___x_3811_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3805_, v_val_3806_, v_x_3785_, v_x_3786_);
v___x_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3811_);
v___y_3800_ = v___x_3812_;
goto v___jp_3799_;
}
else
{
lean_object* v___x_3814_; 
lean_dec(v_val_3806_);
lean_dec(v_key_3805_);
if (v_isShared_3809_ == 0)
{
lean_ctor_set(v___x_3808_, 1, v_x_3786_);
lean_ctor_set(v___x_3808_, 0, v_x_3785_);
v___x_3814_ = v___x_3808_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_x_3785_);
lean_ctor_set(v_reuseFailAlloc_3815_, 1, v_x_3786_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
v___y_3800_ = v___x_3814_;
goto v___jp_3799_;
}
}
}
}
case 1:
{
lean_object* v_node_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3829_; 
v_node_3817_ = lean_ctor_get(v_v_3796_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v_v_3796_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3819_ = v_v_3796_;
v_isShared_3820_ = v_isSharedCheck_3829_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_node_3817_);
lean_dec(v_v_3796_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3829_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
size_t v___x_3821_; size_t v___x_3822_; size_t v___x_3823_; size_t v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3827_; 
v___x_3821_ = ((size_t)5ULL);
v___x_3822_ = lean_usize_shift_right(v_x_3783_, v___x_3821_);
v___x_3823_ = ((size_t)1ULL);
v___x_3824_ = lean_usize_add(v_x_3784_, v___x_3823_);
v___x_3825_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_node_3817_, v___x_3822_, v___x_3824_, v_x_3785_, v_x_3786_);
if (v_isShared_3820_ == 0)
{
lean_ctor_set(v___x_3819_, 0, v___x_3825_);
v___x_3827_ = v___x_3819_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3825_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
v___y_3800_ = v___x_3827_;
goto v___jp_3799_;
}
}
}
default: 
{
lean_object* v___x_3830_; 
v___x_3830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3830_, 0, v_x_3785_);
lean_ctor_set(v___x_3830_, 1, v_x_3786_);
v___y_3800_ = v___x_3830_;
goto v___jp_3799_;
}
}
v___jp_3799_:
{
lean_object* v___x_3801_; lean_object* v___x_3803_; 
v___x_3801_ = lean_array_fset(v_xs_x27_3798_, v_j_3790_, v___y_3800_);
lean_dec(v_j_3790_);
if (v_isShared_3795_ == 0)
{
lean_ctor_set(v___x_3794_, 0, v___x_3801_);
v___x_3803_ = v___x_3794_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v___x_3801_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
}
}
else
{
lean_object* v_ks_3833_; lean_object* v_vs_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3852_; 
v_ks_3833_ = lean_ctor_get(v_x_3782_, 0);
v_vs_3834_ = lean_ctor_get(v_x_3782_, 1);
v_isSharedCheck_3852_ = !lean_is_exclusive(v_x_3782_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3836_ = v_x_3782_;
v_isShared_3837_ = v_isSharedCheck_3852_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_vs_3834_);
lean_inc(v_ks_3833_);
lean_dec(v_x_3782_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3852_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3837_ == 0)
{
v___x_3839_ = v___x_3836_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_ks_3833_);
lean_ctor_set(v_reuseFailAlloc_3851_, 1, v_vs_3834_);
v___x_3839_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v_newNode_3840_; size_t v___x_3841_; uint8_t v___x_3842_; 
v_newNode_3840_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(v___x_3839_, v_x_3785_, v_x_3786_);
v___x_3841_ = ((size_t)7ULL);
v___x_3842_ = lean_usize_dec_le(v___x_3841_, v_x_3784_);
if (v___x_3842_ == 0)
{
lean_object* v___x_3843_; lean_object* v___x_3844_; uint8_t v___x_3845_; 
v___x_3843_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3840_);
v___x_3844_ = lean_unsigned_to_nat(4u);
v___x_3845_ = lean_nat_dec_lt(v___x_3843_, v___x_3844_);
lean_dec(v___x_3843_);
if (v___x_3845_ == 0)
{
lean_object* v_ks_3846_; lean_object* v_vs_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; 
v_ks_3846_ = lean_ctor_get(v_newNode_3840_, 0);
lean_inc_ref(v_ks_3846_);
v_vs_3847_ = lean_ctor_get(v_newNode_3840_, 1);
lean_inc_ref(v_vs_3847_);
lean_dec_ref(v_newNode_3840_);
v___x_3848_ = lean_unsigned_to_nat(0u);
v___x_3849_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0);
v___x_3850_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(v_x_3784_, v_ks_3846_, v_vs_3847_, v___x_3848_, v___x_3849_);
lean_dec_ref(v_vs_3847_);
lean_dec_ref(v_ks_3846_);
return v___x_3850_;
}
else
{
return v_newNode_3840_;
}
}
else
{
return v_newNode_3840_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(size_t v_depth_3853_, lean_object* v_keys_3854_, lean_object* v_vals_3855_, lean_object* v_i_3856_, lean_object* v_entries_3857_){
_start:
{
lean_object* v___x_3858_; uint8_t v___x_3859_; 
v___x_3858_ = lean_array_get_size(v_keys_3854_);
v___x_3859_ = lean_nat_dec_lt(v_i_3856_, v___x_3858_);
if (v___x_3859_ == 0)
{
lean_dec(v_i_3856_);
return v_entries_3857_;
}
else
{
lean_object* v_k_3860_; lean_object* v_v_3861_; uint64_t v___x_3862_; size_t v_h_3863_; size_t v___x_3864_; lean_object* v___x_3865_; size_t v___x_3866_; size_t v___x_3867_; size_t v___x_3868_; size_t v_h_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v_k_3860_ = lean_array_fget_borrowed(v_keys_3854_, v_i_3856_);
v_v_3861_ = lean_array_fget_borrowed(v_vals_3855_, v_i_3856_);
v___x_3862_ = l_Lean_instHashableFVarId_hash(v_k_3860_);
v_h_3863_ = lean_uint64_to_usize(v___x_3862_);
v___x_3864_ = ((size_t)5ULL);
v___x_3865_ = lean_unsigned_to_nat(1u);
v___x_3866_ = ((size_t)1ULL);
v___x_3867_ = lean_usize_sub(v_depth_3853_, v___x_3866_);
v___x_3868_ = lean_usize_mul(v___x_3864_, v___x_3867_);
v_h_3869_ = lean_usize_shift_right(v_h_3863_, v___x_3868_);
v___x_3870_ = lean_nat_add(v_i_3856_, v___x_3865_);
lean_dec(v_i_3856_);
lean_inc(v_v_3861_);
lean_inc(v_k_3860_);
v___x_3871_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_entries_3857_, v_h_3869_, v_depth_3853_, v_k_3860_, v_v_3861_);
v_i_3856_ = v___x_3870_;
v_entries_3857_ = v___x_3871_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg___boxed(lean_object* v_depth_3873_, lean_object* v_keys_3874_, lean_object* v_vals_3875_, lean_object* v_i_3876_, lean_object* v_entries_3877_){
_start:
{
size_t v_depth_boxed_3878_; lean_object* v_res_3879_; 
v_depth_boxed_3878_ = lean_unbox_usize(v_depth_3873_);
lean_dec(v_depth_3873_);
v_res_3879_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(v_depth_boxed_3878_, v_keys_3874_, v_vals_3875_, v_i_3876_, v_entries_3877_);
lean_dec_ref(v_vals_3875_);
lean_dec_ref(v_keys_3874_);
return v_res_3879_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___boxed(lean_object* v_x_3880_, lean_object* v_x_3881_, lean_object* v_x_3882_, lean_object* v_x_3883_, lean_object* v_x_3884_){
_start:
{
size_t v_x_35429__boxed_3885_; size_t v_x_35430__boxed_3886_; lean_object* v_res_3887_; 
v_x_35429__boxed_3885_ = lean_unbox_usize(v_x_3881_);
lean_dec(v_x_3881_);
v_x_35430__boxed_3886_ = lean_unbox_usize(v_x_3882_);
lean_dec(v_x_3882_);
v_res_3887_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_x_3880_, v_x_35429__boxed_3885_, v_x_35430__boxed_3886_, v_x_3883_, v_x_3884_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(lean_object* v_x_3888_, lean_object* v_x_3889_, lean_object* v_x_3890_){
_start:
{
uint64_t v___x_3891_; size_t v___x_3892_; size_t v___x_3893_; lean_object* v___x_3894_; 
v___x_3891_ = l_Lean_instHashableFVarId_hash(v_x_3889_);
v___x_3892_ = lean_uint64_to_usize(v___x_3891_);
v___x_3893_ = ((size_t)1ULL);
v___x_3894_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_x_3888_, v___x_3892_, v___x_3893_, v_x_3889_, v_x_3890_);
return v___x_3894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(lean_object* v_as_3895_, size_t v_i_3896_, size_t v_stop_3897_, lean_object* v_b_3898_){
_start:
{
lean_object* v___y_3900_; uint8_t v___x_3904_; 
v___x_3904_ = lean_usize_dec_eq(v_i_3896_, v_stop_3897_);
if (v___x_3904_ == 0)
{
lean_object* v_fvarIdToDecl_3905_; lean_object* v_decls_3906_; lean_object* v_auxDeclToFullName_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
v_fvarIdToDecl_3905_ = lean_ctor_get(v_b_3898_, 0);
v_decls_3906_ = lean_ctor_get(v_b_3898_, 1);
v_auxDeclToFullName_3907_ = lean_ctor_get(v_b_3898_, 2);
v___x_3908_ = lean_array_uget_borrowed(v_as_3895_, v_i_3896_);
v___x_3909_ = l_Lean_LocalDecl_fvarId(v___x_3908_);
lean_inc_ref(v_b_3898_);
v___x_3910_ = lean_local_ctx_find(v_b_3898_, v___x_3909_);
if (lean_obj_tag(v___x_3910_) == 0)
{
v___y_3900_ = v_b_3898_;
goto v___jp_3899_;
}
else
{
lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3936_; 
lean_inc(v_auxDeclToFullName_3907_);
lean_inc_ref(v_decls_3906_);
lean_inc_ref(v_fvarIdToDecl_3905_);
v_isSharedCheck_3936_ = !lean_is_exclusive(v_b_3898_);
if (v_isSharedCheck_3936_ == 0)
{
lean_object* v_unused_3937_; lean_object* v_unused_3938_; lean_object* v_unused_3939_; 
v_unused_3937_ = lean_ctor_get(v_b_3898_, 2);
lean_dec(v_unused_3937_);
v_unused_3938_ = lean_ctor_get(v_b_3898_, 1);
lean_dec(v_unused_3938_);
v_unused_3939_ = lean_ctor_get(v_b_3898_, 0);
lean_dec(v_unused_3939_);
v___x_3912_ = v_b_3898_;
v_isShared_3913_ = v_isSharedCheck_3936_;
goto v_resetjp_3911_;
}
else
{
lean_dec(v_b_3898_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3936_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v_val_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3935_; 
v_val_3914_ = lean_ctor_get(v___x_3910_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3910_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3916_ = v___x_3910_;
v_isShared_3917_ = v_isSharedCheck_3935_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_val_3914_);
lean_dec(v___x_3910_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3935_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
uint8_t v___x_3918_; lean_object* v___x_3919_; lean_object* v___y_3921_; lean_object* v___y_3922_; lean_object* v___y_3931_; lean_object* v_fvarId_3934_; 
v___x_3918_ = 1;
v___x_3919_ = l_Lean_LocalDecl_setNondep(v_val_3914_, v___x_3918_);
v_fvarId_3934_ = lean_ctor_get(v___x_3919_, 1);
lean_inc(v_fvarId_3934_);
v___y_3931_ = v_fvarId_3934_;
goto v___jp_3930_;
v___jp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3917_ == 0)
{
lean_ctor_set(v___x_3916_, 0, v___x_3919_);
v___x_3924_ = v___x_3916_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v___x_3919_);
v___x_3924_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
lean_object* v___x_3925_; lean_object* v___x_3927_; 
v___x_3925_ = l_Lean_PersistentArray_set___redArg(v_decls_3906_, v___y_3922_, v___x_3924_);
lean_dec(v___y_3922_);
if (v_isShared_3913_ == 0)
{
lean_ctor_set(v___x_3912_, 1, v___x_3925_);
lean_ctor_set(v___x_3912_, 0, v___y_3921_);
v___x_3927_ = v___x_3912_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3928_; 
v_reuseFailAlloc_3928_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3928_, 0, v___y_3921_);
lean_ctor_set(v_reuseFailAlloc_3928_, 1, v___x_3925_);
lean_ctor_set(v_reuseFailAlloc_3928_, 2, v_auxDeclToFullName_3907_);
v___x_3927_ = v_reuseFailAlloc_3928_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
v___y_3900_ = v___x_3927_;
goto v___jp_3899_;
}
}
}
v___jp_3930_:
{
lean_object* v___x_3932_; lean_object* v_index_3933_; 
lean_inc_ref(v___x_3919_);
v___x_3932_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(v_fvarIdToDecl_3905_, v___y_3931_, v___x_3919_);
v_index_3933_ = lean_ctor_get(v___x_3919_, 0);
lean_inc(v_index_3933_);
v___y_3921_ = v___x_3932_;
v___y_3922_ = v_index_3933_;
goto v___jp_3920_;
}
}
}
}
}
else
{
return v_b_3898_;
}
v___jp_3899_:
{
size_t v___x_3901_; size_t v___x_3902_; 
v___x_3901_ = ((size_t)1ULL);
v___x_3902_ = lean_usize_add(v_i_3896_, v___x_3901_);
v_i_3896_ = v___x_3902_;
v_b_3898_ = v___y_3900_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11___boxed(lean_object* v_as_3940_, lean_object* v_i_3941_, lean_object* v_stop_3942_, lean_object* v_b_3943_){
_start:
{
size_t v_i_boxed_3944_; size_t v_stop_boxed_3945_; lean_object* v_res_3946_; 
v_i_boxed_3944_ = lean_unbox_usize(v_i_3941_);
lean_dec(v_i_3941_);
v_stop_boxed_3945_ = lean_unbox_usize(v_stop_3942_);
lean_dec(v_stop_3942_);
v_res_3946_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(v_as_3940_, v_i_boxed_3944_, v_stop_boxed_3945_, v_b_3943_);
lean_dec_ref(v_as_3940_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(lean_object* v_msgData_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_){
_start:
{
lean_object* v___x_3953_; lean_object* v_env_3954_; uint8_t v___x_3955_; lean_object* v_env_3956_; lean_object* v___x_3957_; lean_object* v_toCold_3958_; lean_object* v_mctx_3959_; lean_object* v_lctx_3960_; lean_object* v_options_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3953_ = lean_st_ref_get(v___y_3951_);
v_env_3954_ = lean_ctor_get(v___x_3953_, 0);
lean_inc_ref(v_env_3954_);
lean_dec(v___x_3953_);
v___x_3955_ = 0;
v_env_3956_ = l_Lean_Environment_setRecordingDeps(v_env_3954_, v___x_3955_);
v___x_3957_ = lean_st_ref_get(v___y_3949_);
v_toCold_3958_ = lean_ctor_get(v___y_3950_, 0);
v_mctx_3959_ = lean_ctor_get(v___x_3957_, 0);
lean_inc_ref(v_mctx_3959_);
lean_dec(v___x_3957_);
v_lctx_3960_ = lean_ctor_get(v___y_3948_, 2);
v_options_3961_ = lean_ctor_get(v_toCold_3958_, 2);
lean_inc_ref(v_options_3961_);
lean_inc_ref(v_lctx_3960_);
v___x_3962_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3962_, 0, v_env_3956_);
lean_ctor_set(v___x_3962_, 1, v_mctx_3959_);
lean_ctor_set(v___x_3962_, 2, v_lctx_3960_);
lean_ctor_set(v___x_3962_, 3, v_options_3961_);
v___x_3963_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3962_);
lean_ctor_set(v___x_3963_, 1, v_msgData_3947_);
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15___boxed(lean_object* v_msgData_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(v_msgData_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v___y_3967_);
lean_dec_ref(v___y_3966_);
return v_res_3971_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0(void){
_start:
{
lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3972_ = lean_box(1);
v___x_3973_ = l_Lean_MessageData_ofFormat(v___x_3972_);
return v___x_3973_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3(void){
_start:
{
lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3977_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2));
v___x_3978_ = l_Lean_MessageData_ofFormat(v___x_3977_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23(lean_object* v_x_3979_, lean_object* v_x_3980_){
_start:
{
if (lean_obj_tag(v_x_3980_) == 0)
{
return v_x_3979_;
}
else
{
lean_object* v_head_3981_; lean_object* v_tail_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_4004_; 
v_head_3981_ = lean_ctor_get(v_x_3980_, 0);
v_tail_3982_ = lean_ctor_get(v_x_3980_, 1);
v_isSharedCheck_4004_ = !lean_is_exclusive(v_x_3980_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3984_ = v_x_3980_;
v_isShared_3985_ = v_isSharedCheck_4004_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_tail_3982_);
lean_inc(v_head_3981_);
lean_dec(v_x_3980_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_4004_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v_before_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_4002_; 
v_before_3986_ = lean_ctor_get(v_head_3981_, 0);
v_isSharedCheck_4002_ = !lean_is_exclusive(v_head_3981_);
if (v_isSharedCheck_4002_ == 0)
{
lean_object* v_unused_4003_; 
v_unused_4003_ = lean_ctor_get(v_head_3981_, 1);
lean_dec(v_unused_4003_);
v___x_3988_ = v_head_3981_;
v_isShared_3989_ = v_isSharedCheck_4002_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_before_3986_);
lean_dec(v_head_3981_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_4002_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3990_; lean_object* v___x_3992_; 
v___x_3990_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0);
if (v_isShared_3989_ == 0)
{
lean_ctor_set_tag(v___x_3988_, 7);
lean_ctor_set(v___x_3988_, 1, v___x_3990_);
lean_ctor_set(v___x_3988_, 0, v_x_3979_);
v___x_3992_ = v___x_3988_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_x_3979_);
lean_ctor_set(v_reuseFailAlloc_4001_, 1, v___x_3990_);
v___x_3992_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
lean_object* v___x_3993_; lean_object* v___x_3995_; 
v___x_3993_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3);
if (v_isShared_3985_ == 0)
{
lean_ctor_set_tag(v___x_3984_, 7);
lean_ctor_set(v___x_3984_, 1, v___x_3993_);
lean_ctor_set(v___x_3984_, 0, v___x_3992_);
v___x_3995_ = v___x_3984_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v___x_3992_);
lean_ctor_set(v_reuseFailAlloc_4000_, 1, v___x_3993_);
v___x_3995_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v___x_3996_ = l_Lean_MessageData_ofSyntax(v_before_3986_);
v___x_3997_ = l_Lean_indentD(v___x_3996_);
v___x_3998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3995_);
lean_ctor_set(v___x_3998_, 1, v___x_3997_);
v_x_3979_ = v___x_3998_;
v_x_3980_ = v_tail_3982_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2(void){
_start:
{
lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4008_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1));
v___x_4009_ = l_Lean_MessageData_ofFormat(v___x_4008_);
return v___x_4009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(lean_object* v_msgData_4010_, lean_object* v_macroStack_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; uint8_t v___x_4016_; 
v___x_4014_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4012_);
v___x_4015_ = l_Lean_Elab_pp_macroStack;
v___x_4016_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v___x_4014_, v___x_4015_);
lean_dec_ref(v___x_4014_);
if (v___x_4016_ == 0)
{
lean_object* v___x_4017_; 
lean_dec(v_macroStack_4011_);
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v_msgData_4010_);
return v___x_4017_;
}
else
{
if (lean_obj_tag(v_macroStack_4011_) == 0)
{
lean_object* v___x_4018_; 
v___x_4018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4018_, 0, v_msgData_4010_);
return v___x_4018_;
}
else
{
lean_object* v_head_4019_; lean_object* v_after_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4035_; 
v_head_4019_ = lean_ctor_get(v_macroStack_4011_, 0);
lean_inc(v_head_4019_);
v_after_4020_ = lean_ctor_get(v_head_4019_, 1);
v_isSharedCheck_4035_ = !lean_is_exclusive(v_head_4019_);
if (v_isSharedCheck_4035_ == 0)
{
lean_object* v_unused_4036_; 
v_unused_4036_ = lean_ctor_get(v_head_4019_, 0);
lean_dec(v_unused_4036_);
v___x_4022_ = v_head_4019_;
v_isShared_4023_ = v_isSharedCheck_4035_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_after_4020_);
lean_dec(v_head_4019_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4035_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4024_; lean_object* v___x_4026_; 
v___x_4024_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0);
if (v_isShared_4023_ == 0)
{
lean_ctor_set_tag(v___x_4022_, 7);
lean_ctor_set(v___x_4022_, 1, v___x_4024_);
lean_ctor_set(v___x_4022_, 0, v_msgData_4010_);
v___x_4026_ = v___x_4022_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_msgData_4010_);
lean_ctor_set(v_reuseFailAlloc_4034_, 1, v___x_4024_);
v___x_4026_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v_msgData_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4027_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2);
v___x_4028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4028_, 0, v___x_4026_);
lean_ctor_set(v___x_4028_, 1, v___x_4027_);
v___x_4029_ = l_Lean_MessageData_ofSyntax(v_after_4020_);
v___x_4030_ = l_Lean_indentD(v___x_4029_);
v_msgData_4031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_4031_, 0, v___x_4028_);
lean_ctor_set(v_msgData_4031_, 1, v___x_4030_);
v___x_4032_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23(v_msgData_4031_, v_macroStack_4011_);
v___x_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
return v___x_4033_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___boxed(lean_object* v_msgData_4037_, lean_object* v_macroStack_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(v_msgData_4037_, v_macroStack_4038_, v___y_4039_);
lean_dec_ref(v___y_4039_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(lean_object* v_msg_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v_ref_4050_; lean_object* v_macroStack_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v_a_4054_; lean_object* v___x_4055_; lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4064_; 
v_ref_4050_ = lean_ctor_get(v___y_4047_, 2);
v_macroStack_4051_ = lean_ctor_get(v___y_4043_, 1);
v___x_4052_ = l_Lean_Elab_getBetterRef(v_ref_4050_, v_macroStack_4051_);
v___x_4053_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(v_msg_4042_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_);
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
lean_inc(v_a_4054_);
lean_dec_ref(v___x_4053_);
lean_inc(v_macroStack_4051_);
v___x_4055_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(v_a_4054_, v_macroStack_4051_, v___y_4047_);
v_a_4056_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4064_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4064_ == 0)
{
v___x_4058_ = v___x_4055_;
v_isShared_4059_ = v_isSharedCheck_4064_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v___x_4055_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4064_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4060_; lean_object* v___x_4062_; 
v___x_4060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4052_);
lean_ctor_set(v___x_4060_, 1, v_a_4056_);
if (v_isShared_4059_ == 0)
{
lean_ctor_set_tag(v___x_4058_, 1);
lean_ctor_set(v___x_4058_, 0, v___x_4060_);
v___x_4062_ = v___x_4058_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v___x_4060_);
v___x_4062_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
return v___x_4062_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg___boxed(lean_object* v_msg_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v_msg_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
return v_res_4073_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5(void){
_start:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4082_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0));
v___x_4083_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4));
v___x_4084_ = l_Lean_Expr_const___override(v___x_4083_, v___x_4082_);
return v___x_4084_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8(void){
_start:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4089_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0));
v___x_4090_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7));
v___x_4091_ = l_Lean_Expr_const___override(v___x_4090_, v___x_4089_);
return v___x_4091_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9(void){
_start:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4092_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4);
v___x_4093_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8);
v___x_4094_ = l_Lean_Expr_app___override(v___x_4093_, v___x_4092_);
return v___x_4094_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14(void){
_start:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4104_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13));
v___x_4105_ = l_String_toRawSubstring_x27(v___x_4104_);
return v___x_4105_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29(void){
_start:
{
lean_object* v___x_4140_; 
v___x_4140_ = l_Array_mkArray0___redArg();
return v___x_4140_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33(void){
_start:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4144_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32));
v___x_4145_ = l_Lean_stringToMessageData(v___x_4144_);
return v___x_4145_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35(void){
_start:
{
lean_object* v___x_4147_; lean_object* v___x_4148_; 
v___x_4147_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34));
v___x_4148_ = l_Lean_stringToMessageData(v___x_4147_);
return v___x_4148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(lean_object* v_e_4159_, lean_object* v_body_4160_, lean_object* v_ref_4161_, lean_object* v_expectedType_x3f_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_, lean_object* v_a_4166_, lean_object* v_a_4167_, lean_object* v_a_4168_){
_start:
{
lean_object* v_toCold_4170_; lean_object* v_ref_4171_; lean_object* v_fileName_4172_; lean_object* v___x_4173_; 
v_toCold_4170_ = lean_ctor_get(v_a_4167_, 0);
v_ref_4171_ = lean_ctor_get(v_a_4167_, 2);
v_fileName_4172_ = lean_ctor_get(v_toCold_4170_, 0);
lean_inc_ref(v_fileName_4172_);
v___x_4173_ = lean_io_realpath(v_fileName_4172_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v_a_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; uint8_t v___x_4177_; lean_object* v___y_4179_; uint8_t v___y_4180_; lean_object* v___y_4181_; size_t v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; uint8_t v___y_4281_; size_t v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___y_4286_; lean_object* v___y_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4346_; lean_object* v___y_4347_; uint8_t v___y_4348_; lean_object* v___y_4349_; size_t v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; lean_object* v___y_4355_; lean_object* v___y_4356_; lean_object* v___y_4357_; lean_object* v___y_4358_; lean_object* v___y_4359_; lean_object* v___y_4372_; lean_object* v___y_4373_; uint8_t v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; uint8_t v___y_4378_; size_t v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4415_; lean_object* v___x_4478_; 
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
lean_inc(v_a_4174_);
lean_dec_ref_known(v___x_4173_, 1);
v___x_4175_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0));
v___x_4176_ = lean_string_append(v_a_4174_, v___x_4175_);
v___x_4177_ = 0;
v___x_4478_ = l_Lean_Syntax_getPos_x3f(v_ref_4161_, v___x_4177_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v___x_4479_; 
v___x_4479_ = lean_unsigned_to_nat(0u);
v___y_4415_ = v___x_4479_;
goto v___jp_4414_;
}
else
{
lean_object* v_val_4480_; 
v_val_4480_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_val_4480_);
lean_dec_ref_known(v___x_4478_, 1);
v___y_4415_ = v_val_4480_;
goto v___jp_4414_;
}
v___jp_4178_:
{
lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; uint8_t v___x_4193_; uint8_t v___x_4194_; lean_object* v___x_4195_; 
v___x_4190_ = lean_box(2);
v___x_4191_ = l_Lean_Syntax_mkStrLit(v___y_4179_, v___x_4190_);
v___x_4192_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2));
v___x_4193_ = 0;
v___x_4194_ = 0;
v___x_4195_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(v___x_4192_, v___x_4193_, v___y_4181_, v___y_4183_, v___x_4194_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; lean_object* v___x_4197_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
lean_inc(v_a_4196_);
lean_dec_ref_known(v___x_4195_, 1);
v___x_4197_ = l_Lean_Elab_Term_exprToSyntax(v_a_4196_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
if (lean_obj_tag(v___x_4197_) == 0)
{
lean_object* v_a_4198_; lean_object* v___x_4199_; lean_object* v_env_4200_; lean_object* v___x_4201_; lean_object* v_env_4202_; lean_object* v___x_4203_; lean_object* v_imports_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; size_t v_sz_4208_; lean_object* v___x_4209_; 
v_a_4198_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_a_4198_);
lean_dec_ref_known(v___x_4197_, 1);
v___x_4199_ = lean_st_ref_get(v___y_4189_);
v_env_4200_ = lean_ctor_get(v___x_4199_, 0);
lean_inc_ref(v_env_4200_);
lean_dec(v___x_4199_);
v___x_4201_ = lean_st_ref_get(v___y_4189_);
v_env_4202_ = lean_ctor_get(v___x_4201_, 0);
lean_inc_ref(v_env_4202_);
lean_dec(v___x_4201_);
v___x_4203_ = l_Lean_Environment_header(v_env_4200_);
lean_dec_ref(v_env_4200_);
v_imports_4204_ = lean_ctor_get(v___x_4203_, 1);
lean_inc_ref(v_imports_4204_);
lean_dec_ref(v___x_4203_);
v___x_4205_ = l_Lean_Environment_mainModule(v_env_4202_);
lean_dec_ref(v_env_4202_);
v___x_4206_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_4206_, 0, v___x_4205_);
lean_ctor_set_uint8(v___x_4206_, sizeof(void*)*1, v___x_4177_);
lean_ctor_set_uint8(v___x_4206_, sizeof(void*)*1 + 1, v___y_4180_);
lean_ctor_set_uint8(v___x_4206_, sizeof(void*)*1 + 2, v___x_4177_);
v___x_4207_ = lean_array_push(v_imports_4204_, v___x_4206_);
v_sz_4208_ = lean_array_size(v___x_4207_);
v___x_4209_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(v_sz_4208_, v___y_4182_, v___x_4207_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v_a_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; 
v_a_4210_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_a_4210_);
lean_dec_ref_known(v___x_4209_, 1);
v___x_4211_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5);
v___x_4212_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4);
v___x_4213_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9);
v___x_4214_ = lean_array_to_list(v_a_4210_);
v___x_4215_ = l_List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7(v___x_4213_, v___x_4214_);
v___x_4216_ = l_Lean_mkAppB(v___x_4211_, v___x_4212_, v___x_4215_);
v___x_4217_ = l_Lean_Elab_Term_exprToSyntax(v___x_4216_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_toCold_4218_; lean_object* v_a_4219_; lean_object* v_ref_4220_; lean_object* v_quotContext_4221_; lean_object* v_currMacroScope_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; 
v_toCold_4218_ = lean_ctor_get(v___y_4188_, 0);
v_a_4219_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_a_4219_);
lean_dec_ref_known(v___x_4217_, 1);
v_ref_4220_ = lean_ctor_get(v___y_4188_, 2);
v_quotContext_4221_ = lean_ctor_get(v_toCold_4218_, 8);
v_currMacroScope_4222_ = lean_ctor_get(v_toCold_4218_, 9);
v___x_4223_ = l_Lean_SourceInfo_fromRef(v_ref_4220_, v___x_4177_);
v___x_4224_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11));
v___x_4225_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12));
v___x_4226_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14);
v___x_4227_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16));
lean_inc(v_currMacroScope_4222_);
lean_inc(v_quotContext_4221_);
v___x_4228_ = l_Lean_addMacroScope(v_quotContext_4221_, v___x_4227_, v_currMacroScope_4222_);
v___x_4229_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18));
lean_inc_n(v___x_4223_, 12);
v___x_4230_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4223_);
lean_ctor_set(v___x_4230_, 1, v___x_4226_);
lean_ctor_set(v___x_4230_, 2, v___x_4228_);
lean_ctor_set(v___x_4230_, 3, v___x_4229_);
v___x_4231_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20));
v___x_4232_ = l_Lean_Syntax_node3(v___x_4223_, v___x_4231_, v___x_4191_, v_a_4219_, v_a_4198_);
v___x_4233_ = l_Lean_Syntax_node2(v___x_4223_, v___x_4225_, v___x_4230_, v___x_4232_);
v___x_4234_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21));
v___x_4235_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4223_);
lean_ctor_set(v___x_4235_, 1, v___x_4234_);
v___x_4236_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22));
v___x_4237_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23));
v___x_4238_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4223_);
lean_ctor_set(v___x_4238_, 1, v___x_4236_);
v___x_4239_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25));
v___x_4240_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27));
v___x_4241_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28));
v___x_4242_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4223_);
lean_ctor_set(v___x_4242_, 1, v___x_4241_);
v___x_4243_ = l_Lean_Syntax_node1(v___x_4223_, v___x_4240_, v___x_4242_);
v___x_4244_ = l_Lean_Syntax_node1(v___x_4223_, v___x_4231_, v___x_4243_);
v___x_4245_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29);
v___x_4246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4223_);
lean_ctor_set(v___x_4246_, 1, v___x_4231_);
lean_ctor_set(v___x_4246_, 2, v___x_4245_);
v___x_4247_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30));
v___x_4248_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4223_);
lean_ctor_set(v___x_4248_, 1, v___x_4247_);
v___x_4249_ = l_Lean_Syntax_node4(v___x_4223_, v___x_4239_, v___x_4244_, v___x_4246_, v___x_4248_, v_body_4160_);
v___x_4250_ = l_Lean_Syntax_node2(v___x_4223_, v___x_4237_, v___x_4238_, v___x_4249_);
v___x_4251_ = l_Lean_Syntax_node3(v___x_4223_, v___x_4224_, v___x_4233_, v___x_4235_, v___x_4250_);
v___x_4252_ = l_Lean_Elab_Term_elabTerm(v___x_4251_, v_expectedType_x3f_4162_, v___y_4180_, v___y_4180_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
return v___x_4252_;
}
else
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4260_; 
lean_dec(v_a_4198_);
lean_dec(v___x_4191_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_body_4160_);
v_a_4253_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4255_ = v___x_4217_;
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v___x_4217_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4258_; 
if (v_isShared_4256_ == 0)
{
v___x_4258_ = v___x_4255_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4259_; 
v_reuseFailAlloc_4259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4259_, 0, v_a_4253_);
v___x_4258_ = v_reuseFailAlloc_4259_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
return v___x_4258_;
}
}
}
}
else
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4268_; 
lean_dec(v_a_4198_);
lean_dec(v___x_4191_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_body_4160_);
v_a_4261_ = lean_ctor_get(v___x_4209_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4209_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4263_ = v___x_4209_;
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v___x_4209_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
else
{
lean_object* v_a_4269_; lean_object* v___x_4271_; uint8_t v_isShared_4272_; uint8_t v_isSharedCheck_4276_; 
lean_dec(v___x_4191_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_body_4160_);
v_a_4269_ = lean_ctor_get(v___x_4197_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4276_ == 0)
{
v___x_4271_ = v___x_4197_;
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
else
{
lean_inc(v_a_4269_);
lean_dec(v___x_4197_);
v___x_4271_ = lean_box(0);
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
v_resetjp_4270_:
{
lean_object* v___x_4274_; 
if (v_isShared_4272_ == 0)
{
v___x_4274_ = v___x_4271_;
goto v_reusejp_4273_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v_a_4269_);
v___x_4274_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
return v___x_4274_;
}
}
}
}
else
{
lean_dec(v___x_4191_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_body_4160_);
return v___x_4195_;
}
}
v___jp_4277_:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; uint8_t v___x_4294_; 
v___x_4292_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4290_);
v___x_4293_ = l_Lean_Elab_inServer;
v___x_4294_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v___x_4292_, v___x_4293_);
lean_dec_ref(v___x_4292_);
if (v___x_4294_ == 0)
{
lean_dec_ref(v___y_4285_);
lean_dec(v___y_4284_);
lean_dec_ref(v___y_4278_);
lean_dec(v_ref_4161_);
v___y_4179_ = v___y_4279_;
v___y_4180_ = v___y_4281_;
v___y_4181_ = v___y_4280_;
v___y_4182_ = v___y_4282_;
v___y_4183_ = v___y_4283_;
v___y_4184_ = v___y_4286_;
v___y_4185_ = v___y_4287_;
v___y_4186_ = v___y_4288_;
v___y_4187_ = v___y_4289_;
v___y_4188_ = v___y_4290_;
v___y_4189_ = v___y_4291_;
goto v___jp_4178_;
}
else
{
uint8_t v___x_4295_; 
v___x_4295_ = l_Lean_Expr_hasSorry(v___y_4285_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___f_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; 
v___x_4296_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc_ref(v___y_4280_);
v___x_4297_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v___y_4280_);
v___x_4298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4298_, 0, v___x_4296_);
lean_ctor_set(v___x_4298_, 1, v___x_4297_);
v___x_4299_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
v___x_4300_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v___y_4285_);
v___x_4301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4301_, 0, v___x_4299_);
lean_ctor_set(v___x_4301_, 1, v___x_4300_);
v___x_4302_ = lean_box(0);
v___x_4303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4303_, 0, v___x_4301_);
lean_ctor_set(v___x_4303_, 1, v___x_4302_);
v___x_4304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4304_, 0, v___x_4298_);
lean_ctor_set(v___x_4304_, 1, v___x_4303_);
v___x_4305_ = l_Lean_Json_mkObj(v___x_4304_);
lean_dec_ref_known(v___x_4304_, 2);
lean_inc(v_ref_4161_);
v___f_4306_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_4306_, 0, v___y_4278_);
lean_closure_set(v___f_4306_, 1, v___x_4305_);
lean_closure_set(v___f_4306_, 2, v_ref_4161_);
v___x_4307_ = l_IO_CancelToken_new();
v___x_4308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4308_, 0, v___x_4307_);
v___x_4309_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0));
v___x_4310_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8));
v___x_4311_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11));
lean_inc(v___y_4284_);
v___x_4312_ = l_Lean_Name_num___override(v___x_4311_, v___y_4284_);
v___x_4313_ = l_Lean_Name_str___override(v___x_4312_, v___x_4309_);
v___x_4314_ = l_Lean_Name_str___override(v___x_4313_, v___x_4310_);
v___x_4315_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15));
v___x_4316_ = l_Lean_Name_str___override(v___x_4314_, v___x_4315_);
v___x_4317_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31));
v___x_4318_ = l_Lean_Name_str___override(v___x_4316_, v___x_4317_);
v___x_4319_ = l_Lean_Name_toString(v___x_4318_, v___y_4281_);
lean_inc_ref(v___x_4308_);
v___x_4320_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___f_4306_, v___x_4308_, v___x_4319_, v___y_4290_, v___y_4291_);
if (lean_obj_tag(v___x_4320_) == 0)
{
lean_object* v_a_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; 
v_a_4321_ = lean_ctor_get(v___x_4320_, 0);
lean_inc(v_a_4321_);
lean_dec_ref_known(v___x_4320_, 1);
v___x_4322_ = lean_box(0);
v___x_4323_ = lean_apply_1(v_a_4321_, v___x_4322_);
v___x_4324_ = lean_io_as_task(v___x_4323_, v___y_4284_);
v___x_4325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4325_, 0, v_ref_4161_);
v___x_4326_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_4325_);
v___x_4327_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4327_, 0, v___x_4325_);
lean_ctor_set(v___x_4327_, 1, v___x_4326_);
lean_ctor_set(v___x_4327_, 2, v___x_4308_);
lean_ctor_set(v___x_4327_, 3, v___x_4324_);
v___x_4328_ = l_Lean_Core_logSnapshotTask___redArg(v___x_4327_, v___y_4291_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_dec_ref_known(v___x_4328_, 1);
v___y_4179_ = v___y_4279_;
v___y_4180_ = v___y_4281_;
v___y_4181_ = v___y_4280_;
v___y_4182_ = v___y_4282_;
v___y_4183_ = v___y_4283_;
v___y_4184_ = v___y_4286_;
v___y_4185_ = v___y_4287_;
v___y_4186_ = v___y_4288_;
v___y_4187_ = v___y_4289_;
v___y_4188_ = v___y_4290_;
v___y_4189_ = v___y_4291_;
goto v___jp_4178_;
}
else
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4336_; 
lean_dec_ref(v___y_4283_);
lean_dec_ref(v___y_4280_);
lean_dec_ref(v___y_4279_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_body_4160_);
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4331_ = v___x_4328_;
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4328_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4334_; 
if (v_isShared_4332_ == 0)
{
v___x_4334_ = v___x_4331_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v_a_4329_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
return v___x_4334_;
}
}
}
}
else
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
lean_dec_ref_known(v___x_4308_, 1);
lean_dec(v___y_4284_);
lean_dec_ref(v___y_4283_);
lean_dec_ref(v___y_4280_);
lean_dec_ref(v___y_4279_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
v_a_4337_ = lean_ctor_get(v___x_4320_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4320_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4320_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4320_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
else
{
lean_dec_ref(v___y_4285_);
lean_dec(v___y_4284_);
lean_dec_ref(v___y_4278_);
lean_dec(v_ref_4161_);
v___y_4179_ = v___y_4279_;
v___y_4180_ = v___y_4281_;
v___y_4181_ = v___y_4280_;
v___y_4182_ = v___y_4282_;
v___y_4183_ = v___y_4283_;
v___y_4184_ = v___y_4286_;
v___y_4185_ = v___y_4287_;
v___y_4186_ = v___y_4288_;
v___y_4187_ = v___y_4289_;
v___y_4188_ = v___y_4290_;
v___y_4189_ = v___y_4291_;
goto v___jp_4178_;
}
}
}
v___jp_4345_:
{
uint8_t v___x_4360_; 
v___x_4360_ = l_Lean_Expr_hasMVar(v___y_4349_);
if (v___x_4360_ == 0)
{
v___y_4278_ = v___y_4346_;
v___y_4279_ = v___y_4347_;
v___y_4280_ = v___y_4349_;
v___y_4281_ = v___y_4348_;
v___y_4282_ = v___y_4350_;
v___y_4283_ = v___y_4351_;
v___y_4284_ = v___y_4353_;
v___y_4285_ = v___y_4352_;
v___y_4286_ = v___y_4354_;
v___y_4287_ = v___y_4355_;
v___y_4288_ = v___y_4356_;
v___y_4289_ = v___y_4357_;
v___y_4290_ = v___y_4358_;
v___y_4291_ = v___y_4359_;
goto v___jp_4277_;
}
else
{
lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v_a_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4370_; 
lean_dec(v___y_4353_);
lean_dec_ref(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec_ref(v___y_4349_);
lean_dec_ref(v___y_4347_);
lean_dec_ref(v___y_4346_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
v___x_4361_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33);
v___x_4362_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v___x_4361_, v___y_4354_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_);
v_a_4363_ = lean_ctor_get(v___x_4362_, 0);
v_isSharedCheck_4370_ = !lean_is_exclusive(v___x_4362_);
if (v_isSharedCheck_4370_ == 0)
{
v___x_4365_ = v___x_4362_;
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_a_4363_);
lean_dec(v___x_4362_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4368_; 
if (v_isShared_4366_ == 0)
{
v___x_4368_ = v___x_4365_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4369_; 
v_reuseFailAlloc_4369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4369_, 0, v_a_4363_);
v___x_4368_ = v_reuseFailAlloc_4369_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
return v___x_4368_;
}
}
}
}
v___jp_4371_:
{
uint8_t v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___f_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___f_4390_; lean_object* v___x_4391_; 
v___x_4382_ = 1;
v___x_4383_ = lean_box(v___x_4177_);
v___x_4384_ = lean_box(v___y_4374_);
v___x_4385_ = lean_box(v___x_4382_);
lean_inc_ref(v___y_4376_);
v___f_4386_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1___boxed), 13, 5);
lean_closure_set(v___f_4386_, 0, v___y_4376_);
lean_closure_set(v___f_4386_, 1, v___y_4372_);
lean_closure_set(v___f_4386_, 2, v___x_4383_);
lean_closure_set(v___f_4386_, 3, v___x_4384_);
lean_closure_set(v___f_4386_, 4, v___x_4385_);
v___x_4387_ = lean_box(v___x_4177_);
v___x_4388_ = lean_box(v___y_4374_);
v___x_4389_ = lean_box(v___x_4382_);
v___f_4390_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2___boxed), 12, 5);
lean_closure_set(v___f_4390_, 0, v___y_4376_);
lean_closure_set(v___f_4390_, 1, v___y_4375_);
lean_closure_set(v___f_4390_, 2, v___x_4387_);
lean_closure_set(v___f_4390_, 3, v___x_4388_);
lean_closure_set(v___f_4390_, 4, v___x_4389_);
v___x_4391_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(v___y_4381_, v___f_4390_, v_a_4163_, v_a_4164_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; lean_object* v_fst_4393_; lean_object* v_snd_4394_; uint8_t v___x_4395_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___x_4391_, 1);
v_fst_4393_ = lean_ctor_get(v_a_4392_, 0);
lean_inc(v_fst_4393_);
v_snd_4394_ = lean_ctor_get(v_a_4392_, 1);
lean_inc(v_snd_4394_);
lean_dec(v_a_4392_);
v___x_4395_ = l_Lean_Expr_hasMVar(v_fst_4393_);
if (v___x_4395_ == 0)
{
v___y_4346_ = v___y_4373_;
v___y_4347_ = v___y_4377_;
v___y_4348_ = v___y_4378_;
v___y_4349_ = v_snd_4394_;
v___y_4350_ = v___y_4379_;
v___y_4351_ = v___f_4386_;
v___y_4352_ = v_fst_4393_;
v___y_4353_ = v___y_4380_;
v___y_4354_ = v_a_4163_;
v___y_4355_ = v_a_4164_;
v___y_4356_ = v_a_4165_;
v___y_4357_ = v_a_4166_;
v___y_4358_ = v_a_4167_;
v___y_4359_ = v_a_4168_;
goto v___jp_4345_;
}
else
{
lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4405_; 
lean_dec(v_snd_4394_);
lean_dec(v_fst_4393_);
lean_dec_ref(v___f_4386_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4377_);
lean_dec_ref(v___y_4373_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
v___x_4396_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35);
v___x_4397_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v___x_4396_, v_a_4163_, v_a_4164_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
v_a_4398_ = lean_ctor_get(v___x_4397_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4397_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4400_ = v___x_4397_;
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4397_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
lean_dec_ref(v___f_4386_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4377_);
lean_dec_ref(v___y_4373_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
v_a_4406_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v___x_4391_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___x_4391_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
v___jp_4414_:
{
lean_object* v_lctx_4416_; lean_object* v_decls_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; uint64_t v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; 
v_lctx_4416_ = lean_ctor_get(v_a_4165_, 2);
v_decls_4417_ = lean_ctor_get(v_lctx_4416_, 1);
v___x_4418_ = l_Nat_reprFast(v___y_4415_);
v___x_4419_ = lean_string_append(v___x_4176_, v___x_4418_);
lean_dec_ref(v___x_4418_);
v___x_4420_ = lean_string_hash(v___x_4419_);
lean_dec_ref(v___x_4419_);
v___x_4421_ = lean_uint64_to_nat(v___x_4420_);
v___x_4422_ = l_Nat_reprFast(v___x_4421_);
v___x_4423_ = lean_unsigned_to_nat(0u);
v___x_4424_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36));
v___x_4425_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(v_decls_4417_, v___x_4424_, v_a_4163_, v_a_4164_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v_a_4426_; size_t v_sz_4427_; size_t v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; uint8_t v___x_4431_; lean_object* v___x_4432_; 
v_a_4426_ = lean_ctor_get(v___x_4425_, 0);
lean_inc_n(v_a_4426_, 2);
lean_dec_ref_known(v___x_4425_, 1);
v_sz_4427_ = lean_array_size(v_a_4426_);
v___x_4428_ = ((size_t)0ULL);
v___x_4429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(v_sz_4427_, v___x_4428_, v_a_4426_);
v___x_4430_ = lean_box(0);
v___x_4431_ = 1;
v___x_4432_ = l_Lean_Elab_Term_elabTerm(v_e_4159_, v___x_4430_, v___x_4431_, v___x_4431_, v_a_4163_, v_a_4164_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
if (lean_obj_tag(v___x_4432_) == 0)
{
lean_object* v_a_4433_; lean_object* v___x_4434_; 
v_a_4433_ = lean_ctor_get(v___x_4432_, 0);
lean_inc(v_a_4433_);
lean_dec_ref_known(v___x_4432_, 1);
v___x_4434_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_4177_, v_a_4163_, v_a_4164_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_object* v___x_4435_; lean_object* v_a_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; 
lean_dec_ref_known(v___x_4434_, 1);
v___x_4435_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_4433_, v_a_4166_);
v_a_4436_ = lean_ctor_get(v___x_4435_, 0);
lean_inc(v_a_4436_);
lean_dec_ref(v___x_4435_);
v___x_4437_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38));
v___x_4438_ = lean_unsigned_to_nat(1u);
v___x_4439_ = lean_mk_empty_array_with_capacity(v___x_4438_);
lean_inc_ref(v___x_4439_);
v___x_4440_ = lean_array_push(v___x_4439_, v_a_4436_);
v___x_4441_ = l_Lean_Meta_mkAppM(v___x_4437_, v___x_4440_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
if (lean_obj_tag(v___x_4441_) == 0)
{
lean_object* v_a_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
v_a_4442_ = lean_ctor_get(v___x_4441_, 0);
lean_inc(v_a_4442_);
lean_dec_ref_known(v___x_4441_, 1);
v___x_4443_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41));
lean_inc_ref(v___x_4439_);
v___x_4444_ = lean_array_push(v___x_4439_, v_a_4442_);
v___x_4445_ = l_Lean_Meta_mkAppM(v___x_4443_, v___x_4444_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; lean_object* v___x_4447_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc(v_a_4446_);
lean_dec_ref_known(v___x_4445_, 1);
v___x_4447_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_4177_, v_a_4163_, v_a_4164_, v_a_4165_, v_a_4166_, v_a_4167_, v_a_4168_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v___x_4448_; lean_object* v_a_4449_; lean_object* v___x_4450_; uint8_t v___x_4451_; 
lean_dec_ref_known(v___x_4447_, 1);
v___x_4448_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_4446_, v_a_4166_);
v_a_4449_ = lean_ctor_get(v___x_4448_, 0);
lean_inc(v_a_4449_);
lean_dec_ref(v___x_4448_);
v___x_4450_ = lean_array_get_size(v_a_4426_);
v___x_4451_ = lean_nat_dec_lt(v___x_4423_, v___x_4450_);
if (v___x_4451_ == 0)
{
lean_dec(v_a_4426_);
lean_inc_ref(v_lctx_4416_);
lean_inc_ref(v___x_4422_);
v___y_4372_ = v___x_4439_;
v___y_4373_ = v___x_4422_;
v___y_4374_ = v___x_4431_;
v___y_4375_ = v_a_4449_;
v___y_4376_ = v___x_4429_;
v___y_4377_ = v___x_4422_;
v___y_4378_ = v___x_4431_;
v___y_4379_ = v___x_4428_;
v___y_4380_ = v___x_4423_;
v___y_4381_ = v_lctx_4416_;
goto v___jp_4371_;
}
else
{
size_t v___x_4452_; lean_object* v___x_4453_; 
v___x_4452_ = lean_usize_of_nat(v___x_4450_);
lean_inc_ref(v_lctx_4416_);
v___x_4453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(v_a_4426_, v___x_4428_, v___x_4452_, v_lctx_4416_);
lean_dec(v_a_4426_);
lean_inc_ref(v___x_4422_);
v___y_4372_ = v___x_4439_;
v___y_4373_ = v___x_4422_;
v___y_4374_ = v___x_4431_;
v___y_4375_ = v_a_4449_;
v___y_4376_ = v___x_4429_;
v___y_4377_ = v___x_4422_;
v___y_4378_ = v___x_4431_;
v___y_4379_ = v___x_4428_;
v___y_4380_ = v___x_4423_;
v___y_4381_ = v___x_4453_;
goto v___jp_4371_;
}
}
else
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
lean_dec(v_a_4446_);
lean_dec_ref(v___x_4439_);
lean_dec_ref(v___x_4429_);
lean_dec(v_a_4426_);
lean_dec_ref(v___x_4422_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
v_a_4454_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4447_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4447_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
return v___x_4459_;
}
}
}
}
else
{
lean_dec_ref(v___x_4439_);
lean_dec_ref(v___x_4429_);
lean_dec(v_a_4426_);
lean_dec_ref(v___x_4422_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
return v___x_4445_;
}
}
else
{
lean_dec_ref(v___x_4439_);
lean_dec_ref(v___x_4429_);
lean_dec(v_a_4426_);
lean_dec_ref(v___x_4422_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
return v___x_4441_;
}
}
else
{
lean_object* v_a_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4469_; 
lean_dec(v_a_4433_);
lean_dec_ref(v___x_4429_);
lean_dec(v_a_4426_);
lean_dec_ref(v___x_4422_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
v_a_4462_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4469_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4469_ == 0)
{
v___x_4464_ = v___x_4434_;
v_isShared_4465_ = v_isSharedCheck_4469_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_a_4462_);
lean_dec(v___x_4434_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4469_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v___x_4467_; 
if (v_isShared_4465_ == 0)
{
v___x_4467_ = v___x_4464_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v_a_4462_);
v___x_4467_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
return v___x_4467_;
}
}
}
}
else
{
lean_dec_ref(v___x_4429_);
lean_dec(v_a_4426_);
lean_dec_ref(v___x_4422_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
return v___x_4432_;
}
}
else
{
lean_object* v_a_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4477_; 
lean_dec_ref(v___x_4422_);
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
lean_dec(v_e_4159_);
v_a_4470_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4472_ = v___x_4425_;
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
else
{
lean_inc(v_a_4470_);
lean_dec(v___x_4425_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4475_; 
if (v_isShared_4473_ == 0)
{
v___x_4475_ = v___x_4472_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4470_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
}
}
else
{
lean_object* v_a_4481_; lean_object* v___x_4483_; uint8_t v_isShared_4484_; uint8_t v_isSharedCheck_4492_; 
lean_dec(v_expectedType_x3f_4162_);
lean_dec(v_ref_4161_);
lean_dec(v_body_4160_);
lean_dec(v_e_4159_);
v_a_4481_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4492_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4492_ == 0)
{
v___x_4483_ = v___x_4173_;
v_isShared_4484_ = v_isSharedCheck_4492_;
goto v_resetjp_4482_;
}
else
{
lean_inc(v_a_4481_);
lean_dec(v___x_4173_);
v___x_4483_ = lean_box(0);
v_isShared_4484_ = v_isSharedCheck_4492_;
goto v_resetjp_4482_;
}
v_resetjp_4482_:
{
lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4490_; 
v___x_4485_ = lean_io_error_to_string(v_a_4481_);
v___x_4486_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4485_);
v___x_4487_ = l_Lean_MessageData_ofFormat(v___x_4486_);
lean_inc(v_ref_4171_);
v___x_4488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4488_, 0, v_ref_4171_);
lean_ctor_set(v___x_4488_, 1, v___x_4487_);
if (v_isShared_4484_ == 0)
{
lean_ctor_set(v___x_4483_, 0, v___x_4488_);
v___x_4490_ = v___x_4483_;
goto v_reusejp_4489_;
}
else
{
lean_object* v_reuseFailAlloc_4491_; 
v_reuseFailAlloc_4491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4491_, 0, v___x_4488_);
v___x_4490_ = v_reuseFailAlloc_4491_;
goto v_reusejp_4489_;
}
v_reusejp_4489_:
{
return v___x_4490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___boxed(lean_object* v_e_4493_, lean_object* v_body_4494_, lean_object* v_ref_4495_, lean_object* v_expectedType_x3f_4496_, lean_object* v_a_4497_, lean_object* v_a_4498_, lean_object* v_a_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(v_e_4493_, v_body_4494_, v_ref_4495_, v_expectedType_x3f_4496_, v_a_4497_, v_a_4498_, v_a_4499_, v_a_4500_, v_a_4501_, v_a_4502_);
lean_dec(v_a_4502_);
lean_dec_ref(v_a_4501_);
lean_dec(v_a_4500_);
lean_dec_ref(v_a_4499_);
lean_dec(v_a_4498_);
lean_dec_ref(v_a_4497_);
return v_res_4504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2(lean_object* v_00_u03b2_4505_, lean_object* v_x_4506_, lean_object* v_x_4507_, lean_object* v_x_4508_){
_start:
{
lean_object* v___x_4509_; 
v___x_4509_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(v_x_4506_, v_x_4507_, v_x_4508_);
return v___x_4509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6(size_t v_sz_4510_, size_t v_i_4511_, lean_object* v_bs_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_){
_start:
{
lean_object* v___x_4520_; 
v___x_4520_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(v_sz_4510_, v_i_4511_, v_bs_4512_);
return v___x_4520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___boxed(lean_object* v_sz_4521_, lean_object* v_i_4522_, lean_object* v_bs_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_){
_start:
{
size_t v_sz_boxed_4531_; size_t v_i_boxed_4532_; lean_object* v_res_4533_; 
v_sz_boxed_4531_ = lean_unbox_usize(v_sz_4521_);
lean_dec(v_sz_4521_);
v_i_boxed_4532_ = lean_unbox_usize(v_i_4522_);
lean_dec(v_i_4522_);
v_res_4533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6(v_sz_boxed_4531_, v_i_boxed_4532_, v_bs_4523_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
lean_dec(v___y_4529_);
lean_dec_ref(v___y_4528_);
lean_dec(v___y_4527_);
lean_dec_ref(v___y_4526_);
lean_dec(v___y_4525_);
lean_dec_ref(v___y_4524_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10(lean_object* v_00_u03b1_4534_, lean_object* v_msg_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_){
_start:
{
lean_object* v___x_4543_; 
v___x_4543_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v_msg_4535_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_);
return v___x_4543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___boxed(lean_object* v_00_u03b1_4544_, lean_object* v_msg_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_){
_start:
{
lean_object* v_res_4553_; 
v_res_4553_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10(v_00_u03b1_4544_, v_msg_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_, v___y_4551_);
lean_dec(v___y_4551_);
lean_dec_ref(v___y_4550_);
lean_dec(v___y_4549_);
lean_dec_ref(v___y_4548_);
lean_dec(v___y_4547_);
lean_dec_ref(v___y_4546_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4(lean_object* v_00_u03b2_4554_, lean_object* v_x_4555_, size_t v_x_4556_, size_t v_x_4557_, lean_object* v_x_4558_, lean_object* v_x_4559_){
_start:
{
lean_object* v___x_4560_; 
v___x_4560_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_x_4555_, v_x_4556_, v_x_4557_, v_x_4558_, v_x_4559_);
return v___x_4560_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___boxed(lean_object* v_00_u03b2_4561_, lean_object* v_x_4562_, lean_object* v_x_4563_, lean_object* v_x_4564_, lean_object* v_x_4565_, lean_object* v_x_4566_){
_start:
{
size_t v_x_36897__boxed_4567_; size_t v_x_36898__boxed_4568_; lean_object* v_res_4569_; 
v_x_36897__boxed_4567_ = lean_unbox_usize(v_x_4563_);
lean_dec(v_x_4563_);
v_x_36898__boxed_4568_ = lean_unbox_usize(v_x_4564_);
lean_dec(v_x_4564_);
v_res_4569_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4(v_00_u03b2_4561_, v_x_4562_, v_x_36897__boxed_4567_, v_x_36898__boxed_4568_, v_x_4565_, v_x_4566_);
return v_res_4569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16(lean_object* v_msgData_4570_, lean_object* v_macroStack_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_){
_start:
{
lean_object* v___x_4579_; 
v___x_4579_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(v_msgData_4570_, v_macroStack_4571_, v___y_4576_);
return v___x_4579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___boxed(lean_object* v_msgData_4580_, lean_object* v_macroStack_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16(v_msgData_4580_, v_macroStack_4581_, v___y_4582_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_, v___y_4587_);
lean_dec(v___y_4587_);
lean_dec_ref(v___y_4586_);
lean_dec(v___y_4585_);
lean_dec_ref(v___y_4584_);
lean_dec(v___y_4583_);
lean_dec_ref(v___y_4582_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8(lean_object* v_as_4590_, size_t v_sz_4591_, size_t v_i_4592_, lean_object* v_b_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_){
_start:
{
lean_object* v___x_4601_; 
v___x_4601_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(v_as_4590_, v_sz_4591_, v_i_4592_, v_b_4593_);
return v___x_4601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___boxed(lean_object* v_as_4602_, lean_object* v_sz_4603_, lean_object* v_i_4604_, lean_object* v_b_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_){
_start:
{
size_t v_sz_boxed_4613_; size_t v_i_boxed_4614_; lean_object* v_res_4615_; 
v_sz_boxed_4613_ = lean_unbox_usize(v_sz_4603_);
lean_dec(v_sz_4603_);
v_i_boxed_4614_ = lean_unbox_usize(v_i_4604_);
lean_dec(v_i_4604_);
v_res_4615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8(v_as_4602_, v_sz_boxed_4613_, v_i_boxed_4614_, v_b_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
lean_dec(v___y_4611_);
lean_dec_ref(v___y_4610_);
lean_dec(v___y_4609_);
lean_dec_ref(v___y_4608_);
lean_dec(v___y_4607_);
lean_dec_ref(v___y_4606_);
lean_dec_ref(v_as_4602_);
return v_res_4615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12(lean_object* v_00_u03b2_4616_, lean_object* v_n_4617_, lean_object* v_k_4618_, lean_object* v_v_4619_){
_start:
{
lean_object* v___x_4620_; 
v___x_4620_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(v_n_4617_, v_k_4618_, v_v_4619_);
return v___x_4620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13(lean_object* v_00_u03b2_4621_, size_t v_depth_4622_, lean_object* v_keys_4623_, lean_object* v_vals_4624_, lean_object* v_heq_4625_, lean_object* v_i_4626_, lean_object* v_entries_4627_){
_start:
{
lean_object* v___x_4628_; 
v___x_4628_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(v_depth_4622_, v_keys_4623_, v_vals_4624_, v_i_4626_, v_entries_4627_);
return v___x_4628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___boxed(lean_object* v_00_u03b2_4629_, lean_object* v_depth_4630_, lean_object* v_keys_4631_, lean_object* v_vals_4632_, lean_object* v_heq_4633_, lean_object* v_i_4634_, lean_object* v_entries_4635_){
_start:
{
size_t v_depth_boxed_4636_; lean_object* v_res_4637_; 
v_depth_boxed_4636_ = lean_unbox_usize(v_depth_4630_);
lean_dec(v_depth_4630_);
v_res_4637_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13(v_00_u03b2_4629_, v_depth_boxed_4636_, v_keys_4631_, v_vals_4632_, v_heq_4633_, v_i_4634_, v_entries_4635_);
lean_dec_ref(v_vals_4632_);
lean_dec_ref(v_keys_4631_);
return v_res_4637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15(lean_object* v_as_4638_, size_t v_sz_4639_, size_t v_i_4640_, lean_object* v_b_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_){
_start:
{
lean_object* v___x_4649_; 
v___x_4649_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(v_as_4638_, v_sz_4639_, v_i_4640_, v_b_4641_);
return v___x_4649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___boxed(lean_object* v_as_4650_, lean_object* v_sz_4651_, lean_object* v_i_4652_, lean_object* v_b_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_){
_start:
{
size_t v_sz_boxed_4661_; size_t v_i_boxed_4662_; lean_object* v_res_4663_; 
v_sz_boxed_4661_ = lean_unbox_usize(v_sz_4651_);
lean_dec(v_sz_4651_);
v_i_boxed_4662_ = lean_unbox_usize(v_i_4652_);
lean_dec(v_i_4652_);
v_res_4663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15(v_as_4650_, v_sz_boxed_4661_, v_i_boxed_4662_, v_b_4653_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_);
lean_dec(v___y_4659_);
lean_dec_ref(v___y_4658_);
lean_dec(v___y_4657_);
lean_dec_ref(v___y_4656_);
lean_dec(v___y_4655_);
lean_dec_ref(v___y_4654_);
lean_dec_ref(v_as_4650_);
return v_res_4663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20(lean_object* v_00_u03b2_4664_, lean_object* v_x_4665_, lean_object* v_x_4666_, lean_object* v_x_4667_, lean_object* v_x_4668_){
_start:
{
lean_object* v___x_4669_; 
v___x_4669_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(v_x_4665_, v_x_4666_, v_x_4667_, v_x_4668_);
return v___x_4669_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4670_ = lean_box(0);
v___x_4671_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4671_);
lean_ctor_set(v___x_4672_, 1, v___x_4670_);
return v___x_4672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg(){
_start:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; 
v___x_4674_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0);
v___x_4675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4674_);
return v___x_4675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___boxed(lean_object* v___y_4676_){
_start:
{
lean_object* v_res_4677_; 
v_res_4677_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
return v_res_4677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0(lean_object* v_00_u03b1_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_){
_start:
{
lean_object* v___x_4686_; 
v___x_4686_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
return v___x_4686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___boxed(lean_object* v_00_u03b1_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_){
_start:
{
lean_object* v_res_4695_; 
v_res_4695_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0(v_00_u03b1_4687_, v___y_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_);
lean_dec(v___y_4693_);
lean_dec_ref(v___y_4692_);
lean_dec(v___y_4691_);
lean_dec_ref(v___y_4690_);
lean_dec(v___y_4689_);
lean_dec_ref(v___y_4688_);
return v_res_4695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm(lean_object* v_stx_4702_, lean_object* v_expectedType_x3f_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_){
_start:
{
lean_object* v___x_4711_; uint8_t v___x_4712_; 
v___x_4711_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1));
lean_inc(v_stx_4702_);
v___x_4712_ = l_Lean_Syntax_isOfKind(v_stx_4702_, v___x_4711_);
if (v___x_4712_ == 0)
{
lean_object* v___x_4713_; 
lean_dec(v_expectedType_x3f_4703_);
lean_dec(v_stx_4702_);
v___x_4713_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
return v___x_4713_;
}
else
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v_body_4717_; lean_object* v___x_4718_; 
v___x_4714_ = lean_unsigned_to_nat(1u);
v___x_4715_ = l_Lean_Syntax_getArg(v_stx_4702_, v___x_4714_);
v___x_4716_ = lean_unsigned_to_nat(3u);
v_body_4717_ = l_Lean_Syntax_getArg(v_stx_4702_, v___x_4716_);
v___x_4718_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(v___x_4715_, v_body_4717_, v_stx_4702_, v_expectedType_x3f_4703_, v_a_4704_, v_a_4705_, v_a_4706_, v_a_4707_, v_a_4708_, v_a_4709_);
return v___x_4718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___boxed(lean_object* v_stx_4719_, lean_object* v_expectedType_x3f_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_, lean_object* v_a_4723_, lean_object* v_a_4724_, lean_object* v_a_4725_, lean_object* v_a_4726_, lean_object* v_a_4727_){
_start:
{
lean_object* v_res_4728_; 
v_res_4728_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm(v_stx_4719_, v_expectedType_x3f_4720_, v_a_4721_, v_a_4722_, v_a_4723_, v_a_4724_, v_a_4725_, v_a_4726_);
lean_dec(v_a_4726_);
lean_dec_ref(v_a_4725_);
lean_dec(v_a_4724_);
lean_dec_ref(v_a_4723_);
lean_dec(v_a_4722_);
lean_dec_ref(v_a_4721_);
return v_res_4728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1(){
_start:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4734_ = l_Lean_Elab_Term_termElabAttribute;
v___x_4735_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1));
v___x_4736_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1));
v___x_4737_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___boxed), 9, 0);
v___x_4738_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4734_, v___x_4735_, v___x_4736_, v___x_4737_);
return v___x_4738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___boxed(lean_object* v_a_4739_){
_start:
{
lean_object* v_res_4740_; 
v_res_4740_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1();
return v_res_4740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg(){
_start:
{
lean_object* v___x_4742_; lean_object* v___x_4743_; 
v___x_4742_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0);
v___x_4743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4742_);
return v___x_4743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg___boxed(lean_object* v___y_4744_){
_start:
{
lean_object* v_res_4745_; 
v_res_4745_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0(lean_object* v_00_u03b1_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_){
_start:
{
lean_object* v___x_4755_; 
v___x_4755_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___boxed(lean_object* v_00_u03b1_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_){
_start:
{
lean_object* v_res_4765_; 
v_res_4765_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0(v_00_u03b1_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_, v___y_4763_);
lean_dec(v___y_4763_);
lean_dec_ref(v___y_4762_);
lean_dec(v___y_4761_);
lean_dec_ref(v___y_4760_);
lean_dec(v___y_4759_);
lean_dec_ref(v___y_4758_);
lean_dec_ref(v___y_4757_);
return v_res_4765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0(lean_object* v_a_4766_, lean_object* v___x_4767_, lean_object* v_stx_4768_, lean_object* v_body_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_){
_start:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4778_, 0, v_a_4766_);
v___x_4779_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(v___x_4767_, v_body_4769_, v_stx_4768_, v___x_4778_, v___y_4771_, v___y_4772_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
return v___x_4779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0___boxed(lean_object* v_a_4780_, lean_object* v___x_4781_, lean_object* v_stx_4782_, lean_object* v_body_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0(v_a_4780_, v___x_4781_, v_stx_4782_, v_body_4783_, v___y_4784_, v___y_4785_, v___y_4786_, v___y_4787_, v___y_4788_, v___y_4789_, v___y_4790_);
lean_dec(v___y_4790_);
lean_dec_ref(v___y_4789_);
lean_dec(v___y_4788_);
lean_dec_ref(v___y_4787_);
lean_dec(v___y_4786_);
lean_dec_ref(v___y_4785_);
lean_dec_ref(v___y_4784_);
return v_res_4792_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2(void){
_start:
{
lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4796_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1));
v___x_4797_ = l_Lean_MessageData_ofFormat(v___x_4796_);
return v___x_4797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg(lean_object* v_stx_4798_, lean_object* v_dec_4799_, lean_object* v_a_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_a_4806_){
_start:
{
lean_object* v___x_4808_; uint8_t v___x_4809_; 
v___x_4808_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4));
lean_inc(v_stx_4798_);
v___x_4809_ = l_Lean_Syntax_isOfKind(v_stx_4798_, v___x_4808_);
if (v___x_4809_ == 0)
{
lean_object* v___x_4810_; 
lean_dec_ref(v_dec_4799_);
lean_dec(v_stx_4798_);
v___x_4810_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
return v___x_4810_;
}
else
{
lean_object* v_doBlockResultType_4811_; lean_object* v___x_4812_; lean_object* v_tk_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; 
v_doBlockResultType_4811_ = lean_ctor_get(v_a_4800_, 3);
v___x_4812_ = lean_unsigned_to_nat(0u);
v_tk_4813_ = l_Lean_Syntax_getArg(v_stx_4798_, v___x_4812_);
v___x_4814_ = lean_unsigned_to_nat(1u);
v___x_4815_ = l_Lean_Syntax_getArg(v_stx_4798_, v___x_4814_);
lean_inc_ref(v_doBlockResultType_4811_);
v___x_4816_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_4811_, v_a_4800_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_);
if (lean_obj_tag(v___x_4816_) == 0)
{
lean_object* v_a_4817_; lean_object* v___f_4818_; lean_object* v___x_4819_; 
v_a_4817_ = lean_ctor_get(v___x_4816_, 0);
lean_inc(v_a_4817_);
lean_dec_ref_known(v___x_4816_, 1);
v___f_4818_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0___boxed), 12, 3);
lean_closure_set(v___f_4818_, 0, v_a_4817_);
lean_closure_set(v___f_4818_, 1, v___x_4815_);
lean_closure_set(v___f_4818_, 2, v_stx_4798_);
v___x_4819_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_4799_, v_tk_4813_, v_a_4800_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_);
lean_dec(v_tk_4813_);
if (lean_obj_tag(v___x_4819_) == 0)
{
lean_object* v_a_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; 
v_a_4820_ = lean_ctor_get(v___x_4819_, 0);
lean_inc(v_a_4820_);
lean_dec_ref_known(v___x_4819_, 1);
v___x_4821_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2);
v___x_4822_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_4822_, 0, v_a_4820_);
v___x_4823_ = lean_box(0);
v___x_4824_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_4821_, v___x_4822_, v___f_4818_, v___x_4823_, v_a_4800_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_, v_a_4805_, v_a_4806_);
return v___x_4824_;
}
else
{
lean_object* v_a_4825_; lean_object* v___x_4827_; uint8_t v_isShared_4828_; uint8_t v_isSharedCheck_4832_; 
lean_dec_ref(v___f_4818_);
v_a_4825_ = lean_ctor_get(v___x_4819_, 0);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4819_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4827_ = v___x_4819_;
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
else
{
lean_inc(v_a_4825_);
lean_dec(v___x_4819_);
v___x_4827_ = lean_box(0);
v_isShared_4828_ = v_isSharedCheck_4832_;
goto v_resetjp_4826_;
}
v_resetjp_4826_:
{
lean_object* v___x_4830_; 
if (v_isShared_4828_ == 0)
{
v___x_4830_ = v___x_4827_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v_a_4825_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
return v___x_4830_;
}
}
}
}
else
{
lean_dec(v___x_4815_);
lean_dec(v_tk_4813_);
lean_dec_ref(v_dec_4799_);
lean_dec(v_stx_4798_);
return v___x_4816_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___boxed(lean_object* v_stx_4833_, lean_object* v_dec_4834_, lean_object* v_a_4835_, lean_object* v_a_4836_, lean_object* v_a_4837_, lean_object* v_a_4838_, lean_object* v_a_4839_, lean_object* v_a_4840_, lean_object* v_a_4841_, lean_object* v_a_4842_){
_start:
{
lean_object* v_res_4843_; 
v_res_4843_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg(v_stx_4833_, v_dec_4834_, v_a_4835_, v_a_4836_, v_a_4837_, v_a_4838_, v_a_4839_, v_a_4840_, v_a_4841_);
lean_dec(v_a_4841_);
lean_dec_ref(v_a_4840_);
lean_dec(v_a_4839_);
lean_dec_ref(v_a_4838_);
lean_dec(v_a_4837_);
lean_dec_ref(v_a_4836_);
lean_dec_ref(v_a_4835_);
return v_res_4843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1(){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; 
v___x_4849_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4850_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4));
v___x_4851_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1));
v___x_4852_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___boxed), 10, 0);
v___x_4853_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4849_, v___x_4850_, v___x_4851_, v___x_4852_);
return v___x_4853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___boxed(lean_object* v_a_4854_){
_start:
{
lean_object* v_res_4855_; 
v_res_4855_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1();
return v_res_4855_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_TCP(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Idbg(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Idbg(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Std_Async_TCP(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Idbg(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Idbg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Idbg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Idbg(builtin);
}
#ifdef __cplusplus
}
#endif
