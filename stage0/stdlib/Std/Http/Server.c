// Lean compiler output
// Module: Std.Http.Server
// Imports: public import Std.Async public import Std.Async.TCP public import Std.Sync.CancellationToken public import Std.Sync.Semaphore public import Std.Http.Server.Config public import Std.Http.Server.Handler public import Std.Http.Server.Connection
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
lean_object* l_Std_Semaphore_release(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_uv_tcp_nodelay(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Channel_send___redArg(lean_object*, lean_object*);
uint8_t l_Std_CancellationToken_isCancelled(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Std_Async_ContextAsync_instMonad;
lean_object* l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_CancellationContext_cancel(lean_object*, lean_object*);
lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Std_CancellationContext_fork(lean_object*);
extern lean_object* l_Std_Http_Extensions_empty;
lean_object* l_Std_Http_Extensions_compareName___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uv_tcp_getpeername(lean_object*);
lean_object* l_Std_Async_TCP_Socket_Server_acceptSelector(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Std_Semaphore_acquire(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_CancellationContext_new();
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* l_Std_CloseableChannel_new___redArg(lean_object*);
lean_object* l_Std_Semaphore_new(lean_object*);
lean_object* lean_uv_tcp_getsockname(lean_object*);
lean_object* lean_uv_tcp_listen(lean_object*, uint32_t);
lean_object* lean_uv_tcp_bind(lean_object*, lean_object*);
lean_object* l_Std_CancellationToken_selector(lean_object*);
extern lean_object* l_Std_Http_instTransportClient;
extern lean_object* l_Std_Http_Server_instImpl_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_;
lean_object* lean_uv_tcp_new();
lean_object* l_Std_Channel_recv___redArg(lean_object*, lean_object*);
lean_object* l_Std_Channel_recvSelector___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdown(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Server_waitShutdown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_waitShutdown___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_waitShutdown___closed__0 = (const lean_object*)&l_Std_Http_Server_waitShutdown___closed__0_value;
static const lean_closure_object l_Std_Http_Server_waitShutdown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_waitShutdown___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Server_waitShutdown___closed__0_value)} };
static const lean_object* l_Std_Http_Server_waitShutdown___closed__1 = (const lean_object*)&l_Std_Http_Server_waitShutdown___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdownSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__5___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadLiftBaseIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__3 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__4 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__4_value;
static const lean_closure_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__4_value),((lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__3_value)} };
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__5 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__5_value;
static const lean_closure_object l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_ContextAsync_instMonadFinally___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__6 = (const lean_object*)&l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Server_serve___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Server_serve___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Server_serve___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Server_serve___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Server_serve___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Server_serve___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Server_serve___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__6(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__15(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__16(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__17(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Server_serve___redArg___lam__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serve___redArg___lam__20___closed__0;
static lean_once_cell_t l_Std_Http_Server_serve___redArg___lam__20___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serve___redArg___lam__20___closed__1;
static const lean_closure_object l_Std_Http_Server_serve___redArg___lam__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Extensions_compareName___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_serve___redArg___lam__20___closed__2 = (const lean_object*)&l_Std_Http_Server_serve___redArg___lam__20___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__20(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__19(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__19___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__21(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__22(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Server_serve___redArg___lam__24___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_Server_serve___redArg___lam__24___closed__0 = (const lean_object*)&l_Std_Http_Server_serve___redArg___lam__24___closed__0_value;
static const lean_ctor_object l_Std_Http_Server_serve___redArg___lam__24___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Server_serve___redArg___lam__24___closed__0_value)}};
static const lean_object* l_Std_Http_Server_serve___redArg___lam__24___closed__1 = (const lean_object*)&l_Std_Http_Server_serve___redArg___lam__24___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__24(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__25(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__27(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__28(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__29(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Server_serve___redArg___lam__30___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_serve___redArg___lam__9___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Server_serve___redArg___lam__30___closed__0 = (const lean_object*)&l_Std_Http_Server_serve___redArg___lam__30___closed__0_value;
static const lean_closure_object l_Std_Http_Server_serve___redArg___lam__30___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_serve___redArg___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Server_serve___redArg___lam__30___closed__1 = (const lean_object*)&l_Std_Http_Server_serve___redArg___lam__30___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__30___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__31(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__33(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__34(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__35___boxed(lean_object**);
static const lean_closure_object l_Std_Http_Server_serve___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_serve___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_serve___redArg___closed__0 = (const lean_object*)&l_Std_Http_Server_serve___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_Server_serve___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_serve___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_serve___redArg___closed__1 = (const lean_object*)&l_Std_Http_Server_serve___redArg___closed__1_value;
static const lean_closure_object l_Std_Http_Server_serve___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_serve___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_serve___redArg___closed__2 = (const lean_object*)&l_Std_Http_Server_serve___redArg___closed__2_value;
static const lean_closure_object l_Std_Http_Server_serve___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_serve___redArg___lam__6___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_serve___redArg___closed__3 = (const lean_object*)&l_Std_Http_Server_serve___redArg___closed__3_value;
static const lean_closure_object l_Std_Http_Server_serve___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_serve___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_serve___redArg___closed__4 = (const lean_object*)&l_Std_Http_Server_serve___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_new(lean_object* v_config_1_, lean_object* v_localAddr_2_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v_connectionLimit_8_; lean_object* v_maxConnections_13_; uint8_t v___x_14_; 
v___x_4_ = l_Std_CancellationContext_new();
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = l_Std_Mutex_new___redArg(v___x_5_);
v_maxConnections_13_ = lean_ctor_get(v_config_1_, 0);
v___x_14_ = lean_nat_dec_eq(v_maxConnections_13_, v___x_5_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; lean_object* v___x_16_; 
lean_inc(v_maxConnections_13_);
v___x_15_ = l_Std_Semaphore_new(v_maxConnections_13_);
v___x_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
v_connectionLimit_8_ = v___x_16_;
goto v___jp_7_;
}
else
{
lean_object* v___x_17_; 
v___x_17_ = lean_box(0);
v_connectionLimit_8_ = v___x_17_;
goto v___jp_7_;
}
v___jp_7_:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = lean_box(0);
v___x_10_ = l_Std_CloseableChannel_new___redArg(v___x_9_);
v___x_11_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_11_, 0, v___x_4_);
lean_ctor_set(v___x_11_, 1, v___x_6_);
lean_ctor_set(v___x_11_, 2, v_connectionLimit_8_);
lean_ctor_set(v___x_11_, 3, v___x_10_);
lean_ctor_set(v___x_11_, 4, v_config_1_);
lean_ctor_set(v___x_11_, 5, v_localAddr_2_);
v___x_12_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_new___boxed(lean_object* v_config_18_, lean_object* v_localAddr_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Std_Http_Server_new(v_config_18_, v_localAddr_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdown(lean_object* v_s_22_){
_start:
{
lean_object* v_context_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v_context_24_ = lean_ctor_get(v_s_22_, 0);
lean_inc_ref(v_context_24_);
lean_dec_ref(v_s_22_);
v___x_25_ = lean_box(1);
v___x_26_ = l_Std_CancellationContext_cancel(v_context_24_, v___x_25_);
v___x_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdown___boxed(lean_object* v_s_29_, lean_object* v_a_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Std_Http_Server_shutdown(v_s_29_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___lam__0(lean_object* v_a_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_33_, 0, v_a_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___lam__1(lean_object* v___f_34_, lean_object* v_x_35_){
_start:
{
if (lean_obj_tag(v_x_35_) == 0)
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_45_; 
lean_dec_ref(v___f_34_);
v_a_37_ = lean_ctor_get(v_x_35_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_35_);
if (v_isSharedCheck_45_ == 0)
{
v___x_39_ = v_x_35_;
v_isShared_40_ = v_isSharedCheck_45_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v_x_35_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_45_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_44_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
lean_object* v___x_43_; 
v___x_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
return v___x_43_;
}
}
}
else
{
lean_object* v_a_46_; lean_object* v___x_47_; uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v_a_46_ = lean_ctor_get(v_x_35_, 0);
lean_inc(v_a_46_);
lean_dec_ref_known(v_x_35_, 1);
v___x_47_ = lean_unsigned_to_nat(0u);
v___x_48_ = 0;
v___x_49_ = lean_task_map(v___f_34_, v_a_46_, v___x_47_, v___x_48_);
v___x_50_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___lam__1___boxed(lean_object* v___f_51_, lean_object* v_x_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Std_Http_Server_waitShutdown___lam__1(v___f_51_, v_x_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown(lean_object* v_s_58_){
_start:
{
lean_object* v_shutdownPromise_60_; lean_object* v___f_61_; lean_object* v___x_62_; lean_object* v___x_63_; uint8_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v_shutdownPromise_60_ = lean_ctor_get(v_s_58_, 3);
lean_inc_ref(v_shutdownPromise_60_);
lean_dec_ref(v_s_58_);
v___f_61_ = ((lean_object*)(l_Std_Http_Server_waitShutdown___closed__1));
v___x_62_ = lean_box(0);
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = 0;
v___x_65_ = l_Std_Channel_recv___redArg(v___x_62_, v_shutdownPromise_60_);
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
v___x_68_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_63_, v___x_64_, v___x_67_, v___f_61_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdown___boxed(lean_object* v_s_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Std_Http_Server_waitShutdown(v_s_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_waitShutdownSelector(lean_object* v_s_72_){
_start:
{
lean_object* v_shutdownPromise_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_shutdownPromise_73_ = lean_ctor_get(v_s_72_, 3);
lean_inc_ref(v_shutdownPromise_73_);
lean_dec_ref(v_s_72_);
v___x_74_ = lean_box(0);
v___x_75_ = l_Std_Channel_recvSelector___redArg(v___x_74_, v_shutdownPromise_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait___lam__2(lean_object* v_shutdownPromise_76_, lean_object* v___f_77_, lean_object* v_x_78_){
_start:
{
if (lean_obj_tag(v_x_78_) == 0)
{
lean_object* v___x_80_; 
lean_dec_ref(v___f_77_);
lean_dec_ref(v_shutdownPromise_76_);
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v_x_78_);
return v___x_80_;
}
else
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_93_; 
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_78_);
if (v_isSharedCheck_93_ == 0)
{
lean_object* v_unused_94_; 
v_unused_94_ = lean_ctor_get(v_x_78_, 0);
lean_dec(v_unused_94_);
v___x_82_ = v_x_78_;
v_isShared_83_ = v_isSharedCheck_93_;
goto v_resetjp_81_;
}
else
{
lean_dec(v_x_78_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_93_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_84_ = lean_box(0);
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = 0;
v___x_87_ = l_Std_Channel_recv___redArg(v___x_84_, v_shutdownPromise_76_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v___x_87_);
v___x_89_ = v___x_82_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_92_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
v___x_91_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_85_, v___x_86_, v___x_90_, v___f_77_);
return v___x_91_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait___lam__2___boxed(lean_object* v_shutdownPromise_95_, lean_object* v___f_96_, lean_object* v_x_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Std_Http_Server_shutdownAndWait___lam__2(v_shutdownPromise_95_, v___f_96_, v_x_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait(lean_object* v_s_100_){
_start:
{
lean_object* v_context_102_; lean_object* v_shutdownPromise_103_; lean_object* v___f_104_; lean_object* v___f_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_context_102_ = lean_ctor_get(v_s_100_, 0);
lean_inc_ref(v_context_102_);
v_shutdownPromise_103_ = lean_ctor_get(v_s_100_, 3);
lean_inc_ref(v_shutdownPromise_103_);
lean_dec_ref(v_s_100_);
v___f_104_ = ((lean_object*)(l_Std_Http_Server_waitShutdown___closed__1));
v___f_105_ = lean_alloc_closure((void*)(l_Std_Http_Server_shutdownAndWait___lam__2___boxed), 4, 2);
lean_closure_set(v___f_105_, 0, v_shutdownPromise_103_);
lean_closure_set(v___f_105_, 1, v___f_104_);
v___x_106_ = lean_box(1);
v___x_107_ = lean_unsigned_to_nat(0u);
v___x_108_ = 0;
v___x_109_ = l_Std_CancellationContext_cancel(v_context_102_, v___x_106_);
v___x_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
v___x_112_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_107_, v___x_108_, v___x_111_, v___f_105_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_shutdownAndWait___boxed(lean_object* v_s_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Std_Http_Server_shutdownAndWait(v_s_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0(lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_123_ = lean_st_ref_take(v___y_120_);
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = lean_nat_add(v___x_123_, v___x_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_st_ref_put(v___y_120_, v___x_125_);
v___x_127_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1));
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___boxed(lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0(v___y_128_, v___y_129_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__1(lean_object* v_x_132_){
_start:
{
lean_object* v_fst_133_; 
v_fst_133_ = lean_ctor_get(v_x_132_, 0);
lean_inc(v_fst_133_);
return v_fst_133_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__1___boxed(lean_object* v_x_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__1(v_x_134_);
lean_dec_ref(v_x_134_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__2(lean_object* v_a_136_, lean_object* v_shutdownPromise_137_, lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_150_; 
lean_dec_ref(v_shutdownPromise_137_);
v_a_142_ = lean_ctor_get(v_x_138_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_150_ == 0)
{
v___x_144_ = v_x_138_;
v_isShared_145_ = v_isSharedCheck_150_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v_x_138_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_150_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_149_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_148_; 
v___x_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
return v___x_148_;
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v_a_151_ = lean_ctor_get(v_x_138_, 0);
lean_inc(v_a_151_);
lean_dec_ref_known(v_x_138_, 1);
v___x_152_ = lean_unsigned_to_nat(0u);
v___x_153_ = lean_nat_dec_eq(v_a_136_, v___x_152_);
if (v___x_153_ == 0)
{
lean_dec(v_a_151_);
lean_dec_ref(v_shutdownPromise_137_);
goto v___jp_140_;
}
else
{
uint8_t v___x_154_; 
v___x_154_ = lean_unbox(v_a_151_);
lean_dec(v_a_151_);
if (v___x_154_ == 0)
{
lean_dec_ref(v_shutdownPromise_137_);
goto v___jp_140_;
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_box(0);
v___x_156_ = l_Std_Channel_send___redArg(v_shutdownPromise_137_, v___x_155_);
lean_dec_ref(v___x_156_);
v___x_157_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1));
return v___x_157_;
}
}
}
v___jp_140_:
{
lean_object* v___x_141_; 
v___x_141_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1));
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__2___boxed(lean_object* v_a_158_, lean_object* v_shutdownPromise_159_, lean_object* v_x_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__2(v_a_158_, v_shutdownPromise_159_, v_x_160_);
lean_dec(v_a_158_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3(lean_object* v_context_163_, lean_object* v_shutdownPromise_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_175_; 
lean_dec_ref(v_shutdownPromise_164_);
lean_dec_ref(v_context_163_);
v_a_167_ = lean_ctor_get(v_x_165_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_175_ == 0)
{
v___x_169_ = v_x_165_;
v_isShared_170_ = v_isSharedCheck_175_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v_x_165_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_175_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_174_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
}
else
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_191_; 
v_a_176_ = lean_ctor_get(v_x_165_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_165_);
if (v_isSharedCheck_191_ == 0)
{
v___x_178_ = v_x_165_;
v_isShared_179_ = v_isSharedCheck_191_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v_x_165_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_191_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_token_180_; lean_object* v___f_181_; lean_object* v___x_182_; uint8_t v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
v_token_180_ = lean_ctor_get(v_context_163_, 1);
lean_inc_ref(v_token_180_);
lean_dec_ref(v_context_163_);
v___f_181_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_181_, 0, v_a_176_);
lean_closure_set(v___f_181_, 1, v_shutdownPromise_164_);
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = 0;
v___x_184_ = l_Std_CancellationToken_isCancelled(v_token_180_);
v___x_185_ = lean_box(v___x_184_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_185_);
v___x_187_ = v___x_178_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_185_);
v___x_187_ = v_reuseFailAlloc_190_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
v___x_189_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_182_, v___x_183_, v___x_188_, v___f_181_);
return v___x_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3___boxed(lean_object* v_context_192_, lean_object* v_shutdownPromise_193_, lean_object* v_x_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3(v_context_192_, v_shutdownPromise_193_, v_x_194_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4(lean_object* v___f_197_, lean_object* v_____r_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v___x_202_; uint8_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_202_ = lean_unsigned_to_nat(0u);
v___x_203_ = 0;
v___x_204_ = lean_st_ref_get(v___y_199_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
v___x_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
v___x_207_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_202_, v___x_203_, v___x_206_, v___f_197_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4___boxed(lean_object* v___f_208_, lean_object* v_____r_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4(v___f_208_, v_____r_209_, v___y_210_, v___y_211_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__5(lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_217_ = lean_st_ref_take(v___y_214_);
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = lean_nat_sub(v___x_217_, v___x_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_st_ref_put(v___y_214_, v___x_219_);
v___x_221_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1));
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__5___boxed(lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__5(v___y_222_, v___y_223_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6(lean_object* v___x_226_, lean_object* v___f_227_, lean_object* v___f_228_, lean_object* v___f_229_, lean_object* v___f_230_, lean_object* v_activeConnections_231_, lean_object* v_____r_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; lean_object* v___x_2275__overap_236_; lean_object* v___x_237_; 
lean_inc_ref(v___x_226_);
v___x_235_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_235_, 0, lean_box(0));
lean_closure_set(v___x_235_, 1, lean_box(0));
lean_closure_set(v___x_235_, 2, v___x_226_);
lean_closure_set(v___x_235_, 3, lean_box(0));
lean_closure_set(v___x_235_, 4, lean_box(0));
lean_closure_set(v___x_235_, 5, v___f_227_);
lean_closure_set(v___x_235_, 6, v___f_228_);
v___x_2275__overap_236_ = l_Std_Mutex_atomically___redArg(v___x_226_, v___f_229_, v___f_230_, v_activeConnections_231_, v___x_235_);
lean_inc_ref(v___y_233_);
v___x_237_ = lean_apply_2(v___x_2275__overap_236_, v___y_233_, lean_box(0));
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6___boxed(lean_object* v___x_238_, lean_object* v___f_239_, lean_object* v___f_240_, lean_object* v___f_241_, lean_object* v___f_242_, lean_object* v_activeConnections_243_, lean_object* v_____r_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6(v___x_238_, v___f_239_, v___f_240_, v___f_241_, v___f_242_, v_activeConnections_243_, v_____r_244_, v___y_245_);
lean_dec_ref(v___y_245_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__7(lean_object* v___f_248_, lean_object* v_a_249_, lean_object* v_x_250_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_object* v___x_252_; 
lean_dec_ref(v___f_248_);
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v_x_250_);
return v___x_252_;
}
else
{
lean_object* v_a_253_; lean_object* v___x_254_; 
v_a_253_ = lean_ctor_get(v_x_250_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v_x_250_, 1);
lean_inc_ref(v_a_249_);
v___x_254_ = lean_apply_3(v___f_248_, v_a_253_, v_a_249_, lean_box(0));
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__7___boxed(lean_object* v___f_255_, lean_object* v_a_256_, lean_object* v_x_257_, lean_object* v___y_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__7(v___f_255_, v_a_256_, v_x_257_);
lean_dec_ref(v_a_256_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__8(uint8_t v_releaseConnectionPermit_260_, lean_object* v___f_261_, lean_object* v_a_262_, lean_object* v_connectionLimit_263_, lean_object* v___f_264_, lean_object* v_opt_265_){
_start:
{
if (v_releaseConnectionPermit_260_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
lean_dec_ref(v___f_264_);
lean_dec(v_connectionLimit_263_);
v___x_267_ = lean_box(0);
lean_inc_ref(v_a_262_);
v___x_268_ = lean_apply_3(v___f_261_, v___x_267_, v_a_262_, lean_box(0));
return v___x_268_;
}
else
{
if (lean_obj_tag(v_connectionLimit_263_) == 1)
{
lean_object* v_val_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_281_; 
lean_dec_ref(v___f_261_);
v_val_269_ = lean_ctor_get(v_connectionLimit_263_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v_connectionLimit_263_);
if (v_isSharedCheck_281_ == 0)
{
v___x_271_ = v_connectionLimit_263_;
v_isShared_272_ = v_isSharedCheck_281_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_val_269_);
lean_dec(v_connectionLimit_263_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_281_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; uint8_t v___x_274_; lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_273_ = lean_unsigned_to_nat(0u);
v___x_274_ = 0;
v___x_275_ = l_Std_Semaphore_release(v_val_269_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_275_);
v___x_277_ = v___x_271_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_275_);
v___x_277_ = v_reuseFailAlloc_280_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
v___x_279_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_273_, v___x_274_, v___x_278_, v___f_264_);
return v___x_279_;
}
}
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec_ref(v___f_264_);
lean_dec(v_connectionLimit_263_);
v___x_282_ = lean_box(0);
lean_inc_ref(v_a_262_);
v___x_283_ = lean_apply_3(v___f_261_, v___x_282_, v_a_262_, lean_box(0));
return v___x_283_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__8___boxed(lean_object* v_releaseConnectionPermit_284_, lean_object* v___f_285_, lean_object* v_a_286_, lean_object* v_connectionLimit_287_, lean_object* v___f_288_, lean_object* v_opt_289_, lean_object* v___y_290_){
_start:
{
uint8_t v_releaseConnectionPermit_boxed_291_; lean_object* v_res_292_; 
v_releaseConnectionPermit_boxed_291_ = lean_unbox(v_releaseConnectionPermit_284_);
v_res_292_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__8(v_releaseConnectionPermit_boxed_291_, v___f_285_, v_a_286_, v_connectionLimit_287_, v___f_288_, v_opt_289_);
lean_dec(v_opt_289_);
lean_dec_ref(v_a_286_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__9(lean_object* v___f_293_, lean_object* v_action_294_, lean_object* v_a_295_, lean_object* v___f_296_, lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_297_) == 0)
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_307_; 
lean_dec_ref(v___f_296_);
lean_dec_ref(v_action_294_);
lean_dec(v___f_293_);
v_a_299_ = lean_ctor_get(v_x_297_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v_x_297_);
if (v_isSharedCheck_307_ == 0)
{
v___x_301_ = v_x_297_;
v_isShared_302_ = v_isSharedCheck_307_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v_x_297_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_307_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_306_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_305_; 
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
return v___x_305_;
}
}
}
else
{
lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___y_314_; 
lean_dec_ref_known(v_x_297_, 1);
v___x_308_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_308_, 0, lean_box(0));
lean_closure_set(v___x_308_, 1, lean_box(0));
lean_closure_set(v___x_308_, 2, lean_box(0));
lean_closure_set(v___x_308_, 3, v___f_293_);
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = 0;
lean_inc_ref(v_a_295_);
v___x_311_ = lean_apply_1(v_action_294_, v_a_295_);
v___x_312_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___x_311_, v___f_296_, v___x_309_, v___x_310_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v_a_316_; 
lean_dec_ref(v___x_308_);
v_a_316_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_312_, 1);
if (lean_obj_tag(v_a_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
v_a_317_ = lean_ctor_get(v_a_316_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v_a_316_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v_a_316_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v_a_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
v___y_314_ = v___x_322_;
goto v___jp_313_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_333_; 
v_a_325_ = lean_ctor_get(v_a_316_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v_a_316_);
if (v_isSharedCheck_333_ == 0)
{
v___x_327_ = v_a_316_;
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v_a_316_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_333_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v_fst_329_; lean_object* v___x_331_; 
v_fst_329_ = lean_ctor_get(v_a_325_, 0);
lean_inc(v_fst_329_);
lean_dec(v_a_325_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v_fst_329_);
v___x_331_ = v___x_327_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_fst_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
v___y_314_ = v___x_331_;
goto v___jp_313_;
}
}
}
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_342_; 
v_a_334_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_342_ == 0)
{
v___x_336_ = v___x_312_;
v_isShared_337_ = v_isSharedCheck_342_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_312_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_342_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_task_map(v___x_308_, v_a_334_, v___x_309_, v___x_310_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_338_);
v___x_340_ = v___x_336_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
v___jp_313_:
{
lean_object* v___x_315_; 
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___y_314_);
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__9___boxed(lean_object* v___f_343_, lean_object* v_action_344_, lean_object* v_a_345_, lean_object* v___f_346_, lean_object* v_x_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__9(v___f_343_, v_action_344_, v_a_345_, v___f_346_, v_x_347_);
lean_dec_ref(v_a_345_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg(lean_object* v_s_359_, uint8_t v_releaseConnectionPermit_360_, lean_object* v_action_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_364_; lean_object* v_context_365_; lean_object* v_activeConnections_366_; lean_object* v_connectionLimit_367_; lean_object* v_shutdownPromise_368_; lean_object* v___f_369_; lean_object* v___f_370_; lean_object* v___f_371_; lean_object* v___f_372_; lean_object* v___f_373_; lean_object* v___f_374_; lean_object* v___f_375_; lean_object* v___f_376_; lean_object* v___f_377_; lean_object* v___x_378_; lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___x_381_; uint8_t v___x_382_; lean_object* v___x_2028__overap_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_364_ = l_Std_Async_ContextAsync_instMonad;
v_context_365_ = lean_ctor_get(v_s_359_, 0);
lean_inc_ref(v_context_365_);
v_activeConnections_366_ = lean_ctor_get(v_s_359_, 1);
lean_inc_ref_n(v_activeConnections_366_, 2);
v_connectionLimit_367_ = lean_ctor_get(v_s_359_, 2);
lean_inc(v_connectionLimit_367_);
v_shutdownPromise_368_ = lean_ctor_get(v_s_359_, 3);
lean_inc_ref(v_shutdownPromise_368_);
lean_dec_ref(v_s_359_);
v___f_369_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__0));
v___f_370_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__1));
v___f_371_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_371_, 0, v_context_365_);
lean_closure_set(v___f_371_, 1, v_shutdownPromise_368_);
v___f_372_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4___boxed), 5, 1);
lean_closure_set(v___f_372_, 0, v___f_371_);
v___f_373_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__2));
v___f_374_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__5));
v___f_375_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__6));
v___f_376_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6___boxed), 9, 6);
lean_closure_set(v___f_376_, 0, v___x_364_);
lean_closure_set(v___f_376_, 1, v___f_373_);
lean_closure_set(v___f_376_, 2, v___f_372_);
lean_closure_set(v___f_376_, 3, v___f_374_);
lean_closure_set(v___f_376_, 4, v___f_375_);
lean_closure_set(v___f_376_, 5, v_activeConnections_366_);
lean_inc_ref_n(v_a_362_, 4);
lean_inc_ref(v___f_376_);
v___f_377_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_377_, 0, v___f_376_);
lean_closure_set(v___f_377_, 1, v_a_362_);
v___x_378_ = lean_box(v_releaseConnectionPermit_360_);
v___f_379_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__8___boxed), 7, 5);
lean_closure_set(v___f_379_, 0, v___x_378_);
lean_closure_set(v___f_379_, 1, v___f_376_);
lean_closure_set(v___f_379_, 2, v_a_362_);
lean_closure_set(v___f_379_, 3, v_connectionLimit_367_);
lean_closure_set(v___f_379_, 4, v___f_377_);
v___f_380_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__9___boxed), 6, 4);
lean_closure_set(v___f_380_, 0, v___f_370_);
lean_closure_set(v___f_380_, 1, v_action_361_);
lean_closure_set(v___f_380_, 2, v_a_362_);
lean_closure_set(v___f_380_, 3, v___f_379_);
v___x_381_ = lean_unsigned_to_nat(0u);
v___x_382_ = 0;
v___x_2028__overap_383_ = l_Std_Mutex_atomically___redArg(v___x_364_, v___f_374_, v___f_375_, v_activeConnections_366_, v___f_369_);
v___x_384_ = lean_apply_2(v___x_2028__overap_383_, v_a_362_, lean_box(0));
v___x_385_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_381_, v___x_382_, v___x_384_, v___f_380_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___boxed(lean_object* v_s_386_, lean_object* v_releaseConnectionPermit_387_, lean_object* v_action_388_, lean_object* v_a_389_, lean_object* v_a_390_){
_start:
{
uint8_t v_releaseConnectionPermit_boxed_391_; lean_object* v_res_392_; 
v_releaseConnectionPermit_boxed_391_ = lean_unbox(v_releaseConnectionPermit_387_);
v_res_392_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg(v_s_386_, v_releaseConnectionPermit_boxed_391_, v_action_388_, v_a_389_);
lean_dec_ref(v_a_389_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation(lean_object* v_00_u03b1_393_, lean_object* v_s_394_, uint8_t v_releaseConnectionPermit_395_, lean_object* v_action_396_, lean_object* v_a_397_){
_start:
{
lean_object* v___x_399_; lean_object* v_context_400_; lean_object* v_activeConnections_401_; lean_object* v_connectionLimit_402_; lean_object* v_shutdownPromise_403_; lean_object* v___f_404_; lean_object* v___f_405_; lean_object* v___f_406_; lean_object* v___f_407_; lean_object* v___f_408_; lean_object* v___f_409_; lean_object* v___f_410_; lean_object* v___f_411_; lean_object* v___f_412_; lean_object* v___x_413_; lean_object* v___f_414_; lean_object* v___f_415_; lean_object* v___x_416_; uint8_t v___x_417_; lean_object* v___x_2180__overap_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_399_ = l_Std_Async_ContextAsync_instMonad;
v_context_400_ = lean_ctor_get(v_s_394_, 0);
lean_inc_ref(v_context_400_);
v_activeConnections_401_ = lean_ctor_get(v_s_394_, 1);
lean_inc_ref_n(v_activeConnections_401_, 2);
v_connectionLimit_402_ = lean_ctor_get(v_s_394_, 2);
lean_inc(v_connectionLimit_402_);
v_shutdownPromise_403_ = lean_ctor_get(v_s_394_, 3);
lean_inc_ref(v_shutdownPromise_403_);
lean_dec_ref(v_s_394_);
v___f_404_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__0));
v___f_405_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__1));
v___f_406_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_406_, 0, v_context_400_);
lean_closure_set(v___f_406_, 1, v_shutdownPromise_403_);
v___f_407_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4___boxed), 5, 1);
lean_closure_set(v___f_407_, 0, v___f_406_);
v___f_408_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__2));
v___f_409_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__5));
v___f_410_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__6));
v___f_411_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6___boxed), 9, 6);
lean_closure_set(v___f_411_, 0, v___x_399_);
lean_closure_set(v___f_411_, 1, v___f_408_);
lean_closure_set(v___f_411_, 2, v___f_407_);
lean_closure_set(v___f_411_, 3, v___f_409_);
lean_closure_set(v___f_411_, 4, v___f_410_);
lean_closure_set(v___f_411_, 5, v_activeConnections_401_);
lean_inc_ref_n(v_a_397_, 4);
lean_inc_ref(v___f_411_);
v___f_412_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_412_, 0, v___f_411_);
lean_closure_set(v___f_412_, 1, v_a_397_);
v___x_413_ = lean_box(v_releaseConnectionPermit_395_);
v___f_414_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__8___boxed), 7, 5);
lean_closure_set(v___f_414_, 0, v___x_413_);
lean_closure_set(v___f_414_, 1, v___f_411_);
lean_closure_set(v___f_414_, 2, v_a_397_);
lean_closure_set(v___f_414_, 3, v_connectionLimit_402_);
lean_closure_set(v___f_414_, 4, v___f_412_);
v___f_415_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__9___boxed), 6, 4);
lean_closure_set(v___f_415_, 0, v___f_405_);
lean_closure_set(v___f_415_, 1, v_action_396_);
lean_closure_set(v___f_415_, 2, v_a_397_);
lean_closure_set(v___f_415_, 3, v___f_414_);
v___x_416_ = lean_unsigned_to_nat(0u);
v___x_417_ = 0;
v___x_2180__overap_418_ = l_Std_Mutex_atomically___redArg(v___x_399_, v___f_409_, v___f_410_, v_activeConnections_401_, v___f_404_);
v___x_419_ = lean_apply_2(v___x_2180__overap_418_, v_a_397_, lean_box(0));
v___x_420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_416_, v___x_417_, v___x_419_, v___f_415_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___boxed(lean_object* v_00_u03b1_421_, lean_object* v_s_422_, lean_object* v_releaseConnectionPermit_423_, lean_object* v_action_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
uint8_t v_releaseConnectionPermit_boxed_427_; lean_object* v_res_428_; 
v_releaseConnectionPermit_boxed_427_ = lean_unbox(v_releaseConnectionPermit_423_);
v_res_428_ = l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation(v_00_u03b1_421_, v_s_422_, v_releaseConnectionPermit_boxed_427_, v_action_424_, v_a_425_);
lean_dec_ref(v_a_425_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__1(lean_object* v_x_429_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_431_, 0, v_x_429_);
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__1___boxed(lean_object* v_x_434_, lean_object* v___y_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Std_Http_Server_serve___redArg___lam__1(v_x_434_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__0(lean_object* v_x_441_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___lam__0___closed__1));
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__0___boxed(lean_object* v_x_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Std_Http_Server_serve___redArg___lam__0(v_x_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__2(lean_object* v_x_447_){
_start:
{
lean_object* v_fst_448_; 
v_fst_448_ = lean_ctor_get(v_x_447_, 0);
lean_inc(v_fst_448_);
return v_fst_448_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__2___boxed(lean_object* v_x_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Std_Http_Server_serve___redArg___lam__2(v_x_449_);
lean_dec_ref(v_x_449_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__6(lean_object* v_x_451_){
_start:
{
if (lean_obj_tag(v_x_451_) == 0)
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_461_; 
v_a_453_ = lean_ctor_get(v_x_451_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v_x_451_);
if (v_isSharedCheck_461_ == 0)
{
v___x_455_ = v_x_451_;
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v_x_451_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_453_);
v___x_458_ = v_reuseFailAlloc_460_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_object* v___x_459_; 
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
}
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_472_; 
v_a_462_ = lean_ctor_get(v_x_451_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v_x_451_);
if (v_isSharedCheck_472_ == 0)
{
v___x_464_ = v_x_451_;
v_isShared_465_ = v_isSharedCheck_472_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v_x_451_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_472_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v_token_466_; lean_object* v___x_467_; lean_object* v___x_469_; 
v_token_466_ = lean_ctor_get(v_a_462_, 1);
lean_inc_ref(v_token_466_);
lean_dec(v_a_462_);
v___x_467_ = l_Std_CancellationToken_selector(v_token_466_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 0, v___x_467_);
v___x_469_ = v___x_464_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_471_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
lean_object* v___x_470_; 
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__6___boxed(lean_object* v_x_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Std_Http_Server_serve___redArg___lam__6(v_x_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__3(lean_object* v_x_476_){
_start:
{
if (lean_obj_tag(v_x_476_) == 0)
{
lean_object* v___x_478_; 
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v_x_476_);
return v___x_478_;
}
else
{
lean_object* v___x_479_; 
lean_dec_ref_known(v_x_476_, 1);
v___x_479_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1));
return v___x_479_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__3___boxed(lean_object* v_x_480_, lean_object* v___y_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Std_Http_Server_serve___redArg___lam__3(v_x_480_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__4(lean_object* v_x_483_, lean_object* v_x_484_){
_start:
{
if (lean_obj_tag(v_x_484_) == 0)
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_494_; 
lean_dec_ref(v_x_483_);
v_a_486_ = lean_ctor_get(v_x_484_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v_x_484_);
if (v_isSharedCheck_494_ == 0)
{
v___x_488_ = v_x_484_;
v_isShared_489_ = v_isSharedCheck_494_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v_x_484_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_494_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_486_);
v___x_491_ = v_reuseFailAlloc_493_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; 
v___x_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
}
}
else
{
lean_object* v___x_495_; 
lean_dec_ref_known(v_x_484_, 1);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v_x_483_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__4___boxed(lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Std_Http_Server_serve___redArg___lam__4(v_x_496_, v_x_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__9(lean_object* v___x_500_, lean_object* v_____r_501_, lean_object* v___y_502_){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_500_);
v___x_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__9___boxed(lean_object* v___x_507_, lean_object* v_____r_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Std_Http_Server_serve___redArg___lam__9(v___x_507_, v_____r_508_, v___y_509_);
lean_dec_ref(v___y_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__5(lean_object* v___x_512_, lean_object* v_x_513_){
_start:
{
if (lean_obj_tag(v_x_513_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_a_515_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v_x_513_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v_x_513_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_522_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_object* v___x_521_; 
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
}
}
else
{
lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_532_; 
v_isSharedCheck_532_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_532_ == 0)
{
lean_object* v_unused_533_; 
v_unused_533_ = lean_ctor_get(v_x_513_, 0);
lean_dec(v_unused_533_);
v___x_525_ = v_x_513_;
v_isShared_526_ = v_isSharedCheck_532_;
goto v_resetjp_524_;
}
else
{
lean_dec(v_x_513_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_532_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_512_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_527_);
v___x_529_ = v___x_525_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_531_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; 
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__5___boxed(lean_object* v___x_534_, lean_object* v_x_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Std_Http_Server_serve___redArg___lam__5(v___x_534_, v_x_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__7(lean_object* v___f_538_, lean_object* v___y_539_, lean_object* v_x_540_){
_start:
{
if (lean_obj_tag(v_x_540_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref(v___f_538_);
v_a_542_ = lean_ctor_get(v_x_540_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v_x_540_);
if (v_isSharedCheck_550_ == 0)
{
v___x_544_ = v_x_540_;
v_isShared_545_ = v_isSharedCheck_550_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v_x_540_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_550_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_549_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; 
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_552_; 
v_a_551_ = lean_ctor_get(v_x_540_, 0);
lean_inc(v_a_551_);
lean_dec_ref_known(v_x_540_, 1);
lean_inc_ref(v___y_539_);
v___x_552_ = lean_apply_3(v___f_538_, v_a_551_, v___y_539_, lean_box(0));
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__7___boxed(lean_object* v___f_553_, lean_object* v___y_554_, lean_object* v_x_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Std_Http_Server_serve___redArg___lam__7(v___f_553_, v___y_554_, v_x_555_);
lean_dec_ref(v___y_554_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__10(lean_object* v___f_558_, lean_object* v_a_559_, lean_object* v_x_560_){
_start:
{
if (lean_obj_tag(v_x_560_) == 0)
{
lean_object* v___x_562_; 
lean_dec_ref(v_a_559_);
lean_dec_ref(v___f_558_);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v_x_560_);
return v___x_562_;
}
else
{
lean_object* v_a_563_; lean_object* v___x_564_; 
v_a_563_ = lean_ctor_get(v_x_560_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v_x_560_, 1);
v___x_564_ = lean_apply_3(v___f_558_, v_a_563_, v_a_559_, lean_box(0));
return v___x_564_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__10___boxed(lean_object* v___f_565_, lean_object* v_a_566_, lean_object* v_x_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Std_Http_Server_serve___redArg___lam__10(v___f_565_, v_a_566_, v_x_567_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__8(uint8_t v_permitAcquired_570_, lean_object* v___f_571_, lean_object* v___x_572_, lean_object* v_a_573_, lean_object* v_connectionLimit_574_, lean_object* v___x_575_, uint8_t v___x_576_, lean_object* v___f_577_, lean_object* v_opt_578_){
_start:
{
if (v_permitAcquired_570_ == 0)
{
lean_object* v___x_580_; 
lean_dec_ref(v___f_577_);
lean_dec(v___x_575_);
lean_dec(v_connectionLimit_574_);
v___x_580_ = lean_apply_3(v___f_571_, v___x_572_, v_a_573_, lean_box(0));
return v___x_580_;
}
else
{
if (lean_obj_tag(v_connectionLimit_574_) == 1)
{
lean_object* v_val_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_591_; 
lean_dec_ref(v_a_573_);
lean_dec_ref(v___f_571_);
v_val_581_ = lean_ctor_get(v_connectionLimit_574_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v_connectionLimit_574_);
if (v_isSharedCheck_591_ == 0)
{
v___x_583_ = v_connectionLimit_574_;
v_isShared_584_ = v_isSharedCheck_591_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_val_581_);
lean_dec(v_connectionLimit_574_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_591_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_585_ = l_Std_Semaphore_release(v_val_581_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_585_);
v___x_587_ = v___x_583_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_590_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
v___x_589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_575_, v___x_576_, v___x_588_, v___f_577_);
return v___x_589_;
}
}
}
else
{
lean_object* v___x_592_; 
lean_dec_ref(v___f_577_);
lean_dec(v___x_575_);
lean_dec(v_connectionLimit_574_);
v___x_592_ = lean_apply_3(v___f_571_, v___x_572_, v_a_573_, lean_box(0));
return v___x_592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__8___boxed(lean_object* v_permitAcquired_593_, lean_object* v___f_594_, lean_object* v___x_595_, lean_object* v_a_596_, lean_object* v_connectionLimit_597_, lean_object* v___x_598_, lean_object* v___x_599_, lean_object* v___f_600_, lean_object* v_opt_601_, lean_object* v___y_602_){
_start:
{
uint8_t v_permitAcquired_boxed_603_; uint8_t v___x_13864__boxed_604_; lean_object* v_res_605_; 
v_permitAcquired_boxed_603_ = lean_unbox(v_permitAcquired_593_);
v___x_13864__boxed_604_ = lean_unbox(v___x_599_);
v_res_605_ = l_Std_Http_Server_serve___redArg___lam__8(v_permitAcquired_boxed_603_, v___f_594_, v___x_595_, v_a_596_, v_connectionLimit_597_, v___x_598_, v___x_13864__boxed_604_, v___f_600_, v_opt_601_);
lean_dec(v_opt_601_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__11(lean_object* v___f_606_, lean_object* v___x_607_, lean_object* v_inst_608_, lean_object* v_val_609_, lean_object* v_handler_610_, lean_object* v_config_611_, lean_object* v_extensions_612_, lean_object* v_a_613_, lean_object* v___f_614_, lean_object* v___x_615_, uint8_t v___x_616_, lean_object* v_x_617_){
_start:
{
if (lean_obj_tag(v_x_617_) == 0)
{
lean_object* v___x_619_; 
lean_dec(v___x_615_);
lean_dec_ref(v___f_614_);
lean_dec_ref(v_a_613_);
lean_dec(v_extensions_612_);
lean_dec_ref(v_config_611_);
lean_dec(v_handler_610_);
lean_dec(v_val_609_);
lean_dec_ref(v_inst_608_);
lean_dec_ref(v___x_607_);
lean_dec_ref(v___f_606_);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v_x_617_);
return v___x_619_;
}
else
{
lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_658_; 
v_isSharedCheck_658_ = !lean_is_exclusive(v_x_617_);
if (v_isSharedCheck_658_ == 0)
{
lean_object* v_unused_659_; 
v_unused_659_ = lean_ctor_get(v_x_617_, 0);
lean_dec(v_unused_659_);
v___x_621_ = v_x_617_;
v_isShared_622_ = v_isSharedCheck_658_;
goto v_resetjp_620_;
}
else
{
lean_dec(v_x_617_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_658_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___y_627_; 
v___x_623_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_623_, 0, lean_box(0));
lean_closure_set(v___x_623_, 1, lean_box(0));
lean_closure_set(v___x_623_, 2, lean_box(0));
lean_closure_set(v___x_623_, 3, v___f_606_);
v___x_624_ = lean_alloc_closure((void*)(l_Std_Http_Server_serveConnection___boxed), 10, 9);
lean_closure_set(v___x_624_, 0, lean_box(0));
lean_closure_set(v___x_624_, 1, lean_box(0));
lean_closure_set(v___x_624_, 2, v___x_607_);
lean_closure_set(v___x_624_, 3, v_inst_608_);
lean_closure_set(v___x_624_, 4, v_val_609_);
lean_closure_set(v___x_624_, 5, v_handler_610_);
lean_closure_set(v___x_624_, 6, v_config_611_);
lean_closure_set(v___x_624_, 7, v_extensions_612_);
lean_closure_set(v___x_624_, 8, v_a_613_);
lean_inc(v___x_615_);
v___x_625_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___x_624_, v___f_614_, v___x_615_, v___x_616_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_631_; 
lean_dec_ref(v___x_623_);
lean_dec(v___x_615_);
v_a_631_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_625_, 1);
if (lean_obj_tag(v_a_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
v_a_632_ = lean_ctor_get(v_a_631_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v_a_631_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v_a_631_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v_a_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
v___y_627_ = v___x_637_;
goto v___jp_626_;
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_648_; 
v_a_640_ = lean_ctor_get(v_a_631_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_a_631_);
if (v_isSharedCheck_648_ == 0)
{
v___x_642_ = v_a_631_;
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v_a_631_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v_fst_644_; lean_object* v___x_646_; 
v_fst_644_ = lean_ctor_get(v_a_640_, 0);
lean_inc(v_fst_644_);
lean_dec(v_a_640_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v_fst_644_);
v___x_646_ = v___x_642_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_fst_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
v___y_627_ = v___x_646_;
goto v___jp_626_;
}
}
}
}
else
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_657_; 
lean_del_object(v___x_621_);
v_a_649_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_657_ == 0)
{
v___x_651_ = v___x_625_;
v_isShared_652_ = v_isSharedCheck_657_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_625_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_657_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; lean_object* v___x_655_; 
v___x_653_ = lean_task_map(v___x_623_, v_a_649_, v___x_615_, v___x_616_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_653_);
v___x_655_ = v___x_651_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
v___jp_626_:
{
lean_object* v___x_629_; 
if (v_isShared_622_ == 0)
{
lean_ctor_set_tag(v___x_621_, 0);
lean_ctor_set(v___x_621_, 0, v___y_627_);
v___x_629_ = v___x_621_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___y_627_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__11___boxed(lean_object* v___f_660_, lean_object* v___x_661_, lean_object* v_inst_662_, lean_object* v_val_663_, lean_object* v_handler_664_, lean_object* v_config_665_, lean_object* v_extensions_666_, lean_object* v_a_667_, lean_object* v___f_668_, lean_object* v___x_669_, lean_object* v___x_670_, lean_object* v_x_671_, lean_object* v___y_672_){
_start:
{
uint8_t v___x_13914__boxed_673_; lean_object* v_res_674_; 
v___x_13914__boxed_673_ = lean_unbox(v___x_670_);
v_res_674_ = l_Std_Http_Server_serve___redArg___lam__11(v___f_660_, v___x_661_, v_inst_662_, v_val_663_, v_handler_664_, v_config_665_, v_extensions_666_, v_a_667_, v___f_668_, v___x_669_, v___x_13914__boxed_673_, v_x_671_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__12(lean_object* v___f_675_, lean_object* v___f_676_, lean_object* v_activeConnections_677_, lean_object* v_a_678_, uint8_t v_permitAcquired_679_, lean_object* v___x_680_, lean_object* v_connectionLimit_681_, lean_object* v___x_682_, uint8_t v___x_683_, lean_object* v___f_684_, lean_object* v___x_685_, lean_object* v_inst_686_, lean_object* v_val_687_, lean_object* v_handler_688_, lean_object* v_config_689_, lean_object* v_extensions_690_, lean_object* v___f_691_){
_start:
{
lean_object* v___x_693_; lean_object* v___f_694_; lean_object* v___f_695_; lean_object* v___f_696_; lean_object* v___f_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___f_700_; lean_object* v___x_701_; lean_object* v___f_702_; lean_object* v___x_13083__overap_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_693_ = l_Std_Async_ContextAsync_instMonad;
v___f_694_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__5));
v___f_695_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__6));
lean_inc_ref(v_activeConnections_677_);
v___f_696_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__6___boxed), 9, 6);
lean_closure_set(v___f_696_, 0, v___x_693_);
lean_closure_set(v___f_696_, 1, v___f_675_);
lean_closure_set(v___f_696_, 2, v___f_676_);
lean_closure_set(v___f_696_, 3, v___f_694_);
lean_closure_set(v___f_696_, 4, v___f_695_);
lean_closure_set(v___f_696_, 5, v_activeConnections_677_);
lean_inc_ref_n(v_a_678_, 3);
lean_inc_ref(v___f_696_);
v___f_697_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__10___boxed), 4, 2);
lean_closure_set(v___f_697_, 0, v___f_696_);
lean_closure_set(v___f_697_, 1, v_a_678_);
v___x_698_ = lean_box(v_permitAcquired_679_);
v___x_699_ = lean_box(v___x_683_);
lean_inc_n(v___x_682_, 2);
v___f_700_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__8___boxed), 10, 8);
lean_closure_set(v___f_700_, 0, v___x_698_);
lean_closure_set(v___f_700_, 1, v___f_696_);
lean_closure_set(v___f_700_, 2, v___x_680_);
lean_closure_set(v___f_700_, 3, v_a_678_);
lean_closure_set(v___f_700_, 4, v_connectionLimit_681_);
lean_closure_set(v___f_700_, 5, v___x_682_);
lean_closure_set(v___f_700_, 6, v___x_699_);
lean_closure_set(v___f_700_, 7, v___f_697_);
v___x_701_ = lean_box(v___x_683_);
v___f_702_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__11___boxed), 13, 11);
lean_closure_set(v___f_702_, 0, v___f_684_);
lean_closure_set(v___f_702_, 1, v___x_685_);
lean_closure_set(v___f_702_, 2, v_inst_686_);
lean_closure_set(v___f_702_, 3, v_val_687_);
lean_closure_set(v___f_702_, 4, v_handler_688_);
lean_closure_set(v___f_702_, 5, v_config_689_);
lean_closure_set(v___f_702_, 6, v_extensions_690_);
lean_closure_set(v___f_702_, 7, v_a_678_);
lean_closure_set(v___f_702_, 8, v___f_700_);
lean_closure_set(v___f_702_, 9, v___x_682_);
lean_closure_set(v___f_702_, 10, v___x_701_);
v___x_13083__overap_703_ = l_Std_Mutex_atomically___redArg(v___x_693_, v___f_694_, v___f_695_, v_activeConnections_677_, v___f_691_);
v___x_704_ = lean_apply_2(v___x_13083__overap_703_, v_a_678_, lean_box(0));
v___x_705_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_682_, v___x_683_, v___x_704_, v___f_702_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__12___boxed(lean_object** _args){
lean_object* v___f_706_ = _args[0];
lean_object* v___f_707_ = _args[1];
lean_object* v_activeConnections_708_ = _args[2];
lean_object* v_a_709_ = _args[3];
lean_object* v_permitAcquired_710_ = _args[4];
lean_object* v___x_711_ = _args[5];
lean_object* v_connectionLimit_712_ = _args[6];
lean_object* v___x_713_ = _args[7];
lean_object* v___x_714_ = _args[8];
lean_object* v___f_715_ = _args[9];
lean_object* v___x_716_ = _args[10];
lean_object* v_inst_717_ = _args[11];
lean_object* v_val_718_ = _args[12];
lean_object* v_handler_719_ = _args[13];
lean_object* v_config_720_ = _args[14];
lean_object* v_extensions_721_ = _args[15];
lean_object* v___f_722_ = _args[16];
lean_object* v___y_723_ = _args[17];
_start:
{
uint8_t v_permitAcquired_boxed_724_; uint8_t v___x_14030__boxed_725_; lean_object* v_res_726_; 
v_permitAcquired_boxed_724_ = lean_unbox(v_permitAcquired_710_);
v___x_14030__boxed_725_ = lean_unbox(v___x_714_);
v_res_726_ = l_Std_Http_Server_serve___redArg___lam__12(v___f_706_, v___f_707_, v_activeConnections_708_, v_a_709_, v_permitAcquired_boxed_724_, v___x_711_, v_connectionLimit_712_, v___x_713_, v___x_14030__boxed_725_, v___f_715_, v___x_716_, v_inst_717_, v_val_718_, v_handler_719_, v_config_720_, v_extensions_721_, v___f_722_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__13(lean_object* v_a_727_, lean_object* v___x_728_, lean_object* v_a_x3f_729_){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_731_ = l_Std_CancellationContext_cancel(v_a_727_, v___x_728_);
v___x_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__13___boxed(lean_object* v_a_734_, lean_object* v___x_735_, lean_object* v_a_x3f_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Std_Http_Server_serve___redArg___lam__13(v_a_734_, v___x_735_, v_a_x3f_736_);
lean_dec(v_a_x3f_736_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__14(lean_object* v___f_739_, lean_object* v___f_740_, lean_object* v___f_741_, lean_object* v___x_742_, uint8_t v___x_743_){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___y_748_; 
v___x_745_ = lean_alloc_closure((void*)(l_Except_map), 5, 4);
lean_closure_set(v___x_745_, 0, lean_box(0));
lean_closure_set(v___x_745_, 1, lean_box(0));
lean_closure_set(v___x_745_, 2, lean_box(0));
lean_closure_set(v___x_745_, 3, v___f_739_);
lean_inc(v___x_742_);
v___x_746_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_740_, v___f_741_, v___x_742_, v___x_743_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_750_; 
lean_dec_ref(v___x_745_);
lean_dec(v___x_742_);
v_a_750_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_746_, 1);
if (lean_obj_tag(v_a_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_a_751_ = lean_ctor_get(v_a_750_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v_a_750_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v_a_750_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v_a_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
v___y_748_ = v___x_756_;
goto v___jp_747_;
}
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_767_; 
v_a_759_ = lean_ctor_get(v_a_750_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v_a_750_);
if (v_isSharedCheck_767_ == 0)
{
v___x_761_ = v_a_750_;
v_isShared_762_ = v_isSharedCheck_767_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v_a_750_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_767_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v_fst_763_; lean_object* v___x_765_; 
v_fst_763_ = lean_ctor_get(v_a_759_, 0);
lean_inc(v_fst_763_);
lean_dec(v_a_759_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v_fst_763_);
v___x_765_ = v___x_761_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_fst_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
v___y_748_ = v___x_765_;
goto v___jp_747_;
}
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_776_; 
v_a_768_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_776_ == 0)
{
v___x_770_ = v___x_746_;
v_isShared_771_ = v_isSharedCheck_776_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_746_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_776_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_772_ = lean_task_map(v___x_745_, v_a_768_, v___x_742_, v___x_743_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v___x_772_);
v___x_774_ = v___x_770_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
v___jp_747_:
{
lean_object* v___x_749_; 
v___x_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_749_, 0, v___y_748_);
return v___x_749_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__14___boxed(lean_object* v___f_777_, lean_object* v___f_778_, lean_object* v___f_779_, lean_object* v___x_780_, lean_object* v___x_781_, lean_object* v___y_782_){
_start:
{
uint8_t v___x_14106__boxed_783_; lean_object* v_res_784_; 
v___x_14106__boxed_783_ = lean_unbox(v___x_781_);
v_res_784_ = l_Std_Http_Server_serve___redArg___lam__14(v___f_777_, v___f_778_, v___f_779_, v___x_780_, v___x_14106__boxed_783_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__15(lean_object* v___f_785_, lean_object* v___f_786_, lean_object* v_activeConnections_787_, uint8_t v_permitAcquired_788_, lean_object* v___x_789_, lean_object* v_connectionLimit_790_, lean_object* v___x_791_, uint8_t v___x_792_, lean_object* v___f_793_, lean_object* v___x_794_, lean_object* v_inst_795_, lean_object* v_val_796_, lean_object* v_handler_797_, lean_object* v_config_798_, lean_object* v_extensions_799_, lean_object* v___f_800_, lean_object* v___f_801_, lean_object* v_x_802_){
_start:
{
if (lean_obj_tag(v_x_802_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_812_; 
lean_dec_ref(v___f_801_);
lean_dec_ref(v___f_800_);
lean_dec(v_extensions_799_);
lean_dec_ref(v_config_798_);
lean_dec(v_handler_797_);
lean_dec(v_val_796_);
lean_dec_ref(v_inst_795_);
lean_dec_ref(v___x_794_);
lean_dec_ref(v___f_793_);
lean_dec(v___x_791_);
lean_dec(v_connectionLimit_790_);
lean_dec_ref(v_activeConnections_787_);
lean_dec_ref(v___f_786_);
lean_dec_ref(v___f_785_);
v_a_804_ = lean_ctor_get(v_x_802_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v_x_802_);
if (v_isSharedCheck_812_ == 0)
{
v___x_806_ = v_x_802_;
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v_x_802_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_811_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; 
v___x_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
return v___x_810_;
}
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_830_; 
v_a_813_ = lean_ctor_get(v_x_802_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v_x_802_);
if (v_isSharedCheck_830_ == 0)
{
v___x_815_ = v_x_802_;
v_isShared_816_ = v_isSharedCheck_830_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v_x_802_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_830_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___f_819_; lean_object* v___x_820_; lean_object* v___f_821_; lean_object* v___x_822_; lean_object* v___f_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_817_ = lean_box(v_permitAcquired_788_);
v___x_818_ = lean_box(v___x_792_);
lean_inc_n(v___x_791_, 2);
lean_inc(v_a_813_);
v___f_819_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__12___boxed), 18, 17);
lean_closure_set(v___f_819_, 0, v___f_785_);
lean_closure_set(v___f_819_, 1, v___f_786_);
lean_closure_set(v___f_819_, 2, v_activeConnections_787_);
lean_closure_set(v___f_819_, 3, v_a_813_);
lean_closure_set(v___f_819_, 4, v___x_817_);
lean_closure_set(v___f_819_, 5, v___x_789_);
lean_closure_set(v___f_819_, 6, v_connectionLimit_790_);
lean_closure_set(v___f_819_, 7, v___x_791_);
lean_closure_set(v___f_819_, 8, v___x_818_);
lean_closure_set(v___f_819_, 9, v___f_793_);
lean_closure_set(v___f_819_, 10, v___x_794_);
lean_closure_set(v___f_819_, 11, v_inst_795_);
lean_closure_set(v___f_819_, 12, v_val_796_);
lean_closure_set(v___f_819_, 13, v_handler_797_);
lean_closure_set(v___f_819_, 14, v_config_798_);
lean_closure_set(v___f_819_, 15, v_extensions_799_);
lean_closure_set(v___f_819_, 16, v___f_800_);
v___x_820_ = lean_box(2);
v___f_821_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__13___boxed), 4, 2);
lean_closure_set(v___f_821_, 0, v_a_813_);
lean_closure_set(v___f_821_, 1, v___x_820_);
v___x_822_ = lean_box(v___x_792_);
v___f_823_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__14___boxed), 6, 5);
lean_closure_set(v___f_823_, 0, v___f_801_);
lean_closure_set(v___f_823_, 1, v___f_819_);
lean_closure_set(v___f_823_, 2, v___f_821_);
lean_closure_set(v___f_823_, 3, v___x_791_);
lean_closure_set(v___f_823_, 4, v___x_822_);
v___x_824_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_824_, 0, lean_box(0));
lean_closure_set(v___x_824_, 1, v___f_823_);
v___x_825_ = lean_io_as_task(v___x_824_, v___x_791_);
lean_dec_ref(v___x_825_);
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v___x_789_);
v___x_827_ = v___x_815_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_789_);
v___x_827_ = v_reuseFailAlloc_829_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_828_; 
v___x_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
return v___x_828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__15___boxed(lean_object** _args){
lean_object* v___f_831_ = _args[0];
lean_object* v___f_832_ = _args[1];
lean_object* v_activeConnections_833_ = _args[2];
lean_object* v_permitAcquired_834_ = _args[3];
lean_object* v___x_835_ = _args[4];
lean_object* v_connectionLimit_836_ = _args[5];
lean_object* v___x_837_ = _args[6];
lean_object* v___x_838_ = _args[7];
lean_object* v___f_839_ = _args[8];
lean_object* v___x_840_ = _args[9];
lean_object* v_inst_841_ = _args[10];
lean_object* v_val_842_ = _args[11];
lean_object* v_handler_843_ = _args[12];
lean_object* v_config_844_ = _args[13];
lean_object* v_extensions_845_ = _args[14];
lean_object* v___f_846_ = _args[15];
lean_object* v___f_847_ = _args[16];
lean_object* v_x_848_ = _args[17];
lean_object* v___y_849_ = _args[18];
_start:
{
uint8_t v_permitAcquired_boxed_850_; uint8_t v___x_14186__boxed_851_; lean_object* v_res_852_; 
v_permitAcquired_boxed_850_ = lean_unbox(v_permitAcquired_834_);
v___x_14186__boxed_851_ = lean_unbox(v___x_838_);
v_res_852_ = l_Std_Http_Server_serve___redArg___lam__15(v___f_831_, v___f_832_, v_activeConnections_833_, v_permitAcquired_boxed_850_, v___x_835_, v_connectionLimit_836_, v___x_837_, v___x_14186__boxed_851_, v___f_839_, v___x_840_, v_inst_841_, v_val_842_, v_handler_843_, v_config_844_, v_extensions_845_, v___f_846_, v___f_847_, v_x_848_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__16(lean_object* v___x_853_, uint8_t v___x_854_, lean_object* v___f_855_, lean_object* v_x_856_){
_start:
{
if (lean_obj_tag(v_x_856_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_866_; 
lean_dec_ref(v___f_855_);
lean_dec(v___x_853_);
v_a_858_ = lean_ctor_get(v_x_856_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v_x_856_);
if (v_isSharedCheck_866_ == 0)
{
v___x_860_ = v_x_856_;
v_isShared_861_ = v_isSharedCheck_866_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v_x_856_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_866_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_865_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_864_; 
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
return v___x_864_;
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_877_; 
v_a_867_ = lean_ctor_get(v_x_856_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v_x_856_);
if (v_isSharedCheck_877_ == 0)
{
v___x_869_ = v_x_856_;
v_isShared_870_ = v_isSharedCheck_877_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v_x_856_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_877_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_873_; 
v___x_871_ = l_Std_CancellationContext_fork(v_a_867_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v___x_871_);
v___x_873_ = v___x_869_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_871_);
v___x_873_ = v_reuseFailAlloc_876_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
v___x_875_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_853_, v___x_854_, v___x_874_, v___f_855_);
return v___x_875_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__16___boxed(lean_object* v___x_878_, lean_object* v___x_879_, lean_object* v___f_880_, lean_object* v_x_881_, lean_object* v___y_882_){
_start:
{
uint8_t v___x_14276__boxed_883_; lean_object* v_res_884_; 
v___x_14276__boxed_883_ = lean_unbox(v___x_879_);
v_res_884_ = l_Std_Http_Server_serve___redArg___lam__16(v___x_878_, v___x_14276__boxed_883_, v___f_880_, v_x_881_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__17(lean_object* v___f_885_, lean_object* v___f_886_, lean_object* v_activeConnections_887_, uint8_t v_permitAcquired_888_, lean_object* v___x_889_, lean_object* v_connectionLimit_890_, uint8_t v___x_891_, lean_object* v___f_892_, lean_object* v___x_893_, lean_object* v_inst_894_, lean_object* v_val_895_, lean_object* v_handler_896_, lean_object* v_config_897_, lean_object* v___f_898_, lean_object* v___f_899_, lean_object* v___f_900_, lean_object* v_extensions_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___f_907_; lean_object* v___x_908_; lean_object* v___f_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_904_ = lean_unsigned_to_nat(0u);
v___x_905_ = lean_box(v_permitAcquired_888_);
v___x_906_ = lean_box(v___x_891_);
v___f_907_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__15___boxed), 19, 17);
lean_closure_set(v___f_907_, 0, v___f_885_);
lean_closure_set(v___f_907_, 1, v___f_886_);
lean_closure_set(v___f_907_, 2, v_activeConnections_887_);
lean_closure_set(v___f_907_, 3, v___x_905_);
lean_closure_set(v___f_907_, 4, v___x_889_);
lean_closure_set(v___f_907_, 5, v_connectionLimit_890_);
lean_closure_set(v___f_907_, 6, v___x_904_);
lean_closure_set(v___f_907_, 7, v___x_906_);
lean_closure_set(v___f_907_, 8, v___f_892_);
lean_closure_set(v___f_907_, 9, v___x_893_);
lean_closure_set(v___f_907_, 10, v_inst_894_);
lean_closure_set(v___f_907_, 11, v_val_895_);
lean_closure_set(v___f_907_, 12, v_handler_896_);
lean_closure_set(v___f_907_, 13, v_config_897_);
lean_closure_set(v___f_907_, 14, v_extensions_901_);
lean_closure_set(v___f_907_, 15, v___f_898_);
lean_closure_set(v___f_907_, 16, v___f_899_);
v___x_908_ = lean_box(v___x_891_);
v___f_909_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__16___boxed), 5, 3);
lean_closure_set(v___f_909_, 0, v___x_904_);
lean_closure_set(v___f_909_, 1, v___x_908_);
lean_closure_set(v___f_909_, 2, v___f_907_);
lean_inc_ref(v___y_902_);
v___x_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_910_, 0, v___y_902_);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
v___x_912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_904_, v___x_891_, v___x_911_, v___f_909_);
v___x_913_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_904_, v___x_891_, v___x_912_, v___f_900_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__17___boxed(lean_object** _args){
lean_object* v___f_914_ = _args[0];
lean_object* v___f_915_ = _args[1];
lean_object* v_activeConnections_916_ = _args[2];
lean_object* v_permitAcquired_917_ = _args[3];
lean_object* v___x_918_ = _args[4];
lean_object* v_connectionLimit_919_ = _args[5];
lean_object* v___x_920_ = _args[6];
lean_object* v___f_921_ = _args[7];
lean_object* v___x_922_ = _args[8];
lean_object* v_inst_923_ = _args[9];
lean_object* v_val_924_ = _args[10];
lean_object* v_handler_925_ = _args[11];
lean_object* v_config_926_ = _args[12];
lean_object* v___f_927_ = _args[13];
lean_object* v___f_928_ = _args[14];
lean_object* v___f_929_ = _args[15];
lean_object* v_extensions_930_ = _args[16];
lean_object* v___y_931_ = _args[17];
lean_object* v___y_932_ = _args[18];
_start:
{
uint8_t v_permitAcquired_boxed_933_; uint8_t v___x_14333__boxed_934_; lean_object* v_res_935_; 
v_permitAcquired_boxed_933_ = lean_unbox(v_permitAcquired_917_);
v___x_14333__boxed_934_ = lean_unbox(v___x_920_);
v_res_935_ = l_Std_Http_Server_serve___redArg___lam__17(v___f_914_, v___f_915_, v_activeConnections_916_, v_permitAcquired_boxed_933_, v___x_918_, v_connectionLimit_919_, v___x_14333__boxed_934_, v___f_921_, v___x_922_, v_inst_923_, v_val_924_, v_handler_925_, v_config_926_, v___f_927_, v___f_928_, v___f_929_, v_extensions_930_, v___y_931_);
lean_dec_ref(v___y_931_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__18(lean_object* v___f_936_, lean_object* v___y_937_, lean_object* v_x_938_){
_start:
{
if (lean_obj_tag(v_x_938_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_948_; 
lean_dec_ref(v___f_936_);
v_a_940_ = lean_ctor_get(v_x_938_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v_x_938_);
if (v_isSharedCheck_948_ == 0)
{
v___x_942_ = v_x_938_;
v_isShared_943_ = v_isSharedCheck_948_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v_x_938_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_948_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_947_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; 
v___x_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
return v___x_946_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_950_; 
v_a_949_ = lean_ctor_get(v_x_938_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v_x_938_, 1);
lean_inc_ref(v___y_937_);
v___x_950_ = lean_apply_3(v___f_936_, v_a_949_, v___y_937_, lean_box(0));
return v___x_950_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__18___boxed(lean_object* v___f_951_, lean_object* v___y_952_, lean_object* v_x_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Std_Http_Server_serve___redArg___lam__18(v___f_951_, v___y_952_, v_x_953_);
lean_dec_ref(v___y_952_);
return v_res_955_;
}
}
static lean_object* _init_l_Std_Http_Server_serve___redArg___lam__20___closed__0(void){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = l_Std_Http_Extensions_empty;
v___x_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
return v___x_957_;
}
}
static lean_object* _init_l_Std_Http_Server_serve___redArg___lam__20___closed__1(void){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_obj_once(&l_Std_Http_Server_serve___redArg___lam__20___closed__0, &l_Std_Http_Server_serve___redArg___lam__20___closed__0_once, _init_l_Std_Http_Server_serve___redArg___lam__20___closed__0);
v___x_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__20(uint8_t v___x_961_, lean_object* v___f_962_, lean_object* v___x_963_, lean_object* v___f_964_, lean_object* v_x_965_){
_start:
{
if (lean_obj_tag(v_x_965_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_975_; 
lean_dec_ref(v___f_964_);
lean_dec(v___x_963_);
lean_dec_ref(v___f_962_);
v_a_967_ = lean_ctor_get(v_x_965_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v_x_965_);
if (v_isSharedCheck_975_ == 0)
{
v___x_969_ = v_x_965_;
v_isShared_970_ = v_isSharedCheck_975_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v_x_965_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_975_;
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
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_974_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; 
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
return v___x_973_;
}
}
}
else
{
lean_object* v_a_976_; 
v_a_976_ = lean_ctor_get(v_x_965_, 0);
lean_inc(v_a_976_);
lean_dec_ref_known(v_x_965_, 1);
if (lean_obj_tag(v_a_976_) == 0)
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
lean_dec_ref_known(v_a_976_, 1);
lean_dec_ref(v___f_964_);
lean_dec(v___x_963_);
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = lean_obj_once(&l_Std_Http_Server_serve___redArg___lam__20___closed__1, &l_Std_Http_Server_serve___redArg___lam__20___closed__1_once, _init_l_Std_Http_Server_serve___redArg___lam__20___closed__1);
v___x_979_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_977_, v___x_961_, v___x_978_, v___f_962_);
return v___x_979_;
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_995_; 
lean_dec_ref(v___f_962_);
v_a_980_ = lean_ctor_get(v_a_976_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v_a_976_);
if (v_isSharedCheck_995_ == 0)
{
v___x_982_ = v_a_976_;
v_isShared_983_ = v_isSharedCheck_995_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v_a_976_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_995_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_984_; lean_object* v_dyn_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_991_; 
v___x_984_ = l_Std_Http_Extensions_empty;
v_dyn_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_dyn_985_, 0, v___x_963_);
lean_ctor_set(v_dyn_985_, 1, v_a_980_);
v___x_986_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___lam__20___closed__2));
v___x_987_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_dyn_985_);
v___x_988_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_986_, v___x_987_, v_dyn_985_, v___x_984_);
v___x_989_ = lean_unsigned_to_nat(0u);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v___x_988_);
v___x_991_ = v___x_982_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_988_);
v___x_991_ = v_reuseFailAlloc_994_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
v___x_993_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_989_, v___x_961_, v___x_992_, v___f_964_);
return v___x_993_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__20___boxed(lean_object* v___x_996_, lean_object* v___f_997_, lean_object* v___x_998_, lean_object* v___f_999_, lean_object* v_x_1000_, lean_object* v___y_1001_){
_start:
{
uint8_t v___x_14433__boxed_1002_; lean_object* v_res_1003_; 
v___x_14433__boxed_1002_ = lean_unbox(v___x_996_);
v_res_1003_ = l_Std_Http_Server_serve___redArg___lam__20(v___x_14433__boxed_1002_, v___f_997_, v___x_998_, v___f_999_, v_x_1000_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__19(uint8_t v_permitAcquired_1004_, lean_object* v___f_1005_, lean_object* v___x_1006_, lean_object* v___y_1007_, lean_object* v_connectionLimit_1008_, uint8_t v___x_1009_, lean_object* v___f_1010_, lean_object* v___f_1011_, lean_object* v___f_1012_, lean_object* v_activeConnections_1013_, lean_object* v___f_1014_, lean_object* v___x_1015_, lean_object* v_inst_1016_, lean_object* v_handler_1017_, lean_object* v_config_1018_, lean_object* v___f_1019_, lean_object* v___f_1020_, lean_object* v___f_1021_, lean_object* v___x_1022_, lean_object* v_x_1023_){
_start:
{
if (lean_obj_tag(v_x_1023_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1033_; 
lean_dec(v___x_1022_);
lean_dec_ref(v___f_1021_);
lean_dec_ref(v___f_1020_);
lean_dec_ref(v___f_1019_);
lean_dec_ref(v_config_1018_);
lean_dec(v_handler_1017_);
lean_dec_ref(v_inst_1016_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___f_1014_);
lean_dec_ref(v_activeConnections_1013_);
lean_dec_ref(v___f_1012_);
lean_dec_ref(v___f_1011_);
lean_dec_ref(v___f_1010_);
lean_dec(v_connectionLimit_1008_);
lean_dec_ref(v___f_1005_);
v_a_1025_ = lean_ctor_get(v_x_1023_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_x_1023_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1027_ = v_x_1023_;
v_isShared_1028_ = v_isSharedCheck_1033_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v_x_1023_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1033_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
return v___x_1031_;
}
}
}
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1092_; 
v_a_1034_ = lean_ctor_get(v_x_1023_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v_x_1023_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1036_ = v_x_1023_;
v_isShared_1037_ = v_isSharedCheck_1092_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v_x_1023_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1092_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
if (lean_obj_tag(v_a_1034_) == 0)
{
lean_dec(v___x_1022_);
lean_dec_ref(v___f_1021_);
lean_dec_ref(v___f_1020_);
lean_dec_ref(v___f_1019_);
lean_dec_ref(v_config_1018_);
lean_dec(v_handler_1017_);
lean_dec_ref(v_inst_1016_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v___f_1014_);
lean_dec_ref(v_activeConnections_1013_);
lean_dec_ref(v___f_1012_);
lean_dec_ref(v___f_1011_);
if (v_permitAcquired_1004_ == 0)
{
lean_object* v___x_1038_; 
lean_del_object(v___x_1036_);
lean_dec_ref(v___f_1010_);
lean_dec(v_connectionLimit_1008_);
lean_inc_ref(v___y_1007_);
v___x_1038_ = lean_apply_3(v___f_1005_, v___x_1006_, v___y_1007_, lean_box(0));
return v___x_1038_;
}
else
{
if (lean_obj_tag(v_connectionLimit_1008_) == 1)
{
lean_object* v_val_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1052_; 
lean_dec_ref(v___f_1005_);
v_val_1039_ = lean_ctor_get(v_connectionLimit_1008_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_connectionLimit_1008_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1041_ = v_connectionLimit_1008_;
v_isShared_1042_ = v_isSharedCheck_1052_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_val_1039_);
lean_dec(v_connectionLimit_1008_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1052_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1046_; 
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = l_Std_Semaphore_release(v_val_1039_);
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 0, v___x_1044_);
v___x_1046_ = v___x_1036_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1044_);
v___x_1046_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v___x_1048_; 
if (v_isShared_1042_ == 0)
{
lean_ctor_set_tag(v___x_1041_, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1046_);
v___x_1048_ = v___x_1041_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1046_);
v___x_1048_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1049_; 
v___x_1049_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1043_, v___x_1009_, v___x_1048_, v___f_1010_);
return v___x_1049_;
}
}
}
}
else
{
lean_object* v___x_1053_; 
lean_del_object(v___x_1036_);
lean_dec_ref(v___f_1010_);
lean_dec(v_connectionLimit_1008_);
lean_inc_ref(v___y_1007_);
v___x_1053_ = lean_apply_3(v___f_1005_, v___x_1006_, v___y_1007_, lean_box(0));
return v___x_1053_;
}
}
}
else
{
lean_object* v_val_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1091_; 
lean_dec_ref(v___f_1010_);
lean_dec_ref(v___f_1005_);
v_val_1054_ = lean_ctor_get(v_a_1034_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_a_1034_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1056_ = v_a_1034_;
v_isShared_1057_ = v_isSharedCheck_1091_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_val_1054_);
lean_dec(v_a_1034_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1091_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___f_1060_; lean_object* v___f_1061_; lean_object* v___x_1062_; lean_object* v___f_1063_; lean_object* v___x_1064_; lean_object* v_val_1066_; lean_object* v___x_1074_; 
v___x_1058_ = lean_box(v_permitAcquired_1004_);
v___x_1059_ = lean_box(v___x_1009_);
lean_inc(v_val_1054_);
v___f_1060_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__17___boxed), 19, 16);
lean_closure_set(v___f_1060_, 0, v___f_1011_);
lean_closure_set(v___f_1060_, 1, v___f_1012_);
lean_closure_set(v___f_1060_, 2, v_activeConnections_1013_);
lean_closure_set(v___f_1060_, 3, v___x_1058_);
lean_closure_set(v___f_1060_, 4, v___x_1006_);
lean_closure_set(v___f_1060_, 5, v_connectionLimit_1008_);
lean_closure_set(v___f_1060_, 6, v___x_1059_);
lean_closure_set(v___f_1060_, 7, v___f_1014_);
lean_closure_set(v___f_1060_, 8, v___x_1015_);
lean_closure_set(v___f_1060_, 9, v_inst_1016_);
lean_closure_set(v___f_1060_, 10, v_val_1054_);
lean_closure_set(v___f_1060_, 11, v_handler_1017_);
lean_closure_set(v___f_1060_, 12, v_config_1018_);
lean_closure_set(v___f_1060_, 13, v___f_1019_);
lean_closure_set(v___f_1060_, 14, v___f_1020_);
lean_closure_set(v___f_1060_, 15, v___f_1021_);
lean_inc_ref(v___y_1007_);
v___f_1061_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__18___boxed), 4, 2);
lean_closure_set(v___f_1061_, 0, v___f_1060_);
lean_closure_set(v___f_1061_, 1, v___y_1007_);
v___x_1062_ = lean_box(v___x_1009_);
lean_inc_ref(v___f_1061_);
v___f_1063_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__20___boxed), 6, 4);
lean_closure_set(v___f_1063_, 0, v___x_1062_);
lean_closure_set(v___f_1063_, 1, v___f_1061_);
lean_closure_set(v___f_1063_, 2, v___x_1022_);
lean_closure_set(v___f_1063_, 3, v___f_1061_);
v___x_1064_ = lean_unsigned_to_nat(0u);
v___x_1074_ = lean_uv_tcp_getpeername(v_val_1054_);
lean_dec(v_val_1054_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
lean_ctor_set_tag(v___x_1077_, 1);
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
v_val_1066_ = v___x_1080_;
goto v___jp_1065_;
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
v_a_1083_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1074_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1074_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
lean_ctor_set_tag(v___x_1085_, 0);
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
v_val_1066_ = v___x_1088_;
goto v___jp_1065_;
}
}
}
v___jp_1065_:
{
lean_object* v___x_1068_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 0, v_val_1066_);
v___x_1068_ = v___x_1036_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_val_1066_);
v___x_1068_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
lean_object* v___x_1070_; 
if (v_isShared_1057_ == 0)
{
lean_ctor_set_tag(v___x_1056_, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1068_);
v___x_1070_ = v___x_1056_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; 
v___x_1071_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1064_, v___x_1009_, v___x_1070_, v___f_1063_);
return v___x_1071_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_permitAcquired_1093_ = _args[0];
lean_object* v___f_1094_ = _args[1];
lean_object* v___x_1095_ = _args[2];
lean_object* v___y_1096_ = _args[3];
lean_object* v_connectionLimit_1097_ = _args[4];
lean_object* v___x_1098_ = _args[5];
lean_object* v___f_1099_ = _args[6];
lean_object* v___f_1100_ = _args[7];
lean_object* v___f_1101_ = _args[8];
lean_object* v_activeConnections_1102_ = _args[9];
lean_object* v___f_1103_ = _args[10];
lean_object* v___x_1104_ = _args[11];
lean_object* v_inst_1105_ = _args[12];
lean_object* v_handler_1106_ = _args[13];
lean_object* v_config_1107_ = _args[14];
lean_object* v___f_1108_ = _args[15];
lean_object* v___f_1109_ = _args[16];
lean_object* v___f_1110_ = _args[17];
lean_object* v___x_1111_ = _args[18];
lean_object* v_x_1112_ = _args[19];
lean_object* v___y_1113_ = _args[20];
_start:
{
uint8_t v_permitAcquired_boxed_1114_; uint8_t v___x_14516__boxed_1115_; lean_object* v_res_1116_; 
v_permitAcquired_boxed_1114_ = lean_unbox(v_permitAcquired_1093_);
v___x_14516__boxed_1115_ = lean_unbox(v___x_1098_);
v_res_1116_ = l_Std_Http_Server_serve___redArg___lam__19(v_permitAcquired_boxed_1114_, v___f_1094_, v___x_1095_, v___y_1096_, v_connectionLimit_1097_, v___x_14516__boxed_1115_, v___f_1099_, v___f_1100_, v___f_1101_, v_activeConnections_1102_, v___f_1103_, v___x_1104_, v_inst_1105_, v_handler_1106_, v_config_1107_, v___f_1108_, v___f_1109_, v___f_1110_, v___x_1111_, v_x_1112_);
lean_dec_ref(v___y_1096_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__21(lean_object* v_a_1117_, lean_object* v___f_1118_, lean_object* v___f_1119_, uint8_t v___x_1120_, lean_object* v___f_1121_, lean_object* v_x_1122_){
_start:
{
if (lean_obj_tag(v_x_1122_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1132_; 
lean_dec_ref(v___f_1121_);
lean_dec_ref(v___f_1119_);
lean_dec_ref(v___f_1118_);
lean_dec(v_a_1117_);
v_a_1124_ = lean_ctor_get(v_x_1122_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_x_1122_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1126_ = v_x_1122_;
v_isShared_1127_ = v_isSharedCheck_1132_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v_x_1122_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1132_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
return v___x_1130_;
}
}
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v_a_1133_ = lean_ctor_get(v_x_1122_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v_x_1122_, 1);
v___x_1134_ = l_Std_Async_TCP_Socket_Server_acceptSelector(v_a_1117_);
v___x_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v___f_1118_);
v___x_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1136_, 0, v_a_1133_);
lean_ctor_set(v___x_1136_, 1, v___f_1119_);
v___x_1137_ = lean_unsigned_to_nat(2u);
v___x_1138_ = lean_mk_empty_array_with_capacity(v___x_1137_);
v___x_1139_ = lean_array_push(v___x_1138_, v___x_1135_);
v___x_1140_ = lean_array_push(v___x_1139_, v___x_1136_);
v___x_1141_ = lean_unsigned_to_nat(0u);
v___x_1142_ = l_Std_Async_Selectable_one___redArg(v___x_1140_);
v___x_1143_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1141_, v___x_1120_, v___x_1142_, v___f_1121_);
return v___x_1143_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__21___boxed(lean_object* v_a_1144_, lean_object* v___f_1145_, lean_object* v___f_1146_, lean_object* v___x_1147_, lean_object* v___f_1148_, lean_object* v_x_1149_, lean_object* v___y_1150_){
_start:
{
uint8_t v___x_14700__boxed_1151_; lean_object* v_res_1152_; 
v___x_14700__boxed_1151_ = lean_unbox(v___x_1147_);
v_res_1152_ = l_Std_Http_Server_serve___redArg___lam__21(v_a_1144_, v___f_1145_, v___f_1146_, v___x_14700__boxed_1151_, v___f_1148_, v_x_1149_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__22(lean_object* v___f_1153_, lean_object* v___x_1154_, lean_object* v_connectionLimit_1155_, uint8_t v___x_1156_, lean_object* v___f_1157_, lean_object* v___f_1158_, lean_object* v_activeConnections_1159_, lean_object* v___f_1160_, lean_object* v___x_1161_, lean_object* v_inst_1162_, lean_object* v_handler_1163_, lean_object* v_config_1164_, lean_object* v___f_1165_, lean_object* v___f_1166_, lean_object* v___f_1167_, lean_object* v___x_1168_, lean_object* v_a_1169_, lean_object* v___f_1170_, lean_object* v___f_1171_, lean_object* v___f_1172_, uint8_t v_permitAcquired_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___f_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___f_1179_; lean_object* v___x_1180_; lean_object* v___f_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
lean_inc_ref_n(v___y_1174_, 3);
lean_inc_ref(v___f_1153_);
v___f_1176_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_1176_, 0, v___f_1153_);
lean_closure_set(v___f_1176_, 1, v___y_1174_);
v___x_1177_ = lean_box(v_permitAcquired_1173_);
v___x_1178_ = lean_box(v___x_1156_);
v___f_1179_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__19___boxed), 21, 19);
lean_closure_set(v___f_1179_, 0, v___x_1177_);
lean_closure_set(v___f_1179_, 1, v___f_1153_);
lean_closure_set(v___f_1179_, 2, v___x_1154_);
lean_closure_set(v___f_1179_, 3, v___y_1174_);
lean_closure_set(v___f_1179_, 4, v_connectionLimit_1155_);
lean_closure_set(v___f_1179_, 5, v___x_1178_);
lean_closure_set(v___f_1179_, 6, v___f_1176_);
lean_closure_set(v___f_1179_, 7, v___f_1157_);
lean_closure_set(v___f_1179_, 8, v___f_1158_);
lean_closure_set(v___f_1179_, 9, v_activeConnections_1159_);
lean_closure_set(v___f_1179_, 10, v___f_1160_);
lean_closure_set(v___f_1179_, 11, v___x_1161_);
lean_closure_set(v___f_1179_, 12, v_inst_1162_);
lean_closure_set(v___f_1179_, 13, v_handler_1163_);
lean_closure_set(v___f_1179_, 14, v_config_1164_);
lean_closure_set(v___f_1179_, 15, v___f_1165_);
lean_closure_set(v___f_1179_, 16, v___f_1166_);
lean_closure_set(v___f_1179_, 17, v___f_1167_);
lean_closure_set(v___f_1179_, 18, v___x_1168_);
v___x_1180_ = lean_box(v___x_1156_);
v___f_1181_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__21___boxed), 7, 5);
lean_closure_set(v___f_1181_, 0, v_a_1169_);
lean_closure_set(v___f_1181_, 1, v___f_1170_);
lean_closure_set(v___f_1181_, 2, v___f_1171_);
lean_closure_set(v___f_1181_, 3, v___x_1180_);
lean_closure_set(v___f_1181_, 4, v___f_1179_);
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1183_, 0, v___y_1174_);
v___x_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
v___x_1185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1182_, v___x_1156_, v___x_1184_, v___f_1172_);
v___x_1186_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1182_, v___x_1156_, v___x_1185_, v___f_1181_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__22___boxed(lean_object** _args){
lean_object* v___f_1187_ = _args[0];
lean_object* v___x_1188_ = _args[1];
lean_object* v_connectionLimit_1189_ = _args[2];
lean_object* v___x_1190_ = _args[3];
lean_object* v___f_1191_ = _args[4];
lean_object* v___f_1192_ = _args[5];
lean_object* v_activeConnections_1193_ = _args[6];
lean_object* v___f_1194_ = _args[7];
lean_object* v___x_1195_ = _args[8];
lean_object* v_inst_1196_ = _args[9];
lean_object* v_handler_1197_ = _args[10];
lean_object* v_config_1198_ = _args[11];
lean_object* v___f_1199_ = _args[12];
lean_object* v___f_1200_ = _args[13];
lean_object* v___f_1201_ = _args[14];
lean_object* v___x_1202_ = _args[15];
lean_object* v_a_1203_ = _args[16];
lean_object* v___f_1204_ = _args[17];
lean_object* v___f_1205_ = _args[18];
lean_object* v___f_1206_ = _args[19];
lean_object* v_permitAcquired_1207_ = _args[20];
lean_object* v___y_1208_ = _args[21];
lean_object* v___y_1209_ = _args[22];
_start:
{
uint8_t v___x_14760__boxed_1210_; uint8_t v_permitAcquired_boxed_1211_; lean_object* v_res_1212_; 
v___x_14760__boxed_1210_ = lean_unbox(v___x_1190_);
v_permitAcquired_boxed_1211_ = lean_unbox(v_permitAcquired_1207_);
v_res_1212_ = l_Std_Http_Server_serve___redArg___lam__22(v___f_1187_, v___x_1188_, v_connectionLimit_1189_, v___x_14760__boxed_1210_, v___f_1191_, v___f_1192_, v_activeConnections_1193_, v___f_1194_, v___x_1195_, v_inst_1196_, v_handler_1197_, v_config_1198_, v___f_1199_, v___f_1200_, v___f_1201_, v___x_1202_, v_a_1203_, v___f_1204_, v___f_1205_, v___f_1206_, v_permitAcquired_boxed_1211_, v___y_1208_);
lean_dec_ref(v___y_1208_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__23(lean_object* v___f_1213_, lean_object* v___y_1214_, lean_object* v_x_1215_){
_start:
{
if (lean_obj_tag(v_x_1215_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
lean_dec_ref(v___y_1214_);
lean_dec_ref(v___f_1213_);
v_a_1217_ = lean_ctor_get(v_x_1215_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_x_1215_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1219_ = v_x_1215_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v_x_1215_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1223_; 
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
return v___x_1223_;
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1227_; 
v_a_1226_ = lean_ctor_get(v_x_1215_, 0);
lean_inc(v_a_1226_);
lean_dec_ref_known(v_x_1215_, 1);
v___x_1227_ = lean_apply_3(v___f_1213_, v_a_1226_, v___y_1214_, lean_box(0));
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__23___boxed(lean_object* v___f_1228_, lean_object* v___y_1229_, lean_object* v_x_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Std_Http_Server_serve___redArg___lam__23(v___f_1228_, v___y_1229_, v_x_1230_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__24(uint8_t v___x_1238_, lean_object* v___f_1239_, lean_object* v_x_1240_){
_start:
{
if (lean_obj_tag(v_x_1240_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1250_; 
lean_dec_ref(v___f_1239_);
v_a_1242_ = lean_ctor_get(v_x_1240_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_x_1240_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1244_ = v_x_1240_;
v_isShared_1245_ = v_isSharedCheck_1250_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v_x_1240_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1250_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
return v___x_1248_;
}
}
}
else
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
lean_dec_ref_known(v_x_1240_, 1);
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1252_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___lam__24___closed__1));
v___x_1253_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1251_, v___x_1238_, v___x_1252_, v___f_1239_);
return v___x_1253_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__24___boxed(lean_object* v___x_1254_, lean_object* v___f_1255_, lean_object* v_x_1256_, lean_object* v___y_1257_){
_start:
{
uint8_t v___x_14876__boxed_1258_; lean_object* v_res_1259_; 
v___x_14876__boxed_1258_ = lean_unbox(v___x_1254_);
v_res_1259_ = l_Std_Http_Server_serve___redArg___lam__24(v___x_14876__boxed_1258_, v___f_1255_, v_x_1256_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__25(lean_object* v___f_1260_, uint8_t v___x_1261_, lean_object* v___f_1262_, lean_object* v_x_1263_){
_start:
{
if (lean_obj_tag(v_x_1263_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1273_; 
lean_dec_ref(v___f_1262_);
lean_dec_ref(v___f_1260_);
v_a_1265_ = lean_ctor_get(v_x_1263_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v_x_1263_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1267_ = v_x_1263_;
v_isShared_1268_ = v_isSharedCheck_1273_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v_x_1263_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1273_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
lean_object* v___x_1271_; 
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
}
}
else
{
lean_object* v_a_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v_a_1274_ = lean_ctor_get(v_x_1263_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v_x_1263_, 1);
v___x_1275_ = lean_unsigned_to_nat(0u);
v___x_1276_ = l_IO_Promise_result_x21___redArg(v_a_1274_);
lean_dec(v_a_1274_);
v___x_1277_ = lean_task_map(v___f_1260_, v___x_1276_, v___x_1275_, v___x_1261_);
v___x_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
v___x_1279_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1275_, v___x_1261_, v___x_1278_, v___f_1262_);
return v___x_1279_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__25___boxed(lean_object* v___f_1280_, lean_object* v___x_1281_, lean_object* v___f_1282_, lean_object* v_x_1283_, lean_object* v___y_1284_){
_start:
{
uint8_t v___x_14920__boxed_1285_; lean_object* v_res_1286_; 
v___x_14920__boxed_1285_ = lean_unbox(v___x_1281_);
v_res_1286_ = l_Std_Http_Server_serve___redArg___lam__25(v___f_1280_, v___x_14920__boxed_1285_, v___f_1282_, v_x_1283_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__27(lean_object* v_connectionLimit_1287_, uint8_t v___x_1288_, lean_object* v___f_1289_, lean_object* v___f_1290_, lean_object* v_u_1291_, lean_object* v_b_1292_){
_start:
{
if (lean_obj_tag(v_connectionLimit_1287_) == 1)
{
lean_object* v_val_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1305_; 
lean_dec_ref(v___f_1290_);
v_val_1294_ = lean_ctor_get(v_connectionLimit_1287_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_connectionLimit_1287_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1296_ = v_connectionLimit_1287_;
v_isShared_1297_ = v_isSharedCheck_1305_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_val_1294_);
lean_dec(v_connectionLimit_1287_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1305_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1301_; 
v___x_1298_ = lean_unsigned_to_nat(0u);
v___x_1299_ = l_Std_Semaphore_acquire(v_val_1294_);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 0, v___x_1299_);
v___x_1301_ = v___x_1296_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1299_);
v___x_1301_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
v___x_1303_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1298_, v___x_1288_, v___x_1302_, v___f_1289_);
return v___x_1303_;
}
}
}
else
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec_ref(v___f_1289_);
lean_dec(v_connectionLimit_1287_);
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = lean_box(v___x_1288_);
v___x_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
v___x_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
v___x_1310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1306_, v___x_1288_, v___x_1309_, v___f_1290_);
return v___x_1310_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__27___boxed(lean_object* v_connectionLimit_1311_, lean_object* v___x_1312_, lean_object* v___f_1313_, lean_object* v___f_1314_, lean_object* v_u_1315_, lean_object* v_b_1316_, lean_object* v___y_1317_){
_start:
{
uint8_t v___x_14964__boxed_1318_; lean_object* v_res_1319_; 
v___x_14964__boxed_1318_ = lean_unbox(v___x_1312_);
v_res_1319_ = l_Std_Http_Server_serve___redArg___lam__27(v_connectionLimit_1311_, v___x_14964__boxed_1318_, v___f_1313_, v___f_1314_, v_u_1315_, v_b_1316_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__26(lean_object* v_a_1320_, lean_object* v_x_1321_){
_start:
{
if (lean_obj_tag(v_x_1321_) == 0)
{
lean_object* v___x_1323_; 
v___x_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1323_, 0, v_x_1321_);
return v___x_1323_;
}
else
{
lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1331_; 
v_isSharedCheck_1331_ = !lean_is_exclusive(v_x_1321_);
if (v_isSharedCheck_1331_ == 0)
{
lean_object* v_unused_1332_; 
v_unused_1332_ = lean_ctor_get(v_x_1321_, 0);
lean_dec(v_unused_1332_);
v___x_1325_ = v_x_1321_;
v_isShared_1326_ = v_isSharedCheck_1331_;
goto v_resetjp_1324_;
}
else
{
lean_dec(v_x_1321_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1331_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = l_IO_Promise_result_x21___redArg(v_a_1320_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 0, v___x_1327_);
v___x_1329_ = v___x_1325_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__26___boxed(lean_object* v_a_1333_, lean_object* v_x_1334_, lean_object* v___y_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Std_Http_Server_serve___redArg___lam__26(v_a_1333_, v_x_1334_);
lean_dec(v_a_1333_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__28(lean_object* v___f_1337_, lean_object* v___x_1338_, lean_object* v___x_1339_, uint8_t v___x_1340_, lean_object* v_x_1341_){
_start:
{
if (lean_obj_tag(v_x_1341_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1351_; 
lean_dec(v___x_1338_);
lean_dec_ref(v___f_1337_);
v_a_1343_ = lean_ctor_get(v_x_1341_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v_x_1341_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1345_ = v_x_1341_;
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v_x_1341_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1351_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1363_; 
v_a_1352_ = lean_ctor_get(v_x_1341_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_x_1341_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1354_ = v_x_1341_;
v_isShared_1355_ = v_isSharedCheck_1363_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v_x_1341_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1363_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___f_1356_; lean_object* v___x_1357_; lean_object* v___x_1359_; 
lean_inc(v_a_1352_);
v___f_1356_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__26___boxed), 3, 1);
lean_closure_set(v___f_1356_, 0, v_a_1352_);
lean_inc(v___x_1338_);
v___x_1357_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_1337_, v___x_1338_, v_a_1352_, v___x_1339_);
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1357_);
v___x_1359_ = v___x_1354_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
v___x_1361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1338_, v___x_1340_, v___x_1360_, v___f_1356_);
return v___x_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__28___boxed(lean_object* v___f_1364_, lean_object* v___x_1365_, lean_object* v___x_1366_, lean_object* v___x_1367_, lean_object* v_x_1368_, lean_object* v___y_1369_){
_start:
{
uint8_t v___x_15044__boxed_1370_; lean_object* v_res_1371_; 
v___x_15044__boxed_1370_ = lean_unbox(v___x_1367_);
v_res_1371_ = l_Std_Http_Server_serve___redArg___lam__28(v___f_1364_, v___x_1365_, v___x_1366_, v___x_15044__boxed_1370_, v_x_1368_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__29(lean_object* v___f_1372_, uint8_t v___x_1373_, lean_object* v___f_1374_, lean_object* v_connectionLimit_1375_, lean_object* v___x_1376_, lean_object* v___f_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v___f_1380_; lean_object* v___x_1381_; lean_object* v___f_1382_; lean_object* v___x_1383_; lean_object* v___f_1384_; lean_object* v___x_1385_; lean_object* v___f_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___f_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___f_1380_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__23___boxed), 4, 2);
lean_closure_set(v___f_1380_, 0, v___f_1372_);
lean_closure_set(v___f_1380_, 1, v___y_1378_);
v___x_1381_ = lean_box(v___x_1373_);
lean_inc_ref(v___f_1380_);
v___f_1382_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__24___boxed), 4, 2);
lean_closure_set(v___f_1382_, 0, v___x_1381_);
lean_closure_set(v___f_1382_, 1, v___f_1380_);
v___x_1383_ = lean_box(v___x_1373_);
v___f_1384_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__25___boxed), 5, 3);
lean_closure_set(v___f_1384_, 0, v___f_1374_);
lean_closure_set(v___f_1384_, 1, v___x_1383_);
lean_closure_set(v___f_1384_, 2, v___f_1382_);
v___x_1385_ = lean_box(v___x_1373_);
v___f_1386_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__27___boxed), 7, 4);
lean_closure_set(v___f_1386_, 0, v_connectionLimit_1375_);
lean_closure_set(v___f_1386_, 1, v___x_1385_);
lean_closure_set(v___f_1386_, 2, v___f_1384_);
lean_closure_set(v___f_1386_, 3, v___f_1380_);
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_box(v___x_1373_);
v___f_1389_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__28___boxed), 6, 4);
lean_closure_set(v___f_1389_, 0, v___f_1386_);
lean_closure_set(v___f_1389_, 1, v___x_1387_);
lean_closure_set(v___f_1389_, 2, v___x_1376_);
lean_closure_set(v___f_1389_, 3, v___x_1388_);
v___x_1390_ = lean_io_promise_new();
v___x_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
v___x_1393_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1387_, v___x_1373_, v___x_1392_, v___f_1389_);
v___x_1394_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1387_, v___x_1373_, v___x_1393_, v___f_1377_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__29___boxed(lean_object* v___f_1395_, lean_object* v___x_1396_, lean_object* v___f_1397_, lean_object* v_connectionLimit_1398_, lean_object* v___x_1399_, lean_object* v___f_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
uint8_t v___x_15102__boxed_1403_; lean_object* v_res_1404_; 
v___x_15102__boxed_1403_ = lean_unbox(v___x_1396_);
v_res_1404_ = l_Std_Http_Server_serve___redArg___lam__29(v___f_1395_, v___x_15102__boxed_1403_, v___f_1397_, v_connectionLimit_1398_, v___x_1399_, v___f_1400_, v___y_1401_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__30(lean_object* v___f_1409_, lean_object* v___f_1410_, lean_object* v___x_1411_, lean_object* v_inst_1412_, lean_object* v_handler_1413_, lean_object* v_config_1414_, lean_object* v___f_1415_, lean_object* v___f_1416_, lean_object* v___x_1417_, lean_object* v_a_1418_, lean_object* v___f_1419_, lean_object* v___f_1420_, lean_object* v___f_1421_, lean_object* v___f_1422_, lean_object* v___f_1423_, lean_object* v_x_1424_){
_start:
{
if (lean_obj_tag(v_x_1424_) == 0)
{
lean_object* v___x_1426_; 
lean_dec_ref(v___f_1423_);
lean_dec_ref(v___f_1422_);
lean_dec_ref(v___f_1421_);
lean_dec_ref(v___f_1420_);
lean_dec_ref(v___f_1419_);
lean_dec(v_a_1418_);
lean_dec(v___x_1417_);
lean_dec_ref(v___f_1416_);
lean_dec_ref(v___f_1415_);
lean_dec_ref(v_config_1414_);
lean_dec(v_handler_1413_);
lean_dec_ref(v_inst_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v___f_1410_);
lean_dec_ref(v___f_1409_);
v___x_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1426_, 0, v_x_1424_);
return v___x_1426_;
}
else
{
lean_object* v_a_1427_; lean_object* v_context_1428_; lean_object* v_activeConnections_1429_; lean_object* v_connectionLimit_1430_; lean_object* v_shutdownPromise_1431_; lean_object* v___f_1432_; lean_object* v___f_1433_; lean_object* v___f_1434_; uint8_t v___x_1435_; lean_object* v___x_1436_; lean_object* v___f_1437_; lean_object* v___f_1438_; lean_object* v___x_1439_; lean_object* v___f_1440_; lean_object* v___x_1441_; lean_object* v___f_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v_a_1427_ = lean_ctor_get(v_x_1424_, 0);
lean_inc(v_a_1427_);
v_context_1428_ = lean_ctor_get(v_a_1427_, 0);
lean_inc_ref_n(v_context_1428_, 2);
v_activeConnections_1429_ = lean_ctor_get(v_a_1427_, 1);
v_connectionLimit_1430_ = lean_ctor_get(v_a_1427_, 2);
v_shutdownPromise_1431_ = lean_ctor_get(v_a_1427_, 3);
v___f_1432_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1432_, 0, v_x_1424_);
lean_inc_ref(v_shutdownPromise_1431_);
v___f_1433_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1433_, 0, v_context_1428_);
lean_closure_set(v___f_1433_, 1, v_shutdownPromise_1431_);
v___f_1434_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__4___boxed), 5, 1);
lean_closure_set(v___f_1434_, 0, v___f_1433_);
v___x_1435_ = 0;
v___x_1436_ = lean_box(0);
v___f_1437_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___lam__30___closed__0));
v___f_1438_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___lam__30___closed__1));
v___x_1439_ = lean_box(v___x_1435_);
lean_inc_ref(v_activeConnections_1429_);
lean_inc_n(v_connectionLimit_1430_, 2);
v___f_1440_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__22___boxed), 23, 20);
lean_closure_set(v___f_1440_, 0, v___f_1437_);
lean_closure_set(v___f_1440_, 1, v___x_1436_);
lean_closure_set(v___f_1440_, 2, v_connectionLimit_1430_);
lean_closure_set(v___f_1440_, 3, v___x_1439_);
lean_closure_set(v___f_1440_, 4, v___f_1409_);
lean_closure_set(v___f_1440_, 5, v___f_1434_);
lean_closure_set(v___f_1440_, 6, v_activeConnections_1429_);
lean_closure_set(v___f_1440_, 7, v___f_1410_);
lean_closure_set(v___f_1440_, 8, v___x_1411_);
lean_closure_set(v___f_1440_, 9, v_inst_1412_);
lean_closure_set(v___f_1440_, 10, v_handler_1413_);
lean_closure_set(v___f_1440_, 11, v_config_1414_);
lean_closure_set(v___f_1440_, 12, v___f_1415_);
lean_closure_set(v___f_1440_, 13, v___f_1416_);
lean_closure_set(v___f_1440_, 14, v___f_1438_);
lean_closure_set(v___f_1440_, 15, v___x_1417_);
lean_closure_set(v___f_1440_, 16, v_a_1418_);
lean_closure_set(v___f_1440_, 17, v___f_1419_);
lean_closure_set(v___f_1440_, 18, v___f_1420_);
lean_closure_set(v___f_1440_, 19, v___f_1421_);
v___x_1441_ = lean_box(v___x_1435_);
v___f_1442_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__29___boxed), 8, 6);
lean_closure_set(v___f_1442_, 0, v___f_1440_);
lean_closure_set(v___f_1442_, 1, v___x_1441_);
lean_closure_set(v___f_1442_, 2, v___f_1422_);
lean_closure_set(v___f_1442_, 3, v_connectionLimit_1430_);
lean_closure_set(v___f_1442_, 4, v___x_1436_);
lean_closure_set(v___f_1442_, 5, v___f_1423_);
v___x_1443_ = lean_box(v___x_1435_);
v___x_1444_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___boxed), 6, 5);
lean_closure_set(v___x_1444_, 0, lean_box(0));
lean_closure_set(v___x_1444_, 1, v_a_1427_);
lean_closure_set(v___x_1444_, 2, v___x_1443_);
lean_closure_set(v___x_1444_, 3, v___f_1442_);
lean_closure_set(v___x_1444_, 4, v_context_1428_);
v___x_1445_ = lean_unsigned_to_nat(0u);
v___x_1446_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_1446_, 0, lean_box(0));
lean_closure_set(v___x_1446_, 1, v___x_1444_);
v___x_1447_ = lean_io_as_task(v___x_1446_, v___x_1445_);
lean_dec_ref(v___x_1447_);
v___x_1448_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___lam__0___closed__1));
v___x_1449_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1445_, v___x_1435_, v___x_1448_, v___f_1432_);
return v___x_1449_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__30___boxed(lean_object** _args){
lean_object* v___f_1450_ = _args[0];
lean_object* v___f_1451_ = _args[1];
lean_object* v___x_1452_ = _args[2];
lean_object* v_inst_1453_ = _args[3];
lean_object* v_handler_1454_ = _args[4];
lean_object* v_config_1455_ = _args[5];
lean_object* v___f_1456_ = _args[6];
lean_object* v___f_1457_ = _args[7];
lean_object* v___x_1458_ = _args[8];
lean_object* v_a_1459_ = _args[9];
lean_object* v___f_1460_ = _args[10];
lean_object* v___f_1461_ = _args[11];
lean_object* v___f_1462_ = _args[12];
lean_object* v___f_1463_ = _args[13];
lean_object* v___f_1464_ = _args[14];
lean_object* v_x_1465_ = _args[15];
lean_object* v___y_1466_ = _args[16];
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_Std_Http_Server_serve___redArg___lam__30(v___f_1450_, v___f_1451_, v___x_1452_, v_inst_1453_, v_handler_1454_, v_config_1455_, v___f_1456_, v___f_1457_, v___x_1458_, v_a_1459_, v___f_1460_, v___f_1461_, v___f_1462_, v___f_1463_, v___f_1464_, v_x_1465_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__31(lean_object* v___f_1468_, lean_object* v_config_1469_, lean_object* v_x_1470_){
_start:
{
if (lean_obj_tag(v_x_1470_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1480_; 
lean_dec_ref(v_config_1469_);
lean_dec_ref(v___f_1468_);
v_a_1472_ = lean_ctor_get(v_x_1470_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_x_1470_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1474_ = v_x_1470_;
v_isShared_1475_ = v_isSharedCheck_1480_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v_x_1470_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1480_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1497_; 
v_a_1481_ = lean_ctor_get(v_x_1470_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_x_1470_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1483_ = v_x_1470_;
v_isShared_1484_ = v_isSharedCheck_1497_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v_x_1470_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1497_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; lean_object* v_val_1489_; lean_object* v___x_1492_; lean_object* v_a_1493_; lean_object* v___x_1495_; 
v___x_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_a_1481_);
v___x_1486_ = lean_unsigned_to_nat(0u);
v___x_1487_ = 0;
v___x_1492_ = l_Std_Http_Server_new(v_config_1469_, v___x_1485_);
v_a_1493_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_a_1493_);
lean_dec_ref(v___x_1492_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v_a_1493_);
v___x_1495_ = v___x_1483_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v___jp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1490_, 0, v_val_1489_);
v___x_1491_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1486_, v___x_1487_, v___x_1490_, v___f_1468_);
return v___x_1491_;
}
v_reusejp_1494_:
{
v_val_1489_ = v___x_1495_;
goto v___jp_1488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__31___boxed(lean_object* v___f_1498_, lean_object* v_config_1499_, lean_object* v_x_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Std_Http_Server_serve___redArg___lam__31(v___f_1498_, v_config_1499_, v_x_1500_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__32(lean_object* v___f_1503_, lean_object* v_a_1504_, lean_object* v_x_1505_){
_start:
{
if (lean_obj_tag(v_x_1505_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1515_; 
lean_dec_ref(v___f_1503_);
v_a_1507_ = lean_ctor_get(v_x_1505_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v_x_1505_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1509_ = v_x_1505_;
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v_x_1505_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
return v___x_1513_;
}
}
}
else
{
lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1534_; 
v_isSharedCheck_1534_ = !lean_is_exclusive(v_x_1505_);
if (v_isSharedCheck_1534_ == 0)
{
lean_object* v_unused_1535_; 
v_unused_1535_ = lean_ctor_get(v_x_1505_, 0);
lean_dec(v_unused_1535_);
v___x_1517_ = v_x_1505_;
v_isShared_1518_ = v_isSharedCheck_1534_;
goto v_resetjp_1516_;
}
else
{
lean_dec(v_x_1505_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1534_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1519_; uint8_t v___x_1520_; lean_object* v_val_1522_; lean_object* v___x_1525_; 
v___x_1519_ = lean_unsigned_to_nat(0u);
v___x_1520_ = 0;
v___x_1525_ = lean_uv_tcp_getsockname(v_a_1504_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref_known(v___x_1525_, 1);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v_a_1526_);
v___x_1528_ = v___x_1517_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1526_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
v_val_1522_ = v___x_1528_;
goto v___jp_1521_;
}
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; 
v_a_1530_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1525_, 1);
if (v_isShared_1518_ == 0)
{
lean_ctor_set_tag(v___x_1517_, 0);
lean_ctor_set(v___x_1517_, 0, v_a_1530_);
v___x_1532_ = v___x_1517_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_a_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
v_val_1522_ = v___x_1532_;
goto v___jp_1521_;
}
}
v___jp_1521_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1523_, 0, v_val_1522_);
v___x_1524_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1519_, v___x_1520_, v___x_1523_, v___f_1503_);
return v___x_1524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__32___boxed(lean_object* v___f_1536_, lean_object* v_a_1537_, lean_object* v_x_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Std_Http_Server_serve___redArg___lam__32(v___f_1536_, v_a_1537_, v_x_1538_);
lean_dec(v_a_1537_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__33(lean_object* v___f_1541_, lean_object* v_a_1542_, lean_object* v_x_1543_){
_start:
{
if (lean_obj_tag(v_x_1543_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1553_; 
lean_dec_ref(v___f_1541_);
v_a_1545_ = lean_ctor_get(v_x_1543_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v_x_1543_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1547_ = v_x_1543_;
v_isShared_1548_ = v_isSharedCheck_1553_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v_x_1543_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1553_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1551_; 
v___x_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
return v___x_1551_;
}
}
}
else
{
lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1572_; 
v_isSharedCheck_1572_ = !lean_is_exclusive(v_x_1543_);
if (v_isSharedCheck_1572_ == 0)
{
lean_object* v_unused_1573_; 
v_unused_1573_ = lean_ctor_get(v_x_1543_, 0);
lean_dec(v_unused_1573_);
v___x_1555_ = v_x_1543_;
v_isShared_1556_ = v_isSharedCheck_1572_;
goto v_resetjp_1554_;
}
else
{
lean_dec(v_x_1543_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1572_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1557_; uint8_t v___x_1558_; lean_object* v_val_1560_; lean_object* v___x_1563_; 
v___x_1557_ = lean_unsigned_to_nat(0u);
v___x_1558_ = 0;
v___x_1563_ = lean_uv_tcp_nodelay(v_a_1542_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1566_; 
v_a_1564_ = lean_ctor_get(v___x_1563_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v___x_1563_, 1);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 0, v_a_1564_);
v___x_1566_ = v___x_1555_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
v_val_1560_ = v___x_1566_;
goto v___jp_1559_;
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; 
v_a_1568_ = lean_ctor_get(v___x_1563_, 0);
lean_inc(v_a_1568_);
lean_dec_ref_known(v___x_1563_, 1);
if (v_isShared_1556_ == 0)
{
lean_ctor_set_tag(v___x_1555_, 0);
lean_ctor_set(v___x_1555_, 0, v_a_1568_);
v___x_1570_ = v___x_1555_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1568_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
v_val_1560_ = v___x_1570_;
goto v___jp_1559_;
}
}
v___jp_1559_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1561_, 0, v_val_1560_);
v___x_1562_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1557_, v___x_1558_, v___x_1561_, v___f_1541_);
return v___x_1562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__33___boxed(lean_object* v___f_1574_, lean_object* v_a_1575_, lean_object* v_x_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Std_Http_Server_serve___redArg___lam__33(v___f_1574_, v_a_1575_, v_x_1576_);
lean_dec(v_a_1575_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__34(lean_object* v___f_1579_, lean_object* v_a_1580_, uint32_t v_backlog_1581_, lean_object* v_x_1582_){
_start:
{
if (lean_obj_tag(v_x_1582_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1592_; 
lean_dec_ref(v___f_1579_);
v_a_1584_ = lean_ctor_get(v_x_1582_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_x_1582_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1586_ = v_x_1582_;
v_isShared_1587_ = v_isSharedCheck_1592_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v_x_1582_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1592_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
lean_object* v___x_1590_; 
v___x_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
return v___x_1590_;
}
}
}
else
{
lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1611_; 
v_isSharedCheck_1611_ = !lean_is_exclusive(v_x_1582_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v_x_1582_, 0);
lean_dec(v_unused_1612_);
v___x_1594_ = v_x_1582_;
v_isShared_1595_ = v_isSharedCheck_1611_;
goto v_resetjp_1593_;
}
else
{
lean_dec(v_x_1582_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1611_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1596_; uint8_t v___x_1597_; lean_object* v_val_1599_; lean_object* v___x_1602_; 
v___x_1596_ = lean_unsigned_to_nat(0u);
v___x_1597_ = 0;
v___x_1602_ = lean_uv_tcp_listen(v_a_1580_, v_backlog_1581_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1605_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v_a_1603_);
v___x_1605_ = v___x_1594_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
v_val_1599_ = v___x_1605_;
goto v___jp_1598_;
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; 
v_a_1607_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1607_);
lean_dec_ref_known(v___x_1602_, 1);
if (v_isShared_1595_ == 0)
{
lean_ctor_set_tag(v___x_1594_, 0);
lean_ctor_set(v___x_1594_, 0, v_a_1607_);
v___x_1609_ = v___x_1594_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1607_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
v_val_1599_ = v___x_1609_;
goto v___jp_1598_;
}
}
v___jp_1598_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1600_, 0, v_val_1599_);
v___x_1601_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1596_, v___x_1597_, v___x_1600_, v___f_1579_);
return v___x_1601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__34___boxed(lean_object* v___f_1613_, lean_object* v_a_1614_, lean_object* v_backlog_1615_, lean_object* v_x_1616_, lean_object* v___y_1617_){
_start:
{
uint32_t v_backlog_boxed_1618_; lean_object* v_res_1619_; 
v_backlog_boxed_1618_ = lean_unbox_uint32(v_backlog_1615_);
lean_dec(v_backlog_1615_);
v_res_1619_ = l_Std_Http_Server_serve___redArg___lam__34(v___f_1613_, v_a_1614_, v_backlog_boxed_1618_, v_x_1616_);
lean_dec(v_a_1614_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__35(lean_object* v___f_1620_, lean_object* v___f_1621_, lean_object* v___x_1622_, lean_object* v_inst_1623_, lean_object* v_handler_1624_, lean_object* v_config_1625_, lean_object* v___f_1626_, lean_object* v___f_1627_, lean_object* v___x_1628_, lean_object* v___f_1629_, lean_object* v___f_1630_, lean_object* v___f_1631_, lean_object* v___f_1632_, lean_object* v___f_1633_, uint32_t v_backlog_1634_, lean_object* v_addr_1635_, lean_object* v_x_1636_){
_start:
{
if (lean_obj_tag(v_x_1636_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1646_; 
lean_dec_ref(v___f_1633_);
lean_dec_ref(v___f_1632_);
lean_dec_ref(v___f_1631_);
lean_dec_ref(v___f_1630_);
lean_dec_ref(v___f_1629_);
lean_dec(v___x_1628_);
lean_dec_ref(v___f_1627_);
lean_dec_ref(v___f_1626_);
lean_dec_ref(v_config_1625_);
lean_dec(v_handler_1624_);
lean_dec_ref(v_inst_1623_);
lean_dec_ref(v___x_1622_);
lean_dec_ref(v___f_1621_);
lean_dec_ref(v___f_1620_);
v_a_1638_ = lean_ctor_get(v_x_1636_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_x_1636_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1640_ = v_x_1636_;
v_isShared_1641_ = v_isSharedCheck_1646_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v_x_1636_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1646_;
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
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1644_; 
v___x_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
return v___x_1644_;
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1672_; 
v_a_1647_ = lean_ctor_get(v_x_1636_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v_x_1636_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1649_ = v_x_1636_;
v_isShared_1650_ = v_isSharedCheck_1672_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v_x_1636_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1672_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___f_1651_; lean_object* v___f_1652_; lean_object* v___f_1653_; lean_object* v___f_1654_; lean_object* v___x_1655_; lean_object* v___f_1656_; lean_object* v___x_1657_; uint8_t v___x_1658_; lean_object* v_val_1660_; lean_object* v___x_1663_; 
lean_inc_n(v_a_1647_, 4);
lean_inc_ref(v_config_1625_);
v___f_1651_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__30___boxed), 17, 15);
lean_closure_set(v___f_1651_, 0, v___f_1620_);
lean_closure_set(v___f_1651_, 1, v___f_1621_);
lean_closure_set(v___f_1651_, 2, v___x_1622_);
lean_closure_set(v___f_1651_, 3, v_inst_1623_);
lean_closure_set(v___f_1651_, 4, v_handler_1624_);
lean_closure_set(v___f_1651_, 5, v_config_1625_);
lean_closure_set(v___f_1651_, 6, v___f_1626_);
lean_closure_set(v___f_1651_, 7, v___f_1627_);
lean_closure_set(v___f_1651_, 8, v___x_1628_);
lean_closure_set(v___f_1651_, 9, v_a_1647_);
lean_closure_set(v___f_1651_, 10, v___f_1629_);
lean_closure_set(v___f_1651_, 11, v___f_1630_);
lean_closure_set(v___f_1651_, 12, v___f_1631_);
lean_closure_set(v___f_1651_, 13, v___f_1632_);
lean_closure_set(v___f_1651_, 14, v___f_1633_);
v___f_1652_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__31___boxed), 4, 2);
lean_closure_set(v___f_1652_, 0, v___f_1651_);
lean_closure_set(v___f_1652_, 1, v_config_1625_);
v___f_1653_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__32___boxed), 4, 2);
lean_closure_set(v___f_1653_, 0, v___f_1652_);
lean_closure_set(v___f_1653_, 1, v_a_1647_);
v___f_1654_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__33___boxed), 4, 2);
lean_closure_set(v___f_1654_, 0, v___f_1653_);
lean_closure_set(v___f_1654_, 1, v_a_1647_);
v___x_1655_ = lean_box_uint32(v_backlog_1634_);
v___f_1656_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__34___boxed), 5, 3);
lean_closure_set(v___f_1656_, 0, v___f_1654_);
lean_closure_set(v___f_1656_, 1, v_a_1647_);
lean_closure_set(v___f_1656_, 2, v___x_1655_);
v___x_1657_ = lean_unsigned_to_nat(0u);
v___x_1658_ = 0;
v___x_1663_ = lean_uv_tcp_bind(v_a_1647_, v_addr_1635_);
lean_dec(v_a_1647_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1666_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 0, v_a_1664_);
v___x_1666_ = v___x_1649_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_a_1664_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
v_val_1660_ = v___x_1666_;
goto v___jp_1659_;
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; 
v_a_1668_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1663_, 1);
if (v_isShared_1650_ == 0)
{
lean_ctor_set_tag(v___x_1649_, 0);
lean_ctor_set(v___x_1649_, 0, v_a_1668_);
v___x_1670_ = v___x_1649_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_a_1668_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
v_val_1660_ = v___x_1670_;
goto v___jp_1659_;
}
}
v___jp_1659_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v_val_1660_);
v___x_1662_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1657_, v___x_1658_, v___x_1661_, v___f_1656_);
return v___x_1662_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___lam__35___boxed(lean_object** _args){
lean_object* v___f_1673_ = _args[0];
lean_object* v___f_1674_ = _args[1];
lean_object* v___x_1675_ = _args[2];
lean_object* v_inst_1676_ = _args[3];
lean_object* v_handler_1677_ = _args[4];
lean_object* v_config_1678_ = _args[5];
lean_object* v___f_1679_ = _args[6];
lean_object* v___f_1680_ = _args[7];
lean_object* v___x_1681_ = _args[8];
lean_object* v___f_1682_ = _args[9];
lean_object* v___f_1683_ = _args[10];
lean_object* v___f_1684_ = _args[11];
lean_object* v___f_1685_ = _args[12];
lean_object* v___f_1686_ = _args[13];
lean_object* v_backlog_1687_ = _args[14];
lean_object* v_addr_1688_ = _args[15];
lean_object* v_x_1689_ = _args[16];
lean_object* v___y_1690_ = _args[17];
_start:
{
uint32_t v_backlog_boxed_1691_; lean_object* v_res_1692_; 
v_backlog_boxed_1691_ = lean_unbox_uint32(v_backlog_1687_);
lean_dec(v_backlog_1687_);
v_res_1692_ = l_Std_Http_Server_serve___redArg___lam__35(v___f_1673_, v___f_1674_, v___x_1675_, v_inst_1676_, v_handler_1677_, v_config_1678_, v___f_1679_, v___f_1680_, v___x_1681_, v___f_1682_, v___f_1683_, v___f_1684_, v___f_1685_, v___f_1686_, v_backlog_boxed_1691_, v_addr_1688_, v_x_1689_);
lean_dec_ref(v_addr_1688_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg(lean_object* v_inst_1698_, lean_object* v_addr_1699_, lean_object* v_handler_1700_, lean_object* v_config_1701_, uint32_t v_backlog_1702_){
_start:
{
lean_object* v___f_1704_; lean_object* v___f_1705_; lean_object* v___f_1706_; lean_object* v___f_1707_; lean_object* v___f_1708_; lean_object* v___f_1709_; lean_object* v___f_1710_; lean_object* v___f_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___f_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; lean_object* v_val_1719_; lean_object* v___x_1722_; 
v___f_1704_ = ((lean_object*)(l_Std_Http_Server_waitShutdown___closed__0));
v___f_1705_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___closed__0));
v___f_1706_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___closed__1));
v___f_1707_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___closed__2));
v___f_1708_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__2));
v___f_1709_ = ((lean_object*)(l___private_Std_Http_Server_0__Std_Http_Server_frameCancellation___redArg___closed__0));
v___f_1710_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___closed__3));
v___f_1711_ = ((lean_object*)(l_Std_Http_Server_serve___redArg___closed__4));
v___x_1712_ = l_Std_Http_instTransportClient;
v___x_1713_ = l_Std_Http_Server_instImpl_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_;
v___x_1714_ = lean_box_uint32(v_backlog_1702_);
v___f_1715_ = lean_alloc_closure((void*)(l_Std_Http_Server_serve___redArg___lam__35___boxed), 18, 16);
lean_closure_set(v___f_1715_, 0, v___f_1708_);
lean_closure_set(v___f_1715_, 1, v___f_1707_);
lean_closure_set(v___f_1715_, 2, v___x_1712_);
lean_closure_set(v___f_1715_, 3, v_inst_1698_);
lean_closure_set(v___f_1715_, 4, v_handler_1700_);
lean_closure_set(v___f_1715_, 5, v_config_1701_);
lean_closure_set(v___f_1715_, 6, v___f_1709_);
lean_closure_set(v___f_1715_, 7, v___f_1707_);
lean_closure_set(v___f_1715_, 8, v___x_1713_);
lean_closure_set(v___f_1715_, 9, v___f_1705_);
lean_closure_set(v___f_1715_, 10, v___f_1706_);
lean_closure_set(v___f_1715_, 11, v___f_1710_);
lean_closure_set(v___f_1715_, 12, v___f_1704_);
lean_closure_set(v___f_1715_, 13, v___f_1711_);
lean_closure_set(v___f_1715_, 14, v___x_1714_);
lean_closure_set(v___f_1715_, 15, v_addr_1699_);
v___x_1716_ = lean_unsigned_to_nat(0u);
v___x_1717_ = 0;
v___x_1722_ = lean_uv_tcp_new();
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1722_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1722_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
lean_ctor_set_tag(v___x_1725_, 1);
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
v_val_1719_ = v___x_1728_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
v_a_1731_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1722_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1722_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
lean_ctor_set_tag(v___x_1733_, 0);
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
v_val_1719_ = v___x_1736_;
goto v___jp_1718_;
}
}
}
v___jp_1718_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1720_, 0, v_val_1719_);
v___x_1721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1716_, v___x_1717_, v___x_1720_, v___f_1715_);
return v___x_1721_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___redArg___boxed(lean_object* v_inst_1739_, lean_object* v_addr_1740_, lean_object* v_handler_1741_, lean_object* v_config_1742_, lean_object* v_backlog_1743_, lean_object* v_a_1744_){
_start:
{
uint32_t v_backlog_boxed_1745_; lean_object* v_res_1746_; 
v_backlog_boxed_1745_ = lean_unbox_uint32(v_backlog_1743_);
lean_dec(v_backlog_1743_);
v_res_1746_ = l_Std_Http_Server_serve___redArg(v_inst_1739_, v_addr_1740_, v_handler_1741_, v_config_1742_, v_backlog_boxed_1745_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve(lean_object* v_00_u03c3_1747_, lean_object* v_inst_1748_, lean_object* v_addr_1749_, lean_object* v_handler_1750_, lean_object* v_config_1751_, uint32_t v_backlog_1752_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Std_Http_Server_serve___redArg(v_inst_1748_, v_addr_1749_, v_handler_1750_, v_config_1751_, v_backlog_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serve___boxed(lean_object* v_00_u03c3_1755_, lean_object* v_inst_1756_, lean_object* v_addr_1757_, lean_object* v_handler_1758_, lean_object* v_config_1759_, lean_object* v_backlog_1760_, lean_object* v_a_1761_){
_start:
{
uint32_t v_backlog_boxed_1762_; lean_object* v_res_1763_; 
v_backlog_boxed_1762_ = lean_unbox_uint32(v_backlog_1760_);
lean_dec(v_backlog_1760_);
v_res_1763_ = l_Std_Http_Server_serve(v_00_u03c3_1755_, v_inst_1756_, v_addr_1757_, v_handler_1758_, v_config_1759_, v_backlog_boxed_1762_);
return v_res_1763_;
}
}
lean_object* runtime_initialize_Std_Async(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_TCP(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_CancellationToken(uint8_t builtin);
lean_object* runtime_initialize_Std_Sync_Semaphore(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Handler(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Connection(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Server(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_CancellationToken(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Sync_Semaphore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Server(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Async(uint8_t builtin);
lean_object* initialize_Std_Async_TCP(uint8_t builtin);
lean_object* initialize_Std_Sync_CancellationToken(uint8_t builtin);
lean_object* initialize_Std_Sync_Semaphore(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Handler(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Connection(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Server(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_CancellationToken(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Sync_Semaphore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Server(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Server(builtin);
}
#ifdef __cplusplus
}
#endif
