// Lean compiler output
// Module: Lean.Server.FileWorker.InlayHints
// Imports: public import Lean.Server.GoTo public import Lean.Server.Requests
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
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_string_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Server_documentUriFromModule_x3f(lean_object*);
lean_object* l_Lean_FileMap_utf8RangeToLspRange(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonInlayHintParams_fromJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Lsp_instToJsonInlayHint_toJson(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_FileMap_lspRangeToUtf8Range(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Syntax_Range_bsize(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Syntax_Range_overlaps(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Elab_instBEqInlayHintTextEdit_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_Server_requestHandlers;
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
extern lean_object* l_Lean_Server_statefulRequestHandlers;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InlayHint_ofCustomInfo_x3f(lean_object*);
lean_object* l_Lean_Elab_InlayHint_resolveDeferred___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestError_ofIoError(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Server_instInhabitedRequestError_default;
lean_object* l_instInhabitedEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_Lean_Server_RequestCancellationToken_cancellationTasks(lean_object*);
lean_object* l_Lean_AsyncList_getFinishedPrefixWithConsistentLatency___redArg(lean_object*, uint32_t, lean_object*);
uint8_t l_Lean_Server_RequestCancellationToken_wasCancelled(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_InlayHintKind_toLspInlayHintKind(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintKind_toLspInlayHintKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintTextEdit_toLspTextEdit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Server.FileWorker.InlayHints"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Server.FileWorker.applyEditToHint\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Got position "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = " that should have been invalidated by edit at range "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FileWorker"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InlayHintState"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(232, 14, 27, 113, 182, 128, 119, 36)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value),LEAN_SCALAR_PTR_LITERAL(105, 230, 109, 194, 171, 115, 34, 220)}};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instTypeNameInlayHintState = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__4_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16__value;
static const lean_array_object l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState_default = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instInhabitedInlayHintState = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedInlayHintState_default___closed__1_value;
static const lean_array_object l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_InlayHintState_init___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_InlayHintState_init___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Server_FileWorker_InlayHintState_init___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_InlayHintState_init = (const lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__1_value;
static lean_once_cell_t l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Elab.InfoTree.Util.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Elab.InfoTree.Util"};
static const lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_handleInlayHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Server.FileWorker.handleInlayHints"};
static const lean_object* l_Lean_Server_FileWorker_handleInlayHints___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_handleInlayHints___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_handleInlayHints___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 399, .m_capacity = 399, .m_length = 398, .m_data = "assertion violation: finishedSnaps >= oldFinishedSnaps\n  -- VS Code emits inlay hint requests *every time the user scrolls*. This is reasonably expensive,\n  -- so in addition to re-using old inlay hints from parts of the file that haven't been processed\n  -- yet, we also re-use old inlay hints from parts of the file that have been processed already\n  -- with the current state of the document.\n  "};
static const lean_object* l_Lean_Server_FileWorker_handleInlayHints___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_handleInlayHints___closed__1_value;
static lean_once_cell_t l_Lean_Server_FileWorker_handleInlayHints___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_handleInlayHints___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_InlayHintState_init___closed__0_value)}};
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0 = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Cannot parse request params: "};
static const lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Failed to register stateful LSP request handler for '"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "': only possible during initialization"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "': already registered"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "textDocument/inlayHint"};
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "workspace/inlayHint/refresh"};
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleInlayHints___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleInlayHintsDidChange___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation(lean_object* v_text_1_, lean_object* v_l_2_){
_start:
{
lean_object* v_module_4_; lean_object* v_range_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_42_; 
v_module_4_ = lean_ctor_get(v_l_2_, 0);
v_range_5_ = lean_ctor_get(v_l_2_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_l_2_);
if (v_isSharedCheck_42_ == 0)
{
v___x_7_ = v_l_2_;
v_isShared_8_ = v_isSharedCheck_42_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_range_5_);
lean_inc(v_module_4_);
lean_dec(v_l_2_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_42_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lean_Server_documentUriFromModule_x3f(v_module_4_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_33_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_33_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_33_ == 0)
{
v___x_12_ = v___x_9_;
v_isShared_13_ = v_isSharedCheck_33_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_a_10_);
lean_dec(v___x_9_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_33_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
if (lean_obj_tag(v_a_10_) == 1)
{
lean_object* v_val_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_28_; 
v_val_14_ = lean_ctor_get(v_a_10_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v_a_10_);
if (v_isSharedCheck_28_ == 0)
{
v___x_16_ = v_a_10_;
v_isShared_17_ = v_isSharedCheck_28_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_val_14_);
lean_dec(v_a_10_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_28_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_18_; lean_object* v___x_20_; 
v___x_18_ = l_Lean_FileMap_utf8RangeToLspRange(v_text_1_, v_range_5_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_18_);
lean_ctor_set(v___x_7_, 0, v_val_14_);
v___x_20_ = v___x_7_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_val_14_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v___x_18_);
v___x_20_ = v_reuseFailAlloc_27_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_22_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v___x_20_);
v___x_22_ = v___x_16_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___x_20_);
v___x_22_ = v_reuseFailAlloc_26_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
lean_object* v___x_24_; 
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_22_);
v___x_24_ = v___x_12_;
goto v_reusejp_23_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v___x_22_);
v___x_24_ = v_reuseFailAlloc_25_;
goto v_reusejp_23_;
}
v_reusejp_23_:
{
return v___x_24_;
}
}
}
}
}
else
{
lean_object* v___x_29_; lean_object* v___x_31_; 
lean_dec(v_a_10_);
lean_del_object(v___x_7_);
lean_dec_ref(v_range_5_);
lean_dec_ref(v_text_1_);
v___x_29_ = lean_box(0);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_29_);
v___x_31_ = v___x_12_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_29_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
}
else
{
lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_41_; 
lean_del_object(v___x_7_);
lean_dec_ref(v_range_5_);
lean_dec_ref(v_text_1_);
v_a_34_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_41_ == 0)
{
v___x_36_ = v___x_9_;
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_9_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_a_34_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLinkLocation_toLspLocation___boxed(lean_object* v_text_43_, lean_object* v_l_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Elab_InlayHintLinkLocation_toLspLocation(v_text_43_, v_l_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(lean_object* v_text_47_, lean_object* v_p_48_){
_start:
{
lean_object* v_value_50_; lean_object* v_tooltip_x3f_51_; lean_object* v_location_x3f_52_; lean_object* v___y_54_; lean_object* v___y_55_; lean_object* v_a_60_; 
v_value_50_ = lean_ctor_get(v_p_48_, 0);
lean_inc_ref(v_value_50_);
v_tooltip_x3f_51_ = lean_ctor_get(v_p_48_, 1);
lean_inc(v_tooltip_x3f_51_);
v_location_x3f_52_ = lean_ctor_get(v_p_48_, 2);
lean_inc(v_location_x3f_52_);
lean_dec_ref(v_p_48_);
if (lean_obj_tag(v_location_x3f_52_) == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v_text_47_);
v___x_73_ = lean_box(0);
v_a_60_ = v___x_73_;
goto v___jp_59_;
}
else
{
lean_object* v_val_74_; lean_object* v___x_75_; 
v_val_74_ = lean_ctor_get(v_location_x3f_52_, 0);
lean_inc(v_val_74_);
lean_dec_ref_known(v_location_x3f_52_, 1);
v___x_75_ = l_Lean_Elab_InlayHintLinkLocation_toLspLocation(v_text_47_, v_val_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_a_76_);
lean_dec_ref_known(v___x_75_, 1);
v_a_60_ = v_a_76_;
goto v___jp_59_;
}
else
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec(v_tooltip_x3f_51_);
lean_dec_ref(v_value_50_);
v_a_77_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_75_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
v___jp_53_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_box(0);
v___x_57_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_57_, 0, v_value_50_);
lean_ctor_set(v___x_57_, 1, v___y_55_);
lean_ctor_set(v___x_57_, 2, v___y_54_);
lean_ctor_set(v___x_57_, 3, v___x_56_);
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
return v___x_58_;
}
v___jp_59_:
{
if (lean_obj_tag(v_tooltip_x3f_51_) == 0)
{
lean_object* v___x_61_; 
v___x_61_ = lean_box(0);
v___y_54_ = v_a_60_;
v___y_55_ = v___x_61_;
goto v___jp_53_;
}
else
{
lean_object* v_val_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_72_; 
v_val_62_ = lean_ctor_get(v_tooltip_x3f_51_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v_tooltip_x3f_51_);
if (v_isSharedCheck_72_ == 0)
{
v___x_64_ = v_tooltip_x3f_51_;
v_isShared_65_ = v_isSharedCheck_72_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_val_62_);
lean_dec(v_tooltip_x3f_51_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_72_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
uint8_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_66_ = 1;
v___x_67_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_67_, 0, v_val_62_);
lean_ctor_set_uint8(v___x_67_, sizeof(void*)*1, v___x_66_);
v___x_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_68_);
v___x_70_ = v___x_64_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
v___y_54_ = v_a_60_;
v___y_55_ = v___x_70_;
goto v___jp_53_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart___boxed(lean_object* v_text_85_, lean_object* v_p_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(v_text_85_, v_p_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0(lean_object* v_text_89_, size_t v_sz_90_, size_t v_i_91_, lean_object* v_bs_92_){
_start:
{
uint8_t v___x_94_; 
v___x_94_ = lean_usize_dec_lt(v_i_91_, v_sz_90_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
lean_dec_ref(v_text_89_);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v_bs_92_);
return v___x_95_;
}
else
{
lean_object* v_v_96_; lean_object* v___x_97_; lean_object* v_bs_x27_98_; lean_object* v___x_99_; 
v_v_96_ = lean_array_uget(v_bs_92_, v_i_91_);
v___x_97_ = lean_unsigned_to_nat(0u);
v_bs_x27_98_ = lean_array_uset(v_bs_92_, v_i_91_, v___x_97_);
lean_inc_ref(v_text_89_);
v___x_99_ = l_Lean_Elab_InlayHintLabelPart_toLspInlayHintLabelPart(v_text_89_, v_v_96_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v___x_103_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
lean_dec_ref_known(v___x_99_, 1);
v___x_101_ = ((size_t)1ULL);
v___x_102_ = lean_usize_add(v_i_91_, v___x_101_);
v___x_103_ = lean_array_uset(v_bs_x27_98_, v_i_91_, v_a_100_);
v_i_91_ = v___x_102_;
v_bs_92_ = v___x_103_;
goto _start;
}
else
{
lean_object* v_a_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_112_; 
lean_dec_ref(v_bs_x27_98_);
lean_dec_ref(v_text_89_);
v_a_105_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_112_ == 0)
{
v___x_107_ = v___x_99_;
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_a_105_);
lean_dec(v___x_99_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_110_; 
if (v_isShared_108_ == 0)
{
v___x_110_ = v___x_107_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_a_105_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0___boxed(lean_object* v_text_113_, lean_object* v_sz_114_, lean_object* v_i_115_, lean_object* v_bs_116_, lean_object* v___y_117_){
_start:
{
size_t v_sz_boxed_118_; size_t v_i_boxed_119_; lean_object* v_res_120_; 
v_sz_boxed_118_ = lean_unbox_usize(v_sz_114_);
lean_dec(v_sz_114_);
v_i_boxed_119_ = lean_unbox_usize(v_i_115_);
lean_dec(v_i_115_);
v_res_120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0(v_text_113_, v_sz_boxed_118_, v_i_boxed_119_, v_bs_116_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(lean_object* v_text_121_, lean_object* v_x_122_){
_start:
{
if (lean_obj_tag(v_x_122_) == 0)
{
lean_object* v_n_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_132_; 
lean_dec_ref(v_text_121_);
v_n_124_ = lean_ctor_get(v_x_122_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v_x_122_);
if (v_isSharedCheck_132_ == 0)
{
v___x_126_ = v_x_122_;
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_n_124_);
lean_dec(v_x_122_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_n_124_);
v___x_129_ = v_reuseFailAlloc_131_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; 
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
}
else
{
lean_object* v_p_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_159_; 
v_p_133_ = lean_ctor_get(v_x_122_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v_x_122_);
if (v_isSharedCheck_159_ == 0)
{
v___x_135_ = v_x_122_;
v_isShared_136_ = v_isSharedCheck_159_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_p_133_);
lean_dec(v_x_122_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_159_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
size_t v_sz_137_; size_t v___x_138_; lean_object* v___x_139_; 
v_sz_137_ = lean_array_size(v_p_133_);
v___x_138_ = ((size_t)0ULL);
v___x_139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintLabel_toLspInlayHintLabel_spec__0(v_text_121_, v_sz_137_, v___x_138_, v_p_133_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_150_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_150_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v_a_140_);
v___x_145_ = v___x_135_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_149_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_147_; 
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_del_object(v___x_135_);
v_a_151_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_139_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_139_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel___boxed(lean_object* v_text_160_, lean_object* v_x_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(v_text_160_, v_x_161_);
return v_res_163_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_InlayHintKind_toLspInlayHintKind(uint8_t v_x_164_){
_start:
{
if (v_x_164_ == 0)
{
uint8_t v___x_165_; 
v___x_165_ = 0;
return v___x_165_;
}
else
{
uint8_t v___x_166_; 
v___x_166_ = 1;
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintKind_toLspInlayHintKind___boxed(lean_object* v_x_167_){
_start:
{
uint8_t v_x_18__boxed_168_; uint8_t v_res_169_; lean_object* v_r_170_; 
v_x_18__boxed_168_ = lean_unbox(v_x_167_);
v_res_169_ = l_Lean_Elab_InlayHintKind_toLspInlayHintKind(v_x_18__boxed_168_);
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintTextEdit_toLspTextEdit(lean_object* v_text_171_, lean_object* v_e_172_){
_start:
{
lean_object* v_range_173_; lean_object* v_newText_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_range_173_ = lean_ctor_get(v_e_172_, 0);
lean_inc_ref(v_range_173_);
v_newText_174_ = lean_ctor_get(v_e_172_, 1);
lean_inc_ref(v_newText_174_);
lean_dec_ref(v_e_172_);
v___x_175_ = l_Lean_FileMap_utf8RangeToLspRange(v_text_171_, v_range_173_);
v___x_176_ = lean_box(0);
v___x_177_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_177_, 0, v___x_175_);
lean_ctor_set(v___x_177_, 1, v_newText_174_);
lean_ctor_set(v___x_177_, 2, v___x_176_);
lean_ctor_set(v___x_177_, 3, v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(lean_object* v_text_178_, size_t v_sz_179_, size_t v_i_180_, lean_object* v_bs_181_){
_start:
{
uint8_t v___x_182_; 
v___x_182_ = lean_usize_dec_lt(v_i_180_, v_sz_179_);
if (v___x_182_ == 0)
{
lean_dec_ref(v_text_178_);
return v_bs_181_;
}
else
{
lean_object* v_v_183_; lean_object* v___x_184_; lean_object* v_bs_x27_185_; lean_object* v___x_186_; size_t v___x_187_; size_t v___x_188_; lean_object* v___x_189_; 
v_v_183_ = lean_array_uget(v_bs_181_, v_i_180_);
v___x_184_ = lean_unsigned_to_nat(0u);
v_bs_x27_185_ = lean_array_uset(v_bs_181_, v_i_180_, v___x_184_);
lean_inc_ref(v_text_178_);
v___x_186_ = l_Lean_Elab_InlayHintTextEdit_toLspTextEdit(v_text_178_, v_v_183_);
v___x_187_ = ((size_t)1ULL);
v___x_188_ = lean_usize_add(v_i_180_, v___x_187_);
v___x_189_ = lean_array_uset(v_bs_x27_185_, v_i_180_, v___x_186_);
v_i_180_ = v___x_188_;
v_bs_181_ = v___x_189_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0___boxed(lean_object* v_text_191_, lean_object* v_sz_192_, lean_object* v_i_193_, lean_object* v_bs_194_){
_start:
{
size_t v_sz_boxed_195_; size_t v_i_boxed_196_; lean_object* v_res_197_; 
v_sz_boxed_195_ = lean_unbox_usize(v_sz_192_);
lean_dec(v_sz_192_);
v_i_boxed_196_ = lean_unbox_usize(v_i_193_);
lean_dec(v_i_193_);
v_res_197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(v_text_191_, v_sz_boxed_195_, v_i_boxed_196_, v_bs_194_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint(lean_object* v_text_198_, lean_object* v_i_199_){
_start:
{
lean_object* v_position_201_; lean_object* v_label_202_; lean_object* v_kind_x3f_203_; lean_object* v_textEdits_204_; lean_object* v_tooltip_x3f_205_; uint8_t v_paddingLeft_206_; uint8_t v_paddingRight_207_; lean_object* v___x_208_; 
v_position_201_ = lean_ctor_get(v_i_199_, 0);
lean_inc(v_position_201_);
v_label_202_ = lean_ctor_get(v_i_199_, 1);
lean_inc_ref(v_label_202_);
v_kind_x3f_203_ = lean_ctor_get(v_i_199_, 2);
lean_inc(v_kind_x3f_203_);
v_textEdits_204_ = lean_ctor_get(v_i_199_, 3);
lean_inc_ref(v_textEdits_204_);
v_tooltip_x3f_205_ = lean_ctor_get(v_i_199_, 4);
lean_inc(v_tooltip_x3f_205_);
v_paddingLeft_206_ = lean_ctor_get_uint8(v_i_199_, sizeof(void*)*5);
v_paddingRight_207_ = lean_ctor_get_uint8(v_i_199_, sizeof(void*)*5 + 1);
lean_dec_ref(v_i_199_);
lean_inc_ref(v_text_198_);
v___x_208_ = l_Lean_Elab_InlayHintLabel_toLspInlayHintLabel(v_text_198_, v_label_202_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_257_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_257_ == 0)
{
v___x_211_ = v___x_208_;
v_isShared_212_ = v_isSharedCheck_257_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_208_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_257_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_228_; 
lean_inc_ref(v_text_198_);
v___x_213_ = l_Lean_FileMap_utf8PosToLspPos(v_text_198_, v_position_201_);
lean_dec(v_position_201_);
if (lean_obj_tag(v_kind_x3f_203_) == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_box(0);
v___y_228_ = v___x_245_;
goto v___jp_227_;
}
else
{
lean_object* v_val_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_256_; 
v_val_246_ = lean_ctor_get(v_kind_x3f_203_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v_kind_x3f_203_);
if (v_isSharedCheck_256_ == 0)
{
v___x_248_ = v_kind_x3f_203_;
v_isShared_249_ = v_isSharedCheck_256_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_val_246_);
lean_dec(v_kind_x3f_203_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_256_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
uint8_t v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_254_; 
v___x_250_ = lean_unbox(v_val_246_);
lean_dec(v_val_246_);
v___x_251_ = l_Lean_Elab_InlayHintKind_toLspInlayHintKind(v___x_250_);
v___x_252_ = lean_box(v___x_251_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 0, v___x_252_);
v___x_254_ = v___x_248_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v___x_252_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
v___y_228_ = v___x_254_;
goto v___jp_227_;
}
}
}
v___jp_214_:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_218_ = lean_box(v_paddingLeft_206_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___x_220_ = lean_box(v_paddingRight_207_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
v___x_222_ = lean_box(0);
v___x_223_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_223_, 0, v___x_213_);
lean_ctor_set(v___x_223_, 1, v_a_209_);
lean_ctor_set(v___x_223_, 2, v___y_216_);
lean_ctor_set(v___x_223_, 3, v___y_215_);
lean_ctor_set(v___x_223_, 4, v___y_217_);
lean_ctor_set(v___x_223_, 5, v___x_219_);
lean_ctor_set(v___x_223_, 6, v___x_221_);
lean_ctor_set(v___x_223_, 7, v___x_222_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_223_);
v___x_225_ = v___x_211_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
v___jp_227_:
{
size_t v_sz_229_; size_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_sz_229_ = lean_array_size(v_textEdits_204_);
v___x_230_ = ((size_t)0ULL);
v___x_231_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_InlayHintInfo_toLspInlayHint_spec__0(v_text_198_, v_sz_229_, v___x_230_, v_textEdits_204_);
v___x_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
if (lean_obj_tag(v_tooltip_x3f_205_) == 0)
{
lean_object* v___x_233_; 
v___x_233_ = lean_box(0);
v___y_215_ = v___x_232_;
v___y_216_ = v___y_228_;
v___y_217_ = v___x_233_;
goto v___jp_214_;
}
else
{
lean_object* v_val_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_244_; 
v_val_234_ = lean_ctor_get(v_tooltip_x3f_205_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v_tooltip_x3f_205_);
if (v_isSharedCheck_244_ == 0)
{
v___x_236_ = v_tooltip_x3f_205_;
v_isShared_237_ = v_isSharedCheck_244_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_val_234_);
lean_dec(v_tooltip_x3f_205_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_244_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_238_ = 1;
v___x_239_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_239_, 0, v_val_234_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*1, v___x_238_);
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 0, v___x_240_);
v___x_242_ = v___x_236_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
v___y_215_ = v___x_232_;
v___y_216_ = v___y_228_;
v___y_217_ = v___x_242_;
goto v___jp_214_;
}
}
}
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec(v_tooltip_x3f_205_);
lean_dec_ref(v_textEdits_204_);
lean_dec(v_kind_x3f_203_);
lean_dec(v_position_201_);
lean_dec_ref(v_text_198_);
v_a_258_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_208_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_208_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InlayHintInfo_toLspInlayHint___boxed(lean_object* v_text_266_, lean_object* v_i_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_Elab_InlayHintInfo_toLspInlayHint(v_text_266_, v_i_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__0(lean_object* v_a_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lean_nat_to_int(v_a_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(lean_object* v_msg_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_unsigned_to_nat(0u);
v___x_274_ = lean_panic_fn_borrowed(v___x_273_, v_msg_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(lean_object* v_range_280_, lean_object* v_byteOffset_281_, lean_object* v_p_282_){
_start:
{
lean_object* v_start_283_; lean_object* v_stop_284_; lean_object* v___x_285_; lean_object* v___x_286_; uint8_t v___x_287_; 
v_start_283_ = lean_ctor_get(v_range_280_, 0);
lean_inc(v_start_283_);
v_stop_284_ = lean_ctor_get(v_range_280_, 1);
lean_inc(v_stop_284_);
lean_dec_ref(v_range_280_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_stop_284_, v___x_285_);
v___x_287_ = lean_nat_dec_le(v___x_286_, v_p_282_);
lean_dec(v___x_286_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = lean_nat_add(v_p_282_, v___x_285_);
v___x_289_ = lean_nat_dec_le(v___x_288_, v_start_283_);
lean_dec(v___x_288_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_290_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0));
v___x_291_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1));
v___x_292_ = lean_unsigned_to_nat(87u);
v___x_293_ = lean_unsigned_to_nat(6u);
v___x_294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2));
v___x_295_ = l_Nat_reprFast(v_p_282_);
v___x_296_ = lean_string_append(v___x_294_, v___x_295_);
lean_dec_ref(v___x_295_);
v___x_297_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3));
v___x_298_ = lean_string_append(v___x_296_, v___x_297_);
v___x_299_ = l_Nat_reprFast(v_start_283_);
v___x_300_ = lean_string_append(v___x_298_, v___x_299_);
lean_dec_ref(v___x_299_);
v___x_301_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4));
v___x_302_ = lean_string_append(v___x_300_, v___x_301_);
v___x_303_ = l_Nat_reprFast(v_stop_284_);
v___x_304_ = lean_string_append(v___x_302_, v___x_303_);
lean_dec_ref(v___x_303_);
v___x_305_ = l_mkPanicMessageWithDecl(v___x_290_, v___x_291_, v___x_292_, v___x_293_, v___x_304_);
lean_dec_ref(v___x_304_);
v___x_306_ = l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(v___x_305_);
return v___x_306_;
}
else
{
lean_dec(v_stop_284_);
lean_dec(v_start_283_);
return v_p_282_;
}
}
else
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
lean_dec(v_stop_284_);
lean_dec(v_start_283_);
v___x_307_ = lean_nat_to_int(v_p_282_);
v___x_308_ = lean_int_add(v___x_307_, v_byteOffset_281_);
lean_dec(v___x_307_);
v___x_309_ = l_Int_toNat(v___x_308_);
lean_dec(v___x_308_);
return v___x_309_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___boxed(lean_object* v_range_310_, lean_object* v_byteOffset_311_, lean_object* v_p_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_310_, v_byteOffset_311_, v_p_312_);
lean_dec(v_byteOffset_311_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(lean_object* v_hintMod_314_, lean_object* v_range_315_, lean_object* v_byteOffset_316_, size_t v_sz_317_, size_t v_i_318_, lean_object* v_bs_319_){
_start:
{
uint8_t v___x_320_; 
v___x_320_ = lean_usize_dec_lt(v_i_318_, v_sz_317_);
if (v___x_320_ == 0)
{
lean_dec_ref(v_range_315_);
return v_bs_319_;
}
else
{
lean_object* v_v_321_; lean_object* v_value_322_; lean_object* v_tooltip_x3f_323_; lean_object* v_location_x3f_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_367_; 
v_v_321_ = lean_array_uget(v_bs_319_, v_i_318_);
v_value_322_ = lean_ctor_get(v_v_321_, 0);
v_tooltip_x3f_323_ = lean_ctor_get(v_v_321_, 1);
v_location_x3f_324_ = lean_ctor_get(v_v_321_, 2);
v_isSharedCheck_367_ = !lean_is_exclusive(v_v_321_);
if (v_isSharedCheck_367_ == 0)
{
v___x_326_ = v_v_321_;
v_isShared_327_ = v_isSharedCheck_367_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_location_x3f_324_);
lean_inc(v_tooltip_x3f_323_);
lean_inc(v_value_322_);
lean_dec(v_v_321_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_367_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_328_; lean_object* v_bs_x27_329_; lean_object* v___y_331_; lean_object* v___y_337_; 
v___x_328_ = lean_unsigned_to_nat(0u);
v_bs_x27_329_ = lean_array_uset(v_bs_319_, v_i_318_, v___x_328_);
if (lean_obj_tag(v_location_x3f_324_) == 0)
{
lean_object* v___x_342_; 
lean_del_object(v___x_326_);
v___x_342_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_342_, 0, v_value_322_);
lean_ctor_set(v___x_342_, 1, v_tooltip_x3f_323_);
lean_ctor_set(v___x_342_, 2, v_location_x3f_324_);
v___y_331_ = v___x_342_;
goto v___jp_330_;
}
else
{
lean_object* v_val_343_; lean_object* v_module_344_; lean_object* v_range_345_; uint8_t v___x_346_; 
v_val_343_ = lean_ctor_get(v_location_x3f_324_, 0);
lean_inc(v_val_343_);
lean_dec_ref_known(v_location_x3f_324_, 1);
v_module_344_ = lean_ctor_get(v_val_343_, 0);
v_range_345_ = lean_ctor_get(v_val_343_, 1);
lean_inc_ref(v_range_345_);
v___x_346_ = lean_name_eq(v_module_344_, v_hintMod_314_);
if (v___x_346_ == 0)
{
lean_dec_ref(v_range_345_);
v___y_337_ = v_val_343_;
goto v___jp_336_;
}
else
{
lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_364_; 
lean_inc(v_module_344_);
v_isSharedCheck_364_ = !lean_is_exclusive(v_val_343_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; lean_object* v_unused_366_; 
v_unused_365_ = lean_ctor_get(v_val_343_, 1);
lean_dec(v_unused_365_);
v_unused_366_ = lean_ctor_get(v_val_343_, 0);
lean_dec(v_unused_366_);
v___x_348_ = v_val_343_;
v_isShared_349_ = v_isSharedCheck_364_;
goto v_resetjp_347_;
}
else
{
lean_dec(v_val_343_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_364_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v_start_350_; lean_object* v_stop_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_363_; 
v_start_350_ = lean_ctor_get(v_range_345_, 0);
v_stop_351_ = lean_ctor_get(v_range_345_, 1);
v_isSharedCheck_363_ = !lean_is_exclusive(v_range_345_);
if (v_isSharedCheck_363_ == 0)
{
v___x_353_ = v_range_345_;
v_isShared_354_ = v_isSharedCheck_363_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_stop_351_);
lean_inc(v_start_350_);
lean_dec(v_range_345_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_363_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_358_; 
lean_inc_ref_n(v_range_315_, 2);
v___x_355_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_315_, v_byteOffset_316_, v_start_350_);
v___x_356_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_315_, v_byteOffset_316_, v_stop_351_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v___x_356_);
lean_ctor_set(v___x_353_, 0, v___x_355_);
v___x_358_ = v___x_353_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v___x_356_);
v___x_358_ = v_reuseFailAlloc_362_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
lean_object* v___x_360_; 
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 1, v___x_358_);
v___x_360_ = v___x_348_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_module_344_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
v___y_337_ = v___x_360_;
goto v___jp_336_;
}
}
}
}
}
}
v___jp_330_:
{
size_t v___x_332_; size_t v___x_333_; lean_object* v___x_334_; 
v___x_332_ = ((size_t)1ULL);
v___x_333_ = lean_usize_add(v_i_318_, v___x_332_);
v___x_334_ = lean_array_uset(v_bs_x27_329_, v_i_318_, v___y_331_);
v_i_318_ = v___x_333_;
v_bs_319_ = v___x_334_;
goto _start;
}
v___jp_336_:
{
lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v___y_337_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 2, v___x_338_);
v___x_340_ = v___x_326_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_value_322_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_tooltip_x3f_323_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v___x_338_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
v___y_331_ = v___x_340_;
goto v___jp_330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4___boxed(lean_object* v_hintMod_368_, lean_object* v_range_369_, lean_object* v_byteOffset_370_, lean_object* v_sz_371_, lean_object* v_i_372_, lean_object* v_bs_373_){
_start:
{
size_t v_sz_boxed_374_; size_t v_i_boxed_375_; lean_object* v_res_376_; 
v_sz_boxed_374_ = lean_unbox_usize(v_sz_371_);
lean_dec(v_sz_371_);
v_i_boxed_375_ = lean_unbox_usize(v_i_372_);
lean_dec(v_i_372_);
v_res_376_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(v_hintMod_368_, v_range_369_, v_byteOffset_370_, v_sz_boxed_374_, v_i_boxed_375_, v_bs_373_);
lean_dec(v_byteOffset_370_);
lean_dec(v_hintMod_368_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(lean_object* v_hintMod_377_, lean_object* v_range_378_, lean_object* v_byteOffset_379_, size_t v_sz_380_, size_t v_i_381_, lean_object* v_bs_382_){
_start:
{
uint8_t v___x_383_; 
v___x_383_ = lean_usize_dec_lt(v_i_381_, v_sz_380_);
if (v___x_383_ == 0)
{
lean_dec_ref(v_range_378_);
return v_bs_382_;
}
else
{
lean_object* v_v_384_; lean_object* v_value_385_; lean_object* v_tooltip_x3f_386_; lean_object* v_location_x3f_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_430_; 
v_v_384_ = lean_array_uget(v_bs_382_, v_i_381_);
v_value_385_ = lean_ctor_get(v_v_384_, 0);
v_tooltip_x3f_386_ = lean_ctor_get(v_v_384_, 1);
v_location_x3f_387_ = lean_ctor_get(v_v_384_, 2);
v_isSharedCheck_430_ = !lean_is_exclusive(v_v_384_);
if (v_isSharedCheck_430_ == 0)
{
v___x_389_ = v_v_384_;
v_isShared_390_ = v_isSharedCheck_430_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_location_x3f_387_);
lean_inc(v_tooltip_x3f_386_);
lean_inc(v_value_385_);
lean_dec(v_v_384_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_430_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_391_; lean_object* v_bs_x27_392_; lean_object* v___y_394_; lean_object* v___y_400_; 
v___x_391_ = lean_unsigned_to_nat(0u);
v_bs_x27_392_ = lean_array_uset(v_bs_382_, v_i_381_, v___x_391_);
if (lean_obj_tag(v_location_x3f_387_) == 0)
{
lean_object* v___x_405_; 
lean_del_object(v___x_389_);
v___x_405_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_405_, 0, v_value_385_);
lean_ctor_set(v___x_405_, 1, v_tooltip_x3f_386_);
lean_ctor_set(v___x_405_, 2, v_location_x3f_387_);
v___y_394_ = v___x_405_;
goto v___jp_393_;
}
else
{
lean_object* v_val_406_; lean_object* v_module_407_; lean_object* v_range_408_; uint8_t v___x_409_; 
v_val_406_ = lean_ctor_get(v_location_x3f_387_, 0);
lean_inc(v_val_406_);
lean_dec_ref_known(v_location_x3f_387_, 1);
v_module_407_ = lean_ctor_get(v_val_406_, 0);
v_range_408_ = lean_ctor_get(v_val_406_, 1);
lean_inc_ref(v_range_408_);
v___x_409_ = lean_name_eq(v_module_407_, v_hintMod_377_);
if (v___x_409_ == 0)
{
lean_dec_ref(v_range_408_);
v___y_400_ = v_val_406_;
goto v___jp_399_;
}
else
{
lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_427_; 
lean_inc(v_module_407_);
v_isSharedCheck_427_ = !lean_is_exclusive(v_val_406_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; lean_object* v_unused_429_; 
v_unused_428_ = lean_ctor_get(v_val_406_, 1);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_val_406_, 0);
lean_dec(v_unused_429_);
v___x_411_ = v_val_406_;
v_isShared_412_ = v_isSharedCheck_427_;
goto v_resetjp_410_;
}
else
{
lean_dec(v_val_406_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_427_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_start_413_; lean_object* v_stop_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_426_; 
v_start_413_ = lean_ctor_get(v_range_408_, 0);
v_stop_414_ = lean_ctor_get(v_range_408_, 1);
v_isSharedCheck_426_ = !lean_is_exclusive(v_range_408_);
if (v_isSharedCheck_426_ == 0)
{
v___x_416_ = v_range_408_;
v_isShared_417_ = v_isSharedCheck_426_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_stop_414_);
lean_inc(v_start_413_);
lean_dec(v_range_408_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_426_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_421_; 
lean_inc_ref_n(v_range_378_, 2);
v___x_418_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_378_, v_byteOffset_379_, v_start_413_);
v___x_419_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_378_, v_byteOffset_379_, v_stop_414_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v___x_419_);
lean_ctor_set(v___x_416_, 0, v___x_418_);
v___x_421_ = v___x_416_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v___x_419_);
v___x_421_ = v_reuseFailAlloc_425_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_423_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 1, v___x_421_);
v___x_423_ = v___x_411_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_module_407_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
v___y_400_ = v___x_423_;
goto v___jp_399_;
}
}
}
}
}
}
v___jp_393_:
{
size_t v___x_395_; size_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_395_ = ((size_t)1ULL);
v___x_396_ = lean_usize_add(v_i_381_, v___x_395_);
v___x_397_ = lean_array_uset(v_bs_x27_392_, v_i_381_, v___y_394_);
v___x_398_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3_spec__4(v_hintMod_377_, v_range_378_, v_byteOffset_379_, v_sz_380_, v___x_396_, v___x_397_);
return v___x_398_;
}
v___jp_399_:
{
lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_401_, 0, v___y_400_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 2, v___x_401_);
v___x_403_ = v___x_389_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_value_385_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v_tooltip_x3f_386_);
lean_ctor_set(v_reuseFailAlloc_404_, 2, v___x_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
v___y_394_ = v___x_403_;
goto v___jp_393_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3___boxed(lean_object* v_hintMod_431_, lean_object* v_range_432_, lean_object* v_byteOffset_433_, lean_object* v_sz_434_, lean_object* v_i_435_, lean_object* v_bs_436_){
_start:
{
size_t v_sz_boxed_437_; size_t v_i_boxed_438_; lean_object* v_res_439_; 
v_sz_boxed_437_ = lean_unbox_usize(v_sz_434_);
lean_dec(v_sz_434_);
v_i_boxed_438_ = lean_unbox_usize(v_i_435_);
lean_dec(v_i_435_);
v_res_439_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(v_hintMod_431_, v_range_432_, v_byteOffset_433_, v_sz_boxed_437_, v_i_boxed_438_, v_bs_436_);
lean_dec(v_byteOffset_433_);
lean_dec(v_hintMod_431_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(lean_object* v_range_440_, lean_object* v_byteOffset_441_, size_t v_sz_442_, size_t v_i_443_, lean_object* v_bs_444_){
_start:
{
uint8_t v___x_445_; 
v___x_445_ = lean_usize_dec_lt(v_i_443_, v_sz_442_);
if (v___x_445_ == 0)
{
lean_dec_ref(v_range_440_);
return v_bs_444_;
}
else
{
lean_object* v_v_446_; lean_object* v_range_447_; lean_object* v_newText_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_472_; 
v_v_446_ = lean_array_uget(v_bs_444_, v_i_443_);
v_range_447_ = lean_ctor_get(v_v_446_, 0);
v_newText_448_ = lean_ctor_get(v_v_446_, 1);
v_isSharedCheck_472_ = !lean_is_exclusive(v_v_446_);
if (v_isSharedCheck_472_ == 0)
{
v___x_450_ = v_v_446_;
v_isShared_451_ = v_isSharedCheck_472_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_newText_448_);
lean_inc(v_range_447_);
lean_dec(v_v_446_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_472_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v_start_452_; lean_object* v_stop_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_471_; 
v_start_452_ = lean_ctor_get(v_range_447_, 0);
v_stop_453_ = lean_ctor_get(v_range_447_, 1);
v_isSharedCheck_471_ = !lean_is_exclusive(v_range_447_);
if (v_isSharedCheck_471_ == 0)
{
v___x_455_ = v_range_447_;
v_isShared_456_ = v_isSharedCheck_471_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_stop_453_);
lean_inc(v_start_452_);
lean_dec(v_range_447_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_471_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v_bs_x27_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_457_ = lean_unsigned_to_nat(0u);
v_bs_x27_458_ = lean_array_uset(v_bs_444_, v_i_443_, v___x_457_);
lean_inc_ref_n(v_range_440_, 2);
v___x_459_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_440_, v_byteOffset_441_, v_start_452_);
v___x_460_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_440_, v_byteOffset_441_, v_stop_453_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 1, v___x_460_);
lean_ctor_set(v___x_455_, 0, v___x_459_);
v___x_462_ = v___x_455_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_459_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v___x_460_);
v___x_462_ = v_reuseFailAlloc_470_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_464_; 
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 0, v___x_462_);
v___x_464_ = v___x_450_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_462_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_newText_448_);
v___x_464_ = v_reuseFailAlloc_469_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
size_t v___x_465_; size_t v___x_466_; lean_object* v___x_467_; 
v___x_465_ = ((size_t)1ULL);
v___x_466_ = lean_usize_add(v_i_443_, v___x_465_);
v___x_467_ = lean_array_uset(v_bs_x27_458_, v_i_443_, v___x_464_);
v_i_443_ = v___x_466_;
v_bs_444_ = v___x_467_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2___boxed(lean_object* v_range_473_, lean_object* v_byteOffset_474_, lean_object* v_sz_475_, lean_object* v_i_476_, lean_object* v_bs_477_){
_start:
{
size_t v_sz_boxed_478_; size_t v_i_boxed_479_; lean_object* v_res_480_; 
v_sz_boxed_478_ = lean_unbox_usize(v_sz_475_);
lean_dec(v_sz_475_);
v_i_boxed_479_ = lean_unbox_usize(v_i_476_);
lean_dec(v_i_476_);
v_res_480_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(v_range_473_, v_byteOffset_474_, v_sz_boxed_478_, v_i_boxed_479_, v_bs_477_);
lean_dec(v_byteOffset_474_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(lean_object* v_range_481_, lean_object* v_byteOffset_482_, size_t v_sz_483_, size_t v_i_484_, lean_object* v_bs_485_){
_start:
{
uint8_t v___x_486_; 
v___x_486_ = lean_usize_dec_lt(v_i_484_, v_sz_483_);
if (v___x_486_ == 0)
{
lean_dec_ref(v_range_481_);
return v_bs_485_;
}
else
{
lean_object* v_v_487_; lean_object* v_range_488_; lean_object* v_newText_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_513_; 
v_v_487_ = lean_array_uget(v_bs_485_, v_i_484_);
v_range_488_ = lean_ctor_get(v_v_487_, 0);
v_newText_489_ = lean_ctor_get(v_v_487_, 1);
v_isSharedCheck_513_ = !lean_is_exclusive(v_v_487_);
if (v_isSharedCheck_513_ == 0)
{
v___x_491_ = v_v_487_;
v_isShared_492_ = v_isSharedCheck_513_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_newText_489_);
lean_inc(v_range_488_);
lean_dec(v_v_487_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_513_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v_start_493_; lean_object* v_stop_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_512_; 
v_start_493_ = lean_ctor_get(v_range_488_, 0);
v_stop_494_ = lean_ctor_get(v_range_488_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v_range_488_);
if (v_isSharedCheck_512_ == 0)
{
v___x_496_ = v_range_488_;
v_isShared_497_ = v_isSharedCheck_512_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_stop_494_);
lean_inc(v_start_493_);
lean_dec(v_range_488_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_512_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v_bs_x27_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v_bs_x27_499_ = lean_array_uset(v_bs_485_, v_i_484_, v___x_498_);
lean_inc_ref_n(v_range_481_, 2);
v___x_500_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_481_, v_byteOffset_482_, v_start_493_);
v___x_501_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0(v_range_481_, v_byteOffset_482_, v_stop_494_);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 1, v___x_501_);
lean_ctor_set(v___x_496_, 0, v___x_500_);
v___x_503_ = v___x_496_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v___x_501_);
v___x_503_ = v_reuseFailAlloc_511_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_505_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v___x_503_);
v___x_505_ = v___x_491_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_503_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_newText_489_);
v___x_505_ = v_reuseFailAlloc_510_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
size_t v___x_506_; size_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_506_ = ((size_t)1ULL);
v___x_507_ = lean_usize_add(v_i_484_, v___x_506_);
v___x_508_ = lean_array_uset(v_bs_x27_499_, v_i_484_, v___x_505_);
v___x_509_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2_spec__2(v_range_481_, v_byteOffset_482_, v_sz_483_, v___x_507_, v___x_508_);
return v___x_509_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___boxed(lean_object* v_range_514_, lean_object* v_byteOffset_515_, lean_object* v_sz_516_, lean_object* v_i_517_, lean_object* v_bs_518_){
_start:
{
size_t v_sz_boxed_519_; size_t v_i_boxed_520_; lean_object* v_res_521_; 
v_sz_boxed_519_ = lean_unbox_usize(v_sz_516_);
lean_dec(v_sz_516_);
v_i_boxed_520_ = lean_unbox_usize(v_i_517_);
lean_dec(v_i_517_);
v_res_521_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(v_range_514_, v_byteOffset_515_, v_sz_boxed_519_, v_i_boxed_520_, v_bs_518_);
lean_dec(v_byteOffset_515_);
return v_res_521_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(lean_object* v_hintMod_522_, lean_object* v_range_523_, lean_object* v_as_524_, size_t v_i_525_, size_t v_stop_526_){
_start:
{
uint8_t v___x_531_; 
v___x_531_ = lean_usize_dec_eq(v_i_525_, v_stop_526_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; lean_object* v_location_x3f_533_; 
v___x_532_ = lean_array_uget_borrowed(v_as_524_, v_i_525_);
v_location_x3f_533_ = lean_ctor_get(v___x_532_, 2);
if (lean_obj_tag(v_location_x3f_533_) == 0)
{
goto v___jp_527_;
}
else
{
lean_object* v_val_534_; lean_object* v_module_535_; lean_object* v_range_536_; uint8_t v___x_537_; 
v_val_534_ = lean_ctor_get(v_location_x3f_533_, 0);
v_module_535_ = lean_ctor_get(v_val_534_, 0);
v_range_536_ = lean_ctor_get(v_val_534_, 1);
v___x_537_ = lean_name_eq(v_module_535_, v_hintMod_522_);
if (v___x_537_ == 0)
{
goto v___jp_527_;
}
else
{
uint8_t v___x_538_; 
v___x_538_ = l_Lean_Syntax_Range_overlaps(v_range_523_, v_range_536_, v___x_537_, v___x_531_);
if (v___x_538_ == 0)
{
goto v___jp_527_;
}
else
{
return v___x_538_;
}
}
}
}
else
{
uint8_t v___x_539_; 
v___x_539_ = 0;
return v___x_539_;
}
v___jp_527_:
{
size_t v___x_528_; size_t v___x_529_; 
v___x_528_ = ((size_t)1ULL);
v___x_529_ = lean_usize_add(v_i_525_, v___x_528_);
v_i_525_ = v___x_529_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5___boxed(lean_object* v_hintMod_540_, lean_object* v_range_541_, lean_object* v_as_542_, lean_object* v_i_543_, lean_object* v_stop_544_){
_start:
{
size_t v_i_boxed_545_; size_t v_stop_boxed_546_; uint8_t v_res_547_; lean_object* v_r_548_; 
v_i_boxed_545_ = lean_unbox_usize(v_i_543_);
lean_dec(v_i_543_);
v_stop_boxed_546_ = lean_unbox_usize(v_stop_544_);
lean_dec(v_stop_544_);
v_res_547_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(v_hintMod_540_, v_range_541_, v_as_542_, v_i_boxed_545_, v_stop_boxed_546_);
lean_dec_ref(v_as_542_);
lean_dec_ref(v_range_541_);
lean_dec(v_hintMod_540_);
v_r_548_ = lean_box(v_res_547_);
return v_r_548_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(lean_object* v_range_549_, uint8_t v___x_550_, lean_object* v_as_551_, size_t v_i_552_, size_t v_stop_553_){
_start:
{
uint8_t v___x_554_; 
v___x_554_ = lean_usize_dec_eq(v_i_552_, v_stop_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; lean_object* v_range_556_; uint8_t v___x_557_; uint8_t v___x_558_; 
v___x_555_ = lean_array_uget_borrowed(v_as_551_, v_i_552_);
v_range_556_ = lean_ctor_get(v___x_555_, 0);
v___x_557_ = 1;
v___x_558_ = l_Lean_Syntax_Range_overlaps(v_range_549_, v_range_556_, v___x_557_, v___x_550_);
if (v___x_558_ == 0)
{
size_t v___x_559_; size_t v___x_560_; 
v___x_559_ = ((size_t)1ULL);
v___x_560_ = lean_usize_add(v_i_552_, v___x_559_);
v_i_552_ = v___x_560_;
goto _start;
}
else
{
return v___x_558_;
}
}
else
{
uint8_t v___x_562_; 
v___x_562_ = 0;
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4___boxed(lean_object* v_range_563_, lean_object* v___x_564_, lean_object* v_as_565_, lean_object* v_i_566_, lean_object* v_stop_567_){
_start:
{
uint8_t v___x_2692__boxed_568_; size_t v_i_boxed_569_; size_t v_stop_boxed_570_; uint8_t v_res_571_; lean_object* v_r_572_; 
v___x_2692__boxed_568_ = lean_unbox(v___x_564_);
v_i_boxed_569_ = lean_unbox_usize(v_i_566_);
lean_dec(v_i_566_);
v_stop_boxed_570_ = lean_unbox_usize(v_stop_567_);
lean_dec(v_stop_567_);
v_res_571_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(v_range_563_, v___x_2692__boxed_568_, v_as_565_, v_i_boxed_569_, v_stop_boxed_570_);
lean_dec_ref(v_as_565_);
lean_dec_ref(v_range_563_);
v_r_572_ = lean_box(v_res_571_);
return v_r_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f(lean_object* v_hintMod_573_, lean_object* v_ihi_574_, lean_object* v_range_575_, lean_object* v_newText_576_){
_start:
{
lean_object* v_position_577_; lean_object* v_label_578_; lean_object* v_kind_x3f_579_; lean_object* v_textEdits_580_; lean_object* v_tooltip_x3f_581_; uint8_t v_paddingLeft_582_; uint8_t v_paddingRight_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_667_; 
v_position_577_ = lean_ctor_get(v_ihi_574_, 0);
v_label_578_ = lean_ctor_get(v_ihi_574_, 1);
v_kind_x3f_579_ = lean_ctor_get(v_ihi_574_, 2);
v_textEdits_580_ = lean_ctor_get(v_ihi_574_, 3);
v_tooltip_x3f_581_ = lean_ctor_get(v_ihi_574_, 4);
v_paddingLeft_582_ = lean_ctor_get_uint8(v_ihi_574_, sizeof(void*)*5);
v_paddingRight_583_ = lean_ctor_get_uint8(v_ihi_574_, sizeof(void*)*5 + 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v_ihi_574_);
if (v_isSharedCheck_667_ == 0)
{
v___x_585_ = v_ihi_574_;
v_isShared_586_ = v_isSharedCheck_667_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_tooltip_x3f_581_);
lean_inc(v_textEdits_580_);
lean_inc(v_kind_x3f_579_);
lean_inc(v_label_578_);
lean_inc(v_position_577_);
lean_dec(v_ihi_574_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_667_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___y_588_; lean_object* v___y_589_; lean_object* v___y_590_; lean_object* v___y_599_; lean_object* v___y_600_; uint8_t v___y_613_; uint8_t v___y_648_; 
if (lean_obj_tag(v_label_578_) == 0)
{
uint8_t v___x_659_; 
v___x_659_ = 0;
v___y_648_ = v___x_659_;
goto v___jp_647_;
}
else
{
lean_object* v_p_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v_p_660_ = lean_ctor_get(v_label_578_, 0);
v___x_661_ = lean_unsigned_to_nat(0u);
v___x_662_ = lean_array_get_size(v_p_660_);
v___x_663_ = lean_nat_dec_lt(v___x_661_, v___x_662_);
if (v___x_663_ == 0)
{
v___y_648_ = v___x_663_;
goto v___jp_647_;
}
else
{
if (v___x_663_ == 0)
{
v___y_648_ = v___x_663_;
goto v___jp_647_;
}
else
{
size_t v___x_664_; size_t v___x_665_; uint8_t v___x_666_; 
v___x_664_ = ((size_t)0ULL);
v___x_665_ = lean_usize_of_nat(v___x_662_);
v___x_666_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__5(v_hintMod_573_, v_range_575_, v_p_660_, v___x_664_, v___x_665_);
v___y_648_ = v___x_666_;
goto v___jp_647_;
}
}
}
v___jp_587_:
{
size_t v_sz_591_; size_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_595_; 
v_sz_591_ = lean_array_size(v_textEdits_580_);
v___x_592_ = ((size_t)0ULL);
v___x_593_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2(v_range_575_, v___y_588_, v_sz_591_, v___x_592_, v_textEdits_580_);
lean_dec(v___y_588_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 3, v___x_593_);
lean_ctor_set(v___x_585_, 1, v___y_590_);
lean_ctor_set(v___x_585_, 0, v___y_589_);
v___x_595_ = v___x_585_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___y_589_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v___y_590_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v_kind_x3f_579_);
lean_ctor_set(v_reuseFailAlloc_597_, 3, v___x_593_);
lean_ctor_set(v_reuseFailAlloc_597_, 4, v_tooltip_x3f_581_);
lean_ctor_set_uint8(v_reuseFailAlloc_597_, sizeof(void*)*5, v_paddingLeft_582_);
lean_ctor_set_uint8(v_reuseFailAlloc_597_, sizeof(void*)*5 + 1, v_paddingRight_583_);
v___x_595_ = v_reuseFailAlloc_597_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_596_; 
v___x_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
}
v___jp_598_:
{
if (lean_obj_tag(v_label_578_) == 0)
{
v___y_588_ = v___y_599_;
v___y_589_ = v___y_600_;
v___y_590_ = v_label_578_;
goto v___jp_587_;
}
else
{
lean_object* v_p_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_611_; 
v_p_601_ = lean_ctor_get(v_label_578_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v_label_578_);
if (v_isSharedCheck_611_ == 0)
{
v___x_603_ = v_label_578_;
v_isShared_604_ = v_isSharedCheck_611_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_p_601_);
lean_dec(v_label_578_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_611_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
size_t v_sz_605_; size_t v___x_606_; lean_object* v___x_607_; lean_object* v___x_609_; 
v_sz_605_ = lean_array_size(v_p_601_);
v___x_606_ = ((size_t)0ULL);
lean_inc_ref(v_range_575_);
v___x_607_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__3(v_hintMod_573_, v_range_575_, v___y_599_, v_sz_605_, v___x_606_, v_p_601_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_607_);
v___x_609_ = v___x_603_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_607_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
v___y_588_ = v___y_599_;
v___y_589_ = v___y_600_;
v___y_590_ = v___x_609_;
goto v___jp_587_;
}
}
}
}
v___jp_612_:
{
if (v___y_613_ == 0)
{
lean_object* v_start_614_; lean_object* v_stop_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_byteOffset_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v_start_614_ = lean_ctor_get(v_range_575_, 0);
v_stop_615_ = lean_ctor_get(v_range_575_, 1);
v___x_616_ = lean_string_utf8_byte_size(v_newText_576_);
v___x_617_ = lean_nat_to_int(v___x_616_);
v___x_618_ = l_Lean_Syntax_Range_bsize(v_range_575_);
v___x_619_ = lean_nat_to_int(v___x_618_);
v_byteOffset_620_ = lean_int_sub(v___x_617_, v___x_619_);
lean_dec(v___x_619_);
lean_dec(v___x_617_);
v___x_621_ = lean_unsigned_to_nat(1u);
v___x_622_ = lean_nat_add(v_stop_615_, v___x_621_);
v___x_623_ = lean_nat_dec_le(v___x_622_, v_position_577_);
lean_dec(v___x_622_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = lean_nat_add(v_position_577_, v___x_621_);
v___x_625_ = lean_nat_dec_le(v___x_624_, v_start_614_);
lean_dec(v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_626_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0));
v___x_627_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__1));
v___x_628_ = lean_unsigned_to_nat(87u);
v___x_629_ = lean_unsigned_to_nat(6u);
v___x_630_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__2));
v___x_631_ = l_Nat_reprFast(v_position_577_);
v___x_632_ = lean_string_append(v___x_630_, v___x_631_);
lean_dec_ref(v___x_631_);
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__3));
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
lean_inc(v_start_614_);
v___x_635_ = l_Nat_reprFast(v_start_614_);
v___x_636_ = lean_string_append(v___x_634_, v___x_635_);
lean_dec_ref(v___x_635_);
v___x_637_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__4));
v___x_638_ = lean_string_append(v___x_636_, v___x_637_);
lean_inc(v_stop_615_);
v___x_639_ = l_Nat_reprFast(v_stop_615_);
v___x_640_ = lean_string_append(v___x_638_, v___x_639_);
lean_dec_ref(v___x_639_);
v___x_641_ = l_mkPanicMessageWithDecl(v___x_626_, v___x_627_, v___x_628_, v___x_629_, v___x_640_);
lean_dec_ref(v___x_640_);
v___x_642_ = l_panic___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__1(v___x_641_);
v___y_599_ = v_byteOffset_620_;
v___y_600_ = v___x_642_;
goto v___jp_598_;
}
else
{
v___y_599_ = v_byteOffset_620_;
v___y_600_ = v_position_577_;
goto v___jp_598_;
}
}
else
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_643_ = lean_nat_to_int(v_position_577_);
v___x_644_ = lean_int_add(v___x_643_, v_byteOffset_620_);
lean_dec(v___x_643_);
v___x_645_ = l_Int_toNat(v___x_644_);
lean_dec(v___x_644_);
v___y_599_ = v_byteOffset_620_;
v___y_600_ = v___x_645_;
goto v___jp_598_;
}
}
else
{
lean_object* v___x_646_; 
lean_del_object(v___x_585_);
lean_dec(v_tooltip_x3f_581_);
lean_dec_ref(v_textEdits_580_);
lean_dec(v_kind_x3f_579_);
lean_dec_ref(v_label_578_);
lean_dec(v_position_577_);
lean_dec_ref(v_range_575_);
v___x_646_ = lean_box(0);
return v___x_646_;
}
}
v___jp_647_:
{
uint8_t v___x_649_; uint8_t v___x_650_; 
v___x_649_ = 1;
v___x_650_ = l_Lean_Syntax_Range_contains(v_range_575_, v_position_577_, v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_651_ = lean_unsigned_to_nat(0u);
v___x_652_ = lean_array_get_size(v_textEdits_580_);
v___x_653_ = lean_nat_dec_lt(v___x_651_, v___x_652_);
if (v___x_653_ == 0)
{
v___y_613_ = v___y_648_;
goto v___jp_612_;
}
else
{
if (v___x_653_ == 0)
{
v___y_613_ = v___y_648_;
goto v___jp_612_;
}
else
{
size_t v___x_654_; size_t v___x_655_; uint8_t v___x_656_; 
v___x_654_ = ((size_t)0ULL);
v___x_655_ = lean_usize_of_nat(v___x_652_);
v___x_656_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__4(v_range_575_, v___x_650_, v_textEdits_580_, v___x_654_, v___x_655_);
if (v___x_656_ == 0)
{
v___y_613_ = v___y_648_;
goto v___jp_612_;
}
else
{
lean_object* v___x_657_; 
lean_del_object(v___x_585_);
lean_dec(v_tooltip_x3f_581_);
lean_dec_ref(v_textEdits_580_);
lean_dec(v_kind_x3f_579_);
lean_dec_ref(v_label_578_);
lean_dec(v_position_577_);
lean_dec_ref(v_range_575_);
v___x_657_ = lean_box(0);
return v___x_657_;
}
}
}
}
else
{
lean_object* v___x_658_; 
lean_del_object(v___x_585_);
lean_dec(v_tooltip_x3f_581_);
lean_dec_ref(v_textEdits_580_);
lean_dec(v_kind_x3f_579_);
lean_dec_ref(v_label_578_);
lean_dec(v_position_577_);
lean_dec_ref(v_range_575_);
v___x_658_ = lean_box(0);
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_applyEditToHint_x3f___boxed(lean_object* v_hintMod_668_, lean_object* v_ihi_669_, lean_object* v_range_670_, lean_object* v_newText_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_Server_FileWorker_applyEditToHint_x3f(v_hintMod_668_, v_ihi_669_, v_range_670_, v_newText_671_);
lean_dec_ref(v_newText_671_);
lean_dec(v_hintMod_668_);
return v_res_672_;
}
}
static lean_object* _init_l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = l_Lean_Server_instInhabitedRequestError_default;
v___x_702_ = lean_alloc_closure((void*)(l_instInhabitedEIO___aux__1___boxed), 4, 3);
lean_closure_set(v___x_702_, 0, lean_box(0));
lean_closure_set(v___x_702_, 1, lean_box(0));
lean_closure_set(v___x_702_, 2, v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(lean_object* v_msg_703_, lean_object* v___y_704_){
_start:
{
lean_object* v___x_706_; lean_object* v___f_707_; lean_object* v___x_16932__overap_708_; lean_object* v___x_709_; 
v___x_706_ = lean_obj_once(&l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0, &l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0_once, _init_l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___closed__0);
v___f_707_ = lean_alloc_closure((void*)(l_instInhabitedReaderT___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_707_, 0, v___x_706_);
v___x_16932__overap_708_ = lean_panic_fn_borrowed(v___f_707_, v_msg_703_);
lean_dec_ref(v___f_707_);
lean_inc_ref(v___y_704_);
v___x_709_ = lean_apply_2(v___x_16932__overap_708_, v___y_704_, lean_box(0));
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0___boxed(lean_object* v_msg_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(v_msg_710_, v___y_711_);
lean_dec_ref(v___y_711_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(lean_object* v___x_714_, uint8_t v_val_715_, lean_object* v_as_716_, size_t v_i_717_, size_t v_stop_718_, lean_object* v_b_719_){
_start:
{
lean_object* v___y_721_; uint8_t v___x_725_; 
v___x_725_ = lean_usize_dec_eq(v_i_717_, v_stop_718_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; lean_object* v_position_727_; uint8_t v___x_728_; 
v___x_726_ = lean_array_uget_borrowed(v_as_716_, v_i_717_);
v_position_727_ = lean_ctor_get(v___x_726_, 0);
v___x_728_ = l_Lean_Syntax_Range_contains(v___x_714_, v_position_727_, v_val_715_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_inc(v___x_726_);
v___x_729_ = lean_array_push(v_b_719_, v___x_726_);
v___y_721_ = v___x_729_;
goto v___jp_720_;
}
else
{
v___y_721_ = v_b_719_;
goto v___jp_720_;
}
}
else
{
return v_b_719_;
}
v___jp_720_:
{
size_t v___x_722_; size_t v___x_723_; 
v___x_722_ = ((size_t)1ULL);
v___x_723_ = lean_usize_add(v_i_717_, v___x_722_);
v_i_717_ = v___x_723_;
v_b_719_ = v___y_721_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5___boxed(lean_object* v___x_730_, lean_object* v_val_731_, lean_object* v_as_732_, lean_object* v_i_733_, lean_object* v_stop_734_, lean_object* v_b_735_){
_start:
{
uint8_t v_val_19884__boxed_736_; size_t v_i_boxed_737_; size_t v_stop_boxed_738_; lean_object* v_res_739_; 
v_val_19884__boxed_736_ = lean_unbox(v_val_731_);
v_i_boxed_737_ = lean_unbox_usize(v_i_733_);
lean_dec(v_i_733_);
v_stop_boxed_738_ = lean_unbox_usize(v_stop_734_);
lean_dec(v_stop_734_);
v_res_739_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(v___x_730_, v_val_19884__boxed_736_, v_as_732_, v_i_boxed_737_, v_stop_boxed_738_, v_b_735_);
lean_dec_ref(v_as_732_);
lean_dec_ref(v___x_730_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__4(lean_object* v___x_740_, lean_object* v___x_741_, lean_object* v___x_742_, lean_object* v_as_743_, size_t v_i_744_, size_t v_stop_745_, lean_object* v_b_746_){
_start:
{
lean_object* v___y_748_; uint8_t v___x_752_; 
v___x_752_ = lean_usize_dec_eq(v_i_744_, v_stop_745_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; lean_object* v_position_754_; uint8_t v___x_755_; uint8_t v___x_756_; 
v___x_753_ = lean_array_uget_borrowed(v_as_743_, v_i_744_);
v_position_754_ = lean_ctor_get(v___x_753_, 0);
v___x_755_ = lean_nat_dec_le(v___x_741_, v___x_742_);
v___x_756_ = l_Lean_Syntax_Range_contains(v___x_740_, v_position_754_, v___x_755_);
if (v___x_756_ == 0)
{
v___y_748_ = v_b_746_;
goto v___jp_747_;
}
else
{
lean_object* v___x_757_; 
lean_inc(v___x_753_);
v___x_757_ = lean_array_push(v_b_746_, v___x_753_);
v___y_748_ = v___x_757_;
goto v___jp_747_;
}
}
else
{
return v_b_746_;
}
v___jp_747_:
{
size_t v___x_749_; size_t v___x_750_; 
v___x_749_ = ((size_t)1ULL);
v___x_750_ = lean_usize_add(v_i_744_, v___x_749_);
v_i_744_ = v___x_750_;
v_b_746_ = v___y_748_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__4___boxed(lean_object* v___x_758_, lean_object* v___x_759_, lean_object* v___x_760_, lean_object* v_as_761_, lean_object* v_i_762_, lean_object* v_stop_763_, lean_object* v_b_764_){
_start:
{
size_t v_i_boxed_765_; size_t v_stop_boxed_766_; lean_object* v_res_767_; 
v_i_boxed_765_ = lean_unbox_usize(v_i_762_);
lean_dec(v_i_762_);
v_stop_boxed_766_ = lean_unbox_usize(v_stop_763_);
lean_dec(v_stop_763_);
v_res_767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__4(v___x_758_, v___x_759_, v___x_760_, v_as_761_, v_i_boxed_765_, v_stop_boxed_766_, v_b_764_);
lean_dec_ref(v_as_761_);
lean_dec(v___x_760_);
lean_dec(v___x_759_);
lean_dec_ref(v___x_758_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg(lean_object* v___x_768_, size_t v_sz_769_, size_t v_i_770_, lean_object* v_bs_771_){
_start:
{
uint8_t v___x_773_; 
v___x_773_ = lean_usize_dec_lt(v_i_770_, v_sz_769_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; 
lean_dec_ref(v___x_768_);
v___x_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_774_, 0, v_bs_771_);
return v___x_774_;
}
else
{
lean_object* v_v_775_; lean_object* v___x_776_; lean_object* v_bs_x27_777_; lean_object* v___x_778_; 
v_v_775_ = lean_array_uget(v_bs_771_, v_i_770_);
v___x_776_ = lean_unsigned_to_nat(0u);
v_bs_x27_777_ = lean_array_uset(v_bs_771_, v_i_770_, v___x_776_);
lean_inc_ref(v___x_768_);
v___x_778_ = l_Lean_Elab_InlayHintInfo_toLspInlayHint(v___x_768_, v_v_775_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; size_t v___x_780_; size_t v___x_781_; lean_object* v___x_782_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
v___x_780_ = ((size_t)1ULL);
v___x_781_ = lean_usize_add(v_i_770_, v___x_780_);
v___x_782_ = lean_array_uset(v_bs_x27_777_, v_i_770_, v_a_779_);
v_i_770_ = v___x_781_;
v_bs_771_ = v___x_782_;
goto _start;
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_792_; 
lean_dec_ref(v_bs_x27_777_);
lean_dec_ref(v___x_768_);
v_a_784_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_792_ == 0)
{
v___x_786_ = v___x_778_;
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_778_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = l_Lean_Server_RequestError_ofIoError(v_a_784_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_788_);
v___x_790_ = v___x_786_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg___boxed(lean_object* v___x_793_, lean_object* v_sz_794_, lean_object* v_i_795_, lean_object* v_bs_796_, lean_object* v___y_797_){
_start:
{
size_t v_sz_boxed_798_; size_t v_i_boxed_799_; lean_object* v_res_800_; 
v_sz_boxed_798_ = lean_unbox_usize(v_sz_794_);
lean_dec(v_sz_794_);
v_i_boxed_799_ = lean_unbox_usize(v_i_795_);
lean_dec(v_i_795_);
v_res_800_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg(v___x_793_, v_sz_boxed_798_, v_i_boxed_799_, v_bs_796_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___lam__0(lean_object* v_postNode_801_, lean_object* v_ci_802_, lean_object* v_i_803_, lean_object* v_cs_804_, lean_object* v_x_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; 
lean_inc_ref(v___y_807_);
v___x_809_ = lean_apply_6(v_postNode_801_, v_ci_802_, v_i_803_, v_cs_804_, v___y_806_, v___y_807_, lean_box(0));
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___lam__0___boxed(lean_object* v_postNode_810_, lean_object* v_ci_811_, lean_object* v_i_812_, lean_object* v_cs_813_, lean_object* v_x_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___lam__0(v_postNode_810_, v_ci_811_, v_i_812_, v_cs_813_, v_x_814_, v___y_815_, v___y_816_);
lean_dec_ref(v___y_816_);
lean_dec(v_x_814_);
return v_res_818_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_819_; 
v___x_819_ = l_instMonadEIO___redArg();
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg(lean_object* v_msg_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___f_826_; lean_object* v___f_827_; lean_object* v___f_828_; lean_object* v___f_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_19309__overap_838_; lean_object* v___x_839_; 
v___x_824_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___closed__0, &l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_825_ = l_ReaderT_instMonad___redArg(v___x_824_);
lean_inc_ref_n(v___x_825_, 6);
v___f_826_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_826_, 0, v___x_825_);
v___f_827_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_827_, 0, v___x_825_);
v___f_828_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_828_, 0, v___x_825_);
v___f_829_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_829_, 0, v___x_825_);
v___x_830_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_830_, 0, lean_box(0));
lean_closure_set(v___x_830_, 1, lean_box(0));
lean_closure_set(v___x_830_, 2, v___x_825_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v___f_826_);
v___x_832_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_832_, 0, lean_box(0));
lean_closure_set(v___x_832_, 1, lean_box(0));
lean_closure_set(v___x_832_, 2, v___x_825_);
v___x_833_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_833_, 0, v___x_831_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
lean_ctor_set(v___x_833_, 2, v___f_827_);
lean_ctor_set(v___x_833_, 3, v___f_828_);
lean_ctor_set(v___x_833_, 4, v___f_829_);
v___x_834_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_834_, 0, lean_box(0));
lean_closure_set(v___x_834_, 1, lean_box(0));
lean_closure_set(v___x_834_, 2, v___x_825_);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = lean_box(0);
v___x_837_ = l_instInhabitedOfMonad___redArg(v___x_835_, v___x_836_);
v___x_19309__overap_838_ = lean_panic_fn_borrowed(v___x_837_, v_msg_820_);
lean_dec(v___x_837_);
lean_inc_ref(v___y_822_);
v___x_839_ = lean_apply_3(v___x_19309__overap_838_, v___y_821_, v___y_822_, lean_box(0));
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_msg_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg(v_msg_840_, v___y_841_, v___y_842_);
lean_dec_ref(v___y_842_);
return v_res_844_;
}
}
static lean_object* _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_848_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__2));
v___x_849_ = lean_unsigned_to_nat(21u);
v___x_850_ = lean_unsigned_to_nat(65u);
v___x_851_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__1));
v___x_852_ = ((lean_object*)(l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__0));
v___x_853_ = l_mkPanicMessageWithDecl(v___x_852_, v___x_851_, v___x_850_, v___x_849_, v___x_848_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg(lean_object* v_preNode_854_, lean_object* v_postNode_855_, lean_object* v_x_856_, lean_object* v_x_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
switch(lean_obj_tag(v_x_857_))
{
case 0:
{
lean_object* v_i_861_; lean_object* v_t_862_; lean_object* v___x_863_; 
v_i_861_ = lean_ctor_get(v_x_857_, 0);
lean_inc_ref(v_i_861_);
v_t_862_ = lean_ctor_get(v_x_857_, 1);
lean_inc_ref(v_t_862_);
lean_dec_ref_known(v_x_857_, 2);
v___x_863_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_861_, v_x_856_);
v_x_856_ = v___x_863_;
v_x_857_ = v_t_862_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_856_) == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec_ref_known(v_x_857_, 2);
lean_dec_ref(v_postNode_855_);
lean_dec_ref(v_preNode_854_);
v___x_865_ = lean_obj_once(&l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__3, &l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__3_once, _init_l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___closed__3);
v___x_866_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg(v___x_865_, v___y_858_, v___y_859_);
return v___x_866_;
}
else
{
lean_object* v_i_867_; lean_object* v_children_868_; lean_object* v_val_869_; lean_object* v___x_870_; 
v_i_867_ = lean_ctor_get(v_x_857_, 0);
lean_inc_ref_n(v_i_867_, 2);
v_children_868_ = lean_ctor_get(v_x_857_, 1);
lean_inc_ref_n(v_children_868_, 2);
lean_dec_ref_known(v_x_857_, 2);
v_val_869_ = lean_ctor_get(v_x_856_, 0);
lean_inc_n(v_val_869_, 2);
lean_inc_ref(v_preNode_854_);
lean_inc_ref(v___y_859_);
v___x_870_ = lean_apply_6(v_preNode_854_, v_val_869_, v_i_867_, v_children_868_, v___y_858_, v___y_859_, lean_box(0));
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v_fst_872_; uint8_t v___x_873_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v_fst_872_ = lean_ctor_get(v_a_871_, 0);
v___x_873_ = lean_unbox(v_fst_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_908_; 
lean_dec_ref(v_preNode_854_);
v_isSharedCheck_908_ = !lean_is_exclusive(v_x_856_);
if (v_isSharedCheck_908_ == 0)
{
lean_object* v_unused_909_; 
v_unused_909_ = lean_ctor_get(v_x_856_, 0);
lean_dec(v_unused_909_);
v___x_875_ = v_x_856_;
v_isShared_876_ = v_isSharedCheck_908_;
goto v_resetjp_874_;
}
else
{
lean_dec(v_x_856_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_908_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v_snd_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_snd_877_ = lean_ctor_get(v_a_871_, 1);
lean_inc(v_snd_877_);
lean_dec(v_a_871_);
v___x_878_ = lean_box(0);
lean_inc_ref(v___y_859_);
v___x_879_ = lean_apply_7(v_postNode_855_, v_val_869_, v_i_867_, v_children_868_, v___x_878_, v_snd_877_, v___y_859_, lean_box(0));
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_899_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_899_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_899_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_899_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v_fst_884_; lean_object* v_snd_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_898_; 
v_fst_884_ = lean_ctor_get(v_a_880_, 0);
v_snd_885_ = lean_ctor_get(v_a_880_, 1);
v_isSharedCheck_898_ = !lean_is_exclusive(v_a_880_);
if (v_isSharedCheck_898_ == 0)
{
v___x_887_ = v_a_880_;
v_isShared_888_ = v_isSharedCheck_898_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_snd_885_);
lean_inc(v_fst_884_);
lean_dec(v_a_880_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_898_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v_fst_884_);
v___x_890_ = v___x_875_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_fst_884_);
v___x_890_ = v_reuseFailAlloc_897_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
lean_object* v___x_892_; 
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_890_);
v___x_892_ = v___x_887_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_896_, 1, v_snd_885_);
v___x_892_ = v_reuseFailAlloc_896_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
lean_object* v___x_894_; 
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_892_);
v___x_894_ = v___x_882_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
}
else
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
lean_del_object(v___x_875_);
v_a_900_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___x_879_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_879_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
else
{
lean_object* v_snd_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v_snd_910_ = lean_ctor_get(v_a_871_, 1);
lean_inc(v_snd_910_);
lean_dec(v_a_871_);
v___x_911_ = l_Lean_Elab_Info_updateContext_x3f(v_x_856_, v_i_867_);
v___x_912_ = l_Lean_PersistentArray_toList___redArg(v_children_868_);
v___x_913_ = lean_box(0);
lean_inc_ref(v_postNode_855_);
v___x_914_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___redArg(v_preNode_854_, v_postNode_855_, v___x_911_, v___x_912_, v___x_913_, v_snd_910_, v___y_859_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v_fst_916_; lean_object* v_snd_917_; lean_object* v___x_918_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v_fst_916_ = lean_ctor_get(v_a_915_, 0);
lean_inc(v_fst_916_);
v_snd_917_ = lean_ctor_get(v_a_915_, 1);
lean_inc(v_snd_917_);
lean_dec(v_a_915_);
lean_inc_ref(v___y_859_);
v___x_918_ = lean_apply_7(v_postNode_855_, v_val_869_, v_i_867_, v_children_868_, v_fst_916_, v_snd_917_, v___y_859_, lean_box(0));
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_936_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_936_ == 0)
{
v___x_921_ = v___x_918_;
v_isShared_922_ = v_isSharedCheck_936_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_918_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_936_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v_fst_923_; lean_object* v_snd_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_935_; 
v_fst_923_ = lean_ctor_get(v_a_919_, 0);
v_snd_924_ = lean_ctor_get(v_a_919_, 1);
v_isSharedCheck_935_ = !lean_is_exclusive(v_a_919_);
if (v_isSharedCheck_935_ == 0)
{
v___x_926_ = v_a_919_;
v_isShared_927_ = v_isSharedCheck_935_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_snd_924_);
lean_inc(v_fst_923_);
lean_dec(v_a_919_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_935_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; lean_object* v___x_930_; 
v___x_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_928_, 0, v_fst_923_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v___x_928_);
v___x_930_ = v___x_926_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_928_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_snd_924_);
v___x_930_ = v_reuseFailAlloc_934_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_932_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 0, v___x_930_);
v___x_932_ = v___x_921_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
v_a_937_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_918_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_918_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v_val_869_);
lean_dec_ref(v_children_868_);
lean_dec_ref(v_i_867_);
lean_dec_ref(v_postNode_855_);
v_a_945_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_914_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_914_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec(v_val_869_);
lean_dec_ref(v_children_868_);
lean_dec_ref_known(v_x_856_, 1);
lean_dec_ref(v_i_867_);
lean_dec_ref(v_postNode_855_);
lean_dec_ref(v_preNode_854_);
v_a_953_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_870_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_870_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
}
default: 
{
lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_969_; 
lean_dec(v_x_856_);
lean_dec_ref(v_postNode_855_);
lean_dec_ref(v_preNode_854_);
v_isSharedCheck_969_ = !lean_is_exclusive(v_x_857_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; 
v_unused_970_ = lean_ctor_get(v_x_857_, 0);
lean_dec(v_unused_970_);
v___x_962_ = v_x_857_;
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
else
{
lean_dec(v_x_857_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_964_ = lean_box(0);
v___x_965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
lean_ctor_set(v___x_965_, 1, v___y_858_);
if (v_isShared_963_ == 0)
{
lean_ctor_set_tag(v___x_962_, 0);
lean_ctor_set(v___x_962_, 0, v___x_965_);
v___x_967_ = v___x_962_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___redArg(lean_object* v_preNode_971_, lean_object* v_postNode_972_, lean_object* v___x_973_, lean_object* v_x_974_, lean_object* v_x_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
if (lean_obj_tag(v_x_974_) == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec(v___x_973_);
lean_dec_ref(v_postNode_972_);
lean_dec_ref(v_preNode_971_);
v___x_979_ = l_List_reverse___redArg(v_x_975_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
lean_ctor_set(v___x_980_, 1, v___y_976_);
v___x_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
else
{
lean_object* v_head_982_; lean_object* v_tail_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_1003_; 
v_head_982_ = lean_ctor_get(v_x_974_, 0);
v_tail_983_ = lean_ctor_get(v_x_974_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_x_974_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_985_ = v_x_974_;
v_isShared_986_ = v_isSharedCheck_1003_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_tail_983_);
lean_inc(v_head_982_);
lean_dec(v_x_974_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_1003_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_987_; 
lean_inc(v___x_973_);
lean_inc_ref(v_postNode_972_);
lean_inc_ref(v_preNode_971_);
v___x_987_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg(v_preNode_971_, v_postNode_972_, v___x_973_, v_head_982_, v___y_976_, v___y_977_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v_fst_989_; lean_object* v_snd_990_; lean_object* v___x_992_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
v_fst_989_ = lean_ctor_get(v_a_988_, 0);
lean_inc(v_fst_989_);
v_snd_990_ = lean_ctor_get(v_a_988_, 1);
lean_inc(v_snd_990_);
lean_dec(v_a_988_);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 1, v_x_975_);
lean_ctor_set(v___x_985_, 0, v_fst_989_);
v___x_992_ = v___x_985_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_fst_989_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_x_975_);
v___x_992_ = v_reuseFailAlloc_994_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
v_x_974_ = v_tail_983_;
v_x_975_ = v___x_992_;
v___y_976_ = v_snd_990_;
goto _start;
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_del_object(v___x_985_);
lean_dec(v_tail_983_);
lean_dec(v_x_975_);
lean_dec(v___x_973_);
lean_dec_ref(v_postNode_972_);
lean_dec_ref(v_preNode_971_);
v_a_995_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_987_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_987_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_preNode_1004_, lean_object* v_postNode_1005_, lean_object* v___x_1006_, lean_object* v_x_1007_, lean_object* v_x_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___redArg(v_preNode_1004_, v_postNode_1005_, v___x_1006_, v_x_1007_, v_x_1008_, v___y_1009_, v___y_1010_);
lean_dec_ref(v___y_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg___boxed(lean_object* v_preNode_1013_, lean_object* v_postNode_1014_, lean_object* v_x_1015_, lean_object* v_x_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg(v_preNode_1013_, v_postNode_1014_, v_x_1015_, v_x_1016_, v___y_1017_, v___y_1018_);
lean_dec_ref(v___y_1018_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1(lean_object* v_preNode_1021_, lean_object* v_postNode_1022_, lean_object* v_ctx_x3f_1023_, lean_object* v_t_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v___f_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___f_1028_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1028_, 0, v_postNode_1022_);
v___x_1029_ = lean_box(0);
v___x_1030_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg(v_preNode_1021_, v___f_1028_, v_ctx_x3f_1023_, v_t_1024_, v___y_1025_, v___y_1026_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1047_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1047_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1047_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v_snd_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1045_; 
v_snd_1035_ = lean_ctor_get(v_a_1031_, 1);
v_isSharedCheck_1045_ = !lean_is_exclusive(v_a_1031_);
if (v_isSharedCheck_1045_ == 0)
{
lean_object* v_unused_1046_; 
v_unused_1046_ = lean_ctor_get(v_a_1031_, 0);
lean_dec(v_unused_1046_);
v___x_1037_ = v_a_1031_;
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_snd_1035_);
lean_dec(v_a_1031_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1029_);
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1029_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_snd_1035_);
v___x_1040_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1042_; 
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1040_);
v___x_1042_ = v___x_1033_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
v_a_1048_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_1030_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1030_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1___boxed(lean_object* v_preNode_1056_, lean_object* v_postNode_1057_, lean_object* v_ctx_x3f_1058_, lean_object* v_t_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1(v_preNode_1056_, v_postNode_1057_, v_ctx_x3f_1058_, v_t_1059_, v___y_1060_, v___y_1061_);
lean_dec_ref(v___y_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__1(uint8_t v___x_1064_, lean_object* v_x_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1071_ = lean_box(v___x_1064_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
lean_ctor_set(v___x_1072_, 1, v___y_1068_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__1___boxed(lean_object* v___x_1074_, lean_object* v_x_1075_, lean_object* v_x_1076_, lean_object* v_x_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
uint8_t v___x_20431__boxed_1081_; lean_object* v_res_1082_; 
v___x_20431__boxed_1081_ = lean_unbox(v___x_1074_);
v_res_1082_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__1(v___x_20431__boxed_1081_, v_x_1075_, v_x_1076_, v_x_1077_, v___y_1078_, v___y_1079_);
lean_dec_ref(v___y_1079_);
lean_dec_ref(v_x_1077_);
lean_dec_ref(v_x_1076_);
lean_dec_ref(v_x_1075_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__0(lean_object* v_ci_1083_, lean_object* v_i_1084_, lean_object* v_x_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
if (lean_obj_tag(v_i_1084_) == 10)
{
lean_object* v_i_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1124_; 
v_i_1089_ = lean_ctor_get(v_i_1084_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_i_1084_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1091_ = v_i_1084_;
v_isShared_1092_ = v_isSharedCheck_1124_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_i_1089_);
lean_dec(v_i_1084_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1124_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1093_; 
v___x_1093_ = l_Lean_Elab_InlayHint_ofCustomInfo_x3f(v_i_1089_);
lean_dec_ref(v_i_1089_);
if (lean_obj_tag(v___x_1093_) == 1)
{
lean_object* v_val_1094_; lean_object* v_lctx_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_del_object(v___x_1091_);
v_val_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_val_1094_);
lean_dec_ref_known(v___x_1093_, 1);
v_lctx_1095_ = lean_ctor_get(v_val_1094_, 1);
lean_inc_ref(v_lctx_1095_);
v___x_1096_ = lean_alloc_closure((void*)(l_Lean_Elab_InlayHint_resolveDeferred___boxed), 6, 1);
lean_closure_set(v___x_1096_, 0, v_val_1094_);
v___x_1097_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ci_1083_, v_lctx_1095_, v___x_1096_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1109_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1100_ = v___x_1097_;
v_isShared_1101_ = v_isSharedCheck_1109_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1097_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1109_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v_toInlayHintInfo_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v_toInlayHintInfo_1102_ = lean_ctor_get(v_a_1098_, 0);
lean_inc_ref(v_toInlayHintInfo_1102_);
lean_dec(v_a_1098_);
v___x_1103_ = lean_box(0);
v___x_1104_ = lean_array_push(v___y_1086_, v_toInlayHintInfo_1102_);
v___x_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1103_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v___x_1105_);
v___x_1107_ = v___x_1100_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1118_; 
lean_dec_ref(v___y_1086_);
v_a_1110_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1112_ = v___x_1097_;
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1097_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1114_ = l_Lean_Server_RequestError_ofIoError(v_a_1110_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 0, v___x_1114_);
v___x_1116_ = v___x_1112_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
lean_dec(v___x_1093_);
lean_dec_ref(v_ci_1083_);
v___x_1119_ = lean_box(0);
v___x_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v___y_1086_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set_tag(v___x_1091_, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1120_);
v___x_1122_ = v___x_1091_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1120_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
lean_dec_ref(v_i_1084_);
lean_dec_ref(v_ci_1083_);
v___x_1125_ = lean_box(0);
v___x_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v___y_1086_);
v___x_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
return v___x_1127_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__0___boxed(lean_object* v_ci_1128_, lean_object* v_i_1129_, lean_object* v_x_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__0(v_ci_1128_, v_i_1129_, v_x_1130_, v___y_1131_, v___y_1132_);
lean_dec_ref(v___y_1132_);
lean_dec_ref(v_x_1130_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg(lean_object* v___x_1136_, lean_object* v___x_1137_, lean_object* v_a_1138_, lean_object* v_b_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_array_1143_; lean_object* v_start_1144_; lean_object* v_stop_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1169_; 
v_array_1143_ = lean_ctor_get(v_a_1138_, 0);
v_start_1144_ = lean_ctor_get(v_a_1138_, 1);
v_stop_1145_ = lean_ctor_get(v_a_1138_, 2);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_a_1138_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1147_ = v_a_1138_;
v_isShared_1148_ = v_isSharedCheck_1169_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_stop_1145_);
lean_inc(v_start_1144_);
lean_inc(v_array_1143_);
lean_dec(v_a_1138_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1169_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
uint8_t v___x_1149_; 
v___x_1149_ = lean_nat_dec_lt(v_start_1144_, v_stop_1145_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_del_object(v___x_1147_);
lean_dec(v_stop_1145_);
lean_dec(v_start_1144_);
lean_dec_ref(v_array_1143_);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v_b_1139_);
lean_ctor_set(v___x_1150_, 1, v___y_1140_);
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
else
{
lean_object* v___f_1152_; uint8_t v___x_1153_; lean_object* v___x_1154_; lean_object* v___f_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___f_1152_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___closed__0));
v___x_1153_ = lean_nat_dec_le(v___x_1136_, v___x_1137_);
v___x_1154_ = lean_box(v___x_1153_);
v___f_1155_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___lam__1___boxed), 7, 1);
lean_closure_set(v___f_1155_, 0, v___x_1154_);
v___x_1156_ = lean_box(0);
v___x_1157_ = lean_unsigned_to_nat(1u);
v___x_1158_ = lean_nat_add(v_start_1144_, v___x_1157_);
lean_inc_ref(v_array_1143_);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 1, v___x_1158_);
v___x_1160_ = v___x_1147_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_array_1143_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v___x_1158_);
lean_ctor_set(v_reuseFailAlloc_1168_, 2, v_stop_1145_);
v___x_1160_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1161_ = lean_array_fget(v_array_1143_, v_start_1144_);
lean_dec(v_start_1144_);
lean_dec_ref(v_array_1143_);
v___x_1162_ = lean_box(0);
v___x_1163_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v___x_1161_);
v___x_1164_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1(v___f_1155_, v___f_1152_, v___x_1162_, v___x_1163_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; lean_object* v_snd_1166_; 
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_a_1165_);
lean_dec_ref_known(v___x_1164_, 1);
v_snd_1166_ = lean_ctor_get(v_a_1165_, 1);
lean_inc(v_snd_1166_);
lean_dec(v_a_1165_);
v_a_1138_ = v___x_1160_;
v_b_1139_ = v___x_1156_;
v___y_1140_ = v_snd_1166_;
goto _start;
}
else
{
lean_dec_ref(v___x_1160_);
return v___x_1164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg___boxed(lean_object* v___x_1170_, lean_object* v___x_1171_, lean_object* v_a_1172_, lean_object* v_b_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg(v___x_1170_, v___x_1171_, v_a_1172_, v_b_1173_, v___y_1174_, v___y_1175_);
lean_dec_ref(v___y_1175_);
lean_dec(v___x_1171_);
lean_dec(v___x_1170_);
return v_res_1177_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_handleInlayHints___closed__2(void){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1180_ = ((lean_object*)(l_Lean_Server_FileWorker_handleInlayHints___closed__1));
v___x_1181_ = lean_unsigned_to_nat(2u);
v___x_1182_ = lean_unsigned_to_nat(162u);
v___x_1183_ = ((lean_object*)(l_Lean_Server_FileWorker_handleInlayHints___closed__0));
v___x_1184_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_applyEditToHint_x3f_spec__2___lam__0___closed__0));
v___x_1185_ = l_mkPanicMessageWithDecl(v___x_1184_, v___x_1183_, v___x_1182_, v___x_1181_, v___x_1180_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints(lean_object* v_p_1186_, lean_object* v_s_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v_doc_1190_; lean_object* v_toEditableDocumentCore_1191_; lean_object* v_meta_1192_; lean_object* v_cancelTk_1193_; lean_object* v_cmdSnaps_1194_; lean_object* v_text_1195_; lean_object* v_oldInlayHints_1196_; lean_object* v_oldFinishedSnaps_1197_; lean_object* v_lastEditTimestamp_x3f_1198_; uint8_t v_isFirstRequestAfterEdit_1199_; lean_object* v___y_1201_; uint8_t v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; 
v_doc_1190_ = lean_ctor_get(v_a_1188_, 1);
v_toEditableDocumentCore_1191_ = lean_ctor_get(v_doc_1190_, 0);
v_meta_1192_ = lean_ctor_get(v_toEditableDocumentCore_1191_, 0);
v_cancelTk_1193_ = lean_ctor_get(v_a_1188_, 4);
v_cmdSnaps_1194_ = lean_ctor_get(v_toEditableDocumentCore_1191_, 2);
v_text_1195_ = lean_ctor_get(v_meta_1192_, 3);
v_oldInlayHints_1196_ = lean_ctor_get(v_s_1187_, 0);
v_oldFinishedSnaps_1197_ = lean_ctor_get(v_s_1187_, 1);
v_lastEditTimestamp_x3f_1198_ = lean_ctor_get(v_s_1187_, 2);
v_isFirstRequestAfterEdit_1199_ = lean_ctor_get_uint8(v_s_1187_, sizeof(void*)*3);
if (v_isFirstRequestAfterEdit_1199_ == 0)
{
lean_object* v_range_1227_; lean_object* v___x_1228_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; uint8_t v___y_1233_; lean_object* v___y_1234_; lean_object* v_lower_1235_; lean_object* v_upper_1236_; lean_object* v___y_1258_; lean_object* v___y_1259_; uint8_t v___y_1260_; lean_object* v___y_1261_; lean_object* v___y_1262_; uint8_t v___y_1265_; lean_object* v___y_1266_; uint8_t v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; uint8_t v___y_1280_; lean_object* v___y_1281_; uint8_t v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___y_1294_; 
v_range_1227_ = lean_ctor_get(v_p_1186_, 2);
lean_inc_ref(v_range_1227_);
lean_dec_ref(v_p_1186_);
v___x_1228_ = l_Lean_FileMap_lspRangeToUtf8Range(v_text_1195_, v_range_1227_);
v___x_1291_ = lean_unsigned_to_nat(3000u);
v___x_1292_ = lean_io_mono_ms_now();
if (lean_obj_tag(v_lastEditTimestamp_x3f_1198_) == 0)
{
lean_object* v___x_1343_; 
lean_dec(v___x_1292_);
v___x_1343_ = lean_unsigned_to_nat(0u);
v___y_1294_ = v___x_1343_;
goto v___jp_1293_;
}
else
{
lean_object* v_val_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v_val_1344_ = lean_ctor_get(v_lastEditTimestamp_x3f_1198_, 0);
v___x_1345_ = lean_nat_sub(v___x_1292_, v_val_1344_);
lean_dec(v___x_1292_);
v___x_1346_ = lean_nat_sub(v___x_1291_, v___x_1345_);
lean_dec(v___x_1345_);
v___y_1294_ = v___x_1346_;
goto v___jp_1293_;
}
v___jp_1229_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1237_ = l_Array_toSubarray___redArg(v___y_1234_, v_lower_1235_, v_upper_1236_);
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_mk_empty_array_with_capacity(v___y_1230_);
lean_inc_ref(v___x_1239_);
v___x_1240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg(v_oldFinishedSnaps_1197_, v___y_1231_, v___x_1237_, v___x_1238_, v___x_1239_, v_a_1188_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; lean_object* v_snd_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1240_, 1);
v_snd_1242_ = lean_ctor_get(v_a_1241_, 1);
lean_inc(v_snd_1242_);
lean_dec(v_a_1241_);
v___x_1243_ = l_Array_append___redArg(v_snd_1242_, v___y_1232_);
lean_dec_ref(v___y_1232_);
v___x_1244_ = lean_array_get_size(v___x_1243_);
v___x_1245_ = lean_nat_dec_lt(v___y_1230_, v___x_1244_);
lean_dec(v___y_1230_);
if (v___x_1245_ == 0)
{
lean_dec_ref(v___x_1228_);
lean_dec(v_oldFinishedSnaps_1197_);
v___y_1201_ = v___y_1231_;
v___y_1202_ = v___y_1233_;
v___y_1203_ = v___x_1243_;
v___y_1204_ = v___x_1239_;
goto v___jp_1200_;
}
else
{
size_t v___x_1246_; size_t v___x_1247_; lean_object* v___x_1248_; 
v___x_1246_ = ((size_t)0ULL);
v___x_1247_ = lean_usize_of_nat(v___x_1244_);
v___x_1248_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__4(v___x_1228_, v_oldFinishedSnaps_1197_, v___y_1231_, v___x_1243_, v___x_1246_, v___x_1247_, v___x_1239_);
lean_dec(v_oldFinishedSnaps_1197_);
lean_dec_ref(v___x_1228_);
v___y_1201_ = v___y_1231_;
v___y_1202_ = v___y_1233_;
v___y_1203_ = v___x_1243_;
v___y_1204_ = v___x_1248_;
goto v___jp_1200_;
}
}
else
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
lean_dec_ref(v___x_1239_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___x_1228_);
lean_dec(v_lastEditTimestamp_x3f_1198_);
lean_dec(v_oldFinishedSnaps_1197_);
v_a_1249_ = lean_ctor_get(v___x_1240_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1251_ = v___x_1240_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1240_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1249_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
v___jp_1257_:
{
uint8_t v___x_1263_; 
v___x_1263_ = lean_nat_dec_le(v_oldFinishedSnaps_1197_, v___y_1258_);
if (v___x_1263_ == 0)
{
lean_inc(v_oldFinishedSnaps_1197_);
lean_inc(v___y_1259_);
v___y_1230_ = v___y_1258_;
v___y_1231_ = v___y_1259_;
v___y_1232_ = v___y_1262_;
v___y_1233_ = v___y_1260_;
v___y_1234_ = v___y_1261_;
v_lower_1235_ = v_oldFinishedSnaps_1197_;
v_upper_1236_ = v___y_1259_;
goto v___jp_1229_;
}
else
{
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
v___y_1230_ = v___y_1258_;
v___y_1231_ = v___y_1259_;
v___y_1232_ = v___y_1262_;
v___y_1233_ = v___y_1260_;
v___y_1234_ = v___y_1261_;
v_lower_1235_ = v___y_1258_;
v_upper_1236_ = v___y_1259_;
goto v___jp_1229_;
}
}
v___jp_1264_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v___x_1271_ = lean_unsigned_to_nat(0u);
v___x_1272_ = lean_array_get_size(v_oldInlayHints_1196_);
v___x_1273_ = ((lean_object*)(l_Lean_Server_FileWorker_InlayHintState_init___closed__0));
v___x_1274_ = lean_nat_dec_lt(v___x_1271_, v___x_1272_);
if (v___x_1274_ == 0)
{
lean_dec(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v_oldInlayHints_1196_);
v___y_1258_ = v___x_1271_;
v___y_1259_ = v___y_1266_;
v___y_1260_ = v___y_1267_;
v___y_1261_ = v___y_1268_;
v___y_1262_ = v___x_1273_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1275_; size_t v___x_1276_; size_t v___x_1277_; lean_object* v___x_1278_; 
v___x_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___y_1269_);
lean_ctor_set(v___x_1275_, 1, v___y_1270_);
v___x_1276_ = ((size_t)0ULL);
v___x_1277_ = lean_usize_of_nat(v___x_1272_);
v___x_1278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_handleInlayHints_spec__5(v___x_1275_, v___y_1265_, v_oldInlayHints_1196_, v___x_1276_, v___x_1277_, v___x_1273_);
lean_dec_ref(v_oldInlayHints_1196_);
lean_dec_ref_known(v___x_1275_, 2);
v___y_1258_ = v___x_1271_;
v___y_1259_ = v___y_1266_;
v___y_1260_ = v___y_1267_;
v___y_1261_ = v___y_1268_;
v___y_1262_ = v___x_1278_;
goto v___jp_1257_;
}
}
v___jp_1279_:
{
lean_object* v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = lean_nat_sub(v___y_1281_, v___y_1283_);
v___x_1287_ = lean_nat_dec_lt(v___x_1286_, v___y_1281_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; 
lean_dec(v___x_1286_);
v___x_1288_ = lean_unsigned_to_nat(0u);
v___y_1265_ = v___y_1280_;
v___y_1266_ = v___y_1281_;
v___y_1267_ = v___y_1282_;
v___y_1268_ = v___y_1284_;
v___y_1269_ = v___y_1285_;
v___y_1270_ = v___x_1288_;
goto v___jp_1264_;
}
else
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_array_fget_borrowed(v___y_1284_, v___x_1286_);
lean_dec(v___x_1286_);
v___x_1290_ = l_Lean_Server_Snapshots_Snapshot_endPos(v___x_1289_);
v___y_1265_ = v___y_1280_;
v___y_1266_ = v___y_1281_;
v___y_1267_ = v___y_1282_;
v___y_1268_ = v___y_1284_;
v___y_1269_ = v___y_1285_;
v___y_1270_ = v___x_1290_;
goto v___jp_1264_;
}
}
v___jp_1293_:
{
uint32_t v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v_snd_1298_; lean_object* v_fst_1299_; lean_object* v_snd_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1341_; 
v___x_1295_ = lean_uint32_of_nat(v___y_1294_);
lean_dec(v___y_1294_);
v___x_1296_ = l_Lean_Server_RequestCancellationToken_cancellationTasks(v_cancelTk_1193_);
lean_inc(v_cmdSnaps_1194_);
v___x_1297_ = l_Lean_AsyncList_getFinishedPrefixWithConsistentLatency___redArg(v_cmdSnaps_1194_, v___x_1295_, v___x_1296_);
v_snd_1298_ = lean_ctor_get(v___x_1297_, 1);
lean_inc(v_snd_1298_);
v_fst_1299_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_fst_1299_);
lean_dec_ref(v___x_1297_);
v_snd_1300_ = lean_ctor_get(v_snd_1298_, 1);
v_isSharedCheck_1341_ = !lean_is_exclusive(v_snd_1298_);
if (v_isSharedCheck_1341_ == 0)
{
lean_object* v_unused_1342_; 
v_unused_1342_ = lean_ctor_get(v_snd_1298_, 0);
lean_dec(v_unused_1342_);
v___x_1302_ = v_snd_1298_;
v_isShared_1303_ = v_isSharedCheck_1341_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_snd_1300_);
lean_dec(v_snd_1298_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1341_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
uint8_t v___x_1304_; 
v___x_1304_ = l_Lean_Server_RequestCancellationToken_wasCancelled(v_cancelTk_1193_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
lean_inc(v_lastEditTimestamp_x3f_1198_);
lean_inc(v_oldFinishedSnaps_1197_);
lean_inc_ref(v_oldInlayHints_1196_);
lean_del_object(v___x_1302_);
lean_dec_ref(v_s_1187_);
v___x_1305_ = lean_array_mk(v_fst_1299_);
v___x_1306_ = lean_array_get_size(v___x_1305_);
v___x_1307_ = lean_nat_dec_le(v_oldFinishedSnaps_1197_, v___x_1306_);
if (v___x_1307_ == 0)
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
lean_dec_ref(v___x_1305_);
lean_dec(v_snd_1300_);
lean_dec_ref(v___x_1228_);
lean_dec(v_lastEditTimestamp_x3f_1198_);
lean_dec(v_oldFinishedSnaps_1197_);
lean_dec_ref(v_oldInlayHints_1196_);
v___x_1308_ = lean_obj_once(&l_Lean_Server_FileWorker_handleInlayHints___closed__2, &l_Lean_Server_FileWorker_handleInlayHints___closed__2_once, _init_l_Lean_Server_FileWorker_handleInlayHints___closed__2);
v___x_1309_ = l_panic___at___00Lean_Server_FileWorker_handleInlayHints_spec__0(v___x_1308_, v_a_1188_);
return v___x_1309_;
}
else
{
lean_object* v___x_1310_; lean_object* v___x_1311_; uint8_t v___x_1312_; 
v___x_1310_ = lean_unsigned_to_nat(1u);
v___x_1311_ = lean_nat_sub(v_oldFinishedSnaps_1197_, v___x_1310_);
v___x_1312_ = lean_nat_dec_lt(v___x_1311_, v___x_1306_);
if (v___x_1312_ == 0)
{
lean_object* v___x_1313_; uint8_t v___x_1314_; 
lean_dec(v___x_1311_);
v___x_1313_ = lean_unsigned_to_nat(0u);
v___x_1314_ = lean_unbox(v_snd_1300_);
lean_dec(v_snd_1300_);
v___y_1280_ = v___x_1304_;
v___y_1281_ = v___x_1306_;
v___y_1282_ = v___x_1314_;
v___y_1283_ = v___x_1310_;
v___y_1284_ = v___x_1305_;
v___y_1285_ = v___x_1313_;
goto v___jp_1279_;
}
else
{
lean_object* v___x_1315_; lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1315_ = lean_array_fget_borrowed(v___x_1305_, v___x_1311_);
lean_dec(v___x_1311_);
v___x_1316_ = l_Lean_Server_Snapshots_Snapshot_endPos(v___x_1315_);
v___x_1317_ = lean_unbox(v_snd_1300_);
lean_dec(v_snd_1300_);
v___y_1280_ = v___x_1304_;
v___y_1281_ = v___x_1306_;
v___y_1282_ = v___x_1317_;
v___y_1283_ = v___x_1310_;
v___y_1284_ = v___x_1305_;
v___y_1285_ = v___x_1316_;
goto v___jp_1279_;
}
}
}
else
{
size_t v_sz_1318_; size_t v___x_1319_; lean_object* v___x_1320_; 
lean_dec(v_snd_1300_);
lean_dec(v_fst_1299_);
lean_dec_ref(v___x_1228_);
v_sz_1318_ = lean_array_size(v_oldInlayHints_1196_);
v___x_1319_ = ((size_t)0ULL);
lean_inc_ref(v_oldInlayHints_1196_);
lean_inc_ref(v_text_1195_);
v___x_1320_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg(v_text_1195_, v_sz_1318_, v___x_1319_, v_oldInlayHints_1196_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1332_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1323_ = v___x_1320_;
v_isShared_1324_ = v_isSharedCheck_1332_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1332_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1325_; lean_object* v___x_1327_; 
v___x_1325_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1325_, 0, v_a_1321_);
lean_ctor_set_uint8(v___x_1325_, sizeof(void*)*1, v_isFirstRequestAfterEdit_1199_);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 1, v_s_1187_);
lean_ctor_set(v___x_1302_, 0, v___x_1325_);
v___x_1327_ = v___x_1302_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1325_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v_s_1187_);
v___x_1327_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
lean_object* v___x_1329_; 
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v___x_1327_);
v___x_1329_ = v___x_1323_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_del_object(v___x_1302_);
lean_dec_ref(v_s_1187_);
v_a_1333_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1320_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1320_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1375_; 
lean_inc(v_lastEditTimestamp_x3f_1198_);
lean_inc(v_oldFinishedSnaps_1197_);
lean_inc_ref(v_oldInlayHints_1196_);
lean_dec_ref(v_p_1186_);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_s_1187_);
if (v_isSharedCheck_1375_ == 0)
{
lean_object* v_unused_1376_; lean_object* v_unused_1377_; lean_object* v_unused_1378_; 
v_unused_1376_ = lean_ctor_get(v_s_1187_, 2);
lean_dec(v_unused_1376_);
v_unused_1377_ = lean_ctor_get(v_s_1187_, 1);
lean_dec(v_unused_1377_);
v_unused_1378_ = lean_ctor_get(v_s_1187_, 0);
lean_dec(v_unused_1378_);
v___x_1348_ = v_s_1187_;
v_isShared_1349_ = v_isSharedCheck_1375_;
goto v_resetjp_1347_;
}
else
{
lean_dec(v_s_1187_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1375_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
size_t v_sz_1350_; size_t v___x_1351_; lean_object* v___x_1352_; 
v_sz_1350_ = lean_array_size(v_oldInlayHints_1196_);
v___x_1351_ = ((size_t)0ULL);
lean_inc_ref(v_oldInlayHints_1196_);
lean_inc_ref(v_text_1195_);
v___x_1352_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg(v_text_1195_, v_sz_1350_, v___x_1351_, v_oldInlayHints_1196_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1366_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1355_ = v___x_1352_;
v_isShared_1356_ = v_isSharedCheck_1366_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1366_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
uint8_t v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1360_; 
v___x_1357_ = 0;
v___x_1358_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1358_, 0, v_a_1353_);
lean_ctor_set_uint8(v___x_1358_, sizeof(void*)*1, v___x_1357_);
if (v_isShared_1349_ == 0)
{
v___x_1360_ = v___x_1348_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_oldInlayHints_1196_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v_oldFinishedSnaps_1197_);
lean_ctor_set(v_reuseFailAlloc_1365_, 2, v_lastEditTimestamp_x3f_1198_);
v___x_1360_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
lean_ctor_set_uint8(v___x_1360_, sizeof(void*)*3, v___x_1357_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1358_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1361_);
v___x_1363_ = v___x_1355_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_del_object(v___x_1348_);
lean_dec(v_lastEditTimestamp_x3f_1198_);
lean_dec(v_oldFinishedSnaps_1197_);
lean_dec_ref(v_oldInlayHints_1196_);
v_a_1367_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1352_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1352_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
}
v___jp_1200_:
{
size_t v_sz_1205_; size_t v___x_1206_; lean_object* v___x_1207_; 
v_sz_1205_ = lean_array_size(v___y_1204_);
v___x_1206_ = ((size_t)0ULL);
lean_inc_ref(v_text_1195_);
v___x_1207_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg(v_text_1195_, v_sz_1205_, v___x_1206_, v___y_1204_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1218_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1210_ = v___x_1207_;
v_isShared_1211_ = v_isSharedCheck_1218_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1207_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1218_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; 
v___x_1212_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1212_, 0, v_a_1208_);
lean_ctor_set_uint8(v___x_1212_, sizeof(void*)*1, v___y_1202_);
v___x_1213_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1213_, 0, v___y_1203_);
lean_ctor_set(v___x_1213_, 1, v___y_1201_);
lean_ctor_set(v___x_1213_, 2, v_lastEditTimestamp_x3f_1198_);
lean_ctor_set_uint8(v___x_1213_, sizeof(void*)*3, v_isFirstRequestAfterEdit_1199_);
v___x_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 0, v___x_1214_);
v___x_1216_ = v___x_1210_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1214_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1201_);
lean_dec(v_lastEditTimestamp_x3f_1198_);
v_a_1219_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1207_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1207_);
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
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHints___boxed(lean_object* v_p_1379_, lean_object* v_s_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lean_Server_FileWorker_handleInlayHints(v_p_1379_, v_s_1380_, v_a_1381_);
lean_dec_ref(v_a_1381_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(lean_object* v___x_1384_, lean_object* v___x_1385_, lean_object* v_inst_1386_, lean_object* v_R_1387_, lean_object* v_a_1388_, lean_object* v_b_1389_, lean_object* v_c_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___redArg(v___x_1384_, v___x_1385_, v_a_1388_, v_b_1389_, v___y_1391_, v___y_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2___boxed(lean_object* v___x_1395_, lean_object* v___x_1396_, lean_object* v_inst_1397_, lean_object* v_R_1398_, lean_object* v_a_1399_, lean_object* v_b_1400_, lean_object* v_c_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Server_FileWorker_handleInlayHints_spec__2(v___x_1395_, v___x_1396_, v_inst_1397_, v_R_1398_, v_a_1399_, v_b_1400_, v_c_1401_, v___y_1402_, v___y_1403_);
lean_dec_ref(v___y_1403_);
lean_dec(v___x_1396_);
lean_dec(v___x_1395_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3(lean_object* v___x_1406_, size_t v_sz_1407_, size_t v_i_1408_, lean_object* v_bs_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___redArg(v___x_1406_, v_sz_1407_, v_i_1408_, v_bs_1409_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3___boxed(lean_object* v___x_1413_, lean_object* v_sz_1414_, lean_object* v_i_1415_, lean_object* v_bs_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
size_t v_sz_boxed_1419_; size_t v_i_boxed_1420_; lean_object* v_res_1421_; 
v_sz_boxed_1419_ = lean_unbox_usize(v_sz_1414_);
lean_dec(v_sz_1414_);
v_i_boxed_1420_ = lean_unbox_usize(v_i_1415_);
lean_dec(v_i_1415_);
v_res_1421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_handleInlayHints_spec__3(v___x_1413_, v_sz_boxed_1419_, v_i_boxed_1420_, v_bs_1416_, v___y_1417_);
lean_dec_ref(v___y_1417_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2(lean_object* v_00_u03b1_1422_, lean_object* v_msg_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___redArg(v_msg_1423_, v___y_1424_, v___y_1425_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1428_, lean_object* v_msg_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_panic___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__2(v_00_u03b1_1428_, v_msg_1429_, v___y_1430_, v___y_1431_);
lean_dec_ref(v___y_1431_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1(lean_object* v_00_u03b1_1434_, lean_object* v_preNode_1435_, lean_object* v_postNode_1436_, lean_object* v_x_1437_, lean_object* v_x_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___redArg(v_preNode_1435_, v_postNode_1436_, v_x_1437_, v_x_1438_, v___y_1439_, v___y_1440_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1___boxed(lean_object* v_00_u03b1_1443_, lean_object* v_preNode_1444_, lean_object* v_postNode_1445_, lean_object* v_x_1446_, lean_object* v_x_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l___private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1(v_00_u03b1_1443_, v_preNode_1444_, v_postNode_1445_, v_x_1446_, v_x_1447_, v___y_1448_, v___y_1449_);
lean_dec_ref(v___y_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3(lean_object* v_00_u03b1_1452_, lean_object* v_preNode_1453_, lean_object* v_postNode_1454_, lean_object* v___x_1455_, lean_object* v_x_1456_, lean_object* v_x_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___redArg(v_preNode_1453_, v_postNode_1454_, v___x_1455_, v_x_1456_, v_x_1457_, v___y_1458_, v___y_1459_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1462_, lean_object* v_preNode_1463_, lean_object* v_postNode_1464_, lean_object* v___x_1465_, lean_object* v_x_1466_, lean_object* v_x_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_List_mapM_loop___at___00__private_Lean_Elab_InfoTree_Util_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Server_FileWorker_handleInlayHints_spec__1_spec__1_spec__3(v_00_u03b1_1462_, v_preNode_1463_, v_postNode_1464_, v___x_1465_, v_x_1466_, v_x_1467_, v___y_1468_, v___y_1469_);
lean_dec_ref(v___y_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(lean_object* v___x_1474_, lean_object* v___x_1475_, lean_object* v_as_1476_, size_t v_sz_1477_, size_t v_i_1478_, lean_object* v_b_1479_){
_start:
{
uint8_t v___x_1481_; 
v___x_1481_ = lean_usize_dec_lt(v_i_1478_, v_sz_1477_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; 
v___x_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1482_, 0, v_b_1479_);
return v___x_1482_;
}
else
{
lean_object* v_snd_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1526_; 
v_snd_1483_ = lean_ctor_get(v_b_1479_, 1);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_b_1479_);
if (v_isSharedCheck_1526_ == 0)
{
lean_object* v_unused_1527_; 
v_unused_1527_ = lean_ctor_get(v_b_1479_, 0);
lean_dec(v_unused_1527_);
v___x_1485_ = v_b_1479_;
v_isShared_1486_ = v_isSharedCheck_1526_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_snd_1483_);
lean_dec(v_b_1479_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1526_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v_fst_1487_; lean_object* v_snd_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1525_; 
v_fst_1487_ = lean_ctor_get(v_snd_1483_, 0);
v_snd_1488_ = lean_ctor_get(v_snd_1483_, 1);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_snd_1483_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1490_ = v_snd_1483_;
v_isShared_1491_ = v_isSharedCheck_1525_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_snd_1488_);
lean_inc(v_fst_1487_);
lean_dec(v_snd_1483_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1525_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v_a_1492_; 
v_a_1492_ = lean_array_uget_borrowed(v_as_1476_, v_i_1478_);
if (lean_obj_tag(v_a_1492_) == 0)
{
lean_object* v_range_1493_; lean_object* v_text_1494_; lean_object* v_mod_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v_range_1493_ = lean_ctor_get(v_a_1492_, 0);
v_text_1494_ = lean_ctor_get(v_a_1492_, 1);
v_mod_1495_ = lean_ctor_get(v___x_1475_, 1);
v___x_1496_ = lean_box(0);
lean_inc_ref(v_range_1493_);
v___x_1497_ = l_Lean_FileMap_lspRangeToUtf8Range(v___x_1474_, v_range_1493_);
lean_inc(v_fst_1487_);
v___x_1498_ = l_Lean_Server_FileWorker_applyEditToHint_x3f(v_mod_1495_, v_fst_1487_, v___x_1497_, v_text_1494_);
if (lean_obj_tag(v___x_1498_) == 1)
{
lean_object* v_val_1499_; lean_object* v___x_1501_; 
lean_dec(v_fst_1487_);
v_val_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_val_1499_);
lean_dec_ref_known(v___x_1498_, 1);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 0, v_val_1499_);
v___x_1501_ = v___x_1490_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_val_1499_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v_snd_1488_);
v___x_1501_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
lean_object* v___x_1503_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 1, v___x_1501_);
lean_ctor_set(v___x_1485_, 0, v___x_1496_);
v___x_1503_ = v___x_1485_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1507_, 1, v___x_1501_);
v___x_1503_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
size_t v___x_1504_; size_t v___x_1505_; 
v___x_1504_ = ((size_t)1ULL);
v___x_1505_ = lean_usize_add(v_i_1478_, v___x_1504_);
v_i_1478_ = v___x_1505_;
v_b_1479_ = v___x_1503_;
goto _start;
}
}
}
else
{
lean_object* v___x_1509_; lean_object* v___x_1511_; 
lean_dec(v___x_1498_);
lean_dec(v_snd_1488_);
v___x_1509_ = lean_box(v___x_1481_);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 1, v___x_1509_);
v___x_1511_ = v___x_1490_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_fst_1487_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1513_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 1, v___x_1511_);
lean_ctor_set(v___x_1485_, 0, v___x_1496_);
v___x_1513_ = v___x_1485_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1513_);
return v___x_1514_;
}
}
}
}
else
{
lean_object* v___x_1517_; lean_object* v___x_1519_; 
v___x_1517_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___closed__0));
if (v_isShared_1491_ == 0)
{
v___x_1519_ = v___x_1490_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_fst_1487_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_snd_1488_);
v___x_1519_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1521_; 
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 1, v___x_1519_);
lean_ctor_set(v___x_1485_, 0, v___x_1517_);
v___x_1521_ = v___x_1485_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1522_; 
v___x_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
return v___x_1522_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg___boxed(lean_object* v___x_1528_, lean_object* v___x_1529_, lean_object* v_as_1530_, lean_object* v_sz_1531_, lean_object* v_i_1532_, lean_object* v_b_1533_, lean_object* v___y_1534_){
_start:
{
size_t v_sz_boxed_1535_; size_t v_i_boxed_1536_; lean_object* v_res_1537_; 
v_sz_boxed_1535_ = lean_unbox_usize(v_sz_1531_);
lean_dec(v_sz_1531_);
v_i_boxed_1536_ = lean_unbox_usize(v_i_1532_);
lean_dec(v_i_1532_);
v_res_1537_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(v___x_1528_, v___x_1529_, v_as_1530_, v_sz_boxed_1535_, v_i_boxed_1536_, v_b_1533_);
lean_dec_ref(v_as_1530_);
lean_dec_ref(v___x_1529_);
lean_dec_ref(v___x_1528_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(lean_object* v_p_1538_, lean_object* v___x_1539_, lean_object* v___x_1540_, lean_object* v_as_1541_, size_t v_sz_1542_, size_t v_i_1543_, lean_object* v_b_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v_a_1548_; uint8_t v___x_1552_; 
v___x_1552_ = lean_usize_dec_lt(v_i_1543_, v_sz_1542_);
if (v___x_1552_ == 0)
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1553_, 0, v_b_1544_);
return v___x_1553_;
}
else
{
lean_object* v_snd_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1618_; 
v_snd_1554_ = lean_ctor_get(v_b_1544_, 1);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_b_1544_);
if (v_isSharedCheck_1618_ == 0)
{
lean_object* v_unused_1619_; 
v_unused_1619_ = lean_ctor_get(v_b_1544_, 0);
lean_dec(v_unused_1619_);
v___x_1556_ = v_b_1544_;
v_isShared_1557_ = v_isSharedCheck_1618_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_snd_1554_);
lean_dec(v_b_1544_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1618_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v_contentChanges_1558_; lean_object* v___x_1559_; lean_object* v_a_1560_; uint8_t v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1564_; 
v_contentChanges_1558_ = lean_ctor_get(v_p_1538_, 1);
v___x_1559_ = lean_box(0);
v_a_1560_ = lean_array_uget_borrowed(v_as_1541_, v_i_1543_);
v___x_1561_ = 0;
v___x_1562_ = lean_box(v___x_1561_);
lean_inc(v_a_1560_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 1, v___x_1562_);
lean_ctor_set(v___x_1556_, 0, v_a_1560_);
v___x_1564_ = v___x_1556_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1560_);
lean_ctor_set(v_reuseFailAlloc_1617_, 1, v___x_1562_);
v___x_1564_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
lean_object* v___x_1565_; size_t v_sz_1566_; size_t v___x_1567_; lean_object* v___x_1568_; 
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1559_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
v_sz_1566_ = lean_array_size(v_contentChanges_1558_);
v___x_1567_ = ((size_t)0ULL);
v___x_1568_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(v___x_1539_, v___x_1540_, v_contentChanges_1558_, v_sz_1566_, v___x_1567_, v___x_1565_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1608_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1571_ = v___x_1568_;
v_isShared_1572_ = v_isSharedCheck_1608_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1568_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1608_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v_fst_1573_; 
v_fst_1573_ = lean_ctor_get(v_a_1569_, 0);
if (lean_obj_tag(v_fst_1573_) == 0)
{
lean_object* v_snd_1574_; lean_object* v_snd_1575_; uint8_t v___x_1576_; 
lean_del_object(v___x_1571_);
v_snd_1574_ = lean_ctor_get(v_a_1569_, 1);
lean_inc(v_snd_1574_);
lean_dec(v_a_1569_);
v_snd_1575_ = lean_ctor_get(v_snd_1574_, 1);
v___x_1576_ = lean_unbox(v_snd_1575_);
if (v___x_1576_ == 0)
{
lean_object* v_fst_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1585_; 
v_fst_1577_ = lean_ctor_get(v_snd_1574_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_snd_1574_);
if (v_isSharedCheck_1585_ == 0)
{
lean_object* v_unused_1586_; 
v_unused_1586_ = lean_ctor_get(v_snd_1574_, 1);
lean_dec(v_unused_1586_);
v___x_1579_ = v_snd_1574_;
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_fst_1577_);
lean_dec(v_snd_1574_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1581_ = lean_array_push(v_snd_1554_, v_fst_1577_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 1, v___x_1581_);
lean_ctor_set(v___x_1579_, 0, v___x_1559_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1559_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
v_a_1548_ = v___x_1583_;
goto v___jp_1547_;
}
}
}
else
{
lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
v_isSharedCheck_1593_ = !lean_is_exclusive(v_snd_1574_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; lean_object* v_unused_1595_; 
v_unused_1594_ = lean_ctor_get(v_snd_1574_, 1);
lean_dec(v_unused_1594_);
v_unused_1595_ = lean_ctor_get(v_snd_1574_, 0);
lean_dec(v_unused_1595_);
v___x_1588_ = v_snd_1574_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_dec(v_snd_1574_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 1, v_snd_1554_);
lean_ctor_set(v___x_1588_, 0, v___x_1559_);
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1559_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v_snd_1554_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
v_a_1548_ = v___x_1591_;
goto v___jp_1547_;
}
}
}
}
else
{
lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1605_; 
lean_inc_ref(v_fst_1573_);
v_isSharedCheck_1605_ = !lean_is_exclusive(v_a_1569_);
if (v_isSharedCheck_1605_ == 0)
{
lean_object* v_unused_1606_; lean_object* v_unused_1607_; 
v_unused_1606_ = lean_ctor_get(v_a_1569_, 1);
lean_dec(v_unused_1606_);
v_unused_1607_ = lean_ctor_get(v_a_1569_, 0);
lean_dec(v_unused_1607_);
v___x_1597_ = v_a_1569_;
v_isShared_1598_ = v_isSharedCheck_1605_;
goto v_resetjp_1596_;
}
else
{
lean_dec(v_a_1569_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1605_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 1, v_snd_1554_);
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_fst_1573_);
lean_ctor_set(v_reuseFailAlloc_1604_, 1, v_snd_1554_);
v___x_1600_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
lean_object* v___x_1602_; 
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v___x_1600_);
v___x_1602_ = v___x_1571_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
}
}
}
else
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_snd_1554_);
v_a_1609_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1568_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1568_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
}
}
v___jp_1547_:
{
size_t v___x_1549_; size_t v___x_1550_; 
v___x_1549_ = ((size_t)1ULL);
v___x_1550_ = lean_usize_add(v_i_1543_, v___x_1549_);
v_i_1543_ = v___x_1550_;
v_b_1544_ = v_a_1548_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1___boxed(lean_object* v_p_1620_, lean_object* v___x_1621_, lean_object* v___x_1622_, lean_object* v_as_1623_, lean_object* v_sz_1624_, lean_object* v_i_1625_, lean_object* v_b_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
size_t v_sz_boxed_1629_; size_t v_i_boxed_1630_; lean_object* v_res_1631_; 
v_sz_boxed_1629_ = lean_unbox_usize(v_sz_1624_);
lean_dec(v_sz_1624_);
v_i_boxed_1630_ = lean_unbox_usize(v_i_1625_);
lean_dec(v_i_1625_);
v_res_1631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(v_p_1620_, v___x_1621_, v___x_1622_, v_as_1623_, v_sz_boxed_1629_, v_i_boxed_1630_, v_b_1626_, v___y_1627_);
lean_dec_ref(v___y_1627_);
lean_dec_ref(v_as_1623_);
lean_dec_ref(v___x_1622_);
lean_dec_ref(v___x_1621_);
lean_dec_ref(v_p_1620_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(lean_object* v_p_1635_, lean_object* v_oldInlayHints_1636_, lean_object* v_a_1637_){
_start:
{
lean_object* v_doc_1639_; lean_object* v_toEditableDocumentCore_1640_; lean_object* v_meta_1641_; lean_object* v_text_1642_; lean_object* v___x_1643_; size_t v_sz_1644_; size_t v___x_1645_; lean_object* v___x_1646_; 
v_doc_1639_ = lean_ctor_get(v_a_1637_, 1);
v_toEditableDocumentCore_1640_ = lean_ctor_get(v_doc_1639_, 0);
v_meta_1641_ = lean_ctor_get(v_toEditableDocumentCore_1640_, 0);
v_text_1642_ = lean_ctor_get(v_meta_1641_, 3);
v___x_1643_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___closed__0));
v_sz_1644_ = lean_array_size(v_oldInlayHints_1636_);
v___x_1645_ = ((size_t)0ULL);
v___x_1646_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__1(v_p_1635_, v_text_1642_, v_meta_1641_, v_oldInlayHints_1636_, v_sz_1644_, v___x_1645_, v___x_1643_, v_a_1637_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1660_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1649_ = v___x_1646_;
v_isShared_1650_ = v_isSharedCheck_1660_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1646_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1660_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v_fst_1651_; 
v_fst_1651_ = lean_ctor_get(v_a_1647_, 0);
if (lean_obj_tag(v_fst_1651_) == 0)
{
lean_object* v_snd_1652_; lean_object* v___x_1654_; 
v_snd_1652_ = lean_ctor_get(v_a_1647_, 1);
lean_inc(v_snd_1652_);
lean_dec(v_a_1647_);
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 0, v_snd_1652_);
v___x_1654_ = v___x_1649_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_snd_1652_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
else
{
lean_object* v_val_1656_; lean_object* v___x_1658_; 
lean_inc_ref(v_fst_1651_);
lean_dec(v_a_1647_);
v_val_1656_ = lean_ctor_get(v_fst_1651_, 0);
lean_inc(v_val_1656_);
lean_dec_ref_known(v_fst_1651_, 1);
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 0, v_val_1656_);
v___x_1658_ = v___x_1649_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_val_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1668_; 
v_a_1661_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1663_ = v___x_1646_;
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1646_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1666_; 
if (v_isShared_1664_ == 0)
{
v___x_1666_ = v___x_1663_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_a_1661_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints___boxed(lean_object* v_p_1669_, lean_object* v_oldInlayHints_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(v_p_1669_, v_oldInlayHints_1670_, v_a_1671_);
lean_dec_ref(v_a_1671_);
lean_dec_ref(v_oldInlayHints_1670_);
lean_dec_ref(v_p_1669_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0(lean_object* v___x_1674_, lean_object* v___x_1675_, lean_object* v_as_1676_, size_t v_sz_1677_, size_t v_i_1678_, lean_object* v_b_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___redArg(v___x_1674_, v___x_1675_, v_as_1676_, v_sz_1677_, v_i_1678_, v_b_1679_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0___boxed(lean_object* v___x_1683_, lean_object* v___x_1684_, lean_object* v_as_1685_, lean_object* v_sz_1686_, lean_object* v_i_1687_, lean_object* v_b_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
size_t v_sz_boxed_1691_; size_t v_i_boxed_1692_; lean_object* v_res_1693_; 
v_sz_boxed_1691_ = lean_unbox_usize(v_sz_1686_);
lean_dec(v_sz_1686_);
v_i_boxed_1692_ = lean_unbox_usize(v_i_1687_);
lean_dec(v_i_1687_);
v_res_1693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints_spec__0(v___x_1683_, v___x_1684_, v_as_1685_, v_sz_boxed_1691_, v_i_boxed_1692_, v_b_1688_, v___y_1689_);
lean_dec_ref(v___y_1689_);
lean_dec_ref(v_as_1685_);
lean_dec_ref(v___x_1684_);
lean_dec_ref(v___x_1683_);
return v_res_1693_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(lean_object* v_a_1694_, lean_object* v_as_1695_, size_t v_i_1696_, size_t v_stop_1697_){
_start:
{
uint8_t v___x_1698_; 
v___x_1698_ = lean_usize_dec_eq(v_i_1696_, v_stop_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; uint8_t v___x_1700_; 
v___x_1699_ = lean_array_uget_borrowed(v_as_1695_, v_i_1696_);
v___x_1700_ = l_Lean_Elab_instBEqInlayHintTextEdit_beq(v_a_1694_, v___x_1699_);
if (v___x_1700_ == 0)
{
size_t v___x_1701_; size_t v___x_1702_; 
v___x_1701_ = ((size_t)1ULL);
v___x_1702_ = lean_usize_add(v_i_1696_, v___x_1701_);
v_i_1696_ = v___x_1702_;
goto _start;
}
else
{
return v___x_1700_;
}
}
else
{
uint8_t v___x_1704_; 
v___x_1704_ = 0;
return v___x_1704_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0___boxed(lean_object* v_a_1705_, lean_object* v_as_1706_, lean_object* v_i_1707_, lean_object* v_stop_1708_){
_start:
{
size_t v_i_boxed_1709_; size_t v_stop_boxed_1710_; uint8_t v_res_1711_; lean_object* v_r_1712_; 
v_i_boxed_1709_ = lean_unbox_usize(v_i_1707_);
lean_dec(v_i_1707_);
v_stop_boxed_1710_ = lean_unbox_usize(v_stop_1708_);
lean_dec(v_stop_1708_);
v_res_1711_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(v_a_1705_, v_as_1706_, v_i_boxed_1709_, v_stop_boxed_1710_);
lean_dec_ref(v_as_1706_);
lean_dec_ref(v_a_1705_);
v_r_1712_ = lean_box(v_res_1711_);
return v_r_1712_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(lean_object* v_as_1713_, lean_object* v_a_1714_){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; 
v___x_1715_ = lean_unsigned_to_nat(0u);
v___x_1716_ = lean_array_get_size(v_as_1713_);
v___x_1717_ = lean_nat_dec_lt(v___x_1715_, v___x_1716_);
if (v___x_1717_ == 0)
{
return v___x_1717_;
}
else
{
size_t v___x_1718_; size_t v___x_1719_; uint8_t v___x_1720_; 
v___x_1718_ = ((size_t)0ULL);
v___x_1719_ = lean_usize_of_nat(v___x_1716_);
v___x_1720_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0_spec__0(v_a_1714_, v_as_1713_, v___x_1718_, v___x_1719_);
return v___x_1720_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0___boxed(lean_object* v_as_1721_, lean_object* v_a_1722_){
_start:
{
uint8_t v_res_1723_; lean_object* v_r_1724_; 
v_res_1723_ = l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(v_as_1721_, v_a_1722_);
lean_dec_ref(v_a_1722_);
lean_dec_ref(v_as_1721_);
v_r_1724_ = lean_box(v_res_1723_);
return v_r_1724_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(lean_object* v___x_1725_, lean_object* v_as_1726_, size_t v_i_1727_, size_t v_stop_1728_){
_start:
{
uint8_t v___x_1729_; 
v___x_1729_ = lean_usize_dec_eq(v_i_1727_, v_stop_1728_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; lean_object* v_textEdits_1731_; uint8_t v___x_1732_; 
v___x_1730_ = lean_array_uget_borrowed(v_as_1726_, v_i_1727_);
v_textEdits_1731_ = lean_ctor_get(v___x_1730_, 3);
v___x_1732_ = l_Array_contains___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__0(v_textEdits_1731_, v___x_1725_);
if (v___x_1732_ == 0)
{
size_t v___x_1733_; size_t v___x_1734_; 
v___x_1733_ = ((size_t)1ULL);
v___x_1734_ = lean_usize_add(v_i_1727_, v___x_1733_);
v_i_1727_ = v___x_1734_;
goto _start;
}
else
{
return v___x_1732_;
}
}
else
{
uint8_t v___x_1736_; 
v___x_1736_ = 0;
return v___x_1736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1___boxed(lean_object* v___x_1737_, lean_object* v_as_1738_, lean_object* v_i_1739_, lean_object* v_stop_1740_){
_start:
{
size_t v_i_boxed_1741_; size_t v_stop_boxed_1742_; uint8_t v_res_1743_; lean_object* v_r_1744_; 
v_i_boxed_1741_ = lean_unbox_usize(v_i_1739_);
lean_dec(v_i_1739_);
v_stop_boxed_1742_ = lean_unbox_usize(v_stop_1740_);
lean_dec(v_stop_1740_);
v_res_1743_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(v___x_1737_, v_as_1738_, v_i_boxed_1741_, v_stop_boxed_1742_);
lean_dec_ref(v_as_1738_);
lean_dec_ref(v___x_1737_);
v_r_1744_ = lean_box(v_res_1743_);
return v_r_1744_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(lean_object* v_oldInlayHints_1745_, lean_object* v___x_1746_, lean_object* v___x_1747_, lean_object* v_as_1748_, size_t v_i_1749_, size_t v_stop_1750_){
_start:
{
uint8_t v___y_1756_; uint8_t v___x_1757_; 
v___x_1757_ = lean_usize_dec_eq(v_i_1749_, v_stop_1750_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; uint8_t v___x_1759_; lean_object* v___x_1760_; 
v___x_1758_ = lean_unsigned_to_nat(0u);
v___x_1759_ = lean_nat_dec_lt(v___x_1758_, v___x_1746_);
v___x_1760_ = lean_array_uget(v_as_1748_, v_i_1749_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_range_1761_; lean_object* v_text_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1775_; 
v_range_1761_ = lean_ctor_get(v___x_1760_, 0);
v_text_1762_ = lean_ctor_get(v___x_1760_, 1);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1764_ = v___x_1760_;
v_isShared_1765_ = v_isSharedCheck_1775_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_text_1762_);
lean_inc(v_range_1761_);
lean_dec(v___x_1760_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1775_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; uint8_t v___x_1767_; 
v___x_1766_ = lean_array_get_size(v_oldInlayHints_1745_);
v___x_1767_ = lean_nat_dec_lt(v___x_1758_, v___x_1766_);
if (v___x_1767_ == 0)
{
lean_del_object(v___x_1764_);
lean_dec_ref(v_text_1762_);
lean_dec_ref(v_range_1761_);
v___y_1756_ = v___x_1759_;
goto v___jp_1755_;
}
else
{
if (v___x_1767_ == 0)
{
lean_del_object(v___x_1764_);
lean_dec_ref(v_text_1762_);
lean_dec_ref(v_range_1761_);
return v___x_1767_;
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1770_; 
v___x_1768_ = l_Lean_FileMap_lspRangeToUtf8Range(v___x_1747_, v_range_1761_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1768_);
v___x_1770_ = v___x_1764_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v___x_1768_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v_text_1762_);
v___x_1770_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
size_t v___x_1771_; size_t v___x_1772_; uint8_t v___x_1773_; 
v___x_1771_ = ((size_t)0ULL);
v___x_1772_ = lean_usize_of_nat(v___x_1766_);
v___x_1773_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__1(v___x_1770_, v_oldInlayHints_1745_, v___x_1771_, v___x_1772_);
lean_dec_ref(v___x_1770_);
if (v___x_1773_ == 0)
{
return v___x_1767_;
}
else
{
goto v___jp_1751_;
}
}
}
}
}
}
else
{
lean_dec(v___x_1760_);
v___y_1756_ = v___x_1759_;
goto v___jp_1755_;
}
}
else
{
uint8_t v___x_1776_; 
v___x_1776_ = 0;
return v___x_1776_;
}
v___jp_1751_:
{
size_t v___x_1752_; size_t v___x_1753_; 
v___x_1752_ = ((size_t)1ULL);
v___x_1753_ = lean_usize_add(v_i_1749_, v___x_1752_);
v_i_1749_ = v___x_1753_;
goto _start;
}
v___jp_1755_:
{
if (v___y_1756_ == 0)
{
goto v___jp_1751_;
}
else
{
return v___y_1756_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2___boxed(lean_object* v_oldInlayHints_1777_, lean_object* v___x_1778_, lean_object* v___x_1779_, lean_object* v_as_1780_, lean_object* v_i_1781_, lean_object* v_stop_1782_){
_start:
{
size_t v_i_boxed_1783_; size_t v_stop_boxed_1784_; uint8_t v_res_1785_; lean_object* v_r_1786_; 
v_i_boxed_1783_ = lean_unbox_usize(v_i_1781_);
lean_dec(v_i_1781_);
v_stop_boxed_1784_ = lean_unbox_usize(v_stop_1782_);
lean_dec(v_stop_1782_);
v_res_1785_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(v_oldInlayHints_1777_, v___x_1778_, v___x_1779_, v_as_1780_, v_i_boxed_1783_, v_stop_boxed_1784_);
lean_dec_ref(v_as_1780_);
lean_dec_ref(v___x_1779_);
lean_dec(v___x_1778_);
lean_dec_ref(v_oldInlayHints_1777_);
v_r_1786_ = lean_box(v_res_1785_);
return v_r_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(lean_object* v_p_1787_, lean_object* v_oldInlayHints_1788_, lean_object* v_a_1789_){
_start:
{
uint8_t v___y_1792_; lean_object* v_contentChanges_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v_contentChanges_1798_ = lean_ctor_get(v_p_1787_, 1);
v___x_1799_ = lean_unsigned_to_nat(0u);
v___x_1800_ = lean_array_get_size(v_contentChanges_1798_);
v___x_1801_ = lean_nat_dec_lt(v___x_1799_, v___x_1800_);
if (v___x_1801_ == 0)
{
uint8_t v___x_1802_; 
v___x_1802_ = 1;
v___y_1792_ = v___x_1802_;
goto v___jp_1791_;
}
else
{
if (v___x_1801_ == 0)
{
v___y_1792_ = v___x_1801_;
goto v___jp_1791_;
}
else
{
lean_object* v_doc_1803_; lean_object* v_toEditableDocumentCore_1804_; lean_object* v_meta_1805_; lean_object* v_text_1806_; size_t v___x_1807_; size_t v___x_1808_; uint8_t v___x_1809_; 
v_doc_1803_ = lean_ctor_get(v_a_1789_, 1);
v_toEditableDocumentCore_1804_ = lean_ctor_get(v_doc_1803_, 0);
v_meta_1805_ = lean_ctor_get(v_toEditableDocumentCore_1804_, 0);
v_text_1806_ = lean_ctor_get(v_meta_1805_, 3);
v___x_1807_ = ((size_t)0ULL);
v___x_1808_ = lean_usize_of_nat(v___x_1800_);
v___x_1809_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f_spec__2(v_oldInlayHints_1788_, v___x_1800_, v_text_1806_, v_contentChanges_1798_, v___x_1807_, v___x_1808_);
if (v___x_1809_ == 0)
{
v___y_1792_ = v___x_1801_;
goto v___jp_1791_;
}
else
{
uint8_t v___x_1810_; 
v___x_1810_ = 0;
v___y_1792_ = v___x_1810_;
goto v___jp_1791_;
}
}
}
v___jp_1791_:
{
lean_object* v___x_1793_; 
v___x_1793_ = lean_io_mono_ms_now();
if (v___y_1792_ == 0)
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
return v___x_1795_;
}
else
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
lean_dec(v___x_1793_);
v___x_1796_ = lean_box(0);
v___x_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
return v___x_1797_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f___boxed(lean_object* v_p_1811_, lean_object* v_oldInlayHints_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(v_p_1811_, v_oldInlayHints_1812_, v_a_1813_);
lean_dec_ref(v_a_1813_);
lean_dec_ref(v_oldInlayHints_1812_);
lean_dec_ref(v_p_1811_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange(lean_object* v_p_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v_oldInlayHints_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1850_; 
v_oldInlayHints_1820_ = lean_ctor_get(v_a_1817_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_a_1817_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; lean_object* v_unused_1852_; 
v_unused_1851_ = lean_ctor_get(v_a_1817_, 2);
lean_dec(v_unused_1851_);
v_unused_1852_ = lean_ctor_get(v_a_1817_, 1);
lean_dec(v_unused_1852_);
v___x_1822_ = v_a_1817_;
v_isShared_1823_ = v_isSharedCheck_1850_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_oldInlayHints_1820_);
lean_dec(v_a_1817_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1850_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1824_; 
v___x_1824_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_updateOldInlayHints(v_p_1816_, v_oldInlayHints_1820_, v_a_1818_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; lean_object* v___x_1826_; lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1841_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1824_, 1);
v___x_1826_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_handleInlayHintsDidChange_determineLastEditTimestamp_x3f(v_p_1816_, v_oldInlayHints_1820_, v_a_1818_);
lean_dec_ref(v_oldInlayHints_1820_);
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1829_ = v___x_1826_;
v_isShared_1830_ = v_isSharedCheck_1841_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1826_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1841_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1831_; uint8_t v___x_1832_; lean_object* v___x_1834_; 
v___x_1831_ = lean_unsigned_to_nat(0u);
v___x_1832_ = 1;
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 2, v_a_1827_);
lean_ctor_set(v___x_1822_, 1, v___x_1831_);
lean_ctor_set(v___x_1822_, 0, v_a_1825_);
v___x_1834_ = v___x_1822_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1825_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v___x_1831_);
lean_ctor_set(v_reuseFailAlloc_1840_, 2, v_a_1827_);
v___x_1834_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
lean_ctor_set_uint8(v___x_1834_, sizeof(void*)*3, v___x_1832_);
v___x_1835_ = lean_box(0);
v___x_1836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
lean_ctor_set(v___x_1836_, 1, v___x_1834_);
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 0, v___x_1836_);
v___x_1838_ = v___x_1829_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
lean_del_object(v___x_1822_);
lean_dec_ref(v_oldInlayHints_1820_);
v_a_1842_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1824_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1824_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleInlayHintsDidChange___boxed(lean_object* v_p_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lean_Server_FileWorker_handleInlayHintsDidChange(v_p_1853_, v_a_1854_, v_a_1855_);
lean_dec_ref(v_a_1855_);
lean_dec_ref(v_p_1853_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3(lean_object* v___x_1858_, lean_object* v_x_1859_){
_start:
{
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3___boxed(lean_object* v___x_1860_, lean_object* v_x_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__3(v___x_1860_, v_x_1861_);
lean_dec_ref(v_x_1861_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(lean_object* v_x_1863_, lean_object* v_x_1864_, lean_object* v_x_1865_, lean_object* v_x_1866_){
_start:
{
lean_object* v_ks_1867_; lean_object* v_vs_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1892_; 
v_ks_1867_ = lean_ctor_get(v_x_1863_, 0);
v_vs_1868_ = lean_ctor_get(v_x_1863_, 1);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_x_1863_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1870_ = v_x_1863_;
v_isShared_1871_ = v_isSharedCheck_1892_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_vs_1868_);
lean_inc(v_ks_1867_);
lean_dec(v_x_1863_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1892_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = lean_array_get_size(v_ks_1867_);
v___x_1873_ = lean_nat_dec_lt(v_x_1864_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1877_; 
lean_dec(v_x_1864_);
v___x_1874_ = lean_array_push(v_ks_1867_, v_x_1865_);
v___x_1875_ = lean_array_push(v_vs_1868_, v_x_1866_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 1, v___x_1875_);
lean_ctor_set(v___x_1870_, 0, v___x_1874_);
v___x_1877_ = v___x_1870_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1874_);
lean_ctor_set(v_reuseFailAlloc_1878_, 1, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
else
{
lean_object* v_k_x27_1879_; uint8_t v___x_1880_; 
v_k_x27_1879_ = lean_array_fget_borrowed(v_ks_1867_, v_x_1864_);
v___x_1880_ = lean_string_dec_eq(v_x_1865_, v_k_x27_1879_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1882_; 
if (v_isShared_1871_ == 0)
{
v___x_1882_ = v___x_1870_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_ks_1867_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_vs_1868_);
v___x_1882_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_unsigned_to_nat(1u);
v___x_1884_ = lean_nat_add(v_x_1864_, v___x_1883_);
lean_dec(v_x_1864_);
v_x_1863_ = v___x_1882_;
v_x_1864_ = v___x_1884_;
goto _start;
}
}
else
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1890_; 
v___x_1887_ = lean_array_fset(v_ks_1867_, v_x_1864_, v_x_1865_);
v___x_1888_ = lean_array_fset(v_vs_1868_, v_x_1864_, v_x_1866_);
lean_dec(v_x_1864_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 1, v___x_1888_);
lean_ctor_set(v___x_1870_, 0, v___x_1887_);
v___x_1890_ = v___x_1870_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v___x_1887_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v___x_1888_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(lean_object* v_n_1893_, lean_object* v_k_1894_, lean_object* v_v_1895_){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1896_ = lean_unsigned_to_nat(0u);
v___x_1897_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(v_n_1893_, v___x_1896_, v_k_1894_, v_v_1895_);
return v___x_1897_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(lean_object* v_x_1899_, size_t v_x_1900_, size_t v_x_1901_, lean_object* v_x_1902_, lean_object* v_x_1903_){
_start:
{
if (lean_obj_tag(v_x_1899_) == 0)
{
lean_object* v_es_1904_; size_t v___x_1905_; size_t v___x_1906_; lean_object* v_j_1907_; lean_object* v___x_1908_; uint8_t v___x_1909_; 
v_es_1904_ = lean_ctor_get(v_x_1899_, 0);
v___x_1905_ = ((size_t)31ULL);
v___x_1906_ = lean_usize_land(v_x_1900_, v___x_1905_);
v_j_1907_ = lean_usize_to_nat(v___x_1906_);
v___x_1908_ = lean_array_get_size(v_es_1904_);
v___x_1909_ = lean_nat_dec_lt(v_j_1907_, v___x_1908_);
if (v___x_1909_ == 0)
{
lean_dec(v_j_1907_);
lean_dec(v_x_1903_);
lean_dec_ref(v_x_1902_);
return v_x_1899_;
}
else
{
lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1948_; 
lean_inc_ref(v_es_1904_);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_x_1899_);
if (v_isSharedCheck_1948_ == 0)
{
lean_object* v_unused_1949_; 
v_unused_1949_ = lean_ctor_get(v_x_1899_, 0);
lean_dec(v_unused_1949_);
v___x_1911_ = v_x_1899_;
v_isShared_1912_ = v_isSharedCheck_1948_;
goto v_resetjp_1910_;
}
else
{
lean_dec(v_x_1899_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1948_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v_v_1913_; lean_object* v___x_1914_; lean_object* v_xs_x27_1915_; lean_object* v___y_1917_; 
v_v_1913_ = lean_array_fget(v_es_1904_, v_j_1907_);
v___x_1914_ = lean_box(0);
v_xs_x27_1915_ = lean_array_fset(v_es_1904_, v_j_1907_, v___x_1914_);
switch(lean_obj_tag(v_v_1913_))
{
case 0:
{
lean_object* v_key_1922_; lean_object* v_val_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1933_; 
v_key_1922_ = lean_ctor_get(v_v_1913_, 0);
v_val_1923_ = lean_ctor_get(v_v_1913_, 1);
v_isSharedCheck_1933_ = !lean_is_exclusive(v_v_1913_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1925_ = v_v_1913_;
v_isShared_1926_ = v_isSharedCheck_1933_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_val_1923_);
lean_inc(v_key_1922_);
lean_dec(v_v_1913_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1933_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
uint8_t v___x_1927_; 
v___x_1927_ = lean_string_dec_eq(v_x_1902_, v_key_1922_);
if (v___x_1927_ == 0)
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
lean_del_object(v___x_1925_);
v___x_1928_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1922_, v_val_1923_, v_x_1902_, v_x_1903_);
v___x_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
v___y_1917_ = v___x_1929_;
goto v___jp_1916_;
}
else
{
lean_object* v___x_1931_; 
lean_dec(v_val_1923_);
lean_dec(v_key_1922_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set(v___x_1925_, 1, v_x_1903_);
lean_ctor_set(v___x_1925_, 0, v_x_1902_);
v___x_1931_ = v___x_1925_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_x_1902_);
lean_ctor_set(v_reuseFailAlloc_1932_, 1, v_x_1903_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
v___y_1917_ = v___x_1931_;
goto v___jp_1916_;
}
}
}
}
case 1:
{
lean_object* v_node_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1946_; 
v_node_1934_ = lean_ctor_get(v_v_1913_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v_v_1913_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1936_ = v_v_1913_;
v_isShared_1937_ = v_isSharedCheck_1946_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_node_1934_);
lean_dec(v_v_1913_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1946_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
size_t v___x_1938_; size_t v___x_1939_; size_t v___x_1940_; size_t v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1944_; 
v___x_1938_ = ((size_t)5ULL);
v___x_1939_ = lean_usize_shift_right(v_x_1900_, v___x_1938_);
v___x_1940_ = ((size_t)1ULL);
v___x_1941_ = lean_usize_add(v_x_1901_, v___x_1940_);
v___x_1942_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_node_1934_, v___x_1939_, v___x_1941_, v_x_1902_, v_x_1903_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 0, v___x_1942_);
v___x_1944_ = v___x_1936_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v___x_1942_);
v___x_1944_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
v___y_1917_ = v___x_1944_;
goto v___jp_1916_;
}
}
}
default: 
{
lean_object* v___x_1947_; 
v___x_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1947_, 0, v_x_1902_);
lean_ctor_set(v___x_1947_, 1, v_x_1903_);
v___y_1917_ = v___x_1947_;
goto v___jp_1916_;
}
}
v___jp_1916_:
{
lean_object* v___x_1918_; lean_object* v___x_1920_; 
v___x_1918_ = lean_array_fset(v_xs_x27_1915_, v_j_1907_, v___y_1917_);
lean_dec(v_j_1907_);
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 0, v___x_1918_);
v___x_1920_ = v___x_1911_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1918_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
else
{
lean_object* v_ks_1950_; lean_object* v_vs_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1969_; 
v_ks_1950_ = lean_ctor_get(v_x_1899_, 0);
v_vs_1951_ = lean_ctor_get(v_x_1899_, 1);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_x_1899_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1953_ = v_x_1899_;
v_isShared_1954_ = v_isSharedCheck_1969_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_vs_1951_);
lean_inc(v_ks_1950_);
lean_dec(v_x_1899_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1969_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_ks_1950_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_vs_1951_);
v___x_1956_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
lean_object* v_newNode_1957_; size_t v___x_1958_; uint8_t v___x_1959_; 
v_newNode_1957_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(v___x_1956_, v_x_1902_, v_x_1903_);
v___x_1958_ = ((size_t)7ULL);
v___x_1959_ = lean_usize_dec_le(v___x_1958_, v_x_1901_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; lean_object* v___x_1961_; uint8_t v___x_1962_; 
v___x_1960_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1957_);
v___x_1961_ = lean_unsigned_to_nat(4u);
v___x_1962_ = lean_nat_dec_lt(v___x_1960_, v___x_1961_);
lean_dec(v___x_1960_);
if (v___x_1962_ == 0)
{
lean_object* v_ks_1963_; lean_object* v_vs_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v_ks_1963_ = lean_ctor_get(v_newNode_1957_, 0);
lean_inc_ref(v_ks_1963_);
v_vs_1964_ = lean_ctor_get(v_newNode_1957_, 1);
lean_inc_ref(v_vs_1964_);
lean_dec_ref(v_newNode_1957_);
v___x_1965_ = lean_unsigned_to_nat(0u);
v___x_1966_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___closed__0);
v___x_1967_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(v_x_1901_, v_ks_1963_, v_vs_1964_, v___x_1965_, v___x_1966_);
lean_dec_ref(v_vs_1964_);
lean_dec_ref(v_ks_1963_);
return v___x_1967_;
}
else
{
return v_newNode_1957_;
}
}
else
{
return v_newNode_1957_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(size_t v_depth_1970_, lean_object* v_keys_1971_, lean_object* v_vals_1972_, lean_object* v_i_1973_, lean_object* v_entries_1974_){
_start:
{
lean_object* v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = lean_array_get_size(v_keys_1971_);
v___x_1976_ = lean_nat_dec_lt(v_i_1973_, v___x_1975_);
if (v___x_1976_ == 0)
{
lean_dec(v_i_1973_);
return v_entries_1974_;
}
else
{
lean_object* v_k_1977_; lean_object* v_v_1978_; uint64_t v___x_1979_; size_t v_h_1980_; size_t v___x_1981_; lean_object* v___x_1982_; size_t v___x_1983_; size_t v___x_1984_; size_t v___x_1985_; size_t v_h_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v_k_1977_ = lean_array_fget_borrowed(v_keys_1971_, v_i_1973_);
v_v_1978_ = lean_array_fget_borrowed(v_vals_1972_, v_i_1973_);
v___x_1979_ = lean_string_hash(v_k_1977_);
v_h_1980_ = lean_uint64_to_usize(v___x_1979_);
v___x_1981_ = ((size_t)5ULL);
v___x_1982_ = lean_unsigned_to_nat(1u);
v___x_1983_ = ((size_t)1ULL);
v___x_1984_ = lean_usize_sub(v_depth_1970_, v___x_1983_);
v___x_1985_ = lean_usize_mul(v___x_1981_, v___x_1984_);
v_h_1986_ = lean_usize_shift_right(v_h_1980_, v___x_1985_);
v___x_1987_ = lean_nat_add(v_i_1973_, v___x_1982_);
lean_dec(v_i_1973_);
lean_inc(v_v_1978_);
lean_inc(v_k_1977_);
v___x_1988_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_entries_1974_, v_h_1986_, v_depth_1970_, v_k_1977_, v_v_1978_);
v_i_1973_ = v___x_1987_;
v_entries_1974_ = v___x_1988_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg___boxed(lean_object* v_depth_1990_, lean_object* v_keys_1991_, lean_object* v_vals_1992_, lean_object* v_i_1993_, lean_object* v_entries_1994_){
_start:
{
size_t v_depth_boxed_1995_; lean_object* v_res_1996_; 
v_depth_boxed_1995_ = lean_unbox_usize(v_depth_1990_);
lean_dec(v_depth_1990_);
v_res_1996_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(v_depth_boxed_1995_, v_keys_1991_, v_vals_1992_, v_i_1993_, v_entries_1994_);
lean_dec_ref(v_vals_1992_);
lean_dec_ref(v_keys_1991_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg___boxed(lean_object* v_x_1997_, lean_object* v_x_1998_, lean_object* v_x_1999_, lean_object* v_x_2000_, lean_object* v_x_2001_){
_start:
{
size_t v_x_2491__boxed_2002_; size_t v_x_2492__boxed_2003_; lean_object* v_res_2004_; 
v_x_2491__boxed_2002_ = lean_unbox_usize(v_x_1998_);
lean_dec(v_x_1998_);
v_x_2492__boxed_2003_ = lean_unbox_usize(v_x_1999_);
lean_dec(v_x_1999_);
v_res_2004_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_x_1997_, v_x_2491__boxed_2002_, v_x_2492__boxed_2003_, v_x_2000_, v_x_2001_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(lean_object* v_x_2005_, lean_object* v_x_2006_, lean_object* v_x_2007_){
_start:
{
uint64_t v___x_2008_; size_t v___x_2009_; size_t v___x_2010_; lean_object* v___x_2011_; 
v___x_2008_ = lean_string_hash(v_x_2006_);
v___x_2009_ = lean_uint64_to_usize(v___x_2008_);
v___x_2010_ = ((size_t)1ULL);
v___x_2011_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_x_2005_, v___x_2009_, v___x_2010_, v_x_2006_, v_x_2007_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(lean_object* v_mutex_2012_, lean_object* v_a_x3f_2013_){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = lean_io_basemutex_unlock(v_mutex_2012_);
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0___boxed(lean_object* v_mutex_2017_, lean_object* v_a_x3f_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(v_mutex_2017_, v_a_x3f_2018_);
lean_dec(v_a_x3f_2018_);
lean_dec(v_mutex_2017_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(lean_object* v_mutex_2021_, lean_object* v_k_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v_ref_2025_; lean_object* v_mutex_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v_ref_2025_ = lean_ctor_get(v_mutex_2021_, 0);
lean_inc(v_ref_2025_);
v_mutex_2026_ = lean_ctor_get(v_mutex_2021_, 1);
lean_inc(v_mutex_2026_);
lean_dec_ref(v_mutex_2021_);
v___x_2027_ = lean_io_basemutex_lock(v_mutex_2026_);
lean_inc_ref(v___y_2023_);
v___x_2028_ = lean_apply_3(v_k_2022_, v_ref_2025_, v___y_2023_, lean_box(0));
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2045_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2031_ = v___x_2028_;
v_isShared_2032_ = v_isSharedCheck_2045_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2028_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2045_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
lean_inc(v_a_2029_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 1);
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
lean_object* v___x_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
v___x_2035_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(v_mutex_2026_, v___x_2034_);
lean_dec_ref(v___x_2034_);
lean_dec(v_mutex_2026_);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2042_ == 0)
{
lean_object* v_unused_2043_; 
v_unused_2043_ = lean_ctor_get(v___x_2035_, 0);
lean_dec(v_unused_2043_);
v___x_2037_ = v___x_2035_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_dec(v___x_2035_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 0, v_a_2029_);
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2029_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2055_; 
v_a_2046_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2046_);
lean_dec_ref_known(v___x_2028_, 1);
v___x_2047_ = lean_box(0);
v___x_2048_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___lam__0(v_mutex_2026_, v___x_2047_);
lean_dec(v_mutex_2026_);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2055_ == 0)
{
lean_object* v_unused_2056_; 
v_unused_2056_ = lean_ctor_get(v___x_2048_, 0);
lean_dec(v_unused_2056_);
v___x_2050_ = v___x_2048_;
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
else
{
lean_dec(v___x_2048_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2055_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2053_; 
if (v_isShared_2051_ == 0)
{
lean_ctor_set_tag(v___x_2050_, 1);
lean_ctor_set(v___x_2050_, 0, v_a_2046_);
v___x_2053_ = v___x_2050_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2046_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object* v_mutex_2057_, lean_object* v_k_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
lean_object* v_res_2061_; 
v_res_2061_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_mutex_2057_, v_k_2058_, v___y_2059_);
lean_dec_ref(v___y_2059_);
return v_res_2061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8(lean_object* v_val_2062_, lean_object* v___f_2063_, lean_object* v_param_2064_, lean_object* v___x_2065_, lean_object* v_x_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2069_ = lean_st_ref_get(v_val_2062_);
lean_inc_ref(v___y_2067_);
v___x_2070_ = lean_apply_4(v___f_2063_, v_param_2064_, v___x_2069_, v___y_2067_, lean_box(0));
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2080_; 
v_a_2071_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2073_ = v___x_2070_;
v_isShared_2074_ = v_isSharedCheck_2080_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2070_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2080_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v_snd_2075_; lean_object* v___x_2076_; lean_object* v___x_2078_; 
v_snd_2075_ = lean_ctor_get(v_a_2071_, 1);
lean_inc(v_snd_2075_);
lean_dec(v_a_2071_);
v___x_2076_ = lean_st_ref_swap(v_val_2062_, v_snd_2075_);
lean_dec(v___x_2076_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 0, v___x_2065_);
v___x_2078_ = v___x_2073_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2065_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
v_a_2081_ = lean_ctor_get(v___x_2070_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2070_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2070_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8___boxed(lean_object* v_val_2089_, lean_object* v___f_2090_, lean_object* v_param_2091_, lean_object* v___x_2092_, lean_object* v_x_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8(v_val_2089_, v___f_2090_, v_param_2091_, v___x_2092_, v_x_2093_, v___y_2094_);
lean_dec_ref(v___y_2094_);
lean_dec(v_val_2089_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9(lean_object* v___f_2097_, lean_object* v___f_2098_, lean_object* v___x_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_st_ref_get(v___y_2100_);
v___x_2104_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_2103_, v___f_2097_, v___y_2101_);
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2114_; 
v_a_2105_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2107_ = v___x_2104_;
v_isShared_2108_ = v_isSharedCheck_2114_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2104_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2114_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2109_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2098_, v_a_2105_);
v___x_2110_ = lean_st_ref_swap(v___y_2100_, v___x_2109_);
lean_dec(v___x_2110_);
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 0, v___x_2099_);
v___x_2112_ = v___x_2107_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2099_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
lean_dec_ref(v___f_2098_);
v_a_2115_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2104_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2104_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9___boxed(lean_object* v___f_2123_, lean_object* v___f_2124_, lean_object* v___x_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9(v___f_2123_, v___f_2124_, v___x_2125_, v___y_2126_, v___y_2127_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10(lean_object* v_val_2130_, lean_object* v___f_2131_, lean_object* v___x_2132_, lean_object* v___f_2133_, lean_object* v_val_2134_, lean_object* v_param_2135_, lean_object* v___y_2136_){
_start:
{
lean_object* v___f_2138_; lean_object* v___f_2139_; lean_object* v___x_2140_; 
v___f_2138_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__8___boxed), 7, 4);
lean_closure_set(v___f_2138_, 0, v_val_2130_);
lean_closure_set(v___f_2138_, 1, v___f_2131_);
lean_closure_set(v___f_2138_, 2, v_param_2135_);
lean_closure_set(v___f_2138_, 3, v___x_2132_);
v___f_2139_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__9___boxed), 6, 3);
lean_closure_set(v___f_2139_, 0, v___f_2138_);
lean_closure_set(v___f_2139_, 1, v___f_2133_);
lean_closure_set(v___f_2139_, 2, v___x_2132_);
v___x_2140_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_val_2134_, v___f_2139_, v___y_2136_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10___boxed(lean_object* v_val_2141_, lean_object* v___f_2142_, lean_object* v___x_2143_, lean_object* v___f_2144_, lean_object* v_val_2145_, lean_object* v_param_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_){
_start:
{
lean_object* v_res_2149_; 
v_res_2149_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10(v_val_2141_, v___f_2142_, v___x_2143_, v___f_2144_, v_val_2145_, v_param_2146_, v___y_2147_);
lean_dec_ref(v___y_2147_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4(lean_object* v___x_2150_, lean_object* v_x_2151_){
_start:
{
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4___boxed(lean_object* v___x_2152_, lean_object* v_x_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__4(v___x_2152_, v_x_2153_);
lean_dec_ref(v_x_2153_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(lean_object* v_params_2157_){
_start:
{
lean_object* v___x_2158_; 
lean_inc(v_params_2157_);
v___x_2158_ = l_Lean_Lsp_instFromJsonInlayHintParams_fromJson(v_params_2157_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2174_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2174_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2174_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
uint8_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2172_; 
v___x_2163_ = 3;
v___x_2164_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__0));
v___x_2165_ = l_Lean_Json_compress(v_params_2157_);
v___x_2166_ = lean_string_append(v___x_2164_, v___x_2165_);
lean_dec_ref(v___x_2165_);
v___x_2167_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4___closed__1));
v___x_2168_ = lean_string_append(v___x_2166_, v___x_2167_);
v___x_2169_ = lean_string_append(v___x_2168_, v_a_2159_);
lean_dec(v_a_2159_);
v___x_2170_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2170_, 0, v___x_2169_);
lean_ctor_set_uint8(v___x_2170_, sizeof(void*)*1, v___x_2163_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2170_);
v___x_2172_ = v___x_2161_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2170_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
lean_dec(v_params_2157_);
v_a_2175_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2177_ = v___x_2158_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2158_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2175_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__0(lean_object* v_j_2183_){
_start:
{
lean_object* v___x_2184_; 
v___x_2184_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(v_j_2183_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2184_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2184_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2201_; 
v_a_2193_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2195_ = v___x_2184_;
v_isShared_2196_ = v_isSharedCheck_2201_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2184_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2201_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v_textDocument_2197_; lean_object* v___x_2199_; 
v_textDocument_2197_ = lean_ctor_get(v_a_2193_, 1);
lean_inc_ref(v_textDocument_2197_);
lean_dec(v_a_2193_);
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 0, v_textDocument_2197_);
v___x_2199_ = v___x_2195_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_textDocument_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2(lean_object* v_method_2202_, lean_object* v_inst_2203_, lean_object* v_onDidChange_2204_, lean_object* v_param_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_2202_, v___y_2206_, lean_box(0), v_inst_2203_, v___y_2207_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2211_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
lean_inc_ref(v___y_2207_);
v___x_2211_ = lean_apply_4(v_onDidChange_2204_, v_param_2205_, v_a_2210_, v___y_2207_, lean_box(0));
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2230_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2214_ = v___x_2211_;
v_isShared_2215_ = v_isSharedCheck_2230_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2211_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2230_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v_snd_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2228_; 
v_snd_2216_ = lean_ctor_get(v_a_2212_, 1);
v_isSharedCheck_2228_ = !lean_is_exclusive(v_a_2212_);
if (v_isSharedCheck_2228_ == 0)
{
lean_object* v_unused_2229_; 
v_unused_2229_ = lean_ctor_get(v_a_2212_, 0);
lean_dec(v_unused_2229_);
v___x_2218_ = v_a_2212_;
v_isShared_2219_ = v_isSharedCheck_2228_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_snd_2216_);
lean_dec(v_a_2212_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2228_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
lean_ctor_set(v___x_2218_, 0, v_inst_2203_);
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_inst_2203_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_snd_2216_);
v___x_2221_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2225_; 
v___x_2222_ = lean_box(0);
v___x_2223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
lean_ctor_set(v___x_2223_, 1, v___x_2221_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2223_);
v___x_2225_ = v___x_2214_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2223_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec(v_inst_2203_);
v_a_2231_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2211_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2211_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
lean_dec_ref(v_param_2205_);
lean_dec_ref(v_onDidChange_2204_);
lean_dec(v_inst_2203_);
v_a_2239_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2209_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2209_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2___boxed(lean_object* v_method_2247_, lean_object* v_inst_2248_, lean_object* v_onDidChange_2249_, lean_object* v_param_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2(v_method_2247_, v_inst_2248_, v_onDidChange_2249_, v_param_2250_, v___y_2251_, v___y_2252_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v_method_2247_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(size_t v_sz_2255_, size_t v_i_2256_, lean_object* v_bs_2257_){
_start:
{
uint8_t v___x_2258_; 
v___x_2258_ = lean_usize_dec_lt(v_i_2256_, v_sz_2255_);
if (v___x_2258_ == 0)
{
return v_bs_2257_;
}
else
{
lean_object* v_v_2259_; lean_object* v___x_2260_; lean_object* v_bs_x27_2261_; lean_object* v___x_2262_; size_t v___x_2263_; size_t v___x_2264_; lean_object* v___x_2265_; 
v_v_2259_ = lean_array_uget(v_bs_2257_, v_i_2256_);
v___x_2260_ = lean_unsigned_to_nat(0u);
v_bs_x27_2261_ = lean_array_uset(v_bs_2257_, v_i_2256_, v___x_2260_);
v___x_2262_ = l_Lean_Lsp_instToJsonInlayHint_toJson(v_v_2259_);
v___x_2263_ = ((size_t)1ULL);
v___x_2264_ = lean_usize_add(v_i_2256_, v___x_2263_);
v___x_2265_ = lean_array_uset(v_bs_x27_2261_, v_i_2256_, v___x_2262_);
v_i_2256_ = v___x_2264_;
v_bs_2257_ = v___x_2265_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8___boxed(lean_object* v_sz_2267_, lean_object* v_i_2268_, lean_object* v_bs_2269_){
_start:
{
size_t v_sz_boxed_2270_; size_t v_i_boxed_2271_; lean_object* v_res_2272_; 
v_sz_boxed_2270_ = lean_unbox_usize(v_sz_2267_);
lean_dec(v_sz_2267_);
v_i_boxed_2271_ = lean_unbox_usize(v_i_2268_);
lean_dec(v_i_2268_);
v_res_2272_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(v_sz_boxed_2270_, v_i_boxed_2271_, v_bs_2269_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6(lean_object* v_a_2273_){
_start:
{
size_t v_sz_2274_; size_t v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v_sz_2274_ = lean_array_size(v_a_2273_);
v___x_2275_ = ((size_t)0ULL);
v___x_2276_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6_spec__8(v_sz_2274_, v___x_2275_, v_a_2273_);
v___x_2277_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_params_2278_){
_start:
{
lean_object* v___x_2280_; 
v___x_2280_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__4(v_params_2278_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2280_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2280_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
lean_ctor_set_tag(v___x_2283_, 1);
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_a_2289_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2280_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2280_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set_tag(v___x_2291_, 0);
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_params_2297_, lean_object* v_a_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_params_2297_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1(lean_object* v_method_2300_, lean_object* v_inst_2301_, lean_object* v_handler_2302_, lean_object* v_param_2303_, lean_object* v_state_2304_, lean_object* v___y_2305_){
_start:
{
lean_object* v___x_2307_; 
v___x_2307_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_param_2303_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; lean_object* v___x_2309_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v___x_2307_, 1);
v___x_2309_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_2300_, v_state_2304_, lean_box(0), v_inst_2301_, v___y_2305_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2311_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
lean_inc_ref(v___y_2305_);
v___x_2311_ = lean_apply_4(v_handler_2302_, v_a_2308_, v_a_2310_, v___y_2305_, lean_box(0));
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2335_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2314_ = v___x_2311_;
v_isShared_2315_ = v_isSharedCheck_2335_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_a_2312_);
lean_dec(v___x_2311_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2335_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v_fst_2316_; lean_object* v_snd_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2334_; 
v_fst_2316_ = lean_ctor_get(v_a_2312_, 0);
v_snd_2317_ = lean_ctor_get(v_a_2312_, 1);
v_isSharedCheck_2334_ = !lean_is_exclusive(v_a_2312_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2319_ = v_a_2312_;
v_isShared_2320_ = v_isSharedCheck_2334_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_snd_2317_);
lean_inc(v_fst_2316_);
lean_dec(v_a_2312_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2334_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v_response_2321_; uint8_t v_isComplete_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2328_; 
v_response_2321_ = lean_ctor_get(v_fst_2316_, 0);
lean_inc(v_response_2321_);
v_isComplete_2322_ = lean_ctor_get_uint8(v_fst_2316_, sizeof(void*)*1);
lean_dec(v_fst_2316_);
v___x_2323_ = l_Lean_Array_toJson___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__6(v_response_2321_);
lean_inc(v___x_2323_);
v___x_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2323_);
v___x_2325_ = l_Lean_Json_compress(v___x_2323_);
v___x_2326_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2326_, 0, v___x_2324_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
lean_ctor_set_uint8(v___x_2326_, sizeof(void*)*2, v_isComplete_2322_);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 0, v_inst_2301_);
v___x_2328_ = v___x_2319_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_inst_2301_);
lean_ctor_set(v_reuseFailAlloc_2333_, 1, v_snd_2317_);
v___x_2328_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
lean_object* v___x_2329_; lean_object* v___x_2331_; 
v___x_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2326_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 0, v___x_2329_);
v___x_2331_ = v___x_2314_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
}
else
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
lean_dec(v_inst_2301_);
v_a_2336_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2311_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2311_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
else
{
lean_object* v_a_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
lean_dec(v_a_2308_);
lean_dec_ref(v_handler_2302_);
lean_dec(v_inst_2301_);
v_a_2344_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v___x_2309_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_a_2344_);
lean_dec(v___x_2309_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec_ref(v_handler_2302_);
lean_dec(v_inst_2301_);
v_a_2352_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2307_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2307_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1___boxed(lean_object* v_method_2360_, lean_object* v_inst_2361_, lean_object* v_handler_2362_, lean_object* v_param_2363_, lean_object* v_state_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1(v_method_2360_, v_inst_2361_, v_handler_2362_, v_param_2363_, v_state_2364_, v___y_2365_);
lean_dec_ref(v___y_2365_);
lean_dec(v_state_2364_);
lean_dec_ref(v_method_2360_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6(lean_object* v___f_2368_, lean_object* v___f_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = lean_st_ref_get(v___y_2370_);
v___x_2374_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_2373_, v___f_2368_, v___y_2371_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2384_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2377_ = v___x_2374_;
v_isShared_2378_ = v_isSharedCheck_2384_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_a_2375_);
lean_dec(v___x_2374_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2384_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
lean_inc(v_a_2375_);
v___x_2379_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2369_, v_a_2375_);
v___x_2380_ = lean_st_ref_swap(v___y_2370_, v___x_2379_);
lean_dec(v___x_2380_);
if (v_isShared_2378_ == 0)
{
v___x_2382_ = v___x_2377_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_a_2375_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
else
{
lean_dec_ref(v___f_2369_);
return v___x_2374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6___boxed(lean_object* v___f_2385_, lean_object* v___f_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6(v___f_2385_, v___f_2386_, v___y_2387_, v___y_2388_);
lean_dec_ref(v___y_2388_);
lean_dec(v___y_2387_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5(lean_object* v_val_2391_, lean_object* v___f_2392_, lean_object* v_param_2393_, lean_object* v_x_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2397_ = lean_st_ref_get(v_val_2391_);
lean_inc_ref(v___y_2395_);
v___x_2398_ = lean_apply_4(v___f_2392_, v_param_2393_, v___x_2397_, v___y_2395_, lean_box(0));
if (lean_obj_tag(v___x_2398_) == 0)
{
lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2409_; 
v_a_2399_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2401_ = v___x_2398_;
v_isShared_2402_ = v_isSharedCheck_2409_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2398_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2409_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v_fst_2403_; lean_object* v_snd_2404_; lean_object* v___x_2405_; lean_object* v___x_2407_; 
v_fst_2403_ = lean_ctor_get(v_a_2399_, 0);
lean_inc(v_fst_2403_);
v_snd_2404_ = lean_ctor_get(v_a_2399_, 1);
lean_inc(v_snd_2404_);
lean_dec(v_a_2399_);
v___x_2405_ = lean_st_ref_swap(v_val_2391_, v_snd_2404_);
lean_dec(v___x_2405_);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v_fst_2403_);
v___x_2407_ = v___x_2401_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_fst_2403_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
v_a_2410_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2398_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2398_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5___boxed(lean_object* v_val_2418_, lean_object* v___f_2419_, lean_object* v_param_2420_, lean_object* v_x_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5(v_val_2418_, v___f_2419_, v_param_2420_, v_x_2421_, v___y_2422_);
lean_dec_ref(v___y_2422_);
lean_dec(v_val_2418_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7(lean_object* v_val_2425_, lean_object* v___f_2426_, lean_object* v___f_2427_, lean_object* v_val_2428_, lean_object* v_param_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v___f_2432_; lean_object* v___f_2433_; lean_object* v___x_2434_; 
v___f_2432_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__5___boxed), 6, 3);
lean_closure_set(v___f_2432_, 0, v_val_2425_);
lean_closure_set(v___f_2432_, 1, v___f_2426_);
lean_closure_set(v___f_2432_, 2, v_param_2429_);
v___f_2433_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__6___boxed), 5, 2);
lean_closure_set(v___f_2433_, 0, v___f_2432_);
lean_closure_set(v___f_2433_, 1, v___f_2427_);
v___x_2434_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_val_2428_, v___f_2433_, v___y_2430_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7___boxed(lean_object* v_val_2435_, lean_object* v___f_2436_, lean_object* v___f_2437_, lean_object* v_val_2438_, lean_object* v_param_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7(v_val_2435_, v___f_2436_, v___f_2437_, v_val_2438_, v_param_2439_, v___y_2440_);
lean_dec_ref(v___y_2440_);
return v_res_2442_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = lean_box(0);
v___x_2451_ = lean_task_pure(v___x_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object* v_method_2452_, lean_object* v_completeness_2453_, lean_object* v_inst_2454_, lean_object* v_initState_2455_, lean_object* v_handler_2456_, lean_object* v_onDidChange_2457_){
_start:
{
lean_object* v___f_2459_; lean_object* v___f_2460_; lean_object* v___f_2461_; uint8_t v___x_2462_; 
v___f_2459_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc_n(v_inst_2454_, 2);
lean_inc_ref_n(v_method_2452_, 2);
v___f_2460_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_2460_, 0, v_method_2452_);
lean_closure_set(v___f_2460_, 1, v_inst_2454_);
lean_closure_set(v___f_2460_, 2, v_handler_2456_);
v___f_2461_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__2___boxed), 7, 3);
lean_closure_set(v___f_2461_, 0, v_method_2452_);
lean_closure_set(v___f_2461_, 1, v_inst_2454_);
lean_closure_set(v___f_2461_, 2, v_onDidChange_2457_);
v___x_2462_ = l_Lean_initializing();
if (v___x_2462_ == 0)
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
lean_dec_ref(v___f_2461_);
lean_dec_ref(v___f_2460_);
lean_dec(v_initState_2455_);
lean_dec(v_inst_2454_);
lean_dec(v_completeness_2453_);
v___x_2463_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_2464_ = lean_string_append(v___x_2463_, v_method_2452_);
lean_dec_ref(v_method_2452_);
v___x_2465_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__2));
v___x_2466_ = lean_string_append(v___x_2464_, v___x_2465_);
v___x_2467_ = lean_mk_io_user_error(v___x_2466_);
v___x_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
return v___x_2468_;
}
else
{
lean_object* v___x_2469_; lean_object* v___f_2470_; lean_object* v___f_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___f_2476_; lean_object* v___f_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2469_ = lean_box(0);
v___f_2470_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__3));
v___f_2471_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__4));
v___x_2472_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__5);
v___x_2473_ = l_Std_Mutex_new___redArg(v___x_2472_);
v___x_2474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2474_, 0, v_inst_2454_);
lean_ctor_set(v___x_2474_, 1, v_initState_2455_);
lean_inc_ref(v___x_2474_);
v___x_2475_ = lean_st_mk_ref(v___x_2474_);
lean_inc_ref_n(v___x_2473_, 2);
lean_inc_ref(v___f_2460_);
lean_inc_n(v___x_2475_, 2);
v___f_2476_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_2476_, 0, v___x_2475_);
lean_closure_set(v___f_2476_, 1, v___f_2460_);
lean_closure_set(v___f_2476_, 2, v___f_2470_);
lean_closure_set(v___f_2476_, 3, v___x_2473_);
lean_inc_ref(v___f_2461_);
v___f_2477_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___lam__10___boxed), 8, 5);
lean_closure_set(v___f_2477_, 0, v___x_2475_);
lean_closure_set(v___f_2477_, 1, v___f_2461_);
lean_closure_set(v___f_2477_, 2, v___x_2469_);
lean_closure_set(v___f_2477_, 3, v___f_2471_);
lean_closure_set(v___f_2477_, 4, v___x_2473_);
v___x_2478_ = l_Lean_Server_statefulRequestHandlers;
v___x_2479_ = lean_st_ref_take(v___x_2478_);
v___x_2480_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2480_, 0, v___f_2459_);
lean_ctor_set(v___x_2480_, 1, v___f_2460_);
lean_ctor_set(v___x_2480_, 2, v___f_2476_);
lean_ctor_set(v___x_2480_, 3, v___f_2461_);
lean_ctor_set(v___x_2480_, 4, v___f_2477_);
lean_ctor_set(v___x_2480_, 5, v___x_2473_);
lean_ctor_set(v___x_2480_, 6, v___x_2474_);
lean_ctor_set(v___x_2480_, 7, v___x_2475_);
lean_ctor_set(v___x_2480_, 8, v_completeness_2453_);
v___x_2481_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(v___x_2479_, v_method_2452_, v___x_2480_);
v___x_2482_ = lean_st_ref_put(v___x_2478_, v___x_2481_);
v___x_2483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2482_);
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_method_2484_, lean_object* v_completeness_2485_, lean_object* v_inst_2486_, lean_object* v_initState_2487_, lean_object* v_handler_2488_, lean_object* v_onDidChange_2489_, lean_object* v_a_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_method_2484_, v_completeness_2485_, v_inst_2486_, v_initState_2487_, v_handler_2488_, v_onDidChange_2489_);
return v_res_2491_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_keys_2492_, lean_object* v_i_2493_, lean_object* v_k_2494_){
_start:
{
lean_object* v___x_2495_; uint8_t v___x_2496_; 
v___x_2495_ = lean_array_get_size(v_keys_2492_);
v___x_2496_ = lean_nat_dec_lt(v_i_2493_, v___x_2495_);
if (v___x_2496_ == 0)
{
lean_dec(v_i_2493_);
return v___x_2496_;
}
else
{
lean_object* v_k_x27_2497_; uint8_t v___x_2498_; 
v_k_x27_2497_ = lean_array_fget_borrowed(v_keys_2492_, v_i_2493_);
v___x_2498_ = lean_string_dec_eq(v_k_2494_, v_k_x27_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_unsigned_to_nat(1u);
v___x_2500_ = lean_nat_add(v_i_2493_, v___x_2499_);
lean_dec(v_i_2493_);
v_i_2493_ = v___x_2500_;
goto _start;
}
else
{
lean_dec(v_i_2493_);
return v___x_2496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_keys_2502_, lean_object* v_i_2503_, lean_object* v_k_2504_){
_start:
{
uint8_t v_res_2505_; lean_object* v_r_2506_; 
v_res_2505_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_keys_2502_, v_i_2503_, v_k_2504_);
lean_dec_ref(v_k_2504_);
lean_dec_ref(v_keys_2502_);
v_r_2506_ = lean_box(v_res_2505_);
return v_r_2506_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2507_, size_t v_x_2508_, lean_object* v_x_2509_){
_start:
{
if (lean_obj_tag(v_x_2507_) == 0)
{
lean_object* v_es_2510_; lean_object* v___x_2511_; size_t v___x_2512_; size_t v___x_2513_; lean_object* v_j_2514_; lean_object* v___x_2515_; 
v_es_2510_ = lean_ctor_get(v_x_2507_, 0);
v___x_2511_ = lean_box(2);
v___x_2512_ = ((size_t)31ULL);
v___x_2513_ = lean_usize_land(v_x_2508_, v___x_2512_);
v_j_2514_ = lean_usize_to_nat(v___x_2513_);
v___x_2515_ = lean_array_get_borrowed(v___x_2511_, v_es_2510_, v_j_2514_);
lean_dec(v_j_2514_);
switch(lean_obj_tag(v___x_2515_))
{
case 0:
{
lean_object* v_key_2516_; uint8_t v___x_2517_; 
v_key_2516_ = lean_ctor_get(v___x_2515_, 0);
v___x_2517_ = lean_string_dec_eq(v_x_2509_, v_key_2516_);
return v___x_2517_;
}
case 1:
{
lean_object* v_node_2518_; size_t v___x_2519_; size_t v___x_2520_; 
v_node_2518_ = lean_ctor_get(v___x_2515_, 0);
v___x_2519_ = ((size_t)5ULL);
v___x_2520_ = lean_usize_shift_right(v_x_2508_, v___x_2519_);
v_x_2507_ = v_node_2518_;
v_x_2508_ = v___x_2520_;
goto _start;
}
default: 
{
uint8_t v___x_2522_; 
v___x_2522_ = 0;
return v___x_2522_;
}
}
}
else
{
lean_object* v_ks_2523_; lean_object* v___x_2524_; uint8_t v___x_2525_; 
v_ks_2523_ = lean_ctor_get(v_x_2507_, 0);
v___x_2524_ = lean_unsigned_to_nat(0u);
v___x_2525_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_ks_2523_, v___x_2524_, v_x_2509_);
return v___x_2525_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_x_2526_, lean_object* v_x_2527_, lean_object* v_x_2528_){
_start:
{
size_t v_x_3447__boxed_2529_; uint8_t v_res_2530_; lean_object* v_r_2531_; 
v_x_3447__boxed_2529_ = lean_unbox_usize(v_x_2527_);
lean_dec(v_x_2527_);
v_res_2530_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_x_2526_, v_x_3447__boxed_2529_, v_x_2528_);
lean_dec_ref(v_x_2528_);
lean_dec_ref(v_x_2526_);
v_r_2531_ = lean_box(v_res_2530_);
return v_r_2531_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_2532_, lean_object* v_x_2533_){
_start:
{
uint64_t v___x_2534_; size_t v___x_2535_; uint8_t v___x_2536_; 
v___x_2534_ = lean_string_hash(v_x_2533_);
v___x_2535_ = lean_uint64_to_usize(v___x_2534_);
v___x_2536_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_x_2532_, v___x_2535_, v_x_2533_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2537_, lean_object* v_x_2538_){
_start:
{
uint8_t v_res_2539_; lean_object* v_r_2540_; 
v_res_2539_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_2537_, v_x_2538_);
lean_dec_ref(v_x_2538_);
lean_dec_ref(v_x_2537_);
v_r_2540_ = lean_box(v_res_2539_);
return v_r_2540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_method_2542_, lean_object* v_completeness_2543_, lean_object* v_inst_2544_, lean_object* v_initState_2545_, lean_object* v_handler_2546_, lean_object* v_onDidChange_2547_){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2549_ = l_Lean_Server_requestHandlers;
v___x_2550_ = lean_st_ref_get(v___x_2549_);
v___x_2551_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v___x_2550_, v_method_2542_);
lean_dec(v___x_2550_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; 
v___x_2552_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_method_2542_, v_completeness_2543_, v_inst_2544_, v_initState_2545_, v_handler_2546_, v_onDidChange_2547_);
return v___x_2552_;
}
else
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
lean_dec_ref(v_onDidChange_2547_);
lean_dec_ref(v_handler_2546_);
lean_dec(v_initState_2545_);
lean_dec(v_inst_2544_);
lean_dec(v_completeness_2543_);
v___x_2553_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_2554_ = lean_string_append(v___x_2553_, v_method_2542_);
lean_dec_ref(v_method_2542_);
v___x_2555_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0));
v___x_2556_ = lean_string_append(v___x_2554_, v___x_2555_);
v___x_2557_ = lean_mk_io_user_error(v___x_2556_);
v___x_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
return v___x_2558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_method_2559_, lean_object* v_completeness_2560_, lean_object* v_inst_2561_, lean_object* v_initState_2562_, lean_object* v_handler_2563_, lean_object* v_onDidChange_2564_, lean_object* v_a_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(v_method_2559_, v_completeness_2560_, v_inst_2561_, v_initState_2562_, v_handler_2563_, v_onDidChange_2564_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(lean_object* v_method_2567_, lean_object* v_refreshMethod_2568_, lean_object* v_refreshIntervalMs_2569_, lean_object* v_inst_2570_, lean_object* v_initState_2571_, lean_object* v_handler_2572_, lean_object* v_onDidChange_2573_){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2575_, 0, v_refreshMethod_2568_);
lean_ctor_set(v___x_2575_, 1, v_refreshIntervalMs_2569_);
v___x_2576_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(v_method_2567_, v___x_2575_, v_inst_2570_, v_initState_2571_, v_handler_2572_, v_onDidChange_2573_);
return v___x_2576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_method_2577_, lean_object* v_refreshMethod_2578_, lean_object* v_refreshIntervalMs_2579_, lean_object* v_inst_2580_, lean_object* v_initState_2581_, lean_object* v_handler_2582_, lean_object* v_onDidChange_2583_, lean_object* v_a_2584_){
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(v_method_2577_, v_refreshMethod_2578_, v_refreshIntervalMs_2579_, v_inst_2580_, v_initState_2581_, v_handler_2582_, v_onDidChange_2583_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2591_ = ((lean_object*)(l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_InlayHints_3310298766____hygCtx___hyg_16_));
v___x_2592_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2593_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2594_ = lean_unsigned_to_nat(500u);
v___x_2595_ = ((lean_object*)(l_Lean_Server_FileWorker_InlayHintState_init));
v___x_2596_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2597_ = ((lean_object*)(l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_));
v___x_2598_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(v___x_2592_, v___x_2593_, v___x_2594_, v___x_2591_, v___x_2595_, v___x_2596_, v___x_2597_);
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2____boxed(lean_object* v_a_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_();
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0(lean_object* v_method_2601_, lean_object* v_refreshMethod_2602_, lean_object* v_refreshIntervalMs_2603_, lean_object* v_stateType_2604_, lean_object* v_inst_2605_, lean_object* v_initState_2606_, lean_object* v_handler_2607_, lean_object* v_onDidChange_2608_){
_start:
{
lean_object* v___x_2610_; 
v___x_2610_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___redArg(v_method_2601_, v_refreshMethod_2602_, v_refreshIntervalMs_2603_, v_inst_2605_, v_initState_2606_, v_handler_2607_, v_onDidChange_2608_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_2611_, lean_object* v_refreshMethod_2612_, lean_object* v_refreshIntervalMs_2613_, lean_object* v_stateType_2614_, lean_object* v_inst_2615_, lean_object* v_initState_2616_, lean_object* v_handler_2617_, lean_object* v_onDidChange_2618_, lean_object* v_a_2619_){
_start:
{
lean_object* v_res_2620_; 
v_res_2620_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0(v_method_2611_, v_refreshMethod_2612_, v_refreshIntervalMs_2613_, v_stateType_2614_, v_inst_2615_, v_initState_2616_, v_handler_2617_, v_onDidChange_2618_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_method_2621_, lean_object* v_completeness_2622_, lean_object* v_stateType_2623_, lean_object* v_inst_2624_, lean_object* v_initState_2625_, lean_object* v_handler_2626_, lean_object* v_onDidChange_2627_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___redArg(v_method_2621_, v_completeness_2622_, v_inst_2624_, v_initState_2625_, v_handler_2626_, v_onDidChange_2627_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_method_2630_, lean_object* v_completeness_2631_, lean_object* v_stateType_2632_, lean_object* v_inst_2633_, lean_object* v_initState_2634_, lean_object* v_handler_2635_, lean_object* v_onDidChange_2636_, lean_object* v_a_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0(v_method_2630_, v_completeness_2631_, v_stateType_2632_, v_inst_2633_, v_initState_2634_, v_handler_2635_, v_onDidChange_2636_);
return v_res_2638_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2639_, lean_object* v_x_2640_, lean_object* v_x_2641_){
_start:
{
uint8_t v___x_2642_; 
v___x_2642_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_2640_, v_x_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2643_, lean_object* v_x_2644_, lean_object* v_x_2645_){
_start:
{
uint8_t v_res_2646_; lean_object* v_r_2647_; 
v_res_2646_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_2643_, v_x_2644_, v_x_2645_);
lean_dec_ref(v_x_2645_);
lean_dec_ref(v_x_2644_);
v_r_2647_ = lean_box(v_res_2646_);
return v_r_2647_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7(lean_object* v_00_u03b1_2648_, lean_object* v_00_u03b2_2649_, lean_object* v_mutex_2650_, lean_object* v_k_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v___x_2654_; 
v___x_2654_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___redArg(v_mutex_2650_, v_k_2651_, v___y_2652_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_00_u03b1_2655_, lean_object* v_00_u03b2_2656_, lean_object* v_mutex_2657_, lean_object* v_k_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__7(v_00_u03b1_2655_, v_00_u03b2_2656_, v_mutex_2657_, v_k_2658_, v___y_2659_);
lean_dec_ref(v___y_2659_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_method_2662_, lean_object* v_completeness_2663_, lean_object* v_stateType_2664_, lean_object* v_inst_2665_, lean_object* v_initState_2666_, lean_object* v_handler_2667_, lean_object* v_onDidChange_2668_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_method_2662_, v_completeness_2663_, v_inst_2665_, v_initState_2666_, v_handler_2667_, v_onDidChange_2668_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object* v_method_2671_, lean_object* v_completeness_2672_, lean_object* v_stateType_2673_, lean_object* v_inst_2674_, lean_object* v_initState_2675_, lean_object* v_handler_2676_, lean_object* v_onDidChange_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_method_2671_, v_completeness_2672_, v_stateType_2673_, v_inst_2674_, v_initState_2675_, v_handler_2676_, v_onDidChange_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2680_, lean_object* v_x_2681_, size_t v_x_2682_, lean_object* v_x_2683_){
_start:
{
uint8_t v___x_2684_; 
v___x_2684_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_x_2681_, v_x_2682_, v_x_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2685_, lean_object* v_x_2686_, lean_object* v_x_2687_, lean_object* v_x_2688_){
_start:
{
size_t v_x_3611__boxed_2689_; uint8_t v_res_2690_; lean_object* v_r_2691_; 
v_x_3611__boxed_2689_ = lean_unbox_usize(v_x_2687_);
lean_dec(v_x_2687_);
v_res_2690_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b2_2685_, v_x_2686_, v_x_3611__boxed_2689_, v_x_2688_);
lean_dec_ref(v_x_2688_);
lean_dec_ref(v_x_2686_);
v_r_2691_ = lean_box(v_res_2690_);
return v_r_2691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(lean_object* v_params_2692_, lean_object* v_a_2693_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___redArg(v_params_2692_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_params_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__5(v_params_2696_, v_a_2697_);
lean_dec_ref(v_a_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8(lean_object* v_00_u03b2_2700_, lean_object* v_x_2701_, lean_object* v_x_2702_, lean_object* v_x_2703_){
_start:
{
lean_object* v___x_2704_; 
v___x_2704_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8___redArg(v_x_2701_, v_x_2702_, v_x_2703_);
return v___x_2704_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2705_, lean_object* v_keys_2706_, lean_object* v_vals_2707_, lean_object* v_heq_2708_, lean_object* v_i_2709_, lean_object* v_k_2710_){
_start:
{
uint8_t v___x_2711_; 
v___x_2711_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_keys_2706_, v_i_2709_, v_k_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2712_, lean_object* v_keys_2713_, lean_object* v_vals_2714_, lean_object* v_heq_2715_, lean_object* v_i_2716_, lean_object* v_k_2717_){
_start:
{
uint8_t v_res_2718_; lean_object* v_r_2719_; 
v_res_2718_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(v_00_u03b2_2712_, v_keys_2713_, v_vals_2714_, v_heq_2715_, v_i_2716_, v_k_2717_);
lean_dec_ref(v_k_2717_);
lean_dec_ref(v_vals_2714_);
lean_dec_ref(v_keys_2713_);
v_r_2719_ = lean_box(v_res_2718_);
return v_r_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11(lean_object* v_00_u03b2_2720_, lean_object* v_x_2721_, size_t v_x_2722_, size_t v_x_2723_, lean_object* v_x_2724_, lean_object* v_x_2725_){
_start:
{
lean_object* v___x_2726_; 
v___x_2726_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___redArg(v_x_2721_, v_x_2722_, v_x_2723_, v_x_2724_, v_x_2725_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2727_, lean_object* v_x_2728_, lean_object* v_x_2729_, lean_object* v_x_2730_, lean_object* v_x_2731_, lean_object* v_x_2732_){
_start:
{
size_t v_x_3637__boxed_2733_; size_t v_x_3638__boxed_2734_; lean_object* v_res_2735_; 
v_x_3637__boxed_2733_ = lean_unbox_usize(v_x_2729_);
lean_dec(v_x_2729_);
v_x_3638__boxed_2734_ = lean_unbox_usize(v_x_2730_);
lean_dec(v_x_2730_);
v_res_2735_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11(v_00_u03b2_2727_, v_x_2728_, v_x_3637__boxed_2733_, v_x_3638__boxed_2734_, v_x_2731_, v_x_2732_);
return v_res_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12(lean_object* v_00_u03b2_2736_, lean_object* v_n_2737_, lean_object* v_k_2738_, lean_object* v_v_2739_){
_start:
{
lean_object* v___x_2740_; 
v___x_2740_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12___redArg(v_n_2737_, v_k_2738_, v_v_2739_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13(lean_object* v_00_u03b2_2741_, size_t v_depth_2742_, lean_object* v_keys_2743_, lean_object* v_vals_2744_, lean_object* v_heq_2745_, lean_object* v_i_2746_, lean_object* v_entries_2747_){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___redArg(v_depth_2742_, v_keys_2743_, v_vals_2744_, v_i_2746_, v_entries_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13___boxed(lean_object* v_00_u03b2_2749_, lean_object* v_depth_2750_, lean_object* v_keys_2751_, lean_object* v_vals_2752_, lean_object* v_heq_2753_, lean_object* v_i_2754_, lean_object* v_entries_2755_){
_start:
{
size_t v_depth_boxed_2756_; lean_object* v_res_2757_; 
v_depth_boxed_2756_ = lean_unbox_usize(v_depth_2750_);
lean_dec(v_depth_2750_);
v_res_2757_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__13(v_00_u03b2_2749_, v_depth_boxed_2756_, v_keys_2751_, v_vals_2752_, v_heq_2753_, v_i_2754_, v_entries_2755_);
lean_dec_ref(v_vals_2752_);
lean_dec_ref(v_keys_2751_);
return v_res_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_2758_, lean_object* v_x_2759_, lean_object* v_x_2760_, lean_object* v_x_2761_, lean_object* v_x_2762_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2__spec__0_spec__0_spec__2_spec__8_spec__11_spec__12_spec__13___redArg(v_x_2759_, v_x_2760_, v_x_2761_, v_x_2762_);
return v___x_2763_;
}
}
lean_object* runtime_initialize_Lean_Server_GoTo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Requests(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_FileWorker_InlayHints(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_GoTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_FileWorker_InlayHints_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_InlayHints_453813542____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_FileWorker_InlayHints(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_GoTo(uint8_t builtin);
lean_object* initialize_Lean_Server_Requests(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_FileWorker_InlayHints(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_GoTo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker_InlayHints(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_FileWorker_InlayHints(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_FileWorker_InlayHints(builtin);
}
#ifdef __cplusplus
}
#endif
