// Lean compiler output
// Module: Std.Http.Server.Connection
// Imports: public import Std.Async.TCP public import Std.Async.ContextAsync public import Std.Http.Transport public import Std.Http.Transport.Outbox public import Std.Http.Protocol.H1 public import Std.Http.Server.Config public import Std.Http.Server.Handler
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
lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg(lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize(uint8_t, lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Stream_close(lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_CloseableChannel_new___redArg(lean_object*);
lean_object* l_Std_Http_Body_mkStream();
lean_object* l_Std_Http_Protocol_H1_Machine_canContinue(uint8_t, lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Channel_send___redArg(lean_object*, lean_object*);
lean_object* l_Std_Channel_recvSelector___redArg(lean_object*, lean_object*);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
lean_object* l_Std_Async_Selector_sleep(lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ByteArray_mkIterator(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_get_current_time();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(uint8_t, lean_object*);
lean_object* l_Std_Http_Body_Stream_send(lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Http_Protocol_H1_Machine_closeWithError(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_contentLength;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders(uint8_t, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head(uint8_t);
uint8_t l_ByteArray_isEmpty(lean_object*);
uint8_t l_Std_Http_Protocol_H1_Writer_instBEqState_beq(lean_object*, lean_object*);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(uint8_t, lean_object*, lean_object*);
uint8_t l_Std_Http_instBEqMethod_beq(uint8_t, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_rejectOutgoingFraming(uint8_t, lean_object*);
uint16_t l_Std_Http_Status_toCode(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Std_Http_Protocol_H1_Message_Head_headers(uint8_t, lean_object*);
uint8_t lean_uint16_dec_le(uint16_t, uint16_t);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
uint8_t l_Std_Http_Protocol_H1_Message_Head_version(uint8_t, lean_object*);
uint8_t l_Std_Http_instBEqVersion_beq(uint8_t, uint8_t);
lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
extern lean_object* l_Std_Http_Header_Name_date;
lean_object* l_Std_Time_DateTime_toHTTPDateString(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg(lean_object*);
uint8_t l_Std_Http_Internal_Outbox_writing___redArg(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object*);
lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object*);
lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead(uint8_t);
lean_object* lean_mk_empty_byte_array(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_Http_Config_toH1Config(lean_object*);
uint8_t l_Std_Http_Method_isSafe(uint8_t);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Functor_discard(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Channel_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Machine_step(uint8_t, lean_object*);
lean_object* l_Std_Http_Internal_Outbox_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_Http_Internal_Outbox_new___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Http"};
static const lean_object* l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "RemoteAddr"};
static const lean_object* l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(62, 74, 245, 198, 196, 207, 141, 173)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(3, 137, 82, 156, 27, 230, 60, 168)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_2),((lean_object*)&l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(136, 13, 149, 223, 202, 48, 50, 45)}};
static const lean_object* l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instImpl_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instTypeNameRemoteAddr = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]:"};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_Server_instToStringRemoteAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___closed__0 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instToStringRemoteAddr = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__1_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11;
static const lean_array_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__2_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__4_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__7_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__7_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__8_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__8_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__2_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__9_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__10;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Invalid status line"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Invalid header"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Timeout"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Entity too large"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "URI too long"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unsupported version"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Invalid chunk"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Connection closed"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Bad message"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Too many headers"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Headers too large"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Other error: "};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "request header timeout"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3;
static const lean_array_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4_value;
static const lean_array_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value;
static const lean_ctor_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6_value;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0(lean_object* v_addr_15_){
_start:
{
if (lean_obj_tag(v_addr_15_) == 0)
{
lean_object* v_addr_16_; lean_object* v_addr_17_; uint16_t v_port_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_addr_16_ = lean_ctor_get(v_addr_15_, 0);
v_addr_17_ = lean_ctor_get(v_addr_16_, 0);
v_port_18_ = lean_ctor_get_uint16(v_addr_16_, sizeof(void*)*1);
v___x_19_ = lean_uv_ntop_v4(v_addr_17_);
v___x_20_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0));
v___x_21_ = lean_string_append(v___x_19_, v___x_20_);
v___x_22_ = lean_uint16_to_nat(v_port_18_);
v___x_23_ = l_Nat_reprFast(v___x_22_);
v___x_24_ = lean_string_append(v___x_21_, v___x_23_);
lean_dec_ref(v___x_23_);
return v___x_24_;
}
else
{
lean_object* v_addr_25_; lean_object* v_addr_26_; uint16_t v_port_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_addr_25_ = lean_ctor_get(v_addr_15_, 0);
v_addr_26_ = lean_ctor_get(v_addr_25_, 0);
v_port_27_ = lean_ctor_get_uint16(v_addr_25_, sizeof(void*)*1);
v___x_28_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1));
v___x_29_ = lean_uv_ntop_v6(v_addr_26_);
v___x_30_ = lean_string_append(v___x_28_, v___x_29_);
lean_dec_ref(v___x_29_);
v___x_31_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2));
v___x_32_ = lean_string_append(v___x_30_, v___x_31_);
v___x_33_ = lean_uint16_to_nat(v_port_27_);
v___x_34_ = l_Nat_reprFast(v___x_33_);
v___x_35_ = lean_string_append(v___x_32_, v___x_34_);
lean_dec_ref(v___x_34_);
return v___x_35_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed(lean_object* v_addr_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Http_Server_instToStringRemoteAddr___lam__0(v_addr_36_);
lean_dec_ref(v_addr_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(lean_object* v_x_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_obj_tag_nat(v_x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg___boxed(lean_object* v_x_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(v_x_42_);
lean_dec(v_x_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(lean_object* v_00_u03b2_44_, lean_object* v_x_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_tag_nat(v_x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___boxed(lean_object* v_00_u03b2_47_, lean_object* v_x_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(v_00_u03b2_47_, v_x_48_);
lean_dec(v_x_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(lean_object* v_t_50_, lean_object* v_k_51_){
_start:
{
switch(lean_obj_tag(v_t_50_))
{
case 0:
{
lean_object* v_x_52_; lean_object* v___x_53_; 
v_x_52_ = lean_ctor_get(v_t_50_, 0);
lean_inc(v_x_52_);
lean_dec_ref_known(v_t_50_, 1);
v___x_53_ = lean_apply_1(v_k_51_, v_x_52_);
return v___x_53_;
}
case 1:
{
lean_object* v_x_54_; lean_object* v___x_55_; 
v_x_54_ = lean_ctor_get(v_t_50_, 0);
lean_inc(v_x_54_);
lean_dec_ref_known(v_t_50_, 1);
v___x_55_ = lean_apply_1(v_k_51_, v_x_54_);
return v___x_55_;
}
case 2:
{
uint8_t v_x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_x_56_ = lean_ctor_get_uint8(v_t_50_, 0);
lean_dec_ref_known(v_t_50_, 0);
v___x_57_ = lean_box(v_x_56_);
v___x_58_ = lean_apply_1(v_k_51_, v___x_57_);
return v___x_58_;
}
case 3:
{
lean_object* v_x_59_; lean_object* v___x_60_; 
v_x_59_ = lean_ctor_get(v_t_50_, 0);
lean_inc_ref(v_x_59_);
lean_dec_ref_known(v_t_50_, 1);
v___x_60_ = lean_apply_1(v_k_51_, v_x_59_);
return v___x_60_;
}
default: 
{
lean_dec(v_t_50_);
return v_k_51_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(lean_object* v_00_u03b2_61_, lean_object* v_motive_62_, lean_object* v_ctorIdx_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_k_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_64_, v_k_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___boxed(lean_object* v_00_u03b2_68_, lean_object* v_motive_69_, lean_object* v_ctorIdx_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_k_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(v_00_u03b2_68_, v_motive_69_, v_ctorIdx_70_, v_t_71_, v_h_72_, v_k_73_);
lean_dec(v_ctorIdx_70_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim___redArg(lean_object* v_t_75_, lean_object* v_bytes_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_75_, v_bytes_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim(lean_object* v_00_u03b2_78_, lean_object* v_motive_79_, lean_object* v_t_80_, lean_object* v_h_81_, lean_object* v_bytes_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_80_, v_bytes_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim___redArg(lean_object* v_t_84_, lean_object* v_responseBody_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_84_, v_responseBody_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim(lean_object* v_00_u03b2_87_, lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_responseBody_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_89_, v_responseBody_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim___redArg(lean_object* v_t_93_, lean_object* v_bodyInterest_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_93_, v_bodyInterest_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim(lean_object* v_00_u03b2_96_, lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_bodyInterest_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_98_, v_bodyInterest_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim___redArg(lean_object* v_t_102_, lean_object* v_response_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_102_, v_response_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim(lean_object* v_00_u03b2_105_, lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_response_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_107_, v_response_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim___redArg(lean_object* v_t_111_, lean_object* v_timeout_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_111_, v_timeout_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim(lean_object* v_00_u03b2_114_, lean_object* v_motive_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_timeout_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_116_, v_timeout_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim___redArg(lean_object* v_t_120_, lean_object* v_keepAliveTimeout_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_120_, v_keepAliveTimeout_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim(lean_object* v_00_u03b2_123_, lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_keepAliveTimeout_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_125_, v_keepAliveTimeout_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim___redArg(lean_object* v_t_129_, lean_object* v_shutdown_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_129_, v_shutdown_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim(lean_object* v_00_u03b2_132_, lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_shutdown_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_134_, v_shutdown_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim___redArg(lean_object* v_t_138_, lean_object* v_close_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_138_, v_close_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim(lean_object* v_00_u03b2_141_, lean_object* v_motive_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_close_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_143_, v_close_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(lean_object* v_x_155_){
_start:
{
if (lean_obj_tag(v_x_155_) == 0)
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_167_; 
v_a_159_ = lean_ctor_get(v_x_155_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_155_);
if (v_isSharedCheck_167_ == 0)
{
v___x_161_ = v_x_155_;
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v_x_155_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_164_; 
if (v_isShared_162_ == 0)
{
v___x_164_ = v___x_161_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_159_);
v___x_164_ = v_reuseFailAlloc_166_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; 
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
}
}
else
{
lean_object* v_a_168_; 
v_a_168_ = lean_ctor_get(v_x_155_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v_x_155_, 1);
if (lean_obj_tag(v_a_168_) == 1)
{
lean_object* v_val_169_; 
v_val_169_ = lean_ctor_get(v_a_168_, 0);
lean_inc(v_val_169_);
lean_dec_ref_known(v_a_168_, 1);
if (lean_obj_tag(v_val_169_) == 0)
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_170_;
}
else
{
lean_dec(v_val_169_);
goto v___jp_157_;
}
}
else
{
lean_dec(v_a_168_);
goto v___jp_157_;
}
}
v___jp_157_:
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1));
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed(lean_object* v_x_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(v_x_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_188_; 
v_a_180_ = lean_ctor_get(v_x_178_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_188_ == 0)
{
v___x_182_ = v_x_178_;
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v_x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
}
else
{
lean_object* v___x_189_; 
lean_dec_ref_known(v_x_178_, 1);
v___x_189_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1));
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed(lean_object* v_x_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(v_x_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(lean_object* v_inst_193_, lean_object* v_handler_194_, lean_object* v___f_195_, lean_object* v_x_196_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
lean_object* v_a_198_; lean_object* v_onFailure_199_; lean_object* v___x_200_; uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_a_198_ = lean_ctor_get(v_x_196_, 0);
lean_inc(v_a_198_);
lean_dec_ref_known(v_x_196_, 1);
v_onFailure_199_ = lean_ctor_get(v_inst_193_, 2);
lean_inc_ref(v_onFailure_199_);
lean_dec_ref(v_inst_193_);
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = 0;
v___x_202_ = lean_apply_3(v_onFailure_199_, v_handler_194_, v_a_198_, lean_box(0));
v___x_203_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_200_, v___x_201_, v___x_202_, v___f_195_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; 
lean_dec_ref(v___f_195_);
lean_dec(v_handler_194_);
lean_dec_ref(v_inst_193_);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v_x_196_);
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed(lean_object* v_inst_205_, lean_object* v_handler_206_, lean_object* v___f_207_, lean_object* v_x_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(v_inst_205_, v_handler_206_, v___f_207_, v_x_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(lean_object* v_x_211_){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_213_, 0, v_x_211_);
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed(lean_object* v_x_216_, lean_object* v___y_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(v_x_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(uint8_t v_x_219_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_221_, 0, v_x_219_);
v___x_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed(lean_object* v_x_224_, lean_object* v___y_225_){
_start:
{
uint8_t v_x_3743__boxed_226_; lean_object* v_res_227_; 
v_x_3743__boxed_226_ = lean_unbox(v_x_224_);
v_res_227_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(v_x_3743__boxed_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(lean_object* v_x_228_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v_x_228_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
v___x_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed(lean_object* v_x_233_, lean_object* v___y_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(v_x_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(lean_object* v_x_236_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v_x_236_);
v___x_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed(lean_object* v_x_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(v_x_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(lean_object* v_x_244_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed(lean_object* v_x_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(v_x_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(lean_object* v_x_254_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1));
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed(lean_object* v_x_257_, lean_object* v___y_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(v_x_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(lean_object* v___f_260_, lean_object* v_response_261_, lean_object* v___x_262_, lean_object* v___f_263_, lean_object* v_requestBody_264_, lean_object* v___f_265_, lean_object* v_responseBody_266_, lean_object* v_inst_267_, lean_object* v___f_268_, lean_object* v_____r_269_, lean_object* v_selectables_270_){
_start:
{
lean_object* v_selectables_273_; lean_object* v_selectables_279_; lean_object* v_selectables_285_; 
if (lean_obj_tag(v_responseBody_266_) == 1)
{
lean_object* v_val_290_; lean_object* v_recvSelector_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v_selectables_294_; 
v_val_290_ = lean_ctor_get(v_responseBody_266_, 0);
lean_inc(v_val_290_);
lean_dec_ref_known(v_responseBody_266_, 1);
v_recvSelector_291_ = lean_ctor_get(v_inst_267_, 3);
lean_inc_ref(v_recvSelector_291_);
lean_dec_ref(v_inst_267_);
v___x_292_ = lean_apply_1(v_recvSelector_291_, v_val_290_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___f_268_);
v_selectables_294_ = lean_array_push(v_selectables_270_, v___x_293_);
v_selectables_285_ = v_selectables_294_;
goto v___jp_284_;
}
else
{
lean_dec_ref(v___f_268_);
lean_dec_ref(v_inst_267_);
lean_dec(v_responseBody_266_);
v_selectables_285_ = v_selectables_270_;
goto v___jp_284_;
}
v___jp_272_:
{
lean_object* v___x_274_; uint8_t v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = 0;
v___x_276_ = l_Std_Async_Selectable_one___redArg(v_selectables_273_);
v___x_277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_274_, v___x_275_, v___x_276_, v___f_260_);
return v___x_277_;
}
v___jp_278_:
{
if (lean_obj_tag(v_response_261_) == 1)
{
lean_object* v_val_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_selectables_283_; 
v_val_280_ = lean_ctor_get(v_response_261_, 0);
lean_inc(v_val_280_);
lean_dec_ref_known(v_response_261_, 1);
v___x_281_ = l_Std_Channel_recvSelector___redArg(v___x_262_, v_val_280_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___f_263_);
v_selectables_283_ = lean_array_push(v_selectables_279_, v___x_282_);
v_selectables_273_ = v_selectables_283_;
goto v___jp_272_;
}
else
{
lean_dec_ref(v___f_263_);
lean_dec_ref(v___x_262_);
lean_dec(v_response_261_);
v_selectables_273_ = v_selectables_279_;
goto v___jp_272_;
}
}
v___jp_284_:
{
if (lean_obj_tag(v_requestBody_264_) == 1)
{
lean_object* v_val_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_selectables_289_; 
v_val_286_ = lean_ctor_get(v_requestBody_264_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v_requestBody_264_, 1);
v___x_287_ = l_Std_Http_Body_Stream_interestSelector(v_val_286_);
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v___f_265_);
v_selectables_289_ = lean_array_push(v_selectables_285_, v___x_288_);
v_selectables_279_ = v_selectables_289_;
goto v___jp_278_;
}
else
{
lean_dec_ref(v___f_265_);
lean_dec(v_requestBody_264_);
v_selectables_279_ = v_selectables_285_;
goto v___jp_278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed(lean_object* v___f_295_, lean_object* v_response_296_, lean_object* v___x_297_, lean_object* v___f_298_, lean_object* v_requestBody_299_, lean_object* v___f_300_, lean_object* v_responseBody_301_, lean_object* v_inst_302_, lean_object* v___f_303_, lean_object* v_____r_304_, lean_object* v_selectables_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_295_, v_response_296_, v___x_297_, v___f_298_, v_requestBody_299_, v___f_300_, v_responseBody_301_, v_inst_302_, v___f_303_, v_____r_304_, v_selectables_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(lean_object* v_token_308_, lean_object* v___f_309_, lean_object* v_x_310_){
_start:
{
lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = 0;
v___x_314_ = l_Std_CancellationToken_getCancellationReason(v_token_308_);
v___x_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
v___x_317_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_312_, v___x_313_, v___x_316_, v___f_309_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed(lean_object* v_token_318_, lean_object* v___f_319_, lean_object* v_x_320_, lean_object* v___y_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(v_token_318_, v___f_319_, v_x_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(lean_object* v___f_323_, lean_object* v_selectables_324_, lean_object* v___f_325_, lean_object* v_x_326_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_336_; 
lean_dec_ref(v___f_325_);
lean_dec_ref(v_selectables_324_);
lean_dec_ref(v___f_323_);
v_a_328_ = lean_ctor_get(v_x_326_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v_x_326_);
if (v_isSharedCheck_336_ == 0)
{
v___x_330_ = v_x_326_;
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v_x_326_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_335_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_334_; 
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
}
else
{
lean_object* v_a_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_337_ = lean_ctor_get(v_x_326_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v_x_326_, 1);
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v_a_337_);
lean_ctor_set(v___x_338_, 1, v___f_323_);
v___x_339_ = lean_array_push(v_selectables_324_, v___x_338_);
v___x_340_ = lean_box(0);
v___x_341_ = lean_apply_3(v___f_325_, v___x_340_, v___x_339_, lean_box(0));
return v___x_341_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed(lean_object* v___f_342_, lean_object* v_selectables_343_, lean_object* v___f_344_, lean_object* v_x_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(v___f_342_, v_selectables_343_, v___f_344_, v_x_345_);
return v_res_347_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(1000000000u);
v___x_349_ = lean_nat_to_int(v___x_348_);
return v___x_349_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(1000u);
v___x_351_ = lean_nat_to_int(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(1000000u);
v___x_353_ = lean_nat_to_int(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(lean_object* v_val_354_, lean_object* v___f_355_, lean_object* v_x_356_){
_start:
{
if (lean_obj_tag(v_x_356_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v___f_355_);
v_a_358_ = lean_ctor_get(v_x_356_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v_x_356_);
if (v_isSharedCheck_366_ == 0)
{
v___x_360_ = v_x_356_;
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v_x_356_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_365_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; 
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
}
else
{
lean_object* v_a_367_; lean_object* v_second_368_; lean_object* v_nano_369_; lean_object* v_second_370_; lean_object* v_nano_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_nanos_376_; lean_object* v___x_377_; lean_object* v_nanos_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_second_381_; lean_object* v_nano_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v_millis_387_; lean_object* v___x_388_; uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_a_367_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_a_367_);
lean_dec_ref_known(v_x_356_, 1);
v_second_368_ = lean_ctor_get(v_a_367_, 0);
lean_inc(v_second_368_);
v_nano_369_ = lean_ctor_get(v_a_367_, 1);
lean_inc(v_nano_369_);
lean_dec(v_a_367_);
v_second_370_ = lean_ctor_get(v_val_354_, 0);
v_nano_371_ = lean_ctor_get(v_val_354_, 1);
v___x_372_ = lean_int_neg(v_second_368_);
lean_dec(v_second_368_);
v___x_373_ = lean_int_neg(v_nano_369_);
lean_dec(v_nano_369_);
v___x_374_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_375_ = lean_int_mul(v_second_370_, v___x_374_);
v_nanos_376_ = lean_int_add(v___x_375_, v_nano_371_);
lean_dec(v___x_375_);
v___x_377_ = lean_int_mul(v___x_372_, v___x_374_);
lean_dec(v___x_372_);
v_nanos_378_ = lean_int_add(v___x_377_, v___x_373_);
lean_dec(v___x_373_);
lean_dec(v___x_377_);
v___x_379_ = lean_int_add(v_nanos_376_, v_nanos_378_);
lean_dec(v_nanos_378_);
lean_dec(v_nanos_376_);
v___x_380_ = l_Std_Time_Duration_ofNanoseconds(v___x_379_);
lean_dec(v___x_379_);
v_second_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_second_381_);
v_nano_382_ = lean_ctor_get(v___x_380_, 1);
lean_inc(v_nano_382_);
lean_dec_ref(v___x_380_);
v___x_383_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1);
v___x_384_ = lean_int_mul(v_second_381_, v___x_383_);
lean_dec(v_second_381_);
v___x_385_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_386_ = lean_int_ediv(v_nano_382_, v___x_385_);
lean_dec(v_nano_382_);
v_millis_387_ = lean_int_add(v___x_384_, v___x_386_);
lean_dec(v___x_386_);
lean_dec(v___x_384_);
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = 0;
v___x_390_ = l_Std_Async_Selector_sleep(v_millis_387_);
lean_dec(v_millis_387_);
v___x_391_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_388_, v___x_389_, v___x_390_, v___f_355_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed(lean_object* v_val_392_, lean_object* v___f_393_, lean_object* v_x_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(v_val_392_, v___f_393_, v_x_394_);
lean_dec_ref(v_val_392_);
return v_res_396_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = l_instInhabitedError;
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(lean_object* v_inst_407_, lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_config_410_, lean_object* v_handler_411_, lean_object* v_sources_412_){
_start:
{
lean_object* v___y_415_; uint8_t v___y_416_; lean_object* v___y_417_; lean_object* v_val_418_; lean_object* v_socket_421_; lean_object* v_expect_422_; lean_object* v_response_423_; lean_object* v_responseBody_424_; lean_object* v_requestBody_425_; lean_object* v_timeout_426_; lean_object* v_keepAliveTimeout_427_; lean_object* v_headerTimeout_428_; lean_object* v_connectionContext_429_; lean_object* v___f_430_; lean_object* v___f_431_; lean_object* v___f_432_; lean_object* v___f_433_; lean_object* v___f_434_; lean_object* v___f_435_; lean_object* v___f_436_; lean_object* v___f_437_; lean_object* v___f_438_; lean_object* v___x_439_; lean_object* v___f_440_; lean_object* v___y_442_; lean_object* v___y_492_; 
v_socket_421_ = lean_ctor_get(v_sources_412_, 0);
lean_inc(v_socket_421_);
v_expect_422_ = lean_ctor_get(v_sources_412_, 1);
lean_inc(v_expect_422_);
v_response_423_ = lean_ctor_get(v_sources_412_, 2);
lean_inc_n(v_response_423_, 2);
v_responseBody_424_ = lean_ctor_get(v_sources_412_, 3);
lean_inc_n(v_responseBody_424_, 2);
v_requestBody_425_ = lean_ctor_get(v_sources_412_, 4);
lean_inc_n(v_requestBody_425_, 2);
v_timeout_426_ = lean_ctor_get(v_sources_412_, 5);
lean_inc(v_timeout_426_);
v_keepAliveTimeout_427_ = lean_ctor_get(v_sources_412_, 6);
lean_inc(v_keepAliveTimeout_427_);
v_headerTimeout_428_ = lean_ctor_get(v_sources_412_, 7);
lean_inc(v_headerTimeout_428_);
v_connectionContext_429_ = lean_ctor_get(v_sources_412_, 8);
lean_inc_ref(v_connectionContext_429_);
lean_dec_ref(v_sources_412_);
v___f_430_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0));
v___f_431_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1));
v___f_432_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_432_, 0, v_inst_408_);
lean_closure_set(v___f_432_, 1, v_handler_411_);
lean_closure_set(v___f_432_, 2, v___f_431_);
v___f_433_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2));
v___f_434_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3));
v___f_435_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4));
v___f_436_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5));
v___f_437_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6));
v___f_438_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7));
v___x_439_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8);
lean_inc_ref(v_inst_409_);
lean_inc_ref(v___f_432_);
v___f_440_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed), 12, 9);
lean_closure_set(v___f_440_, 0, v___f_432_);
lean_closure_set(v___f_440_, 1, v_response_423_);
lean_closure_set(v___f_440_, 2, v___x_439_);
lean_closure_set(v___f_440_, 3, v___f_433_);
lean_closure_set(v___f_440_, 4, v_requestBody_425_);
lean_closure_set(v___f_440_, 5, v___f_434_);
lean_closure_set(v___f_440_, 6, v_responseBody_424_);
lean_closure_set(v___f_440_, 7, v_inst_409_);
lean_closure_set(v___f_440_, 8, v___f_435_);
if (lean_obj_tag(v_expect_422_) == 0)
{
lean_object* v_defaultPayloadBytes_495_; 
v_defaultPayloadBytes_495_ = lean_ctor_get(v_config_410_, 8);
lean_inc(v_defaultPayloadBytes_495_);
v___y_492_ = v_defaultPayloadBytes_495_;
goto v___jp_491_;
}
else
{
lean_object* v_val_496_; 
v_val_496_ = lean_ctor_get(v_expect_422_, 0);
lean_inc(v_val_496_);
lean_dec_ref_known(v_expect_422_, 1);
v___y_492_ = v_val_496_;
goto v___jp_491_;
}
v___jp_414_:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v_val_418_);
v___x_420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_415_, v___y_416_, v___x_419_, v___y_417_);
return v___x_420_;
}
v___jp_441_:
{
lean_object* v_token_443_; lean_object* v___f_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_selectables_449_; 
v_token_443_ = lean_ctor_get(v_connectionContext_429_, 1);
lean_inc_ref_n(v_token_443_, 2);
lean_dec_ref(v_connectionContext_429_);
v___f_444_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed), 4, 2);
lean_closure_set(v___f_444_, 0, v_token_443_);
lean_closure_set(v___f_444_, 1, v___f_430_);
v___x_445_ = l_Std_CancellationToken_selector(v_token_443_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
lean_ctor_set(v___x_446_, 1, v___f_444_);
v___x_447_ = lean_unsigned_to_nat(1u);
v___x_448_ = lean_mk_empty_array_with_capacity(v___x_447_);
v_selectables_449_ = lean_array_push(v___x_448_, v___x_446_);
if (lean_obj_tag(v_socket_421_) == 1)
{
lean_object* v_val_450_; lean_object* v_recvSelector_451_; uint64_t v_expectedBytes_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v_selectables_456_; 
lean_dec_ref(v___f_432_);
lean_dec(v_requestBody_425_);
lean_dec(v_responseBody_424_);
lean_dec(v_response_423_);
lean_dec_ref(v_inst_409_);
v_val_450_ = lean_ctor_get(v_socket_421_, 0);
lean_inc(v_val_450_);
lean_dec_ref_known(v_socket_421_, 1);
v_recvSelector_451_ = lean_ctor_get(v_inst_407_, 2);
lean_inc_ref(v_recvSelector_451_);
lean_dec_ref(v_inst_407_);
v_expectedBytes_452_ = lean_uint64_of_nat(v___y_442_);
lean_dec(v___y_442_);
v___x_453_ = lean_box_uint64(v_expectedBytes_452_);
v___x_454_ = lean_apply_2(v_recvSelector_451_, v_val_450_, v___x_453_);
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___f_436_);
v_selectables_456_ = lean_array_push(v_selectables_449_, v___x_455_);
if (lean_obj_tag(v_keepAliveTimeout_427_) == 0)
{
if (lean_obj_tag(v_headerTimeout_428_) == 1)
{
lean_object* v_val_457_; lean_object* v___f_458_; lean_object* v___f_459_; lean_object* v___x_460_; uint8_t v___x_461_; lean_object* v___x_462_; 
lean_dec(v_timeout_426_);
v_val_457_ = lean_ctor_get(v_headerTimeout_428_, 0);
lean_inc(v_val_457_);
lean_dec_ref_known(v_headerTimeout_428_, 1);
v___f_458_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_458_, 0, v___f_437_);
lean_closure_set(v___f_458_, 1, v_selectables_456_);
lean_closure_set(v___f_458_, 2, v___f_440_);
v___f_459_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed), 4, 2);
lean_closure_set(v___f_459_, 0, v_val_457_);
lean_closure_set(v___f_459_, 1, v___f_458_);
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = 0;
v___x_462_ = lean_get_current_time();
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_462_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_462_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set_tag(v___x_465_, 1);
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
v___y_415_ = v___x_460_;
v___y_416_ = v___x_461_;
v___y_417_ = v___f_459_;
v_val_418_ = v___x_468_;
goto v___jp_414_;
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_a_471_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_462_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_462_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set_tag(v___x_473_, 0);
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
v___y_415_ = v___x_460_;
v___y_416_ = v___x_461_;
v___y_417_ = v___f_459_;
v_val_418_ = v___x_476_;
goto v___jp_414_;
}
}
}
}
else
{
lean_object* v___f_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec(v_headerTimeout_428_);
v___f_479_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_479_, 0, v___f_437_);
lean_closure_set(v___f_479_, 1, v_selectables_456_);
lean_closure_set(v___f_479_, 2, v___f_440_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = 0;
v___x_482_ = l_Std_Async_Selector_sleep(v_timeout_426_);
lean_dec(v_timeout_426_);
v___x_483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_480_, v___x_481_, v___x_482_, v___f_479_);
return v___x_483_;
}
}
else
{
lean_object* v___f_484_; lean_object* v___x_485_; uint8_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec_ref_known(v_keepAliveTimeout_427_, 1);
lean_dec(v_headerTimeout_428_);
v___f_484_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_484_, 0, v___f_438_);
lean_closure_set(v___f_484_, 1, v_selectables_456_);
lean_closure_set(v___f_484_, 2, v___f_440_);
v___x_485_ = lean_unsigned_to_nat(0u);
v___x_486_ = 0;
v___x_487_ = l_Std_Async_Selector_sleep(v_timeout_426_);
lean_dec(v_timeout_426_);
v___x_488_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_485_, v___x_486_, v___x_487_, v___f_484_);
return v___x_488_;
}
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec(v___y_442_);
lean_dec_ref(v___f_440_);
lean_dec(v_headerTimeout_428_);
lean_dec(v_keepAliveTimeout_427_);
lean_dec(v_timeout_426_);
lean_dec(v_socket_421_);
lean_dec_ref(v_inst_407_);
v___x_489_ = lean_box(0);
v___x_490_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_432_, v_response_423_, v___x_439_, v___f_433_, v_requestBody_425_, v___f_434_, v_responseBody_424_, v_inst_409_, v___f_435_, v___x_489_, v_selectables_449_);
return v___x_490_;
}
}
v___jp_491_:
{
lean_object* v_maximumRecvSize_493_; uint8_t v___x_494_; 
v_maximumRecvSize_493_ = lean_ctor_get(v_config_410_, 7);
lean_inc(v_maximumRecvSize_493_);
lean_dec_ref(v_config_410_);
v___x_494_ = lean_nat_dec_le(v___y_492_, v_maximumRecvSize_493_);
if (v___x_494_ == 0)
{
lean_dec(v___y_492_);
v___y_442_ = v_maximumRecvSize_493_;
goto v___jp_441_;
}
else
{
lean_dec(v_maximumRecvSize_493_);
v___y_442_ = v___y_492_;
goto v___jp_441_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___boxed(lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_config_500_, lean_object* v_handler_501_, lean_object* v_sources_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_497_, v_inst_498_, v_inst_499_, v_config_500_, v_handler_501_, v_sources_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(lean_object* v_00_u03b1_505_, lean_object* v_00_u03c3_506_, lean_object* v_00_u03b2_507_, lean_object* v_inst_508_, lean_object* v_inst_509_, lean_object* v_inst_510_, lean_object* v_config_511_, lean_object* v_handler_512_, lean_object* v_sources_513_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_508_, v_inst_509_, v_inst_510_, v_config_511_, v_handler_512_, v_sources_513_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___boxed(lean_object* v_00_u03b1_516_, lean_object* v_00_u03c3_517_, lean_object* v_00_u03b2_518_, lean_object* v_inst_519_, lean_object* v_inst_520_, lean_object* v_inst_521_, lean_object* v_config_522_, lean_object* v_handler_523_, lean_object* v_sources_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(v_00_u03b1_516_, v_00_u03c3_517_, v_00_u03b2_518_, v_inst_519_, v_inst_520_, v_inst_521_, v_config_522_, v_handler_523_, v_sources_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(lean_object* v_machine_527_, lean_object* v_x_528_){
_start:
{
lean_object* v___y_531_; uint8_t v___y_532_; 
if (lean_obj_tag(v_x_528_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_545_; 
lean_dec_ref(v_machine_527_);
v_a_537_ = lean_ctor_get(v_x_528_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v_x_528_);
if (v_isSharedCheck_545_ == 0)
{
v___x_539_ = v_x_528_;
v_isShared_540_ = v_isSharedCheck_545_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v_x_528_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_545_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_544_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; 
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
return v___x_543_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___y_548_; uint8_t v___x_554_; 
v_a_546_ = lean_ctor_get(v_x_528_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v_x_528_, 1);
v___x_554_ = lean_unbox(v_a_546_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_box(40);
v___y_548_ = v___x_555_;
goto v___jp_547_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_box(0);
v___y_548_ = v___x_556_;
goto v___jp_547_;
}
v___jp_547_:
{
uint8_t v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_549_ = 0;
lean_inc(v___y_548_);
v___x_550_ = l_Std_Http_Protocol_H1_Machine_canContinue(v___x_549_, v_machine_527_, v___y_548_);
v___x_551_ = lean_unbox(v_a_546_);
lean_dec(v_a_546_);
if (v___x_551_ == 0)
{
uint8_t v___x_552_; 
v___x_552_ = 1;
v___y_531_ = v___x_550_;
v___y_532_ = v___x_552_;
goto v___jp_530_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = 0;
v___y_531_ = v___x_550_;
v___y_532_ = v___x_553_;
goto v___jp_530_;
}
}
}
v___jp_530_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_533_ = lean_box(v___y_532_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___y_531_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed(lean_object* v_machine_557_, lean_object* v_x_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(v_machine_557_, v_x_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(uint8_t v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_box(v___y_561_);
v___x_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed(lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
uint8_t v___y_1391__boxed_568_; lean_object* v_res_569_; 
v___y_1391__boxed_568_ = lean_unbox(v___y_566_);
v_res_569_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(v___y_1391__boxed_568_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2(lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_572_; 
v_a_571_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v_x_570_, 1);
v___x_572_ = lean_task_pure(v_a_571_);
return v___x_572_;
}
else
{
lean_object* v_a_573_; 
v_a_573_ = lean_ctor_get(v_x_570_, 0);
lean_inc_ref(v_a_573_);
lean_dec_ref_known(v_x_570_, 1);
return v_a_573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(lean_object* v_a_574_, lean_object* v_x_575_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
uint8_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec_ref_known(v_x_575_, 1);
v___x_577_ = 0;
v___x_578_ = lean_box(0);
v___x_579_ = lean_box(v___x_577_);
v___x_580_ = l_Std_Channel_send___redArg(v_a_574_, v___x_579_);
lean_dec_ref(v___x_580_);
return v___x_578_;
}
else
{
lean_object* v_a_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_a_581_ = lean_ctor_get(v_x_575_, 0);
lean_inc(v_a_581_);
lean_dec_ref_known(v_x_575_, 1);
v___x_582_ = lean_box(0);
v___x_583_ = l_Std_Channel_send___redArg(v_a_574_, v_a_581_);
lean_dec_ref(v___x_583_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed(lean_object* v_a_584_, lean_object* v_x_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(v_a_584_, v_x_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(uint8_t v___x_588_, lean_object* v_x_589_){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = lean_box(v___x_588_);
v___x_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
v___x_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed(lean_object* v___x_594_, lean_object* v_x_595_, lean_object* v___y_596_){
_start:
{
uint8_t v___x_1435__boxed_597_; lean_object* v_res_598_; 
v___x_1435__boxed_597_ = lean_unbox(v___x_594_);
v_res_598_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(v___x_1435__boxed_597_, v_x_595_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(lean_object* v_connectionContext_599_, uint8_t v___x_600_, lean_object* v_a_601_, lean_object* v___f_602_, lean_object* v___f_603_, lean_object* v___x_604_, uint8_t v___x_605_, lean_object* v___f_606_, lean_object* v_x_607_){
_start:
{
if (lean_obj_tag(v_x_607_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref(v___f_606_);
lean_dec(v___x_604_);
lean_dec_ref(v___f_603_);
lean_dec_ref(v___f_602_);
lean_dec_ref(v_a_601_);
lean_dec_ref(v_connectionContext_599_);
v_a_609_ = lean_ctor_get(v_x_607_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v_x_607_);
if (v_isSharedCheck_617_ == 0)
{
v___x_611_ = v_x_607_;
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v_x_607_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_616_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___x_615_; 
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
}
else
{
lean_object* v_a_618_; lean_object* v_token_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_a_618_ = lean_ctor_get(v_x_607_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v_x_607_, 1);
v_token_619_ = lean_ctor_get(v_connectionContext_599_, 1);
lean_inc_ref(v_token_619_);
lean_dec_ref(v_connectionContext_599_);
v___x_620_ = lean_box(v___x_600_);
v___x_621_ = l_Std_Channel_recvSelector___redArg(v___x_620_, v_a_601_);
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
lean_ctor_set(v___x_622_, 1, v___f_602_);
v___x_623_ = l_Std_CancellationToken_selector(v_token_619_);
lean_inc_ref(v___f_603_);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v___f_603_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v_a_618_);
lean_ctor_set(v___x_625_, 1, v___f_603_);
v___x_626_ = lean_unsigned_to_nat(3u);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_626_);
v___x_628_ = lean_array_push(v___x_627_, v___x_622_);
v___x_629_ = lean_array_push(v___x_628_, v___x_624_);
v___x_630_ = lean_array_push(v___x_629_, v___x_625_);
v___x_631_ = l_Std_Async_Selectable_one___redArg(v___x_630_);
v___x_632_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_604_, v___x_605_, v___x_631_, v___f_606_);
return v___x_632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed(lean_object* v_connectionContext_633_, lean_object* v___x_634_, lean_object* v_a_635_, lean_object* v___f_636_, lean_object* v___f_637_, lean_object* v___x_638_, lean_object* v___x_639_, lean_object* v___f_640_, lean_object* v_x_641_, lean_object* v___y_642_){
_start:
{
uint8_t v___x_1450__boxed_643_; uint8_t v___x_1455__boxed_644_; lean_object* v_res_645_; 
v___x_1450__boxed_643_ = lean_unbox(v___x_634_);
v___x_1455__boxed_644_ = lean_unbox(v___x_639_);
v_res_645_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(v_connectionContext_633_, v___x_1450__boxed_643_, v_a_635_, v___f_636_, v___f_637_, v___x_638_, v___x_1455__boxed_644_, v___f_640_, v_x_641_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(lean_object* v_config_646_, lean_object* v___x_647_, uint8_t v___x_648_, lean_object* v___f_649_, lean_object* v_x_650_){
_start:
{
if (lean_obj_tag(v_x_650_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_660_; 
lean_dec_ref(v___f_649_);
lean_dec(v___x_647_);
v_a_652_ = lean_ctor_get(v_x_650_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v_x_650_);
if (v_isSharedCheck_660_ == 0)
{
v___x_654_ = v_x_650_;
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v_x_650_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_659_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; 
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
}
}
else
{
lean_object* v_lingeringTimeout_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
lean_dec_ref_known(v_x_650_, 1);
v_lingeringTimeout_661_ = lean_ctor_get(v_config_646_, 4);
v___x_662_ = l_Std_Async_Selector_sleep(v_lingeringTimeout_661_);
v___x_663_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_647_, v___x_648_, v___x_662_, v___f_649_);
return v___x_663_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed(lean_object* v_config_664_, lean_object* v___x_665_, lean_object* v___x_666_, lean_object* v___f_667_, lean_object* v_x_668_, lean_object* v___y_669_){
_start:
{
uint8_t v___x_1524__boxed_670_; lean_object* v_res_671_; 
v___x_1524__boxed_670_ = lean_unbox(v___x_666_);
v_res_671_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(v_config_664_, v___x_665_, v___x_1524__boxed_670_, v___f_667_, v_x_668_);
lean_dec_ref(v_config_664_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(lean_object* v_connectionContext_675_, uint8_t v___x_676_, lean_object* v_a_677_, lean_object* v___f_678_, lean_object* v___x_679_, lean_object* v___f_680_, lean_object* v_config_681_, lean_object* v___f_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v___f_682_);
lean_dec_ref(v_config_681_);
lean_dec_ref(v___f_680_);
lean_dec(v___x_679_);
lean_dec_ref(v___f_678_);
lean_dec_ref(v_a_677_);
lean_dec_ref(v_connectionContext_675_);
v_a_685_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_683_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v_x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_711_; 
v_a_694_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_711_ == 0)
{
v___x_696_ = v_x_683_;
v_isShared_697_ = v_isSharedCheck_711_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v_x_683_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_711_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
uint8_t v___x_698_; lean_object* v___f_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___f_702_; lean_object* v___x_703_; lean_object* v___f_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_698_ = 0;
v___f_699_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0));
v___x_700_ = lean_box(v___x_676_);
v___x_701_ = lean_box(v___x_698_);
lean_inc_n(v___x_679_, 3);
v___f_702_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed), 10, 8);
lean_closure_set(v___f_702_, 0, v_connectionContext_675_);
lean_closure_set(v___f_702_, 1, v___x_700_);
lean_closure_set(v___f_702_, 2, v_a_677_);
lean_closure_set(v___f_702_, 3, v___f_678_);
lean_closure_set(v___f_702_, 4, v___f_699_);
lean_closure_set(v___f_702_, 5, v___x_679_);
lean_closure_set(v___f_702_, 6, v___x_701_);
lean_closure_set(v___f_702_, 7, v___f_680_);
v___x_703_ = lean_box(v___x_698_);
v___f_704_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_704_, 0, v_config_681_);
lean_closure_set(v___f_704_, 1, v___x_679_);
lean_closure_set(v___f_704_, 2, v___x_703_);
lean_closure_set(v___f_704_, 3, v___f_702_);
v___x_705_ = l_BaseIO_chainTask___redArg(v_a_694_, v___f_682_, v___x_679_, v___x_698_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_705_);
v___x_707_ = v___x_696_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_710_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
v___x_709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_679_, v___x_698_, v___x_708_, v___f_704_);
return v___x_709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed(lean_object* v_connectionContext_712_, lean_object* v___x_713_, lean_object* v_a_714_, lean_object* v___f_715_, lean_object* v___x_716_, lean_object* v___f_717_, lean_object* v_config_718_, lean_object* v___f_719_, lean_object* v_x_720_, lean_object* v___y_721_){
_start:
{
uint8_t v___x_1564__boxed_722_; lean_object* v_res_723_; 
v___x_1564__boxed_722_ = lean_unbox(v___x_713_);
v_res_723_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(v_connectionContext_712_, v___x_1564__boxed_722_, v_a_714_, v___f_715_, v___x_716_, v___f_717_, v_config_718_, v___f_719_, v_x_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(lean_object* v_inst_724_, lean_object* v_handler_725_, lean_object* v_head_726_, lean_object* v_connectionContext_727_, uint8_t v___x_728_, lean_object* v___f_729_, lean_object* v___f_730_, lean_object* v_config_731_, lean_object* v___f_732_, lean_object* v_x_733_){
_start:
{
if (lean_obj_tag(v_x_733_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_743_; 
lean_dec_ref(v___f_732_);
lean_dec_ref(v_config_731_);
lean_dec_ref(v___f_730_);
lean_dec_ref(v___f_729_);
lean_dec_ref(v_connectionContext_727_);
lean_dec_ref(v_head_726_);
lean_dec(v_handler_725_);
lean_dec_ref(v_inst_724_);
v_a_735_ = lean_ctor_get(v_x_733_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_743_ == 0)
{
v___x_737_ = v_x_733_;
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v_x_733_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_742_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; 
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
return v___x_741_;
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_764_; 
v_a_744_ = lean_ctor_get(v_x_733_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_764_ == 0)
{
v___x_746_ = v_x_733_;
v_isShared_747_ = v_isSharedCheck_764_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v_x_733_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_764_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v_onContinue_748_; lean_object* v___f_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___f_753_; uint8_t v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_760_; 
v_onContinue_748_ = lean_ctor_get(v_inst_724_, 3);
lean_inc_ref(v_onContinue_748_);
lean_dec_ref(v_inst_724_);
lean_inc(v_a_744_);
v___f_749_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_749_, 0, v_a_744_);
v___x_750_ = lean_apply_2(v_onContinue_748_, v_handler_725_, v_head_726_);
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = lean_box(v___x_728_);
v___f_753_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_753_, 0, v_connectionContext_727_);
lean_closure_set(v___f_753_, 1, v___x_752_);
lean_closure_set(v___f_753_, 2, v_a_744_);
lean_closure_set(v___f_753_, 3, v___f_729_);
lean_closure_set(v___f_753_, 4, v___x_751_);
lean_closure_set(v___f_753_, 5, v___f_730_);
lean_closure_set(v___f_753_, 6, v_config_731_);
lean_closure_set(v___f_753_, 7, v___f_749_);
v___x_754_ = 0;
v___x_755_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_755_, 0, lean_box(0));
lean_closure_set(v___x_755_, 1, v___x_750_);
v___x_756_ = lean_io_as_task(v___x_755_, v___x_751_);
v___x_757_ = 1;
v___x_758_ = lean_task_bind(v___x_756_, v___f_732_, v___x_751_, v___x_757_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_758_);
v___x_760_ = v___x_746_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_758_);
v___x_760_ = v_reuseFailAlloc_763_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
v___x_762_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_751_, v___x_754_, v___x_761_, v___f_753_);
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object* v_inst_765_, lean_object* v_handler_766_, lean_object* v_head_767_, lean_object* v_connectionContext_768_, lean_object* v___x_769_, lean_object* v___f_770_, lean_object* v___f_771_, lean_object* v_config_772_, lean_object* v___f_773_, lean_object* v_x_774_, lean_object* v___y_775_){
_start:
{
uint8_t v___x_1647__boxed_776_; lean_object* v_res_777_; 
v___x_1647__boxed_776_ = lean_unbox(v___x_769_);
v_res_777_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(v_inst_765_, v_handler_766_, v_head_767_, v_connectionContext_768_, v___x_1647__boxed_776_, v___f_770_, v___f_771_, v_config_772_, v___f_773_, v_x_774_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object* v_inst_780_, lean_object* v_handler_781_, lean_object* v_machine_782_, lean_object* v_head_783_, lean_object* v_config_784_, lean_object* v_connectionContext_785_){
_start:
{
lean_object* v___f_787_; lean_object* v___f_788_; lean_object* v___f_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___f_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___f_787_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_787_, 0, v_machine_782_);
v___f_788_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0));
v___f_789_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1));
v___x_790_ = 0;
v___x_791_ = lean_box(v___x_790_);
v___f_792_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed), 11, 9);
lean_closure_set(v___f_792_, 0, v_inst_780_);
lean_closure_set(v___f_792_, 1, v_handler_781_);
lean_closure_set(v___f_792_, 2, v_head_783_);
lean_closure_set(v___f_792_, 3, v_connectionContext_785_);
lean_closure_set(v___f_792_, 4, v___x_791_);
lean_closure_set(v___f_792_, 5, v___f_788_);
lean_closure_set(v___f_792_, 6, v___f_787_);
lean_closure_set(v___f_792_, 7, v_config_784_);
lean_closure_set(v___f_792_, 8, v___f_789_);
v___x_793_ = lean_box(0);
v___x_794_ = lean_unsigned_to_nat(0u);
v___x_795_ = l_Std_CloseableChannel_new___redArg(v___x_793_);
v___x_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
v___x_798_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_794_, v___x_790_, v___x_797_, v___f_792_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object* v_inst_799_, lean_object* v_handler_800_, lean_object* v_machine_801_, lean_object* v_head_802_, lean_object* v_config_803_, lean_object* v_connectionContext_804_, lean_object* v_a_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_799_, v_handler_800_, v_machine_801_, v_head_802_, v_config_803_, v_connectionContext_804_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object* v_00_u03c3_807_, lean_object* v_inst_808_, lean_object* v_handler_809_, lean_object* v_machine_810_, lean_object* v_head_811_, lean_object* v_config_812_, lean_object* v_connectionContext_813_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_808_, v_handler_809_, v_machine_810_, v_head_811_, v_config_812_, v_connectionContext_813_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object* v_00_u03c3_816_, lean_object* v_inst_817_, lean_object* v_handler_818_, lean_object* v_machine_819_, lean_object* v_head_820_, lean_object* v_config_821_, lean_object* v_connectionContext_822_, lean_object* v_a_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(v_00_u03c3_816_, v_inst_817_, v_handler_818_, v_machine_819_, v_head_820_, v_config_821_, v_connectionContext_822_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__1(lean_object* v_a_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = lean_nat_to_int(v_a_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__2(lean_object* v_a_827_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Rat_ofInt(v_a_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(lean_object* v_tz_829_, lean_object* v_a_830_, lean_object* v___x_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_offset_833_; lean_object* v_second_834_; lean_object* v_nano_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v_nanos_839_; lean_object* v___x_840_; lean_object* v_nanos_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_offset_833_ = lean_ctor_get(v_tz_829_, 0);
v_second_834_ = lean_ctor_get(v_a_830_, 0);
v_nano_835_ = lean_ctor_get(v_a_830_, 1);
v___x_836_ = lean_nat_to_int(v___x_831_);
v___x_837_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_838_ = lean_int_mul(v_second_834_, v___x_837_);
v_nanos_839_ = lean_int_add(v___x_838_, v_nano_835_);
lean_dec(v___x_838_);
v___x_840_ = lean_int_mul(v_offset_833_, v___x_837_);
v_nanos_841_ = lean_int_add(v___x_840_, v___x_836_);
lean_dec(v___x_836_);
lean_dec(v___x_840_);
v___x_842_ = lean_int_add(v_nanos_839_, v_nanos_841_);
lean_dec(v_nanos_841_);
lean_dec(v_nanos_839_);
v___x_843_ = l_Std_Time_Duration_ofNanoseconds(v___x_842_);
lean_dec(v___x_842_);
v___x_844_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed(lean_object* v_tz_845_, lean_object* v_a_846_, lean_object* v___x_847_, lean_object* v_x_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0(v_tz_845_, v_a_846_, v___x_847_, v_x_848_);
lean_dec_ref(v_a_846_);
lean_dec_ref(v_tz_845_);
return v_res_849_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = lean_nat_to_int(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__2));
v___x_856_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__0);
v___x_857_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(v___x_856_, v___x_855_, v___x_855_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(lean_object* v_headers_858_, lean_object* v_status_859_, uint8_t v_version_860_, lean_object* v_x_861_){
_start:
{
if (lean_obj_tag(v_x_861_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_871_; 
lean_dec(v_status_859_);
lean_dec_ref(v_headers_858_);
v_a_863_ = lean_ctor_get(v_x_861_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v_x_861_);
if (v_isSharedCheck_871_ == 0)
{
v___x_865_ = v_x_861_;
v_isShared_866_ = v_isSharedCheck_871_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v_x_861_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_871_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_870_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; 
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
return v___x_869_;
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_892_; 
v_a_872_ = lean_ctor_get(v_x_861_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v_x_861_);
if (v_isSharedCheck_892_ == 0)
{
v___x_874_ = v_x_861_;
v_isShared_875_ = v_isSharedCheck_892_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v_x_861_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_892_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_tz_878_; lean_object* v___f_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_876_ = lean_unsigned_to_nat(0u);
v___x_877_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___closed__3);
v_tz_878_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_877_, v_a_872_);
lean_inc(v_a_872_);
lean_inc_ref(v_tz_878_);
v___f_879_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__0___boxed), 4, 3);
lean_closure_set(v___f_879_, 0, v_tz_878_);
lean_closure_set(v___f_879_, 1, v_a_872_);
lean_closure_set(v___f_879_, 2, v___x_876_);
v___x_880_ = lean_mk_thunk(v___f_879_);
v___x_881_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
lean_ctor_set(v___x_881_, 1, v_a_872_);
lean_ctor_set(v___x_881_, 2, v___x_877_);
lean_ctor_set(v___x_881_, 3, v_tz_878_);
v___x_882_ = l_Std_Http_Header_Name_date;
v___x_883_ = l_Std_Time_DateTime_toHTTPDateString(v___x_881_);
v___x_884_ = l_Std_Http_Header_Value_ofString_x21(v___x_883_);
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_882_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = lean_array_push(v_headers_858_, v___x_885_);
v___x_887_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_887_, 0, v_status_859_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
lean_ctor_set_uint8(v___x_887_, sizeof(void*)*2, v_version_860_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_887_);
v___x_889_ = v___x_874_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_887_);
v___x_889_ = v_reuseFailAlloc_891_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
lean_object* v___x_890_; 
v___x_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed(lean_object* v_headers_893_, lean_object* v_status_894_, lean_object* v_version_895_, lean_object* v_x_896_, lean_object* v___y_897_){
_start:
{
uint8_t v_version_boxed_898_; lean_object* v_res_899_; 
v_version_boxed_898_ = lean_unbox(v_version_895_);
v_res_899_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1(v_headers_893_, v_status_894_, v_version_boxed_898_, v_x_896_);
return v_res_899_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3(lean_object* v_as_900_, size_t v_i_901_, size_t v_stop_902_){
_start:
{
uint8_t v___x_903_; 
v___x_903_ = lean_usize_dec_eq(v_i_901_, v_stop_902_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; lean_object* v_fst_905_; lean_object* v___x_906_; uint8_t v___x_907_; 
v___x_904_ = lean_array_uget_borrowed(v_as_900_, v_i_901_);
v_fst_905_ = lean_ctor_get(v___x_904_, 0);
v___x_906_ = l_Std_Http_Header_Name_date;
v___x_907_ = lean_string_dec_eq(v_fst_905_, v___x_906_);
if (v___x_907_ == 0)
{
size_t v___x_908_; size_t v___x_909_; 
v___x_908_ = ((size_t)1ULL);
v___x_909_ = lean_usize_add(v_i_901_, v___x_908_);
v_i_901_ = v___x_909_;
goto _start;
}
else
{
return v___x_907_;
}
}
else
{
uint8_t v___x_911_; 
v___x_911_ = 0;
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3___boxed(lean_object* v_as_912_, lean_object* v_i_913_, lean_object* v_stop_914_){
_start:
{
size_t v_i_boxed_915_; size_t v_stop_boxed_916_; uint8_t v_res_917_; lean_object* v_r_918_; 
v_i_boxed_915_ = lean_unbox_usize(v_i_913_);
lean_dec(v_i_913_);
v_stop_boxed_916_ = lean_unbox_usize(v_stop_914_);
lean_dec(v_stop_914_);
v_res_917_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3(v_as_912_, v_i_boxed_915_, v_stop_boxed_916_);
lean_dec_ref(v_as_912_);
v_r_918_ = lean_box(v_res_917_);
return v_r_918_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(lean_object* v_config_919_, lean_object* v_head_920_){
_start:
{
uint8_t v_generateDate_925_; 
v_generateDate_925_ = lean_ctor_get_uint8(v_config_919_, sizeof(void*)*24 + 1);
if (v_generateDate_925_ == 0)
{
goto v___jp_922_;
}
else
{
lean_object* v_status_926_; uint8_t v_version_927_; lean_object* v_headers_928_; lean_object* v___x_929_; lean_object* v___f_930_; lean_object* v___y_932_; uint8_t v___y_933_; lean_object* v_val_934_; uint8_t v___y_938_; lean_object* v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v_status_926_ = lean_ctor_get(v_head_920_, 0);
v_version_927_ = lean_ctor_get_uint8(v_head_920_, sizeof(void*)*2);
v_headers_928_ = lean_ctor_get(v_head_920_, 1);
v___x_929_ = lean_box(v_version_927_);
lean_inc(v_status_926_);
lean_inc_ref(v_headers_928_);
v___f_930_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___lam__1___boxed), 5, 3);
lean_closure_set(v___f_930_, 0, v_headers_928_);
lean_closure_set(v___f_930_, 1, v_status_926_);
lean_closure_set(v___f_930_, 2, v___x_929_);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lean_array_get_size(v_headers_928_);
v___x_959_ = lean_nat_dec_lt(v___x_957_, v___x_958_);
if (v___x_959_ == 0)
{
lean_dec_ref(v_head_920_);
v___y_938_ = v___x_959_;
goto v___jp_937_;
}
else
{
size_t v___x_960_; size_t v___x_961_; uint8_t v___x_962_; 
v___x_960_ = ((size_t)0ULL);
v___x_961_ = lean_usize_of_nat(v___x_958_);
v___x_962_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__3(v_headers_928_, v___x_960_, v___x_961_);
if (v___x_962_ == 0)
{
lean_dec_ref(v_head_920_);
v___y_938_ = v___x_962_;
goto v___jp_937_;
}
else
{
lean_dec_ref(v___f_930_);
goto v___jp_922_;
}
}
v___jp_931_:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_935_, 0, v_val_934_);
v___x_936_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_932_, v___y_933_, v___x_935_, v___f_930_);
return v___x_936_;
}
v___jp_937_:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_unsigned_to_nat(0u);
v___x_940_ = lean_get_current_time();
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 1);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
v___y_932_ = v___x_939_;
v___y_933_ = v___y_938_;
v_val_934_ = v___x_946_;
goto v___jp_931_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
v_a_949_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_940_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_940_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
lean_ctor_set_tag(v___x_951_, 0);
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
v___y_932_ = v___x_939_;
v___y_933_ = v___y_938_;
v_val_934_ = v___x_954_;
goto v___jp_931_;
}
}
}
}
}
v___jp_922_:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_923_, 0, v_head_920_);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead___boxed(lean_object* v_config_963_, lean_object* v_head_964_, lean_object* v_a_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_963_, v_head_964_);
lean_dec_ref(v_config_963_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead_spec__0(lean_object* v_a_967_){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_nat_to_int(v_a_967_);
v___x_969_ = l_Rat_ofInt(v___x_968_);
return v___x_969_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object* v_x_970_){
_start:
{
lean_object* v_fst_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v_fst_971_ = lean_ctor_get(v_x_970_, 0);
v___x_972_ = l_Std_Http_Header_Name_contentLength;
v___x_973_ = lean_string_dec_eq(v_fst_971_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_974_ = l_Std_Http_Header_Name_transferEncoding;
v___x_975_ = lean_string_dec_eq(v_fst_971_, v___x_974_);
return v___x_975_;
}
else
{
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object* v_x_976_){
_start:
{
uint8_t v_res_977_; lean_object* v_r_978_; 
v_res_977_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(v_x_976_);
lean_dec_ref(v_x_976_);
v_r_978_ = lean_box(v_res_977_);
return v_r_978_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object* v___y_979_, lean_object* v_____r_980_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_982_ = lean_box(0);
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v___y_979_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object* v___y_986_, lean_object* v_____r_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(v___y_986_, v_____r_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object* v___f_990_, lean_object* v_x_991_){
_start:
{
if (lean_obj_tag(v_x_991_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1001_; 
lean_dec_ref(v___f_990_);
v_a_993_ = lean_ctor_get(v_x_991_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_x_991_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_995_ = v_x_991_;
v_isShared_996_ = v_isSharedCheck_1001_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v_x_991_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1001_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_1000_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; 
v___x_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
return v___x_999_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1003_; 
v_a_1002_ = lean_ctor_get(v_x_991_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v_x_991_, 1);
v___x_1003_ = lean_apply_2(v___f_990_, v_a_1002_, lean_box(0));
return v___x_1003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object* v___f_1004_, lean_object* v_x_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(v___f_1004_, v_x_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object* v_close_1008_, lean_object* v_body_1009_, lean_object* v___f_1010_, lean_object* v___f_1011_, lean_object* v_x_1012_){
_start:
{
if (lean_obj_tag(v_x_1012_) == 0)
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1022_; 
lean_dec_ref(v___f_1011_);
lean_dec_ref(v___f_1010_);
lean_dec(v_body_1009_);
lean_dec_ref(v_close_1008_);
v_a_1014_ = lean_ctor_get(v_x_1012_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_x_1012_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1016_ = v_x_1012_;
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v_x_1012_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
lean_object* v___x_1020_; 
v___x_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
return v___x_1020_;
}
}
}
else
{
lean_object* v_a_1023_; uint8_t v___x_1024_; 
v_a_1023_ = lean_ctor_get(v_x_1012_, 0);
lean_inc(v_a_1023_);
lean_dec_ref_known(v_x_1012_, 1);
v___x_1024_ = lean_unbox(v_a_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; lean_object* v___x_1028_; 
lean_dec_ref(v___f_1011_);
v___x_1025_ = lean_unsigned_to_nat(0u);
v___x_1026_ = lean_apply_2(v_close_1008_, v_body_1009_, lean_box(0));
v___x_1027_ = lean_unbox(v_a_1023_);
lean_dec(v_a_1023_);
v___x_1028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1025_, v___x_1027_, v___x_1026_, v___f_1010_);
return v___x_1028_;
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
lean_dec(v_a_1023_);
lean_dec_ref(v___f_1010_);
lean_dec(v_body_1009_);
lean_dec_ref(v_close_1008_);
v___x_1029_ = lean_box(0);
v___x_1030_ = lean_apply_2(v___f_1011_, v___x_1029_, lean_box(0));
return v___x_1030_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object* v_close_1031_, lean_object* v_body_1032_, lean_object* v___f_1033_, lean_object* v___f_1034_, lean_object* v_x_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(v_close_1031_, v_body_1032_, v___f_1033_, v___f_1034_, v_x_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object* v___x_1038_, lean_object* v_x_1039_){
_start:
{
lean_object* v_fst_1040_; uint8_t v___x_1041_; 
v_fst_1040_ = lean_ctor_get(v_x_1039_, 0);
v___x_1041_ = lean_string_dec_eq(v_fst_1040_, v___x_1038_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object* v___x_1042_, lean_object* v_x_1043_){
_start:
{
uint8_t v_res_1044_; lean_object* v_r_1045_; 
v_res_1044_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(v___x_1042_, v_x_1043_);
lean_dec_ref(v_x_1043_);
lean_dec_ref(v___x_1042_);
v_r_1045_ = lean_box(v_res_1044_);
return v_r_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5(lean_object* v___x_1046_, lean_object* v_x1_1047_, lean_object* v_x2_1048_){
_start:
{
lean_object* v_fst_1049_; uint8_t v___x_1050_; 
v_fst_1049_ = lean_ctor_get(v_x2_1048_, 0);
v___x_1050_ = lean_string_dec_eq(v_fst_1049_, v___x_1046_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_array_push(v_x1_1047_, v_x2_1048_);
return v___x_1051_;
}
else
{
lean_dec_ref(v_x2_1048_);
return v_x1_1047_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed(lean_object* v___x_1052_, lean_object* v_x1_1053_, lean_object* v_x2_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5(v___x_1052_, v_x1_1053_, v_x2_1054_);
lean_dec_ref(v___x_1052_);
return v_res_1055_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___f_1076_; 
v___x_1075_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1076_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1076_, 0, v___x_1075_);
return v___f_1076_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11(void){
_start:
{
lean_object* v___x_1077_; lean_object* v___f_1078_; 
v___x_1077_ = l_Std_Http_Header_Name_transferEncoding;
v___f_1078_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1078_, 0, v___x_1077_);
return v___f_1078_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___f_1082_; 
v___x_1081_ = l_Std_Http_Header_Name_contentLength;
v___f_1082_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1082_, 0, v___x_1081_);
return v___f_1082_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___f_1084_; 
v___x_1083_ = l_Std_Http_Header_Name_contentLength;
v___f_1084_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1084_, 0, v___x_1083_);
return v___f_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8(lean_object* v___y_1085_, lean_object* v_body_1086_, lean_object* v_close_1087_, lean_object* v_isClosed_1088_, lean_object* v___f_1089_, lean_object* v_x_1090_){
_start:
{
lean_object* v___y_1093_; uint8_t v_omitBody_1094_; 
if (lean_obj_tag(v_x_1090_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1114_; 
lean_dec_ref(v___f_1089_);
lean_dec_ref(v_isClosed_1088_);
lean_dec_ref(v_close_1087_);
lean_dec(v_body_1086_);
lean_dec_ref(v___y_1085_);
v_a_1106_ = lean_ctor_get(v_x_1090_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_x_1090_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1108_ = v_x_1090_;
v_isShared_1109_ = v_isSharedCheck_1114_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v_x_1090_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1114_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
}
else
{
lean_object* v_writer_1115_; lean_object* v_a_1116_; lean_object* v_reader_1117_; lean_object* v_config_1118_; lean_object* v_events_1119_; lean_object* v_error_1120_; lean_object* v_instant_1121_; uint8_t v_keepAlive_1122_; uint8_t v_pullBodyStalled_1123_; lean_object* v_userData_1124_; lean_object* v_outputData_1125_; lean_object* v_state_1126_; lean_object* v_knownSize_1127_; lean_object* v_messageHead_1128_; uint8_t v_sentMessage_1129_; uint8_t v_userClosedBody_1130_; uint8_t v_omitBody_1131_; lean_object* v_userDataBytes_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1315_; 
v_writer_1115_ = lean_ctor_get(v___y_1085_, 1);
lean_inc_ref(v_writer_1115_);
v_a_1116_ = lean_ctor_get(v_x_1090_, 0);
lean_inc(v_a_1116_);
lean_dec_ref_known(v_x_1090_, 1);
v_reader_1117_ = lean_ctor_get(v___y_1085_, 0);
v_config_1118_ = lean_ctor_get(v___y_1085_, 2);
v_events_1119_ = lean_ctor_get(v___y_1085_, 3);
v_error_1120_ = lean_ctor_get(v___y_1085_, 4);
v_instant_1121_ = lean_ctor_get(v___y_1085_, 5);
v_keepAlive_1122_ = lean_ctor_get_uint8(v___y_1085_, sizeof(void*)*6);
v_pullBodyStalled_1123_ = lean_ctor_get_uint8(v___y_1085_, sizeof(void*)*6 + 1);
v_userData_1124_ = lean_ctor_get(v_writer_1115_, 0);
v_outputData_1125_ = lean_ctor_get(v_writer_1115_, 1);
v_state_1126_ = lean_ctor_get(v_writer_1115_, 2);
v_knownSize_1127_ = lean_ctor_get(v_writer_1115_, 3);
v_messageHead_1128_ = lean_ctor_get(v_writer_1115_, 4);
v_sentMessage_1129_ = lean_ctor_get_uint8(v_writer_1115_, sizeof(void*)*6);
v_userClosedBody_1130_ = lean_ctor_get_uint8(v_writer_1115_, sizeof(void*)*6 + 1);
v_omitBody_1131_ = lean_ctor_get_uint8(v_writer_1115_, sizeof(void*)*6 + 2);
v_userDataBytes_1132_ = lean_ctor_get(v_writer_1115_, 5);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_writer_1115_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1134_ = v_writer_1115_;
v_isShared_1135_ = v_isSharedCheck_1315_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_userDataBytes_1132_);
lean_inc(v_messageHead_1128_);
lean_inc(v_knownSize_1127_);
lean_inc(v_state_1126_);
lean_inc(v_outputData_1125_);
lean_inc(v_userData_1124_);
lean_dec(v_writer_1115_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1315_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___y_1137_; uint8_t v___y_1143_; lean_object* v___y_1144_; uint8_t v___y_1163_; lean_object* v___y_1164_; lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = lean_box(1);
v___x_1178_ = l_Std_Http_Protocol_H1_Writer_instBEqState_beq(v_state_1126_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_del_object(v___x_1134_);
lean_dec(v_userDataBytes_1132_);
lean_dec(v_messageHead_1128_);
lean_dec(v_knownSize_1127_);
lean_dec(v_state_1126_);
lean_dec_ref(v_outputData_1125_);
lean_dec_ref(v_userData_1124_);
lean_dec(v_a_1116_);
lean_dec_ref(v___f_1089_);
v___y_1093_ = v___y_1085_;
v_omitBody_1094_ = v_omitBody_1131_;
goto v___jp_1092_;
}
else
{
if (v_sentMessage_1129_ == 0)
{
lean_object* v_status_1179_; uint8_t v___x_1180_; lean_object* v_reader_1182_; lean_object* v_userData_1183_; lean_object* v_outputData_1184_; lean_object* v_state_1185_; lean_object* v_knownSize_1186_; uint8_t v_userClosedBody_1187_; uint8_t v_omitBody_1188_; lean_object* v_userDataBytes_1189_; lean_object* v_config_1190_; lean_object* v_events_1191_; lean_object* v_error_1192_; lean_object* v_instant_1193_; uint8_t v_keepAlive_1194_; uint8_t v_pullBodyStalled_1195_; lean_object* v___y_1232_; uint8_t v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; uint8_t v___y_1266_; lean_object* v___y_1267_; uint8_t v___y_1275_; uint8_t v___y_1278_; uint16_t v___x_1292_; uint16_t v___x_1293_; uint8_t v___x_1294_; 
v_status_1179_ = lean_ctor_get(v_a_1116_, 0);
v___x_1180_ = 0;
v___x_1292_ = 100;
v___x_1293_ = l_Std_Http_Status_toCode(v_status_1179_);
v___x_1294_ = lean_uint16_dec_le(v___x_1292_, v___x_1293_);
if (v___x_1294_ == 0)
{
lean_del_object(v___x_1134_);
lean_dec(v_messageHead_1128_);
v___y_1278_ = v___x_1294_;
goto v___jp_1277_;
}
else
{
uint16_t v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = 200;
v___x_1296_ = lean_uint16_dec_lt(v___x_1293_, v___x_1295_);
if (v___x_1296_ == 0)
{
lean_del_object(v___x_1134_);
lean_dec(v_messageHead_1128_);
v___y_1278_ = v___x_1296_;
goto v___jp_1277_;
}
else
{
lean_object* v_messageHead_1297_; uint8_t v___x_1298_; uint8_t v___x_1299_; uint8_t v___x_1300_; 
lean_dec_ref(v___f_1089_);
v_messageHead_1297_ = lean_ctor_get(v_reader_1117_, 2);
v___x_1298_ = l_Std_Http_Protocol_H1_Message_Head_version(v___x_1180_, v_messageHead_1297_);
v___x_1299_ = 1;
v___x_1300_ = l_Std_Http_instBEqVersion_beq(v___x_1298_, v___x_1299_);
if (v___x_1300_ == 0)
{
lean_del_object(v___x_1134_);
lean_dec(v_userDataBytes_1132_);
lean_dec(v_messageHead_1128_);
lean_dec(v_knownSize_1127_);
lean_dec(v_state_1126_);
lean_dec_ref(v_outputData_1125_);
lean_dec_ref(v_userData_1124_);
lean_dec(v_a_1116_);
v___y_1093_ = v___y_1085_;
v_omitBody_1094_ = v_omitBody_1131_;
goto v___jp_1092_;
}
else
{
uint8_t v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
lean_inc(v_instant_1121_);
lean_inc(v_error_1120_);
lean_inc_ref(v_events_1119_);
lean_inc_ref(v_config_1118_);
lean_inc_ref(v_reader_1117_);
lean_dec_ref(v___y_1085_);
v___x_1301_ = 1;
v___x_1302_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1301_, v_a_1116_);
v___x_1303_ = lean_unsigned_to_nat(0u);
v___x_1304_ = lean_array_get_size(v___x_1302_);
v___x_1305_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_1306_ = lean_nat_dec_lt(v___x_1303_, v___x_1304_);
if (v___x_1306_ == 0)
{
v___y_1163_ = v___x_1301_;
v___y_1164_ = v___x_1302_;
goto v___jp_1162_;
}
else
{
lean_object* v___f_1307_; size_t v___x_1308_; size_t v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v___f_1307_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13);
v___x_1308_ = ((size_t)0ULL);
v___x_1309_ = lean_usize_of_nat(v___x_1304_);
lean_inc_ref(v___x_1302_);
v___x_1310_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1305_, v___f_1307_, v___x_1302_, v___x_1308_, v___x_1309_);
v___x_1311_ = lean_unbox(v___x_1310_);
lean_dec(v___x_1310_);
if (v___x_1311_ == 0)
{
v___y_1163_ = v___x_1301_;
v___y_1164_ = v___x_1302_;
goto v___jp_1162_;
}
else
{
lean_object* v___f_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___f_1312_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14);
v___x_1313_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12));
v___x_1314_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1305_, v___f_1312_, v___x_1302_, v___x_1308_, v___x_1309_, v___x_1313_);
v___y_1163_ = v___x_1301_;
v___y_1164_ = v___x_1314_;
goto v___jp_1162_;
}
}
}
}
}
v___jp_1181_:
{
lean_object* v___x_1196_; lean_object* v_machine_1197_; lean_object* v_machine_1198_; lean_object* v_writer_1199_; lean_object* v_reader_1200_; lean_object* v_config_1201_; lean_object* v_events_1202_; lean_object* v_error_1203_; lean_object* v_instant_1204_; uint8_t v_keepAlive_1205_; uint8_t v_pullBodyStalled_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1230_; 
lean_inc(v_a_1116_);
v___x_1196_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1196_, 0, v_userData_1183_);
lean_ctor_set(v___x_1196_, 1, v_outputData_1184_);
lean_ctor_set(v___x_1196_, 2, v_state_1185_);
lean_ctor_set(v___x_1196_, 3, v_knownSize_1186_);
lean_ctor_set(v___x_1196_, 4, v_a_1116_);
lean_ctor_set(v___x_1196_, 5, v_userDataBytes_1189_);
lean_ctor_set_uint8(v___x_1196_, sizeof(void*)*6, v___x_1178_);
lean_ctor_set_uint8(v___x_1196_, sizeof(void*)*6 + 1, v_userClosedBody_1187_);
lean_ctor_set_uint8(v___x_1196_, sizeof(void*)*6 + 2, v_omitBody_1188_);
v_machine_1197_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_machine_1197_, 0, v_reader_1182_);
lean_ctor_set(v_machine_1197_, 1, v___x_1196_);
lean_ctor_set(v_machine_1197_, 2, v_config_1190_);
lean_ctor_set(v_machine_1197_, 3, v_events_1191_);
lean_ctor_set(v_machine_1197_, 4, v_error_1192_);
lean_ctor_set(v_machine_1197_, 5, v_instant_1193_);
lean_ctor_set_uint8(v_machine_1197_, sizeof(void*)*6, v_keepAlive_1194_);
lean_ctor_set_uint8(v_machine_1197_, sizeof(void*)*6 + 1, v_pullBodyStalled_1195_);
v_machine_1198_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(v___x_1180_, v_machine_1197_, v_a_1116_);
lean_dec(v_a_1116_);
v_writer_1199_ = lean_ctor_get(v_machine_1198_, 1);
v_reader_1200_ = lean_ctor_get(v_machine_1198_, 0);
v_config_1201_ = lean_ctor_get(v_machine_1198_, 2);
v_events_1202_ = lean_ctor_get(v_machine_1198_, 3);
v_error_1203_ = lean_ctor_get(v_machine_1198_, 4);
v_instant_1204_ = lean_ctor_get(v_machine_1198_, 5);
v_keepAlive_1205_ = lean_ctor_get_uint8(v_machine_1198_, sizeof(void*)*6);
v_pullBodyStalled_1206_ = lean_ctor_get_uint8(v_machine_1198_, sizeof(void*)*6 + 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_machine_1198_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1208_ = v_machine_1198_;
v_isShared_1209_ = v_isSharedCheck_1230_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_instant_1204_);
lean_inc(v_error_1203_);
lean_inc(v_events_1202_);
lean_inc(v_config_1201_);
lean_inc(v_writer_1199_);
lean_inc(v_reader_1200_);
lean_dec(v_machine_1198_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1230_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v_userData_1210_; lean_object* v_outputData_1211_; lean_object* v_knownSize_1212_; lean_object* v_messageHead_1213_; uint8_t v_sentMessage_1214_; uint8_t v_userClosedBody_1215_; uint8_t v_omitBody_1216_; lean_object* v_userDataBytes_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1228_; 
v_userData_1210_ = lean_ctor_get(v_writer_1199_, 0);
v_outputData_1211_ = lean_ctor_get(v_writer_1199_, 1);
v_knownSize_1212_ = lean_ctor_get(v_writer_1199_, 3);
v_messageHead_1213_ = lean_ctor_get(v_writer_1199_, 4);
v_sentMessage_1214_ = lean_ctor_get_uint8(v_writer_1199_, sizeof(void*)*6);
v_userClosedBody_1215_ = lean_ctor_get_uint8(v_writer_1199_, sizeof(void*)*6 + 1);
v_omitBody_1216_ = lean_ctor_get_uint8(v_writer_1199_, sizeof(void*)*6 + 2);
v_userDataBytes_1217_ = lean_ctor_get(v_writer_1199_, 5);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_writer_1199_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v_writer_1199_, 2);
lean_dec(v_unused_1229_);
v___x_1219_ = v_writer_1199_;
v_isShared_1220_ = v_isSharedCheck_1228_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_userDataBytes_1217_);
lean_inc(v_messageHead_1213_);
lean_inc(v_knownSize_1212_);
lean_inc(v_outputData_1211_);
lean_inc(v_userData_1210_);
lean_dec(v_writer_1199_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1228_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_box(2);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 2, v___x_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_userData_1210_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_outputData_1211_);
lean_ctor_set(v_reuseFailAlloc_1227_, 2, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1227_, 3, v_knownSize_1212_);
lean_ctor_set(v_reuseFailAlloc_1227_, 4, v_messageHead_1213_);
lean_ctor_set(v_reuseFailAlloc_1227_, 5, v_userDataBytes_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*6, v_sentMessage_1214_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*6 + 1, v_userClosedBody_1215_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*6 + 2, v_omitBody_1216_);
v___x_1223_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
lean_object* v___x_1225_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 1, v___x_1223_);
v___x_1225_ = v___x_1208_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_reader_1200_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1226_, 2, v_config_1201_);
lean_ctor_set(v_reuseFailAlloc_1226_, 3, v_events_1202_);
lean_ctor_set(v_reuseFailAlloc_1226_, 4, v_error_1203_);
lean_ctor_set(v_reuseFailAlloc_1226_, 5, v_instant_1204_);
lean_ctor_set_uint8(v_reuseFailAlloc_1226_, sizeof(void*)*6, v_keepAlive_1205_);
lean_ctor_set_uint8(v_reuseFailAlloc_1226_, sizeof(void*)*6 + 1, v_pullBodyStalled_1206_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
v___y_1093_ = v___x_1225_;
v_omitBody_1094_ = v_omitBody_1216_;
goto v___jp_1092_;
}
}
}
}
}
v___jp_1231_:
{
if (lean_obj_tag(v___y_1232_) == 0)
{
v_reader_1182_ = v_reader_1117_;
v_userData_1183_ = v_userData_1124_;
v_outputData_1184_ = v_outputData_1125_;
v_state_1185_ = v_state_1126_;
v_knownSize_1186_ = v_knownSize_1127_;
v_userClosedBody_1187_ = v_userClosedBody_1130_;
v_omitBody_1188_ = v_omitBody_1131_;
v_userDataBytes_1189_ = v_userDataBytes_1132_;
v_config_1190_ = v_config_1118_;
v_events_1191_ = v_events_1119_;
v_error_1192_ = v_error_1120_;
v_instant_1193_ = v_instant_1121_;
v_keepAlive_1194_ = v_keepAlive_1122_;
v_pullBodyStalled_1195_ = v_pullBodyStalled_1123_;
goto v___jp_1181_;
}
else
{
lean_dec(v_knownSize_1127_);
v_reader_1182_ = v_reader_1117_;
v_userData_1183_ = v_userData_1124_;
v_outputData_1184_ = v_outputData_1125_;
v_state_1185_ = v_state_1126_;
v_knownSize_1186_ = v___y_1232_;
v_userClosedBody_1187_ = v_userClosedBody_1130_;
v_omitBody_1188_ = v_omitBody_1131_;
v_userDataBytes_1189_ = v_userDataBytes_1132_;
v_config_1190_ = v_config_1118_;
v_events_1191_ = v_events_1119_;
v_error_1192_ = v_error_1120_;
v_instant_1193_ = v_instant_1121_;
v_keepAlive_1194_ = v_keepAlive_1122_;
v_pullBodyStalled_1195_ = v_pullBodyStalled_1123_;
goto v___jp_1181_;
}
}
v___jp_1233_:
{
lean_object* v___x_1237_; uint8_t v___x_1238_; 
v___x_1237_ = lean_unsigned_to_nat(204u);
v___x_1238_ = lean_nat_dec_eq(v___y_1235_, v___x_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = lean_unsigned_to_nat(304u);
v___x_1240_ = lean_nat_dec_eq(v___y_1235_, v___x_1239_);
lean_dec(v___y_1235_);
if (v___x_1240_ == 0)
{
lean_object* v_messageHead_1241_; uint8_t v_method_1242_; uint8_t v___x_1243_; uint8_t v___x_1244_; 
v_messageHead_1241_ = lean_ctor_get(v_reader_1117_, 2);
v_method_1242_ = lean_ctor_get_uint8(v_messageHead_1241_, sizeof(void*)*2);
v___x_1243_ = 9;
v___x_1244_ = l_Std_Http_instBEqMethod_beq(v_method_1242_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; 
lean_dec(v_userDataBytes_1132_);
lean_dec(v_knownSize_1127_);
lean_dec(v_state_1126_);
lean_dec_ref(v_outputData_1125_);
lean_dec_ref(v_userData_1124_);
lean_inc_ref(v___y_1085_);
v___x_1245_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(v___x_1180_, v___y_1085_, v___y_1236_, v___y_1234_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v___x_1246_; lean_object* v_writer_1247_; uint8_t v_omitBody_1248_; 
lean_dec(v_a_1116_);
v___x_1246_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_rejectOutgoingFraming(v___x_1180_, v___y_1085_);
v_writer_1247_ = lean_ctor_get(v___x_1246_, 1);
v_omitBody_1248_ = lean_ctor_get_uint8(v_writer_1247_, sizeof(void*)*6 + 2);
v___y_1093_ = v___x_1246_;
v_omitBody_1094_ = v_omitBody_1248_;
goto v___jp_1092_;
}
else
{
lean_object* v_val_1249_; lean_object* v_writer_1250_; lean_object* v_reader_1251_; lean_object* v_config_1252_; lean_object* v_events_1253_; lean_object* v_error_1254_; lean_object* v_instant_1255_; uint8_t v_keepAlive_1256_; uint8_t v_pullBodyStalled_1257_; lean_object* v_userData_1258_; lean_object* v_outputData_1259_; lean_object* v_state_1260_; lean_object* v_knownSize_1261_; uint8_t v_userClosedBody_1262_; uint8_t v_omitBody_1263_; lean_object* v_userDataBytes_1264_; 
lean_dec_ref(v___y_1085_);
v_val_1249_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_val_1249_);
lean_dec_ref_known(v___x_1245_, 1);
v_writer_1250_ = lean_ctor_get(v_val_1249_, 1);
lean_inc_ref(v_writer_1250_);
v_reader_1251_ = lean_ctor_get(v_val_1249_, 0);
lean_inc_ref(v_reader_1251_);
v_config_1252_ = lean_ctor_get(v_val_1249_, 2);
lean_inc_ref(v_config_1252_);
v_events_1253_ = lean_ctor_get(v_val_1249_, 3);
lean_inc_ref(v_events_1253_);
v_error_1254_ = lean_ctor_get(v_val_1249_, 4);
lean_inc(v_error_1254_);
v_instant_1255_ = lean_ctor_get(v_val_1249_, 5);
lean_inc(v_instant_1255_);
v_keepAlive_1256_ = lean_ctor_get_uint8(v_val_1249_, sizeof(void*)*6);
v_pullBodyStalled_1257_ = lean_ctor_get_uint8(v_val_1249_, sizeof(void*)*6 + 1);
lean_dec(v_val_1249_);
v_userData_1258_ = lean_ctor_get(v_writer_1250_, 0);
lean_inc_ref(v_userData_1258_);
v_outputData_1259_ = lean_ctor_get(v_writer_1250_, 1);
lean_inc_ref(v_outputData_1259_);
v_state_1260_ = lean_ctor_get(v_writer_1250_, 2);
lean_inc(v_state_1260_);
v_knownSize_1261_ = lean_ctor_get(v_writer_1250_, 3);
lean_inc(v_knownSize_1261_);
v_userClosedBody_1262_ = lean_ctor_get_uint8(v_writer_1250_, sizeof(void*)*6 + 1);
v_omitBody_1263_ = lean_ctor_get_uint8(v_writer_1250_, sizeof(void*)*6 + 2);
v_userDataBytes_1264_ = lean_ctor_get(v_writer_1250_, 5);
lean_inc(v_userDataBytes_1264_);
lean_dec_ref(v_writer_1250_);
v_reader_1182_ = v_reader_1251_;
v_userData_1183_ = v_userData_1258_;
v_outputData_1184_ = v_outputData_1259_;
v_state_1185_ = v_state_1260_;
v_knownSize_1186_ = v_knownSize_1261_;
v_userClosedBody_1187_ = v_userClosedBody_1262_;
v_omitBody_1188_ = v_omitBody_1263_;
v_userDataBytes_1189_ = v_userDataBytes_1264_;
v_config_1190_ = v_config_1252_;
v_events_1191_ = v_events_1253_;
v_error_1192_ = v_error_1254_;
v_instant_1193_ = v_instant_1255_;
v_keepAlive_1194_ = v_keepAlive_1256_;
v_pullBodyStalled_1195_ = v_pullBodyStalled_1257_;
goto v___jp_1181_;
}
}
else
{
lean_inc(v_instant_1121_);
lean_inc(v_error_1120_);
lean_inc_ref(v_events_1119_);
lean_inc_ref(v_config_1118_);
lean_inc_ref(v_reader_1117_);
lean_dec_ref(v___y_1085_);
v___y_1232_ = v___y_1236_;
goto v___jp_1231_;
}
}
else
{
lean_inc(v_instant_1121_);
lean_inc(v_error_1120_);
lean_inc_ref(v_events_1119_);
lean_inc_ref(v_config_1118_);
lean_inc_ref(v_reader_1117_);
lean_dec_ref(v___y_1085_);
v___y_1232_ = v___y_1236_;
goto v___jp_1231_;
}
}
else
{
lean_inc(v_instant_1121_);
lean_inc(v_error_1120_);
lean_inc_ref(v_events_1119_);
lean_inc_ref(v_config_1118_);
lean_inc_ref(v_reader_1117_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1085_);
v___y_1232_ = v___y_1236_;
goto v___jp_1231_;
}
}
v___jp_1265_:
{
uint16_t v___x_1268_; lean_object* v_code_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1268_ = l_Std_Http_Status_toCode(v_status_1179_);
v_code_1269_ = lean_uint16_to_nat(v___x_1268_);
v___x_1270_ = lean_unsigned_to_nat(100u);
v___x_1271_ = lean_nat_dec_le(v___x_1270_, v_code_1269_);
if (v___x_1271_ == 0)
{
v___y_1234_ = v___y_1266_;
v___y_1235_ = v_code_1269_;
v___y_1236_ = v___y_1267_;
goto v___jp_1233_;
}
else
{
lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1272_ = lean_unsigned_to_nat(200u);
v___x_1273_ = lean_nat_dec_lt(v_code_1269_, v___x_1272_);
if (v___x_1273_ == 0)
{
v___y_1234_ = v___y_1266_;
v___y_1235_ = v_code_1269_;
v___y_1236_ = v___y_1267_;
goto v___jp_1233_;
}
else
{
lean_inc(v_instant_1121_);
lean_inc(v_error_1120_);
lean_inc_ref(v_events_1119_);
lean_inc_ref(v_config_1118_);
lean_inc_ref(v_reader_1117_);
lean_dec_ref(v___y_1085_);
v___y_1232_ = v___y_1267_;
goto v___jp_1231_;
}
}
}
v___jp_1274_:
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_box(0);
v___y_1266_ = v___y_1275_;
v___y_1267_ = v___x_1276_;
goto v___jp_1265_;
}
v___jp_1277_:
{
uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
v___x_1279_ = 1;
v___x_1280_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1279_, v_a_1116_);
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = lean_array_get_size(v___x_1280_);
v___x_1283_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_1284_ = lean_nat_dec_lt(v___x_1281_, v___x_1282_);
if (v___x_1284_ == 0)
{
lean_dec_ref(v___x_1280_);
lean_dec_ref(v___f_1089_);
v___y_1275_ = v___x_1284_;
goto v___jp_1274_;
}
else
{
size_t v___x_1285_; size_t v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1285_ = ((size_t)0ULL);
v___x_1286_ = lean_usize_of_nat(v___x_1282_);
v___x_1287_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1283_, v___f_1089_, v___x_1280_, v___x_1285_, v___x_1286_);
v___x_1288_ = lean_unbox(v___x_1287_);
if (v___x_1288_ == 0)
{
uint8_t v___x_1289_; 
v___x_1289_ = lean_unbox(v___x_1287_);
lean_dec(v___x_1287_);
v___y_1275_ = v___x_1289_;
goto v___jp_1274_;
}
else
{
lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1290_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___x_1279_, v_a_1116_, v___y_1278_);
v___x_1291_ = lean_unbox(v___x_1287_);
lean_dec(v___x_1287_);
v___y_1266_ = v___x_1291_;
v___y_1267_ = v___x_1290_;
goto v___jp_1265_;
}
}
}
}
else
{
lean_del_object(v___x_1134_);
lean_dec(v_userDataBytes_1132_);
lean_dec(v_messageHead_1128_);
lean_dec(v_knownSize_1127_);
lean_dec(v_state_1126_);
lean_dec_ref(v_outputData_1125_);
lean_dec_ref(v_userData_1124_);
lean_dec(v_a_1116_);
lean_dec_ref(v___f_1089_);
v___y_1093_ = v___y_1085_;
v_omitBody_1094_ = v_omitBody_1131_;
goto v___jp_1092_;
}
}
v___jp_1136_:
{
lean_object* v___x_1139_; 
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 1, v___y_1137_);
v___x_1139_ = v___x_1134_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_userData_1124_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v___y_1137_);
lean_ctor_set(v_reuseFailAlloc_1141_, 2, v_state_1126_);
lean_ctor_set(v_reuseFailAlloc_1141_, 3, v_knownSize_1127_);
lean_ctor_set(v_reuseFailAlloc_1141_, 4, v_messageHead_1128_);
lean_ctor_set(v_reuseFailAlloc_1141_, 5, v_userDataBytes_1132_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, sizeof(void*)*6, v_sentMessage_1129_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, sizeof(void*)*6 + 1, v_userClosedBody_1130_);
lean_ctor_set_uint8(v_reuseFailAlloc_1141_, sizeof(void*)*6 + 2, v_omitBody_1131_);
v___x_1139_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v___x_1140_, 0, v_reader_1117_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
lean_ctor_set(v___x_1140_, 2, v_config_1118_);
lean_ctor_set(v___x_1140_, 3, v_events_1119_);
lean_ctor_set(v___x_1140_, 4, v_error_1120_);
lean_ctor_set(v___x_1140_, 5, v_instant_1121_);
lean_ctor_set_uint8(v___x_1140_, sizeof(void*)*6, v_keepAlive_1122_);
lean_ctor_set_uint8(v___x_1140_, sizeof(void*)*6 + 1, v_pullBodyStalled_1123_);
v___y_1093_ = v___x_1140_;
v_omitBody_1094_ = v_omitBody_1131_;
goto v___jp_1092_;
}
}
v___jp_1142_:
{
lean_object* v_message_1145_; lean_object* v___x_1146_; lean_object* v___x_2725__overap_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v_message_1145_ = l_Std_Http_Protocol_H1_Message_Head_setHeaders(v___y_1143_, v_a_1116_, v___y_1144_);
v___x_1146_ = l_ByteArray_empty;
v___x_2725__overap_1147_ = l_Std_Http_Protocol_H1_instEncodeV11Head(v___y_1143_);
v___x_1148_ = lean_apply_2(v___x_2725__overap_1147_, v___x_1146_, v_message_1145_);
v___x_1149_ = l_ByteArray_isEmpty(v___x_1148_);
if (v___x_1149_ == 0)
{
lean_object* v_data_1150_; lean_object* v_size_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1161_; 
v_data_1150_ = lean_ctor_get(v_outputData_1125_, 0);
v_size_1151_ = lean_ctor_get(v_outputData_1125_, 1);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_outputData_1125_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1153_ = v_outputData_1125_;
v_isShared_1154_ = v_isSharedCheck_1161_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_size_1151_);
lean_inc(v_data_1150_);
lean_dec(v_outputData_1125_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1161_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1159_; 
lean_inc_ref(v___x_1148_);
v___x_1155_ = lean_array_push(v_data_1150_, v___x_1148_);
v___x_1156_ = lean_byte_array_size(v___x_1148_);
lean_dec_ref(v___x_1148_);
v___x_1157_ = lean_nat_add(v_size_1151_, v___x_1156_);
lean_dec(v_size_1151_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 1, v___x_1157_);
lean_ctor_set(v___x_1153_, 0, v___x_1155_);
v___x_1159_ = v___x_1153_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
v___y_1137_ = v___x_1159_;
goto v___jp_1136_;
}
}
}
else
{
lean_dec_ref(v___x_1148_);
v___y_1137_ = v_outputData_1125_;
goto v___jp_1136_;
}
}
v___jp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_array_get_size(v___y_1164_);
v___x_1167_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_1168_ = lean_nat_dec_lt(v___x_1165_, v___x_1166_);
if (v___x_1168_ == 0)
{
v___y_1143_ = v___y_1163_;
v___y_1144_ = v___y_1164_;
goto v___jp_1142_;
}
else
{
lean_object* v___f_1169_; size_t v___x_1170_; size_t v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___f_1169_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10);
v___x_1170_ = ((size_t)0ULL);
v___x_1171_ = lean_usize_of_nat(v___x_1166_);
lean_inc_ref(v___y_1164_);
v___x_1172_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1167_, v___f_1169_, v___y_1164_, v___x_1170_, v___x_1171_);
v___x_1173_ = lean_unbox(v___x_1172_);
lean_dec(v___x_1172_);
if (v___x_1173_ == 0)
{
v___y_1143_ = v___y_1163_;
v___y_1144_ = v___y_1164_;
goto v___jp_1142_;
}
else
{
lean_object* v___f_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___f_1174_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11);
v___x_1175_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12));
v___x_1176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1167_, v___f_1174_, v___y_1164_, v___x_1170_, v___x_1171_, v___x_1175_);
v___y_1143_ = v___y_1163_;
v___y_1144_ = v___x_1176_;
goto v___jp_1142_;
}
}
}
}
}
v___jp_1092_:
{
if (v_omitBody_1094_ == 0)
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
lean_dec_ref(v_isClosed_1088_);
lean_dec_ref(v_close_1087_);
v___x_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1095_, 0, v_body_1086_);
v___x_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___y_1093_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
v___x_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
return v___x_1098_;
}
else
{
lean_object* v___f_1099_; lean_object* v___f_1100_; lean_object* v___f_1101_; lean_object* v___x_1102_; uint8_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___f_1099_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1099_, 0, v___y_1093_);
lean_inc_ref(v___f_1099_);
v___f_1100_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1100_, 0, v___f_1099_);
lean_inc(v_body_1086_);
v___f_1101_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1101_, 0, v_close_1087_);
lean_closure_set(v___f_1101_, 1, v_body_1086_);
lean_closure_set(v___f_1101_, 2, v___f_1100_);
lean_closure_set(v___f_1101_, 3, v___f_1099_);
v___x_1102_ = lean_unsigned_to_nat(0u);
v___x_1103_ = 0;
v___x_1104_ = lean_apply_2(v_isClosed_1088_, v_body_1086_, lean_box(0));
v___x_1105_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1102_, v___x_1103_, v___x_1104_, v___f_1101_);
return v___x_1105_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___boxed(lean_object* v___y_1316_, lean_object* v_body_1317_, lean_object* v_close_1318_, lean_object* v_isClosed_1319_, lean_object* v___f_1320_, lean_object* v_x_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8(v___y_1316_, v_body_1317_, v_close_1318_, v_isClosed_1319_, v___f_1320_, v_x_1321_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(lean_object* v_body_1324_, lean_object* v_close_1325_, lean_object* v_isClosed_1326_, lean_object* v___f_1327_, lean_object* v_config_1328_, lean_object* v_line_1329_, lean_object* v_machine_1330_, lean_object* v_x_1331_){
_start:
{
lean_object* v___y_1334_; 
if (lean_obj_tag(v_x_1331_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1348_; 
lean_dec_ref(v_machine_1330_);
lean_dec_ref(v_line_1329_);
lean_dec_ref(v___f_1327_);
lean_dec_ref(v_isClosed_1326_);
lean_dec_ref(v_close_1325_);
lean_dec(v_body_1324_);
v_a_1340_ = lean_ctor_get(v_x_1331_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_x_1331_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1342_ = v_x_1331_;
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v_x_1331_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
}
else
{
lean_object* v_a_1349_; 
v_a_1349_ = lean_ctor_get(v_x_1331_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v_x_1331_, 1);
if (lean_obj_tag(v_a_1349_) == 1)
{
lean_object* v_writer_1350_; lean_object* v_reader_1351_; lean_object* v_config_1352_; lean_object* v_events_1353_; lean_object* v_error_1354_; lean_object* v_instant_1355_; uint8_t v_keepAlive_1356_; uint8_t v_pullBodyStalled_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1380_; 
v_writer_1350_ = lean_ctor_get(v_machine_1330_, 1);
v_reader_1351_ = lean_ctor_get(v_machine_1330_, 0);
v_config_1352_ = lean_ctor_get(v_machine_1330_, 2);
v_events_1353_ = lean_ctor_get(v_machine_1330_, 3);
v_error_1354_ = lean_ctor_get(v_machine_1330_, 4);
v_instant_1355_ = lean_ctor_get(v_machine_1330_, 5);
v_keepAlive_1356_ = lean_ctor_get_uint8(v_machine_1330_, sizeof(void*)*6);
v_pullBodyStalled_1357_ = lean_ctor_get_uint8(v_machine_1330_, sizeof(void*)*6 + 1);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_machine_1330_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1359_ = v_machine_1330_;
v_isShared_1360_ = v_isSharedCheck_1380_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_instant_1355_);
lean_inc(v_error_1354_);
lean_inc(v_events_1353_);
lean_inc(v_config_1352_);
lean_inc(v_writer_1350_);
lean_inc(v_reader_1351_);
lean_dec(v_machine_1330_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1380_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v_userData_1361_; lean_object* v_outputData_1362_; lean_object* v_state_1363_; lean_object* v_messageHead_1364_; uint8_t v_sentMessage_1365_; uint8_t v_userClosedBody_1366_; uint8_t v_omitBody_1367_; lean_object* v_userDataBytes_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1378_; 
v_userData_1361_ = lean_ctor_get(v_writer_1350_, 0);
v_outputData_1362_ = lean_ctor_get(v_writer_1350_, 1);
v_state_1363_ = lean_ctor_get(v_writer_1350_, 2);
v_messageHead_1364_ = lean_ctor_get(v_writer_1350_, 4);
v_sentMessage_1365_ = lean_ctor_get_uint8(v_writer_1350_, sizeof(void*)*6);
v_userClosedBody_1366_ = lean_ctor_get_uint8(v_writer_1350_, sizeof(void*)*6 + 1);
v_omitBody_1367_ = lean_ctor_get_uint8(v_writer_1350_, sizeof(void*)*6 + 2);
v_userDataBytes_1368_ = lean_ctor_get(v_writer_1350_, 5);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_writer_1350_);
if (v_isSharedCheck_1378_ == 0)
{
lean_object* v_unused_1379_; 
v_unused_1379_ = lean_ctor_get(v_writer_1350_, 3);
lean_dec(v_unused_1379_);
v___x_1370_ = v_writer_1350_;
v_isShared_1371_ = v_isSharedCheck_1378_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_userDataBytes_1368_);
lean_inc(v_messageHead_1364_);
lean_inc(v_state_1363_);
lean_inc(v_outputData_1362_);
lean_inc(v_userData_1361_);
lean_dec(v_writer_1350_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1378_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 3, v_a_1349_);
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_userData_1361_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_outputData_1362_);
lean_ctor_set(v_reuseFailAlloc_1377_, 2, v_state_1363_);
lean_ctor_set(v_reuseFailAlloc_1377_, 3, v_a_1349_);
lean_ctor_set(v_reuseFailAlloc_1377_, 4, v_messageHead_1364_);
lean_ctor_set(v_reuseFailAlloc_1377_, 5, v_userDataBytes_1368_);
lean_ctor_set_uint8(v_reuseFailAlloc_1377_, sizeof(void*)*6, v_sentMessage_1365_);
lean_ctor_set_uint8(v_reuseFailAlloc_1377_, sizeof(void*)*6 + 1, v_userClosedBody_1366_);
lean_ctor_set_uint8(v_reuseFailAlloc_1377_, sizeof(void*)*6 + 2, v_omitBody_1367_);
v___x_1373_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1375_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v___x_1373_);
v___x_1375_ = v___x_1359_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_reader_1351_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1376_, 2, v_config_1352_);
lean_ctor_set(v_reuseFailAlloc_1376_, 3, v_events_1353_);
lean_ctor_set(v_reuseFailAlloc_1376_, 4, v_error_1354_);
lean_ctor_set(v_reuseFailAlloc_1376_, 5, v_instant_1355_);
lean_ctor_set_uint8(v_reuseFailAlloc_1376_, sizeof(void*)*6, v_keepAlive_1356_);
lean_ctor_set_uint8(v_reuseFailAlloc_1376_, sizeof(void*)*6 + 1, v_pullBodyStalled_1357_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
v___y_1334_ = v___x_1375_;
goto v___jp_1333_;
}
}
}
}
}
else
{
lean_dec(v_a_1349_);
v___y_1334_ = v_machine_1330_;
goto v___jp_1333_;
}
}
v___jp_1333_:
{
lean_object* v___f_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___f_1335_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___boxed), 7, 5);
lean_closure_set(v___f_1335_, 0, v___y_1334_);
lean_closure_set(v___f_1335_, 1, v_body_1324_);
lean_closure_set(v___f_1335_, 2, v_close_1325_);
lean_closure_set(v___f_1335_, 3, v_isClosed_1326_);
lean_closure_set(v___f_1335_, 4, v___f_1327_);
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = 0;
v___x_1338_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_prepareResponseHead(v_config_1328_, v_line_1329_);
v___x_1339_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1336_, v___x_1337_, v___x_1338_, v___f_1335_);
return v___x_1339_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed(lean_object* v_body_1381_, lean_object* v_close_1382_, lean_object* v_isClosed_1383_, lean_object* v___f_1384_, lean_object* v_config_1385_, lean_object* v_line_1386_, lean_object* v_machine_1387_, lean_object* v_x_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6(v_body_1381_, v_close_1382_, v_isClosed_1383_, v___f_1384_, v_config_1385_, v_line_1386_, v_machine_1387_, v_x_1388_);
lean_dec_ref(v_config_1385_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object* v_inst_1392_, lean_object* v_config_1393_, lean_object* v_machine_1394_, lean_object* v_res_1395_){
_start:
{
lean_object* v_close_1397_; lean_object* v_isClosed_1398_; lean_object* v_getKnownSize_1399_; lean_object* v_line_1400_; lean_object* v_body_1401_; lean_object* v___f_1402_; lean_object* v___f_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_close_1397_ = lean_ctor_get(v_inst_1392_, 1);
lean_inc_ref(v_close_1397_);
v_isClosed_1398_ = lean_ctor_get(v_inst_1392_, 2);
lean_inc_ref(v_isClosed_1398_);
v_getKnownSize_1399_ = lean_ctor_get(v_inst_1392_, 5);
lean_inc_ref(v_getKnownSize_1399_);
lean_dec_ref(v_inst_1392_);
v_line_1400_ = lean_ctor_get(v_res_1395_, 0);
lean_inc_ref(v_line_1400_);
v_body_1401_ = lean_ctor_get(v_res_1395_, 1);
lean_inc_n(v_body_1401_, 2);
lean_dec_ref(v_res_1395_);
v___f_1402_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0));
v___f_1403_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1403_, 0, v_body_1401_);
lean_closure_set(v___f_1403_, 1, v_close_1397_);
lean_closure_set(v___f_1403_, 2, v_isClosed_1398_);
lean_closure_set(v___f_1403_, 3, v___f_1402_);
lean_closure_set(v___f_1403_, 4, v_config_1393_);
lean_closure_set(v___f_1403_, 5, v_line_1400_);
lean_closure_set(v___f_1403_, 6, v_machine_1394_);
v___x_1404_ = lean_unsigned_to_nat(0u);
v___x_1405_ = 0;
v___x_1406_ = lean_apply_2(v_getKnownSize_1399_, v_body_1401_, lean_box(0));
v___x_1407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1404_, v___x_1405_, v___x_1406_, v___f_1403_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object* v_inst_1408_, lean_object* v_config_1409_, lean_object* v_machine_1410_, lean_object* v_res_1411_, lean_object* v_a_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1408_, v_config_1409_, v_machine_1410_, v_res_1411_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object* v_00_u03b2_1414_, lean_object* v_inst_1415_, lean_object* v_config_1416_, lean_object* v_machine_1417_, lean_object* v_res_1418_){
_start:
{
lean_object* v___x_1420_; 
v___x_1420_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1415_, v_config_1416_, v_machine_1417_, v_res_1418_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object* v_00_u03b2_1421_, lean_object* v_inst_1422_, lean_object* v_config_1423_, lean_object* v_machine_1424_, lean_object* v_res_1425_, lean_object* v_a_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(v_00_u03b2_1421_, v_inst_1422_, v_config_1423_, v_machine_1424_, v_res_1425_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object* v_____do__lift_1428_, lean_object* v___y_1429_){
_start:
{
uint8_t v_closed_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v_closed_1431_ = lean_ctor_get_uint8(v_____do__lift_1428_, sizeof(void*)*6);
v___x_1432_ = lean_box(v_closed_1431_);
v___x_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
v___x_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object* v_____do__lift_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(v_____do__lift_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v_____do__lift_1435_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object* v___y_1439_, lean_object* v_00___1440_){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1442_, 0, v___y_1439_);
v___x_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object* v___y_1445_, lean_object* v_00___1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(v___y_1445_, v_00___1446_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object* v___x_1449_, lean_object* v_x_1450_){
_start:
{
if (lean_obj_tag(v_x_1450_) == 0)
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1460_; 
lean_dec_ref(v___x_1449_);
v_a_1452_ = lean_ctor_get(v_x_1450_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_x_1450_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1454_ = v_x_1450_;
v_isShared_1455_ = v_isSharedCheck_1460_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v_x_1450_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1460_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
return v___x_1458_;
}
}
}
else
{
lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1469_; 
v_isSharedCheck_1469_ = !lean_is_exclusive(v_x_1450_);
if (v_isSharedCheck_1469_ == 0)
{
lean_object* v_unused_1470_; 
v_unused_1470_ = lean_ctor_get(v_x_1450_, 0);
lean_dec(v_unused_1470_);
v___x_1462_ = v_x_1450_;
v_isShared_1463_ = v_isSharedCheck_1469_;
goto v_resetjp_1461_;
}
else
{
lean_dec(v_x_1450_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1469_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1464_; lean_object* v___x_1466_; 
v___x_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1449_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 0, v___x_1464_);
v___x_1466_ = v___x_1462_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1464_);
v___x_1466_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
return v___x_1467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object* v___x_1471_, lean_object* v_x_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(v___x_1471_, v_x_1472_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object* v___x_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; lean_object* v_pendingProducer_1483_; lean_object* v_pendingConsumer_1484_; lean_object* v_interestWaiter_1485_; uint8_t v_closed_1486_; lean_object* v_pendingIncompleteChunk_1487_; lean_object* v_closeError_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1497_; 
v___x_1482_ = lean_st_ref_take(v___y_1480_);
v_pendingProducer_1483_ = lean_ctor_get(v___x_1482_, 0);
v_pendingConsumer_1484_ = lean_ctor_get(v___x_1482_, 1);
v_interestWaiter_1485_ = lean_ctor_get(v___x_1482_, 2);
v_closed_1486_ = lean_ctor_get_uint8(v___x_1482_, sizeof(void*)*6);
v_pendingIncompleteChunk_1487_ = lean_ctor_get(v___x_1482_, 4);
v_closeError_1488_ = lean_ctor_get(v___x_1482_, 5);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1497_ == 0)
{
lean_object* v_unused_1498_; 
v_unused_1498_ = lean_ctor_get(v___x_1482_, 3);
lean_dec(v_unused_1498_);
v___x_1490_ = v___x_1482_;
v_isShared_1491_ = v_isSharedCheck_1497_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_closeError_1488_);
lean_inc(v_pendingIncompleteChunk_1487_);
lean_inc(v_interestWaiter_1485_);
lean_inc(v_pendingConsumer_1484_);
lean_inc(v_pendingProducer_1483_);
lean_dec(v___x_1482_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1497_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 3, v___x_1479_);
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_pendingProducer_1483_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v_pendingConsumer_1484_);
lean_ctor_set(v_reuseFailAlloc_1496_, 2, v_interestWaiter_1485_);
lean_ctor_set(v_reuseFailAlloc_1496_, 3, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1496_, 4, v_pendingIncompleteChunk_1487_);
lean_ctor_set(v_reuseFailAlloc_1496_, 5, v_closeError_1488_);
lean_ctor_set_uint8(v_reuseFailAlloc_1496_, sizeof(void*)*6, v_closed_1486_);
v___x_1493_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = lean_st_ref_put(v___y_1480_, v___x_1493_);
v___x_1495_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__1));
return v___x_1495_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object* v___x_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(v___x_1499_, v___y_1500_);
lean_dec(v___y_1500_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object* v_machine_1503_, lean_object* v_requestStream_1504_, lean_object* v_keepAliveTimeout_1505_, lean_object* v_currentTimeout_1506_, lean_object* v_headerTimeout_1507_, lean_object* v_response_1508_, lean_object* v_respStream_1509_, lean_object* v_expectData_1510_, uint8_t v_handlerDispatched_1511_, lean_object* v_____r_1512_){
_start:
{
uint8_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1514_ = 0;
v___x_1515_ = lean_box(0);
v___x_1516_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1516_, 0, v_machine_1503_);
lean_ctor_set(v___x_1516_, 1, v_requestStream_1504_);
lean_ctor_set(v___x_1516_, 2, v_keepAliveTimeout_1505_);
lean_ctor_set(v___x_1516_, 3, v_currentTimeout_1506_);
lean_ctor_set(v___x_1516_, 4, v_headerTimeout_1507_);
lean_ctor_set(v___x_1516_, 5, v_response_1508_);
lean_ctor_set(v___x_1516_, 6, v_respStream_1509_);
lean_ctor_set(v___x_1516_, 7, v_expectData_1510_);
lean_ctor_set(v___x_1516_, 8, v___x_1515_);
lean_ctor_set_uint8(v___x_1516_, sizeof(void*)*9, v___x_1514_);
lean_ctor_set_uint8(v___x_1516_, sizeof(void*)*9 + 1, v_handlerDispatched_1511_);
v___x_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
v___x_1518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1517_);
v___x_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object* v_machine_1520_, lean_object* v_requestStream_1521_, lean_object* v_keepAliveTimeout_1522_, lean_object* v_currentTimeout_1523_, lean_object* v_headerTimeout_1524_, lean_object* v_response_1525_, lean_object* v_respStream_1526_, lean_object* v_expectData_1527_, lean_object* v_handlerDispatched_1528_, lean_object* v_____r_1529_, lean_object* v___y_1530_){
_start:
{
uint8_t v_handlerDispatched_boxed_1531_; lean_object* v_res_1532_; 
v_handlerDispatched_boxed_1531_ = lean_unbox(v_handlerDispatched_1528_);
v_res_1532_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(v_machine_1520_, v_requestStream_1521_, v_keepAliveTimeout_1522_, v_currentTimeout_1523_, v_headerTimeout_1524_, v_response_1525_, v_respStream_1526_, v_expectData_1527_, v_handlerDispatched_boxed_1531_, v_____r_1529_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object* v___f_1533_, lean_object* v_x_1534_){
_start:
{
if (lean_obj_tag(v_x_1534_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1544_; 
lean_dec_ref(v___f_1533_);
v_a_1536_ = lean_ctor_get(v_x_1534_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_x_1534_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1538_ = v_x_1534_;
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_a_1536_);
lean_dec(v_x_1534_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1544_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1536_);
v___x_1541_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
return v___x_1542_;
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1546_; 
v_a_1545_ = lean_ctor_get(v_x_1534_, 0);
lean_inc(v_a_1545_);
lean_dec_ref_known(v_x_1534_, 1);
v___x_1546_ = lean_apply_2(v___f_1533_, v_a_1545_, lean_box(0));
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object* v___f_1547_, lean_object* v_x_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(v___f_1547_, v_x_1548_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object* v_requestStream_1551_, lean_object* v___f_1552_, lean_object* v___f_1553_, lean_object* v_x_1554_){
_start:
{
if (lean_obj_tag(v_x_1554_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1564_; 
lean_dec_ref(v___f_1553_);
lean_dec_ref(v___f_1552_);
lean_dec_ref(v_requestStream_1551_);
v_a_1556_ = lean_ctor_get(v_x_1554_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_x_1554_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1558_ = v_x_1554_;
v_isShared_1559_ = v_isSharedCheck_1564_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v_x_1554_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1564_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
lean_object* v___x_1562_; 
v___x_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
return v___x_1562_;
}
}
}
else
{
lean_object* v_a_1565_; uint8_t v___x_1566_; 
v_a_1565_ = lean_ctor_get(v_x_1554_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v_x_1554_, 1);
v___x_1566_ = lean_unbox(v_a_1565_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; lean_object* v___x_1570_; 
lean_dec_ref(v___f_1553_);
v___x_1567_ = lean_unsigned_to_nat(0u);
v___x_1568_ = l_Std_Http_Body_Stream_close(v_requestStream_1551_);
v___x_1569_ = lean_unbox(v_a_1565_);
lean_dec(v_a_1565_);
v___x_1570_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1567_, v___x_1569_, v___x_1568_, v___f_1552_);
return v___x_1570_;
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
lean_dec(v_a_1565_);
lean_dec_ref(v___f_1552_);
lean_dec_ref(v_requestStream_1551_);
v___x_1571_ = lean_box(0);
v___x_1572_ = lean_apply_2(v___f_1553_, v___x_1571_, lean_box(0));
return v___x_1572_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object* v_requestStream_1573_, lean_object* v___f_1574_, lean_object* v___f_1575_, lean_object* v_x_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(v_requestStream_1573_, v___f_1574_, v___f_1575_, v_x_1576_);
return v_res_1578_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0(void){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_1579_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_1580_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___f_1587_; lean_object* v___f_1588_; 
v___x_1586_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1);
v___f_1587_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__4));
v___f_1588_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1588_, 0, v___f_1587_);
lean_closure_set(v___f_1588_, 1, v___x_1586_);
return v___f_1588_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__10(void){
_start:
{
lean_object* v___x_1597_; lean_object* v___f_1598_; lean_object* v___f_1599_; 
v___x_1597_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__1);
v___f_1598_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__9));
v___f_1599_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1599_, 0, v___f_1598_);
lean_closure_set(v___f_1599_, 1, v___x_1597_);
return v___f_1599_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11(void){
_start:
{
lean_object* v___f_1600_; lean_object* v___x_1601_; 
v___f_1600_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__10, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__10_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__10);
v___x_1601_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_1601_, 0, lean_box(0));
lean_closure_set(v___x_1601_, 1, lean_box(0));
lean_closure_set(v___x_1601_, 2, lean_box(0));
lean_closure_set(v___x_1601_, 3, v___f_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object* v___y_1602_, lean_object* v___f_1603_, lean_object* v_x_1604_){
_start:
{
if (lean_obj_tag(v_x_1604_) == 0)
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1614_; 
lean_dec_ref(v___f_1603_);
lean_dec_ref(v___y_1602_);
v_a_1606_ = lean_ctor_get(v_x_1604_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v_x_1604_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1608_ = v_x_1604_;
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v_x_1604_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
return v___x_1612_;
}
}
}
else
{
lean_object* v_machine_1615_; lean_object* v_requestStream_1616_; lean_object* v_keepAliveTimeout_1617_; lean_object* v_currentTimeout_1618_; lean_object* v_headerTimeout_1619_; lean_object* v_response_1620_; lean_object* v_respStream_1621_; lean_object* v_expectData_1622_; uint8_t v_handlerDispatched_1623_; lean_object* v___x_1624_; lean_object* v___f_1625_; lean_object* v___f_1626_; lean_object* v___f_1627_; lean_object* v___x_1628_; uint8_t v___x_1629_; lean_object* v___x_1630_; lean_object* v___f_1631_; lean_object* v___f_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_4925__overap_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
lean_dec_ref_known(v_x_1604_, 1);
v_machine_1615_ = lean_ctor_get(v___y_1602_, 0);
lean_inc_ref(v_machine_1615_);
v_requestStream_1616_ = lean_ctor_get(v___y_1602_, 1);
lean_inc_ref_n(v_requestStream_1616_, 3);
v_keepAliveTimeout_1617_ = lean_ctor_get(v___y_1602_, 2);
lean_inc(v_keepAliveTimeout_1617_);
v_currentTimeout_1618_ = lean_ctor_get(v___y_1602_, 3);
lean_inc(v_currentTimeout_1618_);
v_headerTimeout_1619_ = lean_ctor_get(v___y_1602_, 4);
lean_inc(v_headerTimeout_1619_);
v_response_1620_ = lean_ctor_get(v___y_1602_, 5);
lean_inc_ref(v_response_1620_);
v_respStream_1621_ = lean_ctor_get(v___y_1602_, 6);
lean_inc(v_respStream_1621_);
v_expectData_1622_ = lean_ctor_get(v___y_1602_, 7);
lean_inc(v_expectData_1622_);
v_handlerDispatched_1623_ = lean_ctor_get_uint8(v___y_1602_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_1602_);
v___x_1624_ = lean_box(v_handlerDispatched_1623_);
v___f_1625_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 11, 9);
lean_closure_set(v___f_1625_, 0, v_machine_1615_);
lean_closure_set(v___f_1625_, 1, v_requestStream_1616_);
lean_closure_set(v___f_1625_, 2, v_keepAliveTimeout_1617_);
lean_closure_set(v___f_1625_, 3, v_currentTimeout_1618_);
lean_closure_set(v___f_1625_, 4, v_headerTimeout_1619_);
lean_closure_set(v___f_1625_, 5, v_response_1620_);
lean_closure_set(v___f_1625_, 6, v_respStream_1621_);
lean_closure_set(v___f_1625_, 7, v_expectData_1622_);
lean_closure_set(v___f_1625_, 8, v___x_1624_);
lean_inc_ref(v___f_1625_);
v___f_1626_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1626_, 0, v___f_1625_);
v___f_1627_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed), 5, 3);
lean_closure_set(v___f_1627_, 0, v_requestStream_1616_);
lean_closure_set(v___f_1627_, 1, v___f_1626_);
lean_closure_set(v___f_1627_, 2, v___f_1625_);
v___x_1628_ = lean_unsigned_to_nat(0u);
v___x_1629_ = 0;
v___x_1630_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___f_1631_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5);
v___f_1632_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6));
v___x_1633_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11);
v___x_1634_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_1634_, 0, lean_box(0));
lean_closure_set(v___x_1634_, 1, lean_box(0));
lean_closure_set(v___x_1634_, 2, v___x_1630_);
lean_closure_set(v___x_1634_, 3, lean_box(0));
lean_closure_set(v___x_1634_, 4, lean_box(0));
lean_closure_set(v___x_1634_, 5, v___x_1633_);
lean_closure_set(v___x_1634_, 6, v___f_1603_);
v___x_4925__overap_1635_ = l_Std_Mutex_atomically___redArg(v___x_1630_, v___f_1631_, v___f_1632_, v_requestStream_1616_, v___x_1634_);
v___x_1636_ = lean_apply_1(v___x_4925__overap_1635_, lean_box(0));
v___x_1637_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1628_, v___x_1629_, v___x_1636_, v___f_1627_);
return v___x_1637_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object* v___y_1638_, lean_object* v___f_1639_, lean_object* v_x_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(v___y_1638_, v___f_1639_, v_x_1640_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object* v___y_1643_, lean_object* v_x_1644_){
_start:
{
if (lean_obj_tag(v_x_1644_) == 0)
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1654_; 
lean_dec_ref(v___y_1643_);
v_a_1646_ = lean_ctor_get(v_x_1644_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_x_1644_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1648_ = v_x_1644_;
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v_x_1644_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1654_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
return v___x_1652_;
}
}
}
else
{
lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1663_; 
v_isSharedCheck_1663_ = !lean_is_exclusive(v_x_1644_);
if (v_isSharedCheck_1663_ == 0)
{
lean_object* v_unused_1664_; 
v_unused_1664_ = lean_ctor_get(v_x_1644_, 0);
lean_dec(v_unused_1664_);
v___x_1656_ = v_x_1644_;
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
else
{
lean_dec(v_x_1644_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___y_1643_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v___x_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
return v___x_1661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object* v___y_1665_, lean_object* v_x_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(v___y_1665_, v_x_1666_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object* v_config_1669_, lean_object* v_machine_1670_, lean_object* v_a_1671_, uint8_t v_requiresData_1672_, lean_object* v_expectData_1673_, lean_object* v_pendingHead_1674_, lean_object* v_x_1675_){
_start:
{
if (lean_obj_tag(v_x_1675_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1685_; 
lean_dec(v_pendingHead_1674_);
lean_dec(v_expectData_1673_);
lean_dec_ref(v_a_1671_);
lean_dec_ref(v_machine_1670_);
v_a_1677_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1679_ = v_x_1675_;
v_isShared_1680_ = v_isSharedCheck_1685_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v_x_1675_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1685_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
return v___x_1683_;
}
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1700_; 
v_a_1686_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1688_ = v_x_1675_;
v_isShared_1689_ = v_isSharedCheck_1700_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v_x_1675_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1700_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v_keepAliveTimeout_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1697_; 
v_keepAliveTimeout_1690_ = lean_ctor_get(v_config_1669_, 5);
lean_inc_n(v_keepAliveTimeout_1690_, 2);
v___x_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_keepAliveTimeout_1690_);
v___x_1692_ = lean_box(0);
v___x_1693_ = 0;
v___x_1694_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1694_, 0, v_machine_1670_);
lean_ctor_set(v___x_1694_, 1, v_a_1671_);
lean_ctor_set(v___x_1694_, 2, v___x_1691_);
lean_ctor_set(v___x_1694_, 3, v_keepAliveTimeout_1690_);
lean_ctor_set(v___x_1694_, 4, v___x_1692_);
lean_ctor_set(v___x_1694_, 5, v_a_1686_);
lean_ctor_set(v___x_1694_, 6, v___x_1692_);
lean_ctor_set(v___x_1694_, 7, v_expectData_1673_);
lean_ctor_set(v___x_1694_, 8, v_pendingHead_1674_);
lean_ctor_set_uint8(v___x_1694_, sizeof(void*)*9, v_requiresData_1672_);
lean_ctor_set_uint8(v___x_1694_, sizeof(void*)*9 + 1, v___x_1693_);
v___x_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1694_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1695_);
v___x_1697_ = v___x_1688_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object* v_config_1701_, lean_object* v_machine_1702_, lean_object* v_a_1703_, lean_object* v_requiresData_1704_, lean_object* v_expectData_1705_, lean_object* v_pendingHead_1706_, lean_object* v_x_1707_, lean_object* v___y_1708_){
_start:
{
uint8_t v_requiresData_boxed_1709_; lean_object* v_res_1710_; 
v_requiresData_boxed_1709_ = lean_unbox(v_requiresData_1704_);
v_res_1710_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(v_config_1701_, v_machine_1702_, v_a_1703_, v_requiresData_boxed_1709_, v_expectData_1705_, v_pendingHead_1706_, v_x_1707_);
lean_dec_ref(v_config_1701_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object* v_config_1711_, lean_object* v_machine_1712_, uint8_t v_requiresData_1713_, lean_object* v_expectData_1714_, lean_object* v_pendingHead_1715_, lean_object* v_x_1716_){
_start:
{
if (lean_obj_tag(v_x_1716_) == 0)
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1726_; 
lean_dec(v_pendingHead_1715_);
lean_dec(v_expectData_1714_);
lean_dec_ref(v_machine_1712_);
lean_dec_ref(v_config_1711_);
v_a_1718_ = lean_ctor_get(v_x_1716_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v_x_1716_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1720_ = v_x_1716_;
v_isShared_1721_ = v_isSharedCheck_1726_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v_x_1716_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1726_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1724_; 
v___x_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1723_);
return v___x_1724_;
}
}
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1742_; 
v_a_1727_ = lean_ctor_get(v_x_1716_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v_x_1716_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1729_ = v_x_1716_;
v_isShared_1730_ = v_isSharedCheck_1742_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v_x_1716_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1742_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___f_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1731_ = lean_box(v_requiresData_1713_);
v___f_1732_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed), 8, 6);
lean_closure_set(v___f_1732_, 0, v_config_1711_);
lean_closure_set(v___f_1732_, 1, v_machine_1712_);
lean_closure_set(v___f_1732_, 2, v_a_1727_);
lean_closure_set(v___f_1732_, 3, v___x_1731_);
lean_closure_set(v___f_1732_, 4, v_expectData_1714_);
lean_closure_set(v___f_1732_, 5, v_pendingHead_1715_);
v___x_1733_ = lean_box(0);
v___x_1734_ = lean_unsigned_to_nat(0u);
v___x_1735_ = 0;
v___x_1736_ = l_Std_CloseableChannel_new___redArg(v___x_1733_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v___x_1736_);
v___x_1738_ = v___x_1729_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1736_);
v___x_1738_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
v___x_1740_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1734_, v___x_1735_, v___x_1739_, v___f_1732_);
return v___x_1740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object* v_config_1743_, lean_object* v_machine_1744_, lean_object* v_requiresData_1745_, lean_object* v_expectData_1746_, lean_object* v_pendingHead_1747_, lean_object* v_x_1748_, lean_object* v___y_1749_){
_start:
{
uint8_t v_requiresData_boxed_1750_; lean_object* v_res_1751_; 
v_requiresData_boxed_1750_ = lean_unbox(v_requiresData_1745_);
v_res_1751_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(v_config_1743_, v_machine_1744_, v_requiresData_boxed_1750_, v_expectData_1746_, v_pendingHead_1747_, v_x_1748_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object* v___f_1752_, lean_object* v_____r_1753_){
_start:
{
lean_object* v___x_1755_; uint8_t v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1755_ = lean_unsigned_to_nat(0u);
v___x_1756_ = 0;
v___x_1757_ = l_Std_Http_Body_mkStream();
v___x_1758_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1755_, v___x_1756_, v___x_1757_, v___f_1752_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object* v___f_1759_, lean_object* v_____r_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(v___f_1759_, v_____r_1760_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object* v_close_1763_, lean_object* v_val_1764_, lean_object* v___f_1765_, lean_object* v___f_1766_, lean_object* v_x_1767_){
_start:
{
if (lean_obj_tag(v_x_1767_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1777_; 
lean_dec_ref(v___f_1766_);
lean_dec_ref(v___f_1765_);
lean_dec(v_val_1764_);
lean_dec_ref(v_close_1763_);
v_a_1769_ = lean_ctor_get(v_x_1767_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_x_1767_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1771_ = v_x_1767_;
v_isShared_1772_ = v_isSharedCheck_1777_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v_x_1767_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1777_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; 
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1774_);
return v___x_1775_;
}
}
}
else
{
lean_object* v_a_1778_; uint8_t v___x_1779_; 
v_a_1778_ = lean_ctor_get(v_x_1767_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v_x_1767_, 1);
v___x_1779_ = lean_unbox(v_a_1778_);
if (v___x_1779_ == 0)
{
lean_object* v___x_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; lean_object* v___x_1783_; 
lean_dec_ref(v___f_1766_);
v___x_1780_ = lean_unsigned_to_nat(0u);
v___x_1781_ = lean_apply_2(v_close_1763_, v_val_1764_, lean_box(0));
v___x_1782_ = lean_unbox(v_a_1778_);
lean_dec(v_a_1778_);
v___x_1783_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1780_, v___x_1782_, v___x_1781_, v___f_1765_);
return v___x_1783_;
}
else
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
lean_dec(v_a_1778_);
lean_dec_ref(v___f_1765_);
lean_dec(v_val_1764_);
lean_dec_ref(v_close_1763_);
v___x_1784_ = lean_box(0);
v___x_1785_ = lean_apply_2(v___f_1766_, v___x_1784_, lean_box(0));
return v___x_1785_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object* v_close_1786_, lean_object* v_val_1787_, lean_object* v___f_1788_, lean_object* v___f_1789_, lean_object* v_x_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(v_close_1786_, v_val_1787_, v___f_1788_, v___f_1789_, v_x_1790_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object* v_respStream_1793_, lean_object* v_inst_1794_, lean_object* v___f_1795_, lean_object* v___f_1796_, lean_object* v_____r_1797_){
_start:
{
if (lean_obj_tag(v_respStream_1793_) == 1)
{
lean_object* v_val_1799_; lean_object* v_close_1800_; lean_object* v_isClosed_1801_; lean_object* v___f_1802_; lean_object* v___x_1803_; uint8_t v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v_val_1799_ = lean_ctor_get(v_respStream_1793_, 0);
lean_inc_n(v_val_1799_, 2);
lean_dec_ref_known(v_respStream_1793_, 1);
v_close_1800_ = lean_ctor_get(v_inst_1794_, 1);
lean_inc_ref(v_close_1800_);
v_isClosed_1801_ = lean_ctor_get(v_inst_1794_, 2);
lean_inc_ref(v_isClosed_1801_);
lean_dec_ref(v_inst_1794_);
v___f_1802_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed), 6, 4);
lean_closure_set(v___f_1802_, 0, v_close_1800_);
lean_closure_set(v___f_1802_, 1, v_val_1799_);
lean_closure_set(v___f_1802_, 2, v___f_1795_);
lean_closure_set(v___f_1802_, 3, v___f_1796_);
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = 0;
v___x_1805_ = lean_apply_2(v_isClosed_1801_, v_val_1799_, lean_box(0));
v___x_1806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1803_, v___x_1804_, v___x_1805_, v___f_1802_);
return v___x_1806_;
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
lean_dec_ref(v___f_1795_);
lean_dec_ref(v_inst_1794_);
lean_dec(v_respStream_1793_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_apply_2(v___f_1796_, v___x_1807_, lean_box(0));
return v___x_1808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object* v_respStream_1809_, lean_object* v_inst_1810_, lean_object* v___f_1811_, lean_object* v___f_1812_, lean_object* v_____r_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(v_respStream_1809_, v_inst_1810_, v___f_1811_, v___f_1812_, v_____r_1813_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object* v_requestStream_1816_, lean_object* v_keepAliveTimeout_1817_, lean_object* v_currentTimeout_1818_, lean_object* v_headerTimeout_1819_, lean_object* v_response_1820_, lean_object* v_respStream_1821_, uint8_t v_requiresData_1822_, lean_object* v_expectData_1823_, uint8_t v_handlerDispatched_1824_, lean_object* v_pendingHead_1825_, lean_object* v_x_1826_){
_start:
{
if (lean_obj_tag(v_x_1826_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1836_; 
lean_dec(v_pendingHead_1825_);
lean_dec(v_expectData_1823_);
lean_dec(v_respStream_1821_);
lean_dec_ref(v_response_1820_);
lean_dec(v_headerTimeout_1819_);
lean_dec(v_currentTimeout_1818_);
lean_dec(v_keepAliveTimeout_1817_);
lean_dec_ref(v_requestStream_1816_);
v_a_1828_ = lean_ctor_get(v_x_1826_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_x_1826_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1830_ = v_x_1826_;
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v_x_1826_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1828_);
v___x_1833_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1833_);
return v___x_1834_;
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1858_; 
v_a_1837_ = lean_ctor_get(v_x_1826_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v_x_1826_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1839_ = v_x_1826_;
v_isShared_1840_ = v_isSharedCheck_1858_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v_x_1826_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1858_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v_snd_1841_; uint8_t v___x_1842_; 
v_snd_1841_ = lean_ctor_get(v_a_1837_, 1);
v___x_1842_ = lean_unbox(v_snd_1841_);
if (v___x_1842_ == 0)
{
lean_object* v_fst_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1847_; 
v_fst_1843_ = lean_ctor_get(v_a_1837_, 0);
lean_inc(v_fst_1843_);
lean_dec(v_a_1837_);
v___x_1844_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1844_, 0, v_fst_1843_);
lean_ctor_set(v___x_1844_, 1, v_requestStream_1816_);
lean_ctor_set(v___x_1844_, 2, v_keepAliveTimeout_1817_);
lean_ctor_set(v___x_1844_, 3, v_currentTimeout_1818_);
lean_ctor_set(v___x_1844_, 4, v_headerTimeout_1819_);
lean_ctor_set(v___x_1844_, 5, v_response_1820_);
lean_ctor_set(v___x_1844_, 6, v_respStream_1821_);
lean_ctor_set(v___x_1844_, 7, v_expectData_1823_);
lean_ctor_set(v___x_1844_, 8, v_pendingHead_1825_);
lean_ctor_set_uint8(v___x_1844_, sizeof(void*)*9, v_requiresData_1822_);
lean_ctor_set_uint8(v___x_1844_, sizeof(void*)*9 + 1, v_handlerDispatched_1824_);
v___x_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1845_);
v___x_1847_ = v___x_1839_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1848_; 
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
return v___x_1848_;
}
}
else
{
lean_object* v_fst_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1855_; 
lean_dec(v_pendingHead_1825_);
v_fst_1850_ = lean_ctor_get(v_a_1837_, 0);
lean_inc(v_fst_1850_);
lean_dec(v_a_1837_);
v___x_1851_ = lean_box(0);
v___x_1852_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_1852_, 0, v_fst_1850_);
lean_ctor_set(v___x_1852_, 1, v_requestStream_1816_);
lean_ctor_set(v___x_1852_, 2, v_keepAliveTimeout_1817_);
lean_ctor_set(v___x_1852_, 3, v_currentTimeout_1818_);
lean_ctor_set(v___x_1852_, 4, v_headerTimeout_1819_);
lean_ctor_set(v___x_1852_, 5, v_response_1820_);
lean_ctor_set(v___x_1852_, 6, v_respStream_1821_);
lean_ctor_set(v___x_1852_, 7, v_expectData_1823_);
lean_ctor_set(v___x_1852_, 8, v___x_1851_);
lean_ctor_set_uint8(v___x_1852_, sizeof(void*)*9, v_requiresData_1822_);
lean_ctor_set_uint8(v___x_1852_, sizeof(void*)*9 + 1, v_handlerDispatched_1824_);
v___x_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1853_);
v___x_1855_ = v___x_1839_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1853_);
v___x_1855_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1856_; 
v___x_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
return v___x_1856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object* v_requestStream_1859_, lean_object* v_keepAliveTimeout_1860_, lean_object* v_currentTimeout_1861_, lean_object* v_headerTimeout_1862_, lean_object* v_response_1863_, lean_object* v_respStream_1864_, lean_object* v_requiresData_1865_, lean_object* v_expectData_1866_, lean_object* v_handlerDispatched_1867_, lean_object* v_pendingHead_1868_, lean_object* v_x_1869_, lean_object* v___y_1870_){
_start:
{
uint8_t v_requiresData_boxed_1871_; uint8_t v_handlerDispatched_boxed_1872_; lean_object* v_res_1873_; 
v_requiresData_boxed_1871_ = lean_unbox(v_requiresData_1865_);
v_handlerDispatched_boxed_1872_ = lean_unbox(v_handlerDispatched_1867_);
v_res_1873_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(v_requestStream_1859_, v_keepAliveTimeout_1860_, v_currentTimeout_1861_, v_headerTimeout_1862_, v_response_1863_, v_respStream_1864_, v_requiresData_boxed_1871_, v_expectData_1866_, v_handlerDispatched_boxed_1872_, v_pendingHead_1868_, v_x_1869_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object* v_config_1886_, lean_object* v_inst_1887_, lean_object* v___f_1888_, lean_object* v_handler_1889_, lean_object* v___f_1890_, lean_object* v_inst_1891_, lean_object* v___f_1892_, lean_object* v_connectionContext_1893_, lean_object* v_a_1894_, lean_object* v_x_1895_, lean_object* v___y_1896_){
_start:
{
lean_object* v___f_1898_; 
lean_inc_ref(v___y_1896_);
v___f_1898_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1898_, 0, v___y_1896_);
switch(lean_obj_tag(v_a_1894_))
{
case 0:
{
lean_object* v_head_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1942_; 
lean_dec_ref(v___f_1898_);
lean_dec_ref(v_connectionContext_1893_);
lean_dec_ref(v___f_1892_);
lean_dec_ref(v_inst_1891_);
lean_dec_ref(v___f_1890_);
lean_dec(v_handler_1889_);
lean_dec_ref(v___f_1888_);
lean_dec_ref(v_inst_1887_);
v_head_1899_ = lean_ctor_get(v_a_1894_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v_a_1894_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1901_ = v_a_1894_;
v_isShared_1902_ = v_isSharedCheck_1942_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_head_1899_);
lean_dec(v_a_1894_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1942_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v_machine_1903_; lean_object* v_requestStream_1904_; lean_object* v_response_1905_; lean_object* v_respStream_1906_; uint8_t v_requiresData_1907_; lean_object* v_expectData_1908_; uint8_t v_handlerDispatched_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1937_; 
v_machine_1903_ = lean_ctor_get(v___y_1896_, 0);
v_requestStream_1904_ = lean_ctor_get(v___y_1896_, 1);
v_response_1905_ = lean_ctor_get(v___y_1896_, 5);
v_respStream_1906_ = lean_ctor_get(v___y_1896_, 6);
v_requiresData_1907_ = lean_ctor_get_uint8(v___y_1896_, sizeof(void*)*9);
v_expectData_1908_ = lean_ctor_get(v___y_1896_, 7);
v_handlerDispatched_1909_ = lean_ctor_get_uint8(v___y_1896_, sizeof(void*)*9 + 1);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___y_1896_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; lean_object* v_unused_1939_; lean_object* v_unused_1940_; lean_object* v_unused_1941_; 
v_unused_1938_ = lean_ctor_get(v___y_1896_, 8);
lean_dec(v_unused_1938_);
v_unused_1939_ = lean_ctor_get(v___y_1896_, 4);
lean_dec(v_unused_1939_);
v_unused_1940_ = lean_ctor_get(v___y_1896_, 3);
lean_dec(v_unused_1940_);
v_unused_1941_ = lean_ctor_get(v___y_1896_, 2);
lean_dec(v_unused_1941_);
v___x_1911_ = v___y_1896_;
v_isShared_1912_ = v_isSharedCheck_1937_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_expectData_1908_);
lean_inc(v_respStream_1906_);
lean_inc(v_response_1905_);
lean_inc(v_requestStream_1904_);
lean_inc(v_machine_1903_);
lean_dec(v___y_1896_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1937_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v_lingeringTimeout_1913_; lean_object* v___x_1914_; lean_object* v___x_1916_; 
v_lingeringTimeout_1913_ = lean_ctor_get(v_config_1886_, 4);
lean_inc(v_lingeringTimeout_1913_);
lean_dec_ref(v_config_1886_);
v___x_1914_ = lean_box(0);
lean_inc(v_head_1899_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set_tag(v___x_1901_, 1);
v___x_1916_ = v___x_1901_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_head_1899_);
v___x_1916_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1918_; 
lean_inc_ref(v_requestStream_1904_);
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 8, v___x_1916_);
lean_ctor_set(v___x_1911_, 4, v___x_1914_);
lean_ctor_set(v___x_1911_, 3, v_lingeringTimeout_1913_);
lean_ctor_set(v___x_1911_, 2, v___x_1914_);
v___x_1918_ = v___x_1911_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_machine_1903_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v_requestStream_1904_);
lean_ctor_set(v_reuseFailAlloc_1935_, 2, v___x_1914_);
lean_ctor_set(v_reuseFailAlloc_1935_, 3, v_lingeringTimeout_1913_);
lean_ctor_set(v_reuseFailAlloc_1935_, 4, v___x_1914_);
lean_ctor_set(v_reuseFailAlloc_1935_, 5, v_response_1905_);
lean_ctor_set(v_reuseFailAlloc_1935_, 6, v_respStream_1906_);
lean_ctor_set(v_reuseFailAlloc_1935_, 7, v_expectData_1908_);
lean_ctor_set(v_reuseFailAlloc_1935_, 8, v___x_1916_);
lean_ctor_set_uint8(v_reuseFailAlloc_1935_, sizeof(void*)*9, v_requiresData_1907_);
lean_ctor_set_uint8(v_reuseFailAlloc_1935_, sizeof(void*)*9 + 1, v_handlerDispatched_1909_);
v___x_1918_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
uint8_t v___x_1919_; uint8_t v___x_1920_; lean_object* v___x_1921_; 
v___x_1919_ = 0;
v___x_1920_ = 1;
v___x_1921_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___x_1919_, v_head_1899_, v___x_1920_);
lean_dec(v_head_1899_);
if (lean_obj_tag(v___x_1921_) == 1)
{
lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; lean_object* v___x_1926_; lean_object* v___f_1927_; lean_object* v___f_1928_; lean_object* v___x_5115__overap_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___f_1922_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1922_, 0, v___x_1918_);
v___f_1923_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1923_, 0, v___x_1921_);
v___x_1924_ = lean_unsigned_to_nat(0u);
v___x_1925_ = 0;
v___x_1926_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___f_1927_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5);
v___f_1928_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6));
v___x_5115__overap_1929_ = l_Std_Mutex_atomically___redArg(v___x_1926_, v___f_1927_, v___f_1928_, v_requestStream_1904_, v___f_1923_);
v___x_1930_ = lean_apply_1(v___x_5115__overap_1929_, lean_box(0));
v___x_1931_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1924_, v___x_1925_, v___x_1930_, v___f_1922_);
return v___x_1931_;
}
else
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
lean_dec(v___x_1921_);
lean_dec_ref(v_requestStream_1904_);
v___x_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1918_);
v___x_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1932_);
v___x_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1933_);
return v___x_1934_;
}
}
}
}
}
}
case 1:
{
lean_object* v_size_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1970_; 
lean_dec_ref(v___f_1898_);
lean_dec_ref(v_connectionContext_1893_);
lean_dec_ref(v___f_1892_);
lean_dec_ref(v_inst_1891_);
lean_dec_ref(v___f_1890_);
lean_dec(v_handler_1889_);
lean_dec_ref(v___f_1888_);
lean_dec_ref(v_inst_1887_);
lean_dec_ref(v_config_1886_);
v_size_1943_ = lean_ctor_get(v_a_1894_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_a_1894_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1945_ = v_a_1894_;
v_isShared_1946_ = v_isSharedCheck_1970_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_size_1943_);
lean_dec(v_a_1894_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1970_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v_machine_1947_; lean_object* v_requestStream_1948_; lean_object* v_keepAliveTimeout_1949_; lean_object* v_currentTimeout_1950_; lean_object* v_headerTimeout_1951_; lean_object* v_response_1952_; lean_object* v_respStream_1953_; uint8_t v_handlerDispatched_1954_; lean_object* v_pendingHead_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1968_; 
v_machine_1947_ = lean_ctor_get(v___y_1896_, 0);
v_requestStream_1948_ = lean_ctor_get(v___y_1896_, 1);
v_keepAliveTimeout_1949_ = lean_ctor_get(v___y_1896_, 2);
v_currentTimeout_1950_ = lean_ctor_get(v___y_1896_, 3);
v_headerTimeout_1951_ = lean_ctor_get(v___y_1896_, 4);
v_response_1952_ = lean_ctor_get(v___y_1896_, 5);
v_respStream_1953_ = lean_ctor_get(v___y_1896_, 6);
v_handlerDispatched_1954_ = lean_ctor_get_uint8(v___y_1896_, sizeof(void*)*9 + 1);
v_pendingHead_1955_ = lean_ctor_get(v___y_1896_, 8);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___y_1896_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; 
v_unused_1969_ = lean_ctor_get(v___y_1896_, 7);
lean_dec(v_unused_1969_);
v___x_1957_ = v___y_1896_;
v_isShared_1958_ = v_isSharedCheck_1968_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_pendingHead_1955_);
lean_inc(v_respStream_1953_);
lean_inc(v_response_1952_);
lean_inc(v_headerTimeout_1951_);
lean_inc(v_currentTimeout_1950_);
lean_inc(v_keepAliveTimeout_1949_);
lean_inc(v_requestStream_1948_);
lean_inc(v_machine_1947_);
lean_dec(v___y_1896_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1968_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
uint8_t v___x_1959_; lean_object* v___x_1961_; 
v___x_1959_ = 1;
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 7, v_size_1943_);
v___x_1961_ = v___x_1957_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_machine_1947_);
lean_ctor_set(v_reuseFailAlloc_1967_, 1, v_requestStream_1948_);
lean_ctor_set(v_reuseFailAlloc_1967_, 2, v_keepAliveTimeout_1949_);
lean_ctor_set(v_reuseFailAlloc_1967_, 3, v_currentTimeout_1950_);
lean_ctor_set(v_reuseFailAlloc_1967_, 4, v_headerTimeout_1951_);
lean_ctor_set(v_reuseFailAlloc_1967_, 5, v_response_1952_);
lean_ctor_set(v_reuseFailAlloc_1967_, 6, v_respStream_1953_);
lean_ctor_set(v_reuseFailAlloc_1967_, 7, v_size_1943_);
lean_ctor_set(v_reuseFailAlloc_1967_, 8, v_pendingHead_1955_);
lean_ctor_set_uint8(v_reuseFailAlloc_1967_, sizeof(void*)*9 + 1, v_handlerDispatched_1954_);
v___x_1961_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
lean_object* v___x_1963_; 
lean_ctor_set_uint8(v___x_1961_, sizeof(void*)*9, v___x_1959_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v___x_1961_);
v___x_1963_ = v___x_1945_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1961_);
v___x_1963_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
v___x_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1964_);
return v___x_1965_;
}
}
}
}
}
case 2:
{
lean_object* v_err_1971_; lean_object* v_onFailure_1972_; lean_object* v___f_1973_; lean_object* v___y_1975_; 
lean_dec_ref(v___f_1898_);
lean_dec_ref(v_connectionContext_1893_);
lean_dec_ref(v___f_1892_);
lean_dec_ref(v_inst_1891_);
lean_dec_ref(v___f_1890_);
lean_dec_ref(v_config_1886_);
v_err_1971_ = lean_ctor_get(v_a_1894_, 0);
lean_inc(v_err_1971_);
lean_dec_ref_known(v_a_1894_, 1);
v_onFailure_1972_ = lean_ctor_get(v_inst_1887_, 2);
lean_inc_ref(v_onFailure_1972_);
lean_dec_ref(v_inst_1887_);
v___f_1973_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_1973_, 0, v___y_1896_);
lean_closure_set(v___f_1973_, 1, v___f_1888_);
switch(lean_obj_tag(v_err_1971_))
{
case 0:
{
lean_object* v___x_1981_; 
v___x_1981_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0));
v___y_1975_ = v___x_1981_;
goto v___jp_1974_;
}
case 1:
{
lean_object* v___x_1982_; 
v___x_1982_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1));
v___y_1975_ = v___x_1982_;
goto v___jp_1974_;
}
case 2:
{
lean_object* v___x_1983_; 
v___x_1983_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2));
v___y_1975_ = v___x_1983_;
goto v___jp_1974_;
}
case 3:
{
lean_object* v___x_1984_; 
v___x_1984_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3));
v___y_1975_ = v___x_1984_;
goto v___jp_1974_;
}
case 4:
{
lean_object* v___x_1985_; 
v___x_1985_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4));
v___y_1975_ = v___x_1985_;
goto v___jp_1974_;
}
case 5:
{
lean_object* v___x_1986_; 
v___x_1986_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5));
v___y_1975_ = v___x_1986_;
goto v___jp_1974_;
}
case 6:
{
lean_object* v___x_1987_; 
v___x_1987_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6));
v___y_1975_ = v___x_1987_;
goto v___jp_1974_;
}
case 7:
{
lean_object* v___x_1988_; 
v___x_1988_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7));
v___y_1975_ = v___x_1988_;
goto v___jp_1974_;
}
case 8:
{
lean_object* v___x_1989_; 
v___x_1989_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8));
v___y_1975_ = v___x_1989_;
goto v___jp_1974_;
}
case 9:
{
lean_object* v___x_1990_; 
v___x_1990_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9));
v___y_1975_ = v___x_1990_;
goto v___jp_1974_;
}
case 10:
{
lean_object* v___x_1991_; 
v___x_1991_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10));
v___y_1975_ = v___x_1991_;
goto v___jp_1974_;
}
default: 
{
lean_object* v_message_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v_message_1992_ = lean_ctor_get(v_err_1971_, 0);
lean_inc_ref(v_message_1992_);
lean_dec_ref_known(v_err_1971_, 1);
v___x_1993_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11));
v___x_1994_ = lean_string_append(v___x_1993_, v_message_1992_);
lean_dec_ref(v_message_1992_);
v___y_1975_ = v___x_1994_;
goto v___jp_1974_;
}
}
v___jp_1974_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; uint8_t v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1976_ = lean_mk_io_user_error(v___y_1975_);
v___x_1977_ = lean_unsigned_to_nat(0u);
v___x_1978_ = 0;
v___x_1979_ = lean_apply_3(v_onFailure_1972_, v_handler_1889_, v___x_1976_, lean_box(0));
v___x_1980_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1977_, v___x_1978_, v___x_1979_, v___f_1973_);
return v___x_1980_;
}
}
case 4:
{
lean_object* v_requestStream_1995_; lean_object* v___f_1996_; lean_object* v___f_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; lean_object* v___x_2000_; lean_object* v___f_2001_; lean_object* v___f_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_5172__overap_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
lean_dec_ref(v_connectionContext_1893_);
lean_dec_ref(v___f_1892_);
lean_dec_ref(v_inst_1891_);
lean_dec(v_handler_1889_);
lean_dec_ref(v___f_1888_);
lean_dec_ref(v_inst_1887_);
lean_dec_ref(v_config_1886_);
v_requestStream_1995_ = lean_ctor_get(v___y_1896_, 1);
lean_inc_ref_n(v_requestStream_1995_, 2);
v___f_1996_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1996_, 0, v___y_1896_);
v___f_1997_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed), 5, 3);
lean_closure_set(v___f_1997_, 0, v_requestStream_1995_);
lean_closure_set(v___f_1997_, 1, v___f_1996_);
lean_closure_set(v___f_1997_, 2, v___f_1898_);
v___x_1998_ = lean_unsigned_to_nat(0u);
v___x_1999_ = 0;
v___x_2000_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___f_2001_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5);
v___f_2002_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6));
v___x_2003_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11);
v___x_2004_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2004_, 0, lean_box(0));
lean_closure_set(v___x_2004_, 1, lean_box(0));
lean_closure_set(v___x_2004_, 2, v___x_2000_);
lean_closure_set(v___x_2004_, 3, lean_box(0));
lean_closure_set(v___x_2004_, 4, lean_box(0));
lean_closure_set(v___x_2004_, 5, v___x_2003_);
lean_closure_set(v___x_2004_, 6, v___f_1890_);
v___x_5172__overap_2005_ = l_Std_Mutex_atomically___redArg(v___x_2000_, v___f_2001_, v___f_2002_, v_requestStream_1995_, v___x_2004_);
v___x_2006_ = lean_apply_1(v___x_5172__overap_2005_, lean_box(0));
v___x_2007_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1998_, v___x_1999_, v___x_2006_, v___f_1997_);
return v___x_2007_;
}
case 6:
{
lean_object* v_machine_2008_; lean_object* v_requestStream_2009_; lean_object* v_respStream_2010_; uint8_t v_requiresData_2011_; lean_object* v_expectData_2012_; lean_object* v_pendingHead_2013_; lean_object* v___x_2014_; lean_object* v___f_2015_; lean_object* v___f_2016_; lean_object* v___f_2017_; lean_object* v___f_2018_; lean_object* v___f_2019_; lean_object* v___f_2020_; lean_object* v___x_2021_; uint8_t v___x_2022_; lean_object* v___x_2023_; lean_object* v___f_2024_; lean_object* v___f_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_5197__overap_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
lean_dec_ref(v___f_1898_);
lean_dec_ref(v_connectionContext_1893_);
lean_dec_ref(v___f_1890_);
lean_dec(v_handler_1889_);
lean_dec_ref(v___f_1888_);
lean_dec_ref(v_inst_1887_);
v_machine_2008_ = lean_ctor_get(v___y_1896_, 0);
lean_inc_ref(v_machine_2008_);
v_requestStream_2009_ = lean_ctor_get(v___y_1896_, 1);
lean_inc_ref_n(v_requestStream_2009_, 2);
v_respStream_2010_ = lean_ctor_get(v___y_1896_, 6);
lean_inc(v_respStream_2010_);
v_requiresData_2011_ = lean_ctor_get_uint8(v___y_1896_, sizeof(void*)*9);
v_expectData_2012_ = lean_ctor_get(v___y_1896_, 7);
lean_inc(v_expectData_2012_);
v_pendingHead_2013_ = lean_ctor_get(v___y_1896_, 8);
lean_inc(v_pendingHead_2013_);
lean_dec_ref(v___y_1896_);
v___x_2014_ = lean_box(v_requiresData_2011_);
v___f_2015_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed), 7, 5);
lean_closure_set(v___f_2015_, 0, v_config_1886_);
lean_closure_set(v___f_2015_, 1, v_machine_2008_);
lean_closure_set(v___f_2015_, 2, v___x_2014_);
lean_closure_set(v___f_2015_, 3, v_expectData_2012_);
lean_closure_set(v___f_2015_, 4, v_pendingHead_2013_);
v___f_2016_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed), 3, 1);
lean_closure_set(v___f_2016_, 0, v___f_2015_);
lean_inc_ref(v___f_2016_);
v___f_2017_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2017_, 0, v___f_2016_);
v___f_2018_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_2018_, 0, v_respStream_2010_);
lean_closure_set(v___f_2018_, 1, v_inst_1891_);
lean_closure_set(v___f_2018_, 2, v___f_2017_);
lean_closure_set(v___f_2018_, 3, v___f_2016_);
lean_inc_ref(v___f_2018_);
v___f_2019_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2019_, 0, v___f_2018_);
v___f_2020_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed), 5, 3);
lean_closure_set(v___f_2020_, 0, v_requestStream_2009_);
lean_closure_set(v___f_2020_, 1, v___f_2019_);
lean_closure_set(v___f_2020_, 2, v___f_2018_);
v___x_2021_ = lean_unsigned_to_nat(0u);
v___x_2022_ = 0;
v___x_2023_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___f_2024_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5);
v___f_2025_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6));
v___x_2026_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11);
v___x_2027_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2027_, 0, lean_box(0));
lean_closure_set(v___x_2027_, 1, lean_box(0));
lean_closure_set(v___x_2027_, 2, v___x_2023_);
lean_closure_set(v___x_2027_, 3, lean_box(0));
lean_closure_set(v___x_2027_, 4, lean_box(0));
lean_closure_set(v___x_2027_, 5, v___x_2026_);
lean_closure_set(v___x_2027_, 6, v___f_1892_);
v___x_5197__overap_2028_ = l_Std_Mutex_atomically___redArg(v___x_2023_, v___f_2024_, v___f_2025_, v_requestStream_2009_, v___x_2027_);
v___x_2029_ = lean_apply_1(v___x_5197__overap_2028_, lean_box(0));
v___x_2030_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2021_, v___x_2022_, v___x_2029_, v___f_2020_);
return v___x_2030_;
}
case 7:
{
lean_object* v_pendingHead_2031_; 
lean_dec_ref(v___f_1898_);
lean_dec_ref(v___f_1892_);
lean_dec_ref(v_inst_1891_);
lean_dec_ref(v___f_1890_);
lean_dec_ref(v___f_1888_);
v_pendingHead_2031_ = lean_ctor_get(v___y_1896_, 8);
if (lean_obj_tag(v_pendingHead_2031_) == 1)
{
lean_object* v_machine_2032_; lean_object* v_requestStream_2033_; lean_object* v_keepAliveTimeout_2034_; lean_object* v_currentTimeout_2035_; lean_object* v_headerTimeout_2036_; lean_object* v_response_2037_; lean_object* v_respStream_2038_; uint8_t v_requiresData_2039_; lean_object* v_expectData_2040_; uint8_t v_handlerDispatched_2041_; lean_object* v_val_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___f_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
lean_inc_ref(v_pendingHead_2031_);
v_machine_2032_ = lean_ctor_get(v___y_1896_, 0);
lean_inc_ref(v_machine_2032_);
v_requestStream_2033_ = lean_ctor_get(v___y_1896_, 1);
lean_inc_ref(v_requestStream_2033_);
v_keepAliveTimeout_2034_ = lean_ctor_get(v___y_1896_, 2);
lean_inc(v_keepAliveTimeout_2034_);
v_currentTimeout_2035_ = lean_ctor_get(v___y_1896_, 3);
lean_inc(v_currentTimeout_2035_);
v_headerTimeout_2036_ = lean_ctor_get(v___y_1896_, 4);
lean_inc(v_headerTimeout_2036_);
v_response_2037_ = lean_ctor_get(v___y_1896_, 5);
lean_inc_ref(v_response_2037_);
v_respStream_2038_ = lean_ctor_get(v___y_1896_, 6);
lean_inc(v_respStream_2038_);
v_requiresData_2039_ = lean_ctor_get_uint8(v___y_1896_, sizeof(void*)*9);
v_expectData_2040_ = lean_ctor_get(v___y_1896_, 7);
lean_inc(v_expectData_2040_);
v_handlerDispatched_2041_ = lean_ctor_get_uint8(v___y_1896_, sizeof(void*)*9 + 1);
lean_dec_ref(v___y_1896_);
v_val_2042_ = lean_ctor_get(v_pendingHead_2031_, 0);
lean_inc(v_val_2042_);
v___x_2043_ = lean_box(v_requiresData_2039_);
v___x_2044_ = lean_box(v_handlerDispatched_2041_);
v___f_2045_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed), 12, 10);
lean_closure_set(v___f_2045_, 0, v_requestStream_2033_);
lean_closure_set(v___f_2045_, 1, v_keepAliveTimeout_2034_);
lean_closure_set(v___f_2045_, 2, v_currentTimeout_2035_);
lean_closure_set(v___f_2045_, 3, v_headerTimeout_2036_);
lean_closure_set(v___f_2045_, 4, v_response_2037_);
lean_closure_set(v___f_2045_, 5, v_respStream_2038_);
lean_closure_set(v___f_2045_, 6, v___x_2043_);
lean_closure_set(v___f_2045_, 7, v_expectData_2040_);
lean_closure_set(v___f_2045_, 8, v___x_2044_);
lean_closure_set(v___f_2045_, 9, v_pendingHead_2031_);
v___x_2046_ = lean_unsigned_to_nat(0u);
v___x_2047_ = 0;
v___x_2048_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_1887_, v_handler_1889_, v_machine_2032_, v_val_2042_, v_config_1886_, v_connectionContext_1893_);
v___x_2049_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2046_, v___x_2047_, v___x_2048_, v___f_2045_);
return v___x_2049_;
}
else
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
lean_dec_ref(v_connectionContext_1893_);
lean_dec(v_handler_1889_);
lean_dec_ref(v_inst_1887_);
lean_dec_ref(v_config_1886_);
v___x_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2050_, 0, v___y_1896_);
v___x_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
v___x_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
return v___x_2052_;
}
}
default: 
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
lean_dec_ref(v___f_1898_);
lean_dec(v_a_1894_);
lean_dec_ref(v_connectionContext_1893_);
lean_dec_ref(v___f_1892_);
lean_dec_ref(v_inst_1891_);
lean_dec_ref(v___f_1890_);
lean_dec(v_handler_1889_);
lean_dec_ref(v___f_1888_);
lean_dec_ref(v_inst_1887_);
lean_dec_ref(v_config_1886_);
v___x_2053_ = lean_box(0);
v___x_2054_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(v___y_1896_, v___x_2053_);
return v___x_2054_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object* v_config_2055_, lean_object* v_inst_2056_, lean_object* v___f_2057_, lean_object* v_handler_2058_, lean_object* v___f_2059_, lean_object* v_inst_2060_, lean_object* v___f_2061_, lean_object* v_connectionContext_2062_, lean_object* v_a_2063_, lean_object* v_x_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(v_config_2055_, v_inst_2056_, v___f_2057_, v_handler_2058_, v___f_2059_, v_inst_2060_, v___f_2061_, v_connectionContext_2062_, v_a_2063_, v_x_2064_, v___y_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object* v_x_2068_){
_start:
{
lean_object* v___x_2070_; 
v___x_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2070_, 0, v_x_2068_);
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object* v_x_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(v_x_2071_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object* v_inst_2076_, lean_object* v_inst_2077_, lean_object* v_handler_2078_, lean_object* v_config_2079_, lean_object* v_connectionContext_2080_, lean_object* v_events_2081_, lean_object* v_state_2082_){
_start:
{
lean_object* v___f_2084_; lean_object* v___f_2085_; lean_object* v___f_2086_; lean_object* v___x_2087_; size_t v_sz_2088_; size_t v___x_2089_; lean_object* v___x_2090_; uint8_t v___x_2091_; lean_object* v___x_4123__overap_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___f_2084_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_2085_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed), 12, 8);
lean_closure_set(v___f_2085_, 0, v_config_2079_);
lean_closure_set(v___f_2085_, 1, v_inst_2076_);
lean_closure_set(v___f_2085_, 2, v___f_2084_);
lean_closure_set(v___f_2085_, 3, v_handler_2078_);
lean_closure_set(v___f_2085_, 4, v___f_2084_);
lean_closure_set(v___f_2085_, 5, v_inst_2077_);
lean_closure_set(v___f_2085_, 6, v___f_2084_);
lean_closure_set(v___f_2085_, 7, v_connectionContext_2080_);
v___f_2086_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1));
v___x_2087_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v_sz_2088_ = lean_array_size(v_events_2081_);
v___x_2089_ = ((size_t)0ULL);
v___x_2090_ = lean_unsigned_to_nat(0u);
v___x_2091_ = 0;
v___x_4123__overap_2092_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2087_, v_events_2081_, v___f_2085_, v_sz_2088_, v___x_2089_, v_state_2082_);
v___x_2093_ = lean_apply_1(v___x_4123__overap_2092_, lean_box(0));
v___x_2094_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2090_, v___x_2091_, v___x_2093_, v___f_2086_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object* v_inst_2095_, lean_object* v_inst_2096_, lean_object* v_handler_2097_, lean_object* v_config_2098_, lean_object* v_connectionContext_2099_, lean_object* v_events_2100_, lean_object* v_state_2101_, lean_object* v_a_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2095_, v_inst_2096_, v_handler_2097_, v_config_2098_, v_connectionContext_2099_, v_events_2100_, v_state_2101_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object* v_00_u03c3_2104_, lean_object* v_00_u03b2_2105_, lean_object* v_inst_2106_, lean_object* v_inst_2107_, lean_object* v_handler_2108_, lean_object* v_config_2109_, lean_object* v_connectionContext_2110_, lean_object* v_events_2111_, lean_object* v_state_2112_){
_start:
{
lean_object* v___x_2114_; 
v___x_2114_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2106_, v_inst_2107_, v_handler_2108_, v_config_2109_, v_connectionContext_2110_, v_events_2111_, v_state_2112_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object* v_00_u03c3_2115_, lean_object* v_00_u03b2_2116_, lean_object* v_inst_2117_, lean_object* v_inst_2118_, lean_object* v_handler_2119_, lean_object* v_config_2120_, lean_object* v_connectionContext_2121_, lean_object* v_events_2122_, lean_object* v_state_2123_, lean_object* v_a_2124_){
_start:
{
lean_object* v_res_2125_; 
v_res_2125_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(v_00_u03c3_2115_, v_00_u03b2_2116_, v_inst_2117_, v_inst_2118_, v_handler_2119_, v_config_2120_, v_connectionContext_2121_, v_events_2122_, v_state_2123_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object* v_x_2126_){
_start:
{
if (lean_obj_tag(v_x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2128_; 
v_a_2127_ = lean_ctor_get(v_x_2126_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v_x_2126_, 1);
v___x_2128_ = lean_task_pure(v_a_2127_);
return v___x_2128_;
}
else
{
lean_object* v_a_2129_; 
v_a_2129_ = lean_ctor_get(v_x_2126_, 0);
lean_inc_ref(v_a_2129_);
lean_dec_ref_known(v_x_2126_, 1);
return v_a_2129_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object* v_machine_2130_, lean_object* v_requestStream_2131_, lean_object* v_keepAliveTimeout_2132_, lean_object* v_currentTimeout_2133_, lean_object* v_headerTimeout_2134_, lean_object* v_response_2135_, lean_object* v_respStream_2136_, uint8_t v_requiresData_2137_, lean_object* v_expectData_2138_, lean_object* v_x_2139_){
_start:
{
if (lean_obj_tag(v_x_2139_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2149_; 
lean_dec(v_expectData_2138_);
lean_dec(v_respStream_2136_);
lean_dec_ref(v_response_2135_);
lean_dec(v_headerTimeout_2134_);
lean_dec(v_currentTimeout_2133_);
lean_dec(v_keepAliveTimeout_2132_);
lean_dec_ref(v_requestStream_2131_);
lean_dec_ref(v_machine_2130_);
v_a_2141_ = lean_ctor_get(v_x_2139_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v_x_2139_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2143_ = v_x_2139_;
v_isShared_2144_ = v_isSharedCheck_2149_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v_x_2139_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2149_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_a_2141_);
v___x_2146_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
lean_object* v___x_2147_; 
v___x_2147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2146_);
return v___x_2147_;
}
}
}
else
{
lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2160_; 
v_isSharedCheck_2160_ = !lean_is_exclusive(v_x_2139_);
if (v_isSharedCheck_2160_ == 0)
{
lean_object* v_unused_2161_; 
v_unused_2161_ = lean_ctor_get(v_x_2139_, 0);
lean_dec(v_unused_2161_);
v___x_2151_ = v_x_2139_;
v_isShared_2152_ = v_isSharedCheck_2160_;
goto v_resetjp_2150_;
}
else
{
lean_dec(v_x_2139_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2160_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
uint8_t v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2157_; 
v___x_2153_ = 1;
v___x_2154_ = lean_box(0);
v___x_2155_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2155_, 0, v_machine_2130_);
lean_ctor_set(v___x_2155_, 1, v_requestStream_2131_);
lean_ctor_set(v___x_2155_, 2, v_keepAliveTimeout_2132_);
lean_ctor_set(v___x_2155_, 3, v_currentTimeout_2133_);
lean_ctor_set(v___x_2155_, 4, v_headerTimeout_2134_);
lean_ctor_set(v___x_2155_, 5, v_response_2135_);
lean_ctor_set(v___x_2155_, 6, v_respStream_2136_);
lean_ctor_set(v___x_2155_, 7, v_expectData_2138_);
lean_ctor_set(v___x_2155_, 8, v___x_2154_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*9, v_requiresData_2137_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*9 + 1, v___x_2153_);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v___x_2155_);
v___x_2157_ = v___x_2151_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
lean_object* v___x_2158_; 
v___x_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2157_);
return v___x_2158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object* v_machine_2162_, lean_object* v_requestStream_2163_, lean_object* v_keepAliveTimeout_2164_, lean_object* v_currentTimeout_2165_, lean_object* v_headerTimeout_2166_, lean_object* v_response_2167_, lean_object* v_respStream_2168_, lean_object* v_requiresData_2169_, lean_object* v_expectData_2170_, lean_object* v_x_2171_, lean_object* v___y_2172_){
_start:
{
uint8_t v_requiresData_boxed_2173_; lean_object* v_res_2174_; 
v_requiresData_boxed_2173_ = lean_unbox(v_requiresData_2169_);
v_res_2174_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(v_machine_2162_, v_requestStream_2163_, v_keepAliveTimeout_2164_, v_currentTimeout_2165_, v_headerTimeout_2166_, v_response_2167_, v_respStream_2168_, v_requiresData_boxed_2173_, v_expectData_2170_, v_x_2171_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object* v_toFunctor_2175_, lean_object* v_response_2176_, lean_object* v___x_2177_, lean_object* v___f_2178_, lean_object* v_x_2179_){
_start:
{
if (lean_obj_tag(v_x_2179_) == 0)
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2189_; 
lean_dec_ref(v___f_2178_);
lean_dec(v___x_2177_);
lean_dec_ref(v_response_2176_);
lean_dec_ref(v_toFunctor_2175_);
v_a_2181_ = lean_ctor_get(v_x_2179_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v_x_2179_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2183_ = v_x_2179_;
v_isShared_2184_ = v_isSharedCheck_2189_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v_x_2179_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2189_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
lean_object* v___x_2187_; 
v___x_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
return v___x_2187_;
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2204_; 
v_a_2190_ = lean_ctor_get(v_x_2179_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v_x_2179_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2192_ = v_x_2179_;
v_isShared_2193_ = v_isSharedCheck_2204_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v_x_2179_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2204_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2200_; 
v___x_2194_ = lean_alloc_closure((void*)(l_Functor_discard), 4, 3);
lean_closure_set(v___x_2194_, 0, lean_box(0));
lean_closure_set(v___x_2194_, 1, lean_box(0));
lean_closure_set(v___x_2194_, 2, v_toFunctor_2175_);
v___x_2195_ = lean_alloc_closure((void*)(l_Std_Channel_send___boxed), 4, 2);
lean_closure_set(v___x_2195_, 0, lean_box(0));
lean_closure_set(v___x_2195_, 1, v_response_2176_);
v___x_2196_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2196_, 0, lean_box(0));
lean_closure_set(v___x_2196_, 1, lean_box(0));
lean_closure_set(v___x_2196_, 2, lean_box(0));
lean_closure_set(v___x_2196_, 3, v___x_2194_);
lean_closure_set(v___x_2196_, 4, v___x_2195_);
v___x_2197_ = 0;
lean_inc(v___x_2177_);
v___x_2198_ = l_BaseIO_chainTask___redArg(v_a_2190_, v___x_2196_, v___x_2177_, v___x_2197_);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 0, v___x_2198_);
v___x_2200_ = v___x_2192_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2198_);
v___x_2200_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2200_);
v___x_2202_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2177_, v___x_2197_, v___x_2201_, v___f_2178_);
return v___x_2202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object* v_toFunctor_2205_, lean_object* v_response_2206_, lean_object* v___x_2207_, lean_object* v___f_2208_, lean_object* v_x_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(v_toFunctor_2205_, v_response_2206_, v___x_2207_, v___f_2208_, v_x_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object* v_inst_2213_, lean_object* v_handler_2214_, lean_object* v_extensions_2215_, lean_object* v_connectionContext_2216_, lean_object* v_state_2217_){
_start:
{
lean_object* v___x_2219_; lean_object* v_toApplicative_2220_; lean_object* v_pendingHead_2221_; 
v___x_2219_ = l_instMonadBaseIO;
v_toApplicative_2220_ = lean_ctor_get(v___x_2219_, 0);
v_pendingHead_2221_ = lean_ctor_get(v_state_2217_, 8);
lean_inc(v_pendingHead_2221_);
if (lean_obj_tag(v_pendingHead_2221_) == 1)
{
lean_object* v_toFunctor_2222_; lean_object* v_machine_2223_; lean_object* v_requestStream_2224_; lean_object* v_keepAliveTimeout_2225_; lean_object* v_currentTimeout_2226_; lean_object* v_headerTimeout_2227_; lean_object* v_response_2228_; lean_object* v_respStream_2229_; uint8_t v_requiresData_2230_; lean_object* v_expectData_2231_; lean_object* v_val_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2254_; 
v_toFunctor_2222_ = lean_ctor_get(v_toApplicative_2220_, 0);
v_machine_2223_ = lean_ctor_get(v_state_2217_, 0);
lean_inc_ref(v_machine_2223_);
v_requestStream_2224_ = lean_ctor_get(v_state_2217_, 1);
lean_inc_ref(v_requestStream_2224_);
v_keepAliveTimeout_2225_ = lean_ctor_get(v_state_2217_, 2);
lean_inc(v_keepAliveTimeout_2225_);
v_currentTimeout_2226_ = lean_ctor_get(v_state_2217_, 3);
lean_inc(v_currentTimeout_2226_);
v_headerTimeout_2227_ = lean_ctor_get(v_state_2217_, 4);
lean_inc(v_headerTimeout_2227_);
v_response_2228_ = lean_ctor_get(v_state_2217_, 5);
lean_inc_ref(v_response_2228_);
v_respStream_2229_ = lean_ctor_get(v_state_2217_, 6);
lean_inc(v_respStream_2229_);
v_requiresData_2230_ = lean_ctor_get_uint8(v_state_2217_, sizeof(void*)*9);
v_expectData_2231_ = lean_ctor_get(v_state_2217_, 7);
lean_inc(v_expectData_2231_);
lean_dec_ref(v_state_2217_);
v_val_2232_ = lean_ctor_get(v_pendingHead_2221_, 0);
v_isSharedCheck_2254_ = !lean_is_exclusive(v_pendingHead_2221_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2234_ = v_pendingHead_2221_;
v_isShared_2235_ = v_isSharedCheck_2254_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_val_2232_);
lean_dec(v_pendingHead_2221_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2254_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v_onRequest_2236_; lean_object* v___f_2237_; lean_object* v___x_2238_; lean_object* v___f_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___f_2243_; uint8_t v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; uint8_t v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2250_; 
v_onRequest_2236_ = lean_ctor_get(v_inst_2213_, 1);
lean_inc_ref(v_onRequest_2236_);
lean_dec_ref(v_inst_2213_);
v___f_2237_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0));
v___x_2238_ = lean_box(v_requiresData_2230_);
lean_inc_ref(v_response_2228_);
lean_inc_ref(v_requestStream_2224_);
v___f_2239_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed), 11, 9);
lean_closure_set(v___f_2239_, 0, v_machine_2223_);
lean_closure_set(v___f_2239_, 1, v_requestStream_2224_);
lean_closure_set(v___f_2239_, 2, v_keepAliveTimeout_2225_);
lean_closure_set(v___f_2239_, 3, v_currentTimeout_2226_);
lean_closure_set(v___f_2239_, 4, v_headerTimeout_2227_);
lean_closure_set(v___f_2239_, 5, v_response_2228_);
lean_closure_set(v___f_2239_, 6, v_respStream_2229_);
lean_closure_set(v___f_2239_, 7, v___x_2238_);
lean_closure_set(v___f_2239_, 8, v_expectData_2231_);
v___x_2240_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2240_, 0, v_val_2232_);
lean_ctor_set(v___x_2240_, 1, v_requestStream_2224_);
lean_ctor_set(v___x_2240_, 2, v_extensions_2215_);
v___x_2241_ = lean_apply_3(v_onRequest_2236_, v_handler_2214_, v___x_2240_, v_connectionContext_2216_);
v___x_2242_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_toFunctor_2222_);
v___f_2243_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2243_, 0, v_toFunctor_2222_);
lean_closure_set(v___f_2243_, 1, v_response_2228_);
lean_closure_set(v___f_2243_, 2, v___x_2242_);
lean_closure_set(v___f_2243_, 3, v___f_2239_);
v___x_2244_ = 0;
v___x_2245_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2245_, 0, lean_box(0));
lean_closure_set(v___x_2245_, 1, v___x_2241_);
v___x_2246_ = lean_io_as_task(v___x_2245_, v___x_2242_);
v___x_2247_ = 1;
v___x_2248_ = lean_task_bind(v___x_2246_, v___f_2237_, v___x_2242_, v___x_2247_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2248_);
v___x_2250_ = v___x_2234_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v___x_2248_);
v___x_2250_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
v___x_2252_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2242_, v___x_2244_, v___x_2251_, v___f_2243_);
return v___x_2252_;
}
}
}
else
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
lean_dec(v_pendingHead_2221_);
lean_dec_ref(v_connectionContext_2216_);
lean_dec(v_extensions_2215_);
lean_dec(v_handler_2214_);
lean_dec_ref(v_inst_2213_);
v___x_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2255_, 0, v_state_2217_);
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object* v_inst_2257_, lean_object* v_handler_2258_, lean_object* v_extensions_2259_, lean_object* v_connectionContext_2260_, lean_object* v_state_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2257_, v_handler_2258_, v_extensions_2259_, v_connectionContext_2260_, v_state_2261_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object* v_00_u03c3_2264_, lean_object* v_inst_2265_, lean_object* v_handler_2266_, lean_object* v_extensions_2267_, lean_object* v_connectionContext_2268_, lean_object* v_state_2269_){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2265_, v_handler_2266_, v_extensions_2267_, v_connectionContext_2268_, v_state_2269_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object* v_00_u03c3_2272_, lean_object* v_inst_2273_, lean_object* v_handler_2274_, lean_object* v_extensions_2275_, lean_object* v_connectionContext_2276_, lean_object* v_state_2277_, lean_object* v_a_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(v_00_u03c3_2272_, v_inst_2273_, v_handler_2274_, v_extensions_2275_, v_connectionContext_2276_, v_state_2277_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object* v_machine_2280_, lean_object* v_____r_2281_){
_start:
{
lean_object* v_writer_2283_; lean_object* v_reader_2284_; lean_object* v_config_2285_; lean_object* v_events_2286_; lean_object* v_error_2287_; lean_object* v_instant_2288_; uint8_t v_keepAlive_2289_; uint8_t v_pullBodyStalled_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2317_; 
v_writer_2283_ = lean_ctor_get(v_machine_2280_, 1);
v_reader_2284_ = lean_ctor_get(v_machine_2280_, 0);
v_config_2285_ = lean_ctor_get(v_machine_2280_, 2);
v_events_2286_ = lean_ctor_get(v_machine_2280_, 3);
v_error_2287_ = lean_ctor_get(v_machine_2280_, 4);
v_instant_2288_ = lean_ctor_get(v_machine_2280_, 5);
v_keepAlive_2289_ = lean_ctor_get_uint8(v_machine_2280_, sizeof(void*)*6);
v_pullBodyStalled_2290_ = lean_ctor_get_uint8(v_machine_2280_, sizeof(void*)*6 + 1);
v_isSharedCheck_2317_ = !lean_is_exclusive(v_machine_2280_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2292_ = v_machine_2280_;
v_isShared_2293_ = v_isSharedCheck_2317_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_instant_2288_);
lean_inc(v_error_2287_);
lean_inc(v_events_2286_);
lean_inc(v_config_2285_);
lean_inc(v_writer_2283_);
lean_inc(v_reader_2284_);
lean_dec(v_machine_2280_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2317_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v_userData_2294_; lean_object* v_outputData_2295_; lean_object* v_state_2296_; lean_object* v_knownSize_2297_; lean_object* v_messageHead_2298_; uint8_t v_sentMessage_2299_; uint8_t v_omitBody_2300_; lean_object* v_userDataBytes_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2316_; 
v_userData_2294_ = lean_ctor_get(v_writer_2283_, 0);
v_outputData_2295_ = lean_ctor_get(v_writer_2283_, 1);
v_state_2296_ = lean_ctor_get(v_writer_2283_, 2);
v_knownSize_2297_ = lean_ctor_get(v_writer_2283_, 3);
v_messageHead_2298_ = lean_ctor_get(v_writer_2283_, 4);
v_sentMessage_2299_ = lean_ctor_get_uint8(v_writer_2283_, sizeof(void*)*6);
v_omitBody_2300_ = lean_ctor_get_uint8(v_writer_2283_, sizeof(void*)*6 + 2);
v_userDataBytes_2301_ = lean_ctor_get(v_writer_2283_, 5);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_writer_2283_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2303_ = v_writer_2283_;
v_isShared_2304_ = v_isSharedCheck_2316_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_userDataBytes_2301_);
lean_inc(v_messageHead_2298_);
lean_inc(v_knownSize_2297_);
lean_inc(v_state_2296_);
lean_inc(v_outputData_2295_);
lean_inc(v_userData_2294_);
lean_dec(v_writer_2283_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2316_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
uint8_t v___x_2305_; lean_object* v___x_2307_; 
v___x_2305_ = 1;
if (v_isShared_2304_ == 0)
{
v___x_2307_ = v___x_2303_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_userData_2294_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_outputData_2295_);
lean_ctor_set(v_reuseFailAlloc_2315_, 2, v_state_2296_);
lean_ctor_set(v_reuseFailAlloc_2315_, 3, v_knownSize_2297_);
lean_ctor_set(v_reuseFailAlloc_2315_, 4, v_messageHead_2298_);
lean_ctor_set(v_reuseFailAlloc_2315_, 5, v_userDataBytes_2301_);
lean_ctor_set_uint8(v_reuseFailAlloc_2315_, sizeof(void*)*6, v_sentMessage_2299_);
lean_ctor_set_uint8(v_reuseFailAlloc_2315_, sizeof(void*)*6 + 2, v_omitBody_2300_);
v___x_2307_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2309_; 
lean_ctor_set_uint8(v___x_2307_, sizeof(void*)*6 + 1, v___x_2305_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 1, v___x_2307_);
v___x_2309_ = v___x_2292_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_reader_2284_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_config_2285_);
lean_ctor_set(v_reuseFailAlloc_2314_, 3, v_events_2286_);
lean_ctor_set(v_reuseFailAlloc_2314_, 4, v_error_2287_);
lean_ctor_set(v_reuseFailAlloc_2314_, 5, v_instant_2288_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*6, v_keepAlive_2289_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*6 + 1, v_pullBodyStalled_2290_);
v___x_2309_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2310_ = lean_box(0);
v___x_2311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2309_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
return v___x_2313_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object* v_machine_2318_, lean_object* v_____r_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(v_machine_2318_, v_____r_2319_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object* v_x1_2322_, lean_object* v_x2_2323_){
_start:
{
lean_object* v_data_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v_data_2324_ = lean_ctor_get(v_x2_2323_, 0);
v___x_2325_ = lean_byte_array_size(v_data_2324_);
v___x_2326_ = lean_nat_add(v_x1_2322_, v___x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object* v_x1_2327_, lean_object* v_x2_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(v_x1_2327_, v_x2_2328_);
lean_dec_ref(v_x2_2328_);
lean_dec(v_x1_2327_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object* v_body_2330_, lean_object* v_machine_2331_, lean_object* v_isClosed_2332_, lean_object* v___f_2333_, lean_object* v___f_2334_, lean_object* v_x_2335_){
_start:
{
lean_object* v___y_2338_; 
if (lean_obj_tag(v_x_2335_) == 0)
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2351_; 
lean_dec_ref(v___f_2334_);
lean_dec_ref(v___f_2333_);
lean_dec_ref(v_isClosed_2332_);
lean_dec_ref(v_machine_2331_);
lean_dec(v_body_2330_);
v_a_2343_ = lean_ctor_get(v_x_2335_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_x_2335_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2345_ = v_x_2335_;
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v_x_2335_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2351_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2349_; 
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
return v___x_2349_;
}
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2414_; 
v_a_2352_ = lean_ctor_get(v_x_2335_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v_x_2335_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2354_ = v_x_2335_;
v_isShared_2355_ = v_isSharedCheck_2414_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v_x_2335_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2414_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
if (lean_obj_tag(v_a_2352_) == 0)
{
lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2359_; 
lean_dec_ref(v___f_2334_);
lean_dec_ref(v___f_2333_);
lean_dec_ref(v_isClosed_2332_);
v___x_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2356_, 0, v_body_2330_);
v___x_2357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2357_, 0, v_machine_2331_);
lean_ctor_set(v___x_2357_, 1, v___x_2356_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2357_);
v___x_2359_ = v___x_2354_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
lean_object* v___x_2360_; 
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
return v___x_2360_;
}
}
else
{
lean_object* v_val_2362_; 
lean_del_object(v___x_2354_);
v_val_2362_ = lean_ctor_get(v_a_2352_, 0);
lean_inc(v_val_2362_);
lean_dec_ref_known(v_a_2352_, 1);
if (lean_obj_tag(v_val_2362_) == 0)
{
lean_object* v___x_2363_; uint8_t v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
lean_dec_ref(v___f_2334_);
lean_dec_ref(v_machine_2331_);
v___x_2363_ = lean_unsigned_to_nat(0u);
v___x_2364_ = 0;
v___x_2365_ = lean_apply_2(v_isClosed_2332_, v_body_2330_, lean_box(0));
v___x_2366_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2363_, v___x_2364_, v___x_2365_, v___f_2333_);
return v___x_2366_;
}
else
{
lean_object* v_val_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; uint8_t v___x_2373_; 
lean_dec_ref(v___f_2333_);
lean_dec_ref(v_isClosed_2332_);
v_val_2367_ = lean_ctor_get(v_val_2362_, 0);
lean_inc(v_val_2367_);
lean_dec_ref_known(v_val_2362_, 1);
v___x_2368_ = lean_unsigned_to_nat(1u);
v___x_2369_ = lean_mk_empty_array_with_capacity(v___x_2368_);
v___x_2370_ = lean_array_push(v___x_2369_, v_val_2367_);
v___x_2371_ = lean_array_get_size(v___x_2370_);
v___x_2372_ = lean_unsigned_to_nat(0u);
v___x_2373_ = lean_nat_dec_eq(v___x_2371_, v___x_2372_);
if (v___x_2373_ == 0)
{
lean_object* v_reader_2374_; lean_object* v_writer_2375_; lean_object* v_config_2376_; lean_object* v_events_2377_; lean_object* v_error_2378_; lean_object* v_instant_2379_; uint8_t v_keepAlive_2380_; uint8_t v_pullBodyStalled_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2413_; 
v_reader_2374_ = lean_ctor_get(v_machine_2331_, 0);
v_writer_2375_ = lean_ctor_get(v_machine_2331_, 1);
v_config_2376_ = lean_ctor_get(v_machine_2331_, 2);
v_events_2377_ = lean_ctor_get(v_machine_2331_, 3);
v_error_2378_ = lean_ctor_get(v_machine_2331_, 4);
v_instant_2379_ = lean_ctor_get(v_machine_2331_, 5);
v_keepAlive_2380_ = lean_ctor_get_uint8(v_machine_2331_, sizeof(void*)*6);
v_pullBodyStalled_2381_ = lean_ctor_get_uint8(v_machine_2331_, sizeof(void*)*6 + 1);
v_isSharedCheck_2413_ = !lean_is_exclusive(v_machine_2331_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2383_ = v_machine_2331_;
v_isShared_2384_ = v_isSharedCheck_2413_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_instant_2379_);
lean_inc(v_error_2378_);
lean_inc(v_events_2377_);
lean_inc(v_config_2376_);
lean_inc(v_writer_2375_);
lean_inc(v_reader_2374_);
lean_dec(v_machine_2331_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2413_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___y_2386_; lean_object* v___x_2408_; uint8_t v___x_2409_; 
v___x_2408_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_2409_ = lean_nat_dec_lt(v___x_2372_, v___x_2371_);
if (v___x_2409_ == 0)
{
lean_dec_ref(v___f_2334_);
v___y_2386_ = v___x_2372_;
goto v___jp_2385_;
}
else
{
size_t v___x_2410_; size_t v___x_2411_; lean_object* v___x_2412_; 
v___x_2410_ = ((size_t)0ULL);
v___x_2411_ = lean_usize_of_nat(v___x_2371_);
lean_inc_ref(v___x_2370_);
v___x_2412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2408_, v___f_2334_, v___x_2370_, v___x_2410_, v___x_2411_, v___x_2372_);
v___y_2386_ = v___x_2412_;
goto v___jp_2385_;
}
v___jp_2385_:
{
lean_object* v_userData_2387_; lean_object* v_outputData_2388_; lean_object* v_state_2389_; lean_object* v_knownSize_2390_; lean_object* v_messageHead_2391_; uint8_t v_sentMessage_2392_; uint8_t v_userClosedBody_2393_; uint8_t v_omitBody_2394_; lean_object* v_userDataBytes_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2407_; 
v_userData_2387_ = lean_ctor_get(v_writer_2375_, 0);
v_outputData_2388_ = lean_ctor_get(v_writer_2375_, 1);
v_state_2389_ = lean_ctor_get(v_writer_2375_, 2);
v_knownSize_2390_ = lean_ctor_get(v_writer_2375_, 3);
v_messageHead_2391_ = lean_ctor_get(v_writer_2375_, 4);
v_sentMessage_2392_ = lean_ctor_get_uint8(v_writer_2375_, sizeof(void*)*6);
v_userClosedBody_2393_ = lean_ctor_get_uint8(v_writer_2375_, sizeof(void*)*6 + 1);
v_omitBody_2394_ = lean_ctor_get_uint8(v_writer_2375_, sizeof(void*)*6 + 2);
v_userDataBytes_2395_ = lean_ctor_get(v_writer_2375_, 5);
v_isSharedCheck_2407_ = !lean_is_exclusive(v_writer_2375_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2397_ = v_writer_2375_;
v_isShared_2398_ = v_isSharedCheck_2407_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_userDataBytes_2395_);
lean_inc(v_messageHead_2391_);
lean_inc(v_knownSize_2390_);
lean_inc(v_state_2389_);
lean_inc(v_outputData_2388_);
lean_inc(v_userData_2387_);
lean_dec(v_writer_2375_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2407_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2402_; 
v___x_2399_ = l_Array_append___redArg(v_userData_2387_, v___x_2370_);
lean_dec_ref(v___x_2370_);
v___x_2400_ = lean_nat_add(v_userDataBytes_2395_, v___y_2386_);
lean_dec(v___y_2386_);
lean_dec(v_userDataBytes_2395_);
if (v_isShared_2398_ == 0)
{
lean_ctor_set(v___x_2397_, 5, v___x_2400_);
lean_ctor_set(v___x_2397_, 0, v___x_2399_);
v___x_2402_ = v___x_2397_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2406_, 1, v_outputData_2388_);
lean_ctor_set(v_reuseFailAlloc_2406_, 2, v_state_2389_);
lean_ctor_set(v_reuseFailAlloc_2406_, 3, v_knownSize_2390_);
lean_ctor_set(v_reuseFailAlloc_2406_, 4, v_messageHead_2391_);
lean_ctor_set(v_reuseFailAlloc_2406_, 5, v___x_2400_);
lean_ctor_set_uint8(v_reuseFailAlloc_2406_, sizeof(void*)*6, v_sentMessage_2392_);
lean_ctor_set_uint8(v_reuseFailAlloc_2406_, sizeof(void*)*6 + 1, v_userClosedBody_2393_);
lean_ctor_set_uint8(v_reuseFailAlloc_2406_, sizeof(void*)*6 + 2, v_omitBody_2394_);
v___x_2402_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2404_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 1, v___x_2402_);
v___x_2404_ = v___x_2383_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_reader_2374_);
lean_ctor_set(v_reuseFailAlloc_2405_, 1, v___x_2402_);
lean_ctor_set(v_reuseFailAlloc_2405_, 2, v_config_2376_);
lean_ctor_set(v_reuseFailAlloc_2405_, 3, v_events_2377_);
lean_ctor_set(v_reuseFailAlloc_2405_, 4, v_error_2378_);
lean_ctor_set(v_reuseFailAlloc_2405_, 5, v_instant_2379_);
lean_ctor_set_uint8(v_reuseFailAlloc_2405_, sizeof(void*)*6, v_keepAlive_2380_);
lean_ctor_set_uint8(v_reuseFailAlloc_2405_, sizeof(void*)*6 + 1, v_pullBodyStalled_2381_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
v___y_2338_ = v___x_2404_;
goto v___jp_2337_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2370_);
lean_dec_ref(v___f_2334_);
v___y_2338_ = v_machine_2331_;
goto v___jp_2337_;
}
}
}
}
}
v___jp_2337_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2339_, 0, v_body_2330_);
v___x_2340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___y_2338_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
return v___x_2342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object* v_body_2415_, lean_object* v_machine_2416_, lean_object* v_isClosed_2417_, lean_object* v___f_2418_, lean_object* v___f_2419_, lean_object* v_x_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(v_body_2415_, v_machine_2416_, v_isClosed_2417_, v___f_2418_, v___f_2419_, v_x_2420_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object* v_inst_2424_, lean_object* v_machine_2425_, lean_object* v_body_2426_){
_start:
{
lean_object* v_close_2428_; lean_object* v_isClosed_2429_; lean_object* v_tryRecv_2430_; lean_object* v___f_2431_; lean_object* v___f_2432_; lean_object* v___f_2433_; lean_object* v___f_2434_; lean_object* v___f_2435_; lean_object* v___x_2436_; uint8_t v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v_close_2428_ = lean_ctor_get(v_inst_2424_, 1);
lean_inc_ref(v_close_2428_);
v_isClosed_2429_ = lean_ctor_get(v_inst_2424_, 2);
lean_inc_ref(v_isClosed_2429_);
v_tryRecv_2430_ = lean_ctor_get(v_inst_2424_, 4);
lean_inc_ref(v_tryRecv_2430_);
lean_dec_ref(v_inst_2424_);
lean_inc_ref(v_machine_2425_);
v___f_2431_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2431_, 0, v_machine_2425_);
lean_inc_ref(v___f_2431_);
v___f_2432_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2432_, 0, v___f_2431_);
lean_inc_n(v_body_2426_, 2);
v___f_2433_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2433_, 0, v_close_2428_);
lean_closure_set(v___f_2433_, 1, v_body_2426_);
lean_closure_set(v___f_2433_, 2, v___f_2432_);
lean_closure_set(v___f_2433_, 3, v___f_2431_);
v___f_2434_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___f_2435_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2435_, 0, v_body_2426_);
lean_closure_set(v___f_2435_, 1, v_machine_2425_);
lean_closure_set(v___f_2435_, 2, v_isClosed_2429_);
lean_closure_set(v___f_2435_, 3, v___f_2433_);
lean_closure_set(v___f_2435_, 4, v___f_2434_);
v___x_2436_ = lean_unsigned_to_nat(0u);
v___x_2437_ = 0;
v___x_2438_ = lean_apply_2(v_tryRecv_2430_, v_body_2426_, lean_box(0));
v___x_2439_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2436_, v___x_2437_, v___x_2438_, v___f_2435_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object* v_inst_2440_, lean_object* v_machine_2441_, lean_object* v_body_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2440_, v_machine_2441_, v_body_2442_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object* v_00_u03b2_2445_, lean_object* v_inst_2446_, lean_object* v_machine_2447_, lean_object* v_body_2448_){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2446_, v_machine_2447_, v_body_2448_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object* v_00_u03b2_2451_, lean_object* v_inst_2452_, lean_object* v_machine_2453_, lean_object* v_body_2454_, lean_object* v_a_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(v_00_u03b2_2451_, v_inst_2452_, v_machine_2453_, v_body_2454_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object* v_val_2463_, lean_object* v_____r_2464_, lean_object* v_st_2465_){
_start:
{
lean_object* v_machine_2467_; lean_object* v_requestStream_2468_; lean_object* v_keepAliveTimeout_2469_; lean_object* v_currentTimeout_2470_; lean_object* v_headerTimeout_2471_; lean_object* v_response_2472_; lean_object* v_respStream_2473_; uint8_t v_requiresData_2474_; lean_object* v_expectData_2475_; uint8_t v_handlerDispatched_2476_; lean_object* v_pendingHead_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2547_; 
v_machine_2467_ = lean_ctor_get(v_st_2465_, 0);
v_requestStream_2468_ = lean_ctor_get(v_st_2465_, 1);
v_keepAliveTimeout_2469_ = lean_ctor_get(v_st_2465_, 2);
v_currentTimeout_2470_ = lean_ctor_get(v_st_2465_, 3);
v_headerTimeout_2471_ = lean_ctor_get(v_st_2465_, 4);
v_response_2472_ = lean_ctor_get(v_st_2465_, 5);
v_respStream_2473_ = lean_ctor_get(v_st_2465_, 6);
v_requiresData_2474_ = lean_ctor_get_uint8(v_st_2465_, sizeof(void*)*9);
v_expectData_2475_ = lean_ctor_get(v_st_2465_, 7);
v_handlerDispatched_2476_ = lean_ctor_get_uint8(v_st_2465_, sizeof(void*)*9 + 1);
v_pendingHead_2477_ = lean_ctor_get(v_st_2465_, 8);
v_isSharedCheck_2547_ = !lean_is_exclusive(v_st_2465_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2479_ = v_st_2465_;
v_isShared_2480_ = v_isSharedCheck_2547_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_pendingHead_2477_);
lean_inc(v_expectData_2475_);
lean_inc(v_respStream_2473_);
lean_inc(v_response_2472_);
lean_inc(v_headerTimeout_2471_);
lean_inc(v_currentTimeout_2470_);
lean_inc(v_keepAliveTimeout_2469_);
lean_inc(v_requestStream_2468_);
lean_inc(v_machine_2467_);
lean_dec(v_st_2465_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2547_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___y_2482_; lean_object* v_reader_2491_; lean_object* v_writer_2492_; lean_object* v_config_2493_; lean_object* v_events_2494_; lean_object* v_error_2495_; lean_object* v_instant_2496_; uint8_t v_keepAlive_2497_; lean_object* v_state_2498_; lean_object* v_input_2499_; lean_object* v_messageHead_2500_; lean_object* v_messageCount_2501_; lean_object* v_bodyBytesRead_2502_; lean_object* v_headerBytesRead_2503_; uint8_t v_noMoreInput_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2546_; 
v_reader_2491_ = lean_ctor_get(v_machine_2467_, 0);
lean_inc_ref(v_reader_2491_);
v_writer_2492_ = lean_ctor_get(v_machine_2467_, 1);
v_config_2493_ = lean_ctor_get(v_machine_2467_, 2);
v_events_2494_ = lean_ctor_get(v_machine_2467_, 3);
v_error_2495_ = lean_ctor_get(v_machine_2467_, 4);
v_instant_2496_ = lean_ctor_get(v_machine_2467_, 5);
v_keepAlive_2497_ = lean_ctor_get_uint8(v_machine_2467_, sizeof(void*)*6);
v_state_2498_ = lean_ctor_get(v_reader_2491_, 0);
v_input_2499_ = lean_ctor_get(v_reader_2491_, 1);
v_messageHead_2500_ = lean_ctor_get(v_reader_2491_, 2);
v_messageCount_2501_ = lean_ctor_get(v_reader_2491_, 3);
v_bodyBytesRead_2502_ = lean_ctor_get(v_reader_2491_, 4);
v_headerBytesRead_2503_ = lean_ctor_get(v_reader_2491_, 5);
v_noMoreInput_2504_ = lean_ctor_get_uint8(v_reader_2491_, sizeof(void*)*6);
v_isSharedCheck_2546_ = !lean_is_exclusive(v_reader_2491_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2506_ = v_reader_2491_;
v_isShared_2507_ = v_isSharedCheck_2546_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_headerBytesRead_2503_);
lean_inc(v_bodyBytesRead_2502_);
lean_inc(v_messageCount_2501_);
lean_inc(v_messageHead_2500_);
lean_inc(v_input_2499_);
lean_inc(v_state_2498_);
lean_dec(v_reader_2491_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2546_;
goto v_resetjp_2505_;
}
v___jp_2481_:
{
lean_object* v___x_2484_; 
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 0, v___y_2482_);
v___x_2484_ = v___x_2479_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v___y_2482_);
lean_ctor_set(v_reuseFailAlloc_2490_, 1, v_requestStream_2468_);
lean_ctor_set(v_reuseFailAlloc_2490_, 2, v_keepAliveTimeout_2469_);
lean_ctor_set(v_reuseFailAlloc_2490_, 3, v_currentTimeout_2470_);
lean_ctor_set(v_reuseFailAlloc_2490_, 4, v_headerTimeout_2471_);
lean_ctor_set(v_reuseFailAlloc_2490_, 5, v_response_2472_);
lean_ctor_set(v_reuseFailAlloc_2490_, 6, v_respStream_2473_);
lean_ctor_set(v_reuseFailAlloc_2490_, 7, v_expectData_2475_);
lean_ctor_set(v_reuseFailAlloc_2490_, 8, v_pendingHead_2477_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*9, v_requiresData_2474_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*9 + 1, v_handlerDispatched_2476_);
v___x_2484_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
uint8_t v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2485_ = 0;
v___x_2486_ = lean_box(v___x_2485_);
v___x_2487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2484_);
lean_ctor_set(v___x_2487_, 1, v___x_2486_);
v___x_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2487_);
v___x_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2488_);
return v___x_2489_;
}
}
v_resetjp_2505_:
{
lean_object* v___y_2509_; 
if (lean_obj_tag(v_state_2498_) == 6)
{
lean_del_object(v___x_2506_);
lean_dec(v_headerBytesRead_2503_);
lean_dec(v_bodyBytesRead_2502_);
lean_dec(v_messageCount_2501_);
lean_dec(v_messageHead_2500_);
lean_dec_ref(v_input_2499_);
lean_dec_ref(v_val_2463_);
v___y_2482_ = v_machine_2467_;
goto v___jp_2481_;
}
else
{
if (lean_obj_tag(v_state_2498_) == 7)
{
lean_dec_ref_known(v_state_2498_, 1);
lean_del_object(v___x_2506_);
lean_dec(v_headerBytesRead_2503_);
lean_dec(v_bodyBytesRead_2502_);
lean_dec(v_messageCount_2501_);
lean_dec(v_messageHead_2500_);
lean_dec_ref(v_input_2499_);
lean_dec_ref(v_val_2463_);
v___y_2482_ = v_machine_2467_;
goto v___jp_2481_;
}
else
{
lean_object* v_array_2535_; lean_object* v_idx_2536_; lean_object* v___x_2537_; uint8_t v___x_2538_; 
lean_inc(v_instant_2496_);
lean_inc(v_error_2495_);
lean_inc_ref(v_events_2494_);
lean_inc_ref(v_config_2493_);
lean_inc_ref(v_writer_2492_);
lean_dec_ref(v_machine_2467_);
v_array_2535_ = lean_ctor_get(v_input_2499_, 0);
lean_inc_ref(v_array_2535_);
v_idx_2536_ = lean_ctor_get(v_input_2499_, 1);
lean_inc(v_idx_2536_);
lean_dec_ref(v_input_2499_);
v___x_2537_ = lean_byte_array_size(v_array_2535_);
v___x_2538_ = lean_nat_dec_le(v___x_2537_, v_idx_2536_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2539_ = l_ByteArray_extract(v_array_2535_, v_idx_2536_, v___x_2537_);
lean_dec_ref(v_array_2535_);
v___x_2540_ = lean_unsigned_to_nat(0u);
v___x_2541_ = lean_byte_array_size(v___x_2539_);
v___x_2542_ = lean_byte_array_size(v_val_2463_);
v___x_2543_ = lean_byte_array_copy_slice(v_val_2463_, v___x_2540_, v___x_2539_, v___x_2541_, v___x_2542_, v___x_2538_);
lean_dec_ref(v_val_2463_);
v___x_2544_ = l_ByteArray_mkIterator(v___x_2543_);
v___y_2509_ = v___x_2544_;
goto v___jp_2508_;
}
else
{
lean_object* v___x_2545_; 
lean_dec(v_idx_2536_);
lean_dec_ref(v_array_2535_);
v___x_2545_ = l_ByteArray_mkIterator(v_val_2463_);
v___y_2509_ = v___x_2545_;
goto v___jp_2508_;
}
}
}
v___jp_2508_:
{
lean_object* v_maxHeaderBytes_2510_; lean_object* v_maxStartLineLength_2511_; lean_object* v_maxChunkLineLength_2512_; lean_object* v_maxBodySize_2513_; lean_object* v_array_2514_; lean_object* v_idx_2515_; uint8_t v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; 
v_maxHeaderBytes_2510_ = lean_ctor_get(v_config_2493_, 2);
v_maxStartLineLength_2511_ = lean_ctor_get(v_config_2493_, 5);
v_maxChunkLineLength_2512_ = lean_ctor_get(v_config_2493_, 13);
v_maxBodySize_2513_ = lean_ctor_get(v_config_2493_, 15);
v_array_2514_ = lean_ctor_get(v___y_2509_, 0);
v_idx_2515_ = lean_ctor_get(v___y_2509_, 1);
v___x_2516_ = 0;
v___x_2517_ = lean_nat_add(v_maxBodySize_2513_, v_maxHeaderBytes_2510_);
v___x_2518_ = lean_nat_add(v___x_2517_, v_maxStartLineLength_2511_);
lean_dec(v___x_2517_);
v___x_2519_ = lean_nat_add(v___x_2518_, v_maxChunkLineLength_2512_);
lean_dec(v___x_2518_);
v___x_2520_ = lean_byte_array_size(v_array_2514_);
v___x_2521_ = lean_nat_sub(v___x_2520_, v_idx_2515_);
v___x_2522_ = lean_nat_dec_lt(v___x_2519_, v___x_2521_);
lean_dec(v___x_2521_);
lean_dec(v___x_2519_);
if (v___x_2522_ == 0)
{
lean_object* v___x_2524_; 
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 1, v___y_2509_);
v___x_2524_ = v___x_2506_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_state_2498_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v___y_2509_);
lean_ctor_set(v_reuseFailAlloc_2526_, 2, v_messageHead_2500_);
lean_ctor_set(v_reuseFailAlloc_2526_, 3, v_messageCount_2501_);
lean_ctor_set(v_reuseFailAlloc_2526_, 4, v_bodyBytesRead_2502_);
lean_ctor_set(v_reuseFailAlloc_2526_, 5, v_headerBytesRead_2503_);
lean_ctor_set_uint8(v_reuseFailAlloc_2526_, sizeof(void*)*6, v_noMoreInput_2504_);
v___x_2524_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v_machine_2525_; 
v_machine_2525_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_machine_2525_, 0, v___x_2524_);
lean_ctor_set(v_machine_2525_, 1, v_writer_2492_);
lean_ctor_set(v_machine_2525_, 2, v_config_2493_);
lean_ctor_set(v_machine_2525_, 3, v_events_2494_);
lean_ctor_set(v_machine_2525_, 4, v_error_2495_);
lean_ctor_set(v_machine_2525_, 5, v_instant_2496_);
lean_ctor_set_uint8(v_machine_2525_, sizeof(void*)*6, v_keepAlive_2497_);
lean_ctor_set_uint8(v_machine_2525_, sizeof(void*)*6 + 1, v___x_2516_);
v___y_2482_ = v_machine_2525_;
goto v___jp_2481_;
}
}
else
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2531_; 
lean_dec(v_state_2498_);
lean_dec(v_error_2495_);
v___x_2527_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0));
v___x_2528_ = lean_array_push(v_events_2494_, v___x_2527_);
v___x_2529_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1));
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 1, v___y_2509_);
lean_ctor_set(v___x_2506_, 0, v___x_2529_);
v___x_2531_ = v___x_2506_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v___x_2529_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v___y_2509_);
lean_ctor_set(v_reuseFailAlloc_2534_, 2, v_messageHead_2500_);
lean_ctor_set(v_reuseFailAlloc_2534_, 3, v_messageCount_2501_);
lean_ctor_set(v_reuseFailAlloc_2534_, 4, v_bodyBytesRead_2502_);
lean_ctor_set(v_reuseFailAlloc_2534_, 5, v_headerBytesRead_2503_);
lean_ctor_set_uint8(v_reuseFailAlloc_2534_, sizeof(void*)*6, v_noMoreInput_2504_);
v___x_2531_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2));
v___x_2533_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set(v___x_2533_, 1, v_writer_2492_);
lean_ctor_set(v___x_2533_, 2, v_config_2493_);
lean_ctor_set(v___x_2533_, 3, v___x_2528_);
lean_ctor_set(v___x_2533_, 4, v___x_2532_);
lean_ctor_set(v___x_2533_, 5, v_instant_2496_);
lean_ctor_set_uint8(v___x_2533_, sizeof(void*)*6, v_keepAlive_2497_);
lean_ctor_set_uint8(v___x_2533_, sizeof(void*)*6 + 1, v___x_2516_);
v___y_2482_ = v___x_2533_;
goto v___jp_2481_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object* v_val_2548_, lean_object* v_____r_2549_, lean_object* v_st_2550_, lean_object* v___y_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_2548_, v_____r_2549_, v_st_2550_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object* v_config_2553_, lean_object* v_machine_2554_, lean_object* v_requestStream_2555_, lean_object* v_currentTimeout_2556_, lean_object* v_response_2557_, lean_object* v_respStream_2558_, uint8_t v_requiresData_2559_, lean_object* v_expectData_2560_, uint8_t v_handlerDispatched_2561_, lean_object* v_pendingHead_2562_, lean_object* v___f_2563_, lean_object* v_x_2564_){
_start:
{
if (lean_obj_tag(v_x_2564_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2574_; 
lean_dec_ref(v___f_2563_);
lean_dec(v_pendingHead_2562_);
lean_dec(v_expectData_2560_);
lean_dec(v_respStream_2558_);
lean_dec_ref(v_response_2557_);
lean_dec(v_currentTimeout_2556_);
lean_dec_ref(v_requestStream_2555_);
lean_dec_ref(v_machine_2554_);
v_a_2566_ = lean_ctor_get(v_x_2564_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v_x_2564_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2568_ = v_x_2564_;
v_isShared_2569_ = v_isSharedCheck_2574_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v_x_2564_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2574_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
lean_object* v___x_2572_; 
v___x_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
return v___x_2572_;
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v_headerTimeout_2576_; lean_object* v_second_2577_; lean_object* v_nano_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v_second_2582_; lean_object* v_nano_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v_nanos_2587_; lean_object* v___x_2588_; lean_object* v_nanos_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v_a_2575_ = lean_ctor_get(v_x_2564_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v_x_2564_, 1);
v_headerTimeout_2576_ = lean_ctor_get(v_config_2553_, 6);
v_second_2577_ = lean_ctor_get(v_a_2575_, 0);
lean_inc(v_second_2577_);
v_nano_2578_ = lean_ctor_get(v_a_2575_, 1);
lean_inc(v_nano_2578_);
lean_dec(v_a_2575_);
v___x_2579_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_2580_ = lean_int_mul(v_headerTimeout_2576_, v___x_2579_);
v___x_2581_ = l_Std_Time_Duration_ofNanoseconds(v___x_2580_);
lean_dec(v___x_2580_);
v_second_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_second_2582_);
v_nano_2583_ = lean_ctor_get(v___x_2581_, 1);
lean_inc(v_nano_2583_);
lean_dec_ref(v___x_2581_);
v___x_2584_ = lean_box(0);
v___x_2585_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_2586_ = lean_int_mul(v_second_2577_, v___x_2585_);
lean_dec(v_second_2577_);
v_nanos_2587_ = lean_int_add(v___x_2586_, v_nano_2578_);
lean_dec(v_nano_2578_);
lean_dec(v___x_2586_);
v___x_2588_ = lean_int_mul(v_second_2582_, v___x_2585_);
lean_dec(v_second_2582_);
v_nanos_2589_ = lean_int_add(v___x_2588_, v_nano_2583_);
lean_dec(v_nano_2583_);
lean_dec(v___x_2588_);
v___x_2590_ = lean_int_add(v_nanos_2587_, v_nanos_2589_);
lean_dec(v_nanos_2589_);
lean_dec(v_nanos_2587_);
v___x_2591_ = l_Std_Time_Duration_ofNanoseconds(v___x_2590_);
lean_dec(v___x_2590_);
v___x_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
v___x_2593_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2593_, 0, v_machine_2554_);
lean_ctor_set(v___x_2593_, 1, v_requestStream_2555_);
lean_ctor_set(v___x_2593_, 2, v___x_2584_);
lean_ctor_set(v___x_2593_, 3, v_currentTimeout_2556_);
lean_ctor_set(v___x_2593_, 4, v___x_2592_);
lean_ctor_set(v___x_2593_, 5, v_response_2557_);
lean_ctor_set(v___x_2593_, 6, v_respStream_2558_);
lean_ctor_set(v___x_2593_, 7, v_expectData_2560_);
lean_ctor_set(v___x_2593_, 8, v_pendingHead_2562_);
lean_ctor_set_uint8(v___x_2593_, sizeof(void*)*9, v_requiresData_2559_);
lean_ctor_set_uint8(v___x_2593_, sizeof(void*)*9 + 1, v_handlerDispatched_2561_);
v___x_2594_ = lean_box(0);
v___x_2595_ = lean_apply_3(v___f_2563_, v___x_2594_, v___x_2593_, lean_box(0));
return v___x_2595_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object* v_config_2596_, lean_object* v_machine_2597_, lean_object* v_requestStream_2598_, lean_object* v_currentTimeout_2599_, lean_object* v_response_2600_, lean_object* v_respStream_2601_, lean_object* v_requiresData_2602_, lean_object* v_expectData_2603_, lean_object* v_handlerDispatched_2604_, lean_object* v_pendingHead_2605_, lean_object* v___f_2606_, lean_object* v_x_2607_, lean_object* v___y_2608_){
_start:
{
uint8_t v_requiresData_boxed_2609_; uint8_t v_handlerDispatched_boxed_2610_; lean_object* v_res_2611_; 
v_requiresData_boxed_2609_ = lean_unbox(v_requiresData_2602_);
v_handlerDispatched_boxed_2610_ = lean_unbox(v_handlerDispatched_2604_);
v_res_2611_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(v_config_2596_, v_machine_2597_, v_requestStream_2598_, v_currentTimeout_2599_, v_response_2600_, v_respStream_2601_, v_requiresData_boxed_2609_, v_expectData_2603_, v_handlerDispatched_boxed_2610_, v_pendingHead_2605_, v___f_2606_, v_x_2607_);
lean_dec_ref(v_config_2596_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object* v_machine_2612_, lean_object* v_requestStream_2613_, lean_object* v_keepAliveTimeout_2614_, lean_object* v_currentTimeout_2615_, lean_object* v_headerTimeout_2616_, lean_object* v_response_2617_, uint8_t v_requiresData_2618_, lean_object* v_expectData_2619_, uint8_t v_handlerDispatched_2620_, lean_object* v_pendingHead_2621_, lean_object* v_____r_2622_){
_start:
{
lean_object* v_writer_2624_; lean_object* v_reader_2625_; lean_object* v_config_2626_; lean_object* v_events_2627_; lean_object* v_error_2628_; lean_object* v_instant_2629_; uint8_t v_keepAlive_2630_; uint8_t v_pullBodyStalled_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2661_; 
v_writer_2624_ = lean_ctor_get(v_machine_2612_, 1);
v_reader_2625_ = lean_ctor_get(v_machine_2612_, 0);
v_config_2626_ = lean_ctor_get(v_machine_2612_, 2);
v_events_2627_ = lean_ctor_get(v_machine_2612_, 3);
v_error_2628_ = lean_ctor_get(v_machine_2612_, 4);
v_instant_2629_ = lean_ctor_get(v_machine_2612_, 5);
v_keepAlive_2630_ = lean_ctor_get_uint8(v_machine_2612_, sizeof(void*)*6);
v_pullBodyStalled_2631_ = lean_ctor_get_uint8(v_machine_2612_, sizeof(void*)*6 + 1);
v_isSharedCheck_2661_ = !lean_is_exclusive(v_machine_2612_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2633_ = v_machine_2612_;
v_isShared_2634_ = v_isSharedCheck_2661_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_instant_2629_);
lean_inc(v_error_2628_);
lean_inc(v_events_2627_);
lean_inc(v_config_2626_);
lean_inc(v_writer_2624_);
lean_inc(v_reader_2625_);
lean_dec(v_machine_2612_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2661_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v_userData_2635_; lean_object* v_outputData_2636_; lean_object* v_state_2637_; lean_object* v_knownSize_2638_; lean_object* v_messageHead_2639_; uint8_t v_sentMessage_2640_; uint8_t v_omitBody_2641_; lean_object* v_userDataBytes_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2660_; 
v_userData_2635_ = lean_ctor_get(v_writer_2624_, 0);
v_outputData_2636_ = lean_ctor_get(v_writer_2624_, 1);
v_state_2637_ = lean_ctor_get(v_writer_2624_, 2);
v_knownSize_2638_ = lean_ctor_get(v_writer_2624_, 3);
v_messageHead_2639_ = lean_ctor_get(v_writer_2624_, 4);
v_sentMessage_2640_ = lean_ctor_get_uint8(v_writer_2624_, sizeof(void*)*6);
v_omitBody_2641_ = lean_ctor_get_uint8(v_writer_2624_, sizeof(void*)*6 + 2);
v_userDataBytes_2642_ = lean_ctor_get(v_writer_2624_, 5);
v_isSharedCheck_2660_ = !lean_is_exclusive(v_writer_2624_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2644_ = v_writer_2624_;
v_isShared_2645_ = v_isSharedCheck_2660_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_userDataBytes_2642_);
lean_inc(v_messageHead_2639_);
lean_inc(v_knownSize_2638_);
lean_inc(v_state_2637_);
lean_inc(v_outputData_2636_);
lean_inc(v_userData_2635_);
lean_dec(v_writer_2624_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2660_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
uint8_t v___x_2646_; lean_object* v___x_2648_; 
v___x_2646_ = 1;
if (v_isShared_2645_ == 0)
{
v___x_2648_ = v___x_2644_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_userData_2635_);
lean_ctor_set(v_reuseFailAlloc_2659_, 1, v_outputData_2636_);
lean_ctor_set(v_reuseFailAlloc_2659_, 2, v_state_2637_);
lean_ctor_set(v_reuseFailAlloc_2659_, 3, v_knownSize_2638_);
lean_ctor_set(v_reuseFailAlloc_2659_, 4, v_messageHead_2639_);
lean_ctor_set(v_reuseFailAlloc_2659_, 5, v_userDataBytes_2642_);
lean_ctor_set_uint8(v_reuseFailAlloc_2659_, sizeof(void*)*6, v_sentMessage_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2659_, sizeof(void*)*6 + 2, v_omitBody_2641_);
v___x_2648_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
lean_object* v___x_2650_; 
lean_ctor_set_uint8(v___x_2648_, sizeof(void*)*6 + 1, v___x_2646_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 1, v___x_2648_);
v___x_2650_ = v___x_2633_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_reader_2625_);
lean_ctor_set(v_reuseFailAlloc_2658_, 1, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2658_, 2, v_config_2626_);
lean_ctor_set(v_reuseFailAlloc_2658_, 3, v_events_2627_);
lean_ctor_set(v_reuseFailAlloc_2658_, 4, v_error_2628_);
lean_ctor_set(v_reuseFailAlloc_2658_, 5, v_instant_2629_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*6, v_keepAlive_2630_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*6 + 1, v_pullBodyStalled_2631_);
v___x_2650_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; uint8_t v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2651_ = lean_box(0);
v___x_2652_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2652_, 0, v___x_2650_);
lean_ctor_set(v___x_2652_, 1, v_requestStream_2613_);
lean_ctor_set(v___x_2652_, 2, v_keepAliveTimeout_2614_);
lean_ctor_set(v___x_2652_, 3, v_currentTimeout_2615_);
lean_ctor_set(v___x_2652_, 4, v_headerTimeout_2616_);
lean_ctor_set(v___x_2652_, 5, v_response_2617_);
lean_ctor_set(v___x_2652_, 6, v___x_2651_);
lean_ctor_set(v___x_2652_, 7, v_expectData_2619_);
lean_ctor_set(v___x_2652_, 8, v_pendingHead_2621_);
lean_ctor_set_uint8(v___x_2652_, sizeof(void*)*9, v_requiresData_2618_);
lean_ctor_set_uint8(v___x_2652_, sizeof(void*)*9 + 1, v_handlerDispatched_2620_);
v___x_2653_ = 0;
v___x_2654_ = lean_box(v___x_2653_);
v___x_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2652_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
v___x_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
return v___x_2657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object* v_machine_2662_, lean_object* v_requestStream_2663_, lean_object* v_keepAliveTimeout_2664_, lean_object* v_currentTimeout_2665_, lean_object* v_headerTimeout_2666_, lean_object* v_response_2667_, lean_object* v_requiresData_2668_, lean_object* v_expectData_2669_, lean_object* v_handlerDispatched_2670_, lean_object* v_pendingHead_2671_, lean_object* v_____r_2672_, lean_object* v___y_2673_){
_start:
{
uint8_t v_requiresData_boxed_2674_; uint8_t v_handlerDispatched_boxed_2675_; lean_object* v_res_2676_; 
v_requiresData_boxed_2674_ = lean_unbox(v_requiresData_2668_);
v_handlerDispatched_boxed_2675_ = lean_unbox(v_handlerDispatched_2670_);
v_res_2676_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_2662_, v_requestStream_2663_, v_keepAliveTimeout_2664_, v_currentTimeout_2665_, v_headerTimeout_2666_, v_response_2667_, v_requiresData_boxed_2674_, v_expectData_2669_, v_handlerDispatched_boxed_2675_, v_pendingHead_2671_, v_____r_2672_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object* v___f_2677_, lean_object* v_x_2678_){
_start:
{
if (lean_obj_tag(v_x_2678_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2688_; 
lean_dec_ref(v___f_2677_);
v_a_2680_ = lean_ctor_get(v_x_2678_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v_x_2678_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2682_ = v_x_2678_;
v_isShared_2683_ = v_isSharedCheck_2688_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v_x_2678_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2688_;
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
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2686_; 
v___x_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2685_);
return v___x_2686_;
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2690_; 
v_a_2689_ = lean_ctor_get(v_x_2678_, 0);
lean_inc(v_a_2689_);
lean_dec_ref_known(v_x_2678_, 1);
v___x_2690_ = lean_apply_2(v___f_2677_, v_a_2689_, lean_box(0));
return v___x_2690_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object* v___f_2691_, lean_object* v_x_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(v___f_2691_, v_x_2692_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object* v_close_2695_, lean_object* v_val_2696_, lean_object* v___f_2697_, lean_object* v___f_2698_, lean_object* v_x_2699_){
_start:
{
if (lean_obj_tag(v_x_2699_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2709_; 
lean_dec_ref(v___f_2698_);
lean_dec_ref(v___f_2697_);
lean_dec(v_val_2696_);
lean_dec_ref(v_close_2695_);
v_a_2701_ = lean_ctor_get(v_x_2699_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v_x_2699_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2703_ = v_x_2699_;
v_isShared_2704_ = v_isSharedCheck_2709_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v_x_2699_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2709_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2704_ == 0)
{
v___x_2706_ = v___x_2703_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2701_);
v___x_2706_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
lean_object* v___x_2707_; 
v___x_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
return v___x_2707_;
}
}
}
else
{
lean_object* v_a_2710_; uint8_t v___x_2711_; 
v_a_2710_ = lean_ctor_get(v_x_2699_, 0);
lean_inc(v_a_2710_);
lean_dec_ref_known(v_x_2699_, 1);
v___x_2711_ = lean_unbox(v_a_2710_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; lean_object* v___x_2713_; uint8_t v___x_2714_; lean_object* v___x_2715_; 
lean_dec_ref(v___f_2698_);
v___x_2712_ = lean_unsigned_to_nat(0u);
v___x_2713_ = lean_apply_2(v_close_2695_, v_val_2696_, lean_box(0));
v___x_2714_ = lean_unbox(v_a_2710_);
lean_dec(v_a_2710_);
v___x_2715_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2712_, v___x_2714_, v___x_2713_, v___f_2697_);
return v___x_2715_;
}
else
{
lean_object* v___x_2716_; lean_object* v___x_2717_; 
lean_dec(v_a_2710_);
lean_dec_ref(v___f_2697_);
lean_dec(v_val_2696_);
lean_dec_ref(v_close_2695_);
v___x_2716_ = lean_box(0);
v___x_2717_ = lean_apply_2(v___f_2698_, v___x_2716_, lean_box(0));
return v___x_2717_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object* v_close_2718_, lean_object* v_val_2719_, lean_object* v___f_2720_, lean_object* v___f_2721_, lean_object* v_x_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(v_close_2718_, v_val_2719_, v___f_2720_, v___f_2721_, v_x_2722_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object* v_inst_2725_, lean_object* v_handler_2726_, lean_object* v_x_2727_){
_start:
{
if (lean_obj_tag(v_x_2727_) == 0)
{
lean_object* v_a_2729_; lean_object* v_onFailure_2730_; lean_object* v___x_2731_; 
v_a_2729_ = lean_ctor_get(v_x_2727_, 0);
lean_inc(v_a_2729_);
lean_dec_ref_known(v_x_2727_, 1);
v_onFailure_2730_ = lean_ctor_get(v_inst_2725_, 2);
lean_inc_ref(v_onFailure_2730_);
lean_dec_ref(v_inst_2725_);
v___x_2731_ = lean_apply_3(v_onFailure_2730_, v_handler_2726_, v_a_2729_, lean_box(0));
return v___x_2731_;
}
else
{
lean_object* v___x_2732_; 
lean_dec(v_handler_2726_);
lean_dec_ref(v_inst_2725_);
v___x_2732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2732_, 0, v_x_2727_);
return v___x_2732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object* v_inst_2733_, lean_object* v_handler_2734_, lean_object* v_x_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(v_inst_2733_, v_handler_2734_, v_x_2735_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object* v_st_2738_, lean_object* v_____r_2739_){
_start:
{
uint8_t v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2741_ = 0;
v___x_2742_ = lean_box(v___x_2741_);
v___x_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2743_, 0, v_st_2738_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2743_);
v___x_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2744_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object* v_st_2746_, lean_object* v_____r_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_2746_, v_____r_2747_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object* v_requestStream_2750_, lean_object* v___f_2751_, lean_object* v___f_2752_, lean_object* v_x_2753_){
_start:
{
if (lean_obj_tag(v_x_2753_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2763_; 
lean_dec_ref(v___f_2752_);
lean_dec_ref(v___f_2751_);
lean_dec_ref(v_requestStream_2750_);
v_a_2755_ = lean_ctor_get(v_x_2753_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v_x_2753_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2757_ = v_x_2753_;
v_isShared_2758_ = v_isSharedCheck_2763_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v_x_2753_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2763_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2755_);
v___x_2760_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
lean_object* v___x_2761_; 
v___x_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2760_);
return v___x_2761_;
}
}
}
else
{
lean_object* v_a_2764_; uint8_t v___x_2765_; 
v_a_2764_ = lean_ctor_get(v_x_2753_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v_x_2753_, 1);
v___x_2765_ = lean_unbox(v_a_2764_);
if (v___x_2765_ == 0)
{
lean_object* v___x_2766_; lean_object* v___x_2767_; uint8_t v___x_2768_; lean_object* v___x_2769_; 
lean_dec_ref(v___f_2752_);
v___x_2766_ = lean_unsigned_to_nat(0u);
v___x_2767_ = l_Std_Http_Body_Stream_close(v_requestStream_2750_);
v___x_2768_ = lean_unbox(v_a_2764_);
lean_dec(v_a_2764_);
v___x_2769_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2766_, v___x_2768_, v___x_2767_, v___f_2751_);
return v___x_2769_;
}
else
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
lean_dec(v_a_2764_);
lean_dec_ref(v___f_2751_);
lean_dec_ref(v_requestStream_2750_);
v___x_2770_ = lean_box(0);
v___x_2771_ = lean_apply_2(v___f_2752_, v___x_2770_, lean_box(0));
return v___x_2771_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object* v_requestStream_2772_, lean_object* v___f_2773_, lean_object* v___f_2774_, lean_object* v_x_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(v_requestStream_2772_, v___f_2773_, v___f_2774_, v_x_2775_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t v_final_2778_, lean_object* v___f_2779_, lean_object* v___f_2780_, lean_object* v_requestStream_2781_, lean_object* v___f_2782_, lean_object* v_x_2783_){
_start:
{
if (lean_obj_tag(v_x_2783_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2793_; 
lean_dec_ref(v___f_2782_);
lean_dec_ref(v_requestStream_2781_);
lean_dec_ref(v___f_2780_);
lean_dec_ref(v___f_2779_);
v_a_2785_ = lean_ctor_get(v_x_2783_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_x_2783_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2787_ = v_x_2783_;
v_isShared_2788_ = v_isSharedCheck_2793_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v_x_2783_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2793_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
lean_object* v___x_2791_; 
v___x_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
return v___x_2791_;
}
}
}
else
{
lean_dec_ref_known(v_x_2783_, 1);
if (v_final_2778_ == 0)
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
lean_dec_ref(v___f_2782_);
lean_dec_ref(v_requestStream_2781_);
lean_dec_ref(v___f_2780_);
v___x_2794_ = lean_box(0);
v___x_2795_ = lean_apply_2(v___f_2779_, v___x_2794_, lean_box(0));
return v___x_2795_;
}
else
{
lean_object* v___x_2796_; uint8_t v___x_2797_; lean_object* v___x_2798_; lean_object* v___f_2799_; lean_object* v___f_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_7155__overap_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; 
lean_dec_ref(v___f_2779_);
v___x_2796_ = lean_unsigned_to_nat(0u);
v___x_2797_ = 0;
v___x_2798_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___f_2799_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5);
v___f_2800_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6));
v___x_2801_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11);
v___x_2802_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2802_, 0, lean_box(0));
lean_closure_set(v___x_2802_, 1, lean_box(0));
lean_closure_set(v___x_2802_, 2, v___x_2798_);
lean_closure_set(v___x_2802_, 3, lean_box(0));
lean_closure_set(v___x_2802_, 4, lean_box(0));
lean_closure_set(v___x_2802_, 5, v___x_2801_);
lean_closure_set(v___x_2802_, 6, v___f_2780_);
v___x_7155__overap_2803_ = l_Std_Mutex_atomically___redArg(v___x_2798_, v___f_2799_, v___f_2800_, v_requestStream_2781_, v___x_2802_);
v___x_2804_ = lean_apply_1(v___x_7155__overap_2803_, lean_box(0));
v___x_2805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2796_, v___x_2797_, v___x_2804_, v___f_2782_);
return v___x_2805_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object* v_final_2806_, lean_object* v___f_2807_, lean_object* v___f_2808_, lean_object* v_requestStream_2809_, lean_object* v___f_2810_, lean_object* v_x_2811_, lean_object* v___y_2812_){
_start:
{
uint8_t v_final_boxed_2813_; lean_object* v_res_2814_; 
v_final_boxed_2813_ = lean_unbox(v_final_2806_);
v_res_2814_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(v_final_boxed_2813_, v___f_2807_, v___f_2808_, v_requestStream_2809_, v___f_2810_, v_x_2811_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object* v_state_2815_, lean_object* v_x_2816_){
_start:
{
if (lean_obj_tag(v_x_2816_) == 0)
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2826_; 
lean_dec_ref(v_state_2815_);
v_a_2818_ = lean_ctor_get(v_x_2816_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_x_2816_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2820_ = v_x_2816_;
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v_x_2816_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2826_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
return v___x_2824_;
}
}
}
else
{
lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2856_; 
v_isSharedCheck_2856_ = !lean_is_exclusive(v_x_2816_);
if (v_isSharedCheck_2856_ == 0)
{
lean_object* v_unused_2857_; 
v_unused_2857_ = lean_ctor_get(v_x_2816_, 0);
lean_dec(v_unused_2857_);
v___x_2828_ = v_x_2816_;
v_isShared_2829_ = v_isSharedCheck_2856_;
goto v_resetjp_2827_;
}
else
{
lean_dec(v_x_2816_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2856_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v_machine_2830_; lean_object* v_requestStream_2831_; lean_object* v_keepAliveTimeout_2832_; lean_object* v_currentTimeout_2833_; lean_object* v_headerTimeout_2834_; lean_object* v_response_2835_; lean_object* v_respStream_2836_; uint8_t v_requiresData_2837_; lean_object* v_expectData_2838_; lean_object* v_pendingHead_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2855_; 
v_machine_2830_ = lean_ctor_get(v_state_2815_, 0);
v_requestStream_2831_ = lean_ctor_get(v_state_2815_, 1);
v_keepAliveTimeout_2832_ = lean_ctor_get(v_state_2815_, 2);
v_currentTimeout_2833_ = lean_ctor_get(v_state_2815_, 3);
v_headerTimeout_2834_ = lean_ctor_get(v_state_2815_, 4);
v_response_2835_ = lean_ctor_get(v_state_2815_, 5);
v_respStream_2836_ = lean_ctor_get(v_state_2815_, 6);
v_requiresData_2837_ = lean_ctor_get_uint8(v_state_2815_, sizeof(void*)*9);
v_expectData_2838_ = lean_ctor_get(v_state_2815_, 7);
v_pendingHead_2839_ = lean_ctor_get(v_state_2815_, 8);
v_isSharedCheck_2855_ = !lean_is_exclusive(v_state_2815_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2841_ = v_state_2815_;
v_isShared_2842_ = v_isSharedCheck_2855_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_pendingHead_2839_);
lean_inc(v_expectData_2838_);
lean_inc(v_respStream_2836_);
lean_inc(v_response_2835_);
lean_inc(v_headerTimeout_2834_);
lean_inc(v_currentTimeout_2833_);
lean_inc(v_keepAliveTimeout_2832_);
lean_inc(v_requestStream_2831_);
lean_inc(v_machine_2830_);
lean_dec(v_state_2815_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2855_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; lean_object* v___x_2847_; 
v___x_2843_ = lean_box(52);
v___x_2844_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_2830_, v___x_2843_);
v___x_2845_ = 0;
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 0, v___x_2844_);
v___x_2847_ = v___x_2841_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v___x_2844_);
lean_ctor_set(v_reuseFailAlloc_2854_, 1, v_requestStream_2831_);
lean_ctor_set(v_reuseFailAlloc_2854_, 2, v_keepAliveTimeout_2832_);
lean_ctor_set(v_reuseFailAlloc_2854_, 3, v_currentTimeout_2833_);
lean_ctor_set(v_reuseFailAlloc_2854_, 4, v_headerTimeout_2834_);
lean_ctor_set(v_reuseFailAlloc_2854_, 5, v_response_2835_);
lean_ctor_set(v_reuseFailAlloc_2854_, 6, v_respStream_2836_);
lean_ctor_set(v_reuseFailAlloc_2854_, 7, v_expectData_2838_);
lean_ctor_set(v_reuseFailAlloc_2854_, 8, v_pendingHead_2839_);
lean_ctor_set_uint8(v_reuseFailAlloc_2854_, sizeof(void*)*9, v_requiresData_2837_);
v___x_2847_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2851_; 
lean_ctor_set_uint8(v___x_2847_, sizeof(void*)*9 + 1, v___x_2845_);
v___x_2848_ = lean_box(v___x_2845_);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2847_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 0, v___x_2849_);
v___x_2851_ = v___x_2828_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v___x_2849_);
v___x_2851_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
lean_object* v___x_2852_; 
v___x_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
return v___x_2852_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object* v_state_2858_, lean_object* v_x_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v_res_2861_; 
v_res_2861_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(v_state_2858_, v_x_2859_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object* v_machine_2862_, lean_object* v_requestStream_2863_, lean_object* v_keepAliveTimeout_2864_, lean_object* v_currentTimeout_2865_, lean_object* v_headerTimeout_2866_, lean_object* v_response_2867_, lean_object* v_respStream_2868_, uint8_t v_requiresData_2869_, lean_object* v_expectData_2870_, lean_object* v_pendingHead_2871_, lean_object* v_____r_2872_){
_start:
{
uint8_t v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2874_ = 0;
v___x_2875_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2875_, 0, v_machine_2862_);
lean_ctor_set(v___x_2875_, 1, v_requestStream_2863_);
lean_ctor_set(v___x_2875_, 2, v_keepAliveTimeout_2864_);
lean_ctor_set(v___x_2875_, 3, v_currentTimeout_2865_);
lean_ctor_set(v___x_2875_, 4, v_headerTimeout_2866_);
lean_ctor_set(v___x_2875_, 5, v_response_2867_);
lean_ctor_set(v___x_2875_, 6, v_respStream_2868_);
lean_ctor_set(v___x_2875_, 7, v_expectData_2870_);
lean_ctor_set(v___x_2875_, 8, v_pendingHead_2871_);
lean_ctor_set_uint8(v___x_2875_, sizeof(void*)*9, v_requiresData_2869_);
lean_ctor_set_uint8(v___x_2875_, sizeof(void*)*9 + 1, v___x_2874_);
v___x_2876_ = lean_box(v___x_2874_);
v___x_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2875_);
lean_ctor_set(v___x_2877_, 1, v___x_2876_);
v___x_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2877_);
v___x_2879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object* v_machine_2880_, lean_object* v_requestStream_2881_, lean_object* v_keepAliveTimeout_2882_, lean_object* v_currentTimeout_2883_, lean_object* v_headerTimeout_2884_, lean_object* v_response_2885_, lean_object* v_respStream_2886_, lean_object* v_requiresData_2887_, lean_object* v_expectData_2888_, lean_object* v_pendingHead_2889_, lean_object* v_____r_2890_, lean_object* v___y_2891_){
_start:
{
uint8_t v_requiresData_boxed_2892_; lean_object* v_res_2893_; 
v_requiresData_boxed_2892_ = lean_unbox(v_requiresData_2887_);
v_res_2893_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(v_machine_2880_, v_requestStream_2881_, v_keepAliveTimeout_2882_, v_currentTimeout_2883_, v_headerTimeout_2884_, v_response_2885_, v_respStream_2886_, v_requiresData_boxed_2892_, v_expectData_2888_, v_pendingHead_2889_, v_____r_2890_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object* v_close_2894_, lean_object* v_body_2895_, lean_object* v___f_2896_, lean_object* v___f_2897_, lean_object* v_x_2898_){
_start:
{
if (lean_obj_tag(v_x_2898_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2908_; 
lean_dec_ref(v___f_2897_);
lean_dec_ref(v___f_2896_);
lean_dec(v_body_2895_);
lean_dec_ref(v_close_2894_);
v_a_2900_ = lean_ctor_get(v_x_2898_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v_x_2898_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2902_ = v_x_2898_;
v_isShared_2903_ = v_isSharedCheck_2908_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v_x_2898_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2908_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; 
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
return v___x_2906_;
}
}
}
else
{
lean_object* v_a_2909_; uint8_t v___x_2910_; 
v_a_2909_ = lean_ctor_get(v_x_2898_, 0);
lean_inc(v_a_2909_);
lean_dec_ref_known(v_x_2898_, 1);
v___x_2910_ = lean_unbox(v_a_2909_);
if (v___x_2910_ == 0)
{
lean_object* v___x_2911_; lean_object* v___x_2912_; uint8_t v___x_2913_; lean_object* v___x_2914_; 
lean_dec_ref(v___f_2897_);
v___x_2911_ = lean_unsigned_to_nat(0u);
v___x_2912_ = lean_apply_2(v_close_2894_, v_body_2895_, lean_box(0));
v___x_2913_ = lean_unbox(v_a_2909_);
lean_dec(v_a_2909_);
v___x_2914_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2911_, v___x_2913_, v___x_2912_, v___f_2896_);
return v___x_2914_;
}
else
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
lean_dec(v_a_2909_);
lean_dec_ref(v___f_2896_);
lean_dec(v_body_2895_);
lean_dec_ref(v_close_2894_);
v___x_2915_ = lean_box(0);
v___x_2916_ = lean_apply_2(v___f_2897_, v___x_2915_, lean_box(0));
return v___x_2916_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object* v_close_2917_, lean_object* v_body_2918_, lean_object* v___f_2919_, lean_object* v___f_2920_, lean_object* v_x_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v_res_2923_; 
v_res_2923_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(v_close_2917_, v_body_2918_, v___f_2919_, v___f_2920_, v_x_2921_);
return v_res_2923_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(lean_object* v_x_2924_){
_start:
{
if (lean_obj_tag(v_x_2924_) == 0)
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2934_; 
v_a_2926_ = lean_ctor_get(v_x_2924_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v_x_2924_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2928_ = v_x_2924_;
v_isShared_2929_ = v_isSharedCheck_2934_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v_x_2924_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2934_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2926_);
v___x_2931_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
lean_object* v___x_2932_; 
v___x_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
return v___x_2932_;
}
}
}
else
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2955_; 
v_a_2935_ = lean_ctor_get(v_x_2924_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v_x_2924_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2937_ = v_x_2924_;
v_isShared_2938_ = v_isSharedCheck_2955_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v_x_2924_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2955_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v_fst_2939_; lean_object* v_snd_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2954_; 
v_fst_2939_ = lean_ctor_get(v_a_2935_, 0);
v_snd_2940_ = lean_ctor_get(v_a_2935_, 1);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_a_2935_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2942_ = v_a_2935_;
v_isShared_2943_ = v_isSharedCheck_2954_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_snd_2940_);
lean_inc(v_fst_2939_);
lean_dec(v_a_2935_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2954_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
uint8_t v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2947_; 
v___x_2944_ = 0;
v___x_2945_ = lean_box(v___x_2944_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 1, v___x_2945_);
lean_ctor_set(v___x_2942_, 0, v_snd_2940_);
v___x_2947_ = v___x_2942_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_snd_2940_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v___x_2945_);
v___x_2947_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
lean_object* v___x_2948_; lean_object* v___x_2950_; 
v___x_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2948_, 0, v_fst_2939_);
lean_ctor_set(v___x_2948_, 1, v___x_2947_);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v___x_2948_);
v___x_2950_ = v___x_2937_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v___x_2948_);
v___x_2950_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
lean_object* v___x_2951_; 
v___x_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
return v___x_2951_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object* v_x_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(v_x_2956_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object* v_requestStream_2959_, lean_object* v_keepAliveTimeout_2960_, lean_object* v_currentTimeout_2961_, lean_object* v_headerTimeout_2962_, lean_object* v_response_2963_, uint8_t v_requiresData_2964_, lean_object* v_expectData_2965_, lean_object* v_pendingHead_2966_, lean_object* v_____x_2967_){
_start:
{
lean_object* v_snd_2969_; lean_object* v_fst_2970_; lean_object* v_fst_2971_; lean_object* v_snd_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2983_; 
v_snd_2969_ = lean_ctor_get(v_____x_2967_, 1);
lean_inc(v_snd_2969_);
v_fst_2970_ = lean_ctor_get(v_____x_2967_, 0);
lean_inc(v_fst_2970_);
lean_dec_ref(v_____x_2967_);
v_fst_2971_ = lean_ctor_get(v_snd_2969_, 0);
v_snd_2972_ = lean_ctor_get(v_snd_2969_, 1);
v_isSharedCheck_2983_ = !lean_is_exclusive(v_snd_2969_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2974_ = v_snd_2969_;
v_isShared_2975_ = v_isSharedCheck_2983_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_snd_2972_);
lean_inc(v_fst_2971_);
lean_dec(v_snd_2969_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2983_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
uint8_t v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2979_; 
v___x_2976_ = 0;
v___x_2977_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2977_, 0, v_fst_2970_);
lean_ctor_set(v___x_2977_, 1, v_requestStream_2959_);
lean_ctor_set(v___x_2977_, 2, v_keepAliveTimeout_2960_);
lean_ctor_set(v___x_2977_, 3, v_currentTimeout_2961_);
lean_ctor_set(v___x_2977_, 4, v_headerTimeout_2962_);
lean_ctor_set(v___x_2977_, 5, v_response_2963_);
lean_ctor_set(v___x_2977_, 6, v_fst_2971_);
lean_ctor_set(v___x_2977_, 7, v_expectData_2965_);
lean_ctor_set(v___x_2977_, 8, v_pendingHead_2966_);
lean_ctor_set_uint8(v___x_2977_, sizeof(void*)*9, v_requiresData_2964_);
lean_ctor_set_uint8(v___x_2977_, sizeof(void*)*9 + 1, v___x_2976_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 0, v___x_2977_);
v___x_2979_ = v___x_2974_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2977_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v_snd_2972_);
v___x_2979_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
v___x_2981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
return v___x_2981_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object* v_requestStream_2984_, lean_object* v_keepAliveTimeout_2985_, lean_object* v_currentTimeout_2986_, lean_object* v_headerTimeout_2987_, lean_object* v_response_2988_, lean_object* v_requiresData_2989_, lean_object* v_expectData_2990_, lean_object* v_pendingHead_2991_, lean_object* v_____x_2992_, lean_object* v___y_2993_){
_start:
{
uint8_t v_requiresData_boxed_2994_; lean_object* v_res_2995_; 
v_requiresData_boxed_2994_ = lean_unbox(v_requiresData_2989_);
v_res_2995_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(v_requestStream_2984_, v_keepAliveTimeout_2985_, v_currentTimeout_2986_, v_headerTimeout_2987_, v_response_2988_, v_requiresData_boxed_2994_, v_expectData_2990_, v_pendingHead_2991_, v_____x_2992_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object* v___f_2996_, lean_object* v_x_2997_){
_start:
{
if (lean_obj_tag(v_x_2997_) == 0)
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3007_; 
lean_dec_ref(v___f_2996_);
v_a_2999_ = lean_ctor_get(v_x_2997_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v_x_2997_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3001_ = v_x_2997_;
v_isShared_3002_ = v_isSharedCheck_3007_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v_x_2997_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3007_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3004_; 
if (v_isShared_3002_ == 0)
{
v___x_3004_ = v___x_3001_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_2999_);
v___x_3004_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
lean_object* v___x_3005_; 
v___x_3005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3005_, 0, v___x_3004_);
return v___x_3005_;
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3009_; 
v_a_3008_ = lean_ctor_get(v_x_2997_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v_x_2997_, 1);
v___x_3009_ = lean_apply_2(v___f_2996_, v_a_3008_, lean_box(0));
return v___x_3009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object* v___f_3010_, lean_object* v_x_3011_, lean_object* v___y_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(v___f_3010_, v_x_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object* v_snd_3014_, lean_object* v_fst_3015_, lean_object* v_x_3016_){
_start:
{
if (lean_obj_tag(v_x_3016_) == 0)
{
lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3026_; 
lean_dec_ref(v_fst_3015_);
lean_dec(v_snd_3014_);
v_a_3018_ = lean_ctor_get(v_x_3016_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v_x_3016_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3020_ = v_x_3016_;
v_isShared_3021_ = v_isSharedCheck_3026_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v_x_3016_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3026_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3023_; 
if (v_isShared_3021_ == 0)
{
v___x_3023_ = v___x_3020_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3018_);
v___x_3023_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
lean_object* v___x_3024_; 
v___x_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3023_);
return v___x_3024_;
}
}
}
else
{
lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3038_; 
v_isSharedCheck_3038_ = !lean_is_exclusive(v_x_3016_);
if (v_isSharedCheck_3038_ == 0)
{
lean_object* v_unused_3039_; 
v_unused_3039_ = lean_ctor_get(v_x_3016_, 0);
lean_dec(v_unused_3039_);
v___x_3028_ = v_x_3016_;
v_isShared_3029_ = v_isSharedCheck_3038_;
goto v_resetjp_3027_;
}
else
{
lean_dec(v_x_3016_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3038_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
uint8_t v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3035_; 
v___x_3030_ = 1;
v___x_3031_ = lean_box(v___x_3030_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v_snd_3014_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3033_, 0, v_fst_3015_);
lean_ctor_set(v___x_3033_, 1, v___x_3032_);
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 0, v___x_3033_);
v___x_3035_ = v___x_3028_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3035_);
return v___x_3036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object* v_snd_3040_, lean_object* v_fst_3041_, lean_object* v_x_3042_, lean_object* v___y_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(v_snd_3040_, v_fst_3041_, v_x_3042_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(lean_object* v_inst_3045_, lean_object* v_handler_3046_, lean_object* v___f_3047_, lean_object* v_x_3048_){
_start:
{
if (lean_obj_tag(v_x_3048_) == 0)
{
lean_object* v_a_3050_; lean_object* v_onFailure_3051_; lean_object* v___x_3052_; uint8_t v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v_a_3050_ = lean_ctor_get(v_x_3048_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v_x_3048_, 1);
v_onFailure_3051_ = lean_ctor_get(v_inst_3045_, 2);
lean_inc_ref(v_onFailure_3051_);
lean_dec_ref(v_inst_3045_);
v___x_3052_ = lean_unsigned_to_nat(0u);
v___x_3053_ = 0;
v___x_3054_ = lean_apply_3(v_onFailure_3051_, v_handler_3046_, v_a_3050_, lean_box(0));
v___x_3055_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3052_, v___x_3053_, v___x_3054_, v___f_3047_);
return v___x_3055_;
}
else
{
lean_object* v___x_3056_; 
lean_dec_ref(v___f_3047_);
lean_dec(v_handler_3046_);
lean_dec_ref(v_inst_3045_);
v___x_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3056_, 0, v_x_3048_);
return v___x_3056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object* v_inst_3057_, lean_object* v_handler_3058_, lean_object* v___f_3059_, lean_object* v_x_3060_, lean_object* v___y_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(v_inst_3057_, v_handler_3058_, v___f_3059_, v_x_3060_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(lean_object* v___f_3063_, lean_object* v_inst_3064_, lean_object* v_handler_3065_, lean_object* v_inst_3066_, lean_object* v___f_3067_, lean_object* v___f_3068_, lean_object* v_x_3069_){
_start:
{
if (lean_obj_tag(v_x_3069_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3079_; 
lean_dec_ref(v___f_3068_);
lean_dec_ref(v___f_3067_);
lean_dec_ref(v_inst_3066_);
lean_dec(v_handler_3065_);
lean_dec_ref(v_inst_3064_);
lean_dec_ref(v___f_3063_);
v_a_3071_ = lean_ctor_get(v_x_3069_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v_x_3069_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3073_ = v_x_3069_;
v_isShared_3074_ = v_isSharedCheck_3079_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v_x_3069_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3079_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
lean_object* v___x_3077_; 
v___x_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
return v___x_3077_;
}
}
}
else
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3113_; 
v_a_3080_ = lean_ctor_get(v_x_3069_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_x_3069_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3082_ = v_x_3069_;
v_isShared_3083_ = v_isSharedCheck_3113_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v_x_3069_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3113_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v_snd_3084_; 
v_snd_3084_ = lean_ctor_get(v_a_3080_, 1);
lean_inc(v_snd_3084_);
if (lean_obj_tag(v_snd_3084_) == 0)
{
lean_object* v_fst_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3101_; 
lean_dec_ref(v___f_3068_);
lean_dec_ref(v___f_3067_);
lean_dec_ref(v_inst_3066_);
lean_dec(v_handler_3065_);
lean_dec_ref(v_inst_3064_);
v_fst_3085_ = lean_ctor_get(v_a_3080_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v_a_3080_);
if (v_isSharedCheck_3101_ == 0)
{
lean_object* v_unused_3102_; 
v_unused_3102_ = lean_ctor_get(v_a_3080_, 1);
lean_dec(v_unused_3102_);
v___x_3087_ = v_a_3080_;
v_isShared_3088_ = v_isSharedCheck_3101_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_fst_3085_);
lean_dec(v_a_3080_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3101_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
uint8_t v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3092_; 
v___x_3089_ = 0;
v___x_3090_ = lean_box(v___x_3089_);
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 1, v___x_3090_);
lean_ctor_set(v___x_3087_, 0, v_snd_3084_);
v___x_3092_ = v___x_3087_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_snd_3084_);
lean_ctor_set(v_reuseFailAlloc_3100_, 1, v___x_3090_);
v___x_3092_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3096_; 
v___x_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3093_, 0, v_fst_3085_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
v___x_3094_ = lean_unsigned_to_nat(0u);
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 0, v___x_3093_);
v___x_3096_ = v___x_3082_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3093_);
v___x_3096_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
v___x_3098_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3094_, v___x_3089_, v___x_3097_, v___f_3063_);
return v___x_3098_;
}
}
}
}
else
{
lean_object* v_fst_3103_; lean_object* v_val_3104_; lean_object* v___f_3105_; lean_object* v___f_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
lean_del_object(v___x_3082_);
lean_dec_ref(v___f_3063_);
v_fst_3103_ = lean_ctor_get(v_a_3080_, 0);
lean_inc_n(v_fst_3103_, 2);
lean_dec(v_a_3080_);
v_val_3104_ = lean_ctor_get(v_snd_3084_, 0);
lean_inc(v_val_3104_);
v___f_3105_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed), 4, 2);
lean_closure_set(v___f_3105_, 0, v_snd_3084_);
lean_closure_set(v___f_3105_, 1, v_fst_3103_);
v___f_3106_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed), 5, 3);
lean_closure_set(v___f_3106_, 0, v_inst_3064_);
lean_closure_set(v___f_3106_, 1, v_handler_3065_);
lean_closure_set(v___f_3106_, 2, v___f_3105_);
v___x_3107_ = lean_unsigned_to_nat(0u);
v___x_3108_ = 0;
v___x_3109_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_3066_, v_fst_3103_, v_val_3104_);
v___x_3110_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3107_, v___x_3108_, v___x_3109_, v___f_3067_);
v___x_3111_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3107_, v___x_3108_, v___x_3110_, v___f_3106_);
v___x_3112_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3107_, v___x_3108_, v___x_3111_, v___f_3068_);
return v___x_3112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object* v___f_3114_, lean_object* v_inst_3115_, lean_object* v_handler_3116_, lean_object* v_inst_3117_, lean_object* v___f_3118_, lean_object* v___f_3119_, lean_object* v_x_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v_res_3122_; 
v_res_3122_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(v___f_3114_, v_inst_3115_, v_handler_3116_, v_inst_3117_, v___f_3118_, v___f_3119_, v_x_3120_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(lean_object* v_state_3123_, lean_object* v_x_3124_){
_start:
{
if (lean_obj_tag(v_x_3124_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3134_; 
lean_dec_ref(v_state_3123_);
v_a_3126_ = lean_ctor_get(v_x_3124_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v_x_3124_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3128_ = v_x_3124_;
v_isShared_3129_ = v_isSharedCheck_3134_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v_x_3124_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3134_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
lean_object* v___x_3132_; 
v___x_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3131_);
return v___x_3132_;
}
}
}
else
{
lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3164_; 
v_isSharedCheck_3164_ = !lean_is_exclusive(v_x_3124_);
if (v_isSharedCheck_3164_ == 0)
{
lean_object* v_unused_3165_; 
v_unused_3165_ = lean_ctor_get(v_x_3124_, 0);
lean_dec(v_unused_3165_);
v___x_3136_ = v_x_3124_;
v_isShared_3137_ = v_isSharedCheck_3164_;
goto v_resetjp_3135_;
}
else
{
lean_dec(v_x_3124_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3164_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v_machine_3138_; lean_object* v_requestStream_3139_; lean_object* v_keepAliveTimeout_3140_; lean_object* v_currentTimeout_3141_; lean_object* v_headerTimeout_3142_; lean_object* v_response_3143_; lean_object* v_respStream_3144_; uint8_t v_requiresData_3145_; lean_object* v_expectData_3146_; lean_object* v_pendingHead_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3163_; 
v_machine_3138_ = lean_ctor_get(v_state_3123_, 0);
v_requestStream_3139_ = lean_ctor_get(v_state_3123_, 1);
v_keepAliveTimeout_3140_ = lean_ctor_get(v_state_3123_, 2);
v_currentTimeout_3141_ = lean_ctor_get(v_state_3123_, 3);
v_headerTimeout_3142_ = lean_ctor_get(v_state_3123_, 4);
v_response_3143_ = lean_ctor_get(v_state_3123_, 5);
v_respStream_3144_ = lean_ctor_get(v_state_3123_, 6);
v_requiresData_3145_ = lean_ctor_get_uint8(v_state_3123_, sizeof(void*)*9);
v_expectData_3146_ = lean_ctor_get(v_state_3123_, 7);
v_pendingHead_3147_ = lean_ctor_get(v_state_3123_, 8);
v_isSharedCheck_3163_ = !lean_is_exclusive(v_state_3123_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3149_ = v_state_3123_;
v_isShared_3150_ = v_isSharedCheck_3163_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_pendingHead_3147_);
lean_inc(v_expectData_3146_);
lean_inc(v_respStream_3144_);
lean_inc(v_response_3143_);
lean_inc(v_headerTimeout_3142_);
lean_inc(v_currentTimeout_3141_);
lean_inc(v_keepAliveTimeout_3140_);
lean_inc(v_requestStream_3139_);
lean_inc(v_machine_3138_);
lean_dec(v_state_3123_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3163_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3151_; lean_object* v___x_3152_; uint8_t v___x_3153_; lean_object* v___x_3155_; 
v___x_3151_ = lean_box(31);
v___x_3152_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3138_, v___x_3151_);
v___x_3153_ = 0;
if (v_isShared_3150_ == 0)
{
lean_ctor_set(v___x_3149_, 0, v___x_3152_);
v___x_3155_ = v___x_3149_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v___x_3152_);
lean_ctor_set(v_reuseFailAlloc_3162_, 1, v_requestStream_3139_);
lean_ctor_set(v_reuseFailAlloc_3162_, 2, v_keepAliveTimeout_3140_);
lean_ctor_set(v_reuseFailAlloc_3162_, 3, v_currentTimeout_3141_);
lean_ctor_set(v_reuseFailAlloc_3162_, 4, v_headerTimeout_3142_);
lean_ctor_set(v_reuseFailAlloc_3162_, 5, v_response_3143_);
lean_ctor_set(v_reuseFailAlloc_3162_, 6, v_respStream_3144_);
lean_ctor_set(v_reuseFailAlloc_3162_, 7, v_expectData_3146_);
lean_ctor_set(v_reuseFailAlloc_3162_, 8, v_pendingHead_3147_);
lean_ctor_set_uint8(v_reuseFailAlloc_3162_, sizeof(void*)*9, v_requiresData_3145_);
v___x_3155_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3159_; 
lean_ctor_set_uint8(v___x_3155_, sizeof(void*)*9 + 1, v___x_3153_);
v___x_3156_ = lean_box(v___x_3153_);
v___x_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3155_);
lean_ctor_set(v___x_3157_, 1, v___x_3156_);
if (v_isShared_3137_ == 0)
{
lean_ctor_set(v___x_3136_, 0, v___x_3157_);
v___x_3159_ = v___x_3136_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v___x_3157_);
v___x_3159_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
lean_object* v___x_3160_; 
v___x_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3159_);
return v___x_3160_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object* v_state_3166_, lean_object* v_x_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v_res_3169_; 
v_res_3169_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(v_state_3166_, v_x_3167_);
return v_res_3169_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2(void){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3172_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1));
v___x_3173_ = lean_mk_io_user_error(v___x_3172_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object* v_inst_3174_, lean_object* v_inst_3175_, lean_object* v_handler_3176_, lean_object* v_config_3177_, lean_object* v_event_3178_, lean_object* v_state_3179_){
_start:
{
switch(lean_obj_tag(v_event_3178_))
{
case 0:
{
lean_object* v_x_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3293_; 
lean_dec(v_handler_3176_);
lean_dec_ref(v_inst_3175_);
lean_dec_ref(v_inst_3174_);
v_x_3187_ = lean_ctor_get(v_event_3178_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v_event_3178_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3189_ = v_event_3178_;
v_isShared_3190_ = v_isSharedCheck_3293_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_x_3187_);
lean_dec(v_event_3178_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3293_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
if (lean_obj_tag(v_x_3187_) == 0)
{
lean_object* v_machine_3191_; lean_object* v_reader_3192_; lean_object* v_requestStream_3193_; lean_object* v_keepAliveTimeout_3194_; lean_object* v_currentTimeout_3195_; lean_object* v_headerTimeout_3196_; lean_object* v_response_3197_; lean_object* v_respStream_3198_; uint8_t v_requiresData_3199_; lean_object* v_expectData_3200_; uint8_t v_handlerDispatched_3201_; lean_object* v_pendingHead_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3244_; 
lean_dec_ref(v_config_3177_);
v_machine_3191_ = lean_ctor_get(v_state_3179_, 0);
lean_inc_ref(v_machine_3191_);
v_reader_3192_ = lean_ctor_get(v_machine_3191_, 0);
lean_inc_ref(v_reader_3192_);
v_requestStream_3193_ = lean_ctor_get(v_state_3179_, 1);
v_keepAliveTimeout_3194_ = lean_ctor_get(v_state_3179_, 2);
v_currentTimeout_3195_ = lean_ctor_get(v_state_3179_, 3);
v_headerTimeout_3196_ = lean_ctor_get(v_state_3179_, 4);
v_response_3197_ = lean_ctor_get(v_state_3179_, 5);
v_respStream_3198_ = lean_ctor_get(v_state_3179_, 6);
v_requiresData_3199_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3200_ = lean_ctor_get(v_state_3179_, 7);
v_handlerDispatched_3201_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9 + 1);
v_pendingHead_3202_ = lean_ctor_get(v_state_3179_, 8);
v_isSharedCheck_3244_ = !lean_is_exclusive(v_state_3179_);
if (v_isSharedCheck_3244_ == 0)
{
lean_object* v_unused_3245_; 
v_unused_3245_ = lean_ctor_get(v_state_3179_, 0);
lean_dec(v_unused_3245_);
v___x_3204_ = v_state_3179_;
v_isShared_3205_ = v_isSharedCheck_3244_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_pendingHead_3202_);
lean_inc(v_expectData_3200_);
lean_inc(v_respStream_3198_);
lean_inc(v_response_3197_);
lean_inc(v_headerTimeout_3196_);
lean_inc(v_currentTimeout_3195_);
lean_inc(v_keepAliveTimeout_3194_);
lean_inc(v_requestStream_3193_);
lean_dec(v_state_3179_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3244_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v_writer_3206_; lean_object* v_config_3207_; lean_object* v_events_3208_; lean_object* v_error_3209_; lean_object* v_instant_3210_; uint8_t v_keepAlive_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3242_; 
v_writer_3206_ = lean_ctor_get(v_machine_3191_, 1);
v_config_3207_ = lean_ctor_get(v_machine_3191_, 2);
v_events_3208_ = lean_ctor_get(v_machine_3191_, 3);
v_error_3209_ = lean_ctor_get(v_machine_3191_, 4);
v_instant_3210_ = lean_ctor_get(v_machine_3191_, 5);
v_keepAlive_3211_ = lean_ctor_get_uint8(v_machine_3191_, sizeof(void*)*6);
v_isSharedCheck_3242_ = !lean_is_exclusive(v_machine_3191_);
if (v_isSharedCheck_3242_ == 0)
{
lean_object* v_unused_3243_; 
v_unused_3243_ = lean_ctor_get(v_machine_3191_, 0);
lean_dec(v_unused_3243_);
v___x_3213_ = v_machine_3191_;
v_isShared_3214_ = v_isSharedCheck_3242_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_instant_3210_);
lean_inc(v_error_3209_);
lean_inc(v_events_3208_);
lean_inc(v_config_3207_);
lean_inc(v_writer_3206_);
lean_dec(v_machine_3191_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3242_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v_state_3215_; lean_object* v_input_3216_; lean_object* v_messageHead_3217_; lean_object* v_messageCount_3218_; lean_object* v_bodyBytesRead_3219_; lean_object* v_headerBytesRead_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3241_; 
v_state_3215_ = lean_ctor_get(v_reader_3192_, 0);
v_input_3216_ = lean_ctor_get(v_reader_3192_, 1);
v_messageHead_3217_ = lean_ctor_get(v_reader_3192_, 2);
v_messageCount_3218_ = lean_ctor_get(v_reader_3192_, 3);
v_bodyBytesRead_3219_ = lean_ctor_get(v_reader_3192_, 4);
v_headerBytesRead_3220_ = lean_ctor_get(v_reader_3192_, 5);
v_isSharedCheck_3241_ = !lean_is_exclusive(v_reader_3192_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3222_ = v_reader_3192_;
v_isShared_3223_ = v_isSharedCheck_3241_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_headerBytesRead_3220_);
lean_inc(v_bodyBytesRead_3219_);
lean_inc(v_messageCount_3218_);
lean_inc(v_messageHead_3217_);
lean_inc(v_input_3216_);
lean_inc(v_state_3215_);
lean_dec(v_reader_3192_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3241_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
uint8_t v___x_3224_; lean_object* v___x_3226_; 
v___x_3224_ = 1;
if (v_isShared_3223_ == 0)
{
v___x_3226_ = v___x_3222_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_state_3215_);
lean_ctor_set(v_reuseFailAlloc_3240_, 1, v_input_3216_);
lean_ctor_set(v_reuseFailAlloc_3240_, 2, v_messageHead_3217_);
lean_ctor_set(v_reuseFailAlloc_3240_, 3, v_messageCount_3218_);
lean_ctor_set(v_reuseFailAlloc_3240_, 4, v_bodyBytesRead_3219_);
lean_ctor_set(v_reuseFailAlloc_3240_, 5, v_headerBytesRead_3220_);
v___x_3226_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
uint8_t v___x_3227_; lean_object* v___x_3229_; 
lean_ctor_set_uint8(v___x_3226_, sizeof(void*)*6, v___x_3224_);
v___x_3227_ = 0;
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 0, v___x_3226_);
v___x_3229_ = v___x_3213_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v___x_3226_);
lean_ctor_set(v_reuseFailAlloc_3239_, 1, v_writer_3206_);
lean_ctor_set(v_reuseFailAlloc_3239_, 2, v_config_3207_);
lean_ctor_set(v_reuseFailAlloc_3239_, 3, v_events_3208_);
lean_ctor_set(v_reuseFailAlloc_3239_, 4, v_error_3209_);
lean_ctor_set(v_reuseFailAlloc_3239_, 5, v_instant_3210_);
lean_ctor_set_uint8(v_reuseFailAlloc_3239_, sizeof(void*)*6, v_keepAlive_3211_);
v___x_3229_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
lean_object* v___x_3231_; 
lean_ctor_set_uint8(v___x_3229_, sizeof(void*)*6 + 1, v___x_3227_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v___x_3229_);
v___x_3231_ = v___x_3204_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3229_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v_requestStream_3193_);
lean_ctor_set(v_reuseFailAlloc_3238_, 2, v_keepAliveTimeout_3194_);
lean_ctor_set(v_reuseFailAlloc_3238_, 3, v_currentTimeout_3195_);
lean_ctor_set(v_reuseFailAlloc_3238_, 4, v_headerTimeout_3196_);
lean_ctor_set(v_reuseFailAlloc_3238_, 5, v_response_3197_);
lean_ctor_set(v_reuseFailAlloc_3238_, 6, v_respStream_3198_);
lean_ctor_set(v_reuseFailAlloc_3238_, 7, v_expectData_3200_);
lean_ctor_set(v_reuseFailAlloc_3238_, 8, v_pendingHead_3202_);
lean_ctor_set_uint8(v_reuseFailAlloc_3238_, sizeof(void*)*9, v_requiresData_3199_);
lean_ctor_set_uint8(v_reuseFailAlloc_3238_, sizeof(void*)*9 + 1, v_handlerDispatched_3201_);
v___x_3231_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3235_; 
v___x_3232_ = lean_box(v___x_3227_);
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3231_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
if (v_isShared_3190_ == 0)
{
lean_ctor_set_tag(v___x_3189_, 1);
lean_ctor_set(v___x_3189_, 0, v___x_3233_);
v___x_3235_ = v___x_3189_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3233_);
v___x_3235_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
lean_object* v___x_3236_; 
v___x_3236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3235_);
return v___x_3236_;
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
lean_object* v_val_3246_; lean_object* v_machine_3247_; lean_object* v_requestStream_3248_; lean_object* v_keepAliveTimeout_3249_; lean_object* v_currentTimeout_3250_; lean_object* v_response_3251_; lean_object* v_respStream_3252_; uint8_t v_requiresData_3253_; lean_object* v_expectData_3254_; uint8_t v_handlerDispatched_3255_; lean_object* v_pendingHead_3256_; lean_object* v___f_3257_; 
lean_del_object(v___x_3189_);
v_val_3246_ = lean_ctor_get(v_x_3187_, 0);
lean_inc_n(v_val_3246_, 2);
lean_dec_ref_known(v_x_3187_, 1);
v_machine_3247_ = lean_ctor_get(v_state_3179_, 0);
v_requestStream_3248_ = lean_ctor_get(v_state_3179_, 1);
v_keepAliveTimeout_3249_ = lean_ctor_get(v_state_3179_, 2);
lean_inc(v_keepAliveTimeout_3249_);
v_currentTimeout_3250_ = lean_ctor_get(v_state_3179_, 3);
v_response_3251_ = lean_ctor_get(v_state_3179_, 5);
v_respStream_3252_ = lean_ctor_get(v_state_3179_, 6);
v_requiresData_3253_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3254_ = lean_ctor_get(v_state_3179_, 7);
v_handlerDispatched_3255_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9 + 1);
v_pendingHead_3256_ = lean_ctor_get(v_state_3179_, 8);
v___f_3257_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3257_, 0, v_val_3246_);
if (lean_obj_tag(v_keepAliveTimeout_3249_) == 0)
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
lean_dec_ref(v___f_3257_);
lean_dec_ref(v_config_3177_);
v___x_3258_ = lean_box(0);
v___x_3259_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_3246_, v___x_3258_, v_state_3179_);
return v___x_3259_;
}
else
{
lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3291_; 
lean_inc(v_pendingHead_3256_);
lean_inc(v_expectData_3254_);
lean_inc(v_respStream_3252_);
lean_inc_ref(v_response_3251_);
lean_inc(v_currentTimeout_3250_);
lean_inc_ref(v_requestStream_3248_);
lean_inc_ref(v_machine_3247_);
lean_dec(v_val_3246_);
lean_dec_ref(v_state_3179_);
v_isSharedCheck_3291_ = !lean_is_exclusive(v_keepAliveTimeout_3249_);
if (v_isSharedCheck_3291_ == 0)
{
lean_object* v_unused_3292_; 
v_unused_3292_ = lean_ctor_get(v_keepAliveTimeout_3249_, 0);
lean_dec(v_unused_3292_);
v___x_3261_ = v_keepAliveTimeout_3249_;
v_isShared_3262_ = v_isSharedCheck_3291_;
goto v_resetjp_3260_;
}
else
{
lean_dec(v_keepAliveTimeout_3249_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3291_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___f_3265_; lean_object* v___x_3266_; uint8_t v___x_3267_; lean_object* v_val_3269_; lean_object* v___x_3274_; 
v___x_3263_ = lean_box(v_requiresData_3253_);
v___x_3264_ = lean_box(v_handlerDispatched_3255_);
v___f_3265_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed), 13, 11);
lean_closure_set(v___f_3265_, 0, v_config_3177_);
lean_closure_set(v___f_3265_, 1, v_machine_3247_);
lean_closure_set(v___f_3265_, 2, v_requestStream_3248_);
lean_closure_set(v___f_3265_, 3, v_currentTimeout_3250_);
lean_closure_set(v___f_3265_, 4, v_response_3251_);
lean_closure_set(v___f_3265_, 5, v_respStream_3252_);
lean_closure_set(v___f_3265_, 6, v___x_3263_);
lean_closure_set(v___f_3265_, 7, v_expectData_3254_);
lean_closure_set(v___f_3265_, 8, v___x_3264_);
lean_closure_set(v___f_3265_, 9, v_pendingHead_3256_);
lean_closure_set(v___f_3265_, 10, v___f_3257_);
v___x_3266_ = lean_unsigned_to_nat(0u);
v___x_3267_ = 0;
v___x_3274_ = lean_get_current_time();
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3282_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3277_ = v___x_3274_;
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v___x_3274_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3280_; 
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 1);
v___x_3280_ = v___x_3277_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_a_3275_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
v_val_3269_ = v___x_3280_;
goto v___jp_3268_;
}
}
}
else
{
lean_object* v_a_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3290_; 
v_a_3283_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3285_ = v___x_3274_;
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_a_3283_);
lean_dec(v___x_3274_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3288_; 
if (v_isShared_3286_ == 0)
{
lean_ctor_set_tag(v___x_3285_, 0);
v___x_3288_ = v___x_3285_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_a_3283_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
v_val_3269_ = v___x_3288_;
goto v___jp_3268_;
}
}
}
v___jp_3268_:
{
lean_object* v___x_3271_; 
if (v_isShared_3262_ == 0)
{
lean_ctor_set_tag(v___x_3261_, 0);
lean_ctor_set(v___x_3261_, 0, v_val_3269_);
v___x_3271_ = v___x_3261_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3273_; 
v_reuseFailAlloc_3273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3273_, 0, v_val_3269_);
v___x_3271_ = v_reuseFailAlloc_3273_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
lean_object* v___x_3272_; 
v___x_3272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3266_, v___x_3267_, v___x_3271_, v___f_3265_);
return v___x_3272_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v_x_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3404_; 
lean_dec_ref(v_config_3177_);
lean_dec(v_handler_3176_);
lean_dec_ref(v_inst_3174_);
v_x_3294_ = lean_ctor_get(v_event_3178_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v_event_3178_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3296_ = v_event_3178_;
v_isShared_3297_ = v_isSharedCheck_3404_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_x_3294_);
lean_dec(v_event_3178_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3404_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
if (lean_obj_tag(v_x_3294_) == 0)
{
lean_object* v_machine_3298_; lean_object* v_requestStream_3299_; lean_object* v_keepAliveTimeout_3300_; lean_object* v_currentTimeout_3301_; lean_object* v_headerTimeout_3302_; lean_object* v_response_3303_; lean_object* v_respStream_3304_; uint8_t v_requiresData_3305_; lean_object* v_expectData_3306_; uint8_t v_handlerDispatched_3307_; lean_object* v_pendingHead_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___f_3311_; 
lean_del_object(v___x_3296_);
v_machine_3298_ = lean_ctor_get(v_state_3179_, 0);
lean_inc_ref_n(v_machine_3298_, 2);
v_requestStream_3299_ = lean_ctor_get(v_state_3179_, 1);
lean_inc_ref_n(v_requestStream_3299_, 2);
v_keepAliveTimeout_3300_ = lean_ctor_get(v_state_3179_, 2);
lean_inc_n(v_keepAliveTimeout_3300_, 2);
v_currentTimeout_3301_ = lean_ctor_get(v_state_3179_, 3);
lean_inc_n(v_currentTimeout_3301_, 2);
v_headerTimeout_3302_ = lean_ctor_get(v_state_3179_, 4);
lean_inc_n(v_headerTimeout_3302_, 2);
v_response_3303_ = lean_ctor_get(v_state_3179_, 5);
lean_inc_ref_n(v_response_3303_, 2);
v_respStream_3304_ = lean_ctor_get(v_state_3179_, 6);
lean_inc(v_respStream_3304_);
v_requiresData_3305_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3306_ = lean_ctor_get(v_state_3179_, 7);
lean_inc_n(v_expectData_3306_, 2);
v_handlerDispatched_3307_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9 + 1);
v_pendingHead_3308_ = lean_ctor_get(v_state_3179_, 8);
lean_inc_n(v_pendingHead_3308_, 2);
lean_dec_ref(v_state_3179_);
v___x_3309_ = lean_box(v_requiresData_3305_);
v___x_3310_ = lean_box(v_handlerDispatched_3307_);
v___f_3311_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed), 12, 10);
lean_closure_set(v___f_3311_, 0, v_machine_3298_);
lean_closure_set(v___f_3311_, 1, v_requestStream_3299_);
lean_closure_set(v___f_3311_, 2, v_keepAliveTimeout_3300_);
lean_closure_set(v___f_3311_, 3, v_currentTimeout_3301_);
lean_closure_set(v___f_3311_, 4, v_headerTimeout_3302_);
lean_closure_set(v___f_3311_, 5, v_response_3303_);
lean_closure_set(v___f_3311_, 6, v___x_3309_);
lean_closure_set(v___f_3311_, 7, v_expectData_3306_);
lean_closure_set(v___f_3311_, 8, v___x_3310_);
lean_closure_set(v___f_3311_, 9, v_pendingHead_3308_);
if (lean_obj_tag(v_respStream_3304_) == 1)
{
lean_object* v_val_3312_; lean_object* v_close_3313_; lean_object* v_isClosed_3314_; lean_object* v___f_3315_; lean_object* v___f_3316_; lean_object* v___x_3317_; uint8_t v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
lean_dec(v_pendingHead_3308_);
lean_dec(v_expectData_3306_);
lean_dec_ref(v_response_3303_);
lean_dec(v_headerTimeout_3302_);
lean_dec(v_currentTimeout_3301_);
lean_dec(v_keepAliveTimeout_3300_);
lean_dec_ref(v_requestStream_3299_);
lean_dec_ref(v_machine_3298_);
v_val_3312_ = lean_ctor_get(v_respStream_3304_, 0);
lean_inc_n(v_val_3312_, 2);
lean_dec_ref_known(v_respStream_3304_, 1);
v_close_3313_ = lean_ctor_get(v_inst_3175_, 1);
lean_inc_ref(v_close_3313_);
v_isClosed_3314_ = lean_ctor_get(v_inst_3175_, 2);
lean_inc_ref(v_isClosed_3314_);
lean_dec_ref(v_inst_3175_);
lean_inc_ref(v___f_3311_);
v___f_3315_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3315_, 0, v___f_3311_);
v___f_3316_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3316_, 0, v_close_3313_);
lean_closure_set(v___f_3316_, 1, v_val_3312_);
lean_closure_set(v___f_3316_, 2, v___f_3315_);
lean_closure_set(v___f_3316_, 3, v___f_3311_);
v___x_3317_ = lean_unsigned_to_nat(0u);
v___x_3318_ = 0;
v___x_3319_ = lean_apply_2(v_isClosed_3314_, v_val_3312_, lean_box(0));
v___x_3320_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3317_, v___x_3318_, v___x_3319_, v___f_3316_);
return v___x_3320_;
}
else
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
lean_dec_ref(v___f_3311_);
lean_dec(v_respStream_3304_);
lean_dec_ref(v_inst_3175_);
v___x_3321_ = lean_box(0);
v___x_3322_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_3298_, v_requestStream_3299_, v_keepAliveTimeout_3300_, v_currentTimeout_3301_, v_headerTimeout_3302_, v_response_3303_, v_requiresData_3305_, v_expectData_3306_, v_handlerDispatched_3307_, v_pendingHead_3308_, v___x_3321_);
return v___x_3322_;
}
}
else
{
lean_object* v_val_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3403_; 
lean_dec_ref(v_inst_3175_);
v_val_3323_ = lean_ctor_get(v_x_3294_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v_x_3294_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3325_ = v_x_3294_;
v_isShared_3326_ = v_isSharedCheck_3403_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_val_3323_);
lean_dec(v_x_3294_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3403_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v_machine_3327_; lean_object* v_requestStream_3328_; lean_object* v_keepAliveTimeout_3329_; lean_object* v_currentTimeout_3330_; lean_object* v_headerTimeout_3331_; lean_object* v_response_3332_; lean_object* v_respStream_3333_; uint8_t v_requiresData_3334_; lean_object* v_expectData_3335_; uint8_t v_handlerDispatched_3336_; lean_object* v_pendingHead_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3402_; 
v_machine_3327_ = lean_ctor_get(v_state_3179_, 0);
v_requestStream_3328_ = lean_ctor_get(v_state_3179_, 1);
v_keepAliveTimeout_3329_ = lean_ctor_get(v_state_3179_, 2);
v_currentTimeout_3330_ = lean_ctor_get(v_state_3179_, 3);
v_headerTimeout_3331_ = lean_ctor_get(v_state_3179_, 4);
v_response_3332_ = lean_ctor_get(v_state_3179_, 5);
v_respStream_3333_ = lean_ctor_get(v_state_3179_, 6);
v_requiresData_3334_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3335_ = lean_ctor_get(v_state_3179_, 7);
v_handlerDispatched_3336_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9 + 1);
v_pendingHead_3337_ = lean_ctor_get(v_state_3179_, 8);
v_isSharedCheck_3402_ = !lean_is_exclusive(v_state_3179_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3339_ = v_state_3179_;
v_isShared_3340_ = v_isSharedCheck_3402_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_pendingHead_3337_);
lean_inc(v_expectData_3335_);
lean_inc(v_respStream_3333_);
lean_inc(v_response_3332_);
lean_inc(v_headerTimeout_3331_);
lean_inc(v_currentTimeout_3330_);
lean_inc(v_keepAliveTimeout_3329_);
lean_inc(v_requestStream_3328_);
lean_inc(v_machine_3327_);
lean_dec(v_state_3179_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3402_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___y_3342_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; uint8_t v___x_3360_; 
v___x_3355_ = lean_unsigned_to_nat(1u);
v___x_3356_ = lean_mk_empty_array_with_capacity(v___x_3355_);
v___x_3357_ = lean_array_push(v___x_3356_, v_val_3323_);
v___x_3358_ = lean_array_get_size(v___x_3357_);
v___x_3359_ = lean_unsigned_to_nat(0u);
v___x_3360_ = lean_nat_dec_eq(v___x_3358_, v___x_3359_);
if (v___x_3360_ == 0)
{
lean_object* v_reader_3361_; lean_object* v_writer_3362_; lean_object* v_config_3363_; lean_object* v_events_3364_; lean_object* v_error_3365_; lean_object* v_instant_3366_; uint8_t v_keepAlive_3367_; uint8_t v_pullBodyStalled_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3401_; 
v_reader_3361_ = lean_ctor_get(v_machine_3327_, 0);
v_writer_3362_ = lean_ctor_get(v_machine_3327_, 1);
v_config_3363_ = lean_ctor_get(v_machine_3327_, 2);
v_events_3364_ = lean_ctor_get(v_machine_3327_, 3);
v_error_3365_ = lean_ctor_get(v_machine_3327_, 4);
v_instant_3366_ = lean_ctor_get(v_machine_3327_, 5);
v_keepAlive_3367_ = lean_ctor_get_uint8(v_machine_3327_, sizeof(void*)*6);
v_pullBodyStalled_3368_ = lean_ctor_get_uint8(v_machine_3327_, sizeof(void*)*6 + 1);
v_isSharedCheck_3401_ = !lean_is_exclusive(v_machine_3327_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3370_ = v_machine_3327_;
v_isShared_3371_ = v_isSharedCheck_3401_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_instant_3366_);
lean_inc(v_error_3365_);
lean_inc(v_events_3364_);
lean_inc(v_config_3363_);
lean_inc(v_writer_3362_);
lean_inc(v_reader_3361_);
lean_dec(v_machine_3327_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3401_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___y_3373_; lean_object* v___x_3395_; uint8_t v___x_3396_; 
v___x_3395_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_3396_ = lean_nat_dec_lt(v___x_3359_, v___x_3358_);
if (v___x_3396_ == 0)
{
v___y_3373_ = v___x_3359_;
goto v___jp_3372_;
}
else
{
lean_object* v___f_3397_; size_t v___x_3398_; size_t v___x_3399_; lean_object* v___x_3400_; 
v___f_3397_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___x_3398_ = ((size_t)0ULL);
v___x_3399_ = lean_usize_of_nat(v___x_3358_);
lean_inc_ref(v___x_3357_);
v___x_3400_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3395_, v___f_3397_, v___x_3357_, v___x_3398_, v___x_3399_, v___x_3359_);
v___y_3373_ = v___x_3400_;
goto v___jp_3372_;
}
v___jp_3372_:
{
lean_object* v_userData_3374_; lean_object* v_outputData_3375_; lean_object* v_state_3376_; lean_object* v_knownSize_3377_; lean_object* v_messageHead_3378_; uint8_t v_sentMessage_3379_; uint8_t v_userClosedBody_3380_; uint8_t v_omitBody_3381_; lean_object* v_userDataBytes_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3394_; 
v_userData_3374_ = lean_ctor_get(v_writer_3362_, 0);
v_outputData_3375_ = lean_ctor_get(v_writer_3362_, 1);
v_state_3376_ = lean_ctor_get(v_writer_3362_, 2);
v_knownSize_3377_ = lean_ctor_get(v_writer_3362_, 3);
v_messageHead_3378_ = lean_ctor_get(v_writer_3362_, 4);
v_sentMessage_3379_ = lean_ctor_get_uint8(v_writer_3362_, sizeof(void*)*6);
v_userClosedBody_3380_ = lean_ctor_get_uint8(v_writer_3362_, sizeof(void*)*6 + 1);
v_omitBody_3381_ = lean_ctor_get_uint8(v_writer_3362_, sizeof(void*)*6 + 2);
v_userDataBytes_3382_ = lean_ctor_get(v_writer_3362_, 5);
v_isSharedCheck_3394_ = !lean_is_exclusive(v_writer_3362_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3384_ = v_writer_3362_;
v_isShared_3385_ = v_isSharedCheck_3394_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_userDataBytes_3382_);
lean_inc(v_messageHead_3378_);
lean_inc(v_knownSize_3377_);
lean_inc(v_state_3376_);
lean_inc(v_outputData_3375_);
lean_inc(v_userData_3374_);
lean_dec(v_writer_3362_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3394_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3389_; 
v___x_3386_ = l_Array_append___redArg(v_userData_3374_, v___x_3357_);
lean_dec_ref(v___x_3357_);
v___x_3387_ = lean_nat_add(v_userDataBytes_3382_, v___y_3373_);
lean_dec(v___y_3373_);
lean_dec(v_userDataBytes_3382_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 5, v___x_3387_);
lean_ctor_set(v___x_3384_, 0, v___x_3386_);
v___x_3389_ = v___x_3384_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v___x_3386_);
lean_ctor_set(v_reuseFailAlloc_3393_, 1, v_outputData_3375_);
lean_ctor_set(v_reuseFailAlloc_3393_, 2, v_state_3376_);
lean_ctor_set(v_reuseFailAlloc_3393_, 3, v_knownSize_3377_);
lean_ctor_set(v_reuseFailAlloc_3393_, 4, v_messageHead_3378_);
lean_ctor_set(v_reuseFailAlloc_3393_, 5, v___x_3387_);
lean_ctor_set_uint8(v_reuseFailAlloc_3393_, sizeof(void*)*6, v_sentMessage_3379_);
lean_ctor_set_uint8(v_reuseFailAlloc_3393_, sizeof(void*)*6 + 1, v_userClosedBody_3380_);
lean_ctor_set_uint8(v_reuseFailAlloc_3393_, sizeof(void*)*6 + 2, v_omitBody_3381_);
v___x_3389_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
lean_object* v___x_3391_; 
if (v_isShared_3371_ == 0)
{
lean_ctor_set(v___x_3370_, 1, v___x_3389_);
v___x_3391_ = v___x_3370_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_reader_3361_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v___x_3389_);
lean_ctor_set(v_reuseFailAlloc_3392_, 2, v_config_3363_);
lean_ctor_set(v_reuseFailAlloc_3392_, 3, v_events_3364_);
lean_ctor_set(v_reuseFailAlloc_3392_, 4, v_error_3365_);
lean_ctor_set(v_reuseFailAlloc_3392_, 5, v_instant_3366_);
lean_ctor_set_uint8(v_reuseFailAlloc_3392_, sizeof(void*)*6, v_keepAlive_3367_);
lean_ctor_set_uint8(v_reuseFailAlloc_3392_, sizeof(void*)*6 + 1, v_pullBodyStalled_3368_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
v___y_3342_ = v___x_3391_;
goto v___jp_3341_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3357_);
v___y_3342_ = v_machine_3327_;
goto v___jp_3341_;
}
v___jp_3341_:
{
lean_object* v___x_3344_; 
if (v_isShared_3340_ == 0)
{
lean_ctor_set(v___x_3339_, 0, v___y_3342_);
v___x_3344_ = v___x_3339_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___y_3342_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v_requestStream_3328_);
lean_ctor_set(v_reuseFailAlloc_3354_, 2, v_keepAliveTimeout_3329_);
lean_ctor_set(v_reuseFailAlloc_3354_, 3, v_currentTimeout_3330_);
lean_ctor_set(v_reuseFailAlloc_3354_, 4, v_headerTimeout_3331_);
lean_ctor_set(v_reuseFailAlloc_3354_, 5, v_response_3332_);
lean_ctor_set(v_reuseFailAlloc_3354_, 6, v_respStream_3333_);
lean_ctor_set(v_reuseFailAlloc_3354_, 7, v_expectData_3335_);
lean_ctor_set(v_reuseFailAlloc_3354_, 8, v_pendingHead_3337_);
lean_ctor_set_uint8(v_reuseFailAlloc_3354_, sizeof(void*)*9, v_requiresData_3334_);
lean_ctor_set_uint8(v_reuseFailAlloc_3354_, sizeof(void*)*9 + 1, v_handlerDispatched_3336_);
v___x_3344_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
uint8_t v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3349_; 
v___x_3345_ = 0;
v___x_3346_ = lean_box(v___x_3345_);
v___x_3347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3344_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
if (v_isShared_3326_ == 0)
{
lean_ctor_set(v___x_3325_, 0, v___x_3347_);
v___x_3349_ = v___x_3325_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3347_);
v___x_3349_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
lean_object* v___x_3351_; 
if (v_isShared_3297_ == 0)
{
lean_ctor_set_tag(v___x_3296_, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3349_);
v___x_3351_ = v___x_3296_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v___x_3349_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
}
}
}
}
}
case 2:
{
uint8_t v_x_3405_; 
lean_dec_ref(v_config_3177_);
lean_dec_ref(v_inst_3175_);
v_x_3405_ = lean_ctor_get_uint8(v_event_3178_, 0);
lean_dec_ref_known(v_event_3178_, 0);
if (v_x_3405_ == 0)
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
lean_dec(v_handler_3176_);
lean_dec_ref(v_inst_3174_);
v___x_3406_ = lean_box(v_x_3405_);
v___x_3407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3407_, 0, v_state_3179_);
lean_ctor_set(v___x_3407_, 1, v___x_3406_);
v___x_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
v___x_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3408_);
return v___x_3409_;
}
else
{
lean_object* v_machine_3410_; lean_object* v_requestStream_3411_; lean_object* v_keepAliveTimeout_3412_; lean_object* v_currentTimeout_3413_; lean_object* v_headerTimeout_3414_; lean_object* v_response_3415_; lean_object* v_respStream_3416_; uint8_t v_requiresData_3417_; lean_object* v_expectData_3418_; uint8_t v_handlerDispatched_3419_; lean_object* v_pendingHead_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3469_; 
v_machine_3410_ = lean_ctor_get(v_state_3179_, 0);
v_requestStream_3411_ = lean_ctor_get(v_state_3179_, 1);
v_keepAliveTimeout_3412_ = lean_ctor_get(v_state_3179_, 2);
v_currentTimeout_3413_ = lean_ctor_get(v_state_3179_, 3);
v_headerTimeout_3414_ = lean_ctor_get(v_state_3179_, 4);
v_response_3415_ = lean_ctor_get(v_state_3179_, 5);
v_respStream_3416_ = lean_ctor_get(v_state_3179_, 6);
v_requiresData_3417_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3418_ = lean_ctor_get(v_state_3179_, 7);
v_handlerDispatched_3419_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9 + 1);
v_pendingHead_3420_ = lean_ctor_get(v_state_3179_, 8);
v_isSharedCheck_3469_ = !lean_is_exclusive(v_state_3179_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3422_ = v_state_3179_;
v_isShared_3423_ = v_isSharedCheck_3469_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_pendingHead_3420_);
lean_inc(v_expectData_3418_);
lean_inc(v_respStream_3416_);
lean_inc(v_response_3415_);
lean_inc(v_headerTimeout_3414_);
lean_inc(v_currentTimeout_3413_);
lean_inc(v_keepAliveTimeout_3412_);
lean_inc(v_requestStream_3411_);
lean_inc(v_machine_3410_);
lean_dec(v_state_3179_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3469_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
uint8_t v___x_3424_; lean_object* v___x_3425_; lean_object* v_fst_3426_; lean_object* v_snd_3427_; lean_object* v_reader_3428_; lean_object* v_writer_3429_; lean_object* v_config_3430_; lean_object* v_events_3431_; lean_object* v_error_3432_; lean_object* v_instant_3433_; uint8_t v_keepAlive_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3468_; 
v___x_3424_ = 0;
v___x_3425_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(v___x_3424_, v_machine_3410_);
v_fst_3426_ = lean_ctor_get(v___x_3425_, 0);
lean_inc(v_fst_3426_);
v_snd_3427_ = lean_ctor_get(v___x_3425_, 1);
lean_inc(v_snd_3427_);
lean_dec_ref(v___x_3425_);
v_reader_3428_ = lean_ctor_get(v_fst_3426_, 0);
v_writer_3429_ = lean_ctor_get(v_fst_3426_, 1);
v_config_3430_ = lean_ctor_get(v_fst_3426_, 2);
v_events_3431_ = lean_ctor_get(v_fst_3426_, 3);
v_error_3432_ = lean_ctor_get(v_fst_3426_, 4);
v_instant_3433_ = lean_ctor_get(v_fst_3426_, 5);
v_keepAlive_3434_ = lean_ctor_get_uint8(v_fst_3426_, sizeof(void*)*6);
v_isSharedCheck_3468_ = !lean_is_exclusive(v_fst_3426_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3436_ = v_fst_3426_;
v_isShared_3437_ = v_isSharedCheck_3468_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_instant_3433_);
lean_inc(v_error_3432_);
lean_inc(v_events_3431_);
lean_inc(v_config_3430_);
lean_inc(v_writer_3429_);
lean_inc(v_reader_3428_);
lean_dec(v_fst_3426_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3468_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___f_3438_; lean_object* v___f_3439_; uint8_t v___y_3441_; 
v___f_3438_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_3439_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3439_, 0, v_inst_3174_);
lean_closure_set(v___f_3439_, 1, v_handler_3176_);
if (lean_obj_tag(v_snd_3427_) == 0)
{
uint8_t v_sentMessage_3464_; 
v_sentMessage_3464_ = lean_ctor_get_uint8(v_writer_3429_, sizeof(void*)*6);
if (v_sentMessage_3464_ == 0)
{
lean_object* v_state_3465_; 
v_state_3465_ = lean_ctor_get(v_reader_3428_, 0);
if (lean_obj_tag(v_state_3465_) == 2)
{
v___y_3441_ = v_x_3405_;
goto v___jp_3440_;
}
else
{
v___y_3441_ = v_sentMessage_3464_;
goto v___jp_3440_;
}
}
else
{
uint8_t v___x_3466_; 
v___x_3466_ = 0;
v___y_3441_ = v___x_3466_;
goto v___jp_3440_;
}
}
else
{
uint8_t v___x_3467_; 
v___x_3467_ = 0;
v___y_3441_ = v___x_3467_;
goto v___jp_3440_;
}
v___jp_3440_:
{
lean_object* v___x_3443_; 
if (v_isShared_3437_ == 0)
{
v___x_3443_ = v___x_3436_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_reader_3428_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v_writer_3429_);
lean_ctor_set(v_reuseFailAlloc_3463_, 2, v_config_3430_);
lean_ctor_set(v_reuseFailAlloc_3463_, 3, v_events_3431_);
lean_ctor_set(v_reuseFailAlloc_3463_, 4, v_error_3432_);
lean_ctor_set(v_reuseFailAlloc_3463_, 5, v_instant_3433_);
lean_ctor_set_uint8(v_reuseFailAlloc_3463_, sizeof(void*)*6, v_keepAlive_3434_);
v___x_3443_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
lean_object* v_st_3445_; 
lean_ctor_set_uint8(v___x_3443_, sizeof(void*)*6 + 1, v___y_3441_);
lean_inc_ref(v_requestStream_3411_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v___x_3443_);
v_st_3445_ = v___x_3422_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v___x_3443_);
lean_ctor_set(v_reuseFailAlloc_3462_, 1, v_requestStream_3411_);
lean_ctor_set(v_reuseFailAlloc_3462_, 2, v_keepAliveTimeout_3412_);
lean_ctor_set(v_reuseFailAlloc_3462_, 3, v_currentTimeout_3413_);
lean_ctor_set(v_reuseFailAlloc_3462_, 4, v_headerTimeout_3414_);
lean_ctor_set(v_reuseFailAlloc_3462_, 5, v_response_3415_);
lean_ctor_set(v_reuseFailAlloc_3462_, 6, v_respStream_3416_);
lean_ctor_set(v_reuseFailAlloc_3462_, 7, v_expectData_3418_);
lean_ctor_set(v_reuseFailAlloc_3462_, 8, v_pendingHead_3420_);
lean_ctor_set_uint8(v_reuseFailAlloc_3462_, sizeof(void*)*9, v_requiresData_3417_);
lean_ctor_set_uint8(v_reuseFailAlloc_3462_, sizeof(void*)*9 + 1, v_handlerDispatched_3419_);
v_st_3445_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
lean_object* v___f_3446_; 
lean_inc_ref(v_st_3445_);
v___f_3446_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3446_, 0, v_st_3445_);
if (lean_obj_tag(v_snd_3427_) == 1)
{
lean_object* v_val_3447_; uint8_t v_final_3448_; uint8_t v_incomplete_3449_; lean_object* v_chunk_3450_; lean_object* v___f_3451_; lean_object* v___f_3452_; lean_object* v___x_3453_; lean_object* v___f_3454_; lean_object* v___x_3455_; uint8_t v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
lean_dec_ref(v_st_3445_);
v_val_3447_ = lean_ctor_get(v_snd_3427_, 0);
lean_inc(v_val_3447_);
lean_dec_ref_known(v_snd_3427_, 1);
v_final_3448_ = lean_ctor_get_uint8(v_val_3447_, sizeof(void*)*1);
v_incomplete_3449_ = lean_ctor_get_uint8(v_val_3447_, sizeof(void*)*1 + 1);
v_chunk_3450_ = lean_ctor_get(v_val_3447_, 0);
lean_inc_ref(v_chunk_3450_);
lean_dec(v_val_3447_);
lean_inc_ref_n(v___f_3446_, 2);
v___f_3451_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3451_, 0, v___f_3446_);
lean_inc_ref_n(v_requestStream_3411_, 2);
v___f_3452_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_3452_, 0, v_requestStream_3411_);
lean_closure_set(v___f_3452_, 1, v___f_3451_);
lean_closure_set(v___f_3452_, 2, v___f_3446_);
v___x_3453_ = lean_box(v_final_3448_);
v___f_3454_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed), 7, 5);
lean_closure_set(v___f_3454_, 0, v___x_3453_);
lean_closure_set(v___f_3454_, 1, v___f_3446_);
lean_closure_set(v___f_3454_, 2, v___f_3438_);
lean_closure_set(v___f_3454_, 3, v_requestStream_3411_);
lean_closure_set(v___f_3454_, 4, v___f_3452_);
v___x_3455_ = lean_unsigned_to_nat(0u);
v___x_3456_ = 0;
v___x_3457_ = l_Std_Http_Body_Stream_send(v_requestStream_3411_, v_chunk_3450_, v_incomplete_3449_);
v___x_3458_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3455_, v___x_3456_, v___x_3457_, v___f_3439_);
v___x_3459_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3455_, v___x_3456_, v___x_3458_, v___f_3454_);
return v___x_3459_;
}
else
{
lean_object* v___x_3460_; lean_object* v___x_3461_; 
lean_dec_ref(v___f_3446_);
lean_dec_ref(v___f_3439_);
lean_dec(v_snd_3427_);
lean_dec_ref(v_requestStream_3411_);
v___x_3460_ = lean_box(0);
v___x_3461_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_3445_, v___x_3460_);
return v___x_3461_;
}
}
}
}
}
}
}
}
case 3:
{
lean_object* v_x_3470_; 
v_x_3470_ = lean_ctor_get(v_event_3178_, 0);
lean_inc_ref(v_x_3470_);
lean_dec_ref_known(v_event_3178_, 1);
if (lean_obj_tag(v_x_3470_) == 0)
{
lean_object* v_a_3471_; lean_object* v_onFailure_3472_; lean_object* v___f_3473_; lean_object* v___x_3474_; uint8_t v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
lean_dec_ref(v_config_3177_);
lean_dec_ref(v_inst_3175_);
v_a_3471_ = lean_ctor_get(v_x_3470_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v_x_3470_, 1);
v_onFailure_3472_ = lean_ctor_get(v_inst_3174_, 2);
lean_inc_ref(v_onFailure_3472_);
lean_dec_ref(v_inst_3174_);
v___f_3473_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_3473_, 0, v_state_3179_);
v___x_3474_ = lean_unsigned_to_nat(0u);
v___x_3475_ = 0;
v___x_3476_ = lean_apply_3(v_onFailure_3472_, v_handler_3176_, v_a_3471_, lean_box(0));
v___x_3477_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3474_, v___x_3475_, v___x_3476_, v___f_3473_);
return v___x_3477_;
}
else
{
lean_object* v_machine_3478_; lean_object* v_reader_3479_; lean_object* v_state_3480_; 
v_machine_3478_ = lean_ctor_get(v_state_3179_, 0);
lean_inc_ref(v_machine_3478_);
v_reader_3479_ = lean_ctor_get(v_machine_3478_, 0);
v_state_3480_ = lean_ctor_get(v_reader_3479_, 0);
if (lean_obj_tag(v_state_3480_) == 7)
{
lean_object* v_a_3481_; lean_object* v_requestStream_3482_; lean_object* v_keepAliveTimeout_3483_; lean_object* v_currentTimeout_3484_; lean_object* v_headerTimeout_3485_; lean_object* v_response_3486_; lean_object* v_respStream_3487_; uint8_t v_requiresData_3488_; lean_object* v_expectData_3489_; lean_object* v_pendingHead_3490_; lean_object* v_close_3491_; lean_object* v_isClosed_3492_; lean_object* v_body_3493_; lean_object* v___x_3494_; lean_object* v___f_3495_; lean_object* v___f_3496_; lean_object* v___f_3497_; lean_object* v___x_3498_; uint8_t v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
lean_dec_ref(v_config_3177_);
lean_dec(v_handler_3176_);
lean_dec_ref(v_inst_3174_);
v_a_3481_ = lean_ctor_get(v_x_3470_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v_x_3470_, 1);
v_requestStream_3482_ = lean_ctor_get(v_state_3179_, 1);
lean_inc_ref(v_requestStream_3482_);
v_keepAliveTimeout_3483_ = lean_ctor_get(v_state_3179_, 2);
lean_inc(v_keepAliveTimeout_3483_);
v_currentTimeout_3484_ = lean_ctor_get(v_state_3179_, 3);
lean_inc(v_currentTimeout_3484_);
v_headerTimeout_3485_ = lean_ctor_get(v_state_3179_, 4);
lean_inc(v_headerTimeout_3485_);
v_response_3486_ = lean_ctor_get(v_state_3179_, 5);
lean_inc_ref(v_response_3486_);
v_respStream_3487_ = lean_ctor_get(v_state_3179_, 6);
lean_inc(v_respStream_3487_);
v_requiresData_3488_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3489_ = lean_ctor_get(v_state_3179_, 7);
lean_inc(v_expectData_3489_);
v_pendingHead_3490_ = lean_ctor_get(v_state_3179_, 8);
lean_inc(v_pendingHead_3490_);
lean_dec_ref(v_state_3179_);
v_close_3491_ = lean_ctor_get(v_inst_3175_, 1);
lean_inc_ref(v_close_3491_);
v_isClosed_3492_ = lean_ctor_get(v_inst_3175_, 2);
lean_inc_ref(v_isClosed_3492_);
lean_dec_ref(v_inst_3175_);
v_body_3493_ = lean_ctor_get(v_a_3481_, 1);
lean_inc_n(v_body_3493_, 2);
lean_dec(v_a_3481_);
v___x_3494_ = lean_box(v_requiresData_3488_);
v___f_3495_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed), 12, 10);
lean_closure_set(v___f_3495_, 0, v_machine_3478_);
lean_closure_set(v___f_3495_, 1, v_requestStream_3482_);
lean_closure_set(v___f_3495_, 2, v_keepAliveTimeout_3483_);
lean_closure_set(v___f_3495_, 3, v_currentTimeout_3484_);
lean_closure_set(v___f_3495_, 4, v_headerTimeout_3485_);
lean_closure_set(v___f_3495_, 5, v_response_3486_);
lean_closure_set(v___f_3495_, 6, v_respStream_3487_);
lean_closure_set(v___f_3495_, 7, v___x_3494_);
lean_closure_set(v___f_3495_, 8, v_expectData_3489_);
lean_closure_set(v___f_3495_, 9, v_pendingHead_3490_);
lean_inc_ref(v___f_3495_);
v___f_3496_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3496_, 0, v___f_3495_);
v___f_3497_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_3497_, 0, v_close_3491_);
lean_closure_set(v___f_3497_, 1, v_body_3493_);
lean_closure_set(v___f_3497_, 2, v___f_3496_);
lean_closure_set(v___f_3497_, 3, v___f_3495_);
v___x_3498_ = lean_unsigned_to_nat(0u);
v___x_3499_ = 0;
v___x_3500_ = lean_apply_2(v_isClosed_3492_, v_body_3493_, lean_box(0));
v___x_3501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3498_, v___x_3499_, v___x_3500_, v___f_3497_);
return v___x_3501_;
}
else
{
lean_object* v_a_3502_; lean_object* v_requestStream_3503_; lean_object* v_keepAliveTimeout_3504_; lean_object* v_currentTimeout_3505_; lean_object* v_headerTimeout_3506_; lean_object* v_response_3507_; uint8_t v_requiresData_3508_; lean_object* v_expectData_3509_; lean_object* v_pendingHead_3510_; lean_object* v___f_3511_; lean_object* v___x_3512_; lean_object* v___f_3513_; lean_object* v___f_3514_; lean_object* v___f_3515_; lean_object* v___x_3516_; uint8_t v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v_a_3502_ = lean_ctor_get(v_x_3470_, 0);
lean_inc(v_a_3502_);
lean_dec_ref_known(v_x_3470_, 1);
v_requestStream_3503_ = lean_ctor_get(v_state_3179_, 1);
lean_inc_ref(v_requestStream_3503_);
v_keepAliveTimeout_3504_ = lean_ctor_get(v_state_3179_, 2);
lean_inc(v_keepAliveTimeout_3504_);
v_currentTimeout_3505_ = lean_ctor_get(v_state_3179_, 3);
lean_inc(v_currentTimeout_3505_);
v_headerTimeout_3506_ = lean_ctor_get(v_state_3179_, 4);
lean_inc(v_headerTimeout_3506_);
v_response_3507_ = lean_ctor_get(v_state_3179_, 5);
lean_inc_ref(v_response_3507_);
v_requiresData_3508_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3509_ = lean_ctor_get(v_state_3179_, 7);
lean_inc(v_expectData_3509_);
v_pendingHead_3510_ = lean_ctor_get(v_state_3179_, 8);
lean_inc(v_pendingHead_3510_);
lean_dec_ref(v_state_3179_);
v___f_3511_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0));
v___x_3512_ = lean_box(v_requiresData_3508_);
v___f_3513_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed), 10, 8);
lean_closure_set(v___f_3513_, 0, v_requestStream_3503_);
lean_closure_set(v___f_3513_, 1, v_keepAliveTimeout_3504_);
lean_closure_set(v___f_3513_, 2, v_currentTimeout_3505_);
lean_closure_set(v___f_3513_, 3, v_headerTimeout_3506_);
lean_closure_set(v___f_3513_, 4, v_response_3507_);
lean_closure_set(v___f_3513_, 5, v___x_3512_);
lean_closure_set(v___f_3513_, 6, v_expectData_3509_);
lean_closure_set(v___f_3513_, 7, v_pendingHead_3510_);
v___f_3514_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed), 3, 1);
lean_closure_set(v___f_3514_, 0, v___f_3513_);
lean_inc_ref(v_inst_3175_);
lean_inc_ref(v___f_3514_);
v___f_3515_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed), 8, 6);
lean_closure_set(v___f_3515_, 0, v___f_3514_);
lean_closure_set(v___f_3515_, 1, v_inst_3174_);
lean_closure_set(v___f_3515_, 2, v_handler_3176_);
lean_closure_set(v___f_3515_, 3, v_inst_3175_);
lean_closure_set(v___f_3515_, 4, v___f_3511_);
lean_closure_set(v___f_3515_, 5, v___f_3514_);
v___x_3516_ = lean_unsigned_to_nat(0u);
v___x_3517_ = 0;
v___x_3518_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_3175_, v_config_3177_, v_machine_3478_, v_a_3502_);
v___x_3519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3516_, v___x_3517_, v___x_3518_, v___f_3515_);
return v___x_3519_;
}
}
}
case 4:
{
lean_object* v_onFailure_3520_; lean_object* v___f_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; uint8_t v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
lean_dec_ref(v_config_3177_);
lean_dec_ref(v_inst_3175_);
v_onFailure_3520_ = lean_ctor_get(v_inst_3174_, 2);
lean_inc_ref(v_onFailure_3520_);
lean_dec_ref(v_inst_3174_);
v___f_3521_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed), 3, 1);
lean_closure_set(v___f_3521_, 0, v_state_3179_);
v___x_3522_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2);
v___x_3523_ = lean_unsigned_to_nat(0u);
v___x_3524_ = 0;
v___x_3525_ = lean_apply_3(v_onFailure_3520_, v_handler_3176_, v___x_3522_, lean_box(0));
v___x_3526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3523_, v___x_3524_, v___x_3525_, v___f_3521_);
return v___x_3526_;
}
case 6:
{
lean_object* v_machine_3527_; lean_object* v_requestStream_3528_; lean_object* v_keepAliveTimeout_3529_; lean_object* v_currentTimeout_3530_; lean_object* v_headerTimeout_3531_; lean_object* v_response_3532_; lean_object* v_respStream_3533_; uint8_t v_requiresData_3534_; lean_object* v_expectData_3535_; lean_object* v_pendingHead_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3550_; 
lean_dec_ref(v_config_3177_);
lean_dec(v_handler_3176_);
lean_dec_ref(v_inst_3175_);
lean_dec_ref(v_inst_3174_);
v_machine_3527_ = lean_ctor_get(v_state_3179_, 0);
v_requestStream_3528_ = lean_ctor_get(v_state_3179_, 1);
v_keepAliveTimeout_3529_ = lean_ctor_get(v_state_3179_, 2);
v_currentTimeout_3530_ = lean_ctor_get(v_state_3179_, 3);
v_headerTimeout_3531_ = lean_ctor_get(v_state_3179_, 4);
v_response_3532_ = lean_ctor_get(v_state_3179_, 5);
v_respStream_3533_ = lean_ctor_get(v_state_3179_, 6);
v_requiresData_3534_ = lean_ctor_get_uint8(v_state_3179_, sizeof(void*)*9);
v_expectData_3535_ = lean_ctor_get(v_state_3179_, 7);
v_pendingHead_3536_ = lean_ctor_get(v_state_3179_, 8);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_state_3179_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3538_ = v_state_3179_;
v_isShared_3539_ = v_isSharedCheck_3550_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_pendingHead_3536_);
lean_inc(v_expectData_3535_);
lean_inc(v_respStream_3533_);
lean_inc(v_response_3532_);
lean_inc(v_headerTimeout_3531_);
lean_inc(v_currentTimeout_3530_);
lean_inc(v_keepAliveTimeout_3529_);
lean_inc(v_requestStream_3528_);
lean_inc(v_machine_3527_);
lean_dec(v_state_3179_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3550_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; uint8_t v___x_3542_; lean_object* v___x_3544_; 
v___x_3540_ = lean_box(55);
v___x_3541_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3527_, v___x_3540_);
v___x_3542_ = 0;
if (v_isShared_3539_ == 0)
{
lean_ctor_set(v___x_3538_, 0, v___x_3541_);
v___x_3544_ = v___x_3538_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v___x_3541_);
lean_ctor_set(v_reuseFailAlloc_3549_, 1, v_requestStream_3528_);
lean_ctor_set(v_reuseFailAlloc_3549_, 2, v_keepAliveTimeout_3529_);
lean_ctor_set(v_reuseFailAlloc_3549_, 3, v_currentTimeout_3530_);
lean_ctor_set(v_reuseFailAlloc_3549_, 4, v_headerTimeout_3531_);
lean_ctor_set(v_reuseFailAlloc_3549_, 5, v_response_3532_);
lean_ctor_set(v_reuseFailAlloc_3549_, 6, v_respStream_3533_);
lean_ctor_set(v_reuseFailAlloc_3549_, 7, v_expectData_3535_);
lean_ctor_set(v_reuseFailAlloc_3549_, 8, v_pendingHead_3536_);
lean_ctor_set_uint8(v_reuseFailAlloc_3549_, sizeof(void*)*9, v_requiresData_3534_);
v___x_3544_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
lean_ctor_set_uint8(v___x_3544_, sizeof(void*)*9 + 1, v___x_3542_);
v___x_3545_ = lean_box(v___x_3542_);
v___x_3546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3544_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
v___x_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
v___x_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
return v___x_3548_;
}
}
}
default: 
{
lean_dec(v_event_3178_);
lean_dec_ref(v_config_3177_);
lean_dec(v_handler_3176_);
lean_dec_ref(v_inst_3175_);
lean_dec_ref(v_inst_3174_);
goto v___jp_3181_;
}
}
v___jp_3181_:
{
uint8_t v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3182_ = 1;
v___x_3183_ = lean_box(v___x_3182_);
v___x_3184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3184_, 0, v_state_3179_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
v___x_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
return v___x_3186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object* v_inst_3551_, lean_object* v_inst_3552_, lean_object* v_handler_3553_, lean_object* v_config_3554_, lean_object* v_event_3555_, lean_object* v_state_3556_, lean_object* v_a_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3551_, v_inst_3552_, v_handler_3553_, v_config_3554_, v_event_3555_, v_state_3556_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object* v_00_u03c3_3559_, lean_object* v_00_u03b2_3560_, lean_object* v_inst_3561_, lean_object* v_inst_3562_, lean_object* v_handler_3563_, lean_object* v_config_3564_, lean_object* v_event_3565_, lean_object* v_state_3566_){
_start:
{
lean_object* v___x_3568_; 
v___x_3568_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3561_, v_inst_3562_, v_handler_3563_, v_config_3564_, v_event_3565_, v_state_3566_);
return v___x_3568_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object* v_00_u03c3_3569_, lean_object* v_00_u03b2_3570_, lean_object* v_inst_3571_, lean_object* v_inst_3572_, lean_object* v_handler_3573_, lean_object* v_config_3574_, lean_object* v_event_3575_, lean_object* v_state_3576_, lean_object* v_a_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(v_00_u03c3_3569_, v_00_u03b2_3570_, v_inst_3571_, v_inst_3572_, v_handler_3573_, v_config_3574_, v_event_3575_, v_state_3576_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object* v_connectionContext_3579_, uint8_t v_handlerDispatched_3580_, lean_object* v_headerTimeout_3581_, lean_object* v_keepAliveTimeout_3582_, lean_object* v_respStream_3583_, lean_object* v_currentTimeout_3584_, lean_object* v_expectData_3585_, lean_object* v_response_3586_, lean_object* v_socket_3587_, uint8_t v_requiresData_3588_, uint8_t v_sentMessage_3589_, lean_object* v_reader_3590_, uint8_t v_requestBodyInterested_3591_, lean_object* v_requestBody_3592_){
_start:
{
lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3606_; 
if (v_requiresData_3588_ == 0)
{
if (v_handlerDispatched_3580_ == 0)
{
goto v___jp_3609_;
}
else
{
if (lean_obj_tag(v_respStream_3583_) == 0)
{
if (v_sentMessage_3589_ == 0)
{
lean_object* v_state_3613_; 
v_state_3613_ = lean_ctor_get(v_reader_3590_, 0);
if (lean_obj_tag(v_state_3613_) == 2)
{
if (v_requestBodyInterested_3591_ == 0)
{
lean_dec(v_socket_3587_);
goto v___jp_3611_;
}
else
{
goto v___jp_3609_;
}
}
else
{
lean_dec(v_socket_3587_);
goto v___jp_3611_;
}
}
else
{
goto v___jp_3609_;
}
}
else
{
goto v___jp_3609_;
}
}
}
else
{
goto v___jp_3609_;
}
v___jp_3594_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3602_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3602_, 0, v___y_3600_);
lean_ctor_set(v___x_3602_, 1, v___y_3599_);
lean_ctor_set(v___x_3602_, 2, v___y_3601_);
lean_ctor_set(v___x_3602_, 3, v___y_3597_);
lean_ctor_set(v___x_3602_, 4, v_requestBody_3592_);
lean_ctor_set(v___x_3602_, 5, v___y_3598_);
lean_ctor_set(v___x_3602_, 6, v___y_3596_);
lean_ctor_set(v___x_3602_, 7, v___y_3595_);
lean_ctor_set(v___x_3602_, 8, v_connectionContext_3579_);
v___x_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3603_, 0, v___x_3602_);
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
return v___x_3604_;
}
v___jp_3605_:
{
if (v_handlerDispatched_3580_ == 0)
{
lean_object* v___x_3607_; 
lean_dec_ref(v_response_3586_);
v___x_3607_ = lean_box(0);
v___y_3595_ = v_headerTimeout_3581_;
v___y_3596_ = v_keepAliveTimeout_3582_;
v___y_3597_ = v_respStream_3583_;
v___y_3598_ = v_currentTimeout_3584_;
v___y_3599_ = v_expectData_3585_;
v___y_3600_ = v___y_3606_;
v___y_3601_ = v___x_3607_;
goto v___jp_3594_;
}
else
{
lean_object* v___x_3608_; 
v___x_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3608_, 0, v_response_3586_);
v___y_3595_ = v_headerTimeout_3581_;
v___y_3596_ = v_keepAliveTimeout_3582_;
v___y_3597_ = v_respStream_3583_;
v___y_3598_ = v_currentTimeout_3584_;
v___y_3599_ = v_expectData_3585_;
v___y_3600_ = v___y_3606_;
v___y_3601_ = v___x_3608_;
goto v___jp_3594_;
}
}
v___jp_3609_:
{
lean_object* v___x_3610_; 
v___x_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3610_, 0, v_socket_3587_);
v___y_3606_ = v___x_3610_;
goto v___jp_3605_;
}
v___jp_3611_:
{
lean_object* v___x_3612_; 
v___x_3612_ = lean_box(0);
v___y_3606_ = v___x_3612_;
goto v___jp_3605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object* v_connectionContext_3614_, lean_object* v_handlerDispatched_3615_, lean_object* v_headerTimeout_3616_, lean_object* v_keepAliveTimeout_3617_, lean_object* v_respStream_3618_, lean_object* v_currentTimeout_3619_, lean_object* v_expectData_3620_, lean_object* v_response_3621_, lean_object* v_socket_3622_, lean_object* v_requiresData_3623_, lean_object* v_sentMessage_3624_, lean_object* v_reader_3625_, lean_object* v_requestBodyInterested_3626_, lean_object* v_requestBody_3627_, lean_object* v___y_3628_){
_start:
{
uint8_t v_handlerDispatched_boxed_3629_; uint8_t v_requiresData_boxed_3630_; uint8_t v_sentMessage_boxed_3631_; uint8_t v_requestBodyInterested_boxed_3632_; lean_object* v_res_3633_; 
v_handlerDispatched_boxed_3629_ = lean_unbox(v_handlerDispatched_3615_);
v_requiresData_boxed_3630_ = lean_unbox(v_requiresData_3623_);
v_sentMessage_boxed_3631_ = lean_unbox(v_sentMessage_3624_);
v_requestBodyInterested_boxed_3632_ = lean_unbox(v_requestBodyInterested_3626_);
v_res_3633_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(v_connectionContext_3614_, v_handlerDispatched_boxed_3629_, v_headerTimeout_3616_, v_keepAliveTimeout_3617_, v_respStream_3618_, v_currentTimeout_3619_, v_expectData_3620_, v_response_3621_, v_socket_3622_, v_requiresData_boxed_3630_, v_sentMessage_boxed_3631_, v_reader_3625_, v_requestBodyInterested_boxed_3632_, v_requestBody_3627_);
lean_dec_ref(v_reader_3625_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object* v___f_3634_, lean_object* v_x_3635_){
_start:
{
if (lean_obj_tag(v_x_3635_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3645_; 
lean_dec_ref(v___f_3634_);
v_a_3637_ = lean_ctor_get(v_x_3635_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v_x_3635_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3639_ = v_x_3635_;
v_isShared_3640_ = v_isSharedCheck_3645_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v_x_3635_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3645_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
lean_object* v___x_3643_; 
v___x_3643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
return v___x_3643_;
}
}
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3647_; 
v_a_3646_ = lean_ctor_get(v_x_3635_, 0);
lean_inc(v_a_3646_);
lean_dec_ref_known(v_x_3635_, 1);
v___x_3647_ = lean_apply_2(v___f_3634_, v_a_3646_, lean_box(0));
return v___x_3647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object* v___f_3648_, lean_object* v_x_3649_, lean_object* v___y_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(v___f_3648_, v_x_3649_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object* v_connectionContext_3656_, uint8_t v_handlerDispatched_3657_, lean_object* v_headerTimeout_3658_, lean_object* v_keepAliveTimeout_3659_, lean_object* v_respStream_3660_, lean_object* v_currentTimeout_3661_, lean_object* v_expectData_3662_, lean_object* v_response_3663_, lean_object* v_socket_3664_, uint8_t v_requiresData_3665_, uint8_t v_sentMessage_3666_, lean_object* v_reader_3667_, uint8_t v_pullBodyStalled_3668_, uint8_t v_requestBodyOpen_3669_, lean_object* v_requestStream_3670_, uint8_t v_requestBodyInterested_3671_){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___f_3677_; lean_object* v___f_3678_; 
v___x_3673_ = lean_box(v_handlerDispatched_3657_);
v___x_3674_ = lean_box(v_requiresData_3665_);
v___x_3675_ = lean_box(v_sentMessage_3666_);
v___x_3676_ = lean_box(v_requestBodyInterested_3671_);
lean_inc_ref(v_reader_3667_);
v___f_3677_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed), 15, 13);
lean_closure_set(v___f_3677_, 0, v_connectionContext_3656_);
lean_closure_set(v___f_3677_, 1, v___x_3673_);
lean_closure_set(v___f_3677_, 2, v_headerTimeout_3658_);
lean_closure_set(v___f_3677_, 3, v_keepAliveTimeout_3659_);
lean_closure_set(v___f_3677_, 4, v_respStream_3660_);
lean_closure_set(v___f_3677_, 5, v_currentTimeout_3661_);
lean_closure_set(v___f_3677_, 6, v_expectData_3662_);
lean_closure_set(v___f_3677_, 7, v_response_3663_);
lean_closure_set(v___f_3677_, 8, v_socket_3664_);
lean_closure_set(v___f_3677_, 9, v___x_3674_);
lean_closure_set(v___f_3677_, 10, v___x_3675_);
lean_closure_set(v___f_3677_, 11, v_reader_3667_);
lean_closure_set(v___f_3677_, 12, v___x_3676_);
v___f_3678_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3678_, 0, v___f_3677_);
if (v_sentMessage_3666_ == 0)
{
lean_object* v_state_3684_; 
v_state_3684_ = lean_ctor_get(v_reader_3667_, 0);
lean_inc(v_state_3684_);
lean_dec_ref(v_reader_3667_);
if (lean_obj_tag(v_state_3684_) == 2)
{
lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3695_; 
v_isSharedCheck_3695_ = !lean_is_exclusive(v_state_3684_);
if (v_isSharedCheck_3695_ == 0)
{
lean_object* v_unused_3696_; 
v_unused_3696_ = lean_ctor_get(v_state_3684_, 0);
lean_dec(v_unused_3696_);
v___x_3686_ = v_state_3684_;
v_isShared_3687_ = v_isSharedCheck_3695_;
goto v_resetjp_3685_;
}
else
{
lean_dec(v_state_3684_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3695_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
if (v_pullBodyStalled_3668_ == 0)
{
if (v_requestBodyOpen_3669_ == 0)
{
lean_del_object(v___x_3686_);
lean_dec_ref(v_requestStream_3670_);
goto v___jp_3679_;
}
else
{
lean_object* v___x_3689_; 
if (v_isShared_3687_ == 0)
{
lean_ctor_set_tag(v___x_3686_, 1);
lean_ctor_set(v___x_3686_, 0, v_requestStream_3670_);
v___x_3689_ = v___x_3686_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_requestStream_3670_);
v___x_3689_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3690_ = lean_unsigned_to_nat(0u);
v___x_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3689_);
v___x_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3691_);
v___x_3693_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3690_, v_pullBodyStalled_3668_, v___x_3692_, v___f_3678_);
return v___x_3693_;
}
}
}
else
{
lean_del_object(v___x_3686_);
lean_dec_ref(v_requestStream_3670_);
goto v___jp_3679_;
}
}
}
else
{
lean_dec(v_state_3684_);
lean_dec_ref(v_requestStream_3670_);
goto v___jp_3679_;
}
}
else
{
lean_dec_ref(v_requestStream_3670_);
lean_dec_ref(v_reader_3667_);
goto v___jp_3679_;
}
v___jp_3679_:
{
lean_object* v___x_3680_; uint8_t v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3680_ = lean_unsigned_to_nat(0u);
v___x_3681_ = 0;
v___x_3682_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1));
v___x_3683_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3680_, v___x_3681_, v___x_3682_, v___f_3678_);
return v___x_3683_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_connectionContext_3697_ = _args[0];
lean_object* v_handlerDispatched_3698_ = _args[1];
lean_object* v_headerTimeout_3699_ = _args[2];
lean_object* v_keepAliveTimeout_3700_ = _args[3];
lean_object* v_respStream_3701_ = _args[4];
lean_object* v_currentTimeout_3702_ = _args[5];
lean_object* v_expectData_3703_ = _args[6];
lean_object* v_response_3704_ = _args[7];
lean_object* v_socket_3705_ = _args[8];
lean_object* v_requiresData_3706_ = _args[9];
lean_object* v_sentMessage_3707_ = _args[10];
lean_object* v_reader_3708_ = _args[11];
lean_object* v_pullBodyStalled_3709_ = _args[12];
lean_object* v_requestBodyOpen_3710_ = _args[13];
lean_object* v_requestStream_3711_ = _args[14];
lean_object* v_requestBodyInterested_3712_ = _args[15];
lean_object* v___y_3713_ = _args[16];
_start:
{
uint8_t v_handlerDispatched_boxed_3714_; uint8_t v_requiresData_boxed_3715_; uint8_t v_sentMessage_boxed_3716_; uint8_t v_pullBodyStalled_boxed_3717_; uint8_t v_requestBodyOpen_boxed_3718_; uint8_t v_requestBodyInterested_boxed_3719_; lean_object* v_res_3720_; 
v_handlerDispatched_boxed_3714_ = lean_unbox(v_handlerDispatched_3698_);
v_requiresData_boxed_3715_ = lean_unbox(v_requiresData_3706_);
v_sentMessage_boxed_3716_ = lean_unbox(v_sentMessage_3707_);
v_pullBodyStalled_boxed_3717_ = lean_unbox(v_pullBodyStalled_3709_);
v_requestBodyOpen_boxed_3718_ = lean_unbox(v_requestBodyOpen_3710_);
v_requestBodyInterested_boxed_3719_ = lean_unbox(v_requestBodyInterested_3712_);
v_res_3720_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(v_connectionContext_3697_, v_handlerDispatched_boxed_3714_, v_headerTimeout_3699_, v_keepAliveTimeout_3700_, v_respStream_3701_, v_currentTimeout_3702_, v_expectData_3703_, v_response_3704_, v_socket_3705_, v_requiresData_boxed_3715_, v_sentMessage_boxed_3716_, v_reader_3708_, v_pullBodyStalled_boxed_3717_, v_requestBodyOpen_boxed_3718_, v_requestStream_3711_, v_requestBodyInterested_boxed_3719_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object* v___f_3721_, lean_object* v_x_3722_){
_start:
{
if (lean_obj_tag(v_x_3722_) == 0)
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3732_; 
lean_dec_ref(v___f_3721_);
v_a_3724_ = lean_ctor_get(v_x_3722_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_x_3722_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3726_ = v_x_3722_;
v_isShared_3727_ = v_isSharedCheck_3732_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v_x_3722_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3732_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3729_; 
if (v_isShared_3727_ == 0)
{
v___x_3729_ = v___x_3726_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_a_3724_);
v___x_3729_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
lean_object* v___x_3730_; 
v___x_3730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3729_);
return v___x_3730_;
}
}
}
else
{
lean_object* v_a_3733_; lean_object* v___x_3734_; 
v_a_3733_ = lean_ctor_get(v_x_3722_, 0);
lean_inc(v_a_3733_);
lean_dec_ref_known(v_x_3722_, 1);
v___x_3734_ = lean_apply_2(v___f_3721_, v_a_3733_, lean_box(0));
return v___x_3734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object* v___f_3735_, lean_object* v_x_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v_res_3738_; 
v_res_3738_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(v___f_3735_, v_x_3736_);
return v_res_3738_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object* v_connectionContext_3744_, uint8_t v_handlerDispatched_3745_, lean_object* v_headerTimeout_3746_, lean_object* v_keepAliveTimeout_3747_, lean_object* v_respStream_3748_, lean_object* v_currentTimeout_3749_, lean_object* v_expectData_3750_, lean_object* v_response_3751_, lean_object* v_socket_3752_, uint8_t v_requiresData_3753_, uint8_t v_sentMessage_3754_, lean_object* v_reader_3755_, uint8_t v_pullBodyStalled_3756_, lean_object* v_requestStream_3757_, uint8_t v_requestBodyOpen_3758_){
_start:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___f_3765_; lean_object* v___f_3766_; 
v___x_3760_ = lean_box(v_handlerDispatched_3745_);
v___x_3761_ = lean_box(v_requiresData_3753_);
v___x_3762_ = lean_box(v_sentMessage_3754_);
v___x_3763_ = lean_box(v_pullBodyStalled_3756_);
v___x_3764_ = lean_box(v_requestBodyOpen_3758_);
lean_inc_ref(v_requestStream_3757_);
lean_inc_ref(v_reader_3755_);
v___f_3765_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed), 17, 15);
lean_closure_set(v___f_3765_, 0, v_connectionContext_3744_);
lean_closure_set(v___f_3765_, 1, v___x_3760_);
lean_closure_set(v___f_3765_, 2, v_headerTimeout_3746_);
lean_closure_set(v___f_3765_, 3, v_keepAliveTimeout_3747_);
lean_closure_set(v___f_3765_, 4, v_respStream_3748_);
lean_closure_set(v___f_3765_, 5, v_currentTimeout_3749_);
lean_closure_set(v___f_3765_, 6, v_expectData_3750_);
lean_closure_set(v___f_3765_, 7, v_response_3751_);
lean_closure_set(v___f_3765_, 8, v_socket_3752_);
lean_closure_set(v___f_3765_, 9, v___x_3761_);
lean_closure_set(v___f_3765_, 10, v___x_3762_);
lean_closure_set(v___f_3765_, 11, v_reader_3755_);
lean_closure_set(v___f_3765_, 12, v___x_3763_);
lean_closure_set(v___f_3765_, 13, v___x_3764_);
lean_closure_set(v___f_3765_, 14, v_requestStream_3757_);
v___f_3766_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3766_, 0, v___f_3765_);
if (v_sentMessage_3754_ == 0)
{
lean_object* v_state_3772_; 
v_state_3772_ = lean_ctor_get(v_reader_3755_, 0);
lean_inc(v_state_3772_);
lean_dec_ref(v_reader_3755_);
if (lean_obj_tag(v_state_3772_) == 2)
{
lean_dec_ref_known(v_state_3772_, 1);
if (v_requestBodyOpen_3758_ == 0)
{
lean_dec_ref(v_requestStream_3757_);
goto v___jp_3767_;
}
else
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3773_ = lean_unsigned_to_nat(0u);
v___x_3774_ = l_Std_Http_Body_Stream_hasInterest(v_requestStream_3757_);
v___x_3775_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3773_, v_sentMessage_3754_, v___x_3774_, v___f_3766_);
return v___x_3775_;
}
}
else
{
lean_dec(v_state_3772_);
lean_dec_ref(v_requestStream_3757_);
goto v___jp_3767_;
}
}
else
{
lean_dec_ref(v_requestStream_3757_);
lean_dec_ref(v_reader_3755_);
goto v___jp_3767_;
}
v___jp_3767_:
{
uint8_t v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3768_ = 0;
v___x_3769_ = lean_unsigned_to_nat(0u);
v___x_3770_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__1));
v___x_3771_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3769_, v___x_3768_, v___x_3770_, v___f_3766_);
return v___x_3771_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object* v_connectionContext_3776_, lean_object* v_handlerDispatched_3777_, lean_object* v_headerTimeout_3778_, lean_object* v_keepAliveTimeout_3779_, lean_object* v_respStream_3780_, lean_object* v_currentTimeout_3781_, lean_object* v_expectData_3782_, lean_object* v_response_3783_, lean_object* v_socket_3784_, lean_object* v_requiresData_3785_, lean_object* v_sentMessage_3786_, lean_object* v_reader_3787_, lean_object* v_pullBodyStalled_3788_, lean_object* v_requestStream_3789_, lean_object* v_requestBodyOpen_3790_, lean_object* v___y_3791_){
_start:
{
uint8_t v_handlerDispatched_boxed_3792_; uint8_t v_requiresData_boxed_3793_; uint8_t v_sentMessage_boxed_3794_; uint8_t v_pullBodyStalled_boxed_3795_; uint8_t v_requestBodyOpen_boxed_3796_; lean_object* v_res_3797_; 
v_handlerDispatched_boxed_3792_ = lean_unbox(v_handlerDispatched_3777_);
v_requiresData_boxed_3793_ = lean_unbox(v_requiresData_3785_);
v_sentMessage_boxed_3794_ = lean_unbox(v_sentMessage_3786_);
v_pullBodyStalled_boxed_3795_ = lean_unbox(v_pullBodyStalled_3788_);
v_requestBodyOpen_boxed_3796_ = lean_unbox(v_requestBodyOpen_3790_);
v_res_3797_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(v_connectionContext_3776_, v_handlerDispatched_boxed_3792_, v_headerTimeout_3778_, v_keepAliveTimeout_3779_, v_respStream_3780_, v_currentTimeout_3781_, v_expectData_3782_, v_response_3783_, v_socket_3784_, v_requiresData_boxed_3793_, v_sentMessage_boxed_3794_, v_reader_3787_, v_pullBodyStalled_boxed_3795_, v_requestStream_3789_, v_requestBodyOpen_boxed_3796_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t v_sentMessage_3798_, lean_object* v___f_3799_, lean_object* v_x_3800_){
_start:
{
uint8_t v___y_3803_; 
if (lean_obj_tag(v_x_3800_) == 0)
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3817_; 
lean_dec_ref(v___f_3799_);
v_a_3809_ = lean_ctor_get(v_x_3800_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v_x_3800_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3811_ = v_x_3800_;
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v_x_3800_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3809_);
v___x_3814_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
lean_object* v___x_3815_; 
v___x_3815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3814_);
return v___x_3815_;
}
}
}
else
{
lean_object* v_a_3818_; uint8_t v___x_3819_; 
v_a_3818_ = lean_ctor_get(v_x_3800_, 0);
lean_inc(v_a_3818_);
lean_dec_ref_known(v_x_3800_, 1);
v___x_3819_ = lean_unbox(v_a_3818_);
lean_dec(v_a_3818_);
if (v___x_3819_ == 0)
{
uint8_t v___x_3820_; 
v___x_3820_ = 1;
v___y_3803_ = v___x_3820_;
goto v___jp_3802_;
}
else
{
v___y_3803_ = v_sentMessage_3798_;
goto v___jp_3802_;
}
}
v___jp_3802_:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3804_ = lean_unsigned_to_nat(0u);
v___x_3805_ = lean_box(v___y_3803_);
v___x_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3805_);
v___x_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3806_);
v___x_3808_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3804_, v_sentMessage_3798_, v___x_3807_, v___f_3799_);
return v___x_3808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object* v_sentMessage_3821_, lean_object* v___f_3822_, lean_object* v_x_3823_, lean_object* v___y_3824_){
_start:
{
uint8_t v_sentMessage_boxed_3825_; lean_object* v_res_3826_; 
v_sentMessage_boxed_3825_ = lean_unbox(v_sentMessage_3821_);
v_res_3826_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(v_sentMessage_boxed_3825_, v___f_3822_, v_x_3823_);
return v_res_3826_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0(void){
_start:
{
lean_object* v___f_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; 
v___f_3827_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___x_3828_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11);
v___x_3829_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___x_3830_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_3830_, 0, lean_box(0));
lean_closure_set(v___x_3830_, 1, lean_box(0));
lean_closure_set(v___x_3830_, 2, v___x_3829_);
lean_closure_set(v___x_3830_, 3, lean_box(0));
lean_closure_set(v___x_3830_, 4, lean_box(0));
lean_closure_set(v___x_3830_, 5, v___x_3828_);
lean_closure_set(v___x_3830_, 6, v___f_3827_);
return v___x_3830_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object* v_socket_3831_, lean_object* v_connectionContext_3832_, lean_object* v_state_3833_){
_start:
{
lean_object* v_machine_3835_; lean_object* v_writer_3836_; lean_object* v_requestStream_3837_; lean_object* v_keepAliveTimeout_3838_; lean_object* v_currentTimeout_3839_; lean_object* v_headerTimeout_3840_; lean_object* v_response_3841_; lean_object* v_respStream_3842_; uint8_t v_requiresData_3843_; lean_object* v_expectData_3844_; uint8_t v_handlerDispatched_3845_; lean_object* v_reader_3846_; uint8_t v_pullBodyStalled_3847_; uint8_t v_sentMessage_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___f_3853_; lean_object* v___f_3854_; 
v_machine_3835_ = lean_ctor_get(v_state_3833_, 0);
lean_inc_ref(v_machine_3835_);
v_writer_3836_ = lean_ctor_get(v_machine_3835_, 1);
lean_inc_ref(v_writer_3836_);
v_requestStream_3837_ = lean_ctor_get(v_state_3833_, 1);
lean_inc_ref_n(v_requestStream_3837_, 2);
v_keepAliveTimeout_3838_ = lean_ctor_get(v_state_3833_, 2);
lean_inc(v_keepAliveTimeout_3838_);
v_currentTimeout_3839_ = lean_ctor_get(v_state_3833_, 3);
lean_inc(v_currentTimeout_3839_);
v_headerTimeout_3840_ = lean_ctor_get(v_state_3833_, 4);
lean_inc(v_headerTimeout_3840_);
v_response_3841_ = lean_ctor_get(v_state_3833_, 5);
lean_inc_ref(v_response_3841_);
v_respStream_3842_ = lean_ctor_get(v_state_3833_, 6);
lean_inc(v_respStream_3842_);
v_requiresData_3843_ = lean_ctor_get_uint8(v_state_3833_, sizeof(void*)*9);
v_expectData_3844_ = lean_ctor_get(v_state_3833_, 7);
lean_inc(v_expectData_3844_);
v_handlerDispatched_3845_ = lean_ctor_get_uint8(v_state_3833_, sizeof(void*)*9 + 1);
lean_dec_ref(v_state_3833_);
v_reader_3846_ = lean_ctor_get(v_machine_3835_, 0);
lean_inc_ref_n(v_reader_3846_, 2);
v_pullBodyStalled_3847_ = lean_ctor_get_uint8(v_machine_3835_, sizeof(void*)*6 + 1);
lean_dec_ref(v_machine_3835_);
v_sentMessage_3848_ = lean_ctor_get_uint8(v_writer_3836_, sizeof(void*)*6);
lean_dec_ref(v_writer_3836_);
v___x_3849_ = lean_box(v_handlerDispatched_3845_);
v___x_3850_ = lean_box(v_requiresData_3843_);
v___x_3851_ = lean_box(v_sentMessage_3848_);
v___x_3852_ = lean_box(v_pullBodyStalled_3847_);
v___f_3853_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed), 16, 14);
lean_closure_set(v___f_3853_, 0, v_connectionContext_3832_);
lean_closure_set(v___f_3853_, 1, v___x_3849_);
lean_closure_set(v___f_3853_, 2, v_headerTimeout_3840_);
lean_closure_set(v___f_3853_, 3, v_keepAliveTimeout_3838_);
lean_closure_set(v___f_3853_, 4, v_respStream_3842_);
lean_closure_set(v___f_3853_, 5, v_currentTimeout_3839_);
lean_closure_set(v___f_3853_, 6, v_expectData_3844_);
lean_closure_set(v___f_3853_, 7, v_response_3841_);
lean_closure_set(v___f_3853_, 8, v_socket_3831_);
lean_closure_set(v___f_3853_, 9, v___x_3850_);
lean_closure_set(v___f_3853_, 10, v___x_3851_);
lean_closure_set(v___f_3853_, 11, v_reader_3846_);
lean_closure_set(v___f_3853_, 12, v___x_3852_);
lean_closure_set(v___f_3853_, 13, v_requestStream_3837_);
v___f_3854_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3854_, 0, v___f_3853_);
if (v_sentMessage_3848_ == 0)
{
lean_object* v_state_3860_; 
v_state_3860_ = lean_ctor_get(v_reader_3846_, 0);
lean_inc(v_state_3860_);
lean_dec_ref(v_reader_3846_);
if (lean_obj_tag(v_state_3860_) == 2)
{
lean_object* v___x_3861_; lean_object* v___f_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___f_3865_; lean_object* v___f_3866_; lean_object* v___x_3867_; lean_object* v___x_2599__overap_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
lean_dec_ref_known(v_state_3860_, 1);
v___x_3861_ = lean_box(v_sentMessage_3848_);
v___f_3862_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed), 4, 2);
lean_closure_set(v___f_3862_, 0, v___x_3861_);
lean_closure_set(v___f_3862_, 1, v___f_3854_);
v___x_3863_ = lean_unsigned_to_nat(0u);
v___x_3864_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___f_3865_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5);
v___f_3866_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6));
v___x_3867_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0);
v___x_2599__overap_3868_ = l_Std_Mutex_atomically___redArg(v___x_3864_, v___f_3865_, v___f_3866_, v_requestStream_3837_, v___x_3867_);
v___x_3869_ = lean_apply_1(v___x_2599__overap_3868_, lean_box(0));
v___x_3870_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3863_, v_sentMessage_3848_, v___x_3869_, v___f_3862_);
return v___x_3870_;
}
else
{
lean_dec(v_state_3860_);
lean_dec_ref(v_requestStream_3837_);
goto v___jp_3855_;
}
}
else
{
lean_dec_ref(v_reader_3846_);
lean_dec_ref(v_requestStream_3837_);
goto v___jp_3855_;
}
v___jp_3855_:
{
uint8_t v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3856_ = 0;
v___x_3857_ = lean_unsigned_to_nat(0u);
v___x_3858_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___closed__1));
v___x_3859_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3857_, v___x_3856_, v___x_3858_, v___f_3854_);
return v___x_3859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object* v_socket_3871_, lean_object* v_connectionContext_3872_, lean_object* v_state_3873_, lean_object* v_a_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_3871_, v_connectionContext_3872_, v_state_3873_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object* v_00_u03b1_3876_, lean_object* v_00_u03b2_3877_, lean_object* v_inst_3878_, lean_object* v_socket_3879_, lean_object* v_connectionContext_3880_, lean_object* v_state_3881_){
_start:
{
lean_object* v___x_3883_; 
v___x_3883_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_3879_, v_connectionContext_3880_, v_state_3881_);
return v___x_3883_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object* v_00_u03b1_3884_, lean_object* v_00_u03b2_3885_, lean_object* v_inst_3886_, lean_object* v_socket_3887_, lean_object* v_connectionContext_3888_, lean_object* v_state_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(v_00_u03b1_3884_, v_00_u03b2_3885_, v_inst_3886_, v_socket_3887_, v_connectionContext_3888_, v_state_3889_);
lean_dec_ref(v_inst_3886_);
return v_res_3891_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput(lean_object* v_x_3892_){
_start:
{
switch(lean_obj_tag(v_x_3892_))
{
case 0:
{
lean_object* v_head_3893_; uint8_t v_method_3894_; uint8_t v___x_3895_; 
v_head_3893_ = lean_ctor_get(v_x_3892_, 0);
v_method_3894_ = lean_ctor_get_uint8(v_head_3893_, sizeof(void*)*2);
v___x_3895_ = l_Std_Http_Method_isSafe(v_method_3894_);
if (v___x_3895_ == 0)
{
uint8_t v___x_3896_; 
v___x_3896_ = 1;
return v___x_3896_;
}
else
{
uint8_t v___x_3897_; 
v___x_3897_ = 0;
return v___x_3897_;
}
}
case 7:
{
uint8_t v___x_3898_; 
v___x_3898_ = 1;
return v___x_3898_;
}
default: 
{
uint8_t v___x_3899_; 
v___x_3899_ = 0;
return v___x_3899_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput___boxed(lean_object* v_x_3900_){
_start:
{
uint8_t v_res_3901_; lean_object* v_r_3902_; 
v_res_3901_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput(v_x_3900_);
lean_dec(v_x_3900_);
v_r_3902_ = lean_box(v_res_3901_);
return v_r_3902_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0(lean_object* v_inst_3903_, lean_object* v_handler_3904_, lean_object* v_x_3905_){
_start:
{
if (lean_obj_tag(v_x_3905_) == 0)
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3915_; 
lean_dec(v_handler_3904_);
lean_dec_ref(v_inst_3903_);
v_a_3907_ = lean_ctor_get(v_x_3905_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v_x_3905_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3909_ = v_x_3905_;
v_isShared_3910_ = v_isSharedCheck_3915_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v_x_3905_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3915_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3912_; 
if (v_isShared_3910_ == 0)
{
v___x_3912_ = v___x_3909_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3907_);
v___x_3912_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
lean_object* v___x_3913_; 
v___x_3913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3913_, 0, v___x_3912_);
return v___x_3913_;
}
}
}
else
{
lean_object* v_a_3916_; 
v_a_3916_ = lean_ctor_get(v_x_3905_, 0);
lean_inc(v_a_3916_);
lean_dec_ref_known(v_x_3905_, 1);
if (lean_obj_tag(v_a_3916_) == 1)
{
lean_object* v_val_3917_; lean_object* v_onFailure_3918_; lean_object* v___x_3919_; 
v_val_3917_ = lean_ctor_get(v_a_3916_, 0);
lean_inc(v_val_3917_);
lean_dec_ref_known(v_a_3916_, 1);
v_onFailure_3918_ = lean_ctor_get(v_inst_3903_, 2);
lean_inc_ref(v_onFailure_3918_);
lean_dec_ref(v_inst_3903_);
v___x_3919_ = lean_apply_3(v_onFailure_3918_, v_handler_3904_, v_val_3917_, lean_box(0));
return v___x_3919_;
}
else
{
lean_object* v___x_3920_; 
lean_dec(v_a_3916_);
lean_dec(v_handler_3904_);
lean_dec_ref(v_inst_3903_);
v___x_3920_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___closed__1));
return v___x_3920_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0___boxed(lean_object* v_inst_3921_, lean_object* v_handler_3922_, lean_object* v_x_3923_, lean_object* v___y_3924_){
_start:
{
lean_object* v_res_3925_; 
v_res_3925_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0(v_inst_3921_, v_handler_3922_, v_x_3923_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(lean_object* v_inst_3926_, lean_object* v_handler_3927_, lean_object* v_outbox_3928_){
_start:
{
lean_object* v___f_3930_; lean_object* v___x_3931_; uint8_t v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
v___f_3930_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3930_, 0, v_inst_3926_);
lean_closure_set(v___f_3930_, 1, v_handler_3927_);
v___x_3931_ = lean_unsigned_to_nat(0u);
v___x_3932_ = 0;
v___x_3933_ = l_Std_Http_Internal_Outbox_takeError_x3f___redArg(v_outbox_3928_);
v___x_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
v___x_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3934_);
v___x_3936_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3931_, v___x_3932_, v___x_3935_, v___f_3930_);
return v___x_3936_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___boxed(lean_object* v_inst_3937_, lean_object* v_handler_3938_, lean_object* v_outbox_3939_, lean_object* v_a_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_inst_3937_, v_handler_3938_, v_outbox_3939_);
lean_dec_ref(v_outbox_3939_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure(lean_object* v_00_u03c3_3942_, lean_object* v_00_u03b1_3943_, lean_object* v_inst_3944_, lean_object* v_handler_3945_, lean_object* v_outbox_3946_){
_start:
{
lean_object* v___x_3948_; 
v___x_3948_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_inst_3944_, v_handler_3945_, v_outbox_3946_);
return v___x_3948_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___boxed(lean_object* v_00_u03c3_3949_, lean_object* v_00_u03b1_3950_, lean_object* v_inst_3951_, lean_object* v_handler_3952_, lean_object* v_outbox_3953_, lean_object* v_a_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure(v_00_u03c3_3949_, v_00_u03b1_3950_, v_inst_3951_, v_handler_3952_, v_outbox_3953_);
lean_dec_ref(v_outbox_3953_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object* v_x_3956_){
_start:
{
if (lean_obj_tag(v_x_3956_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3966_; 
v_a_3958_ = lean_ctor_get(v_x_3956_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v_x_3956_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3960_ = v_x_3956_;
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v_x_3956_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
return v___x_3964_;
}
}
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3985_; 
v_a_3967_ = lean_ctor_get(v_x_3956_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v_x_3956_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3969_ = v_x_3956_;
v_isShared_3970_ = v_isSharedCheck_3985_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v_x_3956_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3985_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v_snd_3971_; uint8_t v___x_3972_; 
v_snd_3971_ = lean_ctor_get(v_a_3967_, 1);
v___x_3972_ = lean_unbox(v_snd_3971_);
if (v___x_3972_ == 0)
{
lean_object* v_fst_3973_; lean_object* v___x_3974_; lean_object* v___x_3976_; 
v_fst_3973_ = lean_ctor_get(v_a_3967_, 0);
lean_inc(v_fst_3973_);
lean_dec(v_a_3967_);
v___x_3974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3974_, 0, v_fst_3973_);
if (v_isShared_3970_ == 0)
{
lean_ctor_set(v___x_3969_, 0, v___x_3974_);
v___x_3976_ = v___x_3969_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v___x_3974_);
v___x_3976_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
return v___x_3977_;
}
}
else
{
lean_object* v_fst_3979_; lean_object* v___x_3980_; lean_object* v___x_3982_; 
v_fst_3979_ = lean_ctor_get(v_a_3967_, 0);
lean_inc(v_fst_3979_);
lean_dec(v_a_3967_);
v___x_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3980_, 0, v_fst_3979_);
if (v_isShared_3970_ == 0)
{
lean_ctor_set(v___x_3969_, 0, v___x_3980_);
v___x_3982_ = v___x_3969_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v___x_3980_);
v___x_3982_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
lean_object* v___x_3983_; 
v___x_3983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3983_, 0, v___x_3982_);
return v___x_3983_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object* v_x_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(v_x_3986_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object* v_inst_3989_, lean_object* v_socket_3990_, lean_object* v_x_3991_){
_start:
{
lean_object* v_val_3994_; 
if (lean_obj_tag(v_x_3991_) == 0)
{
lean_object* v___x_3996_; 
lean_dec(v_socket_3990_);
lean_dec_ref(v_inst_3989_);
v___x_3996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3996_, 0, v_x_3991_);
return v___x_3996_;
}
else
{
lean_object* v___x_3998_; uint8_t v_isShared_3999_; uint8_t v_isSharedCheck_4010_; 
v_isSharedCheck_4010_ = !lean_is_exclusive(v_x_3991_);
if (v_isSharedCheck_4010_ == 0)
{
lean_object* v_unused_4011_; 
v_unused_4011_ = lean_ctor_get(v_x_3991_, 0);
lean_dec(v_unused_4011_);
v___x_3998_ = v_x_3991_;
v_isShared_3999_ = v_isSharedCheck_4010_;
goto v_resetjp_3997_;
}
else
{
lean_dec(v_x_3991_);
v___x_3998_ = lean_box(0);
v_isShared_3999_ = v_isSharedCheck_4010_;
goto v_resetjp_3997_;
}
v_resetjp_3997_:
{
lean_object* v_close_4000_; lean_object* v___x_4001_; 
v_close_4000_ = lean_ctor_get(v_inst_3989_, 3);
lean_inc_ref(v_close_4000_);
lean_dec_ref(v_inst_3989_);
v___x_4001_ = lean_apply_2(v_close_4000_, v_socket_3990_, lean_box(0));
if (lean_obj_tag(v___x_4001_) == 0)
{
lean_object* v_a_4002_; lean_object* v___x_4004_; 
v_a_4002_ = lean_ctor_get(v___x_4001_, 0);
lean_inc(v_a_4002_);
lean_dec_ref_known(v___x_4001_, 1);
if (v_isShared_3999_ == 0)
{
lean_ctor_set(v___x_3998_, 0, v_a_4002_);
v___x_4004_ = v___x_3998_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v_a_4002_);
v___x_4004_ = v_reuseFailAlloc_4005_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
v_val_3994_ = v___x_4004_;
goto v___jp_3993_;
}
}
else
{
lean_object* v_a_4006_; lean_object* v___x_4008_; 
v_a_4006_ = lean_ctor_get(v___x_4001_, 0);
lean_inc(v_a_4006_);
lean_dec_ref_known(v___x_4001_, 1);
if (v_isShared_3999_ == 0)
{
lean_ctor_set_tag(v___x_3998_, 0);
lean_ctor_set(v___x_3998_, 0, v_a_4006_);
v___x_4008_ = v___x_3998_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v_a_4006_);
v___x_4008_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
v_val_3994_ = v___x_4008_;
goto v___jp_3993_;
}
}
}
}
v___jp_3993_:
{
lean_object* v___x_3995_; 
v___x_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3995_, 0, v_val_3994_);
return v___x_3995_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object* v_inst_4012_, lean_object* v_socket_4013_, lean_object* v_x_4014_, lean_object* v___y_4015_){
_start:
{
lean_object* v_res_4016_; 
v_res_4016_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(v_inst_4012_, v_socket_4013_, v_x_4014_);
return v_res_4016_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object* v_h_4017_, lean_object* v_responseBodyInstance_4018_, lean_object* v_handler_4019_, lean_object* v_config_4020_, lean_object* v_a_4021_, lean_object* v___x_4022_, uint8_t v___x_4023_, lean_object* v___f_4024_, lean_object* v_____r_4025_){
_start:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___x_4027_ = lean_unsigned_to_nat(0u);
v___x_4028_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_h_4017_, v_responseBodyInstance_4018_, v_handler_4019_, v_config_4020_, v_a_4021_, v___x_4022_);
v___x_4029_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4027_, v___x_4023_, v___x_4028_, v___f_4024_);
return v___x_4029_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object* v_h_4030_, lean_object* v_responseBodyInstance_4031_, lean_object* v_handler_4032_, lean_object* v_config_4033_, lean_object* v_a_4034_, lean_object* v___x_4035_, lean_object* v___x_4036_, lean_object* v___f_4037_, lean_object* v_____r_4038_, lean_object* v___y_4039_){
_start:
{
uint8_t v___x_7742__boxed_4040_; lean_object* v_res_4041_; 
v___x_7742__boxed_4040_ = lean_unbox(v___x_4036_);
v_res_4041_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_h_4030_, v_responseBodyInstance_4031_, v_handler_4032_, v_config_4033_, v_a_4034_, v___x_4035_, v___x_7742__boxed_4040_, v___f_4037_, v_____r_4038_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object* v___f_4042_, lean_object* v_a_4043_, uint8_t v___x_4044_, lean_object* v___f_4045_, lean_object* v_x_4046_){
_start:
{
if (lean_obj_tag(v_x_4046_) == 0)
{
lean_object* v_a_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4056_; 
lean_dec_ref(v___f_4045_);
lean_dec_ref(v___f_4042_);
v_a_4048_ = lean_ctor_get(v_x_4046_, 0);
v_isSharedCheck_4056_ = !lean_is_exclusive(v_x_4046_);
if (v_isSharedCheck_4056_ == 0)
{
v___x_4050_ = v_x_4046_;
v_isShared_4051_ = v_isSharedCheck_4056_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_a_4048_);
lean_dec(v_x_4046_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4056_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v_a_4048_);
v___x_4053_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
lean_object* v___x_4054_; 
v___x_4054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4054_, 0, v___x_4053_);
return v___x_4054_;
}
}
}
else
{
lean_object* v_a_4057_; uint8_t v___x_4058_; 
v_a_4057_ = lean_ctor_get(v_x_4046_, 0);
lean_inc(v_a_4057_);
lean_dec_ref_known(v_x_4046_, 1);
v___x_4058_ = lean_unbox(v_a_4057_);
lean_dec(v_a_4057_);
if (v___x_4058_ == 0)
{
lean_object* v___x_4059_; lean_object* v___x_4060_; 
lean_dec_ref(v___f_4045_);
v___x_4059_ = lean_box(0);
v___x_4060_ = lean_apply_2(v___f_4042_, v___x_4059_, lean_box(0));
return v___x_4060_;
}
else
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
lean_dec_ref(v___f_4042_);
v___x_4061_ = lean_unsigned_to_nat(0u);
v___x_4062_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_a_4043_);
v___x_4063_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4061_, v___x_4044_, v___x_4062_, v___f_4045_);
return v___x_4063_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object* v___f_4064_, lean_object* v_a_4065_, lean_object* v___x_4066_, lean_object* v___f_4067_, lean_object* v_x_4068_, lean_object* v___y_4069_){
_start:
{
uint8_t v___x_7766__boxed_4070_; lean_object* v_res_4071_; 
v___x_7766__boxed_4070_ = lean_unbox(v___x_4066_);
v_res_4071_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(v___f_4064_, v_a_4065_, v___x_7766__boxed_4070_, v___f_4067_, v_x_4068_);
lean_dec_ref(v_a_4065_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object* v_h_4072_, lean_object* v_responseBodyInstance_4073_, lean_object* v_handler_4074_, lean_object* v_config_4075_, lean_object* v___x_4076_, uint8_t v___x_4077_, lean_object* v___f_4078_, lean_object* v_a_4079_, lean_object* v___f_4080_, lean_object* v_x_4081_){
_start:
{
if (lean_obj_tag(v_x_4081_) == 0)
{
lean_object* v_a_4083_; lean_object* v___x_4085_; uint8_t v_isShared_4086_; uint8_t v_isSharedCheck_4091_; 
lean_dec_ref(v___f_4080_);
lean_dec_ref(v_a_4079_);
lean_dec_ref(v___f_4078_);
lean_dec_ref(v___x_4076_);
lean_dec_ref(v_config_4075_);
lean_dec(v_handler_4074_);
lean_dec_ref(v_responseBodyInstance_4073_);
lean_dec_ref(v_h_4072_);
v_a_4083_ = lean_ctor_get(v_x_4081_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v_x_4081_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4085_ = v_x_4081_;
v_isShared_4086_ = v_isSharedCheck_4091_;
goto v_resetjp_4084_;
}
else
{
lean_inc(v_a_4083_);
lean_dec(v_x_4081_);
v___x_4085_ = lean_box(0);
v_isShared_4086_ = v_isSharedCheck_4091_;
goto v_resetjp_4084_;
}
v_resetjp_4084_:
{
lean_object* v___x_4088_; 
if (v_isShared_4086_ == 0)
{
v___x_4088_ = v___x_4085_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v_a_4083_);
v___x_4088_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
lean_object* v___x_4089_; 
v___x_4089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
return v___x_4089_;
}
}
}
else
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4110_; 
v_a_4092_ = lean_ctor_get(v_x_4081_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v_x_4081_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4094_ = v_x_4081_;
v_isShared_4095_ = v_isSharedCheck_4110_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v_x_4081_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4110_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4096_; lean_object* v___f_4097_; 
v___x_4096_ = lean_box(v___x_4077_);
lean_inc_ref(v___f_4078_);
lean_inc_ref(v___x_4076_);
lean_inc(v_a_4092_);
lean_inc_ref(v_config_4075_);
lean_inc(v_handler_4074_);
lean_inc_ref(v_responseBodyInstance_4073_);
lean_inc_ref(v_h_4072_);
v___f_4097_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed), 10, 8);
lean_closure_set(v___f_4097_, 0, v_h_4072_);
lean_closure_set(v___f_4097_, 1, v_responseBodyInstance_4073_);
lean_closure_set(v___f_4097_, 2, v_handler_4074_);
lean_closure_set(v___f_4097_, 3, v_config_4075_);
lean_closure_set(v___f_4097_, 4, v_a_4092_);
lean_closure_set(v___f_4097_, 5, v___x_4076_);
lean_closure_set(v___f_4097_, 6, v___x_4096_);
lean_closure_set(v___f_4097_, 7, v___f_4078_);
if (lean_obj_tag(v_a_4092_) == 5)
{
lean_object* v___x_4098_; lean_object* v___f_4099_; lean_object* v___x_4100_; uint8_t v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4104_; 
lean_dec_ref(v___f_4078_);
lean_dec_ref(v___x_4076_);
lean_dec_ref(v_config_4075_);
lean_dec(v_handler_4074_);
lean_dec_ref(v_responseBodyInstance_4073_);
lean_dec_ref(v_h_4072_);
v___x_4098_ = lean_box(v___x_4077_);
lean_inc_ref(v_a_4079_);
v___f_4099_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_4099_, 0, v___f_4097_);
lean_closure_set(v___f_4099_, 1, v_a_4079_);
lean_closure_set(v___f_4099_, 2, v___x_4098_);
lean_closure_set(v___f_4099_, 3, v___f_4080_);
v___x_4100_ = lean_unsigned_to_nat(0u);
v___x_4101_ = l_Std_Http_Internal_Outbox_writing___redArg(v_a_4079_);
lean_dec_ref(v_a_4079_);
v___x_4102_ = lean_box(v___x_4101_);
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v___x_4102_);
v___x_4104_ = v___x_4094_;
goto v_reusejp_4103_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v___x_4102_);
v___x_4104_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4103_;
}
v_reusejp_4103_:
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4104_);
v___x_4106_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4100_, v___x_4077_, v___x_4105_, v___f_4099_);
return v___x_4106_;
}
}
else
{
lean_object* v___x_4108_; lean_object* v___x_4109_; 
lean_dec_ref(v___f_4097_);
lean_del_object(v___x_4094_);
lean_dec_ref(v___f_4080_);
lean_dec_ref(v_a_4079_);
v___x_4108_ = lean_box(0);
v___x_4109_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_h_4072_, v_responseBodyInstance_4073_, v_handler_4074_, v_config_4075_, v_a_4092_, v___x_4076_, v___x_4077_, v___f_4078_, v___x_4108_);
return v___x_4109_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object* v_h_4111_, lean_object* v_responseBodyInstance_4112_, lean_object* v_handler_4113_, lean_object* v_config_4114_, lean_object* v___x_4115_, lean_object* v___x_4116_, lean_object* v___f_4117_, lean_object* v_a_4118_, lean_object* v___f_4119_, lean_object* v_x_4120_, lean_object* v___y_4121_){
_start:
{
uint8_t v___x_7815__boxed_4122_; lean_object* v_res_4123_; 
v___x_7815__boxed_4122_ = lean_unbox(v___x_4116_);
v_res_4123_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(v_h_4111_, v_responseBodyInstance_4112_, v_handler_4113_, v_config_4114_, v___x_4115_, v___x_7815__boxed_4122_, v___f_4117_, v_a_4118_, v___f_4119_, v_x_4120_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object* v_inst_4124_, lean_object* v_h_4125_, lean_object* v_responseBodyInstance_4126_, lean_object* v_config_4127_, lean_object* v_handler_4128_, uint8_t v___x_4129_, lean_object* v___f_4130_, lean_object* v_x_4131_){
_start:
{
if (lean_obj_tag(v_x_4131_) == 0)
{
lean_object* v_a_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4141_; 
lean_dec_ref(v___f_4130_);
lean_dec(v_handler_4128_);
lean_dec_ref(v_config_4127_);
lean_dec_ref(v_responseBodyInstance_4126_);
lean_dec_ref(v_h_4125_);
lean_dec_ref(v_inst_4124_);
v_a_4133_ = lean_ctor_get(v_x_4131_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v_x_4131_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4135_ = v_x_4131_;
v_isShared_4136_ = v_isSharedCheck_4141_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_a_4133_);
lean_dec(v_x_4131_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4141_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4138_; 
if (v_isShared_4136_ == 0)
{
v___x_4138_ = v___x_4135_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_a_4133_);
v___x_4138_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
lean_object* v___x_4139_; 
v___x_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4139_, 0, v___x_4138_);
return v___x_4139_;
}
}
}
else
{
lean_object* v_a_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; 
v_a_4142_ = lean_ctor_get(v_x_4131_, 0);
lean_inc(v_a_4142_);
lean_dec_ref_known(v_x_4131_, 1);
v___x_4143_ = lean_unsigned_to_nat(0u);
v___x_4144_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_4124_, v_h_4125_, v_responseBodyInstance_4126_, v_config_4127_, v_handler_4128_, v_a_4142_);
v___x_4145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4143_, v___x_4129_, v___x_4144_, v___f_4130_);
return v___x_4145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object* v_inst_4146_, lean_object* v_h_4147_, lean_object* v_responseBodyInstance_4148_, lean_object* v_config_4149_, lean_object* v_handler_4150_, lean_object* v___x_4151_, lean_object* v___f_4152_, lean_object* v_x_4153_, lean_object* v___y_4154_){
_start:
{
uint8_t v___x_7892__boxed_4155_; lean_object* v_res_4156_; 
v___x_7892__boxed_4155_ = lean_unbox(v___x_4151_);
v_res_4156_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(v_inst_4146_, v_h_4147_, v_responseBodyInstance_4148_, v_config_4149_, v_handler_4150_, v___x_7892__boxed_4155_, v___f_4152_, v_x_4153_);
return v_res_4156_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(uint8_t v___x_4157_, lean_object* v_h_4158_, lean_object* v_responseBodyInstance_4159_, lean_object* v_handler_4160_, lean_object* v_config_4161_, lean_object* v___f_4162_, lean_object* v_a_4163_, lean_object* v_inst_4164_, lean_object* v_socket_4165_, lean_object* v_connectionContext_4166_, lean_object* v_x_4167_){
_start:
{
if (lean_obj_tag(v_x_4167_) == 0)
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4177_; 
lean_dec_ref(v_connectionContext_4166_);
lean_dec(v_socket_4165_);
lean_dec_ref(v_inst_4164_);
lean_dec_ref(v_a_4163_);
lean_dec_ref(v___f_4162_);
lean_dec_ref(v_config_4161_);
lean_dec(v_handler_4160_);
lean_dec_ref(v_responseBodyInstance_4159_);
lean_dec_ref(v_h_4158_);
v_a_4169_ = lean_ctor_get(v_x_4167_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v_x_4167_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4171_ = v_x_4167_;
v_isShared_4172_ = v_isSharedCheck_4177_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v_x_4167_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4177_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4174_; 
if (v_isShared_4172_ == 0)
{
v___x_4174_ = v___x_4171_;
goto v_reusejp_4173_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v_a_4169_);
v___x_4174_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4173_;
}
v_reusejp_4173_:
{
lean_object* v___x_4175_; 
v___x_4175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4175_, 0, v___x_4174_);
return v___x_4175_;
}
}
}
else
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4213_; 
v_a_4178_ = lean_ctor_get(v_x_4167_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v_x_4167_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4180_ = v_x_4167_;
v_isShared_4181_ = v_isSharedCheck_4213_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v_x_4167_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4213_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v_machine_4188_; lean_object* v_requestStream_4189_; lean_object* v_keepAliveTimeout_4190_; lean_object* v_currentTimeout_4191_; lean_object* v_headerTimeout_4192_; lean_object* v_response_4193_; lean_object* v_respStream_4194_; uint8_t v_requiresData_4195_; lean_object* v_expectData_4196_; uint8_t v_handlerDispatched_4197_; lean_object* v_pendingHead_4198_; 
v_machine_4188_ = lean_ctor_get(v_a_4178_, 0);
v_requestStream_4189_ = lean_ctor_get(v_a_4178_, 1);
v_keepAliveTimeout_4190_ = lean_ctor_get(v_a_4178_, 2);
v_currentTimeout_4191_ = lean_ctor_get(v_a_4178_, 3);
v_headerTimeout_4192_ = lean_ctor_get(v_a_4178_, 4);
v_response_4193_ = lean_ctor_get(v_a_4178_, 5);
v_respStream_4194_ = lean_ctor_get(v_a_4178_, 6);
v_requiresData_4195_ = lean_ctor_get_uint8(v_a_4178_, sizeof(void*)*9);
v_expectData_4196_ = lean_ctor_get(v_a_4178_, 7);
v_handlerDispatched_4197_ = lean_ctor_get_uint8(v_a_4178_, sizeof(void*)*9 + 1);
v_pendingHead_4198_ = lean_ctor_get(v_a_4178_, 8);
if (v_requiresData_4195_ == 0)
{
if (v_handlerDispatched_4197_ == 0)
{
if (lean_obj_tag(v_respStream_4194_) == 0)
{
lean_object* v_writer_4209_; uint8_t v_sentMessage_4210_; 
v_writer_4209_ = lean_ctor_get(v_machine_4188_, 1);
v_sentMessage_4210_ = lean_ctor_get_uint8(v_writer_4209_, sizeof(void*)*6);
if (v_sentMessage_4210_ == 0)
{
lean_object* v_reader_4211_; lean_object* v_state_4212_; 
v_reader_4211_ = lean_ctor_get(v_machine_4188_, 0);
v_state_4212_ = lean_ctor_get(v_reader_4211_, 0);
if (lean_obj_tag(v_state_4212_) == 2)
{
lean_inc(v_respStream_4194_);
lean_inc(v_pendingHead_4198_);
lean_inc(v_expectData_4196_);
lean_inc_ref(v_response_4193_);
lean_inc(v_headerTimeout_4192_);
lean_inc(v_currentTimeout_4191_);
lean_inc(v_keepAliveTimeout_4190_);
lean_inc_ref(v_requestStream_4189_);
lean_inc_ref(v_machine_4188_);
lean_del_object(v___x_4180_);
lean_dec(v_a_4178_);
goto v___jp_4199_;
}
else
{
lean_dec_ref(v_connectionContext_4166_);
lean_dec(v_socket_4165_);
lean_dec_ref(v_inst_4164_);
lean_dec_ref(v_a_4163_);
lean_dec_ref(v___f_4162_);
lean_dec_ref(v_config_4161_);
lean_dec(v_handler_4160_);
lean_dec_ref(v_responseBodyInstance_4159_);
lean_dec_ref(v_h_4158_);
goto v___jp_4182_;
}
}
else
{
lean_dec_ref(v_connectionContext_4166_);
lean_dec(v_socket_4165_);
lean_dec_ref(v_inst_4164_);
lean_dec_ref(v_a_4163_);
lean_dec_ref(v___f_4162_);
lean_dec_ref(v_config_4161_);
lean_dec(v_handler_4160_);
lean_dec_ref(v_responseBodyInstance_4159_);
lean_dec_ref(v_h_4158_);
goto v___jp_4182_;
}
}
else
{
lean_inc_ref(v_respStream_4194_);
lean_inc(v_pendingHead_4198_);
lean_inc(v_expectData_4196_);
lean_inc_ref(v_response_4193_);
lean_inc(v_headerTimeout_4192_);
lean_inc(v_currentTimeout_4191_);
lean_inc(v_keepAliveTimeout_4190_);
lean_inc_ref(v_requestStream_4189_);
lean_inc_ref(v_machine_4188_);
lean_del_object(v___x_4180_);
lean_dec(v_a_4178_);
goto v___jp_4199_;
}
}
else
{
lean_inc(v_pendingHead_4198_);
lean_inc(v_expectData_4196_);
lean_inc(v_respStream_4194_);
lean_inc_ref(v_response_4193_);
lean_inc(v_headerTimeout_4192_);
lean_inc(v_currentTimeout_4191_);
lean_inc(v_keepAliveTimeout_4190_);
lean_inc_ref(v_requestStream_4189_);
lean_inc_ref(v_machine_4188_);
lean_del_object(v___x_4180_);
lean_dec(v_a_4178_);
goto v___jp_4199_;
}
}
else
{
lean_inc(v_pendingHead_4198_);
lean_inc(v_expectData_4196_);
lean_inc(v_respStream_4194_);
lean_inc_ref(v_response_4193_);
lean_inc(v_headerTimeout_4192_);
lean_inc(v_currentTimeout_4191_);
lean_inc(v_keepAliveTimeout_4190_);
lean_inc_ref(v_requestStream_4189_);
lean_inc_ref(v_machine_4188_);
lean_del_object(v___x_4180_);
lean_dec(v_a_4178_);
goto v___jp_4199_;
}
v___jp_4182_:
{
lean_object* v___x_4183_; lean_object* v___x_4185_; 
v___x_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4183_, 0, v_a_4178_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v___x_4183_);
v___x_4185_ = v___x_4180_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4187_; 
v_reuseFailAlloc_4187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4187_, 0, v___x_4183_);
v___x_4185_ = v_reuseFailAlloc_4187_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
lean_object* v___x_4186_; 
v___x_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4186_, 0, v___x_4185_);
return v___x_4186_;
}
}
v___jp_4199_:
{
lean_object* v___x_4200_; lean_object* v___f_4201_; lean_object* v___x_4202_; lean_object* v___f_4203_; lean_object* v___x_4204_; lean_object* v___f_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
v___x_4200_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4200_, 0, v_machine_4188_);
lean_ctor_set(v___x_4200_, 1, v_requestStream_4189_);
lean_ctor_set(v___x_4200_, 2, v_keepAliveTimeout_4190_);
lean_ctor_set(v___x_4200_, 3, v_currentTimeout_4191_);
lean_ctor_set(v___x_4200_, 4, v_headerTimeout_4192_);
lean_ctor_set(v___x_4200_, 5, v_response_4193_);
lean_ctor_set(v___x_4200_, 6, v_respStream_4194_);
lean_ctor_set(v___x_4200_, 7, v_expectData_4196_);
lean_ctor_set(v___x_4200_, 8, v_pendingHead_4198_);
lean_ctor_set_uint8(v___x_4200_, sizeof(void*)*9, v___x_4157_);
lean_ctor_set_uint8(v___x_4200_, sizeof(void*)*9 + 1, v_handlerDispatched_4197_);
lean_inc_ref_n(v___x_4200_, 2);
v___f_4201_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4201_, 0, v___x_4200_);
v___x_4202_ = lean_box(v___x_4157_);
lean_inc_ref(v_config_4161_);
lean_inc(v_handler_4160_);
lean_inc_ref(v_responseBodyInstance_4159_);
lean_inc_ref(v_h_4158_);
v___f_4203_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed), 11, 9);
lean_closure_set(v___f_4203_, 0, v_h_4158_);
lean_closure_set(v___f_4203_, 1, v_responseBodyInstance_4159_);
lean_closure_set(v___f_4203_, 2, v_handler_4160_);
lean_closure_set(v___f_4203_, 3, v_config_4161_);
lean_closure_set(v___f_4203_, 4, v___x_4200_);
lean_closure_set(v___f_4203_, 5, v___x_4202_);
lean_closure_set(v___f_4203_, 6, v___f_4162_);
lean_closure_set(v___f_4203_, 7, v_a_4163_);
lean_closure_set(v___f_4203_, 8, v___f_4201_);
v___x_4204_ = lean_box(v___x_4157_);
v___f_4205_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4205_, 0, v_inst_4164_);
lean_closure_set(v___f_4205_, 1, v_h_4158_);
lean_closure_set(v___f_4205_, 2, v_responseBodyInstance_4159_);
lean_closure_set(v___f_4205_, 3, v_config_4161_);
lean_closure_set(v___f_4205_, 4, v_handler_4160_);
lean_closure_set(v___f_4205_, 5, v___x_4204_);
lean_closure_set(v___f_4205_, 6, v___f_4203_);
v___x_4206_ = lean_unsigned_to_nat(0u);
v___x_4207_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4165_, v_connectionContext_4166_, v___x_4200_);
v___x_4208_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4206_, v___x_4157_, v___x_4207_, v___f_4205_);
return v___x_4208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object* v___x_4214_, lean_object* v_h_4215_, lean_object* v_responseBodyInstance_4216_, lean_object* v_handler_4217_, lean_object* v_config_4218_, lean_object* v___f_4219_, lean_object* v_a_4220_, lean_object* v_inst_4221_, lean_object* v_socket_4222_, lean_object* v_connectionContext_4223_, lean_object* v_x_4224_, lean_object* v___y_4225_){
_start:
{
uint8_t v___x_7932__boxed_4226_; lean_object* v_res_4227_; 
v___x_7932__boxed_4226_ = lean_unbox(v___x_4214_);
v_res_4227_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(v___x_7932__boxed_4226_, v_h_4215_, v_responseBodyInstance_4216_, v_handler_4217_, v_config_4218_, v___f_4219_, v_a_4220_, v_inst_4221_, v_socket_4222_, v_connectionContext_4223_, v_x_4224_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object* v_h_4228_, lean_object* v_handler_4229_, lean_object* v_extensions_4230_, lean_object* v_connectionContext_4231_, uint8_t v___x_4232_, lean_object* v___f_4233_, lean_object* v_x_4234_){
_start:
{
if (lean_obj_tag(v_x_4234_) == 0)
{
lean_object* v_a_4236_; lean_object* v___x_4238_; uint8_t v_isShared_4239_; uint8_t v_isSharedCheck_4244_; 
lean_dec_ref(v___f_4233_);
lean_dec_ref(v_connectionContext_4231_);
lean_dec(v_extensions_4230_);
lean_dec(v_handler_4229_);
lean_dec_ref(v_h_4228_);
v_a_4236_ = lean_ctor_get(v_x_4234_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v_x_4234_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4238_ = v_x_4234_;
v_isShared_4239_ = v_isSharedCheck_4244_;
goto v_resetjp_4237_;
}
else
{
lean_inc(v_a_4236_);
lean_dec(v_x_4234_);
v___x_4238_ = lean_box(0);
v_isShared_4239_ = v_isSharedCheck_4244_;
goto v_resetjp_4237_;
}
v_resetjp_4237_:
{
lean_object* v___x_4241_; 
if (v_isShared_4239_ == 0)
{
v___x_4241_ = v___x_4238_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_a_4236_);
v___x_4241_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
lean_object* v___x_4242_; 
v___x_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4241_);
return v___x_4242_;
}
}
}
else
{
lean_object* v_a_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v_a_4245_ = lean_ctor_get(v_x_4234_, 0);
lean_inc(v_a_4245_);
lean_dec_ref_known(v_x_4234_, 1);
v___x_4246_ = lean_unsigned_to_nat(0u);
v___x_4247_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_h_4228_, v_handler_4229_, v_extensions_4230_, v_connectionContext_4231_, v_a_4245_);
v___x_4248_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4246_, v___x_4232_, v___x_4247_, v___f_4233_);
return v___x_4248_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object* v_h_4249_, lean_object* v_handler_4250_, lean_object* v_extensions_4251_, lean_object* v_connectionContext_4252_, lean_object* v___x_4253_, lean_object* v___f_4254_, lean_object* v_x_4255_, lean_object* v___y_4256_){
_start:
{
uint8_t v___x_8012__boxed_4257_; lean_object* v_res_4258_; 
v___x_8012__boxed_4257_ = lean_unbox(v___x_4253_);
v_res_4258_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(v_h_4249_, v_handler_4250_, v_extensions_4251_, v_connectionContext_4252_, v___x_8012__boxed_4257_, v___f_4254_, v_x_4255_);
return v_res_4258_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object* v___x_4259_, lean_object* v_x_4260_){
_start:
{
if (lean_obj_tag(v_x_4260_) == 0)
{
lean_object* v_a_4262_; lean_object* v___x_4264_; uint8_t v_isShared_4265_; uint8_t v_isSharedCheck_4270_; 
lean_dec_ref(v___x_4259_);
v_a_4262_ = lean_ctor_get(v_x_4260_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v_x_4260_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4264_ = v_x_4260_;
v_isShared_4265_ = v_isSharedCheck_4270_;
goto v_resetjp_4263_;
}
else
{
lean_inc(v_a_4262_);
lean_dec(v_x_4260_);
v___x_4264_ = lean_box(0);
v_isShared_4265_ = v_isSharedCheck_4270_;
goto v_resetjp_4263_;
}
v_resetjp_4263_:
{
lean_object* v___x_4267_; 
if (v_isShared_4265_ == 0)
{
v___x_4267_ = v___x_4264_;
goto v_reusejp_4266_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4262_);
v___x_4267_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4266_;
}
v_reusejp_4266_:
{
lean_object* v___x_4268_; 
v___x_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4267_);
return v___x_4268_;
}
}
}
else
{
lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4279_; 
v_isSharedCheck_4279_ = !lean_is_exclusive(v_x_4260_);
if (v_isSharedCheck_4279_ == 0)
{
lean_object* v_unused_4280_; 
v_unused_4280_ = lean_ctor_get(v_x_4260_, 0);
lean_dec(v_unused_4280_);
v___x_4272_ = v_x_4260_;
v_isShared_4273_ = v_isSharedCheck_4279_;
goto v_resetjp_4271_;
}
else
{
lean_dec(v_x_4260_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4279_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4274_; lean_object* v___x_4276_; 
v___x_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4274_, 0, v___x_4259_);
if (v_isShared_4273_ == 0)
{
lean_ctor_set(v___x_4272_, 0, v___x_4274_);
v___x_4276_ = v___x_4272_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v___x_4274_);
v___x_4276_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
lean_object* v___x_4277_; 
v___x_4277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4277_, 0, v___x_4276_);
return v___x_4277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object* v___x_4281_, lean_object* v_x_4282_, lean_object* v___y_4283_){
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(v___x_4281_, v_x_4282_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object* v_h_4285_, lean_object* v_responseBodyInstance_4286_, lean_object* v_handler_4287_, lean_object* v_config_4288_, lean_object* v_connectionContext_4289_, lean_object* v_events_4290_, lean_object* v___x_4291_, uint8_t v___x_4292_, lean_object* v___f_4293_, lean_object* v_____r_4294_){
_start:
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4296_ = lean_unsigned_to_nat(0u);
v___x_4297_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_h_4285_, v_responseBodyInstance_4286_, v_handler_4287_, v_config_4288_, v_connectionContext_4289_, v_events_4290_, v___x_4291_);
v___x_4298_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4296_, v___x_4292_, v___x_4297_, v___f_4293_);
return v___x_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object* v_h_4299_, lean_object* v_responseBodyInstance_4300_, lean_object* v_handler_4301_, lean_object* v_config_4302_, lean_object* v_connectionContext_4303_, lean_object* v_events_4304_, lean_object* v___x_4305_, lean_object* v___x_4306_, lean_object* v___f_4307_, lean_object* v_____r_4308_, lean_object* v___y_4309_){
_start:
{
uint8_t v___x_8099__boxed_4310_; lean_object* v_res_4311_; 
v___x_8099__boxed_4310_ = lean_unbox(v___x_4306_);
v_res_4311_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(v_h_4299_, v_responseBodyInstance_4300_, v_handler_4301_, v_config_4302_, v_connectionContext_4303_, v_events_4304_, v___x_4305_, v___x_8099__boxed_4310_, v___f_4307_, v_____r_4308_);
return v_res_4311_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object* v_h_4312_, lean_object* v_handler_4313_, lean_object* v_a_4314_, lean_object* v___f_4315_, lean_object* v___f_4316_, lean_object* v_x_4317_){
_start:
{
if (lean_obj_tag(v_x_4317_) == 0)
{
lean_object* v_a_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4327_; 
lean_dec_ref(v___f_4316_);
lean_dec_ref(v___f_4315_);
lean_dec(v_handler_4313_);
lean_dec_ref(v_h_4312_);
v_a_4319_ = lean_ctor_get(v_x_4317_, 0);
v_isSharedCheck_4327_ = !lean_is_exclusive(v_x_4317_);
if (v_isSharedCheck_4327_ == 0)
{
v___x_4321_ = v_x_4317_;
v_isShared_4322_ = v_isSharedCheck_4327_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_a_4319_);
lean_dec(v_x_4317_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4327_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4324_; 
if (v_isShared_4322_ == 0)
{
v___x_4324_ = v___x_4321_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4326_; 
v_reuseFailAlloc_4326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4326_, 0, v_a_4319_);
v___x_4324_ = v_reuseFailAlloc_4326_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
lean_object* v___x_4325_; 
v___x_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4325_, 0, v___x_4324_);
return v___x_4325_;
}
}
}
else
{
lean_object* v_a_4328_; uint8_t v___x_4329_; 
v_a_4328_ = lean_ctor_get(v_x_4317_, 0);
lean_inc(v_a_4328_);
lean_dec_ref_known(v_x_4317_, 1);
v___x_4329_ = lean_unbox(v_a_4328_);
if (v___x_4329_ == 0)
{
lean_object* v___x_4330_; lean_object* v___x_4331_; uint8_t v___x_4332_; lean_object* v___x_4333_; 
lean_dec_ref(v___f_4316_);
v___x_4330_ = lean_unsigned_to_nat(0u);
v___x_4331_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_h_4312_, v_handler_4313_, v_a_4314_);
v___x_4332_ = lean_unbox(v_a_4328_);
lean_dec(v_a_4328_);
v___x_4333_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4330_, v___x_4332_, v___x_4331_, v___f_4315_);
return v___x_4333_;
}
else
{
lean_object* v___x_4334_; lean_object* v___x_4335_; 
lean_dec(v_a_4328_);
lean_dec_ref(v___f_4315_);
lean_dec(v_handler_4313_);
lean_dec_ref(v_h_4312_);
v___x_4334_ = lean_box(0);
v___x_4335_ = lean_apply_2(v___f_4316_, v___x_4334_, lean_box(0));
return v___x_4335_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object* v_h_4336_, lean_object* v_handler_4337_, lean_object* v_a_4338_, lean_object* v___f_4339_, lean_object* v___f_4340_, lean_object* v_x_4341_, lean_object* v___y_4342_){
_start:
{
lean_object* v_res_4343_; 
v_res_4343_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(v_h_4336_, v_handler_4337_, v_a_4338_, v___f_4339_, v___f_4340_, v_x_4341_);
lean_dec_ref(v_a_4338_);
return v_res_4343_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object* v_h_4344_, lean_object* v_handler_4345_, lean_object* v_a_4346_, lean_object* v___f_4347_, lean_object* v___f_4348_, lean_object* v_events_4349_, lean_object* v___f_4350_, uint8_t v___x_4351_, lean_object* v___f_4352_, lean_object* v_x_4353_){
_start:
{
if (lean_obj_tag(v_x_4353_) == 0)
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4366_; 
lean_dec_ref(v___f_4352_);
lean_dec_ref(v___f_4350_);
lean_dec_ref(v_events_4349_);
lean_dec_ref(v___f_4348_);
lean_dec_ref(v___f_4347_);
lean_dec_ref(v_a_4346_);
lean_dec(v_handler_4345_);
lean_dec_ref(v_h_4344_);
v_a_4358_ = lean_ctor_get(v_x_4353_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v_x_4353_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4360_ = v_x_4353_;
v_isShared_4361_ = v_isSharedCheck_4366_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v_x_4353_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4366_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
if (v_isShared_4361_ == 0)
{
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4358_);
v___x_4363_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
lean_object* v___x_4364_; 
v___x_4364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4363_);
return v___x_4364_;
}
}
}
else
{
lean_object* v_a_4367_; uint8_t v___x_4368_; 
v_a_4367_ = lean_ctor_get(v_x_4353_, 0);
lean_inc(v_a_4367_);
lean_dec_ref_known(v_x_4353_, 1);
v___x_4368_ = lean_unbox(v_a_4367_);
if (v___x_4368_ == 0)
{
lean_object* v___x_4369_; lean_object* v___x_4370_; uint8_t v___x_4371_; lean_object* v___x_4372_; 
lean_dec_ref(v___f_4352_);
lean_dec_ref(v___f_4350_);
lean_dec_ref(v_events_4349_);
lean_dec_ref(v___f_4348_);
v___x_4369_ = lean_unsigned_to_nat(0u);
v___x_4370_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_h_4344_, v_handler_4345_, v_a_4346_);
lean_dec_ref(v_a_4346_);
v___x_4371_ = lean_unbox(v_a_4367_);
lean_dec(v_a_4367_);
v___x_4372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4369_, v___x_4371_, v___x_4370_, v___f_4347_);
return v___x_4372_;
}
else
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; uint8_t v___x_4376_; 
lean_dec(v_a_4367_);
lean_dec_ref(v___f_4347_);
lean_dec(v_handler_4345_);
lean_dec_ref(v_h_4344_);
v___x_4373_ = lean_unsigned_to_nat(0u);
v___x_4374_ = lean_array_get_size(v_events_4349_);
v___x_4375_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_4376_ = lean_nat_dec_lt(v___x_4373_, v___x_4374_);
if (v___x_4376_ == 0)
{
lean_dec_ref(v___f_4352_);
lean_dec_ref(v___f_4350_);
lean_dec_ref(v_events_4349_);
lean_dec_ref(v_a_4346_);
goto v___jp_4355_;
}
else
{
if (v___x_4376_ == 0)
{
lean_dec_ref(v___f_4352_);
lean_dec_ref(v___f_4350_);
lean_dec_ref(v_events_4349_);
lean_dec_ref(v_a_4346_);
goto v___jp_4355_;
}
else
{
size_t v___x_4377_; size_t v___x_4378_; lean_object* v___x_4379_; uint8_t v___x_4380_; 
v___x_4377_ = ((size_t)0ULL);
v___x_4378_ = lean_usize_of_nat(v___x_4374_);
v___x_4379_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_4375_, v___f_4350_, v_events_4349_, v___x_4377_, v___x_4378_);
v___x_4380_ = lean_unbox(v___x_4379_);
lean_dec(v___x_4379_);
if (v___x_4380_ == 0)
{
lean_dec_ref(v___f_4352_);
lean_dec_ref(v_a_4346_);
goto v___jp_4355_;
}
else
{
lean_object* v___x_4381_; lean_object* v___x_4382_; 
lean_dec_ref(v___f_4348_);
v___x_4381_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_a_4346_);
v___x_4382_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4373_, v___x_4351_, v___x_4381_, v___f_4352_);
return v___x_4382_;
}
}
}
}
}
v___jp_4355_:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; 
v___x_4356_ = lean_box(0);
v___x_4357_ = lean_apply_2(v___f_4348_, v___x_4356_, lean_box(0));
return v___x_4357_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object* v_h_4383_, lean_object* v_handler_4384_, lean_object* v_a_4385_, lean_object* v___f_4386_, lean_object* v___f_4387_, lean_object* v_events_4388_, lean_object* v___f_4389_, lean_object* v___x_4390_, lean_object* v___f_4391_, lean_object* v_x_4392_, lean_object* v___y_4393_){
_start:
{
uint8_t v___x_8191__boxed_4394_; lean_object* v_res_4395_; 
v___x_8191__boxed_4394_ = lean_unbox(v___x_4390_);
v_res_4395_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(v_h_4383_, v_handler_4384_, v_a_4385_, v___f_4386_, v___f_4387_, v_events_4388_, v___f_4389_, v___x_8191__boxed_4394_, v___f_4391_, v_x_4392_);
return v_res_4395_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(lean_object* v_h_4396_, lean_object* v_responseBodyInstance_4397_, lean_object* v_handler_4398_, lean_object* v_config_4399_, lean_object* v_connectionContext_4400_, uint8_t v___x_4401_, lean_object* v___f_4402_, lean_object* v_a_4403_, lean_object* v___f_4404_, lean_object* v_inst_4405_, lean_object* v_x_4406_, lean_object* v_____s_4407_){
_start:
{
lean_object* v_machine_4409_; lean_object* v_requestStream_4410_; lean_object* v_keepAliveTimeout_4411_; lean_object* v_currentTimeout_4412_; lean_object* v_headerTimeout_4413_; lean_object* v_response_4414_; lean_object* v_respStream_4415_; uint8_t v_requiresData_4416_; lean_object* v_expectData_4417_; uint8_t v_handlerDispatched_4418_; lean_object* v_pendingHead_4419_; lean_object* v_reader_4438_; lean_object* v_state_4439_; 
v_machine_4409_ = lean_ctor_get(v_____s_4407_, 0);
v_requestStream_4410_ = lean_ctor_get(v_____s_4407_, 1);
v_keepAliveTimeout_4411_ = lean_ctor_get(v_____s_4407_, 2);
v_currentTimeout_4412_ = lean_ctor_get(v_____s_4407_, 3);
v_headerTimeout_4413_ = lean_ctor_get(v_____s_4407_, 4);
v_response_4414_ = lean_ctor_get(v_____s_4407_, 5);
v_respStream_4415_ = lean_ctor_get(v_____s_4407_, 6);
v_requiresData_4416_ = lean_ctor_get_uint8(v_____s_4407_, sizeof(void*)*9);
v_expectData_4417_ = lean_ctor_get(v_____s_4407_, 7);
v_handlerDispatched_4418_ = lean_ctor_get_uint8(v_____s_4407_, sizeof(void*)*9 + 1);
v_pendingHead_4419_ = lean_ctor_get(v_____s_4407_, 8);
v_reader_4438_ = lean_ctor_get(v_machine_4409_, 0);
v_state_4439_ = lean_ctor_get(v_reader_4438_, 0);
if (lean_obj_tag(v_state_4439_) == 6)
{
lean_object* v_writer_4440_; lean_object* v_state_4441_; 
v_writer_4440_ = lean_ctor_get(v_machine_4409_, 1);
v_state_4441_ = lean_ctor_get(v_writer_4440_, 2);
if (lean_obj_tag(v_state_4441_) == 7)
{
lean_object* v_outputData_4442_; lean_object* v_size_4443_; lean_object* v___x_4444_; uint8_t v___x_4445_; 
v_outputData_4442_ = lean_ctor_get(v_writer_4440_, 1);
v_size_4443_ = lean_ctor_get(v_outputData_4442_, 1);
v___x_4444_ = lean_unsigned_to_nat(0u);
v___x_4445_ = lean_nat_dec_eq(v_size_4443_, v___x_4444_);
if (v___x_4445_ == 0)
{
lean_inc(v_pendingHead_4419_);
lean_inc(v_expectData_4417_);
lean_inc(v_respStream_4415_);
lean_inc_ref(v_response_4414_);
lean_inc(v_headerTimeout_4413_);
lean_inc(v_currentTimeout_4412_);
lean_inc(v_keepAliveTimeout_4411_);
lean_inc_ref(v_requestStream_4410_);
lean_inc_ref(v_machine_4409_);
lean_dec_ref(v_____s_4407_);
goto v___jp_4420_;
}
else
{
lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; 
lean_dec_ref(v_inst_4405_);
lean_dec_ref(v___f_4404_);
lean_dec_ref(v_a_4403_);
lean_dec_ref(v___f_4402_);
lean_dec_ref(v_connectionContext_4400_);
lean_dec_ref(v_config_4399_);
lean_dec(v_handler_4398_);
lean_dec_ref(v_responseBodyInstance_4397_);
lean_dec_ref(v_h_4396_);
v___x_4446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4446_, 0, v_____s_4407_);
v___x_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
v___x_4448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4447_);
return v___x_4448_;
}
}
else
{
lean_inc(v_pendingHead_4419_);
lean_inc(v_expectData_4417_);
lean_inc(v_respStream_4415_);
lean_inc_ref(v_response_4414_);
lean_inc(v_headerTimeout_4413_);
lean_inc(v_currentTimeout_4412_);
lean_inc(v_keepAliveTimeout_4411_);
lean_inc_ref(v_requestStream_4410_);
lean_inc_ref(v_machine_4409_);
lean_dec_ref(v_____s_4407_);
goto v___jp_4420_;
}
}
else
{
lean_inc(v_pendingHead_4419_);
lean_inc(v_expectData_4417_);
lean_inc(v_respStream_4415_);
lean_inc_ref(v_response_4414_);
lean_inc(v_headerTimeout_4413_);
lean_inc(v_currentTimeout_4412_);
lean_inc(v_keepAliveTimeout_4411_);
lean_inc_ref(v_requestStream_4410_);
lean_inc_ref(v_machine_4409_);
lean_dec_ref(v_____s_4407_);
goto v___jp_4420_;
}
v___jp_4420_:
{
uint8_t v___x_4421_; lean_object* v___x_4422_; lean_object* v_snd_4423_; lean_object* v_fst_4424_; lean_object* v_events_4425_; lean_object* v_output_4426_; lean_object* v___x_4427_; lean_object* v___f_4428_; lean_object* v___x_4429_; lean_object* v___f_4430_; lean_object* v___f_4431_; lean_object* v___x_4432_; lean_object* v___f_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___x_4421_ = 0;
v___x_4422_ = l_Std_Http_Protocol_H1_Machine_step(v___x_4421_, v_machine_4409_);
v_snd_4423_ = lean_ctor_get(v___x_4422_, 1);
lean_inc(v_snd_4423_);
v_fst_4424_ = lean_ctor_get(v___x_4422_, 0);
lean_inc(v_fst_4424_);
lean_dec_ref(v___x_4422_);
v_events_4425_ = lean_ctor_get(v_snd_4423_, 0);
lean_inc_ref_n(v_events_4425_, 2);
v_output_4426_ = lean_ctor_get(v_snd_4423_, 1);
lean_inc_ref(v_output_4426_);
lean_dec(v_snd_4423_);
v___x_4427_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4427_, 0, v_fst_4424_);
lean_ctor_set(v___x_4427_, 1, v_requestStream_4410_);
lean_ctor_set(v___x_4427_, 2, v_keepAliveTimeout_4411_);
lean_ctor_set(v___x_4427_, 3, v_currentTimeout_4412_);
lean_ctor_set(v___x_4427_, 4, v_headerTimeout_4413_);
lean_ctor_set(v___x_4427_, 5, v_response_4414_);
lean_ctor_set(v___x_4427_, 6, v_respStream_4415_);
lean_ctor_set(v___x_4427_, 7, v_expectData_4417_);
lean_ctor_set(v___x_4427_, 8, v_pendingHead_4419_);
lean_ctor_set_uint8(v___x_4427_, sizeof(void*)*9, v_requiresData_4416_);
lean_ctor_set_uint8(v___x_4427_, sizeof(void*)*9 + 1, v_handlerDispatched_4418_);
lean_inc_ref(v___x_4427_);
v___f_4428_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4428_, 0, v___x_4427_);
v___x_4429_ = lean_box(v___x_4401_);
lean_inc_n(v_handler_4398_, 2);
lean_inc_ref_n(v_h_4396_, 2);
v___f_4430_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed), 11, 9);
lean_closure_set(v___f_4430_, 0, v_h_4396_);
lean_closure_set(v___f_4430_, 1, v_responseBodyInstance_4397_);
lean_closure_set(v___f_4430_, 2, v_handler_4398_);
lean_closure_set(v___f_4430_, 3, v_config_4399_);
lean_closure_set(v___f_4430_, 4, v_connectionContext_4400_);
lean_closure_set(v___f_4430_, 5, v_events_4425_);
lean_closure_set(v___f_4430_, 6, v___x_4427_);
lean_closure_set(v___f_4430_, 7, v___x_4429_);
lean_closure_set(v___f_4430_, 8, v___f_4402_);
lean_inc_ref(v___f_4430_);
lean_inc_ref(v___f_4428_);
lean_inc_ref_n(v_a_4403_, 2);
v___f_4431_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4431_, 0, v_h_4396_);
lean_closure_set(v___f_4431_, 1, v_handler_4398_);
lean_closure_set(v___f_4431_, 2, v_a_4403_);
lean_closure_set(v___f_4431_, 3, v___f_4428_);
lean_closure_set(v___f_4431_, 4, v___f_4430_);
v___x_4432_ = lean_box(v___x_4401_);
v___f_4433_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed), 11, 9);
lean_closure_set(v___f_4433_, 0, v_h_4396_);
lean_closure_set(v___f_4433_, 1, v_handler_4398_);
lean_closure_set(v___f_4433_, 2, v_a_4403_);
lean_closure_set(v___f_4433_, 3, v___f_4428_);
lean_closure_set(v___f_4433_, 4, v___f_4430_);
lean_closure_set(v___f_4433_, 5, v_events_4425_);
lean_closure_set(v___f_4433_, 6, v___f_4404_);
lean_closure_set(v___f_4433_, 7, v___x_4432_);
lean_closure_set(v___f_4433_, 8, v___f_4431_);
v___x_4434_ = lean_unsigned_to_nat(65536u);
v___x_4435_ = lean_unsigned_to_nat(0u);
v___x_4436_ = l_Std_Http_Internal_Outbox_push___redArg(v_inst_4405_, v_a_4403_, v_output_4426_, v___x_4434_);
v___x_4437_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4435_, v___x_4401_, v___x_4436_, v___f_4433_);
return v___x_4437_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object* v_h_4449_, lean_object* v_responseBodyInstance_4450_, lean_object* v_handler_4451_, lean_object* v_config_4452_, lean_object* v_connectionContext_4453_, lean_object* v___x_4454_, lean_object* v___f_4455_, lean_object* v_a_4456_, lean_object* v___f_4457_, lean_object* v_inst_4458_, lean_object* v_x_4459_, lean_object* v_____s_4460_, lean_object* v___y_4461_){
_start:
{
uint8_t v___x_8276__boxed_4462_; lean_object* v_res_4463_; 
v___x_8276__boxed_4462_ = lean_unbox(v___x_4454_);
v_res_4463_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(v_h_4449_, v_responseBodyInstance_4450_, v_handler_4451_, v_config_4452_, v_connectionContext_4453_, v___x_8276__boxed_4462_, v___f_4455_, v_a_4456_, v___f_4457_, v_inst_4458_, v_x_4459_, v_____s_4460_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object* v_h_4464_, lean_object* v_handler_4465_, lean_object* v_a_4466_, uint8_t v___x_4467_, lean_object* v___f_4468_, lean_object* v_x_4469_){
_start:
{
if (lean_obj_tag(v_x_4469_) == 0)
{
lean_object* v___x_4471_; 
lean_dec_ref(v___f_4468_);
lean_dec(v_handler_4465_);
lean_dec_ref(v_h_4464_);
v___x_4471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4471_, 0, v_x_4469_);
return v___x_4471_;
}
else
{
lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
lean_dec_ref_known(v_x_4469_, 1);
v___x_4472_ = lean_unsigned_to_nat(0u);
v___x_4473_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_h_4464_, v_handler_4465_, v_a_4466_);
v___x_4474_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4472_, v___x_4467_, v___x_4473_, v___f_4468_);
return v___x_4474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object* v_h_4475_, lean_object* v_handler_4476_, lean_object* v_a_4477_, lean_object* v___x_4478_, lean_object* v___f_4479_, lean_object* v_x_4480_, lean_object* v___y_4481_){
_start:
{
uint8_t v___x_8343__boxed_4482_; lean_object* v_res_4483_; 
v___x_8343__boxed_4482_ = lean_unbox(v___x_4478_);
v_res_4483_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(v_h_4475_, v_handler_4476_, v_a_4477_, v___x_8343__boxed_4482_, v___f_4479_, v_x_4480_);
lean_dec_ref(v_a_4477_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object* v_a_4484_, uint8_t v___x_4485_, lean_object* v___f_4486_, lean_object* v_____r_4487_){
_start:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4489_ = lean_unsigned_to_nat(0u);
v___x_4490_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_a_4484_);
v___x_4491_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4489_, v___x_4485_, v___x_4490_, v___f_4486_);
return v___x_4491_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object* v_a_4492_, lean_object* v___x_4493_, lean_object* v___f_4494_, lean_object* v_____r_4495_, lean_object* v___y_4496_){
_start:
{
uint8_t v___x_8368__boxed_4497_; lean_object* v_res_4498_; 
v___x_8368__boxed_4497_ = lean_unbox(v___x_4493_);
v_res_4498_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_a_4492_, v___x_8368__boxed_4497_, v___f_4494_, v_____r_4495_);
lean_dec_ref(v_a_4492_);
return v_res_4498_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object* v___f_4499_, lean_object* v_x_4500_){
_start:
{
if (lean_obj_tag(v_x_4500_) == 0)
{
lean_object* v___x_4502_; 
lean_dec_ref(v___f_4499_);
v___x_4502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4502_, 0, v_x_4500_);
return v___x_4502_;
}
else
{
lean_object* v_a_4503_; lean_object* v___x_4504_; 
v_a_4503_ = lean_ctor_get(v_x_4500_, 0);
lean_inc(v_a_4503_);
lean_dec_ref_known(v_x_4500_, 1);
v___x_4504_ = lean_apply_2(v___f_4499_, v_a_4503_, lean_box(0));
return v___x_4504_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object* v___f_4505_, lean_object* v_x_4506_, lean_object* v___y_4507_){
_start:
{
lean_object* v_res_4508_; 
v_res_4508_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(v___f_4505_, v_x_4506_);
return v_res_4508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(lean_object* v_close_4509_, lean_object* v_val_4510_, uint8_t v___x_4511_, lean_object* v___f_4512_, lean_object* v___f_4513_, lean_object* v_x_4514_){
_start:
{
if (lean_obj_tag(v_x_4514_) == 0)
{
lean_object* v_a_4516_; lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4524_; 
lean_dec_ref(v___f_4513_);
lean_dec_ref(v___f_4512_);
lean_dec(v_val_4510_);
lean_dec_ref(v_close_4509_);
v_a_4516_ = lean_ctor_get(v_x_4514_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v_x_4514_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4518_ = v_x_4514_;
v_isShared_4519_ = v_isSharedCheck_4524_;
goto v_resetjp_4517_;
}
else
{
lean_inc(v_a_4516_);
lean_dec(v_x_4514_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4524_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
lean_object* v___x_4521_; 
if (v_isShared_4519_ == 0)
{
v___x_4521_ = v___x_4518_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4516_);
v___x_4521_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
lean_object* v___x_4522_; 
v___x_4522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4522_, 0, v___x_4521_);
return v___x_4522_;
}
}
}
else
{
lean_object* v_a_4525_; uint8_t v___x_4526_; 
v_a_4525_ = lean_ctor_get(v_x_4514_, 0);
lean_inc(v_a_4525_);
lean_dec_ref_known(v_x_4514_, 1);
v___x_4526_ = lean_unbox(v_a_4525_);
lean_dec(v_a_4525_);
if (v___x_4526_ == 0)
{
lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
lean_dec_ref(v___f_4513_);
v___x_4527_ = lean_unsigned_to_nat(0u);
v___x_4528_ = lean_apply_2(v_close_4509_, v_val_4510_, lean_box(0));
v___x_4529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4527_, v___x_4511_, v___x_4528_, v___f_4512_);
return v___x_4529_;
}
else
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
lean_dec_ref(v___f_4512_);
lean_dec(v_val_4510_);
lean_dec_ref(v_close_4509_);
v___x_4530_ = lean_box(0);
v___x_4531_ = lean_apply_2(v___f_4513_, v___x_4530_, lean_box(0));
return v___x_4531_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object* v_close_4532_, lean_object* v_val_4533_, lean_object* v___x_4534_, lean_object* v___f_4535_, lean_object* v___f_4536_, lean_object* v_x_4537_, lean_object* v___y_4538_){
_start:
{
uint8_t v___x_8405__boxed_4539_; lean_object* v_res_4540_; 
v___x_8405__boxed_4539_ = lean_unbox(v___x_4534_);
v_res_4540_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(v_close_4532_, v_val_4533_, v___x_8405__boxed_4539_, v___f_4535_, v___f_4536_, v_x_4537_);
return v_res_4540_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object* v_respStream_4541_, lean_object* v_responseBodyInstance_4542_, uint8_t v___x_4543_, lean_object* v___f_4544_, lean_object* v___f_4545_, lean_object* v_____r_4546_){
_start:
{
if (lean_obj_tag(v_respStream_4541_) == 1)
{
lean_object* v_val_4548_; lean_object* v_close_4549_; lean_object* v_isClosed_4550_; lean_object* v___x_4551_; lean_object* v___f_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v_val_4548_ = lean_ctor_get(v_respStream_4541_, 0);
lean_inc_n(v_val_4548_, 2);
lean_dec_ref_known(v_respStream_4541_, 1);
v_close_4549_ = lean_ctor_get(v_responseBodyInstance_4542_, 1);
lean_inc_ref(v_close_4549_);
v_isClosed_4550_ = lean_ctor_get(v_responseBodyInstance_4542_, 2);
lean_inc_ref(v_isClosed_4550_);
lean_dec_ref(v_responseBodyInstance_4542_);
v___x_4551_ = lean_box(v___x_4543_);
v___f_4552_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed), 7, 5);
lean_closure_set(v___f_4552_, 0, v_close_4549_);
lean_closure_set(v___f_4552_, 1, v_val_4548_);
lean_closure_set(v___f_4552_, 2, v___x_4551_);
lean_closure_set(v___f_4552_, 3, v___f_4544_);
lean_closure_set(v___f_4552_, 4, v___f_4545_);
v___x_4553_ = lean_unsigned_to_nat(0u);
v___x_4554_ = lean_apply_2(v_isClosed_4550_, v_val_4548_, lean_box(0));
v___x_4555_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4553_, v___x_4543_, v___x_4554_, v___f_4552_);
return v___x_4555_;
}
else
{
lean_object* v___x_4556_; lean_object* v___x_4557_; 
lean_dec_ref(v___f_4544_);
lean_dec_ref(v_responseBodyInstance_4542_);
lean_dec(v_respStream_4541_);
v___x_4556_ = lean_box(0);
v___x_4557_ = lean_apply_2(v___f_4545_, v___x_4556_, lean_box(0));
return v___x_4557_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object* v_respStream_4558_, lean_object* v_responseBodyInstance_4559_, lean_object* v___x_4560_, lean_object* v___f_4561_, lean_object* v___f_4562_, lean_object* v_____r_4563_, lean_object* v___y_4564_){
_start:
{
uint8_t v___x_8454__boxed_4565_; lean_object* v_res_4566_; 
v___x_8454__boxed_4565_ = lean_unbox(v___x_4560_);
v_res_4566_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(v_respStream_4558_, v_responseBodyInstance_4559_, v___x_8454__boxed_4565_, v___f_4561_, v___f_4562_, v_____r_4563_);
return v_res_4566_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object* v_requestStream_4567_, uint8_t v___x_4568_, lean_object* v___f_4569_, lean_object* v___f_4570_, lean_object* v_x_4571_){
_start:
{
if (lean_obj_tag(v_x_4571_) == 0)
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4581_; 
lean_dec_ref(v___f_4570_);
lean_dec_ref(v___f_4569_);
lean_dec_ref(v_requestStream_4567_);
v_a_4573_ = lean_ctor_get(v_x_4571_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v_x_4571_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4575_ = v_x_4571_;
v_isShared_4576_ = v_isSharedCheck_4581_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v_x_4571_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4581_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4578_; 
if (v_isShared_4576_ == 0)
{
v___x_4578_ = v___x_4575_;
goto v_reusejp_4577_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v_a_4573_);
v___x_4578_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4577_;
}
v_reusejp_4577_:
{
lean_object* v___x_4579_; 
v___x_4579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4579_, 0, v___x_4578_);
return v___x_4579_;
}
}
}
else
{
lean_object* v_a_4582_; uint8_t v___x_4583_; 
v_a_4582_ = lean_ctor_get(v_x_4571_, 0);
lean_inc(v_a_4582_);
lean_dec_ref_known(v_x_4571_, 1);
v___x_4583_ = lean_unbox(v_a_4582_);
lean_dec(v_a_4582_);
if (v___x_4583_ == 0)
{
lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; 
lean_dec_ref(v___f_4570_);
v___x_4584_ = lean_unsigned_to_nat(0u);
v___x_4585_ = l_Std_Http_Body_Stream_close(v_requestStream_4567_);
v___x_4586_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4584_, v___x_4568_, v___x_4585_, v___f_4569_);
return v___x_4586_;
}
else
{
lean_object* v___x_4587_; lean_object* v___x_4588_; 
lean_dec_ref(v___f_4569_);
lean_dec_ref(v_requestStream_4567_);
v___x_4587_ = lean_box(0);
v___x_4588_ = lean_apply_2(v___f_4570_, v___x_4587_, lean_box(0));
return v___x_4588_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object* v_requestStream_4589_, lean_object* v___x_4590_, lean_object* v___f_4591_, lean_object* v___f_4592_, lean_object* v_x_4593_, lean_object* v___y_4594_){
_start:
{
uint8_t v___x_8485__boxed_4595_; lean_object* v_res_4596_; 
v___x_8485__boxed_4595_ = lean_unbox(v___x_4590_);
v_res_4596_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(v_requestStream_4589_, v___x_8485__boxed_4595_, v___f_4591_, v___f_4592_, v_x_4593_);
return v_res_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object* v_responseBodyInstance_4597_, uint8_t v___x_4598_, lean_object* v___f_4599_, lean_object* v___f_4600_, lean_object* v___f_4601_, lean_object* v_x_4602_){
_start:
{
if (lean_obj_tag(v_x_4602_) == 0)
{
lean_object* v_a_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4612_; 
lean_dec_ref(v___f_4601_);
lean_dec_ref(v___f_4600_);
lean_dec_ref(v___f_4599_);
lean_dec_ref(v_responseBodyInstance_4597_);
v_a_4604_ = lean_ctor_get(v_x_4602_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v_x_4602_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4606_ = v_x_4602_;
v_isShared_4607_ = v_isSharedCheck_4612_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_a_4604_);
lean_dec(v_x_4602_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4612_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4609_; 
if (v_isShared_4607_ == 0)
{
v___x_4609_ = v___x_4606_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_a_4604_);
v___x_4609_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
lean_object* v___x_4610_; 
v___x_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4609_);
return v___x_4610_;
}
}
}
else
{
lean_object* v_a_4613_; lean_object* v_requestStream_4614_; lean_object* v_respStream_4615_; lean_object* v___x_4616_; lean_object* v___f_4617_; lean_object* v___f_4618_; lean_object* v___x_4619_; lean_object* v___f_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___f_4623_; lean_object* v___f_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_7517__overap_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v_a_4613_ = lean_ctor_get(v_x_4602_, 0);
lean_inc(v_a_4613_);
lean_dec_ref_known(v_x_4602_, 1);
v_requestStream_4614_ = lean_ctor_get(v_a_4613_, 1);
lean_inc_ref_n(v_requestStream_4614_, 2);
v_respStream_4615_ = lean_ctor_get(v_a_4613_, 6);
lean_inc(v_respStream_4615_);
lean_dec(v_a_4613_);
v___x_4616_ = lean_box(v___x_4598_);
v___f_4617_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed), 7, 5);
lean_closure_set(v___f_4617_, 0, v_respStream_4615_);
lean_closure_set(v___f_4617_, 1, v_responseBodyInstance_4597_);
lean_closure_set(v___f_4617_, 2, v___x_4616_);
lean_closure_set(v___f_4617_, 3, v___f_4599_);
lean_closure_set(v___f_4617_, 4, v___f_4600_);
lean_inc_ref(v___f_4617_);
v___f_4618_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed), 3, 1);
lean_closure_set(v___f_4618_, 0, v___f_4617_);
v___x_4619_ = lean_box(v___x_4598_);
v___f_4620_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed), 6, 4);
lean_closure_set(v___f_4620_, 0, v_requestStream_4614_);
lean_closure_set(v___f_4620_, 1, v___x_4619_);
lean_closure_set(v___f_4620_, 2, v___f_4618_);
lean_closure_set(v___f_4620_, 3, v___f_4617_);
v___x_4621_ = lean_unsigned_to_nat(0u);
v___x_4622_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__0);
v___f_4623_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__5);
v___f_4624_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__6));
v___x_4625_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___closed__11);
v___x_4626_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4626_, 0, lean_box(0));
lean_closure_set(v___x_4626_, 1, lean_box(0));
lean_closure_set(v___x_4626_, 2, v___x_4622_);
lean_closure_set(v___x_4626_, 3, lean_box(0));
lean_closure_set(v___x_4626_, 4, lean_box(0));
lean_closure_set(v___x_4626_, 5, v___x_4625_);
lean_closure_set(v___x_4626_, 6, v___f_4601_);
v___x_7517__overap_4627_ = l_Std_Mutex_atomically___redArg(v___x_4622_, v___f_4623_, v___f_4624_, v_requestStream_4614_, v___x_4626_);
v___x_4628_ = lean_apply_1(v___x_7517__overap_4627_, lean_box(0));
v___x_4629_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4621_, v___x_4598_, v___x_4628_, v___f_4620_);
return v___x_4629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object* v_responseBodyInstance_4630_, lean_object* v___x_4631_, lean_object* v___f_4632_, lean_object* v___f_4633_, lean_object* v___f_4634_, lean_object* v_x_4635_, lean_object* v___y_4636_){
_start:
{
uint8_t v___x_8555__boxed_4637_; lean_object* v_res_4638_; 
v___x_8555__boxed_4637_ = lean_unbox(v___x_4631_);
v_res_4638_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(v_responseBodyInstance_4630_, v___x_8555__boxed_4637_, v___f_4632_, v___f_4633_, v___f_4634_, v_x_4635_);
return v_res_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object* v_a_4639_, lean_object* v_x_4640_){
_start:
{
if (lean_obj_tag(v_x_4640_) == 0)
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4650_; 
v_a_4642_ = lean_ctor_get(v_x_4640_, 0);
v_isSharedCheck_4650_ = !lean_is_exclusive(v_x_4640_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4644_ = v_x_4640_;
v_isShared_4645_ = v_isSharedCheck_4650_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v_x_4640_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4650_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
lean_object* v___x_4648_; 
v___x_4648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4648_, 0, v___x_4647_);
return v___x_4648_;
}
}
}
else
{
lean_object* v___x_4651_; lean_object* v___x_4652_; 
lean_dec_ref_known(v_x_4640_, 1);
v___x_4651_ = l_IO_Promise_result_x21___redArg(v_a_4639_);
v___x_4652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4652_, 0, v___x_4651_);
return v___x_4652_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object* v_a_4653_, lean_object* v_x_4654_, lean_object* v___y_4655_){
_start:
{
lean_object* v_res_4656_; 
v_res_4656_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(v_a_4653_, v_x_4654_);
lean_dec(v_a_4653_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21(lean_object* v___f_4657_, lean_object* v___x_4658_, lean_object* v___x_4659_, uint8_t v___x_4660_, lean_object* v_x_4661_){
_start:
{
if (lean_obj_tag(v_x_4661_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4671_; 
lean_dec_ref(v___x_4659_);
lean_dec(v___x_4658_);
lean_dec_ref(v___f_4657_);
v_a_4663_ = lean_ctor_get(v_x_4661_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v_x_4661_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4665_ = v_x_4661_;
v_isShared_4666_ = v_isSharedCheck_4671_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v_x_4661_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4671_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4668_; 
if (v_isShared_4666_ == 0)
{
v___x_4668_ = v___x_4665_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4663_);
v___x_4668_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
lean_object* v___x_4669_; 
v___x_4669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4668_);
return v___x_4669_;
}
}
}
else
{
lean_object* v_a_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4683_; 
v_a_4672_ = lean_ctor_get(v_x_4661_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v_x_4661_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4674_ = v_x_4661_;
v_isShared_4675_ = v_isSharedCheck_4683_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_a_4672_);
lean_dec(v_x_4661_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4683_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v___f_4676_; lean_object* v___x_4677_; lean_object* v___x_4679_; 
lean_inc(v_a_4672_);
v___f_4676_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed), 3, 1);
lean_closure_set(v___f_4676_, 0, v_a_4672_);
lean_inc(v___x_4658_);
v___x_4677_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_4657_, v___x_4658_, v_a_4672_, v___x_4659_);
if (v_isShared_4675_ == 0)
{
lean_ctor_set(v___x_4674_, 0, v___x_4677_);
v___x_4679_ = v___x_4674_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v___x_4677_);
v___x_4679_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4680_, 0, v___x_4679_);
v___x_4681_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4658_, v___x_4660_, v___x_4680_, v___f_4676_);
return v___x_4681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21___boxed(lean_object* v___f_4684_, lean_object* v___x_4685_, lean_object* v___x_4686_, lean_object* v___x_4687_, lean_object* v_x_4688_, lean_object* v___y_4689_){
_start:
{
uint8_t v___x_8662__boxed_4690_; lean_object* v_res_4691_; 
v___x_8662__boxed_4690_ = lean_unbox(v___x_4687_);
v_res_4691_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21(v___f_4684_, v___x_4685_, v___x_4686_, v___x_8662__boxed_4690_, v_x_4688_);
return v_res_4691_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22(uint8_t v___x_4692_, lean_object* v_h_4693_, lean_object* v_responseBodyInstance_4694_, lean_object* v_handler_4695_, lean_object* v_config_4696_, lean_object* v___f_4697_, lean_object* v_inst_4698_, lean_object* v_socket_4699_, lean_object* v_connectionContext_4700_, lean_object* v_extensions_4701_, lean_object* v___f_4702_, lean_object* v___f_4703_, lean_object* v___f_4704_, lean_object* v___x_4705_, lean_object* v_x_4706_){
_start:
{
if (lean_obj_tag(v_x_4706_) == 0)
{
lean_object* v_a_4708_; lean_object* v___x_4710_; uint8_t v_isShared_4711_; uint8_t v_isSharedCheck_4716_; 
lean_dec_ref(v___x_4705_);
lean_dec_ref(v___f_4704_);
lean_dec_ref(v___f_4703_);
lean_dec_ref(v___f_4702_);
lean_dec(v_extensions_4701_);
lean_dec_ref(v_connectionContext_4700_);
lean_dec(v_socket_4699_);
lean_dec_ref(v_inst_4698_);
lean_dec_ref(v___f_4697_);
lean_dec_ref(v_config_4696_);
lean_dec(v_handler_4695_);
lean_dec_ref(v_responseBodyInstance_4694_);
lean_dec_ref(v_h_4693_);
v_a_4708_ = lean_ctor_get(v_x_4706_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v_x_4706_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4710_ = v_x_4706_;
v_isShared_4711_ = v_isSharedCheck_4716_;
goto v_resetjp_4709_;
}
else
{
lean_inc(v_a_4708_);
lean_dec(v_x_4706_);
v___x_4710_ = lean_box(0);
v_isShared_4711_ = v_isSharedCheck_4716_;
goto v_resetjp_4709_;
}
v_resetjp_4709_:
{
lean_object* v___x_4713_; 
if (v_isShared_4711_ == 0)
{
v___x_4713_ = v___x_4710_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4715_; 
v_reuseFailAlloc_4715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4715_, 0, v_a_4708_);
v___x_4713_ = v_reuseFailAlloc_4715_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
lean_object* v___x_4714_; 
v___x_4714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4713_);
return v___x_4714_;
}
}
}
else
{
lean_object* v_a_4717_; lean_object* v___x_4719_; uint8_t v_isShared_4720_; uint8_t v_isSharedCheck_4744_; 
v_a_4717_ = lean_ctor_get(v_x_4706_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v_x_4706_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4719_ = v_x_4706_;
v_isShared_4720_ = v_isSharedCheck_4744_;
goto v_resetjp_4718_;
}
else
{
lean_inc(v_a_4717_);
lean_dec(v_x_4706_);
v___x_4719_ = lean_box(0);
v_isShared_4720_ = v_isSharedCheck_4744_;
goto v_resetjp_4718_;
}
v_resetjp_4718_:
{
lean_object* v___x_4721_; lean_object* v___f_4722_; lean_object* v___x_4723_; lean_object* v___f_4724_; lean_object* v___x_4725_; lean_object* v___f_4726_; lean_object* v___x_4727_; lean_object* v___f_4728_; lean_object* v___x_4729_; lean_object* v___f_4730_; lean_object* v___f_4731_; lean_object* v___x_4732_; lean_object* v___f_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___f_4736_; lean_object* v___x_4737_; lean_object* v___x_4739_; 
v___x_4721_ = lean_box(v___x_4692_);
lean_inc_ref_n(v_connectionContext_4700_, 2);
lean_inc_ref(v_inst_4698_);
lean_inc_n(v_a_4717_, 3);
lean_inc_ref(v_config_4696_);
lean_inc_n(v_handler_4695_, 3);
lean_inc_ref_n(v_responseBodyInstance_4694_, 2);
lean_inc_ref_n(v_h_4693_, 3);
v___f_4722_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed), 12, 10);
lean_closure_set(v___f_4722_, 0, v___x_4721_);
lean_closure_set(v___f_4722_, 1, v_h_4693_);
lean_closure_set(v___f_4722_, 2, v_responseBodyInstance_4694_);
lean_closure_set(v___f_4722_, 3, v_handler_4695_);
lean_closure_set(v___f_4722_, 4, v_config_4696_);
lean_closure_set(v___f_4722_, 5, v___f_4697_);
lean_closure_set(v___f_4722_, 6, v_a_4717_);
lean_closure_set(v___f_4722_, 7, v_inst_4698_);
lean_closure_set(v___f_4722_, 8, v_socket_4699_);
lean_closure_set(v___f_4722_, 9, v_connectionContext_4700_);
v___x_4723_ = lean_box(v___x_4692_);
v___f_4724_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed), 8, 6);
lean_closure_set(v___f_4724_, 0, v_h_4693_);
lean_closure_set(v___f_4724_, 1, v_handler_4695_);
lean_closure_set(v___f_4724_, 2, v_extensions_4701_);
lean_closure_set(v___f_4724_, 3, v_connectionContext_4700_);
lean_closure_set(v___f_4724_, 4, v___x_4723_);
lean_closure_set(v___f_4724_, 5, v___f_4722_);
v___x_4725_ = lean_box(v___x_4692_);
v___f_4726_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed), 13, 10);
lean_closure_set(v___f_4726_, 0, v_h_4693_);
lean_closure_set(v___f_4726_, 1, v_responseBodyInstance_4694_);
lean_closure_set(v___f_4726_, 2, v_handler_4695_);
lean_closure_set(v___f_4726_, 3, v_config_4696_);
lean_closure_set(v___f_4726_, 4, v_connectionContext_4700_);
lean_closure_set(v___f_4726_, 5, v___x_4725_);
lean_closure_set(v___f_4726_, 6, v___f_4724_);
lean_closure_set(v___f_4726_, 7, v_a_4717_);
lean_closure_set(v___f_4726_, 8, v___f_4702_);
lean_closure_set(v___f_4726_, 9, v_inst_4698_);
v___x_4727_ = lean_box(v___x_4692_);
v___f_4728_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed), 7, 5);
lean_closure_set(v___f_4728_, 0, v_h_4693_);
lean_closure_set(v___f_4728_, 1, v_handler_4695_);
lean_closure_set(v___f_4728_, 2, v_a_4717_);
lean_closure_set(v___f_4728_, 3, v___x_4727_);
lean_closure_set(v___f_4728_, 4, v___f_4703_);
v___x_4729_ = lean_box(v___x_4692_);
v___f_4730_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed), 5, 3);
lean_closure_set(v___f_4730_, 0, v_a_4717_);
lean_closure_set(v___f_4730_, 1, v___x_4729_);
lean_closure_set(v___f_4730_, 2, v___f_4728_);
lean_inc_ref(v___f_4730_);
v___f_4731_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed), 3, 1);
lean_closure_set(v___f_4731_, 0, v___f_4730_);
v___x_4732_ = lean_box(v___x_4692_);
v___f_4733_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed), 7, 5);
lean_closure_set(v___f_4733_, 0, v_responseBodyInstance_4694_);
lean_closure_set(v___f_4733_, 1, v___x_4732_);
lean_closure_set(v___f_4733_, 2, v___f_4731_);
lean_closure_set(v___f_4733_, 3, v___f_4730_);
lean_closure_set(v___f_4733_, 4, v___f_4704_);
v___x_4734_ = lean_unsigned_to_nat(0u);
v___x_4735_ = lean_box(v___x_4692_);
v___f_4736_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21___boxed), 6, 4);
lean_closure_set(v___f_4736_, 0, v___f_4726_);
lean_closure_set(v___f_4736_, 1, v___x_4734_);
lean_closure_set(v___f_4736_, 2, v___x_4705_);
lean_closure_set(v___f_4736_, 3, v___x_4735_);
v___x_4737_ = lean_io_promise_new();
if (v_isShared_4720_ == 0)
{
lean_ctor_set(v___x_4719_, 0, v___x_4737_);
v___x_4739_ = v___x_4719_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v___x_4737_);
v___x_4739_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; 
v___x_4740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4740_, 0, v___x_4739_);
v___x_4741_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4734_, v___x_4692_, v___x_4740_, v___f_4736_);
v___x_4742_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4734_, v___x_4692_, v___x_4741_, v___f_4733_);
return v___x_4742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22___boxed(lean_object* v___x_4745_, lean_object* v_h_4746_, lean_object* v_responseBodyInstance_4747_, lean_object* v_handler_4748_, lean_object* v_config_4749_, lean_object* v___f_4750_, lean_object* v_inst_4751_, lean_object* v_socket_4752_, lean_object* v_connectionContext_4753_, lean_object* v_extensions_4754_, lean_object* v___f_4755_, lean_object* v___f_4756_, lean_object* v___f_4757_, lean_object* v___x_4758_, lean_object* v_x_4759_, lean_object* v___y_4760_){
_start:
{
uint8_t v___x_8719__boxed_4761_; lean_object* v_res_4762_; 
v___x_8719__boxed_4761_ = lean_unbox(v___x_4745_);
v_res_4762_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22(v___x_8719__boxed_4761_, v_h_4746_, v_responseBodyInstance_4747_, v_handler_4748_, v_config_4749_, v___f_4750_, v_inst_4751_, v_socket_4752_, v_connectionContext_4753_, v_extensions_4754_, v___f_4755_, v___f_4756_, v___f_4757_, v___x_4758_, v_x_4759_);
return v_res_4762_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23(lean_object* v_config_4763_, lean_object* v_machine_4764_, lean_object* v_a_4765_, lean_object* v___x_4766_, lean_object* v_h_4767_, lean_object* v_responseBodyInstance_4768_, lean_object* v_handler_4769_, lean_object* v___f_4770_, lean_object* v_inst_4771_, lean_object* v_socket_4772_, lean_object* v_connectionContext_4773_, lean_object* v_extensions_4774_, lean_object* v___f_4775_, lean_object* v___f_4776_, lean_object* v___f_4777_, lean_object* v_x_4778_){
_start:
{
if (lean_obj_tag(v_x_4778_) == 0)
{
lean_object* v_a_4780_; lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4788_; 
lean_dec_ref(v___f_4777_);
lean_dec_ref(v___f_4776_);
lean_dec_ref(v___f_4775_);
lean_dec(v_extensions_4774_);
lean_dec_ref(v_connectionContext_4773_);
lean_dec(v_socket_4772_);
lean_dec_ref(v_inst_4771_);
lean_dec_ref(v___f_4770_);
lean_dec(v_handler_4769_);
lean_dec_ref(v_responseBodyInstance_4768_);
lean_dec_ref(v_h_4767_);
lean_dec(v___x_4766_);
lean_dec_ref(v_a_4765_);
lean_dec_ref(v_machine_4764_);
lean_dec_ref(v_config_4763_);
v_a_4780_ = lean_ctor_get(v_x_4778_, 0);
v_isSharedCheck_4788_ = !lean_is_exclusive(v_x_4778_);
if (v_isSharedCheck_4788_ == 0)
{
v___x_4782_ = v_x_4778_;
v_isShared_4783_ = v_isSharedCheck_4788_;
goto v_resetjp_4781_;
}
else
{
lean_inc(v_a_4780_);
lean_dec(v_x_4778_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4788_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
lean_object* v___x_4785_; 
if (v_isShared_4783_ == 0)
{
v___x_4785_ = v___x_4782_;
goto v_reusejp_4784_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v_a_4780_);
v___x_4785_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4784_;
}
v_reusejp_4784_:
{
lean_object* v___x_4786_; 
v___x_4786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4786_, 0, v___x_4785_);
return v___x_4786_;
}
}
}
else
{
lean_object* v_a_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4807_; 
v_a_4789_ = lean_ctor_get(v_x_4778_, 0);
v_isSharedCheck_4807_ = !lean_is_exclusive(v_x_4778_);
if (v_isSharedCheck_4807_ == 0)
{
v___x_4791_ = v_x_4778_;
v_isShared_4792_ = v_isSharedCheck_4807_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_a_4789_);
lean_dec(v_x_4778_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4807_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v_keepAliveTimeout_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; uint8_t v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___f_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4803_; 
v_keepAliveTimeout_4793_ = lean_ctor_get(v_config_4763_, 5);
lean_inc_n(v_keepAliveTimeout_4793_, 2);
v___x_4794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4794_, 0, v_keepAliveTimeout_4793_);
v___x_4795_ = lean_box(0);
v___x_4796_ = 0;
v___x_4797_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_4797_, 0, v_machine_4764_);
lean_ctor_set(v___x_4797_, 1, v_a_4765_);
lean_ctor_set(v___x_4797_, 2, v___x_4794_);
lean_ctor_set(v___x_4797_, 3, v_keepAliveTimeout_4793_);
lean_ctor_set(v___x_4797_, 4, v___x_4795_);
lean_ctor_set(v___x_4797_, 5, v_a_4789_);
lean_ctor_set(v___x_4797_, 6, v___x_4795_);
lean_ctor_set(v___x_4797_, 7, v___x_4766_);
lean_ctor_set(v___x_4797_, 8, v___x_4795_);
lean_ctor_set_uint8(v___x_4797_, sizeof(void*)*9, v___x_4796_);
lean_ctor_set_uint8(v___x_4797_, sizeof(void*)*9 + 1, v___x_4796_);
v___x_4798_ = lean_box(v___x_4796_);
lean_inc(v_socket_4772_);
v___f_4799_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22___boxed), 16, 14);
lean_closure_set(v___f_4799_, 0, v___x_4798_);
lean_closure_set(v___f_4799_, 1, v_h_4767_);
lean_closure_set(v___f_4799_, 2, v_responseBodyInstance_4768_);
lean_closure_set(v___f_4799_, 3, v_handler_4769_);
lean_closure_set(v___f_4799_, 4, v_config_4763_);
lean_closure_set(v___f_4799_, 5, v___f_4770_);
lean_closure_set(v___f_4799_, 6, v_inst_4771_);
lean_closure_set(v___f_4799_, 7, v_socket_4772_);
lean_closure_set(v___f_4799_, 8, v_connectionContext_4773_);
lean_closure_set(v___f_4799_, 9, v_extensions_4774_);
lean_closure_set(v___f_4799_, 10, v___f_4775_);
lean_closure_set(v___f_4799_, 11, v___f_4776_);
lean_closure_set(v___f_4799_, 12, v___f_4777_);
lean_closure_set(v___f_4799_, 13, v___x_4797_);
v___x_4800_ = lean_unsigned_to_nat(0u);
v___x_4801_ = l_Std_Http_Internal_Outbox_new___redArg(v_socket_4772_);
if (v_isShared_4792_ == 0)
{
lean_ctor_set(v___x_4791_, 0, v___x_4801_);
v___x_4803_ = v___x_4791_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4806_; 
v_reuseFailAlloc_4806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4806_, 0, v___x_4801_);
v___x_4803_ = v_reuseFailAlloc_4806_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4803_);
v___x_4805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4800_, v___x_4796_, v___x_4804_, v___f_4799_);
return v___x_4805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23___boxed(lean_object** _args){
lean_object* v_config_4808_ = _args[0];
lean_object* v_machine_4809_ = _args[1];
lean_object* v_a_4810_ = _args[2];
lean_object* v___x_4811_ = _args[3];
lean_object* v_h_4812_ = _args[4];
lean_object* v_responseBodyInstance_4813_ = _args[5];
lean_object* v_handler_4814_ = _args[6];
lean_object* v___f_4815_ = _args[7];
lean_object* v_inst_4816_ = _args[8];
lean_object* v_socket_4817_ = _args[9];
lean_object* v_connectionContext_4818_ = _args[10];
lean_object* v_extensions_4819_ = _args[11];
lean_object* v___f_4820_ = _args[12];
lean_object* v___f_4821_ = _args[13];
lean_object* v___f_4822_ = _args[14];
lean_object* v_x_4823_ = _args[15];
lean_object* v___y_4824_ = _args[16];
_start:
{
lean_object* v_res_4825_; 
v_res_4825_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23(v_config_4808_, v_machine_4809_, v_a_4810_, v___x_4811_, v_h_4812_, v_responseBodyInstance_4813_, v_handler_4814_, v___f_4815_, v_inst_4816_, v_socket_4817_, v_connectionContext_4818_, v_extensions_4819_, v___f_4820_, v___f_4821_, v___f_4822_, v_x_4823_);
return v_res_4825_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24(lean_object* v_config_4826_, lean_object* v_machine_4827_, lean_object* v_h_4828_, lean_object* v_responseBodyInstance_4829_, lean_object* v_handler_4830_, lean_object* v___f_4831_, lean_object* v_inst_4832_, lean_object* v_socket_4833_, lean_object* v_connectionContext_4834_, lean_object* v_extensions_4835_, lean_object* v___f_4836_, lean_object* v___f_4837_, lean_object* v___f_4838_, lean_object* v_x_4839_){
_start:
{
if (lean_obj_tag(v_x_4839_) == 0)
{
lean_object* v_a_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4849_; 
lean_dec_ref(v___f_4838_);
lean_dec_ref(v___f_4837_);
lean_dec_ref(v___f_4836_);
lean_dec(v_extensions_4835_);
lean_dec_ref(v_connectionContext_4834_);
lean_dec(v_socket_4833_);
lean_dec_ref(v_inst_4832_);
lean_dec_ref(v___f_4831_);
lean_dec(v_handler_4830_);
lean_dec_ref(v_responseBodyInstance_4829_);
lean_dec_ref(v_h_4828_);
lean_dec_ref(v_machine_4827_);
lean_dec_ref(v_config_4826_);
v_a_4841_ = lean_ctor_get(v_x_4839_, 0);
v_isSharedCheck_4849_ = !lean_is_exclusive(v_x_4839_);
if (v_isSharedCheck_4849_ == 0)
{
v___x_4843_ = v_x_4839_;
v_isShared_4844_ = v_isSharedCheck_4849_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_a_4841_);
lean_dec(v_x_4839_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4849_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4846_; 
if (v_isShared_4844_ == 0)
{
v___x_4846_ = v___x_4843_;
goto v_reusejp_4845_;
}
else
{
lean_object* v_reuseFailAlloc_4848_; 
v_reuseFailAlloc_4848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4848_, 0, v_a_4841_);
v___x_4846_ = v_reuseFailAlloc_4848_;
goto v_reusejp_4845_;
}
v_reusejp_4845_:
{
lean_object* v___x_4847_; 
v___x_4847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4847_, 0, v___x_4846_);
return v___x_4847_;
}
}
}
else
{
lean_object* v_a_4850_; lean_object* v___x_4852_; uint8_t v_isShared_4853_; uint8_t v_isSharedCheck_4864_; 
v_a_4850_ = lean_ctor_get(v_x_4839_, 0);
v_isSharedCheck_4864_ = !lean_is_exclusive(v_x_4839_);
if (v_isSharedCheck_4864_ == 0)
{
v___x_4852_ = v_x_4839_;
v_isShared_4853_ = v_isSharedCheck_4864_;
goto v_resetjp_4851_;
}
else
{
lean_inc(v_a_4850_);
lean_dec(v_x_4839_);
v___x_4852_ = lean_box(0);
v_isShared_4853_ = v_isSharedCheck_4864_;
goto v_resetjp_4851_;
}
v_resetjp_4851_:
{
lean_object* v___x_4854_; lean_object* v___f_4855_; lean_object* v___x_4856_; uint8_t v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4860_; 
v___x_4854_ = lean_box(0);
v___f_4855_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23___boxed), 17, 15);
lean_closure_set(v___f_4855_, 0, v_config_4826_);
lean_closure_set(v___f_4855_, 1, v_machine_4827_);
lean_closure_set(v___f_4855_, 2, v_a_4850_);
lean_closure_set(v___f_4855_, 3, v___x_4854_);
lean_closure_set(v___f_4855_, 4, v_h_4828_);
lean_closure_set(v___f_4855_, 5, v_responseBodyInstance_4829_);
lean_closure_set(v___f_4855_, 6, v_handler_4830_);
lean_closure_set(v___f_4855_, 7, v___f_4831_);
lean_closure_set(v___f_4855_, 8, v_inst_4832_);
lean_closure_set(v___f_4855_, 9, v_socket_4833_);
lean_closure_set(v___f_4855_, 10, v_connectionContext_4834_);
lean_closure_set(v___f_4855_, 11, v_extensions_4835_);
lean_closure_set(v___f_4855_, 12, v___f_4836_);
lean_closure_set(v___f_4855_, 13, v___f_4837_);
lean_closure_set(v___f_4855_, 14, v___f_4838_);
v___x_4856_ = lean_unsigned_to_nat(0u);
v___x_4857_ = 0;
v___x_4858_ = l_Std_CloseableChannel_new___redArg(v___x_4854_);
if (v_isShared_4853_ == 0)
{
lean_ctor_set(v___x_4852_, 0, v___x_4858_);
v___x_4860_ = v___x_4852_;
goto v_reusejp_4859_;
}
else
{
lean_object* v_reuseFailAlloc_4863_; 
v_reuseFailAlloc_4863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4863_, 0, v___x_4858_);
v___x_4860_ = v_reuseFailAlloc_4863_;
goto v_reusejp_4859_;
}
v_reusejp_4859_:
{
lean_object* v___x_4861_; lean_object* v___x_4862_; 
v___x_4861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4861_, 0, v___x_4860_);
v___x_4862_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4856_, v___x_4857_, v___x_4861_, v___f_4855_);
return v___x_4862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24___boxed(lean_object* v_config_4865_, lean_object* v_machine_4866_, lean_object* v_h_4867_, lean_object* v_responseBodyInstance_4868_, lean_object* v_handler_4869_, lean_object* v___f_4870_, lean_object* v_inst_4871_, lean_object* v_socket_4872_, lean_object* v_connectionContext_4873_, lean_object* v_extensions_4874_, lean_object* v___f_4875_, lean_object* v___f_4876_, lean_object* v___f_4877_, lean_object* v_x_4878_, lean_object* v___y_4879_){
_start:
{
lean_object* v_res_4880_; 
v_res_4880_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24(v_config_4865_, v_machine_4866_, v_h_4867_, v_responseBodyInstance_4868_, v_handler_4869_, v___f_4870_, v_inst_4871_, v_socket_4872_, v_connectionContext_4873_, v_extensions_4874_, v___f_4875_, v___f_4876_, v___f_4877_, v_x_4878_);
return v_res_4880_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object* v_inst_4883_, lean_object* v_h_4884_, lean_object* v_connection_4885_, lean_object* v_config_4886_, lean_object* v_connectionContext_4887_, lean_object* v_handler_4888_){
_start:
{
lean_object* v_responseBodyInstance_4890_; lean_object* v_socket_4891_; lean_object* v_machine_4892_; lean_object* v_extensions_4893_; lean_object* v___f_4894_; lean_object* v___f_4895_; lean_object* v___f_4896_; lean_object* v___f_4897_; lean_object* v___f_4898_; lean_object* v___x_4899_; uint8_t v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; 
v_responseBodyInstance_4890_ = lean_ctor_get(v_h_4884_, 0);
lean_inc_ref(v_responseBodyInstance_4890_);
v_socket_4891_ = lean_ctor_get(v_connection_4885_, 0);
lean_inc_n(v_socket_4891_, 2);
v_machine_4892_ = lean_ctor_get(v_connection_4885_, 1);
lean_inc_ref(v_machine_4892_);
v_extensions_4893_ = lean_ctor_get(v_connection_4885_, 2);
lean_inc(v_extensions_4893_);
lean_dec_ref(v_connection_4885_);
v___f_4894_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0));
v___f_4895_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1));
v___f_4896_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
lean_inc_ref(v_inst_4883_);
v___f_4897_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4897_, 0, v_inst_4883_);
lean_closure_set(v___f_4897_, 1, v_socket_4891_);
v___f_4898_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24___boxed), 15, 13);
lean_closure_set(v___f_4898_, 0, v_config_4886_);
lean_closure_set(v___f_4898_, 1, v_machine_4892_);
lean_closure_set(v___f_4898_, 2, v_h_4884_);
lean_closure_set(v___f_4898_, 3, v_responseBodyInstance_4890_);
lean_closure_set(v___f_4898_, 4, v_handler_4888_);
lean_closure_set(v___f_4898_, 5, v___f_4894_);
lean_closure_set(v___f_4898_, 6, v_inst_4883_);
lean_closure_set(v___f_4898_, 7, v_socket_4891_);
lean_closure_set(v___f_4898_, 8, v_connectionContext_4887_);
lean_closure_set(v___f_4898_, 9, v_extensions_4893_);
lean_closure_set(v___f_4898_, 10, v___f_4895_);
lean_closure_set(v___f_4898_, 11, v___f_4897_);
lean_closure_set(v___f_4898_, 12, v___f_4896_);
v___x_4899_ = lean_unsigned_to_nat(0u);
v___x_4900_ = 0;
v___x_4901_ = l_Std_Http_Body_mkStream();
v___x_4902_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4899_, v___x_4900_, v___x_4901_, v___f_4898_);
return v___x_4902_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object* v_inst_4903_, lean_object* v_h_4904_, lean_object* v_connection_4905_, lean_object* v_config_4906_, lean_object* v_connectionContext_4907_, lean_object* v_handler_4908_, lean_object* v_a_4909_){
_start:
{
lean_object* v_res_4910_; 
v_res_4910_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4903_, v_h_4904_, v_connection_4905_, v_config_4906_, v_connectionContext_4907_, v_handler_4908_);
return v_res_4910_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object* v_00_u03b1_4911_, lean_object* v_00_u03c3_4912_, lean_object* v_inst_4913_, lean_object* v_h_4914_, lean_object* v_connection_4915_, lean_object* v_config_4916_, lean_object* v_connectionContext_4917_, lean_object* v_handler_4918_){
_start:
{
lean_object* v___x_4920_; 
v___x_4920_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4913_, v_h_4914_, v_connection_4915_, v_config_4916_, v_connectionContext_4917_, v_handler_4918_);
return v___x_4920_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object* v_00_u03b1_4921_, lean_object* v_00_u03c3_4922_, lean_object* v_inst_4923_, lean_object* v_h_4924_, lean_object* v_connection_4925_, lean_object* v_config_4926_, lean_object* v_connectionContext_4927_, lean_object* v_handler_4928_, lean_object* v_a_4929_){
_start:
{
lean_object* v_res_4930_; 
v_res_4930_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(v_00_u03b1_4921_, v_00_u03c3_4922_, v_inst_4923_, v_h_4924_, v_connection_4925_, v_config_4926_, v_connectionContext_4927_, v_handler_4928_);
return v_res_4930_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_4931_; lean_object* v___x_4932_; 
v___x_4931_ = 0;
v___x_4932_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4931_);
return v___x_4932_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4933_; lean_object* v___x_4934_; 
v___x_4933_ = lean_unsigned_to_nat(4096u);
v___x_4934_ = lean_mk_empty_byte_array(v___x_4933_);
return v___x_4934_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4935_; lean_object* v___x_4936_; 
v___x_4935_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1);
v___x_4936_ = l_ByteArray_mkIterator(v___x_4935_);
return v___x_4936_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3(void){
_start:
{
uint8_t v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4937_ = 0;
v___x_4938_ = lean_unsigned_to_nat(0u);
v___x_4939_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0);
v___x_4940_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2);
v___x_4941_ = lean_box(0);
v___x_4942_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_4942_, 0, v___x_4941_);
lean_ctor_set(v___x_4942_, 1, v___x_4940_);
lean_ctor_set(v___x_4942_, 2, v___x_4939_);
lean_ctor_set(v___x_4942_, 3, v___x_4938_);
lean_ctor_set(v___x_4942_, 4, v___x_4938_);
lean_ctor_set(v___x_4942_, 5, v___x_4938_);
lean_ctor_set_uint8(v___x_4942_, sizeof(void*)*6, v___x_4937_);
return v___x_4942_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7(void){
_start:
{
uint8_t v___x_4950_; lean_object* v___x_4951_; 
v___x_4950_ = 1;
v___x_4951_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_4950_);
return v___x_4951_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_4952_; uint8_t v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; 
v___x_4952_ = lean_unsigned_to_nat(0u);
v___x_4953_ = 0;
v___x_4954_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7);
v___x_4955_ = lean_box(0);
v___x_4956_ = lean_box(0);
v___x_4957_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6));
v___x_4958_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4));
v___x_4959_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_4959_, 0, v___x_4958_);
lean_ctor_set(v___x_4959_, 1, v___x_4957_);
lean_ctor_set(v___x_4959_, 2, v___x_4956_);
lean_ctor_set(v___x_4959_, 3, v___x_4955_);
lean_ctor_set(v___x_4959_, 4, v___x_4954_);
lean_ctor_set(v___x_4959_, 5, v___x_4952_);
lean_ctor_set_uint8(v___x_4959_, sizeof(void*)*6, v___x_4953_);
lean_ctor_set_uint8(v___x_4959_, sizeof(void*)*6 + 1, v___x_4953_);
lean_ctor_set_uint8(v___x_4959_, sizeof(void*)*6 + 2, v___x_4953_);
return v___x_4959_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object* v_config_4960_, lean_object* v_client_4961_, lean_object* v_extensions_4962_, lean_object* v_inst_4963_, lean_object* v_inst_4964_, lean_object* v_handler_4965_, lean_object* v_x_4966_){
_start:
{
if (lean_obj_tag(v_x_4966_) == 0)
{
lean_object* v_a_4968_; lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_4976_; 
lean_dec(v_handler_4965_);
lean_dec_ref(v_inst_4964_);
lean_dec_ref(v_inst_4963_);
lean_dec(v_extensions_4962_);
lean_dec(v_client_4961_);
lean_dec_ref(v_config_4960_);
v_a_4968_ = lean_ctor_get(v_x_4966_, 0);
v_isSharedCheck_4976_ = !lean_is_exclusive(v_x_4966_);
if (v_isSharedCheck_4976_ == 0)
{
v___x_4970_ = v_x_4966_;
v_isShared_4971_ = v_isSharedCheck_4976_;
goto v_resetjp_4969_;
}
else
{
lean_inc(v_a_4968_);
lean_dec(v_x_4966_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_4976_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
lean_object* v___x_4973_; 
if (v_isShared_4971_ == 0)
{
v___x_4973_ = v___x_4970_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v_a_4968_);
v___x_4973_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
lean_object* v___x_4974_; 
v___x_4974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4973_);
return v___x_4974_;
}
}
}
else
{
lean_object* v_a_4977_; uint8_t v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; uint8_t v_enableKeepAlive_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; 
v_a_4977_ = lean_ctor_get(v_x_4966_, 0);
lean_inc(v_a_4977_);
lean_dec_ref_known(v_x_4966_, 1);
v___x_4978_ = 0;
v___x_4979_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3);
v___x_4980_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5));
v___x_4981_ = lean_box(0);
v___x_4982_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8);
v___x_4983_ = l_Std_Http_Config_toH1Config(v_config_4960_);
v_enableKeepAlive_4984_ = lean_ctor_get_uint8(v___x_4983_, sizeof(void*)*18);
v___x_4985_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v___x_4985_, 0, v___x_4979_);
lean_ctor_set(v___x_4985_, 1, v___x_4982_);
lean_ctor_set(v___x_4985_, 2, v___x_4983_);
lean_ctor_set(v___x_4985_, 3, v___x_4980_);
lean_ctor_set(v___x_4985_, 4, v___x_4981_);
lean_ctor_set(v___x_4985_, 5, v___x_4981_);
lean_ctor_set_uint8(v___x_4985_, sizeof(void*)*6, v_enableKeepAlive_4984_);
lean_ctor_set_uint8(v___x_4985_, sizeof(void*)*6 + 1, v___x_4978_);
v___x_4986_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4986_, 0, v_client_4961_);
lean_ctor_set(v___x_4986_, 1, v___x_4985_);
lean_ctor_set(v___x_4986_, 2, v_extensions_4962_);
v___x_4987_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_4963_, v_inst_4964_, v___x_4986_, v_config_4960_, v_a_4977_, v_handler_4965_);
return v___x_4987_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object* v_config_4988_, lean_object* v_client_4989_, lean_object* v_extensions_4990_, lean_object* v_inst_4991_, lean_object* v_inst_4992_, lean_object* v_handler_4993_, lean_object* v_x_4994_, lean_object* v___y_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l_Std_Http_Server_serveConnection___redArg___lam__0(v_config_4988_, v_client_4989_, v_extensions_4990_, v_inst_4991_, v_inst_4992_, v_handler_4993_, v_x_4994_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object* v_inst_4997_, lean_object* v_inst_4998_, lean_object* v_client_4999_, lean_object* v_handler_5000_, lean_object* v_config_5001_, lean_object* v_extensions_5002_, lean_object* v_a_5003_){
_start:
{
lean_object* v___f_5005_; lean_object* v___x_5006_; uint8_t v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; 
v___f_5005_ = lean_alloc_closure((void*)(l_Std_Http_Server_serveConnection___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_5005_, 0, v_config_5001_);
lean_closure_set(v___f_5005_, 1, v_client_4999_);
lean_closure_set(v___f_5005_, 2, v_extensions_5002_);
lean_closure_set(v___f_5005_, 3, v_inst_4997_);
lean_closure_set(v___f_5005_, 4, v_inst_4998_);
lean_closure_set(v___f_5005_, 5, v_handler_5000_);
v___x_5006_ = lean_unsigned_to_nat(0u);
v___x_5007_ = 0;
lean_inc_ref(v_a_5003_);
v___x_5008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5008_, 0, v_a_5003_);
v___x_5009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5009_, 0, v___x_5008_);
v___x_5010_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5006_, v___x_5007_, v___x_5009_, v___f_5005_);
return v___x_5010_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object* v_inst_5011_, lean_object* v_inst_5012_, lean_object* v_client_5013_, lean_object* v_handler_5014_, lean_object* v_config_5015_, lean_object* v_extensions_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_){
_start:
{
lean_object* v_res_5019_; 
v_res_5019_ = l_Std_Http_Server_serveConnection___redArg(v_inst_5011_, v_inst_5012_, v_client_5013_, v_handler_5014_, v_config_5015_, v_extensions_5016_, v_a_5017_);
lean_dec_ref(v_a_5017_);
return v_res_5019_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object* v_t_5020_, lean_object* v_00_u03c3_5021_, lean_object* v_inst_5022_, lean_object* v_inst_5023_, lean_object* v_client_5024_, lean_object* v_handler_5025_, lean_object* v_config_5026_, lean_object* v_extensions_5027_, lean_object* v_a_5028_){
_start:
{
lean_object* v___x_5030_; 
v___x_5030_ = l_Std_Http_Server_serveConnection___redArg(v_inst_5022_, v_inst_5023_, v_client_5024_, v_handler_5025_, v_config_5026_, v_extensions_5027_, v_a_5028_);
return v___x_5030_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object* v_t_5031_, lean_object* v_00_u03c3_5032_, lean_object* v_inst_5033_, lean_object* v_inst_5034_, lean_object* v_client_5035_, lean_object* v_handler_5036_, lean_object* v_config_5037_, lean_object* v_extensions_5038_, lean_object* v_a_5039_, lean_object* v_a_5040_){
_start:
{
lean_object* v_res_5041_; 
v_res_5041_ = l_Std_Http_Server_serveConnection(v_t_5031_, v_00_u03c3_5032_, v_inst_5033_, v_inst_5034_, v_client_5035_, v_handler_5036_, v_config_5037_, v_extensions_5038_, v_a_5039_);
lean_dec_ref(v_a_5039_);
return v_res_5041_;
}
}
lean_object* runtime_initialize_Std_Async_TCP(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Transport(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Transport_Outbox(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Protocol_H1(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Handler(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Async_TCP(uint8_t builtin);
lean_object* initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* initialize_Std_Http_Transport(uint8_t builtin);
lean_object* initialize_Std_Http_Transport_Outbox(uint8_t builtin);
lean_object* initialize_Std_Http_Protocol_H1(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Handler(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Server_Connection(builtin);
}
#ifdef __cplusplus
}
#endif
