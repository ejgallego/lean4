// Lean compiler output
// Module: Std.Http.Data.Body.Full
// Imports: public import Std.Sync public import Std.Http.Data.Request public import Std.Http.Data.Response public import Std.Http.Data.Body.Any public import Init.Data.ByteArray.Basic
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
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* l_Std_Http_Chunk_ofByteArray(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
extern lean_object* l_Std_Http_Header_Name_contentType;
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object*, lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofReplayableBody(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofReplayableBody___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Response_Builder_body___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState = (const lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Full_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_close___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Full_close___closed__0 = (const lean_object*)&l_Std_Http_Body_Full_close___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Full_isClosed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_isClosed___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Full_isClosed___closed__0 = (const lean_object*)&l_Std_Http_Body_Full_isClosed___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Full_isClosed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_isClosed___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Full_isClosed___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Full_isClosed___closed__1 = (const lean_object*)&l_Std_Http_Body_Full_isClosed___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Full_getKnownSize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Body_Full_getKnownSize___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Full_getKnownSize___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Full_getKnownSize___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Body_Full_getKnownSize___lam__0___closed__1_value;
static const lean_ctor_object l_Std_Http_Body_Full_getKnownSize___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Full_getKnownSize___lam__0___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Body_Full_getKnownSize___lam__0___closed__2_value;
static const lean_ctor_object l_Std_Http_Body_Full_getKnownSize___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Full_getKnownSize___lam__0___closed__2_value)}};
static const lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0___closed__3 = (const lean_object*)&l_Std_Http_Body_Full_getKnownSize___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Full_tryRecv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_tryRecv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Full_tryRecv___closed__0 = (const lean_object*)&l_Std_Http_Body_Full_tryRecv___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Full_recvSelector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_recvSelector___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Full_recvSelector___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Body_Full_recvSelector___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Full_recvSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_recvSelector___lam__3___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Full_recvSelector___closed__0 = (const lean_object*)&l_Std_Http_Body_Full_recvSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector(lean_object*);
static const lean_closure_object l_Std_Http_Body_Full_resetInPlace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_close___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Full_resetInPlace___closed__0 = (const lean_object*)&l_Std_Http_Body_Full_resetInPlace___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_resetInPlace(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_resetInPlace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instFull___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instFull___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instFull___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instFull___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instFull___closed__0 = (const lean_object*)&l_Std_Http_Body_instFull___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instFull___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_recv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instFull___closed__1 = (const lean_object*)&l_Std_Http_Body_instFull___closed__1_value;
static const lean_closure_object l_Std_Http_Body_instFull___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instFull___closed__2 = (const lean_object*)&l_Std_Http_Body_instFull___closed__2_value;
static const lean_closure_object l_Std_Http_Body_instFull___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_isClosed___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instFull___closed__3 = (const lean_object*)&l_Std_Http_Body_instFull___closed__3_value;
static const lean_closure_object l_Std_Http_Body_instFull___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_recvSelector, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instFull___closed__4 = (const lean_object*)&l_Std_Http_Body_instFull___closed__4_value;
static const lean_closure_object l_Std_Http_Body_instFull___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_tryRecv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instFull___closed__5 = (const lean_object*)&l_Std_Http_Body_instFull___closed__5_value;
static const lean_closure_object l_Std_Http_Body_instFull___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_getKnownSize___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instFull___closed__6 = (const lean_object*)&l_Std_Http_Body_instFull___closed__6_value;
static const lean_ctor_object l_Std_Http_Body_instFull___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_instFull___closed__1_value),((lean_object*)&l_Std_Http_Body_instFull___closed__2_value),((lean_object*)&l_Std_Http_Body_instFull___closed__3_value),((lean_object*)&l_Std_Http_Body_instFull___closed__4_value),((lean_object*)&l_Std_Http_Body_instFull___closed__5_value),((lean_object*)&l_Std_Http_Body_instFull___closed__6_value),((lean_object*)&l_Std_Http_Body_instFull___closed__0_value)}};
static const lean_object* l_Std_Http_Body_instFull___closed__7 = (const lean_object*)&l_Std_Http_Body_instFull___closed__7_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instFull = (const lean_object*)&l_Std_Http_Body_instFull___closed__7_value;
static const lean_closure_object l_Std_Http_Body_instReplayableFull___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Full_resetInPlace___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instReplayableFull___closed__0 = (const lean_object*)&l_Std_Http_Body_instReplayableFull___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instReplayableFull = (const lean_object*)&l_Std_Http_Body_instReplayableFull___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instCoeFullAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Any_ofReplayableBody, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Body_instFull___closed__7_value),((lean_object*)&l_Std_Http_Body_instReplayableFull___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeFullAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeFullAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeFullAny = (const lean_object*)&l_Std_Http_Body_instCoeFullAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseFullAny___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeResponseFullAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeResponseFullAny___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_instFull___closed__7_value),((lean_object*)&l_Std_Http_Body_instReplayableFull___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeResponseFullAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeResponseFullAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeResponseFullAny = (const lean_object*)&l_Std_Http_Body_instCoeResponseFullAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__0___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_instFull___closed__7_value),((lean_object*)&l_Std_Http_Body_instReplayableFull___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__1 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseFullAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Request_Builder_defaultContentType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Request_Builder_bytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "application/octet-stream"};
static const lean_object* l_Std_Http_Request_Builder_bytes___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_bytes___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_bytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_bytes___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Request_Builder_text___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "text/plain; charset=utf-8"};
static const lean_object* l_Std_Http_Request_Builder_text___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_text___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_text(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_text___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Request_Builder_json___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Std_Http_Request_Builder_json___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_json___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_json(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_json___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Request_Builder_html___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "text/html; charset=utf-8"};
static const lean_object* l_Std_Http_Request_Builder_html___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_html___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_html(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_html___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Response_Builder_defaultContentType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_bytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_bytes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_text(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_text___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_json(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_json___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_html(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_html___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim___redArg(lean_object* v_ready_22_){
_start:
{
lean_inc(v_ready_22_);
return v_ready_22_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim___redArg___boxed(lean_object* v_ready_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim___redArg(v_ready_23_);
lean_dec(v_ready_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_ready_28_){
_start:
{
lean_inc(v_ready_28_);
return v_ready_28_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_ready_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_ready_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_ready_32_);
lean_dec(v_ready_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim___redArg(lean_object* v_sent_35_){
_start:
{
lean_inc(v_sent_35_);
return v_sent_35_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim___redArg___boxed(lean_object* v_sent_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim___redArg(v_sent_36_);
lean_dec(v_sent_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_sent_41_){
_start:
{
lean_inc(v_sent_41_);
return v_sent_41_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_sent_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_sent_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_sent_45_);
lean_dec(v_sent_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim___redArg(lean_object* v_closed_48_){
_start:
{
lean_inc(v_closed_48_);
return v_closed_48_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim___redArg___boxed(lean_object* v_closed_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim___redArg(v_closed_49_);
lean_dec(v_closed_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_closed_54_){
_start:
{
lean_inc(v_closed_54_);
return v_closed_54_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_closed_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_State_closed_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_closed_58_);
lean_dec(v_closed_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState_beq(uint8_t v_x_61_, uint8_t v_y_62_){
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
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState_beq___boxed(lean_object* v_x_68_, lean_object* v_y_69_){
_start:
{
uint8_t v_x_24__boxed_70_; uint8_t v_y_25__boxed_71_; uint8_t v_res_72_; lean_object* v_r_73_; 
v_x_24__boxed_70_ = lean_unbox(v_x_68_);
v_y_25__boxed_71_ = lean_unbox(v_y_69_);
v_res_72_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState_beq(v_x_24__boxed_70_, v_y_25__boxed_71_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0(lean_object* v_00___80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = ((lean_object*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___closed__1));
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0___boxed(lean_object* v_00___84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__0(v_00___84_, v___y_85_);
lean_dec(v___y_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__1(lean_object* v_full_88_, lean_object* v___f_89_, lean_object* v_a_90_, lean_object* v_x_91_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
lean_dec_ref(v___f_89_);
lean_dec_ref(v_full_88_);
v_a_93_ = lean_ctor_get(v_x_91_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_91_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v_x_91_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v_x_91_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_100_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
}
else
{
lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_115_; 
v_isSharedCheck_115_ = !lean_is_exclusive(v_x_91_);
if (v_isSharedCheck_115_ == 0)
{
lean_object* v_unused_116_; 
v_unused_116_ = lean_ctor_get(v_x_91_, 0);
lean_dec(v_unused_116_);
v___x_103_ = v_x_91_;
v_isShared_104_ = v_isSharedCheck_115_;
goto v_resetjp_102_;
}
else
{
lean_dec(v_x_91_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_115_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v_data_105_; uint8_t v___x_106_; 
v_data_105_ = lean_ctor_get(v_full_88_, 0);
lean_inc_ref(v_data_105_);
lean_dec_ref(v_full_88_);
v___x_106_ = l_ByteArray_isEmpty(v_data_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
lean_dec_ref(v___f_89_);
v___x_107_ = l_Std_Http_Chunk_ofByteArray(v_data_105_);
v___x_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_108_);
v___x_110_ = v___x_103_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_112_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
return v___x_111_;
}
}
else
{
lean_object* v___x_113_; lean_object* v___x_114_; 
lean_dec_ref(v_data_105_);
lean_del_object(v___x_103_);
v___x_113_ = lean_box(0);
lean_inc(v_a_90_);
v___x_114_ = lean_apply_3(v___f_89_, v___x_113_, v_a_90_, lean_box(0));
return v___x_114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__1___boxed(lean_object* v_full_117_, lean_object* v___f_118_, lean_object* v_a_119_, lean_object* v_x_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__1(v_full_117_, v___f_118_, v_a_119_, v_x_120_);
lean_dec(v_a_119_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2(lean_object* v_a_127_, lean_object* v___f_128_, lean_object* v___f_129_, lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_140_; 
lean_dec_ref(v___f_129_);
lean_dec_ref(v___f_128_);
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
lean_object* v_a_141_; uint8_t v___x_142_; 
v_a_141_ = lean_ctor_get(v_x_130_, 0);
lean_inc(v_a_141_);
lean_dec_ref_known(v_x_130_, 1);
v___x_142_ = lean_unbox(v_a_141_);
lean_dec(v_a_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec_ref(v___f_129_);
v___x_143_ = 1;
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = 0;
v___x_146_ = lean_box(v___x_143_);
v___x_147_ = lean_st_ref_swap(v_a_127_, v___x_146_);
lean_dec(v___x_147_);
v___x_148_ = ((lean_object*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__1));
v___x_149_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_144_, v___x_145_, v___x_148_, v___f_128_);
return v___x_149_;
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec_ref(v___f_128_);
v___x_150_ = lean_box(0);
lean_inc(v_a_127_);
v___x_151_ = lean_apply_3(v___f_129_, v___x_150_, v_a_127_, lean_box(0));
return v___x_151_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___boxed(lean_object* v_a_152_, lean_object* v___f_153_, lean_object* v___f_154_, lean_object* v_x_155_, lean_object* v___y_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2(v_a_152_, v___f_153_, v___f_154_, v_x_155_);
lean_dec(v_a_152_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk(lean_object* v_full_159_, lean_object* v_a_160_){
_start:
{
lean_object* v___f_162_; lean_object* v___f_163_; lean_object* v___f_164_; lean_object* v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___f_162_ = ((lean_object*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___closed__0));
lean_inc_n(v_a_160_, 2);
v___f_163_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__1___boxed), 5, 3);
lean_closure_set(v___f_163_, 0, v_full_159_);
lean_closure_set(v___f_163_, 1, v___f_162_);
lean_closure_set(v___f_163_, 2, v_a_160_);
v___f_164_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___boxed), 5, 3);
lean_closure_set(v___f_164_, 0, v_a_160_);
lean_closure_set(v___f_164_, 1, v___f_163_);
lean_closure_set(v___f_164_, 2, v___f_162_);
v___x_165_ = lean_unsigned_to_nat(0u);
v___x_166_ = 0;
v___x_167_ = lean_st_ref_get(v_a_160_);
v___x_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
v___x_170_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_165_, v___x_166_, v___x_169_, v___f_164_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___boxed(lean_object* v_full_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk(v_full_171_, v_a_172_);
lean_dec(v_a_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray___lam__0(lean_object* v_data_175_, lean_object* v_x_176_){
_start:
{
if (lean_obj_tag(v_x_176_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_186_; 
lean_dec_ref(v_data_175_);
v_a_178_ = lean_ctor_get(v_x_176_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v_x_176_);
if (v_isSharedCheck_186_ == 0)
{
v___x_180_ = v_x_176_;
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v_x_176_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_185_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_184_; 
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_196_; 
v_a_187_ = lean_ctor_get(v_x_176_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v_x_176_);
if (v_isSharedCheck_196_ == 0)
{
v___x_189_ = v_x_176_;
v_isShared_190_ = v_isSharedCheck_196_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v_x_176_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_196_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_191_, 0, v_data_175_);
lean_ctor_set(v___x_191_, 1, v_a_187_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_191_);
v___x_193_ = v___x_189_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_195_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; 
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray___lam__0___boxed(lean_object* v_data_197_, lean_object* v_x_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Std_Http_Body_Full_ofByteArray___lam__0(v_data_197_, v_x_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray(lean_object* v_data_201_){
_start:
{
lean_object* v___f_203_; uint8_t v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___f_203_ = lean_alloc_closure((void*)(l_Std_Http_Body_Full_ofByteArray___lam__0___boxed), 3, 1);
lean_closure_set(v___f_203_, 0, v_data_201_);
v___x_204_ = 0;
v___x_205_ = lean_unsigned_to_nat(0u);
v___x_206_ = 0;
v___x_207_ = lean_box(v___x_204_);
v___x_208_ = l_Std_Mutex_new___redArg(v___x_207_);
v___x_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
v___x_211_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_205_, v___x_206_, v___x_210_, v___f_203_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofByteArray___boxed(lean_object* v_data_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Std_Http_Body_Full_ofByteArray(v_data_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString___lam__0(lean_object* v_data_215_, lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
lean_dec_ref(v_data_215_);
v_a_218_ = lean_ctor_get(v_x_216_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_226_ == 0)
{
v___x_220_ = v_x_216_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v_x_216_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_225_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_224_; 
v___x_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
return v___x_224_;
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_237_; 
v_a_227_ = lean_ctor_get(v_x_216_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_237_ == 0)
{
v___x_229_ = v_x_216_;
v_isShared_230_ = v_isSharedCheck_237_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v_x_216_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_237_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_231_ = lean_string_to_utf8(v_data_215_);
v___x_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v_a_227_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v___x_232_);
v___x_234_ = v___x_229_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_236_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
lean_object* v___x_235_; 
v___x_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
return v___x_235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString___lam__0___boxed(lean_object* v_data_238_, lean_object* v_x_239_, lean_object* v___y_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Std_Http_Body_Full_ofString___lam__0(v_data_238_, v_x_239_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString(lean_object* v_data_242_){
_start:
{
lean_object* v___f_244_; uint8_t v___x_245_; lean_object* v___x_246_; uint8_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___f_244_ = lean_alloc_closure((void*)(l_Std_Http_Body_Full_ofString___lam__0___boxed), 3, 1);
lean_closure_set(v___f_244_, 0, v_data_242_);
v___x_245_ = 0;
v___x_246_ = lean_unsigned_to_nat(0u);
v___x_247_ = 0;
v___x_248_ = lean_box(v___x_245_);
v___x_249_ = l_Std_Mutex_new___redArg(v___x_248_);
v___x_250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
v___x_252_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_246_, v___x_247_, v___x_251_, v___f_244_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_ofString___boxed(lean_object* v_data_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_Http_Body_Full_ofString(v_data_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__0(lean_object* v___y_256_){
_start:
{
if (lean_obj_tag(v___y_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
v_a_257_ = lean_ctor_get(v___y_256_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___y_256_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___y_256_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___y_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_273_; 
v_a_265_ = lean_ctor_get(v___y_256_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___y_256_);
if (v_isSharedCheck_273_ == 0)
{
v___x_267_ = v___y_256_;
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___y_256_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_273_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v_fst_269_; lean_object* v___x_271_; 
v_fst_269_ = lean_ctor_get(v_a_265_, 0);
lean_inc(v_fst_269_);
lean_dec(v_a_265_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v_fst_269_);
v___x_271_ = v___x_267_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_fst_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__1(lean_object* v_mutex_274_, lean_object* v_x_275_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_io_basemutex_unlock(v_mutex_274_);
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
v___x_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__1___boxed(lean_object* v_mutex_280_, lean_object* v_x_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__1(v_mutex_280_, v_x_281_);
lean_dec(v_x_281_);
lean_dec(v_mutex_280_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__2(lean_object* v_k_284_, lean_object* v_ref_285_, lean_object* v_x_286_){
_start:
{
if (lean_obj_tag(v_x_286_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_296_; 
lean_dec(v_ref_285_);
lean_dec_ref(v_k_284_);
v_a_288_ = lean_ctor_get(v_x_286_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v_x_286_);
if (v_isSharedCheck_296_ == 0)
{
v___x_290_ = v_x_286_;
v_isShared_291_ = v_isSharedCheck_296_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v_x_286_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_296_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_295_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; 
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
}
}
else
{
lean_object* v___x_297_; 
lean_dec_ref_known(v_x_286_, 1);
v___x_297_ = lean_apply_2(v_k_284_, v_ref_285_, lean_box(0));
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__2___boxed(lean_object* v_k_298_, lean_object* v_ref_299_, lean_object* v_x_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__2(v_k_298_, v_ref_299_, v_x_300_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__3(lean_object* v_mutex_303_, lean_object* v___f_304_){
_start:
{
lean_object* v___x_306_; uint8_t v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_306_ = lean_unsigned_to_nat(0u);
v___x_307_ = 0;
v___x_308_ = lean_io_basemutex_lock(v_mutex_303_);
v___x_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v___x_309_);
v___x_311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_306_, v___x_307_, v___x_310_, v___f_304_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__3___boxed(lean_object* v_mutex_312_, lean_object* v___f_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__3(v_mutex_312_, v___f_313_);
lean_dec(v_mutex_312_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(lean_object* v_mutex_317_, lean_object* v_k_318_){
_start:
{
lean_object* v_ref_320_; lean_object* v_mutex_321_; lean_object* v___f_322_; lean_object* v___f_323_; lean_object* v___f_324_; lean_object* v___f_325_; lean_object* v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; lean_object* v___y_330_; 
v_ref_320_ = lean_ctor_get(v_mutex_317_, 0);
lean_inc(v_ref_320_);
v_mutex_321_ = lean_ctor_get(v_mutex_317_, 1);
lean_inc_n(v_mutex_321_, 2);
lean_dec_ref(v_mutex_317_);
v___f_322_ = ((lean_object*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___closed__0));
v___f_323_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_323_, 0, v_mutex_321_);
v___f_324_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_324_, 0, v_k_318_);
lean_closure_set(v___f_324_, 1, v_ref_320_);
v___f_325_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_325_, 0, v_mutex_321_);
lean_closure_set(v___f_325_, 1, v___f_324_);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = 0;
v___x_328_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_325_, v___f_323_, v___x_326_, v___x_327_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_332_; 
v_a_332_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_332_);
lean_dec_ref_known(v___x_328_, 1);
if (lean_obj_tag(v_a_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
v_a_333_ = lean_ctor_get(v_a_332_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v_a_332_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v_a_332_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v_a_332_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
v___y_330_ = v___x_338_;
goto v___jp_329_;
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_349_; 
v_a_341_ = lean_ctor_get(v_a_332_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v_a_332_);
if (v_isSharedCheck_349_ == 0)
{
v___x_343_ = v_a_332_;
v_isShared_344_ = v_isSharedCheck_349_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v_a_332_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_349_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v_fst_345_; lean_object* v___x_347_; 
v_fst_345_ = lean_ctor_get(v_a_341_, 0);
lean_inc(v_fst_345_);
lean_dec(v_a_341_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v_fst_345_);
v___x_347_ = v___x_343_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_fst_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
v___y_330_ = v___x_347_;
goto v___jp_329_;
}
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_358_; 
v_a_350_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_358_ == 0)
{
v___x_352_ = v___x_328_;
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_328_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = lean_task_map(v___f_322_, v_a_350_, v___x_326_, v___x_327_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_354_);
v___x_356_ = v___x_352_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
v___jp_329_:
{
lean_object* v___x_331_; 
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___y_330_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg___boxed(lean_object* v_mutex_359_, lean_object* v_k_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_mutex_359_, v_k_360_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0(lean_object* v_00_u03b1_363_, lean_object* v_00_u03b2_364_, lean_object* v_mutex_365_, lean_object* v_k_366_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_mutex_365_, v_k_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___boxed(lean_object* v_00_u03b1_369_, lean_object* v_00_u03b2_370_, lean_object* v_mutex_371_, lean_object* v_k_372_, lean_object* v___y_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0(v_00_u03b1_369_, v_00_u03b2_370_, v_mutex_371_, v_k_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recv(lean_object* v_full_375_){
_start:
{
lean_object* v_state_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v_state_377_ = lean_ctor_get(v_full_375_, 1);
lean_inc_ref(v_state_377_);
v___x_378_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___boxed), 3, 1);
lean_closure_set(v___x_378_, 0, v_full_375_);
v___x_379_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_377_, v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recv___boxed(lean_object* v_full_380_, lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Std_Http_Body_Full_recv(v_full_380_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close___lam__0(uint8_t v___x_383_, lean_object* v___y_384_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = lean_box(v___x_383_);
v___x_387_ = lean_st_ref_swap(v___y_384_, v___x_386_);
lean_dec(v___x_387_);
v___x_388_ = ((lean_object*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__1));
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close___lam__0___boxed(lean_object* v___x_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
uint8_t v___x_177__boxed_392_; lean_object* v_res_393_; 
v___x_177__boxed_392_ = lean_unbox(v___x_389_);
v_res_393_ = l_Std_Http_Body_Full_close___lam__0(v___x_177__boxed_392_, v___y_390_);
lean_dec(v___y_390_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close(lean_object* v_full_397_){
_start:
{
lean_object* v_state_399_; lean_object* v___f_400_; lean_object* v___x_401_; 
v_state_399_ = lean_ctor_get(v_full_397_, 1);
lean_inc_ref(v_state_399_);
lean_dec_ref(v_full_397_);
v___f_400_ = ((lean_object*)(l_Std_Http_Body_Full_close___closed__0));
v___x_401_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_399_, v___f_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_close___boxed(lean_object* v_full_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Std_Http_Body_Full_close(v_full_402_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__0(lean_object* v_x_405_){
_start:
{
uint8_t v___y_408_; 
if (lean_obj_tag(v_x_405_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_420_; 
v_a_412_ = lean_ctor_get(v_x_405_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v_x_405_);
if (v_isSharedCheck_420_ == 0)
{
v___x_414_ = v_x_405_;
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v_x_405_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_420_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_419_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_418_; 
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
}
else
{
lean_object* v_a_421_; uint8_t v___x_422_; uint8_t v___x_423_; uint8_t v___x_424_; 
v_a_421_ = lean_ctor_get(v_x_405_, 0);
lean_inc(v_a_421_);
lean_dec_ref_known(v_x_405_, 1);
v___x_422_ = 0;
v___x_423_ = lean_unbox(v_a_421_);
lean_dec(v_a_421_);
v___x_424_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_instBEqState_beq(v___x_423_, v___x_422_);
if (v___x_424_ == 0)
{
uint8_t v___x_425_; 
v___x_425_ = 1;
v___y_408_ = v___x_425_;
goto v___jp_407_;
}
else
{
uint8_t v___x_426_; 
v___x_426_ = 0;
v___y_408_ = v___x_426_;
goto v___jp_407_;
}
}
v___jp_407_:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_409_ = lean_box(v___y_408_);
v___x_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
v___x_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__0___boxed(lean_object* v_x_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Std_Http_Body_Full_isClosed___lam__0(v_x_427_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__1(lean_object* v___f_430_, lean_object* v___y_431_){
_start:
{
lean_object* v___x_433_; uint8_t v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_433_ = lean_unsigned_to_nat(0u);
v___x_434_ = 0;
v___x_435_ = lean_st_ref_get(v___y_431_);
v___x_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
v___x_438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_433_, v___x_434_, v___x_437_, v___f_430_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___lam__1___boxed(lean_object* v___f_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Std_Http_Body_Full_isClosed___lam__1(v___f_439_, v___y_440_);
lean_dec(v___y_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed(lean_object* v_full_446_){
_start:
{
lean_object* v_state_448_; lean_object* v___f_449_; lean_object* v___x_450_; 
v_state_448_ = lean_ctor_get(v_full_446_, 1);
lean_inc_ref(v_state_448_);
lean_dec_ref(v_full_446_);
v___f_449_ = ((lean_object*)(l_Std_Http_Body_Full_isClosed___closed__1));
v___x_450_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_448_, v___f_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_isClosed___boxed(lean_object* v_full_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Std_Http_Body_Full_isClosed(v_full_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0(lean_object* v_data_462_, lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_475_; 
v_a_467_ = lean_ctor_get(v_x_463_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v_x_463_);
if (v_isSharedCheck_475_ == 0)
{
v___x_469_ = v_x_463_;
v_isShared_470_ = v_isSharedCheck_475_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v_x_463_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_475_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_474_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_473_; 
v___x_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
return v___x_473_;
}
}
}
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_488_; 
v_a_476_ = lean_ctor_get(v_x_463_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v_x_463_);
if (v_isSharedCheck_488_ == 0)
{
v___x_478_ = v_x_463_;
v_isShared_479_ = v_isSharedCheck_488_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v_x_463_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_488_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
uint8_t v___x_480_; 
v___x_480_ = lean_unbox(v_a_476_);
lean_dec(v_a_476_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_481_ = lean_byte_array_size(v_data_462_);
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_483_);
v___x_485_ = v___x_478_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_487_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
lean_object* v___x_486_; 
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
return v___x_486_;
}
}
else
{
lean_del_object(v___x_478_);
goto v___jp_465_;
}
}
}
v___jp_465_:
{
lean_object* v___x_466_; 
v___x_466_ = ((lean_object*)(l_Std_Http_Body_Full_getKnownSize___lam__0___closed__3));
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__0___boxed(lean_object* v_data_489_, lean_object* v_x_490_, lean_object* v___y_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Std_Http_Body_Full_getKnownSize___lam__0(v_data_489_, v_x_490_);
lean_dec_ref(v_data_489_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__1(lean_object* v___f_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___x_496_; uint8_t v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_496_ = lean_unsigned_to_nat(0u);
v___x_497_ = 0;
v___x_498_ = lean_st_ref_get(v___y_494_);
v___x_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
v___x_501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_496_, v___x_497_, v___x_500_, v___f_493_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___lam__1___boxed(lean_object* v___f_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Std_Http_Body_Full_getKnownSize___lam__1(v___f_502_, v___y_503_);
lean_dec(v___y_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize(lean_object* v_full_506_){
_start:
{
lean_object* v_data_508_; lean_object* v_state_509_; lean_object* v___f_510_; lean_object* v___f_511_; lean_object* v___x_512_; 
v_data_508_ = lean_ctor_get(v_full_506_, 0);
lean_inc_ref(v_data_508_);
v_state_509_ = lean_ctor_get(v_full_506_, 1);
lean_inc_ref(v_state_509_);
lean_dec_ref(v_full_506_);
v___f_510_ = lean_alloc_closure((void*)(l_Std_Http_Body_Full_getKnownSize___lam__0___boxed), 3, 1);
lean_closure_set(v___f_510_, 0, v_data_508_);
v___f_511_ = lean_alloc_closure((void*)(l_Std_Http_Body_Full_getKnownSize___lam__1___boxed), 3, 1);
lean_closure_set(v___f_511_, 0, v___f_510_);
v___x_512_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_509_, v___f_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_getKnownSize___boxed(lean_object* v_full_513_, lean_object* v_a_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Std_Http_Body_Full_getKnownSize(v_full_513_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv___lam__0(lean_object* v_x_516_){
_start:
{
if (lean_obj_tag(v_x_516_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_526_; 
v_a_518_ = lean_ctor_get(v_x_516_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v_x_516_);
if (v_isSharedCheck_526_ == 0)
{
v___x_520_ = v_x_516_;
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v_x_516_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_526_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_524_; 
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_a_527_ = lean_ctor_get(v_x_516_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_516_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v_x_516_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v_x_516_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_531_; lean_object* v___x_533_; 
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_a_527_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_531_);
v___x_533_ = v___x_529_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_531_);
v___x_533_ = v_reuseFailAlloc_535_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
lean_object* v___x_534_; 
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv___lam__0___boxed(lean_object* v_x_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Std_Http_Body_Full_tryRecv___lam__0(v_x_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv(lean_object* v_full_541_){
_start:
{
lean_object* v_state_543_; lean_object* v___f_544_; lean_object* v___x_545_; lean_object* v___x_546_; uint8_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_state_543_ = lean_ctor_get(v_full_541_, 1);
lean_inc_ref(v_state_543_);
v___f_544_ = ((lean_object*)(l_Std_Http_Body_Full_tryRecv___closed__0));
v___x_545_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___boxed), 3, 1);
lean_closure_set(v___x_545_, 0, v_full_541_);
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = 0;
v___x_548_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_543_, v___x_545_);
v___x_549_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_546_, v___x_547_, v___x_548_, v___f_544_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_tryRecv___boxed(lean_object* v_full_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Std_Http_Body_Full_tryRecv(v_full_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__0(lean_object* v_promise_553_, lean_object* v_x_554_){
_start:
{
if (lean_obj_tag(v_x_554_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_564_; 
v_a_556_ = lean_ctor_get(v_x_554_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v_x_554_);
if (v_isSharedCheck_564_ == 0)
{
v___x_558_ = v_x_554_;
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v_x_554_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_564_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
lean_object* v___x_562_; 
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_565_ = lean_io_promise_resolve(v_x_554_, v_promise_553_);
v___x_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__0___boxed(lean_object* v_promise_568_, lean_object* v_x_569_, lean_object* v___y_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__0(v_promise_568_, v_x_569_);
lean_dec(v_promise_568_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__1(lean_object* v_lose_572_, lean_object* v___y_573_, lean_object* v_full_574_, lean_object* v___f_575_, lean_object* v_x_576_){
_start:
{
if (lean_obj_tag(v_x_576_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_586_; 
lean_dec_ref(v___f_575_);
lean_dec_ref(v_full_574_);
lean_dec_ref(v_lose_572_);
v_a_578_ = lean_ctor_get(v_x_576_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v_x_576_);
if (v_isSharedCheck_586_ == 0)
{
v___x_580_ = v_x_576_;
v_isShared_581_ = v_isSharedCheck_586_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v_x_576_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_586_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_585_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
lean_object* v___x_584_; 
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
}
else
{
lean_object* v_a_587_; uint8_t v___x_588_; 
v_a_587_ = lean_ctor_get(v_x_576_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v_x_576_, 1);
v___x_588_ = lean_unbox(v_a_587_);
lean_dec(v_a_587_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; 
lean_dec_ref(v___f_575_);
lean_dec_ref(v_full_574_);
lean_inc(v___y_573_);
v___x_589_ = lean_apply_2(v_lose_572_, v___y_573_, lean_box(0));
return v___x_589_;
}
else
{
lean_object* v___x_590_; uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
lean_dec_ref(v_lose_572_);
v___x_590_ = lean_unsigned_to_nat(0u);
v___x_591_ = 0;
v___x_592_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk(v_full_574_, v___y_573_);
v___x_593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_590_, v___x_591_, v___x_592_, v___f_575_);
return v___x_593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__1___boxed(lean_object* v_lose_594_, lean_object* v___y_595_, lean_object* v_full_596_, lean_object* v___f_597_, lean_object* v_x_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__1(v_lose_594_, v___y_595_, v_full_596_, v___f_597_, v_x_598_);
lean_dec(v___y_595_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0(lean_object* v_full_601_, lean_object* v_w_602_, lean_object* v_lose_603_, lean_object* v___y_604_){
_start:
{
lean_object* v_finished_606_; lean_object* v_promise_607_; lean_object* v___f_608_; lean_object* v___f_609_; lean_object* v___x_610_; uint8_t v___x_611_; lean_object* v___x_612_; uint8_t v___y_614_; uint8_t v___x_622_; 
v_finished_606_ = lean_ctor_get(v_w_602_, 0);
lean_inc(v_finished_606_);
v_promise_607_ = lean_ctor_get(v_w_602_, 1);
lean_inc(v_promise_607_);
lean_dec_ref(v_w_602_);
v___f_608_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_608_, 0, v_promise_607_);
lean_inc(v___y_604_);
v___f_609_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___lam__1___boxed), 6, 4);
lean_closure_set(v___f_609_, 0, v_lose_603_);
lean_closure_set(v___f_609_, 1, v___y_604_);
lean_closure_set(v___f_609_, 2, v_full_601_);
lean_closure_set(v___f_609_, 3, v___f_608_);
v___x_610_ = lean_unsigned_to_nat(0u);
v___x_611_ = 0;
v___x_612_ = lean_st_ref_take(v_finished_606_);
v___x_622_ = lean_unbox(v___x_612_);
lean_dec(v___x_612_);
if (v___x_622_ == 0)
{
uint8_t v___x_623_; 
v___x_623_ = 1;
v___y_614_ = v___x_623_;
goto v___jp_613_;
}
else
{
v___y_614_ = v___x_611_;
goto v___jp_613_;
}
v___jp_613_:
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_615_ = 1;
v___x_616_ = lean_box(v___x_615_);
v___x_617_ = lean_st_ref_put(v_finished_606_, v___x_616_);
lean_dec(v_finished_606_);
v___x_618_ = lean_box(v___y_614_);
v___x_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
v___x_621_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_610_, v___x_611_, v___x_620_, v___f_609_);
return v___x_621_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___boxed(lean_object* v_full_624_, lean_object* v_w_625_, lean_object* v_lose_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0(v_full_624_, v_w_625_, v_lose_626_, v___y_627_);
lean_dec(v___y_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__1(lean_object* v___x_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_630_);
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__1___boxed(lean_object* v___x_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Std_Http_Body_Full_recvSelector___lam__1(v___x_635_, v___y_636_);
lean_dec(v___y_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__0(lean_object* v_full_641_, lean_object* v_state_642_, lean_object* v_waiter_643_){
_start:
{
lean_object* v_lose_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_lose_645_ = ((lean_object*)(l_Std_Http_Body_Full_recvSelector___lam__0___closed__0));
v___x_646_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Full_recvSelector_spec__0___boxed), 5, 3);
lean_closure_set(v___x_646_, 0, v_full_641_);
lean_closure_set(v___x_646_, 1, v_waiter_643_);
lean_closure_set(v___x_646_, 2, v_lose_645_);
v___x_647_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_642_, v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__0___boxed(lean_object* v_full_648_, lean_object* v_state_649_, lean_object* v_waiter_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Std_Http_Body_Full_recvSelector___lam__0(v_full_648_, v_state_649_, v_waiter_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__2(lean_object* v_state_653_, lean_object* v___x_654_, lean_object* v___f_655_){
_start:
{
lean_object* v___x_657_; uint8_t v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = 0;
v___x_659_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_653_, v___x_654_);
v___x_660_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_657_, v___x_658_, v___x_659_, v___f_655_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__2___boxed(lean_object* v_state_661_, lean_object* v___x_662_, lean_object* v___f_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Std_Http_Body_Full_recvSelector___lam__2(v_state_661_, v___x_662_, v___f_663_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__3(lean_object* v___x_666_){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
v___x_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector___lam__3___boxed(lean_object* v___x_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Std_Http_Body_Full_recvSelector___lam__3(v___x_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_recvSelector(lean_object* v_full_675_){
_start:
{
lean_object* v_state_676_; lean_object* v___f_677_; lean_object* v___f_678_; lean_object* v___x_679_; lean_object* v___f_680_; lean_object* v___f_681_; lean_object* v___x_682_; 
v_state_676_ = lean_ctor_get(v_full_675_, 1);
lean_inc_ref_n(v_state_676_, 2);
v___f_677_ = ((lean_object*)(l_Std_Http_Body_Full_tryRecv___closed__0));
lean_inc_ref(v_full_675_);
v___f_678_ = lean_alloc_closure((void*)(l_Std_Http_Body_Full_recvSelector___lam__0___boxed), 4, 2);
lean_closure_set(v___f_678_, 0, v_full_675_);
lean_closure_set(v___f_678_, 1, v_state_676_);
v___x_679_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___boxed), 3, 1);
lean_closure_set(v___x_679_, 0, v_full_675_);
v___f_680_ = lean_alloc_closure((void*)(l_Std_Http_Body_Full_recvSelector___lam__2___boxed), 4, 3);
lean_closure_set(v___f_680_, 0, v_state_676_);
lean_closure_set(v___f_680_, 1, v___x_679_);
lean_closure_set(v___f_680_, 2, v___f_677_);
v___f_681_ = ((lean_object*)(l_Std_Http_Body_Full_recvSelector___closed__0));
v___x_682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_682_, 0, v___f_680_);
lean_ctor_set(v___x_682_, 1, v___f_678_);
lean_ctor_set(v___x_682_, 2, v___f_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_resetInPlace(lean_object* v_full_686_){
_start:
{
lean_object* v_state_688_; lean_object* v___f_689_; lean_object* v___x_690_; 
v_state_688_ = lean_ctor_get(v_full_686_, 1);
lean_inc_ref(v_state_688_);
lean_dec_ref(v_full_686_);
v___f_689_ = ((lean_object*)(l_Std_Http_Body_Full_resetInPlace___closed__0));
v___x_690_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Full_recv_spec__0___redArg(v_state_688_, v___f_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Full_resetInPlace___boxed(lean_object* v_full_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Std_Http_Body_Full_resetInPlace(v_full_691_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instFull___lam__0(lean_object* v_x_694_, lean_object* v_x_695_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = ((lean_object*)(l___private_Std_Http_Data_Body_Full_0__Std_Http_Body_Full_takeChunk___lam__2___closed__1));
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instFull___lam__0___boxed(lean_object* v_x_698_, lean_object* v_x_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Std_Http_Body_instFull___lam__0(v_x_698_, v_x_699_);
lean_dec(v_x_699_);
lean_dec_ref(v_x_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseFullAny___lam__0(lean_object* v___x_724_, lean_object* v___x_725_, lean_object* v_f_726_){
_start:
{
lean_object* v_line_727_; lean_object* v_body_728_; lean_object* v_extensions_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_737_; 
v_line_727_ = lean_ctor_get(v_f_726_, 0);
v_body_728_ = lean_ctor_get(v_f_726_, 1);
v_extensions_729_ = lean_ctor_get(v_f_726_, 2);
v_isSharedCheck_737_ = !lean_is_exclusive(v_f_726_);
if (v_isSharedCheck_737_ == 0)
{
v___x_731_ = v_f_726_;
v_isShared_732_ = v_isSharedCheck_737_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_extensions_729_);
lean_inc(v_body_728_);
lean_inc(v_line_727_);
lean_dec(v_f_726_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_737_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_733_ = l_Std_Http_Body_Any_ofReplayableBody___redArg(v___x_724_, v___x_725_, v_body_728_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v___x_733_);
v___x_735_ = v___x_731_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_line_727_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_736_, 2, v_extensions_729_);
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
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__0(lean_object* v___x_742_, lean_object* v___x_743_, lean_object* v_x_744_){
_start:
{
if (lean_obj_tag(v_x_744_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref(v___x_743_);
lean_dec_ref(v___x_742_);
v_a_746_ = lean_ctor_get(v_x_744_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v_x_744_);
if (v_isSharedCheck_754_ == 0)
{
v___x_748_ = v_x_744_;
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v_x_744_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_754_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_753_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_752_; 
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
return v___x_752_;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_774_; 
v_a_755_ = lean_ctor_get(v_x_744_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v_x_744_);
if (v_isSharedCheck_774_ == 0)
{
v___x_757_ = v_x_744_;
v_isShared_758_ = v_isSharedCheck_774_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v_x_744_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_774_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v_line_759_; lean_object* v_body_760_; lean_object* v_extensions_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_773_; 
v_line_759_ = lean_ctor_get(v_a_755_, 0);
v_body_760_ = lean_ctor_get(v_a_755_, 1);
v_extensions_761_ = lean_ctor_get(v_a_755_, 2);
v_isSharedCheck_773_ = !lean_is_exclusive(v_a_755_);
if (v_isSharedCheck_773_ == 0)
{
v___x_763_ = v_a_755_;
v_isShared_764_ = v_isSharedCheck_773_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_extensions_761_);
lean_inc(v_body_760_);
lean_inc(v_line_759_);
lean_dec(v_a_755_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_773_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = l_Std_Http_Body_Any_ofReplayableBody___redArg(v___x_742_, v___x_743_, v_body_760_);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 1, v___x_765_);
v___x_767_ = v___x_763_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_line_759_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v_extensions_761_);
v___x_767_ = v_reuseFailAlloc_772_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_769_; 
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_767_);
v___x_769_ = v___x_757_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_767_);
v___x_769_ = v_reuseFailAlloc_771_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; 
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__0___boxed(lean_object* v___x_775_, lean_object* v___x_776_, lean_object* v_x_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__0(v___x_775_, v___x_776_, v_x_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__1(lean_object* v___f_780_, lean_object* v_action_781_, lean_object* v___y_782_){
_start:
{
lean_object* v___x_784_; uint8_t v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_784_ = lean_unsigned_to_nat(0u);
v___x_785_ = 0;
lean_inc_ref(v___y_782_);
v___x_786_ = lean_apply_2(v_action_781_, v___y_782_, lean_box(0));
v___x_787_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_784_, v___x_785_, v___x_786_, v___f_780_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__1___boxed(lean_object* v___f_788_, lean_object* v_action_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Std_Http_Body_instCoeContextAsyncResponseFullAny___lam__1(v___f_788_, v_action_789_, v___y_790_);
lean_dec_ref(v___y_790_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___lam__1(lean_object* v___f_799_, lean_object* v_action_800_, lean_object* v___y_801_){
_start:
{
lean_object* v___x_803_; uint8_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_803_ = lean_unsigned_to_nat(0u);
v___x_804_ = 0;
v___x_805_ = lean_apply_1(v_action_800_, lean_box(0));
v___x_806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_803_, v___x_804_, v___x_805_, v___f_799_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___lam__1___boxed(lean_object* v___f_807_, lean_object* v_action_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Std_Http_Body_instCoeAsyncResponseFullContextAsyncAny___lam__1(v___f_807_, v_action_808_, v___y_809_);
lean_dec_ref(v___y_809_);
return v_res_811_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType_spec__0(lean_object* v_as_815_, size_t v_i_816_, size_t v_stop_817_){
_start:
{
uint8_t v___x_818_; 
v___x_818_ = lean_usize_dec_eq(v_i_816_, v_stop_817_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; lean_object* v_fst_820_; lean_object* v___x_821_; uint8_t v___x_822_; 
v___x_819_ = lean_array_uget_borrowed(v_as_815_, v_i_816_);
v_fst_820_ = lean_ctor_get(v___x_819_, 0);
v___x_821_ = l_Std_Http_Header_Name_contentType;
v___x_822_ = lean_string_dec_eq(v_fst_820_, v___x_821_);
if (v___x_822_ == 0)
{
size_t v___x_823_; size_t v___x_824_; 
v___x_823_ = ((size_t)1ULL);
v___x_824_ = lean_usize_add(v_i_816_, v___x_823_);
v_i_816_ = v___x_824_;
goto _start;
}
else
{
return v___x_822_;
}
}
else
{
uint8_t v___x_826_; 
v___x_826_ = 0;
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType_spec__0___boxed(lean_object* v_as_827_, lean_object* v_i_828_, lean_object* v_stop_829_){
_start:
{
size_t v_i_boxed_830_; size_t v_stop_boxed_831_; uint8_t v_res_832_; lean_object* v_r_833_; 
v_i_boxed_830_ = lean_unbox_usize(v_i_828_);
lean_dec(v_i_828_);
v_stop_boxed_831_ = lean_unbox_usize(v_stop_829_);
lean_dec(v_stop_829_);
v_res_832_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType_spec__0(v_as_827_, v_i_boxed_830_, v_stop_boxed_831_);
lean_dec_ref(v_as_827_);
v_r_833_ = lean_box(v_res_832_);
return v_r_833_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType(lean_object* v_headers_834_, lean_object* v_value_835_){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = lean_array_get_size(v_headers_834_);
v___x_843_ = lean_nat_dec_lt(v___x_841_, v___x_842_);
if (v___x_843_ == 0)
{
goto v___jp_836_;
}
else
{
size_t v___x_844_; size_t v___x_845_; uint8_t v___x_846_; 
v___x_844_ = ((size_t)0ULL);
v___x_845_ = lean_usize_of_nat(v___x_842_);
v___x_846_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType_spec__0(v_headers_834_, v___x_844_, v___x_845_);
if (v___x_846_ == 0)
{
goto v___jp_836_;
}
else
{
lean_dec_ref(v_value_835_);
return v_headers_834_;
}
}
v___jp_836_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_837_ = l_Std_Http_Header_Name_contentType;
v___x_838_ = l_Std_Http_Header_Value_ofString_x21(v_value_835_);
v___x_839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_837_);
lean_ctor_set(v___x_839_, 1, v___x_838_);
v___x_840_ = lean_array_push(v_headers_834_, v___x_839_);
return v___x_840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Request_Builder_defaultContentType(lean_object* v_builder_847_, lean_object* v_value_848_){
_start:
{
lean_object* v_line_849_; lean_object* v_extensions_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_869_; 
v_line_849_ = lean_ctor_get(v_builder_847_, 0);
v_extensions_850_ = lean_ctor_get(v_builder_847_, 1);
v_isSharedCheck_869_ = !lean_is_exclusive(v_builder_847_);
if (v_isSharedCheck_869_ == 0)
{
v___x_852_ = v_builder_847_;
v_isShared_853_ = v_isSharedCheck_869_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_extensions_850_);
lean_inc(v_line_849_);
lean_dec(v_builder_847_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_869_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
uint8_t v_method_854_; uint8_t v_version_855_; lean_object* v_uri_856_; lean_object* v_headers_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_868_; 
v_method_854_ = lean_ctor_get_uint8(v_line_849_, sizeof(void*)*2);
v_version_855_ = lean_ctor_get_uint8(v_line_849_, sizeof(void*)*2 + 1);
v_uri_856_ = lean_ctor_get(v_line_849_, 0);
v_headers_857_ = lean_ctor_get(v_line_849_, 1);
v_isSharedCheck_868_ = !lean_is_exclusive(v_line_849_);
if (v_isSharedCheck_868_ == 0)
{
v___x_859_ = v_line_849_;
v_isShared_860_ = v_isSharedCheck_868_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_headers_857_);
lean_inc(v_uri_856_);
lean_dec(v_line_849_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_868_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_861_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType(v_headers_857_, v_value_848_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 1, v___x_861_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_uri_856_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v___x_861_);
lean_ctor_set_uint8(v_reuseFailAlloc_867_, sizeof(void*)*2, v_method_854_);
lean_ctor_set_uint8(v_reuseFailAlloc_867_, sizeof(void*)*2 + 1, v_version_855_);
v___x_863_ = v_reuseFailAlloc_867_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_865_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_863_);
v___x_865_ = v___x_852_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_863_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_extensions_850_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes___lam__0(lean_object* v_builder_870_, lean_object* v_x_871_){
_start:
{
if (lean_obj_tag(v_x_871_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_881_; 
v_a_873_ = lean_ctor_get(v_x_871_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_881_ == 0)
{
v___x_875_ = v_x_871_;
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v_x_871_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_881_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_880_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; 
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_891_; 
v_a_882_ = lean_ctor_get(v_x_871_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_891_ == 0)
{
v___x_884_ = v_x_871_;
v_isShared_885_ = v_isSharedCheck_891_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v_x_871_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_891_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_886_ = l_Std_Http_Request_Builder_body___redArg(v_builder_870_, v_a_882_);
if (v_isShared_885_ == 0)
{
lean_ctor_set(v___x_884_, 0, v___x_886_);
v___x_888_ = v___x_884_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_890_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_889_; 
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes___lam__0___boxed(lean_object* v_builder_892_, lean_object* v_x_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Std_Http_Request_Builder_fromBytes___lam__0(v_builder_892_, v_x_893_);
lean_dec_ref(v_builder_892_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes(lean_object* v_builder_896_, lean_object* v_content_897_){
_start:
{
lean_object* v___f_899_; lean_object* v___x_900_; uint8_t v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___f_899_ = lean_alloc_closure((void*)(l_Std_Http_Request_Builder_fromBytes___lam__0___boxed), 3, 1);
lean_closure_set(v___f_899_, 0, v_builder_896_);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = 0;
v___x_902_ = l_Std_Http_Body_Full_ofByteArray(v_content_897_);
v___x_903_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_900_, v___x_901_, v___x_902_, v___f_899_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_fromBytes___boxed(lean_object* v_builder_904_, lean_object* v_content_905_, lean_object* v_a_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Std_Http_Request_Builder_fromBytes(v_builder_904_, v_content_905_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_bytes(lean_object* v_builder_909_, lean_object* v_content_910_){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_912_ = ((lean_object*)(l_Std_Http_Request_Builder_bytes___closed__0));
v___x_913_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Request_Builder_defaultContentType(v_builder_909_, v___x_912_);
v___x_914_ = l_Std_Http_Request_Builder_fromBytes(v___x_913_, v_content_910_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_bytes___boxed(lean_object* v_builder_915_, lean_object* v_content_916_, lean_object* v_a_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Std_Http_Request_Builder_bytes(v_builder_915_, v_content_916_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_text(lean_object* v_builder_920_, lean_object* v_content_921_){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_923_ = ((lean_object*)(l_Std_Http_Request_Builder_text___closed__0));
v___x_924_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Request_Builder_defaultContentType(v_builder_920_, v___x_923_);
v___x_925_ = lean_string_to_utf8(v_content_921_);
v___x_926_ = l_Std_Http_Request_Builder_fromBytes(v___x_924_, v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_text___boxed(lean_object* v_builder_927_, lean_object* v_content_928_, lean_object* v_a_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Std_Http_Request_Builder_text(v_builder_927_, v_content_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_json(lean_object* v_builder_932_, lean_object* v_content_933_){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_935_ = ((lean_object*)(l_Std_Http_Request_Builder_json___closed__0));
v___x_936_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Request_Builder_defaultContentType(v_builder_932_, v___x_935_);
v___x_937_ = lean_string_to_utf8(v_content_933_);
v___x_938_ = l_Std_Http_Request_Builder_fromBytes(v___x_936_, v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_json___boxed(lean_object* v_builder_939_, lean_object* v_content_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Std_Http_Request_Builder_json(v_builder_939_, v_content_940_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_html(lean_object* v_builder_944_, lean_object* v_content_945_){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_947_ = ((lean_object*)(l_Std_Http_Request_Builder_html___closed__0));
v___x_948_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Request_Builder_defaultContentType(v_builder_944_, v___x_947_);
v___x_949_ = lean_string_to_utf8(v_content_945_);
v___x_950_ = l_Std_Http_Request_Builder_fromBytes(v___x_948_, v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_html___boxed(lean_object* v_builder_951_, lean_object* v_content_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Std_Http_Request_Builder_html(v_builder_951_, v_content_952_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Full_0__Std_Http_Response_Builder_defaultContentType(lean_object* v_builder_955_, lean_object* v_value_956_){
_start:
{
lean_object* v_line_957_; lean_object* v_extensions_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_976_; 
v_line_957_ = lean_ctor_get(v_builder_955_, 0);
v_extensions_958_ = lean_ctor_get(v_builder_955_, 1);
v_isSharedCheck_976_ = !lean_is_exclusive(v_builder_955_);
if (v_isSharedCheck_976_ == 0)
{
v___x_960_ = v_builder_955_;
v_isShared_961_ = v_isSharedCheck_976_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_extensions_958_);
lean_inc(v_line_957_);
lean_dec(v_builder_955_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_976_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v_status_962_; uint8_t v_version_963_; lean_object* v_headers_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_975_; 
v_status_962_ = lean_ctor_get(v_line_957_, 0);
v_version_963_ = lean_ctor_get_uint8(v_line_957_, sizeof(void*)*2);
v_headers_964_ = lean_ctor_get(v_line_957_, 1);
v_isSharedCheck_975_ = !lean_is_exclusive(v_line_957_);
if (v_isSharedCheck_975_ == 0)
{
v___x_966_ = v_line_957_;
v_isShared_967_ = v_isSharedCheck_975_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_headers_964_);
lean_inc(v_status_962_);
lean_dec(v_line_957_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_975_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_968_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Headers_withDefaultContentType(v_headers_964_, v_value_956_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 1, v___x_968_);
v___x_970_ = v___x_966_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_status_962_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v___x_968_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, sizeof(void*)*2, v_version_963_);
v___x_970_ = v_reuseFailAlloc_974_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_object* v___x_972_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___x_970_);
v___x_972_ = v___x_960_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v_extensions_958_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes___lam__0(lean_object* v_builder_977_, lean_object* v_x_978_){
_start:
{
if (lean_obj_tag(v_x_978_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_988_; 
v_a_980_ = lean_ctor_get(v_x_978_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v_x_978_);
if (v_isSharedCheck_988_ == 0)
{
v___x_982_ = v_x_978_;
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v_x_978_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_988_;
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
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_987_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; 
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_998_; 
v_a_989_ = lean_ctor_get(v_x_978_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v_x_978_);
if (v_isSharedCheck_998_ == 0)
{
v___x_991_ = v_x_978_;
v_isShared_992_ = v_isSharedCheck_998_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v_x_978_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_998_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_995_; 
v___x_993_ = l_Std_Http_Response_Builder_body___redArg(v_builder_977_, v_a_989_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 0, v___x_993_);
v___x_995_ = v___x_991_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_997_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
lean_object* v___x_996_; 
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
return v___x_996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes___lam__0___boxed(lean_object* v_builder_999_, lean_object* v_x_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Std_Http_Response_Builder_fromBytes___lam__0(v_builder_999_, v_x_1000_);
lean_dec_ref(v_builder_999_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes(lean_object* v_builder_1003_, lean_object* v_content_1004_){
_start:
{
lean_object* v___f_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___f_1006_ = lean_alloc_closure((void*)(l_Std_Http_Response_Builder_fromBytes___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1006_, 0, v_builder_1003_);
v___x_1007_ = lean_unsigned_to_nat(0u);
v___x_1008_ = 0;
v___x_1009_ = l_Std_Http_Body_Full_ofByteArray(v_content_1004_);
v___x_1010_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1007_, v___x_1008_, v___x_1009_, v___f_1006_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_fromBytes___boxed(lean_object* v_builder_1011_, lean_object* v_content_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Std_Http_Response_Builder_fromBytes(v_builder_1011_, v_content_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_bytes(lean_object* v_builder_1015_, lean_object* v_content_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = ((lean_object*)(l_Std_Http_Request_Builder_bytes___closed__0));
v___x_1019_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Response_Builder_defaultContentType(v_builder_1015_, v___x_1018_);
v___x_1020_ = l_Std_Http_Response_Builder_fromBytes(v___x_1019_, v_content_1016_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_bytes___boxed(lean_object* v_builder_1021_, lean_object* v_content_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Std_Http_Response_Builder_bytes(v_builder_1021_, v_content_1022_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_text(lean_object* v_builder_1025_, lean_object* v_content_1026_){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1028_ = ((lean_object*)(l_Std_Http_Request_Builder_text___closed__0));
v___x_1029_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Response_Builder_defaultContentType(v_builder_1025_, v___x_1028_);
v___x_1030_ = lean_string_to_utf8(v_content_1026_);
v___x_1031_ = l_Std_Http_Response_Builder_fromBytes(v___x_1029_, v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_text___boxed(lean_object* v_builder_1032_, lean_object* v_content_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Std_Http_Response_Builder_text(v_builder_1032_, v_content_1033_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_json(lean_object* v_builder_1036_, lean_object* v_content_1037_){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1039_ = ((lean_object*)(l_Std_Http_Request_Builder_json___closed__0));
v___x_1040_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Response_Builder_defaultContentType(v_builder_1036_, v___x_1039_);
v___x_1041_ = lean_string_to_utf8(v_content_1037_);
v___x_1042_ = l_Std_Http_Response_Builder_fromBytes(v___x_1040_, v___x_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_json___boxed(lean_object* v_builder_1043_, lean_object* v_content_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Std_Http_Response_Builder_json(v_builder_1043_, v_content_1044_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_html(lean_object* v_builder_1047_, lean_object* v_content_1048_){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1050_ = ((lean_object*)(l_Std_Http_Request_Builder_html___closed__0));
v___x_1051_ = l___private_Std_Http_Data_Body_Full_0__Std_Http_Response_Builder_defaultContentType(v_builder_1047_, v___x_1050_);
v___x_1052_ = lean_string_to_utf8(v_content_1048_);
v___x_1053_ = l_Std_Http_Response_Builder_fromBytes(v___x_1051_, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_html___boxed(lean_object* v_builder_1054_, lean_object* v_content_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Std_Http_Response_Builder_html(v_builder_1054_, v_content_1055_);
return v_res_1057_;
}
}
lean_object* runtime_initialize_Std_Sync(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Body_Full(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ByteArray_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Body_Full(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Sync(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Body_Full(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Full(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Body_Full(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Body_Full(builtin);
}
#ifdef __cplusplus
}
#endif
