// Lean compiler output
// Module: Std.Http.Data.Body.Stream
// Imports: public import Std.Sync public import Std.Async public import Std.Http.Data.Request public import Std.Http.Data.Response public import Std.Http.Data.Chunk public import Std.Http.Data.Body.Basic public import Std.Http.Data.Body.Any public import Init.Data.ByteArray.Basic
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
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* l_Std_Async_EAsync_tryFinally_x27___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Response_Builder_body___redArg(lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
lean_object* l_IO_Promise_resolve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Any_ofBody___redArg(lean_object*, lean_object*);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_Http_Chunk_ofByteArray(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Http"};
static const lean_object* l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Body"};
static const lean_object* l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_string_object l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Stream"};
static const lean_object* l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Body_instImpl___closed__0_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_0),((lean_object*)&l_Std_Http_Body_instImpl___closed__1_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(62, 74, 245, 198, 196, 207, 141, 173)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_1),((lean_object*)&l_Std_Http_Body_instImpl___closed__2_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(80, 237, 62, 34, 135, 9, 103, 192)}};
static const lean_ctor_object l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value_aux_2),((lean_object*)&l_Std_Http_Body_instImpl___closed__3_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value),LEAN_SCALAR_PTR_LITERAL(35, 197, 133, 196, 74, 182, 137, 145)}};
static const lean_object* l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instImpl_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19_ = (const lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instTypeNameStream = (const lean_object*)&l_Std_Http_Body_instImpl___closed__4_00___x40_Std_Http_Data_Body_Stream_2871211244____hygCtx___hyg_19__value;
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_mkStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_mkStream___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_mkStream___closed__0 = (const lean_object*)&l_Std_Http_Body_mkStream___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_mkStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 8, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_Body_mkStream___closed__1 = (const lean_object*)&l_Std_Http_Body_mkStream___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream();
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_tryRecv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_tryRecv___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_tryRecv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecv___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_tryRecv___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecv___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_tryRecvBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_tryRecvBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_tryRecvBody___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_tryRecvBody___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "the promise linked to the consumer was dropped"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "only one blocked consumer is allowed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2_value;
static lean_once_cell_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3;
static lean_once_cell_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__0_value)} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_recv___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recv___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_close___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_close___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_closeIfAbandoned___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_closeIfAbandoned___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_isClosed___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__0_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__1;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__2;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__4 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__5 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__5_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__6;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__7 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__7_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__8 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__8_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__4_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__8_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__9 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__9_value;
static const lean_closure_object l_Std_Http_Body_Stream_isClosed___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__9_value),((lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__3_value)} };
static const lean_object* l_Std_Http_Body_Stream_isClosed___closed__10 = (const lean_object*)&l_Std_Http_Body_Stream_isClosed___closed__10_value;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__11;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__12;
static lean_once_cell_t l_Std_Http_Body_Stream_isClosed___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_isClosed___closed__13;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_getKnownSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_getKnownSize___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_getKnownSize___closed__0_value;
static lean_once_cell_t l_Std_Http_Body_Stream_getKnownSize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Body_Stream_getKnownSize___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recvSelector___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_recvSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_recvSelector___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_recvSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_forIn_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn_x27___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_forIn_x27___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_forIn_x27___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn_x27___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_forIn_x27___redArg___closed__1_value;
static const lean_closure_object l_Std_Http_Body_Stream_forIn_x27___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn_x27___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_forIn_x27___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkAsync___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_Stream_instNextChunkAsync = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_forIn_x27___redArg___closed__0_value),((lean_object*)&l_Std_Http_Body_Stream_forIn_x27___redArg___closed__1_value),((lean_object*)&l_Std_Http_Body_Stream_forIn_x27___redArg___closed__2_value)} };
static const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync = (const lean_object*)&l_Std_Http_Body_Stream_instNextChunkContextAsync___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "body exceeded maximum size of "};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " bytes"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "channel closed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "only one blocked producer is allowed"};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__3 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__3_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__3_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__4 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__5 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__5_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__5_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__6 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__6_value)}};
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__7 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1_value)} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_hasInterest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_hasInterest___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_hasInterest___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_hasInterest___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__2_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__4_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__5_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "only one blocked interest selector is allowed"};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__0_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__1_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value;
static const lean_ctor_object l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__2_value)}};
static const lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_Stream_interestSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_interestSelector___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_Stream_interestSelector___closed__0 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__0_value;
static const lean_closure_object l_Std_Http_Body_Stream_interestSelector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_interestSelector___lam__6___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__0_value)} };
static const lean_object* l_Std_Http_Body_Stream_interestSelector___closed__1 = (const lean_object*)&l_Std_Http_Body_Stream_interestSelector___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_stream___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_stream___lam__6___closed__0 = (const lean_object*)&l_Std_Http_Body_stream___lam__6___closed__0_value;
static const lean_closure_object l_Std_Http_Body_stream___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_stream___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_stream___lam__6___closed__0_value)} };
static const lean_object* l_Std_Http_Body_stream___lam__6___closed__1 = (const lean_object*)&l_Std_Http_Body_stream___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Body_empty___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__0_value;
static const lean_ctor_object l_Std_Http_Body_empty___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Body_empty___lam__2___closed__0_value)}};
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__1 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__1_value;
static const lean_closure_object l_Std_Http_Body_empty___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_stream___lam__5___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_empty___lam__2___closed__1_value)} };
static const lean_object* l_Std_Http_Body_empty___lam__2___closed__2 = (const lean_object*)&l_Std_Http_Body_empty___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_empty___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_empty___closed__0 = (const lean_object*)&l_Std_Http_Body_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_empty();
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___boxed(lean_object*);
static const lean_closure_object l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instForInAsyncStreamChunk___closed__0 = (const lean_object*)&l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instForInAsyncStreamChunk = (const lean_object*)&l_Std_Http_Body_instForInAsyncStreamChunk___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_forIn_x27___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0 = (const lean_object*)&l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instForInContextAsyncStreamChunk = (const lean_object*)&l_Std_Http_Body_instForInContextAsyncStreamChunk___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_close___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__0 = (const lean_object*)&l_Std_Http_Body_instStream___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_isClosed___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__1 = (const lean_object*)&l_Std_Http_Body_instStream___closed__1_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_recvSelector, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__2 = (const lean_object*)&l_Std_Http_Body_instStream___closed__2_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_tryRecvBody___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__3 = (const lean_object*)&l_Std_Http_Body_instStream___closed__3_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_getKnownSize___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__4 = (const lean_object*)&l_Std_Http_Body_instStream___closed__4_value;
static const lean_closure_object l_Std_Http_Body_instStream___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Stream_setKnownSize___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Body_instStream___closed__5 = (const lean_object*)&l_Std_Http_Body_instStream___closed__5_value;
static const lean_ctor_object l_Std_Http_Body_instStream___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Body_Stream_instNextChunkAsync___closed__0_value),((lean_object*)&l_Std_Http_Body_instStream___closed__0_value),((lean_object*)&l_Std_Http_Body_instStream___closed__1_value),((lean_object*)&l_Std_Http_Body_instStream___closed__2_value),((lean_object*)&l_Std_Http_Body_instStream___closed__3_value),((lean_object*)&l_Std_Http_Body_instStream___closed__4_value),((lean_object*)&l_Std_Http_Body_instStream___closed__5_value)}};
static const lean_object* l_Std_Http_Body_instStream___closed__6 = (const lean_object*)&l_Std_Http_Body_instStream___closed__6_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instStream = (const lean_object*)&l_Std_Http_Body_instStream___closed__6_value;
static const lean_closure_object l_Std_Http_Body_instCoeStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_Any_ofBody, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeStreamAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeStreamAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseStreamAny___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeResponseStreamAny___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeResponseStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeResponseStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeResponseStreamAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instStream___closed__6_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value;
static const lean_closure_object l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1 = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny = (const lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___closed__0_value)} };
static const lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0 = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny = (const lean_object*)&l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_promise_7_; lean_object* v___x_8_; 
v_promise_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_promise_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_promise_7_);
return v___x_8_;
}
else
{
lean_object* v_finished_9_; lean_object* v___x_10_; 
v_finished_9_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_finished_9_);
lean_dec_ref_known(v_t_5_, 1);
v___x_10_ = lean_apply_1(v_k_6_, v_finished_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim___redArg(lean_object* v_t_23_, lean_object* v_normal_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_23_, v_normal_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_normal_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_normal_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_27_, v_normal_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim___redArg(lean_object* v_t_31_, lean_object* v_select_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_31_, v_select_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_select_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_select_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_ctorElim___redArg(v_t_35_, v_select_37_);
return v___x_38_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(lean_object* v_x_39_, lean_object* v_w_40_, lean_object* v_lose_41_){
_start:
{
lean_object* v_finished_43_; lean_object* v_promise_44_; lean_object* v___x_45_; uint8_t v___y_47_; uint8_t v___x_54_; 
v_finished_43_ = lean_ctor_get(v_w_40_, 0);
v_promise_44_ = lean_ctor_get(v_w_40_, 1);
v___x_45_ = lean_st_ref_take(v_finished_43_);
v___x_54_ = lean_unbox(v___x_45_);
lean_dec(v___x_45_);
if (v___x_54_ == 0)
{
uint8_t v___x_55_; 
v___x_55_ = 1;
v___y_47_ = v___x_55_;
goto v___jp_46_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = 0;
v___y_47_ = v___x_56_;
goto v___jp_46_;
}
v___jp_46_:
{
uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_48_ = 1;
v___x_49_ = lean_box(v___x_48_);
v___x_50_ = lean_st_ref_put(v_finished_43_, v___x_49_);
if (v___y_47_ == 0)
{
lean_object* v___x_51_; uint8_t v___x_52_; 
lean_dec_ref(v_x_39_);
v___x_51_ = lean_apply_1(v_lose_41_, lean_box(0));
v___x_52_ = lean_unbox(v___x_51_);
return v___x_52_;
}
else
{
lean_object* v___x_53_; 
lean_dec_ref(v_lose_41_);
v___x_53_ = lean_io_promise_resolve(v_x_39_, v_promise_44_);
return v___y_47_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0___boxed(lean_object* v_x_57_, lean_object* v_w_58_, lean_object* v_lose_59_, lean_object* v___y_60_){
_start:
{
uint8_t v_res_61_; lean_object* v_r_62_; 
v_res_61_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(v_x_57_, v_w_58_, v_lose_59_);
lean_dec_ref(v_w_58_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(uint8_t v___x_63_){
_start:
{
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0___boxed(lean_object* v___x_65_, lean_object* v___y_66_){
_start:
{
uint8_t v___x_312__boxed_67_; uint8_t v_res_68_; lean_object* v_r_69_; 
v___x_312__boxed_67_ = lean_unbox(v___x_65_);
v_res_68_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___lam__0(v___x_312__boxed_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(lean_object* v_c_73_, lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_c_73_) == 0)
{
lean_object* v_promise_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v_promise_76_ = lean_ctor_get(v_c_73_, 0);
v___x_77_ = lean_io_promise_resolve(v_x_74_, v_promise_76_);
v___x_78_ = 1;
return v___x_78_;
}
else
{
lean_object* v_finished_79_; lean_object* v_lose_80_; uint8_t v___x_81_; 
v_finished_79_ = lean_ctor_get(v_c_73_, 0);
v_lose_80_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0));
v___x_81_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve_spec__0(v_x_74_, v_finished_79_, v_lose_80_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed(lean_object* v_c_82_, lean_object* v_x_83_, lean_object* v_a_84_){
_start:
{
uint8_t v_res_85_; lean_object* v_r_86_; 
v_res_85_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_c_82_, v_x_83_);
lean_dec_ref(v_c_82_);
v_r_86_ = lean_box(v_res_85_);
return v_r_86_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(uint8_t v_x_87_, lean_object* v_w_88_, lean_object* v_lose_89_){
_start:
{
lean_object* v_finished_91_; lean_object* v_promise_92_; lean_object* v___x_93_; uint8_t v___y_95_; uint8_t v___x_104_; 
v_finished_91_ = lean_ctor_get(v_w_88_, 0);
v_promise_92_ = lean_ctor_get(v_w_88_, 1);
v___x_93_ = lean_st_ref_take(v_finished_91_);
v___x_104_ = lean_unbox(v___x_93_);
lean_dec(v___x_93_);
if (v___x_104_ == 0)
{
uint8_t v___x_105_; 
v___x_105_ = 1;
v___y_95_ = v___x_105_;
goto v___jp_94_;
}
else
{
uint8_t v___x_106_; 
v___x_106_ = 0;
v___y_95_ = v___x_106_;
goto v___jp_94_;
}
v___jp_94_:
{
uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = 1;
v___x_97_ = lean_box(v___x_96_);
v___x_98_ = lean_st_ref_put(v_finished_91_, v___x_97_);
if (v___y_95_ == 0)
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_apply_1(v_lose_89_, lean_box(0));
v___x_100_ = lean_unbox(v___x_99_);
return v___x_100_;
}
else
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
lean_dec_ref(v_lose_89_);
v___x_101_ = lean_box(v_x_87_);
v___x_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
v___x_103_ = lean_io_promise_resolve(v___x_102_, v_promise_92_);
return v___y_95_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0___boxed(lean_object* v_x_107_, lean_object* v_w_108_, lean_object* v_lose_109_, lean_object* v___y_110_){
_start:
{
uint8_t v_x_boxed_111_; uint8_t v_res_112_; lean_object* v_r_113_; 
v_x_boxed_111_ = lean_unbox(v_x_107_);
v_res_112_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(v_x_boxed_111_, v_w_108_, v_lose_109_);
lean_dec_ref(v_w_108_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(lean_object* v_waiter_114_, uint8_t v_x_115_){
_start:
{
lean_object* v_lose_117_; uint8_t v___x_118_; 
v_lose_117_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___closed__0));
v___x_118_ = l_Std_Async_Waiter_race___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter_spec__0(v_x_115_, v_waiter_114_, v_lose_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed(lean_object* v_waiter_119_, lean_object* v_x_120_, lean_object* v_a_121_){
_start:
{
uint8_t v_x_boxed_122_; uint8_t v_res_123_; lean_object* v_r_124_; 
v_x_boxed_122_ = lean_unbox(v_x_120_);
v_res_123_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_waiter_119_, v_x_boxed_122_);
lean_dec_ref(v_waiter_119_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0(lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_136_) == 0)
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_146_; 
v_a_138_ = lean_ctor_get(v_x_136_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v_x_136_);
if (v_isSharedCheck_146_ == 0)
{
v___x_140_ = v_x_136_;
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v_x_136_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_145_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; 
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_a_147_ = lean_ctor_get(v_x_136_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v_x_136_);
if (v_isSharedCheck_155_ == 0)
{
v___x_149_ = v_x_136_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v_x_136_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_154_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___lam__0___boxed(lean_object* v_x_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Std_Http_Body_mkStream___lam__0(v_x_156_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream(){
_start:
{
lean_object* v___f_164_; uint8_t v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___f_164_ = ((lean_object*)(l_Std_Http_Body_mkStream___closed__0));
v___x_165_ = 0;
v___x_166_ = ((lean_object*)(l_Std_Http_Body_mkStream___closed__1));
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = l_Std_Mutex_new___redArg(v___x_166_);
v___x_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
v___x_171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_167_, v___x_165_, v___x_170_, v___f_164_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_mkStream___boxed(lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Std_Http_Body_mkStream();
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(lean_object* v_knownSize_174_, lean_object* v_chunk_175_){
_start:
{
if (lean_obj_tag(v_knownSize_174_) == 1)
{
lean_object* v_val_176_; 
v_val_176_ = lean_ctor_get(v_knownSize_174_, 0);
lean_inc(v_val_176_);
if (lean_obj_tag(v_val_176_) == 1)
{
lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_194_; 
v_isSharedCheck_194_ = !lean_is_exclusive(v_knownSize_174_);
if (v_isSharedCheck_194_ == 0)
{
lean_object* v_unused_195_; 
v_unused_195_ = lean_ctor_get(v_knownSize_174_, 0);
lean_dec(v_unused_195_);
v___x_178_ = v_knownSize_174_;
v_isShared_179_ = v_isSharedCheck_194_;
goto v_resetjp_177_;
}
else
{
lean_dec(v_knownSize_174_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_194_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_n_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_193_; 
v_n_180_ = lean_ctor_get(v_val_176_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v_val_176_);
if (v_isSharedCheck_193_ == 0)
{
v___x_182_ = v_val_176_;
v_isShared_183_ = v_isSharedCheck_193_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_n_180_);
lean_dec(v_val_176_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_193_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v_data_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v_data_184_ = lean_ctor_get(v_chunk_175_, 0);
v___x_185_ = lean_byte_array_size(v_data_184_);
v___x_186_ = lean_nat_sub(v_n_180_, v___x_185_);
lean_dec(v_n_180_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_186_);
v___x_188_ = v___x_182_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_192_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_190_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_188_);
v___x_190_ = v___x_178_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_188_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
}
else
{
lean_dec(v_val_176_);
return v_knownSize_174_;
}
}
else
{
return v_knownSize_174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize___boxed(lean_object* v_knownSize_196_, lean_object* v_chunk_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_196_, v_chunk_197_);
lean_dec_ref(v_chunk_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(lean_object* v_pendingProducer_199_, lean_object* v_pendingConsumer_200_, uint8_t v_closed_201_, lean_object* v_knownSize_202_, lean_object* v_pendingIncompleteChunk_203_, lean_object* v_closeError_204_, lean_object* v_inst_205_, lean_object* v_interestWaiter_206_, lean_object* v___y_207_){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_208_, 0, v_pendingProducer_199_);
lean_ctor_set(v___x_208_, 1, v_pendingConsumer_200_);
lean_ctor_set(v___x_208_, 2, v_interestWaiter_206_);
lean_ctor_set(v___x_208_, 3, v_knownSize_202_);
lean_ctor_set(v___x_208_, 4, v_pendingIncompleteChunk_203_);
lean_ctor_set(v___x_208_, 5, v_closeError_204_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*6, v_closed_201_);
lean_inc(v___y_207_);
v___x_209_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_209_, 0, lean_box(0));
lean_closure_set(v___x_209_, 1, lean_box(0));
lean_closure_set(v___x_209_, 2, v___y_207_);
lean_closure_set(v___x_209_, 3, v___x_208_);
v___x_210_ = lean_apply_2(v_inst_205_, lean_box(0), v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed(lean_object* v_pendingProducer_211_, lean_object* v_pendingConsumer_212_, lean_object* v_closed_213_, lean_object* v_knownSize_214_, lean_object* v_pendingIncompleteChunk_215_, lean_object* v_closeError_216_, lean_object* v_inst_217_, lean_object* v_interestWaiter_218_, lean_object* v___y_219_){
_start:
{
uint8_t v_closed_boxed_220_; lean_object* v_res_221_; 
v_closed_boxed_220_ = lean_unbox(v_closed_213_);
v_res_221_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0(v_pendingProducer_211_, v_pendingConsumer_212_, v_closed_boxed_220_, v_knownSize_214_, v_pendingIncompleteChunk_215_, v_closeError_216_, v_inst_217_, v_interestWaiter_218_, v___y_219_);
lean_dec(v___y_219_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(lean_object* v___f_222_, lean_object* v___y_223_, lean_object* v_a_224_){
_start:
{
lean_object* v___x_225_; 
lean_inc(v___y_223_);
v___x_225_ = lean_apply_2(v___f_222_, v_a_224_, v___y_223_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed(lean_object* v___f_226_, lean_object* v___y_227_, lean_object* v_a_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1(v___f_226_, v___y_227_, v_a_228_);
lean_dec(v___y_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(lean_object* v_toApplicative_230_, lean_object* v_interestWaiter_231_, lean_object* v_toBind_232_, lean_object* v___f_233_, lean_object* v___f_234_, uint8_t v_a_235_){
_start:
{
if (v_a_235_ == 0)
{
lean_object* v_toPure_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec(v___f_234_);
v_toPure_236_ = lean_ctor_get(v_toApplicative_230_, 1);
lean_inc(v_toPure_236_);
lean_dec_ref(v_toApplicative_230_);
v___x_237_ = lean_apply_2(v_toPure_236_, lean_box(0), v_interestWaiter_231_);
v___x_238_ = lean_apply_4(v_toBind_232_, lean_box(0), lean_box(0), v___x_237_, v___f_233_);
return v___x_238_;
}
else
{
lean_object* v_toPure_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec(v___f_233_);
lean_dec(v_interestWaiter_231_);
v_toPure_239_ = lean_ctor_get(v_toApplicative_230_, 1);
lean_inc(v_toPure_239_);
lean_dec_ref(v_toApplicative_230_);
v___x_240_ = lean_box(0);
v___x_241_ = lean_apply_2(v_toPure_239_, lean_box(0), v___x_240_);
v___x_242_ = lean_apply_4(v_toBind_232_, lean_box(0), lean_box(0), v___x_241_, v___f_234_);
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed(lean_object* v_toApplicative_243_, lean_object* v_interestWaiter_244_, lean_object* v_toBind_245_, lean_object* v___f_246_, lean_object* v___f_247_, lean_object* v_a_248_){
_start:
{
uint8_t v_a_boxed_249_; lean_object* v_res_250_; 
v_a_boxed_249_ = lean_unbox(v_a_248_);
v_res_250_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4(v_toApplicative_243_, v_interestWaiter_244_, v_toBind_245_, v___f_246_, v___f_247_, v_a_boxed_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(lean_object* v_pendingProducer_251_, uint8_t v_closed_252_, lean_object* v_knownSize_253_, lean_object* v_pendingIncompleteChunk_254_, lean_object* v_closeError_255_, lean_object* v_inst_256_, lean_object* v_interestWaiter_257_, lean_object* v_toApplicative_258_, lean_object* v_toBind_259_, lean_object* v_pendingConsumer_260_, lean_object* v___y_261_){
_start:
{
lean_object* v___x_262_; lean_object* v___f_263_; 
v___x_262_ = lean_box(v_closed_252_);
lean_inc(v_inst_256_);
v___f_263_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__0___boxed), 9, 7);
lean_closure_set(v___f_263_, 0, v_pendingProducer_251_);
lean_closure_set(v___f_263_, 1, v_pendingConsumer_260_);
lean_closure_set(v___f_263_, 2, v___x_262_);
lean_closure_set(v___f_263_, 3, v_knownSize_253_);
lean_closure_set(v___f_263_, 4, v_pendingIncompleteChunk_254_);
lean_closure_set(v___f_263_, 5, v_closeError_255_);
lean_closure_set(v___f_263_, 6, v_inst_256_);
if (lean_obj_tag(v_interestWaiter_257_) == 0)
{
lean_object* v_toPure_264_; lean_object* v___f_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
lean_dec(v_inst_256_);
v_toPure_264_ = lean_ctor_get(v_toApplicative_258_, 1);
lean_inc(v_toPure_264_);
lean_dec_ref(v_toApplicative_258_);
lean_inc(v___y_261_);
v___f_265_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_265_, 0, v___f_263_);
lean_closure_set(v___f_265_, 1, v___y_261_);
v___x_266_ = lean_apply_2(v_toPure_264_, lean_box(0), v_interestWaiter_257_);
v___x_267_ = lean_apply_4(v_toBind_259_, lean_box(0), lean_box(0), v___x_266_, v___f_265_);
return v___x_267_;
}
else
{
lean_object* v_val_268_; lean_object* v_finished_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_val_268_ = lean_ctor_get(v_interestWaiter_257_, 0);
v_finished_269_ = lean_ctor_get(v_val_268_, 0);
lean_inc(v_finished_269_);
lean_inc(v___y_261_);
v___f_270_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_270_, 0, v___f_263_);
lean_closure_set(v___f_270_, 1, v___y_261_);
lean_inc_ref(v___f_270_);
lean_inc(v_toBind_259_);
v___f_271_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_271_, 0, v_toApplicative_258_);
lean_closure_set(v___f_271_, 1, v_interestWaiter_257_);
lean_closure_set(v___f_271_, 2, v_toBind_259_);
lean_closure_set(v___f_271_, 3, v___f_270_);
lean_closure_set(v___f_271_, 4, v___f_270_);
v___x_272_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_272_, 0, lean_box(0));
lean_closure_set(v___x_272_, 1, lean_box(0));
lean_closure_set(v___x_272_, 2, v_finished_269_);
v___x_273_ = lean_apply_2(v_inst_256_, lean_box(0), v___x_272_);
v___x_274_ = lean_apply_4(v_toBind_259_, lean_box(0), lean_box(0), v___x_273_, v___f_271_);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed(lean_object* v_pendingProducer_275_, lean_object* v_closed_276_, lean_object* v_knownSize_277_, lean_object* v_pendingIncompleteChunk_278_, lean_object* v_closeError_279_, lean_object* v_inst_280_, lean_object* v_interestWaiter_281_, lean_object* v_toApplicative_282_, lean_object* v_toBind_283_, lean_object* v_pendingConsumer_284_, lean_object* v___y_285_){
_start:
{
uint8_t v_closed_boxed_286_; lean_object* v_res_287_; 
v_closed_boxed_286_ = lean_unbox(v_closed_276_);
v_res_287_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2(v_pendingProducer_275_, v_closed_boxed_286_, v_knownSize_277_, v_pendingIncompleteChunk_278_, v_closeError_279_, v_inst_280_, v_interestWaiter_281_, v_toApplicative_282_, v_toBind_283_, v_pendingConsumer_284_, v___y_285_);
lean_dec(v___y_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(lean_object* v___f_288_, lean_object* v___y_289_, lean_object* v_a_290_){
_start:
{
lean_object* v___x_291_; 
lean_inc(v___y_289_);
v___x_291_ = lean_apply_2(v___f_288_, v_a_290_, v___y_289_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed(lean_object* v___f_292_, lean_object* v___y_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3(v___f_292_, v___y_293_, v_a_294_);
lean_dec(v___y_293_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(lean_object* v___f_296_, lean_object* v_a_297_, lean_object* v_a_298_){
_start:
{
lean_object* v___x_299_; 
lean_inc(v_a_297_);
v___x_299_ = lean_apply_2(v___f_296_, v_a_298_, v_a_297_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed(lean_object* v___f_300_, lean_object* v_a_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5(v___f_300_, v_a_301_, v_a_302_);
lean_dec(v_a_301_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(lean_object* v_toApplicative_304_, lean_object* v_pendingConsumer_305_, lean_object* v_toBind_306_, lean_object* v___f_307_, lean_object* v___f_308_, uint8_t v_a_309_){
_start:
{
if (v_a_309_ == 0)
{
lean_object* v_toPure_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
lean_dec(v___f_308_);
v_toPure_310_ = lean_ctor_get(v_toApplicative_304_, 1);
lean_inc(v_toPure_310_);
lean_dec_ref(v_toApplicative_304_);
v___x_311_ = lean_apply_2(v_toPure_310_, lean_box(0), v_pendingConsumer_305_);
v___x_312_ = lean_apply_4(v_toBind_306_, lean_box(0), lean_box(0), v___x_311_, v___f_307_);
return v___x_312_;
}
else
{
lean_object* v_toPure_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v___f_307_);
lean_dec(v_pendingConsumer_305_);
v_toPure_313_ = lean_ctor_get(v_toApplicative_304_, 1);
lean_inc(v_toPure_313_);
lean_dec_ref(v_toApplicative_304_);
v___x_314_ = lean_box(0);
v___x_315_ = lean_apply_2(v_toPure_313_, lean_box(0), v___x_314_);
v___x_316_ = lean_apply_4(v_toBind_306_, lean_box(0), lean_box(0), v___x_315_, v___f_308_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed(lean_object* v_toApplicative_317_, lean_object* v_pendingConsumer_318_, lean_object* v_toBind_319_, lean_object* v___f_320_, lean_object* v___f_321_, lean_object* v_a_322_){
_start:
{
uint8_t v_a_boxed_323_; lean_object* v_res_324_; 
v_a_boxed_323_ = lean_unbox(v_a_322_);
v_res_324_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7(v_toApplicative_317_, v_pendingConsumer_318_, v_toBind_319_, v___f_320_, v___f_321_, v_a_boxed_323_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6(lean_object* v_inst_325_, lean_object* v_toApplicative_326_, lean_object* v_toBind_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_pendingProducer_330_; lean_object* v_pendingConsumer_331_; lean_object* v_interestWaiter_332_; uint8_t v_closed_333_; lean_object* v_knownSize_334_; lean_object* v_pendingIncompleteChunk_335_; lean_object* v_closeError_336_; lean_object* v___x_337_; lean_object* v___f_338_; lean_object* v___y_340_; 
v_pendingProducer_330_ = lean_ctor_get(v_a_329_, 0);
lean_inc(v_pendingProducer_330_);
v_pendingConsumer_331_ = lean_ctor_get(v_a_329_, 1);
lean_inc(v_pendingConsumer_331_);
v_interestWaiter_332_ = lean_ctor_get(v_a_329_, 2);
lean_inc(v_interestWaiter_332_);
v_closed_333_ = lean_ctor_get_uint8(v_a_329_, sizeof(void*)*6);
v_knownSize_334_ = lean_ctor_get(v_a_329_, 3);
lean_inc(v_knownSize_334_);
v_pendingIncompleteChunk_335_ = lean_ctor_get(v_a_329_, 4);
lean_inc(v_pendingIncompleteChunk_335_);
v_closeError_336_ = lean_ctor_get(v_a_329_, 5);
lean_inc(v_closeError_336_);
lean_dec_ref(v_a_329_);
v___x_337_ = lean_box(v_closed_333_);
lean_inc(v_toBind_327_);
lean_inc_ref(v_toApplicative_326_);
lean_inc(v_inst_325_);
v___f_338_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__2___boxed), 11, 9);
lean_closure_set(v___f_338_, 0, v_pendingProducer_330_);
lean_closure_set(v___f_338_, 1, v___x_337_);
lean_closure_set(v___f_338_, 2, v_knownSize_334_);
lean_closure_set(v___f_338_, 3, v_pendingIncompleteChunk_335_);
lean_closure_set(v___f_338_, 4, v_closeError_336_);
lean_closure_set(v___f_338_, 5, v_inst_325_);
lean_closure_set(v___f_338_, 6, v_interestWaiter_332_);
lean_closure_set(v___f_338_, 7, v_toApplicative_326_);
lean_closure_set(v___f_338_, 8, v_toBind_327_);
if (lean_obj_tag(v_pendingConsumer_331_) == 1)
{
lean_object* v_val_345_; 
v_val_345_ = lean_ctor_get(v_pendingConsumer_331_, 0);
if (lean_obj_tag(v_val_345_) == 1)
{
lean_object* v_finished_346_; lean_object* v_finished_347_; lean_object* v___f_348_; lean_object* v___f_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_finished_346_ = lean_ctor_get(v_val_345_, 0);
v_finished_347_ = lean_ctor_get(v_finished_346_, 0);
lean_inc(v_finished_347_);
lean_inc(v_a_328_);
v___f_348_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__5___boxed), 3, 2);
lean_closure_set(v___f_348_, 0, v___f_338_);
lean_closure_set(v___f_348_, 1, v_a_328_);
lean_inc_ref(v___f_348_);
lean_inc(v_toBind_327_);
v___f_349_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_349_, 0, v_toApplicative_326_);
lean_closure_set(v___f_349_, 1, v_pendingConsumer_331_);
lean_closure_set(v___f_349_, 2, v_toBind_327_);
lean_closure_set(v___f_349_, 3, v___f_348_);
lean_closure_set(v___f_349_, 4, v___f_348_);
v___x_350_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_350_, 0, lean_box(0));
lean_closure_set(v___x_350_, 1, lean_box(0));
lean_closure_set(v___x_350_, 2, v_finished_347_);
v___x_351_ = lean_apply_2(v_inst_325_, lean_box(0), v___x_350_);
v___x_352_ = lean_apply_4(v_toBind_327_, lean_box(0), lean_box(0), v___x_351_, v___f_349_);
return v___x_352_;
}
else
{
lean_dec(v_inst_325_);
v___y_340_ = v_a_328_;
goto v___jp_339_;
}
}
else
{
lean_dec(v_inst_325_);
v___y_340_ = v_a_328_;
goto v___jp_339_;
}
v___jp_339_:
{
lean_object* v_toPure_341_; lean_object* v___f_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_toPure_341_ = lean_ctor_get(v_toApplicative_326_, 1);
lean_inc(v_toPure_341_);
lean_dec_ref(v_toApplicative_326_);
lean_inc(v___y_340_);
v___f_342_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_342_, 0, v___f_338_);
lean_closure_set(v___f_342_, 1, v___y_340_);
v___x_343_ = lean_apply_2(v_toPure_341_, lean_box(0), v_pendingConsumer_331_);
v___x_344_ = lean_apply_4(v_toBind_327_, lean_box(0), lean_box(0), v___x_343_, v___f_342_);
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6___boxed(lean_object* v_inst_353_, lean_object* v_toApplicative_354_, lean_object* v_toBind_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6(v_inst_353_, v_toApplicative_354_, v_toBind_355_, v_a_356_, v_a_357_);
lean_dec(v_a_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(lean_object* v_inst_359_, lean_object* v_inst_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_toApplicative_362_; lean_object* v_toBind_363_; lean_object* v___f_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_toApplicative_362_ = lean_ctor_get(v_inst_359_, 0);
lean_inc_ref(v_toApplicative_362_);
v_toBind_363_ = lean_ctor_get(v_inst_359_, 1);
lean_inc_n(v_toBind_363_, 2);
lean_dec_ref(v_inst_359_);
lean_inc_n(v_a_361_, 2);
lean_inc(v_inst_360_);
v___f_364_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___lam__6___boxed), 5, 4);
lean_closure_set(v___f_364_, 0, v_inst_360_);
lean_closure_set(v___f_364_, 1, v_toApplicative_362_);
lean_closure_set(v___f_364_, 2, v_toBind_363_);
lean_closure_set(v___f_364_, 3, v_a_361_);
v___x_365_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_365_, 0, lean_box(0));
lean_closure_set(v___x_365_, 1, lean_box(0));
lean_closure_set(v___x_365_, 2, v_a_361_);
v___x_366_ = lean_apply_2(v_inst_360_, lean_box(0), v___x_365_);
v___x_367_ = lean_apply_4(v_toBind_363_, lean_box(0), lean_box(0), v___x_366_, v___f_364_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg___boxed(lean_object* v_inst_368_, lean_object* v_inst_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(v_inst_368_, v_inst_369_, v_a_370_);
lean_dec(v_a_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(lean_object* v_m_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_a_375_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___redArg(v_inst_373_, v_inst_374_, v_a_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___boxed(lean_object* v_m_377_, lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters(v_m_377_, v_inst_378_, v_inst_379_, v_a_380_);
lean_dec(v_a_380_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(lean_object* v_pendingProducer_382_, lean_object* v_pendingConsumer_383_, uint8_t v_closed_384_, lean_object* v_knownSize_385_, lean_object* v_pendingIncompleteChunk_386_, lean_object* v_closeError_387_, lean_object* v_a_388_, lean_object* v_inst_389_, lean_object* v_a_390_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_391_ = lean_box(0);
v___x_392_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_392_, 0, v_pendingProducer_382_);
lean_ctor_set(v___x_392_, 1, v_pendingConsumer_383_);
lean_ctor_set(v___x_392_, 2, v___x_391_);
lean_ctor_set(v___x_392_, 3, v_knownSize_385_);
lean_ctor_set(v___x_392_, 4, v_pendingIncompleteChunk_386_);
lean_ctor_set(v___x_392_, 5, v_closeError_387_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*6, v_closed_384_);
lean_inc(v_a_388_);
v___x_393_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_393_, 0, lean_box(0));
lean_closure_set(v___x_393_, 1, lean_box(0));
lean_closure_set(v___x_393_, 2, v_a_388_);
lean_closure_set(v___x_393_, 3, v___x_392_);
v___x_394_ = lean_apply_2(v_inst_389_, lean_box(0), v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed(lean_object* v_pendingProducer_395_, lean_object* v_pendingConsumer_396_, lean_object* v_closed_397_, lean_object* v_knownSize_398_, lean_object* v_pendingIncompleteChunk_399_, lean_object* v_closeError_400_, lean_object* v_a_401_, lean_object* v_inst_402_, lean_object* v_a_403_){
_start:
{
uint8_t v_closed_boxed_404_; lean_object* v_res_405_; 
v_closed_boxed_404_ = lean_unbox(v_closed_397_);
v_res_405_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0(v_pendingProducer_395_, v_pendingConsumer_396_, v_closed_boxed_404_, v_knownSize_398_, v_pendingIncompleteChunk_399_, v_closeError_400_, v_a_401_, v_inst_402_, v_a_403_);
lean_dec(v_a_401_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(lean_object* v_toApplicative_406_, lean_object* v_a_407_, lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_toBind_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_interestWaiter_412_; 
v_interestWaiter_412_ = lean_ctor_get(v_a_411_, 2);
lean_inc(v_interestWaiter_412_);
if (lean_obj_tag(v_interestWaiter_412_) == 1)
{
lean_object* v_toFunctor_413_; lean_object* v_pendingProducer_414_; lean_object* v_pendingConsumer_415_; uint8_t v_closed_416_; lean_object* v_knownSize_417_; lean_object* v_pendingIncompleteChunk_418_; lean_object* v_closeError_419_; lean_object* v_val_420_; lean_object* v_mapConst_421_; lean_object* v___x_422_; lean_object* v___f_423_; uint8_t v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_toFunctor_413_ = lean_ctor_get(v_toApplicative_406_, 0);
lean_inc_ref(v_toFunctor_413_);
lean_dec_ref(v_toApplicative_406_);
v_pendingProducer_414_ = lean_ctor_get(v_a_411_, 0);
lean_inc(v_pendingProducer_414_);
v_pendingConsumer_415_ = lean_ctor_get(v_a_411_, 1);
lean_inc(v_pendingConsumer_415_);
v_closed_416_ = lean_ctor_get_uint8(v_a_411_, sizeof(void*)*6);
v_knownSize_417_ = lean_ctor_get(v_a_411_, 3);
lean_inc(v_knownSize_417_);
v_pendingIncompleteChunk_418_ = lean_ctor_get(v_a_411_, 4);
lean_inc(v_pendingIncompleteChunk_418_);
v_closeError_419_ = lean_ctor_get(v_a_411_, 5);
lean_inc(v_closeError_419_);
lean_dec_ref(v_a_411_);
v_val_420_ = lean_ctor_get(v_interestWaiter_412_, 0);
lean_inc(v_val_420_);
lean_dec_ref_known(v_interestWaiter_412_, 1);
v_mapConst_421_ = lean_ctor_get(v_toFunctor_413_, 1);
lean_inc(v_mapConst_421_);
lean_dec_ref(v_toFunctor_413_);
v___x_422_ = lean_box(v_closed_416_);
lean_inc(v_a_407_);
v___f_423_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_423_, 0, v_pendingProducer_414_);
lean_closure_set(v___f_423_, 1, v_pendingConsumer_415_);
lean_closure_set(v___f_423_, 2, v___x_422_);
lean_closure_set(v___f_423_, 3, v_knownSize_417_);
lean_closure_set(v___f_423_, 4, v_pendingIncompleteChunk_418_);
lean_closure_set(v___f_423_, 5, v_closeError_419_);
lean_closure_set(v___f_423_, 6, v_a_407_);
lean_closure_set(v___f_423_, 7, v_inst_408_);
v___x_424_ = 1;
v___x_425_ = lean_box(v___x_424_);
v___x_426_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed), 3, 2);
lean_closure_set(v___x_426_, 0, v_val_420_);
lean_closure_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_apply_2(v_inst_409_, lean_box(0), v___x_426_);
v___x_428_ = lean_box(0);
v___x_429_ = lean_apply_4(v_mapConst_421_, lean_box(0), lean_box(0), v___x_428_, v___x_427_);
v___x_430_ = lean_apply_4(v_toBind_410_, lean_box(0), lean_box(0), v___x_429_, v___f_423_);
return v___x_430_;
}
else
{
lean_object* v_toPure_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec(v_interestWaiter_412_);
lean_dec_ref(v_a_411_);
lean_dec(v_toBind_410_);
lean_dec(v_inst_409_);
lean_dec(v_inst_408_);
v_toPure_431_ = lean_ctor_get(v_toApplicative_406_, 1);
lean_inc(v_toPure_431_);
lean_dec_ref(v_toApplicative_406_);
v___x_432_ = lean_box(0);
v___x_433_ = lean_apply_2(v_toPure_431_, lean_box(0), v___x_432_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed(lean_object* v_toApplicative_434_, lean_object* v_a_435_, lean_object* v_inst_436_, lean_object* v_inst_437_, lean_object* v_toBind_438_, lean_object* v_a_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1(v_toApplicative_434_, v_a_435_, v_inst_436_, v_inst_437_, v_toBind_438_, v_a_439_);
lean_dec(v_a_435_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(lean_object* v_inst_441_, lean_object* v_inst_442_, lean_object* v_inst_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_toApplicative_445_; lean_object* v_toBind_446_; lean_object* v___f_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_toApplicative_445_ = lean_ctor_get(v_inst_441_, 0);
lean_inc_ref(v_toApplicative_445_);
v_toBind_446_ = lean_ctor_get(v_inst_441_, 1);
lean_inc_n(v_toBind_446_, 2);
lean_dec_ref(v_inst_441_);
lean_inc(v_inst_442_);
lean_inc_n(v_a_444_, 2);
v___f_447_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_447_, 0, v_toApplicative_445_);
lean_closure_set(v___f_447_, 1, v_a_444_);
lean_closure_set(v___f_447_, 2, v_inst_442_);
lean_closure_set(v___f_447_, 3, v_inst_443_);
lean_closure_set(v___f_447_, 4, v_toBind_446_);
v___x_448_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_448_, 0, lean_box(0));
lean_closure_set(v___x_448_, 1, lean_box(0));
lean_closure_set(v___x_448_, 2, v_a_444_);
v___x_449_ = lean_apply_2(v_inst_442_, lean_box(0), v___x_448_);
v___x_450_ = lean_apply_4(v_toBind_446_, lean_box(0), lean_box(0), v___x_449_, v___f_447_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg___boxed(lean_object* v_inst_451_, lean_object* v_inst_452_, lean_object* v_inst_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(v_inst_451_, v_inst_452_, v_inst_453_, v_a_454_);
lean_dec(v_a_454_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(lean_object* v_m_456_, lean_object* v_inst_457_, lean_object* v_inst_458_, lean_object* v_inst_459_, lean_object* v_a_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___redArg(v_inst_457_, v_inst_458_, v_inst_459_, v_a_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___boxed(lean_object* v_m_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest(v_m_462_, v_inst_463_, v_inst_464_, v_inst_465_, v_a_466_);
lean_dec(v_a_466_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(lean_object* v_toApplicative_468_, lean_object* v_a_469_){
_start:
{
uint8_t v___y_471_; lean_object* v_pendingProducer_475_; 
v_pendingProducer_475_ = lean_ctor_get(v_a_469_, 0);
if (lean_obj_tag(v_pendingProducer_475_) == 0)
{
uint8_t v_closed_476_; 
v_closed_476_ = lean_ctor_get_uint8(v_a_469_, sizeof(void*)*6);
v___y_471_ = v_closed_476_;
goto v___jp_470_;
}
else
{
uint8_t v___x_477_; 
v___x_477_ = 1;
v___y_471_ = v___x_477_;
goto v___jp_470_;
}
v___jp_470_:
{
lean_object* v_toPure_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_toPure_472_ = lean_ctor_get(v_toApplicative_468_, 1);
lean_inc(v_toPure_472_);
lean_dec_ref(v_toApplicative_468_);
v___x_473_ = lean_box(v___y_471_);
v___x_474_ = lean_apply_2(v_toPure_472_, lean_box(0), v___x_473_);
return v___x_474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0(v_toApplicative_478_, v_a_479_);
lean_dec_ref(v_a_479_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(lean_object* v_inst_481_, lean_object* v_inst_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_toApplicative_484_; lean_object* v_toBind_485_; lean_object* v___f_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v_toApplicative_484_ = lean_ctor_get(v_inst_481_, 0);
lean_inc_ref(v_toApplicative_484_);
v_toBind_485_ = lean_ctor_get(v_inst_481_, 1);
lean_inc(v_toBind_485_);
lean_dec_ref(v_inst_481_);
v___f_486_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_486_, 0, v_toApplicative_484_);
lean_inc(v_a_483_);
v___x_487_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_487_, 0, lean_box(0));
lean_closure_set(v___x_487_, 1, lean_box(0));
lean_closure_set(v___x_487_, 2, v_a_483_);
v___x_488_ = lean_apply_2(v_inst_482_, lean_box(0), v___x_487_);
v___x_489_ = lean_apply_4(v_toBind_485_, lean_box(0), lean_box(0), v___x_488_, v___f_486_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg___boxed(lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(v_inst_490_, v_inst_491_, v_a_492_);
lean_dec(v_a_492_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(lean_object* v_m_494_, lean_object* v_inst_495_, lean_object* v_inst_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___redArg(v_inst_495_, v_inst_496_, v_a_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___boxed(lean_object* v_m_499_, lean_object* v_inst_500_, lean_object* v_inst_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27(v_m_499_, v_inst_500_, v_inst_501_, v_a_502_);
lean_dec(v_a_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(lean_object* v_toApplicative_504_, lean_object* v_a_505_){
_start:
{
uint8_t v___y_507_; lean_object* v_pendingConsumer_511_; 
v_pendingConsumer_511_ = lean_ctor_get(v_a_505_, 1);
if (lean_obj_tag(v_pendingConsumer_511_) == 0)
{
uint8_t v___x_512_; 
v___x_512_ = 0;
v___y_507_ = v___x_512_;
goto v___jp_506_;
}
else
{
uint8_t v___x_513_; 
v___x_513_ = 1;
v___y_507_ = v___x_513_;
goto v___jp_506_;
}
v___jp_506_:
{
lean_object* v_toPure_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v_toPure_508_ = lean_ctor_get(v_toApplicative_504_, 1);
lean_inc(v_toPure_508_);
lean_dec_ref(v_toApplicative_504_);
v___x_509_ = lean_box(v___y_507_);
v___x_510_ = lean_apply_2(v_toPure_508_, lean_box(0), v___x_509_);
return v___x_510_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed(lean_object* v_toApplicative_514_, lean_object* v_a_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0(v_toApplicative_514_, v_a_515_);
lean_dec_ref(v_a_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(lean_object* v_inst_517_, lean_object* v_inst_518_, lean_object* v_a_519_){
_start:
{
lean_object* v_toApplicative_520_; lean_object* v_toBind_521_; lean_object* v___f_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v_toApplicative_520_ = lean_ctor_get(v_inst_517_, 0);
lean_inc_ref(v_toApplicative_520_);
v_toBind_521_ = lean_ctor_get(v_inst_517_, 1);
lean_inc(v_toBind_521_);
lean_dec_ref(v_inst_517_);
v___f_522_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_522_, 0, v_toApplicative_520_);
lean_inc(v_a_519_);
v___x_523_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_523_, 0, lean_box(0));
lean_closure_set(v___x_523_, 1, lean_box(0));
lean_closure_set(v___x_523_, 2, v_a_519_);
v___x_524_ = lean_apply_2(v_inst_518_, lean_box(0), v___x_523_);
v___x_525_ = lean_apply_4(v_toBind_521_, lean_box(0), lean_box(0), v___x_524_, v___f_522_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg___boxed(lean_object* v_inst_526_, lean_object* v_inst_527_, lean_object* v_a_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(v_inst_526_, v_inst_527_, v_a_528_);
lean_dec(v_a_528_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(lean_object* v_m_530_, lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_a_533_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___redArg(v_inst_531_, v_inst_532_, v_a_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___boxed(lean_object* v_m_535_, lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27(v_m_535_, v_inst_536_, v_inst_537_, v_a_538_);
lean_dec(v_a_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0(lean_object* v_toApplicative_540_, lean_object* v_chunk_541_, lean_object* v_a_542_){
_start:
{
lean_object* v_toPure_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_toPure_543_ = lean_ctor_get(v_toApplicative_540_, 1);
lean_inc(v_toPure_543_);
lean_dec_ref(v_toApplicative_540_);
v___x_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_544_, 0, v_chunk_541_);
v___x_545_ = lean_apply_2(v_toPure_543_, lean_box(0), v___x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1(lean_object* v_toApplicative_546_, lean_object* v_done_547_, lean_object* v_inst_548_, lean_object* v_toBind_549_, lean_object* v___f_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_toFunctor_552_; lean_object* v_mapConst_553_; uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_toFunctor_552_ = lean_ctor_get(v_toApplicative_546_, 0);
lean_inc_ref(v_toFunctor_552_);
lean_dec_ref(v_toApplicative_546_);
v_mapConst_553_ = lean_ctor_get(v_toFunctor_552_, 1);
lean_inc(v_mapConst_553_);
lean_dec_ref(v_toFunctor_552_);
v___x_554_ = 1;
v___x_555_ = lean_box(v___x_554_);
v___x_556_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_556_, 0, lean_box(0));
lean_closure_set(v___x_556_, 1, v___x_555_);
lean_closure_set(v___x_556_, 2, v_done_547_);
v___x_557_ = lean_apply_2(v_inst_548_, lean_box(0), v___x_556_);
v___x_558_ = lean_box(0);
v___x_559_ = lean_apply_4(v_mapConst_553_, lean_box(0), lean_box(0), v___x_558_, v___x_557_);
v___x_560_ = lean_apply_4(v_toBind_549_, lean_box(0), lean_box(0), v___x_559_, v___f_550_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(lean_object* v_toApplicative_561_, lean_object* v_inst_562_, lean_object* v_toBind_563_, lean_object* v_a_564_, lean_object* v_inst_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_pendingProducer_567_; 
v_pendingProducer_567_ = lean_ctor_get(v_a_566_, 0);
if (lean_obj_tag(v_pendingProducer_567_) == 1)
{
lean_object* v_val_568_; lean_object* v_pendingConsumer_569_; lean_object* v_interestWaiter_570_; uint8_t v_closed_571_; lean_object* v_knownSize_572_; lean_object* v_pendingIncompleteChunk_573_; lean_object* v_closeError_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_590_; 
v_val_568_ = lean_ctor_get(v_pendingProducer_567_, 0);
lean_inc(v_val_568_);
v_pendingConsumer_569_ = lean_ctor_get(v_a_566_, 1);
v_interestWaiter_570_ = lean_ctor_get(v_a_566_, 2);
v_closed_571_ = lean_ctor_get_uint8(v_a_566_, sizeof(void*)*6);
v_knownSize_572_ = lean_ctor_get(v_a_566_, 3);
v_pendingIncompleteChunk_573_ = lean_ctor_get(v_a_566_, 4);
v_closeError_574_ = lean_ctor_get(v_a_566_, 5);
v_isSharedCheck_590_ = !lean_is_exclusive(v_a_566_);
if (v_isSharedCheck_590_ == 0)
{
lean_object* v_unused_591_; 
v_unused_591_ = lean_ctor_get(v_a_566_, 0);
lean_dec(v_unused_591_);
v___x_576_ = v_a_566_;
v_isShared_577_ = v_isSharedCheck_590_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_closeError_574_);
lean_inc(v_pendingIncompleteChunk_573_);
lean_inc(v_knownSize_572_);
lean_inc(v_interestWaiter_570_);
lean_inc(v_pendingConsumer_569_);
lean_dec(v_a_566_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_590_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v_chunk_578_; lean_object* v_done_579_; lean_object* v___x_580_; lean_object* v___f_581_; lean_object* v___f_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v_chunk_578_ = lean_ctor_get(v_val_568_, 0);
lean_inc_ref_n(v_chunk_578_, 2);
v_done_579_ = lean_ctor_get(v_val_568_, 1);
lean_inc(v_done_579_);
lean_dec(v_val_568_);
v___x_580_ = lean_box(0);
lean_inc_ref(v_toApplicative_561_);
v___f_581_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__0), 3, 2);
lean_closure_set(v___f_581_, 0, v_toApplicative_561_);
lean_closure_set(v___f_581_, 1, v_chunk_578_);
lean_inc(v_toBind_563_);
v___f_582_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__1), 6, 5);
lean_closure_set(v___f_582_, 0, v_toApplicative_561_);
lean_closure_set(v___f_582_, 1, v_done_579_);
lean_closure_set(v___f_582_, 2, v_inst_562_);
lean_closure_set(v___f_582_, 3, v_toBind_563_);
lean_closure_set(v___f_582_, 4, v___f_581_);
v___x_583_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_572_, v_chunk_578_);
lean_dec_ref(v_chunk_578_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 3, v___x_583_);
lean_ctor_set(v___x_576_, 0, v___x_580_);
v___x_585_ = v___x_576_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_pendingConsumer_569_);
lean_ctor_set(v_reuseFailAlloc_589_, 2, v_interestWaiter_570_);
lean_ctor_set(v_reuseFailAlloc_589_, 3, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_589_, 4, v_pendingIncompleteChunk_573_);
lean_ctor_set(v_reuseFailAlloc_589_, 5, v_closeError_574_);
lean_ctor_set_uint8(v_reuseFailAlloc_589_, sizeof(void*)*6, v_closed_571_);
v___x_585_ = v_reuseFailAlloc_589_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_inc(v_a_564_);
v___x_586_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_586_, 0, lean_box(0));
lean_closure_set(v___x_586_, 1, lean_box(0));
lean_closure_set(v___x_586_, 2, v_a_564_);
lean_closure_set(v___x_586_, 3, v___x_585_);
v___x_587_ = lean_apply_2(v_inst_565_, lean_box(0), v___x_586_);
v___x_588_ = lean_apply_4(v_toBind_563_, lean_box(0), lean_box(0), v___x_587_, v___f_582_);
return v___x_588_;
}
}
}
else
{
lean_object* v_toPure_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec_ref(v_a_566_);
lean_dec(v_inst_565_);
lean_dec(v_toBind_563_);
lean_dec(v_inst_562_);
v_toPure_592_ = lean_ctor_get(v_toApplicative_561_, 1);
lean_inc(v_toPure_592_);
lean_dec_ref(v_toApplicative_561_);
v___x_593_ = lean_box(0);
v___x_594_ = lean_apply_2(v_toPure_592_, lean_box(0), v___x_593_);
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed(lean_object* v_toApplicative_595_, lean_object* v_inst_596_, lean_object* v_toBind_597_, lean_object* v_a_598_, lean_object* v_inst_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2(v_toApplicative_595_, v_inst_596_, v_toBind_597_, v_a_598_, v_inst_599_, v_a_600_);
lean_dec(v_a_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(lean_object* v_inst_602_, lean_object* v_inst_603_, lean_object* v_inst_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_toApplicative_606_; lean_object* v_toBind_607_; lean_object* v___f_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v_toApplicative_606_ = lean_ctor_get(v_inst_602_, 0);
lean_inc_ref(v_toApplicative_606_);
v_toBind_607_ = lean_ctor_get(v_inst_602_, 1);
lean_inc_n(v_toBind_607_, 2);
lean_dec_ref(v_inst_602_);
lean_inc(v_inst_603_);
lean_inc_n(v_a_605_, 2);
v___f_608_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_608_, 0, v_toApplicative_606_);
lean_closure_set(v___f_608_, 1, v_inst_604_);
lean_closure_set(v___f_608_, 2, v_toBind_607_);
lean_closure_set(v___f_608_, 3, v_a_605_);
lean_closure_set(v___f_608_, 4, v_inst_603_);
v___x_609_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_609_, 0, lean_box(0));
lean_closure_set(v___x_609_, 1, lean_box(0));
lean_closure_set(v___x_609_, 2, v_a_605_);
v___x_610_ = lean_apply_2(v_inst_603_, lean_box(0), v___x_609_);
v___x_611_ = lean_apply_4(v_toBind_607_, lean_box(0), lean_box(0), v___x_610_, v___f_608_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg___boxed(lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_inst_614_, lean_object* v_a_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_612_, v_inst_613_, v_inst_614_, v_a_615_);
lean_dec(v_a_615_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(lean_object* v_m_617_, lean_object* v_inst_618_, lean_object* v_inst_619_, lean_object* v_inst_620_, lean_object* v_a_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_618_, v_inst_619_, v_inst_620_, v_a_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___boxed(lean_object* v_m_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_inst_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27(v_m_623_, v_inst_624_, v_inst_625_, v_inst_626_, v_a_627_);
lean_dec(v_a_627_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0(lean_object* v_toApplicative_631_, lean_object* v_a_632_){
_start:
{
lean_object* v_closeError_633_; 
v_closeError_633_ = lean_ctor_get(v_a_632_, 5);
lean_inc(v_closeError_633_);
lean_dec_ref(v_a_632_);
if (lean_obj_tag(v_closeError_633_) == 1)
{
lean_object* v_val_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_643_; 
v_val_634_ = lean_ctor_get(v_closeError_633_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v_closeError_633_);
if (v_isSharedCheck_643_ == 0)
{
v___x_636_ = v_closeError_633_;
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_val_634_);
lean_dec(v_closeError_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v_toPure_638_; lean_object* v___x_640_; 
v_toPure_638_ = lean_ctor_get(v_toApplicative_631_, 1);
lean_inc(v_toPure_638_);
lean_dec_ref(v_toApplicative_631_);
if (v_isShared_637_ == 0)
{
lean_ctor_set_tag(v___x_636_, 0);
v___x_640_ = v___x_636_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_val_634_);
v___x_640_ = v_reuseFailAlloc_642_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; 
v___x_641_ = lean_apply_2(v_toPure_638_, lean_box(0), v___x_640_);
return v___x_641_;
}
}
}
else
{
lean_object* v_toPure_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
lean_dec(v_closeError_633_);
v_toPure_644_ = lean_ctor_get(v_toApplicative_631_, 1);
lean_inc(v_toPure_644_);
lean_dec_ref(v_toApplicative_631_);
v___x_645_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___x_646_ = lean_apply_2(v_toPure_644_, lean_box(0), v___x_645_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(lean_object* v_toApplicative_647_, lean_object* v_a_648_, lean_object* v_inst_649_, lean_object* v_toBind_650_, lean_object* v___f_651_, lean_object* v_a_652_){
_start:
{
if (lean_obj_tag(v_a_652_) == 1)
{
lean_object* v_toPure_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec(v___f_651_);
lean_dec(v_toBind_650_);
lean_dec(v_inst_649_);
v_toPure_653_ = lean_ctor_get(v_toApplicative_647_, 1);
lean_inc(v_toPure_653_);
lean_dec_ref(v_toApplicative_647_);
v___x_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_654_, 0, v_a_652_);
v___x_655_ = lean_apply_2(v_toPure_653_, lean_box(0), v___x_654_);
return v___x_655_;
}
else
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
lean_dec(v_a_652_);
lean_dec_ref(v_toApplicative_647_);
lean_inc(v_a_648_);
v___x_656_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_656_, 0, lean_box(0));
lean_closure_set(v___x_656_, 1, lean_box(0));
lean_closure_set(v___x_656_, 2, v_a_648_);
v___x_657_ = lean_apply_2(v_inst_649_, lean_box(0), v___x_656_);
v___x_658_ = lean_apply_4(v_toBind_650_, lean_box(0), lean_box(0), v___x_657_, v___f_651_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed(lean_object* v_toApplicative_659_, lean_object* v_a_660_, lean_object* v_inst_661_, lean_object* v_toBind_662_, lean_object* v___f_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1(v_toApplicative_659_, v_a_660_, v_inst_661_, v_toBind_662_, v___f_663_, v_a_664_);
lean_dec(v_a_660_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_inst_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_toApplicative_670_; lean_object* v_toBind_671_; lean_object* v___f_672_; lean_object* v___f_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_toApplicative_670_ = lean_ctor_get(v_inst_666_, 0);
v_toBind_671_ = lean_ctor_get(v_inst_666_, 1);
lean_inc_n(v_toBind_671_, 2);
lean_inc_ref_n(v_toApplicative_670_, 2);
v___f_672_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_672_, 0, v_toApplicative_670_);
lean_inc(v_inst_667_);
lean_inc(v_a_669_);
v___f_673_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_673_, 0, v_toApplicative_670_);
lean_closure_set(v___f_673_, 1, v_a_669_);
lean_closure_set(v___f_673_, 2, v_inst_667_);
lean_closure_set(v___f_673_, 3, v_toBind_671_);
lean_closure_set(v___f_673_, 4, v___f_672_);
v___x_674_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___redArg(v_inst_666_, v_inst_667_, v_inst_668_, v_a_669_);
v___x_675_ = lean_apply_4(v_toBind_671_, lean_box(0), lean_box(0), v___x_674_, v___f_673_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___boxed(lean_object* v_inst_676_, lean_object* v_inst_677_, lean_object* v_inst_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(v_inst_676_, v_inst_677_, v_inst_678_, v_a_679_);
lean_dec(v_a_679_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(lean_object* v_m_681_, lean_object* v_inst_682_, lean_object* v_inst_683_, lean_object* v_inst_684_, lean_object* v_a_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg(v_inst_682_, v_inst_683_, v_inst_684_, v_a_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___boxed(lean_object* v_m_687_, lean_object* v_inst_688_, lean_object* v_inst_689_, lean_object* v_inst_690_, lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27(v_m_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_a_691_);
lean_dec(v_a_691_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(lean_object* v_knownSize_693_, lean_object* v_closeError_694_, lean_object* v_inst_695_, lean_object* v_____r_696_, lean_object* v___y_697_){
_start:
{
lean_object* v___x_698_; uint8_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_698_ = lean_box(0);
v___x_699_ = 1;
v___x_700_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
lean_ctor_set(v___x_700_, 2, v___x_698_);
lean_ctor_set(v___x_700_, 3, v_knownSize_693_);
lean_ctor_set(v___x_700_, 4, v___x_698_);
lean_ctor_set(v___x_700_, 5, v_closeError_694_);
lean_ctor_set_uint8(v___x_700_, sizeof(void*)*6, v___x_699_);
lean_inc(v___y_697_);
v___x_701_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(v___x_701_, 0, lean_box(0));
lean_closure_set(v___x_701_, 1, lean_box(0));
lean_closure_set(v___x_701_, 2, v___y_697_);
lean_closure_set(v___x_701_, 3, v___x_700_);
v___x_702_ = lean_apply_2(v_inst_695_, lean_box(0), v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed(lean_object* v_knownSize_703_, lean_object* v_closeError_704_, lean_object* v_inst_705_, lean_object* v_____r_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0(v_knownSize_703_, v_closeError_704_, v_inst_705_, v_____r_706_, v___y_707_);
lean_dec(v___y_707_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(lean_object* v___f_709_, lean_object* v___y_710_, lean_object* v_a_711_){
_start:
{
lean_object* v___x_712_; 
lean_inc(v___y_710_);
v___x_712_ = lean_apply_2(v___f_709_, v_a_711_, v___y_710_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed(lean_object* v___f_713_, lean_object* v___y_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1(v___f_713_, v___y_714_, v_a_715_);
lean_dec(v___y_714_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(lean_object* v_pendingProducer_717_, lean_object* v_toApplicative_718_, lean_object* v___f_719_, uint8_t v_closed_720_, lean_object* v_inst_721_, lean_object* v_toBind_722_, lean_object* v_____r_723_, lean_object* v___y_724_){
_start:
{
if (lean_obj_tag(v_pendingProducer_717_) == 1)
{
lean_object* v_val_725_; lean_object* v_toFunctor_726_; lean_object* v_done_727_; lean_object* v_mapConst_728_; lean_object* v___f_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_val_725_ = lean_ctor_get(v_pendingProducer_717_, 0);
lean_inc(v_val_725_);
lean_dec_ref_known(v_pendingProducer_717_, 1);
v_toFunctor_726_ = lean_ctor_get(v_toApplicative_718_, 0);
lean_inc_ref(v_toFunctor_726_);
lean_dec_ref(v_toApplicative_718_);
v_done_727_ = lean_ctor_get(v_val_725_, 1);
lean_inc(v_done_727_);
lean_dec(v_val_725_);
v_mapConst_728_ = lean_ctor_get(v_toFunctor_726_, 1);
lean_inc(v_mapConst_728_);
lean_dec_ref(v_toFunctor_726_);
lean_inc(v___y_724_);
v___f_729_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_729_, 0, v___f_719_);
lean_closure_set(v___f_729_, 1, v___y_724_);
v___x_730_ = lean_box(v_closed_720_);
v___x_731_ = lean_alloc_closure((void*)(l_IO_Promise_resolve___boxed), 4, 3);
lean_closure_set(v___x_731_, 0, lean_box(0));
lean_closure_set(v___x_731_, 1, v___x_730_);
lean_closure_set(v___x_731_, 2, v_done_727_);
v___x_732_ = lean_apply_2(v_inst_721_, lean_box(0), v___x_731_);
v___x_733_ = lean_box(0);
v___x_734_ = lean_apply_4(v_mapConst_728_, lean_box(0), lean_box(0), v___x_733_, v___x_732_);
v___x_735_ = lean_apply_4(v_toBind_722_, lean_box(0), lean_box(0), v___x_734_, v___f_729_);
return v___x_735_;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; 
lean_dec(v_toBind_722_);
lean_dec(v_inst_721_);
lean_dec_ref(v_toApplicative_718_);
lean_dec(v_pendingProducer_717_);
v___x_736_ = lean_box(0);
lean_inc(v___y_724_);
v___x_737_ = lean_apply_2(v___f_719_, v___x_736_, v___y_724_);
return v___x_737_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed(lean_object* v_pendingProducer_738_, lean_object* v_toApplicative_739_, lean_object* v___f_740_, lean_object* v_closed_741_, lean_object* v_inst_742_, lean_object* v_toBind_743_, lean_object* v_____r_744_, lean_object* v___y_745_){
_start:
{
uint8_t v_closed_boxed_746_; lean_object* v_res_747_; 
v_closed_boxed_746_ = lean_unbox(v_closed_741_);
v_res_747_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2(v_pendingProducer_738_, v_toApplicative_739_, v___f_740_, v_closed_boxed_746_, v_inst_742_, v_toBind_743_, v_____r_744_, v___y_745_);
lean_dec(v___y_745_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(lean_object* v_interestWaiter_748_, lean_object* v_toApplicative_749_, lean_object* v___f_750_, uint8_t v_closed_751_, lean_object* v_inst_752_, lean_object* v_toBind_753_, lean_object* v_____r_754_, lean_object* v___y_755_){
_start:
{
if (lean_obj_tag(v_interestWaiter_748_) == 1)
{
lean_object* v_toFunctor_756_; lean_object* v_val_757_; lean_object* v_mapConst_758_; lean_object* v___f_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v_toFunctor_756_ = lean_ctor_get(v_toApplicative_749_, 0);
lean_inc_ref(v_toFunctor_756_);
lean_dec_ref(v_toApplicative_749_);
v_val_757_ = lean_ctor_get(v_interestWaiter_748_, 0);
lean_inc(v_val_757_);
lean_dec_ref_known(v_interestWaiter_748_, 1);
v_mapConst_758_ = lean_ctor_get(v_toFunctor_756_, 1);
lean_inc(v_mapConst_758_);
lean_dec_ref(v_toFunctor_756_);
lean_inc(v___y_755_);
v___f_759_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_759_, 0, v___f_750_);
lean_closure_set(v___f_759_, 1, v___y_755_);
v___x_760_ = lean_box(v_closed_751_);
v___x_761_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter___boxed), 3, 2);
lean_closure_set(v___x_761_, 0, v_val_757_);
lean_closure_set(v___x_761_, 1, v___x_760_);
v___x_762_ = lean_apply_2(v_inst_752_, lean_box(0), v___x_761_);
v___x_763_ = lean_box(0);
v___x_764_ = lean_apply_4(v_mapConst_758_, lean_box(0), lean_box(0), v___x_763_, v___x_762_);
v___x_765_ = lean_apply_4(v_toBind_753_, lean_box(0), lean_box(0), v___x_764_, v___f_759_);
return v___x_765_;
}
else
{
lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v_toBind_753_);
lean_dec(v_inst_752_);
lean_dec_ref(v_toApplicative_749_);
lean_dec(v_interestWaiter_748_);
v___x_766_ = lean_box(0);
lean_inc(v___y_755_);
v___x_767_ = lean_apply_2(v___f_750_, v___x_766_, v___y_755_);
return v___x_767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed(lean_object* v_interestWaiter_768_, lean_object* v_toApplicative_769_, lean_object* v___f_770_, lean_object* v_closed_771_, lean_object* v_inst_772_, lean_object* v_toBind_773_, lean_object* v_____r_774_, lean_object* v___y_775_){
_start:
{
uint8_t v_closed_boxed_776_; lean_object* v_res_777_; 
v_closed_boxed_776_ = lean_unbox(v_closed_771_);
v_res_777_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(v_interestWaiter_768_, v_toApplicative_769_, v___f_770_, v_closed_boxed_776_, v_inst_772_, v_toBind_773_, v_____r_774_, v___y_775_);
lean_dec(v___y_775_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3(lean_object* v___f_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v___x_781_; 
lean_inc(v_a_779_);
v___x_781_ = lean_apply_2(v___f_778_, v_a_780_, v_a_779_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3___boxed(lean_object* v___f_782_, lean_object* v_a_783_, lean_object* v_a_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3(v___f_782_, v_a_783_, v_a_784_);
lean_dec(v_a_783_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(lean_object* v_inst_786_, lean_object* v_toApplicative_787_, lean_object* v_inst_788_, lean_object* v_toBind_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
uint8_t v_closed_792_; 
v_closed_792_ = lean_ctor_get_uint8(v_a_791_, sizeof(void*)*6);
if (v_closed_792_ == 0)
{
lean_object* v_pendingProducer_793_; lean_object* v_pendingConsumer_794_; lean_object* v_interestWaiter_795_; lean_object* v_knownSize_796_; lean_object* v_closeError_797_; lean_object* v___f_798_; lean_object* v___x_799_; lean_object* v___f_800_; lean_object* v___x_801_; lean_object* v___f_802_; 
v_pendingProducer_793_ = lean_ctor_get(v_a_791_, 0);
lean_inc(v_pendingProducer_793_);
v_pendingConsumer_794_ = lean_ctor_get(v_a_791_, 1);
lean_inc(v_pendingConsumer_794_);
v_interestWaiter_795_ = lean_ctor_get(v_a_791_, 2);
lean_inc_n(v_interestWaiter_795_, 2);
v_knownSize_796_ = lean_ctor_get(v_a_791_, 3);
lean_inc(v_knownSize_796_);
v_closeError_797_ = lean_ctor_get(v_a_791_, 5);
lean_inc_n(v_closeError_797_, 2);
lean_dec_ref(v_a_791_);
v___f_798_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_798_, 0, v_knownSize_796_);
lean_closure_set(v___f_798_, 1, v_closeError_797_);
lean_closure_set(v___f_798_, 2, v_inst_786_);
v___x_799_ = lean_box(v_closed_792_);
lean_inc_n(v_toBind_789_, 2);
lean_inc_n(v_inst_788_, 2);
lean_inc_ref_n(v_toApplicative_787_, 2);
v___f_800_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__2___boxed), 8, 6);
lean_closure_set(v___f_800_, 0, v_pendingProducer_793_);
lean_closure_set(v___f_800_, 1, v_toApplicative_787_);
lean_closure_set(v___f_800_, 2, v___f_798_);
lean_closure_set(v___f_800_, 3, v___x_799_);
lean_closure_set(v___f_800_, 4, v_inst_788_);
lean_closure_set(v___f_800_, 5, v_toBind_789_);
v___x_801_ = lean_box(v_closed_792_);
lean_inc_ref(v___f_800_);
v___f_802_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_802_, 0, v_interestWaiter_795_);
lean_closure_set(v___f_802_, 1, v_toApplicative_787_);
lean_closure_set(v___f_802_, 2, v___f_800_);
lean_closure_set(v___f_802_, 3, v___x_801_);
lean_closure_set(v___f_802_, 4, v_inst_788_);
lean_closure_set(v___f_802_, 5, v_toBind_789_);
if (lean_obj_tag(v_pendingConsumer_794_) == 1)
{
lean_object* v_val_803_; lean_object* v___f_804_; lean_object* v___y_806_; 
lean_dec_ref(v___f_800_);
lean_dec(v_interestWaiter_795_);
v_val_803_ = lean_ctor_get(v_pendingConsumer_794_, 0);
lean_inc(v_val_803_);
lean_dec_ref_known(v_pendingConsumer_794_, 1);
lean_inc(v_a_790_);
v___f_804_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_804_, 0, v___f_802_);
lean_closure_set(v___f_804_, 1, v_a_790_);
if (lean_obj_tag(v_closeError_797_) == 0)
{
lean_object* v___x_814_; 
v___x_814_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___y_806_ = v___x_814_;
goto v___jp_805_;
}
else
{
lean_object* v_val_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_val_815_ = lean_ctor_get(v_closeError_797_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v_closeError_797_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v_closeError_797_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_val_815_);
lean_dec(v_closeError_797_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
lean_ctor_set_tag(v___x_817_, 0);
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_val_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
v___y_806_ = v___x_820_;
goto v___jp_805_;
}
}
}
v___jp_805_:
{
lean_object* v_toFunctor_807_; lean_object* v_mapConst_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_toFunctor_807_ = lean_ctor_get(v_toApplicative_787_, 0);
lean_inc_ref(v_toFunctor_807_);
lean_dec_ref(v_toApplicative_787_);
v_mapConst_808_ = lean_ctor_get(v_toFunctor_807_, 1);
lean_inc(v_mapConst_808_);
lean_dec_ref(v_toFunctor_807_);
v___x_809_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve___boxed), 3, 2);
lean_closure_set(v___x_809_, 0, v_val_803_);
lean_closure_set(v___x_809_, 1, v___y_806_);
v___x_810_ = lean_apply_2(v_inst_788_, lean_box(0), v___x_809_);
v___x_811_ = lean_box(0);
v___x_812_ = lean_apply_4(v_mapConst_808_, lean_box(0), lean_box(0), v___x_811_, v___x_810_);
v___x_813_ = lean_apply_4(v_toBind_789_, lean_box(0), lean_box(0), v___x_812_, v___f_804_);
return v___x_813_;
}
}
else
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec_ref(v___f_802_);
lean_dec(v_closeError_797_);
lean_dec(v_pendingConsumer_794_);
v___x_823_ = lean_box(0);
v___x_824_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__4(v_interestWaiter_795_, v_toApplicative_787_, v___f_800_, v_closed_792_, v_inst_788_, v_toBind_789_, v___x_823_, v_a_790_);
return v___x_824_;
}
}
else
{
lean_object* v_toPure_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
lean_dec_ref(v_a_791_);
lean_dec(v_toBind_789_);
lean_dec(v_inst_788_);
lean_dec(v_inst_786_);
v_toPure_825_ = lean_ctor_get(v_toApplicative_787_, 1);
lean_inc(v_toPure_825_);
lean_dec_ref(v_toApplicative_787_);
v___x_826_ = lean_box(0);
v___x_827_ = lean_apply_2(v_toPure_825_, lean_box(0), v___x_826_);
return v___x_827_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed(lean_object* v_inst_828_, lean_object* v_toApplicative_829_, lean_object* v_inst_830_, lean_object* v_toBind_831_, lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5(v_inst_828_, v_toApplicative_829_, v_inst_830_, v_toBind_831_, v_a_832_, v_a_833_);
lean_dec(v_a_832_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(lean_object* v_inst_835_, lean_object* v_inst_836_, lean_object* v_inst_837_, lean_object* v_a_838_){
_start:
{
lean_object* v_toApplicative_839_; lean_object* v_toBind_840_; lean_object* v___f_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_toApplicative_839_ = lean_ctor_get(v_inst_835_, 0);
lean_inc_ref(v_toApplicative_839_);
v_toBind_840_ = lean_ctor_get(v_inst_835_, 1);
lean_inc_n(v_toBind_840_, 2);
lean_dec_ref(v_inst_835_);
lean_inc_n(v_a_838_, 2);
lean_inc(v_inst_836_);
v___f_841_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_841_, 0, v_inst_836_);
lean_closure_set(v___f_841_, 1, v_toApplicative_839_);
lean_closure_set(v___f_841_, 2, v_inst_837_);
lean_closure_set(v___f_841_, 3, v_toBind_840_);
lean_closure_set(v___f_841_, 4, v_a_838_);
v___x_842_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_842_, 0, lean_box(0));
lean_closure_set(v___x_842_, 1, lean_box(0));
lean_closure_set(v___x_842_, 2, v_a_838_);
v___x_843_ = lean_apply_2(v_inst_836_, lean_box(0), v___x_842_);
v___x_844_ = lean_apply_4(v_toBind_840_, lean_box(0), lean_box(0), v___x_843_, v___f_841_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg___boxed(lean_object* v_inst_845_, lean_object* v_inst_846_, lean_object* v_inst_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(v_inst_845_, v_inst_846_, v_inst_847_, v_a_848_);
lean_dec(v_a_848_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(lean_object* v_m_850_, lean_object* v_inst_851_, lean_object* v_inst_852_, lean_object* v_inst_853_, lean_object* v_a_854_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___redArg(v_inst_851_, v_inst_852_, v_inst_853_, v_a_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___boxed(lean_object* v_m_856_, lean_object* v_inst_857_, lean_object* v_inst_858_, lean_object* v_inst_859_, lean_object* v_a_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27(v_m_856_, v_inst_857_, v_inst_858_, v_inst_859_, v_a_860_);
lean_dec(v_a_860_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(lean_object* v_pendingProducer_866_, lean_object* v_pendingConsumer_867_, uint8_t v_closed_868_, lean_object* v_knownSize_869_, lean_object* v_pendingIncompleteChunk_870_, lean_object* v_closeError_871_, lean_object* v_interestWaiter_872_, lean_object* v___y_873_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_875_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_875_, 0, v_pendingProducer_866_);
lean_ctor_set(v___x_875_, 1, v_pendingConsumer_867_);
lean_ctor_set(v___x_875_, 2, v_interestWaiter_872_);
lean_ctor_set(v___x_875_, 3, v_knownSize_869_);
lean_ctor_set(v___x_875_, 4, v_pendingIncompleteChunk_870_);
lean_ctor_set(v___x_875_, 5, v_closeError_871_);
lean_ctor_set_uint8(v___x_875_, sizeof(void*)*6, v_closed_868_);
v___x_876_ = lean_st_ref_swap(v___y_873_, v___x_875_);
lean_dec(v___x_876_);
v___x_877_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed(lean_object* v_pendingProducer_878_, lean_object* v_pendingConsumer_879_, lean_object* v_closed_880_, lean_object* v_knownSize_881_, lean_object* v_pendingIncompleteChunk_882_, lean_object* v_closeError_883_, lean_object* v_interestWaiter_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
uint8_t v_closed_boxed_887_; lean_object* v_res_888_; 
v_closed_boxed_887_ = lean_unbox(v_closed_880_);
v_res_888_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0(v_pendingProducer_878_, v_pendingConsumer_879_, v_closed_boxed_887_, v_knownSize_881_, v_pendingIncompleteChunk_882_, v_closeError_883_, v_interestWaiter_884_, v___y_885_);
lean_dec(v___y_885_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(lean_object* v___f_889_, lean_object* v___y_890_, lean_object* v_x_891_){
_start:
{
if (lean_obj_tag(v_x_891_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_901_; 
lean_dec_ref(v___f_889_);
v_a_893_ = lean_ctor_get(v_x_891_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v_x_891_);
if (v_isSharedCheck_901_ == 0)
{
v___x_895_ = v_x_891_;
v_isShared_896_ = v_isSharedCheck_901_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v_x_891_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_901_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_893_);
v___x_898_ = v_reuseFailAlloc_900_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_object* v___x_899_; 
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_903_; 
v_a_902_ = lean_ctor_get(v_x_891_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v_x_891_, 1);
lean_inc(v___y_890_);
v___x_903_ = lean_apply_3(v___f_889_, v_a_902_, v___y_890_, lean_box(0));
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed(lean_object* v___f_904_, lean_object* v___y_905_, lean_object* v_x_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1(v___f_904_, v___y_905_, v_x_906_);
lean_dec(v___y_905_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(lean_object* v_interestWaiter_913_, lean_object* v___f_914_, lean_object* v___f_915_, lean_object* v_x_916_){
_start:
{
if (lean_obj_tag(v_x_916_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_926_; 
lean_dec_ref(v___f_915_);
lean_dec_ref(v___f_914_);
lean_dec(v_interestWaiter_913_);
v_a_918_ = lean_ctor_get(v_x_916_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v_x_916_);
if (v_isSharedCheck_926_ == 0)
{
v___x_920_ = v_x_916_;
v_isShared_921_ = v_isSharedCheck_926_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v_x_916_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_926_;
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
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_925_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_924_; 
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_943_; 
v_a_927_ = lean_ctor_get(v_x_916_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v_x_916_);
if (v_isSharedCheck_943_ == 0)
{
v___x_929_ = v_x_916_;
v_isShared_930_ = v_isSharedCheck_943_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v_x_916_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_943_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
uint8_t v___x_931_; 
v___x_931_ = lean_unbox(v_a_927_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_934_; 
lean_dec_ref(v___f_915_);
v___x_932_ = lean_unsigned_to_nat(0u);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 0, v_interestWaiter_913_);
v___x_934_ = v___x_929_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_interestWaiter_913_);
v___x_934_ = v_reuseFailAlloc_938_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; uint8_t v___x_936_; lean_object* v___x_937_; 
v___x_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
v___x_936_ = lean_unbox(v_a_927_);
lean_dec(v_a_927_);
v___x_937_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_932_, v___x_936_, v___x_935_, v___f_914_);
return v___x_937_;
}
}
else
{
lean_object* v___x_939_; uint8_t v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
lean_del_object(v___x_929_);
lean_dec(v_a_927_);
lean_dec_ref(v___f_914_);
lean_dec(v_interestWaiter_913_);
v___x_939_ = lean_unsigned_to_nat(0u);
v___x_940_ = 0;
v___x_941_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___closed__1));
v___x_942_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_939_, v___x_940_, v___x_941_, v___f_915_);
return v___x_942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed(lean_object* v_interestWaiter_944_, lean_object* v___f_945_, lean_object* v___f_946_, lean_object* v_x_947_, lean_object* v___y_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4(v_interestWaiter_944_, v___f_945_, v___f_946_, v_x_947_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(lean_object* v_pendingProducer_950_, uint8_t v_closed_951_, lean_object* v_knownSize_952_, lean_object* v_pendingIncompleteChunk_953_, lean_object* v_closeError_954_, lean_object* v_interestWaiter_955_, lean_object* v_pendingConsumer_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; lean_object* v___f_960_; 
v___x_959_ = lean_box(v_closed_951_);
v___f_960_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___boxed), 9, 6);
lean_closure_set(v___f_960_, 0, v_pendingProducer_950_);
lean_closure_set(v___f_960_, 1, v_pendingConsumer_956_);
lean_closure_set(v___f_960_, 2, v___x_959_);
lean_closure_set(v___f_960_, 3, v_knownSize_952_);
lean_closure_set(v___f_960_, 4, v_pendingIncompleteChunk_953_);
lean_closure_set(v___f_960_, 5, v_closeError_954_);
if (lean_obj_tag(v_interestWaiter_955_) == 0)
{
lean_object* v___f_961_; lean_object* v___x_962_; uint8_t v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
lean_inc(v___y_957_);
v___f_961_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed), 4, 2);
lean_closure_set(v___f_961_, 0, v___f_960_);
lean_closure_set(v___f_961_, 1, v___y_957_);
v___x_962_ = lean_unsigned_to_nat(0u);
v___x_963_ = 0;
v___x_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_964_, 0, v_interestWaiter_955_);
v___x_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
v___x_966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_962_, v___x_963_, v___x_965_, v___f_961_);
return v___x_966_;
}
else
{
lean_object* v_val_967_; lean_object* v_finished_968_; lean_object* v___f_969_; lean_object* v___f_970_; lean_object* v___x_971_; uint8_t v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_val_967_ = lean_ctor_get(v_interestWaiter_955_, 0);
v_finished_968_ = lean_ctor_get(v_val_967_, 0);
lean_inc(v_finished_968_);
lean_inc(v___y_957_);
v___f_969_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__1___boxed), 4, 2);
lean_closure_set(v___f_969_, 0, v___f_960_);
lean_closure_set(v___f_969_, 1, v___y_957_);
lean_inc_ref(v___f_969_);
v___f_970_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__4___boxed), 5, 3);
lean_closure_set(v___f_970_, 0, v_interestWaiter_955_);
lean_closure_set(v___f_970_, 1, v___f_969_);
lean_closure_set(v___f_970_, 2, v___f_969_);
v___x_971_ = lean_unsigned_to_nat(0u);
v___x_972_ = 0;
v___x_973_ = lean_st_ref_get(v_finished_968_);
lean_dec(v_finished_968_);
v___x_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
v___x_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
v___x_976_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_971_, v___x_972_, v___x_975_, v___f_970_);
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed(lean_object* v_pendingProducer_977_, lean_object* v_closed_978_, lean_object* v_knownSize_979_, lean_object* v_pendingIncompleteChunk_980_, lean_object* v_closeError_981_, lean_object* v_interestWaiter_982_, lean_object* v_pendingConsumer_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
uint8_t v_closed_boxed_986_; lean_object* v_res_987_; 
v_closed_boxed_986_ = lean_unbox(v_closed_978_);
v_res_987_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2(v_pendingProducer_977_, v_closed_boxed_986_, v_knownSize_979_, v_pendingIncompleteChunk_980_, v_closeError_981_, v_interestWaiter_982_, v_pendingConsumer_983_, v___y_984_);
lean_dec(v___y_984_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(lean_object* v___f_988_, lean_object* v___y_989_, lean_object* v_x_990_){
_start:
{
if (lean_obj_tag(v_x_990_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1000_; 
lean_dec_ref(v___f_988_);
v_a_992_ = lean_ctor_get(v_x_990_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_x_990_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_994_ = v_x_990_;
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v_x_990_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1000_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_999_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
lean_object* v___x_998_; 
v___x_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
return v___x_998_;
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1002_; 
v_a_1001_ = lean_ctor_get(v_x_990_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v_x_990_, 1);
lean_inc(v___y_989_);
v___x_1002_ = lean_apply_3(v___f_988_, v_a_1001_, v___y_989_, lean_box(0));
return v___x_1002_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed(lean_object* v___f_1003_, lean_object* v___y_1004_, lean_object* v_x_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3(v___f_1003_, v___y_1004_, v_x_1005_);
lean_dec(v___y_1004_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(lean_object* v___f_1008_, lean_object* v_a_1009_, lean_object* v_x_1010_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 0)
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1020_; 
lean_dec_ref(v___f_1008_);
v_a_1012_ = lean_ctor_get(v_x_1010_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v_x_1010_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1014_ = v_x_1010_;
v_isShared_1015_ = v_isSharedCheck_1020_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v_x_1010_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1020_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1018_; 
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
return v___x_1018_;
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1022_; 
v_a_1021_ = lean_ctor_get(v_x_1010_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v_x_1010_, 1);
lean_inc(v_a_1009_);
v___x_1022_ = lean_apply_3(v___f_1008_, v_a_1021_, v_a_1009_, lean_box(0));
return v___x_1022_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed(lean_object* v___f_1023_, lean_object* v_a_1024_, lean_object* v_x_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5(v___f_1023_, v_a_1024_, v_x_1025_);
lean_dec(v_a_1024_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(lean_object* v_pendingConsumer_1032_, lean_object* v___f_1033_, lean_object* v___f_1034_, lean_object* v_x_1035_){
_start:
{
if (lean_obj_tag(v_x_1035_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1045_; 
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___f_1033_);
lean_dec(v_pendingConsumer_1032_);
v_a_1037_ = lean_ctor_get(v_x_1035_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v_x_1035_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1039_ = v_x_1035_;
v_isShared_1040_ = v_isSharedCheck_1045_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v_x_1035_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1045_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
return v___x_1043_;
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1062_; 
v_a_1046_ = lean_ctor_get(v_x_1035_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_x_1035_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1048_ = v_x_1035_;
v_isShared_1049_ = v_isSharedCheck_1062_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v_x_1035_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1062_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
uint8_t v___x_1050_; 
v___x_1050_ = lean_unbox(v_a_1046_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; lean_object* v___x_1053_; 
lean_dec_ref(v___f_1034_);
v___x_1051_ = lean_unsigned_to_nat(0u);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v_pendingConsumer_1032_);
v___x_1053_ = v___x_1048_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_pendingConsumer_1032_);
v___x_1053_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1054_; uint8_t v___x_1055_; lean_object* v___x_1056_; 
v___x_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
v___x_1055_ = lean_unbox(v_a_1046_);
lean_dec(v_a_1046_);
v___x_1056_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1051_, v___x_1055_, v___x_1054_, v___f_1033_);
return v___x_1056_;
}
}
else
{
lean_object* v___x_1058_; uint8_t v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
lean_del_object(v___x_1048_);
lean_dec(v_a_1046_);
lean_dec_ref(v___f_1033_);
lean_dec(v_pendingConsumer_1032_);
v___x_1058_ = lean_unsigned_to_nat(0u);
v___x_1059_ = 0;
v___x_1060_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___closed__1));
v___x_1061_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1058_, v___x_1059_, v___x_1060_, v___f_1034_);
return v___x_1061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed(lean_object* v_pendingConsumer_1063_, lean_object* v___f_1064_, lean_object* v___f_1065_, lean_object* v_x_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7(v_pendingConsumer_1063_, v___f_1064_, v___f_1065_, v_x_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6(lean_object* v_a_1069_, lean_object* v_x_1070_){
_start:
{
if (lean_obj_tag(v_x_1070_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1080_; 
v_a_1072_ = lean_ctor_get(v_x_1070_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_x_1070_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1074_ = v_x_1070_;
v_isShared_1075_ = v_isSharedCheck_1080_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v_x_1070_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1080_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
lean_object* v___x_1078_; 
v___x_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
return v___x_1078_;
}
}
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1121_; 
v_a_1081_ = lean_ctor_get(v_x_1070_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_x_1070_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1083_ = v_x_1070_;
v_isShared_1084_ = v_isSharedCheck_1121_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v_x_1070_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1121_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v_pendingProducer_1085_; lean_object* v_pendingConsumer_1086_; lean_object* v_interestWaiter_1087_; uint8_t v_closed_1088_; lean_object* v_knownSize_1089_; lean_object* v_pendingIncompleteChunk_1090_; lean_object* v_closeError_1091_; lean_object* v___x_1092_; lean_object* v___f_1093_; lean_object* v___y_1095_; 
v_pendingProducer_1085_ = lean_ctor_get(v_a_1081_, 0);
lean_inc(v_pendingProducer_1085_);
v_pendingConsumer_1086_ = lean_ctor_get(v_a_1081_, 1);
lean_inc(v_pendingConsumer_1086_);
v_interestWaiter_1087_ = lean_ctor_get(v_a_1081_, 2);
lean_inc(v_interestWaiter_1087_);
v_closed_1088_ = lean_ctor_get_uint8(v_a_1081_, sizeof(void*)*6);
v_knownSize_1089_ = lean_ctor_get(v_a_1081_, 3);
lean_inc(v_knownSize_1089_);
v_pendingIncompleteChunk_1090_ = lean_ctor_get(v_a_1081_, 4);
lean_inc(v_pendingIncompleteChunk_1090_);
v_closeError_1091_ = lean_ctor_get(v_a_1081_, 5);
lean_inc(v_closeError_1091_);
lean_dec(v_a_1081_);
v___x_1092_ = lean_box(v_closed_1088_);
v___f_1093_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__2___boxed), 9, 6);
lean_closure_set(v___f_1093_, 0, v_pendingProducer_1085_);
lean_closure_set(v___f_1093_, 1, v___x_1092_);
lean_closure_set(v___f_1093_, 2, v_knownSize_1089_);
lean_closure_set(v___f_1093_, 3, v_pendingIncompleteChunk_1090_);
lean_closure_set(v___f_1093_, 4, v_closeError_1091_);
lean_closure_set(v___f_1093_, 5, v_interestWaiter_1087_);
if (lean_obj_tag(v_pendingConsumer_1086_) == 1)
{
lean_object* v_val_1104_; 
v_val_1104_ = lean_ctor_get(v_pendingConsumer_1086_, 0);
lean_inc(v_val_1104_);
if (lean_obj_tag(v_val_1104_) == 1)
{
lean_object* v_finished_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1120_; 
lean_del_object(v___x_1083_);
v_finished_1105_ = lean_ctor_get(v_val_1104_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v_val_1104_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1107_ = v_val_1104_;
v_isShared_1108_ = v_isSharedCheck_1120_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_finished_1105_);
lean_dec(v_val_1104_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1120_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v_finished_1109_; lean_object* v___f_1110_; lean_object* v___f_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v_finished_1109_ = lean_ctor_get(v_finished_1105_, 0);
lean_inc(v_finished_1109_);
lean_dec_ref(v_finished_1105_);
lean_inc(v_a_1069_);
v___f_1110_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__5___boxed), 4, 2);
lean_closure_set(v___f_1110_, 0, v___f_1093_);
lean_closure_set(v___f_1110_, 1, v_a_1069_);
lean_inc_ref(v___f_1110_);
v___f_1111_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__7___boxed), 5, 3);
lean_closure_set(v___f_1111_, 0, v_pendingConsumer_1086_);
lean_closure_set(v___f_1111_, 1, v___f_1110_);
lean_closure_set(v___f_1111_, 2, v___f_1110_);
v___x_1112_ = lean_unsigned_to_nat(0u);
v___x_1113_ = 0;
v___x_1114_ = lean_st_ref_get(v_finished_1109_);
lean_dec(v_finished_1109_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v___x_1114_);
v___x_1116_ = v___x_1107_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
v___x_1118_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1112_, v___x_1113_, v___x_1117_, v___f_1111_);
return v___x_1118_;
}
}
}
else
{
lean_dec(v_val_1104_);
v___y_1095_ = v_a_1069_;
goto v___jp_1094_;
}
}
else
{
v___y_1095_ = v_a_1069_;
goto v___jp_1094_;
}
v___jp_1094_:
{
lean_object* v___f_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; lean_object* v___x_1100_; 
lean_inc(v___y_1095_);
v___f_1096_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1096_, 0, v___f_1093_);
lean_closure_set(v___f_1096_, 1, v___y_1095_);
v___x_1097_ = lean_unsigned_to_nat(0u);
v___x_1098_ = 0;
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v_pendingConsumer_1086_);
v___x_1100_ = v___x_1083_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_pendingConsumer_1086_);
v___x_1100_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
v___x_1102_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1097_, v___x_1098_, v___x_1101_, v___f_1096_);
return v___x_1102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6___boxed(lean_object* v_a_1122_, lean_object* v_x_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6(v_a_1122_, v_x_1123_);
lean_dec(v_a_1122_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(lean_object* v_a_1126_){
_start:
{
lean_object* v___f_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_inc(v_a_1126_);
v___f_1128_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__6___boxed), 3, 1);
lean_closure_set(v___f_1128_, 0, v_a_1126_);
v___x_1129_ = lean_unsigned_to_nat(0u);
v___x_1130_ = 0;
v___x_1131_ = lean_st_ref_get(v_a_1126_);
v___x_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
v___x_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
v___x_1134_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1129_, v___x_1130_, v___x_1133_, v___f_1128_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___boxed(lean_object* v_a_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v_a_1135_);
lean_dec(v_a_1135_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__0(lean_object* v___y_1138_){
_start:
{
if (lean_obj_tag(v___y_1138_) == 0)
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1146_; 
v_a_1139_ = lean_ctor_get(v___y_1138_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___y_1138_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1141_ = v___y_1138_;
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___y_1138_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
else
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1155_; 
v_a_1147_ = lean_ctor_get(v___y_1138_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___y_1138_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1149_ = v___y_1138_;
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___y_1138_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v_fst_1151_; lean_object* v___x_1153_; 
v_fst_1151_ = lean_ctor_get(v_a_1147_, 0);
lean_inc(v_fst_1151_);
lean_dec(v_a_1147_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v_fst_1151_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_fst_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(lean_object* v_mutex_1156_, lean_object* v_x_1157_){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_io_basemutex_unlock(v_mutex_1156_);
v___x_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed(lean_object* v_mutex_1162_, lean_object* v_x_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1(v_mutex_1162_, v_x_1163_);
lean_dec(v_x_1163_);
lean_dec(v_mutex_1162_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(lean_object* v_k_1166_, lean_object* v_ref_1167_, lean_object* v_x_1168_){
_start:
{
if (lean_obj_tag(v_x_1168_) == 0)
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1178_; 
lean_dec(v_ref_1167_);
lean_dec_ref(v_k_1166_);
v_a_1170_ = lean_ctor_get(v_x_1168_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_x_1168_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1172_ = v_x_1168_;
v_isShared_1173_ = v_isSharedCheck_1178_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v_x_1168_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1178_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
return v___x_1176_;
}
}
}
else
{
lean_object* v___x_1179_; 
lean_dec_ref_known(v_x_1168_, 1);
v___x_1179_ = lean_apply_2(v_k_1166_, v_ref_1167_, lean_box(0));
return v___x_1179_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed(lean_object* v_k_1180_, lean_object* v_ref_1181_, lean_object* v_x_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2(v_k_1180_, v_ref_1181_, v_x_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(lean_object* v_mutex_1185_, lean_object* v___f_1186_){
_start:
{
lean_object* v___x_1188_; uint8_t v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1188_ = lean_unsigned_to_nat(0u);
v___x_1189_ = 0;
v___x_1190_ = lean_io_basemutex_lock(v_mutex_1185_);
v___x_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
v___x_1193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1188_, v___x_1189_, v___x_1192_, v___f_1186_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed(lean_object* v_mutex_1194_, lean_object* v___f_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3(v_mutex_1194_, v___f_1195_);
lean_dec(v_mutex_1194_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(lean_object* v_mutex_1199_, lean_object* v_k_1200_){
_start:
{
lean_object* v_ref_1202_; lean_object* v_mutex_1203_; lean_object* v___f_1204_; lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; lean_object* v___x_1210_; lean_object* v___y_1212_; 
v_ref_1202_ = lean_ctor_get(v_mutex_1199_, 0);
lean_inc(v_ref_1202_);
v_mutex_1203_ = lean_ctor_get(v_mutex_1199_, 1);
lean_inc_n(v_mutex_1203_, 2);
lean_dec_ref(v_mutex_1199_);
v___f_1204_ = ((lean_object*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___closed__0));
v___f_1205_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1205_, 0, v_mutex_1203_);
v___f_1206_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1206_, 0, v_k_1200_);
lean_closure_set(v___f_1206_, 1, v_ref_1202_);
v___f_1207_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_1207_, 0, v_mutex_1203_);
lean_closure_set(v___f_1207_, 1, v___f_1206_);
v___x_1208_ = lean_unsigned_to_nat(0u);
v___x_1209_ = 0;
v___x_1210_ = l_Std_Async_EAsync_tryFinally_x27___redArg(v___f_1207_, v___f_1205_, v___x_1208_, v___x_1209_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_a_1214_; 
v_a_1214_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1214_);
lean_dec_ref_known(v___x_1210_, 1);
if (lean_obj_tag(v_a_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
v_a_1215_ = lean_ctor_get(v_a_1214_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_a_1214_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v_a_1214_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v_a_1214_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
v___y_1212_ = v___x_1220_;
goto v___jp_1211_;
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1231_; 
v_a_1223_ = lean_ctor_get(v_a_1214_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_a_1214_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1225_ = v_a_1214_;
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v_a_1214_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v_fst_1227_; lean_object* v___x_1229_; 
v_fst_1227_ = lean_ctor_get(v_a_1223_, 0);
lean_inc(v_fst_1227_);
lean_dec(v_a_1223_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v_fst_1227_);
v___x_1229_ = v___x_1225_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_fst_1227_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
v___y_1212_ = v___x_1229_;
goto v___jp_1211_;
}
}
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1240_; 
v_a_1232_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1234_ = v___x_1210_;
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1210_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1236_ = lean_task_map(v___f_1204_, v_a_1232_, v___x_1208_, v___x_1209_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v___x_1236_);
v___x_1238_ = v___x_1234_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
v___jp_1211_:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1213_, 0, v___y_1212_);
return v___x_1213_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg___boxed(lean_object* v_mutex_1241_, lean_object* v_k_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_mutex_1241_, v_k_1242_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(lean_object* v_00_u03b1_1245_, lean_object* v_00_u03b2_1246_, lean_object* v_mutex_1247_, lean_object* v_k_1248_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_mutex_1247_, v_k_1248_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed(lean_object* v_00_u03b1_1251_, lean_object* v_00_u03b2_1252_, lean_object* v_mutex_1253_, lean_object* v_k_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2(v_00_u03b1_1251_, v_00_u03b2_1252_, v_mutex_1253_, v_k_1254_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0(lean_object* v_x_1257_){
_start:
{
if (lean_obj_tag(v_x_1257_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1267_; 
v_a_1259_ = lean_ctor_get(v_x_1257_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_x_1257_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1261_ = v_x_1257_;
v_isShared_1262_ = v_isSharedCheck_1267_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v_x_1257_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1267_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
return v___x_1265_;
}
}
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1269_; 
v_a_1268_ = lean_ctor_get(v_x_1257_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v_x_1257_, 1);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v_a_1268_);
return v___x_1269_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__0___boxed(lean_object* v_x_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Std_Http_Body_Stream_tryRecv___lam__0(v_x_1270_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(lean_object* v_a_1273_, lean_object* v___f_1274_, lean_object* v_x_1275_){
_start:
{
if (lean_obj_tag(v_x_1275_) == 0)
{
lean_object* v_a_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v___f_1274_);
v_a_1277_ = lean_ctor_get(v_x_1275_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_x_1275_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1279_ = v_x_1275_;
v_isShared_1280_ = v_isSharedCheck_1285_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_a_1277_);
lean_dec(v_x_1275_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1285_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1277_);
v___x_1282_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1283_; 
v___x_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1282_);
return v___x_1283_;
}
}
}
else
{
lean_object* v_a_1286_; 
v_a_1286_ = lean_ctor_get(v_x_1275_, 0);
lean_inc(v_a_1286_);
if (lean_obj_tag(v_a_1286_) == 1)
{
lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1294_; 
lean_dec_ref(v___f_1274_);
v_isSharedCheck_1294_ = !lean_is_exclusive(v_a_1286_);
if (v_isSharedCheck_1294_ == 0)
{
lean_object* v_unused_1295_; 
v_unused_1295_ = lean_ctor_get(v_a_1286_, 0);
lean_dec(v_unused_1295_);
v___x_1288_ = v_a_1286_;
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
else
{
lean_dec(v_a_1286_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v_x_1275_);
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_x_1275_);
v___x_1291_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
return v___x_1292_;
}
}
}
else
{
lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1307_; 
lean_dec(v_a_1286_);
v_isSharedCheck_1307_ = !lean_is_exclusive(v_x_1275_);
if (v_isSharedCheck_1307_ == 0)
{
lean_object* v_unused_1308_; 
v_unused_1308_ = lean_ctor_get(v_x_1275_, 0);
lean_dec(v_unused_1308_);
v___x_1297_ = v_x_1275_;
v_isShared_1298_ = v_isSharedCheck_1307_;
goto v_resetjp_1296_;
}
else
{
lean_dec(v_x_1275_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1307_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1299_; uint8_t v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1299_ = lean_unsigned_to_nat(0u);
v___x_1300_ = 0;
v___x_1301_ = lean_st_ref_get(v_a_1273_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 0, v___x_1301_);
v___x_1303_ = v___x_1297_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
v___x_1305_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1299_, v___x_1300_, v___x_1304_, v___f_1274_);
return v___x_1305_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed(lean_object* v_a_1309_, lean_object* v___f_1310_, lean_object* v_x_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1(v_a_1309_, v___f_1310_, v_x_1311_);
lean_dec(v_a_1309_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(lean_object* v_x_1318_){
_start:
{
if (lean_obj_tag(v_x_1318_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1328_; 
v_a_1320_ = lean_ctor_get(v_x_1318_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v_x_1318_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1322_ = v_x_1318_;
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v_x_1318_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1326_; 
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1347_; 
v_a_1329_ = lean_ctor_get(v_x_1318_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v_x_1318_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1331_ = v_x_1318_;
v_isShared_1332_ = v_isSharedCheck_1347_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v_x_1318_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1347_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v_closeError_1333_; 
v_closeError_1333_ = lean_ctor_get(v_a_1329_, 5);
lean_inc(v_closeError_1333_);
lean_dec(v_a_1329_);
if (lean_obj_tag(v_closeError_1333_) == 1)
{
lean_object* v_val_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1345_; 
v_val_1334_ = lean_ctor_get(v_closeError_1333_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_closeError_1333_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1336_ = v_closeError_1333_;
v_isShared_1337_ = v_isSharedCheck_1345_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_val_1334_);
lean_dec(v_closeError_1333_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1345_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1332_ == 0)
{
lean_ctor_set_tag(v___x_1331_, 0);
lean_ctor_set(v___x_1331_, 0, v_val_1334_);
v___x_1339_ = v___x_1331_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_val_1334_);
v___x_1339_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1341_; 
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1339_);
v___x_1341_ = v___x_1336_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
lean_object* v___x_1342_; 
v___x_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
return v___x_1342_;
}
}
}
}
else
{
lean_object* v___x_1346_; 
lean_dec(v_closeError_1333_);
lean_del_object(v___x_1331_);
v___x_1346_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___closed__1));
return v___x_1346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0___boxed(lean_object* v_x_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__0(v_x_1348_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(lean_object* v_done_1351_, lean_object* v___f_1352_, lean_object* v_x_1353_){
_start:
{
if (lean_obj_tag(v_x_1353_) == 0)
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v___f_1352_);
v_a_1355_ = lean_ctor_get(v_x_1353_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_x_1353_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1357_ = v_x_1353_;
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v_x_1353_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1363_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
return v___x_1361_;
}
}
}
else
{
uint8_t v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
lean_dec_ref_known(v_x_1353_, 1);
v___x_1364_ = 1;
v___x_1365_ = lean_unsigned_to_nat(0u);
v___x_1366_ = 0;
v___x_1367_ = lean_box(v___x_1364_);
v___x_1368_ = lean_io_promise_resolve(v___x_1367_, v_done_1351_);
v___x_1369_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1365_, v___x_1366_, v___x_1369_, v___f_1352_);
return v___x_1370_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed(lean_object* v_done_1371_, lean_object* v___f_1372_, lean_object* v_x_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1(v_done_1371_, v___f_1372_, v_x_1373_);
lean_dec(v_done_1371_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(lean_object* v_chunk_1376_, lean_object* v_x_1377_){
_start:
{
if (lean_obj_tag(v_x_1377_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1387_; 
lean_dec_ref(v_chunk_1376_);
v_a_1379_ = lean_ctor_get(v_x_1377_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1381_ = v_x_1377_;
v_isShared_1382_ = v_isSharedCheck_1387_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v_x_1377_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1387_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
lean_object* v___x_1385_; 
v___x_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1384_);
return v___x_1385_;
}
}
}
else
{
lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1396_; 
v_isSharedCheck_1396_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1396_ == 0)
{
lean_object* v_unused_1397_; 
v_unused_1397_ = lean_ctor_get(v_x_1377_, 0);
lean_dec(v_unused_1397_);
v___x_1389_ = v_x_1377_;
v_isShared_1390_ = v_isSharedCheck_1396_;
goto v_resetjp_1388_;
}
else
{
lean_dec(v_x_1377_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1396_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1391_, 0, v_chunk_1376_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1391_);
v___x_1393_ = v___x_1389_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
return v___x_1394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed(lean_object* v_chunk_1398_, lean_object* v_x_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0(v_chunk_1398_, v_x_1399_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(lean_object* v_a_1404_, lean_object* v_x_1405_){
_start:
{
if (lean_obj_tag(v_x_1405_) == 0)
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1415_; 
v_a_1407_ = lean_ctor_get(v_x_1405_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_x_1405_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1409_ = v_x_1405_;
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v_x_1405_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; 
v___x_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
return v___x_1413_;
}
}
}
else
{
lean_object* v_a_1416_; lean_object* v_pendingProducer_1417_; 
v_a_1416_ = lean_ctor_get(v_x_1405_, 0);
lean_inc(v_a_1416_);
lean_dec_ref_known(v_x_1405_, 1);
v_pendingProducer_1417_ = lean_ctor_get(v_a_1416_, 0);
if (lean_obj_tag(v_pendingProducer_1417_) == 1)
{
lean_object* v_val_1418_; lean_object* v_pendingConsumer_1419_; lean_object* v_interestWaiter_1420_; uint8_t v_closed_1421_; lean_object* v_knownSize_1422_; lean_object* v_pendingIncompleteChunk_1423_; lean_object* v_closeError_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1442_; 
v_val_1418_ = lean_ctor_get(v_pendingProducer_1417_, 0);
lean_inc(v_val_1418_);
v_pendingConsumer_1419_ = lean_ctor_get(v_a_1416_, 1);
v_interestWaiter_1420_ = lean_ctor_get(v_a_1416_, 2);
v_closed_1421_ = lean_ctor_get_uint8(v_a_1416_, sizeof(void*)*6);
v_knownSize_1422_ = lean_ctor_get(v_a_1416_, 3);
v_pendingIncompleteChunk_1423_ = lean_ctor_get(v_a_1416_, 4);
v_closeError_1424_ = lean_ctor_get(v_a_1416_, 5);
v_isSharedCheck_1442_ = !lean_is_exclusive(v_a_1416_);
if (v_isSharedCheck_1442_ == 0)
{
lean_object* v_unused_1443_; 
v_unused_1443_ = lean_ctor_get(v_a_1416_, 0);
lean_dec(v_unused_1443_);
v___x_1426_ = v_a_1416_;
v_isShared_1427_ = v_isSharedCheck_1442_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_closeError_1424_);
lean_inc(v_pendingIncompleteChunk_1423_);
lean_inc(v_knownSize_1422_);
lean_inc(v_interestWaiter_1420_);
lean_inc(v_pendingConsumer_1419_);
lean_dec(v_a_1416_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1442_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v_chunk_1428_; lean_object* v_done_1429_; lean_object* v___x_1430_; lean_object* v___f_1431_; lean_object* v___f_1432_; lean_object* v___x_1433_; lean_object* v___x_1435_; 
v_chunk_1428_ = lean_ctor_get(v_val_1418_, 0);
lean_inc_ref_n(v_chunk_1428_, 2);
v_done_1429_ = lean_ctor_get(v_val_1418_, 1);
lean_inc(v_done_1429_);
lean_dec(v_val_1418_);
v___x_1430_ = lean_box(0);
v___f_1431_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1431_, 0, v_chunk_1428_);
v___f_1432_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1432_, 0, v_done_1429_);
lean_closure_set(v___f_1432_, 1, v___f_1431_);
v___x_1433_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_1422_, v_chunk_1428_);
lean_dec_ref(v_chunk_1428_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 3, v___x_1433_);
lean_ctor_set(v___x_1426_, 0, v___x_1430_);
v___x_1435_ = v___x_1426_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1430_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v_pendingConsumer_1419_);
lean_ctor_set(v_reuseFailAlloc_1441_, 2, v_interestWaiter_1420_);
lean_ctor_set(v_reuseFailAlloc_1441_, 3, v___x_1433_);
lean_ctor_set(v_reuseFailAlloc_1441_, 4, v_pendingIncompleteChunk_1423_);
lean_ctor_set(v_reuseFailAlloc_1441_, 5, v_closeError_1424_);
lean_ctor_set_uint8(v_reuseFailAlloc_1441_, sizeof(void*)*6, v_closed_1421_);
v___x_1435_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
lean_object* v___x_1436_; uint8_t v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1436_ = lean_unsigned_to_nat(0u);
v___x_1437_ = 0;
v___x_1438_ = lean_st_ref_swap(v_a_1404_, v___x_1435_);
lean_dec(v___x_1438_);
v___x_1439_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1440_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1436_, v___x_1437_, v___x_1439_, v___f_1432_);
return v___x_1440_;
}
}
}
else
{
lean_object* v___x_1444_; 
lean_dec(v_a_1416_);
v___x_1444_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_1444_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed(lean_object* v_a_1445_, lean_object* v_x_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2(v_a_1445_, v_x_1446_);
lean_dec(v_a_1445_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(lean_object* v_a_1449_){
_start:
{
lean_object* v___f_1451_; lean_object* v___x_1452_; uint8_t v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
lean_inc(v_a_1449_);
v___f_1451_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1451_, 0, v_a_1449_);
v___x_1452_ = lean_unsigned_to_nat(0u);
v___x_1453_ = 0;
v___x_1454_ = lean_st_ref_get(v_a_1449_);
v___x_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
v___x_1457_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1452_, v___x_1453_, v___x_1456_, v___f_1451_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___boxed(lean_object* v_a_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(v_a_1458_);
lean_dec(v_a_1458_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(lean_object* v_a_1462_){
_start:
{
lean_object* v___f_1464_; lean_object* v___f_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___f_1464_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___closed__0));
lean_inc(v_a_1462_);
v___f_1465_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1465_, 0, v_a_1462_);
lean_closure_set(v___f_1465_, 1, v___f_1464_);
v___x_1466_ = lean_unsigned_to_nat(0u);
v___x_1467_ = 0;
v___x_1468_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0(v_a_1462_);
v___x_1469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1466_, v___x_1467_, v___x_1468_, v___f_1465_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0___boxed(lean_object* v_a_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v_a_1470_);
lean_dec(v_a_1470_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1(lean_object* v___y_1473_, lean_object* v___f_1474_, lean_object* v_x_1475_){
_start:
{
if (lean_obj_tag(v_x_1475_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1485_; 
lean_dec_ref(v___f_1474_);
v_a_1477_ = lean_ctor_get(v_x_1475_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v_x_1475_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1479_ = v_x_1475_;
v_isShared_1480_ = v_isSharedCheck_1485_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v_x_1475_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1485_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1482_; 
if (v_isShared_1480_ == 0)
{
v___x_1482_ = v___x_1479_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1477_);
v___x_1482_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1482_);
return v___x_1483_;
}
}
}
else
{
lean_object* v___x_1486_; uint8_t v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
lean_dec_ref_known(v_x_1475_, 1);
v___x_1486_ = lean_unsigned_to_nat(0u);
v___x_1487_ = 0;
v___x_1488_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_1473_);
v___x_1489_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1486_, v___x_1487_, v___x_1488_, v___f_1474_);
return v___x_1489_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__1___boxed(lean_object* v___y_1490_, lean_object* v___f_1491_, lean_object* v_x_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Std_Http_Body_Stream_tryRecv___lam__1(v___y_1490_, v___f_1491_, v_x_1492_);
lean_dec(v___y_1490_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2(lean_object* v___f_1495_, lean_object* v___y_1496_){
_start:
{
lean_object* v___f_1498_; lean_object* v___x_1499_; uint8_t v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
lean_inc(v___y_1496_);
v___f_1498_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecv___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1498_, 0, v___y_1496_);
lean_closure_set(v___f_1498_, 1, v___f_1495_);
v___x_1499_ = lean_unsigned_to_nat(0u);
v___x_1500_ = 0;
v___x_1501_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_1496_);
v___x_1502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1499_, v___x_1500_, v___x_1501_, v___f_1498_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___lam__2___boxed(lean_object* v___f_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Std_Http_Body_Stream_tryRecv___lam__2(v___f_1503_, v___y_1504_);
lean_dec(v___y_1504_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv(lean_object* v_stream_1510_){
_start:
{
lean_object* v___f_1512_; lean_object* v___x_1513_; 
v___f_1512_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecv___closed__1));
v___x_1513_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_1510_, v___f_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecv___boxed(lean_object* v_stream_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Std_Http_Body_Stream_tryRecv(v_stream_1514_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(lean_object* v_x_1517_){
_start:
{
uint8_t v___y_1520_; 
if (lean_obj_tag(v_x_1517_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1532_; 
v_a_1524_ = lean_ctor_get(v_x_1517_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_x_1517_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1526_ = v_x_1517_;
v_isShared_1527_ = v_isSharedCheck_1532_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v_x_1517_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1532_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
lean_object* v___x_1530_; 
v___x_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
return v___x_1530_;
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v_pendingProducer_1534_; 
v_a_1533_ = lean_ctor_get(v_x_1517_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v_x_1517_, 1);
v_pendingProducer_1534_ = lean_ctor_get(v_a_1533_, 0);
if (lean_obj_tag(v_pendingProducer_1534_) == 0)
{
uint8_t v_closed_1535_; 
v_closed_1535_ = lean_ctor_get_uint8(v_a_1533_, sizeof(void*)*6);
lean_dec(v_a_1533_);
v___y_1520_ = v_closed_1535_;
goto v___jp_1519_;
}
else
{
uint8_t v___x_1536_; 
lean_dec(v_a_1533_);
v___x_1536_ = 1;
v___y_1520_ = v___x_1536_;
goto v___jp_1519_;
}
}
v___jp_1519_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1521_ = lean_box(v___y_1520_);
v___x_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
v___x_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
return v___x_1523_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0___boxed(lean_object* v_x_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___lam__0(v_x_1537_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(lean_object* v_a_1541_){
_start:
{
lean_object* v___f_1543_; lean_object* v___x_1544_; uint8_t v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___f_1543_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___closed__0));
v___x_1544_ = lean_unsigned_to_nat(0u);
v___x_1545_ = 0;
v___x_1546_ = lean_st_ref_get(v_a_1541_);
v___x_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
v___x_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
v___x_1549_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1544_, v___x_1545_, v___x_1548_, v___f_1543_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0___boxed(lean_object* v_a_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v_a_1550_);
lean_dec(v_a_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0(lean_object* v_x_1553_){
_start:
{
if (lean_obj_tag(v_x_1553_) == 0)
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1563_; 
v_a_1555_ = lean_ctor_get(v_x_1553_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_x_1553_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1557_ = v_x_1553_;
v_isShared_1558_ = v_isSharedCheck_1563_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v_x_1553_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1563_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1561_; 
v___x_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
return v___x_1561_;
}
}
}
else
{
lean_object* v_a_1564_; 
v_a_1564_ = lean_ctor_get(v_x_1553_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v_x_1553_, 1);
if (lean_obj_tag(v_a_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1573_; 
v_a_1565_ = lean_ctor_get(v_a_1564_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_a_1564_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1567_ = v_a_1564_;
v_isShared_1568_ = v_isSharedCheck_1573_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v_a_1564_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1573_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
return v___x_1571_;
}
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1583_; 
v_a_1574_ = lean_ctor_get(v_a_1564_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_a_1564_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1576_ = v_a_1564_;
v_isShared_1577_ = v_isSharedCheck_1583_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v_a_1564_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1583_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1578_, 0, v_a_1574_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 0, v___x_1578_);
v___x_1580_ = v___x_1576_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1581_; 
v___x_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
return v___x_1581_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__0___boxed(lean_object* v_x_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Std_Http_Body_Stream_tryRecvBody___lam__0(v_x_1584_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1(lean_object* v___y_1591_, lean_object* v___f_1592_, lean_object* v_x_1593_){
_start:
{
if (lean_obj_tag(v_x_1593_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1603_; 
lean_dec_ref(v___f_1592_);
v_a_1595_ = lean_ctor_get(v_x_1593_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v_x_1593_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1597_ = v_x_1593_;
v_isShared_1598_ = v_isSharedCheck_1603_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v_x_1593_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1603_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
return v___x_1601_;
}
}
}
else
{
lean_object* v_a_1604_; uint8_t v___x_1605_; 
v_a_1604_ = lean_ctor_get(v_x_1593_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v_x_1593_, 1);
v___x_1605_ = lean_unbox(v_a_1604_);
lean_dec(v_a_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; 
lean_dec_ref(v___f_1592_);
v___x_1606_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___lam__1___closed__1));
return v___x_1606_;
}
else
{
lean_object* v___x_1607_; uint8_t v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1607_ = lean_unsigned_to_nat(0u);
v___x_1608_ = 0;
v___x_1609_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_1591_);
v___x_1610_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1607_, v___x_1608_, v___x_1609_, v___f_1592_);
return v___x_1610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed(lean_object* v___y_1611_, lean_object* v___f_1612_, lean_object* v_x_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Std_Http_Body_Stream_tryRecvBody___lam__1(v___y_1611_, v___f_1612_, v_x_1613_);
lean_dec(v___y_1611_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2(lean_object* v___y_1616_, lean_object* v___f_1617_, lean_object* v_x_1618_){
_start:
{
if (lean_obj_tag(v_x_1618_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1628_; 
lean_dec_ref(v___f_1617_);
v_a_1620_ = lean_ctor_get(v_x_1618_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_x_1618_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1622_ = v_x_1618_;
v_isShared_1623_ = v_isSharedCheck_1628_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v_x_1618_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1628_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1625_);
return v___x_1626_;
}
}
}
else
{
lean_object* v___x_1629_; uint8_t v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
lean_dec_ref_known(v_x_1618_, 1);
v___x_1629_ = lean_unsigned_to_nat(0u);
v___x_1630_ = 0;
v___x_1631_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v___y_1616_);
v___x_1632_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1629_, v___x_1630_, v___x_1631_, v___f_1617_);
return v___x_1632_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed(lean_object* v___y_1633_, lean_object* v___f_1634_, lean_object* v_x_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Std_Http_Body_Stream_tryRecvBody___lam__2(v___y_1633_, v___f_1634_, v_x_1635_);
lean_dec(v___y_1633_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3(lean_object* v___f_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v___f_1641_; lean_object* v___f_1642_; lean_object* v___x_1643_; uint8_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_inc_n(v___y_1639_, 2);
v___f_1641_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecvBody___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1641_, 0, v___y_1639_);
lean_closure_set(v___f_1641_, 1, v___f_1638_);
v___f_1642_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_tryRecvBody___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1642_, 0, v___y_1639_);
lean_closure_set(v___f_1642_, 1, v___f_1641_);
v___x_1643_ = lean_unsigned_to_nat(0u);
v___x_1644_ = 0;
v___x_1645_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_1639_);
v___x_1646_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1643_, v___x_1644_, v___x_1645_, v___f_1642_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___lam__3___boxed(lean_object* v___f_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Std_Http_Body_Stream_tryRecvBody___lam__3(v___f_1647_, v___y_1648_);
lean_dec(v___y_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody(lean_object* v_stream_1654_){
_start:
{
lean_object* v___f_1656_; lean_object* v___x_1657_; 
v___f_1656_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___closed__1));
v___x_1657_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_1654_, v___f_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_tryRecvBody___boxed(lean_object* v_stream_1658_, lean_object* v_a_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Std_Http_Body_Stream_tryRecvBody(v_stream_1658_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(lean_object* v_a_1661_){
_start:
{
lean_object* v___x_1663_; lean_object* v_pendingProducer_1664_; lean_object* v_pendingConsumer_1665_; lean_object* v_interestWaiter_1666_; uint8_t v_closed_1667_; lean_object* v_knownSize_1668_; lean_object* v_pendingIncompleteChunk_1669_; lean_object* v_closeError_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1697_; 
v___x_1663_ = lean_st_ref_get(v_a_1661_);
v_pendingProducer_1664_ = lean_ctor_get(v___x_1663_, 0);
v_pendingConsumer_1665_ = lean_ctor_get(v___x_1663_, 1);
v_interestWaiter_1666_ = lean_ctor_get(v___x_1663_, 2);
v_closed_1667_ = lean_ctor_get_uint8(v___x_1663_, sizeof(void*)*6);
v_knownSize_1668_ = lean_ctor_get(v___x_1663_, 3);
v_pendingIncompleteChunk_1669_ = lean_ctor_get(v___x_1663_, 4);
v_closeError_1670_ = lean_ctor_get(v___x_1663_, 5);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1672_ = v___x_1663_;
v_isShared_1673_ = v_isSharedCheck_1697_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_closeError_1670_);
lean_inc(v_pendingIncompleteChunk_1669_);
lean_inc(v_knownSize_1668_);
lean_inc(v_interestWaiter_1666_);
lean_inc(v_pendingConsumer_1665_);
lean_inc(v_pendingProducer_1664_);
lean_dec(v___x_1663_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1697_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___y_1675_; lean_object* v_interestWaiter_1676_; lean_object* v___y_1677_; lean_object* v_pendingConsumer_1684_; lean_object* v___y_1685_; 
if (lean_obj_tag(v_pendingConsumer_1665_) == 1)
{
lean_object* v_val_1691_; 
v_val_1691_ = lean_ctor_get(v_pendingConsumer_1665_, 0);
if (lean_obj_tag(v_val_1691_) == 1)
{
lean_object* v_finished_1692_; lean_object* v_finished_1693_; lean_object* v___x_1694_; uint8_t v___x_1695_; 
v_finished_1692_ = lean_ctor_get(v_val_1691_, 0);
v_finished_1693_ = lean_ctor_get(v_finished_1692_, 0);
v___x_1694_ = lean_st_ref_get(v_finished_1693_);
v___x_1695_ = lean_unbox(v___x_1694_);
lean_dec(v___x_1694_);
if (v___x_1695_ == 0)
{
v_pendingConsumer_1684_ = v_pendingConsumer_1665_;
v___y_1685_ = v_a_1661_;
goto v___jp_1683_;
}
else
{
lean_object* v___x_1696_; 
lean_dec_ref_known(v_pendingConsumer_1665_, 1);
v___x_1696_ = lean_box(0);
v_pendingConsumer_1684_ = v___x_1696_;
v___y_1685_ = v_a_1661_;
goto v___jp_1683_;
}
}
else
{
v_pendingConsumer_1684_ = v_pendingConsumer_1665_;
v___y_1685_ = v_a_1661_;
goto v___jp_1683_;
}
}
else
{
v_pendingConsumer_1684_ = v_pendingConsumer_1665_;
v___y_1685_ = v_a_1661_;
goto v___jp_1683_;
}
v___jp_1674_:
{
lean_object* v___x_1679_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 2, v_interestWaiter_1676_);
lean_ctor_set(v___x_1672_, 1, v___y_1675_);
v___x_1679_ = v___x_1672_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_pendingProducer_1664_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v___y_1675_);
lean_ctor_set(v_reuseFailAlloc_1682_, 2, v_interestWaiter_1676_);
lean_ctor_set(v_reuseFailAlloc_1682_, 3, v_knownSize_1668_);
lean_ctor_set(v_reuseFailAlloc_1682_, 4, v_pendingIncompleteChunk_1669_);
lean_ctor_set(v_reuseFailAlloc_1682_, 5, v_closeError_1670_);
lean_ctor_set_uint8(v_reuseFailAlloc_1682_, sizeof(void*)*6, v_closed_1667_);
v___x_1679_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1680_ = lean_box(0);
v___x_1681_ = lean_st_ref_swap(v___y_1677_, v___x_1679_);
lean_dec(v___x_1681_);
return v___x_1680_;
}
}
v___jp_1683_:
{
if (lean_obj_tag(v_interestWaiter_1666_) == 0)
{
v___y_1675_ = v_pendingConsumer_1684_;
v_interestWaiter_1676_ = v_interestWaiter_1666_;
v___y_1677_ = v___y_1685_;
goto v___jp_1674_;
}
else
{
lean_object* v_val_1686_; lean_object* v_finished_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v_val_1686_ = lean_ctor_get(v_interestWaiter_1666_, 0);
v_finished_1687_ = lean_ctor_get(v_val_1686_, 0);
v___x_1688_ = lean_st_ref_get(v_finished_1687_);
v___x_1689_ = lean_unbox(v___x_1688_);
lean_dec(v___x_1688_);
if (v___x_1689_ == 0)
{
v___y_1675_ = v_pendingConsumer_1684_;
v_interestWaiter_1676_ = v_interestWaiter_1666_;
v___y_1677_ = v___y_1685_;
goto v___jp_1674_;
}
else
{
lean_object* v___x_1690_; 
lean_dec_ref_known(v_interestWaiter_1666_, 1);
v___x_1690_ = lean_box(0);
v___y_1675_ = v_pendingConsumer_1684_;
v_interestWaiter_1676_ = v___x_1690_;
v___y_1677_ = v___y_1685_;
goto v___jp_1674_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0___boxed(lean_object* v_a_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v_a_1698_);
lean_dec(v_a_1698_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(lean_object* v_a_1701_){
_start:
{
lean_object* v___x_1703_; lean_object* v_pendingProducer_1704_; 
v___x_1703_ = lean_st_ref_get(v_a_1701_);
v_pendingProducer_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_pendingProducer_1704_);
if (lean_obj_tag(v_pendingProducer_1704_) == 1)
{
lean_object* v_val_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1734_; 
v_val_1705_ = lean_ctor_get(v_pendingProducer_1704_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_pendingProducer_1704_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1707_ = v_pendingProducer_1704_;
v_isShared_1708_ = v_isSharedCheck_1734_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_val_1705_);
lean_dec(v_pendingProducer_1704_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1734_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v_pendingConsumer_1709_; lean_object* v_interestWaiter_1710_; uint8_t v_closed_1711_; lean_object* v_knownSize_1712_; lean_object* v_pendingIncompleteChunk_1713_; lean_object* v_closeError_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1732_; 
v_pendingConsumer_1709_ = lean_ctor_get(v___x_1703_, 1);
v_interestWaiter_1710_ = lean_ctor_get(v___x_1703_, 2);
v_closed_1711_ = lean_ctor_get_uint8(v___x_1703_, sizeof(void*)*6);
v_knownSize_1712_ = lean_ctor_get(v___x_1703_, 3);
v_pendingIncompleteChunk_1713_ = lean_ctor_get(v___x_1703_, 4);
v_closeError_1714_ = lean_ctor_get(v___x_1703_, 5);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1732_ == 0)
{
lean_object* v_unused_1733_; 
v_unused_1733_ = lean_ctor_get(v___x_1703_, 0);
lean_dec(v_unused_1733_);
v___x_1716_ = v___x_1703_;
v_isShared_1717_ = v_isSharedCheck_1732_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_closeError_1714_);
lean_inc(v_pendingIncompleteChunk_1713_);
lean_inc(v_knownSize_1712_);
lean_inc(v_interestWaiter_1710_);
lean_inc(v_pendingConsumer_1709_);
lean_dec(v___x_1703_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1732_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v_chunk_1718_; lean_object* v_done_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1723_; 
v_chunk_1718_ = lean_ctor_get(v_val_1705_, 0);
lean_inc_ref(v_chunk_1718_);
v_done_1719_ = lean_ctor_get(v_val_1705_, 1);
lean_inc(v_done_1719_);
lean_dec(v_val_1705_);
v___x_1720_ = lean_box(0);
v___x_1721_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_1712_, v_chunk_1718_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 3, v___x_1721_);
lean_ctor_set(v___x_1716_, 0, v___x_1720_);
v___x_1723_ = v___x_1716_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1720_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v_pendingConsumer_1709_);
lean_ctor_set(v_reuseFailAlloc_1731_, 2, v_interestWaiter_1710_);
lean_ctor_set(v_reuseFailAlloc_1731_, 3, v___x_1721_);
lean_ctor_set(v_reuseFailAlloc_1731_, 4, v_pendingIncompleteChunk_1713_);
lean_ctor_set(v_reuseFailAlloc_1731_, 5, v_closeError_1714_);
lean_ctor_set_uint8(v_reuseFailAlloc_1731_, sizeof(void*)*6, v_closed_1711_);
v___x_1723_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1724_; uint8_t v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1729_; 
v___x_1724_ = lean_st_ref_swap(v_a_1701_, v___x_1723_);
lean_dec(v___x_1724_);
v___x_1725_ = 1;
v___x_1726_ = lean_box(v___x_1725_);
v___x_1727_ = lean_io_promise_resolve(v___x_1726_, v_done_1719_);
lean_dec(v_done_1719_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 0, v_chunk_1718_);
v___x_1729_ = v___x_1707_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_chunk_1718_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
}
}
else
{
lean_object* v___x_1735_; 
lean_dec(v_pendingProducer_1704_);
lean_dec(v___x_1703_);
v___x_1735_ = lean_box(0);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1___boxed(lean_object* v_a_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(v_a_1736_);
lean_dec(v_a_1736_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(lean_object* v_a_1739_){
_start:
{
lean_object* v___x_1741_; lean_object* v_interestWaiter_1742_; 
v___x_1741_ = lean_st_ref_get(v_a_1739_);
v_interestWaiter_1742_ = lean_ctor_get(v___x_1741_, 2);
lean_inc(v_interestWaiter_1742_);
if (lean_obj_tag(v_interestWaiter_1742_) == 1)
{
lean_object* v_pendingProducer_1743_; lean_object* v_pendingConsumer_1744_; uint8_t v_closed_1745_; lean_object* v_knownSize_1746_; lean_object* v_pendingIncompleteChunk_1747_; lean_object* v_closeError_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1761_; 
v_pendingProducer_1743_ = lean_ctor_get(v___x_1741_, 0);
v_pendingConsumer_1744_ = lean_ctor_get(v___x_1741_, 1);
v_closed_1745_ = lean_ctor_get_uint8(v___x_1741_, sizeof(void*)*6);
v_knownSize_1746_ = lean_ctor_get(v___x_1741_, 3);
v_pendingIncompleteChunk_1747_ = lean_ctor_get(v___x_1741_, 4);
v_closeError_1748_ = lean_ctor_get(v___x_1741_, 5);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1761_ == 0)
{
lean_object* v_unused_1762_; 
v_unused_1762_ = lean_ctor_get(v___x_1741_, 2);
lean_dec(v_unused_1762_);
v___x_1750_ = v___x_1741_;
v_isShared_1751_ = v_isSharedCheck_1761_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_closeError_1748_);
lean_inc(v_pendingIncompleteChunk_1747_);
lean_inc(v_knownSize_1746_);
lean_inc(v_pendingConsumer_1744_);
lean_inc(v_pendingProducer_1743_);
lean_dec(v___x_1741_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1761_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v_val_1752_; uint8_t v___x_1753_; uint8_t v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1757_; 
v_val_1752_ = lean_ctor_get(v_interestWaiter_1742_, 0);
lean_inc(v_val_1752_);
lean_dec_ref_known(v_interestWaiter_1742_, 1);
v___x_1753_ = 1;
v___x_1754_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_1752_, v___x_1753_);
lean_dec(v_val_1752_);
v___x_1755_ = lean_box(0);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 2, v___x_1755_);
v___x_1757_ = v___x_1750_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_pendingProducer_1743_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_pendingConsumer_1744_);
lean_ctor_set(v_reuseFailAlloc_1760_, 2, v___x_1755_);
lean_ctor_set(v_reuseFailAlloc_1760_, 3, v_knownSize_1746_);
lean_ctor_set(v_reuseFailAlloc_1760_, 4, v_pendingIncompleteChunk_1747_);
lean_ctor_set(v_reuseFailAlloc_1760_, 5, v_closeError_1748_);
lean_ctor_set_uint8(v_reuseFailAlloc_1760_, sizeof(void*)*6, v_closed_1745_);
v___x_1757_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = lean_box(0);
v___x_1759_ = lean_st_ref_swap(v_a_1739_, v___x_1757_);
lean_dec(v___x_1759_);
return v___x_1758_;
}
}
}
else
{
lean_object* v___x_1763_; 
lean_dec(v_interestWaiter_1742_);
lean_dec(v___x_1741_);
v___x_1763_ = lean_box(0);
return v___x_1763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2___boxed(lean_object* v_a_1764_, lean_object* v___y_1765_){
_start:
{
lean_object* v_res_1766_; 
v_res_1766_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(v_a_1764_);
lean_dec(v_a_1764_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(lean_object* v_mutex_1767_, lean_object* v_k_1768_){
_start:
{
lean_object* v_ref_1770_; lean_object* v_mutex_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v_ref_1770_ = lean_ctor_get(v_mutex_1767_, 0);
lean_inc(v_ref_1770_);
v_mutex_1771_ = lean_ctor_get(v_mutex_1767_, 1);
lean_inc(v_mutex_1771_);
lean_dec_ref(v_mutex_1767_);
v___x_1772_ = lean_io_basemutex_lock(v_mutex_1771_);
v___x_1773_ = lean_apply_2(v_k_1768_, v_ref_1770_, lean_box(0));
v___x_1774_ = lean_io_basemutex_unlock(v_mutex_1771_);
lean_dec(v_mutex_1771_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg___boxed(lean_object* v_mutex_1775_, lean_object* v_k_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_mutex_1775_, v_k_1776_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(lean_object* v_00_u03b1_1779_, lean_object* v_00_u03b2_1780_, lean_object* v_mutex_1781_, lean_object* v_k_1782_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_mutex_1781_, v_k_1782_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___boxed(lean_object* v_00_u03b1_1785_, lean_object* v_00_u03b2_1786_, lean_object* v_mutex_1787_, lean_object* v_k_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3(v_00_u03b1_1785_, v_00_u03b2_1786_, v_mutex_1787_, v_k_1788_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(lean_object* v_x_1796_){
_start:
{
if (lean_obj_tag(v_x_1796_) == 0)
{
lean_object* v___x_1797_; 
v___x_1797_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___closed__2));
return v___x_1797_;
}
else
{
lean_object* v_val_1798_; 
v_val_1798_ = lean_ctor_get(v_x_1796_, 0);
lean_inc(v_val_1798_);
return v_val_1798_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0___boxed(lean_object* v_x_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__0(v_x_1799_);
lean_dec(v_x_1799_);
return v_res_1800_;
}
}
static lean_object* _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__2));
v___x_1807_ = lean_task_pure(v___x_1806_);
return v___x_1807_;
}
}
static lean_object* _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___x_1809_ = lean_task_pure(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(lean_object* v___f_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; uint8_t v_closed_1815_; 
v___x_1813_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v___y_1811_);
v___x_1814_ = lean_st_ref_get(v___y_1811_);
v_closed_1815_ = lean_ctor_get_uint8(v___x_1814_, sizeof(void*)*6);
if (v_closed_1815_ == 0)
{
lean_object* v___x_1816_; 
lean_dec(v___x_1814_);
v___x_1816_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__1(v___y_1811_);
if (lean_obj_tag(v___x_1816_) == 1)
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
lean_dec_ref(v___f_1810_);
v___x_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1816_);
v___x_1818_ = lean_task_pure(v___x_1817_);
return v___x_1818_;
}
else
{
lean_object* v___x_1819_; lean_object* v_pendingConsumer_1820_; 
lean_dec(v___x_1816_);
v___x_1819_ = lean_st_ref_get(v___y_1811_);
v_pendingConsumer_1820_ = lean_ctor_get(v___x_1819_, 1);
if (lean_obj_tag(v_pendingConsumer_1820_) == 0)
{
lean_object* v_pendingProducer_1821_; lean_object* v_interestWaiter_1822_; uint8_t v_closed_1823_; lean_object* v_knownSize_1824_; lean_object* v_pendingIncompleteChunk_1825_; lean_object* v_closeError_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1842_; 
v_pendingProducer_1821_ = lean_ctor_get(v___x_1819_, 0);
v_interestWaiter_1822_ = lean_ctor_get(v___x_1819_, 2);
v_closed_1823_ = lean_ctor_get_uint8(v___x_1819_, sizeof(void*)*6);
v_knownSize_1824_ = lean_ctor_get(v___x_1819_, 3);
v_pendingIncompleteChunk_1825_ = lean_ctor_get(v___x_1819_, 4);
v_closeError_1826_ = lean_ctor_get(v___x_1819_, 5);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1842_ == 0)
{
lean_object* v_unused_1843_; 
v_unused_1843_ = lean_ctor_get(v___x_1819_, 1);
lean_dec(v_unused_1843_);
v___x_1828_ = v___x_1819_;
v_isShared_1829_ = v_isSharedCheck_1842_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_closeError_1826_);
lean_inc(v_pendingIncompleteChunk_1825_);
lean_inc(v_knownSize_1824_);
lean_inc(v_interestWaiter_1822_);
lean_inc(v_pendingProducer_1821_);
lean_dec(v___x_1819_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1842_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1834_; 
v___x_1830_ = lean_io_promise_new();
lean_inc(v___x_1830_);
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
v___x_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 1, v___x_1832_);
v___x_1834_ = v___x_1828_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_pendingProducer_1821_);
lean_ctor_set(v_reuseFailAlloc_1841_, 1, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1841_, 2, v_interestWaiter_1822_);
lean_ctor_set(v_reuseFailAlloc_1841_, 3, v_knownSize_1824_);
lean_ctor_set(v_reuseFailAlloc_1841_, 4, v_pendingIncompleteChunk_1825_);
lean_ctor_set(v_reuseFailAlloc_1841_, 5, v_closeError_1826_);
lean_ctor_set_uint8(v_reuseFailAlloc_1841_, sizeof(void*)*6, v_closed_1823_);
v___x_1834_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; uint8_t v___x_1839_; lean_object* v___x_1840_; 
v___x_1835_ = lean_st_ref_swap(v___y_1811_, v___x_1834_);
lean_dec(v___x_1835_);
v___x_1836_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__2(v___y_1811_);
v___x_1837_ = lean_io_promise_result_opt(v___x_1830_);
lean_dec(v___x_1830_);
v___x_1838_ = lean_unsigned_to_nat(0u);
v___x_1839_ = 1;
v___x_1840_ = lean_task_map(v___f_1810_, v___x_1837_, v___x_1838_, v___x_1839_);
return v___x_1840_;
}
}
}
else
{
lean_object* v___x_1844_; 
lean_dec(v___x_1819_);
lean_dec_ref(v___f_1810_);
v___x_1844_ = lean_obj_once(&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3, &l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3_once, _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__3);
return v___x_1844_;
}
}
}
else
{
lean_object* v_closeError_1845_; 
lean_dec_ref(v___f_1810_);
v_closeError_1845_ = lean_ctor_get(v___x_1814_, 5);
lean_inc(v_closeError_1845_);
lean_dec(v___x_1814_);
if (lean_obj_tag(v_closeError_1845_) == 0)
{
lean_object* v___x_1846_; 
v___x_1846_ = lean_obj_once(&l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4, &l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4_once, _init_l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___closed__4);
return v___x_1846_;
}
else
{
lean_object* v_val_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1855_; 
v_val_1847_ = lean_ctor_get(v_closeError_1845_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v_closeError_1845_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1849_ = v_closeError_1845_;
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_val_1847_);
lean_dec(v_closeError_1845_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1852_; 
if (v_isShared_1850_ == 0)
{
lean_ctor_set_tag(v___x_1849_, 0);
v___x_1852_ = v___x_1849_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_val_1847_);
v___x_1852_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_task_pure(v___x_1852_);
return v___x_1853_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1___boxed(lean_object* v___f_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___lam__1(v___f_1856_, v___y_1857_);
lean_dec(v___y_1857_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(lean_object* v_stream_1863_){
_start:
{
lean_object* v___f_1865_; lean_object* v___x_1866_; 
v___f_1865_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___closed__1));
v___x_1866_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_stream_1863_, v___f_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27___boxed(lean_object* v_stream_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(v_stream_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0(lean_object* v_x_1870_){
_start:
{
if (lean_obj_tag(v_x_1870_) == 0)
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1880_; 
v_a_1872_ = lean_ctor_get(v_x_1870_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_x_1870_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1874_ = v_x_1870_;
v_isShared_1875_ = v_isSharedCheck_1880_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v_x_1870_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1880_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
return v___x_1878_;
}
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1882_; 
v_a_1881_ = lean_ctor_get(v_x_1870_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v_x_1870_, 1);
v___x_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1882_, 0, v_a_1881_);
return v___x_1882_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___lam__0___boxed(lean_object* v_x_1883_, lean_object* v___y_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_Std_Http_Body_Stream_recv___lam__0(v_x_1883_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv(lean_object* v_stream_1887_){
_start:
{
lean_object* v___f_1889_; lean_object* v___x_1890_; uint8_t v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___f_1889_ = ((lean_object*)(l_Std_Http_Body_Stream_recv___closed__0));
v___x_1890_ = lean_unsigned_to_nat(0u);
v___x_1891_ = 0;
v___x_1892_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27(v_stream_1887_);
v___x_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
v___x_1894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1893_);
v___x_1895_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1890_, v___x_1891_, v___x_1894_, v___f_1889_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recv___boxed(lean_object* v_stream_1896_, lean_object* v_a_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Std_Http_Body_Stream_recv(v_stream_1896_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(lean_object* v_knownSize_1899_, lean_object* v_closeError_1900_, lean_object* v_____r_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v___x_1904_; uint8_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1904_ = lean_box(0);
v___x_1905_ = 1;
v___x_1906_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1906_, 0, v___x_1904_);
lean_ctor_set(v___x_1906_, 1, v___x_1904_);
lean_ctor_set(v___x_1906_, 2, v___x_1904_);
lean_ctor_set(v___x_1906_, 3, v_knownSize_1899_);
lean_ctor_set(v___x_1906_, 4, v___x_1904_);
lean_ctor_set(v___x_1906_, 5, v_closeError_1900_);
lean_ctor_set_uint8(v___x_1906_, sizeof(void*)*6, v___x_1905_);
v___x_1907_ = lean_st_ref_swap(v___y_1902_, v___x_1906_);
lean_dec(v___x_1907_);
v___x_1908_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed(lean_object* v_knownSize_1909_, lean_object* v_closeError_1910_, lean_object* v_____r_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0(v_knownSize_1909_, v_closeError_1910_, v_____r_1911_, v___y_1912_);
lean_dec(v___y_1912_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(lean_object* v___f_1915_, lean_object* v___y_1916_, lean_object* v_x_1917_){
_start:
{
if (lean_obj_tag(v_x_1917_) == 0)
{
lean_object* v___x_1919_; 
lean_dec_ref(v___f_1915_);
v___x_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1919_, 0, v_x_1917_);
return v___x_1919_;
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1921_; 
v_a_1920_ = lean_ctor_get(v_x_1917_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v_x_1917_, 1);
lean_inc(v___y_1916_);
v___x_1921_ = lean_apply_3(v___f_1915_, v_a_1920_, v___y_1916_, lean_box(0));
return v___x_1921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed(lean_object* v___f_1922_, lean_object* v___y_1923_, lean_object* v_x_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1(v___f_1922_, v___y_1923_, v_x_1924_);
lean_dec(v___y_1923_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(lean_object* v_pendingProducer_1927_, lean_object* v___f_1928_, uint8_t v_closed_1929_, lean_object* v_____r_1930_, lean_object* v___y_1931_){
_start:
{
if (lean_obj_tag(v_pendingProducer_1927_) == 1)
{
lean_object* v_val_1933_; lean_object* v_done_1934_; lean_object* v___f_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_val_1933_ = lean_ctor_get(v_pendingProducer_1927_, 0);
v_done_1934_ = lean_ctor_get(v_val_1933_, 1);
lean_inc(v___y_1931_);
v___f_1935_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1935_, 0, v___f_1928_);
lean_closure_set(v___f_1935_, 1, v___y_1931_);
v___x_1936_ = lean_unsigned_to_nat(0u);
v___x_1937_ = lean_box(v_closed_1929_);
v___x_1938_ = lean_io_promise_resolve(v___x_1937_, v_done_1934_);
v___x_1939_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1940_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1936_, v_closed_1929_, v___x_1939_, v___f_1935_);
return v___x_1940_;
}
else
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = lean_box(0);
lean_inc(v___y_1931_);
v___x_1942_ = lean_apply_3(v___f_1928_, v___x_1941_, v___y_1931_, lean_box(0));
return v___x_1942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed(lean_object* v_pendingProducer_1943_, lean_object* v___f_1944_, lean_object* v_closed_1945_, lean_object* v_____r_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
uint8_t v_closed_boxed_1949_; lean_object* v_res_1950_; 
v_closed_boxed_1949_ = lean_unbox(v_closed_1945_);
v_res_1950_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2(v_pendingProducer_1943_, v___f_1944_, v_closed_boxed_1949_, v_____r_1946_, v___y_1947_);
lean_dec(v___y_1947_);
lean_dec(v_pendingProducer_1943_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(lean_object* v_interestWaiter_1951_, lean_object* v___f_1952_, uint8_t v_closed_1953_, lean_object* v_____r_1954_, lean_object* v___y_1955_){
_start:
{
if (lean_obj_tag(v_interestWaiter_1951_) == 1)
{
lean_object* v_val_1957_; lean_object* v___f_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v_val_1957_ = lean_ctor_get(v_interestWaiter_1951_, 0);
lean_inc(v___y_1955_);
v___f_1958_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1958_, 0, v___f_1952_);
lean_closure_set(v___f_1958_, 1, v___y_1955_);
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_1957_, v_closed_1953_);
v___x_1961_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_1962_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1959_, v_closed_1953_, v___x_1961_, v___f_1958_);
return v___x_1962_;
}
else
{
lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1963_ = lean_box(0);
lean_inc(v___y_1955_);
v___x_1964_ = lean_apply_3(v___f_1952_, v___x_1963_, v___y_1955_, lean_box(0));
return v___x_1964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed(lean_object* v_interestWaiter_1965_, lean_object* v___f_1966_, lean_object* v_closed_1967_, lean_object* v_____r_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
uint8_t v_closed_boxed_1971_; lean_object* v_res_1972_; 
v_closed_boxed_1971_ = lean_unbox(v_closed_1967_);
v_res_1972_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(v_interestWaiter_1965_, v___f_1966_, v_closed_boxed_1971_, v_____r_1968_, v___y_1969_);
lean_dec(v___y_1969_);
lean_dec(v_interestWaiter_1965_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3(lean_object* v___f_1973_, lean_object* v_a_1974_, lean_object* v_x_1975_){
_start:
{
if (lean_obj_tag(v_x_1975_) == 0)
{
lean_object* v___x_1977_; 
lean_dec_ref(v___f_1973_);
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v_x_1975_);
return v___x_1977_;
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1979_; 
v_a_1978_ = lean_ctor_get(v_x_1975_, 0);
lean_inc(v_a_1978_);
lean_dec_ref_known(v_x_1975_, 1);
lean_inc(v_a_1974_);
v___x_1979_ = lean_apply_3(v___f_1973_, v_a_1978_, v_a_1974_, lean_box(0));
return v___x_1979_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3___boxed(lean_object* v___f_1980_, lean_object* v_a_1981_, lean_object* v_x_1982_, lean_object* v___y_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3(v___f_1980_, v_a_1981_, v_x_1982_);
lean_dec(v_a_1981_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(lean_object* v_a_1985_, lean_object* v_x_1986_){
_start:
{
if (lean_obj_tag(v_x_1986_) == 0)
{
lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1996_; 
v_a_1988_ = lean_ctor_get(v_x_1986_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_x_1986_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1990_ = v_x_1986_;
v_isShared_1991_ = v_isSharedCheck_1996_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v_x_1986_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1996_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1993_; 
if (v_isShared_1991_ == 0)
{
v___x_1993_ = v___x_1990_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1988_);
v___x_1993_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
return v___x_1994_;
}
}
}
else
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2028_; 
v_a_1997_ = lean_ctor_get(v_x_1986_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_x_1986_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_1999_ = v_x_1986_;
v_isShared_2000_ = v_isSharedCheck_2028_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v_x_1986_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2028_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
uint8_t v_closed_2001_; 
v_closed_2001_ = lean_ctor_get_uint8(v_a_1997_, sizeof(void*)*6);
if (v_closed_2001_ == 0)
{
lean_object* v_pendingProducer_2002_; lean_object* v_pendingConsumer_2003_; lean_object* v_interestWaiter_2004_; lean_object* v_knownSize_2005_; lean_object* v_closeError_2006_; lean_object* v___f_2007_; lean_object* v___x_2008_; lean_object* v___f_2009_; lean_object* v___x_2010_; lean_object* v___f_2011_; 
v_pendingProducer_2002_ = lean_ctor_get(v_a_1997_, 0);
lean_inc(v_pendingProducer_2002_);
v_pendingConsumer_2003_ = lean_ctor_get(v_a_1997_, 1);
lean_inc(v_pendingConsumer_2003_);
v_interestWaiter_2004_ = lean_ctor_get(v_a_1997_, 2);
lean_inc_n(v_interestWaiter_2004_, 2);
v_knownSize_2005_ = lean_ctor_get(v_a_1997_, 3);
lean_inc(v_knownSize_2005_);
v_closeError_2006_ = lean_ctor_get(v_a_1997_, 5);
lean_inc_n(v_closeError_2006_, 2);
lean_dec(v_a_1997_);
v___f_2007_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__0___boxed), 5, 2);
lean_closure_set(v___f_2007_, 0, v_knownSize_2005_);
lean_closure_set(v___f_2007_, 1, v_closeError_2006_);
v___x_2008_ = lean_box(v_closed_2001_);
v___f_2009_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__2___boxed), 6, 3);
lean_closure_set(v___f_2009_, 0, v_pendingProducer_2002_);
lean_closure_set(v___f_2009_, 1, v___f_2007_);
lean_closure_set(v___f_2009_, 2, v___x_2008_);
v___x_2010_ = lean_box(v_closed_2001_);
lean_inc_ref(v___f_2009_);
v___f_2011_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4___boxed), 6, 3);
lean_closure_set(v___f_2011_, 0, v_interestWaiter_2004_);
lean_closure_set(v___f_2011_, 1, v___f_2009_);
lean_closure_set(v___f_2011_, 2, v___x_2010_);
if (lean_obj_tag(v_pendingConsumer_2003_) == 1)
{
lean_object* v_val_2012_; lean_object* v___f_2013_; lean_object* v___y_2015_; 
lean_dec_ref(v___f_2009_);
lean_dec(v_interestWaiter_2004_);
v_val_2012_ = lean_ctor_get(v_pendingConsumer_2003_, 0);
lean_inc(v_val_2012_);
lean_dec_ref_known(v_pendingConsumer_2003_, 1);
lean_inc(v_a_1985_);
v___f_2013_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2013_, 0, v___f_2011_);
lean_closure_set(v___f_2013_, 1, v_a_1985_);
if (lean_obj_tag(v_closeError_2006_) == 0)
{
lean_object* v___x_2020_; 
lean_del_object(v___x_1999_);
v___x_2020_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
v___y_2015_ = v___x_2020_;
goto v___jp_2014_;
}
else
{
lean_object* v_val_2021_; lean_object* v___x_2023_; 
v_val_2021_ = lean_ctor_get(v_closeError_2006_, 0);
lean_inc(v_val_2021_);
lean_dec_ref_known(v_closeError_2006_, 1);
if (v_isShared_2000_ == 0)
{
lean_ctor_set_tag(v___x_1999_, 0);
lean_ctor_set(v___x_1999_, 0, v_val_2021_);
v___x_2023_ = v___x_1999_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v_val_2021_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
v___y_2015_ = v___x_2023_;
goto v___jp_2014_;
}
}
v___jp_2014_:
{
lean_object* v___x_2016_; uint8_t v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2016_ = lean_unsigned_to_nat(0u);
v___x_2017_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_val_2012_, v___y_2015_);
lean_dec(v_val_2012_);
v___x_2018_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2019_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2016_, v_closed_2001_, v___x_2018_, v___f_2013_);
return v___x_2019_;
}
}
else
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_dec_ref(v___f_2011_);
lean_dec(v_closeError_2006_);
lean_dec(v_pendingConsumer_2003_);
lean_del_object(v___x_1999_);
v___x_2025_ = lean_box(0);
v___x_2026_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__4(v_interestWaiter_2004_, v___f_2009_, v_closed_2001_, v___x_2025_, v_a_1985_);
lean_dec(v_interestWaiter_2004_);
return v___x_2026_;
}
}
else
{
lean_object* v___x_2027_; 
lean_del_object(v___x_1999_);
lean_dec(v_a_1997_);
v___x_2027_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed(lean_object* v_a_2029_, lean_object* v_x_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5(v_a_2029_, v_x_2030_);
lean_dec(v_a_2029_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(lean_object* v_a_2033_){
_start:
{
lean_object* v___f_2035_; lean_object* v___x_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_inc(v_a_2033_);
v___f_2035_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2035_, 0, v_a_2033_);
v___x_2036_ = lean_unsigned_to_nat(0u);
v___x_2037_ = 0;
v___x_2038_ = lean_st_ref_get(v_a_2033_);
v___x_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2038_);
v___x_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
v___x_2041_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2036_, v___x_2037_, v___x_2040_, v___f_2035_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___boxed(lean_object* v_a_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v_a_2042_);
lean_dec(v_a_2042_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close(lean_object* v_stream_2046_){
_start:
{
lean_object* v___f_2048_; lean_object* v___x_2049_; 
v___f_2048_ = ((lean_object*)(l_Std_Http_Body_Stream_close___closed__0));
v___x_2049_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2046_, v___f_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_close___boxed(lean_object* v_stream_2050_, lean_object* v_a_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l_Std_Http_Body_Stream_close(v_stream_2050_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(uint8_t v___x_2053_, lean_object* v_x_2054_){
_start:
{
if (lean_obj_tag(v_x_2054_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2064_; 
v_a_2056_ = lean_ctor_get(v_x_2054_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_x_2054_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2058_ = v_x_2054_;
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v_x_2054_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
lean_object* v___x_2062_; 
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
}
}
else
{
lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2073_; 
v_isSharedCheck_2073_ = !lean_is_exclusive(v_x_2054_);
if (v_isSharedCheck_2073_ == 0)
{
lean_object* v_unused_2074_; 
v_unused_2074_ = lean_ctor_get(v_x_2054_, 0);
lean_dec(v_unused_2074_);
v___x_2066_ = v_x_2054_;
v_isShared_2067_ = v_isSharedCheck_2073_;
goto v_resetjp_2065_;
}
else
{
lean_dec(v_x_2054_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2073_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2068_ = lean_box(v___x_2053_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 0, v___x_2068_);
v___x_2070_ = v___x_2066_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v___x_2068_);
v___x_2070_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
return v___x_2071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__0___boxed(lean_object* v___x_2075_, lean_object* v_x_2076_, lean_object* v___y_2077_){
_start:
{
uint8_t v___x_1476__boxed_2078_; lean_object* v_res_2079_; 
v___x_1476__boxed_2078_ = lean_unbox(v___x_2075_);
v_res_2079_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__0(v___x_1476__boxed_2078_, v_x_2076_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(lean_object* v___y_2083_, lean_object* v_x_2084_){
_start:
{
uint8_t v___y_2087_; 
if (lean_obj_tag(v_x_2084_) == 0)
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2099_; 
v_a_2091_ = lean_ctor_get(v_x_2084_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_x_2084_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2093_ = v_x_2084_;
v_isShared_2094_ = v_isSharedCheck_2099_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v_x_2084_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2099_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
lean_object* v___x_2097_; 
v___x_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
return v___x_2097_;
}
}
}
else
{
lean_object* v_a_2100_; uint8_t v_closed_2101_; 
v_a_2100_ = lean_ctor_get(v_x_2084_, 0);
lean_inc(v_a_2100_);
lean_dec_ref_known(v_x_2084_, 1);
v_closed_2101_ = lean_ctor_get_uint8(v_a_2100_, sizeof(void*)*6);
if (v_closed_2101_ == 0)
{
lean_object* v_pendingConsumer_2102_; 
v_pendingConsumer_2102_ = lean_ctor_get(v_a_2100_, 1);
lean_inc(v_pendingConsumer_2102_);
lean_dec(v_a_2100_);
if (lean_obj_tag(v_pendingConsumer_2102_) == 0)
{
lean_object* v___f_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___f_2103_ = ((lean_object*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___closed__0));
v___x_2104_ = lean_unsigned_to_nat(0u);
v___x_2105_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v___y_2083_);
v___x_2106_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2104_, v_closed_2101_, v___x_2105_, v___f_2103_);
return v___x_2106_;
}
else
{
lean_dec_ref_known(v_pendingConsumer_2102_, 1);
v___y_2087_ = v_closed_2101_;
goto v___jp_2086_;
}
}
else
{
uint8_t v___x_2107_; 
lean_dec(v_a_2100_);
v___x_2107_ = 0;
v___y_2087_ = v___x_2107_;
goto v___jp_2086_;
}
}
v___jp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2088_ = lean_box(v___y_2087_);
v___x_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
v___x_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
return v___x_2090_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed(lean_object* v___y_2108_, lean_object* v_x_2109_, lean_object* v___y_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__1(v___y_2108_, v_x_2109_);
lean_dec(v___y_2108_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(lean_object* v___y_2112_, lean_object* v___f_2113_, lean_object* v_x_2114_){
_start:
{
if (lean_obj_tag(v_x_2114_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2124_; 
lean_dec_ref(v___f_2113_);
v_a_2116_ = lean_ctor_get(v_x_2114_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_x_2114_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2118_ = v_x_2114_;
v_isShared_2119_ = v_isSharedCheck_2124_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v_x_2114_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2124_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2122_; 
v___x_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
return v___x_2122_;
}
}
}
else
{
lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2136_; 
v_isSharedCheck_2136_ = !lean_is_exclusive(v_x_2114_);
if (v_isSharedCheck_2136_ == 0)
{
lean_object* v_unused_2137_; 
v_unused_2137_ = lean_ctor_get(v_x_2114_, 0);
lean_dec(v_unused_2137_);
v___x_2126_ = v_x_2114_;
v_isShared_2127_ = v_isSharedCheck_2136_;
goto v_resetjp_2125_;
}
else
{
lean_dec(v_x_2114_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2136_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2132_; 
v___x_2128_ = lean_unsigned_to_nat(0u);
v___x_2129_ = 0;
v___x_2130_ = lean_st_ref_get(v___y_2112_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v___x_2130_);
v___x_2132_ = v___x_2126_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2130_);
v___x_2132_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
v___x_2134_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2128_, v___x_2129_, v___x_2133_, v___f_2113_);
return v___x_2134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed(lean_object* v___y_2138_, lean_object* v___f_2139_, lean_object* v_x_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__2(v___y_2138_, v___f_2139_, v_x_2140_);
lean_dec(v___y_2138_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(lean_object* v___y_2143_){
_start:
{
lean_object* v___f_2145_; lean_object* v___f_2146_; lean_object* v___x_2147_; uint8_t v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
lean_inc_n(v___y_2143_, 2);
v___f_2145_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2145_, 0, v___y_2143_);
v___f_2146_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeIfAbandoned___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2146_, 0, v___y_2143_);
lean_closure_set(v___f_2146_, 1, v___f_2145_);
v___x_2147_ = lean_unsigned_to_nat(0u);
v___x_2148_ = 0;
v___x_2149_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_2143_);
v___x_2150_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2147_, v___x_2148_, v___x_2149_, v___f_2146_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___lam__3___boxed(lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Std_Http_Body_Stream_closeIfAbandoned___lam__3(v___y_2151_);
lean_dec(v___y_2151_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned(lean_object* v_stream_2155_){
_start:
{
lean_object* v___f_2157_; lean_object* v___x_2158_; 
v___f_2157_ = ((lean_object*)(l_Std_Http_Body_Stream_closeIfAbandoned___closed__0));
v___x_2158_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2155_, v___f_2157_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeIfAbandoned___boxed(lean_object* v_stream_2159_, lean_object* v_a_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Std_Http_Body_Stream_closeIfAbandoned(v_stream_2159_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0(lean_object* v___y_2162_, lean_object* v_x_2163_){
_start:
{
if (lean_obj_tag(v_x_2163_) == 0)
{
lean_object* v___x_2165_; 
v___x_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2165_, 0, v_x_2163_);
return v___x_2165_;
}
else
{
lean_object* v___x_2166_; 
lean_dec_ref_known(v_x_2163_, 1);
v___x_2166_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0(v___y_2162_);
return v___x_2166_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__0___boxed(lean_object* v___y_2167_, lean_object* v_x_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l_Std_Http_Body_Stream_closeWithError___lam__0(v___y_2167_, v_x_2168_);
lean_dec(v___y_2167_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1(lean_object* v_err_2171_, lean_object* v___y_2172_){
_start:
{
lean_object* v___f_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; lean_object* v___x_2177_; lean_object* v_fst_2179_; lean_object* v_snd_2180_; lean_object* v_pendingProducer_2185_; lean_object* v_pendingConsumer_2186_; lean_object* v_interestWaiter_2187_; uint8_t v_closed_2188_; lean_object* v_knownSize_2189_; lean_object* v_pendingIncompleteChunk_2190_; lean_object* v_closeError_2191_; lean_object* v___x_2192_; 
lean_inc(v___y_2172_);
v___f_2174_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeWithError___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2174_, 0, v___y_2172_);
v___x_2175_ = lean_unsigned_to_nat(0u);
v___x_2176_ = 0;
v___x_2177_ = lean_st_ref_take(v___y_2172_);
v_pendingProducer_2185_ = lean_ctor_get(v___x_2177_, 0);
v_pendingConsumer_2186_ = lean_ctor_get(v___x_2177_, 1);
v_interestWaiter_2187_ = lean_ctor_get(v___x_2177_, 2);
v_closed_2188_ = lean_ctor_get_uint8(v___x_2177_, sizeof(void*)*6);
v_knownSize_2189_ = lean_ctor_get(v___x_2177_, 3);
v_pendingIncompleteChunk_2190_ = lean_ctor_get(v___x_2177_, 4);
v_closeError_2191_ = lean_ctor_get(v___x_2177_, 5);
v___x_2192_ = lean_box(0);
if (lean_obj_tag(v_closeError_2191_) == 0)
{
lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2200_; 
lean_inc(v_pendingIncompleteChunk_2190_);
lean_inc(v_knownSize_2189_);
lean_inc(v_interestWaiter_2187_);
lean_inc(v_pendingConsumer_2186_);
lean_inc(v_pendingProducer_2185_);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2200_ == 0)
{
lean_object* v_unused_2201_; lean_object* v_unused_2202_; lean_object* v_unused_2203_; lean_object* v_unused_2204_; lean_object* v_unused_2205_; lean_object* v_unused_2206_; 
v_unused_2201_ = lean_ctor_get(v___x_2177_, 5);
lean_dec(v_unused_2201_);
v_unused_2202_ = lean_ctor_get(v___x_2177_, 4);
lean_dec(v_unused_2202_);
v_unused_2203_ = lean_ctor_get(v___x_2177_, 3);
lean_dec(v_unused_2203_);
v_unused_2204_ = lean_ctor_get(v___x_2177_, 2);
lean_dec(v_unused_2204_);
v_unused_2205_ = lean_ctor_get(v___x_2177_, 1);
lean_dec(v_unused_2205_);
v_unused_2206_ = lean_ctor_get(v___x_2177_, 0);
lean_dec(v_unused_2206_);
v___x_2194_ = v___x_2177_;
v_isShared_2195_ = v_isSharedCheck_2200_;
goto v_resetjp_2193_;
}
else
{
lean_dec(v___x_2177_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2200_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2196_, 0, v_err_2171_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 5, v___x_2196_);
v___x_2198_ = v___x_2194_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_pendingProducer_2185_);
lean_ctor_set(v_reuseFailAlloc_2199_, 1, v_pendingConsumer_2186_);
lean_ctor_set(v_reuseFailAlloc_2199_, 2, v_interestWaiter_2187_);
lean_ctor_set(v_reuseFailAlloc_2199_, 3, v_knownSize_2189_);
lean_ctor_set(v_reuseFailAlloc_2199_, 4, v_pendingIncompleteChunk_2190_);
lean_ctor_set(v_reuseFailAlloc_2199_, 5, v___x_2196_);
lean_ctor_set_uint8(v_reuseFailAlloc_2199_, sizeof(void*)*6, v_closed_2188_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
v_fst_2179_ = v___x_2192_;
v_snd_2180_ = v___x_2198_;
goto v___jp_2178_;
}
}
}
else
{
lean_dec(v_err_2171_);
v_fst_2179_ = v___x_2192_;
v_snd_2180_ = v___x_2177_;
goto v___jp_2178_;
}
v___jp_2178_:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2181_ = lean_st_ref_put(v___y_2172_, v_snd_2180_);
v___x_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2182_, 0, v_fst_2179_);
v___x_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
v___x_2184_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2175_, v___x_2176_, v___x_2183_, v___f_2174_);
return v___x_2184_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___lam__1___boxed(lean_object* v_err_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l_Std_Http_Body_Stream_closeWithError___lam__1(v_err_2207_, v___y_2208_);
lean_dec(v___y_2208_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError(lean_object* v_stream_2211_, lean_object* v_err_2212_){
_start:
{
lean_object* v___f_2214_; lean_object* v___x_2215_; 
v___f_2214_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_closeWithError___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2214_, 0, v_err_2212_);
v___x_2215_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2211_, v___f_2214_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_closeWithError___boxed(lean_object* v_stream_2216_, lean_object* v_err_2217_, lean_object* v_a_2218_){
_start:
{
lean_object* v_res_2219_; 
v_res_2219_ = l_Std_Http_Body_Stream_closeWithError(v_stream_2216_, v_err_2217_);
return v_res_2219_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0(lean_object* v_____do__lift_2220_, lean_object* v___y_2221_){
_start:
{
uint8_t v_closed_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v_closed_2223_ = lean_ctor_get_uint8(v_____do__lift_2220_, sizeof(void*)*6);
v___x_2224_ = lean_box(v_closed_2223_);
v___x_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___lam__0___boxed(lean_object* v_____do__lift_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Std_Http_Body_Stream_isClosed___lam__0(v_____do__lift_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v_____do__lift_2227_);
return v_res_2230_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__1(void){
_start:
{
lean_object* v___x_2232_; 
v___x_2232_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_2232_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__2(void){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_2233_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__6(void){
_start:
{
lean_object* v___x_2239_; lean_object* v___f_2240_; lean_object* v___f_2241_; 
v___x_2239_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__2, &l_Std_Http_Body_Stream_isClosed___closed__2_once, _init_l_Std_Http_Body_Stream_isClosed___closed__2);
v___f_2240_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__5));
v___f_2241_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2241_, 0, v___f_2240_);
lean_closure_set(v___f_2241_, 1, v___x_2239_);
return v___f_2241_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__11(void){
_start:
{
lean_object* v___x_2250_; lean_object* v___f_2251_; lean_object* v___f_2252_; 
v___x_2250_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__2, &l_Std_Http_Body_Stream_isClosed___closed__2_once, _init_l_Std_Http_Body_Stream_isClosed___closed__2);
v___f_2251_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__10));
v___f_2252_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2252_, 0, v___f_2251_);
lean_closure_set(v___f_2252_, 1, v___x_2250_);
return v___f_2252_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__12(void){
_start:
{
lean_object* v___f_2253_; lean_object* v___x_2254_; 
v___f_2253_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__11, &l_Std_Http_Body_Stream_isClosed___closed__11_once, _init_l_Std_Http_Body_Stream_isClosed___closed__11);
v___x_2254_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_2254_, 0, lean_box(0));
lean_closure_set(v___x_2254_, 1, lean_box(0));
lean_closure_set(v___x_2254_, 2, lean_box(0));
lean_closure_set(v___x_2254_, 3, v___f_2253_);
return v___x_2254_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_isClosed___closed__13(void){
_start:
{
lean_object* v___f_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___f_2255_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__0));
v___x_2256_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__12, &l_Std_Http_Body_Stream_isClosed___closed__12_once, _init_l_Std_Http_Body_Stream_isClosed___closed__12);
v___x_2257_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___x_2258_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2258_, 0, lean_box(0));
lean_closure_set(v___x_2258_, 1, lean_box(0));
lean_closure_set(v___x_2258_, 2, v___x_2257_);
lean_closure_set(v___x_2258_, 3, lean_box(0));
lean_closure_set(v___x_2258_, 4, lean_box(0));
lean_closure_set(v___x_2258_, 5, v___x_2256_);
lean_closure_set(v___x_2258_, 6, v___f_2255_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed(lean_object* v_stream_2259_){
_start:
{
lean_object* v___x_2261_; lean_object* v___f_2262_; lean_object* v___f_2263_; lean_object* v___x_2264_; lean_object* v___x_214__overap_2265_; lean_object* v___x_2266_; 
v___x_2261_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2262_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2263_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_2264_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__13, &l_Std_Http_Body_Stream_isClosed___closed__13_once, _init_l_Std_Http_Body_Stream_isClosed___closed__13);
v___x_214__overap_2265_ = l_Std_Mutex_atomically___redArg(v___x_2261_, v___f_2262_, v___f_2263_, v_stream_2259_, v___x_2264_);
v___x_2266_ = lean_apply_1(v___x_214__overap_2265_, lean_box(0));
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_isClosed___boxed(lean_object* v_stream_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Std_Http_Body_Stream_isClosed(v_stream_2267_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0(lean_object* v_____do__lift_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v_knownSize_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v_knownSize_2273_ = lean_ctor_get(v_____do__lift_2270_, 3);
lean_inc(v_knownSize_2273_);
v___x_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2274_, 0, v_knownSize_2273_);
v___x_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___lam__0___boxed(lean_object* v_____do__lift_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Std_Http_Body_Stream_getKnownSize___lam__0(v_____do__lift_2276_, v___y_2277_);
lean_dec(v___y_2277_);
lean_dec_ref(v_____do__lift_2276_);
return v_res_2279_;
}
}
static lean_object* _init_l_Std_Http_Body_Stream_getKnownSize___closed__1(void){
_start:
{
lean_object* v___f_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___f_2281_ = ((lean_object*)(l_Std_Http_Body_Stream_getKnownSize___closed__0));
v___x_2282_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__12, &l_Std_Http_Body_Stream_isClosed___closed__12_once, _init_l_Std_Http_Body_Stream_isClosed___closed__12);
v___x_2283_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___x_2284_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2284_, 0, lean_box(0));
lean_closure_set(v___x_2284_, 1, lean_box(0));
lean_closure_set(v___x_2284_, 2, v___x_2283_);
lean_closure_set(v___x_2284_, 3, lean_box(0));
lean_closure_set(v___x_2284_, 4, lean_box(0));
lean_closure_set(v___x_2284_, 5, v___x_2282_);
lean_closure_set(v___x_2284_, 6, v___f_2281_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize(lean_object* v_stream_2285_){
_start:
{
lean_object* v___x_2287_; lean_object* v___f_2288_; lean_object* v___f_2289_; lean_object* v___x_2290_; lean_object* v___x_214__overap_2291_; lean_object* v___x_2292_; 
v___x_2287_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2288_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2289_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_2290_ = lean_obj_once(&l_Std_Http_Body_Stream_getKnownSize___closed__1, &l_Std_Http_Body_Stream_getKnownSize___closed__1_once, _init_l_Std_Http_Body_Stream_getKnownSize___closed__1);
v___x_214__overap_2291_ = l_Std_Mutex_atomically___redArg(v___x_2287_, v___f_2288_, v___f_2289_, v_stream_2285_, v___x_2290_);
v___x_2292_ = lean_apply_1(v___x_214__overap_2291_, lean_box(0));
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_getKnownSize___boxed(lean_object* v_stream_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Std_Http_Body_Stream_getKnownSize(v_stream_2293_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0(lean_object* v_size_2296_, lean_object* v___y_2297_){
_start:
{
lean_object* v___x_2299_; lean_object* v_pendingProducer_2300_; lean_object* v_pendingConsumer_2301_; lean_object* v_interestWaiter_2302_; uint8_t v_closed_2303_; lean_object* v_pendingIncompleteChunk_2304_; lean_object* v_closeError_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2314_; 
v___x_2299_ = lean_st_ref_take(v___y_2297_);
v_pendingProducer_2300_ = lean_ctor_get(v___x_2299_, 0);
v_pendingConsumer_2301_ = lean_ctor_get(v___x_2299_, 1);
v_interestWaiter_2302_ = lean_ctor_get(v___x_2299_, 2);
v_closed_2303_ = lean_ctor_get_uint8(v___x_2299_, sizeof(void*)*6);
v_pendingIncompleteChunk_2304_ = lean_ctor_get(v___x_2299_, 4);
v_closeError_2305_ = lean_ctor_get(v___x_2299_, 5);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2314_ == 0)
{
lean_object* v_unused_2315_; 
v_unused_2315_ = lean_ctor_get(v___x_2299_, 3);
lean_dec(v_unused_2315_);
v___x_2307_ = v___x_2299_;
v_isShared_2308_ = v_isSharedCheck_2314_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_closeError_2305_);
lean_inc(v_pendingIncompleteChunk_2304_);
lean_inc(v_interestWaiter_2302_);
lean_inc(v_pendingConsumer_2301_);
lean_inc(v_pendingProducer_2300_);
lean_dec(v___x_2299_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2314_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 3, v_size_2296_);
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_pendingProducer_2300_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v_pendingConsumer_2301_);
lean_ctor_set(v_reuseFailAlloc_2313_, 2, v_interestWaiter_2302_);
lean_ctor_set(v_reuseFailAlloc_2313_, 3, v_size_2296_);
lean_ctor_set(v_reuseFailAlloc_2313_, 4, v_pendingIncompleteChunk_2304_);
lean_ctor_set(v_reuseFailAlloc_2313_, 5, v_closeError_2305_);
lean_ctor_set_uint8(v_reuseFailAlloc_2313_, sizeof(void*)*6, v_closed_2303_);
v___x_2310_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2311_ = lean_st_ref_put(v___y_2297_, v___x_2310_);
v___x_2312_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed(lean_object* v_size_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_Std_Http_Body_Stream_setKnownSize___lam__0(v_size_2316_, v___y_2317_);
lean_dec(v___y_2317_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize(lean_object* v_stream_2320_, lean_object* v_size_2321_){
_start:
{
lean_object* v___f_2323_; lean_object* v___x_2324_; lean_object* v___f_2325_; lean_object* v___f_2326_; lean_object* v___x_207__overap_2327_; lean_object* v___x_2328_; 
v___f_2323_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_setKnownSize___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2323_, 0, v_size_2321_);
v___x_2324_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__1, &l_Std_Http_Body_Stream_isClosed___closed__1_once, _init_l_Std_Http_Body_Stream_isClosed___closed__1);
v___f_2325_ = lean_obj_once(&l_Std_Http_Body_Stream_isClosed___closed__6, &l_Std_Http_Body_Stream_isClosed___closed__6_once, _init_l_Std_Http_Body_Stream_isClosed___closed__6);
v___f_2326_ = ((lean_object*)(l_Std_Http_Body_Stream_isClosed___closed__7));
v___x_207__overap_2327_ = l_Std_Mutex_atomically___redArg(v___x_2324_, v___f_2325_, v___f_2326_, v_stream_2320_, v___f_2323_);
v___x_2328_ = lean_apply_1(v___x_207__overap_2327_, lean_box(0));
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_setKnownSize___boxed(lean_object* v_stream_2329_, lean_object* v_size_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Std_Http_Body_Stream_setKnownSize(v_stream_2329_, v_size_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(lean_object* v_pendingProducer_2333_, lean_object* v_pendingConsumer_2334_, uint8_t v_closed_2335_, lean_object* v_knownSize_2336_, lean_object* v_pendingIncompleteChunk_2337_, lean_object* v_closeError_2338_, lean_object* v_a_2339_, lean_object* v___x_2340_, lean_object* v_x_2341_){
_start:
{
if (lean_obj_tag(v_x_2341_) == 0)
{
lean_object* v___x_2343_; 
lean_dec(v_closeError_2338_);
lean_dec(v_pendingIncompleteChunk_2337_);
lean_dec(v_knownSize_2336_);
lean_dec(v_pendingConsumer_2334_);
lean_dec(v_pendingProducer_2333_);
v___x_2343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2343_, 0, v_x_2341_);
return v___x_2343_;
}
else
{
lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2354_; 
v_isSharedCheck_2354_ = !lean_is_exclusive(v_x_2341_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; 
v_unused_2355_ = lean_ctor_get(v_x_2341_, 0);
lean_dec(v_unused_2355_);
v___x_2345_ = v_x_2341_;
v_isShared_2346_ = v_isSharedCheck_2354_;
goto v_resetjp_2344_;
}
else
{
lean_dec(v_x_2341_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2354_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2347_ = lean_box(0);
v___x_2348_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2348_, 0, v_pendingProducer_2333_);
lean_ctor_set(v___x_2348_, 1, v_pendingConsumer_2334_);
lean_ctor_set(v___x_2348_, 2, v___x_2347_);
lean_ctor_set(v___x_2348_, 3, v_knownSize_2336_);
lean_ctor_set(v___x_2348_, 4, v_pendingIncompleteChunk_2337_);
lean_ctor_set(v___x_2348_, 5, v_closeError_2338_);
lean_ctor_set_uint8(v___x_2348_, sizeof(void*)*6, v_closed_2335_);
v___x_2349_ = lean_st_ref_swap(v_a_2339_, v___x_2348_);
lean_dec(v___x_2349_);
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 0, v___x_2340_);
v___x_2351_ = v___x_2345_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2340_);
v___x_2351_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_object* v___x_2352_; 
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
return v___x_2352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed(lean_object* v_pendingProducer_2356_, lean_object* v_pendingConsumer_2357_, lean_object* v_closed_2358_, lean_object* v_knownSize_2359_, lean_object* v_pendingIncompleteChunk_2360_, lean_object* v_closeError_2361_, lean_object* v_a_2362_, lean_object* v___x_2363_, lean_object* v_x_2364_, lean_object* v___y_2365_){
_start:
{
uint8_t v_closed_boxed_2366_; lean_object* v_res_2367_; 
v_closed_boxed_2366_ = lean_unbox(v_closed_2358_);
v_res_2367_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0(v_pendingProducer_2356_, v_pendingConsumer_2357_, v_closed_boxed_2366_, v_knownSize_2359_, v_pendingIncompleteChunk_2360_, v_closeError_2361_, v_a_2362_, v___x_2363_, v_x_2364_);
lean_dec(v_a_2362_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(lean_object* v_a_2368_, lean_object* v_x_2369_){
_start:
{
if (lean_obj_tag(v_x_2369_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2379_; 
v_a_2371_ = lean_ctor_get(v_x_2369_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v_x_2369_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2373_ = v_x_2369_;
v_isShared_2374_ = v_isSharedCheck_2379_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v_x_2369_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2379_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
return v___x_2377_;
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v_interestWaiter_2381_; 
v_a_2380_ = lean_ctor_get(v_x_2369_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v_x_2369_, 1);
v_interestWaiter_2381_ = lean_ctor_get(v_a_2380_, 2);
lean_inc(v_interestWaiter_2381_);
if (lean_obj_tag(v_interestWaiter_2381_) == 1)
{
lean_object* v_pendingProducer_2382_; lean_object* v_pendingConsumer_2383_; uint8_t v_closed_2384_; lean_object* v_knownSize_2385_; lean_object* v_pendingIncompleteChunk_2386_; lean_object* v_closeError_2387_; lean_object* v_val_2388_; uint8_t v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___f_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; uint8_t v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_pendingProducer_2382_ = lean_ctor_get(v_a_2380_, 0);
lean_inc(v_pendingProducer_2382_);
v_pendingConsumer_2383_ = lean_ctor_get(v_a_2380_, 1);
lean_inc(v_pendingConsumer_2383_);
v_closed_2384_ = lean_ctor_get_uint8(v_a_2380_, sizeof(void*)*6);
v_knownSize_2385_ = lean_ctor_get(v_a_2380_, 3);
lean_inc(v_knownSize_2385_);
v_pendingIncompleteChunk_2386_ = lean_ctor_get(v_a_2380_, 4);
lean_inc(v_pendingIncompleteChunk_2386_);
v_closeError_2387_ = lean_ctor_get(v_a_2380_, 5);
lean_inc(v_closeError_2387_);
lean_dec(v_a_2380_);
v_val_2388_ = lean_ctor_get(v_interestWaiter_2381_, 0);
lean_inc(v_val_2388_);
lean_dec_ref_known(v_interestWaiter_2381_, 1);
v___x_2389_ = 1;
v___x_2390_ = lean_box(0);
v___x_2391_ = lean_box(v_closed_2384_);
lean_inc(v_a_2368_);
v___f_2392_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__0___boxed), 10, 8);
lean_closure_set(v___f_2392_, 0, v_pendingProducer_2382_);
lean_closure_set(v___f_2392_, 1, v_pendingConsumer_2383_);
lean_closure_set(v___f_2392_, 2, v___x_2391_);
lean_closure_set(v___f_2392_, 3, v_knownSize_2385_);
lean_closure_set(v___f_2392_, 4, v_pendingIncompleteChunk_2386_);
lean_closure_set(v___f_2392_, 5, v_closeError_2387_);
lean_closure_set(v___f_2392_, 6, v_a_2368_);
lean_closure_set(v___f_2392_, 7, v___x_2390_);
v___x_2393_ = lean_unsigned_to_nat(0u);
v___x_2394_ = 0;
v___x_2395_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_resolveInterestWaiter(v_val_2388_, v___x_2389_);
lean_dec(v_val_2388_);
v___x_2396_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2397_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2393_, v___x_2394_, v___x_2396_, v___f_2392_);
return v___x_2397_;
}
else
{
lean_object* v___x_2398_; 
lean_dec(v_interestWaiter_2381_);
lean_dec(v_a_2380_);
v___x_2398_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_2398_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed(lean_object* v_a_2399_, lean_object* v_x_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1(v_a_2399_, v_x_2400_);
lean_dec(v_a_2399_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(lean_object* v_a_2403_){
_start:
{
lean_object* v___f_2405_; lean_object* v___x_2406_; uint8_t v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
lean_inc(v_a_2403_);
v___f_2405_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2405_, 0, v_a_2403_);
v___x_2406_ = lean_unsigned_to_nat(0u);
v___x_2407_ = 0;
v___x_2408_ = lean_st_ref_get(v_a_2403_);
v___x_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
v___x_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
v___x_2411_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2406_, v___x_2407_, v___x_2410_, v___f_2405_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0___boxed(lean_object* v_a_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(v_a_2412_);
lean_dec(v_a_2412_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(lean_object* v_promise_2415_, lean_object* v_x_2416_){
_start:
{
if (lean_obj_tag(v_x_2416_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2426_; 
v_a_2418_ = lean_ctor_get(v_x_2416_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_x_2416_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2420_ = v_x_2416_;
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v_x_2416_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
lean_object* v___x_2424_; 
v___x_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2423_);
return v___x_2424_;
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2436_; 
v_a_2427_ = lean_ctor_get(v_x_2416_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v_x_2416_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2429_ = v_x_2416_;
v_isShared_2430_ = v_isSharedCheck_2436_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v_x_2416_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2436_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2431_; lean_object* v___x_2433_; 
v___x_2431_ = lean_io_promise_resolve(v_a_2427_, v_promise_2415_);
if (v_isShared_2430_ == 0)
{
lean_ctor_set(v___x_2429_, 0, v___x_2431_);
v___x_2433_ = v___x_2429_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2431_);
v___x_2433_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
return v___x_2434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed(lean_object* v_promise_2437_, lean_object* v_x_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0(v_promise_2437_, v_x_2438_);
lean_dec(v_promise_2437_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(lean_object* v_lose_2441_, lean_object* v___y_2442_, lean_object* v___f_2443_, lean_object* v_x_2444_){
_start:
{
if (lean_obj_tag(v_x_2444_) == 0)
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2454_; 
lean_dec_ref(v___f_2443_);
lean_dec_ref(v_lose_2441_);
v_a_2446_ = lean_ctor_get(v_x_2444_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v_x_2444_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2448_ = v_x_2444_;
v_isShared_2449_ = v_isSharedCheck_2454_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v_x_2444_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2454_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2446_);
v___x_2451_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2451_);
return v___x_2452_;
}
}
}
else
{
lean_object* v_a_2455_; uint8_t v___x_2456_; 
v_a_2455_ = lean_ctor_get(v_x_2444_, 0);
lean_inc(v_a_2455_);
lean_dec_ref_known(v_x_2444_, 1);
v___x_2456_ = lean_unbox(v_a_2455_);
lean_dec(v_a_2455_);
if (v___x_2456_ == 0)
{
lean_object* v___x_2457_; 
lean_dec_ref(v___f_2443_);
lean_inc(v___y_2442_);
v___x_2457_ = lean_apply_2(v_lose_2441_, v___y_2442_, lean_box(0));
return v___x_2457_;
}
else
{
lean_object* v___x_2458_; uint8_t v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
lean_dec_ref(v_lose_2441_);
v___x_2458_ = lean_unsigned_to_nat(0u);
v___x_2459_ = 0;
v___x_2460_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0(v___y_2442_);
v___x_2461_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2458_, v___x_2459_, v___x_2460_, v___f_2443_);
return v___x_2461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed(lean_object* v_lose_2462_, lean_object* v___y_2463_, lean_object* v___f_2464_, lean_object* v_x_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1(v_lose_2462_, v___y_2463_, v___f_2464_, v_x_2465_);
lean_dec(v___y_2463_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(lean_object* v_w_2468_, lean_object* v_lose_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v_finished_2472_; lean_object* v_promise_2473_; lean_object* v___f_2474_; lean_object* v___f_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; lean_object* v___x_2478_; uint8_t v___y_2480_; uint8_t v___x_2488_; 
v_finished_2472_ = lean_ctor_get(v_w_2468_, 0);
lean_inc(v_finished_2472_);
v_promise_2473_ = lean_ctor_get(v_w_2468_, 1);
lean_inc(v_promise_2473_);
lean_dec_ref(v_w_2468_);
v___f_2474_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2474_, 0, v_promise_2473_);
lean_inc(v___y_2470_);
v___f_2475_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2475_, 0, v_lose_2469_);
lean_closure_set(v___f_2475_, 1, v___y_2470_);
lean_closure_set(v___f_2475_, 2, v___f_2474_);
v___x_2476_ = lean_unsigned_to_nat(0u);
v___x_2477_ = 0;
v___x_2478_ = lean_st_ref_take(v_finished_2472_);
v___x_2488_ = lean_unbox(v___x_2478_);
lean_dec(v___x_2478_);
if (v___x_2488_ == 0)
{
uint8_t v___x_2489_; 
v___x_2489_ = 1;
v___y_2480_ = v___x_2489_;
goto v___jp_2479_;
}
else
{
v___y_2480_ = v___x_2477_;
goto v___jp_2479_;
}
v___jp_2479_:
{
uint8_t v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2481_ = 1;
v___x_2482_ = lean_box(v___x_2481_);
v___x_2483_ = lean_st_ref_put(v_finished_2472_, v___x_2482_);
lean_dec(v_finished_2472_);
v___x_2484_ = lean_box(v___y_2480_);
v___x_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
v___x_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2485_);
v___x_2487_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2476_, v___x_2477_, v___x_2486_, v___f_2475_);
return v___x_2487_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1___boxed(lean_object* v_w_2490_, lean_object* v_lose_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(v_w_2490_, v_lose_2491_, v___y_2492_);
lean_dec(v___y_2492_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1(lean_object* v___y_2495_, lean_object* v_x_2496_){
_start:
{
if (lean_obj_tag(v_x_2496_) == 0)
{
lean_object* v___x_2498_; 
v___x_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2498_, 0, v_x_2496_);
return v___x_2498_;
}
else
{
lean_object* v___x_2499_; 
lean_dec_ref_known(v_x_2496_, 1);
v___x_2499_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_signalInterest___at___00Std_Http_Body_Stream_recvSelector_spec__0(v___y_2495_);
return v___x_2499_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__1___boxed(lean_object* v___y_2500_, lean_object* v_x_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Std_Http_Body_Stream_recvSelector___lam__1(v___y_2500_, v_x_2501_);
lean_dec(v___y_2500_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0(lean_object* v_waiter_2504_, lean_object* v_pendingProducer_2505_, lean_object* v_interestWaiter_2506_, uint8_t v_closed_2507_, lean_object* v_knownSize_2508_, lean_object* v_pendingIncompleteChunk_2509_, lean_object* v_closeError_2510_, uint8_t v_a_2511_, lean_object* v_____r_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___f_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
lean_inc(v___y_2513_);
v___f_2515_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2515_, 0, v___y_2513_);
v___x_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2516_, 0, v_waiter_2504_);
v___x_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
v___x_2518_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_2518_, 0, v_pendingProducer_2505_);
lean_ctor_set(v___x_2518_, 1, v___x_2517_);
lean_ctor_set(v___x_2518_, 2, v_interestWaiter_2506_);
lean_ctor_set(v___x_2518_, 3, v_knownSize_2508_);
lean_ctor_set(v___x_2518_, 4, v_pendingIncompleteChunk_2509_);
lean_ctor_set(v___x_2518_, 5, v_closeError_2510_);
lean_ctor_set_uint8(v___x_2518_, sizeof(void*)*6, v_closed_2507_);
v___x_2519_ = lean_unsigned_to_nat(0u);
v___x_2520_ = lean_st_ref_swap(v___y_2513_, v___x_2518_);
lean_dec(v___x_2520_);
v___x_2521_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_2522_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2519_, v_a_2511_, v___x_2521_, v___f_2515_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__0___boxed(lean_object* v_waiter_2523_, lean_object* v_pendingProducer_2524_, lean_object* v_interestWaiter_2525_, lean_object* v_closed_2526_, lean_object* v_knownSize_2527_, lean_object* v_pendingIncompleteChunk_2528_, lean_object* v_closeError_2529_, lean_object* v_a_2530_, lean_object* v_____r_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
uint8_t v_closed_boxed_2534_; uint8_t v_a_6017__boxed_2535_; lean_object* v_res_2536_; 
v_closed_boxed_2534_ = lean_unbox(v_closed_2526_);
v_a_6017__boxed_2535_ = lean_unbox(v_a_2530_);
v_res_2536_ = l_Std_Http_Body_Stream_recvSelector___lam__0(v_waiter_2523_, v_pendingProducer_2524_, v_interestWaiter_2525_, v_closed_boxed_2534_, v_knownSize_2527_, v_pendingIncompleteChunk_2528_, v_closeError_2529_, v_a_6017__boxed_2535_, v_____r_2531_, v___y_2532_);
lean_dec(v___y_2532_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3(lean_object* v_waiter_2541_, uint8_t v_a_2542_, lean_object* v___y_2543_, lean_object* v_x_2544_){
_start:
{
if (lean_obj_tag(v_x_2544_) == 0)
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2554_; 
lean_dec_ref(v_waiter_2541_);
v_a_2546_ = lean_ctor_get(v_x_2544_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v_x_2544_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2548_ = v_x_2544_;
v_isShared_2549_ = v_isSharedCheck_2554_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v_x_2544_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2554_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2551_; 
if (v_isShared_2549_ == 0)
{
v___x_2551_ = v___x_2548_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2546_);
v___x_2551_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
lean_object* v___x_2552_; 
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
return v___x_2552_;
}
}
}
else
{
lean_object* v_a_2555_; lean_object* v_pendingProducer_2556_; lean_object* v_pendingConsumer_2557_; lean_object* v_interestWaiter_2558_; uint8_t v_closed_2559_; lean_object* v_knownSize_2560_; lean_object* v_pendingIncompleteChunk_2561_; lean_object* v_closeError_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___f_2565_; 
v_a_2555_ = lean_ctor_get(v_x_2544_, 0);
lean_inc(v_a_2555_);
lean_dec_ref_known(v_x_2544_, 1);
v_pendingProducer_2556_ = lean_ctor_get(v_a_2555_, 0);
lean_inc_n(v_pendingProducer_2556_, 2);
v_pendingConsumer_2557_ = lean_ctor_get(v_a_2555_, 1);
lean_inc(v_pendingConsumer_2557_);
v_interestWaiter_2558_ = lean_ctor_get(v_a_2555_, 2);
lean_inc_n(v_interestWaiter_2558_, 2);
v_closed_2559_ = lean_ctor_get_uint8(v_a_2555_, sizeof(void*)*6);
v_knownSize_2560_ = lean_ctor_get(v_a_2555_, 3);
lean_inc_n(v_knownSize_2560_, 2);
v_pendingIncompleteChunk_2561_ = lean_ctor_get(v_a_2555_, 4);
lean_inc_n(v_pendingIncompleteChunk_2561_, 2);
v_closeError_2562_ = lean_ctor_get(v_a_2555_, 5);
lean_inc_n(v_closeError_2562_, 2);
lean_dec(v_a_2555_);
v___x_2563_ = lean_box(v_closed_2559_);
v___x_2564_ = lean_box(v_a_2542_);
lean_inc_ref(v_waiter_2541_);
v___f_2565_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__0___boxed), 11, 8);
lean_closure_set(v___f_2565_, 0, v_waiter_2541_);
lean_closure_set(v___f_2565_, 1, v_pendingProducer_2556_);
lean_closure_set(v___f_2565_, 2, v_interestWaiter_2558_);
lean_closure_set(v___f_2565_, 3, v___x_2563_);
lean_closure_set(v___f_2565_, 4, v_knownSize_2560_);
lean_closure_set(v___f_2565_, 5, v_pendingIncompleteChunk_2561_);
lean_closure_set(v___f_2565_, 6, v_closeError_2562_);
lean_closure_set(v___f_2565_, 7, v___x_2564_);
if (lean_obj_tag(v_pendingConsumer_2557_) == 0)
{
lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_dec_ref(v___f_2565_);
v___x_2566_ = lean_box(0);
v___x_2567_ = l_Std_Http_Body_Stream_recvSelector___lam__0(v_waiter_2541_, v_pendingProducer_2556_, v_interestWaiter_2558_, v_closed_2559_, v_knownSize_2560_, v_pendingIncompleteChunk_2561_, v_closeError_2562_, v_a_2542_, v___x_2566_, v___y_2543_);
return v___x_2567_;
}
else
{
lean_object* v___f_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
lean_dec_ref_known(v_pendingConsumer_2557_, 1);
lean_dec(v_closeError_2562_);
lean_dec(v_pendingIncompleteChunk_2561_);
lean_dec(v_knownSize_2560_);
lean_dec(v_interestWaiter_2558_);
lean_dec(v_pendingProducer_2556_);
lean_dec_ref(v_waiter_2541_);
lean_inc(v___y_2543_);
v___f_2568_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_close_x27___at___00Std_Http_Body_Stream_close_spec__0___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2568_, 0, v___f_2565_);
lean_closure_set(v___f_2568_, 1, v___y_2543_);
v___x_2569_ = lean_unsigned_to_nat(0u);
v___x_2570_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__3___closed__1));
v___x_2571_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2569_, v_a_2542_, v___x_2570_, v___f_2568_);
return v___x_2571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__3___boxed(lean_object* v_waiter_2572_, lean_object* v_a_2573_, lean_object* v___y_2574_, lean_object* v_x_2575_, lean_object* v___y_2576_){
_start:
{
uint8_t v_a_6058__boxed_2577_; lean_object* v_res_2578_; 
v_a_6058__boxed_2577_ = lean_unbox(v_a_2573_);
v_res_2578_ = l_Std_Http_Body_Stream_recvSelector___lam__3(v_waiter_2572_, v_a_6058__boxed_2577_, v___y_2574_, v_x_2575_);
lean_dec(v___y_2574_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2(lean_object* v___x_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2579_);
v___x_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__2___boxed(lean_object* v___x_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Std_Http_Body_Stream_recvSelector___lam__2(v___x_2584_, v___y_2585_);
lean_dec(v___y_2585_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4(lean_object* v_waiter_2590_, lean_object* v___y_2591_, lean_object* v_x_2592_){
_start:
{
if (lean_obj_tag(v_x_2592_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2602_; 
lean_dec_ref(v_waiter_2590_);
v_a_2594_ = lean_ctor_get(v_x_2592_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v_x_2592_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2596_ = v_x_2592_;
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v_x_2592_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2602_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2594_);
v___x_2599_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
lean_object* v___x_2600_; 
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
return v___x_2600_;
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2619_; 
v_a_2603_ = lean_ctor_get(v_x_2592_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v_x_2592_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2605_ = v_x_2592_;
v_isShared_2606_ = v_isSharedCheck_2619_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v_x_2592_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2619_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
uint8_t v___x_2607_; 
v___x_2607_ = lean_unbox(v_a_2603_);
if (v___x_2607_ == 0)
{
lean_object* v___f_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2612_; 
lean_inc(v___y_2591_);
lean_inc(v_a_2603_);
v___f_2608_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2608_, 0, v_waiter_2590_);
lean_closure_set(v___f_2608_, 1, v_a_2603_);
lean_closure_set(v___f_2608_, 2, v___y_2591_);
v___x_2609_ = lean_unsigned_to_nat(0u);
v___x_2610_ = lean_st_ref_get(v___y_2591_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v___x_2610_);
v___x_2612_ = v___x_2605_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
lean_object* v___x_2613_; uint8_t v___x_2614_; lean_object* v___x_2615_; 
v___x_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2612_);
v___x_2614_ = lean_unbox(v_a_2603_);
lean_dec(v_a_2603_);
v___x_2615_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2609_, v___x_2614_, v___x_2613_, v___f_2608_);
return v___x_2615_;
}
}
else
{
lean_object* v___f_2617_; lean_object* v___x_2618_; 
lean_del_object(v___x_2605_);
lean_dec(v_a_2603_);
v___f_2617_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_2618_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_recvSelector_spec__1(v_waiter_2590_, v___f_2617_, v___y_2591_);
return v___x_2618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__4___boxed(lean_object* v_waiter_2620_, lean_object* v___y_2621_, lean_object* v_x_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Std_Http_Body_Stream_recvSelector___lam__4(v_waiter_2620_, v___y_2621_, v_x_2622_);
lean_dec(v___y_2621_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5(lean_object* v___y_2625_, lean_object* v___f_2626_, lean_object* v_x_2627_){
_start:
{
if (lean_obj_tag(v_x_2627_) == 0)
{
lean_object* v___x_2629_; 
lean_dec_ref(v___f_2626_);
v___x_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2629_, 0, v_x_2627_);
return v___x_2629_;
}
else
{
lean_object* v___x_2630_; uint8_t v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_dec_ref_known(v_x_2627_, 1);
v___x_2630_ = lean_unsigned_to_nat(0u);
v___x_2631_ = 0;
v___x_2632_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReady_x27___at___00Std_Http_Body_Stream_tryRecvBody_spec__0(v___y_2625_);
v___x_2633_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2630_, v___x_2631_, v___x_2632_, v___f_2626_);
return v___x_2633_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__5___boxed(lean_object* v___y_2634_, lean_object* v___f_2635_, lean_object* v_x_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Std_Http_Body_Stream_recvSelector___lam__5(v___y_2634_, v___f_2635_, v_x_2636_);
lean_dec(v___y_2634_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6(lean_object* v_waiter_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v___f_2642_; lean_object* v___f_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
lean_inc_n(v___y_2640_, 2);
v___f_2642_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__4___boxed), 4, 2);
lean_closure_set(v___f_2642_, 0, v_waiter_2639_);
lean_closure_set(v___f_2642_, 1, v___y_2640_);
v___f_2643_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__5___boxed), 4, 2);
lean_closure_set(v___f_2643_, 0, v___y_2640_);
lean_closure_set(v___f_2643_, 1, v___f_2642_);
v___x_2644_ = lean_unsigned_to_nat(0u);
v___x_2645_ = 0;
v___x_2646_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_2640_);
v___x_2647_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2644_, v___x_2645_, v___x_2646_, v___f_2643_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__6___boxed(lean_object* v_waiter_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Std_Http_Body_Stream_recvSelector___lam__6(v_waiter_2648_, v___y_2649_);
lean_dec(v___y_2649_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7(lean_object* v_stream_2652_, lean_object* v_waiter_2653_){
_start:
{
lean_object* v___f_2655_; lean_object* v___x_2656_; 
v___f_2655_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__6___boxed), 3, 1);
lean_closure_set(v___f_2655_, 0, v_waiter_2653_);
v___x_2656_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_2652_, v___f_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector___lam__7___boxed(lean_object* v_stream_2657_, lean_object* v_waiter_2658_, lean_object* v___y_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l_Std_Http_Body_Stream_recvSelector___lam__7(v_stream_2657_, v_waiter_2658_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_recvSelector(lean_object* v_stream_2662_){
_start:
{
lean_object* v___f_2663_; lean_object* v___f_2664_; lean_object* v___f_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___f_2663_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___closed__0));
lean_inc_ref_n(v_stream_2662_, 2);
v___f_2664_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_recvSelector___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2664_, 0, v_stream_2662_);
v___f_2665_ = ((lean_object*)(l_Std_Http_Body_Stream_tryRecvBody___closed__1));
v___x_2666_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2666_, 0, lean_box(0));
lean_closure_set(v___x_2666_, 1, lean_box(0));
lean_closure_set(v___x_2666_, 2, v_stream_2662_);
lean_closure_set(v___x_2666_, 3, v___f_2665_);
v___x_2667_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_2667_, 0, lean_box(0));
lean_closure_set(v___x_2667_, 1, lean_box(0));
lean_closure_set(v___x_2667_, 2, v_stream_2662_);
lean_closure_set(v___x_2667_, 3, v___f_2663_);
v___x_2668_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2666_);
lean_ctor_set(v___x_2668_, 1, v___f_2664_);
lean_ctor_set(v___x_2668_, 2, v___x_2667_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__0(lean_object* v_step_2669_, lean_object* v_acc_2670_, lean_object* v_x_2671_){
_start:
{
if (lean_obj_tag(v_x_2671_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2681_; 
lean_dec(v_acc_2670_);
lean_dec_ref(v_step_2669_);
v_a_2673_ = lean_ctor_get(v_x_2671_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v_x_2671_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2675_ = v_x_2671_;
v_isShared_2676_ = v_isSharedCheck_2681_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v_x_2671_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2681_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2678_; 
if (v_isShared_2676_ == 0)
{
v___x_2678_ = v___x_2675_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_a_2673_);
v___x_2678_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
lean_object* v___x_2679_; 
v___x_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2678_);
return v___x_2679_;
}
}
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2693_; 
v_a_2682_ = lean_ctor_get(v_x_2671_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v_x_2671_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2684_ = v_x_2671_;
v_isShared_2685_ = v_isSharedCheck_2693_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v_x_2671_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2693_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
if (lean_obj_tag(v_a_2682_) == 1)
{
lean_object* v_val_2686_; lean_object* v___x_2687_; 
lean_del_object(v___x_2684_);
v_val_2686_ = lean_ctor_get(v_a_2682_, 0);
lean_inc(v_val_2686_);
lean_dec_ref_known(v_a_2682_, 1);
v___x_2687_ = lean_apply_3(v_step_2669_, v_val_2686_, v_acc_2670_, lean_box(0));
return v___x_2687_;
}
else
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_dec(v_a_2682_);
lean_dec_ref(v_step_2669_);
v___x_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2688_, 0, v_acc_2670_);
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 0, v___x_2688_);
v___x_2690_ = v___x_2684_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
lean_object* v___x_2691_; 
v___x_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
return v___x_2691_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__0___boxed(lean_object* v_step_2694_, lean_object* v_acc_2695_, lean_object* v_x_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Std_Http_Body_Stream_forIn___redArg___lam__0(v_step_2694_, v_acc_2695_, v_x_2696_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__1(lean_object* v_step_2699_, lean_object* v_stream_2700_, lean_object* v_x_2701_, lean_object* v_acc_2702_){
_start:
{
lean_object* v___f_2704_; lean_object* v___x_2705_; uint8_t v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___f_2704_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2704_, 0, v_step_2699_);
lean_closure_set(v___f_2704_, 1, v_acc_2702_);
v___x_2705_ = lean_unsigned_to_nat(0u);
v___x_2706_ = 0;
v___x_2707_ = l_Std_Http_Body_Stream_recv(v_stream_2700_);
v___x_2708_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2705_, v___x_2706_, v___x_2707_, v___f_2704_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__1___boxed(lean_object* v_step_2709_, lean_object* v_stream_2710_, lean_object* v_x_2711_, lean_object* v_acc_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l_Std_Http_Body_Stream_forIn___redArg___lam__1(v_step_2709_, v_stream_2710_, v_x_2711_, v_acc_2712_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__2(lean_object* v_a_2715_, lean_object* v_x_2716_){
_start:
{
if (lean_obj_tag(v_x_2716_) == 0)
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2726_; 
v_a_2718_ = lean_ctor_get(v_x_2716_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_x_2716_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2720_ = v_x_2716_;
v_isShared_2721_ = v_isSharedCheck_2726_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v_x_2716_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2726_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
lean_object* v___x_2724_; 
v___x_2724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
return v___x_2724_;
}
}
}
else
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
lean_dec_ref_known(v_x_2716_, 1);
v___x_2727_ = l_IO_Promise_result_x21___redArg(v_a_2715_);
v___x_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
return v___x_2728_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__2___boxed(lean_object* v_a_2729_, lean_object* v_x_2730_, lean_object* v___y_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Std_Http_Body_Stream_forIn___redArg___lam__2(v_a_2729_, v_x_2730_);
lean_dec(v_a_2729_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__3(lean_object* v___f_2733_, lean_object* v___x_2734_, lean_object* v_acc_2735_, lean_object* v_x_2736_){
_start:
{
if (lean_obj_tag(v_x_2736_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2746_; 
lean_dec(v_acc_2735_);
lean_dec(v___x_2734_);
lean_dec_ref(v___f_2733_);
v_a_2738_ = lean_ctor_get(v_x_2736_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v_x_2736_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2740_ = v_x_2736_;
v_isShared_2741_ = v_isSharedCheck_2746_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v_x_2736_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2746_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
lean_object* v___x_2744_; 
v___x_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2743_);
return v___x_2744_;
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2759_; 
v_a_2747_ = lean_ctor_get(v_x_2736_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v_x_2736_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2749_ = v_x_2736_;
v_isShared_2750_ = v_isSharedCheck_2759_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v_x_2736_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2759_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___f_2751_; uint8_t v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2755_; 
lean_inc(v_a_2747_);
v___f_2751_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2751_, 0, v_a_2747_);
v___x_2752_ = 0;
lean_inc(v___x_2734_);
v___x_2753_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_2733_, v___x_2734_, v_a_2747_, v_acc_2735_);
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 0, v___x_2753_);
v___x_2755_ = v___x_2749_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v___x_2753_);
v___x_2755_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2755_);
v___x_2757_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2734_, v___x_2752_, v___x_2756_, v___f_2751_);
return v___x_2757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___lam__3___boxed(lean_object* v___f_2760_, lean_object* v___x_2761_, lean_object* v_acc_2762_, lean_object* v_x_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Std_Http_Body_Stream_forIn___redArg___lam__3(v___f_2760_, v___x_2761_, v_acc_2762_, v_x_2763_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg(lean_object* v_stream_2766_, lean_object* v_acc_2767_, lean_object* v_step_2768_){
_start:
{
lean_object* v___f_2770_; lean_object* v___x_2771_; lean_object* v___f_2772_; uint8_t v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___f_2770_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_2770_, 0, v_step_2768_);
lean_closure_set(v___f_2770_, 1, v_stream_2766_);
v___x_2771_ = lean_unsigned_to_nat(0u);
v___f_2772_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2772_, 0, v___f_2770_);
lean_closure_set(v___f_2772_, 1, v___x_2771_);
lean_closure_set(v___f_2772_, 2, v_acc_2767_);
v___x_2773_ = 0;
v___x_2774_ = lean_io_promise_new();
v___x_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
v___x_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2775_);
v___x_2777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2771_, v___x_2773_, v___x_2776_, v___f_2772_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___redArg___boxed(lean_object* v_stream_2778_, lean_object* v_acc_2779_, lean_object* v_step_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Std_Http_Body_Stream_forIn___redArg(v_stream_2778_, v_acc_2779_, v_step_2780_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn(lean_object* v_00_u03b2_2783_, lean_object* v_stream_2784_, lean_object* v_acc_2785_, lean_object* v_step_2786_){
_start:
{
lean_object* v___f_2788_; lean_object* v___x_2789_; lean_object* v___f_2790_; uint8_t v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___f_2788_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__1___boxed), 5, 2);
lean_closure_set(v___f_2788_, 0, v_step_2786_);
lean_closure_set(v___f_2788_, 1, v_stream_2784_);
v___x_2789_ = lean_unsigned_to_nat(0u);
v___f_2790_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2790_, 0, v___f_2788_);
lean_closure_set(v___f_2790_, 1, v___x_2789_);
lean_closure_set(v___f_2790_, 2, v_acc_2785_);
v___x_2791_ = 0;
v___x_2792_ = lean_io_promise_new();
v___x_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2792_);
v___x_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
v___x_2795_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2789_, v___x_2791_, v___x_2794_, v___f_2790_);
return v___x_2795_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn___boxed(lean_object* v_00_u03b2_2796_, lean_object* v_stream_2797_, lean_object* v_acc_2798_, lean_object* v_step_2799_, lean_object* v_a_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = l_Std_Http_Body_Stream_forIn(v_00_u03b2_2796_, v_stream_2797_, v_acc_2798_, v_step_2799_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__0(lean_object* v___y_2802_){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2804_, 0, v___y_2802_);
v___x_2805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2804_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__0___boxed(lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Std_Http_Body_Stream_forIn_x27___redArg___lam__0(v___y_2806_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__1(lean_object* v_x_2809_){
_start:
{
lean_object* v___x_2811_; 
v___x_2811_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_tryRecv_x27___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___at___00Std_Http_Body_Stream_tryRecv_spec__0_spec__0___lam__2___closed__0));
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__1___boxed(lean_object* v_x_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_Std_Http_Body_Stream_forIn_x27___redArg___lam__1(v_x_2812_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__2(lean_object* v_x_2815_){
_start:
{
if (lean_obj_tag(v_x_2815_) == 0)
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2825_; 
v_a_2817_ = lean_ctor_get(v_x_2815_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v_x_2815_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2819_ = v_x_2815_;
v_isShared_2820_ = v_isSharedCheck_2825_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v_x_2815_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2825_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
lean_object* v___x_2823_; 
v___x_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2822_);
return v___x_2823_;
}
}
}
else
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2836_; 
v_a_2826_ = lean_ctor_get(v_x_2815_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v_x_2815_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2828_ = v_x_2815_;
v_isShared_2829_ = v_isSharedCheck_2836_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v_x_2815_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2836_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v_token_2830_; lean_object* v___x_2831_; lean_object* v___x_2833_; 
v_token_2830_ = lean_ctor_get(v_a_2826_, 1);
lean_inc_ref(v_token_2830_);
lean_dec(v_a_2826_);
v___x_2831_ = l_Std_CancellationToken_selector(v_token_2830_);
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 0, v___x_2831_);
v___x_2833_ = v___x_2828_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v___x_2831_);
v___x_2833_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
lean_object* v___x_2834_; 
v___x_2834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2833_);
return v___x_2834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__2___boxed(lean_object* v_x_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_Std_Http_Body_Stream_forIn_x27___redArg___lam__2(v_x_2837_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__3(lean_object* v_step_2840_, lean_object* v_b_2841_, lean_object* v_a_2842_, lean_object* v_x_2843_){
_start:
{
if (lean_obj_tag(v_x_2843_) == 0)
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2853_; 
lean_dec(v_b_2841_);
lean_dec_ref(v_step_2840_);
v_a_2845_ = lean_ctor_get(v_x_2843_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_x_2843_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2847_ = v_x_2843_;
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v_x_2843_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; 
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
return v___x_2851_;
}
}
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2865_; 
v_a_2854_ = lean_ctor_get(v_x_2843_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v_x_2843_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2856_ = v_x_2843_;
v_isShared_2857_ = v_isSharedCheck_2865_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v_x_2843_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2865_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
if (lean_obj_tag(v_a_2854_) == 1)
{
lean_object* v_val_2858_; lean_object* v___x_2859_; 
lean_del_object(v___x_2856_);
v_val_2858_ = lean_ctor_get(v_a_2854_, 0);
lean_inc(v_val_2858_);
lean_dec_ref_known(v_a_2854_, 1);
lean_inc_ref(v_a_2842_);
v___x_2859_ = lean_apply_4(v_step_2840_, v_val_2858_, v_b_2841_, v_a_2842_, lean_box(0));
return v___x_2859_;
}
else
{
lean_object* v___x_2860_; lean_object* v___x_2862_; 
lean_dec(v_a_2854_);
lean_dec_ref(v_step_2840_);
v___x_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2860_, 0, v_b_2841_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 0, v___x_2860_);
v___x_2862_ = v___x_2856_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v___x_2860_);
v___x_2862_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
lean_object* v___x_2863_; 
v___x_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2862_);
return v___x_2863_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__3___boxed(lean_object* v_step_2866_, lean_object* v_b_2867_, lean_object* v_a_2868_, lean_object* v_x_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v_res_2871_; 
v_res_2871_ = l_Std_Http_Body_Stream_forIn_x27___redArg___lam__3(v_step_2866_, v_b_2867_, v_a_2868_, v_x_2869_);
lean_dec_ref(v_a_2868_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__4(lean_object* v_stream_2872_, lean_object* v___f_2873_, lean_object* v___f_2874_, lean_object* v___f_2875_, lean_object* v_x_2876_){
_start:
{
if (lean_obj_tag(v_x_2876_) == 0)
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2886_; 
lean_dec_ref(v___f_2875_);
lean_dec_ref(v___f_2874_);
lean_dec_ref(v___f_2873_);
lean_dec_ref(v_stream_2872_);
v_a_2878_ = lean_ctor_get(v_x_2876_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v_x_2876_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2880_ = v_x_2876_;
v_isShared_2881_ = v_isSharedCheck_2886_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v_x_2876_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2886_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2883_; 
if (v_isShared_2881_ == 0)
{
v___x_2883_ = v___x_2880_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2878_);
v___x_2883_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
return v___x_2884_;
}
}
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; uint8_t v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v_a_2887_ = lean_ctor_get(v_x_2876_, 0);
lean_inc(v_a_2887_);
lean_dec_ref_known(v_x_2876_, 1);
v___x_2888_ = l_Std_Http_Body_Stream_recvSelector(v_stream_2872_);
v___x_2889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2888_);
lean_ctor_set(v___x_2889_, 1, v___f_2873_);
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v_a_2887_);
lean_ctor_set(v___x_2890_, 1, v___f_2874_);
v___x_2891_ = lean_unsigned_to_nat(2u);
v___x_2892_ = lean_mk_empty_array_with_capacity(v___x_2891_);
v___x_2893_ = lean_array_push(v___x_2892_, v___x_2889_);
v___x_2894_ = lean_array_push(v___x_2893_, v___x_2890_);
v___x_2895_ = lean_unsigned_to_nat(0u);
v___x_2896_ = 0;
v___x_2897_ = l_Std_Async_Selectable_one___redArg(v___x_2894_);
v___x_2898_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2895_, v___x_2896_, v___x_2897_, v___f_2875_);
return v___x_2898_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__4___boxed(lean_object* v_stream_2899_, lean_object* v___f_2900_, lean_object* v___f_2901_, lean_object* v___f_2902_, lean_object* v_x_2903_, lean_object* v___y_2904_){
_start:
{
lean_object* v_res_2905_; 
v_res_2905_ = l_Std_Http_Body_Stream_forIn_x27___redArg___lam__4(v_stream_2899_, v___f_2900_, v___f_2901_, v___f_2902_, v_x_2903_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__5(lean_object* v_step_2906_, lean_object* v_a_2907_, lean_object* v_stream_2908_, lean_object* v___f_2909_, lean_object* v___f_2910_, lean_object* v___f_2911_, lean_object* v_u_2912_, lean_object* v_b_2913_){
_start:
{
lean_object* v___f_2915_; lean_object* v___f_2916_; lean_object* v___x_2917_; uint8_t v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
lean_inc_ref_n(v_a_2907_, 2);
v___f_2915_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn_x27___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2915_, 0, v_step_2906_);
lean_closure_set(v___f_2915_, 1, v_b_2913_);
lean_closure_set(v___f_2915_, 2, v_a_2907_);
v___f_2916_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn_x27___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2916_, 0, v_stream_2908_);
lean_closure_set(v___f_2916_, 1, v___f_2909_);
lean_closure_set(v___f_2916_, 2, v___f_2910_);
lean_closure_set(v___f_2916_, 3, v___f_2915_);
v___x_2917_ = lean_unsigned_to_nat(0u);
v___x_2918_ = 0;
v___x_2919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2919_, 0, v_a_2907_);
v___x_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2919_);
v___x_2921_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2917_, v___x_2918_, v___x_2920_, v___f_2911_);
v___x_2922_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2917_, v___x_2918_, v___x_2921_, v___f_2916_);
return v___x_2922_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___lam__5___boxed(lean_object* v_step_2923_, lean_object* v_a_2924_, lean_object* v_stream_2925_, lean_object* v___f_2926_, lean_object* v___f_2927_, lean_object* v___f_2928_, lean_object* v_u_2929_, lean_object* v_b_2930_, lean_object* v___y_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l_Std_Http_Body_Stream_forIn_x27___redArg___lam__5(v_step_2923_, v_a_2924_, v_stream_2925_, v___f_2926_, v___f_2927_, v___f_2928_, v_u_2929_, v_b_2930_);
lean_dec_ref(v_a_2924_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg(lean_object* v_stream_2936_, lean_object* v_acc_2937_, lean_object* v_step_2938_, lean_object* v_a_2939_){
_start:
{
lean_object* v___f_2941_; lean_object* v___f_2942_; lean_object* v___f_2943_; lean_object* v___f_2944_; lean_object* v___x_2945_; lean_object* v___f_2946_; uint8_t v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___f_2941_ = ((lean_object*)(l_Std_Http_Body_Stream_forIn_x27___redArg___closed__0));
v___f_2942_ = ((lean_object*)(l_Std_Http_Body_Stream_forIn_x27___redArg___closed__1));
v___f_2943_ = ((lean_object*)(l_Std_Http_Body_Stream_forIn_x27___redArg___closed__2));
lean_inc_ref(v_a_2939_);
v___f_2944_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn_x27___redArg___lam__5___boxed), 9, 6);
lean_closure_set(v___f_2944_, 0, v_step_2938_);
lean_closure_set(v___f_2944_, 1, v_a_2939_);
lean_closure_set(v___f_2944_, 2, v_stream_2936_);
lean_closure_set(v___f_2944_, 3, v___f_2941_);
lean_closure_set(v___f_2944_, 4, v___f_2942_);
lean_closure_set(v___f_2944_, 5, v___f_2943_);
v___x_2945_ = lean_unsigned_to_nat(0u);
v___f_2946_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2946_, 0, v___f_2944_);
lean_closure_set(v___f_2946_, 1, v___x_2945_);
lean_closure_set(v___f_2946_, 2, v_acc_2937_);
v___x_2947_ = 0;
v___x_2948_ = lean_io_promise_new();
v___x_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
v___x_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
v___x_2951_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2945_, v___x_2947_, v___x_2950_, v___f_2946_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___redArg___boxed(lean_object* v_stream_2952_, lean_object* v_acc_2953_, lean_object* v_step_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l_Std_Http_Body_Stream_forIn_x27___redArg(v_stream_2952_, v_acc_2953_, v_step_2954_, v_a_2955_);
lean_dec_ref(v_a_2955_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27(lean_object* v_00_u03b2_2958_, lean_object* v_stream_2959_, lean_object* v_acc_2960_, lean_object* v_step_2961_, lean_object* v_a_2962_){
_start:
{
lean_object* v___f_2964_; lean_object* v___f_2965_; lean_object* v___f_2966_; lean_object* v___f_2967_; lean_object* v___x_2968_; lean_object* v___f_2969_; uint8_t v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___f_2964_ = ((lean_object*)(l_Std_Http_Body_Stream_forIn_x27___redArg___closed__0));
v___f_2965_ = ((lean_object*)(l_Std_Http_Body_Stream_forIn_x27___redArg___closed__1));
v___f_2966_ = ((lean_object*)(l_Std_Http_Body_Stream_forIn_x27___redArg___closed__2));
lean_inc_ref(v_a_2962_);
v___f_2967_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn_x27___redArg___lam__5___boxed), 9, 6);
lean_closure_set(v___f_2967_, 0, v_step_2961_);
lean_closure_set(v___f_2967_, 1, v_a_2962_);
lean_closure_set(v___f_2967_, 2, v_stream_2959_);
lean_closure_set(v___f_2967_, 3, v___f_2964_);
lean_closure_set(v___f_2967_, 4, v___f_2965_);
lean_closure_set(v___f_2967_, 5, v___f_2966_);
v___x_2968_ = lean_unsigned_to_nat(0u);
v___f_2969_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_forIn___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_2969_, 0, v___f_2967_);
lean_closure_set(v___f_2969_, 1, v___x_2968_);
lean_closure_set(v___f_2969_, 2, v_acc_2960_);
v___x_2970_ = 0;
v___x_2971_ = lean_io_promise_new();
v___x_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
v___x_2973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
v___x_2974_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2968_, v___x_2970_, v___x_2973_, v___f_2969_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_forIn_x27___boxed(lean_object* v_00_u03b2_2975_, lean_object* v_stream_2976_, lean_object* v_acc_2977_, lean_object* v_step_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_){
_start:
{
lean_object* v_res_2981_; 
v_res_2981_ = l_Std_Http_Body_Stream_forIn_x27(v_00_u03b2_2975_, v_stream_2976_, v_acc_2977_, v_step_2978_, v_a_2979_);
lean_dec_ref(v_a_2979_);
return v_res_2981_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(lean_object* v_stream_2984_, lean_object* v___f_2985_, lean_object* v___f_2986_, lean_object* v_x_2987_){
_start:
{
if (lean_obj_tag(v_x_2987_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2997_; 
lean_dec_ref(v___f_2986_);
lean_dec_ref(v___f_2985_);
lean_dec_ref(v_stream_2984_);
v_a_2989_ = lean_ctor_get(v_x_2987_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v_x_2987_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2991_ = v_x_2987_;
v_isShared_2992_ = v_isSharedCheck_2997_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v_x_2987_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2997_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
lean_object* v___x_2995_; 
v___x_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2994_);
return v___x_2995_;
}
}
}
else
{
lean_object* v_a_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v_a_2998_ = lean_ctor_get(v_x_2987_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v_x_2987_, 1);
v___x_2999_ = l_Std_Http_Body_Stream_recvSelector(v_stream_2984_);
v___x_3000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2999_);
lean_ctor_set(v___x_3000_, 1, v___f_2985_);
v___x_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3001_, 0, v_a_2998_);
lean_ctor_set(v___x_3001_, 1, v___f_2986_);
v___x_3002_ = lean_unsigned_to_nat(2u);
v___x_3003_ = lean_mk_empty_array_with_capacity(v___x_3002_);
v___x_3004_ = lean_array_push(v___x_3003_, v___x_3000_);
v___x_3005_ = lean_array_push(v___x_3004_, v___x_3001_);
v___x_3006_ = l_Std_Async_Selectable_one___redArg(v___x_3005_);
return v___x_3006_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed(lean_object* v_stream_3007_, lean_object* v___f_3008_, lean_object* v___f_3009_, lean_object* v_x_3010_, lean_object* v___y_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3(v_stream_3007_, v___f_3008_, v___f_3009_, v_x_3010_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(lean_object* v___f_3013_, lean_object* v___f_3014_, lean_object* v___f_3015_, lean_object* v_stream_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v___f_3019_; lean_object* v___x_3020_; uint8_t v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___f_3019_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3019_, 0, v_stream_3016_);
lean_closure_set(v___f_3019_, 1, v___f_3013_);
lean_closure_set(v___f_3019_, 2, v___f_3014_);
v___x_3020_ = lean_unsigned_to_nat(0u);
v___x_3021_ = 0;
lean_inc_ref(v___y_3017_);
v___x_3022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3022_, 0, v___y_3017_);
v___x_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
v___x_3024_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3020_, v___x_3021_, v___x_3023_, v___f_3015_);
v___x_3025_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3020_, v___x_3021_, v___x_3024_, v___f_3019_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0___boxed(lean_object* v___f_3026_, lean_object* v___f_3027_, lean_object* v___f_3028_, lean_object* v_stream_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
lean_object* v_res_3032_; 
v_res_3032_ = l_Std_Http_Body_Stream_instNextChunkContextAsync___lam__0(v___f_3026_, v___f_3027_, v___f_3028_, v_stream_3029_, v___y_3030_);
lean_dec_ref(v___y_3030_);
return v_res_3032_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1(lean_object* v_inst_3040_, uint64_t v_val_3041_, lean_object* v_toBind_3042_, lean_object* v___f_3043_, lean_object* v_____r_3044_){
_start:
{
lean_object* v_throw_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v_throw_3045_ = lean_ctor_get(v_inst_3040_, 0);
lean_inc(v_throw_3045_);
lean_dec_ref(v_inst_3040_);
v___x_3046_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__0));
v___x_3047_ = lean_uint64_to_nat(v_val_3041_);
v___x_3048_ = l_Nat_reprFast(v___x_3047_);
v___x_3049_ = lean_string_append(v___x_3046_, v___x_3048_);
lean_dec_ref(v___x_3048_);
v___x_3050_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___closed__1));
v___x_3051_ = lean_string_append(v___x_3049_, v___x_3050_);
v___x_3052_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
v___x_3053_ = lean_apply_2(v_throw_3045_, lean_box(0), v___x_3052_);
v___x_3054_ = lean_apply_4(v_toBind_3042_, lean_box(0), lean_box(0), v___x_3053_, v___f_3043_);
return v___x_3054_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___boxed(lean_object* v_inst_3055_, lean_object* v_val_3056_, lean_object* v_toBind_3057_, lean_object* v___f_3058_, lean_object* v_____r_3059_){
_start:
{
uint64_t v_val_292__boxed_3060_; lean_object* v_res_3061_; 
v_val_292__boxed_3060_ = lean_unbox_uint64(v_val_3056_);
lean_dec_ref(v_val_3056_);
v_res_3061_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1(v_inst_3055_, v_val_292__boxed_3060_, v_toBind_3057_, v___f_3058_, v_____r_3059_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__2(lean_object* v_toPure_3062_, lean_object* v_result_3063_, lean_object* v_maximumSize_3064_, lean_object* v_inst_3065_, lean_object* v_inst_3066_, lean_object* v_inst_3067_, lean_object* v_inst_3068_, lean_object* v_stream_3069_, lean_object* v_toBind_3070_, lean_object* v_____do__lift_3071_){
_start:
{
if (lean_obj_tag(v_____do__lift_3071_) == 0)
{
lean_object* v___x_3072_; 
lean_dec(v_toBind_3070_);
lean_dec_ref(v_stream_3069_);
lean_dec(v_inst_3068_);
lean_dec(v_inst_3067_);
lean_dec_ref(v_inst_3066_);
lean_dec_ref(v_inst_3065_);
lean_dec(v_maximumSize_3064_);
v___x_3072_ = lean_apply_2(v_toPure_3062_, lean_box(0), v_result_3063_);
return v___x_3072_;
}
else
{
lean_object* v_val_3073_; lean_object* v_data_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; lean_object* v_result_3079_; 
lean_dec(v_toPure_3062_);
v_val_3073_ = lean_ctor_get(v_____do__lift_3071_, 0);
v_data_3074_ = lean_ctor_get(v_val_3073_, 0);
v___x_3075_ = lean_unsigned_to_nat(0u);
v___x_3076_ = lean_byte_array_size(v_result_3063_);
v___x_3077_ = lean_byte_array_size(v_data_3074_);
v___x_3078_ = 0;
v_result_3079_ = lean_byte_array_copy_slice(v_data_3074_, v___x_3075_, v_result_3063_, v___x_3076_, v___x_3077_, v___x_3078_);
if (lean_obj_tag(v_maximumSize_3064_) == 1)
{
lean_object* v_val_3080_; lean_object* v___x_3081_; uint64_t v___x_3082_; uint64_t v___x_3083_; uint8_t v___x_3084_; 
v_val_3080_ = lean_ctor_get(v_maximumSize_3064_, 0);
v___x_3081_ = lean_byte_array_size(v_result_3079_);
v___x_3082_ = lean_uint64_of_nat(v___x_3081_);
v___x_3083_ = lean_unbox_uint64(v_val_3080_);
v___x_3084_ = lean_uint64_dec_lt(v___x_3083_, v___x_3082_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; 
lean_dec(v_toBind_3070_);
v___x_3085_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3065_, v_inst_3066_, v_inst_3067_, v_inst_3068_, v_stream_3069_, v_maximumSize_3064_, v_result_3079_);
return v___x_3085_;
}
else
{
lean_object* v___f_3086_; lean_object* v___f_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_inc(v_val_3080_);
lean_inc_ref(v_stream_3069_);
lean_inc(v_inst_3067_);
lean_inc_ref(v_inst_3066_);
v___f_3086_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0), 8, 7);
lean_closure_set(v___f_3086_, 0, v_inst_3065_);
lean_closure_set(v___f_3086_, 1, v_inst_3066_);
lean_closure_set(v___f_3086_, 2, v_inst_3067_);
lean_closure_set(v___f_3086_, 3, v_inst_3068_);
lean_closure_set(v___f_3086_, 4, v_stream_3069_);
lean_closure_set(v___f_3086_, 5, v_maximumSize_3064_);
lean_closure_set(v___f_3086_, 6, v_result_3079_);
lean_inc(v_toBind_3070_);
v___f_3087_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3087_, 0, v_inst_3066_);
lean_closure_set(v___f_3087_, 1, v_val_3080_);
lean_closure_set(v___f_3087_, 2, v_toBind_3070_);
lean_closure_set(v___f_3087_, 3, v___f_3086_);
v___x_3088_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_close___boxed), 2, 1);
lean_closure_set(v___x_3088_, 0, v_stream_3069_);
v___x_3089_ = lean_apply_2(v_inst_3067_, lean_box(0), v___x_3088_);
v___x_3090_ = lean_apply_4(v_toBind_3070_, lean_box(0), lean_box(0), v___x_3089_, v___f_3087_);
return v___x_3090_;
}
}
else
{
lean_object* v___x_3091_; 
lean_dec(v_toBind_3070_);
v___x_3091_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3065_, v_inst_3066_, v_inst_3067_, v_inst_3068_, v_stream_3069_, v_maximumSize_3064_, v_result_3079_);
return v___x_3091_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__2___boxed(lean_object* v_toPure_3092_, lean_object* v_result_3093_, lean_object* v_maximumSize_3094_, lean_object* v_inst_3095_, lean_object* v_inst_3096_, lean_object* v_inst_3097_, lean_object* v_inst_3098_, lean_object* v_stream_3099_, lean_object* v_toBind_3100_, lean_object* v_____do__lift_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__2(v_toPure_3092_, v_result_3093_, v_maximumSize_3094_, v_inst_3095_, v_inst_3096_, v_inst_3097_, v_inst_3098_, v_stream_3099_, v_toBind_3100_, v_____do__lift_3101_);
lean_dec(v_____do__lift_3101_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(lean_object* v_inst_3103_, lean_object* v_inst_3104_, lean_object* v_inst_3105_, lean_object* v_inst_3106_, lean_object* v_stream_3107_, lean_object* v_maximumSize_3108_, lean_object* v_result_3109_){
_start:
{
lean_object* v_toApplicative_3110_; lean_object* v_toBind_3111_; lean_object* v_toPure_3112_; lean_object* v___x_3113_; lean_object* v___f_3114_; lean_object* v___x_3115_; 
v_toApplicative_3110_ = lean_ctor_get(v_inst_3103_, 0);
v_toBind_3111_ = lean_ctor_get(v_inst_3103_, 1);
lean_inc_n(v_toBind_3111_, 2);
v_toPure_3112_ = lean_ctor_get(v_toApplicative_3110_, 1);
lean_inc(v_toPure_3112_);
lean_inc(v_inst_3106_);
lean_inc_ref(v_stream_3107_);
v___x_3113_ = lean_apply_1(v_inst_3106_, v_stream_3107_);
v___f_3114_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__2___boxed), 10, 9);
lean_closure_set(v___f_3114_, 0, v_toPure_3112_);
lean_closure_set(v___f_3114_, 1, v_result_3109_);
lean_closure_set(v___f_3114_, 2, v_maximumSize_3108_);
lean_closure_set(v___f_3114_, 3, v_inst_3103_);
lean_closure_set(v___f_3114_, 4, v_inst_3104_);
lean_closure_set(v___f_3114_, 5, v_inst_3105_);
lean_closure_set(v___f_3114_, 6, v_inst_3106_);
lean_closure_set(v___f_3114_, 7, v_stream_3107_);
lean_closure_set(v___f_3114_, 8, v_toBind_3111_);
v___x_3115_ = lean_apply_4(v_toBind_3111_, lean_box(0), lean_box(0), v___x_3113_, v___f_3114_);
return v___x_3115_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg___lam__0(lean_object* v_inst_3116_, lean_object* v_inst_3117_, lean_object* v_inst_3118_, lean_object* v_inst_3119_, lean_object* v_stream_3120_, lean_object* v_maximumSize_3121_, lean_object* v_result_3122_, lean_object* v_____r_3123_){
_start:
{
lean_object* v___x_3124_; 
v___x_3124_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3116_, v_inst_3117_, v_inst_3118_, v_inst_3119_, v_stream_3120_, v_maximumSize_3121_, v_result_3122_);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop(lean_object* v_m_3125_, lean_object* v_inst_3126_, lean_object* v_inst_3127_, lean_object* v_inst_3128_, lean_object* v_inst_3129_, lean_object* v_stream_3130_, lean_object* v_maximumSize_3131_, lean_object* v_result_3132_){
_start:
{
lean_object* v___x_3133_; 
v___x_3133_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3126_, v_inst_3127_, v_inst_3128_, v_inst_3129_, v_stream_3130_, v_maximumSize_3131_, v_result_3132_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg___lam__0(lean_object* v_inst_3134_, lean_object* v_inst_3135_, lean_object* v_toPure_3136_, lean_object* v_result_3137_){
_start:
{
lean_object* v___x_3138_; 
v___x_3138_ = lean_apply_1(v_inst_3134_, v_result_3137_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3148_; 
lean_dec(v_toPure_3136_);
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3141_ = v___x_3138_;
v_isShared_3142_ = v_isSharedCheck_3148_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3138_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3148_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v_throw_3143_; lean_object* v___x_3145_; 
v_throw_3143_ = lean_ctor_get(v_inst_3135_, 0);
lean_inc(v_throw_3143_);
lean_dec_ref(v_inst_3135_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set_tag(v___x_3141_, 18);
v___x_3145_ = v___x_3141_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3139_);
v___x_3145_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
lean_object* v___x_3146_; 
v___x_3146_ = lean_apply_2(v_throw_3143_, lean_box(0), v___x_3145_);
return v___x_3146_;
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3150_; 
lean_dec_ref(v_inst_3135_);
v_a_3149_ = lean_ctor_get(v___x_3138_, 0);
lean_inc(v_a_3149_);
lean_dec_ref_known(v___x_3138_, 1);
v___x_3150_ = lean_apply_2(v_toPure_3136_, lean_box(0), v_a_3149_);
return v___x_3150_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll___redArg(lean_object* v_inst_3151_, lean_object* v_inst_3152_, lean_object* v_inst_3153_, lean_object* v_inst_3154_, lean_object* v_inst_3155_, lean_object* v_stream_3156_, lean_object* v_maximumSize_3157_){
_start:
{
lean_object* v_toApplicative_3158_; lean_object* v_toBind_3159_; lean_object* v_toPure_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___f_3163_; lean_object* v___x_3164_; 
v_toApplicative_3158_ = lean_ctor_get(v_inst_3152_, 0);
v_toBind_3159_ = lean_ctor_get(v_inst_3152_, 1);
lean_inc(v_toBind_3159_);
v_toPure_3160_ = lean_ctor_get(v_toApplicative_3158_, 1);
lean_inc(v_toPure_3160_);
v___x_3161_ = l_ByteArray_empty;
lean_inc_ref(v_inst_3153_);
v___x_3162_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_readAll_loop___redArg(v_inst_3152_, v_inst_3153_, v_inst_3154_, v_inst_3155_, v_stream_3156_, v_maximumSize_3157_, v___x_3161_);
v___f_3163_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_readAll___redArg___lam__0), 4, 3);
lean_closure_set(v___f_3163_, 0, v_inst_3151_);
lean_closure_set(v___f_3163_, 1, v_inst_3153_);
lean_closure_set(v___f_3163_, 2, v_toPure_3160_);
v___x_3164_ = lean_apply_4(v_toBind_3159_, lean_box(0), lean_box(0), v___x_3162_, v___f_3163_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_readAll(lean_object* v_00_u03b1_3165_, lean_object* v_m_3166_, lean_object* v_inst_3167_, lean_object* v_inst_3168_, lean_object* v_inst_3169_, lean_object* v_inst_3170_, lean_object* v_inst_3171_, lean_object* v_stream_3172_, lean_object* v_maximumSize_3173_){
_start:
{
lean_object* v___x_3174_; 
v___x_3174_ = l_Std_Http_Body_Stream_readAll___redArg(v_inst_3167_, v_inst_3168_, v_inst_3169_, v_inst_3170_, v_inst_3171_, v_stream_3172_, v_maximumSize_3173_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0(lean_object* v_toPure_3175_, lean_object* v_____r_3176_){
_start:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3177_ = lean_box(0);
v___x_3178_ = lean_apply_2(v_toPure_3175_, lean_box(0), v___x_3177_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(lean_object* v_toPure_3179_, uint64_t v_consumed_3180_, lean_object* v_drainLimit_3181_, lean_object* v_inst_3182_, lean_object* v_inst_3183_, lean_object* v_stream_3184_, lean_object* v_closeStream_3185_, lean_object* v_toBind_3186_, lean_object* v___f_3187_, lean_object* v_____do__lift_3188_){
_start:
{
if (lean_obj_tag(v_____do__lift_3188_) == 0)
{
lean_object* v___x_3189_; lean_object* v___x_3190_; 
lean_dec(v___f_3187_);
lean_dec(v_toBind_3186_);
lean_dec(v_closeStream_3185_);
lean_dec_ref(v_stream_3184_);
lean_dec(v_inst_3183_);
lean_dec_ref(v_inst_3182_);
lean_dec(v_drainLimit_3181_);
v___x_3189_ = lean_box(0);
v___x_3190_ = lean_apply_2(v_toPure_3179_, lean_box(0), v___x_3189_);
return v___x_3190_;
}
else
{
lean_object* v_val_3191_; lean_object* v_data_3192_; lean_object* v___x_3193_; uint64_t v___x_3194_; uint64_t v_consumed_3195_; 
lean_dec(v_toPure_3179_);
v_val_3191_ = lean_ctor_get(v_____do__lift_3188_, 0);
v_data_3192_ = lean_ctor_get(v_val_3191_, 0);
v___x_3193_ = lean_byte_array_size(v_data_3192_);
v___x_3194_ = lean_uint64_of_nat(v___x_3193_);
v_consumed_3195_ = lean_uint64_add(v_consumed_3180_, v___x_3194_);
if (lean_obj_tag(v_drainLimit_3181_) == 1)
{
lean_object* v_val_3196_; uint64_t v___x_3197_; uint8_t v___x_3198_; 
v_val_3196_ = lean_ctor_get(v_drainLimit_3181_, 0);
v___x_3197_ = lean_unbox_uint64(v_val_3196_);
v___x_3198_ = lean_uint64_dec_lt(v___x_3197_, v_consumed_3195_);
if (v___x_3198_ == 0)
{
lean_object* v___x_3199_; 
lean_dec(v___f_3187_);
lean_dec(v_toBind_3186_);
v___x_3199_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3182_, v_inst_3183_, v_stream_3184_, v_drainLimit_3181_, v_closeStream_3185_, v_consumed_3195_);
return v___x_3199_;
}
else
{
lean_object* v___x_3200_; 
lean_dec_ref_known(v_drainLimit_3181_, 1);
lean_dec_ref(v_stream_3184_);
lean_dec(v_inst_3183_);
lean_dec_ref(v_inst_3182_);
v___x_3200_ = lean_apply_4(v_toBind_3186_, lean_box(0), lean_box(0), v_closeStream_3185_, v___f_3187_);
return v___x_3200_;
}
}
else
{
lean_object* v___x_3201_; 
lean_dec(v___f_3187_);
lean_dec(v_toBind_3186_);
v___x_3201_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3182_, v_inst_3183_, v_stream_3184_, v_drainLimit_3181_, v_closeStream_3185_, v_consumed_3195_);
return v___x_3201_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed(lean_object* v_toPure_3202_, lean_object* v_consumed_3203_, lean_object* v_drainLimit_3204_, lean_object* v_inst_3205_, lean_object* v_inst_3206_, lean_object* v_stream_3207_, lean_object* v_closeStream_3208_, lean_object* v_toBind_3209_, lean_object* v___f_3210_, lean_object* v_____do__lift_3211_){
_start:
{
uint64_t v_consumed_boxed_3212_; lean_object* v_res_3213_; 
v_consumed_boxed_3212_ = lean_unbox_uint64(v_consumed_3203_);
lean_dec_ref(v_consumed_3203_);
v_res_3213_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1(v_toPure_3202_, v_consumed_boxed_3212_, v_drainLimit_3204_, v_inst_3205_, v_inst_3206_, v_stream_3207_, v_closeStream_3208_, v_toBind_3209_, v___f_3210_, v_____do__lift_3211_);
lean_dec(v_____do__lift_3211_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(lean_object* v_inst_3214_, lean_object* v_inst_3215_, lean_object* v_stream_3216_, lean_object* v_drainLimit_3217_, lean_object* v_closeStream_3218_, uint64_t v_consumed_3219_){
_start:
{
lean_object* v_toApplicative_3220_; lean_object* v_toBind_3221_; lean_object* v_toPure_3222_; lean_object* v___x_3223_; lean_object* v___f_3224_; lean_object* v___x_3225_; lean_object* v___f_3226_; lean_object* v___x_3227_; 
v_toApplicative_3220_ = lean_ctor_get(v_inst_3214_, 0);
v_toBind_3221_ = lean_ctor_get(v_inst_3214_, 1);
lean_inc_n(v_toBind_3221_, 2);
v_toPure_3222_ = lean_ctor_get(v_toApplicative_3220_, 1);
lean_inc_n(v_toPure_3222_, 2);
lean_inc(v_inst_3215_);
lean_inc_ref(v_stream_3216_);
v___x_3223_ = lean_apply_1(v_inst_3215_, v_stream_3216_);
v___f_3224_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3224_, 0, v_toPure_3222_);
v___x_3225_ = lean_box_uint64(v_consumed_3219_);
v___f_3226_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_3226_, 0, v_toPure_3222_);
lean_closure_set(v___f_3226_, 1, v___x_3225_);
lean_closure_set(v___f_3226_, 2, v_drainLimit_3217_);
lean_closure_set(v___f_3226_, 3, v_inst_3214_);
lean_closure_set(v___f_3226_, 4, v_inst_3215_);
lean_closure_set(v___f_3226_, 5, v_stream_3216_);
lean_closure_set(v___f_3226_, 6, v_closeStream_3218_);
lean_closure_set(v___f_3226_, 7, v_toBind_3221_);
lean_closure_set(v___f_3226_, 8, v___f_3224_);
v___x_3227_ = lean_apply_4(v_toBind_3221_, lean_box(0), lean_box(0), v___x_3223_, v___f_3226_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg___boxed(lean_object* v_inst_3228_, lean_object* v_inst_3229_, lean_object* v_stream_3230_, lean_object* v_drainLimit_3231_, lean_object* v_closeStream_3232_, lean_object* v_consumed_3233_){
_start:
{
uint64_t v_consumed_boxed_3234_; lean_object* v_res_3235_; 
v_consumed_boxed_3234_ = lean_unbox_uint64(v_consumed_3233_);
lean_dec_ref(v_consumed_3233_);
v_res_3235_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3228_, v_inst_3229_, v_stream_3230_, v_drainLimit_3231_, v_closeStream_3232_, v_consumed_boxed_3234_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(lean_object* v_m_3236_, lean_object* v_inst_3237_, lean_object* v_inst_3238_, lean_object* v_stream_3239_, lean_object* v_drainLimit_3240_, lean_object* v_closeStream_3241_, uint64_t v_consumed_3242_){
_start:
{
lean_object* v___x_3243_; 
v___x_3243_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3237_, v_inst_3238_, v_stream_3239_, v_drainLimit_3240_, v_closeStream_3241_, v_consumed_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___boxed(lean_object* v_m_3244_, lean_object* v_inst_3245_, lean_object* v_inst_3246_, lean_object* v_stream_3247_, lean_object* v_drainLimit_3248_, lean_object* v_closeStream_3249_, lean_object* v_consumed_3250_){
_start:
{
uint64_t v_consumed_boxed_3251_; lean_object* v_res_3252_; 
v_consumed_boxed_3251_ = lean_unbox_uint64(v_consumed_3250_);
lean_dec_ref(v_consumed_3250_);
v_res_3252_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop(v_m_3244_, v_inst_3245_, v_inst_3246_, v_stream_3247_, v_drainLimit_3248_, v_closeStream_3249_, v_consumed_boxed_3251_);
return v_res_3252_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain___redArg(lean_object* v_inst_3253_, lean_object* v_inst_3254_, lean_object* v_stream_3255_, lean_object* v_drainLimit_3256_, lean_object* v_closeStream_3257_){
_start:
{
uint64_t v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = 0ULL;
v___x_3259_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_drain_loop___redArg(v_inst_3253_, v_inst_3254_, v_stream_3255_, v_drainLimit_3256_, v_closeStream_3257_, v___x_3258_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_drain(lean_object* v_m_3260_, lean_object* v_inst_3261_, lean_object* v_inst_3262_, lean_object* v_stream_3263_, lean_object* v_drainLimit_3264_, lean_object* v_closeStream_3265_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = l_Std_Http_Body_Stream_drain___redArg(v_inst_3261_, v_inst_3262_, v_stream_3263_, v_drainLimit_3264_, v_closeStream_3265_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(uint8_t v_incomplete_3272_, lean_object* v_chunk_3273_, lean_object* v___y_3274_){
_start:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v_pendingProducer_3278_; lean_object* v_pendingConsumer_3279_; lean_object* v_interestWaiter_3280_; uint8_t v_closed_3281_; lean_object* v_knownSize_3282_; lean_object* v_pendingIncompleteChunk_3283_; lean_object* v_closeError_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3325_; 
v___x_3276_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__0(v___y_3274_);
v___x_3277_ = lean_st_ref_get(v___y_3274_);
v_pendingProducer_3278_ = lean_ctor_get(v___x_3277_, 0);
v_pendingConsumer_3279_ = lean_ctor_get(v___x_3277_, 1);
v_interestWaiter_3280_ = lean_ctor_get(v___x_3277_, 2);
v_closed_3281_ = lean_ctor_get_uint8(v___x_3277_, sizeof(void*)*6);
v_knownSize_3282_ = lean_ctor_get(v___x_3277_, 3);
v_pendingIncompleteChunk_3283_ = lean_ctor_get(v___x_3277_, 4);
v_closeError_3284_ = lean_ctor_get(v___x_3277_, 5);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3277_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3286_ = v___x_3277_;
v_isShared_3287_ = v_isSharedCheck_3325_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_closeError_3284_);
lean_inc(v_pendingIncompleteChunk_3283_);
lean_inc(v_knownSize_3282_);
lean_inc(v_interestWaiter_3280_);
lean_inc(v_pendingConsumer_3279_);
lean_inc(v_pendingProducer_3278_);
lean_dec(v___x_3277_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3325_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___y_3289_; 
if (v_closed_3281_ == 0)
{
if (lean_obj_tag(v_pendingIncompleteChunk_3283_) == 0)
{
v___y_3289_ = v_chunk_3273_;
goto v___jp_3288_;
}
else
{
lean_object* v_val_3303_; lean_object* v_data_3304_; lean_object* v_extensions_3305_; lean_object* v_data_3306_; lean_object* v_extensions_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3323_; 
v_val_3303_ = lean_ctor_get(v_pendingIncompleteChunk_3283_, 0);
lean_inc(v_val_3303_);
lean_dec_ref_known(v_pendingIncompleteChunk_3283_, 1);
v_data_3304_ = lean_ctor_get(v_val_3303_, 0);
lean_inc_ref(v_data_3304_);
v_extensions_3305_ = lean_ctor_get(v_val_3303_, 1);
lean_inc_ref(v_extensions_3305_);
lean_dec(v_val_3303_);
v_data_3306_ = lean_ctor_get(v_chunk_3273_, 0);
v_extensions_3307_ = lean_ctor_get(v_chunk_3273_, 1);
v_isSharedCheck_3323_ = !lean_is_exclusive(v_chunk_3273_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3309_ = v_chunk_3273_;
v_isShared_3310_ = v_isSharedCheck_3323_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_extensions_3307_);
lean_inc(v_data_3306_);
lean_dec(v_chunk_3273_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3323_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; uint8_t v___x_3316_; 
v___x_3311_ = lean_unsigned_to_nat(0u);
v___x_3312_ = lean_byte_array_size(v_data_3304_);
v___x_3313_ = lean_byte_array_size(v_data_3306_);
v___x_3314_ = lean_byte_array_copy_slice(v_data_3306_, v___x_3311_, v_data_3304_, v___x_3312_, v___x_3313_, v_closed_3281_);
lean_dec_ref(v_data_3306_);
v___x_3315_ = lean_array_get_size(v_extensions_3305_);
v___x_3316_ = lean_nat_dec_eq(v___x_3315_, v___x_3311_);
if (v___x_3316_ == 0)
{
lean_object* v___x_3318_; 
lean_dec_ref(v_extensions_3307_);
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 1, v_extensions_3305_);
lean_ctor_set(v___x_3309_, 0, v___x_3314_);
v___x_3318_ = v___x_3309_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v___x_3314_);
lean_ctor_set(v_reuseFailAlloc_3319_, 1, v_extensions_3305_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
v___y_3289_ = v___x_3318_;
goto v___jp_3288_;
}
}
else
{
lean_object* v___x_3321_; 
lean_dec_ref(v_extensions_3305_);
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 0, v___x_3314_);
v___x_3321_ = v___x_3309_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v___x_3314_);
lean_ctor_set(v_reuseFailAlloc_3322_, 1, v_extensions_3307_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
v___y_3289_ = v___x_3321_;
goto v___jp_3288_;
}
}
}
}
}
else
{
lean_object* v___x_3324_; 
lean_del_object(v___x_3286_);
lean_dec(v_closeError_3284_);
lean_dec(v_pendingIncompleteChunk_3283_);
lean_dec(v_knownSize_3282_);
lean_dec(v_interestWaiter_3280_);
lean_dec(v_pendingConsumer_3279_);
lean_dec(v_pendingProducer_3278_);
lean_dec_ref(v_chunk_3273_);
v___x_3324_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___closed__2));
return v___x_3324_;
}
v___jp_3288_:
{
if (v_incomplete_3272_ == 0)
{
lean_object* v___x_3290_; lean_object* v___x_3292_; 
v___x_3290_ = lean_box(0);
if (v_isShared_3287_ == 0)
{
lean_ctor_set(v___x_3286_, 4, v___x_3290_);
v___x_3292_ = v___x_3286_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_pendingProducer_3278_);
lean_ctor_set(v_reuseFailAlloc_3296_, 1, v_pendingConsumer_3279_);
lean_ctor_set(v_reuseFailAlloc_3296_, 2, v_interestWaiter_3280_);
lean_ctor_set(v_reuseFailAlloc_3296_, 3, v_knownSize_3282_);
lean_ctor_set(v_reuseFailAlloc_3296_, 4, v___x_3290_);
lean_ctor_set(v_reuseFailAlloc_3296_, 5, v_closeError_3284_);
lean_ctor_set_uint8(v_reuseFailAlloc_3296_, sizeof(void*)*6, v_closed_3281_);
v___x_3292_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3293_ = lean_st_ref_swap(v___y_3274_, v___x_3292_);
lean_dec(v___x_3293_);
v___x_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3294_, 0, v___y_3289_);
v___x_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3294_);
return v___x_3295_;
}
}
else
{
lean_object* v___x_3297_; lean_object* v___x_3299_; 
v___x_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3297_, 0, v___y_3289_);
if (v_isShared_3287_ == 0)
{
lean_ctor_set(v___x_3286_, 4, v___x_3297_);
v___x_3299_ = v___x_3286_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v_pendingProducer_3278_);
lean_ctor_set(v_reuseFailAlloc_3302_, 1, v_pendingConsumer_3279_);
lean_ctor_set(v_reuseFailAlloc_3302_, 2, v_interestWaiter_3280_);
lean_ctor_set(v_reuseFailAlloc_3302_, 3, v_knownSize_3282_);
lean_ctor_set(v_reuseFailAlloc_3302_, 4, v___x_3297_);
lean_ctor_set(v_reuseFailAlloc_3302_, 5, v_closeError_3284_);
lean_ctor_set_uint8(v_reuseFailAlloc_3302_, sizeof(void*)*6, v_closed_3281_);
v___x_3299_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3300_ = lean_st_ref_swap(v___y_3274_, v___x_3299_);
lean_dec(v___x_3300_);
v___x_3301_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_recvReadyResult_x27___redArg___lam__0___closed__0));
return v___x_3301_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed(lean_object* v_incomplete_3326_, lean_object* v_chunk_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
uint8_t v_incomplete_boxed_3330_; lean_object* v_res_3331_; 
v_incomplete_boxed_3330_ = lean_unbox(v_incomplete_3326_);
v_res_3331_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0(v_incomplete_boxed_3330_, v_chunk_3327_, v___y_3328_);
lean_dec(v___y_3328_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(lean_object* v_stream_3332_, lean_object* v_chunk_3333_, uint8_t v_incomplete_3334_){
_start:
{
lean_object* v___x_3336_; lean_object* v___f_3337_; lean_object* v___x_3338_; 
v___x_3336_ = lean_box(v_incomplete_3334_);
v___f_3337_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3337_, 0, v___x_3336_);
lean_closure_set(v___f_3337_, 1, v_chunk_3333_);
v___x_3338_ = l_Std_Mutex_atomically___at___00__private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_recv_x27_spec__3___redArg(v_stream_3332_, v___f_3337_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend___boxed(lean_object* v_stream_3339_, lean_object* v_chunk_3340_, lean_object* v_incomplete_3341_, lean_object* v_a_3342_){
_start:
{
uint8_t v_incomplete_boxed_3343_; lean_object* v_res_3344_; 
v_incomplete_boxed_3343_ = lean_unbox(v_incomplete_3341_);
v_res_3344_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(v_stream_3339_, v_chunk_3340_, v_incomplete_boxed_3343_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(lean_object* v_x_3351_){
_start:
{
if (lean_obj_tag(v_x_3351_) == 0)
{
lean_object* v_a_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3361_; 
v_a_3353_ = lean_ctor_get(v_x_3351_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v_x_3351_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3355_ = v_x_3351_;
v_isShared_3356_ = v_isSharedCheck_3361_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_a_3353_);
lean_dec(v_x_3351_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3361_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3358_; 
if (v_isShared_3356_ == 0)
{
v___x_3358_ = v___x_3355_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3353_);
v___x_3358_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
lean_object* v___x_3359_; 
v___x_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
return v___x_3359_;
}
}
}
else
{
lean_object* v___x_3362_; 
lean_dec_ref_known(v_x_3351_, 1);
v___x_3362_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___closed__2));
return v___x_3362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0___boxed(lean_object* v_x_3363_, lean_object* v___y_3364_){
_start:
{
lean_object* v_res_3365_; 
v_res_3365_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__0(v_x_3363_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(lean_object* v_00___3366_){
_start:
{
lean_object* v___x_3368_; 
v___x_3368_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3368_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1___boxed(lean_object* v_00___3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v_res_3371_; 
v_res_3371_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__1(v_00___3369_);
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(lean_object* v___f_3376_, lean_object* v_x_3377_){
_start:
{
if (lean_obj_tag(v_x_3377_) == 0)
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3389_; 
lean_dec_ref(v___f_3376_);
v_a_3381_ = lean_ctor_get(v_x_3377_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v_x_3377_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3383_ = v_x_3377_;
v_isShared_3384_ = v_isSharedCheck_3389_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v_x_3377_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3389_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
lean_object* v___x_3387_; 
v___x_3387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3386_);
return v___x_3387_;
}
}
}
else
{
lean_object* v_a_3390_; 
v_a_3390_ = lean_ctor_get(v_x_3377_, 0);
lean_inc(v_a_3390_);
lean_dec_ref_known(v_x_3377_, 1);
if (lean_obj_tag(v_a_3390_) == 1)
{
lean_object* v_val_3391_; uint8_t v___x_3392_; 
v_val_3391_ = lean_ctor_get(v_a_3390_, 0);
lean_inc(v_val_3391_);
lean_dec_ref_known(v_a_3390_, 1);
v___x_3392_ = lean_unbox(v_val_3391_);
lean_dec(v_val_3391_);
if (v___x_3392_ == 1)
{
lean_object* v___x_3393_; lean_object* v___x_3394_; 
v___x_3393_ = lean_box(0);
v___x_3394_ = lean_apply_2(v___f_3376_, v___x_3393_, lean_box(0));
return v___x_3394_;
}
else
{
lean_dec_ref(v___f_3376_);
goto v___jp_3379_;
}
}
else
{
lean_dec(v_a_3390_);
lean_dec_ref(v___f_3376_);
goto v___jp_3379_;
}
}
v___jp_3379_:
{
lean_object* v___x_3380_; 
v___x_3380_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___closed__1));
return v___x_3380_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2___boxed(lean_object* v___f_3395_, lean_object* v_x_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v_res_3398_; 
v_res_3398_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__2(v___f_3395_, v_x_3396_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__3(lean_object* v_a_3399_){
_start:
{
lean_object* v___x_3400_; 
v___x_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3400_, 0, v_a_3399_);
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(uint8_t v_a_3401_, lean_object* v_x_3402_){
_start:
{
if (lean_obj_tag(v_x_3402_) == 0)
{
lean_object* v_a_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3412_; 
v_a_3404_ = lean_ctor_get(v_x_3402_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v_x_3402_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3406_ = v_x_3402_;
v_isShared_3407_ = v_isSharedCheck_3412_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_a_3404_);
lean_dec(v_x_3402_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3412_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3409_; 
if (v_isShared_3407_ == 0)
{
v___x_3409_ = v___x_3406_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3404_);
v___x_3409_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
lean_object* v___x_3410_; 
v___x_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
return v___x_3410_;
}
}
}
else
{
lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3423_; 
v_isSharedCheck_3423_ = !lean_is_exclusive(v_x_3402_);
if (v_isSharedCheck_3423_ == 0)
{
lean_object* v_unused_3424_; 
v_unused_3424_ = lean_ctor_get(v_x_3402_, 0);
lean_dec(v_unused_3424_);
v___x_3414_ = v_x_3402_;
v_isShared_3415_ = v_isSharedCheck_3423_;
goto v_resetjp_3413_;
}
else
{
lean_dec(v_x_3402_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3423_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3419_; 
v___x_3416_ = lean_box(v_a_3401_);
v___x_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
if (v_isShared_3415_ == 0)
{
lean_ctor_set(v___x_3414_, 0, v___x_3417_);
v___x_3419_ = v___x_3414_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3419_);
v___x_3421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3420_);
return v___x_3421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed(lean_object* v_a_3425_, lean_object* v_x_3426_, lean_object* v___y_3427_){
_start:
{
uint8_t v_a_5713__boxed_3428_; lean_object* v_res_3429_; 
v_a_5713__boxed_3428_ = lean_unbox(v_a_3425_);
v_res_3429_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4(v_a_5713__boxed_3428_, v_x_3426_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(lean_object* v_pendingProducer_3430_, lean_object* v_interestWaiter_3431_, uint8_t v_closed_3432_, lean_object* v_knownSize_3433_, lean_object* v_pendingIncompleteChunk_3434_, lean_object* v_closeError_3435_, lean_object* v___y_3436_, lean_object* v_chunk_3437_, lean_object* v_x_3438_){
_start:
{
if (lean_obj_tag(v_x_3438_) == 0)
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3448_; 
lean_dec(v_closeError_3435_);
lean_dec(v_pendingIncompleteChunk_3434_);
lean_dec(v_knownSize_3433_);
lean_dec(v_interestWaiter_3431_);
lean_dec(v_pendingProducer_3430_);
v_a_3440_ = lean_ctor_get(v_x_3438_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v_x_3438_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3442_ = v_x_3438_;
v_isShared_3443_ = v_isSharedCheck_3448_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v_x_3438_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3448_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
lean_object* v___x_3446_; 
v___x_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
return v___x_3446_;
}
}
}
else
{
lean_object* v_a_3449_; uint8_t v___x_3450_; 
v_a_3449_ = lean_ctor_get(v_x_3438_, 0);
lean_inc(v_a_3449_);
lean_dec_ref_known(v_x_3438_, 1);
v___x_3450_ = lean_unbox(v_a_3449_);
if (v___x_3450_ == 0)
{
lean_object* v___f_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; uint8_t v___x_3457_; lean_object* v___x_3458_; 
lean_inc(v_a_3449_);
v___f_3451_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3451_, 0, v_a_3449_);
v___x_3452_ = lean_box(0);
v___x_3453_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3453_, 0, v_pendingProducer_3430_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
lean_ctor_set(v___x_3453_, 2, v_interestWaiter_3431_);
lean_ctor_set(v___x_3453_, 3, v_knownSize_3433_);
lean_ctor_set(v___x_3453_, 4, v_pendingIncompleteChunk_3434_);
lean_ctor_set(v___x_3453_, 5, v_closeError_3435_);
lean_ctor_set_uint8(v___x_3453_, sizeof(void*)*6, v_closed_3432_);
v___x_3454_ = lean_unsigned_to_nat(0u);
v___x_3455_ = lean_st_ref_swap(v___y_3436_, v___x_3453_);
lean_dec(v___x_3455_);
v___x_3456_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3457_ = lean_unbox(v_a_3449_);
lean_dec(v_a_3449_);
v___x_3458_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3454_, v___x_3457_, v___x_3456_, v___f_3451_);
return v___x_3458_;
}
else
{
lean_object* v___f_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___f_3459_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3459_, 0, v_a_3449_);
v___x_3460_ = lean_box(0);
v___x_3461_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_decreaseKnownSize(v_knownSize_3433_, v_chunk_3437_);
v___x_3462_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_3462_, 0, v_pendingProducer_3430_);
lean_ctor_set(v___x_3462_, 1, v___x_3460_);
lean_ctor_set(v___x_3462_, 2, v_interestWaiter_3431_);
lean_ctor_set(v___x_3462_, 3, v___x_3461_);
lean_ctor_set(v___x_3462_, 4, v_pendingIncompleteChunk_3434_);
lean_ctor_set(v___x_3462_, 5, v_closeError_3435_);
lean_ctor_set_uint8(v___x_3462_, sizeof(void*)*6, v_closed_3432_);
v___x_3463_ = lean_unsigned_to_nat(0u);
v___x_3464_ = lean_st_ref_swap(v___y_3436_, v___x_3462_);
lean_dec(v___x_3464_);
v___x_3465_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3466_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3463_, v_closed_3432_, v___x_3465_, v___f_3459_);
return v___x_3466_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed(lean_object* v_pendingProducer_3467_, lean_object* v_interestWaiter_3468_, lean_object* v_closed_3469_, lean_object* v_knownSize_3470_, lean_object* v_pendingIncompleteChunk_3471_, lean_object* v_closeError_3472_, lean_object* v___y_3473_, lean_object* v_chunk_3474_, lean_object* v_x_3475_, lean_object* v___y_3476_){
_start:
{
uint8_t v_closed_boxed_3477_; lean_object* v_res_3478_; 
v_closed_boxed_3477_ = lean_unbox(v_closed_3469_);
v_res_3478_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6(v_pendingProducer_3467_, v_interestWaiter_3468_, v_closed_boxed_3477_, v_knownSize_3470_, v_pendingIncompleteChunk_3471_, v_closeError_3472_, v___y_3473_, v_chunk_3474_, v_x_3475_);
lean_dec_ref(v_chunk_3474_);
lean_dec(v___y_3473_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(lean_object* v___y_3494_, lean_object* v_chunk_3495_, lean_object* v_a_3496_, lean_object* v___f_3497_, lean_object* v_x_3498_){
_start:
{
if (lean_obj_tag(v_x_3498_) == 0)
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3508_; 
lean_dec_ref(v___f_3497_);
lean_dec(v_a_3496_);
lean_dec_ref(v_chunk_3495_);
v_a_3500_ = lean_ctor_get(v_x_3498_, 0);
v_isSharedCheck_3508_ = !lean_is_exclusive(v_x_3498_);
if (v_isSharedCheck_3508_ == 0)
{
v___x_3502_ = v_x_3498_;
v_isShared_3503_ = v_isSharedCheck_3508_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v_x_3498_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3508_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3503_ == 0)
{
v___x_3505_ = v___x_3502_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
lean_object* v___x_3506_; 
v___x_3506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3505_);
return v___x_3506_;
}
}
}
else
{
lean_object* v_a_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3561_; 
v_a_3509_ = lean_ctor_get(v_x_3498_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v_x_3498_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3511_ = v_x_3498_;
v_isShared_3512_ = v_isSharedCheck_3561_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_a_3509_);
lean_dec(v_x_3498_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3561_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
uint8_t v_closed_3513_; 
v_closed_3513_ = lean_ctor_get_uint8(v_a_3509_, sizeof(void*)*6);
if (v_closed_3513_ == 0)
{
lean_object* v_pendingConsumer_3514_; 
v_pendingConsumer_3514_ = lean_ctor_get(v_a_3509_, 1);
lean_inc(v_pendingConsumer_3514_);
if (lean_obj_tag(v_pendingConsumer_3514_) == 1)
{
lean_object* v_pendingProducer_3515_; lean_object* v_interestWaiter_3516_; lean_object* v_knownSize_3517_; lean_object* v_pendingIncompleteChunk_3518_; lean_object* v_closeError_3519_; lean_object* v_val_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3538_; 
lean_dec_ref(v___f_3497_);
lean_dec(v_a_3496_);
v_pendingProducer_3515_ = lean_ctor_get(v_a_3509_, 0);
lean_inc(v_pendingProducer_3515_);
v_interestWaiter_3516_ = lean_ctor_get(v_a_3509_, 2);
lean_inc(v_interestWaiter_3516_);
v_knownSize_3517_ = lean_ctor_get(v_a_3509_, 3);
lean_inc(v_knownSize_3517_);
v_pendingIncompleteChunk_3518_ = lean_ctor_get(v_a_3509_, 4);
lean_inc(v_pendingIncompleteChunk_3518_);
v_closeError_3519_ = lean_ctor_get(v_a_3509_, 5);
lean_inc(v_closeError_3519_);
lean_dec(v_a_3509_);
v_val_3520_ = lean_ctor_get(v_pendingConsumer_3514_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_pendingConsumer_3514_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3522_ = v_pendingConsumer_3514_;
v_isShared_3523_ = v_isSharedCheck_3538_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_val_3520_);
lean_dec(v_pendingConsumer_3514_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3538_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3524_; lean_object* v___f_3525_; lean_object* v___x_3527_; 
v___x_3524_ = lean_box(v_closed_3513_);
lean_inc_ref(v_chunk_3495_);
lean_inc(v___y_3494_);
v___f_3525_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__6___boxed), 10, 8);
lean_closure_set(v___f_3525_, 0, v_pendingProducer_3515_);
lean_closure_set(v___f_3525_, 1, v_interestWaiter_3516_);
lean_closure_set(v___f_3525_, 2, v___x_3524_);
lean_closure_set(v___f_3525_, 3, v_knownSize_3517_);
lean_closure_set(v___f_3525_, 4, v_pendingIncompleteChunk_3518_);
lean_closure_set(v___f_3525_, 5, v_closeError_3519_);
lean_closure_set(v___f_3525_, 6, v___y_3494_);
lean_closure_set(v___f_3525_, 7, v_chunk_3495_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v_chunk_3495_);
v___x_3527_ = v___x_3522_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_chunk_3495_);
v___x_3527_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
lean_object* v___x_3529_; 
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 0, v___x_3527_);
v___x_3529_ = v___x_3511_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3527_);
v___x_3529_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3530_ = lean_unsigned_to_nat(0u);
v___x_3531_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_Consumer_resolve(v_val_3520_, v___x_3529_);
lean_dec(v_val_3520_);
v___x_3532_ = lean_box(v___x_3531_);
v___x_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
v___x_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
v___x_3535_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3530_, v_closed_3513_, v___x_3534_, v___f_3525_);
return v___x_3535_;
}
}
}
}
else
{
lean_object* v_pendingProducer_3539_; 
lean_del_object(v___x_3511_);
v_pendingProducer_3539_ = lean_ctor_get(v_a_3509_, 0);
if (lean_obj_tag(v_pendingProducer_3539_) == 0)
{
lean_object* v_interestWaiter_3540_; lean_object* v_knownSize_3541_; lean_object* v_pendingIncompleteChunk_3542_; lean_object* v_closeError_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3556_; 
v_interestWaiter_3540_ = lean_ctor_get(v_a_3509_, 2);
v_knownSize_3541_ = lean_ctor_get(v_a_3509_, 3);
v_pendingIncompleteChunk_3542_ = lean_ctor_get(v_a_3509_, 4);
v_closeError_3543_ = lean_ctor_get(v_a_3509_, 5);
v_isSharedCheck_3556_ = !lean_is_exclusive(v_a_3509_);
if (v_isSharedCheck_3556_ == 0)
{
lean_object* v_unused_3557_; lean_object* v_unused_3558_; 
v_unused_3557_ = lean_ctor_get(v_a_3509_, 1);
lean_dec(v_unused_3557_);
v_unused_3558_ = lean_ctor_get(v_a_3509_, 0);
lean_dec(v_unused_3558_);
v___x_3545_ = v_a_3509_;
v_isShared_3546_ = v_isSharedCheck_3556_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_closeError_3543_);
lean_inc(v_pendingIncompleteChunk_3542_);
lean_inc(v_knownSize_3541_);
lean_inc(v_interestWaiter_3540_);
lean_dec(v_a_3509_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3556_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3550_; 
v___x_3547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3547_, 0, v_chunk_3495_);
lean_ctor_set(v___x_3547_, 1, v_a_3496_);
v___x_3548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
if (v_isShared_3546_ == 0)
{
lean_ctor_set(v___x_3545_, 0, v___x_3548_);
v___x_3550_ = v___x_3545_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v___x_3548_);
lean_ctor_set(v_reuseFailAlloc_3555_, 1, v_pendingConsumer_3514_);
lean_ctor_set(v_reuseFailAlloc_3555_, 2, v_interestWaiter_3540_);
lean_ctor_set(v_reuseFailAlloc_3555_, 3, v_knownSize_3541_);
lean_ctor_set(v_reuseFailAlloc_3555_, 4, v_pendingIncompleteChunk_3542_);
lean_ctor_set(v_reuseFailAlloc_3555_, 5, v_closeError_3543_);
lean_ctor_set_uint8(v_reuseFailAlloc_3555_, sizeof(void*)*6, v_closed_3513_);
v___x_3550_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3551_ = lean_unsigned_to_nat(0u);
v___x_3552_ = lean_st_ref_swap(v___y_3494_, v___x_3550_);
lean_dec(v___x_3552_);
v___x_3553_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_3554_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3551_, v_closed_3513_, v___x_3553_, v___f_3497_);
return v___x_3554_;
}
}
}
else
{
lean_object* v___x_3559_; 
lean_dec(v_pendingConsumer_3514_);
lean_dec(v_a_3509_);
lean_dec_ref(v___f_3497_);
lean_dec(v_a_3496_);
lean_dec_ref(v_chunk_3495_);
v___x_3559_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__4));
return v___x_3559_;
}
}
}
else
{
lean_object* v___x_3560_; 
lean_del_object(v___x_3511_);
lean_dec(v_a_3509_);
lean_dec_ref(v___f_3497_);
lean_dec(v_a_3496_);
lean_dec_ref(v_chunk_3495_);
v___x_3560_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___closed__7));
return v___x_3560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed(lean_object* v___y_3562_, lean_object* v_chunk_3563_, lean_object* v_a_3564_, lean_object* v___f_3565_, lean_object* v_x_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5(v___y_3562_, v_chunk_3563_, v_a_3564_, v___f_3565_, v_x_3566_);
lean_dec(v___y_3562_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(lean_object* v___y_3569_, lean_object* v___f_3570_, lean_object* v_x_3571_){
_start:
{
if (lean_obj_tag(v_x_3571_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3581_; 
lean_dec_ref(v___f_3570_);
v_a_3573_ = lean_ctor_get(v_x_3571_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v_x_3571_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3575_ = v_x_3571_;
v_isShared_3576_ = v_isSharedCheck_3581_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_a_3573_);
lean_dec(v_x_3571_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3581_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3578_; 
if (v_isShared_3576_ == 0)
{
v___x_3578_ = v___x_3575_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_a_3573_);
v___x_3578_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
lean_object* v___x_3579_; 
v___x_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
return v___x_3579_;
}
}
}
else
{
lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3593_; 
v_isSharedCheck_3593_ = !lean_is_exclusive(v_x_3571_);
if (v_isSharedCheck_3593_ == 0)
{
lean_object* v_unused_3594_; 
v_unused_3594_ = lean_ctor_get(v_x_3571_, 0);
lean_dec(v_unused_3594_);
v___x_3583_ = v_x_3571_;
v_isShared_3584_ = v_isSharedCheck_3593_;
goto v_resetjp_3582_;
}
else
{
lean_dec(v_x_3571_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3593_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3585_; uint8_t v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3589_; 
v___x_3585_ = lean_unsigned_to_nat(0u);
v___x_3586_ = 0;
v___x_3587_ = lean_st_ref_get(v___y_3569_);
if (v_isShared_3584_ == 0)
{
lean_ctor_set(v___x_3583_, 0, v___x_3587_);
v___x_3589_ = v___x_3583_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3587_);
v___x_3589_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3589_);
v___x_3591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3585_, v___x_3586_, v___x_3590_, v___f_3570_);
return v___x_3591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed(lean_object* v___y_3595_, lean_object* v___f_3596_, lean_object* v_x_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7(v___y_3595_, v___f_3596_, v_x_3597_);
lean_dec(v___y_3595_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(lean_object* v_chunk_3600_, lean_object* v_a_3601_, lean_object* v___f_3602_, lean_object* v___y_3603_){
_start:
{
lean_object* v___f_3605_; lean_object* v___f_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
lean_inc_n(v___y_3603_, 2);
v___f_3605_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__5___boxed), 6, 4);
lean_closure_set(v___f_3605_, 0, v___y_3603_);
lean_closure_set(v___f_3605_, 1, v_chunk_3600_);
lean_closure_set(v___f_3605_, 2, v_a_3601_);
lean_closure_set(v___f_3605_, 3, v___f_3602_);
v___f_3606_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3606_, 0, v___y_3603_);
lean_closure_set(v___f_3606_, 1, v___f_3605_);
v___x_3607_ = lean_unsigned_to_nat(0u);
v___x_3608_ = 0;
v___x_3609_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_3603_);
v___x_3610_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3607_, v___x_3608_, v___x_3609_, v___f_3606_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed(lean_object* v_chunk_3611_, lean_object* v_a_3612_, lean_object* v___f_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_){
_start:
{
lean_object* v_res_3616_; 
v_res_3616_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8(v_chunk_3611_, v_a_3612_, v___f_3613_, v___y_3614_);
lean_dec(v___y_3614_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(lean_object* v_a_3622_, lean_object* v___f_3623_, lean_object* v___f_3624_, lean_object* v_stream_3625_, lean_object* v_chunk_3626_, lean_object* v___f_3627_, lean_object* v_x_3628_){
_start:
{
if (lean_obj_tag(v_x_3628_) == 0)
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3638_; 
lean_dec_ref(v___f_3627_);
lean_dec_ref(v_chunk_3626_);
lean_dec_ref(v_stream_3625_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
v_a_3630_ = lean_ctor_get(v_x_3628_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v_x_3628_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3632_ = v_x_3628_;
v_isShared_3633_ = v_isSharedCheck_3638_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v_x_3628_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3638_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
lean_object* v___x_3636_; 
v___x_3636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
return v___x_3636_;
}
}
}
else
{
lean_object* v_a_3639_; 
v_a_3639_ = lean_ctor_get(v_x_3628_, 0);
lean_inc(v_a_3639_);
lean_dec_ref_known(v_x_3628_, 1);
if (lean_obj_tag(v_a_3639_) == 0)
{
lean_object* v_a_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3648_; 
lean_dec_ref(v___f_3627_);
lean_dec_ref(v_chunk_3626_);
lean_dec_ref(v_stream_3625_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
v_a_3640_ = lean_ctor_get(v_a_3639_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v_a_3639_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3642_ = v_a_3639_;
v_isShared_3643_ = v_isSharedCheck_3648_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_a_3640_);
lean_dec(v_a_3639_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3648_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3645_; 
if (v_isShared_3643_ == 0)
{
v___x_3645_ = v___x_3642_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3640_);
v___x_3645_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
lean_object* v___x_3646_; 
v___x_3646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3645_);
return v___x_3646_;
}
}
}
else
{
lean_object* v_a_3649_; 
v_a_3649_ = lean_ctor_get(v_a_3639_, 0);
lean_inc(v_a_3649_);
lean_dec_ref_known(v_a_3639_, 1);
if (lean_obj_tag(v_a_3649_) == 0)
{
lean_object* v___x_3650_; lean_object* v___x_3651_; uint8_t v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
lean_dec_ref(v___f_3627_);
lean_dec_ref(v_chunk_3626_);
lean_dec_ref(v_stream_3625_);
v___x_3650_ = lean_io_promise_result_opt(v_a_3622_);
v___x_3651_ = lean_unsigned_to_nat(0u);
v___x_3652_ = 0;
v___x_3653_ = lean_task_map(v___f_3623_, v___x_3650_, v___x_3651_, v___x_3652_);
v___x_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3653_);
v___x_3655_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3651_, v___x_3652_, v___x_3654_, v___f_3624_);
return v___x_3655_;
}
else
{
lean_object* v_val_3656_; uint8_t v___x_3657_; 
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
v_val_3656_ = lean_ctor_get(v_a_3649_, 0);
lean_inc(v_val_3656_);
lean_dec_ref_known(v_a_3649_, 1);
v___x_3657_ = lean_unbox(v_val_3656_);
lean_dec(v_val_3656_);
if (v___x_3657_ == 0)
{
lean_object* v___x_3658_; 
lean_dec_ref(v___f_3627_);
v___x_3658_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3625_, v_chunk_3626_);
return v___x_3658_;
}
else
{
lean_object* v___x_3659_; lean_object* v___x_3660_; 
lean_dec_ref(v_chunk_3626_);
lean_dec_ref(v_stream_3625_);
v___x_3659_ = lean_box(0);
v___x_3660_ = lean_apply_2(v___f_3627_, v___x_3659_, lean_box(0));
return v___x_3660_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed(lean_object* v_a_3661_, lean_object* v___f_3662_, lean_object* v___f_3663_, lean_object* v_stream_3664_, lean_object* v_chunk_3665_, lean_object* v___f_3666_, lean_object* v_x_3667_, lean_object* v___y_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9(v_a_3661_, v___f_3662_, v___f_3663_, v_stream_3664_, v_chunk_3665_, v___f_3666_, v_x_3667_);
lean_dec(v_a_3661_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(lean_object* v_chunk_3670_, lean_object* v___f_3671_, lean_object* v___f_3672_, lean_object* v___f_3673_, lean_object* v_stream_3674_, lean_object* v___f_3675_, lean_object* v_x_3676_){
_start:
{
if (lean_obj_tag(v_x_3676_) == 0)
{
lean_object* v_a_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3686_; 
lean_dec_ref(v___f_3675_);
lean_dec_ref(v_stream_3674_);
lean_dec_ref(v___f_3673_);
lean_dec_ref(v___f_3672_);
lean_dec_ref(v___f_3671_);
lean_dec_ref(v_chunk_3670_);
v_a_3678_ = lean_ctor_get(v_x_3676_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v_x_3676_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3680_ = v_x_3676_;
v_isShared_3681_ = v_isSharedCheck_3686_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_a_3678_);
lean_dec(v_x_3676_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3686_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v___x_3683_; 
if (v_isShared_3681_ == 0)
{
v___x_3683_ = v___x_3680_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_a_3678_);
v___x_3683_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
lean_object* v___x_3684_; 
v___x_3684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3683_);
return v___x_3684_;
}
}
}
else
{
lean_object* v_a_3687_; lean_object* v___f_3688_; lean_object* v___f_3689_; lean_object* v___x_3690_; uint8_t v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v_a_3687_ = lean_ctor_get(v_x_3676_, 0);
lean_inc_n(v_a_3687_, 2);
lean_dec_ref_known(v_x_3676_, 1);
lean_inc_ref(v_chunk_3670_);
v___f_3688_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__8___boxed), 5, 3);
lean_closure_set(v___f_3688_, 0, v_chunk_3670_);
lean_closure_set(v___f_3688_, 1, v_a_3687_);
lean_closure_set(v___f_3688_, 2, v___f_3671_);
lean_inc_ref(v_stream_3674_);
v___f_3689_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3689_, 0, v_a_3687_);
lean_closure_set(v___f_3689_, 1, v___f_3672_);
lean_closure_set(v___f_3689_, 2, v___f_3673_);
lean_closure_set(v___f_3689_, 3, v_stream_3674_);
lean_closure_set(v___f_3689_, 4, v_chunk_3670_);
lean_closure_set(v___f_3689_, 5, v___f_3675_);
v___x_3690_ = lean_unsigned_to_nat(0u);
v___x_3691_ = 0;
v___x_3692_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_3674_, v___f_3688_);
v___x_3693_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3690_, v___x_3691_, v___x_3692_, v___f_3689_);
return v___x_3693_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed(lean_object* v_chunk_3694_, lean_object* v___f_3695_, lean_object* v___f_3696_, lean_object* v___f_3697_, lean_object* v_stream_3698_, lean_object* v___f_3699_, lean_object* v_x_3700_, lean_object* v___y_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10(v_chunk_3694_, v___f_3695_, v___f_3696_, v___f_3697_, v_stream_3698_, v___f_3699_, v_x_3700_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(lean_object* v_stream_3703_, lean_object* v_chunk_3704_){
_start:
{
lean_object* v___f_3706_; lean_object* v___f_3707_; lean_object* v___f_3708_; lean_object* v___f_3709_; lean_object* v___f_3710_; lean_object* v___x_3711_; uint8_t v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
v___f_3706_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__0));
v___f_3707_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__1));
v___f_3708_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__2));
v___f_3709_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___closed__3));
v___f_3710_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___lam__10___boxed), 8, 6);
lean_closure_set(v___f_3710_, 0, v_chunk_3704_);
lean_closure_set(v___f_3710_, 1, v___f_3706_);
lean_closure_set(v___f_3710_, 2, v___f_3709_);
lean_closure_set(v___f_3710_, 3, v___f_3708_);
lean_closure_set(v___f_3710_, 4, v_stream_3703_);
lean_closure_set(v___f_3710_, 5, v___f_3707_);
v___x_3711_ = lean_unsigned_to_nat(0u);
v___x_3712_ = 0;
v___x_3713_ = lean_io_promise_new();
v___x_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3714_, 0, v___x_3713_);
v___x_3715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3714_);
v___x_3716_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3711_, v___x_3712_, v___x_3715_, v___f_3710_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27___boxed(lean_object* v_stream_3717_, lean_object* v_chunk_3718_, lean_object* v_a_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3717_, v_chunk_3718_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0(lean_object* v_stream_3721_, lean_object* v_x_3722_){
_start:
{
if (lean_obj_tag(v_x_3722_) == 0)
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3734_; 
lean_dec_ref(v_stream_3721_);
v_a_3726_ = lean_ctor_get(v_x_3722_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v_x_3722_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3728_ = v_x_3722_;
v_isShared_3729_ = v_isSharedCheck_3734_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v_x_3722_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3734_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
lean_object* v___x_3732_; 
v___x_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
return v___x_3732_;
}
}
}
else
{
lean_object* v_a_3735_; 
v_a_3735_ = lean_ctor_get(v_x_3722_, 0);
lean_inc(v_a_3735_);
lean_dec_ref_known(v_x_3722_, 1);
if (lean_obj_tag(v_a_3735_) == 0)
{
lean_object* v_a_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3744_; 
lean_dec_ref(v_stream_3721_);
v_a_3736_ = lean_ctor_get(v_a_3735_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v_a_3735_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3738_ = v_a_3735_;
v_isShared_3739_ = v_isSharedCheck_3744_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_a_3736_);
lean_dec(v_a_3735_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3744_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_a_3736_);
v___x_3741_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
lean_object* v___x_3742_; 
v___x_3742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
return v___x_3742_;
}
}
}
else
{
lean_object* v_a_3745_; 
v_a_3745_ = lean_ctor_get(v_a_3735_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v_a_3735_, 1);
if (lean_obj_tag(v_a_3745_) == 0)
{
lean_dec_ref(v_stream_3721_);
goto v___jp_3724_;
}
else
{
lean_object* v_val_3746_; lean_object* v_data_3747_; lean_object* v_extensions_3748_; uint8_t v___x_3749_; 
v_val_3746_ = lean_ctor_get(v_a_3745_, 0);
lean_inc(v_val_3746_);
lean_dec_ref_known(v_a_3745_, 1);
v_data_3747_ = lean_ctor_get(v_val_3746_, 0);
v_extensions_3748_ = lean_ctor_get(v_val_3746_, 1);
v___x_3749_ = l_ByteArray_isEmpty(v_data_3747_);
if (v___x_3749_ == 0)
{
lean_object* v___x_3750_; 
v___x_3750_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3721_, v_val_3746_);
return v___x_3750_;
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; 
v___x_3751_ = lean_array_get_size(v_extensions_3748_);
v___x_3752_ = lean_unsigned_to_nat(0u);
v___x_3753_ = lean_nat_dec_eq(v___x_3751_, v___x_3752_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; 
v___x_3754_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_send_x27(v_stream_3721_, v_val_3746_);
return v___x_3754_;
}
else
{
lean_dec(v_val_3746_);
lean_dec_ref(v_stream_3721_);
goto v___jp_3724_;
}
}
}
}
}
v___jp_3724_:
{
lean_object* v___x_3725_; 
v___x_3725_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_3725_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___lam__0___boxed(lean_object* v_stream_3755_, lean_object* v_x_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Std_Http_Body_Stream_send___lam__0(v_stream_3755_, v_x_3756_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send(lean_object* v_stream_3759_, lean_object* v_chunk_3760_, uint8_t v_incomplete_3761_){
_start:
{
lean_object* v___f_3763_; lean_object* v___x_3764_; uint8_t v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
lean_inc_ref(v_stream_3759_);
v___f_3763_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_send___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3763_, 0, v_stream_3759_);
v___x_3764_ = lean_unsigned_to_nat(0u);
v___x_3765_ = 0;
v___x_3766_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Stream_collapseForSend(v_stream_3759_, v_chunk_3760_, v_incomplete_3761_);
v___x_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3766_);
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
v___x_3769_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3764_, v___x_3765_, v___x_3768_, v___f_3763_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_send___boxed(lean_object* v_stream_3770_, lean_object* v_chunk_3771_, lean_object* v_incomplete_3772_, lean_object* v_a_3773_){
_start:
{
uint8_t v_incomplete_boxed_3774_; lean_object* v_res_3775_; 
v_incomplete_boxed_3774_ = lean_unbox(v_incomplete_3772_);
v_res_3775_ = l_Std_Http_Body_Stream_send(v_stream_3770_, v_chunk_3771_, v_incomplete_boxed_3774_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(lean_object* v_x_3776_){
_start:
{
uint8_t v___y_3779_; 
if (lean_obj_tag(v_x_3776_) == 0)
{
lean_object* v_a_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3791_; 
v_a_3783_ = lean_ctor_get(v_x_3776_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v_x_3776_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3785_ = v_x_3776_;
v_isShared_3786_ = v_isSharedCheck_3791_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_a_3783_);
lean_dec(v_x_3776_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3791_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3788_; 
if (v_isShared_3786_ == 0)
{
v___x_3788_ = v___x_3785_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_a_3783_);
v___x_3788_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3789_; 
v___x_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3788_);
return v___x_3789_;
}
}
}
else
{
lean_object* v_a_3792_; lean_object* v_pendingConsumer_3793_; 
v_a_3792_ = lean_ctor_get(v_x_3776_, 0);
lean_inc(v_a_3792_);
lean_dec_ref_known(v_x_3776_, 1);
v_pendingConsumer_3793_ = lean_ctor_get(v_a_3792_, 1);
lean_inc(v_pendingConsumer_3793_);
lean_dec(v_a_3792_);
if (lean_obj_tag(v_pendingConsumer_3793_) == 0)
{
uint8_t v___x_3794_; 
v___x_3794_ = 0;
v___y_3779_ = v___x_3794_;
goto v___jp_3778_;
}
else
{
uint8_t v___x_3795_; 
lean_dec_ref_known(v_pendingConsumer_3793_, 1);
v___x_3795_ = 1;
v___y_3779_ = v___x_3795_;
goto v___jp_3778_;
}
}
v___jp_3778_:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3780_ = lean_box(v___y_3779_);
v___x_3781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3780_);
v___x_3782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
return v___x_3782_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0___boxed(lean_object* v_x_3796_, lean_object* v___y_3797_){
_start:
{
lean_object* v_res_3798_; 
v_res_3798_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___lam__0(v_x_3796_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(lean_object* v_a_3800_){
_start:
{
lean_object* v___f_3802_; lean_object* v___x_3803_; uint8_t v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___f_3802_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___closed__0));
v___x_3803_ = lean_unsigned_to_nat(0u);
v___x_3804_ = 0;
v___x_3805_ = lean_st_ref_get(v_a_3800_);
v___x_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3805_);
v___x_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3806_);
v___x_3808_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3803_, v___x_3804_, v___x_3807_, v___f_3802_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0___boxed(lean_object* v_a_3809_, lean_object* v___y_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(v_a_3809_);
lean_dec(v_a_3809_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0(lean_object* v___y_3812_, lean_object* v_x_3813_){
_start:
{
if (lean_obj_tag(v_x_3813_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3823_; 
v_a_3815_ = lean_ctor_get(v_x_3813_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_x_3813_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3817_ = v_x_3813_;
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v_x_3813_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3823_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
lean_object* v___x_3821_; 
v___x_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3820_);
return v___x_3821_;
}
}
}
else
{
lean_object* v___x_3824_; 
lean_dec_ref_known(v_x_3813_, 1);
v___x_3824_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_hasInterest_x27___at___00Std_Http_Body_Stream_hasInterest_spec__0(v___y_3812_);
return v___x_3824_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__0___boxed(lean_object* v___y_3825_, lean_object* v_x_3826_, lean_object* v___y_3827_){
_start:
{
lean_object* v_res_3828_; 
v_res_3828_ = l_Std_Http_Body_Stream_hasInterest___lam__0(v___y_3825_, v_x_3826_);
lean_dec(v___y_3825_);
return v_res_3828_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1(lean_object* v___y_3829_){
_start:
{
lean_object* v___f_3831_; lean_object* v___x_3832_; uint8_t v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
lean_inc(v___y_3829_);
v___f_3831_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_hasInterest___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3831_, 0, v___y_3829_);
v___x_3832_ = lean_unsigned_to_nat(0u);
v___x_3833_ = 0;
v___x_3834_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_3829_);
v___x_3835_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3832_, v___x_3833_, v___x_3834_, v___f_3831_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___lam__1___boxed(lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Std_Http_Body_Stream_hasInterest___lam__1(v___y_3836_);
lean_dec(v___y_3836_);
return v_res_3838_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object* v_stream_3840_){
_start:
{
lean_object* v___f_3842_; lean_object* v___x_3843_; 
v___f_3842_ = ((lean_object*)(l_Std_Http_Body_Stream_hasInterest___closed__0));
v___x_3843_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_3840_, v___f_3842_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_hasInterest___boxed(lean_object* v_stream_3844_, lean_object* v_a_3845_){
_start:
{
lean_object* v_res_3846_; 
v_res_3846_ = l_Std_Http_Body_Stream_hasInterest(v_stream_3844_);
return v_res_3846_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(lean_object* v_lose_3847_, lean_object* v___y_3848_, uint8_t v___x_3849_, lean_object* v_promise_3850_, lean_object* v_x_3851_){
_start:
{
if (lean_obj_tag(v_x_3851_) == 0)
{
lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3861_; 
lean_dec_ref(v_lose_3847_);
v_a_3853_ = lean_ctor_get(v_x_3851_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v_x_3851_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3855_ = v_x_3851_;
v_isShared_3856_ = v_isSharedCheck_3861_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_dec(v_x_3851_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3861_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3853_);
v___x_3858_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
lean_object* v___x_3859_; 
v___x_3859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3858_);
return v___x_3859_;
}
}
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3875_; 
v_a_3862_ = lean_ctor_get(v_x_3851_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v_x_3851_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3864_ = v_x_3851_;
v_isShared_3865_ = v_isSharedCheck_3875_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v_x_3851_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3875_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
uint8_t v___x_3866_; 
v___x_3866_ = lean_unbox(v_a_3862_);
lean_dec(v_a_3862_);
if (v___x_3866_ == 0)
{
lean_object* v___x_3867_; 
lean_del_object(v___x_3864_);
lean_inc(v___y_3848_);
v___x_3867_ = lean_apply_2(v_lose_3847_, v___y_3848_, lean_box(0));
return v___x_3867_;
}
else
{
lean_object* v___x_3868_; lean_object* v___x_3870_; 
lean_dec_ref(v_lose_3847_);
v___x_3868_ = lean_box(v___x_3849_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set(v___x_3864_, 0, v___x_3868_);
v___x_3870_ = v___x_3864_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v___x_3868_);
v___x_3870_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3871_ = lean_io_promise_resolve(v___x_3870_, v_promise_3850_);
v___x_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
v___x_3873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3872_);
return v___x_3873_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed(lean_object* v_lose_3876_, lean_object* v___y_3877_, lean_object* v___x_3878_, lean_object* v_promise_3879_, lean_object* v_x_3880_, lean_object* v___y_3881_){
_start:
{
uint8_t v___x_4494__boxed_3882_; lean_object* v_res_3883_; 
v___x_4494__boxed_3882_ = lean_unbox(v___x_3878_);
v_res_3883_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0(v_lose_3876_, v___y_3877_, v___x_4494__boxed_3882_, v_promise_3879_, v_x_3880_);
lean_dec(v_promise_3879_);
lean_dec(v___y_3877_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(lean_object* v_w_3884_, lean_object* v_lose_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v_finished_3888_; lean_object* v_promise_3889_; uint8_t v___x_3890_; lean_object* v___x_3891_; lean_object* v___f_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; uint8_t v___y_3896_; uint8_t v___x_3904_; 
v_finished_3888_ = lean_ctor_get(v_w_3884_, 0);
lean_inc(v_finished_3888_);
v_promise_3889_ = lean_ctor_get(v_w_3884_, 1);
lean_inc(v_promise_3889_);
lean_dec_ref(v_w_3884_);
v___x_3890_ = 0;
v___x_3891_ = lean_box(v___x_3890_);
lean_inc(v___y_3886_);
v___f_3892_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_3892_, 0, v_lose_3885_);
lean_closure_set(v___f_3892_, 1, v___y_3886_);
lean_closure_set(v___f_3892_, 2, v___x_3891_);
lean_closure_set(v___f_3892_, 3, v_promise_3889_);
v___x_3893_ = lean_unsigned_to_nat(0u);
v___x_3894_ = lean_st_ref_take(v_finished_3888_);
v___x_3904_ = lean_unbox(v___x_3894_);
lean_dec(v___x_3894_);
if (v___x_3904_ == 0)
{
uint8_t v___x_3905_; 
v___x_3905_ = 1;
v___y_3896_ = v___x_3905_;
goto v___jp_3895_;
}
else
{
v___y_3896_ = v___x_3890_;
goto v___jp_3895_;
}
v___jp_3895_:
{
uint8_t v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3897_ = 1;
v___x_3898_ = lean_box(v___x_3897_);
v___x_3899_ = lean_st_ref_put(v_finished_3888_, v___x_3898_);
lean_dec(v_finished_3888_);
v___x_3900_ = lean_box(v___y_3896_);
v___x_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3900_);
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3901_);
v___x_3903_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3893_, v___x_3890_, v___x_3902_, v___f_3892_);
return v___x_3903_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___boxed(lean_object* v_w_3906_, lean_object* v_lose_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(v_w_3906_, v_lose_3907_, v___y_3908_);
lean_dec(v___y_3908_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(lean_object* v_w_3911_, lean_object* v_lose_3912_, lean_object* v___y_3913_){
_start:
{
lean_object* v_finished_3915_; lean_object* v_promise_3916_; uint8_t v___x_3917_; lean_object* v___x_3918_; lean_object* v___f_3919_; lean_object* v___x_3920_; uint8_t v___x_3921_; lean_object* v___x_3922_; uint8_t v___y_3924_; uint8_t v___x_3931_; 
v_finished_3915_ = lean_ctor_get(v_w_3911_, 0);
lean_inc(v_finished_3915_);
v_promise_3916_ = lean_ctor_get(v_w_3911_, 1);
lean_inc(v_promise_3916_);
lean_dec_ref(v_w_3911_);
v___x_3917_ = 1;
v___x_3918_ = lean_box(v___x_3917_);
lean_inc(v___y_3913_);
v___f_3919_ = lean_alloc_closure((void*)(l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0___lam__0___boxed), 6, 4);
lean_closure_set(v___f_3919_, 0, v_lose_3912_);
lean_closure_set(v___f_3919_, 1, v___y_3913_);
lean_closure_set(v___f_3919_, 2, v___x_3918_);
lean_closure_set(v___f_3919_, 3, v_promise_3916_);
v___x_3920_ = lean_unsigned_to_nat(0u);
v___x_3921_ = 0;
v___x_3922_ = lean_st_ref_take(v_finished_3915_);
v___x_3931_ = lean_unbox(v___x_3922_);
lean_dec(v___x_3922_);
if (v___x_3931_ == 0)
{
v___y_3924_ = v___x_3917_;
goto v___jp_3923_;
}
else
{
v___y_3924_ = v___x_3921_;
goto v___jp_3923_;
}
v___jp_3923_:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3925_ = lean_box(v___x_3917_);
v___x_3926_ = lean_st_ref_put(v_finished_3915_, v___x_3925_);
lean_dec(v_finished_3915_);
v___x_3927_ = lean_box(v___y_3924_);
v___x_3928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3927_);
v___x_3929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3928_);
v___x_3930_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3920_, v___x_3921_, v___x_3929_, v___f_3919_);
return v___x_3930_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1___boxed(lean_object* v_w_3932_, lean_object* v_lose_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(v_w_3932_, v_lose_3933_, v___y_3934_);
lean_dec(v___y_3934_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0(lean_object* v_x_3953_){
_start:
{
if (lean_obj_tag(v_x_3953_) == 0)
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3963_; 
v_a_3955_ = lean_ctor_get(v_x_3953_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v_x_3953_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3957_ = v_x_3953_;
v_isShared_3958_ = v_isSharedCheck_3963_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v_x_3953_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3963_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_a_3955_);
v___x_3960_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
lean_object* v___x_3961_; 
v___x_3961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3960_);
return v___x_3961_;
}
}
}
else
{
lean_object* v_a_3964_; lean_object* v_pendingConsumer_3965_; 
v_a_3964_ = lean_ctor_get(v_x_3953_, 0);
lean_inc(v_a_3964_);
lean_dec_ref_known(v_x_3953_, 1);
v_pendingConsumer_3965_ = lean_ctor_get(v_a_3964_, 1);
if (lean_obj_tag(v_pendingConsumer_3965_) == 0)
{
uint8_t v_closed_3966_; 
v_closed_3966_ = lean_ctor_get_uint8(v_a_3964_, sizeof(void*)*6);
lean_dec(v_a_3964_);
if (v_closed_3966_ == 0)
{
lean_object* v___x_3967_; 
v___x_3967_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__0));
return v___x_3967_;
}
else
{
lean_object* v___x_3968_; 
v___x_3968_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__3));
return v___x_3968_;
}
}
else
{
lean_object* v___x_3969_; 
lean_dec(v_a_3964_);
v___x_3969_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__0___closed__6));
return v___x_3969_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__0___boxed(lean_object* v_x_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v_res_3972_; 
v_res_3972_ = l_Std_Http_Body_Stream_interestSelector___lam__0(v_x_3970_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3(lean_object* v_waiter_3980_, lean_object* v___y_3981_, lean_object* v_x_3982_){
_start:
{
if (lean_obj_tag(v_x_3982_) == 0)
{
lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3992_; 
lean_dec_ref(v_waiter_3980_);
v_a_3984_ = lean_ctor_get(v_x_3982_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v_x_3982_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3986_ = v_x_3982_;
v_isShared_3987_ = v_isSharedCheck_3992_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v_x_3982_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3992_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
lean_object* v___x_3990_; 
v___x_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
return v___x_3990_;
}
}
}
else
{
lean_object* v_a_3993_; lean_object* v_pendingConsumer_3994_; 
v_a_3993_ = lean_ctor_get(v_x_3982_, 0);
lean_inc(v_a_3993_);
lean_dec_ref_known(v_x_3982_, 1);
v_pendingConsumer_3994_ = lean_ctor_get(v_a_3993_, 1);
lean_inc(v_pendingConsumer_3994_);
if (lean_obj_tag(v_pendingConsumer_3994_) == 0)
{
uint8_t v_closed_3995_; 
v_closed_3995_ = lean_ctor_get_uint8(v_a_3993_, sizeof(void*)*6);
if (v_closed_3995_ == 0)
{
lean_object* v_interestWaiter_3996_; 
v_interestWaiter_3996_ = lean_ctor_get(v_a_3993_, 2);
if (lean_obj_tag(v_interestWaiter_3996_) == 0)
{
lean_object* v_pendingProducer_3997_; lean_object* v_knownSize_3998_; lean_object* v_pendingIncompleteChunk_3999_; lean_object* v_closeError_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4010_; 
v_pendingProducer_3997_ = lean_ctor_get(v_a_3993_, 0);
v_knownSize_3998_ = lean_ctor_get(v_a_3993_, 3);
v_pendingIncompleteChunk_3999_ = lean_ctor_get(v_a_3993_, 4);
v_closeError_4000_ = lean_ctor_get(v_a_3993_, 5);
v_isSharedCheck_4010_ = !lean_is_exclusive(v_a_3993_);
if (v_isSharedCheck_4010_ == 0)
{
lean_object* v_unused_4011_; lean_object* v_unused_4012_; 
v_unused_4011_ = lean_ctor_get(v_a_3993_, 2);
lean_dec(v_unused_4011_);
v_unused_4012_ = lean_ctor_get(v_a_3993_, 1);
lean_dec(v_unused_4012_);
v___x_4002_ = v_a_3993_;
v_isShared_4003_ = v_isSharedCheck_4010_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_closeError_4000_);
lean_inc(v_pendingIncompleteChunk_3999_);
lean_inc(v_knownSize_3998_);
lean_inc(v_pendingProducer_3997_);
lean_dec(v_a_3993_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4010_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4004_; lean_object* v___x_4006_; 
v___x_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4004_, 0, v_waiter_3980_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 2, v___x_4004_);
v___x_4006_ = v___x_4002_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v_pendingProducer_3997_);
lean_ctor_set(v_reuseFailAlloc_4009_, 1, v_pendingConsumer_3994_);
lean_ctor_set(v_reuseFailAlloc_4009_, 2, v___x_4004_);
lean_ctor_set(v_reuseFailAlloc_4009_, 3, v_knownSize_3998_);
lean_ctor_set(v_reuseFailAlloc_4009_, 4, v_pendingIncompleteChunk_3999_);
lean_ctor_set(v_reuseFailAlloc_4009_, 5, v_closeError_4000_);
lean_ctor_set_uint8(v_reuseFailAlloc_4009_, sizeof(void*)*6, v_closed_3995_);
v___x_4006_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4007_ = lean_st_ref_swap(v___y_3981_, v___x_4006_);
lean_dec(v___x_4007_);
v___x_4008_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4008_;
}
}
}
else
{
lean_object* v___x_4013_; 
lean_dec(v_a_3993_);
lean_dec_ref(v_waiter_3980_);
v___x_4013_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___lam__3___closed__3));
return v___x_4013_;
}
}
else
{
lean_object* v___f_4014_; lean_object* v___x_4015_; 
lean_dec(v_a_3993_);
v___f_4014_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_4015_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__0(v_waiter_3980_, v___f_4014_, v___y_3981_);
return v___x_4015_;
}
}
else
{
lean_object* v___f_4016_; lean_object* v___x_4017_; 
lean_dec_ref_known(v_pendingConsumer_3994_, 1);
lean_dec(v_a_3993_);
v___f_4016_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___lam__4___closed__0));
v___x_4017_ = l_Std_Async_Waiter_race___at___00Std_Http_Body_Stream_interestSelector_spec__1(v_waiter_3980_, v___f_4016_, v___y_3981_);
return v___x_4017_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__3___boxed(lean_object* v_waiter_4018_, lean_object* v___y_4019_, lean_object* v_x_4020_, lean_object* v___y_4021_){
_start:
{
lean_object* v_res_4022_; 
v_res_4022_ = l_Std_Http_Body_Stream_interestSelector___lam__3(v_waiter_4018_, v___y_4019_, v_x_4020_);
lean_dec(v___y_4019_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1(lean_object* v___y_4023_, lean_object* v___f_4024_, lean_object* v_x_4025_){
_start:
{
if (lean_obj_tag(v_x_4025_) == 0)
{
lean_object* v___x_4027_; 
lean_dec_ref(v___f_4024_);
v___x_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4027_, 0, v_x_4025_);
return v___x_4027_;
}
else
{
lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4039_; 
v_isSharedCheck_4039_ = !lean_is_exclusive(v_x_4025_);
if (v_isSharedCheck_4039_ == 0)
{
lean_object* v_unused_4040_; 
v_unused_4040_ = lean_ctor_get(v_x_4025_, 0);
lean_dec(v_unused_4040_);
v___x_4029_ = v_x_4025_;
v_isShared_4030_ = v_isSharedCheck_4039_;
goto v_resetjp_4028_;
}
else
{
lean_dec(v_x_4025_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4039_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4031_; uint8_t v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4035_; 
v___x_4031_ = lean_unsigned_to_nat(0u);
v___x_4032_ = 0;
v___x_4033_ = lean_st_ref_get(v___y_4023_);
if (v_isShared_4030_ == 0)
{
lean_ctor_set(v___x_4029_, 0, v___x_4033_);
v___x_4035_ = v___x_4029_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4033_);
v___x_4035_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4035_);
v___x_4037_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4031_, v___x_4032_, v___x_4036_, v___f_4024_);
return v___x_4037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__1___boxed(lean_object* v___y_4041_, lean_object* v___f_4042_, lean_object* v_x_4043_, lean_object* v___y_4044_){
_start:
{
lean_object* v_res_4045_; 
v_res_4045_ = l_Std_Http_Body_Stream_interestSelector___lam__1(v___y_4041_, v___f_4042_, v_x_4043_);
lean_dec(v___y_4041_);
return v_res_4045_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2(lean_object* v_waiter_4046_, lean_object* v___y_4047_){
_start:
{
lean_object* v___f_4049_; lean_object* v___f_4050_; lean_object* v___x_4051_; uint8_t v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
lean_inc_n(v___y_4047_, 2);
v___f_4049_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__3___boxed), 4, 2);
lean_closure_set(v___f_4049_, 0, v_waiter_4046_);
lean_closure_set(v___f_4049_, 1, v___y_4047_);
v___f_4050_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4050_, 0, v___y_4047_);
lean_closure_set(v___f_4050_, 1, v___f_4049_);
v___x_4051_ = lean_unsigned_to_nat(0u);
v___x_4052_ = 0;
v___x_4053_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_4047_);
v___x_4054_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4051_, v___x_4052_, v___x_4053_, v___f_4050_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__2___boxed(lean_object* v_waiter_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = l_Std_Http_Body_Stream_interestSelector___lam__2(v_waiter_4055_, v___y_4056_);
lean_dec(v___y_4056_);
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4(lean_object* v_stream_4059_, lean_object* v_waiter_4060_){
_start:
{
lean_object* v___f_4062_; lean_object* v___x_4063_; 
v___f_4062_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4062_, 0, v_waiter_4060_);
v___x_4063_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_stream_4059_, v___f_4062_);
return v___x_4063_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__4___boxed(lean_object* v_stream_4064_, lean_object* v_waiter_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l_Std_Http_Body_Stream_interestSelector___lam__4(v_stream_4064_, v_waiter_4065_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5(lean_object* v___y_4068_, lean_object* v___f_4069_, lean_object* v_x_4070_){
_start:
{
if (lean_obj_tag(v_x_4070_) == 0)
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4080_; 
lean_dec_ref(v___f_4069_);
v_a_4072_ = lean_ctor_get(v_x_4070_, 0);
v_isSharedCheck_4080_ = !lean_is_exclusive(v_x_4070_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4074_ = v_x_4070_;
v_isShared_4075_ = v_isSharedCheck_4080_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v_x_4070_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4080_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4079_; 
v_reuseFailAlloc_4079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4079_, 0, v_a_4072_);
v___x_4077_ = v_reuseFailAlloc_4079_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
lean_object* v___x_4078_; 
v___x_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4077_);
return v___x_4078_;
}
}
}
else
{
lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4092_; 
v_isSharedCheck_4092_ = !lean_is_exclusive(v_x_4070_);
if (v_isSharedCheck_4092_ == 0)
{
lean_object* v_unused_4093_; 
v_unused_4093_ = lean_ctor_get(v_x_4070_, 0);
lean_dec(v_unused_4093_);
v___x_4082_ = v_x_4070_;
v_isShared_4083_ = v_isSharedCheck_4092_;
goto v_resetjp_4081_;
}
else
{
lean_dec(v_x_4070_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4092_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4084_; uint8_t v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4088_; 
v___x_4084_ = lean_unsigned_to_nat(0u);
v___x_4085_ = 0;
v___x_4086_ = lean_st_ref_get(v___y_4068_);
if (v_isShared_4083_ == 0)
{
lean_ctor_set(v___x_4082_, 0, v___x_4086_);
v___x_4088_ = v___x_4082_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v___x_4086_);
v___x_4088_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
v___x_4090_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4084_, v___x_4085_, v___x_4089_, v___f_4069_);
return v___x_4090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__5___boxed(lean_object* v___y_4094_, lean_object* v___f_4095_, lean_object* v_x_4096_, lean_object* v___y_4097_){
_start:
{
lean_object* v_res_4098_; 
v_res_4098_ = l_Std_Http_Body_Stream_interestSelector___lam__5(v___y_4094_, v___f_4095_, v_x_4096_);
lean_dec(v___y_4094_);
return v_res_4098_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6(lean_object* v___f_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v___f_4102_; lean_object* v___x_4103_; uint8_t v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
lean_inc(v___y_4100_);
v___f_4102_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__5___boxed), 4, 2);
lean_closure_set(v___f_4102_, 0, v___y_4100_);
lean_closure_set(v___f_4102_, 1, v___f_4099_);
v___x_4103_ = lean_unsigned_to_nat(0u);
v___x_4104_ = 0;
v___x_4105_ = l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1(v___y_4100_);
v___x_4106_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4103_, v___x_4104_, v___x_4105_, v___f_4102_);
return v___x_4106_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector___lam__6___boxed(lean_object* v___f_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Std_Http_Body_Stream_interestSelector___lam__6(v___f_4107_, v___y_4108_);
lean_dec(v___y_4108_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object* v_stream_4114_){
_start:
{
lean_object* v___f_4115_; lean_object* v___f_4116_; lean_object* v___f_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; 
v___f_4115_ = ((lean_object*)(l_Std_Http_Body_Stream_recvSelector___closed__0));
lean_inc_ref_n(v_stream_4114_, 2);
v___f_4116_ = lean_alloc_closure((void*)(l_Std_Http_Body_Stream_interestSelector___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4116_, 0, v_stream_4114_);
v___f_4117_ = ((lean_object*)(l_Std_Http_Body_Stream_interestSelector___closed__1));
v___x_4118_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4118_, 0, lean_box(0));
lean_closure_set(v___x_4118_, 1, lean_box(0));
lean_closure_set(v___x_4118_, 2, v_stream_4114_);
lean_closure_set(v___x_4118_, 3, v___f_4117_);
v___x_4119_ = lean_alloc_closure((void*)(l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___boxed), 5, 4);
lean_closure_set(v___x_4119_, 0, lean_box(0));
lean_closure_set(v___x_4119_, 1, lean_box(0));
lean_closure_set(v___x_4119_, 2, v_stream_4114_);
lean_closure_set(v___x_4119_, 3, v___f_4115_);
v___x_4120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4118_);
lean_ctor_set(v___x_4120_, 1, v___f_4116_);
lean_ctor_set(v___x_4120_, 2, v___x_4119_);
return v___x_4120_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0(lean_object* v_x_4121_, lean_object* v_x_4122_){
_start:
{
if (lean_obj_tag(v_x_4122_) == 0)
{
lean_object* v_a_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4132_; 
lean_dec_ref(v_x_4121_);
v_a_4124_ = lean_ctor_get(v_x_4122_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v_x_4122_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4126_ = v_x_4122_;
v_isShared_4127_ = v_isSharedCheck_4132_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_a_4124_);
lean_dec(v_x_4122_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4132_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v___x_4129_; 
if (v_isShared_4127_ == 0)
{
v___x_4129_ = v___x_4126_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4124_);
v___x_4129_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
lean_object* v___x_4130_; 
v___x_4130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
return v___x_4130_;
}
}
}
else
{
lean_object* v___x_4133_; 
lean_dec_ref_known(v_x_4122_, 1);
v___x_4133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4133_, 0, v_x_4121_);
return v___x_4133_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__0___boxed(lean_object* v_x_4134_, lean_object* v_x_4135_, lean_object* v___y_4136_){
_start:
{
lean_object* v_res_4137_; 
v_res_4137_ = l_Std_Http_Body_stream___lam__0(v_x_4134_, v_x_4135_);
return v_res_4137_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1(lean_object* v_a_4138_, lean_object* v_x_4139_){
_start:
{
if (lean_obj_tag(v_x_4139_) == 0)
{
lean_object* v_a_4141_; lean_object* v___x_4142_; 
v_a_4141_ = lean_ctor_get(v_x_4139_, 0);
lean_inc(v_a_4141_);
lean_dec_ref_known(v_x_4139_, 1);
v___x_4142_ = l_Std_Http_Body_Stream_closeWithError(v_a_4138_, v_a_4141_);
return v___x_4142_;
}
else
{
lean_object* v___x_4143_; 
lean_dec_ref(v_a_4138_);
v___x_4143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4143_, 0, v_x_4139_);
return v___x_4143_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__1___boxed(lean_object* v_a_4144_, lean_object* v_x_4145_, lean_object* v___y_4146_){
_start:
{
lean_object* v_res_4147_; 
v_res_4147_ = l_Std_Http_Body_stream___lam__1(v_a_4144_, v_x_4145_);
return v_res_4147_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2(lean_object* v_a_4148_, lean_object* v_x_4149_){
_start:
{
if (lean_obj_tag(v_x_4149_) == 0)
{
lean_object* v___x_4151_; 
lean_dec_ref(v_a_4148_);
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v_x_4149_);
return v___x_4151_;
}
else
{
lean_object* v___x_4152_; 
lean_dec_ref_known(v_x_4149_, 1);
v___x_4152_ = l_Std_Http_Body_Stream_close(v_a_4148_);
return v___x_4152_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__2___boxed(lean_object* v_a_4153_, lean_object* v_x_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v_res_4156_; 
v_res_4156_ = l_Std_Http_Body_stream___lam__2(v_a_4153_, v_x_4154_);
return v_res_4156_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3(lean_object* v_gen_4157_, lean_object* v_a_4158_, lean_object* v___x_4159_, uint8_t v___x_4160_, lean_object* v___f_4161_, lean_object* v___f_4162_){
_start:
{
lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4164_ = lean_apply_2(v_gen_4157_, v_a_4158_, lean_box(0));
lean_inc(v___x_4159_);
v___x_4165_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4159_, v___x_4160_, v___x_4164_, v___f_4161_);
v___x_4166_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4159_, v___x_4160_, v___x_4165_, v___f_4162_);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__3___boxed(lean_object* v_gen_4167_, lean_object* v_a_4168_, lean_object* v___x_4169_, lean_object* v___x_4170_, lean_object* v___f_4171_, lean_object* v___f_4172_, lean_object* v___y_4173_){
_start:
{
uint8_t v___x_1066__boxed_4174_; lean_object* v_res_4175_; 
v___x_1066__boxed_4174_ = lean_unbox(v___x_4170_);
v_res_4175_ = l_Std_Http_Body_stream___lam__3(v_gen_4167_, v_a_4168_, v___x_4169_, v___x_1066__boxed_4174_, v___f_4171_, v___f_4172_);
return v_res_4175_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4(lean_object* v_gen_4176_, lean_object* v_a_4177_, lean_object* v___f_4178_, lean_object* v___f_4179_, lean_object* v___f_4180_, lean_object* v_x_4181_){
_start:
{
if (lean_obj_tag(v_x_4181_) == 0)
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4191_; 
lean_dec_ref(v___f_4180_);
lean_dec_ref(v___f_4179_);
lean_dec_ref(v___f_4178_);
lean_dec_ref(v_a_4177_);
lean_dec_ref(v_gen_4176_);
v_a_4183_ = lean_ctor_get(v_x_4181_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_x_4181_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4185_ = v_x_4181_;
v_isShared_4186_ = v_isSharedCheck_4191_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v_x_4181_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4191_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4188_; 
if (v_isShared_4186_ == 0)
{
v___x_4188_ = v___x_4185_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v_a_4183_);
v___x_4188_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
lean_object* v___x_4189_; 
v___x_4189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
return v___x_4189_;
}
}
}
else
{
lean_object* v___x_4192_; uint8_t v___x_4193_; lean_object* v___x_4194_; lean_object* v___f_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
lean_dec_ref_known(v_x_4181_, 1);
v___x_4192_ = lean_unsigned_to_nat(0u);
v___x_4193_ = 0;
v___x_4194_ = lean_box(v___x_4193_);
v___f_4195_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__3___boxed), 7, 6);
lean_closure_set(v___f_4195_, 0, v_gen_4176_);
lean_closure_set(v___f_4195_, 1, v_a_4177_);
lean_closure_set(v___f_4195_, 2, v___x_4192_);
lean_closure_set(v___f_4195_, 3, v___x_4194_);
lean_closure_set(v___f_4195_, 4, v___f_4178_);
lean_closure_set(v___f_4195_, 5, v___f_4179_);
v___x_4196_ = lean_io_as_task(v___f_4195_, v___x_4192_);
lean_dec_ref(v___x_4196_);
v___x_4197_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
v___x_4198_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4192_, v___x_4193_, v___x_4197_, v___f_4180_);
return v___x_4198_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__4___boxed(lean_object* v_gen_4199_, lean_object* v_a_4200_, lean_object* v___f_4201_, lean_object* v___f_4202_, lean_object* v___f_4203_, lean_object* v_x_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l_Std_Http_Body_stream___lam__4(v_gen_4199_, v_a_4200_, v___f_4201_, v___f_4202_, v___f_4203_, v_x_4204_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5(lean_object* v___x_4207_, lean_object* v___y_4208_){
_start:
{
lean_object* v___x_4210_; lean_object* v_pendingProducer_4211_; lean_object* v_pendingConsumer_4212_; lean_object* v_interestWaiter_4213_; uint8_t v_closed_4214_; lean_object* v_pendingIncompleteChunk_4215_; lean_object* v_closeError_4216_; lean_object* v___x_4218_; uint8_t v_isShared_4219_; uint8_t v_isSharedCheck_4225_; 
v___x_4210_ = lean_st_ref_take(v___y_4208_);
v_pendingProducer_4211_ = lean_ctor_get(v___x_4210_, 0);
v_pendingConsumer_4212_ = lean_ctor_get(v___x_4210_, 1);
v_interestWaiter_4213_ = lean_ctor_get(v___x_4210_, 2);
v_closed_4214_ = lean_ctor_get_uint8(v___x_4210_, sizeof(void*)*6);
v_pendingIncompleteChunk_4215_ = lean_ctor_get(v___x_4210_, 4);
v_closeError_4216_ = lean_ctor_get(v___x_4210_, 5);
v_isSharedCheck_4225_ = !lean_is_exclusive(v___x_4210_);
if (v_isSharedCheck_4225_ == 0)
{
lean_object* v_unused_4226_; 
v_unused_4226_ = lean_ctor_get(v___x_4210_, 3);
lean_dec(v_unused_4226_);
v___x_4218_ = v___x_4210_;
v_isShared_4219_ = v_isSharedCheck_4225_;
goto v_resetjp_4217_;
}
else
{
lean_inc(v_closeError_4216_);
lean_inc(v_pendingIncompleteChunk_4215_);
lean_inc(v_interestWaiter_4213_);
lean_inc(v_pendingConsumer_4212_);
lean_inc(v_pendingProducer_4211_);
lean_dec(v___x_4210_);
v___x_4218_ = lean_box(0);
v_isShared_4219_ = v_isSharedCheck_4225_;
goto v_resetjp_4217_;
}
v_resetjp_4217_:
{
lean_object* v___x_4221_; 
if (v_isShared_4219_ == 0)
{
lean_ctor_set(v___x_4218_, 3, v___x_4207_);
v___x_4221_ = v___x_4218_;
goto v_reusejp_4220_;
}
else
{
lean_object* v_reuseFailAlloc_4224_; 
v_reuseFailAlloc_4224_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_4224_, 0, v_pendingProducer_4211_);
lean_ctor_set(v_reuseFailAlloc_4224_, 1, v_pendingConsumer_4212_);
lean_ctor_set(v_reuseFailAlloc_4224_, 2, v_interestWaiter_4213_);
lean_ctor_set(v_reuseFailAlloc_4224_, 3, v___x_4207_);
lean_ctor_set(v_reuseFailAlloc_4224_, 4, v_pendingIncompleteChunk_4215_);
lean_ctor_set(v_reuseFailAlloc_4224_, 5, v_closeError_4216_);
lean_ctor_set_uint8(v_reuseFailAlloc_4224_, sizeof(void*)*6, v_closed_4214_);
v___x_4221_ = v_reuseFailAlloc_4224_;
goto v_reusejp_4220_;
}
v_reusejp_4220_:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4222_ = lean_st_ref_put(v___y_4208_, v___x_4221_);
v___x_4223_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__5___boxed(lean_object* v___x_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = l_Std_Http_Body_stream___lam__5(v___x_4227_, v___y_4228_);
lean_dec(v___y_4228_);
return v_res_4230_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6(lean_object* v_gen_4235_, lean_object* v_x_4236_){
_start:
{
if (lean_obj_tag(v_x_4236_) == 0)
{
lean_object* v___x_4238_; 
lean_dec_ref(v_gen_4235_);
v___x_4238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4238_, 0, v_x_4236_);
return v___x_4238_;
}
else
{
lean_object* v_a_4239_; lean_object* v___f_4240_; lean_object* v___f_4241_; lean_object* v___f_4242_; lean_object* v___f_4243_; lean_object* v___f_4244_; lean_object* v___x_4245_; uint8_t v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v_a_4239_ = lean_ctor_get(v_x_4236_, 0);
lean_inc_n(v_a_4239_, 4);
v___f_4240_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4240_, 0, v_x_4236_);
v___f_4241_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4241_, 0, v_a_4239_);
v___f_4242_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4242_, 0, v_a_4239_);
v___f_4243_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__4___boxed), 7, 5);
lean_closure_set(v___f_4243_, 0, v_gen_4235_);
lean_closure_set(v___f_4243_, 1, v_a_4239_);
lean_closure_set(v___f_4243_, 2, v___f_4242_);
lean_closure_set(v___f_4243_, 3, v___f_4241_);
lean_closure_set(v___f_4243_, 4, v___f_4240_);
v___f_4244_ = ((lean_object*)(l_Std_Http_Body_stream___lam__6___closed__1));
v___x_4245_ = lean_unsigned_to_nat(0u);
v___x_4246_ = 0;
v___x_4247_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_a_4239_, v___f_4244_);
v___x_4248_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4245_, v___x_4246_, v___x_4247_, v___f_4243_);
return v___x_4248_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___lam__6___boxed(lean_object* v_gen_4249_, lean_object* v_x_4250_, lean_object* v___y_4251_){
_start:
{
lean_object* v_res_4252_; 
v_res_4252_ = l_Std_Http_Body_stream___lam__6(v_gen_4249_, v_x_4250_);
return v_res_4252_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream(lean_object* v_gen_4253_){
_start:
{
lean_object* v___f_4255_; lean_object* v___x_4256_; uint8_t v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v___f_4255_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__6___boxed), 3, 1);
lean_closure_set(v___f_4255_, 0, v_gen_4253_);
v___x_4256_ = lean_unsigned_to_nat(0u);
v___x_4257_ = 0;
v___x_4258_ = l_Std_Http_Body_mkStream();
v___x_4259_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4256_, v___x_4257_, v___x_4258_, v___f_4255_);
return v___x_4259_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_stream___boxed(lean_object* v_gen_4260_, lean_object* v_a_4261_){
_start:
{
lean_object* v_res_4262_; 
v_res_4262_ = l_Std_Http_Body_stream(v_gen_4260_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0(lean_object* v___x_4263_, lean_object* v_content_4264_, lean_object* v_s_4265_, lean_object* v_x_4266_){
_start:
{
if (lean_obj_tag(v_x_4266_) == 0)
{
lean_object* v___x_4268_; 
lean_dec_ref(v_s_4265_);
lean_dec_ref(v_content_4264_);
v___x_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4268_, 0, v_x_4266_);
return v___x_4268_;
}
else
{
lean_object* v___x_4269_; uint8_t v___x_4270_; 
lean_dec_ref_known(v_x_4266_, 1);
v___x_4269_ = lean_unsigned_to_nat(0u);
v___x_4270_ = lean_nat_dec_lt(v___x_4269_, v___x_4263_);
if (v___x_4270_ == 0)
{
lean_object* v___x_4271_; 
lean_dec_ref(v_s_4265_);
lean_dec_ref(v_content_4264_);
v___x_4271_ = ((lean_object*)(l___private_Std_Http_Data_Body_Stream_0__Std_Http_Body_Channel_pruneFinishedWaiters___at___00Std_Http_Body_Stream_tryRecv_spec__1___lam__0___closed__1));
return v___x_4271_;
}
else
{
lean_object* v___x_4272_; uint8_t v___x_4273_; lean_object* v___x_4274_; 
v___x_4272_ = l_Std_Http_Chunk_ofByteArray(v_content_4264_);
v___x_4273_ = 0;
v___x_4274_ = l_Std_Http_Body_Stream_send(v_s_4265_, v___x_4272_, v___x_4273_);
return v___x_4274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__0___boxed(lean_object* v___x_4275_, lean_object* v_content_4276_, lean_object* v_s_4277_, lean_object* v_x_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v_res_4280_; 
v_res_4280_ = l_Std_Http_Body_fromBytes___lam__0(v___x_4275_, v_content_4276_, v_s_4277_, v_x_4278_);
lean_dec(v___x_4275_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2(lean_object* v_content_4281_, lean_object* v_s_4282_){
_start:
{
lean_object* v___x_4284_; lean_object* v___f_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___f_4288_; lean_object* v___x_4289_; uint8_t v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4284_ = lean_byte_array_size(v_content_4281_);
lean_inc_ref(v_s_4282_);
v___f_4285_ = lean_alloc_closure((void*)(l_Std_Http_Body_fromBytes___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4285_, 0, v___x_4284_);
lean_closure_set(v___f_4285_, 1, v_content_4281_);
lean_closure_set(v___f_4285_, 2, v_s_4282_);
v___x_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4286_, 0, v___x_4284_);
v___x_4287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
v___f_4288_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4288_, 0, v___x_4287_);
v___x_4289_ = lean_unsigned_to_nat(0u);
v___x_4290_ = 0;
v___x_4291_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_s_4282_, v___f_4288_);
v___x_4292_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4289_, v___x_4290_, v___x_4291_, v___f_4285_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___lam__2___boxed(lean_object* v_content_4293_, lean_object* v_s_4294_, lean_object* v___y_4295_){
_start:
{
lean_object* v_res_4296_; 
v_res_4296_ = l_Std_Http_Body_fromBytes___lam__2(v_content_4293_, v_s_4294_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes(lean_object* v_content_4297_){
_start:
{
lean_object* v___f_4299_; lean_object* v___x_4300_; 
v___f_4299_ = lean_alloc_closure((void*)(l_Std_Http_Body_fromBytes___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4299_, 0, v_content_4297_);
v___x_4300_ = l_Std_Http_Body_stream(v___f_4299_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_fromBytes___boxed(lean_object* v_content_4301_, lean_object* v_a_4302_){
_start:
{
lean_object* v_res_4303_; 
v_res_4303_ = l_Std_Http_Body_fromBytes(v_content_4301_);
return v_res_4303_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1(lean_object* v_a_4304_, lean_object* v___f_4305_, lean_object* v_x_4306_){
_start:
{
if (lean_obj_tag(v_x_4306_) == 0)
{
lean_object* v_a_4308_; lean_object* v___x_4310_; uint8_t v_isShared_4311_; uint8_t v_isSharedCheck_4316_; 
lean_dec_ref(v___f_4305_);
lean_dec_ref(v_a_4304_);
v_a_4308_ = lean_ctor_get(v_x_4306_, 0);
v_isSharedCheck_4316_ = !lean_is_exclusive(v_x_4306_);
if (v_isSharedCheck_4316_ == 0)
{
v___x_4310_ = v_x_4306_;
v_isShared_4311_ = v_isSharedCheck_4316_;
goto v_resetjp_4309_;
}
else
{
lean_inc(v_a_4308_);
lean_dec(v_x_4306_);
v___x_4310_ = lean_box(0);
v_isShared_4311_ = v_isSharedCheck_4316_;
goto v_resetjp_4309_;
}
v_resetjp_4309_:
{
lean_object* v___x_4313_; 
if (v_isShared_4311_ == 0)
{
v___x_4313_ = v___x_4310_;
goto v_reusejp_4312_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_a_4308_);
v___x_4313_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4312_;
}
v_reusejp_4312_:
{
lean_object* v___x_4314_; 
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4313_);
return v___x_4314_;
}
}
}
else
{
lean_object* v___x_4317_; uint8_t v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; 
lean_dec_ref_known(v_x_4306_, 1);
v___x_4317_ = lean_unsigned_to_nat(0u);
v___x_4318_ = 0;
v___x_4319_ = l_Std_Http_Body_Stream_close(v_a_4304_);
v___x_4320_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4317_, v___x_4318_, v___x_4319_, v___f_4305_);
return v___x_4320_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__1___boxed(lean_object* v_a_4321_, lean_object* v___f_4322_, lean_object* v_x_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l_Std_Http_Body_empty___lam__1(v_a_4321_, v___f_4322_, v_x_4323_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2(lean_object* v_x_4332_){
_start:
{
if (lean_obj_tag(v_x_4332_) == 0)
{
lean_object* v___x_4334_; 
v___x_4334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4334_, 0, v_x_4332_);
return v___x_4334_;
}
else
{
lean_object* v_a_4335_; lean_object* v___f_4336_; lean_object* v___f_4337_; lean_object* v___x_4338_; lean_object* v___f_4339_; uint8_t v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v_a_4335_ = lean_ctor_get(v_x_4332_, 0);
lean_inc_n(v_a_4335_, 2);
v___f_4336_ = lean_alloc_closure((void*)(l_Std_Http_Body_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4336_, 0, v_x_4332_);
v___f_4337_ = lean_alloc_closure((void*)(l_Std_Http_Body_empty___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4337_, 0, v_a_4335_);
lean_closure_set(v___f_4337_, 1, v___f_4336_);
v___x_4338_ = lean_unsigned_to_nat(0u);
v___f_4339_ = ((lean_object*)(l_Std_Http_Body_empty___lam__2___closed__2));
v___x_4340_ = 0;
v___x_4341_ = l_Std_Mutex_atomically___at___00Std_Http_Body_Stream_tryRecv_spec__2___redArg(v_a_4335_, v___f_4339_);
v___x_4342_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4338_, v___x_4340_, v___x_4341_, v___f_4337_);
return v___x_4342_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___lam__2___boxed(lean_object* v_x_4343_, lean_object* v___y_4344_){
_start:
{
lean_object* v_res_4345_; 
v_res_4345_ = l_Std_Http_Body_empty___lam__2(v_x_4343_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty(){
_start:
{
lean_object* v___f_4348_; lean_object* v___x_4349_; uint8_t v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___f_4348_ = ((lean_object*)(l_Std_Http_Body_empty___closed__0));
v___x_4349_ = lean_unsigned_to_nat(0u);
v___x_4350_ = 0;
v___x_4351_ = l_Std_Http_Body_mkStream();
v___x_4352_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4349_, v___x_4350_, v___x_4351_, v___f_4348_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_empty___boxed(lean_object* v_a_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l_Std_Http_Body_empty();
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeResponseStreamAny___lam__0(lean_object* v___x_4377_, lean_object* v_f_4378_){
_start:
{
lean_object* v_line_4379_; lean_object* v_body_4380_; lean_object* v_extensions_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4389_; 
v_line_4379_ = lean_ctor_get(v_f_4378_, 0);
v_body_4380_ = lean_ctor_get(v_f_4378_, 1);
v_extensions_4381_ = lean_ctor_get(v_f_4378_, 2);
v_isSharedCheck_4389_ = !lean_is_exclusive(v_f_4378_);
if (v_isSharedCheck_4389_ == 0)
{
v___x_4383_ = v_f_4378_;
v_isShared_4384_ = v_isSharedCheck_4389_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_extensions_4381_);
lean_inc(v_body_4380_);
lean_inc(v_line_4379_);
lean_dec(v_f_4378_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4389_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4385_; lean_object* v___x_4387_; 
v___x_4385_ = l_Std_Http_Body_Any_ofBody___redArg(v___x_4377_, v_body_4380_);
if (v_isShared_4384_ == 0)
{
lean_ctor_set(v___x_4383_, 1, v___x_4385_);
v___x_4387_ = v___x_4383_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_line_4379_);
lean_ctor_set(v_reuseFailAlloc_4388_, 1, v___x_4385_);
lean_ctor_set(v_reuseFailAlloc_4388_, 2, v_extensions_4381_);
v___x_4387_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
return v___x_4387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(lean_object* v___x_4393_, lean_object* v_x_4394_){
_start:
{
if (lean_obj_tag(v_x_4394_) == 0)
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4404_; 
lean_dec_ref(v___x_4393_);
v_a_4396_ = lean_ctor_get(v_x_4394_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v_x_4394_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4398_ = v_x_4394_;
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v_x_4394_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_a_4396_);
v___x_4401_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
lean_object* v___x_4402_; 
v___x_4402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4402_, 0, v___x_4401_);
return v___x_4402_;
}
}
}
else
{
lean_object* v_a_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4424_; 
v_a_4405_ = lean_ctor_get(v_x_4394_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v_x_4394_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4407_ = v_x_4394_;
v_isShared_4408_ = v_isSharedCheck_4424_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_a_4405_);
lean_dec(v_x_4394_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4424_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v_line_4409_; lean_object* v_body_4410_; lean_object* v_extensions_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4423_; 
v_line_4409_ = lean_ctor_get(v_a_4405_, 0);
v_body_4410_ = lean_ctor_get(v_a_4405_, 1);
v_extensions_4411_ = lean_ctor_get(v_a_4405_, 2);
v_isSharedCheck_4423_ = !lean_is_exclusive(v_a_4405_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4413_ = v_a_4405_;
v_isShared_4414_ = v_isSharedCheck_4423_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_extensions_4411_);
lean_inc(v_body_4410_);
lean_inc(v_line_4409_);
lean_dec(v_a_4405_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4423_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4415_; lean_object* v___x_4417_; 
v___x_4415_ = l_Std_Http_Body_Any_ofBody___redArg(v___x_4393_, v_body_4410_);
if (v_isShared_4414_ == 0)
{
lean_ctor_set(v___x_4413_, 1, v___x_4415_);
v___x_4417_ = v___x_4413_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_line_4409_);
lean_ctor_set(v_reuseFailAlloc_4422_, 1, v___x_4415_);
lean_ctor_set(v_reuseFailAlloc_4422_, 2, v_extensions_4411_);
v___x_4417_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
lean_object* v___x_4419_; 
if (v_isShared_4408_ == 0)
{
lean_ctor_set(v___x_4407_, 0, v___x_4417_);
v___x_4419_ = v___x_4407_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v___x_4417_);
v___x_4419_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
lean_object* v___x_4420_; 
v___x_4420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4420_, 0, v___x_4419_);
return v___x_4420_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0___boxed(lean_object* v___x_4425_, lean_object* v_x_4426_, lean_object* v___y_4427_){
_start:
{
lean_object* v_res_4428_; 
v_res_4428_ = l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__0(v___x_4425_, v_x_4426_);
return v_res_4428_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(lean_object* v___f_4429_, lean_object* v_action_4430_, lean_object* v___y_4431_){
_start:
{
lean_object* v___x_4433_; uint8_t v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
v___x_4433_ = lean_unsigned_to_nat(0u);
v___x_4434_ = 0;
lean_inc_ref(v___y_4431_);
v___x_4435_ = lean_apply_2(v_action_4430_, v___y_4431_, lean_box(0));
v___x_4436_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4433_, v___x_4434_, v___x_4435_, v___f_4429_);
return v___x_4436_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1___boxed(lean_object* v___f_4437_, lean_object* v_action_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_){
_start:
{
lean_object* v_res_4441_; 
v_res_4441_ = l_Std_Http_Body_instCoeContextAsyncResponseStreamAny___lam__1(v___f_4437_, v_action_4438_, v___y_4439_);
lean_dec_ref(v___y_4439_);
return v_res_4441_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(lean_object* v___f_4447_, lean_object* v_action_4448_, lean_object* v___y_4449_){
_start:
{
lean_object* v___x_4451_; uint8_t v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; 
v___x_4451_ = lean_unsigned_to_nat(0u);
v___x_4452_ = 0;
v___x_4453_ = lean_apply_1(v_action_4448_, lean_box(0));
v___x_4454_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4451_, v___x_4452_, v___x_4453_, v___f_4447_);
return v___x_4454_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1___boxed(lean_object* v___f_4455_, lean_object* v_action_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v_res_4459_; 
v_res_4459_ = l_Std_Http_Body_instCoeAsyncResponseStreamContextAsyncAny___lam__1(v___f_4455_, v_action_4456_, v___y_4457_);
lean_dec_ref(v___y_4457_);
return v_res_4459_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0(lean_object* v_builder_4463_, lean_object* v_x_4464_){
_start:
{
if (lean_obj_tag(v_x_4464_) == 0)
{
lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4474_; 
v_a_4466_ = lean_ctor_get(v_x_4464_, 0);
v_isSharedCheck_4474_ = !lean_is_exclusive(v_x_4464_);
if (v_isSharedCheck_4474_ == 0)
{
v___x_4468_ = v_x_4464_;
v_isShared_4469_ = v_isSharedCheck_4474_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v_x_4464_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4474_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4471_; 
if (v_isShared_4469_ == 0)
{
v___x_4471_ = v___x_4468_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4473_; 
v_reuseFailAlloc_4473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4473_, 0, v_a_4466_);
v___x_4471_ = v_reuseFailAlloc_4473_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
lean_object* v___x_4472_; 
v___x_4472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4472_, 0, v___x_4471_);
return v___x_4472_;
}
}
}
else
{
lean_object* v_a_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4484_; 
v_a_4475_ = lean_ctor_get(v_x_4464_, 0);
v_isSharedCheck_4484_ = !lean_is_exclusive(v_x_4464_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4477_ = v_x_4464_;
v_isShared_4478_ = v_isSharedCheck_4484_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_a_4475_);
lean_dec(v_x_4464_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4484_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v___x_4479_; lean_object* v___x_4481_; 
v___x_4479_ = l_Std_Http_Request_Builder_body___redArg(v_builder_4463_, v_a_4475_);
if (v_isShared_4478_ == 0)
{
lean_ctor_set(v___x_4477_, 0, v___x_4479_);
v___x_4481_ = v___x_4477_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v___x_4479_);
v___x_4481_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
lean_object* v___x_4482_; 
v___x_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4481_);
return v___x_4482_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___lam__0___boxed(lean_object* v_builder_4485_, lean_object* v_x_4486_, lean_object* v___y_4487_){
_start:
{
lean_object* v_res_4488_; 
v_res_4488_ = l_Std_Http_Request_Builder_stream___lam__0(v_builder_4485_, v_x_4486_);
lean_dec_ref(v_builder_4485_);
return v_res_4488_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream(lean_object* v_builder_4489_, lean_object* v_gen_4490_){
_start:
{
lean_object* v___f_4492_; lean_object* v___x_4493_; uint8_t v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___f_4492_ = lean_alloc_closure((void*)(l_Std_Http_Request_Builder_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4492_, 0, v_builder_4489_);
v___x_4493_ = lean_unsigned_to_nat(0u);
v___x_4494_ = 0;
v___x_4495_ = l_Std_Http_Body_stream(v_gen_4490_);
v___x_4496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4493_, v___x_4494_, v___x_4495_, v___f_4492_);
return v___x_4496_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_stream___boxed(lean_object* v_builder_4497_, lean_object* v_gen_4498_, lean_object* v_a_4499_){
_start:
{
lean_object* v_res_4500_; 
v_res_4500_ = l_Std_Http_Request_Builder_stream(v_builder_4497_, v_gen_4498_);
return v_res_4500_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0(lean_object* v_builder_4501_, lean_object* v_x_4502_){
_start:
{
if (lean_obj_tag(v_x_4502_) == 0)
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4512_; 
v_a_4504_ = lean_ctor_get(v_x_4502_, 0);
v_isSharedCheck_4512_ = !lean_is_exclusive(v_x_4502_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4506_ = v_x_4502_;
v_isShared_4507_ = v_isSharedCheck_4512_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v_x_4502_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4512_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4511_; 
v_reuseFailAlloc_4511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4511_, 0, v_a_4504_);
v___x_4509_ = v_reuseFailAlloc_4511_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
lean_object* v___x_4510_; 
v___x_4510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4510_, 0, v___x_4509_);
return v___x_4510_;
}
}
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4522_; 
v_a_4513_ = lean_ctor_get(v_x_4502_, 0);
v_isSharedCheck_4522_ = !lean_is_exclusive(v_x_4502_);
if (v_isSharedCheck_4522_ == 0)
{
v___x_4515_ = v_x_4502_;
v_isShared_4516_ = v_isSharedCheck_4522_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v_x_4502_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4522_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4517_; lean_object* v___x_4519_; 
v___x_4517_ = l_Std_Http_Response_Builder_body___redArg(v_builder_4501_, v_a_4513_);
if (v_isShared_4516_ == 0)
{
lean_ctor_set(v___x_4515_, 0, v___x_4517_);
v___x_4519_ = v___x_4515_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4521_; 
v_reuseFailAlloc_4521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4521_, 0, v___x_4517_);
v___x_4519_ = v_reuseFailAlloc_4521_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
lean_object* v___x_4520_; 
v___x_4520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4519_);
return v___x_4520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___lam__0___boxed(lean_object* v_builder_4523_, lean_object* v_x_4524_, lean_object* v___y_4525_){
_start:
{
lean_object* v_res_4526_; 
v_res_4526_ = l_Std_Http_Response_Builder_stream___lam__0(v_builder_4523_, v_x_4524_);
lean_dec_ref(v_builder_4523_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream(lean_object* v_builder_4527_, lean_object* v_gen_4528_){
_start:
{
lean_object* v___f_4530_; lean_object* v___x_4531_; uint8_t v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___f_4530_ = lean_alloc_closure((void*)(l_Std_Http_Response_Builder_stream___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4530_, 0, v_builder_4527_);
v___x_4531_ = lean_unsigned_to_nat(0u);
v___x_4532_ = 0;
v___x_4533_ = l_Std_Http_Body_stream(v_gen_4528_);
v___x_4534_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4531_, v___x_4532_, v___x_4533_, v___f_4530_);
return v___x_4534_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Response_Builder_stream___boxed(lean_object* v_builder_4535_, lean_object* v_gen_4536_, lean_object* v_a_4537_){
_start:
{
lean_object* v_res_4538_; 
v_res_4538_ = l_Std_Http_Response_Builder_stream(v_builder_4535_, v_gen_4536_);
return v_res_4538_;
}
}
lean_object* runtime_initialize_Std_Sync(uint8_t builtin);
lean_object* runtime_initialize_Std_Async(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ByteArray_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Basic(builtin);
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
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Sync(uint8_t builtin);
lean_object* initialize_Std_Async(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Request(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Response(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Chunk(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Body_Any(uint8_t builtin);
lean_object* initialize_Init_Data_ByteArray_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Body_Stream(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Sync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Response(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Chunk(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Body_Any(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Body_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Body_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Body_Stream(builtin);
}
#ifdef __cplusplus
}
#endif
