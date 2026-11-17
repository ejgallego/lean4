// Lean compiler output
// Module: Std.Http.Transport
// Imports: public import Std.Http.Protocol.H1
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
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CloseableChannel_tryRecv___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_uint64_dec_le(uint64_t, uint64_t);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_CloseableChannel_send___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Std_CloseableChannel_isClosed___redArg(lean_object*);
lean_object* l_Std_CloseableChannel_close___redArg(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_CloseableChannel_recv___redArg(lean_object*);
lean_object* lean_uv_tcp_send(lean_object*, lean_object*);
lean_object* l_Std_CloseableChannel_recvSelector___redArg(lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_get_own(lean_object*);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* lean_uv_tcp_recv(lean_object*, uint64_t);
lean_object* l_Std_Async_TCP_Socket_Client_recvSelector___boxed(lean_object*, lean_object*);
lean_object* l_Std_CloseableChannel_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instTransportClient___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the promise linked to the Async was dropped"};
static const lean_object* l_Std_Http_instTransportClient___lam__2___closed__0 = (const lean_object*)&l_Std_Http_instTransportClient___lam__2___closed__0_value;
static const lean_closure_object l_Std_Http_instTransportClient___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___lam__2___closed__0_value)} };
static const lean_object* l_Std_Http_instTransportClient___lam__2___closed__1 = (const lean_object*)&l_Std_Http_instTransportClient___lam__2___closed__1_value;
static const lean_closure_object l_Std_Http_instTransportClient___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___lam__2___closed__1_value)} };
static const lean_object* l_Std_Http_instTransportClient___lam__2___closed__2 = (const lean_object*)&l_Std_Http_instTransportClient___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_instTransportClient___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instTransportClient___lam__3___closed__0;
static lean_once_cell_t l_Std_Http_instTransportClient___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instTransportClient___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_instTransportClient___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instTransportClient___lam__4___closed__0;
static const lean_ctor_object l_Std_Http_instTransportClient___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instTransportClient___lam__4___closed__1 = (const lean_object*)&l_Std_Http_instTransportClient___lam__4___closed__1_value;
static const lean_ctor_object l_Std_Http_instTransportClient___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___lam__4___closed__1_value)}};
static const lean_object* l_Std_Http_instTransportClient___lam__4___closed__2 = (const lean_object*)&l_Std_Http_instTransportClient___lam__4___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__7(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__7___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instTransportClient___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__0 = (const lean_object*)&l_Std_Http_instTransportClient___closed__0_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__1 = (const lean_object*)&l_Std_Http_instTransportClient___closed__1_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___closed__1_value)} };
static const lean_object* l_Std_Http_instTransportClient___closed__2 = (const lean_object*)&l_Std_Http_instTransportClient___closed__2_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__6___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___closed__2_value)} };
static const lean_object* l_Std_Http_instTransportClient___closed__3 = (const lean_object*)&l_Std_Http_instTransportClient___closed__3_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_TCP_Socket_Client_recvSelector___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__4 = (const lean_object*)&l_Std_Http_instTransportClient___closed__4_value;
static const lean_closure_object l_Std_Http_instTransportClient___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instTransportClient___lam__7___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instTransportClient___closed__5 = (const lean_object*)&l_Std_Http_instTransportClient___closed__5_value;
static const lean_ctor_object l_Std_Http_instTransportClient___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_instTransportClient___closed__0_value),((lean_object*)&l_Std_Http_instTransportClient___closed__3_value),((lean_object*)&l_Std_Http_instTransportClient___closed__4_value),((lean_object*)&l_Std_Http_instTransportClient___closed__5_value)}};
static const lean_object* l_Std_Http_instTransportClient___closed__6 = (const lean_object*)&l_Std_Http_instTransportClient___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Http_instTransportClient = (const lean_object*)&l_Std_Http_instTransportClient___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new();
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Mock_recvJoined___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_recvJoined___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_recvJoined___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_recvJoined___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_Mock_recvJoined___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_recvJoined___lam__4, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_recvJoined___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_recvJoined___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Internal_Mock_send___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "trying to send on an already closed channel"};
static const lean_object* l_Std_Http_Internal_Mock_send___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_Internal_Mock_send___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "trying to close an already closed channel"};
static const lean_object* l_Std_Http_Internal_Mock_send___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Mock_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_send___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_send___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_send___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_Mock_send___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_send___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Internal_Mock_send___closed__0_value)} };
static const lean_object* l_Std_Http_Internal_Mock_send___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_send___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0(size_t, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Mock_sendAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_sendAll___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Mock_sendAll___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_sendAll___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Mock_Client_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Mock_Client_close___closed__0 = (const lean_object*)&l_Std_Http_Internal_Mock_Client_close___closed__0_value;
static const lean_ctor_object l_Std_Http_Internal_Mock_Client_close___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Mock_send___lam__0___closed__1_value)}};
static const lean_object* l_Std_Http_Internal_Mock_Client_close___closed__1 = (const lean_object*)&l_Std_Http_Internal_Mock_Client_close___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportClient___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__0 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportClient___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__1 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__1_value;
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportClient___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__2 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__2_value;
static const lean_closure_object l_Std_Http_Internal_instTransportClient___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_Client_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__3 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__3_value;
static const lean_ctor_object l_Std_Http_Internal_instTransportClient___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__0_value),((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__1_value),((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__2_value),((lean_object*)&l_Std_Http_Internal_instTransportClient___closed__3_value)}};
static const lean_object* l_Std_Http_Internal_instTransportClient___closed__4 = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__4_value;
LEAN_EXPORT const lean_object* l_Std_Http_Internal_instTransportClient = (const lean_object*)&l_Std_Http_Internal_instTransportClient___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportServer___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__0 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportServer___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__1 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__1_value;
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_instTransportServer___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__2 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__2_value;
static const lean_closure_object l_Std_Http_Internal_instTransportServer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Mock_Server_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__3 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__3_value;
static const lean_ctor_object l_Std_Http_Internal_instTransportServer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__0_value),((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__1_value),((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__2_value),((lean_object*)&l_Std_Http_Internal_instTransportServer___closed__3_value)}};
static const lean_object* l_Std_Http_Internal_instTransportServer___closed__4 = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__4_value;
LEAN_EXPORT const lean_object* l_Std_Http_Internal_instTransportServer = (const lean_object*)&l_Std_Http_Internal_instTransportServer___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0(lean_object* v___x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_mk_io_user_error(v___x_1_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v___x_3_);
return v___x_4_;
}
else
{
lean_object* v_val_5_; 
lean_dec_ref(v___x_1_);
v_val_5_ = lean_ctor_get(v_x_2_, 0);
lean_inc(v_val_5_);
return v_val_5_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__0___boxed(lean_object* v___x_6_, lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Std_Http_instTransportClient___lam__0(v___x_6_, v_x_7_);
lean_dec(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1(lean_object* v___f_9_, lean_object* v_x_10_){
_start:
{
if (lean_obj_tag(v_x_10_) == 0)
{
lean_object* v_a_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_20_; 
lean_dec_ref(v___f_9_);
v_a_12_ = lean_ctor_get(v_x_10_, 0);
v_isSharedCheck_20_ = !lean_is_exclusive(v_x_10_);
if (v_isSharedCheck_20_ == 0)
{
v___x_14_ = v_x_10_;
v_isShared_15_ = v_isSharedCheck_20_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_a_12_);
lean_dec(v_x_10_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_20_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
lean_object* v___x_17_; 
if (v_isShared_15_ == 0)
{
v___x_17_ = v___x_14_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v_a_12_);
v___x_17_ = v_reuseFailAlloc_19_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
lean_object* v___x_18_; 
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
}
else
{
lean_object* v_a_21_; 
v_a_21_ = lean_ctor_get(v_x_10_, 0);
lean_inc(v_a_21_);
lean_dec_ref_known(v_x_10_, 1);
if (lean_obj_tag(v_a_21_) == 0)
{
lean_object* v_a_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_30_; 
lean_dec_ref(v___f_9_);
v_a_22_ = lean_ctor_get(v_a_21_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v_a_21_);
if (v_isSharedCheck_30_ == 0)
{
v___x_24_ = v_a_21_;
v_isShared_25_ = v_isSharedCheck_30_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_a_22_);
lean_dec(v_a_21_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_30_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_27_; 
if (v_isShared_25_ == 0)
{
v___x_27_ = v___x_24_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_22_);
v___x_27_ = v_reuseFailAlloc_29_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; 
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
}
}
else
{
lean_object* v_a_31_; lean_object* v___x_32_; lean_object* v___x_33_; uint8_t v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_a_31_ = lean_ctor_get(v_a_21_, 0);
lean_inc(v_a_31_);
lean_dec_ref_known(v_a_21_, 1);
v___x_32_ = lean_io_promise_result_opt(v_a_31_);
lean_dec(v_a_31_);
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = 0;
v___x_35_ = lean_task_map(v___f_9_, v___x_32_, v___x_33_, v___x_34_);
v___x_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
return v___x_36_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__1___boxed(lean_object* v___f_37_, lean_object* v_x_38_, lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Std_Http_instTransportClient___lam__1(v___f_37_, v_x_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2(lean_object* v_client_46_, uint64_t v_expect_47_){
_start:
{
lean_object* v___f_49_; lean_object* v___x_50_; uint8_t v___x_51_; lean_object* v_val_53_; lean_object* v___x_57_; 
v___f_49_ = ((lean_object*)(l_Std_Http_instTransportClient___lam__2___closed__2));
v___x_50_ = lean_unsigned_to_nat(0u);
v___x_51_ = 0;
v___x_57_ = lean_uv_tcp_recv(v_client_46_, v_expect_47_);
if (lean_obj_tag(v___x_57_) == 0)
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_a_58_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_57_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_57_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
lean_ctor_set_tag(v___x_60_, 1);
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
v_val_53_ = v___x_63_;
goto v___jp_52_;
}
}
}
else
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_73_; 
v_a_66_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_73_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_73_ == 0)
{
v___x_68_ = v___x_57_;
v_isShared_69_ = v_isSharedCheck_73_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_57_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_73_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_71_; 
if (v_isShared_69_ == 0)
{
lean_ctor_set_tag(v___x_68_, 0);
v___x_71_ = v___x_68_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v_a_66_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
v_val_53_ = v___x_71_;
goto v___jp_52_;
}
}
}
v___jp_52_:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_54_, 0, v_val_53_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
v___x_56_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_50_, v___x_51_, v___x_55_, v___f_49_);
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__2___boxed(lean_object* v_client_74_, lean_object* v_expect_75_, lean_object* v___y_76_){
_start:
{
uint64_t v_expect_boxed_77_; lean_object* v_res_78_; 
v_expect_boxed_77_ = lean_unbox_uint64(v_expect_75_);
lean_dec_ref(v_expect_75_);
v_res_78_ = l_Std_Http_instTransportClient___lam__2(v_client_74_, v_expect_boxed_77_);
lean_dec(v_client_74_);
return v_res_78_;
}
}
static lean_object* _init_l_Std_Http_instTransportClient___lam__3___closed__0(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = ((lean_object*)(l_Std_Http_instTransportClient___lam__2___closed__0));
v___x_80_ = lean_mk_io_user_error(v___x_79_);
return v___x_80_;
}
}
static lean_object* _init_l_Std_Http_instTransportClient___lam__3___closed__1(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_obj_once(&l_Std_Http_instTransportClient___lam__3___closed__0, &l_Std_Http_instTransportClient___lam__3___closed__0_once, _init_l_Std_Http_instTransportClient___lam__3___closed__0);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3(lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_obj_once(&l_Std_Http_instTransportClient___lam__3___closed__1, &l_Std_Http_instTransportClient___lam__3___closed__1_once, _init_l_Std_Http_instTransportClient___lam__3___closed__1);
return v___x_84_;
}
else
{
lean_object* v_val_85_; 
v_val_85_ = lean_ctor_get(v_x_83_, 0);
lean_inc(v_val_85_);
return v_val_85_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__3___boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Std_Http_instTransportClient___lam__3(v_x_86_);
lean_dec(v_x_86_);
return v_res_87_;
}
}
static lean_object* _init_l_Std_Http_instTransportClient___lam__4___closed__0(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_obj_once(&l_Std_Http_instTransportClient___lam__3___closed__1, &l_Std_Http_instTransportClient___lam__3___closed__1_once, _init_l_Std_Http_instTransportClient___lam__3___closed__1);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4(lean_object* v___f_94_, lean_object* v___x_95_, lean_object* v_x_96_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
lean_dec_ref(v___x_95_);
lean_dec_ref(v___f_94_);
v_a_98_ = lean_ctor_get(v_x_96_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v_x_96_);
if (v_isSharedCheck_106_ == 0)
{
v___x_100_ = v_x_96_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v_x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_105_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; 
v___x_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
return v___x_104_;
}
}
}
else
{
lean_object* v_a_107_; uint8_t v___x_108_; 
v_a_107_ = lean_ctor_get(v_x_96_, 0);
lean_inc(v_a_107_);
lean_dec_ref_known(v_x_96_, 1);
v___x_108_ = lean_unbox(v_a_107_);
lean_dec(v_a_107_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_109_ = lean_unsigned_to_nat(0u);
v___x_110_ = 1;
v___x_111_ = lean_task_map(v___f_94_, v___x_95_, v___x_109_, v___x_110_);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
else
{
lean_object* v___x_113_; 
lean_dec_ref(v___f_94_);
v___x_113_ = lean_task_get_own(v___x_95_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Std_Http_instTransportClient___lam__4___closed__0, &l_Std_Http_instTransportClient___lam__4___closed__0_once, _init_l_Std_Http_instTransportClient___lam__4___closed__0);
return v___x_114_;
}
else
{
lean_object* v_val_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_123_; 
v_val_115_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_123_ == 0)
{
v___x_117_ = v___x_113_;
v_isShared_118_ = v_isSharedCheck_123_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_val_115_);
lean_dec(v___x_113_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_123_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
if (lean_obj_tag(v_val_115_) == 0)
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set_tag(v___x_117_, 0);
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_val_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
else
{
lean_object* v___x_122_; 
lean_dec_ref_known(v_val_115_, 1);
lean_del_object(v___x_117_);
v___x_122_ = ((lean_object*)(l_Std_Http_instTransportClient___lam__4___closed__2));
return v___x_122_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__4___boxed(lean_object* v___f_124_, lean_object* v___x_125_, lean_object* v_x_126_, lean_object* v___y_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Std_Http_instTransportClient___lam__4(v___f_124_, v___x_125_, v_x_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__5(lean_object* v___f_129_, lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_140_; 
lean_dec_ref(v___f_129_);
v_a_132_ = lean_ctor_get(v_x_130_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_140_ == 0)
{
v___x_134_ = v_x_130_;
v_isShared_135_ = v_isSharedCheck_140_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v_x_130_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_140_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_139_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_138_; 
v___x_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
return v___x_138_;
}
}
}
else
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_159_; 
v_a_141_ = lean_ctor_get(v_x_130_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_159_ == 0)
{
v___x_143_ = v_x_130_;
v_isShared_144_ = v_isSharedCheck_159_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v_x_130_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_159_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; lean_object* v___f_146_; lean_object* v___x_147_; uint8_t v___x_148_; uint8_t v_val_150_; uint8_t v___x_157_; 
v___x_145_ = lean_io_promise_result_opt(v_a_141_);
lean_dec(v_a_141_);
lean_inc_ref(v___x_145_);
v___f_146_ = lean_alloc_closure((void*)(l_Std_Http_instTransportClient___lam__4___boxed), 4, 2);
lean_closure_set(v___f_146_, 0, v___f_129_);
lean_closure_set(v___f_146_, 1, v___x_145_);
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = 0;
v___x_157_ = lean_io_get_task_state(v___x_145_);
lean_dec_ref(v___x_145_);
if (v___x_157_ == 2)
{
uint8_t v___x_158_; 
v___x_158_ = 1;
v_val_150_ = v___x_158_;
goto v___jp_149_;
}
else
{
v_val_150_ = v___x_148_;
goto v___jp_149_;
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_box(v_val_150_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 0, v___x_151_);
v___x_153_ = v___x_143_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_156_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
v___x_155_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_147_, v___x_148_, v___x_154_, v___f_146_);
return v___x_155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__5___boxed(lean_object* v___f_160_, lean_object* v_x_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Std_Http_instTransportClient___lam__5(v___f_160_, v_x_161_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__6(lean_object* v___f_164_, lean_object* v_client_165_, lean_object* v_data_166_){
_start:
{
lean_object* v___x_168_; uint8_t v___x_169_; lean_object* v_val_171_; lean_object* v___x_174_; 
v___x_168_ = lean_unsigned_to_nat(0u);
v___x_169_ = 0;
v___x_174_ = lean_uv_tcp_send(v_client_165_, v_data_166_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_182_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_182_ == 0)
{
v___x_177_ = v___x_174_;
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
lean_ctor_set_tag(v___x_177_, 1);
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_a_175_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
v_val_171_ = v___x_180_;
goto v___jp_170_;
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
v_a_183_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_174_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_174_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set_tag(v___x_185_, 0);
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
v_val_171_ = v___x_188_;
goto v___jp_170_;
}
}
}
v___jp_170_:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_172_, 0, v_val_171_);
v___x_173_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_168_, v___x_169_, v___x_172_, v___f_164_);
return v___x_173_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__6___boxed(lean_object* v___f_191_, lean_object* v_client_192_, lean_object* v_data_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Std_Http_instTransportClient___lam__6(v___f_191_, v_client_192_, v_data_193_);
lean_dec(v_client_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__7(lean_object* v_x_196_){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instTransportClient___lam__7___boxed(lean_object* v_x_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Std_Http_instTransportClient___lam__7(v_x_200_);
lean_dec(v_x_200_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new(){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_218_ = lean_box(0);
v___x_219_ = l_Std_CloseableChannel_new___redArg(v___x_218_);
v___x_220_ = l_Std_CloseableChannel_new___redArg(v___x_218_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
lean_inc_ref(v___x_221_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_new___boxed(lean_object* v_a_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Std_Http_Internal_Mock_new();
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0(lean_object* v_x_225_){
_start:
{
if (lean_obj_tag(v_x_225_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_235_; 
v_a_227_ = lean_ctor_get(v_x_225_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_225_);
if (v_isSharedCheck_235_ == 0)
{
v___x_229_ = v_x_225_;
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v_x_225_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_234_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_233_; 
v___x_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
}
}
else
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_245_; 
v_a_236_ = lean_ctor_get(v_x_225_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_225_);
if (v_isSharedCheck_245_ == 0)
{
v___x_238_ = v_x_225_;
v_isShared_239_ = v_isSharedCheck_245_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v_x_225_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_245_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v_a_236_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_240_);
v___x_242_ = v___x_238_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_243_; 
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__0___boxed(lean_object* v_x_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Std_Http_Internal_Mock_recvJoined___lam__0(v_x_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1(lean_object* v_a_249_, lean_object* v_x_250_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_260_; 
v_a_252_ = lean_ctor_get(v_x_250_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_250_);
if (v_isSharedCheck_260_ == 0)
{
v___x_254_ = v_x_250_;
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v_x_250_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_252_);
v___x_257_ = v_reuseFailAlloc_259_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref_known(v_x_250_, 1);
v___x_261_ = l_IO_Promise_result_x21___redArg(v_a_249_);
v___x_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__1___boxed(lean_object* v_a_263_, lean_object* v_x_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Std_Http_Internal_Mock_recvJoined___lam__1(v_a_263_, v_x_264_);
lean_dec(v_a_263_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1(lean_object* v_b_267_, lean_object* v_x_268_){
_start:
{
if (lean_obj_tag(v_x_268_) == 0)
{
lean_object* v_a_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_278_; 
lean_dec_ref(v_b_267_);
v_a_270_ = lean_ctor_get(v_x_268_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v_x_268_);
if (v_isSharedCheck_278_ == 0)
{
v___x_272_ = v_x_268_;
v_isShared_273_ = v_isSharedCheck_278_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_a_270_);
lean_dec(v_x_268_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_278_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_275_; 
if (v_isShared_273_ == 0)
{
v___x_275_ = v___x_272_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_a_270_);
v___x_275_ = v_reuseFailAlloc_277_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; 
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_305_; 
v_a_279_ = lean_ctor_get(v_x_268_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v_x_268_);
if (v_isSharedCheck_305_ == 0)
{
v___x_281_ = v_x_268_;
v_isShared_282_ = v_isSharedCheck_305_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v_x_268_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_305_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
if (lean_obj_tag(v_a_279_) == 0)
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v_b_267_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v___x_283_);
v___x_285_ = v___x_281_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_287_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_286_; 
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
else
{
lean_object* v_val_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_304_; 
v_val_288_ = lean_ctor_get(v_a_279_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_a_279_);
if (v_isSharedCheck_304_ == 0)
{
v___x_290_ = v_a_279_;
v_isShared_291_ = v_isSharedCheck_304_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_val_288_);
lean_dec(v_a_279_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_304_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_byte_array_size(v_b_267_);
v___x_294_ = lean_byte_array_size(v_val_288_);
v___x_295_ = 0;
v___x_296_ = lean_byte_array_copy_slice(v_val_288_, v___x_292_, v_b_267_, v___x_293_, v___x_294_, v___x_295_);
lean_dec(v_val_288_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_296_);
v___x_298_ = v___x_290_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_296_);
v___x_298_ = v_reuseFailAlloc_303_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_300_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v___x_298_);
v___x_300_ = v___x_281_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_302_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
lean_object* v___x_301_; 
v___x_301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
return v___x_301_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1___boxed(lean_object* v_b_306_, lean_object* v_x_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1(v_b_306_, v_x_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0___boxed(lean_object* v_promise_310_, lean_object* v_recvChan_311_, lean_object* v_expect_312_, lean_object* v_prio_313_, lean_object* v_x_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0(v_promise_310_, v_recvChan_311_, v_expect_312_, v_prio_313_, v_x_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(lean_object* v_recvChan_317_, lean_object* v_expect_318_, lean_object* v_prio_319_, lean_object* v_promise_320_, lean_object* v_b_321_){
_start:
{
lean_object* v_a_324_; lean_object* v___f_327_; lean_object* v___f_328_; 
lean_inc(v_prio_319_);
lean_inc(v_expect_318_);
lean_inc_ref(v_recvChan_317_);
lean_inc(v_promise_320_);
v___f_327_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_327_, 0, v_promise_320_);
lean_closure_set(v___f_327_, 1, v_recvChan_317_);
lean_closure_set(v___f_327_, 2, v_expect_318_);
lean_closure_set(v___f_327_, 3, v_prio_319_);
lean_inc_ref(v_b_321_);
v___f_328_ = lean_alloc_closure((void*)(l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_328_, 0, v_b_321_);
if (lean_obj_tag(v_expect_318_) == 1)
{
lean_object* v_val_352_; lean_object* v___x_353_; uint64_t v___x_354_; uint64_t v___x_355_; uint8_t v___x_356_; 
v_val_352_ = lean_ctor_get(v_expect_318_, 0);
v___x_353_ = lean_byte_array_size(v_b_321_);
v___x_354_ = lean_uint64_of_nat(v___x_353_);
v___x_355_ = lean_unbox_uint64(v_val_352_);
v___x_356_ = lean_uint64_dec_le(v___x_355_, v___x_354_);
if (v___x_356_ == 0)
{
lean_dec_ref(v_b_321_);
goto v___jp_329_;
}
else
{
lean_dec_ref_known(v_expect_318_, 1);
lean_dec_ref(v___f_328_);
lean_dec_ref(v___f_327_);
lean_dec(v_prio_319_);
lean_dec_ref(v_recvChan_317_);
v_a_324_ = v_b_321_;
goto v___jp_323_;
}
}
else
{
lean_dec_ref(v_b_321_);
goto v___jp_329_;
}
v___jp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_325_, 0, v_a_324_);
v___x_326_ = lean_io_promise_resolve(v___x_325_, v_promise_320_);
lean_dec(v_promise_320_);
return v___x_326_;
}
v___jp_329_:
{
lean_object* v___x_330_; uint8_t v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = 0;
lean_inc_ref(v_recvChan_317_);
v___x_332_ = l_Std_CloseableChannel_tryRecv___redArg(v_recvChan_317_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
v___x_335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_330_, v___x_331_, v___x_334_, v___f_328_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; 
lean_dec_ref(v___f_327_);
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_336_);
lean_dec_ref_known(v___x_335_, 1);
if (lean_obj_tag(v_a_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_345_; 
lean_dec(v_prio_319_);
lean_dec(v_expect_318_);
lean_dec_ref(v_recvChan_317_);
v_a_337_ = lean_ctor_get(v_a_336_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v_a_336_);
if (v_isSharedCheck_345_ == 0)
{
v___x_339_ = v_a_336_;
v_isShared_340_ = v_isSharedCheck_345_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v_a_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_345_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_344_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_343_; 
v___x_343_ = lean_io_promise_resolve(v___x_342_, v_promise_320_);
lean_dec(v_promise_320_);
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; 
v_a_346_ = lean_ctor_get(v_a_336_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v_a_336_, 1);
if (lean_obj_tag(v_a_346_) == 0)
{
lean_object* v_a_347_; 
lean_dec(v_prio_319_);
lean_dec(v_expect_318_);
lean_dec_ref(v_recvChan_317_);
v_a_347_ = lean_ctor_get(v_a_346_, 0);
lean_inc(v_a_347_);
lean_dec_ref_known(v_a_346_, 1);
v_a_324_ = v_a_347_;
goto v___jp_323_;
}
else
{
lean_object* v_a_348_; 
v_a_348_ = lean_ctor_get(v_a_346_, 0);
lean_inc(v_a_348_);
lean_dec_ref_known(v_a_346_, 1);
v_b_321_ = v_a_348_;
goto _start;
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_351_; 
lean_dec(v_promise_320_);
lean_dec(v_expect_318_);
lean_dec_ref(v_recvChan_317_);
v_a_350_ = lean_ctor_get(v___x_335_, 0);
lean_inc_ref(v_a_350_);
lean_dec_ref_known(v___x_335_, 1);
v___x_351_ = l_BaseIO_chainTask___redArg(v_a_350_, v___f_327_, v_prio_319_, v___x_331_);
return v___x_351_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___lam__0(lean_object* v_promise_357_, lean_object* v_recvChan_358_, lean_object* v_expect_359_, lean_object* v_prio_360_, lean_object* v_x_361_){
_start:
{
if (lean_obj_tag(v_x_361_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_prio_360_);
lean_dec(v_expect_359_);
lean_dec_ref(v_recvChan_358_);
v_a_363_ = lean_ctor_get(v_x_361_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v_x_361_);
if (v_isSharedCheck_371_ == 0)
{
v___x_365_ = v_x_361_;
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v_x_361_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_363_);
v___x_368_ = v_reuseFailAlloc_370_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; 
v___x_369_ = lean_io_promise_resolve(v___x_368_, v_promise_357_);
lean_dec(v_promise_357_);
return v___x_369_;
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_383_; 
v_a_372_ = lean_ctor_get(v_x_361_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v_x_361_);
if (v_isSharedCheck_383_ == 0)
{
v___x_374_ = v_x_361_;
v_isShared_375_ = v_isSharedCheck_383_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v_x_361_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_383_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
if (lean_obj_tag(v_a_372_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_378_; 
lean_dec(v_prio_360_);
lean_dec(v_expect_359_);
lean_dec_ref(v_recvChan_358_);
v_a_376_ = lean_ctor_get(v_a_372_, 0);
lean_inc(v_a_376_);
lean_dec_ref_known(v_a_372_, 1);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v_a_376_);
v___x_378_ = v___x_374_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_376_);
v___x_378_ = v_reuseFailAlloc_380_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; 
v___x_379_ = lean_io_promise_resolve(v___x_378_, v_promise_357_);
lean_dec(v_promise_357_);
return v___x_379_;
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_382_; 
lean_del_object(v___x_374_);
v_a_381_ = lean_ctor_get(v_a_372_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v_a_372_, 1);
v___x_382_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(v_recvChan_358_, v_expect_359_, v_prio_360_, v_promise_357_, v_a_381_);
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0___boxed(lean_object* v_recvChan_384_, lean_object* v_expect_385_, lean_object* v_prio_386_, lean_object* v_promise_387_, lean_object* v_b_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(v_recvChan_384_, v_expect_385_, v_prio_386_, v_promise_387_, v_b_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2(lean_object* v_recvChan_391_, lean_object* v_expect_392_, lean_object* v___x_393_, lean_object* v_val_394_, uint8_t v___x_395_, lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_396_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_406_; 
lean_dec_ref(v_val_394_);
lean_dec(v___x_393_);
lean_dec(v_expect_392_);
lean_dec_ref(v_recvChan_391_);
v_a_398_ = lean_ctor_get(v_x_396_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v_x_396_);
if (v_isSharedCheck_406_ == 0)
{
v___x_400_ = v_x_396_;
v_isShared_401_ = v_isSharedCheck_406_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v_x_396_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_406_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_405_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; 
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
return v___x_404_;
}
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_418_; 
v_a_407_ = lean_ctor_get(v_x_396_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v_x_396_);
if (v_isSharedCheck_418_ == 0)
{
v___x_409_ = v_x_396_;
v_isShared_410_ = v_isSharedCheck_418_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v_x_396_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_418_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___f_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
lean_inc(v_a_407_);
v___f_411_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__1___boxed), 3, 1);
lean_closure_set(v___f_411_, 0, v_a_407_);
lean_inc(v___x_393_);
v___x_412_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop___at___00Std_Http_Internal_Mock_recvJoined_spec__0(v_recvChan_391_, v_expect_392_, v___x_393_, v_a_407_, v_val_394_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_412_);
v___x_414_ = v___x_409_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_417_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
v___x_416_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_393_, v___x_395_, v___x_415_, v___f_411_);
return v___x_416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__2___boxed(lean_object* v_recvChan_419_, lean_object* v_expect_420_, lean_object* v___x_421_, lean_object* v_val_422_, lean_object* v___x_423_, lean_object* v_x_424_, lean_object* v___y_425_){
_start:
{
uint8_t v___x_2296__boxed_426_; lean_object* v_res_427_; 
v___x_2296__boxed_426_ = lean_unbox(v___x_423_);
v_res_427_ = l_Std_Http_Internal_Mock_recvJoined___lam__2(v_recvChan_419_, v_expect_420_, v___x_421_, v_val_422_, v___x_2296__boxed_426_, v_x_424_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3(lean_object* v_recvChan_428_, lean_object* v_expect_429_, lean_object* v___f_430_, lean_object* v_x_431_){
_start:
{
if (lean_obj_tag(v_x_431_) == 0)
{
lean_object* v___x_433_; 
lean_dec_ref(v___f_430_);
lean_dec(v_expect_429_);
lean_dec_ref(v_recvChan_428_);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v_x_431_);
return v___x_433_;
}
else
{
lean_object* v_a_434_; 
v_a_434_ = lean_ctor_get(v_x_431_, 0);
lean_inc(v_a_434_);
if (lean_obj_tag(v_a_434_) == 0)
{
lean_object* v___x_435_; 
lean_dec_ref(v___f_430_);
lean_dec(v_expect_429_);
lean_dec_ref(v_recvChan_428_);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v_x_431_);
return v___x_435_;
}
else
{
lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_457_; 
v_isSharedCheck_457_ = !lean_is_exclusive(v_x_431_);
if (v_isSharedCheck_457_ == 0)
{
lean_object* v_unused_458_; 
v_unused_458_ = lean_ctor_get(v_x_431_, 0);
lean_dec(v_unused_458_);
v___x_437_ = v_x_431_;
v_isShared_438_ = v_isSharedCheck_457_;
goto v_resetjp_436_;
}
else
{
lean_dec(v_x_431_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_457_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v_val_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_456_; 
v_val_439_ = lean_ctor_get(v_a_434_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v_a_434_);
if (v_isSharedCheck_456_ == 0)
{
v___x_441_ = v_a_434_;
v_isShared_442_ = v_isSharedCheck_456_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_val_439_);
lean_dec(v_a_434_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_456_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; uint8_t v___x_444_; lean_object* v___x_445_; lean_object* v___f_446_; lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = 0;
v___x_445_ = lean_box(v___x_444_);
v___f_446_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__2___boxed), 7, 5);
lean_closure_set(v___f_446_, 0, v_recvChan_428_);
lean_closure_set(v___f_446_, 1, v_expect_429_);
lean_closure_set(v___f_446_, 2, v___x_443_);
lean_closure_set(v___f_446_, 3, v_val_439_);
lean_closure_set(v___f_446_, 4, v___x_445_);
v___x_447_ = lean_io_promise_new();
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_447_);
v___x_449_ = v___x_437_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_447_);
v___x_449_ = v_reuseFailAlloc_455_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_451_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set_tag(v___x_441_, 0);
lean_ctor_set(v___x_441_, 0, v___x_449_);
v___x_451_ = v___x_441_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_449_);
v___x_451_ = v_reuseFailAlloc_454_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_443_, v___x_444_, v___x_451_, v___f_446_);
v___x_453_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_443_, v___x_444_, v___x_452_, v___f_430_);
return v___x_453_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__3___boxed(lean_object* v_recvChan_459_, lean_object* v_expect_460_, lean_object* v___f_461_, lean_object* v_x_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Std_Http_Internal_Mock_recvJoined___lam__3(v_recvChan_459_, v_expect_460_, v___f_461_, v_x_462_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__4(lean_object* v_a_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_466_, 0, v_a_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5(lean_object* v___f_467_, lean_object* v___f_468_, lean_object* v_x_469_){
_start:
{
if (lean_obj_tag(v_x_469_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_479_; 
lean_dec_ref(v___f_468_);
lean_dec_ref(v___f_467_);
v_a_471_ = lean_ctor_get(v_x_469_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v_x_469_);
if (v_isSharedCheck_479_ == 0)
{
v___x_473_ = v_x_469_;
v_isShared_474_ = v_isSharedCheck_479_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v_x_469_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_479_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_478_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; 
v___x_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
}
}
else
{
lean_object* v_a_480_; lean_object* v___x_481_; uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_a_480_ = lean_ctor_get(v_x_469_, 0);
lean_inc(v_a_480_);
lean_dec_ref_known(v_x_469_, 1);
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = 0;
v___x_483_ = lean_task_map(v___f_467_, v_a_480_, v___x_481_, v___x_482_);
v___x_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
v___x_485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_481_, v___x_482_, v___x_484_, v___f_468_);
return v___x_485_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___lam__5___boxed(lean_object* v___f_486_, lean_object* v___f_487_, lean_object* v_x_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Std_Http_Internal_Mock_recvJoined___lam__5(v___f_486_, v___f_487_, v_x_488_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined(lean_object* v_recvChan_493_, lean_object* v_expect_494_){
_start:
{
lean_object* v___f_496_; lean_object* v___f_497_; lean_object* v___f_498_; lean_object* v___f_499_; lean_object* v___x_500_; uint8_t v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___f_496_ = ((lean_object*)(l_Std_Http_Internal_Mock_recvJoined___closed__0));
lean_inc_ref(v_recvChan_493_);
v___f_497_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__3___boxed), 5, 3);
lean_closure_set(v___f_497_, 0, v_recvChan_493_);
lean_closure_set(v___f_497_, 1, v_expect_494_);
lean_closure_set(v___f_497_, 2, v___f_496_);
v___f_498_ = ((lean_object*)(l_Std_Http_Internal_Mock_recvJoined___closed__1));
v___f_499_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Mock_recvJoined___lam__5___boxed), 4, 2);
lean_closure_set(v___f_499_, 0, v___f_498_);
lean_closure_set(v___f_499_, 1, v___f_497_);
v___x_500_ = lean_unsigned_to_nat(0u);
v___x_501_ = 0;
v___x_502_ = l_Std_CloseableChannel_recv___redArg(v_recvChan_493_);
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
v___x_505_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_500_, v___x_501_, v___x_504_, v___f_499_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvJoined___boxed(lean_object* v_recvChan_506_, lean_object* v_expect_507_, lean_object* v_a_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Std_Http_Internal_Mock_recvJoined(v_recvChan_506_, v_expect_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__0(lean_object* v___y_512_){
_start:
{
lean_object* v___y_514_; 
if (lean_obj_tag(v___y_512_) == 0)
{
lean_object* v_a_517_; uint8_t v___x_518_; 
v_a_517_ = lean_ctor_get(v___y_512_, 0);
lean_inc(v_a_517_);
lean_dec_ref_known(v___y_512_, 1);
v___x_518_ = lean_unbox(v_a_517_);
lean_dec(v_a_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
v___x_519_ = ((lean_object*)(l_Std_Http_Internal_Mock_send___lam__0___closed__0));
v___y_514_ = v___x_519_;
goto v___jp_513_;
}
else
{
lean_object* v___x_520_; 
v___x_520_ = ((lean_object*)(l_Std_Http_Internal_Mock_send___lam__0___closed__1));
v___y_514_ = v___x_520_;
goto v___jp_513_;
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___y_512_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___y_512_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___y_512_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___y_512_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
v___jp_513_:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
lean_inc_ref(v___y_514_);
v___x_515_ = lean_mk_io_user_error(v___y_514_);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1(lean_object* v___f_529_, lean_object* v_x_530_){
_start:
{
if (lean_obj_tag(v_x_530_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_540_; 
lean_dec_ref(v___f_529_);
v_a_532_ = lean_ctor_get(v_x_530_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v_x_530_);
if (v_isSharedCheck_540_ == 0)
{
v___x_534_ = v_x_530_;
v_isShared_535_ = v_isSharedCheck_540_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v_x_530_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_540_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_539_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_538_; 
v___x_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
return v___x_538_;
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_a_541_ = lean_ctor_get(v_x_530_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v_x_530_, 1);
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = 0;
v___x_544_ = lean_task_map(v___f_529_, v_a_541_, v___x_542_, v___x_543_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
return v___x_545_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___lam__1___boxed(lean_object* v___f_546_, lean_object* v_x_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Std_Http_Internal_Mock_send___lam__1(v___f_546_, v_x_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send(lean_object* v_sendChan_553_, lean_object* v_data_554_){
_start:
{
lean_object* v___f_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___f_556_ = ((lean_object*)(l_Std_Http_Internal_Mock_send___closed__1));
v___x_557_ = lean_unsigned_to_nat(0u);
v___x_558_ = 0;
v___x_559_ = l_Std_CloseableChannel_send___redArg(v_sendChan_553_, v_data_554_);
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
v___x_562_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_557_, v___x_558_, v___x_561_, v___f_556_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_send___boxed(lean_object* v_sendChan_563_, lean_object* v_data_564_, lean_object* v_a_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Std_Http_Internal_Mock_send(v_sendChan_563_, v_data_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0(lean_object* v_x_567_){
_start:
{
if (lean_obj_tag(v_x_567_) == 0)
{
lean_object* v___x_569_; 
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v_x_567_);
return v___x_569_;
}
else
{
lean_object* v___x_570_; 
lean_dec_ref_known(v_x_567_, 1);
v___x_570_ = ((lean_object*)(l_Std_Http_instTransportClient___lam__4___closed__2));
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___lam__0___boxed(lean_object* v_x_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Std_Http_Internal_Mock_sendAll___lam__0(v_x_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1(lean_object* v___x_574_, lean_object* v_x_575_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_585_; 
v_a_577_ = lean_ctor_get(v_x_575_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_585_ == 0)
{
v___x_579_ = v_x_575_;
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v_x_575_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_584_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; 
v___x_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
}
}
else
{
lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_594_; 
v_isSharedCheck_594_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_594_ == 0)
{
lean_object* v_unused_595_; 
v_unused_595_ = lean_ctor_get(v_x_575_, 0);
lean_dec(v_unused_595_);
v___x_587_ = v_x_575_;
v_isShared_588_ = v_isSharedCheck_594_;
goto v_resetjp_586_;
}
else
{
lean_dec(v_x_575_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_594_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_589_, 0, v___x_574_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_589_);
v___x_591_ = v___x_587_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_593_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
lean_object* v___x_592_; 
v___x_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
return v___x_592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1___boxed(lean_object* v___x_596_, lean_object* v_x_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__1(v___x_596_, v_x_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0___boxed(lean_object* v_i_600_, lean_object* v_sendChan_601_, lean_object* v_as_602_, lean_object* v_sz_603_, lean_object* v_x_604_, lean_object* v___y_605_){
_start:
{
size_t v_i_boxed_606_; size_t v_sz_boxed_607_; lean_object* v_res_608_; 
v_i_boxed_606_ = lean_unbox_usize(v_i_600_);
lean_dec(v_i_600_);
v_sz_boxed_607_ = lean_unbox_usize(v_sz_603_);
lean_dec(v_sz_603_);
v_res_608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0(v_i_boxed_606_, v_sendChan_601_, v_as_602_, v_sz_boxed_607_, v_x_604_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(lean_object* v_sendChan_611_, lean_object* v_as_612_, size_t v_sz_613_, size_t v_i_614_, lean_object* v_b_615_){
_start:
{
uint8_t v___x_617_; 
v___x_617_ = lean_usize_dec_lt(v_i_614_, v_sz_613_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v___x_619_; 
lean_dec_ref(v_as_612_);
lean_dec_ref(v_sendChan_611_);
v___x_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_618_, 0, v_b_615_);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___f_622_; lean_object* v___f_623_; lean_object* v_a_624_; lean_object* v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_620_ = lean_box_usize(v_i_614_);
v___x_621_ = lean_box_usize(v_sz_613_);
lean_inc_ref(v_as_612_);
lean_inc_ref(v_sendChan_611_);
v___f_622_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_622_, 0, v___x_620_);
lean_closure_set(v___f_622_, 1, v_sendChan_611_);
lean_closure_set(v___f_622_, 2, v_as_612_);
lean_closure_set(v___f_622_, 3, v___x_621_);
v___f_623_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___closed__0));
v_a_624_ = lean_array_uget(v_as_612_, v_i_614_);
lean_dec_ref(v_as_612_);
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = 0;
v___x_627_ = l_Std_Http_Internal_Mock_send(v_sendChan_611_, v_a_624_);
v___x_628_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_625_, v___x_626_, v___x_627_, v___f_623_);
v___x_629_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_625_, v___x_626_, v___x_628_, v___f_622_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___lam__0(size_t v_i_630_, lean_object* v_sendChan_631_, lean_object* v_as_632_, size_t v_sz_633_, lean_object* v_x_634_){
_start:
{
if (lean_obj_tag(v_x_634_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_644_; 
lean_dec_ref(v_as_632_);
lean_dec_ref(v_sendChan_631_);
v_a_636_ = lean_ctor_get(v_x_634_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v_x_634_);
if (v_isSharedCheck_644_ == 0)
{
v___x_638_ = v_x_634_;
v_isShared_639_ = v_isSharedCheck_644_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v_x_634_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_644_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_643_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
lean_object* v___x_642_; 
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_664_; 
v_a_645_ = lean_ctor_get(v_x_634_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v_x_634_);
if (v_isSharedCheck_664_ == 0)
{
v___x_647_ = v_x_634_;
v_isShared_648_ = v_isSharedCheck_664_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v_x_634_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_664_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
if (lean_obj_tag(v_a_645_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_659_; 
lean_dec_ref(v_as_632_);
lean_dec_ref(v_sendChan_631_);
v_a_649_ = lean_ctor_get(v_a_645_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v_a_645_);
if (v_isSharedCheck_659_ == 0)
{
v___x_651_ = v_a_645_;
v_isShared_652_ = v_isSharedCheck_659_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v_a_645_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_659_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v_a_649_);
v___x_654_ = v___x_647_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_658_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_656_; 
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_654_);
v___x_656_ = v___x_651_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_654_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
else
{
lean_object* v_a_660_; size_t v___x_661_; size_t v___x_662_; lean_object* v___x_663_; 
lean_del_object(v___x_647_);
v_a_660_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v_a_645_, 1);
v___x_661_ = ((size_t)1ULL);
v___x_662_ = lean_usize_add(v_i_630_, v___x_661_);
v___x_663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(v_sendChan_631_, v_as_632_, v_sz_633_, v___x_662_, v_a_660_);
return v___x_663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0___boxed(lean_object* v_sendChan_665_, lean_object* v_as_666_, lean_object* v_sz_667_, lean_object* v_i_668_, lean_object* v_b_669_, lean_object* v___y_670_){
_start:
{
size_t v_sz_boxed_671_; size_t v_i_boxed_672_; lean_object* v_res_673_; 
v_sz_boxed_671_ = lean_unbox_usize(v_sz_667_);
lean_dec(v_sz_667_);
v_i_boxed_672_ = lean_unbox_usize(v_i_668_);
lean_dec(v_i_668_);
v_res_673_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(v_sendChan_665_, v_as_666_, v_sz_boxed_671_, v_i_boxed_672_, v_b_669_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll(lean_object* v_sendChan_675_, lean_object* v_data_676_){
_start:
{
lean_object* v___f_678_; lean_object* v___x_679_; size_t v_sz_680_; size_t v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___f_678_ = ((lean_object*)(l_Std_Http_Internal_Mock_sendAll___closed__0));
v___x_679_ = lean_box(0);
v_sz_680_ = lean_array_size(v_data_676_);
v___x_681_ = ((size_t)0ULL);
v___x_682_ = lean_unsigned_to_nat(0u);
v___x_683_ = 0;
v___x_684_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_Internal_Mock_sendAll_spec__0(v_sendChan_675_, v_data_676_, v_sz_680_, v___x_681_, v___x_679_);
v___x_685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_682_, v___x_683_, v___x_684_, v___f_678_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_sendAll___boxed(lean_object* v_sendChan_686_, lean_object* v_data_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Std_Http_Internal_Mock_sendAll(v_sendChan_686_, v_data_687_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_recvSelector(lean_object* v_recvChan_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Std_CloseableChannel_recvSelector___redArg(v_recvChan_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan(lean_object* v_client_692_){
_start:
{
lean_object* v_serverToClient_693_; 
v_serverToClient_693_ = lean_ctor_get(v_client_692_, 1);
lean_inc_ref(v_serverToClient_693_);
return v_serverToClient_693_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getRecvChan___boxed(lean_object* v_client_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Std_Http_Internal_Mock_Client_getRecvChan(v_client_694_);
lean_dec_ref(v_client_694_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan(lean_object* v_client_696_){
_start:
{
lean_object* v_clientToServer_697_; 
v_clientToServer_697_ = lean_ctor_get(v_client_696_, 0);
lean_inc_ref(v_clientToServer_697_);
return v_clientToServer_697_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_getSendChan___boxed(lean_object* v_client_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Std_Http_Internal_Mock_Client_getSendChan(v_client_698_);
lean_dec_ref(v_client_698_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send(lean_object* v_client_700_, lean_object* v_data_701_){
_start:
{
lean_object* v_clientToServer_703_; lean_object* v___x_704_; 
v_clientToServer_703_ = lean_ctor_get(v_client_700_, 0);
lean_inc_ref(v_clientToServer_703_);
lean_dec_ref(v_client_700_);
v___x_704_ = l_Std_Http_Internal_Mock_send(v_clientToServer_703_, v_data_701_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_send___boxed(lean_object* v_client_705_, lean_object* v_data_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Std_Http_Internal_Mock_Client_send(v_client_705_, v_data_706_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f(lean_object* v_client_709_, lean_object* v_expect_710_){
_start:
{
lean_object* v_serverToClient_712_; lean_object* v___x_713_; 
v_serverToClient_712_ = lean_ctor_get(v_client_709_, 1);
lean_inc_ref(v_serverToClient_712_);
lean_dec_ref(v_client_709_);
v___x_713_ = l_Std_Http_Internal_Mock_recvJoined(v_serverToClient_712_, v_expect_710_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_recv_x3f___boxed(lean_object* v_client_714_, lean_object* v_expect_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Std_Http_Internal_Mock_Client_recv_x3f(v_client_714_, v_expect_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(lean_object* v___x_718_, lean_object* v_a_719_){
_start:
{
lean_object* v___x_721_; 
lean_inc_ref(v___x_718_);
v___x_721_ = l_Std_CloseableChannel_tryRecv___redArg(v___x_718_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_dec_ref(v___x_718_);
return v_a_719_;
}
else
{
lean_object* v_val_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; lean_object* v___x_727_; 
v_val_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_val_722_);
lean_dec_ref_known(v___x_721_, 1);
v___x_723_ = lean_unsigned_to_nat(0u);
v___x_724_ = lean_byte_array_size(v_a_719_);
v___x_725_ = lean_byte_array_size(v_val_722_);
v___x_726_ = 0;
v___x_727_ = lean_byte_array_copy_slice(v_val_722_, v___x_723_, v_a_719_, v___x_724_, v___x_725_, v___x_726_);
lean_dec(v_val_722_);
v_a_719_ = v___x_727_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg___boxed(lean_object* v___x_729_, lean_object* v_a_730_, lean_object* v___y_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v___x_729_, v_a_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(lean_object* v_client_733_){
_start:
{
lean_object* v_serverToClient_735_; lean_object* v___x_736_; 
v_serverToClient_735_ = lean_ctor_get(v_client_733_, 1);
lean_inc_ref_n(v_serverToClient_735_, 2);
lean_dec_ref(v_client_733_);
v___x_736_ = l_Std_CloseableChannel_tryRecv___redArg(v_serverToClient_735_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_dec_ref(v_serverToClient_735_);
return v___x_736_;
}
else
{
lean_object* v_val_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_745_; 
v_val_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_745_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_745_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_val_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_745_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_741_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v_serverToClient_735_, v_val_737_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v___x_741_);
v___x_743_ = v___x_739_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg___boxed(lean_object* v_client_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(v_client_746_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f(lean_object* v_client_749_, uint64_t v___expect_750_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Std_Http_Internal_Mock_Client_tryRecv_x3f___redArg(v_client_749_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_tryRecv_x3f___boxed(lean_object* v_client_753_, lean_object* v___expect_754_, lean_object* v_a_755_){
_start:
{
uint64_t v___expect_boxed_756_; lean_object* v_res_757_; 
v___expect_boxed_756_ = lean_unbox_uint64(v___expect_754_);
lean_dec_ref(v___expect_754_);
v_res_757_ = l_Std_Http_Internal_Mock_Client_tryRecv_x3f(v_client_753_, v___expect_boxed_756_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0(lean_object* v___x_758_, lean_object* v_inst_759_, lean_object* v_a_760_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v___x_758_, v_a_760_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___boxed(lean_object* v___x_763_, lean_object* v_inst_764_, lean_object* v_a_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0(v___x_763_, v_inst_764_, v_a_765_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close(lean_object* v_client_772_){
_start:
{
lean_object* v_clientToServer_774_; lean_object* v_serverToClient_775_; uint8_t v___x_803_; 
v_clientToServer_774_ = lean_ctor_get(v_client_772_, 0);
lean_inc_ref_n(v_clientToServer_774_, 2);
v_serverToClient_775_ = lean_ctor_get(v_client_772_, 1);
lean_inc_ref(v_serverToClient_775_);
lean_dec_ref(v_client_772_);
v___x_803_ = l_Std_CloseableChannel_isClosed___redArg(v_clientToServer_774_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; 
v___x_804_ = l_Std_CloseableChannel_close___redArg(v_clientToServer_774_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_dec_ref_known(v___x_804_, 1);
goto v___jp_776_;
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_818_; 
lean_dec_ref(v_serverToClient_775_);
v_a_805_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_818_ == 0)
{
v___x_807_ = v___x_804_;
v_isShared_808_ = v_isSharedCheck_818_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_804_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_818_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
uint8_t v___x_809_; 
v___x_809_ = lean_unbox(v_a_805_);
lean_dec(v_a_805_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_810_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 0, v___x_810_);
v___x_812_ = v___x_807_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v___x_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
else
{
lean_object* v___x_814_; lean_object* v___x_816_; 
v___x_814_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 0, v___x_814_);
v___x_816_ = v___x_807_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
else
{
lean_dec_ref(v_clientToServer_774_);
goto v___jp_776_;
}
v___jp_776_:
{
uint8_t v___x_777_; 
lean_inc_ref(v_serverToClient_775_);
v___x_777_ = l_Std_CloseableChannel_isClosed___redArg(v_serverToClient_775_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; 
v___x_778_ = l_Std_CloseableChannel_close___redArg(v_serverToClient_775_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_800_; 
v_a_787_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_800_ == 0)
{
v___x_789_ = v___x_778_;
v_isShared_790_ = v_isSharedCheck_800_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_778_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_800_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
uint8_t v___x_791_; 
v___x_791_ = lean_unbox(v_a_787_);
lean_dec(v_a_787_);
if (v___x_791_ == 0)
{
lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_792_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_792_);
v___x_794_ = v___x_789_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
else
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_796_);
v___x_798_ = v___x_789_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_796_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec_ref(v_serverToClient_775_);
v___x_801_ = lean_box(0);
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Client_close___boxed(lean_object* v_client_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Std_Http_Internal_Mock_Client_close(v_client_819_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan(lean_object* v_server_822_){
_start:
{
lean_object* v_clientToServer_823_; 
v_clientToServer_823_ = lean_ctor_get(v_server_822_, 0);
lean_inc_ref(v_clientToServer_823_);
return v_clientToServer_823_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getRecvChan___boxed(lean_object* v_server_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Std_Http_Internal_Mock_Server_getRecvChan(v_server_824_);
lean_dec_ref(v_server_824_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan(lean_object* v_server_826_){
_start:
{
lean_object* v_serverToClient_827_; 
v_serverToClient_827_ = lean_ctor_get(v_server_826_, 1);
lean_inc_ref(v_serverToClient_827_);
return v_serverToClient_827_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_getSendChan___boxed(lean_object* v_server_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Std_Http_Internal_Mock_Server_getSendChan(v_server_828_);
lean_dec_ref(v_server_828_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send(lean_object* v_server_830_, lean_object* v_data_831_){
_start:
{
lean_object* v_serverToClient_833_; lean_object* v___x_834_; 
v_serverToClient_833_ = lean_ctor_get(v_server_830_, 1);
lean_inc_ref(v_serverToClient_833_);
lean_dec_ref(v_server_830_);
v___x_834_ = l_Std_Http_Internal_Mock_send(v_serverToClient_833_, v_data_831_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_send___boxed(lean_object* v_server_835_, lean_object* v_data_836_, lean_object* v_a_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Std_Http_Internal_Mock_Server_send(v_server_835_, v_data_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f(lean_object* v_server_839_, lean_object* v_expect_840_){
_start:
{
lean_object* v_clientToServer_842_; lean_object* v___x_843_; 
v_clientToServer_842_ = lean_ctor_get(v_server_839_, 0);
lean_inc_ref(v_clientToServer_842_);
lean_dec_ref(v_server_839_);
v___x_843_ = l_Std_Http_Internal_Mock_recvJoined(v_clientToServer_842_, v_expect_840_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_recv_x3f___boxed(lean_object* v_server_844_, lean_object* v_expect_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Std_Http_Internal_Mock_Server_recv_x3f(v_server_844_, v_expect_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(lean_object* v_server_848_){
_start:
{
lean_object* v_clientToServer_850_; lean_object* v___x_851_; 
v_clientToServer_850_ = lean_ctor_get(v_server_848_, 0);
lean_inc_ref_n(v_clientToServer_850_, 2);
lean_dec_ref(v_server_848_);
v___x_851_ = l_Std_CloseableChannel_tryRecv___redArg(v_clientToServer_850_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_dec_ref(v_clientToServer_850_);
return v___x_851_;
}
else
{
lean_object* v_val_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_860_; 
v_val_852_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_860_ == 0)
{
v___x_854_ = v___x_851_;
v_isShared_855_ = v_isSharedCheck_860_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_val_852_);
lean_dec(v___x_851_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_860_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_856_; lean_object* v___x_858_; 
v___x_856_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_Internal_Mock_Client_tryRecv_x3f_spec__0___redArg(v_clientToServer_850_, v_val_852_);
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 0, v___x_856_);
v___x_858_ = v___x_854_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_856_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg___boxed(lean_object* v_server_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(v_server_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f(lean_object* v_server_864_, uint64_t v___expect_865_){
_start:
{
lean_object* v___x_867_; 
v___x_867_ = l_Std_Http_Internal_Mock_Server_tryRecv_x3f___redArg(v_server_864_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_tryRecv_x3f___boxed(lean_object* v_server_868_, lean_object* v___expect_869_, lean_object* v_a_870_){
_start:
{
uint64_t v___expect_boxed_871_; lean_object* v_res_872_; 
v___expect_boxed_871_ = lean_unbox_uint64(v___expect_869_);
lean_dec_ref(v___expect_869_);
v_res_872_ = l_Std_Http_Internal_Mock_Server_tryRecv_x3f(v_server_868_, v___expect_boxed_871_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close(lean_object* v_server_873_){
_start:
{
lean_object* v_clientToServer_875_; lean_object* v_serverToClient_876_; uint8_t v___x_904_; 
v_clientToServer_875_ = lean_ctor_get(v_server_873_, 0);
lean_inc_ref_n(v_clientToServer_875_, 2);
v_serverToClient_876_ = lean_ctor_get(v_server_873_, 1);
lean_inc_ref(v_serverToClient_876_);
lean_dec_ref(v_server_873_);
v___x_904_ = l_Std_CloseableChannel_isClosed___redArg(v_clientToServer_875_);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; 
v___x_905_ = l_Std_CloseableChannel_close___redArg(v_clientToServer_875_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_dec_ref_known(v___x_905_, 1);
goto v___jp_877_;
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_919_; 
lean_dec_ref(v_serverToClient_876_);
v_a_906_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_919_ == 0)
{
v___x_908_ = v___x_905_;
v_isShared_909_ = v_isSharedCheck_919_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_905_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_919_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
uint8_t v___x_910_; 
v___x_910_ = lean_unbox(v_a_906_);
lean_dec(v_a_906_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; lean_object* v___x_913_; 
v___x_911_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_911_);
v___x_913_ = v___x_908_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
else
{
lean_object* v___x_915_; lean_object* v___x_917_; 
v___x_915_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_915_);
v___x_917_ = v___x_908_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_915_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
else
{
lean_dec_ref(v_clientToServer_875_);
goto v___jp_877_;
}
v___jp_877_:
{
uint8_t v___x_878_; 
lean_inc_ref(v_serverToClient_876_);
v___x_878_ = l_Std_CloseableChannel_isClosed___redArg(v_serverToClient_876_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
v___x_879_ = l_Std_CloseableChannel_close___redArg(v_serverToClient_876_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_901_; 
v_a_888_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_901_ == 0)
{
v___x_890_ = v___x_879_;
v_isShared_891_ = v_isSharedCheck_901_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_879_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_901_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
uint8_t v___x_892_; 
v___x_892_ = lean_unbox(v_a_888_);
lean_dec(v_a_888_);
if (v___x_892_ == 0)
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__0));
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v___x_893_);
v___x_895_ = v___x_890_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_893_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
else
{
lean_object* v___x_897_; lean_object* v___x_899_; 
v___x_897_ = ((lean_object*)(l_Std_Http_Internal_Mock_Client_close___closed__1));
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 0, v___x_897_);
v___x_899_ = v___x_890_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v___x_897_);
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
}
else
{
lean_object* v___x_902_; lean_object* v___x_903_; 
lean_dec_ref(v_serverToClient_876_);
v___x_902_ = lean_box(0);
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Mock_Server_close___boxed(lean_object* v_server_920_, lean_object* v_a_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Std_Http_Internal_Mock_Server_close(v_server_920_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0(lean_object* v_client_923_, uint64_t v_expect_924_){
_start:
{
lean_object* v_serverToClient_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v_serverToClient_926_ = lean_ctor_get(v_client_923_, 1);
lean_inc_ref(v_serverToClient_926_);
lean_dec_ref(v_client_923_);
v___x_927_ = lean_box_uint64(v_expect_924_);
v___x_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
v___x_929_ = l_Std_Http_Internal_Mock_recvJoined(v_serverToClient_926_, v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__0___boxed(lean_object* v_client_930_, lean_object* v_expect_931_, lean_object* v___y_932_){
_start:
{
uint64_t v_expect_boxed_933_; lean_object* v_res_934_; 
v_expect_boxed_933_ = lean_unbox_uint64(v_expect_931_);
lean_dec_ref(v_expect_931_);
v_res_934_ = l_Std_Http_Internal_instTransportClient___lam__0(v_client_930_, v_expect_boxed_933_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1(lean_object* v_client_935_, lean_object* v_data_936_){
_start:
{
lean_object* v_clientToServer_938_; lean_object* v___x_939_; 
v_clientToServer_938_ = lean_ctor_get(v_client_935_, 0);
lean_inc_ref(v_clientToServer_938_);
lean_dec_ref(v_client_935_);
v___x_939_ = l_Std_Http_Internal_Mock_sendAll(v_clientToServer_938_, v_data_936_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__1___boxed(lean_object* v_client_940_, lean_object* v_data_941_, lean_object* v___y_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Std_Http_Internal_instTransportClient___lam__1(v_client_940_, v_data_941_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2(lean_object* v_client_944_, uint64_t v_x_945_){
_start:
{
lean_object* v_serverToClient_946_; lean_object* v___x_947_; 
v_serverToClient_946_ = lean_ctor_get(v_client_944_, 1);
lean_inc_ref(v_serverToClient_946_);
lean_dec_ref(v_client_944_);
v___x_947_ = l_Std_CloseableChannel_recvSelector___redArg(v_serverToClient_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportClient___lam__2___boxed(lean_object* v_client_948_, lean_object* v_x_949_){
_start:
{
uint64_t v_x_44__boxed_950_; lean_object* v_res_951_; 
v_x_44__boxed_950_ = lean_unbox_uint64(v_x_949_);
lean_dec_ref(v_x_949_);
v_res_951_ = l_Std_Http_Internal_instTransportClient___lam__2(v_client_948_, v_x_44__boxed_950_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0(lean_object* v_server_962_, uint64_t v_expect_963_){
_start:
{
lean_object* v_clientToServer_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_clientToServer_965_ = lean_ctor_get(v_server_962_, 0);
lean_inc_ref(v_clientToServer_965_);
lean_dec_ref(v_server_962_);
v___x_966_ = lean_box_uint64(v_expect_963_);
v___x_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
v___x_968_ = l_Std_Http_Internal_Mock_recvJoined(v_clientToServer_965_, v___x_967_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__0___boxed(lean_object* v_server_969_, lean_object* v_expect_970_, lean_object* v___y_971_){
_start:
{
uint64_t v_expect_boxed_972_; lean_object* v_res_973_; 
v_expect_boxed_972_ = lean_unbox_uint64(v_expect_970_);
lean_dec_ref(v_expect_970_);
v_res_973_ = l_Std_Http_Internal_instTransportServer___lam__0(v_server_969_, v_expect_boxed_972_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1(lean_object* v_server_974_, lean_object* v_data_975_){
_start:
{
lean_object* v_serverToClient_977_; lean_object* v___x_978_; 
v_serverToClient_977_ = lean_ctor_get(v_server_974_, 1);
lean_inc_ref(v_serverToClient_977_);
lean_dec_ref(v_server_974_);
v___x_978_ = l_Std_Http_Internal_Mock_sendAll(v_serverToClient_977_, v_data_975_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__1___boxed(lean_object* v_server_979_, lean_object* v_data_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Std_Http_Internal_instTransportServer___lam__1(v_server_979_, v_data_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2(lean_object* v_server_983_, uint64_t v_x_984_){
_start:
{
lean_object* v_clientToServer_985_; lean_object* v___x_986_; 
v_clientToServer_985_ = lean_ctor_get(v_server_983_, 0);
lean_inc_ref(v_clientToServer_985_);
lean_dec_ref(v_server_983_);
v___x_986_ = l_Std_CloseableChannel_recvSelector___redArg(v_clientToServer_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_instTransportServer___lam__2___boxed(lean_object* v_server_987_, lean_object* v_x_988_){
_start:
{
uint64_t v_x_44__boxed_989_; lean_object* v_res_990_; 
v_x_44__boxed_989_ = lean_unbox_uint64(v_x_988_);
lean_dec_ref(v_x_988_);
v_res_990_ = l_Std_Http_Internal_instTransportServer___lam__2(v_server_987_, v_x_44__boxed_989_);
return v_res_990_;
}
}
lean_object* runtime_initialize_Std_Http_Protocol_H1(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Transport(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Transport(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Protocol_H1(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Transport(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Transport(builtin);
}
#ifdef __cplusplus
}
#endif
